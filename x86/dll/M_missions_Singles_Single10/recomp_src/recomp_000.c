#include "recomp.h"

/* OnInit @ 0x10e91005 (5 bytes, 1 insns) */
void f_10e91005(void) {
  FTRACE(0x10e91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91005 jmp 0x10e91090 */
  f_10e91090(); return;
}

/* thunk_FUN_10001030 @ 0x10e9100a (5 bytes, 1 insns) */
void f_10e9100a(void) {
  FTRACE(0x10e9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9100a jmp 0x10e91030 */
  f_10e91030(); return;
}

/* thunk_FUN_10001370 @ 0x10e9100f (5 bytes, 1 insns) */
void f_10e9100f(void) {
  FTRACE(0x10e9100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e9100f jmp 0x10e91370 */
  f_10e91370(); return;
}

/* ProcessScenary @ 0x10e91014 (5 bytes, 1 insns) */
void f_10e91014(void) {
  FTRACE(0x10e91014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91014 jmp 0x10e914a0 */
  f_10e914a0(); return;
}

/* FUN_10001030 @ 0x10e91030 (67 bytes, 26 insns) */
void f_10e91030(void) {
  FTRACE(0x10e91030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91030 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91031 mov ebp, esp */
  EBP = (ESP);
  /* 10e91033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e91036 push ebx */
  push32((uint32_t)(EBX));
  /* 10e91037 push esi */
  push32((uint32_t)(ESI));
  /* 10e91038 push edi */
  push32((uint32_t)(EDI));
  /* 10e91039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e9103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e91041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e91046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e91048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91052 je 0x10e91056 */
  if (C.zf) goto L_10e91056;
  /* 10e91054 jmp 0x10e9105b */
  goto L_10e9105b;
L_10e91056:;
  /* 10e91056 call 0x10e91005 */
  push32(0x10e9105bu); f_10e91005();
L_10e9105b:;
  /* 10e9105b mov eax, 1 */
  EAX = (0x1u);
  /* 10e91060 pop edi */
  EDI = (pop32());
  /* 10e91061 pop esi */
  ESI = (pop32());
  /* 10e91062 pop ebx */
  EBX = (pop32());
  /* 10e91063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91068 call 0x10e91c80 */
  push32(0x10e9106du); f_10e91c80();
  /* 10e9106d mov esp, ebp */
  ESP = (EBP);
  /* 10e9106f pop ebp */
  EBP = (pop32());
  /* 10e91070 ret 0xc */
  ESPCHK(0x10e91030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10e91090 (589 bytes, 168 insns) */
void f_10e91090(void) {
  FTRACE(0x10e91090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91090 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91091 mov ebp, esp */
  EBP = (ESP);
  /* 10e91093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e91096 push ebx */
  push32((uint32_t)(EBX));
  /* 10e91097 push esi */
  push32((uint32_t)(ESI));
  /* 10e91098 push edi */
  push32((uint32_t)(EDI));
  /* 10e91099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e9109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e910a8 mov esi, esp */
  ESI = (ESP);
  /* 10e910aa push 0x10eb9080 */
  push32((uint32_t)(0x10eb9080u));
  /* 10e910af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e910b1 call dword ptr [0x10ec043c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec043c))), 0x10e910b7u);
  /* 10e910b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e910ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e910bc call 0x10e91c80 */
  push32(0x10e910c1u); f_10e91c80();
  /* 10e910c1 mov esi, esp */
  ESI = (ESP);
  /* 10e910c3 push 0x10eb9078 */
  push32((uint32_t)(0x10eb9078u));
  /* 10e910c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e910ca call dword ptr [0x10ec043c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec043c))), 0x10e910d0u);
  /* 10e910d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e910d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e910d5 call 0x10e91c80 */
  push32(0x10e910dau); f_10e91c80();
  /* 10e910da mov esi, esp */
  ESI = (ESP);
  /* 10e910dc push 0x10eb906c */
  push32((uint32_t)(0x10eb906cu));
  /* 10e910e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e910e3 call dword ptr [0x10ec043c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec043c))), 0x10e910e9u);
  /* 10e910e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e910ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e910ee call 0x10e91c80 */
  push32(0x10e910f3u); f_10e91c80();
  /* 10e910f3 mov esi, esp */
  ESI = (ESP);
  /* 10e910f5 call dword ptr [0x10ec0440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0440))), 0x10e910fbu);
  /* 10e910fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e910fd call 0x10e91c80 */
  push32(0x10e91102u); f_10e91c80();
  /* 10e91102 mov esi, esp */
  ESI = (ESP);
  /* 10e91104 push 0x10eb905c */
  push32((uint32_t)(0x10eb905cu));
  /* 10e91109 push 0x10ebe438 */
  push32((uint32_t)(0x10ebe438u));
  /* 10e9110e call dword ptr [0x10ec0444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0444))), 0x10e91114u);
  /* 10e91114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91119 call 0x10e91c80 */
  push32(0x10e9111eu); f_10e91c80();
  /* 10e9111e mov esi, esp */
  ESI = (ESP);
  /* 10e91120 push 0x10eb9058 */
  push32((uint32_t)(0x10eb9058u));
  /* 10e91125 push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e9112a call dword ptr [0x10ec0448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0448))), 0x10e91130u);
  /* 10e91130 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91133 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91135 call 0x10e91c80 */
  push32(0x10e9113au); f_10e91c80();
  /* 10e9113a mov esi, esp */
  ESI = (ESP);
  /* 10e9113c push 0x10eb9054 */
  push32((uint32_t)(0x10eb9054u));
  /* 10e91141 push 0x10ebe410 */
  push32((uint32_t)(0x10ebe410u));
  /* 10e91146 call dword ptr [0x10ec0448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0448))), 0x10e9114cu);
  /* 10e9114c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9114f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91151 call 0x10e91c80 */
  push32(0x10e91156u); f_10e91c80();
  /* 10e91156 mov esi, esp */
  ESI = (ESP);
  /* 10e91158 push 0x10eb9050 */
  push32((uint32_t)(0x10eb9050u));
  /* 10e9115d push 0x10ebe418 */
  push32((uint32_t)(0x10ebe418u));
  /* 10e91162 call dword ptr [0x10ec0448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0448))), 0x10e91168u);
  /* 10e91168 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9116b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9116d call 0x10e91c80 */
  push32(0x10e91172u); f_10e91c80();
  /* 10e91172 mov esi, esp */
  ESI = (ESP);
  /* 10e91174 push 0x10eb904c */
  push32((uint32_t)(0x10eb904cu));
  /* 10e91179 push 0x10ebe420 */
  push32((uint32_t)(0x10ebe420u));
  /* 10e9117e call dword ptr [0x10ec0448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0448))), 0x10e91184u);
  /* 10e91184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91189 call 0x10e91c80 */
  push32(0x10e9118eu); f_10e91c80();
  /* 10e9118e mov esi, esp */
  ESI = (ESP);
  /* 10e91190 push 0x10eb9048 */
  push32((uint32_t)(0x10eb9048u));
  /* 10e91195 push 0x10ebe400 */
  push32((uint32_t)(0x10ebe400u));
  /* 10e9119a call dword ptr [0x10ec044c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec044c))), 0x10e911a0u);
  /* 10e911a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e911a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e911a5 call 0x10e91c80 */
  push32(0x10e911aau); f_10e91c80();
  /* 10e911aa mov esi, esp */
  ESI = (ESP);
  /* 10e911ac push 0x10eb9038 */
  push32((uint32_t)(0x10eb9038u));
  /* 10e911b1 push 0x10ebe440 */
  push32((uint32_t)(0x10ebe440u));
  /* 10e911b6 call dword ptr [0x10ec0450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0450))), 0x10e911bcu);
  /* 10e911bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e911bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e911c1 call 0x10e91c80 */
  push32(0x10e911c6u); f_10e91c80();
  /* 10e911c6 mov esi, esp */
  ESI = (ESP);
  /* 10e911c8 push 0x10eb901c */
  push32((uint32_t)(0x10eb901cu));
  /* 10e911cd push 0x10ebe428 */
  push32((uint32_t)(0x10ebe428u));
  /* 10e911d2 call dword ptr [0x10ec0444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0444))), 0x10e911d8u);
  /* 10e911d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e911db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e911dd call 0x10e91c80 */
  push32(0x10e911e2u); f_10e91c80();
  /* 10e911e2 mov esi, esp */
  ESI = (ESP);
  /* 10e911e4 push 0x10ebe3f0 */
  push32((uint32_t)(0x10ebe3f0u));
  /* 10e911e9 call dword ptr [0x10ec0454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0454))), 0x10e911efu);
  /* 10e911ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e911f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e911f4 call 0x10e91c80 */
  push32(0x10e911f9u); f_10e91c80();
  /* 10e911f9 mov esi, esp */
  ESI = (ESP);
  /* 10e911fb push 0x10ebe3f8 */
  push32((uint32_t)(0x10ebe3f8u));
  /* 10e91200 call dword ptr [0x10ec0454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0454))), 0x10e91206u);
  /* 10e91206 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9120b call 0x10e91c80 */
  push32(0x10e91210u); f_10e91c80();
  /* 10e91210 mov esi, esp */
  ESI = (ESP);
  /* 10e91212 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10e91217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91219 call dword ptr [0x10ec0458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0458))), 0x10e9121fu);
  /* 10e9121f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91222 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91224 call 0x10e91c80 */
  push32(0x10e91229u); f_10e91c80();
  /* 10e91229 mov esi, esp */
  ESI = (ESP);
  /* 10e9122b push 4 */
  push32((uint32_t)(0x4u));
  /* 10e9122d push 0x10ebca30 */
  push32((uint32_t)(0x10ebca30u));
  /* 10e91232 call dword ptr [0x10ec045c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec045c))), 0x10e91238u);
  /* 10e91238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9123b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9123d call 0x10e91c80 */
  push32(0x10e91242u); f_10e91c80();
  /* 10e91242 mov esi, esp */
  ESI = (ESP);
  /* 10e91244 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e91246 push 0x10ebe44c */
  push32((uint32_t)(0x10ebe44cu));
  /* 10e9124b call dword ptr [0x10ec045c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec045c))), 0x10e91251u);
  /* 10e91251 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91254 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91256 call 0x10e91c80 */
  push32(0x10e9125bu); f_10e91c80();
  /* 10e9125b mov esi, esp */
  ESI = (ESP);
  /* 10e9125d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9125f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91261 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e91267u);
  /* 10e91267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9126a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9126c call 0x10e91c80 */
  push32(0x10e91271u); f_10e91c80();
  /* 10e91271 mov esi, esp */
  ESI = (ESP);
  /* 10e91273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91275 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91277 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e9127du);
  /* 10e9127d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91280 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91282 call 0x10e91c80 */
  push32(0x10e91287u); f_10e91c80();
  /* 10e91287 mov esi, esp */
  ESI = (ESP);
  /* 10e91289 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9128b push 3 */
  push32((uint32_t)(0x3u));
  /* 10e9128d call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e91293u);
  /* 10e91293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91296 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91298 call 0x10e91c80 */
  push32(0x10e9129du); f_10e91c80();
  /* 10e9129d mov esi, esp */
  ESI = (ESP);
  /* 10e9129f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e912a1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e912a3 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e912a9u);
  /* 10e912a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e912ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e912ae call 0x10e91c80 */
  push32(0x10e912b3u); f_10e91c80();
  /* 10e912b3 mov esi, esp */
  ESI = (ESP);
  /* 10e912b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e912b7 push 0x10ebe430 */
  push32((uint32_t)(0x10ebe430u));
  /* 10e912bc call dword ptr [0x10ec045c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec045c))), 0x10e912c2u);
  /* 10e912c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e912c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e912c7 call 0x10e91c80 */
  push32(0x10e912ccu); f_10e91c80();
  /* 10e912cc pop edi */
  EDI = (pop32());
  /* 10e912cd pop esi */
  ESI = (pop32());
  /* 10e912ce pop ebx */
  EBX = (pop32());
  /* 10e912cf add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e912d2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e912d4 call 0x10e91c80 */
  push32(0x10e912d9u); f_10e91c80();
  /* 10e912d9 mov esp, ebp */
  ESP = (EBP);
  /* 10e912db pop ebp */
  EBP = (pop32());
  /* 10e912dc ret  */
  ESPCHK(0x10e91090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001370 @ 0x10e91370 (241 bytes, 79 insns) */
void f_10e91370(void) {
  FTRACE(0x10e91370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91370 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91371 mov ebp, esp */
  EBP = (ESP);
  /* 10e91373 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e91376 push ebx */
  push32((uint32_t)(EBX));
  /* 10e91377 push esi */
  push32((uint32_t)(ESI));
  /* 10e91378 push edi */
  push32((uint32_t)(EDI));
  /* 10e91379 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10e9137c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10e91381 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e91386 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e91388 mov esi, esp */
  ESI = (ESP);
  /* 10e9138a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9138c push 0x10ebe438 */
  push32((uint32_t)(0x10ebe438u));
  /* 10e91391 call dword ptr [0x10ec042c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec042c))), 0x10e91397u);
  /* 10e91397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9139a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9139c call 0x10e91c80 */
  push32(0x10e913a1u); f_10e91c80();
  /* 10e913a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e913a3 jle 0x10e91424 */
  if ((C.zf||C.sf!=C.of)) goto L_10e91424;
  /* 10e913a5 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e913ac jmp 0x10e913b7 */
  goto L_10e913b7;
L_10e913ae:;
  /* 10e913ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e913b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e913b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e913b7:;
  /* 10e913b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e913ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e913bd cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e913c0 jge 0x10e91424 */
  if ((C.sf==C.of)) goto L_10e91424;
  /* 10e913c2 mov esi, esp */
  ESI = (ESP);
  /* 10e913c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e913c6 push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e913cb push 2 */
  push32((uint32_t)(0x2u));
  /* 10e913cd push 0x10ebe428 */
  push32((uint32_t)(0x10ebe428u));
  /* 10e913d2 push 0x10ebe440 */
  push32((uint32_t)(0x10ebe440u));
  /* 10e913d7 push 0x10ebe3f0 */
  push32((uint32_t)(0x10ebe3f0u));
  /* 10e913dc call dword ptr [0x10ec0430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0430))), 0x10e913e2u);
  /* 10e913e2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e913e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e913e7 call 0x10e91c80 */
  push32(0x10e913ecu); f_10e91c80();
  /* 10e913ec mov esi, esp */
  ESI = (ESP);
  /* 10e913ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e913f0 push 0x10ebe3f0 */
  push32((uint32_t)(0x10ebe3f0u));
  /* 10e913f5 call dword ptr [0x10ec0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0434))), 0x10e913fbu);
  /* 10e913fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e913fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91400 call 0x10e91c80 */
  push32(0x10e91405u); f_10e91c80();
  /* 10e91405 mov esi, esp */
  ESI = (ESP);
  /* 10e91407 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91409 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9140b push 0x10ebe410 */
  push32((uint32_t)(0x10ebe410u));
  /* 10e91410 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91412 call dword ptr [0x10ec0438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0438))), 0x10e91418u);
  /* 10e91418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9141b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9141d call 0x10e91c80 */
  push32(0x10e91422u); f_10e91c80();
  /* 10e91422 jmp 0x10e913ae */
  goto L_10e913ae;
L_10e91424:;
  /* 10e91424 mov esi, esp */
  ESI = (ESP);
  /* 10e91426 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91428 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9142a call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e91430u);
  /* 10e91430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91435 call 0x10e91c80 */
  push32(0x10e9143au); f_10e91c80();
  /* 10e9143a mov esi, esp */
  ESI = (ESP);
  /* 10e9143c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9143e push 3 */
  push32((uint32_t)(0x3u));
  /* 10e91440 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e91446u);
  /* 10e91446 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91449 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9144b call 0x10e91c80 */
  push32(0x10e91450u); f_10e91c80();
  /* 10e91450 pop edi */
  EDI = (pop32());
  /* 10e91451 pop esi */
  ESI = (pop32());
  /* 10e91452 pop ebx */
  EBX = (pop32());
  /* 10e91453 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91456 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91458 call 0x10e91c80 */
  push32(0x10e9145du); f_10e91c80();
  /* 10e9145d mov esp, ebp */
  ESP = (EBP);
  /* 10e9145f pop ebp */
  EBP = (pop32());
  /* 10e91460 ret  */
  ESPCHK(0x10e91370u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x10e914a0 (1469 bytes, 434 insns) */
void f_10e914a0(void) {
  FTRACE(0x10e914a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e914a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e914a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e914a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e914a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e914a7 push esi */
  push32((uint32_t)(ESI));
  /* 10e914a8 push edi */
  push32((uint32_t)(EDI));
  /* 10e914a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10e914ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10e914b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10e914b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e914b8 mov esi, esp */
  ESI = (ESP);
  /* 10e914ba push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e914bc call dword ptr [0x10ec03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f4))), 0x10e914c2u);
  /* 10e914c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e914c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e914c7 call 0x10e91c80 */
  push32(0x10e914ccu); f_10e91c80();
  /* 10e914cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e914d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e914d3 je 0x10e916a8 */
  if (C.zf) goto L_10e916a8;
  /* 10e914d9 mov esi, esp */
  ESI = (ESP);
  /* 10e914db push 0 */
  push32((uint32_t)(0x0u));
  /* 10e914dd call dword ptr [0x10ec03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f8))), 0x10e914e3u);
  /* 10e914e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e914e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e914e8 call 0x10e91c80 */
  push32(0x10e914edu); f_10e91c80();
  /* 10e914ed mov dword ptr [0x10ebe430], eax */
  w32((uint32_t)(0x10ebe430), (EAX));
  /* 10e914f2 mov esi, esp */
  ESI = (ESP);
  /* 10e914f4 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e914f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e914fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e914fd call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91503u);
  /* 10e91503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91506 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91508 call 0x10e91c80 */
  push32(0x10e9150du); f_10e91c80();
  /* 10e9150d mov esi, esp */
  ESI = (ESP);
  /* 10e9150f push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e91514 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91516 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91518 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e9151eu);
  /* 10e9151e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91523 call 0x10e91c80 */
  push32(0x10e91528u); f_10e91c80();
  /* 10e91528 mov esi, esp */
  ESI = (ESP);
  /* 10e9152a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e9152f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91531 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91533 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91539u);
  /* 10e91539 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9153c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9153e call 0x10e91c80 */
  push32(0x10e91543u); f_10e91c80();
  /* 10e91543 mov esi, esp */
  ESI = (ESP);
  /* 10e91545 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e9154a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9154c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9154e call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91554u);
  /* 10e91554 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91559 call 0x10e91c80 */
  push32(0x10e9155eu); f_10e91c80();
  /* 10e9155e mov esi, esp */
  ESI = (ESP);
  /* 10e91560 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e91565 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e91567 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91569 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e9156fu);
  /* 10e9156f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91574 call 0x10e91c80 */
  push32(0x10e91579u); f_10e91c80();
  /* 10e91579 mov esi, esp */
  ESI = (ESP);
  /* 10e9157b push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e91580 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e91582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91584 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e9158au);
  /* 10e9158a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9158f call 0x10e91c80 */
  push32(0x10e91594u); f_10e91c80();
  /* 10e91594 mov esi, esp */
  ESI = (ESP);
  /* 10e91596 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e9159b push 3 */
  push32((uint32_t)(0x3u));
  /* 10e9159d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9159f call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e915a5u);
  /* 10e915a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e915a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e915aa call 0x10e91c80 */
  push32(0x10e915afu); f_10e91c80();
  /* 10e915af mov esi, esp */
  ESI = (ESP);
  /* 10e915b1 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e915b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e915b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e915ba call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e915c0u);
  /* 10e915c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e915c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e915c5 call 0x10e91c80 */
  push32(0x10e915cau); f_10e91c80();
  /* 10e915ca mov esi, esp */
  ESI = (ESP);
  /* 10e915cc push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e915d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e915d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e915d5 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e915dbu);
  /* 10e915db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e915de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e915e0 call 0x10e91c80 */
  push32(0x10e915e5u); f_10e91c80();
  /* 10e915e5 mov esi, esp */
  ESI = (ESP);
  /* 10e915e7 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e915ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10e915ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e915f0 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e915f6u);
  /* 10e915f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e915f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e915fb call 0x10e91c80 */
  push32(0x10e91600u); f_10e91c80();
  /* 10e91600 mov esi, esp */
  ESI = (ESP);
  /* 10e91602 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e91607 push 5 */
  push32((uint32_t)(0x5u));
  /* 10e91609 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9160b call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91611u);
  /* 10e91611 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91616 call 0x10e91c80 */
  push32(0x10e9161bu); f_10e91c80();
  /* 10e9161b mov esi, esp */
  ESI = (ESP);
  /* 10e9161d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10e91622 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e91624 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91626 call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e9162cu);
  /* 10e9162c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9162f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91631 call 0x10e91c80 */
  push32(0x10e91636u); f_10e91c80();
  /* 10e91636 mov esi, esp */
  ESI = (ESP);
  /* 10e91638 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9163a call dword ptr [0x10ec03f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f8))), 0x10e91640u);
  /* 10e91640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91645 call 0x10e91c80 */
  push32(0x10e9164au); f_10e91c80();
  /* 10e9164a mov esi, esp */
  ESI = (ESP);
  /* 10e9164c push eax */
  push32((uint32_t)(EAX));
  /* 10e9164d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9164f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91651 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91653 push 0x10eb90a8 */
  push32((uint32_t)(0x10eb90a8u));
  /* 10e91658 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9165a call dword ptr [0x10ec0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0400))), 0x10e91660u);
  /* 10e91660 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91663 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91665 call 0x10e91c80 */
  push32(0x10e9166au); f_10e91c80();
  /* 10e9166a mov esi, esp */
  ESI = (ESP);
  /* 10e9166c push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e9166e call dword ptr [0x10ec0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0404))), 0x10e91674u);
  /* 10e91674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91679 call 0x10e91c80 */
  push32(0x10e9167eu); f_10e91c80();
  /* 10e9167e mov esi, esp */
  ESI = (ESP);
  /* 10e91680 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e91682 call dword ptr [0x10ec0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0404))), 0x10e91688u);
  /* 10e91688 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9168b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9168d call 0x10e91c80 */
  push32(0x10e91692u); f_10e91c80();
  /* 10e91692 mov esi, esp */
  ESI = (ESP);
  /* 10e91694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91696 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10e91698 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e9169eu);
  /* 10e9169e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e916a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e916a3 call 0x10e91c80 */
  push32(0x10e916a8u); f_10e91c80();
L_10e916a8:;
  /* 10e916a8 mov esi, esp */
  ESI = (ESP);
  /* 10e916aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10e916ac call dword ptr [0x10ec03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f4))), 0x10e916b2u);
  /* 10e916b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e916b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e916b7 call 0x10e91c80 */
  push32(0x10e916bcu); f_10e91c80();
  /* 10e916bc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e916c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e916c3 je 0x10e9179a */
  if (C.zf) goto L_10e9179a;
  /* 10e916c9 mov esi, esp */
  ESI = (ESP);
  /* 10e916cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10e916cd call dword ptr [0x10ec0408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0408))), 0x10e916d3u);
  /* 10e916d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e916d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e916d8 call 0x10e91c80 */
  push32(0x10e916ddu); f_10e91c80();
  /* 10e916dd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e916e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e916e4 je 0x10e9179a */
  if (C.zf) goto L_10e9179a;
  /* 10e916ea mov esi, esp */
  ESI = (ESP);
  /* 10e916ec push 2 */
  push32((uint32_t)(0x2u));
  /* 10e916ee push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e916f3 call dword ptr [0x10ec040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec040c))), 0x10e916f9u);
  /* 10e916f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e916fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e916fe call 0x10e91c80 */
  push32(0x10e91703u); f_10e91c80();
  /* 10e91703 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91706 jle 0x10e9179a */
  if ((C.zf||C.sf!=C.of)) goto L_10e9179a;
  /* 10e9170c mov eax, dword ptr [0x10ebca30] */
  EAX = (r32((uint32_t)(0x10ebca30)));
  /* 10e91711 push eax */
  push32((uint32_t)(EAX));
  /* 10e91712 call 0x10e9100f */
  push32(0x10e91717u); f_10e9100f();
  /* 10e91717 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9171a mov esi, esp */
  ESI = (ESP);
  /* 10e9171c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10e91721 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91723 call dword ptr [0x10ec0458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0458))), 0x10e91729u);
  /* 10e91729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9172c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9172e call 0x10e91c80 */
  push32(0x10e91733u); f_10e91c80();
  /* 10e91733 cmp dword ptr [0x10ebca30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebca30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9173a jne 0x10e9178b */
  if (!C.zf) goto L_10e9178b;
  /* 10e9173c mov esi, esp */
  ESI = (ESP);
  /* 10e9173e push 0x10eb90a0 */
  push32((uint32_t)(0x10eb90a0u));
  /* 10e91743 call dword ptr [0x10ec0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0410))), 0x10e91749u);
  /* 10e91749 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9174c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9174e call 0x10e91c80 */
  push32(0x10e91753u); f_10e91c80();
  /* 10e91753 mov esi, esp */
  ESI = (ESP);
  /* 10e91755 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e91757 call dword ptr [0x10ec0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0414))), 0x10e9175du);
  /* 10e9175d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91762 call 0x10e91c80 */
  push32(0x10e91767u); f_10e91c80();
  /* 10e91767 cmp dword ptr [0x10ebe430], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe430))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9176e jge 0x10e9178b */
  if ((C.sf==C.of)) goto L_10e9178b;
  /* 10e91770 mov esi, esp */
  ESI = (ESP);
  /* 10e91772 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91774 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91776 push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e9177b call dword ptr [0x10ec0418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0418))), 0x10e91781u);
  /* 10e91781 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91786 call 0x10e91c80 */
  push32(0x10e9178bu); f_10e91c80();
L_10e9178b:;
  /* 10e9178b mov ecx, dword ptr [0x10ebca30] */
  ECX = (r32((uint32_t)(0x10ebca30)));
  /* 10e91791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91794 mov dword ptr [0x10ebca30], ecx */
  w32((uint32_t)(0x10ebca30), (ECX));
L_10e9179a:;
  /* 10e9179a mov esi, esp */
  ESI = (ESP);
  /* 10e9179c push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9179e push 0x10ebe410 */
  push32((uint32_t)(0x10ebe410u));
  /* 10e917a3 call dword ptr [0x10ec040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec040c))), 0x10e917a9u);
  /* 10e917a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e917ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e917ae call 0x10e91c80 */
  push32(0x10e917b3u); f_10e91c80();
  /* 10e917b3 cmp eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e917b6 jle 0x10e91804 */
  if ((C.zf||C.sf!=C.of)) goto L_10e91804;
  /* 10e917b8 mov esi, esp */
  ESI = (ESP);
  /* 10e917ba push 2 */
  push32((uint32_t)(0x2u));
  /* 10e917bc call dword ptr [0x10ec03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f4))), 0x10e917c2u);
  /* 10e917c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e917c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e917c7 call 0x10e91c80 */
  push32(0x10e917ccu); f_10e91c80();
  /* 10e917cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e917d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e917d3 je 0x10e91804 */
  if (C.zf) goto L_10e91804;
  /* 10e917d5 mov esi, esp */
  ESI = (ESP);
  /* 10e917d7 push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10e917dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e917de call dword ptr [0x10ec0458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0458))), 0x10e917e4u);
  /* 10e917e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e917e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e917e9 call 0x10e91c80 */
  push32(0x10e917eeu); f_10e91c80();
  /* 10e917ee mov esi, esp */
  ESI = (ESP);
  /* 10e917f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e917f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e917f4 call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e917fau);
  /* 10e917fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e917fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e917ff call 0x10e91c80 */
  push32(0x10e91804u); f_10e91c80();
L_10e91804:;
  /* 10e91804 mov esi, esp */
  ESI = (ESP);
  /* 10e91806 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91808 call dword ptr [0x10ec0408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0408))), 0x10e9180eu);
  /* 10e9180e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91813 call 0x10e91c80 */
  push32(0x10e91818u); f_10e91c80();
  /* 10e91818 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9181d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9181f je 0x10e918ec */
  if (C.zf) goto L_10e918ec;
  /* 10e91825 mov esi, esp */
  ESI = (ESP);
  /* 10e91827 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91829 push 0x10ebe410 */
  push32((uint32_t)(0x10ebe410u));
  /* 10e9182e call dword ptr [0x10ec040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec040c))), 0x10e91834u);
  /* 10e91834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91839 call 0x10e91c80 */
  push32(0x10e9183eu); f_10e91c80();
  /* 10e9183e cmp eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91841 jle 0x10e918ec */
  if ((C.zf||C.sf!=C.of)) goto L_10e918ec;
  /* 10e91847 mov esi, esp */
  ESI = (ESP);
  /* 10e91849 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9184b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9184d call dword ptr [0x10ec041c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec041c))), 0x10e91853u);
  /* 10e91853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91858 call 0x10e91c80 */
  push32(0x10e9185du); f_10e91c80();
  /* 10e9185d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9185f jle 0x10e918b4 */
  if ((C.zf||C.sf!=C.of)) goto L_10e918b4;
  /* 10e91861 mov esi, esp */
  ESI = (ESP);
  /* 10e91863 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91865 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91867 call dword ptr [0x10ec041c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec041c))), 0x10e9186du);
  /* 10e9186d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91870 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91872 call 0x10e91c80 */
  push32(0x10e91877u); f_10e91c80();
  /* 10e91877 mov edx, dword ptr [0x10ebe44c] */
  EDX = (r32((uint32_t)(0x10ebe44c)));
  /* 10e9187d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9187f mov dword ptr [0x10ebe44c], edx */
  w32((uint32_t)(0x10ebe44c), (EDX));
  /* 10e91885 mov esi, esp */
  ESI = (ESP);
  /* 10e91887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91889 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9188b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9188d call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91893u);
  /* 10e91893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91898 call 0x10e91c80 */
  push32(0x10e9189du); f_10e91c80();
  /* 10e9189d mov esi, esp */
  ESI = (ESP);
  /* 10e9189f push 0x10eb9098 */
  push32((uint32_t)(0x10eb9098u));
  /* 10e918a4 call dword ptr [0x10ec0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0410))), 0x10e918aau);
  /* 10e918aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e918ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e918af call 0x10e91c80 */
  push32(0x10e918b4u); f_10e91c80();
L_10e918b4:;
  /* 10e918b4 mov esi, esp */
  ESI = (ESP);
  /* 10e918b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e918b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e918ba push 0x10ebe410 */
  push32((uint32_t)(0x10ebe410u));
  /* 10e918bf call dword ptr [0x10ec0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0420))), 0x10e918c5u);
  /* 10e918c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e918c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e918ca call 0x10e91c80 */
  push32(0x10e918cfu); f_10e91c80();
  /* 10e918cf mov esi, esp */
  ESI = (ESP);
  /* 10e918d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e918d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e918d5 push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e918da push 2 */
  push32((uint32_t)(0x2u));
  /* 10e918dc call dword ptr [0x10ec0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0424))), 0x10e918e2u);
  /* 10e918e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e918e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e918e7 call 0x10e91c80 */
  push32(0x10e918ecu); f_10e91c80();
L_10e918ec:;
  /* 10e918ec mov esi, esp */
  ESI = (ESP);
  /* 10e918ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10e918f0 call dword ptr [0x10ec03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f4))), 0x10e918f6u);
  /* 10e918f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e918f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e918fb call 0x10e91c80 */
  push32(0x10e91900u); f_10e91c80();
  /* 10e91900 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e91905 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e91907 je 0x10e919c0 */
  if (C.zf) goto L_10e919c0;
  /* 10e9190d mov esi, esp */
  ESI = (ESP);
  /* 10e9190f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91911 push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e91916 call dword ptr [0x10ec040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec040c))), 0x10e9191cu);
  /* 10e9191c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9191f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91921 call 0x10e91c80 */
  push32(0x10e91926u); f_10e91c80();
  /* 10e91926 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91929 jge 0x10e919c0 */
  if ((C.sf==C.of)) goto L_10e919c0;
  /* 10e9192f mov esi, esp */
  ESI = (ESP);
  /* 10e91931 push 0x10eb9090 */
  push32((uint32_t)(0x10eb9090u));
  /* 10e91936 call dword ptr [0x10ec0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0410))), 0x10e9193cu);
  /* 10e9193c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9193f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91941 call 0x10e91c80 */
  push32(0x10e91946u); f_10e91c80();
  /* 10e91946 mov esi, esp */
  ESI = (ESP);
  /* 10e91948 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9194a push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9194c call dword ptr [0x10ec0460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0460))), 0x10e91952u);
  /* 10e91952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91957 call 0x10e91c80 */
  push32(0x10e9195cu); f_10e91c80();
  /* 10e9195c mov esi, esp */
  ESI = (ESP);
  /* 10e9195e push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10e91960 call dword ptr [0x10ec0414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0414))), 0x10e91966u);
  /* 10e91966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9196b call 0x10e91c80 */
  push32(0x10e91970u); f_10e91c80();
  /* 10e91970 mov esi, esp */
  ESI = (ESP);
  /* 10e91972 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10e91974 call dword ptr [0x10ec0404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0404))), 0x10e9197au);
  /* 10e9197a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9197d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9197f call 0x10e91c80 */
  push32(0x10e91984u); f_10e91c80();
  /* 10e91984 cmp dword ptr [0x10ebe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9198b jle 0x10e919c0 */
  if ((C.zf||C.sf!=C.of)) goto L_10e919c0;
  /* 10e9198d mov esi, esp */
  ESI = (ESP);
  /* 10e9198f push 0x10eb9088 */
  push32((uint32_t)(0x10eb9088u));
  /* 10e91994 call dword ptr [0x10ec0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0410))), 0x10e9199au);
  /* 10e9199a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9199d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9199f call 0x10e91c80 */
  push32(0x10e919a4u); f_10e91c80();
  /* 10e919a4 mov esi, esp */
  ESI = (ESP);
  /* 10e919a6 mov eax, dword ptr [0x10ebe44c] */
  EAX = (r32((uint32_t)(0x10ebe44c)));
  /* 10e919ab push eax */
  push32((uint32_t)(EAX));
  /* 10e919ac push 1 */
  push32((uint32_t)(0x1u));
  /* 10e919ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10e919b0 call dword ptr [0x10ec0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0428))), 0x10e919b6u);
  /* 10e919b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e919b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e919bb call 0x10e91c80 */
  push32(0x10e919c0u); f_10e91c80();
L_10e919c0:;
  /* 10e919c0 mov esi, esp */
  ESI = (ESP);
  /* 10e919c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e919c4 call dword ptr [0x10ec03f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03f4))), 0x10e919cau);
  /* 10e919ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e919cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e919cf call 0x10e91c80 */
  push32(0x10e919d4u); f_10e91c80();
  /* 10e919d4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e919d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e919db je 0x10e91a4c */
  if (C.zf) goto L_10e91a4c;
  /* 10e919dd mov esi, esp */
  ESI = (ESP);
  /* 10e919df push 0 */
  push32((uint32_t)(0x0u));
  /* 10e919e1 push 0x10ebe420 */
  push32((uint32_t)(0x10ebe420u));
  /* 10e919e6 call dword ptr [0x10ec040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec040c))), 0x10e919ecu);
  /* 10e919ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e919ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e919f1 call 0x10e91c80 */
  push32(0x10e919f6u); f_10e91c80();
  /* 10e919f6 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e919f9 jle 0x10e91a4c */
  if ((C.zf||C.sf!=C.of)) goto L_10e91a4c;
  /* 10e919fb mov esi, esp */
  ESI = (ESP);
  /* 10e919fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e919ff push 0x10ebe400 */
  push32((uint32_t)(0x10ebe400u));
  /* 10e91a04 call dword ptr [0x10ec0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0434))), 0x10e91a0au);
  /* 10e91a0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91a0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91a0f call 0x10e91c80 */
  push32(0x10e91a14u); f_10e91c80();
  /* 10e91a14 mov esi, esp */
  ESI = (ESP);
  /* 10e91a16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91a1a push 0x10ebe408 */
  push32((uint32_t)(0x10ebe408u));
  /* 10e91a1f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91a21 call dword ptr [0x10ec0438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0438))), 0x10e91a27u);
  /* 10e91a27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91a2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91a2c call 0x10e91c80 */
  push32(0x10e91a31u); f_10e91c80();
  /* 10e91a31 mov esi, esp */
  ESI = (ESP);
  /* 10e91a33 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10e91a38 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e91a3a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e91a3c call dword ptr [0x10ec03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec03fc))), 0x10e91a42u);
  /* 10e91a42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91a45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91a47 call 0x10e91c80 */
  push32(0x10e91a4cu); f_10e91c80();
L_10e91a4c:;
  /* 10e91a4c pop edi */
  EDI = (pop32());
  /* 10e91a4d pop esi */
  ESI = (pop32());
  /* 10e91a4e pop ebx */
  EBX = (pop32());
  /* 10e91a4f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91a52 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91a54 call 0x10e91c80 */
  push32(0x10e91a59u); f_10e91c80();
  /* 10e91a59 mov esp, ebp */
  ESP = (EBP);
  /* 10e91a5b pop ebp */
  EBP = (pop32());
  /* 10e91a5c ret  */
  ESPCHK(0x10e914a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10e91c80 (56 bytes, 28 insns) */
void f_10e91c80(void) {
  FTRACE(0x10e91c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91c80 jne 0x10e91c83 */
  if (!C.zf) goto L_10e91c83;
  /* 10e91c82 ret  */
  ESPCHK(0x10e91c80u, _esp0);
  ESP += 4; return;
L_10e91c83:;
  /* 10e91c83 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91c84 mov ebp, esp */
  EBP = (ESP);
  /* 10e91c86 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e91c89 push eax */
  push32((uint32_t)(EAX));
  /* 10e91c8a push edx */
  push32((uint32_t)(EDX));
  /* 10e91c8b push ebx */
  push32((uint32_t)(EBX));
  /* 10e91c8c push esi */
  push32((uint32_t)(ESI));
  /* 10e91c8d push edi */
  push32((uint32_t)(EDI));
  /* 10e91c8e push 0x10eb90cc */
  push32((uint32_t)(0x10eb90ccu));
  /* 10e91c93 push 0x10eb90c8 */
  push32((uint32_t)(0x10eb90c8u));
  /* 10e91c98 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10e91c9a push 0x10eb90b8 */
  push32((uint32_t)(0x10eb90b8u));
  /* 10e91c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91ca1 call 0x10e92050 */
  push32(0x10e91ca6u); f_10e92050();
  /* 10e91ca6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91ca9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91cac jne 0x10e91caf */
  if (!C.zf) goto L_10e91caf;
  /* 10e91cae int3  */
  x86_unimpl("int3 @ 0x10e91cae");
L_10e91caf:;
  /* 10e91caf pop edi */
  EDI = (pop32());
  /* 10e91cb0 pop esi */
  ESI = (pop32());
  /* 10e91cb1 pop ebx */
  EBX = (pop32());
  /* 10e91cb2 pop edx */
  EDX = (pop32());
  /* 10e91cb3 pop eax */
  EAX = (pop32());
  /* 10e91cb4 mov esp, ebp */
  ESP = (EBP);
  /* 10e91cb6 pop ebp */
  EBP = (pop32());
  /* 10e91cb7 ret  */
  ESPCHK(0x10e91c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10001cc0 @ 0x10e91cc0 (313 bytes, 78 insns) */
void f_10e91cc0(void) {
  FTRACE(0x10e91cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e91cc3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91cc7 jne 0x10e91d87 */
  if (!C.zf) goto L_10e91d87;
  /* 10e91ccd call dword ptr [0x10ec02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02e4))), 0x10e91cd3u);
  /* 10e91cd3 mov dword ptr [0x10ebe480], eax */
  w32((uint32_t)(0x10ebe480), (EAX));
  /* 10e91cd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e91cda call 0x10e95780 */
  push32(0x10e91cdfu); f_10e95780();
  /* 10e91cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e91ce4 jne 0x10e91ced */
  if (!C.zf) goto L_10e91ced;
  /* 10e91ce6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e91ce8 jmp 0x10e91df5 */
  goto L_10e91df5;
L_10e91ced:;
  /* 10e91ced mov eax, dword ptr [0x10ebe480] */
  EAX = (r32((uint32_t)(0x10ebe480)));
  /* 10e91cf2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e91cf5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e91cfa mov dword ptr [0x10ebe48c], eax */
  w32((uint32_t)(0x10ebe48c), (EAX));
  /* 10e91cff mov ecx, dword ptr [0x10ebe480] */
  ECX = (r32((uint32_t)(0x10ebe480)));
  /* 10e91d05 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e91d0b mov dword ptr [0x10ebe488], ecx */
  w32((uint32_t)(0x10ebe488), (ECX));
  /* 10e91d11 mov edx, dword ptr [0x10ebe488] */
  EDX = (r32((uint32_t)(0x10ebe488)));
  /* 10e91d17 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10e91d1a add edx, dword ptr [0x10ebe48c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebe48c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91d20 mov dword ptr [0x10ebe484], edx */
  w32((uint32_t)(0x10ebe484), (EDX));
  /* 10e91d26 mov eax, dword ptr [0x10ebe480] */
  EAX = (r32((uint32_t)(0x10ebe480)));
  /* 10e91d2b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e91d2e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e91d33 mov dword ptr [0x10ebe480], eax */
  w32((uint32_t)(0x10ebe480), (EAX));
  /* 10e91d38 call 0x10e928f0 */
  push32(0x10e91d3du); f_10e928f0();
  /* 10e91d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e91d3f jne 0x10e91d4d */
  if (!C.zf) goto L_10e91d4d;
  /* 10e91d41 call 0x10e957d0 */
  push32(0x10e91d46u); f_10e957d0();
  /* 10e91d46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e91d48 jmp 0x10e91df5 */
  goto L_10e91df5;
L_10e91d4d:;
  /* 10e91d4d call dword ptr [0x10ec02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02e0))), 0x10e91d53u);
  /* 10e91d53 mov dword ptr [0x10ebffcc], eax */
  w32((uint32_t)(0x10ebffcc), (EAX));
  /* 10e91d58 call 0x10e95560 */
  push32(0x10e91d5du); f_10e95560();
  /* 10e91d5d mov dword ptr [0x10ebe468], eax */
  w32((uint32_t)(0x10ebe468), (EAX));
  /* 10e91d62 call 0x10e92ba0 */
  push32(0x10e91d67u); f_10e92ba0();
  /* 10e91d67 call 0x10e95050 */
  push32(0x10e91d6cu); f_10e95050();
  /* 10e91d6c call 0x10e94f00 */
  push32(0x10e91d71u); f_10e94f00();
  /* 10e91d71 call 0x10e926f0 */
  push32(0x10e91d76u); f_10e926f0();
  /* 10e91d76 mov ecx, dword ptr [0x10ebe464] */
  ECX = (r32((uint32_t)(0x10ebe464)));
  /* 10e91d7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91d7f mov dword ptr [0x10ebe464], ecx */
  w32((uint32_t)(0x10ebe464), (ECX));
  /* 10e91d85 jmp 0x10e91df0 */
  goto L_10e91df0;
L_10e91d87:;
  /* 10e91d87 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91d8b jne 0x10e91de0 */
  if (!C.zf) goto L_10e91de0;
  /* 10e91d8d cmp dword ptr [0x10ebe464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91d94 jle 0x10e91dda */
  if ((C.zf||C.sf!=C.of)) goto L_10e91dda;
  /* 10e91d96 mov edx, dword ptr [0x10ebe464] */
  EDX = (r32((uint32_t)(0x10ebe464)));
  /* 10e91d9c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e91d9f mov dword ptr [0x10ebe464], edx */
  w32((uint32_t)(0x10ebe464), (EDX));
  /* 10e91da5 cmp dword ptr [0x10ebe4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91dac jne 0x10e91db3 */
  if (!C.zf) goto L_10e91db3;
  /* 10e91dae call 0x10e92770 */
  push32(0x10e91db3u); f_10e92770();
L_10e91db3:;
  /* 10e91db3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e91db5 call 0x10e944a0 */
  push32(0x10e91dbau); f_10e944a0();
  /* 10e91dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91dbd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e91dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e91dc2 je 0x10e91dc9 */
  if (C.zf) goto L_10e91dc9;
  /* 10e91dc4 call 0x10e94db0 */
  push32(0x10e91dc9u); f_10e94db0();
L_10e91dc9:;
  /* 10e91dc9 call 0x10e92ed0 */
  push32(0x10e91dceu); f_10e92ed0();
  /* 10e91dce call 0x10e92980 */
  push32(0x10e91dd3u); f_10e92980();
  /* 10e91dd3 call 0x10e957d0 */
  push32(0x10e91dd8u); f_10e957d0();
  /* 10e91dd8 jmp 0x10e91dde */
  goto L_10e91dde;
L_10e91dda:;
  /* 10e91dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e91ddc jmp 0x10e91df5 */
  goto L_10e91df5;
L_10e91dde:;
  /* 10e91dde jmp 0x10e91df0 */
  goto L_10e91df0;
L_10e91de0:;
  /* 10e91de0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91de4 jne 0x10e91df0 */
  if (!C.zf) goto L_10e91df0;
  /* 10e91de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91de8 call 0x10e92a70 */
  push32(0x10e91dedu); f_10e92a70();
  /* 10e91ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e91df0:;
  /* 10e91df0 mov eax, 1 */
  EAX = (0x1u);
L_10e91df5:;
  /* 10e91df5 pop ebp */
  EBP = (pop32());
  /* 10e91df6 ret 0xc */
  ESPCHK(0x10e91cc0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10e91e00 (243 bytes, 86 insns) */
void f_10e91e00(void) {
  FTRACE(0x10e91e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91e01 mov ebp, esp */
  EBP = (ESP);
  /* 10e91e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91e04 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e91e0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e0f jne 0x10e91e21 */
  if (!C.zf) goto L_10e91e21;
  /* 10e91e11 cmp dword ptr [0x10ebe464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e18 jne 0x10e91e21 */
  if (!C.zf) goto L_10e91e21;
  /* 10e91e1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e91e1c jmp 0x10e91eed */
  goto L_10e91eed;
L_10e91e21:;
  /* 10e91e21 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e25 je 0x10e91e2d */
  if (C.zf) goto L_10e91e2d;
  /* 10e91e27 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e2b jne 0x10e91e6f */
  if (!C.zf) goto L_10e91e6f;
L_10e91e2d:;
  /* 10e91e2d cmp dword ptr [0x10ebffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e34 je 0x10e91e4b */
  if (C.zf) goto L_10e91e4b;
  /* 10e91e36 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91e39 push eax */
  push32((uint32_t)(EAX));
  /* 10e91e3a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91e3d push ecx */
  push32((uint32_t)(ECX));
  /* 10e91e3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91e41 push edx */
  push32((uint32_t)(EDX));
  /* 10e91e42 call dword ptr [0x10ebffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebffdc))), 0x10e91e48u);
  /* 10e91e48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e91e4b:;
  /* 10e91e4b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e4f je 0x10e91e65 */
  if (C.zf) goto L_10e91e65;
  /* 10e91e51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91e54 push eax */
  push32((uint32_t)(EAX));
  /* 10e91e55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91e58 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91e59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91e5c push edx */
  push32((uint32_t)(EDX));
  /* 10e91e5d call 0x10e91cc0 */
  push32(0x10e91e62u); f_10e91cc0();
  /* 10e91e62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e91e65:;
  /* 10e91e65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e69 jne 0x10e91e6f */
  if (!C.zf) goto L_10e91e6f;
  /* 10e91e6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e91e6d jmp 0x10e91eed */
  goto L_10e91eed;
L_10e91e6f:;
  /* 10e91e6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91e72 push eax */
  push32((uint32_t)(EAX));
  /* 10e91e73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91e76 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91e7a push edx */
  push32((uint32_t)(EDX));
  /* 10e91e7b call 0x10e9100a */
  push32(0x10e91e80u); f_10e9100a();
  /* 10e91e80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e91e83 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e87 jne 0x10e91e9e */
  if (!C.zf) goto L_10e91e9e;
  /* 10e91e89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91e8d jne 0x10e91e9e */
  if (!C.zf) goto L_10e91e9e;
  /* 10e91e8f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91e92 push eax */
  push32((uint32_t)(EAX));
  /* 10e91e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e91e95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91e98 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91e99 call 0x10e91cc0 */
  push32(0x10e91e9eu); f_10e91cc0();
L_10e91e9e:;
  /* 10e91e9e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91ea2 je 0x10e91eaa */
  if (C.zf) goto L_10e91eaa;
  /* 10e91ea4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91ea8 jne 0x10e91eea */
  if (!C.zf) goto L_10e91eea;
L_10e91eaa:;
  /* 10e91eaa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91ead push edx */
  push32((uint32_t)(EDX));
  /* 10e91eae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91eb1 push eax */
  push32((uint32_t)(EAX));
  /* 10e91eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91eb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91eb6 call 0x10e91cc0 */
  push32(0x10e91ebbu); f_10e91cc0();
  /* 10e91ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e91ebd jne 0x10e91ec6 */
  if (!C.zf) goto L_10e91ec6;
  /* 10e91ebf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e91ec6:;
  /* 10e91ec6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91eca je 0x10e91eea */
  if (C.zf) goto L_10e91eea;
  /* 10e91ecc cmp dword ptr [0x10ebffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91ed3 je 0x10e91eea */
  if (C.zf) goto L_10e91eea;
  /* 10e91ed5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e91ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10e91ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91edc push eax */
  push32((uint32_t)(EAX));
  /* 10e91edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91ee1 call dword ptr [0x10ebffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebffdc))), 0x10e91ee7u);
  /* 10e91ee7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e91eea:;
  /* 10e91eea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e91eed:;
  /* 10e91eed mov esp, ebp */
  ESP = (EBP);
  /* 10e91eef pop ebp */
  EBP = (pop32());
  /* 10e91ef0 ret 0xc */
  ESPCHK(0x10e91e00u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10e91f00 (58 bytes, 18 insns) */
void f_10e91f00(void) {
  FTRACE(0x10e91f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91f01 mov ebp, esp */
  EBP = (ESP);
  /* 10e91f03 cmp dword ptr [0x10ebe470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f0a je 0x10e91f1e */
  if (C.zf) goto L_10e91f1e;
  /* 10e91f0c cmp dword ptr [0x10ebe470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f13 jne 0x10e91f23 */
  if (!C.zf) goto L_10e91f23;
  /* 10e91f15 cmp dword ptr [0x10ebe474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f1c jne 0x10e91f23 */
  if (!C.zf) goto L_10e91f23;
L_10e91f1e:;
  /* 10e91f1e call 0x10e95870 */
  push32(0x10e91f23u); f_10e95870();
L_10e91f23:;
  /* 10e91f23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91f26 push eax */
  push32((uint32_t)(EAX));
  /* 10e91f27 call 0x10e958c0 */
  push32(0x10e91f2cu); f_10e958c0();
  /* 10e91f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91f2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e91f34 call dword ptr [0x10ebca34] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebca34))), 0x10e91f3au);
  /* 10e91f3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e91f3d pop ebp */
  EBP = (pop32());
  /* 10e91f3e ret  */
  ESPCHK(0x10e91f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f40 @ 0x10e91f40 (11 bytes, 5 insns) */
void f_10e91f40(void) {
  FTRACE(0x10e91f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91f41 mov ebp, esp */
  EBP = (ESP);
  /* 10e91f43 call dword ptr [0x10ec02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02e8))), 0x10e91f49u);
  /* 10e91f49 pop ebp */
  EBP = (pop32());
  /* 10e91f4a ret  */
  ESPCHK(0x10e91f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f50 @ 0x10e91f50 (87 bytes, 30 insns) */
void f_10e91f50(void) {
  FTRACE(0x10e91f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91f51 mov ebp, esp */
  EBP = (ESP);
  /* 10e91f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91f54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f58 jl 0x10e91f60 */
  if ((C.sf!=C.of)) goto L_10e91f60;
  /* 10e91f5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f5e jl 0x10e91f65 */
  if ((C.sf!=C.of)) goto L_10e91f65;
L_10e91f60:;
  /* 10e91f60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e91f63 jmp 0x10e91fa3 */
  goto L_10e91fa3;
L_10e91f65:;
  /* 10e91f65 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91f69 jne 0x10e91f77 */
  if (!C.zf) goto L_10e91f77;
  /* 10e91f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91f6e mov eax, dword ptr [eax*4 + 0x10ebca3c] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10ebca3c)));
  /* 10e91f75 jmp 0x10e91fa3 */
  goto L_10e91fa3;
L_10e91f77:;
  /* 10e91f77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91f7a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10e91f7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e91f7f je 0x10e91f86 */
  if (C.zf) goto L_10e91f86;
  /* 10e91f81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e91f84 jmp 0x10e91fa3 */
  goto L_10e91fa3;
L_10e91f86:;
  /* 10e91f86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91f89 mov eax, dword ptr [edx*4 + 0x10ebca3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebca3c)));
  /* 10e91f90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e91f93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91f96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e91f99 mov dword ptr [ecx*4 + 0x10ebca3c], edx */
  w32((uint32_t)(ECX*4 + 0x10ebca3c), (EDX));
  /* 10e91fa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e91fa3:;
  /* 10e91fa3 mov esp, ebp */
  ESP = (EBP);
  /* 10e91fa5 pop ebp */
  EBP = (pop32());
  /* 10e91fa6 ret  */
  ESPCHK(0x10e91f50u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10e91fb0 (126 bytes, 38 insns) */
void f_10e91fb0(void) {
  FTRACE(0x10e91fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e91fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e91fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10e91fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e91fb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91fb8 jl 0x10e91fc0 */
  if ((C.sf!=C.of)) goto L_10e91fc0;
  /* 10e91fba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91fbe jl 0x10e91fc7 */
  if ((C.sf!=C.of)) goto L_10e91fc7;
L_10e91fc0:;
  /* 10e91fc0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10e91fc5 jmp 0x10e9202a */
  goto L_10e9202a;
L_10e91fc7:;
  /* 10e91fc7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91fcb jne 0x10e91fd9 */
  if (!C.zf) goto L_10e91fd9;
  /* 10e91fcd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91fd0 mov eax, dword ptr [eax*4 + 0x10ebca48] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10ebca48)));
  /* 10e91fd7 jmp 0x10e9202a */
  goto L_10e9202a;
L_10e91fd9:;
  /* 10e91fd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91fdc mov edx, dword ptr [ecx*4 + 0x10ebca48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca48)));
  /* 10e91fe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e91fe6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e91fea jne 0x10e92000 */
  if (!C.zf) goto L_10e92000;
  /* 10e91fec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10e91fee call dword ptr [0x10ec02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02ec))), 0x10e91ff4u);
  /* 10e91ff4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e91ff7 mov dword ptr [ecx*4 + 0x10ebca48], eax */
  w32((uint32_t)(ECX*4 + 0x10ebca48), (EAX));
  /* 10e91ffe jmp 0x10e92027 */
  goto L_10e92027;
L_10e92000:;
  /* 10e92000 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92004 jne 0x10e9201a */
  if (!C.zf) goto L_10e9201a;
  /* 10e92006 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e92008 call dword ptr [0x10ec02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02ec))), 0x10e9200eu);
  /* 10e9200e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92011 mov dword ptr [edx*4 + 0x10ebca48], eax */
  w32((uint32_t)(EDX*4 + 0x10ebca48), (EAX));
  /* 10e92018 jmp 0x10e92027 */
  goto L_10e92027;
L_10e9201a:;
  /* 10e9201a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9201d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e92020 mov dword ptr [eax*4 + 0x10ebca48], ecx */
  w32((uint32_t)(EAX*4 + 0x10ebca48), (ECX));
L_10e92027:;
  /* 10e92027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9202a:;
  /* 10e9202a mov esp, ebp */
  ESP = (EBP);
  /* 10e9202c pop ebp */
  EBP = (pop32());
  /* 10e9202d ret  */
  ESPCHK(0x10e91fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002030 @ 0x10e92030 (28 bytes, 11 insns) */
void f_10e92030(void) {
  FTRACE(0x10e92030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92030 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92031 mov ebp, esp */
  EBP = (ESP);
  /* 10e92033 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92034 mov eax, dword ptr [0x10ebffc0] */
  EAX = (r32((uint32_t)(0x10ebffc0)));
  /* 10e92039 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9203c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9203f mov dword ptr [0x10ebffc0], ecx */
  w32((uint32_t)(0x10ebffc0), (ECX));
  /* 10e92045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92048 mov esp, ebp */
  ESP = (EBP);
  /* 10e9204a pop ebp */
  EBP = (pop32());
  /* 10e9204b ret  */
  ESPCHK(0x10e92030u, _esp0);
  ESP += 4; return;
}

/* FUN_10002050 @ 0x10e92050 (912 bytes, 248 insns) */
void f_10e92050(void) {
  FTRACE(0x10e92050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92050 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92051 mov ebp, esp */
  EBP = (ESP);
  /* 10e92053 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10e92058 call 0x10e96130 */
  push32(0x10e9205du); f_10e96130();
  /* 10e9205d push edi */
  push32((uint32_t)(EDI));
  /* 10e9205e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10e92065 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e9206a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9206c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10e92072 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e92074 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e92076 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e92077 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10e9207e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e92083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e92085 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10e9208b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e9208d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e9208f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e92090 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10e92097 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10e9209c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9209e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10e920a4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e920a6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10e920a8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10e920a9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10e920ac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10e920b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e920b6 jl 0x10e920be */
  if ((C.sf!=C.of)) goto L_10e920be;
  /* 10e920b8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e920bc jl 0x10e920c6 */
  if ((C.sf!=C.of)) goto L_10e920c6;
L_10e920be:;
  /* 10e920be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e920c1 jmp 0x10e923db */
  goto L_10e923db;
L_10e920c6:;
  /* 10e920c6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e920ca jne 0x10e92170 */
  if (!C.zf) goto L_10e92170;
  /* 10e920d0 push 0x10ebca38 */
  push32((uint32_t)(0x10ebca38u));
  /* 10e920d5 call dword ptr [0x10ec0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0304))), 0x10e920dbu);
  /* 10e920db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e920dd jle 0x10e92170 */
  if ((C.zf||C.sf!=C.of)) goto L_10e92170;
  /* 10e920e3 cmp dword ptr [0x10ebe478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e920ea jne 0x10e9212e */
  if (!C.zf) goto L_10e9212e;
  /* 10e920ec push 0x10eb9274 */
  push32((uint32_t)(0x10eb9274u));
  /* 10e920f1 call dword ptr [0x10ec0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0300))), 0x10e920f7u);
  /* 10e920f7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10e920fd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92104 je 0x10e92126 */
  if (C.zf) goto L_10e92126;
  /* 10e92106 push 0x10eb9268 */
  push32((uint32_t)(0x10eb9268u));
  /* 10e9210b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10e92111 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92112 call dword ptr [0x10ec02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02fc))), 0x10e92118u);
  /* 10e92118 mov dword ptr [0x10ebe478], eax */
  w32((uint32_t)(0x10ebe478), (EAX));
  /* 10e9211d cmp dword ptr [0x10ebe478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92124 jne 0x10e9212e */
  if (!C.zf) goto L_10e9212e;
L_10e92126:;
  /* 10e92126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e92129 jmp 0x10e923db */
  goto L_10e923db;
L_10e9212e:;
  /* 10e9212e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e92131 push edx */
  push32((uint32_t)(EDX));
  /* 10e92132 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e92135 push eax */
  push32((uint32_t)(EAX));
  /* 10e92136 push 0x10eb9234 */
  push32((uint32_t)(0x10eb9234u));
  /* 10e9213b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e92141 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92142 call dword ptr [0x10ebe478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe478))), 0x10e92148u);
  /* 10e92148 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9214b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e92151 push edx */
  push32((uint32_t)(EDX));
  /* 10e92152 call dword ptr [0x10ec02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f8))), 0x10e92158u);
  /* 10e92158 push 0x10ebca38 */
  push32((uint32_t)(0x10ebca38u));
  /* 10e9215d call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e92163u);
  /* 10e92163 call 0x10e91f40 */
  push32(0x10e92168u); f_10e91f40();
  /* 10e92168 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9216b jmp 0x10e923db */
  goto L_10e923db;
L_10e92170:;
  /* 10e92170 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92174 je 0x10e921ad */
  if (C.zf) goto L_10e921ad;
  /* 10e92176 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10e9217c push eax */
  push32((uint32_t)(EAX));
  /* 10e9217d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e92180 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92181 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10e92186 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10e9218c push edx */
  push32((uint32_t)(EDX));
  /* 10e9218d call 0x10e96030 */
  push32(0x10e92192u); f_10e96030();
  /* 10e92192 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92195 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92197 jge 0x10e921ad */
  if ((C.sf==C.of)) goto L_10e921ad;
  /* 10e92199 push 0x10eb9208 */
  push32((uint32_t)(0x10eb9208u));
  /* 10e9219e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e921a4 push eax */
  push32((uint32_t)(EAX));
  /* 10e921a5 call 0x10e95f40 */
  push32(0x10e921aau); f_10e95f40();
  /* 10e921aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e921ad:;
  /* 10e921ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e921b1 jne 0x10e921e5 */
  if (!C.zf) goto L_10e921e5;
  /* 10e921b3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e921b7 je 0x10e921c5 */
  if (C.zf) goto L_10e921c5;
  /* 10e921b9 mov dword ptr [ebp - 0x3028], 0x10eb91f4 */
  w32((uint32_t)(EBP + -0x3028), (0x10eb91f4u));
  /* 10e921c3 jmp 0x10e921cf */
  goto L_10e921cf;
L_10e921c5:;
  /* 10e921c5 mov dword ptr [ebp - 0x3028], 0x10eb91e0 */
  w32((uint32_t)(EBP + -0x3028), (0x10eb91e0u));
L_10e921cf:;
  /* 10e921cf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10e921d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e921d6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e921dc push edx */
  push32((uint32_t)(EDX));
  /* 10e921dd call 0x10e95f40 */
  push32(0x10e921e2u); f_10e95f40();
  /* 10e921e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e921e5:;
  /* 10e921e5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10e921eb push eax */
  push32((uint32_t)(EAX));
  /* 10e921ec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e921f2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e921f3 call 0x10e95f50 */
  push32(0x10e921f8u); f_10e95f50();
  /* 10e921f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e921fb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e921ff jne 0x10e9223a */
  if (!C.zf) goto L_10e9223a;
  /* 10e92201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92204 mov eax, dword ptr [edx*4 + 0x10ebca3c] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebca3c)));
  /* 10e9220b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9220e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92210 je 0x10e92226 */
  if (C.zf) goto L_10e92226;
  /* 10e92212 push 0x10eb91dc */
  push32((uint32_t)(0x10eb91dcu));
  /* 10e92217 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10e9221d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9221e call 0x10e95f50 */
  push32(0x10e92223u); f_10e95f50();
  /* 10e92223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92226:;
  /* 10e92226 push 0x10eb91d8 */
  push32((uint32_t)(0x10eb91d8u));
  /* 10e9222b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e92231 push edx */
  push32((uint32_t)(EDX));
  /* 10e92232 call 0x10e95f50 */
  push32(0x10e92237u); f_10e95f50();
  /* 10e92237 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9223a:;
  /* 10e9223a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9223e je 0x10e92282 */
  if (C.zf) goto L_10e92282;
  /* 10e92240 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10e92246 push eax */
  push32((uint32_t)(EAX));
  /* 10e92247 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9224a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9224b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9224e push edx */
  push32((uint32_t)(EDX));
  /* 10e9224f push 0x10eb91cc */
  push32((uint32_t)(0x10eb91ccu));
  /* 10e92254 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e92259 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e9225f push eax */
  push32((uint32_t)(EAX));
  /* 10e92260 call 0x10e95e40 */
  push32(0x10e92265u); f_10e95e40();
  /* 10e92265 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92268 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9226a jge 0x10e92280 */
  if ((C.sf==C.of)) goto L_10e92280;
  /* 10e9226c push 0x10eb9208 */
  push32((uint32_t)(0x10eb9208u));
  /* 10e92271 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10e92277 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92278 call 0x10e95f40 */
  push32(0x10e9227du); f_10e95f40();
  /* 10e9227d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92280:;
  /* 10e92280 jmp 0x10e92298 */
  goto L_10e92298;
L_10e92282:;
  /* 10e92282 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10e92288 push edx */
  push32((uint32_t)(EDX));
  /* 10e92289 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e9228f push eax */
  push32((uint32_t)(EAX));
  /* 10e92290 call 0x10e95f40 */
  push32(0x10e92295u); f_10e95f40();
  /* 10e92295 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92298:;
  /* 10e92298 cmp dword ptr [0x10ebffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9229f je 0x10e922dc */
  if (C.zf) goto L_10e922dc;
  /* 10e922a1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10e922a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e922a8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e922ae push edx */
  push32((uint32_t)(EDX));
  /* 10e922af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e922b2 push eax */
  push32((uint32_t)(EAX));
  /* 10e922b3 call dword ptr [0x10ebffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebffc0))), 0x10e922b9u);
  /* 10e922b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e922bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e922be je 0x10e922dc */
  if (C.zf) goto L_10e922dc;
  /* 10e922c0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e922c4 jne 0x10e922d1 */
  if (!C.zf) goto L_10e922d1;
  /* 10e922c6 push 0x10ebca38 */
  push32((uint32_t)(0x10ebca38u));
  /* 10e922cb call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e922d1u);
L_10e922d1:;
  /* 10e922d1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e922d7 jmp 0x10e923db */
  goto L_10e923db;
L_10e922dc:;
  /* 10e922dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e922df mov edx, dword ptr [ecx*4 + 0x10ebca3c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca3c)));
  /* 10e922e6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e922e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e922eb je 0x10e9232b */
  if (C.zf) goto L_10e9232b;
  /* 10e922ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e922f0 cmp dword ptr [eax*4 + 0x10ebca48], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10ebca48))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e922f8 je 0x10e9232b */
  if (C.zf) goto L_10e9232b;
  /* 10e922fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e922fc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10e92302 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92303 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e92309 push edx */
  push32((uint32_t)(EDX));
  /* 10e9230a call 0x10e95dc0 */
  push32(0x10e9230fu); f_10e95dc0();
  /* 10e9230f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92312 push eax */
  push32((uint32_t)(EAX));
  /* 10e92313 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10e92319 push eax */
  push32((uint32_t)(EAX));
  /* 10e9231a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9231d mov edx, dword ptr [ecx*4 + 0x10ebca48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca48)));
  /* 10e92324 push edx */
  push32((uint32_t)(EDX));
  /* 10e92325 call dword ptr [0x10ec02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f0))), 0x10e9232bu);
L_10e9232b:;
  /* 10e9232b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9232e mov ecx, dword ptr [eax*4 + 0x10ebca3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebca3c)));
  /* 10e92335 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e92338 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9233a je 0x10e92349 */
  if (C.zf) goto L_10e92349;
  /* 10e9233c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10e92342 push edx */
  push32((uint32_t)(EDX));
  /* 10e92343 call dword ptr [0x10ec02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f8))), 0x10e92349u);
L_10e92349:;
  /* 10e92349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9234c mov ecx, dword ptr [eax*4 + 0x10ebca3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebca3c)));
  /* 10e92353 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e92356 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e92358 je 0x10e923c8 */
  if (C.zf) goto L_10e923c8;
  /* 10e9235a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9235e je 0x10e9237d */
  if (C.zf) goto L_10e9237d;
  /* 10e92360 push 0xa */
  push32((uint32_t)(0xau));
  /* 10e92362 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10e92368 push edx */
  push32((uint32_t)(EDX));
  /* 10e92369 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9236c push eax */
  push32((uint32_t)(EAX));
  /* 10e9236d call 0x10e95ad0 */
  push32(0x10e92372u); f_10e95ad0();
  /* 10e92372 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92375 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10e9237b jmp 0x10e92387 */
  goto L_10e92387;
L_10e9237d:;
  /* 10e9237d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10e92387:;
  /* 10e92387 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10e9238d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9238e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e92391 push edx */
  push32((uint32_t)(EDX));
  /* 10e92392 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10e92398 push eax */
  push32((uint32_t)(EAX));
  /* 10e92399 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9239c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9239d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e923a0 push edx */
  push32((uint32_t)(EDX));
  /* 10e923a1 call 0x10e923e0 */
  push32(0x10e923a6u); f_10e923e0();
  /* 10e923a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e923a9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10e923af cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e923b3 jne 0x10e923c0 */
  if (!C.zf) goto L_10e923c0;
  /* 10e923b5 push 0x10ebca38 */
  push32((uint32_t)(0x10ebca38u));
  /* 10e923ba call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e923c0u);
L_10e923c0:;
  /* 10e923c0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10e923c6 jmp 0x10e923db */
  goto L_10e923db;
L_10e923c8:;
  /* 10e923c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e923cc jne 0x10e923d9 */
  if (!C.zf) goto L_10e923d9;
  /* 10e923ce push 0x10ebca38 */
  push32((uint32_t)(0x10ebca38u));
  /* 10e923d3 call dword ptr [0x10ec02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f4))), 0x10e923d9u);
L_10e923d9:;
  /* 10e923d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e923db:;
  /* 10e923db pop edi */
  EDI = (pop32());
  /* 10e923dc mov esp, ebp */
  ESP = (EBP);
  /* 10e923de pop ebp */
  EBP = (pop32());
  /* 10e923df ret  */
  ESPCHK(0x10e92050u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e0 @ 0x10e923e0 (780 bytes, 197 insns) */
void f_10e923e0(void) {
  FTRACE(0x10e923e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e923e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e923e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e923e3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10e923e8 call 0x10e96130 */
  push32(0x10e923edu); f_10e96130();
L_10e923ed:;
  /* 10e923ed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e923f1 jne 0x10e92418 */
  if (!C.zf) goto L_10e92418;
  /* 10e923f3 push 0x10eb93c4 */
  push32((uint32_t)(0x10eb93c4u));
  /* 10e923f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e923fa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10e923ff push 0x10eb93b8 */
  push32((uint32_t)(0x10eb93b8u));
  /* 10e92404 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92406 call 0x10e92050 */
  push32(0x10e9240bu); f_10e92050();
  /* 10e9240b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9240e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92411 jne 0x10e92418 */
  if (!C.zf) goto L_10e92418;
  /* 10e92413 call 0x10e91f40 */
  push32(0x10e92418u); f_10e91f40();
L_10e92418:;
  /* 10e92418 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9241a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9241c jne 0x10e923ed */
  if (!C.zf) goto L_10e923ed;
  /* 10e9241e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e92423 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10e92429 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9242a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9242c call dword ptr [0x10ec0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0308))), 0x10e92432u);
  /* 10e92432 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92434 jne 0x10e9244a */
  if (!C.zf) goto L_10e9244a;
  /* 10e92436 push 0x10eb93a0 */
  push32((uint32_t)(0x10eb93a0u));
  /* 10e9243b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10e92441 push edx */
  push32((uint32_t)(EDX));
  /* 10e92442 call 0x10e95f40 */
  push32(0x10e92447u); f_10e95f40();
  /* 10e92447 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9244a:;
  /* 10e9244a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10e92450 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e92453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92456 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92457 call 0x10e95dc0 */
  push32(0x10e9245cu); f_10e95dc0();
  /* 10e9245c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9245f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92462 jbe 0x10e9248d */
  if ((C.cf||C.zf)) goto L_10e9248d;
  /* 10e92464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92467 push edx */
  push32((uint32_t)(EDX));
  /* 10e92468 call 0x10e95dc0 */
  push32(0x10e9246du); f_10e95dc0();
  /* 10e9246d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92470 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92473 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e92477 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9247a push 3 */
  push32((uint32_t)(0x3u));
  /* 10e9247c push 0x10eb939c */
  push32((uint32_t)(0x10eb939cu));
  /* 10e92481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92484 push eax */
  push32((uint32_t)(EAX));
  /* 10e92485 call 0x10e967b0 */
  push32(0x10e9248au); f_10e967b0();
  /* 10e9248a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9248d:;
  /* 10e9248d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e92490 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10e92496 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9249d je 0x10e924e8 */
  if (C.zf) goto L_10e924e8;
  /* 10e9249f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e924a5 push edx */
  push32((uint32_t)(EDX));
  /* 10e924a6 call 0x10e95dc0 */
  push32(0x10e924abu); f_10e95dc0();
  /* 10e924ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e924ae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e924b1 jbe 0x10e924e8 */
  if ((C.cf||C.zf)) goto L_10e924e8;
  /* 10e924b3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e924b9 push eax */
  push32((uint32_t)(EAX));
  /* 10e924ba call 0x10e95dc0 */
  push32(0x10e924bfu); f_10e95dc0();
  /* 10e924bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e924c2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e924c8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10e924cc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10e924d2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e924d4 push 0x10eb939c */
  push32((uint32_t)(0x10eb939cu));
  /* 10e924d9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e924df push eax */
  push32((uint32_t)(EAX));
  /* 10e924e0 call 0x10e967b0 */
  push32(0x10e924e5u); f_10e967b0();
  /* 10e924e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e924e8:;
  /* 10e924e8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e924ec jne 0x10e924fa */
  if (!C.zf) goto L_10e924fa;
  /* 10e924ee mov dword ptr [ebp - 0x1114], 0x10eb9328 */
  w32((uint32_t)(EBP + -0x1114), (0x10eb9328u));
  /* 10e924f8 jmp 0x10e92504 */
  goto L_10e92504;
L_10e924fa:;
  /* 10e924fa mov dword ptr [ebp - 0x1114], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1114), (0x10eb90c8u));
L_10e92504:;
  /* 10e92504 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e92507 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e9250a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9250c je 0x10e92519 */
  if (C.zf) goto L_10e92519;
  /* 10e9250e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e92511 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10e92517 jmp 0x10e92523 */
  goto L_10e92523;
L_10e92519:;
  /* 10e92519 mov dword ptr [ebp - 0x1118], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1118), (0x10eb90c8u));
L_10e92523:;
  /* 10e92523 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e92526 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e92529 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9252b je 0x10e9253f */
  if (C.zf) goto L_10e9253f;
  /* 10e9252d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92531 jne 0x10e9253f */
  if (!C.zf) goto L_10e9253f;
  /* 10e92533 mov dword ptr [ebp - 0x111c], 0x10eb9318 */
  w32((uint32_t)(EBP + -0x111c), (0x10eb9318u));
  /* 10e9253d jmp 0x10e92549 */
  goto L_10e92549;
L_10e9253f:;
  /* 10e9253f mov dword ptr [ebp - 0x111c], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x111c), (0x10eb90c8u));
L_10e92549:;
  /* 10e92549 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9254c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9254f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e92551 je 0x10e9255f */
  if (C.zf) goto L_10e9255f;
  /* 10e92553 mov dword ptr [ebp - 0x1120], 0x10eb9314 */
  w32((uint32_t)(EBP + -0x1120), (0x10eb9314u));
  /* 10e9255d jmp 0x10e92569 */
  goto L_10e92569;
L_10e9255f:;
  /* 10e9255f mov dword ptr [ebp - 0x1120], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1120), (0x10eb90c8u));
L_10e92569:;
  /* 10e92569 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9256d je 0x10e9257a */
  if (C.zf) goto L_10e9257a;
  /* 10e9256f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e92572 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10e92578 jmp 0x10e92584 */
  goto L_10e92584;
L_10e9257a:;
  /* 10e9257a mov dword ptr [ebp - 0x1124], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1124), (0x10eb90c8u));
L_10e92584:;
  /* 10e92584 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92588 je 0x10e92596 */
  if (C.zf) goto L_10e92596;
  /* 10e9258a mov dword ptr [ebp - 0x1128], 0x10eb930c */
  w32((uint32_t)(EBP + -0x1128), (0x10eb930cu));
  /* 10e92594 jmp 0x10e925a0 */
  goto L_10e925a0;
L_10e92596:;
  /* 10e92596 mov dword ptr [ebp - 0x1128], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1128), (0x10eb90c8u));
L_10e925a0:;
  /* 10e925a0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e925a4 je 0x10e925b1 */
  if (C.zf) goto L_10e925b1;
  /* 10e925a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e925a9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10e925af jmp 0x10e925bb */
  goto L_10e925bb;
L_10e925b1:;
  /* 10e925b1 mov dword ptr [ebp - 0x112c], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x112c), (0x10eb90c8u));
L_10e925bb:;
  /* 10e925bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e925bf je 0x10e925cd */
  if (C.zf) goto L_10e925cd;
  /* 10e925c1 mov dword ptr [ebp - 0x1130], 0x10eb9304 */
  w32((uint32_t)(EBP + -0x1130), (0x10eb9304u));
  /* 10e925cb jmp 0x10e925d7 */
  goto L_10e925d7;
L_10e925cd:;
  /* 10e925cd mov dword ptr [ebp - 0x1130], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1130), (0x10eb90c8u));
L_10e925d7:;
  /* 10e925d7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e925de je 0x10e925ee */
  if (C.zf) goto L_10e925ee;
  /* 10e925e0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10e925e6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10e925ec jmp 0x10e925f8 */
  goto L_10e925f8;
L_10e925ee:;
  /* 10e925ee mov dword ptr [ebp - 0x1134], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1134), (0x10eb90c8u));
L_10e925f8:;
  /* 10e925f8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e925ff je 0x10e9260d */
  if (C.zf) goto L_10e9260d;
  /* 10e92601 mov dword ptr [ebp - 0x1138], 0x10eb92f8 */
  w32((uint32_t)(EBP + -0x1138), (0x10eb92f8u));
  /* 10e9260b jmp 0x10e92617 */
  goto L_10e92617;
L_10e9260d:;
  /* 10e9260d mov dword ptr [ebp - 0x1138], 0x10eb90c8 */
  w32((uint32_t)(EBP + -0x1138), (0x10eb90c8u));
L_10e92617:;
  /* 10e92617 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10e9261d push edx */
  push32((uint32_t)(EDX));
  /* 10e9261e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10e92624 push eax */
  push32((uint32_t)(EAX));
  /* 10e92625 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10e9262b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9262c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10e92632 push edx */
  push32((uint32_t)(EDX));
  /* 10e92633 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10e92639 push eax */
  push32((uint32_t)(EAX));
  /* 10e9263a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10e92640 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92641 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10e92647 push edx */
  push32((uint32_t)(EDX));
  /* 10e92648 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10e9264e push eax */
  push32((uint32_t)(EAX));
  /* 10e9264f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10e92655 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92656 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10e9265c push edx */
  push32((uint32_t)(EDX));
  /* 10e9265d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92660 push eax */
  push32((uint32_t)(EAX));
  /* 10e92661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92664 mov edx, dword ptr [ecx*4 + 0x10ebca54] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca54)));
  /* 10e9266b push edx */
  push32((uint32_t)(EDX));
  /* 10e9266c push 0x10eb92a4 */
  push32((uint32_t)(0x10eb92a4u));
  /* 10e92671 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e92676 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10e9267c push eax */
  push32((uint32_t)(EAX));
  /* 10e9267d call 0x10e95e40 */
  push32(0x10e92682u); f_10e95e40();
  /* 10e92682 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92687 jge 0x10e9269d */
  if ((C.sf==C.of)) goto L_10e9269d;
  /* 10e92689 push 0x10eb9208 */
  push32((uint32_t)(0x10eb9208u));
  /* 10e9268e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10e92694 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92695 call 0x10e95f40 */
  push32(0x10e9269au); f_10e95f40();
  /* 10e9269a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9269d:;
  /* 10e9269d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10e926a2 push 0x10eb9280 */
  push32((uint32_t)(0x10eb9280u));
  /* 10e926a7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10e926ad push edx */
  push32((uint32_t)(EDX));
  /* 10e926ae call 0x10e966f0 */
  push32(0x10e926b3u); f_10e966f0();
  /* 10e926b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e926b6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10e926bc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e926c3 jne 0x10e926d6 */
  if (!C.zf) goto L_10e926d6;
  /* 10e926c5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10e926c7 call 0x10e96430 */
  push32(0x10e926ccu); f_10e96430();
  /* 10e926cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e926cf push 3 */
  push32((uint32_t)(0x3u));
  /* 10e926d1 call 0x10e92750 */
  push32(0x10e926d6u); f_10e92750();
L_10e926d6:;
  /* 10e926d6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e926dd jne 0x10e926e6 */
  if (!C.zf) goto L_10e926e6;
  /* 10e926df mov eax, 1 */
  EAX = (0x1u);
  /* 10e926e4 jmp 0x10e926e8 */
  goto L_10e926e8;
L_10e926e6:;
  /* 10e926e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e926e8:;
  /* 10e926e8 mov esp, ebp */
  ESP = (EBP);
  /* 10e926ea pop ebp */
  EBP = (pop32());
  /* 10e926eb ret  */
  ESPCHK(0x10e923e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100026f0 @ 0x10e926f0 (56 bytes, 15 insns) */
void f_10e926f0(void) {
  FTRACE(0x10e926f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e926f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e926f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e926f3 cmp dword ptr [0x10ebffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e926fa je 0x10e92702 */
  if (C.zf) goto L_10e92702;
  /* 10e926fc call dword ptr [0x10ebffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebffbc))), 0x10e92702u);
L_10e92702:;
  /* 10e92702 push 0x10ebc418 */
  push32((uint32_t)(0x10ebc418u));
  /* 10e92707 push 0x10ebc208 */
  push32((uint32_t)(0x10ebc208u));
  /* 10e9270c call 0x10e928c0 */
  push32(0x10e92711u); f_10e928c0();
  /* 10e92711 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92714 push 0x10ebc104 */
  push32((uint32_t)(0x10ebc104u));
  /* 10e92719 push 0x10ebc000 */
  push32((uint32_t)(0x10ebc000u));
  /* 10e9271e call 0x10e928c0 */
  push32(0x10e92723u); f_10e928c0();
  /* 10e92723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92726 pop ebp */
  EBP = (pop32());
  /* 10e92727 ret  */
  ESPCHK(0x10e926f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002730 @ 0x10e92730 (21 bytes, 10 insns) */
void f_10e92730(void) {
  FTRACE(0x10e92730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92730 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92731 mov ebp, esp */
  EBP = (ESP);
  /* 10e92733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9273a push eax */
  push32((uint32_t)(EAX));
  /* 10e9273b call 0x10e927b0 */
  push32(0x10e92740u); f_10e927b0();
  /* 10e92740 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92743 pop ebp */
  EBP = (pop32());
  /* 10e92744 ret  */
  ESPCHK(0x10e92730u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10e92750 (21 bytes, 10 insns) */
void f_10e92750(void) {
  FTRACE(0x10e92750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92750 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92751 mov ebp, esp */
  EBP = (ESP);
  /* 10e92753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92755 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92757 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9275a push eax */
  push32((uint32_t)(EAX));
  /* 10e9275b call 0x10e927b0 */
  push32(0x10e92760u); f_10e927b0();
  /* 10e92760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92763 pop ebp */
  EBP = (pop32());
  /* 10e92764 ret  */
  ESPCHK(0x10e92750u, _esp0);
  ESP += 4; return;
}

/* FUN_10002770 @ 0x10e92770 (19 bytes, 9 insns) */
void f_10e92770(void) {
  FTRACE(0x10e92770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92770 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92771 mov ebp, esp */
  EBP = (ESP);
  /* 10e92773 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92779 call 0x10e927b0 */
  push32(0x10e9277eu); f_10e927b0();
  /* 10e9277e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92781 pop ebp */
  EBP = (pop32());
  /* 10e92782 ret  */
  ESPCHK(0x10e92770u, _esp0);
  ESP += 4; return;
}

/* FUN_10002790 @ 0x10e92790 (19 bytes, 9 insns) */
void f_10e92790(void) {
  FTRACE(0x10e92790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92790 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92791 mov ebp, esp */
  EBP = (ESP);
  /* 10e92793 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92795 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92797 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92799 call 0x10e927b0 */
  push32(0x10e9279eu); f_10e927b0();
  /* 10e9279e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e927a1 pop ebp */
  EBP = (pop32());
  /* 10e927a2 ret  */
  ESPCHK(0x10e92790u, _esp0);
  ESP += 4; return;
}

/* FUN_100027b0 @ 0x10e927b0 (227 bytes, 61 insns) */
void f_10e927b0(void) {
  FTRACE(0x10e927b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e927b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e927b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e927b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e927b4 call 0x10e928a0 */
  push32(0x10e927b9u); f_10e928a0();
  /* 10e927b9 cmp dword ptr [0x10ebe4bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e927c0 jne 0x10e927d3 */
  if (!C.zf) goto L_10e927d3;
  /* 10e927c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e927c5 push eax */
  push32((uint32_t)(EAX));
  /* 10e927c6 call dword ptr [0x10ec0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0314))), 0x10e927ccu);
  /* 10e927cc push eax */
  push32((uint32_t)(EAX));
  /* 10e927cd call dword ptr [0x10ec0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0310))), 0x10e927d3u);
L_10e927d3:;
  /* 10e927d3 mov dword ptr [0x10ebe4b8], 1 */
  w32((uint32_t)(0x10ebe4b8), (0x1u));
  /* 10e927dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10e927e0 mov byte ptr [0x10ebe4b4], cl */
  w8((uint32_t)(0x10ebe4b4), (CL));
  /* 10e927e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e927ea jne 0x10e92833 */
  if (!C.zf) goto L_10e92833;
  /* 10e927ec cmp dword ptr [0x10ebffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e927f3 je 0x10e92821 */
  if (C.zf) goto L_10e92821;
  /* 10e927f5 mov edx, dword ptr [0x10ebffb4] */
  EDX = (r32((uint32_t)(0x10ebffb4)));
  /* 10e927fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e927fe:;
  /* 10e927fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92801 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e92804 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e92807 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9280a cmp ecx, dword ptr [0x10ebffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92810 jb 0x10e92821 */
  if (C.cf) goto L_10e92821;
  /* 10e92812 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92815 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92818 je 0x10e9281f */
  if (C.zf) goto L_10e9281f;
  /* 10e9281a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9281d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10e9281fu);
L_10e9281f:;
  /* 10e9281f jmp 0x10e927fe */
  goto L_10e927fe;
L_10e92821:;
  /* 10e92821 push 0x10ebc724 */
  push32((uint32_t)(0x10ebc724u));
  /* 10e92826 push 0x10ebc51c */
  push32((uint32_t)(0x10ebc51cu));
  /* 10e9282b call 0x10e928c0 */
  push32(0x10e92830u); f_10e928c0();
  /* 10e92830 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92833:;
  /* 10e92833 push 0x10ebc92c */
  push32((uint32_t)(0x10ebc92cu));
  /* 10e92838 push 0x10ebc828 */
  push32((uint32_t)(0x10ebc828u));
  /* 10e9283d call 0x10e928c0 */
  push32(0x10e92842u); f_10e928c0();
  /* 10e92842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92845 cmp dword ptr [0x10ebe4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9284c jne 0x10e9286e */
  if (!C.zf) goto L_10e9286e;
  /* 10e9284e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10e92850 call 0x10e944a0 */
  push32(0x10e92855u); f_10e944a0();
  /* 10e92855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92858 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9285b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9285d je 0x10e9286e */
  if (C.zf) goto L_10e9286e;
  /* 10e9285f mov dword ptr [0x10ebe4c0], 1 */
  w32((uint32_t)(0x10ebe4c0), (0x1u));
  /* 10e92869 call 0x10e94db0 */
  push32(0x10e9286eu); f_10e94db0();
L_10e9286e:;
  /* 10e9286e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92872 je 0x10e9287b */
  if (C.zf) goto L_10e9287b;
  /* 10e92874 call 0x10e928b0 */
  push32(0x10e92879u); f_10e928b0();
  /* 10e92879 jmp 0x10e9288f */
  goto L_10e9288f;
L_10e9287b:;
  /* 10e9287b mov dword ptr [0x10ebe4bc], 1 */
  w32((uint32_t)(0x10ebe4bc), (0x1u));
  /* 10e92885 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92888 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92889 call dword ptr [0x10ec030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec030c))), 0x10e9288fu);
L_10e9288f:;
  /* 10e9288f mov esp, ebp */
  ESP = (EBP);
  /* 10e92891 pop ebp */
  EBP = (pop32());
  /* 10e92892 ret  */
  ESPCHK(0x10e927b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028a0 @ 0x10e928a0 (15 bytes, 7 insns) */
void f_10e928a0(void) {
  FTRACE(0x10e928a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e928a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e928a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e928a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e928a5 call 0x10e96990 */
  push32(0x10e928aau); f_10e96990();
  /* 10e928aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e928ad pop ebp */
  EBP = (pop32());
  /* 10e928ae ret  */
  ESPCHK(0x10e928a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x10e928b0 (15 bytes, 7 insns) */
void f_10e928b0(void) {
  FTRACE(0x10e928b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e928b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e928b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e928b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10e928b5 call 0x10e96a30 */
  push32(0x10e928bau); f_10e96a30();
  /* 10e928ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e928bd pop ebp */
  EBP = (pop32());
  /* 10e928be ret  */
  ESPCHK(0x10e928b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10e928c0 (37 bytes, 16 insns) */
void f_10e928c0(void) {
  FTRACE(0x10e928c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e928c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e928c1 mov ebp, esp */
  EBP = (ESP);
L_10e928c3:;
  /* 10e928c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e928c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e928c9 jae 0x10e928e3 */
  if (!C.cf) goto L_10e928e3;
  /* 10e928cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e928ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e928d1 je 0x10e928d8 */
  if (C.zf) goto L_10e928d8;
  /* 10e928d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e928d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10e928d8u);
L_10e928d8:;
  /* 10e928d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e928db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e928de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e928e1 jmp 0x10e928c3 */
  goto L_10e928c3;
L_10e928e3:;
  /* 10e928e3 pop ebp */
  EBP = (pop32());
  /* 10e928e4 ret  */
  ESPCHK(0x10e928c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100028f0 @ 0x10e928f0 (130 bytes, 42 insns) */
void f_10e928f0(void) {
  FTRACE(0x10e928f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e928f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e928f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e928f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e928f4 call 0x10e968b0 */
  push32(0x10e928f9u); f_10e968b0();
  /* 10e928f9 call dword ptr [0x10ec0320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0320))), 0x10e928ffu);
  /* 10e928ff mov dword ptr [0x10ebca60], eax */
  w32((uint32_t)(0x10ebca60), (EAX));
  /* 10e92904 cmp dword ptr [0x10ebca60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebca60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9290b jne 0x10e92911 */
  if (!C.zf) goto L_10e92911;
  /* 10e9290d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9290f jmp 0x10e9296e */
  goto L_10e9296e;
L_10e92911:;
  /* 10e92911 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10e92913 push 0x10eb93dc */
  push32((uint32_t)(0x10eb93dcu));
  /* 10e92918 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9291a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e9291c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9291e call 0x10e933a0 */
  push32(0x10e92923u); f_10e933a0();
  /* 10e92923 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92926 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e92929 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9292d je 0x10e92944 */
  if (C.zf) goto L_10e92944;
  /* 10e9292f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92932 push eax */
  push32((uint32_t)(EAX));
  /* 10e92933 mov ecx, dword ptr [0x10ebca60] */
  ECX = (r32((uint32_t)(0x10ebca60)));
  /* 10e92939 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9293a call dword ptr [0x10ec031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec031c))), 0x10e92940u);
  /* 10e92940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92942 jne 0x10e92948 */
  if (!C.zf) goto L_10e92948;
L_10e92944:;
  /* 10e92944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e92946 jmp 0x10e9296e */
  goto L_10e9296e;
L_10e92948:;
  /* 10e92948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9294b push edx */
  push32((uint32_t)(EDX));
  /* 10e9294c call 0x10e929b0 */
  push32(0x10e92951u); f_10e929b0();
  /* 10e92951 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92954 call dword ptr [0x10ec0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0318))), 0x10e9295au);
  /* 10e9295a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9295d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e9295f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92962 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e92969 mov eax, 1 */
  EAX = (0x1u);
L_10e9296e:;
  /* 10e9296e mov esp, ebp */
  ESP = (EBP);
  /* 10e92970 pop ebp */
  EBP = (pop32());
  /* 10e92971 ret  */
  ESPCHK(0x10e928f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002980 @ 0x10e92980 (41 bytes, 11 insns) */
void f_10e92980(void) {
  FTRACE(0x10e92980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92981 mov ebp, esp */
  EBP = (ESP);
  /* 10e92983 call 0x10e968f0 */
  push32(0x10e92988u); f_10e968f0();
  /* 10e92988 cmp dword ptr [0x10ebca60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebca60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9298f je 0x10e929a7 */
  if (C.zf) goto L_10e929a7;
  /* 10e92991 mov eax, dword ptr [0x10ebca60] */
  EAX = (r32((uint32_t)(0x10ebca60)));
  /* 10e92996 push eax */
  push32((uint32_t)(EAX));
  /* 10e92997 call dword ptr [0x10ec0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0324))), 0x10e9299du);
  /* 10e9299d mov dword ptr [0x10ebca60], 0xffffffff */
  w32((uint32_t)(0x10ebca60), (0xffffffffu));
L_10e929a7:;
  /* 10e929a7 pop ebp */
  EBP = (pop32());
  /* 10e929a8 ret  */
  ESPCHK(0x10e92980u, _esp0);
  ESP += 4; return;
}

/* FUN_100029b0 @ 0x10e929b0 (25 bytes, 8 insns) */
void f_10e929b0(void) {
  FTRACE(0x10e929b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e929b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e929b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e929b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e929b6 mov dword ptr [eax + 0x50], 0x10ebcc10 */
  w32((uint32_t)(EAX + 0x50), (0x10ebcc10u));
  /* 10e929bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e929c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10e929c7 pop ebp */
  EBP = (pop32());
  /* 10e929c8 ret  */
  ESPCHK(0x10e929b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100029d0 @ 0x10e929d0 (152 bytes, 48 insns) */
void f_10e929d0(void) {
  FTRACE(0x10e929d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e929d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e929d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e929d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e929d6 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e929dcu);
  /* 10e929dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e929df mov eax, dword ptr [0x10ebca60] */
  EAX = (r32((uint32_t)(0x10ebca60)));
  /* 10e929e4 push eax */
  push32((uint32_t)(EAX));
  /* 10e929e5 call dword ptr [0x10ec032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec032c))), 0x10e929ebu);
  /* 10e929eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e929ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e929f2 jne 0x10e92a57 */
  if (!C.zf) goto L_10e92a57;
  /* 10e929f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10e929f9 push 0x10eb93dc */
  push32((uint32_t)(0x10eb93dcu));
  /* 10e929fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92a00 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10e92a02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92a04 call 0x10e933a0 */
  push32(0x10e92a09u); f_10e933a0();
  /* 10e92a09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e92a0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92a13 je 0x10e92a4d */
  if (C.zf) goto L_10e92a4d;
  /* 10e92a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92a19 mov edx, dword ptr [0x10ebca60] */
  EDX = (r32((uint32_t)(0x10ebca60)));
  /* 10e92a1f push edx */
  push32((uint32_t)(EDX));
  /* 10e92a20 call dword ptr [0x10ec031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec031c))), 0x10e92a26u);
  /* 10e92a26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92a28 je 0x10e92a4d */
  if (C.zf) goto L_10e92a4d;
  /* 10e92a2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92a2d push eax */
  push32((uint32_t)(EAX));
  /* 10e92a2e call 0x10e929b0 */
  push32(0x10e92a33u); f_10e929b0();
  /* 10e92a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92a36 call dword ptr [0x10ec0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0318))), 0x10e92a3cu);
  /* 10e92a3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92a3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e92a41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92a44 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10e92a4b jmp 0x10e92a57 */
  goto L_10e92a57;
L_10e92a4d:;
  /* 10e92a4d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e92a4f call 0x10e91f00 */
  push32(0x10e92a54u); f_10e91f00();
  /* 10e92a54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92a57:;
  /* 10e92a57 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92a5a push eax */
  push32((uint32_t)(EAX));
  /* 10e92a5b call dword ptr [0x10ec0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0328))), 0x10e92a61u);
  /* 10e92a61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92a64 mov esp, ebp */
  ESP = (EBP);
  /* 10e92a66 pop ebp */
  EBP = (pop32());
  /* 10e92a67 ret  */
  ESPCHK(0x10e929d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a70 @ 0x10e92a70 (263 bytes, 86 insns) */
void f_10e92a70(void) {
  FTRACE(0x10e92a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92a71 mov ebp, esp */
  EBP = (ESP);
  /* 10e92a73 cmp dword ptr [0x10ebca60], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebca60))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92a7a je 0x10e92b75 */
  if (C.zf) goto L_10e92b75;
  /* 10e92a80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92a84 jne 0x10e92a95 */
  if (!C.zf) goto L_10e92a95;
  /* 10e92a86 mov eax, dword ptr [0x10ebca60] */
  EAX = (r32((uint32_t)(0x10ebca60)));
  /* 10e92a8b push eax */
  push32((uint32_t)(EAX));
  /* 10e92a8c call dword ptr [0x10ec032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec032c))), 0x10e92a92u);
  /* 10e92a92 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e92a95:;
  /* 10e92a95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92a99 je 0x10e92b66 */
  if (C.zf) goto L_10e92b66;
  /* 10e92a9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92aa2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92aa6 je 0x10e92ab9 */
  if (C.zf) goto L_10e92ab9;
  /* 10e92aa8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92aaa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92aad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10e92ab0 push eax */
  push32((uint32_t)(EAX));
  /* 10e92ab1 call 0x10e93a20 */
  push32(0x10e92ab6u); f_10e93a20();
  /* 10e92ab6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92ab9:;
  /* 10e92ab9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92abc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92ac0 je 0x10e92ad3 */
  if (C.zf) goto L_10e92ad3;
  /* 10e92ac2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92ac4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92ac7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10e92aca push eax */
  push32((uint32_t)(EAX));
  /* 10e92acb call 0x10e93a20 */
  push32(0x10e92ad0u); f_10e93a20();
  /* 10e92ad0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92ad3:;
  /* 10e92ad3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92ad6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92ada je 0x10e92aed */
  if (C.zf) goto L_10e92aed;
  /* 10e92adc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92ae1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e92ae4 push eax */
  push32((uint32_t)(EAX));
  /* 10e92ae5 call 0x10e93a20 */
  push32(0x10e92aeau); f_10e93a20();
  /* 10e92aea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92aed:;
  /* 10e92aed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92af0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92af4 je 0x10e92b07 */
  if (C.zf) goto L_10e92b07;
  /* 10e92af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92afb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10e92afe push eax */
  push32((uint32_t)(EAX));
  /* 10e92aff call 0x10e93a20 */
  push32(0x10e92b04u); f_10e93a20();
  /* 10e92b04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92b07:;
  /* 10e92b07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b0a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92b0e je 0x10e92b21 */
  if (C.zf) goto L_10e92b21;
  /* 10e92b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92b12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b15 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10e92b18 push eax */
  push32((uint32_t)(EAX));
  /* 10e92b19 call 0x10e93a20 */
  push32(0x10e92b1eu); f_10e93a20();
  /* 10e92b1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92b21:;
  /* 10e92b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b24 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92b28 je 0x10e92b3b */
  if (C.zf) goto L_10e92b3b;
  /* 10e92b2a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b2f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10e92b32 push eax */
  push32((uint32_t)(EAX));
  /* 10e92b33 call 0x10e93a20 */
  push32(0x10e92b38u); f_10e93a20();
  /* 10e92b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92b3b:;
  /* 10e92b3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b3e cmp dword ptr [ecx + 0x50], 0x10ebcc10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10ebcc10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92b45 je 0x10e92b58 */
  if (C.zf) goto L_10e92b58;
  /* 10e92b47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b4c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e92b4f push eax */
  push32((uint32_t)(EAX));
  /* 10e92b50 call 0x10e93a20 */
  push32(0x10e92b55u); f_10e93a20();
  /* 10e92b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92b58:;
  /* 10e92b58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92b5a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92b5d push ecx */
  push32((uint32_t)(ECX));
  /* 10e92b5e call 0x10e93a20 */
  push32(0x10e92b63u); f_10e93a20();
  /* 10e92b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92b66:;
  /* 10e92b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92b68 mov edx, dword ptr [0x10ebca60] */
  EDX = (r32((uint32_t)(0x10ebca60)));
  /* 10e92b6e push edx */
  push32((uint32_t)(EDX));
  /* 10e92b6f call dword ptr [0x10ec031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec031c))), 0x10e92b75u);
L_10e92b75:;
  /* 10e92b75 pop ebp */
  EBP = (pop32());
  /* 10e92b76 ret  */
  ESPCHK(0x10e92a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b80 @ 0x10e92b80 (11 bytes, 5 insns) */
void f_10e92b80(void) {
  FTRACE(0x10e92b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92b81 mov ebp, esp */
  EBP = (ESP);
  /* 10e92b83 call dword ptr [0x10ec0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0318))), 0x10e92b89u);
  /* 10e92b89 pop ebp */
  EBP = (pop32());
  /* 10e92b8a ret  */
  ESPCHK(0x10e92b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b90 @ 0x10e92b90 (11 bytes, 5 insns) */
void f_10e92b90(void) {
  FTRACE(0x10e92b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92b91 mov ebp, esp */
  EBP = (ESP);
  /* 10e92b93 call dword ptr [0x10ec0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0274))), 0x10e92b99u);
  /* 10e92b99 pop ebp */
  EBP = (pop32());
  /* 10e92b9a ret  */
  ESPCHK(0x10e92b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ba0 @ 0x10e92ba0 (804 bytes, 236 insns) */
void f_10e92ba0(void) {
  FTRACE(0x10e92ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10e92ba3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e92ba6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10e92bab push 0x10eb93e8 */
  push32((uint32_t)(0x10eb93e8u));
  /* 10e92bb0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92bb2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e92bb7 call 0x10e92f90 */
  push32(0x10e92bbcu); f_10e92f90();
  /* 10e92bbc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92bbf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e92bc2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92bc6 jne 0x10e92bd2 */
  if (!C.zf) goto L_10e92bd2;
  /* 10e92bc8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10e92bca call 0x10e91f00 */
  push32(0x10e92bcfu); f_10e91f00();
  /* 10e92bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e92bd2:;
  /* 10e92bd2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92bd5 mov dword ptr [0x10ebfe60], eax */
  w32((uint32_t)(0x10ebfe60), (EAX));
  /* 10e92bda mov dword ptr [0x10ebff9c], 0x20 */
  w32((uint32_t)(0x10ebff9c), (0x20u));
  /* 10e92be4 jmp 0x10e92bef */
  goto L_10e92bef;
L_10e92be6:;
  /* 10e92be6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92be9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92bec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10e92bef:;
  /* 10e92bef mov edx, dword ptr [0x10ebfe60] */
  EDX = (r32((uint32_t)(0x10ebfe60)));
  /* 10e92bf5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92bfb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92bfe jae 0x10e92c23 */
  if (!C.cf) goto L_10e92c23;
  /* 10e92c00 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92c03 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e92c07 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92c0a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e92c10 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92c13 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e92c17 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92c1a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e92c21 jmp 0x10e92be6 */
  goto L_10e92be6;
L_10e92c23:;
  /* 10e92c23 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e92c26 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92c27 call dword ptr [0x10ec0340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0340))), 0x10e92c2du);
  /* 10e92c2d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10e92c30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e92c36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e92c38 je 0x10e92dc5 */
  if (C.zf) goto L_10e92dc5;
  /* 10e92c3e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92c42 je 0x10e92dc5 */
  if (C.zf) goto L_10e92dc5;
  /* 10e92c48 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e92c4b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e92c4d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10e92c50 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e92c53 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92c56 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e92c59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92c5c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92c5f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10e92c62 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92c69 jge 0x10e92c73 */
  if ((C.sf==C.of)) goto L_10e92c73;
  /* 10e92c6b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10e92c6e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10e92c71 jmp 0x10e92c7a */
  goto L_10e92c7a;
L_10e92c73:;
  /* 10e92c73 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10e92c7a:;
  /* 10e92c7a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10e92c7d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e92c80 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10e92c87 jmp 0x10e92c92 */
  goto L_10e92c92;
L_10e92c89:;
  /* 10e92c89 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e92c8c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92c8f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10e92c92:;
  /* 10e92c92 mov ecx, dword ptr [0x10ebff9c] */
  ECX = (r32((uint32_t)(0x10ebff9c)));
  /* 10e92c98 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92c9b jge 0x10e92d32 */
  if ((C.sf==C.of)) goto L_10e92d32;
  /* 10e92ca1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10e92ca6 push 0x10eb93e8 */
  push32((uint32_t)(0x10eb93e8u));
  /* 10e92cab push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92cad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10e92cb2 call 0x10e92f90 */
  push32(0x10e92cb7u); f_10e92f90();
  /* 10e92cb7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92cba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10e92cbd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92cc1 jne 0x10e92cce */
  if (!C.zf) goto L_10e92cce;
  /* 10e92cc3 mov edx, dword ptr [0x10ebff9c] */
  EDX = (r32((uint32_t)(0x10ebff9c)));
  /* 10e92cc9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10e92ccc jmp 0x10e92d32 */
  goto L_10e92d32;
L_10e92cce:;
  /* 10e92cce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e92cd1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92cd4 mov dword ptr [eax*4 + 0x10ebfe60], ecx */
  w32((uint32_t)(EAX*4 + 0x10ebfe60), (ECX));
  /* 10e92cdb mov edx, dword ptr [0x10ebff9c] */
  EDX = (r32((uint32_t)(0x10ebff9c)));
  /* 10e92ce1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92ce4 mov dword ptr [0x10ebff9c], edx */
  w32((uint32_t)(0x10ebff9c), (EDX));
  /* 10e92cea jmp 0x10e92cf5 */
  goto L_10e92cf5;
L_10e92cec:;
  /* 10e92cec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92cef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92cf2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10e92cf5:;
  /* 10e92cf5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10e92cf8 mov edx, dword ptr [ecx*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebfe60)));
  /* 10e92cff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92d05 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92d08 jae 0x10e92d2d */
  if (!C.cf) goto L_10e92d2d;
  /* 10e92d0a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92d0d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e92d11 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92d14 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10e92d1a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92d1d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10e92d21 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92d24 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e92d2b jmp 0x10e92cec */
  goto L_10e92cec;
L_10e92d2d:;
  /* 10e92d2d jmp 0x10e92c89 */
  goto L_10e92c89;
L_10e92d32:;
  /* 10e92d32 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e92d39 jmp 0x10e92d56 */
  goto L_10e92d56;
L_10e92d3b:;
  /* 10e92d3b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92d41 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10e92d44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92d47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92d4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e92d4d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e92d50 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92d53 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10e92d56:;
  /* 10e92d56 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92d59 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92d5c jge 0x10e92dc5 */
  if ((C.sf==C.of)) goto L_10e92dc5;
  /* 10e92d5e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e92d61 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92d64 je 0x10e92dc0 */
  if (C.zf) goto L_10e92dc0;
  /* 10e92d66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92d69 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e92d6c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10e92d6f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e92d71 je 0x10e92dc0 */
  if (C.zf) goto L_10e92dc0;
  /* 10e92d73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92d76 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e92d79 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10e92d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92d7e jne 0x10e92d90 */
  if (!C.zf) goto L_10e92d90;
  /* 10e92d80 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e92d83 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e92d85 push edx */
  push32((uint32_t)(EDX));
  /* 10e92d86 call dword ptr [0x10ec033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec033c))), 0x10e92d8cu);
  /* 10e92d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e92d8e je 0x10e92dc0 */
  if (C.zf) goto L_10e92dc0;
L_10e92d90:;
  /* 10e92d90 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92d93 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10e92d96 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92d99 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10e92d9c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e92d9f mov edx, dword ptr [eax*4 + 0x10ebfe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e92da6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92da8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e92dab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92dae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10e92db1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e92db3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e92db5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92db8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92dbb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e92dbd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10e92dc0:;
  /* 10e92dc0 jmp 0x10e92d3b */
  goto L_10e92d3b;
L_10e92dc5:;
  /* 10e92dc5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10e92dcc jmp 0x10e92dd7 */
  goto L_10e92dd7;
L_10e92dce:;
  /* 10e92dce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92dd1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92dd4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10e92dd7:;
  /* 10e92dd7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92ddb jge 0x10e92eb4 */
  if ((C.sf==C.of)) goto L_10e92eb4;
  /* 10e92de1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92de4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e92de7 mov edx, dword ptr [0x10ebfe60] */
  EDX = (r32((uint32_t)(0x10ebfe60)));
  /* 10e92ded add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92def mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10e92df2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92df5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92df8 jne 0x10e92ea0 */
  if (!C.zf) goto L_10e92ea0;
  /* 10e92dfe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e01 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10e92e05 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92e09 jne 0x10e92e14 */
  if (!C.zf) goto L_10e92e14;
  /* 10e92e0b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10e92e12 jmp 0x10e92e24 */
  goto L_10e92e24;
L_10e92e14:;
  /* 10e92e14 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10e92e17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e92e1a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e92e1c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e92e1e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92e21 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10e92e24:;
  /* 10e92e24 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10e92e27 push eax */
  push32((uint32_t)(EAX));
  /* 10e92e28 call dword ptr [0x10ec02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02ec))), 0x10e92e2eu);
  /* 10e92e2e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10e92e31 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92e35 je 0x10e92e8f */
  if (C.zf) goto L_10e92e8f;
  /* 10e92e37 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e92e3a push ecx */
  push32((uint32_t)(ECX));
  /* 10e92e3b call dword ptr [0x10ec033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec033c))), 0x10e92e41u);
  /* 10e92e41 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e92e44 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92e48 je 0x10e92e8f */
  if (C.zf) goto L_10e92e8f;
  /* 10e92e4a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e4d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e92e50 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e92e52 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e92e55 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e92e5b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92e5e jne 0x10e92e70 */
  if (!C.zf) goto L_10e92e70;
  /* 10e92e60 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e63 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10e92e66 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10e92e68 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e6b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10e92e6e jmp 0x10e92e8d */
  goto L_10e92e8d;
L_10e92e70:;
  /* 10e92e70 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10e92e73 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e92e79 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92e7c jne 0x10e92e8d */
  if (!C.zf) goto L_10e92e8d;
  /* 10e92e7e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e81 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e92e84 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10e92e87 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e8a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e92e8d:;
  /* 10e92e8d jmp 0x10e92e9e */
  goto L_10e92e9e;
L_10e92e8f:;
  /* 10e92e8f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e92 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e92e95 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10e92e98 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92e9b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e92e9e:;
  /* 10e92e9e jmp 0x10e92eaf */
  goto L_10e92eaf;
L_10e92ea0:;
  /* 10e92ea0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92ea3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10e92ea6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10e92ea9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e92eac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10e92eaf:;
  /* 10e92eaf jmp 0x10e92dce */
  goto L_10e92dce;
L_10e92eb4:;
  /* 10e92eb4 mov eax, dword ptr [0x10ebff9c] */
  EAX = (r32((uint32_t)(0x10ebff9c)));
  /* 10e92eb9 push eax */
  push32((uint32_t)(EAX));
  /* 10e92eba call dword ptr [0x10ec0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0270))), 0x10e92ec0u);
  /* 10e92ec0 mov esp, ebp */
  ESP = (EBP);
  /* 10e92ec2 pop ebp */
  EBP = (pop32());
  /* 10e92ec3 ret  */
  ESPCHK(0x10e92ba0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10e92ed0 (155 bytes, 45 insns) */
void f_10e92ed0(void) {
  FTRACE(0x10e92ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10e92ed3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e92ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e92edd jmp 0x10e92ee8 */
  goto L_10e92ee8;
L_10e92edf:;
  /* 10e92edf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92ee2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92ee5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e92ee8:;
  /* 10e92ee8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92eec jge 0x10e92f67 */
  if ((C.sf==C.of)) goto L_10e92f67;
  /* 10e92eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92ef1 cmp dword ptr [ecx*4 + 0x10ebfe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ebfe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92ef9 je 0x10e92f62 */
  if (C.zf) goto L_10e92f62;
  /* 10e92efb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92efe mov eax, dword ptr [edx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e92f05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e92f08 jmp 0x10e92f13 */
  goto L_10e92f13;
L_10e92f0a:;
  /* 10e92f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92f0d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92f10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e92f13:;
  /* 10e92f13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92f16 mov eax, dword ptr [edx*4 + 0x10ebfe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebfe60)));
  /* 10e92f1d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92f22 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92f25 jae 0x10e92f3f */
  if (!C.cf) goto L_10e92f3f;
  /* 10e92f27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92f2a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e92f2e je 0x10e92f3d */
  if (C.zf) goto L_10e92f3d;
  /* 10e92f30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e92f33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92f36 push edx */
  push32((uint32_t)(EDX));
  /* 10e92f37 call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e92f3du);
L_10e92f3d:;
  /* 10e92f3d jmp 0x10e92f0a */
  goto L_10e92f0a;
L_10e92f3f:;
  /* 10e92f3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e92f41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92f44 mov ecx, dword ptr [eax*4 + 0x10ebfe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebfe60)));
  /* 10e92f4b push ecx */
  push32((uint32_t)(ECX));
  /* 10e92f4c call 0x10e93a20 */
  push32(0x10e92f51u); f_10e93a20();
  /* 10e92f51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92f54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e92f57 mov dword ptr [edx*4 + 0x10ebfe60], 0 */
  w32((uint32_t)(EDX*4 + 0x10ebfe60), (0x0u));
L_10e92f62:;
  /* 10e92f62 jmp 0x10e92edf */
  goto L_10e92edf;
L_10e92f67:;
  /* 10e92f67 mov esp, ebp */
  ESP = (EBP);
  /* 10e92f69 pop ebp */
  EBP = (pop32());
  /* 10e92f6a ret  */
  ESPCHK(0x10e92ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f70 @ 0x10e92f70 (29 bytes, 13 insns) */
void f_10e92f70(void) {
  FTRACE(0x10e92f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92f71 mov ebp, esp */
  EBP = (ESP);
  /* 10e92f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92f77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92f79 mov eax, dword ptr [0x10ebe668] */
  EAX = (r32((uint32_t)(0x10ebe668)));
  /* 10e92f7e push eax */
  push32((uint32_t)(EAX));
  /* 10e92f7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92f82 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92f83 call 0x10e92fe0 */
  push32(0x10e92f88u); f_10e92fe0();
  /* 10e92f88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92f8b pop ebp */
  EBP = (pop32());
  /* 10e92f8c ret  */
  ESPCHK(0x10e92f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f90 @ 0x10e92f90 (35 bytes, 16 insns) */
void f_10e92f90(void) {
  FTRACE(0x10e92f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92f91 mov ebp, esp */
  EBP = (ESP);
  /* 10e92f93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e92f96 push eax */
  push32((uint32_t)(EAX));
  /* 10e92f97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e92f9a push ecx */
  push32((uint32_t)(ECX));
  /* 10e92f9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e92f9e push edx */
  push32((uint32_t)(EDX));
  /* 10e92f9f mov eax, dword ptr [0x10ebe668] */
  EAX = (r32((uint32_t)(0x10ebe668)));
  /* 10e92fa4 push eax */
  push32((uint32_t)(EAX));
  /* 10e92fa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92fa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92fa9 call 0x10e92fe0 */
  push32(0x10e92faeu); f_10e92fe0();
  /* 10e92fae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92fb1 pop ebp */
  EBP = (pop32());
  /* 10e92fb2 ret  */
  ESPCHK(0x10e92f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fc0 @ 0x10e92fc0 (27 bytes, 13 insns) */
void f_10e92fc0(void) {
  FTRACE(0x10e92fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e92fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e92fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e92fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e92fcc push eax */
  push32((uint32_t)(EAX));
  /* 10e92fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92fd1 call 0x10e92fe0 */
  push32(0x10e92fd6u); f_10e92fe0();
  /* 10e92fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92fd9 pop ebp */
  EBP = (pop32());
  /* 10e92fda ret  */
  ESPCHK(0x10e92fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x10e92fe0 (94 bytes, 38 insns) */
void f_10e92fe0(void) {
  FTRACE(0x10e92fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e92fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e92fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e92fe3 push ecx */
  push32((uint32_t)(ECX));
L_10e92fe4:;
  /* 10e92fe4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e92fe6 call 0x10e96990 */
  push32(0x10e92febu); f_10e96990();
  /* 10e92feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e92fee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e92ff1 push eax */
  push32((uint32_t)(EAX));
  /* 10e92ff2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e92ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e92ff6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e92ff9 push edx */
  push32((uint32_t)(EDX));
  /* 10e92ffa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e92ffd push eax */
  push32((uint32_t)(EAX));
  /* 10e92ffe call 0x10e93060 */
  push32(0x10e93003u); f_10e93060();
  /* 10e93003 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93006 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e93009 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9300b call 0x10e96a30 */
  push32(0x10e93010u); f_10e96a30();
  /* 10e93010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93013 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93017 jne 0x10e9301f */
  if (!C.zf) goto L_10e9301f;
  /* 10e93019 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9301d jne 0x10e93024 */
  if (!C.zf) goto L_10e93024;
L_10e9301f:;
  /* 10e9301f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93022 jmp 0x10e9303a */
  goto L_10e9303a;
L_10e93024:;
  /* 10e93024 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93027 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93028 call 0x10e96cd0 */
  push32(0x10e9302du); f_10e96cd0();
  /* 10e9302d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93030 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93032 jne 0x10e93038 */
  if (!C.zf) goto L_10e93038;
  /* 10e93034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93036 jmp 0x10e9303a */
  goto L_10e9303a;
L_10e93038:;
  /* 10e93038 jmp 0x10e92fe4 */
  goto L_10e92fe4;
L_10e9303a:;
  /* 10e9303a mov esp, ebp */
  ESP = (EBP);
  /* 10e9303c pop ebp */
  EBP = (pop32());
  /* 10e9303d ret  */
  ESPCHK(0x10e92fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003040 @ 0x10e93040 (23 bytes, 11 insns) */
void f_10e93040(void) {
  FTRACE(0x10e93040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93040 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93041 mov ebp, esp */
  EBP = (ESP);
  /* 10e93043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93047 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9304c push eax */
  push32((uint32_t)(EAX));
  /* 10e9304d call 0x10e93060 */
  push32(0x10e93052u); f_10e93060();
  /* 10e93052 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93055 pop ebp */
  EBP = (pop32());
  /* 10e93056 ret  */
  ESPCHK(0x10e93040u, _esp0);
  ESP += 4; return;
}

/* FUN_10003060 @ 0x10e93060 (787 bytes, 254 insns) */
void f_10e93060(void) {
  FTRACE(0x10e93060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93060 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93061 mov ebp, esp */
  EBP = (ESP);
  /* 10e93063 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93066 push ebx */
  push32((uint32_t)(EBX));
  /* 10e93067 push esi */
  push32((uint32_t)(ESI));
  /* 10e93068 push edi */
  push32((uint32_t)(EDI));
  /* 10e93069 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e93070 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93075 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e93078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9307a je 0x10e930ac */
  if (C.zf) goto L_10e930ac;
L_10e9307c:;
  /* 10e9307c call 0x10e94130 */
  push32(0x10e93081u); f_10e94130();
  /* 10e93081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93083 jne 0x10e930a6 */
  if (!C.zf) goto L_10e930a6;
  /* 10e93085 push 0x10eb94dc */
  push32((uint32_t)(0x10eb94dcu));
  /* 10e9308a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9308c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10e93091 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93096 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93098 call 0x10e92050 */
  push32(0x10e9309du); f_10e92050();
  /* 10e9309d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e930a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e930a3 jne 0x10e930a6 */
  if (!C.zf) goto L_10e930a6;
  /* 10e930a5 int3  */
  x86_unimpl("int3 @ 0x10e930a5");
L_10e930a6:;
  /* 10e930a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e930a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e930aa jne 0x10e9307c */
  if (!C.zf) goto L_10e9307c;
L_10e930ac:;
  /* 10e930ac mov edx, dword ptr [0x10ebca90] */
  EDX = (r32((uint32_t)(0x10ebca90)));
  /* 10e930b2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e930b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e930b8 cmp eax, dword ptr [0x10ebca94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebca94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e930be jne 0x10e930c1 */
  if (!C.zf) goto L_10e930c1;
  /* 10e930c0 int3  */
  x86_unimpl("int3 @ 0x10e930c0");
L_10e930c1:;
  /* 10e930c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e930c4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e930c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e930c8 push edx */
  push32((uint32_t)(EDX));
  /* 10e930c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e930cc push eax */
  push32((uint32_t)(EAX));
  /* 10e930cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e930d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e930d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e930d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e930d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e930d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e930d9 call dword ptr [0x10ebcca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebcca0))), 0x10e930dfu);
  /* 10e930df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e930e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e930e4 jne 0x10e93144 */
  if (!C.zf) goto L_10e93144;
  /* 10e930e6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e930ea je 0x10e93117 */
  if (C.zf) goto L_10e93117;
L_10e930ec:;
  /* 10e930ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e930ef push eax */
  push32((uint32_t)(EAX));
  /* 10e930f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e930f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e930f4 push 0x10eb9498 */
  push32((uint32_t)(0x10eb9498u));
  /* 10e930f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e930fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e930fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e930ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93101 call 0x10e92050 */
  push32(0x10e93106u); f_10e92050();
  /* 10e93106 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9310c jne 0x10e9310f */
  if (!C.zf) goto L_10e9310f;
  /* 10e9310e int3  */
  x86_unimpl("int3 @ 0x10e9310e");
L_10e9310f:;
  /* 10e9310f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93111 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e93113 jne 0x10e930ec */
  if (!C.zf) goto L_10e930ec;
  /* 10e93115 jmp 0x10e9313d */
  goto L_10e9313d;
L_10e93117:;
  /* 10e93117 push 0x10eb9474 */
  push32((uint32_t)(0x10eb9474u));
  /* 10e9311c push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e93121 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93129 call 0x10e92050 */
  push32(0x10e9312eu); f_10e92050();
  /* 10e9312e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93134 jne 0x10e93137 */
  if (!C.zf) goto L_10e93137;
  /* 10e93136 int3  */
  x86_unimpl("int3 @ 0x10e93136");
L_10e93137:;
  /* 10e93137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93139 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9313b jne 0x10e93117 */
  if (!C.zf) goto L_10e93117;
L_10e9313d:;
  /* 10e9313d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9313f jmp 0x10e9336c */
  goto L_10e9336c;
L_10e93144:;
  /* 10e93144 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93147 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9314d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93150 je 0x10e93166 */
  if (C.zf) goto L_10e93166;
  /* 10e93152 mov edx, dword ptr [0x10ebca8c] */
  EDX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93158 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10e9315b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9315d jne 0x10e93166 */
  if (!C.zf) goto L_10e93166;
  /* 10e9315f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10e93166:;
  /* 10e93166 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9316a ja 0x10e93177 */
  if ((!C.cf&&!C.zf)) goto L_10e93177;
  /* 10e9316c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9316f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93172 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93175 jbe 0x10e931a3 */
  if ((C.cf||C.zf)) goto L_10e931a3;
L_10e93177:;
  /* 10e93177 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9317a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9317b push 0x10eb944c */
  push32((uint32_t)(0x10eb944cu));
  /* 10e93180 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93186 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93188 call 0x10e92050 */
  push32(0x10e9318du); f_10e92050();
  /* 10e9318d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93193 jne 0x10e93196 */
  if (!C.zf) goto L_10e93196;
  /* 10e93195 int3  */
  x86_unimpl("int3 @ 0x10e93195");
L_10e93196:;
  /* 10e93196 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93198 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9319a jne 0x10e93177 */
  if (!C.zf) goto L_10e93177;
  /* 10e9319c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9319e jmp 0x10e9336c */
  goto L_10e9336c;
L_10e931a3:;
  /* 10e931a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e931a6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e931ab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e931ae je 0x10e931f0 */
  if (C.zf) goto L_10e931f0;
  /* 10e931b0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e931b4 je 0x10e931f0 */
  if (C.zf) goto L_10e931f0;
  /* 10e931b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e931b9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e931bf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e931c2 je 0x10e931f0 */
  if (C.zf) goto L_10e931f0;
  /* 10e931c4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e931c8 je 0x10e931f0 */
  if (C.zf) goto L_10e931f0;
L_10e931ca:;
  /* 10e931ca push 0x10eb9418 */
  push32((uint32_t)(0x10eb9418u));
  /* 10e931cf push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e931d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e931d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e931d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e931da push 1 */
  push32((uint32_t)(0x1u));
  /* 10e931dc call 0x10e92050 */
  push32(0x10e931e1u); f_10e92050();
  /* 10e931e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e931e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e931e7 jne 0x10e931ea */
  if (!C.zf) goto L_10e931ea;
  /* 10e931e9 int3  */
  x86_unimpl("int3 @ 0x10e931e9");
L_10e931ea:;
  /* 10e931ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e931ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e931ee jne 0x10e931ca */
  if (!C.zf) goto L_10e931ca;
L_10e931f0:;
  /* 10e931f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e931f3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e931f6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e931f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e931fc push ecx */
  push32((uint32_t)(ECX));
  /* 10e931fd call 0x10e96de0 */
  push32(0x10e93202u); f_10e96de0();
  /* 10e93202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e93208 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9320c jne 0x10e93215 */
  if (!C.zf) goto L_10e93215;
  /* 10e9320e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93210 jmp 0x10e9336c */
  goto L_10e9336c;
L_10e93215:;
  /* 10e93215 mov edx, dword ptr [0x10ebca90] */
  EDX = (r32((uint32_t)(0x10ebca90)));
  /* 10e9321b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9321e mov dword ptr [0x10ebca90], edx */
  w32((uint32_t)(0x10ebca90), (EDX));
  /* 10e93224 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93228 je 0x10e93273 */
  if (C.zf) goto L_10e93273;
  /* 10e9322a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9322d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e93233 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93236 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10e9323d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93240 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e93247 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9324a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10e93251 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93254 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93257 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e9325a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9325d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10e93264 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93267 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10e9326e jmp 0x10e93313 */
  goto L_10e93313;
L_10e93273:;
  /* 10e93273 mov edx, dword ptr [0x10ebe4c8] */
  EDX = (r32((uint32_t)(0x10ebe4c8)));
  /* 10e93279 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9327c mov dword ptr [0x10ebe4c8], edx */
  w32((uint32_t)(0x10ebe4c8), (EDX));
  /* 10e93282 mov eax, dword ptr [0x10ebe4d0] */
  EAX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e93287 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9328a mov dword ptr [0x10ebe4d0], eax */
  w32((uint32_t)(0x10ebe4d0), (EAX));
  /* 10e9328f mov ecx, dword ptr [0x10ebe4d0] */
  ECX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e93295 cmp ecx, dword ptr [0x10ebe4d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebe4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9329b jbe 0x10e932a9 */
  if ((C.cf||C.zf)) goto L_10e932a9;
  /* 10e9329d mov edx, dword ptr [0x10ebe4d0] */
  EDX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e932a3 mov dword ptr [0x10ebe4d4], edx */
  w32((uint32_t)(0x10ebe4d4), (EDX));
L_10e932a9:;
  /* 10e932a9 cmp dword ptr [0x10ebe4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e932b0 je 0x10e932bf */
  if (C.zf) goto L_10e932bf;
  /* 10e932b2 mov eax, dword ptr [0x10ebe4cc] */
  EAX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e932b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932ba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e932bd jmp 0x10e932c8 */
  goto L_10e932c8;
L_10e932bf:;
  /* 10e932bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932c2 mov dword ptr [0x10ebe4c4], edx */
  w32((uint32_t)(0x10ebe4c4), (EDX));
L_10e932c8:;
  /* 10e932c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932cb mov ecx, dword ptr [0x10ebe4cc] */
  ECX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e932d1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e932d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932d6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10e932dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932e0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e932e3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10e932e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e932ec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10e932ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e932f5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10e932f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e932fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e932fe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10e93301 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93304 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93307 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10e9330a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9330d mov dword ptr [0x10ebe4cc], ecx */
  w32((uint32_t)(0x10ebe4cc), (ECX));
L_10e93313:;
  /* 10e93313 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e93315 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93317 mov dl, byte ptr [0x10ebca98] */
  DL = (r8((uint32_t)(0x10ebca98)));
  /* 10e9331d push edx */
  push32((uint32_t)(EDX));
  /* 10e9331e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93321 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93324 push eax */
  push32((uint32_t)(EAX));
  /* 10e93325 call 0x10e96d00 */
  push32(0x10e9332au); f_10e96d00();
  /* 10e9332a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9332d push 4 */
  push32((uint32_t)(0x4u));
  /* 10e9332f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93331 mov cl, byte ptr [0x10ebca98] */
  CL = (r8((uint32_t)(0x10ebca98)));
  /* 10e93337 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9333b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9333e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10e93342 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93343 call 0x10e96d00 */
  push32(0x10e93348u); f_10e96d00();
  /* 10e93348 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9334b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9334e push edx */
  push32((uint32_t)(EDX));
  /* 10e9334f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93351 mov al, byte ptr [0x10ebca9a] */
  AL = (r8((uint32_t)(0x10ebca9a)));
  /* 10e93356 push eax */
  push32((uint32_t)(EAX));
  /* 10e93357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9335a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9335d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9335e call 0x10e96d00 */
  push32(0x10e93363u); f_10e96d00();
  /* 10e93363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93366 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93369 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e9336c:;
  /* 10e9336c pop edi */
  EDI = (pop32());
  /* 10e9336d pop esi */
  ESI = (pop32());
  /* 10e9336e pop ebx */
  EBX = (pop32());
  /* 10e9336f mov esp, ebp */
  ESP = (EBP);
  /* 10e93371 pop ebp */
  EBP = (pop32());
  /* 10e93372 ret  */
  ESPCHK(0x10e93060u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x10e93380 (27 bytes, 13 insns) */
void f_10e93380(void) {
  FTRACE(0x10e93380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93380 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93381 mov ebp, esp */
  EBP = (ESP);
  /* 10e93383 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93385 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93387 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9338c push eax */
  push32((uint32_t)(EAX));
  /* 10e9338d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93390 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93391 call 0x10e933a0 */
  push32(0x10e93396u); f_10e933a0();
  /* 10e93396 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93399 pop ebp */
  EBP = (pop32());
  /* 10e9339a ret  */
  ESPCHK(0x10e93380u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10e933a0 (96 bytes, 37 insns) */
void f_10e933a0(void) {
  FTRACE(0x10e933a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e933a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e933a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e933a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e933a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e933a9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e933ad mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e933b0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e933b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e933b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e933b7 push edx */
  push32((uint32_t)(EDX));
  /* 10e933b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e933bb push eax */
  push32((uint32_t)(EAX));
  /* 10e933bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e933bf push ecx */
  push32((uint32_t)(ECX));
  /* 10e933c0 call 0x10e92f90 */
  push32(0x10e933c5u); f_10e92f90();
  /* 10e933c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e933c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e933cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e933cf je 0x10e933f9 */
  if (C.zf) goto L_10e933f9;
  /* 10e933d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e933d4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e933d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e933da add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e933dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e933e0:;
  /* 10e933e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e933e3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e933e6 jae 0x10e933f9 */
  if (!C.cf) goto L_10e933f9;
  /* 10e933e8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e933eb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e933ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e933f1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e933f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e933f7 jmp 0x10e933e0 */
  goto L_10e933e0;
L_10e933f9:;
  /* 10e933f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e933fc mov esp, ebp */
  ESP = (EBP);
  /* 10e933fe pop ebp */
  EBP = (pop32());
  /* 10e933ff ret  */
  ESPCHK(0x10e933a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003400 @ 0x10e93400 (27 bytes, 13 insns) */
void f_10e93400(void) {
  FTRACE(0x10e93400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93400 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93401 mov ebp, esp */
  EBP = (ESP);
  /* 10e93403 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93405 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93407 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93409 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9340c push eax */
  push32((uint32_t)(EAX));
  /* 10e9340d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93410 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93411 call 0x10e93420 */
  push32(0x10e93416u); f_10e93420();
  /* 10e93416 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93419 pop ebp */
  EBP = (pop32());
  /* 10e9341a ret  */
  ESPCHK(0x10e93400u, _esp0);
  ESP += 4; return;
}

/* FUN_10003420 @ 0x10e93420 (64 bytes, 27 insns) */
void f_10e93420(void) {
  FTRACE(0x10e93420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93420 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93421 mov ebp, esp */
  EBP = (ESP);
  /* 10e93423 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93424 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93426 call 0x10e96990 */
  push32(0x10e9342bu); f_10e96990();
  /* 10e9342b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9342e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93430 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e93433 push eax */
  push32((uint32_t)(EAX));
  /* 10e93434 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e93437 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93438 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9343b push edx */
  push32((uint32_t)(EDX));
  /* 10e9343c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9343f push eax */
  push32((uint32_t)(EAX));
  /* 10e93440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93443 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93444 call 0x10e93460 */
  push32(0x10e93449u); f_10e93460();
  /* 10e93449 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9344c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9344f push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93451 call 0x10e96a30 */
  push32(0x10e93456u); f_10e96a30();
  /* 10e93456 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93459 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9345c mov esp, ebp */
  ESP = (EBP);
  /* 10e9345e pop ebp */
  EBP = (pop32());
  /* 10e9345f ret  */
  ESPCHK(0x10e93420u, _esp0);
  ESP += 4; return;
}

/* FUN_10003460 @ 0x10e93460 (1297 bytes, 431 insns) */
void f_10e93460(void) {
  FTRACE(0x10e93460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93460 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93461 mov ebp, esp */
  EBP = (ESP);
  /* 10e93463 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93466 push ebx */
  push32((uint32_t)(EBX));
  /* 10e93467 push esi */
  push32((uint32_t)(ESI));
  /* 10e93468 push edi */
  push32((uint32_t)(EDI));
  /* 10e93469 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e93470 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93474 jne 0x10e93493 */
  if (!C.zf) goto L_10e93493;
  /* 10e93476 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e93479 push eax */
  push32((uint32_t)(EAX));
  /* 10e9347a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9347d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9347e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e93481 push edx */
  push32((uint32_t)(EDX));
  /* 10e93482 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93485 push eax */
  push32((uint32_t)(EAX));
  /* 10e93486 call 0x10e92f90 */
  push32(0x10e9348bu); f_10e92f90();
  /* 10e9348b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9348e jmp 0x10e9396a */
  goto L_10e9396a;
L_10e93493:;
  /* 10e93493 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93497 je 0x10e934b6 */
  if (C.zf) goto L_10e934b6;
  /* 10e93499 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9349d jne 0x10e934b6 */
  if (!C.zf) goto L_10e934b6;
  /* 10e9349f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e934a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e934a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e934a6 push edx */
  push32((uint32_t)(EDX));
  /* 10e934a7 call 0x10e93a20 */
  push32(0x10e934acu); f_10e93a20();
  /* 10e934ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e934af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e934b1 jmp 0x10e9396a */
  goto L_10e9396a;
L_10e934b6:;
  /* 10e934b6 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e934bb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e934be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e934c0 je 0x10e934f2 */
  if (C.zf) goto L_10e934f2;
L_10e934c2:;
  /* 10e934c2 call 0x10e94130 */
  push32(0x10e934c7u); f_10e94130();
  /* 10e934c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e934c9 jne 0x10e934ec */
  if (!C.zf) goto L_10e934ec;
  /* 10e934cb push 0x10eb94dc */
  push32((uint32_t)(0x10eb94dcu));
  /* 10e934d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e934d2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10e934d7 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e934dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10e934de call 0x10e92050 */
  push32(0x10e934e3u); f_10e92050();
  /* 10e934e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e934e6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e934e9 jne 0x10e934ec */
  if (!C.zf) goto L_10e934ec;
  /* 10e934eb int3  */
  x86_unimpl("int3 @ 0x10e934eb");
L_10e934ec:;
  /* 10e934ec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e934ee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e934f0 jne 0x10e934c2 */
  if (!C.zf) goto L_10e934c2;
L_10e934f2:;
  /* 10e934f2 mov edx, dword ptr [0x10ebca90] */
  EDX = (r32((uint32_t)(0x10ebca90)));
  /* 10e934f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e934fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e934fe cmp eax, dword ptr [0x10ebca94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebca94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93504 jne 0x10e93507 */
  if (!C.zf) goto L_10e93507;
  /* 10e93506 int3  */
  x86_unimpl("int3 @ 0x10e93506");
L_10e93507:;
  /* 10e93507 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9350a push ecx */
  push32((uint32_t)(ECX));
  /* 10e9350b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9350e push edx */
  push32((uint32_t)(EDX));
  /* 10e9350f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e93512 push eax */
  push32((uint32_t)(EAX));
  /* 10e93513 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e93516 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93517 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9351a push edx */
  push32((uint32_t)(EDX));
  /* 10e9351b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9351e push eax */
  push32((uint32_t)(EAX));
  /* 10e9351f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93521 call dword ptr [0x10ebcca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebcca0))), 0x10e93527u);
  /* 10e93527 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9352a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9352c jne 0x10e9358c */
  if (!C.zf) goto L_10e9358c;
  /* 10e9352e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93532 je 0x10e9355f */
  if (C.zf) goto L_10e9355f;
L_10e93534:;
  /* 10e93534 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e93537 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93538 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9353b push edx */
  push32((uint32_t)(EDX));
  /* 10e9353c push 0x10eb9658 */
  push32((uint32_t)(0x10eb9658u));
  /* 10e93541 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93547 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93549 call 0x10e92050 */
  push32(0x10e9354eu); f_10e92050();
  /* 10e9354e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93551 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93554 jne 0x10e93557 */
  if (!C.zf) goto L_10e93557;
  /* 10e93556 int3  */
  x86_unimpl("int3 @ 0x10e93556");
L_10e93557:;
  /* 10e93557 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93559 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9355b jne 0x10e93534 */
  if (!C.zf) goto L_10e93534;
  /* 10e9355d jmp 0x10e93585 */
  goto L_10e93585;
L_10e9355f:;
  /* 10e9355f push 0x10eb9634 */
  push32((uint32_t)(0x10eb9634u));
  /* 10e93564 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e93569 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9356b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9356d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9356f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93571 call 0x10e92050 */
  push32(0x10e93576u); f_10e92050();
  /* 10e93576 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93579 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9357c jne 0x10e9357f */
  if (!C.zf) goto L_10e9357f;
  /* 10e9357e int3  */
  x86_unimpl("int3 @ 0x10e9357e");
L_10e9357f:;
  /* 10e9357f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93581 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93583 jne 0x10e9355f */
  if (!C.zf) goto L_10e9355f;
L_10e93585:;
  /* 10e93585 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93587 jmp 0x10e9396a */
  goto L_10e9396a;
L_10e9358c:;
  /* 10e9358c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93590 jbe 0x10e935be */
  if ((C.cf||C.zf)) goto L_10e935be;
L_10e93592:;
  /* 10e93592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93595 push edx */
  push32((uint32_t)(EDX));
  /* 10e93596 push 0x10eb9604 */
  push32((uint32_t)(0x10eb9604u));
  /* 10e9359b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9359d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9359f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e935a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e935a3 call 0x10e92050 */
  push32(0x10e935a8u); f_10e92050();
  /* 10e935a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e935ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e935ae jne 0x10e935b1 */
  if (!C.zf) goto L_10e935b1;
  /* 10e935b0 int3  */
  x86_unimpl("int3 @ 0x10e935b0");
L_10e935b1:;
  /* 10e935b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e935b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e935b5 jne 0x10e93592 */
  if (!C.zf) goto L_10e93592;
  /* 10e935b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e935b9 jmp 0x10e9396a */
  goto L_10e9396a;
L_10e935be:;
  /* 10e935be cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e935c2 je 0x10e93606 */
  if (C.zf) goto L_10e93606;
  /* 10e935c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e935c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e935cd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e935d0 je 0x10e93606 */
  if (C.zf) goto L_10e93606;
  /* 10e935d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e935d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e935db cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e935de je 0x10e93606 */
  if (C.zf) goto L_10e93606;
L_10e935e0:;
  /* 10e935e0 push 0x10eb9418 */
  push32((uint32_t)(0x10eb9418u));
  /* 10e935e5 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e935ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10e935ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10e935ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e935f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e935f2 call 0x10e92050 */
  push32(0x10e935f7u); f_10e92050();
  /* 10e935f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e935fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e935fd jne 0x10e93600 */
  if (!C.zf) goto L_10e93600;
  /* 10e935ff int3  */
  x86_unimpl("int3 @ 0x10e935ff");
L_10e93600:;
  /* 10e93600 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93602 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93604 jne 0x10e935e0 */
  if (!C.zf) goto L_10e935e0;
L_10e93606:;
  /* 10e93606 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93609 push ecx */
  push32((uint32_t)(ECX));
  /* 10e9360a call 0x10e94590 */
  push32(0x10e9360fu); f_10e94590();
  /* 10e9360f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93614 jne 0x10e93637 */
  if (!C.zf) goto L_10e93637;
  /* 10e93616 push 0x10eb95e0 */
  push32((uint32_t)(0x10eb95e0u));
  /* 10e9361b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9361d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10e93622 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93627 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93629 call 0x10e92050 */
  push32(0x10e9362eu); f_10e92050();
  /* 10e9362e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93631 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93634 jne 0x10e93637 */
  if (!C.zf) goto L_10e93637;
  /* 10e93636 int3  */
  x86_unimpl("int3 @ 0x10e93636");
L_10e93637:;
  /* 10e93637 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93639 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9363b jne 0x10e93606 */
  if (!C.zf) goto L_10e93606;
  /* 10e9363d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93640 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93643 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e93646 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93649 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9364d jne 0x10e93656 */
  if (!C.zf) goto L_10e93656;
  /* 10e9364f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10e93656:;
  /* 10e93656 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9365a je 0x10e9369a */
  if (C.zf) goto L_10e9369a;
L_10e9365c:;
  /* 10e9365c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9365f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93666 jne 0x10e93671 */
  if (!C.zf) goto L_10e93671;
  /* 10e93668 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9366b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9366f je 0x10e93692 */
  if (C.zf) goto L_10e93692;
L_10e93671:;
  /* 10e93671 push 0x10eb9598 */
  push32((uint32_t)(0x10eb9598u));
  /* 10e93676 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93678 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10e9367d push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93682 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93684 call 0x10e92050 */
  push32(0x10e93689u); f_10e92050();
  /* 10e93689 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9368c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9368f jne 0x10e93692 */
  if (!C.zf) goto L_10e93692;
  /* 10e93691 int3  */
  x86_unimpl("int3 @ 0x10e93691");
L_10e93692:;
  /* 10e93692 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93694 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93696 jne 0x10e9365c */
  if (!C.zf) goto L_10e9365c;
  /* 10e93698 jmp 0x10e936fe */
  goto L_10e936fe;
L_10e9369a:;
  /* 10e9369a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9369d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e936a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e936a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e936a8 jne 0x10e936bf */
  if (!C.zf) goto L_10e936bf;
  /* 10e936aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e936ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e936b3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e936b6 jne 0x10e936bf */
  if (!C.zf) goto L_10e936bf;
  /* 10e936b8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10e936bf:;
  /* 10e936bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e936c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e936c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e936ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e936cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e936d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e936d5 je 0x10e936f8 */
  if (C.zf) goto L_10e936f8;
  /* 10e936d7 push 0x10eb955c */
  push32((uint32_t)(0x10eb955cu));
  /* 10e936dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e936de push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10e936e3 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e936e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e936ea call 0x10e92050 */
  push32(0x10e936efu); f_10e92050();
  /* 10e936ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e936f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e936f5 jne 0x10e936f8 */
  if (!C.zf) goto L_10e936f8;
  /* 10e936f7 int3  */
  x86_unimpl("int3 @ 0x10e936f7");
L_10e936f8:;
  /* 10e936f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e936fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e936fc jne 0x10e936bf */
  if (!C.zf) goto L_10e936bf;
L_10e936fe:;
  /* 10e936fe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93702 je 0x10e93729 */
  if (C.zf) goto L_10e93729;
  /* 10e93704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93707 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9370a push eax */
  push32((uint32_t)(EAX));
  /* 10e9370b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9370e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9370f call 0x10e96f10 */
  push32(0x10e93714u); f_10e96f10();
  /* 10e93714 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93717 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9371a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9371e jne 0x10e93727 */
  if (!C.zf) goto L_10e93727;
  /* 10e93720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93722 jmp 0x10e9396a */
  goto L_10e9396a;
L_10e93727:;
  /* 10e93727 jmp 0x10e9374c */
  goto L_10e9374c;
L_10e93729:;
  /* 10e93729 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9372c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9372f push edx */
  push32((uint32_t)(EDX));
  /* 10e93730 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93733 push eax */
  push32((uint32_t)(EAX));
  /* 10e93734 call 0x10e96e60 */
  push32(0x10e93739u); f_10e96e60();
  /* 10e93739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9373c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9373f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93743 jne 0x10e9374c */
  if (!C.zf) goto L_10e9374c;
  /* 10e93745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93747 jmp 0x10e9396a */
  goto L_10e9396a;
L_10e9374c:;
  /* 10e9374c mov ecx, dword ptr [0x10ebca90] */
  ECX = (r32((uint32_t)(0x10ebca90)));
  /* 10e93752 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93755 mov dword ptr [0x10ebca90], ecx */
  w32((uint32_t)(0x10ebca90), (ECX));
  /* 10e9375b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9375f jne 0x10e937b7 */
  if (!C.zf) goto L_10e937b7;
  /* 10e93761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93764 mov eax, dword ptr [0x10ebe4c8] */
  EAX = (r32((uint32_t)(0x10ebe4c8)));
  /* 10e93769 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9376c mov dword ptr [0x10ebe4c8], eax */
  w32((uint32_t)(0x10ebe4c8), (EAX));
  /* 10e93771 mov ecx, dword ptr [0x10ebe4c8] */
  ECX = (r32((uint32_t)(0x10ebe4c8)));
  /* 10e93777 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9377a mov dword ptr [0x10ebe4c8], ecx */
  w32((uint32_t)(0x10ebe4c8), (ECX));
  /* 10e93780 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93783 mov eax, dword ptr [0x10ebe4d0] */
  EAX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e93788 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9378b mov dword ptr [0x10ebe4d0], eax */
  w32((uint32_t)(0x10ebe4d0), (EAX));
  /* 10e93790 mov ecx, dword ptr [0x10ebe4d0] */
  ECX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e93796 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93799 mov dword ptr [0x10ebe4d0], ecx */
  w32((uint32_t)(0x10ebe4d0), (ECX));
  /* 10e9379f mov edx, dword ptr [0x10ebe4d0] */
  EDX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e937a5 cmp edx, dword ptr [0x10ebe4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebe4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e937ab jbe 0x10e937b7 */
  if ((C.cf||C.zf)) goto L_10e937b7;
  /* 10e937ad mov eax, dword ptr [0x10ebe4d0] */
  EAX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e937b2 mov dword ptr [0x10ebe4d4], eax */
  w32((uint32_t)(0x10ebe4d4), (EAX));
L_10e937b7:;
  /* 10e937b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e937ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e937bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e937c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e937c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e937c6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e937c9 jbe 0x10e937ef */
  if ((C.cf||C.zf)) goto L_10e937ef;
  /* 10e937cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e937ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e937d1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e937d4 push edx */
  push32((uint32_t)(EDX));
  /* 10e937d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e937d7 mov al, byte ptr [0x10ebca9a] */
  AL = (r8((uint32_t)(0x10ebca9a)));
  /* 10e937dc push eax */
  push32((uint32_t)(EAX));
  /* 10e937dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e937e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e937e3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e937e6 push edx */
  push32((uint32_t)(EDX));
  /* 10e937e7 call 0x10e96d00 */
  push32(0x10e937ecu); f_10e96d00();
  /* 10e937ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e937ef:;
  /* 10e937ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10e937f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e937f3 mov al, byte ptr [0x10ebca98] */
  AL = (r8((uint32_t)(0x10ebca98)));
  /* 10e937f8 push eax */
  push32((uint32_t)(EAX));
  /* 10e937f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e937fc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e937ff push ecx */
  push32((uint32_t)(ECX));
  /* 10e93800 call 0x10e96d00 */
  push32(0x10e93805u); f_10e96d00();
  /* 10e93805 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93808 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9380c jne 0x10e93829 */
  if (!C.zf) goto L_10e93829;
  /* 10e9380e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93811 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e93814 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e93817 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9381a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9381d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10e93820 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93823 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e93826 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10e93829:;
  /* 10e93829 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9382c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9382f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10e93832:;
  /* 10e93832 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93836 jne 0x10e93867 */
  if (!C.zf) goto L_10e93867;
  /* 10e93838 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9383c jne 0x10e93846 */
  if (!C.zf) goto L_10e93846;
  /* 10e9383e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93841 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93844 je 0x10e93867 */
  if (C.zf) goto L_10e93867;
L_10e93846:;
  /* 10e93846 push 0x10eb9528 */
  push32((uint32_t)(0x10eb9528u));
  /* 10e9384b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9384d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10e93852 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93857 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93859 call 0x10e92050 */
  push32(0x10e9385eu); f_10e92050();
  /* 10e9385e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93861 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93864 jne 0x10e93867 */
  if (!C.zf) goto L_10e93867;
  /* 10e93866 int3  */
  x86_unimpl("int3 @ 0x10e93866");
L_10e93867:;
  /* 10e93867 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9386b jne 0x10e93832 */
  if (!C.zf) goto L_10e93832;
  /* 10e9386d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93870 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93873 je 0x10e9387b */
  if (C.zf) goto L_10e9387b;
  /* 10e93875 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93879 je 0x10e93883 */
  if (C.zf) goto L_10e93883;
L_10e9387b:;
  /* 10e9387b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9387e jmp 0x10e9396a */
  goto L_10e9396a;
L_10e93883:;
  /* 10e93883 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93886 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93889 je 0x10e9389b */
  if (C.zf) goto L_10e9389b;
  /* 10e9388b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9388e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e93890 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93893 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e93896 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e93899 jmp 0x10e938d7 */
  goto L_10e938d7;
L_10e9389b:;
  /* 10e9389b mov eax, dword ptr [0x10ebe4c4] */
  EAX = (r32((uint32_t)(0x10ebe4c4)));
  /* 10e938a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e938a3 je 0x10e938c6 */
  if (C.zf) goto L_10e938c6;
  /* 10e938a5 push 0x10eb950c */
  push32((uint32_t)(0x10eb950cu));
  /* 10e938aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e938ac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10e938b1 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e938b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e938b8 call 0x10e92050 */
  push32(0x10e938bdu); f_10e92050();
  /* 10e938bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e938c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e938c3 jne 0x10e938c6 */
  if (!C.zf) goto L_10e938c6;
  /* 10e938c5 int3  */
  x86_unimpl("int3 @ 0x10e938c5");
L_10e938c6:;
  /* 10e938c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e938c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e938ca jne 0x10e9389b */
  if (!C.zf) goto L_10e9389b;
  /* 10e938cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e938cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e938d2 mov dword ptr [0x10ebe4c4], eax */
  w32((uint32_t)(0x10ebe4c4), (EAX));
L_10e938d7:;
  /* 10e938d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e938da cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e938de je 0x10e938ef */
  if (C.zf) goto L_10e938ef;
  /* 10e938e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e938e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e938e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e938e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e938eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e938ed jmp 0x10e9392a */
  goto L_10e9392a;
L_10e938ef:;
  /* 10e938ef mov eax, dword ptr [0x10ebe4cc] */
  EAX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e938f4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e938f7 je 0x10e9391a */
  if (C.zf) goto L_10e9391a;
  /* 10e938f9 push 0x10eb94f0 */
  push32((uint32_t)(0x10eb94f0u));
  /* 10e938fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93900 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10e93905 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e9390a push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9390c call 0x10e92050 */
  push32(0x10e93911u); f_10e92050();
  /* 10e93911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93917 jne 0x10e9391a */
  if (!C.zf) goto L_10e9391a;
  /* 10e93919 int3  */
  x86_unimpl("int3 @ 0x10e93919");
L_10e9391a:;
  /* 10e9391a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9391c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9391e jne 0x10e938ef */
  if (!C.zf) goto L_10e938ef;
  /* 10e93920 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93923 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e93925 mov dword ptr [0x10ebe4cc], eax */
  w32((uint32_t)(0x10ebe4cc), (EAX));
L_10e9392a:;
  /* 10e9392a cmp dword ptr [0x10ebe4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93931 je 0x10e93941 */
  if (C.zf) goto L_10e93941;
  /* 10e93933 mov ecx, dword ptr [0x10ebe4cc] */
  ECX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e93939 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9393c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10e9393f jmp 0x10e93949 */
  goto L_10e93949;
L_10e93941:;
  /* 10e93941 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93944 mov dword ptr [0x10ebe4c4], eax */
  w32((uint32_t)(0x10ebe4c4), (EAX));
L_10e93949:;
  /* 10e93949 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9394c mov edx, dword ptr [0x10ebe4cc] */
  EDX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e93952 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e93954 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93957 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10e9395e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e93961 mov dword ptr [0x10ebe4cc], ecx */
  w32((uint32_t)(0x10ebe4cc), (ECX));
  /* 10e93967 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e9396a:;
  /* 10e9396a pop edi */
  EDI = (pop32());
  /* 10e9396b pop esi */
  ESI = (pop32());
  /* 10e9396c pop ebx */
  EBX = (pop32());
  /* 10e9396d mov esp, ebp */
  ESP = (EBP);
  /* 10e9396f pop ebp */
  EBP = (pop32());
  /* 10e93970 ret  */
  ESPCHK(0x10e93460u, _esp0);
  ESP += 4; return;
}

/* FUN_10003980 @ 0x10e93980 (27 bytes, 13 insns) */
void f_10e93980(void) {
  FTRACE(0x10e93980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93980 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93981 mov ebp, esp */
  EBP = (ESP);
  /* 10e93983 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93987 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93989 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9398c push eax */
  push32((uint32_t)(EAX));
  /* 10e9398d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93990 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93991 call 0x10e939a0 */
  push32(0x10e93996u); f_10e939a0();
  /* 10e93996 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93999 pop ebp */
  EBP = (pop32());
  /* 10e9399a ret  */
  ESPCHK(0x10e93980u, _esp0);
  ESP += 4; return;
}

/* FUN_100039a0 @ 0x10e939a0 (64 bytes, 27 insns) */
void f_10e939a0(void) {
  FTRACE(0x10e939a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e939a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e939a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e939a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e939a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e939a6 call 0x10e96990 */
  push32(0x10e939abu); f_10e96990();
  /* 10e939ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e939ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10e939b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e939b3 push eax */
  push32((uint32_t)(EAX));
  /* 10e939b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e939b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e939b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e939bb push edx */
  push32((uint32_t)(EDX));
  /* 10e939bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e939bf push eax */
  push32((uint32_t)(EAX));
  /* 10e939c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e939c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e939c4 call 0x10e93460 */
  push32(0x10e939c9u); f_10e93460();
  /* 10e939c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e939cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e939cf push 9 */
  push32((uint32_t)(0x9u));
  /* 10e939d1 call 0x10e96a30 */
  push32(0x10e939d6u); f_10e96a30();
  /* 10e939d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e939d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e939dc mov esp, ebp */
  ESP = (EBP);
  /* 10e939de pop ebp */
  EBP = (pop32());
  /* 10e939df ret  */
  ESPCHK(0x10e939a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039e0 @ 0x10e939e0 (19 bytes, 9 insns) */
void f_10e939e0(void) {
  FTRACE(0x10e939e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e939e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e939e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e939e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e939e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e939e8 push eax */
  push32((uint32_t)(EAX));
  /* 10e939e9 call 0x10e93a20 */
  push32(0x10e939eeu); f_10e93a20();
  /* 10e939ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e939f1 pop ebp */
  EBP = (pop32());
  /* 10e939f2 ret  */
  ESPCHK(0x10e939e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a00 @ 0x10e93a00 (19 bytes, 9 insns) */
void f_10e93a00(void) {
  FTRACE(0x10e93a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93a01 mov ebp, esp */
  EBP = (ESP);
  /* 10e93a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93a08 push eax */
  push32((uint32_t)(EAX));
  /* 10e93a09 call 0x10e93a50 */
  push32(0x10e93a0eu); f_10e93a50();
  /* 10e93a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93a11 pop ebp */
  EBP = (pop32());
  /* 10e93a12 ret  */
  ESPCHK(0x10e93a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x10e93a20 (41 bytes, 16 insns) */
void f_10e93a20(void) {
  FTRACE(0x10e93a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93a21 mov ebp, esp */
  EBP = (ESP);
  /* 10e93a23 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93a25 call 0x10e96990 */
  push32(0x10e93a2au); f_10e96990();
  /* 10e93a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93a2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93a30 push eax */
  push32((uint32_t)(EAX));
  /* 10e93a31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93a34 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93a35 call 0x10e93a50 */
  push32(0x10e93a3au); f_10e93a50();
  /* 10e93a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93a3d push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93a3f call 0x10e96a30 */
  push32(0x10e93a44u); f_10e96a30();
  /* 10e93a44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93a47 pop ebp */
  EBP = (pop32());
  /* 10e93a48 ret  */
  ESPCHK(0x10e93a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x10e93a50 (1004 bytes, 342 insns) */
void f_10e93a50(void) {
  FTRACE(0x10e93a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93a51 mov ebp, esp */
  EBP = (ESP);
  /* 10e93a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93a54 push ebx */
  push32((uint32_t)(EBX));
  /* 10e93a55 push esi */
  push32((uint32_t)(ESI));
  /* 10e93a56 push edi */
  push32((uint32_t)(EDI));
  /* 10e93a57 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93a5c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e93a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93a61 je 0x10e93a93 */
  if (C.zf) goto L_10e93a93;
L_10e93a63:;
  /* 10e93a63 call 0x10e94130 */
  push32(0x10e93a68u); f_10e94130();
  /* 10e93a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93a6a jne 0x10e93a8d */
  if (!C.zf) goto L_10e93a8d;
  /* 10e93a6c push 0x10eb94dc */
  push32((uint32_t)(0x10eb94dcu));
  /* 10e93a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93a73 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10e93a78 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93a7f call 0x10e92050 */
  push32(0x10e93a84u); f_10e92050();
  /* 10e93a84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93a87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93a8a jne 0x10e93a8d */
  if (!C.zf) goto L_10e93a8d;
  /* 10e93a8c int3  */
  x86_unimpl("int3 @ 0x10e93a8c");
L_10e93a8d:;
  /* 10e93a8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93a8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93a91 jne 0x10e93a63 */
  if (!C.zf) goto L_10e93a63;
L_10e93a93:;
  /* 10e93a93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93a97 jne 0x10e93a9e */
  if (!C.zf) goto L_10e93a9e;
  /* 10e93a99 jmp 0x10e93e35 */
  goto L_10e93e35;
L_10e93a9e:;
  /* 10e93a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93aa4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e93aa7 push edx */
  push32((uint32_t)(EDX));
  /* 10e93aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93aaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93aad push eax */
  push32((uint32_t)(EAX));
  /* 10e93aae push 3 */
  push32((uint32_t)(0x3u));
  /* 10e93ab0 call dword ptr [0x10ebcca0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebcca0))), 0x10e93ab6u);
  /* 10e93ab6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ab9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93abb jne 0x10e93ae8 */
  if (!C.zf) goto L_10e93ae8;
L_10e93abd:;
  /* 10e93abd push 0x10eb97a0 */
  push32((uint32_t)(0x10eb97a0u));
  /* 10e93ac2 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e93ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93acb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93acd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93acf call 0x10e92050 */
  push32(0x10e93ad4u); f_10e92050();
  /* 10e93ad4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ad7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93ada jne 0x10e93add */
  if (!C.zf) goto L_10e93add;
  /* 10e93adc int3  */
  x86_unimpl("int3 @ 0x10e93adc");
L_10e93add:;
  /* 10e93add xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93adf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93ae1 jne 0x10e93abd */
  if (!C.zf) goto L_10e93abd;
  /* 10e93ae3 jmp 0x10e93e35 */
  goto L_10e93e35;
L_10e93ae8:;
  /* 10e93ae8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93aeb push edx */
  push32((uint32_t)(EDX));
  /* 10e93aec call 0x10e94590 */
  push32(0x10e93af1u); f_10e94590();
  /* 10e93af1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93af6 jne 0x10e93b19 */
  if (!C.zf) goto L_10e93b19;
  /* 10e93af8 push 0x10eb95e0 */
  push32((uint32_t)(0x10eb95e0u));
  /* 10e93afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93aff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10e93b04 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93b09 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93b0b call 0x10e92050 */
  push32(0x10e93b10u); f_10e92050();
  /* 10e93b10 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93b13 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b16 jne 0x10e93b19 */
  if (!C.zf) goto L_10e93b19;
  /* 10e93b18 int3  */
  x86_unimpl("int3 @ 0x10e93b18");
L_10e93b19:;
  /* 10e93b19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93b1b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93b1d jne 0x10e93ae8 */
  if (!C.zf) goto L_10e93ae8;
  /* 10e93b1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93b22 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93b25 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e93b28:;
  /* 10e93b28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93b2b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93b2e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e93b33 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b36 je 0x10e93b7b */
  if (C.zf) goto L_10e93b7b;
  /* 10e93b38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93b3b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b3f je 0x10e93b7b */
  if (C.zf) goto L_10e93b7b;
  /* 10e93b41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93b44 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93b47 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e93b4c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b4f je 0x10e93b7b */
  if (C.zf) goto L_10e93b7b;
  /* 10e93b51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93b54 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b58 je 0x10e93b7b */
  if (C.zf) goto L_10e93b7b;
  /* 10e93b5a push 0x10eb9778 */
  push32((uint32_t)(0x10eb9778u));
  /* 10e93b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93b61 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10e93b66 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93b6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93b6d call 0x10e92050 */
  push32(0x10e93b72u); f_10e92050();
  /* 10e93b72 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93b75 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93b78 jne 0x10e93b7b */
  if (!C.zf) goto L_10e93b7b;
  /* 10e93b7a int3  */
  x86_unimpl("int3 @ 0x10e93b7a");
L_10e93b7b:;
  /* 10e93b7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93b7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e93b7f jne 0x10e93b28 */
  if (!C.zf) goto L_10e93b28;
  /* 10e93b81 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93b86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e93b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93b8b jne 0x10e93c56 */
  if (!C.zf) goto L_10e93c56;
  /* 10e93b91 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e93b93 mov cl, byte ptr [0x10ebca98] */
  CL = (r8((uint32_t)(0x10ebca98)));
  /* 10e93b99 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93b9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93b9d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ba0 push edx */
  push32((uint32_t)(EDX));
  /* 10e93ba1 call 0x10e940a0 */
  push32(0x10e93ba6u); f_10e940a0();
  /* 10e93ba6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93bab jne 0x10e93bf0 */
  if (!C.zf) goto L_10e93bf0;
L_10e93bad:;
  /* 10e93bad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93bb0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93bb3 push eax */
  push32((uint32_t)(EAX));
  /* 10e93bb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93bb7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e93bba push edx */
  push32((uint32_t)(EDX));
  /* 10e93bbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93bbe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e93bc1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e93bc7 mov edx, dword ptr [ecx*4 + 0x10ebca9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca9c)));
  /* 10e93bce push edx */
  push32((uint32_t)(EDX));
  /* 10e93bcf push 0x10eb974c */
  push32((uint32_t)(0x10eb974cu));
  /* 10e93bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93bd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93bd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93bda push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93bdc call 0x10e92050 */
  push32(0x10e93be1u); f_10e92050();
  /* 10e93be1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93be4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93be7 jne 0x10e93bea */
  if (!C.zf) goto L_10e93bea;
  /* 10e93be9 int3  */
  x86_unimpl("int3 @ 0x10e93be9");
L_10e93bea:;
  /* 10e93bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93bee jne 0x10e93bad */
  if (!C.zf) goto L_10e93bad;
L_10e93bf0:;
  /* 10e93bf0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e93bf2 mov cl, byte ptr [0x10ebca98] */
  CL = (r8((uint32_t)(0x10ebca98)));
  /* 10e93bf8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93bf9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93bfc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e93bff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c02 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e93c06 push edx */
  push32((uint32_t)(EDX));
  /* 10e93c07 call 0x10e940a0 */
  push32(0x10e93c0cu); f_10e940a0();
  /* 10e93c0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93c0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93c11 jne 0x10e93c56 */
  if (!C.zf) goto L_10e93c56;
L_10e93c13:;
  /* 10e93c13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93c19 push eax */
  push32((uint32_t)(EAX));
  /* 10e93c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c1d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e93c20 push edx */
  push32((uint32_t)(EDX));
  /* 10e93c21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c24 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e93c27 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e93c2d mov edx, dword ptr [ecx*4 + 0x10ebca9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca9c)));
  /* 10e93c34 push edx */
  push32((uint32_t)(EDX));
  /* 10e93c35 push 0x10eb9720 */
  push32((uint32_t)(0x10eb9720u));
  /* 10e93c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93c42 call 0x10e92050 */
  push32(0x10e93c47u); f_10e92050();
  /* 10e93c47 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93c4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93c4d jne 0x10e93c50 */
  if (!C.zf) goto L_10e93c50;
  /* 10e93c4f int3  */
  x86_unimpl("int3 @ 0x10e93c4f");
L_10e93c50:;
  /* 10e93c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93c54 jne 0x10e93c13 */
  if (!C.zf) goto L_10e93c13;
L_10e93c56:;
  /* 10e93c56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c59 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93c5d jne 0x10e93ccb */
  if (!C.zf) goto L_10e93ccb;
L_10e93c5f:;
  /* 10e93c5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c62 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93c69 jne 0x10e93c74 */
  if (!C.zf) goto L_10e93c74;
  /* 10e93c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c6e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93c72 je 0x10e93c95 */
  if (C.zf) goto L_10e93c95;
L_10e93c74:;
  /* 10e93c74 push 0x10eb96e0 */
  push32((uint32_t)(0x10eb96e0u));
  /* 10e93c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93c7b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10e93c80 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93c85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93c87 call 0x10e92050 */
  push32(0x10e93c8cu); f_10e92050();
  /* 10e93c8c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93c8f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93c92 jne 0x10e93c95 */
  if (!C.zf) goto L_10e93c95;
  /* 10e93c94 int3  */
  x86_unimpl("int3 @ 0x10e93c94");
L_10e93c95:;
  /* 10e93c95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93c97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93c99 jne 0x10e93c5f */
  if (!C.zf) goto L_10e93c5f;
  /* 10e93c9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93c9e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e93ca1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10e93ca5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93ca7 mov cl, byte ptr [0x10ebca99] */
  CL = (r8((uint32_t)(0x10ebca99)));
  /* 10e93cad push ecx */
  push32((uint32_t)(ECX));
  /* 10e93cae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93cb1 push edx */
  push32((uint32_t)(EDX));
  /* 10e93cb2 call 0x10e96d00 */
  push32(0x10e93cb7u); f_10e96d00();
  /* 10e93cb7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93cba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93cbd push eax */
  push32((uint32_t)(EAX));
  /* 10e93cbe call 0x10e97100 */
  push32(0x10e93cc3u); f_10e97100();
  /* 10e93cc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93cc6 jmp 0x10e93e35 */
  goto L_10e93e35;
L_10e93ccb:;
  /* 10e93ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93cce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93cd2 jne 0x10e93ce1 */
  if (!C.zf) goto L_10e93ce1;
  /* 10e93cd4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93cd8 jne 0x10e93ce1 */
  if (!C.zf) goto L_10e93ce1;
  /* 10e93cda mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e93ce1:;
  /* 10e93ce1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93ce4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93ce7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93cea je 0x10e93d0d */
  if (C.zf) goto L_10e93d0d;
  /* 10e93cec push 0x10eb96c0 */
  push32((uint32_t)(0x10eb96c0u));
  /* 10e93cf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93cf3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10e93cf8 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93cfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93cff call 0x10e92050 */
  push32(0x10e93d04u); f_10e92050();
  /* 10e93d04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93d07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93d0a jne 0x10e93d0d */
  if (!C.zf) goto L_10e93d0d;
  /* 10e93d0c int3  */
  x86_unimpl("int3 @ 0x10e93d0c");
L_10e93d0d:;
  /* 10e93d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93d0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93d11 jne 0x10e93ce1 */
  if (!C.zf) goto L_10e93ce1;
  /* 10e93d13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d16 mov eax, dword ptr [0x10ebe4d0] */
  EAX = (r32((uint32_t)(0x10ebe4d0)));
  /* 10e93d1b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93d1e mov dword ptr [0x10ebe4d0], eax */
  w32((uint32_t)(0x10ebe4d0), (EAX));
  /* 10e93d23 mov ecx, dword ptr [0x10ebca8c] */
  ECX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93d29 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10e93d2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93d2e jne 0x10e93e0c */
  if (!C.zf) goto L_10e93e0c;
  /* 10e93d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d37 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93d3a je 0x10e93d4c */
  if (C.zf) goto L_10e93d4c;
  /* 10e93d3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d3f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e93d41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e93d47 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e93d4a jmp 0x10e93d8a */
  goto L_10e93d8a;
L_10e93d4c:;
  /* 10e93d4c mov ecx, dword ptr [0x10ebe4c4] */
  ECX = (r32((uint32_t)(0x10ebe4c4)));
  /* 10e93d52 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93d55 je 0x10e93d78 */
  if (C.zf) goto L_10e93d78;
  /* 10e93d57 push 0x10eb96a8 */
  push32((uint32_t)(0x10eb96a8u));
  /* 10e93d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93d5e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10e93d63 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93d68 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93d6a call 0x10e92050 */
  push32(0x10e93d6fu); f_10e92050();
  /* 10e93d6f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93d72 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93d75 jne 0x10e93d78 */
  if (!C.zf) goto L_10e93d78;
  /* 10e93d77 int3  */
  x86_unimpl("int3 @ 0x10e93d77");
L_10e93d78:;
  /* 10e93d78 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93d7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e93d7c jne 0x10e93d4c */
  if (!C.zf) goto L_10e93d4c;
  /* 10e93d7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d81 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e93d84 mov dword ptr [0x10ebe4c4], ecx */
  w32((uint32_t)(0x10ebe4c4), (ECX));
L_10e93d8a:;
  /* 10e93d8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d8d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93d91 je 0x10e93da2 */
  if (C.zf) goto L_10e93da2;
  /* 10e93d93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e93d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93d9c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e93d9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e93da0 jmp 0x10e93ddf */
  goto L_10e93ddf;
L_10e93da2:;
  /* 10e93da2 mov ecx, dword ptr [0x10ebe4cc] */
  ECX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e93da8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93dab je 0x10e93dce */
  if (C.zf) goto L_10e93dce;
  /* 10e93dad push 0x10eb9690 */
  push32((uint32_t)(0x10eb9690u));
  /* 10e93db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93db4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10e93db9 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93dbe push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93dc0 call 0x10e92050 */
  push32(0x10e93dc5u); f_10e92050();
  /* 10e93dc5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93dc8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93dcb jne 0x10e93dce */
  if (!C.zf) goto L_10e93dce;
  /* 10e93dcd int3  */
  x86_unimpl("int3 @ 0x10e93dcd");
L_10e93dce:;
  /* 10e93dce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93dd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e93dd2 jne 0x10e93da2 */
  if (!C.zf) goto L_10e93da2;
  /* 10e93dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93dd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e93dd9 mov dword ptr [0x10ebe4cc], ecx */
  w32((uint32_t)(0x10ebe4cc), (ECX));
L_10e93ddf:;
  /* 10e93ddf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93de2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e93de5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93de8 push eax */
  push32((uint32_t)(EAX));
  /* 10e93de9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93deb mov cl, byte ptr [0x10ebca99] */
  CL = (r8((uint32_t)(0x10ebca99)));
  /* 10e93df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93df2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93df5 push edx */
  push32((uint32_t)(EDX));
  /* 10e93df6 call 0x10e96d00 */
  push32(0x10e93dfbu); f_10e96d00();
  /* 10e93dfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93dfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93e01 push eax */
  push32((uint32_t)(EAX));
  /* 10e93e02 call 0x10e97100 */
  push32(0x10e93e07u); f_10e97100();
  /* 10e93e07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93e0a jmp 0x10e93e35 */
  goto L_10e93e35;
L_10e93e0c:;
  /* 10e93e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93e0f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10e93e16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93e19 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e93e1c push eax */
  push32((uint32_t)(EAX));
  /* 10e93e1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93e1f mov cl, byte ptr [0x10ebca99] */
  CL = (r8((uint32_t)(0x10ebca99)));
  /* 10e93e25 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93e29 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93e2c push edx */
  push32((uint32_t)(EDX));
  /* 10e93e2d call 0x10e96d00 */
  push32(0x10e93e32u); f_10e96d00();
  /* 10e93e32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e93e35:;
  /* 10e93e35 pop edi */
  EDI = (pop32());
  /* 10e93e36 pop esi */
  ESI = (pop32());
  /* 10e93e37 pop ebx */
  EBX = (pop32());
  /* 10e93e38 mov esp, ebp */
  ESP = (EBP);
  /* 10e93e3a pop ebp */
  EBP = (pop32());
  /* 10e93e3b ret  */
  ESPCHK(0x10e93a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e40 @ 0x10e93e40 (19 bytes, 9 insns) */
void f_10e93e40(void) {
  FTRACE(0x10e93e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93e41 mov ebp, esp */
  EBP = (ESP);
  /* 10e93e43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e93e45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93e48 push eax */
  push32((uint32_t)(EAX));
  /* 10e93e49 call 0x10e93e60 */
  push32(0x10e93e4eu); f_10e93e60();
  /* 10e93e4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93e51 pop ebp */
  EBP = (pop32());
  /* 10e93e52 ret  */
  ESPCHK(0x10e93e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e60 @ 0x10e93e60 (342 bytes, 119 insns) */
void f_10e93e60(void) {
  FTRACE(0x10e93e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e93e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93e66 push ebx */
  push32((uint32_t)(EBX));
  /* 10e93e67 push esi */
  push32((uint32_t)(ESI));
  /* 10e93e68 push edi */
  push32((uint32_t)(EDI));
  /* 10e93e69 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e93e6e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e93e71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93e73 je 0x10e93ea5 */
  if (C.zf) goto L_10e93ea5;
L_10e93e75:;
  /* 10e93e75 call 0x10e94130 */
  push32(0x10e93e7au); f_10e94130();
  /* 10e93e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93e7c jne 0x10e93e9f */
  if (!C.zf) goto L_10e93e9f;
  /* 10e93e7e push 0x10eb94dc */
  push32((uint32_t)(0x10eb94dcu));
  /* 10e93e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93e85 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10e93e8a push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93e8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93e91 call 0x10e92050 */
  push32(0x10e93e96u); f_10e92050();
  /* 10e93e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93e99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93e9c jne 0x10e93e9f */
  if (!C.zf) goto L_10e93e9f;
  /* 10e93e9e int3  */
  x86_unimpl("int3 @ 0x10e93e9e");
L_10e93e9f:;
  /* 10e93e9f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93ea1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93ea3 jne 0x10e93e75 */
  if (!C.zf) goto L_10e93e75;
L_10e93ea5:;
  /* 10e93ea5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93ea7 call 0x10e96990 */
  push32(0x10e93eacu); f_10e96990();
  /* 10e93eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e93eaf:;
  /* 10e93eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10e93eb3 call 0x10e94590 */
  push32(0x10e93eb8u); f_10e94590();
  /* 10e93eb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ebb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93ebd jne 0x10e93ee0 */
  if (!C.zf) goto L_10e93ee0;
  /* 10e93ebf push 0x10eb95e0 */
  push32((uint32_t)(0x10eb95e0u));
  /* 10e93ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93ec6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10e93ecb push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93ed0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93ed2 call 0x10e92050 */
  push32(0x10e93ed7u); f_10e92050();
  /* 10e93ed7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93eda cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93edd jne 0x10e93ee0 */
  if (!C.zf) goto L_10e93ee0;
  /* 10e93edf int3  */
  x86_unimpl("int3 @ 0x10e93edf");
L_10e93ee0:;
  /* 10e93ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e93ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93ee4 jne 0x10e93eaf */
  if (!C.zf) goto L_10e93eaf;
  /* 10e93ee6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93ee9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e93eec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e93eef:;
  /* 10e93eef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93ef2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93ef5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e93efa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93efd je 0x10e93f42 */
  if (C.zf) goto L_10e93f42;
  /* 10e93eff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f02 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f06 je 0x10e93f42 */
  if (C.zf) goto L_10e93f42;
  /* 10e93f08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f0b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93f0e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e93f13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f16 je 0x10e93f42 */
  if (C.zf) goto L_10e93f42;
  /* 10e93f18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f1b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f1f je 0x10e93f42 */
  if (C.zf) goto L_10e93f42;
  /* 10e93f21 push 0x10eb9778 */
  push32((uint32_t)(0x10eb9778u));
  /* 10e93f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93f28 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10e93f2d push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93f32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93f34 call 0x10e92050 */
  push32(0x10e93f39u); f_10e92050();
  /* 10e93f39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93f3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f3f jne 0x10e93f42 */
  if (!C.zf) goto L_10e93f42;
  /* 10e93f41 int3  */
  x86_unimpl("int3 @ 0x10e93f41");
L_10e93f42:;
  /* 10e93f42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e93f44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e93f46 jne 0x10e93eef */
  if (!C.zf) goto L_10e93eef;
  /* 10e93f48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f4b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f4f jne 0x10e93f5e */
  if (!C.zf) goto L_10e93f5e;
  /* 10e93f51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f55 jne 0x10e93f5e */
  if (!C.zf) goto L_10e93f5e;
  /* 10e93f57 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10e93f5e:;
  /* 10e93f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f61 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f65 je 0x10e93f99 */
  if (C.zf) goto L_10e93f99;
L_10e93f67:;
  /* 10e93f67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e93f6d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f70 je 0x10e93f93 */
  if (C.zf) goto L_10e93f93;
  /* 10e93f72 push 0x10eb96c0 */
  push32((uint32_t)(0x10eb96c0u));
  /* 10e93f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e93f79 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10e93f7e push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e93f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e93f85 call 0x10e92050 */
  push32(0x10e93f8au); f_10e92050();
  /* 10e93f8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93f8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e93f90 jne 0x10e93f93 */
  if (!C.zf) goto L_10e93f93;
  /* 10e93f92 int3  */
  x86_unimpl("int3 @ 0x10e93f92");
L_10e93f93:;
  /* 10e93f93 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e93f95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e93f97 jne 0x10e93f67 */
  if (!C.zf) goto L_10e93f67;
L_10e93f99:;
  /* 10e93f99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e93f9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e93f9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e93fa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93fa4 call 0x10e96a30 */
  push32(0x10e93fa9u); f_10e96a30();
  /* 10e93fa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93fac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93faf pop edi */
  EDI = (pop32());
  /* 10e93fb0 pop esi */
  ESI = (pop32());
  /* 10e93fb1 pop ebx */
  EBX = (pop32());
  /* 10e93fb2 mov esp, ebp */
  ESP = (EBP);
  /* 10e93fb4 pop ebp */
  EBP = (pop32());
  /* 10e93fb5 ret  */
  ESPCHK(0x10e93e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x10e93fc0 (28 bytes, 11 insns) */
void f_10e93fc0(void) {
  FTRACE(0x10e93fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e93fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93fc4 mov eax, dword ptr [0x10ebca94] */
  EAX = (r32((uint32_t)(0x10ebca94)));
  /* 10e93fc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e93fcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93fcf mov dword ptr [0x10ebca94], ecx */
  w32((uint32_t)(0x10ebca94), (ECX));
  /* 10e93fd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e93fd8 mov esp, ebp */
  ESP = (EBP);
  /* 10e93fda pop ebp */
  EBP = (pop32());
  /* 10e93fdb ret  */
  ESPCHK(0x10e93fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fe0 @ 0x10e93fe0 (157 bytes, 59 insns) */
void f_10e93fe0(void) {
  FTRACE(0x10e93fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e93fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e93fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10e93fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e93fe4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e93fe5 push esi */
  push32((uint32_t)(ESI));
  /* 10e93fe6 push edi */
  push32((uint32_t)(EDI));
  /* 10e93fe7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e93fe9 call 0x10e96990 */
  push32(0x10e93feeu); f_10e96990();
  /* 10e93fee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ff1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e93ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10e93ff5 call 0x10e94590 */
  push32(0x10e93ffau); f_10e94590();
  /* 10e93ffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e93ffd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e93fff je 0x10e9406c */
  if (C.zf) goto L_10e9406c;
  /* 10e94001 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94004 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94007 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e9400a:;
  /* 10e9400a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9400d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94010 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94015 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94018 je 0x10e9405d */
  if (C.zf) goto L_10e9405d;
  /* 10e9401a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9401d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94021 je 0x10e9405d */
  if (C.zf) goto L_10e9405d;
  /* 10e94023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94026 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94029 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9402e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94031 je 0x10e9405d */
  if (C.zf) goto L_10e9405d;
  /* 10e94033 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94036 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9403a je 0x10e9405d */
  if (C.zf) goto L_10e9405d;
  /* 10e9403c push 0x10eb9778 */
  push32((uint32_t)(0x10eb9778u));
  /* 10e94041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94043 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10e94048 push 0x10eb94d0 */
  push32((uint32_t)(0x10eb94d0u));
  /* 10e9404d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9404f call 0x10e92050 */
  push32(0x10e94054u); f_10e92050();
  /* 10e94054 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94057 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9405a jne 0x10e9405d */
  if (!C.zf) goto L_10e9405d;
  /* 10e9405c int3  */
  x86_unimpl("int3 @ 0x10e9405c");
L_10e9405d:;
  /* 10e9405d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9405f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94061 jne 0x10e9400a */
  if (!C.zf) goto L_10e9400a;
  /* 10e94063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94066 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94069 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10e9406c:;
  /* 10e9406c push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9406e call 0x10e96a30 */
  push32(0x10e94073u); f_10e96a30();
  /* 10e94073 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94076 pop edi */
  EDI = (pop32());
  /* 10e94077 pop esi */
  ESI = (pop32());
  /* 10e94078 pop ebx */
  EBX = (pop32());
  /* 10e94079 mov esp, ebp */
  ESP = (EBP);
  /* 10e9407b pop ebp */
  EBP = (pop32());
  /* 10e9407c ret  */
  ESPCHK(0x10e93fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004080 @ 0x10e94080 (28 bytes, 11 insns) */
void f_10e94080(void) {
  FTRACE(0x10e94080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94080 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94081 mov ebp, esp */
  EBP = (ESP);
  /* 10e94083 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94084 mov eax, dword ptr [0x10ebcca0] */
  EAX = (r32((uint32_t)(0x10ebcca0)));
  /* 10e94089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9408c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9408f mov dword ptr [0x10ebcca0], ecx */
  w32((uint32_t)(0x10ebcca0), (ECX));
  /* 10e94095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94098 mov esp, ebp */
  ESP = (EBP);
  /* 10e9409a pop ebp */
  EBP = (pop32());
  /* 10e9409b ret  */
  ESPCHK(0x10e94080u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x10e940a0 (136 bytes, 55 insns) */
void f_10e940a0(void) {
  FTRACE(0x10e940a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e940a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e940a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e940a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e940a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10e940a5 push esi */
  push32((uint32_t)(ESI));
  /* 10e940a6 push edi */
  push32((uint32_t)(EDI));
  /* 10e940a7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10e940ae:;
  /* 10e940ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e940b1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e940b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e940b7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e940ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e940bc je 0x10e9411e */
  if (C.zf) goto L_10e9411e;
  /* 10e940be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e940c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e940c3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e940c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e940c8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e940ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e940d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e940d4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e940d7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e940d9 je 0x10e9411c */
  if (C.zf) goto L_10e9411c;
L_10e940db:;
  /* 10e940db mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e940de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e940e3 push eax */
  push32((uint32_t)(EAX));
  /* 10e940e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e940e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e940e9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10e940ec push edx */
  push32((uint32_t)(EDX));
  /* 10e940ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e940f0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e940f3 push eax */
  push32((uint32_t)(EAX));
  /* 10e940f4 push 0x10eb97bc */
  push32((uint32_t)(0x10eb97bcu));
  /* 10e940f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e940fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e940fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e940ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94101 call 0x10e92050 */
  push32(0x10e94106u); f_10e92050();
  /* 10e94106 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94109 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9410c jne 0x10e9410f */
  if (!C.zf) goto L_10e9410f;
  /* 10e9410e int3  */
  x86_unimpl("int3 @ 0x10e9410e");
L_10e9410f:;
  /* 10e9410f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e94111 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94113 jne 0x10e940db */
  if (!C.zf) goto L_10e940db;
  /* 10e94115 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e9411c:;
  /* 10e9411c jmp 0x10e940ae */
  goto L_10e940ae;
L_10e9411e:;
  /* 10e9411e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94121 pop edi */
  EDI = (pop32());
  /* 10e94122 pop esi */
  ESI = (pop32());
  /* 10e94123 pop ebx */
  EBX = (pop32());
  /* 10e94124 mov esp, ebp */
  ESP = (EBP);
  /* 10e94126 pop ebp */
  EBP = (pop32());
  /* 10e94127 ret  */
  ESPCHK(0x10e940a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004130 @ 0x10e94130 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10e94130(void) {
  FTRACE(0x10e94130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94130 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94131 mov ebp, esp */
  EBP = (ESP);
  /* 10e94133 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94136 push ebx */
  push32((uint32_t)(EBX));
  /* 10e94137 push esi */
  push32((uint32_t)(ESI));
  /* 10e94138 push edi */
  push32((uint32_t)(EDI));
  /* 10e94139 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e94140 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e94145 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e94148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9414a jne 0x10e94156 */
  if (!C.zf) goto L_10e94156;
  /* 10e9414c mov eax, 1 */
  EAX = (0x1u);
  /* 10e94151 jmp 0x10e94488 */
  goto L_10e94488;
L_10e94156:;
  /* 10e94156 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e94158 call 0x10e96990 */
  push32(0x10e9415du); f_10e96990();
  /* 10e9415d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94160 call 0x10e97170 */
  push32(0x10e94165u); f_10e97170();
  /* 10e94165 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e94168 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9416c je 0x10e94279 */
  if (C.zf) goto L_10e94279;
  /* 10e94172 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94176 je 0x10e94279 */
  if (C.zf) goto L_10e94279;
  /* 10e9417c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9417f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10e94182 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e94185 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94188 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e9418b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9418f ja 0x10e94242 */
  if ((!C.cf&&!C.zf)) goto L_10e94242;
  /* 10e94195 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e94198 jmp dword ptr [eax*4 + 0x10e9448f] */
  switch (EAX) {
    case 0: goto L_10e9421a;
    case 1: goto L_10e941f2;
    case 2: goto L_10e941ca;
    case 3: goto L_10e9419f;
    default: x86_unimpl("switch@0x10e94198 out of table"); return;
  }
L_10e9419f:;
  /* 10e9419f push 0x10eb9910 */
  push32((uint32_t)(0x10eb9910u));
  /* 10e941a4 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e941a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941b1 call 0x10e92050 */
  push32(0x10e941b6u); f_10e92050();
  /* 10e941b6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e941b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e941bc jne 0x10e941bf */
  if (!C.zf) goto L_10e941bf;
  /* 10e941be int3  */
  x86_unimpl("int3 @ 0x10e941be");
L_10e941bf:;
  /* 10e941bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e941c1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e941c3 jne 0x10e9419f */
  if (!C.zf) goto L_10e9419f;
  /* 10e941c5 jmp 0x10e94268 */
  goto L_10e94268;
L_10e941ca:;
  /* 10e941ca push 0x10eb98ec */
  push32((uint32_t)(0x10eb98ecu));
  /* 10e941cf push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e941d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941da push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941dc call 0x10e92050 */
  push32(0x10e941e1u); f_10e92050();
  /* 10e941e1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e941e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e941e7 jne 0x10e941ea */
  if (!C.zf) goto L_10e941ea;
  /* 10e941e9 int3  */
  x86_unimpl("int3 @ 0x10e941e9");
L_10e941ea:;
  /* 10e941ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e941ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e941ee jne 0x10e941ca */
  if (!C.zf) goto L_10e941ca;
  /* 10e941f0 jmp 0x10e94268 */
  goto L_10e94268;
L_10e941f2:;
  /* 10e941f2 push 0x10eb98c8 */
  push32((uint32_t)(0x10eb98c8u));
  /* 10e941f7 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e941fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e941fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94200 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94202 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94204 call 0x10e92050 */
  push32(0x10e94209u); f_10e92050();
  /* 10e94209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9420c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9420f jne 0x10e94212 */
  if (!C.zf) goto L_10e94212;
  /* 10e94211 int3  */
  x86_unimpl("int3 @ 0x10e94211");
L_10e94212:;
  /* 10e94212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94216 jne 0x10e941f2 */
  if (!C.zf) goto L_10e941f2;
  /* 10e94218 jmp 0x10e94268 */
  goto L_10e94268;
L_10e9421a:;
  /* 10e9421a push 0x10eb98a4 */
  push32((uint32_t)(0x10eb98a4u));
  /* 10e9421f push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e94224 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94226 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94228 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9422a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9422c call 0x10e92050 */
  push32(0x10e94231u); f_10e92050();
  /* 10e94231 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94234 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94237 jne 0x10e9423a */
  if (!C.zf) goto L_10e9423a;
  /* 10e94239 int3  */
  x86_unimpl("int3 @ 0x10e94239");
L_10e9423a:;
  /* 10e9423a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e9423c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9423e jne 0x10e9421a */
  if (!C.zf) goto L_10e9421a;
  /* 10e94240 jmp 0x10e94268 */
  goto L_10e94268;
L_10e94242:;
  /* 10e94242 push 0x10eb9878 */
  push32((uint32_t)(0x10eb9878u));
  /* 10e94247 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e9424c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9424e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94250 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94252 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94254 call 0x10e92050 */
  push32(0x10e94259u); f_10e92050();
  /* 10e94259 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9425c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9425f jne 0x10e94262 */
  if (!C.zf) goto L_10e94262;
  /* 10e94261 int3  */
  x86_unimpl("int3 @ 0x10e94261");
L_10e94262:;
  /* 10e94262 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94264 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94266 jne 0x10e94242 */
  if (!C.zf) goto L_10e94242;
L_10e94268:;
  /* 10e94268 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9426a call 0x10e96a30 */
  push32(0x10e9426fu); f_10e96a30();
  /* 10e9426f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94272 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94274 jmp 0x10e94488 */
  goto L_10e94488;
L_10e94279:;
  /* 10e94279 mov eax, dword ptr [0x10ebe4cc] */
  EAX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e9427e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e94281 jmp 0x10e9428b */
  goto L_10e9428b;
L_10e94283:;
  /* 10e94283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94286 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e94288 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e9428b:;
  /* 10e9428b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9428f je 0x10e9447b */
  if (C.zf) goto L_10e9447b;
  /* 10e94295 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10e9429c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9429f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e942a2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e942a8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e942ab je 0x10e942d0 */
  if (C.zf) goto L_10e942d0;
  /* 10e942ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e942b0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e942b4 je 0x10e942d0 */
  if (C.zf) goto L_10e942d0;
  /* 10e942b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e942b9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e942bc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e942c2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e942c5 je 0x10e942d0 */
  if (C.zf) goto L_10e942d0;
  /* 10e942c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e942ca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e942ce jne 0x10e942e8 */
  if (!C.zf) goto L_10e942e8;
L_10e942d0:;
  /* 10e942d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e942d3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e942d6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e942dc mov edx, dword ptr [ecx*4 + 0x10ebca9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca9c)));
  /* 10e942e3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e942e6 jmp 0x10e942ef */
  goto L_10e942ef;
L_10e942e8:;
  /* 10e942e8 mov dword ptr [ebp - 0x14], 0x10eb9870 */
  w32((uint32_t)(EBP + -0x14), (0x10eb9870u));
L_10e942ef:;
  /* 10e942ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10e942f1 mov al, byte ptr [0x10ebca98] */
  AL = (r8((uint32_t)(0x10ebca98)));
  /* 10e942f6 push eax */
  push32((uint32_t)(EAX));
  /* 10e942f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e942fa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e942fd push ecx */
  push32((uint32_t)(ECX));
  /* 10e942fe call 0x10e940a0 */
  push32(0x10e94303u); f_10e940a0();
  /* 10e94303 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94306 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94308 jne 0x10e94344 */
  if (!C.zf) goto L_10e94344;
L_10e9430a:;
  /* 10e9430a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9430d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94310 push edx */
  push32((uint32_t)(EDX));
  /* 10e94311 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94314 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e94317 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94318 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9431b push edx */
  push32((uint32_t)(EDX));
  /* 10e9431c push 0x10eb974c */
  push32((uint32_t)(0x10eb974cu));
  /* 10e94321 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94323 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94325 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94327 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94329 call 0x10e92050 */
  push32(0x10e9432eu); f_10e92050();
  /* 10e9432e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94331 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94334 jne 0x10e94337 */
  if (!C.zf) goto L_10e94337;
  /* 10e94336 int3  */
  x86_unimpl("int3 @ 0x10e94336");
L_10e94337:;
  /* 10e94337 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94339 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9433b jne 0x10e9430a */
  if (!C.zf) goto L_10e9430a;
  /* 10e9433d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e94344:;
  /* 10e94344 push 4 */
  push32((uint32_t)(0x4u));
  /* 10e94346 mov cl, byte ptr [0x10ebca98] */
  CL = (r8((uint32_t)(0x10ebca98)));
  /* 10e9434c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9434d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94350 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e94353 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94356 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10e9435a push edx */
  push32((uint32_t)(EDX));
  /* 10e9435b call 0x10e940a0 */
  push32(0x10e94360u); f_10e940a0();
  /* 10e94360 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94363 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94365 jne 0x10e943a1 */
  if (!C.zf) goto L_10e943a1;
L_10e94367:;
  /* 10e94367 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9436a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9436d push eax */
  push32((uint32_t)(EAX));
  /* 10e9436e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94371 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e94374 push edx */
  push32((uint32_t)(EDX));
  /* 10e94375 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e94378 push eax */
  push32((uint32_t)(EAX));
  /* 10e94379 push 0x10eb9720 */
  push32((uint32_t)(0x10eb9720u));
  /* 10e9437e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94380 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94382 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94384 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94386 call 0x10e92050 */
  push32(0x10e9438bu); f_10e92050();
  /* 10e9438b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9438e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94391 jne 0x10e94394 */
  if (!C.zf) goto L_10e94394;
  /* 10e94393 int3  */
  x86_unimpl("int3 @ 0x10e94393");
L_10e94394:;
  /* 10e94394 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e94396 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94398 jne 0x10e94367 */
  if (!C.zf) goto L_10e94367;
  /* 10e9439a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e943a1:;
  /* 10e943a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e943a4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e943a8 jne 0x10e943fa */
  if (!C.zf) goto L_10e943fa;
  /* 10e943aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e943ad mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e943b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e943b1 mov dl, byte ptr [0x10ebca99] */
  DL = (r8((uint32_t)(0x10ebca99)));
  /* 10e943b7 push edx */
  push32((uint32_t)(EDX));
  /* 10e943b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e943bb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e943be push eax */
  push32((uint32_t)(EAX));
  /* 10e943bf call 0x10e940a0 */
  push32(0x10e943c4u); f_10e940a0();
  /* 10e943c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e943c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e943c9 jne 0x10e943fa */
  if (!C.zf) goto L_10e943fa;
L_10e943cb:;
  /* 10e943cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e943ce add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e943d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10e943d2 push 0x10eb9844 */
  push32((uint32_t)(0x10eb9844u));
  /* 10e943d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e943d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e943db push 0 */
  push32((uint32_t)(0x0u));
  /* 10e943dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10e943df call 0x10e92050 */
  push32(0x10e943e4u); f_10e92050();
  /* 10e943e4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e943e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e943ea jne 0x10e943ed */
  if (!C.zf) goto L_10e943ed;
  /* 10e943ec int3  */
  x86_unimpl("int3 @ 0x10e943ec");
L_10e943ed:;
  /* 10e943ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e943ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e943f1 jne 0x10e943cb */
  if (!C.zf) goto L_10e943cb;
  /* 10e943f3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e943fa:;
  /* 10e943fa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e943fe jne 0x10e94476 */
  if (!C.zf) goto L_10e94476;
  /* 10e94400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94403 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94407 je 0x10e9443c */
  if (C.zf) goto L_10e9443c;
L_10e94409:;
  /* 10e94409 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9440c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10e9440f push edx */
  push32((uint32_t)(EDX));
  /* 10e94410 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94413 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e94416 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94417 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9441a push edx */
  push32((uint32_t)(EDX));
  /* 10e9441b push 0x10eb9824 */
  push32((uint32_t)(0x10eb9824u));
  /* 10e94420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94426 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94428 call 0x10e92050 */
  push32(0x10e9442du); f_10e92050();
  /* 10e9442d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94430 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94433 jne 0x10e94436 */
  if (!C.zf) goto L_10e94436;
  /* 10e94435 int3  */
  x86_unimpl("int3 @ 0x10e94435");
L_10e94436:;
  /* 10e94436 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9443a jne 0x10e94409 */
  if (!C.zf) goto L_10e94409;
L_10e9443c:;
  /* 10e9443c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9443f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e94442 push edx */
  push32((uint32_t)(EDX));
  /* 10e94443 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94446 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94449 push eax */
  push32((uint32_t)(EAX));
  /* 10e9444a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9444d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9444e push 0x10eb97f8 */
  push32((uint32_t)(0x10eb97f8u));
  /* 10e94453 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94457 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94459 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9445b call 0x10e92050 */
  push32(0x10e94460u); f_10e92050();
  /* 10e94460 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94463 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94466 jne 0x10e94469 */
  if (!C.zf) goto L_10e94469;
  /* 10e94468 int3  */
  x86_unimpl("int3 @ 0x10e94468");
L_10e94469:;
  /* 10e94469 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9446b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9446d jne 0x10e9443c */
  if (!C.zf) goto L_10e9443c;
  /* 10e9446f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e94476:;
  /* 10e94476 jmp 0x10e94283 */
  goto L_10e94283;
L_10e9447b:;
  /* 10e9447b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9447d call 0x10e96a30 */
  push32(0x10e94482u); f_10e96a30();
  /* 10e94482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e94488:;
  /* 10e94488 pop edi */
  EDI = (pop32());
  /* 10e94489 pop esi */
  ESI = (pop32());
  /* 10e9448a pop ebx */
  EBX = (pop32());
  /* 10e9448b mov esp, ebp */
  ESP = (EBP);
  /* 10e9448d pop ebp */
  EBP = (pop32());
  /* 10e9448e ret  */
  ESPCHK(0x10e94130u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x10e944a0 (34 bytes, 13 insns) */
void f_10e944a0(void) {
  FTRACE(0x10e944a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e944a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e944a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e944a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e944a4 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e944a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e944ac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e944b0 je 0x10e944bb */
  if (C.zf) goto L_10e944bb;
  /* 10e944b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e944b5 mov dword ptr [0x10ebca8c], ecx */
  w32((uint32_t)(0x10ebca8c), (ECX));
L_10e944bb:;
  /* 10e944bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e944be mov esp, ebp */
  ESP = (EBP);
  /* 10e944c0 pop ebp */
  EBP = (pop32());
  /* 10e944c1 ret  */
  ESPCHK(0x10e944a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x10e944d0 (103 bytes, 38 insns) */
void f_10e944d0(void) {
  FTRACE(0x10e944d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e944d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e944d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e944d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e944d4 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e944d9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10e944dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e944de jne 0x10e944e2 */
  if (!C.zf) goto L_10e944e2;
  /* 10e944e0 jmp 0x10e94533 */
  goto L_10e94533;
L_10e944e2:;
  /* 10e944e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e944e4 call 0x10e96990 */
  push32(0x10e944e9u); f_10e96990();
  /* 10e944e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e944ec mov ecx, dword ptr [0x10ebe4cc] */
  ECX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e944f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e944f5 jmp 0x10e944ff */
  goto L_10e944ff;
L_10e944f7:;
  /* 10e944f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e944fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e944fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e944ff:;
  /* 10e944ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94503 je 0x10e94529 */
  if (C.zf) goto L_10e94529;
  /* 10e94505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94508 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e9450b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94511 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94514 jne 0x10e94527 */
  if (!C.zf) goto L_10e94527;
  /* 10e94516 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94519 push eax */
  push32((uint32_t)(EAX));
  /* 10e9451a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9451d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94520 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94521 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10e94524u);
  /* 10e94524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94527:;
  /* 10e94527 jmp 0x10e944f7 */
  goto L_10e944f7;
L_10e94529:;
  /* 10e94529 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9452b call 0x10e96a30 */
  push32(0x10e94530u); f_10e96a30();
  /* 10e94530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94533:;
  /* 10e94533 mov esp, ebp */
  ESP = (EBP);
  /* 10e94535 pop ebp */
  EBP = (pop32());
  /* 10e94536 ret  */
  ESPCHK(0x10e944d0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10e94540 (75 bytes, 28 insns) */
void f_10e94540(void) {
  FTRACE(0x10e94540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94540 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94541 mov ebp, esp */
  EBP = (ESP);
  /* 10e94543 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94544 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94548 je 0x10e9457d */
  if (C.zf) goto L_10e9457d;
  /* 10e9454a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9454d push eax */
  push32((uint32_t)(EAX));
  /* 10e9454e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94551 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94552 call dword ptr [0x10ec034c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec034c))), 0x10e94558u);
  /* 10e94558 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9455a jne 0x10e9457d */
  if (!C.zf) goto L_10e9457d;
  /* 10e9455c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94560 je 0x10e94574 */
  if (C.zf) goto L_10e94574;
  /* 10e94562 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94565 push edx */
  push32((uint32_t)(EDX));
  /* 10e94566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94569 push eax */
  push32((uint32_t)(EAX));
  /* 10e9456a call dword ptr [0x10ec0348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0348))), 0x10e94570u);
  /* 10e94570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94572 jne 0x10e9457d */
  if (!C.zf) goto L_10e9457d;
L_10e94574:;
  /* 10e94574 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e9457b jmp 0x10e94584 */
  goto L_10e94584;
L_10e9457d:;
  /* 10e9457d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e94584:;
  /* 10e94584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94587 mov esp, ebp */
  ESP = (EBP);
  /* 10e94589 pop ebp */
  EBP = (pop32());
  /* 10e9458a ret  */
  ESPCHK(0x10e94540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10e94590 (134 bytes, 50 insns) */
void f_10e94590(void) {
  FTRACE(0x10e94590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94590 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94591 mov ebp, esp */
  EBP = (ESP);
  /* 10e94593 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94594 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94598 jne 0x10e9459e */
  if (!C.zf) goto L_10e9459e;
  /* 10e9459a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9459c jmp 0x10e94612 */
  goto L_10e94612;
L_10e9459e:;
  /* 10e9459e push 1 */
  push32((uint32_t)(0x1u));
  /* 10e945a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10e945a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e945a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e945a8 push eax */
  push32((uint32_t)(EAX));
  /* 10e945a9 call 0x10e94540 */
  push32(0x10e945aeu); f_10e94540();
  /* 10e945ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e945b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e945b3 jne 0x10e945b9 */
  if (!C.zf) goto L_10e945b9;
  /* 10e945b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e945b7 jmp 0x10e94612 */
  goto L_10e94612;
L_10e945b9:;
  /* 10e945b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e945bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e945bf push ecx */
  push32((uint32_t)(ECX));
  /* 10e945c0 call 0x10e97290 */
  push32(0x10e945c5u); f_10e97290();
  /* 10e945c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e945c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e945cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e945cf je 0x10e945e6 */
  if (C.zf) goto L_10e945e6;
  /* 10e945d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e945d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e945d7 push edx */
  push32((uint32_t)(EDX));
  /* 10e945d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e945db push eax */
  push32((uint32_t)(EAX));
  /* 10e945dc call 0x10e972f0 */
  push32(0x10e945e1u); f_10e972f0();
  /* 10e945e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e945e4 jmp 0x10e94612 */
  goto L_10e94612;
L_10e945e6:;
  /* 10e945e6 mov ecx, dword ptr [0x10ebe480] */
  ECX = (r32((uint32_t)(0x10ebe480)));
  /* 10e945ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10e945f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e945f4 je 0x10e945fd */
  if (C.zf) goto L_10e945fd;
  /* 10e945f6 mov eax, 1 */
  EAX = (0x1u);
  /* 10e945fb jmp 0x10e94612 */
  goto L_10e94612;
L_10e945fd:;
  /* 10e945fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94600 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94603 push edx */
  push32((uint32_t)(EDX));
  /* 10e94604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94606 mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e9460b push eax */
  push32((uint32_t)(EAX));
  /* 10e9460c call dword ptr [0x10ec0350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0350))), 0x10e94612u);
L_10e94612:;
  /* 10e94612 mov esp, ebp */
  ESP = (EBP);
  /* 10e94614 pop ebp */
  EBP = (pop32());
  /* 10e94615 ret  */
  ESPCHK(0x10e94590u, _esp0);
  ESP += 4; return;
}

/* FUN_10004620 @ 0x10e94620 (227 bytes, 80 insns) */
void f_10e94620(void) {
  FTRACE(0x10e94620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94620 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94621 mov ebp, esp */
  EBP = (ESP);
  /* 10e94623 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94624 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94627 push eax */
  push32((uint32_t)(EAX));
  /* 10e94628 call 0x10e94590 */
  push32(0x10e9462du); f_10e94590();
  /* 10e9462d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94630 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94632 jne 0x10e9463b */
  if (!C.zf) goto L_10e9463b;
  /* 10e94634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94636 jmp 0x10e946ff */
  goto L_10e946ff;
L_10e9463b:;
  /* 10e9463b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9463d call 0x10e96990 */
  push32(0x10e94642u); f_10e96990();
  /* 10e94642 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94645 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94648 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9464b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e9464e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94651 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94654 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94659 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9465c je 0x10e94680 */
  if (C.zf) goto L_10e94680;
  /* 10e9465e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94661 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94665 je 0x10e94680 */
  if (C.zf) goto L_10e94680;
  /* 10e94667 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9466a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e9466d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94672 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94675 je 0x10e94680 */
  if (C.zf) goto L_10e94680;
  /* 10e94677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9467a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9467e jne 0x10e946f3 */
  if (!C.zf) goto L_10e946f3;
L_10e94680:;
  /* 10e94680 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e94682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94685 push edx */
  push32((uint32_t)(EDX));
  /* 10e94686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94689 push eax */
  push32((uint32_t)(EAX));
  /* 10e9468a call 0x10e94540 */
  push32(0x10e9468fu); f_10e94540();
  /* 10e9468f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94692 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94694 je 0x10e946f3 */
  if (C.zf) goto L_10e946f3;
  /* 10e94696 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94699 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e9469c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9469f jne 0x10e946f3 */
  if (!C.zf) goto L_10e946f3;
  /* 10e946a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e946a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e946a7 cmp ecx, dword ptr [0x10ebca90] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebca90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e946ad jg 0x10e946f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e946f3;
  /* 10e946af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e946b3 je 0x10e946c0 */
  if (C.zf) goto L_10e946c0;
  /* 10e946b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e946b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e946bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10e946be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e946c0:;
  /* 10e946c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e946c4 je 0x10e946d1 */
  if (C.zf) goto L_10e946d1;
  /* 10e946c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e946c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e946cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e946cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e946d1:;
  /* 10e946d1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e946d5 je 0x10e946e2 */
  if (C.zf) goto L_10e946e2;
  /* 10e946d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e946da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e946dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e946e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e946e2:;
  /* 10e946e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e946e4 call 0x10e96a30 */
  push32(0x10e946e9u); f_10e96a30();
  /* 10e946e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e946ec mov eax, 1 */
  EAX = (0x1u);
  /* 10e946f1 jmp 0x10e946ff */
  goto L_10e946ff;
L_10e946f3:;
  /* 10e946f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e946f5 call 0x10e96a30 */
  push32(0x10e946fau); f_10e96a30();
  /* 10e946fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e946fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e946ff:;
  /* 10e946ff mov esp, ebp */
  ESP = (EBP);
  /* 10e94701 pop ebp */
  EBP = (pop32());
  /* 10e94702 ret  */
  ESPCHK(0x10e94620u, _esp0);
  ESP += 4; return;
}

/* FUN_10004710 @ 0x10e94710 (28 bytes, 11 insns) */
void f_10e94710(void) {
  FTRACE(0x10e94710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94710 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94711 mov ebp, esp */
  EBP = (ESP);
  /* 10e94713 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94714 mov eax, dword ptr [0x10ebfe38] */
  EAX = (r32((uint32_t)(0x10ebfe38)));
  /* 10e94719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9471c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9471f mov dword ptr [0x10ebfe38], ecx */
  w32((uint32_t)(0x10ebfe38), (ECX));
  /* 10e94725 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94728 mov esp, ebp */
  ESP = (EBP);
  /* 10e9472a pop ebp */
  EBP = (pop32());
  /* 10e9472b ret  */
  ESPCHK(0x10e94710u, _esp0);
  ESP += 4; return;
}

/* FUN_10004730 @ 0x10e94730 (362 bytes, 116 insns) */
void f_10e94730(void) {
  FTRACE(0x10e94730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94730 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94731 mov ebp, esp */
  EBP = (ESP);
  /* 10e94733 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94736 push ebx */
  push32((uint32_t)(EBX));
  /* 10e94737 push esi */
  push32((uint32_t)(ESI));
  /* 10e94738 push edi */
  push32((uint32_t)(EDI));
  /* 10e94739 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9473d jne 0x10e9476a */
  if (!C.zf) goto L_10e9476a;
L_10e9473f:;
  /* 10e9473f push 0x10eb9958 */
  push32((uint32_t)(0x10eb9958u));
  /* 10e94744 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e94749 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9474b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9474d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9474f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94751 call 0x10e92050 */
  push32(0x10e94756u); f_10e92050();
  /* 10e94756 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94759 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9475c jne 0x10e9475f */
  if (!C.zf) goto L_10e9475f;
  /* 10e9475e int3  */
  x86_unimpl("int3 @ 0x10e9475e");
L_10e9475f:;
  /* 10e9475f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94763 jne 0x10e9473f */
  if (!C.zf) goto L_10e9473f;
  /* 10e94765 jmp 0x10e94893 */
  goto L_10e94893;
L_10e9476a:;
  /* 10e9476a push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9476c call 0x10e96990 */
  push32(0x10e94771u); f_10e96990();
  /* 10e94771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94774 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94777 mov edx, dword ptr [0x10ebe4cc] */
  EDX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e9477d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e9477f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e94786 jmp 0x10e94791 */
  goto L_10e94791;
L_10e94788:;
  /* 10e94788 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9478b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9478e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e94791:;
  /* 10e94791 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94795 jge 0x10e947b5 */
  if ((C.sf==C.of)) goto L_10e947b5;
  /* 10e94797 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9479a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9479d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10e947a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e947a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e947ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10e947b3 jmp 0x10e94788 */
  goto L_10e94788;
L_10e947b5:;
  /* 10e947b5 mov edx, dword ptr [0x10ebe4cc] */
  EDX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e947bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10e947be jmp 0x10e947c8 */
  goto L_10e947c8;
L_10e947c0:;
  /* 10e947c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e947c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e947c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e947c8:;
  /* 10e947c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e947cc je 0x10e94871 */
  if (C.zf) goto L_10e94871;
  /* 10e947d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e947d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e947d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e947dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e947df jl 0x10e94847 */
  if ((C.sf!=C.of)) goto L_10e94847;
  /* 10e947e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e947e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e947e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e947ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e947f0 jge 0x10e94847 */
  if ((C.sf==C.of)) goto L_10e94847;
  /* 10e947f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e947f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e947f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e947fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94801 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10e94805 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94808 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9480b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e9480e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94817 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10e9481b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9481e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94821 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94829 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e9482d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94830 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94833 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94836 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e94839 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9483e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94841 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e94845 jmp 0x10e9486c */
  goto L_10e9486c;
L_10e94847:;
  /* 10e94847 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9484a push edx */
  push32((uint32_t)(EDX));
  /* 10e9484b push 0x10eb9934 */
  push32((uint32_t)(0x10eb9934u));
  /* 10e94850 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94852 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94854 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94856 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94858 call 0x10e92050 */
  push32(0x10e9485du); f_10e92050();
  /* 10e9485d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94860 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94863 jne 0x10e94866 */
  if (!C.zf) goto L_10e94866;
  /* 10e94865 int3  */
  x86_unimpl("int3 @ 0x10e94865");
L_10e94866:;
  /* 10e94866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9486a jne 0x10e94847 */
  if (!C.zf) goto L_10e94847;
L_10e9486c:;
  /* 10e9486c jmp 0x10e947c0 */
  goto L_10e947c0;
L_10e94871:;
  /* 10e94871 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94874 mov edx, dword ptr [0x10ebe4d4] */
  EDX = (r32((uint32_t)(0x10ebe4d4)));
  /* 10e9487a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10e9487d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94880 mov ecx, dword ptr [0x10ebe4c8] */
  ECX = (r32((uint32_t)(0x10ebe4c8)));
  /* 10e94886 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10e94889 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9488b call 0x10e96a30 */
  push32(0x10e94890u); f_10e96a30();
  /* 10e94890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94893:;
  /* 10e94893 pop edi */
  EDI = (pop32());
  /* 10e94894 pop esi */
  ESI = (pop32());
  /* 10e94895 pop ebx */
  EBX = (pop32());
  /* 10e94896 mov esp, ebp */
  ESP = (EBP);
  /* 10e94898 pop ebp */
  EBP = (pop32());
  /* 10e94899 ret  */
  ESPCHK(0x10e94730u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a0 @ 0x10e948a0 (291 bytes, 95 insns) */
void f_10e948a0(void) {
  FTRACE(0x10e948a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e948a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e948a1 mov ebp, esp */
  EBP = (ESP);
  /* 10e948a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e948a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e948a7 push esi */
  push32((uint32_t)(ESI));
  /* 10e948a8 push edi */
  push32((uint32_t)(EDI));
  /* 10e948a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e948b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e948b4 je 0x10e948c2 */
  if (C.zf) goto L_10e948c2;
  /* 10e948b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e948ba je 0x10e948c2 */
  if (C.zf) goto L_10e948c2;
  /* 10e948bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e948c0 jne 0x10e948f0 */
  if (!C.zf) goto L_10e948f0;
L_10e948c2:;
  /* 10e948c2 push 0x10eb9980 */
  push32((uint32_t)(0x10eb9980u));
  /* 10e948c7 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e948cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e948ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10e948d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e948d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e948d4 call 0x10e92050 */
  push32(0x10e948d9u); f_10e92050();
  /* 10e948d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e948dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e948df jne 0x10e948e2 */
  if (!C.zf) goto L_10e948e2;
  /* 10e948e1 int3  */
  x86_unimpl("int3 @ 0x10e948e1");
L_10e948e2:;
  /* 10e948e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e948e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e948e6 jne 0x10e948c2 */
  if (!C.zf) goto L_10e948c2;
  /* 10e948e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e948eb jmp 0x10e949bc */
  goto L_10e949bc;
L_10e948f0:;
  /* 10e948f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e948f7 jmp 0x10e94902 */
  goto L_10e94902;
L_10e948f9:;
  /* 10e948f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e948fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e948ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e94902:;
  /* 10e94902 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94906 jge 0x10e9498c */
  if ((C.sf==C.of)) goto L_10e9498c;
  /* 10e9490c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9490f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e94912 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94915 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94918 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10e9491c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94926 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10e9492a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9492d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e94930 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94933 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94936 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10e9493a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9493e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94941 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94944 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10e94948 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9494b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9494e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94953 jne 0x10e94962 */
  if (!C.zf) goto L_10e94962;
  /* 10e94955 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94958 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9495b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94960 je 0x10e94987 */
  if (C.zf) goto L_10e94987;
L_10e94962:;
  /* 10e94962 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94966 je 0x10e94987 */
  if (C.zf) goto L_10e94987;
  /* 10e94968 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9496c jne 0x10e94980 */
  if (!C.zf) goto L_10e94980;
  /* 10e9496e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94972 jne 0x10e94987 */
  if (!C.zf) goto L_10e94987;
  /* 10e94974 mov eax, dword ptr [0x10ebca8c] */
  EAX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e94979 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10e9497c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9497e je 0x10e94987 */
  if (C.zf) goto L_10e94987;
L_10e94980:;
  /* 10e94980 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10e94987:;
  /* 10e94987 jmp 0x10e948f9 */
  goto L_10e948f9;
L_10e9498c:;
  /* 10e9498c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9498f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e94992 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e94995 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94998 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9499b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10e9499e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e949a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e949a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10e949a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e949aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e949ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10e949b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e949b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e949b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10e949bc:;
  /* 10e949bc pop edi */
  EDI = (pop32());
  /* 10e949bd pop esi */
  ESI = (pop32());
  /* 10e949be pop ebx */
  EBX = (pop32());
  /* 10e949bf mov esp, ebp */
  ESP = (EBP);
  /* 10e949c1 pop ebp */
  EBP = (pop32());
  /* 10e949c2 ret  */
  ESPCHK(0x10e948a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100049d0 @ 0x10e949d0 (697 bytes, 253 insns) */
void f_10e949d0(void) {
  FTRACE(0x10e949d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e949d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e949d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e949d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e949d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e949d7 push esi */
  push32((uint32_t)(ESI));
  /* 10e949d8 push edi */
  push32((uint32_t)(EDI));
  /* 10e949d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e949e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e949e2 call 0x10e96990 */
  push32(0x10e949e7u); f_10e96990();
  /* 10e949e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e949ea:;
  /* 10e949ea push 0x10eb9a78 */
  push32((uint32_t)(0x10eb9a78u));
  /* 10e949ef push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e949f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e949f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e949f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e949fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e949fc call 0x10e92050 */
  push32(0x10e94a01u); f_10e92050();
  /* 10e94a01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94a04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a07 jne 0x10e94a0a */
  if (!C.zf) goto L_10e94a0a;
  /* 10e94a09 int3  */
  x86_unimpl("int3 @ 0x10e94a09");
L_10e94a0a:;
  /* 10e94a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94a0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94a0e jne 0x10e949ea */
  if (!C.zf) goto L_10e949ea;
  /* 10e94a10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a14 je 0x10e94a1e */
  if (C.zf) goto L_10e94a1e;
  /* 10e94a16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94a19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e94a1b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e94a1e:;
  /* 10e94a1e mov eax, dword ptr [0x10ebe4cc] */
  EAX = (r32((uint32_t)(0x10ebe4cc)));
  /* 10e94a23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e94a26 jmp 0x10e94a30 */
  goto L_10e94a30;
L_10e94a28:;
  /* 10e94a28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e94a2d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e94a30:;
  /* 10e94a30 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a34 je 0x10e94c52 */
  if (C.zf) goto L_10e94c52;
  /* 10e94a3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a3d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a40 je 0x10e94c52 */
  if (C.zf) goto L_10e94c52;
  /* 10e94a46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a49 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e94a4c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94a52 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a55 je 0x10e94a84 */
  if (C.zf) goto L_10e94a84;
  /* 10e94a57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a5a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10e94a5d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e94a63 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94a65 je 0x10e94a84 */
  if (C.zf) goto L_10e94a84;
  /* 10e94a67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94a6d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94a72 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a75 jne 0x10e94a89 */
  if (!C.zf) goto L_10e94a89;
  /* 10e94a77 mov ecx, dword ptr [0x10ebca8c] */
  ECX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e94a7d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e94a80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94a82 jne 0x10e94a89 */
  if (!C.zf) goto L_10e94a89;
L_10e94a84:;
  /* 10e94a84 jmp 0x10e94c4d */
  goto L_10e94c4d;
L_10e94a89:;
  /* 10e94a89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a8c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94a90 je 0x10e94b02 */
  if (C.zf) goto L_10e94b02;
  /* 10e94a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94a94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e94a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94a99 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10e94a9c push ecx */
  push32((uint32_t)(ECX));
  /* 10e94a9d call 0x10e94540 */
  push32(0x10e94aa2u); f_10e94540();
  /* 10e94aa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94aa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94aa7 jne 0x10e94ad3 */
  if (!C.zf) goto L_10e94ad3;
L_10e94aa9:;
  /* 10e94aa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94aac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e94aaf push eax */
  push32((uint32_t)(EAX));
  /* 10e94ab0 push 0x10eb9a64 */
  push32((uint32_t)(0x10eb9a64u));
  /* 10e94ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ab7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94abd call 0x10e92050 */
  push32(0x10e94ac2u); f_10e92050();
  /* 10e94ac2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94ac5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94ac8 jne 0x10e94acb */
  if (!C.zf) goto L_10e94acb;
  /* 10e94aca int3  */
  x86_unimpl("int3 @ 0x10e94aca");
L_10e94acb:;
  /* 10e94acb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e94acd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94acf jne 0x10e94aa9 */
  if (!C.zf) goto L_10e94aa9;
  /* 10e94ad1 jmp 0x10e94b02 */
  goto L_10e94b02;
L_10e94ad3:;
  /* 10e94ad3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94ad6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e94ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10e94ada mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94add mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e94ae0 push edx */
  push32((uint32_t)(EDX));
  /* 10e94ae1 push 0x10eb9a58 */
  push32((uint32_t)(0x10eb9a58u));
  /* 10e94ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ae8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94aea push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94aee call 0x10e92050 */
  push32(0x10e94af3u); f_10e92050();
  /* 10e94af3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94af6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94af9 jne 0x10e94afc */
  if (!C.zf) goto L_10e94afc;
  /* 10e94afb int3  */
  x86_unimpl("int3 @ 0x10e94afb");
L_10e94afc:;
  /* 10e94afc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94b00 jne 0x10e94ad3 */
  if (!C.zf) goto L_10e94ad3;
L_10e94b02:;
  /* 10e94b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b05 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10e94b08 push edx */
  push32((uint32_t)(EDX));
  /* 10e94b09 push 0x10eb9a50 */
  push32((uint32_t)(0x10eb9a50u));
  /* 10e94b0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b16 call 0x10e92050 */
  push32(0x10e94b1bu); f_10e92050();
  /* 10e94b1b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94b1e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94b21 jne 0x10e94b24 */
  if (!C.zf) goto L_10e94b24;
  /* 10e94b23 int3  */
  x86_unimpl("int3 @ 0x10e94b23");
L_10e94b24:;
  /* 10e94b24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94b28 jne 0x10e94b02 */
  if (!C.zf) goto L_10e94b02;
  /* 10e94b2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b2d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e94b30 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94b36 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94b39 jne 0x10e94bac */
  if (!C.zf) goto L_10e94bac;
L_10e94b3b:;
  /* 10e94b3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b3e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e94b41 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b45 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94b48 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e94b4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94b50 push eax */
  push32((uint32_t)(EAX));
  /* 10e94b51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b54 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94b57 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94b58 push 0x10eb9a1c */
  push32((uint32_t)(0x10eb9a1cu));
  /* 10e94b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94b65 call 0x10e92050 */
  push32(0x10e94b6au); f_10e92050();
  /* 10e94b6a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94b6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94b70 jne 0x10e94b73 */
  if (!C.zf) goto L_10e94b73;
  /* 10e94b72 int3  */
  x86_unimpl("int3 @ 0x10e94b72");
L_10e94b73:;
  /* 10e94b73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94b75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94b77 jne 0x10e94b3b */
  if (!C.zf) goto L_10e94b3b;
  /* 10e94b79 cmp dword ptr [0x10ebfe38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94b80 je 0x10e94b9b */
  if (C.zf) goto L_10e94b9b;
  /* 10e94b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b85 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e94b88 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94b89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b8c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94b8f push edx */
  push32((uint32_t)(EDX));
  /* 10e94b90 call dword ptr [0x10ebfe38] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebfe38))), 0x10e94b96u);
  /* 10e94b96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94b99 jmp 0x10e94ba7 */
  goto L_10e94ba7;
L_10e94b9b:;
  /* 10e94b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94b9e push eax */
  push32((uint32_t)(EAX));
  /* 10e94b9f call 0x10e94c90 */
  push32(0x10e94ba4u); f_10e94c90();
  /* 10e94ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94ba7:;
  /* 10e94ba7 jmp 0x10e94c4d */
  goto L_10e94c4d;
L_10e94bac:;
  /* 10e94bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94baf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94bb3 jne 0x10e94bf2 */
  if (!C.zf) goto L_10e94bf2;
L_10e94bb5:;
  /* 10e94bb5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94bb8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e94bbb push eax */
  push32((uint32_t)(EAX));
  /* 10e94bbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94bbf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94bc3 push 0x10eb99f4 */
  push32((uint32_t)(0x10eb99f4u));
  /* 10e94bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94bca push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94bd0 call 0x10e92050 */
  push32(0x10e94bd5u); f_10e92050();
  /* 10e94bd5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94bd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94bdb jne 0x10e94bde */
  if (!C.zf) goto L_10e94bde;
  /* 10e94bdd int3  */
  x86_unimpl("int3 @ 0x10e94bdd");
L_10e94bde:;
  /* 10e94bde xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94be0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94be2 jne 0x10e94bb5 */
  if (!C.zf) goto L_10e94bb5;
  /* 10e94be4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94be7 push eax */
  push32((uint32_t)(EAX));
  /* 10e94be8 call 0x10e94c90 */
  push32(0x10e94bedu); f_10e94c90();
  /* 10e94bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94bf0 jmp 0x10e94c4d */
  goto L_10e94c4d;
L_10e94bf2:;
  /* 10e94bf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94bf5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10e94bf8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94bfe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94c01 jne 0x10e94c4d */
  if (!C.zf) goto L_10e94c4d;
L_10e94c03:;
  /* 10e94c03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94c06 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10e94c09 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94c0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94c0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10e94c10 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e94c13 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e94c18 push eax */
  push32((uint32_t)(EAX));
  /* 10e94c19 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94c1c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94c1f push ecx */
  push32((uint32_t)(ECX));
  /* 10e94c20 push 0x10eb99c0 */
  push32((uint32_t)(0x10eb99c0u));
  /* 10e94c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c2d call 0x10e92050 */
  push32(0x10e94c32u); f_10e92050();
  /* 10e94c32 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94c35 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94c38 jne 0x10e94c3b */
  if (!C.zf) goto L_10e94c3b;
  /* 10e94c3a int3  */
  x86_unimpl("int3 @ 0x10e94c3a");
L_10e94c3b:;
  /* 10e94c3b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94c3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94c3f jne 0x10e94c03 */
  if (!C.zf) goto L_10e94c03;
  /* 10e94c41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94c44 push eax */
  push32((uint32_t)(EAX));
  /* 10e94c45 call 0x10e94c90 */
  push32(0x10e94c4au); f_10e94c90();
  /* 10e94c4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94c4d:;
  /* 10e94c4d jmp 0x10e94a28 */
  goto L_10e94a28;
L_10e94c52:;
  /* 10e94c52 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e94c54 call 0x10e96a30 */
  push32(0x10e94c59u); f_10e96a30();
  /* 10e94c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94c5c:;
  /* 10e94c5c push 0x10eb99a8 */
  push32((uint32_t)(0x10eb99a8u));
  /* 10e94c61 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e94c66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94c6e call 0x10e92050 */
  push32(0x10e94c73u); f_10e92050();
  /* 10e94c73 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94c76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94c79 jne 0x10e94c7c */
  if (!C.zf) goto L_10e94c7c;
  /* 10e94c7b int3  */
  x86_unimpl("int3 @ 0x10e94c7b");
L_10e94c7c:;
  /* 10e94c7c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e94c7e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94c80 jne 0x10e94c5c */
  if (!C.zf) goto L_10e94c5c;
  /* 10e94c82 pop edi */
  EDI = (pop32());
  /* 10e94c83 pop esi */
  ESI = (pop32());
  /* 10e94c84 pop ebx */
  EBX = (pop32());
  /* 10e94c85 mov esp, ebp */
  ESP = (EBP);
  /* 10e94c87 pop ebp */
  EBP = (pop32());
  /* 10e94c88 ret  */
  ESPCHK(0x10e949d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c90 @ 0x10e94c90 (276 bytes, 89 insns) */
void f_10e94c90(void) {
  FTRACE(0x10e94c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94c91 mov ebp, esp */
  EBP = (ESP);
  /* 10e94c93 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94c96 push ebx */
  push32((uint32_t)(EBX));
  /* 10e94c97 push esi */
  push32((uint32_t)(ESI));
  /* 10e94c98 push edi */
  push32((uint32_t)(EDI));
  /* 10e94c99 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10e94ca0 jmp 0x10e94cab */
  goto L_10e94cab;
L_10e94ca2:;
  /* 10e94ca2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e94ca5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94ca8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10e94cab:;
  /* 10e94cab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94cae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94cb2 jge 0x10e94cbf */
  if ((C.sf==C.of)) goto L_10e94cbf;
  /* 10e94cb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94cb7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10e94cba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10e94cbd jmp 0x10e94cc6 */
  goto L_10e94cc6;
L_10e94cbf:;
  /* 10e94cbf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10e94cc6:;
  /* 10e94cc6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e94cc9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94ccc jge 0x10e94d6c */
  if ((C.sf==C.of)) goto L_10e94d6c;
  /* 10e94cd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94cd5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94cd8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10e94cdb mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10e94cde cmp dword ptr [0x10ebceb4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebceb4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94ce5 jle 0x10e94d03 */
  if ((C.zf||C.sf!=C.of)) goto L_10e94d03;
  /* 10e94ce7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10e94cec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e94cef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e94cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94cf6 call 0x10e98fa0 */
  push32(0x10e94cfbu); f_10e98fa0();
  /* 10e94cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94cfe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10e94d01 jmp 0x10e94d20 */
  goto L_10e94d20;
L_10e94d03:;
  /* 10e94d03 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e94d06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94d0c mov eax, dword ptr [0x10ebcca8] */
  EAX = (r32((uint32_t)(0x10ebcca8)));
  /* 10e94d11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e94d13 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10e94d17 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10e94d1d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10e94d20:;
  /* 10e94d20 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94d24 je 0x10e94d34 */
  if (C.zf) goto L_10e94d34;
  /* 10e94d26 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e94d29 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94d2f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10e94d32 jmp 0x10e94d3b */
  goto L_10e94d3b;
L_10e94d34:;
  /* 10e94d34 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10e94d3b:;
  /* 10e94d3b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e94d3e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10e94d41 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10e94d45 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10e94d48 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e94d4e push edx */
  push32((uint32_t)(EDX));
  /* 10e94d4f push 0x10eb9a9c */
  push32((uint32_t)(0x10eb9a9cu));
  /* 10e94d54 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e94d57 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e94d5a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10e94d5e push ecx */
  push32((uint32_t)(ECX));
  /* 10e94d5f call 0x10e98ea0 */
  push32(0x10e94d64u); f_10e98ea0();
  /* 10e94d64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94d67 jmp 0x10e94ca2 */
  goto L_10e94ca2;
L_10e94d6c:;
  /* 10e94d6c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10e94d6f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10e94d74:;
  /* 10e94d74 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e94d77 push eax */
  push32((uint32_t)(EAX));
  /* 10e94d78 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10e94d7b push ecx */
  push32((uint32_t)(ECX));
  /* 10e94d7c push 0x10eb9a8c */
  push32((uint32_t)(0x10eb9a8cu));
  /* 10e94d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94d89 call 0x10e92050 */
  push32(0x10e94d8eu); f_10e92050();
  /* 10e94d8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94d91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94d94 jne 0x10e94d97 */
  if (!C.zf) goto L_10e94d97;
  /* 10e94d96 int3  */
  x86_unimpl("int3 @ 0x10e94d96");
L_10e94d97:;
  /* 10e94d97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94d99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94d9b jne 0x10e94d74 */
  if (!C.zf) goto L_10e94d74;
  /* 10e94d9d pop edi */
  EDI = (pop32());
  /* 10e94d9e pop esi */
  ESI = (pop32());
  /* 10e94d9f pop ebx */
  EBX = (pop32());
  /* 10e94da0 mov esp, ebp */
  ESP = (EBP);
  /* 10e94da2 pop ebp */
  EBP = (pop32());
  /* 10e94da3 ret  */
  ESPCHK(0x10e94c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10e94db0 (116 bytes, 46 insns) */
void f_10e94db0(void) {
  FTRACE(0x10e94db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94db1 mov ebp, esp */
  EBP = (ESP);
  /* 10e94db3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94db6 push ebx */
  push32((uint32_t)(EBX));
  /* 10e94db7 push esi */
  push32((uint32_t)(ESI));
  /* 10e94db8 push edi */
  push32((uint32_t)(EDI));
  /* 10e94db9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10e94dbc push eax */
  push32((uint32_t)(EAX));
  /* 10e94dbd call 0x10e94730 */
  push32(0x10e94dc2u); f_10e94730();
  /* 10e94dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94dc5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94dc9 jne 0x10e94de4 */
  if (!C.zf) goto L_10e94de4;
  /* 10e94dcb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94dcf jne 0x10e94de4 */
  if (!C.zf) goto L_10e94de4;
  /* 10e94dd1 mov ecx, dword ptr [0x10ebca8c] */
  ECX = (r32((uint32_t)(0x10ebca8c)));
  /* 10e94dd7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10e94dda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e94ddc je 0x10e94e1b */
  if (C.zf) goto L_10e94e1b;
  /* 10e94dde cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94de2 je 0x10e94e1b */
  if (C.zf) goto L_10e94e1b;
L_10e94de4:;
  /* 10e94de4 push 0x10eb9aa4 */
  push32((uint32_t)(0x10eb9aa4u));
  /* 10e94de9 push 0x10eb9470 */
  push32((uint32_t)(0x10eb9470u));
  /* 10e94dee push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94df2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94df4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94df6 call 0x10e92050 */
  push32(0x10e94dfbu); f_10e92050();
  /* 10e94dfb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94dfe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94e01 jne 0x10e94e04 */
  if (!C.zf) goto L_10e94e04;
  /* 10e94e03 int3  */
  x86_unimpl("int3 @ 0x10e94e03");
L_10e94e04:;
  /* 10e94e04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e94e06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94e08 jne 0x10e94de4 */
  if (!C.zf) goto L_10e94de4;
  /* 10e94e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94e0c call 0x10e949d0 */
  push32(0x10e94e11u); f_10e949d0();
  /* 10e94e11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94e14 mov eax, 1 */
  EAX = (0x1u);
  /* 10e94e19 jmp 0x10e94e1d */
  goto L_10e94e1d;
L_10e94e1b:;
  /* 10e94e1b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e94e1d:;
  /* 10e94e1d pop edi */
  EDI = (pop32());
  /* 10e94e1e pop esi */
  ESI = (pop32());
  /* 10e94e1f pop ebx */
  EBX = (pop32());
  /* 10e94e20 mov esp, ebp */
  ESP = (EBP);
  /* 10e94e22 pop ebp */
  EBP = (pop32());
  /* 10e94e23 ret  */
  ESPCHK(0x10e94db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x10e94e30 (197 bytes, 79 insns) */
void f_10e94e30(void) {
  FTRACE(0x10e94e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94e31 mov ebp, esp */
  EBP = (ESP);
  /* 10e94e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94e34 push ebx */
  push32((uint32_t)(EBX));
  /* 10e94e35 push esi */
  push32((uint32_t)(ESI));
  /* 10e94e36 push edi */
  push32((uint32_t)(EDI));
  /* 10e94e37 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94e3b jne 0x10e94e42 */
  if (!C.zf) goto L_10e94e42;
  /* 10e94e3d jmp 0x10e94eee */
  goto L_10e94eee;
L_10e94e42:;
  /* 10e94e42 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e94e49 jmp 0x10e94e54 */
  goto L_10e94e54;
L_10e94e4b:;
  /* 10e94e4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94e4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94e51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e94e54:;
  /* 10e94e54 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94e58 jge 0x10e94e9e */
  if ((C.sf==C.of)) goto L_10e94e9e;
L_10e94e5a:;
  /* 10e94e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94e5d mov edx, dword ptr [ecx*4 + 0x10ebca9c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebca9c)));
  /* 10e94e64 push edx */
  push32((uint32_t)(EDX));
  /* 10e94e65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94e68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94e6b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10e94e6f push edx */
  push32((uint32_t)(EDX));
  /* 10e94e70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94e73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94e76 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10e94e7a push edx */
  push32((uint32_t)(EDX));
  /* 10e94e7b push 0x10eb9b00 */
  push32((uint32_t)(0x10eb9b00u));
  /* 10e94e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94e86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94e88 call 0x10e92050 */
  push32(0x10e94e8du); f_10e92050();
  /* 10e94e8d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94e90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94e93 jne 0x10e94e96 */
  if (!C.zf) goto L_10e94e96;
  /* 10e94e95 int3  */
  x86_unimpl("int3 @ 0x10e94e95");
L_10e94e96:;
  /* 10e94e96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94e9a jne 0x10e94e5a */
  if (!C.zf) goto L_10e94e5a;
  /* 10e94e9c jmp 0x10e94e4b */
  goto L_10e94e4b;
L_10e94e9e:;
  /* 10e94e9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94ea1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10e94ea4 push edx */
  push32((uint32_t)(EDX));
  /* 10e94ea5 push 0x10eb9adc */
  push32((uint32_t)(0x10eb9adcu));
  /* 10e94eaa push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94eac push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94eae push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94eb2 call 0x10e92050 */
  push32(0x10e94eb7u); f_10e92050();
  /* 10e94eb7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94eba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94ebd jne 0x10e94ec0 */
  if (!C.zf) goto L_10e94ec0;
  /* 10e94ebf int3  */
  x86_unimpl("int3 @ 0x10e94ebf");
L_10e94ec0:;
  /* 10e94ec0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94ec2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94ec4 jne 0x10e94e9e */
  if (!C.zf) goto L_10e94e9e;
L_10e94ec6:;
  /* 10e94ec6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e94ec9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10e94ecc push edx */
  push32((uint32_t)(EDX));
  /* 10e94ecd push 0x10eb9abc */
  push32((uint32_t)(0x10eb9abcu));
  /* 10e94ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ed4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ed6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e94eda call 0x10e92050 */
  push32(0x10e94edfu); f_10e92050();
  /* 10e94edf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94ee2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94ee5 jne 0x10e94ee8 */
  if (!C.zf) goto L_10e94ee8;
  /* 10e94ee7 int3  */
  x86_unimpl("int3 @ 0x10e94ee7");
L_10e94ee8:;
  /* 10e94ee8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e94eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94eec jne 0x10e94ec6 */
  if (!C.zf) goto L_10e94ec6;
L_10e94eee:;
  /* 10e94eee pop edi */
  EDI = (pop32());
  /* 10e94eef pop esi */
  ESI = (pop32());
  /* 10e94ef0 pop ebx */
  EBX = (pop32());
  /* 10e94ef1 mov esp, ebp */
  ESP = (EBP);
  /* 10e94ef3 pop ebp */
  EBP = (pop32());
  /* 10e94ef4 ret  */
  ESPCHK(0x10e94e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f00 @ 0x10e94f00 (329 bytes, 102 insns) */
void f_10e94f00(void) {
  FTRACE(0x10e94f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e94f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10e94f01 mov ebp, esp */
  EBP = (ESP);
  /* 10e94f03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e94f06 cmp dword ptr [0x10ebffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94f0d jne 0x10e94f14 */
  if (!C.zf) goto L_10e94f14;
  /* 10e94f0f call 0x10e99840 */
  push32(0x10e94f14u); f_10e99840();
L_10e94f14:;
  /* 10e94f14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e94f1b mov eax, dword ptr [0x10ebe468] */
  EAX = (r32((uint32_t)(0x10ebe468)));
  /* 10e94f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e94f23:;
  /* 10e94f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94f26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e94f29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e94f2b je 0x10e94f59 */
  if (C.zf) goto L_10e94f59;
  /* 10e94f2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94f30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e94f33 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94f36 je 0x10e94f41 */
  if (C.zf) goto L_10e94f41;
  /* 10e94f38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94f3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94f3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e94f41:;
  /* 10e94f41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94f44 push eax */
  push32((uint32_t)(EAX));
  /* 10e94f45 call 0x10e95dc0 */
  push32(0x10e94f4au); f_10e95dc0();
  /* 10e94f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94f4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94f50 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10e94f54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e94f57 jmp 0x10e94f23 */
  goto L_10e94f23;
L_10e94f59:;
  /* 10e94f59 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10e94f5b push 0x10eb9b20 */
  push32((uint32_t)(0x10eb9b20u));
  /* 10e94f60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e94f62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e94f65 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10e94f6c push ecx */
  push32((uint32_t)(ECX));
  /* 10e94f6d call 0x10e92f90 */
  push32(0x10e94f72u); f_10e92f90();
  /* 10e94f72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94f75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e94f78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e94f7b mov dword ptr [0x10ebe49c], edx */
  w32((uint32_t)(0x10ebe49c), (EDX));
  /* 10e94f81 cmp dword ptr [0x10ebe49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94f88 jne 0x10e94f94 */
  if (!C.zf) goto L_10e94f94;
  /* 10e94f8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10e94f8c call 0x10e91f00 */
  push32(0x10e94f91u); f_10e91f00();
  /* 10e94f91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94f94:;
  /* 10e94f94 mov eax, dword ptr [0x10ebe468] */
  EAX = (r32((uint32_t)(0x10ebe468)));
  /* 10e94f99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e94f9c jmp 0x10e94fa7 */
  goto L_10e94fa7;
L_10e94f9e:;
  /* 10e94f9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94fa1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94fa4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e94fa7:;
  /* 10e94fa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94faa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e94fad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e94faf je 0x10e95017 */
  if (C.zf) goto L_10e95017;
  /* 10e94fb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94fb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e94fb5 call 0x10e95dc0 */
  push32(0x10e94fbau); f_10e95dc0();
  /* 10e94fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94fbd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94fc0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e94fc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94fc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e94fc9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94fcc je 0x10e95015 */
  if (C.zf) goto L_10e95015;
  /* 10e94fce push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10e94fd0 push 0x10eb9b20 */
  push32((uint32_t)(0x10eb9b20u));
  /* 10e94fd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e94fd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e94fda push ecx */
  push32((uint32_t)(ECX));
  /* 10e94fdb call 0x10e92f90 */
  push32(0x10e94fe0u); f_10e92f90();
  /* 10e94fe0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e94fe3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e94fe6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e94fe8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e94feb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e94fee jne 0x10e94ffa */
  if (!C.zf) goto L_10e94ffa;
  /* 10e94ff0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e94ff2 call 0x10e91f00 */
  push32(0x10e94ff7u); f_10e91f00();
  /* 10e94ff7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e94ffa:;
  /* 10e94ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e94ffd push ecx */
  push32((uint32_t)(ECX));
  /* 10e94ffe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95001 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e95003 push eax */
  push32((uint32_t)(EAX));
  /* 10e95004 call 0x10e95f40 */
  push32(0x10e95009u); f_10e95f40();
  /* 10e95009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9500c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9500f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95012 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10e95015:;
  /* 10e95015 jmp 0x10e94f9e */
  goto L_10e94f9e;
L_10e95017:;
  /* 10e95017 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e95019 mov edx, dword ptr [0x10ebe468] */
  EDX = (r32((uint32_t)(0x10ebe468)));
  /* 10e9501f push edx */
  push32((uint32_t)(EDX));
  /* 10e95020 call 0x10e93a20 */
  push32(0x10e95025u); f_10e93a20();
  /* 10e95025 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95028 mov dword ptr [0x10ebe468], 0 */
  w32((uint32_t)(0x10ebe468), (0x0u));
  /* 10e95032 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95035 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9503b mov dword ptr [0x10ebffa0], 1 */
  w32((uint32_t)(0x10ebffa0), (0x1u));
  /* 10e95045 mov esp, ebp */
  ESP = (EBP);
  /* 10e95047 pop ebp */
  EBP = (pop32());
  /* 10e95048 ret  */
  ESPCHK(0x10e94f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005050 @ 0x10e95050 (216 bytes, 69 insns) */
void f_10e95050(void) {
  FTRACE(0x10e95050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95050 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95051 mov ebp, esp */
  EBP = (ESP);
  /* 10e95053 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95056 cmp dword ptr [0x10ebffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9505d jne 0x10e95064 */
  if (!C.zf) goto L_10e95064;
  /* 10e9505f call 0x10e99840 */
  push32(0x10e95064u); f_10e99840();
L_10e95064:;
  /* 10e95064 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e95069 push 0x10ebe4d8 */
  push32((uint32_t)(0x10ebe4d8u));
  /* 10e9506e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95070 call dword ptr [0x10ec0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0308))), 0x10e95076u);
  /* 10e95076 mov dword ptr [0x10ebe4ac], 0x10ebe4d8 */
  w32((uint32_t)(0x10ebe4ac), (0x10ebe4d8u));
  /* 10e95080 mov eax, dword ptr [0x10ebffcc] */
  EAX = (r32((uint32_t)(0x10ebffcc)));
  /* 10e95085 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e95088 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9508a jne 0x10e95097 */
  if (!C.zf) goto L_10e95097;
  /* 10e9508c mov edx, dword ptr [0x10ebe4ac] */
  EDX = (r32((uint32_t)(0x10ebe4ac)));
  /* 10e95092 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10e95095 jmp 0x10e9509f */
  goto L_10e9509f;
L_10e95097:;
  /* 10e95097 mov eax, dword ptr [0x10ebffcc] */
  EAX = (r32((uint32_t)(0x10ebffcc)));
  /* 10e9509c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10e9509f:;
  /* 10e9509f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e950a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e950a5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e950a8 push edx */
  push32((uint32_t)(EDX));
  /* 10e950a9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e950ac push eax */
  push32((uint32_t)(EAX));
  /* 10e950ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10e950af push 0 */
  push32((uint32_t)(0x0u));
  /* 10e950b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e950b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e950b5 call 0x10e95130 */
  push32(0x10e950bau); f_10e95130();
  /* 10e950ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e950bd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10e950c2 push 0x10eb9b2c */
  push32((uint32_t)(0x10eb9b2cu));
  /* 10e950c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e950c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e950cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e950cf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10e950d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10e950d3 call 0x10e92f90 */
  push32(0x10e950d8u); f_10e92f90();
  /* 10e950d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e950db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e950de cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e950e2 jne 0x10e950ee */
  if (!C.zf) goto L_10e950ee;
  /* 10e950e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e950e6 call 0x10e91f00 */
  push32(0x10e950ebu); f_10e91f00();
  /* 10e950eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e950ee:;
  /* 10e950ee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10e950f1 push edx */
  push32((uint32_t)(EDX));
  /* 10e950f2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10e950f5 push eax */
  push32((uint32_t)(EAX));
  /* 10e950f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e950f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e950fc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10e950ff push eax */
  push32((uint32_t)(EAX));
  /* 10e95100 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95103 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95104 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95107 push edx */
  push32((uint32_t)(EDX));
  /* 10e95108 call 0x10e95130 */
  push32(0x10e9510du); f_10e95130();
  /* 10e9510d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95110 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95113 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95116 mov dword ptr [0x10ebe490], eax */
  w32((uint32_t)(0x10ebe490), (EAX));
  /* 10e9511b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9511e mov dword ptr [0x10ebe494], ecx */
  w32((uint32_t)(0x10ebe494), (ECX));
  /* 10e95124 mov esp, ebp */
  ESP = (EBP);
  /* 10e95126 pop ebp */
  EBP = (pop32());
  /* 10e95127 ret  */
  ESPCHK(0x10e95050u, _esp0);
  ESP += 4; return;
}

/* FUN_10005130 @ 0x10e95130 (1060 bytes, 360 insns) */
void f_10e95130(void) {
  FTRACE(0x10e95130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95130 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95131 mov ebp, esp */
  EBP = (ESP);
  /* 10e95133 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95136 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95139 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9513f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95142 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10e95148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9514b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9514e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95152 je 0x10e95165 */
  if (C.zf) goto L_10e95165;
  /* 10e95154 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95157 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9515a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e9515c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9515f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95162 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10e95165:;
  /* 10e95165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95168 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9516b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9516e jne 0x10e9523d */
  if (!C.zf) goto L_10e9523d;
L_10e95174:;
  /* 10e95174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9517a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9517d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95180 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e95183 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95186 je 0x10e95202 */
  if (C.zf) goto L_10e95202;
  /* 10e95188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9518b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e9518e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e95190 je 0x10e95202 */
  if (C.zf) goto L_10e95202;
  /* 10e95192 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95195 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95197 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95199 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9519b mov al, byte ptr [edx + 0x10ebfd01] */
  AL = (r8((uint32_t)(EDX + 0x10ebfd01)));
  /* 10e951a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10e951a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e951a6 je 0x10e951d7 */
  if (C.zf) goto L_10e951d7;
  /* 10e951a8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e951ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e951ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e951b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e951b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e951b5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e951b9 je 0x10e951d7 */
  if (C.zf) goto L_10e951d7;
  /* 10e951bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e951be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e951c1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e951c3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e951c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e951c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e951cb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e951ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e951d1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e951d4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e951d7:;
  /* 10e951d7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e951da mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e951dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e951df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e951e2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e951e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e951e8 je 0x10e951fd */
  if (C.zf) goto L_10e951fd;
  /* 10e951ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e951ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e951f0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e951f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e951f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e951f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e951fa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e951fd:;
  /* 10e951fd jmp 0x10e95174 */
  goto L_10e95174;
L_10e95202:;
  /* 10e95202 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95205 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e95207 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9520a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9520d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10e9520f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95213 je 0x10e95224 */
  if (C.zf) goto L_10e95224;
  /* 10e95215 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95218 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e9521b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9521e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95221 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e95224:;
  /* 10e95224 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95227 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9522a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9522d jne 0x10e95238 */
  if (!C.zf) goto L_10e95238;
  /* 10e9522f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95232 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95235 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e95238:;
  /* 10e95238 jmp 0x10e9530c */
  goto L_10e9530c;
L_10e9523d:;
  /* 10e9523d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95240 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e95242 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95245 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95248 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e9524a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9524e je 0x10e95263 */
  if (C.zf) goto L_10e95263;
  /* 10e95250 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95253 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95256 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95258 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e9525a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9525d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95260 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e95263:;
  /* 10e95263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95266 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95268 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10e9526b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9526e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95271 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e95274 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95277 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e9527d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9527f mov dl, byte ptr [ecx + 0x10ebfd01] */
  DL = (r8((uint32_t)(ECX + 0x10ebfd01)));
  /* 10e95285 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10e95288 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e9528a je 0x10e952bb */
  if (C.zf) goto L_10e952bb;
  /* 10e9528c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9528f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e95291 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95294 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95297 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e95299 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9529d je 0x10e952b2 */
  if (C.zf) goto L_10e952b2;
  /* 10e9529f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e952a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e952a5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e952a7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e952a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e952ac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e952af mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10e952b2:;
  /* 10e952b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e952b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e952b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e952bb:;
  /* 10e952bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e952be and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e952c4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e952c7 je 0x10e952e7 */
  if (C.zf) goto L_10e952e7;
  /* 10e952c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e952cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e952d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e952d3 je 0x10e952e7 */
  if (C.zf) goto L_10e952e7;
  /* 10e952d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e952d8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e952de cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e952e1 jne 0x10e9523d */
  if (!C.zf) goto L_10e9523d;
L_10e952e7:;
  /* 10e952e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e952ea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e952f0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e952f2 jne 0x10e952ff */
  if (!C.zf) goto L_10e952ff;
  /* 10e952f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e952f7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e952fa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e952fd jmp 0x10e9530c */
  goto L_10e9530c;
L_10e952ff:;
  /* 10e952ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95303 je 0x10e9530c */
  if (C.zf) goto L_10e9530c;
  /* 10e95305 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95308 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10e9530c:;
  /* 10e9530c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10e95313:;
  /* 10e95313 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95316 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e95319 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e9531b je 0x10e9533e */
  if (C.zf) goto L_10e9533e;
L_10e9531d:;
  /* 10e9531d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95320 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e95323 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95326 je 0x10e95333 */
  if (C.zf) goto L_10e95333;
  /* 10e95328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9532b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9532e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95331 jne 0x10e9533e */
  if (!C.zf) goto L_10e9533e;
L_10e95333:;
  /* 10e95333 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95336 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95339 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e9533c jmp 0x10e9531d */
  goto L_10e9531d;
L_10e9533e:;
  /* 10e9533e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95341 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e95344 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e95346 jne 0x10e9534d */
  if (!C.zf) goto L_10e9534d;
  /* 10e95348 jmp 0x10e9552b */
  goto L_10e9552b;
L_10e9534d:;
  /* 10e9534d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95351 je 0x10e95364 */
  if (C.zf) goto L_10e95364;
  /* 10e95353 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95356 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95359 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10e9535b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9535e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95361 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e95364:;
  /* 10e95364 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95367 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e95369 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9536c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9536f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10e95371:;
  /* 10e95371 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10e95378 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10e9537f:;
  /* 10e9537f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95382 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e95385 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95388 jne 0x10e9539e */
  if (!C.zf) goto L_10e9539e;
  /* 10e9538a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9538d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95390 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e95393 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95396 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95399 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e9539c jmp 0x10e9537f */
  goto L_10e9537f;
L_10e9539e:;
  /* 10e9539e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e953a1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e953a4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e953a7 jne 0x10e953fa */
  if (!C.zf) goto L_10e953fa;
  /* 10e953a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e953ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e953ae mov ecx, 2 */
  ECX = (0x2u);
  /* 10e953b3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e953b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e953b7 jne 0x10e953f2 */
  if (!C.zf) goto L_10e953f2;
  /* 10e953b9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e953bd je 0x10e953df */
  if (C.zf) goto L_10e953df;
  /* 10e953bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e953c2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10e953c6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e953c9 jne 0x10e953d6 */
  if (!C.zf) goto L_10e953d6;
  /* 10e953cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e953ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e953d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e953d4 jmp 0x10e953dd */
  goto L_10e953dd;
L_10e953d6:;
  /* 10e953d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e953dd:;
  /* 10e953dd jmp 0x10e953e6 */
  goto L_10e953e6;
L_10e953df:;
  /* 10e953df mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10e953e6:;
  /* 10e953e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e953e8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e953ec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10e953ef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e953f2:;
  /* 10e953f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e953f5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10e953f7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10e953fa:;
  /* 10e953fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e953fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95400 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95403 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10e95406 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e95408 je 0x10e9542e */
  if (C.zf) goto L_10e9542e;
  /* 10e9540a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9540e je 0x10e9541f */
  if (C.zf) goto L_10e9541f;
  /* 10e95410 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95413 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10e95416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95419 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9541c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10e9541f:;
  /* 10e9541f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95422 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e95424 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95427 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9542a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e9542c jmp 0x10e953fa */
  goto L_10e953fa;
L_10e9542e:;
  /* 10e9542e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95431 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10e95434 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e95436 je 0x10e95454 */
  if (C.zf) goto L_10e95454;
  /* 10e95438 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9543c jne 0x10e95459 */
  if (!C.zf) goto L_10e95459;
  /* 10e9543e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95441 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e95444 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95447 je 0x10e95454 */
  if (C.zf) goto L_10e95454;
  /* 10e95449 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9544c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10e9544f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95452 jne 0x10e95459 */
  if (!C.zf) goto L_10e95459;
L_10e95454:;
  /* 10e95454 jmp 0x10e95504 */
  goto L_10e95504;
L_10e95459:;
  /* 10e95459 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9545d je 0x10e954f6 */
  if (C.zf) goto L_10e954f6;
  /* 10e95463 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95467 je 0x10e954bd */
  if (C.zf) goto L_10e954bd;
  /* 10e95469 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9546c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9546e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e95470 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e95472 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e95478 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9547b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e9547d je 0x10e954a8 */
  if (C.zf) goto L_10e954a8;
  /* 10e9547f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95482 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95485 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10e95487 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10e95489 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9548c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9548f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10e95492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95495 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95498 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9549b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9549e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e954a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954a3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e954a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10e954a8:;
  /* 10e954a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e954ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e954ae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e954b0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10e954b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e954b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954b8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10e954bb jmp 0x10e954e9 */
  goto L_10e954e9;
L_10e954bd:;
  /* 10e954bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e954c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e954c2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10e954c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e954c6 mov cl, byte ptr [eax + 0x10ebfd01] */
  CL = (r8((uint32_t)(EAX + 0x10ebfd01)));
  /* 10e954cc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10e954cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e954d1 je 0x10e954e9 */
  if (C.zf) goto L_10e954e9;
  /* 10e954d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e954d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954d9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e954dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e954df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e954e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e954e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e954e9:;
  /* 10e954e9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e954ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e954ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e954f4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10e954f6:;
  /* 10e954f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e954f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e954fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e954ff jmp 0x10e95371 */
  goto L_10e95371;
L_10e95504:;
  /* 10e95504 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95508 je 0x10e95519 */
  if (C.zf) goto L_10e95519;
  /* 10e9550a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e9550d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e95510 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95513 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95516 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10e95519:;
  /* 10e95519 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e9551c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9551e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95521 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10e95524 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e95526 jmp 0x10e95313 */
  goto L_10e95313;
L_10e9552b:;
  /* 10e9552b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9552f je 0x10e95543 */
  if (C.zf) goto L_10e95543;
  /* 10e95531 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95534 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10e9553a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9553d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95540 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e95543:;
  /* 10e95543 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95546 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e95548 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9554b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e9554e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e95550 mov esp, ebp */
  ESP = (EBP);
  /* 10e95552 pop ebp */
  EBP = (pop32());
  /* 10e95553 ret  */
  ESPCHK(0x10e95130u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x10e95560 (537 bytes, 173 insns) */
void f_10e95560(void) {
  FTRACE(0x10e95560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95560 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95561 mov ebp, esp */
  EBP = (ESP);
  /* 10e95563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95566 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10e9556d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10e95574 cmp dword ptr [0x10ebe5dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9557b jne 0x10e955ba */
  if (!C.zf) goto L_10e955ba;
  /* 10e9557d call dword ptr [0x10ec0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0338))), 0x10e95583u);
  /* 10e95583 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e95586 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9558a je 0x10e95598 */
  if (C.zf) goto L_10e95598;
  /* 10e9558c mov dword ptr [0x10ebe5dc], 1 */
  w32((uint32_t)(0x10ebe5dc), (0x1u));
  /* 10e95596 jmp 0x10e955ba */
  goto L_10e955ba;
L_10e95598:;
  /* 10e95598 call dword ptr [0x10ec0360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0360))), 0x10e9559eu);
  /* 10e9559e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e955a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e955a5 je 0x10e955b3 */
  if (C.zf) goto L_10e955b3;
  /* 10e955a7 mov dword ptr [0x10ebe5dc], 2 */
  w32((uint32_t)(0x10ebe5dc), (0x2u));
  /* 10e955b1 jmp 0x10e955ba */
  goto L_10e955ba;
L_10e955b3:;
  /* 10e955b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e955b5 jmp 0x10e95775 */
  goto L_10e95775;
L_10e955ba:;
  /* 10e955ba cmp dword ptr [0x10ebe5dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e955c1 jne 0x10e956be */
  if (!C.zf) goto L_10e956be;
  /* 10e955c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e955cb jne 0x10e955e3 */
  if (!C.zf) goto L_10e955e3;
  /* 10e955cd call dword ptr [0x10ec0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0338))), 0x10e955d3u);
  /* 10e955d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e955d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e955da jne 0x10e955e3 */
  if (!C.zf) goto L_10e955e3;
  /* 10e955dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e955de jmp 0x10e95775 */
  goto L_10e95775;
L_10e955e3:;
  /* 10e955e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e955e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e955e9:;
  /* 10e955e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e955ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e955ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e955f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e955f3 je 0x10e95615 */
  if (C.zf) goto L_10e95615;
  /* 10e955f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e955f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e955fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e955fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95601 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95603 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10e95606 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e95608 jne 0x10e95613 */
  if (!C.zf) goto L_10e95613;
  /* 10e9560a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9560d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95610 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e95613:;
  /* 10e95613 jmp 0x10e955e9 */
  goto L_10e955e9;
L_10e95615:;
  /* 10e95615 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95618 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9561b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10e9561d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95620 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e95623 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95627 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95629 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9562b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9562e push edx */
  push32((uint32_t)(EDX));
  /* 10e9562f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e95632 push eax */
  push32((uint32_t)(EAX));
  /* 10e95633 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95637 call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10e9563du);
  /* 10e9563d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e95640 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95644 je 0x10e95664 */
  if (C.zf) goto L_10e95664;
  /* 10e95646 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10e95648 push 0x10eb9b38 */
  push32((uint32_t)(0x10eb9b38u));
  /* 10e9564d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9564f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95652 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95653 call 0x10e92f90 */
  push32(0x10e95658u); f_10e92f90();
  /* 10e95658 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9565b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e9565e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95662 jne 0x10e95675 */
  if (!C.zf) goto L_10e95675;
L_10e95664:;
  /* 10e95664 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e95667 push edx */
  push32((uint32_t)(EDX));
  /* 10e95668 call dword ptr [0x10ec0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0358))), 0x10e9566eu);
  /* 10e9566e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e95670 jmp 0x10e95775 */
  goto L_10e95775;
L_10e95675:;
  /* 10e95675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95679 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e9567c push eax */
  push32((uint32_t)(EAX));
  /* 10e9567d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e95680 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95681 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95684 push edx */
  push32((uint32_t)(EDX));
  /* 10e95685 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e95688 push eax */
  push32((uint32_t)(EAX));
  /* 10e95689 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9568b push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9568d call dword ptr [0x10ec035c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec035c))), 0x10e95693u);
  /* 10e95693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e95695 jne 0x10e956ac */
  if (!C.zf) goto L_10e956ac;
  /* 10e95697 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e95699 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9569c push ecx */
  push32((uint32_t)(ECX));
  /* 10e9569d call 0x10e93a20 */
  push32(0x10e956a2u); f_10e93a20();
  /* 10e956a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e956a5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10e956ac:;
  /* 10e956ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e956af push edx */
  push32((uint32_t)(EDX));
  /* 10e956b0 call dword ptr [0x10ec0358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0358))), 0x10e956b6u);
  /* 10e956b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e956b9 jmp 0x10e95775 */
  goto L_10e95775;
L_10e956be:;
  /* 10e956be cmp dword ptr [0x10ebe5dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e956c5 jne 0x10e95773 */
  if (!C.zf) goto L_10e95773;
  /* 10e956cb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e956cf jne 0x10e956e7 */
  if (!C.zf) goto L_10e956e7;
  /* 10e956d1 call dword ptr [0x10ec0360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0360))), 0x10e956d7u);
  /* 10e956d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e956da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e956de jne 0x10e956e7 */
  if (!C.zf) goto L_10e956e7;
  /* 10e956e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e956e2 jmp 0x10e95775 */
  goto L_10e95775;
L_10e956e7:;
  /* 10e956e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e956ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e956ed:;
  /* 10e956ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e956f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e956f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e956f5 je 0x10e95715 */
  if (C.zf) goto L_10e95715;
  /* 10e956f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e956fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e956fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e95700 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95703 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10e95706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e95708 jne 0x10e95713 */
  if (!C.zf) goto L_10e95713;
  /* 10e9570a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9570d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95710 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10e95713:;
  /* 10e95713 jmp 0x10e956ed */
  goto L_10e956ed;
L_10e95715:;
  /* 10e95715 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95718 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e9571b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9571e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e95721 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10e95726 push 0x10eb9b38 */
  push32((uint32_t)(0x10eb9b38u));
  /* 10e9572b push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9572d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95730 push edx */
  push32((uint32_t)(EDX));
  /* 10e95731 call 0x10e92f90 */
  push32(0x10e95736u); f_10e92f90();
  /* 10e95736 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95739 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9573c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95740 jne 0x10e95750 */
  if (!C.zf) goto L_10e95750;
  /* 10e95742 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e95745 push eax */
  push32((uint32_t)(EAX));
  /* 10e95746 call dword ptr [0x10ec0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0354))), 0x10e9574cu);
  /* 10e9574c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9574e jmp 0x10e95775 */
  goto L_10e95775;
L_10e95750:;
  /* 10e95750 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e95753 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95754 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e95757 push edx */
  push32((uint32_t)(EDX));
  /* 10e95758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9575b push eax */
  push32((uint32_t)(EAX));
  /* 10e9575c call 0x10e99870 */
  push32(0x10e95761u); f_10e99870();
  /* 10e95761 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95764 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e95767 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95768 call dword ptr [0x10ec0354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0354))), 0x10e9576eu);
  /* 10e9576e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95771 jmp 0x10e95775 */
  goto L_10e95775;
L_10e95773:;
  /* 10e95773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e95775:;
  /* 10e95775 mov esp, ebp */
  ESP = (EBP);
  /* 10e95777 pop ebp */
  EBP = (pop32());
  /* 10e95778 ret  */
  ESPCHK(0x10e95560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x10e95780 (77 bytes, 25 insns) */
void f_10e95780(void) {
  FTRACE(0x10e95780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95780 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95781 mov ebp, esp */
  EBP = (ESP);
  /* 10e95783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95785 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10e9578a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9578c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95790 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10e95793 push eax */
  push32((uint32_t)(EAX));
  /* 10e95794 call dword ptr [0x10ec036c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec036c))), 0x10e9579au);
  /* 10e9579a mov dword ptr [0x10ebfe2c], eax */
  w32((uint32_t)(0x10ebfe2c), (EAX));
  /* 10e9579f cmp dword ptr [0x10ebfe2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebfe2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e957a6 jne 0x10e957ac */
  if (!C.zf) goto L_10e957ac;
  /* 10e957a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e957aa jmp 0x10e957cb */
  goto L_10e957cb;
L_10e957ac:;
  /* 10e957ac call 0x10e97230 */
  push32(0x10e957b1u); f_10e97230();
  /* 10e957b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e957b3 jne 0x10e957c6 */
  if (!C.zf) goto L_10e957c6;
  /* 10e957b5 mov ecx, dword ptr [0x10ebfe2c] */
  ECX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e957bb push ecx */
  push32((uint32_t)(ECX));
  /* 10e957bc call dword ptr [0x10ec0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0368))), 0x10e957c2u);
  /* 10e957c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e957c4 jmp 0x10e957cb */
  goto L_10e957cb;
L_10e957c6:;
  /* 10e957c6 mov eax, 1 */
  EAX = (0x1u);
L_10e957cb:;
  /* 10e957cb pop ebp */
  EBP = (pop32());
  /* 10e957cc ret  */
  ESPCHK(0x10e95780u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x10e957d0 (156 bytes, 48 insns) */
void f_10e957d0(void) {
  FTRACE(0x10e957d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e957d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e957d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e957d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e957d6 mov eax, dword ptr [0x10ebfe28] */
  EAX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e957db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e957de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e957e5 jmp 0x10e957f0 */
  goto L_10e957f0;
L_10e957e7:;
  /* 10e957e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e957ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e957ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e957f0:;
  /* 10e957f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e957f3 cmp edx, dword ptr [0x10ebfe24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebfe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e957f9 jge 0x10e95846 */
  if ((C.sf==C.of)) goto L_10e95846;
  /* 10e957fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10e95800 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10e95805 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95808 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10e9580b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9580c call dword ptr [0x10ec0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0374))), 0x10e95812u);
  /* 10e95812 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10e95817 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95819 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9581c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10e9581f push eax */
  push32((uint32_t)(EAX));
  /* 10e95820 call dword ptr [0x10ec0374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0374))), 0x10e95826u);
  /* 10e95826 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95829 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10e9582c push edx */
  push32((uint32_t)(EDX));
  /* 10e9582d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9582f mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e95834 push eax */
  push32((uint32_t)(EAX));
  /* 10e95835 call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e9583bu);
  /* 10e9583b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9583e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95841 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e95844 jmp 0x10e957e7 */
  goto L_10e957e7;
L_10e95846:;
  /* 10e95846 mov edx, dword ptr [0x10ebfe28] */
  EDX = (r32((uint32_t)(0x10ebfe28)));
  /* 10e9584c push edx */
  push32((uint32_t)(EDX));
  /* 10e9584d push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9584f mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e95854 push eax */
  push32((uint32_t)(EAX));
  /* 10e95855 call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e9585bu);
  /* 10e9585b mov ecx, dword ptr [0x10ebfe2c] */
  ECX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e95861 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95862 call dword ptr [0x10ec0368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0368))), 0x10e95868u);
  /* 10e95868 mov esp, ebp */
  ESP = (EBP);
  /* 10e9586a pop ebp */
  EBP = (pop32());
  /* 10e9586b ret  */
  ESPCHK(0x10e957d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10e95870 (73 bytes, 19 insns) */
void f_10e95870(void) {
  FTRACE(0x10e95870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95870 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95871 mov ebp, esp */
  EBP = (ESP);
  /* 10e95873 cmp dword ptr [0x10ebe470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9587a je 0x10e9588e */
  if (C.zf) goto L_10e9588e;
  /* 10e9587c cmp dword ptr [0x10ebe470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95883 jne 0x10e958b7 */
  if (!C.zf) goto L_10e958b7;
  /* 10e95885 cmp dword ptr [0x10ebe474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9588c jne 0x10e958b7 */
  if (!C.zf) goto L_10e958b7;
L_10e9588e:;
  /* 10e9588e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10e95893 call 0x10e958c0 */
  push32(0x10e95898u); f_10e958c0();
  /* 10e95898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9589b cmp dword ptr [0x10ebe5e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e958a2 je 0x10e958aa */
  if (C.zf) goto L_10e958aa;
  /* 10e958a4 call dword ptr [0x10ebe5e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe5e0))), 0x10e958aau);
L_10e958aa:;
  /* 10e958aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e958af call 0x10e958c0 */
  push32(0x10e958b4u); f_10e958c0();
  /* 10e958b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e958b7:;
  /* 10e958b7 pop ebp */
  EBP = (pop32());
  /* 10e958b8 ret  */
  ESPCHK(0x10e95870u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x10e958c0 (447 bytes, 131 insns) */
void f_10e958c0(void) {
  FTRACE(0x10e958c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e958c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e958c1 mov ebp, esp */
  EBP = (ESP);
  /* 10e958c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e958c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10e958ca push esi */
  push32((uint32_t)(ESI));
  /* 10e958cb push edi */
  push32((uint32_t)(EDI));
  /* 10e958cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e958d3 jmp 0x10e958de */
  goto L_10e958de;
L_10e958d5:;
  /* 10e958d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e958d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e958db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e958de:;
  /* 10e958de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e958e2 jae 0x10e958f7 */
  if (!C.cf) goto L_10e958f7;
  /* 10e958e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e958e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e958ea cmp edx, dword ptr [ecx*8 + 0x10ebcab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10ebcab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e958f1 jne 0x10e958f5 */
  if (!C.zf) goto L_10e958f5;
  /* 10e958f3 jmp 0x10e958f7 */
  goto L_10e958f7;
L_10e958f5:;
  /* 10e958f5 jmp 0x10e958d5 */
  goto L_10e958d5;
L_10e958f7:;
  /* 10e958f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e958fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e958fd cmp ecx, dword ptr [eax*8 + 0x10ebcab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10ebcab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95904 jne 0x10e95a78 */
  if (!C.zf) goto L_10e95a78;
  /* 10e9590a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95911 je 0x10e95934 */
  if (C.zf) goto L_10e95934;
  /* 10e95913 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95916 mov eax, dword ptr [edx*8 + 0x10ebcabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10ebcabc)));
  /* 10e9591d push eax */
  push32((uint32_t)(EAX));
  /* 10e9591e push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95920 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95924 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e95926 call 0x10e92050 */
  push32(0x10e9592bu); f_10e92050();
  /* 10e9592b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9592e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95931 jne 0x10e95934 */
  if (!C.zf) goto L_10e95934;
  /* 10e95933 int3  */
  x86_unimpl("int3 @ 0x10e95933");
L_10e95934:;
  /* 10e95934 cmp dword ptr [0x10ebe470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9593b je 0x10e9594f */
  if (C.zf) goto L_10e9594f;
  /* 10e9593d cmp dword ptr [0x10ebe470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95944 jne 0x10e95988 */
  if (!C.zf) goto L_10e95988;
  /* 10e95946 cmp dword ptr [0x10ebe474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9594d jne 0x10e95988 */
  if (!C.zf) goto L_10e95988;
L_10e9594f:;
  /* 10e9594f push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95951 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10e95954 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95955 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95958 mov eax, dword ptr [edx*8 + 0x10ebcabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10ebcabc)));
  /* 10e9595f push eax */
  push32((uint32_t)(EAX));
  /* 10e95960 call 0x10e95dc0 */
  push32(0x10e95965u); f_10e95dc0();
  /* 10e95965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95968 push eax */
  push32((uint32_t)(EAX));
  /* 10e95969 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9596c mov edx, dword ptr [ecx*8 + 0x10ebcabc] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10ebcabc)));
  /* 10e95973 push edx */
  push32((uint32_t)(EDX));
  /* 10e95974 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10e95976 call dword ptr [0x10ec02ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02ec))), 0x10e9597cu);
  /* 10e9597c push eax */
  push32((uint32_t)(EAX));
  /* 10e9597d call dword ptr [0x10ec02f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02f0))), 0x10e95983u);
  /* 10e95983 jmp 0x10e95a78 */
  goto L_10e95a78;
L_10e95988:;
  /* 10e95988 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9598f je 0x10e95a78 */
  if (C.zf) goto L_10e95a78;
  /* 10e95995 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10e9599a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10e959a0 push eax */
  push32((uint32_t)(EAX));
  /* 10e959a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e959a3 call dword ptr [0x10ec0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0308))), 0x10e959a9u);
  /* 10e959a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e959ab jne 0x10e959c1 */
  if (!C.zf) goto L_10e959c1;
  /* 10e959ad push 0x10eb93a0 */
  push32((uint32_t)(0x10eb93a0u));
  /* 10e959b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e959b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e959b9 call 0x10e95f40 */
  push32(0x10e959beu); f_10e95f40();
  /* 10e959be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e959c1:;
  /* 10e959c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10e959c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e959ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e959cd push eax */
  push32((uint32_t)(EAX));
  /* 10e959ce call 0x10e95dc0 */
  push32(0x10e959d3u); f_10e95dc0();
  /* 10e959d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e959d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e959d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e959dc jbe 0x10e95a0a */
  if ((C.cf||C.zf)) goto L_10e95a0a;
  /* 10e959de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10e959e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10e959e5 call 0x10e95dc0 */
  push32(0x10e959eau); f_10e95dc0();
  /* 10e959ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e959ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e959f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10e959f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e959f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e959f9 push 0x10eb939c */
  push32((uint32_t)(0x10eb939cu));
  /* 10e959fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95a01 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95a02 call 0x10e967b0 */
  push32(0x10e95a07u); f_10e967b0();
  /* 10e95a07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e95a0a:;
  /* 10e95a0a push 0x10eb9df4 */
  push32((uint32_t)(0x10eb9df4u));
  /* 10e95a0f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e95a15 push edx */
  push32((uint32_t)(EDX));
  /* 10e95a16 call 0x10e95f40 */
  push32(0x10e95a1bu); f_10e95f40();
  /* 10e95a1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95a1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95a21 push eax */
  push32((uint32_t)(EAX));
  /* 10e95a22 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10e95a28 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95a29 call 0x10e95f50 */
  push32(0x10e95a2eu); f_10e95f50();
  /* 10e95a2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95a31 push 0x10eb9314 */
  push32((uint32_t)(0x10eb9314u));
  /* 10e95a36 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e95a3c push edx */
  push32((uint32_t)(EDX));
  /* 10e95a3d call 0x10e95f50 */
  push32(0x10e95a42u); f_10e95f50();
  /* 10e95a42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95a45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95a48 mov ecx, dword ptr [eax*8 + 0x10ebcabc] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10ebcabc)));
  /* 10e95a4f push ecx */
  push32((uint32_t)(ECX));
  /* 10e95a50 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10e95a56 push edx */
  push32((uint32_t)(EDX));
  /* 10e95a57 call 0x10e95f50 */
  push32(0x10e95a5cu); f_10e95f50();
  /* 10e95a5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95a5f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10e95a64 push 0x10eb9dcc */
  push32((uint32_t)(0x10eb9dccu));
  /* 10e95a69 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10e95a6f push eax */
  push32((uint32_t)(EAX));
  /* 10e95a70 call 0x10e966f0 */
  push32(0x10e95a75u); f_10e966f0();
  /* 10e95a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e95a78:;
  /* 10e95a78 pop edi */
  EDI = (pop32());
  /* 10e95a79 pop esi */
  ESI = (pop32());
  /* 10e95a7a pop ebx */
  EBX = (pop32());
  /* 10e95a7b mov esp, ebp */
  ESP = (EBP);
  /* 10e95a7d pop ebp */
  EBP = (pop32());
  /* 10e95a7e ret  */
  ESPCHK(0x10e958c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10e95a80 (80 bytes, 27 insns) */
void f_10e95a80(void) {
  FTRACE(0x10e95a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95a81 mov ebp, esp */
  EBP = (ESP);
  /* 10e95a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95a84 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e95a8b jmp 0x10e95a96 */
  goto L_10e95a96;
L_10e95a8d:;
  /* 10e95a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95a90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95a93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e95a96:;
  /* 10e95a96 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95a9a jae 0x10e95aaf */
  if (!C.cf) goto L_10e95aaf;
  /* 10e95a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95a9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95aa2 cmp edx, dword ptr [ecx*8 + 0x10ebcab8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10ebcab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95aa9 jne 0x10e95aad */
  if (!C.zf) goto L_10e95aad;
  /* 10e95aab jmp 0x10e95aaf */
  goto L_10e95aaf;
L_10e95aad:;
  /* 10e95aad jmp 0x10e95a8d */
  goto L_10e95a8d;
L_10e95aaf:;
  /* 10e95aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95ab2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95ab5 cmp ecx, dword ptr [eax*8 + 0x10ebcab8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10ebcab8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95abc jne 0x10e95aca */
  if (!C.zf) goto L_10e95aca;
  /* 10e95abe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95ac1 mov eax, dword ptr [edx*8 + 0x10ebcabc] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10ebcabc)));
  /* 10e95ac8 jmp 0x10e95acc */
  goto L_10e95acc;
L_10e95aca:;
  /* 10e95aca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e95acc:;
  /* 10e95acc mov esp, ebp */
  ESP = (EBP);
  /* 10e95ace pop ebp */
  EBP = (pop32());
  /* 10e95acf ret  */
  ESPCHK(0x10e95a80u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10e95ad0 (66 bytes, 28 insns) */
void f_10e95ad0(void) {
  FTRACE(0x10e95ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10e95ad3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95ad7 jne 0x10e95af7 */
  if (!C.zf) goto L_10e95af7;
  /* 10e95ad9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95add jge 0x10e95af7 */
  if ((C.sf==C.of)) goto L_10e95af7;
  /* 10e95adf push 1 */
  push32((uint32_t)(0x1u));
  /* 10e95ae1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95ae4 push eax */
  push32((uint32_t)(EAX));
  /* 10e95ae5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95ae8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95ae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95aec push edx */
  push32((uint32_t)(EDX));
  /* 10e95aed call 0x10e95b20 */
  push32(0x10e95af2u); f_10e95b20();
  /* 10e95af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95af5 jmp 0x10e95b0d */
  goto L_10e95b0d;
L_10e95af7:;
  /* 10e95af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95afc push eax */
  push32((uint32_t)(EAX));
  /* 10e95afd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95b00 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95b04 push edx */
  push32((uint32_t)(EDX));
  /* 10e95b05 call 0x10e95b20 */
  push32(0x10e95b0au); f_10e95b20();
  /* 10e95b0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e95b0d:;
  /* 10e95b0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95b10 pop ebp */
  EBP = (pop32());
  /* 10e95b11 ret  */
  ESPCHK(0x10e95ad0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10e95b20 (194 bytes, 71 insns) */
void f_10e95b20(void) {
  FTRACE(0x10e95b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95b21 mov ebp, esp */
  EBP = (ESP);
  /* 10e95b23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95b26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95b29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e95b2c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95b30 je 0x10e95b49 */
  if (C.zf) goto L_10e95b49;
  /* 10e95b32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b35 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e95b38 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95b3e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e95b41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95b44 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e95b46 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10e95b49:;
  /* 10e95b49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10e95b4f:;
  /* 10e95b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95b52 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95b54 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e95b57 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e95b5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95b5f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10e95b62 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e95b65 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95b69 jbe 0x10e95b81 */
  if ((C.cf||C.zf)) goto L_10e95b81;
  /* 10e95b6b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95b6e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95b71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b74 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95b76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b79 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95b7c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e95b7f jmp 0x10e95b95 */
  goto L_10e95b95;
L_10e95b81:;
  /* 10e95b81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95b84 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95b87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b8a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95b8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b8f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95b92 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e95b95:;
  /* 10e95b95 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95b99 ja 0x10e95b4f */
  if ((!C.cf&&!C.zf)) goto L_10e95b4f;
  /* 10e95b9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95b9e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e95ba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95ba4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95ba7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e95baa:;
  /* 10e95baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95bad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95baf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e95bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95bb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95bb8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95bba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95bbc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95bbf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e95bc2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e95bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95bc7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95bca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e95bcd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95bd3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e95bd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95bd9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95bdc jb 0x10e95baa */
  if (C.cf) goto L_10e95baa;
  /* 10e95bde mov esp, ebp */
  ESP = (EBP);
  /* 10e95be0 pop ebp */
  EBP = (pop32());
  /* 10e95be1 ret  */
  ESPCHK(0x10e95b20u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10e95bf0 (63 bytes, 24 insns) */
void f_10e95bf0(void) {
  FTRACE(0x10e95bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10e95bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95bf4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95bf8 jne 0x10e95c09 */
  if (!C.zf) goto L_10e95c09;
  /* 10e95bfa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95bfe jge 0x10e95c09 */
  if ((C.sf==C.of)) goto L_10e95c09;
  /* 10e95c00 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e95c07 jmp 0x10e95c10 */
  goto L_10e95c10;
L_10e95c09:;
  /* 10e95c09 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e95c10:;
  /* 10e95c10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95c13 push eax */
  push32((uint32_t)(EAX));
  /* 10e95c14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95c17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95c18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95c1b push edx */
  push32((uint32_t)(EDX));
  /* 10e95c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95c1f push eax */
  push32((uint32_t)(EAX));
  /* 10e95c20 call 0x10e95b20 */
  push32(0x10e95c25u); f_10e95b20();
  /* 10e95c25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95c28 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95c2b mov esp, ebp */
  ESP = (EBP);
  /* 10e95c2d pop ebp */
  EBP = (pop32());
  /* 10e95c2e ret  */
  ESPCHK(0x10e95bf0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10e95c30 (30 bytes, 14 insns) */
void f_10e95c30(void) {
  FTRACE(0x10e95c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95c31 mov ebp, esp */
  EBP = (ESP);
  /* 10e95c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95c35 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95c38 push eax */
  push32((uint32_t)(EAX));
  /* 10e95c39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95c3c push ecx */
  push32((uint32_t)(ECX));
  /* 10e95c3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95c40 push edx */
  push32((uint32_t)(EDX));
  /* 10e95c41 call 0x10e95b20 */
  push32(0x10e95c46u); f_10e95b20();
  /* 10e95c46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95c49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95c4c pop ebp */
  EBP = (pop32());
  /* 10e95c4d ret  */
  ESPCHK(0x10e95c30u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10e95c50 (72 bytes, 28 insns) */
void f_10e95c50(void) {
  FTRACE(0x10e95c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95c51 mov ebp, esp */
  EBP = (ESP);
  /* 10e95c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95c54 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95c58 jne 0x10e95c71 */
  if (!C.zf) goto L_10e95c71;
  /* 10e95c5a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95c5e jg 0x10e95c71 */
  if ((!C.zf&&C.sf==C.of)) goto L_10e95c71;
  /* 10e95c60 jl 0x10e95c68 */
  if ((C.sf!=C.of)) goto L_10e95c68;
  /* 10e95c62 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95c66 jae 0x10e95c71 */
  if (!C.cf) goto L_10e95c71;
L_10e95c68:;
  /* 10e95c68 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10e95c6f jmp 0x10e95c78 */
  goto L_10e95c78;
L_10e95c71:;
  /* 10e95c71 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e95c78:;
  /* 10e95c78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95c7b push eax */
  push32((uint32_t)(EAX));
  /* 10e95c7c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95c7f push ecx */
  push32((uint32_t)(ECX));
  /* 10e95c80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95c83 push edx */
  push32((uint32_t)(EDX));
  /* 10e95c84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95c87 push eax */
  push32((uint32_t)(EAX));
  /* 10e95c88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95c8b push ecx */
  push32((uint32_t)(ECX));
  /* 10e95c8c call 0x10e95ca0 */
  push32(0x10e95c91u); f_10e95ca0();
  /* 10e95c91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95c94 mov esp, ebp */
  ESP = (EBP);
  /* 10e95c96 pop ebp */
  EBP = (pop32());
  /* 10e95c97 ret  */
  ESPCHK(0x10e95c50u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10e95ca0 (242 bytes, 91 insns) */
void f_10e95ca0(void) {
  FTRACE(0x10e95ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10e95ca3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95ca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95ca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e95cac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95cb0 je 0x10e95cd4 */
  if (C.zf) goto L_10e95cd4;
  /* 10e95cb2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95cb5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10e95cb8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95cbb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95cbe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e95cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95cc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e95cc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95cc9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95ccc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e95cce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e95cd1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10e95cd4:;
  /* 10e95cd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95cd7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10e95cda:;
  /* 10e95cda mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95cdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e95cdf push ecx */
  push32((uint32_t)(ECX));
  /* 10e95ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10e95ce1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95ce4 push edx */
  push32((uint32_t)(EDX));
  /* 10e95ce5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95ce8 push eax */
  push32((uint32_t)(EAX));
  /* 10e95ce9 call 0x10e99c20 */
  push32(0x10e95ceeu); f_10e99c20();
  /* 10e95cee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e95cf1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95cf4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95cf6 push edx */
  push32((uint32_t)(EDX));
  /* 10e95cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95cf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95cfb push eax */
  push32((uint32_t)(EAX));
  /* 10e95cfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95cff push ecx */
  push32((uint32_t)(ECX));
  /* 10e95d00 call 0x10e99bb0 */
  push32(0x10e95d05u); f_10e99bb0();
  /* 10e95d05 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10e95d08 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e95d0b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95d0f jbe 0x10e95d27 */
  if ((C.cf||C.zf)) goto L_10e95d27;
  /* 10e95d11 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95d14 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d1a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95d1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d1f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95d22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e95d25 jmp 0x10e95d3b */
  goto L_10e95d3b;
L_10e95d27:;
  /* 10e95d27 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e95d2a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d30 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95d32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95d38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10e95d3b:;
  /* 10e95d3b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95d3f ja 0x10e95cda */
  if ((!C.cf&&!C.zf)) goto L_10e95cda;
  /* 10e95d41 jb 0x10e95d49 */
  if (C.cf) goto L_10e95d49;
  /* 10e95d43 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95d47 ja 0x10e95cda */
  if ((!C.cf&&!C.zf)) goto L_10e95cda;
L_10e95d49:;
  /* 10e95d49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d4c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10e95d4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d52 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95d55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e95d58:;
  /* 10e95d58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d5b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95d5d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10e95d60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95d66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95d68 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10e95d6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95d6d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10e95d70 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10e95d72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e95d75 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95d78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e95d7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95d7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95d81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e95d84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e95d87 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95d8a jb 0x10e95d58 */
  if (C.cf) goto L_10e95d58;
  /* 10e95d8c mov esp, ebp */
  ESP = (EBP);
  /* 10e95d8e pop ebp */
  EBP = (pop32());
  /* 10e95d8f ret 0x14 */
  ESPCHK(0x10e95ca0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10e95da0 (31 bytes, 15 insns) */
void f_10e95da0(void) {
  FTRACE(0x10e95da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95da1 mov ebp, esp */
  EBP = (ESP);
  /* 10e95da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95da5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e95da8 push eax */
  push32((uint32_t)(EAX));
  /* 10e95da9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95dac push ecx */
  push32((uint32_t)(ECX));
  /* 10e95dad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95db0 push edx */
  push32((uint32_t)(EDX));
  /* 10e95db1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95db4 push eax */
  push32((uint32_t)(EAX));
  /* 10e95db5 call 0x10e95ca0 */
  push32(0x10e95dbau); f_10e95ca0();
  /* 10e95dba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95dbd pop ebp */
  EBP = (pop32());
  /* 10e95dbe ret  */
  ESPCHK(0x10e95da0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10e95dc0 (123 bytes, 44 insns) */
void f_10e95dc0(void) {
  FTRACE(0x10e95dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95dc0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95dc4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95dca je 0x10e95de0 */
  if (C.zf) goto L_10e95de0;
L_10e95dcc:;
  /* 10e95dcc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e95dce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e95dcf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e95dd1 je 0x10e95e13 */
  if (C.zf) goto L_10e95e13;
  /* 10e95dd3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95dd9 jne 0x10e95dcc */
  if (!C.zf) goto L_10e95dcc;
  /* 10e95ddb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10e95de0:;
  /* 10e95de0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e95de2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e95de7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95de9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e95dec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e95dee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95df1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e95df6 je 0x10e95de0 */
  if (C.zf) goto L_10e95de0;
  /* 10e95df8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e95dfb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e95dfd je 0x10e95e31 */
  if (C.zf) goto L_10e95e31;
  /* 10e95dff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e95e01 je 0x10e95e27 */
  if (C.zf) goto L_10e95e27;
  /* 10e95e03 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e95e08 je 0x10e95e1d */
  if (C.zf) goto L_10e95e1d;
  /* 10e95e0a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e95e0f je 0x10e95e13 */
  if (C.zf) goto L_10e95e13;
  /* 10e95e11 jmp 0x10e95de0 */
  goto L_10e95de0;
L_10e95e13:;
  /* 10e95e13 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10e95e16 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95e1a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95e1c ret  */
  ESPCHK(0x10e95dc0u, _esp0);
  ESP += 4; return;
L_10e95e1d:;
  /* 10e95e1d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10e95e20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95e24 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95e26 ret  */
  ESPCHK(0x10e95dc0u, _esp0);
  ESP += 4; return;
L_10e95e27:;
  /* 10e95e27 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10e95e2a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95e2e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95e30 ret  */
  ESPCHK(0x10e95dc0u, _esp0);
  ESP += 4; return;
L_10e95e31:;
  /* 10e95e31 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10e95e34 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95e38 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95e3a ret  */
  ESPCHK(0x10e95dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e40 @ 0x10e95e40 (249 bytes, 93 insns) */
void f_10e95e40(void) {
  FTRACE(0x10e95e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10e95e41 mov ebp, esp */
  EBP = (ESP);
  /* 10e95e43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95e46 push ebx */
  push32((uint32_t)(EBX));
  /* 10e95e47 push esi */
  push32((uint32_t)(ESI));
  /* 10e95e48 push edi */
  push32((uint32_t)(EDI));
  /* 10e95e49 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e95e4c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10e95e4f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10e95e52 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10e95e55:;
  /* 10e95e55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95e59 jne 0x10e95e79 */
  if (!C.zf) goto L_10e95e79;
  /* 10e95e5b push 0x10eb9e2c */
  push32((uint32_t)(0x10eb9e2cu));
  /* 10e95e60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95e62 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10e95e64 push 0x10eb9e20 */
  push32((uint32_t)(0x10eb9e20u));
  /* 10e95e69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e95e6b call 0x10e92050 */
  push32(0x10e95e70u); f_10e92050();
  /* 10e95e70 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95e73 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95e76 jne 0x10e95e79 */
  if (!C.zf) goto L_10e95e79;
  /* 10e95e78 int3  */
  x86_unimpl("int3 @ 0x10e95e78");
L_10e95e79:;
  /* 10e95e79 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95e7b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e95e7d jne 0x10e95e55 */
  if (!C.zf) goto L_10e95e55;
L_10e95e7f:;
  /* 10e95e7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95e83 jne 0x10e95ea3 */
  if (!C.zf) goto L_10e95ea3;
  /* 10e95e85 push 0x10eb9e10 */
  push32((uint32_t)(0x10eb9e10u));
  /* 10e95e8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95e8c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10e95e8e push 0x10eb9e20 */
  push32((uint32_t)(0x10eb9e20u));
  /* 10e95e93 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e95e95 call 0x10e92050 */
  push32(0x10e95e9au); f_10e92050();
  /* 10e95e9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95e9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95ea0 jne 0x10e95ea3 */
  if (!C.zf) goto L_10e95ea3;
  /* 10e95ea2 int3  */
  x86_unimpl("int3 @ 0x10e95ea2");
L_10e95ea3:;
  /* 10e95ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e95ea5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e95ea7 jne 0x10e95e7f */
  if (!C.zf) goto L_10e95e7f;
  /* 10e95ea9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95eac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10e95eb3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95eb9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e95ebc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ebf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e95ec2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10e95ec4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ec7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e95eca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10e95ecd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10e95ed0 push edx */
  push32((uint32_t)(EDX));
  /* 10e95ed1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e95ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10e95ed5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 10e95ed9 call 0x10e99f20 */
  push32(0x10e95edeu); f_10e99f20();
  /* 10e95ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95ee1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e95ee4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ee7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e95eea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e95eed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ef0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10e95ef3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95ef6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e95efa jl 0x10e95f1e */
  if ((C.sf!=C.of)) goto L_10e95f1e;
  /* 10e95efc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95eff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e95f01 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10e95f04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e95f06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e95f0c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10e95f0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95f12 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e95f14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95f17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95f1a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10e95f1c jmp 0x10e95f2f */
  goto L_10e95f2f;
L_10e95f1e:;
  /* 10e95f1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e95f21 push eax */
  push32((uint32_t)(EAX));
  /* 10e95f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e95f24 call 0x10e99ca0 */
  push32(0x10e95f29u); f_10e99ca0();
  /* 10e95f29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95f2c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10e95f2f:;
  /* 10e95f2f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e95f32 pop edi */
  EDI = (pop32());
  /* 10e95f33 pop esi */
  ESI = (pop32());
  /* 10e95f34 pop ebx */
  EBX = (pop32());
  /* 10e95f35 mov esp, ebp */
  ESP = (EBP);
  /* 10e95f37 pop ebp */
  EBP = (pop32());
  /* 10e95f38 ret  */
  ESPCHK(0x10e95e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x10e95f40 (7 bytes, 3 insns) */
void f_10e95f40(void) {
  FTRACE(0x10e95f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95f40 push edi */
  push32((uint32_t)(EDI));
  /* 10e95f41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10e95f45 jmp 0x10e95fb1 */
  jmp_ind(0x10e95fb1u); return;
}

/* FUN_10005f50 @ 0x10e95f50 (224 bytes, 84 insns) */
void f_10e95f50(void) {
  FTRACE(0x10e95f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e95f50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e95f54 push edi */
  push32((uint32_t)(EDI));
  /* 10e95f55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95f5b je 0x10e95f6c */
  if (C.zf) goto L_10e95f6c;
L_10e95f5d:;
  /* 10e95f5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10e95f5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e95f60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e95f62 je 0x10e95f9f */
  if (C.zf) goto L_10e95f9f;
  /* 10e95f64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95f6a jne 0x10e95f5d */
  if (!C.zf) goto L_10e95f5d;
L_10e95f6c:;
  /* 10e95f6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e95f6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e95f73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95f75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e95f78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e95f7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95f7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e95f82 je 0x10e95f6c */
  if (C.zf) goto L_10e95f6c;
  /* 10e95f84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e95f87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e95f89 je 0x10e95fae */
  if (C.zf) goto L_10e95fae;
  /* 10e95f8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10e95f8d je 0x10e95fa9 */
  if (C.zf) goto L_10e95fa9;
  /* 10e95f8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e95f94 je 0x10e95fa4 */
  if (C.zf) goto L_10e95fa4;
  /* 10e95f96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e95f9b je 0x10e95f9f */
  if (C.zf) goto L_10e95f9f;
  /* 10e95f9d jmp 0x10e95f6c */
  goto L_10e95f6c;
L_10e95f9f:;
  /* 10e95f9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10e95fa2 jmp 0x10e95fb1 */
  goto L_10e95fb1;
L_10e95fa4:;
  /* 10e95fa4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10e95fa7 jmp 0x10e95fb1 */
  goto L_10e95fb1;
L_10e95fa9:;
  /* 10e95fa9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10e95fac jmp 0x10e95fb1 */
  goto L_10e95fb1;
L_10e95fae:;
  /* 10e95fae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10e95fb1:;
  /* 10e95fb1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e95fb5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95fbb je 0x10e95fd6 */
  if (C.zf) goto L_10e95fd6;
L_10e95fbd:;
  /* 10e95fbd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10e95fbf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10e95fc0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e95fc2 je 0x10e96028 */
  if (C.zf) goto L_10e96028;
  /* 10e95fc4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e95fc6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e95fc7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10e95fcd jne 0x10e95fbd */
  if (!C.zf) goto L_10e95fbd;
  /* 10e95fcf jmp 0x10e95fd6 */
  goto L_10e95fd6;
L_10e95fd1:;
  /* 10e95fd1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e95fd3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10e95fd6:;
  /* 10e95fd6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e95fdb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10e95fdd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95fdf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e95fe2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e95fe4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e95fe6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e95fe9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e95fee je 0x10e95fd1 */
  if (C.zf) goto L_10e95fd1;
  /* 10e95ff0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e95ff2 je 0x10e96028 */
  if (C.zf) goto L_10e96028;
  /* 10e95ff4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e95ff6 je 0x10e9601f */
  if (C.zf) goto L_10e9601f;
  /* 10e95ff8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e95ffe je 0x10e96012 */
  if (C.zf) goto L_10e96012;
  /* 10e96000 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e96006 je 0x10e9600a */
  if (C.zf) goto L_10e9600a;
  /* 10e96008 jmp 0x10e95fd1 */
  goto L_10e95fd1;
L_10e9600a:;
  /* 10e9600a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e9600c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e96010 pop edi */
  EDI = (pop32());
  /* 10e96011 ret  */
  ESPCHK(0x10e95f50u, _esp0);
  ESP += 4; return;
L_10e96012:;
  /* 10e96012 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e96015 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e96019 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10e9601d pop edi */
  EDI = (pop32());
  /* 10e9601e ret  */
  ESPCHK(0x10e95f50u, _esp0);
  ESP += 4; return;
L_10e9601f:;
  /* 10e9601f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10e96022 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e96026 pop edi */
  EDI = (pop32());
  /* 10e96027 ret  */
  ESPCHK(0x10e95f50u, _esp0);
  ESP += 4; return;
L_10e96028:;
  /* 10e96028 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10e9602a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e9602e pop edi */
  EDI = (pop32());
  /* 10e9602f ret  */
  ESPCHK(0x10e95f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006030 @ 0x10e96030 (243 bytes, 91 insns) */
void f_10e96030(void) {
  FTRACE(0x10e96030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96030 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96031 mov ebp, esp */
  EBP = (ESP);
  /* 10e96033 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96036 push ebx */
  push32((uint32_t)(EBX));
  /* 10e96037 push esi */
  push32((uint32_t)(ESI));
  /* 10e96038 push edi */
  push32((uint32_t)(EDI));
  /* 10e96039 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10e9603c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10e9603f:;
  /* 10e9603f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96043 jne 0x10e96063 */
  if (!C.zf) goto L_10e96063;
  /* 10e96045 push 0x10eb9e2c */
  push32((uint32_t)(0x10eb9e2cu));
  /* 10e9604a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9604c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10e9604e push 0x10eb9e3c */
  push32((uint32_t)(0x10eb9e3cu));
  /* 10e96053 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e96055 call 0x10e92050 */
  push32(0x10e9605au); f_10e92050();
  /* 10e9605a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9605d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96060 jne 0x10e96063 */
  if (!C.zf) goto L_10e96063;
  /* 10e96062 int3  */
  x86_unimpl("int3 @ 0x10e96062");
L_10e96063:;
  /* 10e96063 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e96065 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e96067 jne 0x10e9603f */
  if (!C.zf) goto L_10e9603f;
L_10e96069:;
  /* 10e96069 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9606d jne 0x10e9608d */
  if (!C.zf) goto L_10e9608d;
  /* 10e9606f push 0x10eb9e10 */
  push32((uint32_t)(0x10eb9e10u));
  /* 10e96074 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e96076 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10e96078 push 0x10eb9e3c */
  push32((uint32_t)(0x10eb9e3cu));
  /* 10e9607d push 2 */
  push32((uint32_t)(0x2u));
  /* 10e9607f call 0x10e92050 */
  push32(0x10e96084u); f_10e92050();
  /* 10e96084 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96087 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9608a jne 0x10e9608d */
  if (!C.zf) goto L_10e9608d;
  /* 10e9608c int3  */
  x86_unimpl("int3 @ 0x10e9608c");
L_10e9608d:;
  /* 10e9608d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9608f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e96091 jne 0x10e96069 */
  if (!C.zf) goto L_10e96069;
  /* 10e96093 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e96096 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10e9609d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e960a3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10e960a6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e960ac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10e960ae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e960b4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10e960b7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10e960ba push ecx */
  push32((uint32_t)(ECX));
  /* 10e960bb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e960be push edx */
  push32((uint32_t)(EDX));
  /* 10e960bf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960c2 push eax */
  push32((uint32_t)(EAX));
  /* 10e960c3 call 0x10e99f20 */
  push32(0x10e960c8u); f_10e99f20();
  /* 10e960c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e960cb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10e960ce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960d1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e960d4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e960d7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960da mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10e960dd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960e0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e960e4 jl 0x10e96108 */
  if ((C.sf!=C.of)) goto L_10e96108;
  /* 10e960e6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960e9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e960eb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10e960ee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10e960f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10e960f6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10e960f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e960fc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e960fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96101 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e96104 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10e96106 jmp 0x10e96119 */
  goto L_10e96119;
L_10e96108:;
  /* 10e96108 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10e9610b push edx */
  push32((uint32_t)(EDX));
  /* 10e9610c push 0 */
  push32((uint32_t)(0x0u));
  /* 10e9610e call 0x10e99ca0 */
  push32(0x10e96113u); f_10e99ca0();
  /* 10e96113 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96116 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10e96119:;
  /* 10e96119 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10e9611c pop edi */
  EDI = (pop32());
  /* 10e9611d pop esi */
  ESI = (pop32());
  /* 10e9611e pop ebx */
  EBX = (pop32());
  /* 10e9611f mov esp, ebp */
  ESP = (EBP);
  /* 10e96121 pop ebp */
  EBP = (pop32());
  /* 10e96122 ret  */
  ESPCHK(0x10e96030u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x10e96130 (47 bytes, 17 insns) */
void f_10e96130(void) {
  FTRACE(0x10e96130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96130 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96131 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96136 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10e9613a jb 0x10e96150 */
  if (C.cf) goto L_10e96150;
L_10e9613c:;
  /* 10e9613c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96142 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96147 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e96149 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9614e jae 0x10e9613c */
  if (!C.cf) goto L_10e9613c;
L_10e96150:;
  /* 10e96150 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96152 mov eax, esp */
  EAX = (ESP);
  /* 10e96154 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10e96156 mov esp, ecx */
  ESP = (ECX);
  /* 10e96158 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e9615a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e9615d push eax */
  push32((uint32_t)(EAX));
  /* 10e9615e ret  */
  ESPCHK(0x10e96130u, _esp0);
  ESP += 4; return;
}

/* FUN_10006160 @ 0x10e96160 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10e96160(void) {
  FTRACE(0x10e96160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96160 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96161 mov ebp, esp */
  EBP = (ESP);
  /* 10e96163 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96166 push esi */
  push32((uint32_t)(ESI));
  /* 10e96167 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9616b je 0x10e96173 */
  if (C.zf) goto L_10e96173;
  /* 10e9616d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96171 jne 0x10e96178 */
  if (!C.zf) goto L_10e96178;
L_10e96173:;
  /* 10e96173 jmp 0x10e96348 */
  goto L_10e96348;
L_10e96178:;
  /* 10e96178 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9617c je 0x10e96194 */
  if (C.zf) goto L_10e96194;
  /* 10e9617e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96182 je 0x10e96194 */
  if (C.zf) goto L_10e96194;
  /* 10e96184 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96188 je 0x10e96194 */
  if (C.zf) goto L_10e96194;
  /* 10e9618a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9618e jne 0x10e96271 */
  if (!C.zf) goto L_10e96271;
L_10e96194:;
  /* 10e96194 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e96196 call 0x10e96990 */
  push32(0x10e9619bu); f_10e96990();
  /* 10e9619b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9619e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e961a2 je 0x10e961aa */
  if (C.zf) goto L_10e961aa;
  /* 10e961a4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e961a8 jne 0x10e961ef */
  if (!C.zf) goto L_10e961ef;
L_10e961aa:;
  /* 10e961aa cmp dword ptr [0x10ebe5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e961b1 jne 0x10e961ef */
  if (!C.zf) goto L_10e961ef;
  /* 10e961b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e961b5 push 0x10e96390 */
  push32((uint32_t)(0x10e96390u));
  /* 10e961ba call dword ptr [0x10ec0378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0378))), 0x10e961c0u);
  /* 10e961c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e961c3 jne 0x10e961d1 */
  if (!C.zf) goto L_10e961d1;
  /* 10e961c5 mov dword ptr [0x10ebe5f4], 1 */
  w32((uint32_t)(0x10ebe5f4), (0x1u));
  /* 10e961cf jmp 0x10e961ef */
  goto L_10e961ef;
L_10e961d1:;
  /* 10e961d1 call dword ptr [0x10ec0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0330))), 0x10e961d7u);
  /* 10e961d7 mov esi, eax */
  ESI = (EAX);
  /* 10e961d9 call 0x10e9ae70 */
  push32(0x10e961deu); f_10e9ae70();
  /* 10e961de mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10e961e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e961e2 call 0x10e96a30 */
  push32(0x10e961e7u); f_10e96a30();
  /* 10e961e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e961ea jmp 0x10e96348 */
  goto L_10e96348;
L_10e961ef:;
  /* 10e961ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e961f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e961f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e961f8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e961fb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10e961fe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96202 ja 0x10e96262 */
  if ((!C.cf&&!C.zf)) goto L_10e96262;
  /* 10e96204 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96207 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e96209 mov dl, byte ptr [eax + 0x10e9636f] */
  DL = (r8((uint32_t)(EAX + 0x10e9636f)));
  /* 10e9620f jmp dword ptr [edx*4 + 0x10e9635b] */
  switch (EDX) {
    case 0: goto L_10e96216;
    case 1: goto L_10e96250;
    case 2: goto L_10e9622a;
    case 3: goto L_10e9623d;
    case 4: goto L_10e96262;
    default: x86_unimpl("switch@0x10e9620f out of table"); return;
  }
L_10e96216:;
  /* 10e96216 mov ecx, dword ptr [0x10ebe5e4] */
  ECX = (r32((uint32_t)(0x10ebe5e4)));
  /* 10e9621c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e9621f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96222 mov dword ptr [0x10ebe5e4], edx */
  w32((uint32_t)(0x10ebe5e4), (EDX));
  /* 10e96228 jmp 0x10e96262 */
  goto L_10e96262;
L_10e9622a:;
  /* 10e9622a mov eax, dword ptr [0x10ebe5e8] */
  EAX = (r32((uint32_t)(0x10ebe5e8)));
  /* 10e9622f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e96232 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96235 mov dword ptr [0x10ebe5e8], ecx */
  w32((uint32_t)(0x10ebe5e8), (ECX));
  /* 10e9623b jmp 0x10e96262 */
  goto L_10e96262;
L_10e9623d:;
  /* 10e9623d mov edx, dword ptr [0x10ebe5ec] */
  EDX = (r32((uint32_t)(0x10ebe5ec)));
  /* 10e96243 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10e96246 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96249 mov dword ptr [0x10ebe5ec], eax */
  w32((uint32_t)(0x10ebe5ec), (EAX));
  /* 10e9624e jmp 0x10e96262 */
  goto L_10e96262;
L_10e96250:;
  /* 10e96250 mov ecx, dword ptr [0x10ebe5f0] */
  ECX = (r32((uint32_t)(0x10ebe5f0)));
  /* 10e96256 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e96259 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9625c mov dword ptr [0x10ebe5f0], edx */
  w32((uint32_t)(0x10ebe5f0), (EDX));
L_10e96262:;
  /* 10e96262 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e96264 call 0x10e96a30 */
  push32(0x10e96269u); f_10e96a30();
  /* 10e96269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9626c jmp 0x10e96343 */
  goto L_10e96343;
L_10e96271:;
  /* 10e96271 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96275 je 0x10e96288 */
  if (C.zf) goto L_10e96288;
  /* 10e96277 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9627b je 0x10e96288 */
  if (C.zf) goto L_10e96288;
  /* 10e9627d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96281 je 0x10e96288 */
  if (C.zf) goto L_10e96288;
  /* 10e96283 jmp 0x10e96348 */
  goto L_10e96348;
L_10e96288:;
  /* 10e96288 call 0x10e929d0 */
  push32(0x10e9628du); f_10e929d0();
  /* 10e9628d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96293 cmp dword ptr [eax + 0x50], 0x10ebcc10 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10ebcc10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9629a jne 0x10e962e5 */
  if (!C.zf) goto L_10e962e5;
  /* 10e9629c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10e962a1 push 0x10eb9e48 */
  push32((uint32_t)(0x10eb9e48u));
  /* 10e962a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e962a8 mov ecx, dword ptr [0x10ebcc90] */
  ECX = (r32((uint32_t)(0x10ebcc90)));
  /* 10e962ae push ecx */
  push32((uint32_t)(ECX));
  /* 10e962af call 0x10e92f90 */
  push32(0x10e962b4u); f_10e92f90();
  /* 10e962b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e962b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e962ba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10e962bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e962c0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e962c4 je 0x10e962e3 */
  if (C.zf) goto L_10e962e3;
  /* 10e962c6 mov ecx, dword ptr [0x10ebcc90] */
  ECX = (r32((uint32_t)(0x10ebcc90)));
  /* 10e962cc push ecx */
  push32((uint32_t)(ECX));
  /* 10e962cd push 0x10ebcc10 */
  push32((uint32_t)(0x10ebcc10u));
  /* 10e962d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e962d5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10e962d8 push eax */
  push32((uint32_t)(EAX));
  /* 10e962d9 call 0x10e99870 */
  push32(0x10e962deu); f_10e99870();
  /* 10e962de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e962e1 jmp 0x10e962e5 */
  goto L_10e962e5;
L_10e962e3:;
  /* 10e962e3 jmp 0x10e96348 */
  goto L_10e96348;
L_10e962e5:;
  /* 10e962e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e962e8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e962eb push edx */
  push32((uint32_t)(EDX));
  /* 10e962ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e962ef push eax */
  push32((uint32_t)(EAX));
  /* 10e962f0 call 0x10e96670 */
  push32(0x10e962f5u); f_10e96670();
  /* 10e962f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e962f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e962fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e962ff jne 0x10e96303 */
  if (!C.zf) goto L_10e96303;
  /* 10e96301 jmp 0x10e96348 */
  goto L_10e96348;
L_10e96303:;
  /* 10e96303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96306 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10e96309 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10e9630c:;
  /* 10e9630c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9630f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e96312 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96315 jne 0x10e96343 */
  if (!C.zf) goto L_10e96343;
  /* 10e96317 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e9631a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9631d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10e96320 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96323 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96326 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e96329 mov edx, dword ptr [0x10ebcc94] */
  EDX = (r32((uint32_t)(0x10ebcc94)));
  /* 10e9632f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e96332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96335 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e96338 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9633a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9633d jb 0x10e96341 */
  if (C.cf) goto L_10e96341;
  /* 10e9633f jmp 0x10e96343 */
  goto L_10e96343;
L_10e96341:;
  /* 10e96341 jmp 0x10e9630c */
  goto L_10e9630c;
L_10e96343:;
  /* 10e96343 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e96346 jmp 0x10e96356 */
  goto L_10e96356;
L_10e96348:;
  /* 10e96348 call 0x10e9ae60 */
  push32(0x10e9634du); f_10e9ae60();
  /* 10e9634d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10e96353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e96356:;
  /* 10e96356 pop esi */
  ESI = (pop32());
  /* 10e96357 mov esp, ebp */
  ESP = (EBP);
  /* 10e96359 pop ebp */
  EBP = (pop32());
  /* 10e9635a ret  */
  ESPCHK(0x10e96160u, _esp0);
  ESP += 4; return;
}

/* FUN_10006390 @ 0x10e96390 (146 bytes, 45 insns) */
void f_10e96390(void) {
  FTRACE(0x10e96390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96390 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96391 mov ebp, esp */
  EBP = (ESP);
  /* 10e96393 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96396 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e96398 call 0x10e96990 */
  push32(0x10e9639du); f_10e96990();
  /* 10e9639d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e963a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e963a4 jne 0x10e963be */
  if (!C.zf) goto L_10e963be;
  /* 10e963a6 mov dword ptr [ebp - 8], 0x10ebe5e4 */
  w32((uint32_t)(EBP + -0x8), (0x10ebe5e4u));
  /* 10e963ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e963b0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10e963b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e963b5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10e963bc jmp 0x10e963d4 */
  goto L_10e963d4;
L_10e963be:;
  /* 10e963be mov dword ptr [ebp - 8], 0x10ebe5e8 */
  w32((uint32_t)(EBP + -0x8), (0x10ebe5e8u));
  /* 10e963c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e963c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e963ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e963cd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10e963d4:;
  /* 10e963d4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e963d8 jne 0x10e963e8 */
  if (!C.zf) goto L_10e963e8;
  /* 10e963da push 1 */
  push32((uint32_t)(0x1u));
  /* 10e963dc call 0x10e96a30 */
  push32(0x10e963e1u); f_10e96a30();
  /* 10e963e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e963e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e963e6 jmp 0x10e9641c */
  goto L_10e9641c;
L_10e963e8:;
  /* 10e963e8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e963ec je 0x10e9640d */
  if (C.zf) goto L_10e9640d;
  /* 10e963ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e963f1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10e963f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e963f9 call 0x10e96a30 */
  push32(0x10e963feu); f_10e96a30();
  /* 10e963fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96404 push edx */
  push32((uint32_t)(EDX));
  /* 10e96405 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10e96408u);
  /* 10e96408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9640b jmp 0x10e96417 */
  goto L_10e96417;
L_10e9640d:;
  /* 10e9640d push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9640f call 0x10e96a30 */
  push32(0x10e96414u); f_10e96a30();
  /* 10e96414 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96417:;
  /* 10e96417 mov eax, 1 */
  EAX = (0x1u);
L_10e9641c:;
  /* 10e9641c mov esp, ebp */
  ESP = (EBP);
  /* 10e9641e pop ebp */
  EBP = (pop32());
  /* 10e9641f ret 4 */
  ESPCHK(0x10e96390u, _esp0);
  ESP += 8; return;
}

/* FUN_10006430 @ 0x10e96430 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10e96430(void) {
  FTRACE(0x10e96430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96430 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96431 mov ebp, esp */
  EBP = (ESP);
  /* 10e96433 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96436 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10e9643d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96440 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10e96443 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e96446 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96449 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10e9644c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96450 ja 0x10e964fe */
  if ((!C.cf&&!C.zf)) goto L_10e964fe;
  /* 10e96456 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10e96459 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9645b mov dl, byte ptr [eax + 0x10e96652] */
  DL = (r8((uint32_t)(EAX + 0x10e96652)));
  /* 10e96461 jmp dword ptr [edx*4 + 0x10e9663a] */
  switch (EDX) {
    case 0: goto L_10e96468;
    case 1: goto L_10e964d3;
    case 2: goto L_10e964b9;
    case 3: goto L_10e96485;
    case 4: goto L_10e9649f;
    case 5: goto L_10e964fe;
    default: x86_unimpl("switch@0x10e96461 out of table"); return;
  }
L_10e96468:;
  /* 10e96468 mov dword ptr [ebp - 0x18], 0x10ebe5e4 */
  w32((uint32_t)(EBP + -0x18), (0x10ebe5e4u));
  /* 10e9646f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e96472 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e96474 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e96477 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e9647a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9647d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e96480 jmp 0x10e96506 */
  goto L_10e96506;
L_10e96485:;
  /* 10e96485 mov dword ptr [ebp - 0x18], 0x10ebe5e8 */
  w32((uint32_t)(EBP + -0x18), (0x10ebe5e8u));
  /* 10e9648c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e9648f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e96491 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e96494 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e96497 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9649a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e9649d jmp 0x10e96506 */
  goto L_10e96506;
L_10e9649f:;
  /* 10e9649f mov dword ptr [ebp - 0x18], 0x10ebe5ec */
  w32((uint32_t)(EBP + -0x18), (0x10ebe5ecu));
  /* 10e964a6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e964a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e964ab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e964ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e964b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e964b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e964b7 jmp 0x10e96506 */
  goto L_10e96506;
L_10e964b9:;
  /* 10e964b9 mov dword ptr [ebp - 0x18], 0x10ebe5f0 */
  w32((uint32_t)(EBP + -0x18), (0x10ebe5f0u));
  /* 10e964c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e964c3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e964c5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e964c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e964cb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e964ce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e964d1 jmp 0x10e96506 */
  goto L_10e96506;
L_10e964d3:;
  /* 10e964d3 call 0x10e929d0 */
  push32(0x10e964d8u); f_10e929d0();
  /* 10e964d8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e964db mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e964de mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e964e1 push edx */
  push32((uint32_t)(EDX));
  /* 10e964e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e964e5 push eax */
  push32((uint32_t)(EAX));
  /* 10e964e6 call 0x10e96670 */
  push32(0x10e964ebu); f_10e96670();
  /* 10e964eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e964ee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e964f1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10e964f4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e964f7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e964f9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10e964fc jmp 0x10e96506 */
  goto L_10e96506;
L_10e964fe:;
  /* 10e964fe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e96501 jmp 0x10e96636 */
  goto L_10e96636;
L_10e96506:;
  /* 10e96506 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9650a je 0x10e96516 */
  if (C.zf) goto L_10e96516;
  /* 10e9650c push 1 */
  push32((uint32_t)(0x1u));
  /* 10e9650e call 0x10e96990 */
  push32(0x10e96513u); f_10e96990();
  /* 10e96513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96516:;
  /* 10e96516 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9651a jne 0x10e96533 */
  if (!C.zf) goto L_10e96533;
  /* 10e9651c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96520 je 0x10e9652c */
  if (C.zf) goto L_10e9652c;
  /* 10e96522 push 1 */
  push32((uint32_t)(0x1u));
  /* 10e96524 call 0x10e96a30 */
  push32(0x10e96529u); f_10e96a30();
  /* 10e96529 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9652c:;
  /* 10e9652c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9652e jmp 0x10e96636 */
  goto L_10e96636;
L_10e96533:;
  /* 10e96533 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96537 jne 0x10e96550 */
  if (!C.zf) goto L_10e96550;
  /* 10e96539 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9653d je 0x10e96549 */
  if (C.zf) goto L_10e96549;
  /* 10e9653f push 1 */
  push32((uint32_t)(0x1u));
  /* 10e96541 call 0x10e96a30 */
  push32(0x10e96546u); f_10e96a30();
  /* 10e96546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96549:;
  /* 10e96549 push 3 */
  push32((uint32_t)(0x3u));
  /* 10e9654b call 0x10e92750 */
  push32(0x10e96550u); f_10e92750();
L_10e96550:;
  /* 10e96550 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96554 je 0x10e96562 */
  if (C.zf) goto L_10e96562;
  /* 10e96556 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9655a je 0x10e96562 */
  if (C.zf) goto L_10e96562;
  /* 10e9655c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96560 jne 0x10e9658e */
  if (!C.zf) goto L_10e9658e;
L_10e96562:;
  /* 10e96562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96565 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10e96568 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e9656b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9656e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10e96575 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96579 jne 0x10e9658e */
  if (!C.zf) goto L_10e9658e;
  /* 10e9657b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9657e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e96581 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e96584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96587 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10e9658e:;
  /* 10e9658e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96592 jne 0x10e965d0 */
  if (!C.zf) goto L_10e965d0;
  /* 10e96594 mov eax, dword ptr [0x10ebcc88] */
  EAX = (r32((uint32_t)(0x10ebcc88)));
  /* 10e96599 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e9659c jmp 0x10e965a7 */
  goto L_10e965a7;
L_10e9659e:;
  /* 10e9659e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e965a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e965a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e965a7:;
  /* 10e965a7 mov edx, dword ptr [0x10ebcc88] */
  EDX = (r32((uint32_t)(0x10ebcc88)));
  /* 10e965ad add edx, dword ptr [0x10ebcc8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebcc8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e965b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e965b6 jge 0x10e965ce */
  if ((C.sf==C.of)) goto L_10e965ce;
  /* 10e965b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e965bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e965be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e965c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e965c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e965cc jmp 0x10e9659e */
  goto L_10e9659e;
L_10e965ce:;
  /* 10e965ce jmp 0x10e965d9 */
  goto L_10e965d9;
L_10e965d0:;
  /* 10e965d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e965d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10e965d9:;
  /* 10e965d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e965dd je 0x10e965e9 */
  if (C.zf) goto L_10e965e9;
  /* 10e965df push 1 */
  push32((uint32_t)(0x1u));
  /* 10e965e1 call 0x10e96a30 */
  push32(0x10e965e6u); f_10e96a30();
  /* 10e965e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e965e9:;
  /* 10e965e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e965ed jne 0x10e96600 */
  if (!C.zf) goto L_10e96600;
  /* 10e965ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e965f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e965f5 push edx */
  push32((uint32_t)(EDX));
  /* 10e965f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e965f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e965fbu);
  /* 10e965fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e965fe jmp 0x10e9660a */
  goto L_10e9660a;
L_10e96600:;
  /* 10e96600 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96603 push eax */
  push32((uint32_t)(EAX));
  /* 10e96604 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10e96607u);
  /* 10e96607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e9660a:;
  /* 10e9660a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9660e je 0x10e9661c */
  if (C.zf) goto L_10e9661c;
  /* 10e96610 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96614 je 0x10e9661c */
  if (C.zf) goto L_10e9661c;
  /* 10e96616 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9661a jne 0x10e96634 */
  if (!C.zf) goto L_10e96634;
L_10e9661c:;
  /* 10e9661c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9661f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e96622 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10e96625 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96629 jne 0x10e96634 */
  if (!C.zf) goto L_10e96634;
  /* 10e9662b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9662e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96631 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10e96634:;
  /* 10e96634 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e96636:;
  /* 10e96636 mov esp, ebp */
  ESP = (EBP);
  /* 10e96638 pop ebp */
  EBP = (pop32());
  /* 10e96639 ret  */
  ESPCHK(0x10e96430u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10e96670 (91 bytes, 35 insns) */
void f_10e96670(void) {
  FTRACE(0x10e96670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96670 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96671 mov ebp, esp */
  EBP = (ESP);
  /* 10e96673 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96677 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e9667a:;
  /* 10e9667a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9667d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10e96680 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96683 je 0x10e966a3 */
  if (C.zf) goto L_10e966a3;
  /* 10e96685 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96688 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9668b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e9668e mov ecx, dword ptr [0x10ebcc94] */
  ECX = (r32((uint32_t)(0x10ebcc94)));
  /* 10e96694 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e96697 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e9669a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9669c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9669f jae 0x10e966a3 */
  if (!C.cf) goto L_10e966a3;
  /* 10e966a1 jmp 0x10e9667a */
  goto L_10e9667a;
L_10e966a3:;
  /* 10e966a3 mov eax, dword ptr [0x10ebcc94] */
  EAX = (r32((uint32_t)(0x10ebcc94)));
  /* 10e966a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e966ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e966ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e966b0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e966b3 jae 0x10e966c5 */
  if (!C.cf) goto L_10e966c5;
  /* 10e966b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e966b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10e966bb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e966be jne 0x10e966c5 */
  if (!C.zf) goto L_10e966c5;
  /* 10e966c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e966c3 jmp 0x10e966c7 */
  goto L_10e966c7;
L_10e966c5:;
  /* 10e966c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e966c7:;
  /* 10e966c7 mov esp, ebp */
  ESP = (EBP);
  /* 10e966c9 pop ebp */
  EBP = (pop32());
  /* 10e966ca ret  */
  ESPCHK(0x10e96670u, _esp0);
  ESP += 4; return;
}

/* FUN_100066d0 @ 0x10e966d0 (13 bytes, 6 insns) */
void f_10e966d0(void) {
  FTRACE(0x10e966d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e966d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e966d1 mov ebp, esp */
  EBP = (ESP);
  /* 10e966d3 call 0x10e929d0 */
  push32(0x10e966d8u); f_10e929d0();
  /* 10e966d8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e966db pop ebp */
  EBP = (pop32());
  /* 10e966dc ret  */
  ESPCHK(0x10e966d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x10e966e0 (13 bytes, 6 insns) */
void f_10e966e0(void) {
  FTRACE(0x10e966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e966e1 mov ebp, esp */
  EBP = (ESP);
  /* 10e966e3 call 0x10e929d0 */
  push32(0x10e966e8u); f_10e929d0();
  /* 10e966e8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e966eb pop ebp */
  EBP = (pop32());
  /* 10e966ec ret  */
  ESPCHK(0x10e966e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066f0 @ 0x10e966f0 (187 bytes, 54 insns) */
void f_10e966f0(void) {
  FTRACE(0x10e966f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e966f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e966f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e966f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e966f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e966fd cmp dword ptr [0x10ebe5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96704 jne 0x10e96763 */
  if (!C.zf) goto L_10e96763;
  /* 10e96706 push 0x10eb9274 */
  push32((uint32_t)(0x10eb9274u));
  /* 10e9670b call dword ptr [0x10ec0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0300))), 0x10e96711u);
  /* 10e96711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e96714 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96718 je 0x10e96737 */
  if (C.zf) goto L_10e96737;
  /* 10e9671a push 0x10eb9e78 */
  push32((uint32_t)(0x10eb9e78u));
  /* 10e9671f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96722 push eax */
  push32((uint32_t)(EAX));
  /* 10e96723 call dword ptr [0x10ec02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02fc))), 0x10e96729u);
  /* 10e96729 mov dword ptr [0x10ebe5f8], eax */
  w32((uint32_t)(0x10ebe5f8), (EAX));
  /* 10e9672e cmp dword ptr [0x10ebe5f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96735 jne 0x10e9673b */
  if (!C.zf) goto L_10e9673b;
L_10e96737:;
  /* 10e96737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96739 jmp 0x10e967a7 */
  goto L_10e967a7;
L_10e9673b:;
  /* 10e9673b push 0x10eb9e68 */
  push32((uint32_t)(0x10eb9e68u));
  /* 10e96740 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96743 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96744 call dword ptr [0x10ec02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02fc))), 0x10e9674au);
  /* 10e9674a mov dword ptr [0x10ebe5fc], eax */
  w32((uint32_t)(0x10ebe5fc), (EAX));
  /* 10e9674f push 0x10eb9e54 */
  push32((uint32_t)(0x10eb9e54u));
  /* 10e96754 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96757 push edx */
  push32((uint32_t)(EDX));
  /* 10e96758 call dword ptr [0x10ec02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec02fc))), 0x10e9675eu);
  /* 10e9675e mov dword ptr [0x10ebe600], eax */
  w32((uint32_t)(0x10ebe600), (EAX));
L_10e96763:;
  /* 10e96763 cmp dword ptr [0x10ebe5fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe5fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9676a je 0x10e96775 */
  if (C.zf) goto L_10e96775;
  /* 10e9676c call dword ptr [0x10ebe5fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe5fc))), 0x10e96772u);
  /* 10e96772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e96775:;
  /* 10e96775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96779 je 0x10e96791 */
  if (C.zf) goto L_10e96791;
  /* 10e9677b cmp dword ptr [0x10ebe600], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe600))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96782 je 0x10e96791 */
  if (C.zf) goto L_10e96791;
  /* 10e96784 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96787 push eax */
  push32((uint32_t)(EAX));
  /* 10e96788 call dword ptr [0x10ebe600] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe600))), 0x10e9678eu);
  /* 10e9678e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e96791:;
  /* 10e96791 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10e96794 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96795 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96798 push edx */
  push32((uint32_t)(EDX));
  /* 10e96799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9679c push eax */
  push32((uint32_t)(EAX));
  /* 10e9679d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e967a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e967a1 call dword ptr [0x10ebe5f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ebe5f8))), 0x10e967a7u);
L_10e967a7:;
  /* 10e967a7 mov esp, ebp */
  ESP = (EBP);
  /* 10e967a9 pop ebp */
  EBP = (pop32());
  /* 10e967aa ret  */
  ESPCHK(0x10e966f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10e967b0 (254 bytes, 109 insns) */
void f_10e967b0(void) {
  FTRACE(0x10e967b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e967b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e967b4 push edi */
  push32((uint32_t)(EDI));
  /* 10e967b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10e967b7 je 0x10e96833 */
  if (C.zf) goto L_10e96833;
  /* 10e967b9 push esi */
  push32((uint32_t)(ESI));
  /* 10e967ba push ebx */
  push32((uint32_t)(EBX));
  /* 10e967bb mov ebx, ecx */
  EBX = (ECX);
  /* 10e967bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10e967c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e967c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10e967cb jne 0x10e967d4 */
  if (!C.zf) goto L_10e967d4;
  /* 10e967cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e967d0 jne 0x10e96841 */
  if (!C.zf) goto L_10e96841;
  /* 10e967d2 jmp 0x10e967f5 */
  goto L_10e967f5;
L_10e967d4:;
  /* 10e967d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e967d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e967d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e967d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e967da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e967db je 0x10e96802 */
  if (C.zf) goto L_10e96802;
  /* 10e967dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e967df je 0x10e9680a */
  if (C.zf) goto L_10e9680a;
  /* 10e967e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10e967e7 jne 0x10e967d4 */
  if (!C.zf) goto L_10e967d4;
  /* 10e967e9 mov ebx, ecx */
  EBX = (ECX);
  /* 10e967eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e967ee jne 0x10e96841 */
  if (!C.zf) goto L_10e96841;
L_10e967f0:;
  /* 10e967f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e967f3 je 0x10e96802 */
  if (C.zf) goto L_10e96802;
L_10e967f5:;
  /* 10e967f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10e967f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10e967f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e967fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e967fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10e967fd je 0x10e9682e */
  if (C.zf) goto L_10e9682e;
  /* 10e967ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e96800 jne 0x10e967f5 */
  if (!C.zf) goto L_10e967f5;
L_10e96802:;
  /* 10e96802 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e96806 pop ebx */
  EBX = (pop32());
  /* 10e96807 pop esi */
  ESI = (pop32());
  /* 10e96808 pop edi */
  EDI = (pop32());
  /* 10e96809 ret  */
  ESPCHK(0x10e967b0u, _esp0);
  ESP += 4; return;
L_10e9680a:;
  /* 10e9680a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e96810 je 0x10e96824 */
  if (C.zf) goto L_10e96824;
L_10e96812:;
  /* 10e96812 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e96814 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e96815 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e96816 je 0x10e968a6 */
  if (C.zf) goto L_10e968a6;
  /* 10e9681c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10e96822 jne 0x10e96812 */
  if (!C.zf) goto L_10e96812;
L_10e96824:;
  /* 10e96824 mov ebx, ecx */
  EBX = (ECX);
  /* 10e96826 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e96829 jne 0x10e96897 */
  if (!C.zf) goto L_10e96897;
L_10e9682b:;
  /* 10e9682b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e9682d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10e9682e:;
  /* 10e9682e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10e9682f jne 0x10e9682b */
  if (!C.zf) goto L_10e9682b;
  /* 10e96831 pop ebx */
  EBX = (pop32());
  /* 10e96832 pop esi */
  ESI = (pop32());
L_10e96833:;
  /* 10e96833 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e96837 pop edi */
  EDI = (pop32());
  /* 10e96838 ret  */
  ESPCHK(0x10e967b0u, _esp0);
  ESP += 4; return;
L_10e96839:;
  /* 10e96839 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e9683b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9683e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e9683f je 0x10e967f0 */
  if (C.zf) goto L_10e967f0;
L_10e96841:;
  /* 10e96841 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10e96846 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10e96848 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9684a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e9684d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10e9684f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10e96851 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96854 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10e96859 je 0x10e96839 */
  if (C.zf) goto L_10e96839;
  /* 10e9685b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10e9685d je 0x10e9688b */
  if (C.zf) goto L_10e9688b;
  /* 10e9685f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10e96861 je 0x10e96881 */
  if (C.zf) goto L_10e96881;
  /* 10e96863 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10e96869 je 0x10e96877 */
  if (C.zf) goto L_10e96877;
  /* 10e9686b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10e96871 jne 0x10e96839 */
  if (!C.zf) goto L_10e96839;
  /* 10e96873 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e96875 jmp 0x10e9688f */
  goto L_10e9688f;
L_10e96877:;
  /* 10e96877 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e9687d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e9687f jmp 0x10e9688f */
  goto L_10e9688f;
L_10e96881:;
  /* 10e96881 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10e96887 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10e96889 jmp 0x10e9688f */
  goto L_10e9688f;
L_10e9688b:;
  /* 10e9688b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10e9688d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10e9688f:;
  /* 10e9688f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96894 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e96895 je 0x10e968a1 */
  if (C.zf) goto L_10e968a1;
L_10e96897:;
  /* 10e96897 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10e96899:;
  /* 10e96899 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10e9689b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9689e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e9689f jne 0x10e96899 */
  if (!C.zf) goto L_10e96899;
L_10e968a1:;
  /* 10e968a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10e968a4 jne 0x10e9682b */
  if (!C.zf) goto L_10e9682b;
L_10e968a6:;
  /* 10e968a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10e968aa pop ebx */
  EBX = (pop32());
  /* 10e968ab pop esi */
  ESI = (pop32());
  /* 10e968ac pop edi */
  EDI = (pop32());
  /* 10e968ad ret  */
  ESPCHK(0x10e967b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x10e968b0 (55 bytes, 16 insns) */
void f_10e968b0(void) {
  FTRACE(0x10e968b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e968b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e968b1 mov ebp, esp */
  EBP = (ESP);
  /* 10e968b3 mov eax, dword ptr [0x10ebcb94] */
  EAX = (r32((uint32_t)(0x10ebcb94)));
  /* 10e968b8 push eax */
  push32((uint32_t)(EAX));
  /* 10e968b9 call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e968bfu);
  /* 10e968bf mov ecx, dword ptr [0x10ebcb84] */
  ECX = (r32((uint32_t)(0x10ebcb84)));
  /* 10e968c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e968c6 call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e968ccu);
  /* 10e968cc mov edx, dword ptr [0x10ebcb74] */
  EDX = (r32((uint32_t)(0x10ebcb74)));
  /* 10e968d2 push edx */
  push32((uint32_t)(EDX));
  /* 10e968d3 call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e968d9u);
  /* 10e968d9 mov eax, dword ptr [0x10ebcb54] */
  EAX = (r32((uint32_t)(0x10ebcb54)));
  /* 10e968de push eax */
  push32((uint32_t)(EAX));
  /* 10e968df call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e968e5u);
  /* 10e968e5 pop ebp */
  EBP = (pop32());
  /* 10e968e6 ret  */
  ESPCHK(0x10e968b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068f0 @ 0x10e968f0 (159 bytes, 47 insns) */
void f_10e968f0(void) {
  FTRACE(0x10e968f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e968f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e968f1 mov ebp, esp */
  EBP = (ESP);
  /* 10e968f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e968f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e968fb jmp 0x10e96906 */
  goto L_10e96906;
L_10e968fd:;
  /* 10e968fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96900 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96903 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e96906:;
  /* 10e96906 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9690a jge 0x10e96959 */
  if ((C.sf==C.of)) goto L_10e96959;
  /* 10e9690c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e9690f cmp dword ptr [ecx*4 + 0x10ebcb50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ebcb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96917 je 0x10e96957 */
  if (C.zf) goto L_10e96957;
  /* 10e96919 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9691d je 0x10e96957 */
  if (C.zf) goto L_10e96957;
  /* 10e9691f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96923 je 0x10e96957 */
  if (C.zf) goto L_10e96957;
  /* 10e96925 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96929 je 0x10e96957 */
  if (C.zf) goto L_10e96957;
  /* 10e9692b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9692f je 0x10e96957 */
  if (C.zf) goto L_10e96957;
  /* 10e96931 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96934 mov eax, dword ptr [edx*4 + 0x10ebcb50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10ebcb50)));
  /* 10e9693b push eax */
  push32((uint32_t)(EAX));
  /* 10e9693c call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e96942u);
  /* 10e96942 push 2 */
  push32((uint32_t)(0x2u));
  /* 10e96944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96947 mov edx, dword ptr [ecx*4 + 0x10ebcb50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10ebcb50)));
  /* 10e9694e push edx */
  push32((uint32_t)(EDX));
  /* 10e9694f call 0x10e93a20 */
  push32(0x10e96954u); f_10e93a20();
  /* 10e96954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96957:;
  /* 10e96957 jmp 0x10e968fd */
  goto L_10e968fd;
L_10e96959:;
  /* 10e96959 mov eax, dword ptr [0x10ebcb74] */
  EAX = (r32((uint32_t)(0x10ebcb74)));
  /* 10e9695e push eax */
  push32((uint32_t)(EAX));
  /* 10e9695f call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e96965u);
  /* 10e96965 mov ecx, dword ptr [0x10ebcb84] */
  ECX = (r32((uint32_t)(0x10ebcb84)));
  /* 10e9696b push ecx */
  push32((uint32_t)(ECX));
  /* 10e9696c call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e96972u);
  /* 10e96972 mov edx, dword ptr [0x10ebcb94] */
  EDX = (r32((uint32_t)(0x10ebcb94)));
  /* 10e96978 push edx */
  push32((uint32_t)(EDX));
  /* 10e96979 call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e9697fu);
  /* 10e9697f mov eax, dword ptr [0x10ebcb54] */
  EAX = (r32((uint32_t)(0x10ebcb54)));
  /* 10e96984 push eax */
  push32((uint32_t)(EAX));
  /* 10e96985 call dword ptr [0x10ec0344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0344))), 0x10e9698bu);
  /* 10e9698b mov esp, ebp */
  ESP = (EBP);
  /* 10e9698d pop ebp */
  EBP = (pop32());
  /* 10e9698e ret  */
  ESPCHK(0x10e968f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x10e96990 (151 bytes, 46 insns) */
void f_10e96990(void) {
  FTRACE(0x10e96990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96990 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96991 mov ebp, esp */
  EBP = (ESP);
  /* 10e96993 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96997 cmp dword ptr [eax*4 + 0x10ebcb50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10ebcb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9699f jne 0x10e96a12 */
  if (!C.zf) goto L_10e96a12;
  /* 10e969a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10e969a6 push 0x10eb9e84 */
  push32((uint32_t)(0x10eb9e84u));
  /* 10e969ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10e969ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10e969af call 0x10e92f90 */
  push32(0x10e969b4u); f_10e92f90();
  /* 10e969b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e969b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e969ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e969be jne 0x10e969ca */
  if (!C.zf) goto L_10e969ca;
  /* 10e969c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e969c2 call 0x10e91f00 */
  push32(0x10e969c7u); f_10e91f00();
  /* 10e969c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e969ca:;
  /* 10e969ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e969cc call 0x10e96990 */
  push32(0x10e969d1u); f_10e96990();
  /* 10e969d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e969d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e969d7 cmp dword ptr [ecx*4 + 0x10ebcb50], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10ebcb50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e969df jne 0x10e969fa */
  if (!C.zf) goto L_10e969fa;
  /* 10e969e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e969e4 push edx */
  push32((uint32_t)(EDX));
  /* 10e969e5 call dword ptr [0x10ec0364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0364))), 0x10e969ebu);
  /* 10e969eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e969ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e969f1 mov dword ptr [eax*4 + 0x10ebcb50], ecx */
  w32((uint32_t)(EAX*4 + 0x10ebcb50), (ECX));
  /* 10e969f8 jmp 0x10e96a08 */
  goto L_10e96a08;
L_10e969fa:;
  /* 10e969fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10e969fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e969ff push edx */
  push32((uint32_t)(EDX));
  /* 10e96a00 call 0x10e93a20 */
  push32(0x10e96a05u); f_10e93a20();
  /* 10e96a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96a08:;
  /* 10e96a08 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10e96a0a call 0x10e96a30 */
  push32(0x10e96a0fu); f_10e96a30();
  /* 10e96a0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96a12:;
  /* 10e96a12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96a15 mov ecx, dword ptr [eax*4 + 0x10ebcb50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebcb50)));
  /* 10e96a1c push ecx */
  push32((uint32_t)(ECX));
  /* 10e96a1d call dword ptr [0x10ec037c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec037c))), 0x10e96a23u);
  /* 10e96a23 mov esp, ebp */
  ESP = (EBP);
  /* 10e96a25 pop ebp */
  EBP = (pop32());
  /* 10e96a26 ret  */
  ESPCHK(0x10e96990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x10e96a30 (22 bytes, 8 insns) */
void f_10e96a30(void) {
  FTRACE(0x10e96a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96a31 mov ebp, esp */
  EBP = (ESP);
  /* 10e96a33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96a36 mov ecx, dword ptr [eax*4 + 0x10ebcb50] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10ebcb50)));
  /* 10e96a3d push ecx */
  push32((uint32_t)(ECX));
  /* 10e96a3e call dword ptr [0x10ec0380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0380))), 0x10e96a44u);
  /* 10e96a44 pop ebp */
  EBP = (pop32());
  /* 10e96a45 ret  */
  ESPCHK(0x10e96a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x10e96a50 (26 bytes, 10 insns) */
void f_10e96a50(void) {
  FTRACE(0x10e96a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96a51 mov ebp, esp */
  EBP = (ESP);
  /* 10e96a53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96a56 push eax */
  push32((uint32_t)(EAX));
  /* 10e96a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e96a59 call dword ptr [0x10ec0384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0384))), 0x10e96a5fu);
  /* 10e96a5f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10e96a64 call dword ptr [0x10ec030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec030c))), 0x10e96a6au);
  /* 10e96a6a pop ebp */
  EBP = (pop32());
  /* 10e96a6b ret  */
  ESPCHK(0x10e96a50u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10e96a70 (446 bytes, 130 insns) */
void f_10e96a70(void) {
  FTRACE(0x10e96a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96a71 mov ebp, esp */
  EBP = (ESP);
  /* 10e96a73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96a76 call 0x10e929d0 */
  push32(0x10e96a7bu); f_10e929d0();
  /* 10e96a7b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e96a7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96a81 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10e96a84 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96a85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96a88 push edx */
  push32((uint32_t)(EDX));
  /* 10e96a89 call 0x10e96c30 */
  push32(0x10e96a8eu); f_10e96c30();
  /* 10e96a8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96a91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e96a94 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96a98 je 0x10e96aa3 */
  if (C.zf) goto L_10e96aa3;
  /* 10e96a9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96a9d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96aa1 jne 0x10e96ab2 */
  if (!C.zf) goto L_10e96ab2;
L_10e96aa3:;
  /* 10e96aa3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96aa7 call dword ptr [0x10ec0388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0388))), 0x10e96aadu);
  /* 10e96aad jmp 0x10e96c2a */
  goto L_10e96c2a;
L_10e96ab2:;
  /* 10e96ab2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96ab5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96ab9 jne 0x10e96acf */
  if (!C.zf) goto L_10e96acf;
  /* 10e96abb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96abe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10e96ac5 mov eax, 1 */
  EAX = (0x1u);
  /* 10e96aca jmp 0x10e96c2a */
  goto L_10e96c2a;
L_10e96acf:;
  /* 10e96acf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96ad2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96ad6 jne 0x10e96ae0 */
  if (!C.zf) goto L_10e96ae0;
  /* 10e96ad8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10e96adb jmp 0x10e96c2a */
  goto L_10e96c2a;
L_10e96ae0:;
  /* 10e96ae0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96ae3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10e96ae6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96ae9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96aec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10e96aef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10e96af2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96af5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96af8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10e96afb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96afe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b02 jne 0x10e96c07 */
  if (!C.zf) goto L_10e96c07;
  /* 10e96b08 mov eax, dword ptr [0x10ebcc88] */
  EAX = (r32((uint32_t)(0x10ebcc88)));
  /* 10e96b0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10e96b10 jmp 0x10e96b1b */
  goto L_10e96b1b;
L_10e96b12:;
  /* 10e96b12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e96b15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96b18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10e96b1b:;
  /* 10e96b1b mov edx, dword ptr [0x10ebcc88] */
  EDX = (r32((uint32_t)(0x10ebcc88)));
  /* 10e96b21 add edx, dword ptr [0x10ebcc8c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10ebcc8c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96b27 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b2a jge 0x10e96b42 */
  if ((C.sf==C.of)) goto L_10e96b42;
  /* 10e96b2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e96b2f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e96b32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96b35 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10e96b38 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10e96b40 jmp 0x10e96b12 */
  goto L_10e96b12;
L_10e96b42:;
  /* 10e96b42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96b45 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10e96b48 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10e96b4b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96b4e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b54 jne 0x10e96b65 */
  if (!C.zf) goto L_10e96b65;
  /* 10e96b56 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96b59 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10e96b60 jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96b65:;
  /* 10e96b65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96b68 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b6e jne 0x10e96b7c */
  if (!C.zf) goto L_10e96b7c;
  /* 10e96b70 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96b73 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10e96b7a jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96b7c:;
  /* 10e96b7c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96b7f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b85 jne 0x10e96b93 */
  if (!C.zf) goto L_10e96b93;
  /* 10e96b87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96b8a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10e96b91 jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96b93:;
  /* 10e96b93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96b96 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96b9c jne 0x10e96baa */
  if (!C.zf) goto L_10e96baa;
  /* 10e96b9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96ba1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10e96ba8 jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96baa:;
  /* 10e96baa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96bad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96bb3 jne 0x10e96bc1 */
  if (!C.zf) goto L_10e96bc1;
  /* 10e96bb5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96bb8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10e96bbf jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96bc1:;
  /* 10e96bc1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96bc4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96bca jne 0x10e96bd8 */
  if (!C.zf) goto L_10e96bd8;
  /* 10e96bcc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96bcf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10e96bd6 jmp 0x10e96bed */
  goto L_10e96bed;
L_10e96bd8:;
  /* 10e96bd8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96bdb cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96be1 jne 0x10e96bed */
  if (!C.zf) goto L_10e96bed;
  /* 10e96be3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96be6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10e96bed:;
  /* 10e96bed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96bf0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10e96bf3 push edx */
  push32((uint32_t)(EDX));
  /* 10e96bf4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10e96bf6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e96bf9u);
  /* 10e96bf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96bfc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e96c02 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10e96c05 jmp 0x10e96c1e */
  goto L_10e96c1e;
L_10e96c07:;
  /* 10e96c07 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96c0a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10e96c11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96c14 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10e96c17 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96c18 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e96c1bu);
  /* 10e96c1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e96c1e:;
  /* 10e96c1e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96c21 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10e96c24 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10e96c27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10e96c2a:;
  /* 10e96c2a mov esp, ebp */
  ESP = (EBP);
  /* 10e96c2c pop ebp */
  EBP = (pop32());
  /* 10e96c2d ret  */
  ESPCHK(0x10e96a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x10e96c30 (89 bytes, 35 insns) */
void f_10e96c30(void) {
  FTRACE(0x10e96c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96c31 mov ebp, esp */
  EBP = (ESP);
  /* 10e96c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96c34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96c37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10e96c3a:;
  /* 10e96c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96c3d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10e96c3f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96c42 je 0x10e96c62 */
  if (C.zf) goto L_10e96c62;
  /* 10e96c44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96c47 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96c4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96c4d mov ecx, dword ptr [0x10ebcc94] */
  ECX = (r32((uint32_t)(0x10ebcc94)));
  /* 10e96c53 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e96c56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96c59 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96c5b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96c5e jae 0x10e96c62 */
  if (!C.cf) goto L_10e96c62;
  /* 10e96c60 jmp 0x10e96c3a */
  goto L_10e96c3a;
L_10e96c62:;
  /* 10e96c62 mov eax, dword ptr [0x10ebcc94] */
  EAX = (r32((uint32_t)(0x10ebcc94)));
  /* 10e96c67 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10e96c6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96c6d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96c6f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96c72 jae 0x10e96c7e */
  if (!C.cf) goto L_10e96c7e;
  /* 10e96c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96c77 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10e96c79 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96c7c je 0x10e96c82 */
  if (C.zf) goto L_10e96c82;
L_10e96c7e:;
  /* 10e96c7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96c80 jmp 0x10e96c85 */
  goto L_10e96c85;
L_10e96c82:;
  /* 10e96c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10e96c85:;
  /* 10e96c85 mov esp, ebp */
  ESP = (EBP);
  /* 10e96c87 pop ebp */
  EBP = (pop32());
  /* 10e96c88 ret  */
  ESPCHK(0x10e96c30u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10e96c90 (48 bytes, 17 insns) */
void f_10e96c90(void) {
  FTRACE(0x10e96c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96c91 mov ebp, esp */
  EBP = (ESP);
  /* 10e96c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96c94 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96c96 call 0x10e96990 */
  push32(0x10e96c9bu); f_10e96990();
  /* 10e96c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96c9e mov eax, dword ptr [0x10ebe66c] */
  EAX = (r32((uint32_t)(0x10ebe66c)));
  /* 10e96ca3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96ca6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96ca9 mov dword ptr [0x10ebe66c], ecx */
  w32((uint32_t)(0x10ebe66c), (ECX));
  /* 10e96caf push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96cb1 call 0x10e96a30 */
  push32(0x10e96cb6u); f_10e96a30();
  /* 10e96cb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96cb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96cbc mov esp, ebp */
  ESP = (EBP);
  /* 10e96cbe pop ebp */
  EBP = (pop32());
  /* 10e96cbf ret  */
  ESPCHK(0x10e96c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x10e96cc0 (10 bytes, 5 insns) */
void f_10e96cc0(void) {
  FTRACE(0x10e96cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10e96cc3 mov eax, dword ptr [0x10ebe66c] */
  EAX = (r32((uint32_t)(0x10ebe66c)));
  /* 10e96cc8 pop ebp */
  EBP = (pop32());
  /* 10e96cc9 ret  */
  ESPCHK(0x10e96cc0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10e96cd0 (45 bytes, 19 insns) */
void f_10e96cd0(void) {
  FTRACE(0x10e96cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96cd1 mov ebp, esp */
  EBP = (ESP);
  /* 10e96cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96cd4 mov eax, dword ptr [0x10ebe66c] */
  EAX = (r32((uint32_t)(0x10ebe66c)));
  /* 10e96cd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96cdc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96ce0 je 0x10e96cf0 */
  if (C.zf) goto L_10e96cf0;
  /* 10e96ce2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96ce5 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96ce6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10e96ce9u);
  /* 10e96ce9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96cec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e96cee jne 0x10e96cf4 */
  if (!C.zf) goto L_10e96cf4;
L_10e96cf0:;
  /* 10e96cf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96cf2 jmp 0x10e96cf9 */
  goto L_10e96cf9;
L_10e96cf4:;
  /* 10e96cf4 mov eax, 1 */
  EAX = (0x1u);
L_10e96cf9:;
  /* 10e96cf9 mov esp, ebp */
  ESP = (EBP);
  /* 10e96cfb pop ebp */
  EBP = (pop32());
  /* 10e96cfc ret  */
  ESPCHK(0x10e96cd0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10e96d00 (88 bytes, 40 insns) */
void f_10e96d00(void) {
  FTRACE(0x10e96d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96d00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10e96d04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e96d08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e96d0a je 0x10e96d53 */
  if (C.zf) goto L_10e96d53;
  /* 10e96d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96d0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10e96d12 push edi */
  push32((uint32_t)(EDI));
  /* 10e96d13 mov edi, ecx */
  EDI = (ECX);
  /* 10e96d15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96d18 jb 0x10e96d47 */
  if (C.cf) goto L_10e96d47;
  /* 10e96d1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10e96d1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10e96d1f je 0x10e96d29 */
  if (C.zf) goto L_10e96d29;
  /* 10e96d21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10e96d23:;
  /* 10e96d23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e96d25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e96d26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10e96d27 jne 0x10e96d23 */
  if (!C.zf) goto L_10e96d23;
L_10e96d29:;
  /* 10e96d29 mov ecx, eax */
  ECX = (EAX);
  /* 10e96d2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10e96d2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96d30 mov ecx, eax */
  ECX = (EAX);
  /* 10e96d32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10e96d35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96d37 mov ecx, edx */
  ECX = (EDX);
  /* 10e96d39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10e96d3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10e96d3f je 0x10e96d47 */
  if (C.zf) goto L_10e96d47;
  /* 10e96d41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10e96d43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10e96d45 je 0x10e96d4d */
  if (C.zf) goto L_10e96d4d;
L_10e96d47:;
  /* 10e96d47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10e96d49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10e96d4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10e96d4b jne 0x10e96d47 */
  if (!C.zf) goto L_10e96d47;
L_10e96d4d:;
  /* 10e96d4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10e96d51 pop edi */
  EDI = (pop32());
  /* 10e96d52 ret  */
  ESPCHK(0x10e96d00u, _esp0);
  ESP += 4; return;
L_10e96d53:;
  /* 10e96d53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10e96d57 ret  */
  ESPCHK(0x10e96d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d60 @ 0x10e96d60 (23 bytes, 10 insns) */
void f_10e96d60(void) {
  FTRACE(0x10e96d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96d61 mov ebp, esp */
  EBP = (ESP);
  /* 10e96d63 mov eax, dword ptr [0x10ebe668] */
  EAX = (r32((uint32_t)(0x10ebe668)));
  /* 10e96d68 push eax */
  push32((uint32_t)(EAX));
  /* 10e96d69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96d6c push ecx */
  push32((uint32_t)(ECX));
  /* 10e96d6d call 0x10e96d80 */
  push32(0x10e96d72u); f_10e96d80();
  /* 10e96d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96d75 pop ebp */
  EBP = (pop32());
  /* 10e96d76 ret  */
  ESPCHK(0x10e96d60u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10e96d80 (87 bytes, 34 insns) */
void f_10e96d80(void) {
  FTRACE(0x10e96d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96d81 mov ebp, esp */
  EBP = (ESP);
  /* 10e96d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96d84 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96d88 jbe 0x10e96d8e */
  if ((C.cf||C.zf)) goto L_10e96d8e;
  /* 10e96d8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96d8c jmp 0x10e96dd3 */
  goto L_10e96dd3;
L_10e96d8e:;
  /* 10e96d8e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96d92 ja 0x10e96da5 */
  if ((!C.cf&&!C.zf)) goto L_10e96da5;
  /* 10e96d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96d97 push eax */
  push32((uint32_t)(EAX));
  /* 10e96d98 call 0x10e96de0 */
  push32(0x10e96d9du); f_10e96de0();
  /* 10e96d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96da0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96da3 jmp 0x10e96dac */
  goto L_10e96dac;
L_10e96da5:;
  /* 10e96da5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10e96dac:;
  /* 10e96dac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96db0 jne 0x10e96db8 */
  if (!C.zf) goto L_10e96db8;
  /* 10e96db2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96db6 jne 0x10e96dbd */
  if (!C.zf) goto L_10e96dbd;
L_10e96db8:;
  /* 10e96db8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96dbb jmp 0x10e96dd3 */
  goto L_10e96dd3;
L_10e96dbd:;
  /* 10e96dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96dc1 call 0x10e96cd0 */
  push32(0x10e96dc6u); f_10e96cd0();
  /* 10e96dc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e96dcb jne 0x10e96dd1 */
  if (!C.zf) goto L_10e96dd1;
  /* 10e96dcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96dcf jmp 0x10e96dd3 */
  goto L_10e96dd3;
L_10e96dd1:;
  /* 10e96dd1 jmp 0x10e96d8e */
  goto L_10e96d8e;
L_10e96dd3:;
  /* 10e96dd3 mov esp, ebp */
  ESP = (EBP);
  /* 10e96dd5 pop ebp */
  EBP = (pop32());
  /* 10e96dd6 ret  */
  ESPCHK(0x10e96d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006de0 @ 0x10e96de0 (109 bytes, 37 insns) */
void f_10e96de0(void) {
  FTRACE(0x10e96de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96de1 mov ebp, esp */
  EBP = (ESP);
  /* 10e96de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96de7 cmp eax, dword ptr [0x10ebcca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebcca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96ded ja 0x10e96e1d */
  if ((!C.cf&&!C.zf)) goto L_10e96e1d;
  /* 10e96def push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96df1 call 0x10e96990 */
  push32(0x10e96df6u); f_10e96990();
  /* 10e96df6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96df9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96dfc push ecx */
  push32((uint32_t)(ECX));
  /* 10e96dfd call 0x10e97920 */
  push32(0x10e96e02u); f_10e97920();
  /* 10e96e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96e05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e96e08 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96e0a call 0x10e96a30 */
  push32(0x10e96e0fu); f_10e96a30();
  /* 10e96e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96e12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96e16 je 0x10e96e1d */
  if (C.zf) goto L_10e96e1d;
  /* 10e96e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96e1b jmp 0x10e96e49 */
  goto L_10e96e49;
L_10e96e1d:;
  /* 10e96e1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96e21 jne 0x10e96e2a */
  if (!C.zf) goto L_10e96e2a;
  /* 10e96e23 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10e96e2a:;
  /* 10e96e2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96e2d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96e30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e96e33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10e96e36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96e39 push eax */
  push32((uint32_t)(EAX));
  /* 10e96e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10e96e3c mov ecx, dword ptr [0x10ebfe2c] */
  ECX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e96e42 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96e43 call dword ptr [0x10ec038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec038c))), 0x10e96e49u);
L_10e96e49:;
  /* 10e96e49 mov esp, ebp */
  ESP = (EBP);
  /* 10e96e4b pop ebp */
  EBP = (pop32());
  /* 10e96e4c ret  */
  ESPCHK(0x10e96de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e50 @ 0x10e96e50 (10 bytes, 5 insns) */
void f_10e96e50(void) {
  FTRACE(0x10e96e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96e51 mov ebp, esp */
  EBP = (ESP);
  /* 10e96e53 mov eax, 1 */
  EAX = (0x1u);
  /* 10e96e58 pop ebp */
  EBP = (pop32());
  /* 10e96e59 ret  */
  ESPCHK(0x10e96e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e60 @ 0x10e96e60 (173 bytes, 59 insns) */
void f_10e96e60(void) {
  FTRACE(0x10e96e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96e61 mov ebp, esp */
  EBP = (ESP);
  /* 10e96e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96e66 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96e6a jbe 0x10e96e73 */
  if ((C.cf||C.zf)) goto L_10e96e73;
  /* 10e96e6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96e6e jmp 0x10e96f09 */
  goto L_10e96f09;
L_10e96e73:;
  /* 10e96e73 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96e75 call 0x10e96990 */
  push32(0x10e96e7au); f_10e96990();
  /* 10e96e7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96e7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96e80 push eax */
  push32((uint32_t)(EAX));
  /* 10e96e81 call 0x10e97290 */
  push32(0x10e96e86u); f_10e97290();
  /* 10e96e86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96e89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e96e8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96e90 je 0x10e96ed1 */
  if (C.zf) goto L_10e96ed1;
  /* 10e96e92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10e96e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96e9c cmp ecx, dword ptr [0x10ebcca4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10ebcca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96ea2 ja 0x10e96ec2 */
  if ((!C.cf&&!C.zf)) goto L_10e96ec2;
  /* 10e96ea4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10e96ea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96eab push eax */
  push32((uint32_t)(EAX));
  /* 10e96eac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96eaf push ecx */
  push32((uint32_t)(ECX));
  /* 10e96eb0 call 0x10e98160 */
  push32(0x10e96eb5u); f_10e98160();
  /* 10e96eb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e96eba je 0x10e96ec2 */
  if (C.zf) goto L_10e96ec2;
  /* 10e96ebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96ebf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10e96ec2:;
  /* 10e96ec2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96ec4 call 0x10e96a30 */
  push32(0x10e96ec9u); f_10e96a30();
  /* 10e96ec9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96ecc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96ecf jmp 0x10e96f09 */
  goto L_10e96f09;
L_10e96ed1:;
  /* 10e96ed1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96ed3 call 0x10e96a30 */
  push32(0x10e96ed8u); f_10e96a30();
  /* 10e96ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96edb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96edf jne 0x10e96ee8 */
  if (!C.zf) goto L_10e96ee8;
  /* 10e96ee1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e96ee8:;
  /* 10e96ee8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96eeb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96eee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10e96ef0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10e96ef3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96efa push edx */
  push32((uint32_t)(EDX));
  /* 10e96efb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10e96efd mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e96f02 push eax */
  push32((uint32_t)(EAX));
  /* 10e96f03 call dword ptr [0x10ec0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0334))), 0x10e96f09u);
L_10e96f09:;
  /* 10e96f09 mov esp, ebp */
  ESP = (EBP);
  /* 10e96f0b pop ebp */
  EBP = (pop32());
  /* 10e96f0c ret  */
  ESPCHK(0x10e96e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f10 @ 0x10e96f10 (490 bytes, 165 insns) */
void f_10e96f10(void) {
  FTRACE(0x10e96f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e96f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10e96f11 mov ebp, esp */
  EBP = (ESP);
  /* 10e96f13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96f16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96f1a jne 0x10e96f2d */
  if (!C.zf) goto L_10e96f2d;
  /* 10e96f1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96f1f push eax */
  push32((uint32_t)(EAX));
  /* 10e96f20 call 0x10e96d60 */
  push32(0x10e96f25u); f_10e96d60();
  /* 10e96f25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96f28 jmp 0x10e970f6 */
  goto L_10e970f6;
L_10e96f2d:;
  /* 10e96f2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96f31 jne 0x10e96f46 */
  if (!C.zf) goto L_10e96f46;
  /* 10e96f33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96f36 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96f37 call 0x10e97100 */
  push32(0x10e96f3cu); f_10e97100();
  /* 10e96f3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96f3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e96f41 jmp 0x10e970f6 */
  goto L_10e970f6;
L_10e96f46:;
  /* 10e96f46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10e96f4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96f51 ja 0x10e970c9 */
  if ((!C.cf&&!C.zf)) goto L_10e970c9;
  /* 10e96f57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e96f59 call 0x10e96990 */
  push32(0x10e96f5eu); f_10e96990();
  /* 10e96f5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96f61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96f64 push edx */
  push32((uint32_t)(EDX));
  /* 10e96f65 call 0x10e97290 */
  push32(0x10e96f6au); f_10e97290();
  /* 10e96f6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96f6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10e96f70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96f74 je 0x10e9708c */
  if (C.zf) goto L_10e9708c;
  /* 10e96f7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96f7d cmp eax, dword ptr [0x10ebcca4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10ebcca4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96f83 ja 0x10e97000 */
  if ((!C.cf&&!C.zf)) goto L_10e97000;
  /* 10e96f85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96f88 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96f89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96f8c push edx */
  push32((uint32_t)(EDX));
  /* 10e96f8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e96f90 push eax */
  push32((uint32_t)(EAX));
  /* 10e96f91 call 0x10e98160 */
  push32(0x10e96f96u); f_10e98160();
  /* 10e96f96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e96f9b je 0x10e96fa5 */
  if (C.zf) goto L_10e96fa5;
  /* 10e96f9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96fa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10e96fa3 jmp 0x10e97000 */
  goto L_10e97000;
L_10e96fa5:;
  /* 10e96fa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96fa8 push edx */
  push32((uint32_t)(EDX));
  /* 10e96fa9 call 0x10e97920 */
  push32(0x10e96faeu); f_10e97920();
  /* 10e96fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96fb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e96fb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96fb8 je 0x10e97000 */
  if (C.zf) goto L_10e97000;
  /* 10e96fba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96fbd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10e96fc0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e96fc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10e96fc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96fc9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e96fcc jae 0x10e96fd6 */
  if (!C.cf) goto L_10e96fd6;
  /* 10e96fce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e96fd1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10e96fd4 jmp 0x10e96fdc */
  goto L_10e96fdc;
L_10e96fd6:;
  /* 10e96fd6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e96fd9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10e96fdc:;
  /* 10e96fdc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10e96fdf push edx */
  push32((uint32_t)(EDX));
  /* 10e96fe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96fe3 push eax */
  push32((uint32_t)(EAX));
  /* 10e96fe4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e96fe7 push ecx */
  push32((uint32_t)(ECX));
  /* 10e96fe8 call 0x10e99870 */
  push32(0x10e96fedu); f_10e99870();
  /* 10e96fed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e96ff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e96ff3 push edx */
  push32((uint32_t)(EDX));
  /* 10e96ff4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e96ff7 push eax */
  push32((uint32_t)(EAX));
  /* 10e96ff8 call 0x10e97350 */
  push32(0x10e96ffdu); f_10e97350();
  /* 10e96ffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e97000:;
  /* 10e97000 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97004 jne 0x10e97080 */
  if (!C.zf) goto L_10e97080;
  /* 10e97006 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9700a jne 0x10e97013 */
  if (!C.zf) goto L_10e97013;
  /* 10e9700c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e97013:;
  /* 10e97013 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e97016 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97019 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10e9701c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10e9701f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e97022 push edx */
  push32((uint32_t)(EDX));
  /* 10e97023 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97025 mov eax, dword ptr [0x10ebfe2c] */
  EAX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e9702a push eax */
  push32((uint32_t)(EAX));
  /* 10e9702b call dword ptr [0x10ec038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec038c))), 0x10e97031u);
  /* 10e97031 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10e97034 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97038 je 0x10e97080 */
  if (C.zf) goto L_10e97080;
  /* 10e9703a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9703d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10e97040 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10e97043 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10e97046 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97049 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9704c jae 0x10e97056 */
  if (!C.cf) goto L_10e97056;
  /* 10e9704e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97051 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10e97054 jmp 0x10e9705c */
  goto L_10e9705c;
L_10e97056:;
  /* 10e97056 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e97059 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10e9705c:;
  /* 10e9705c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10e9705f push eax */
  push32((uint32_t)(EAX));
  /* 10e97060 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97063 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97064 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e97067 push edx */
  push32((uint32_t)(EDX));
  /* 10e97068 call 0x10e99870 */
  push32(0x10e9706du); f_10e99870();
  /* 10e9706d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97073 push eax */
  push32((uint32_t)(EAX));
  /* 10e97074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10e97077 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97078 call 0x10e97350 */
  push32(0x10e9707du); f_10e97350();
  /* 10e9707d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10e97080:;
  /* 10e97080 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e97082 call 0x10e96a30 */
  push32(0x10e97087u); f_10e96a30();
  /* 10e97087 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9708a jmp 0x10e970c9 */
  goto L_10e970c9;
L_10e9708c:;
  /* 10e9708c push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9708e call 0x10e96a30 */
  push32(0x10e97093u); f_10e96a30();
  /* 10e97093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97096 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e9709a jne 0x10e970a3 */
  if (!C.zf) goto L_10e970a3;
  /* 10e9709c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10e970a3:;
  /* 10e970a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e970a6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10e970a9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10e970ac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10e970af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e970b2 push eax */
  push32((uint32_t)(EAX));
  /* 10e970b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e970b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10e970b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e970b9 mov edx, dword ptr [0x10ebfe2c] */
  EDX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e970bf push edx */
  push32((uint32_t)(EDX));
  /* 10e970c0 call dword ptr [0x10ec0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0334))), 0x10e970c6u);
  /* 10e970c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10e970c9:;
  /* 10e970c9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e970cd jne 0x10e970d8 */
  if (!C.zf) goto L_10e970d8;
  /* 10e970cf cmp dword ptr [0x10ebe668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10ebe668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e970d6 jne 0x10e970dd */
  if (!C.zf) goto L_10e970dd;
L_10e970d8:;
  /* 10e970d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10e970db jmp 0x10e970f6 */
  goto L_10e970f6;
L_10e970dd:;
  /* 10e970dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10e970e0 push eax */
  push32((uint32_t)(EAX));
  /* 10e970e1 call 0x10e96cd0 */
  push32(0x10e970e6u); f_10e96cd0();
  /* 10e970e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e970e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10e970eb jne 0x10e970f1 */
  if (!C.zf) goto L_10e970f1;
  /* 10e970ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10e970ef jmp 0x10e970f6 */
  goto L_10e970f6;
L_10e970f1:;
  /* 10e970f1 jmp 0x10e96f46 */
  goto L_10e96f46;
L_10e970f6:;
  /* 10e970f6 mov esp, ebp */
  ESP = (EBP);
  /* 10e970f8 pop ebp */
  EBP = (pop32());
  /* 10e970f9 ret  */
  ESPCHK(0x10e96f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007100 @ 0x10e97100 (104 bytes, 38 insns) */
void f_10e97100(void) {
  FTRACE(0x10e97100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10e97100 push ebp */
  push32((uint32_t)(EBP));
  /* 10e97101 mov ebp, esp */
  EBP = (ESP);
  /* 10e97103 push ecx */
  push32((uint32_t)(ECX));
  /* 10e97104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97108 jne 0x10e9710c */
  if (!C.zf) goto L_10e9710c;
  /* 10e9710a jmp 0x10e97164 */
  goto L_10e97164;
L_10e9710c:;
  /* 10e9710c push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9710e call 0x10e96990 */
  push32(0x10e97113u); f_10e96990();
  /* 10e97113 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97116 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97119 push eax */
  push32((uint32_t)(EAX));
  /* 10e9711a call 0x10e97290 */
  push32(0x10e9711fu); f_10e97290();
  /* 10e9711f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97122 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10e97125 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10e97129 je 0x10e97147 */
  if (C.zf) goto L_10e97147;
  /* 10e9712b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e9712e push ecx */
  push32((uint32_t)(ECX));
  /* 10e9712f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10e97132 push edx */
  push32((uint32_t)(EDX));
  /* 10e97133 call 0x10e97350 */
  push32(0x10e97138u); f_10e97350();
  /* 10e97138 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e9713b push 9 */
  push32((uint32_t)(0x9u));
  /* 10e9713d call 0x10e96a30 */
  push32(0x10e97142u); f_10e96a30();
  /* 10e97142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97145 jmp 0x10e97164 */
  goto L_10e97164;
L_10e97147:;
  /* 10e97147 push 9 */
  push32((uint32_t)(0x9u));
  /* 10e97149 call 0x10e96a30 */
  push32(0x10e9714eu); f_10e96a30();
  /* 10e9714e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10e97151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10e97154 push eax */
  push32((uint32_t)(EAX));
  /* 10e97155 push 0 */
  push32((uint32_t)(0x0u));
  /* 10e97157 mov ecx, dword ptr [0x10ebfe2c] */
  ECX = (r32((uint32_t)(0x10ebfe2c)));
  /* 10e9715d push ecx */
  push32((uint32_t)(ECX));
  /* 10e9715e call dword ptr [0x10ec0370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10ec0370))), 0x10e97164u);
L_10e97164:;
  /* 10e97164 mov esp, ebp */
  ESP = (EBP);
  /* 10e97166 pop ebp */
  EBP = (pop32());
  /* 10e97167 ret  */
  ESPCHK(0x10e97100u, _esp0);
  ESP += 4; return;
}

