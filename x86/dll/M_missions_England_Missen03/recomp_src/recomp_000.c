#include "recomp.h"

/* thunk_FUN_100045d0 @ 0x10421005 (5 bytes, 1 insns) */
void f_10421005(void) {
  FTRACE(0x10421005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10421005 jmp 0x104245d0 */
  f_104245d0(); return;
}

/* OnInit @ 0x1042100a (5 bytes, 1 insns) */
void f_1042100a(void) {
  FTRACE(0x1042100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042100a jmp 0x10421090 */
  f_10421090(); return;
}

/* thunk_FUN_10001030 @ 0x1042100f (5 bytes, 1 insns) */
void f_1042100f(void) {
  FTRACE(0x1042100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1042100f jmp 0x10421030 */
  f_10421030(); return;
}

/* ProcessScenary @ 0x10421014 (5 bytes, 1 insns) */
void f_10421014(void) {
  FTRACE(0x10421014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10421014 jmp 0x10421680 */
  f_10421680(); return;
}

/* FUN_10001030 @ 0x10421030 (67 bytes, 26 insns) */
void f_10421030(void) {
  FTRACE(0x10421030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10421030 push ebp */
  push32((uint32_t)(EBP));
  /* 10421031 mov ebp, esp */
  EBP = (ESP);
  /* 10421033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10421036 push ebx */
  push32((uint32_t)(EBX));
  /* 10421037 push esi */
  push32((uint32_t)(ESI));
  /* 10421038 push edi */
  push32((uint32_t)(EDI));
  /* 10421039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1042103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10421041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10421046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10421048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421052 je 0x10421056 */
  if (C.zf) goto L_10421056;
  /* 10421054 jmp 0x1042105b */
  goto L_1042105b;
L_10421056:;
  /* 10421056 call 0x1042100a */
  push32(0x1042105bu); f_1042100a();
L_1042105b:;
  /* 1042105b mov eax, 1 */
  EAX = (0x1u);
  /* 10421060 pop edi */
  EDI = (pop32());
  /* 10421061 pop esi */
  ESI = (pop32());
  /* 10421062 pop ebx */
  EBX = (pop32());
  /* 10421063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421068 call 0x104246d0 */
  push32(0x1042106du); f_104246d0();
  /* 1042106d mov esp, ebp */
  ESP = (EBP);
  /* 1042106f pop ebp */
  EBP = (pop32());
  /* 10421070 ret 0xc */
  ESPCHK(0x10421030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10421090 (1213 bytes, 327 insns) */
void f_10421090(void) {
  FTRACE(0x10421090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10421090 push ebp */
  push32((uint32_t)(EBP));
  /* 10421091 mov ebp, esp */
  EBP = (ESP);
  /* 10421093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10421096 push ebx */
  push32((uint32_t)(EBX));
  /* 10421097 push esi */
  push32((uint32_t)(ESI));
  /* 10421098 push edi */
  push32((uint32_t)(EDI));
  /* 10421099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1042109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104210a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104210a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104210a8 mov esi, esp */
  ESI = (ESP);
  /* 104210aa push 0x1044c12c */
  push32((uint32_t)(0x1044c12cu));
  /* 104210af push 0x10451468 */
  push32((uint32_t)(0x10451468u));
  /* 104210b4 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104210bau);
  /* 104210ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104210bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104210bf call 0x104246d0 */
  push32(0x104210c4u); f_104246d0();
  /* 104210c4 mov esi, esp */
  ESI = (ESP);
  /* 104210c6 push 0x1044c124 */
  push32((uint32_t)(0x1044c124u));
  /* 104210cb push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 104210d0 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104210d6u);
  /* 104210d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104210d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104210db call 0x104246d0 */
  push32(0x104210e0u); f_104246d0();
  /* 104210e0 mov esi, esp */
  ESI = (ESP);
  /* 104210e2 push 0x1044c11c */
  push32((uint32_t)(0x1044c11cu));
  /* 104210e7 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 104210ec call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104210f2u);
  /* 104210f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104210f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104210f7 call 0x104246d0 */
  push32(0x104210fcu); f_104246d0();
  /* 104210fc mov esi, esp */
  ESI = (ESP);
  /* 104210fe push 0x1044c114 */
  push32((uint32_t)(0x1044c114u));
  /* 10421103 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 10421108 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x1042110eu);
  /* 1042110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421113 call 0x104246d0 */
  push32(0x10421118u); f_104246d0();
  /* 10421118 mov esi, esp */
  ESI = (ESP);
  /* 1042111a push 0x1044c10c */
  push32((uint32_t)(0x1044c10cu));
  /* 1042111f push 0x10451488 */
  push32((uint32_t)(0x10451488u));
  /* 10421124 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x1042112au);
  /* 1042112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042112f call 0x104246d0 */
  push32(0x10421134u); f_104246d0();
  /* 10421134 mov esi, esp */
  ESI = (ESP);
  /* 10421136 push 0x1044c104 */
  push32((uint32_t)(0x1044c104u));
  /* 1042113b push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 10421140 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x10421146u);
  /* 10421146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042114b call 0x104246d0 */
  push32(0x10421150u); f_104246d0();
  /* 10421150 mov esi, esp */
  ESI = (ESP);
  /* 10421152 push 0x1044c0fc */
  push32((uint32_t)(0x1044c0fcu));
  /* 10421157 push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 1042115c call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x10421162u);
  /* 10421162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421167 call 0x104246d0 */
  push32(0x1042116cu); f_104246d0();
  /* 1042116c mov esi, esp */
  ESI = (ESP);
  /* 1042116e push 0x1044c0f4 */
  push32((uint32_t)(0x1044c0f4u));
  /* 10421173 push 0x104514a0 */
  push32((uint32_t)(0x104514a0u));
  /* 10421178 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x1042117eu);
  /* 1042117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421183 call 0x104246d0 */
  push32(0x10421188u); f_104246d0();
  /* 10421188 mov esi, esp */
  ESI = (ESP);
  /* 1042118a push 0x1044c0ec */
  push32((uint32_t)(0x1044c0ecu));
  /* 1042118f push 0x104514a8 */
  push32((uint32_t)(0x104514a8u));
  /* 10421194 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x1042119au);
  /* 1042119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042119f call 0x104246d0 */
  push32(0x104211a4u); f_104246d0();
  /* 104211a4 mov esi, esp */
  ESI = (ESP);
  /* 104211a6 push 0x1044c0e4 */
  push32((uint32_t)(0x1044c0e4u));
  /* 104211ab push 0x10451440 */
  push32((uint32_t)(0x10451440u));
  /* 104211b0 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104211b6u);
  /* 104211b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104211b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104211bb call 0x104246d0 */
  push32(0x104211c0u); f_104246d0();
  /* 104211c0 mov esi, esp */
  ESI = (ESP);
  /* 104211c2 push 0x1044c0dc */
  push32((uint32_t)(0x1044c0dcu));
  /* 104211c7 push 0x10451438 */
  push32((uint32_t)(0x10451438u));
  /* 104211cc call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104211d2u);
  /* 104211d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104211d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104211d7 call 0x104246d0 */
  push32(0x104211dcu); f_104246d0();
  /* 104211dc mov esi, esp */
  ESI = (ESP);
  /* 104211de push 0x1044c0d4 */
  push32((uint32_t)(0x1044c0d4u));
  /* 104211e3 push 0x10451450 */
  push32((uint32_t)(0x10451450u));
  /* 104211e8 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x104211eeu);
  /* 104211ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104211f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104211f3 call 0x104246d0 */
  push32(0x104211f8u); f_104246d0();
  /* 104211f8 mov esi, esp */
  ESI = (ESP);
  /* 104211fa push 0x1044c0cc */
  push32((uint32_t)(0x1044c0ccu));
  /* 104211ff push 0x10451448 */
  push32((uint32_t)(0x10451448u));
  /* 10421204 call dword ptr [0x10454448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454448))), 0x1042120au);
  /* 1042120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042120f call 0x104246d0 */
  push32(0x10421214u); f_104246d0();
  /* 10421214 mov esi, esp */
  ESI = (ESP);
  /* 10421216 push 0x1044c0c4 */
  push32((uint32_t)(0x1044c0c4u));
  /* 1042121b push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10421220 call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x10421226u);
  /* 10421226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042122b call 0x104246d0 */
  push32(0x10421230u); f_104246d0();
  /* 10421230 mov esi, esp */
  ESI = (ESP);
  /* 10421232 push 0x1044c0bc */
  push32((uint32_t)(0x1044c0bcu));
  /* 10421237 push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 1042123c call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x10421242u);
  /* 10421242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421247 call 0x104246d0 */
  push32(0x1042124cu); f_104246d0();
  /* 1042124c mov esi, esp */
  ESI = (ESP);
  /* 1042124e push 0x1044c0b4 */
  push32((uint32_t)(0x1044c0b4u));
  /* 10421253 push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421258 call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x1042125eu);
  /* 1042125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421263 call 0x104246d0 */
  push32(0x10421268u); f_104246d0();
  /* 10421268 mov esi, esp */
  ESI = (ESP);
  /* 1042126a push 0x1044c0ac */
  push32((uint32_t)(0x1044c0acu));
  /* 1042126f push 0x10451410 */
  push32((uint32_t)(0x10451410u));
  /* 10421274 call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x1042127au);
  /* 1042127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042127f call 0x104246d0 */
  push32(0x10421284u); f_104246d0();
  /* 10421284 mov esi, esp */
  ESI = (ESP);
  /* 10421286 push 0x1044c0a4 */
  push32((uint32_t)(0x1044c0a4u));
  /* 1042128b push 0x10451408 */
  push32((uint32_t)(0x10451408u));
  /* 10421290 call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x10421296u);
  /* 10421296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042129b call 0x104246d0 */
  push32(0x104212a0u); f_104246d0();
  /* 104212a0 mov esi, esp */
  ESI = (ESP);
  /* 104212a2 push 0x1044c098 */
  push32((uint32_t)(0x1044c098u));
  /* 104212a7 push 0x10451508 */
  push32((uint32_t)(0x10451508u));
  /* 104212ac call dword ptr [0x10454458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454458))), 0x104212b2u);
  /* 104212b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104212b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104212b7 call 0x104246d0 */
  push32(0x104212bcu); f_104246d0();
  /* 104212bc mov esi, esp */
  ESI = (ESP);
  /* 104212be push 8 */
  push32((uint32_t)(0x8u));
  /* 104212c0 push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 104212c5 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104212cbu);
  /* 104212cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104212ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104212d0 call 0x104246d0 */
  push32(0x104212d5u); f_104246d0();
  /* 104212d5 mov esi, esp */
  ESI = (ESP);
  /* 104212d7 push 8 */
  push32((uint32_t)(0x8u));
  /* 104212d9 push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 104212de call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104212e4u);
  /* 104212e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104212e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104212e9 call 0x104246d0 */
  push32(0x104212eeu); f_104246d0();
  /* 104212ee mov esi, esp */
  ESI = (ESP);
  /* 104212f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 104212f2 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 104212f7 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104212fdu);
  /* 104212fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421302 call 0x104246d0 */
  push32(0x10421307u); f_104246d0();
  /* 10421307 mov esi, esp */
  ESI = (ESP);
  /* 10421309 push 8 */
  push32((uint32_t)(0x8u));
  /* 1042130b push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 10421310 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x10421316u);
  /* 10421316 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421319 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042131b call 0x104246d0 */
  push32(0x10421320u); f_104246d0();
  /* 10421320 mov esi, esp */
  ESI = (ESP);
  /* 10421322 push 8 */
  push32((uint32_t)(0x8u));
  /* 10421324 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 10421329 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x1042132fu);
  /* 1042132f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421334 call 0x104246d0 */
  push32(0x10421339u); f_104246d0();
  /* 10421339 mov esi, esp */
  ESI = (ESP);
  /* 1042133b push 8 */
  push32((uint32_t)(0x8u));
  /* 1042133d push 0x104514f8 */
  push32((uint32_t)(0x104514f8u));
  /* 10421342 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x10421348u);
  /* 10421348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042134b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042134d call 0x104246d0 */
  push32(0x10421352u); f_104246d0();
  /* 10421352 mov esi, esp */
  ESI = (ESP);
  /* 10421354 push 8 */
  push32((uint32_t)(0x8u));
  /* 10421356 push 0x10451500 */
  push32((uint32_t)(0x10451500u));
  /* 1042135b call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x10421361u);
  /* 10421361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421364 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421366 call 0x104246d0 */
  push32(0x1042136bu); f_104246d0();
  /* 1042136b mov esi, esp */
  ESI = (ESP);
  /* 1042136d push 8 */
  push32((uint32_t)(0x8u));
  /* 1042136f push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10421374 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x1042137au);
  /* 1042137a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042137d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042137f call 0x104246d0 */
  push32(0x10421384u); f_104246d0();
  /* 10421384 mov esi, esp */
  ESI = (ESP);
  /* 10421386 push 8 */
  push32((uint32_t)(0x8u));
  /* 10421388 push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 1042138d call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x10421393u);
  /* 10421393 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421396 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421398 call 0x104246d0 */
  push32(0x1042139du); f_104246d0();
  /* 1042139d mov esi, esp */
  ESI = (ESP);
  /* 1042139f push 8 */
  push32((uint32_t)(0x8u));
  /* 104213a1 push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 104213a6 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104213acu);
  /* 104213ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104213af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104213b1 call 0x104246d0 */
  push32(0x104213b6u); f_104246d0();
  /* 104213b6 mov esi, esp */
  ESI = (ESP);
  /* 104213b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 104213ba push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 104213bf call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104213c5u);
  /* 104213c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104213c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104213ca call 0x104246d0 */
  push32(0x104213cfu); f_104246d0();
  /* 104213cf mov esi, esp */
  ESI = (ESP);
  /* 104213d1 push 8 */
  push32((uint32_t)(0x8u));
  /* 104213d3 push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 104213d8 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104213deu);
  /* 104213de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104213e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104213e3 call 0x104246d0 */
  push32(0x104213e8u); f_104246d0();
  /* 104213e8 mov esi, esp */
  ESI = (ESP);
  /* 104213ea push 8 */
  push32((uint32_t)(0x8u));
  /* 104213ec push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 104213f1 call dword ptr [0x1045445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045445c))), 0x104213f7u);
  /* 104213f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104213fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104213fc call 0x104246d0 */
  push32(0x10421401u); f_104246d0();
  /* 10421401 mov esi, esp */
  ESI = (ESP);
  /* 10421403 push 0x1044c088 */
  push32((uint32_t)(0x1044c088u));
  /* 10421408 push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 1042140d call dword ptr [0x10454454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454454))), 0x10421413u);
  /* 10421413 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421416 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421418 call 0x104246d0 */
  push32(0x1042141du); f_104246d0();
  /* 1042141d mov esi, esp */
  ESI = (ESP);
  /* 1042141f push 0x1044c078 */
  push32((uint32_t)(0x1044c078u));
  /* 10421424 push 0x10451458 */
  push32((uint32_t)(0x10451458u));
  /* 10421429 call dword ptr [0x10454454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454454))), 0x1042142fu);
  /* 1042142f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421432 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421434 call 0x104246d0 */
  push32(0x10421439u); f_104246d0();
  /* 10421439 mov esi, esp */
  ESI = (ESP);
  /* 1042143b push 0x1044c068 */
  push32((uint32_t)(0x1044c068u));
  /* 10421440 push 0x104514b8 */
  push32((uint32_t)(0x104514b8u));
  /* 10421445 call dword ptr [0x10454454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454454))), 0x1042144bu);
  /* 1042144b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042144e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421450 call 0x104246d0 */
  push32(0x10421455u); f_104246d0();
  /* 10421455 mov esi, esp */
  ESI = (ESP);
  /* 10421457 push 0x1044c058 */
  push32((uint32_t)(0x1044c058u));
  /* 1042145c push 0x10451510 */
  push32((uint32_t)(0x10451510u));
  /* 10421461 call dword ptr [0x10454454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454454))), 0x10421467u);
  /* 10421467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042146a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042146c call 0x104246d0 */
  push32(0x10421471u); f_104246d0();
  /* 10421471 mov esi, esp */
  ESI = (ESP);
  /* 10421473 push 0x1044c050 */
  push32((uint32_t)(0x1044c050u));
  /* 10421478 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 1042147d call dword ptr [0x10454464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454464))), 0x10421483u);
  /* 10421483 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421488 call 0x104246d0 */
  push32(0x1042148du); f_104246d0();
  /* 1042148d mov esi, esp */
  ESI = (ESP);
  /* 1042148f push 0x1044c044 */
  push32((uint32_t)(0x1044c044u));
  /* 10421494 push 0x104514b0 */
  push32((uint32_t)(0x104514b0u));
  /* 10421499 call dword ptr [0x10454464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454464))), 0x1042149fu);
  /* 1042149f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104214a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104214a4 call 0x104246d0 */
  push32(0x104214a9u); f_104246d0();
  /* 104214a9 mov esi, esp */
  ESI = (ESP);
  /* 104214ab push 0x1044c038 */
  push32((uint32_t)(0x1044c038u));
  /* 104214b0 push 0x104513e8 */
  push32((uint32_t)(0x104513e8u));
  /* 104214b5 call dword ptr [0x10454464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454464))), 0x104214bbu);
  /* 104214bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104214be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104214c0 call 0x104246d0 */
  push32(0x104214c5u); f_104246d0();
  /* 104214c5 mov esi, esp */
  ESI = (ESP);
  /* 104214c7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104214c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104214cb call dword ptr [0x10454468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454468))), 0x104214d1u);
  /* 104214d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104214d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104214d6 call 0x104246d0 */
  push32(0x104214dbu); f_104246d0();
  /* 104214db mov esi, esp */
  ESI = (ESP);
  /* 104214dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 104214df push 4 */
  push32((uint32_t)(0x4u));
  /* 104214e1 call dword ptr [0x10454468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454468))), 0x104214e7u);
  /* 104214e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104214ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104214ec call 0x104246d0 */
  push32(0x104214f1u); f_104246d0();
  /* 104214f1 mov esi, esp */
  ESI = (ESP);
  /* 104214f3 push 0x1044c030 */
  push32((uint32_t)(0x1044c030u));
  /* 104214f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 104214fa call dword ptr [0x10454460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454460))), 0x10421500u);
  /* 10421500 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421503 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421505 call 0x104246d0 */
  push32(0x1042150au); f_104246d0();
  /* 1042150a mov esi, esp */
  ESI = (ESP);
  /* 1042150c push 0x1044c028 */
  push32((uint32_t)(0x1044c028u));
  /* 10421511 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421513 call dword ptr [0x10454460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454460))), 0x10421519u);
  /* 10421519 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042151c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042151e call 0x104246d0 */
  push32(0x10421523u); f_104246d0();
  /* 10421523 mov esi, esp */
  ESI = (ESP);
  /* 10421525 push 0x1044c01c */
  push32((uint32_t)(0x1044c01cu));
  /* 1042152a push 5 */
  push32((uint32_t)(0x5u));
  /* 1042152c call dword ptr [0x10454460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454460))), 0x10421532u);
  /* 10421532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421537 call 0x104246d0 */
  push32(0x1042153cu); f_104246d0();
  /* 1042153c pop edi */
  EDI = (pop32());
  /* 1042153d pop esi */
  ESI = (pop32());
  /* 1042153e pop ebx */
  EBX = (pop32());
  /* 1042153f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421542 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421544 call 0x104246d0 */
  push32(0x10421549u); f_104246d0();
  /* 10421549 mov esp, ebp */
  ESP = (EBP);
  /* 1042154b pop ebp */
  EBP = (pop32());
  /* 1042154c ret  */
  ESPCHK(0x10421090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001680 @ 0x10421680 (9690 bytes, 2806 insns) */
void f_10421680(void) {
  FTRACE(0x10421680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10421680 push ebp */
  push32((uint32_t)(EBP));
  /* 10421681 mov ebp, esp */
  EBP = (ESP);
  /* 10421683 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10421686 push ebx */
  push32((uint32_t)(EBX));
  /* 10421687 push esi */
  push32((uint32_t)(ESI));
  /* 10421688 push edi */
  push32((uint32_t)(EDI));
  /* 10421689 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1042168c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10421691 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10421696 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10421698 mov esi, esp */
  ESI = (ESP);
  /* 1042169a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042169c call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104216a2u);
  /* 104216a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104216a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104216a7 call 0x104246d0 */
  push32(0x104216acu); f_104246d0();
  /* 104216ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104216b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104216b3 je 0x104219df */
  if (C.zf) goto L_104219df;
  /* 104216b9 mov esi, esp */
  ESI = (ESP);
  /* 104216bb push 0 */
  push32((uint32_t)(0x0u));
  /* 104216bd push 1 */
  push32((uint32_t)(0x1u));
  /* 104216bf call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104216c5u);
  /* 104216c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104216c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104216ca call 0x104246d0 */
  push32(0x104216cfu); f_104246d0();
  /* 104216cf mov esi, esp */
  ESI = (ESP);
  /* 104216d1 push 0x1044c278 */
  push32((uint32_t)(0x1044c278u));
  /* 104216d6 push 0x1044c0a4 */
  push32((uint32_t)(0x1044c0a4u));
  /* 104216db call dword ptr [0x10454408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454408))), 0x104216e1u);
  /* 104216e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104216e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104216e6 call 0x104246d0 */
  push32(0x104216ebu); f_104246d0();
  /* 104216eb mov esi, esp */
  ESI = (ESP);
  /* 104216ed push 0x1044c26c */
  push32((uint32_t)(0x1044c26cu));
  /* 104216f2 push 0x1044c0a4 */
  push32((uint32_t)(0x1044c0a4u));
  /* 104216f7 call dword ptr [0x10454408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454408))), 0x104216fdu);
  /* 104216fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421702 call 0x104246d0 */
  push32(0x10421707u); f_104246d0();
  /* 10421707 mov esi, esp */
  ESI = (ESP);
  /* 10421709 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1042170b call dword ptr [0x10454400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454400))), 0x10421711u);
  /* 10421711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421714 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421716 call 0x104246d0 */
  push32(0x1042171bu); f_104246d0();
  /* 1042171b mov esi, esp */
  ESI = (ESP);
  /* 1042171d push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1042171f call dword ptr [0x10454400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454400))), 0x10421725u);
  /* 10421725 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042172a call 0x104246d0 */
  push32(0x1042172fu); f_104246d0();
  /* 1042172f mov esi, esp */
  ESI = (ESP);
  /* 10421731 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10421736 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042173a call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421740u);
  /* 10421740 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421745 call 0x104246d0 */
  push32(0x1042174au); f_104246d0();
  /* 1042174a mov esi, esp */
  ESI = (ESP);
  /* 1042174c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10421751 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421755 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x1042175bu);
  /* 1042175b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042175e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421760 call 0x104246d0 */
  push32(0x10421765u); f_104246d0();
  /* 10421765 mov esi, esp */
  ESI = (ESP);
  /* 10421767 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 1042176c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042176e push 0 */
  push32((uint32_t)(0x0u));
  /* 10421770 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421776u);
  /* 10421776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042177b call 0x104246d0 */
  push32(0x10421780u); f_104246d0();
  /* 10421780 mov esi, esp */
  ESI = (ESP);
  /* 10421782 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10421787 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042178b call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421791u);
  /* 10421791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421796 call 0x104246d0 */
  push32(0x1042179bu); f_104246d0();
  /* 1042179b mov esi, esp */
  ESI = (ESP);
  /* 1042179d push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 104217a2 push 5 */
  push32((uint32_t)(0x5u));
  /* 104217a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104217a6 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104217acu);
  /* 104217ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104217af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104217b1 call 0x104246d0 */
  push32(0x104217b6u); f_104246d0();
  /* 104217b6 mov esi, esp */
  ESI = (ESP);
  /* 104217b8 push 0x61a8 */
  push32((uint32_t)(0x61a8u));
  /* 104217bd push 4 */
  push32((uint32_t)(0x4u));
  /* 104217bf push 0 */
  push32((uint32_t)(0x0u));
  /* 104217c1 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104217c7u);
  /* 104217c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104217ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104217cc call 0x104246d0 */
  push32(0x104217d1u); f_104246d0();
  /* 104217d1 mov esi, esp */
  ESI = (ESP);
  /* 104217d3 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 104217d8 push 3 */
  push32((uint32_t)(0x3u));
  /* 104217da push 5 */
  push32((uint32_t)(0x5u));
  /* 104217dc call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104217e2u);
  /* 104217e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104217e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104217e7 call 0x104246d0 */
  push32(0x104217ecu); f_104246d0();
  /* 104217ec mov esi, esp */
  ESI = (ESP);
  /* 104217ee push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 104217f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104217f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 104217f7 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104217fdu);
  /* 104217fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421802 call 0x104246d0 */
  push32(0x10421807u); f_104246d0();
  /* 10421807 mov esi, esp */
  ESI = (ESP);
  /* 10421809 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1042180e push 0 */
  push32((uint32_t)(0x0u));
  /* 10421810 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421812 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421818u);
  /* 10421818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042181b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042181d call 0x104246d0 */
  push32(0x10421822u); f_104246d0();
  /* 10421822 mov esi, esp */
  ESI = (ESP);
  /* 10421824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421826 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421828 push 5 */
  push32((uint32_t)(0x5u));
  /* 1042182a call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421830u);
  /* 10421830 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421833 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421835 call 0x104246d0 */
  push32(0x1042183au); f_104246d0();
  /* 1042183a mov esi, esp */
  ESI = (ESP);
  /* 1042183c push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421841 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421843 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421845 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x1042184bu);
  /* 1042184b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042184e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421850 call 0x104246d0 */
  push32(0x10421855u); f_104246d0();
  /* 10421855 mov esi, esp */
  ESI = (ESP);
  /* 10421857 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1042185c push 4 */
  push32((uint32_t)(0x4u));
  /* 1042185e push 5 */
  push32((uint32_t)(0x5u));
  /* 10421860 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421866u);
  /* 10421866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042186b call 0x104246d0 */
  push32(0x10421870u); f_104246d0();
  /* 10421870 mov esi, esp */
  ESI = (ESP);
  /* 10421872 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421877 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421879 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042187b call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421881u);
  /* 10421881 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421886 call 0x104246d0 */
  push32(0x1042188bu); f_104246d0();
  /* 1042188b mov esi, esp */
  ESI = (ESP);
  /* 1042188d push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421892 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421894 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421896 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x1042189cu);
  /* 1042189c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042189f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104218a1 call 0x104246d0 */
  push32(0x104218a6u); f_104246d0();
  /* 104218a6 mov esi, esp */
  ESI = (ESP);
  /* 104218a8 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 104218ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104218af push 1 */
  push32((uint32_t)(0x1u));
  /* 104218b1 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104218b7u);
  /* 104218b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104218ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104218bc call 0x104246d0 */
  push32(0x104218c1u); f_104246d0();
  /* 104218c1 mov esi, esp */
  ESI = (ESP);
  /* 104218c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104218c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104218c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104218c9 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104218cfu);
  /* 104218cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104218d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104218d4 call 0x104246d0 */
  push32(0x104218d9u); f_104246d0();
  /* 104218d9 mov esi, esp */
  ESI = (ESP);
  /* 104218db push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 104218e0 push 5 */
  push32((uint32_t)(0x5u));
  /* 104218e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104218e4 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104218eau);
  /* 104218ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104218ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104218ef call 0x104246d0 */
  push32(0x104218f4u); f_104246d0();
  /* 104218f4 mov esi, esp */
  ESI = (ESP);
  /* 104218f6 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 104218fb push 4 */
  push32((uint32_t)(0x4u));
  /* 104218fd push 1 */
  push32((uint32_t)(0x1u));
  /* 104218ff call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421905u);
  /* 10421905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042190a call 0x104246d0 */
  push32(0x1042190fu); f_104246d0();
  /* 1042190f mov esi, esp */
  ESI = (ESP);
  /* 10421911 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421916 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421918 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042191a call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421920u);
  /* 10421920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421925 call 0x104246d0 */
  push32(0x1042192au); f_104246d0();
  /* 1042192a mov esi, esp */
  ESI = (ESP);
  /* 1042192c push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421933 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421935 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x1042193bu);
  /* 1042193b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042193e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421940 call 0x104246d0 */
  push32(0x10421945u); f_104246d0();
  /* 10421945 mov esi, esp */
  ESI = (ESP);
  /* 10421947 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1042194c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042194e push 4 */
  push32((uint32_t)(0x4u));
  /* 10421950 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421956u);
  /* 10421956 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042195b call 0x104246d0 */
  push32(0x10421960u); f_104246d0();
  /* 10421960 mov esi, esp */
  ESI = (ESP);
  /* 10421962 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421967 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421969 push 4 */
  push32((uint32_t)(0x4u));
  /* 1042196b call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x10421971u);
  /* 10421971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421974 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421976 call 0x104246d0 */
  push32(0x1042197bu); f_104246d0();
  /* 1042197b mov esi, esp */
  ESI = (ESP);
  /* 1042197d push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10421982 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421984 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421986 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x1042198cu);
  /* 1042198c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042198f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421991 call 0x104246d0 */
  push32(0x10421996u); f_104246d0();
  /* 10421996 mov esi, esp */
  ESI = (ESP);
  /* 10421998 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1042199d push 4 */
  push32((uint32_t)(0x4u));
  /* 1042199f push 4 */
  push32((uint32_t)(0x4u));
  /* 104219a1 call dword ptr [0x10454410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454410))), 0x104219a7u);
  /* 104219a7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104219aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104219ac call 0x104246d0 */
  push32(0x104219b1u); f_104246d0();
  /* 104219b1 mov esi, esp */
  ESI = (ESP);
  /* 104219b3 push 0x1044c264 */
  push32((uint32_t)(0x1044c264u));
  /* 104219b8 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x104219beu);
  /* 104219be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104219c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104219c3 call 0x104246d0 */
  push32(0x104219c8u); f_104246d0();
  /* 104219c8 mov esi, esp */
  ESI = (ESP);
  /* 104219ca push 0x1044c258 */
  push32((uint32_t)(0x1044c258u));
  /* 104219cf call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x104219d5u);
  /* 104219d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104219d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104219da call 0x104246d0 */
  push32(0x104219dfu); f_104246d0();
L_104219df:;
  /* 104219df mov esi, esp */
  ESI = (ESP);
  /* 104219e1 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 104219e3 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104219e9u);
  /* 104219e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104219ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104219ee call 0x104246d0 */
  push32(0x104219f3u); f_104246d0();
  /* 104219f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104219f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104219fa je 0x10421a5e */
  if (C.zf) goto L_10421a5e;
  /* 104219fc mov esi, esp */
  ESI = (ESP);
  /* 104219fe call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10421a04u);
  /* 10421a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a06 call 0x104246d0 */
  push32(0x10421a0bu); f_104246d0();
  /* 10421a0b cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a10 jle 0x10421a5e */
  if ((C.zf||C.sf!=C.of)) goto L_10421a5e;
  /* 10421a12 mov esi, esp */
  ESI = (ESP);
  /* 10421a14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421a16 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10421a18 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421a1eu);
  /* 10421a1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a23 call 0x104246d0 */
  push32(0x10421a28u); f_104246d0();
  /* 10421a28 mov esi, esp */
  ESI = (ESP);
  /* 10421a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10421a2c push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421a31 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421a37u);
  /* 10421a37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421a3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a3c call 0x104246d0 */
  push32(0x10421a41u); f_104246d0();
  /* 10421a41 mov esi, esp */
  ESI = (ESP);
  /* 10421a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421a47 push 0x10451468 */
  push32((uint32_t)(0x10451468u));
  /* 10421a4c push 5 */
  push32((uint32_t)(0x5u));
  /* 10421a4e call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10421a54u);
  /* 10421a54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421a57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a59 call 0x104246d0 */
  push32(0x10421a5eu); f_104246d0();
L_10421a5e:;
  /* 10421a5e mov esi, esp */
  ESI = (ESP);
  /* 10421a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421a62 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421a68u);
  /* 10421a68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421a6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a6d call 0x104246d0 */
  push32(0x10421a72u); f_104246d0();
  /* 10421a72 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421a79 je 0x10421b57 */
  if (C.zf) goto L_10421b57;
  /* 10421a7f mov esi, esp */
  ESI = (ESP);
  /* 10421a81 push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421a86 push 0x10451468 */
  push32((uint32_t)(0x10451468u));
  /* 10421a8b call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10421a91u);
  /* 10421a91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421a96 call 0x104246d0 */
  push32(0x10421a9bu); f_104246d0();
  /* 10421a9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421a9d jle 0x10421b57 */
  if ((C.zf||C.sf!=C.of)) goto L_10421b57;
  /* 10421aa3 mov esi, esp */
  ESI = (ESP);
  /* 10421aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421aa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421aa9 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421aafu);
  /* 10421aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ab2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421ab4 call 0x104246d0 */
  push32(0x10421ab9u); f_104246d0();
  /* 10421ab9 mov esi, esp */
  ESI = (ESP);
  /* 10421abb push 0x1044c250 */
  push32((uint32_t)(0x1044c250u));
  /* 10421ac0 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10421ac6u);
  /* 10421ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421acb call 0x104246d0 */
  push32(0x10421ad0u); f_104246d0();
  /* 10421ad0 mov esi, esp */
  ESI = (ESP);
  /* 10421ad2 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10421ad7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421adb call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10421ae1u);
  /* 10421ae1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ae4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421ae6 call 0x104246d0 */
  push32(0x10421aebu); f_104246d0();
  /* 10421aeb mov esi, esp */
  ESI = (ESP);
  /* 10421aed push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 10421af2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421af4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421af6 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10421afcu);
  /* 10421afc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421aff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b01 call 0x104246d0 */
  push32(0x10421b06u); f_104246d0();
  /* 10421b06 mov esi, esp */
  ESI = (ESP);
  /* 10421b08 push 0xffffff38 */
  push32((uint32_t)(0xffffff38u));
  /* 10421b0d push 5 */
  push32((uint32_t)(0x5u));
  /* 10421b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10421b11 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10421b17u);
  /* 10421b17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b1a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b1c call 0x104246d0 */
  push32(0x10421b21u); f_104246d0();
  /* 10421b21 mov esi, esp */
  ESI = (ESP);
  /* 10421b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421b25 push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421b2a call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421b30u);
  /* 10421b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b35 call 0x104246d0 */
  push32(0x10421b3au); f_104246d0();
  /* 10421b3a mov esi, esp */
  ESI = (ESP);
  /* 10421b3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10421b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10421b40 push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 10421b45 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421b47 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10421b4du);
  /* 10421b4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b52 call 0x104246d0 */
  push32(0x10421b57u); f_104246d0();
L_10421b57:;
  /* 10421b57 mov esi, esp */
  ESI = (ESP);
  /* 10421b59 push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421b5e push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 10421b63 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10421b69u);
  /* 10421b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b6e call 0x104246d0 */
  push32(0x10421b73u); f_104246d0();
  /* 10421b73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421b75 jle 0x10421ba4 */
  if ((C.zf||C.sf!=C.of)) goto L_10421ba4;
  /* 10421b77 mov esi, esp */
  ESI = (ESP);
  /* 10421b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421b7b push 0x104513f8 */
  push32((uint32_t)(0x104513f8u));
  /* 10421b80 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421b86u);
  /* 10421b86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b89 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b8b call 0x104246d0 */
  push32(0x10421b90u); f_104246d0();
  /* 10421b90 mov esi, esp */
  ESI = (ESP);
  /* 10421b92 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421b94 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10421b9au);
  /* 10421b9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421b9f call 0x104246d0 */
  push32(0x10421ba4u); f_104246d0();
L_10421ba4:;
  /* 10421ba4 mov esi, esp */
  ESI = (ESP);
  /* 10421ba6 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10421bacu);
  /* 10421bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421bae call 0x104246d0 */
  push32(0x10421bb3u); f_104246d0();
  /* 10421bb3 cmp eax, 0x2328 */
  { uint32_t _a=(EAX),_b=(0x2328u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421bb8 jle 0x10421c04 */
  if ((C.zf||C.sf!=C.of)) goto L_10421c04;
  /* 10421bba mov esi, esp */
  ESI = (ESP);
  /* 10421bbc push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10421bbe call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421bc4u);
  /* 10421bc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421bc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421bc9 call 0x104246d0 */
  push32(0x10421bceu); f_104246d0();
  /* 10421bce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421bd3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421bd5 je 0x10421c04 */
  if (C.zf) goto L_10421c04;
  /* 10421bd7 mov esi, esp */
  ESI = (ESP);
  /* 10421bd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421bdb push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10421bdd call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421be3u);
  /* 10421be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421be6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421be8 call 0x104246d0 */
  push32(0x10421bedu); f_104246d0();
  /* 10421bed mov esi, esp */
  ESI = (ESP);
  /* 10421bef push 0x1044c248 */
  push32((uint32_t)(0x1044c248u));
  /* 10421bf4 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10421bfau);
  /* 10421bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421bff call 0x104246d0 */
  push32(0x10421c04u); f_104246d0();
L_10421c04:;
  /* 10421c04 mov esi, esp */
  ESI = (ESP);
  /* 10421c06 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10421c0cu);
  /* 10421c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c0e call 0x104246d0 */
  push32(0x10421c13u); f_104246d0();
  /* 10421c13 cmp eax, 0x2710 */
  { uint32_t _a=(EAX),_b=(0x2710u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c18 jle 0x10421cb1 */
  if ((C.zf||C.sf!=C.of)) goto L_10421cb1;
  /* 10421c1e mov esi, esp */
  ESI = (ESP);
  /* 10421c20 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421c22 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421c28u);
  /* 10421c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c2d call 0x104246d0 */
  push32(0x10421c32u); f_104246d0();
  /* 10421c32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421c39 je 0x10421cb1 */
  if (C.zf) goto L_10421cb1;
  /* 10421c3b mov esi, esp */
  ESI = (ESP);
  /* 10421c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10421c3f push 3 */
  push32((uint32_t)(0x3u));
  /* 10421c41 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421c47u);
  /* 10421c47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421c4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c4c call 0x104246d0 */
  push32(0x10421c51u); f_104246d0();
  /* 10421c51 mov esi, esp */
  ESI = (ESP);
  /* 10421c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421c55 push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 10421c5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10421c5c push 0x10451510 */
  push32((uint32_t)(0x10451510u));
  /* 10421c61 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10421c66 push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 10421c6b call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10421c71u);
  /* 10421c71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421c74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c76 call 0x104246d0 */
  push32(0x10421c7bu); f_104246d0();
  /* 10421c7b mov esi, esp */
  ESI = (ESP);
  /* 10421c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10421c7f push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 10421c84 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421c8au);
  /* 10421c8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421c8f call 0x104246d0 */
  push32(0x10421c94u); f_104246d0();
  /* 10421c94 mov esi, esp */
  ESI = (ESP);
  /* 10421c96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421c9a push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 10421c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10421ca1 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10421ca7u);
  /* 10421ca7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421caa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421cac call 0x104246d0 */
  push32(0x10421cb1u); f_104246d0();
L_10421cb1:;
  /* 10421cb1 mov esi, esp */
  ESI = (ESP);
  /* 10421cb3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421cb5 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421cbbu);
  /* 10421cbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421cbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421cc0 call 0x104246d0 */
  push32(0x10421cc5u); f_104246d0();
  /* 10421cc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421ccc jne 0x10421d31 */
  if (!C.zf) goto L_10421d31;
  /* 10421cce mov esi, esp */
  ESI = (ESP);
  /* 10421cd0 push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 10421cd5 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 10421cda call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10421ce0u);
  /* 10421ce0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ce3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421ce5 call 0x104246d0 */
  push32(0x10421ceau); f_104246d0();
  /* 10421cea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421cec jle 0x10421d31 */
  if ((C.zf||C.sf!=C.of)) goto L_10421d31;
  /* 10421cee mov esi, esp */
  ESI = (ESP);
  /* 10421cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421cf2 push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 10421cf7 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421cfdu);
  /* 10421cfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d02 call 0x104246d0 */
  push32(0x10421d07u); f_104246d0();
  /* 10421d07 mov esi, esp */
  ESI = (ESP);
  /* 10421d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421d0b push 4 */
  push32((uint32_t)(0x4u));
  /* 10421d0d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421d13u);
  /* 10421d13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d18 call 0x104246d0 */
  push32(0x10421d1du); f_104246d0();
  /* 10421d1d mov esi, esp */
  ESI = (ESP);
  /* 10421d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10421d21 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10421d27u);
  /* 10421d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d2c call 0x104246d0 */
  push32(0x10421d31u); f_104246d0();
L_10421d31:;
  /* 10421d31 mov esi, esp */
  ESI = (ESP);
  /* 10421d33 push 3 */
  push32((uint32_t)(0x3u));
  /* 10421d35 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421d3bu);
  /* 10421d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d40 call 0x104246d0 */
  push32(0x10421d45u); f_104246d0();
  /* 10421d45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421d4c jne 0x10421dc4 */
  if (!C.zf) goto L_10421dc4;
  /* 10421d4e mov esi, esp */
  ESI = (ESP);
  /* 10421d50 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421d52 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421d58u);
  /* 10421d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d5d call 0x104246d0 */
  push32(0x10421d62u); f_104246d0();
  /* 10421d62 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421d69 je 0x10421dc4 */
  if (C.zf) goto L_10421dc4;
  /* 10421d6b push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 10421d70 call 0x10421005 */
  push32(0x10421d75u); f_10421005();
  /* 10421d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421d7a jne 0x10421dc4 */
  if (!C.zf) goto L_10421dc4;
  /* 10421d7c mov esi, esp */
  ESI = (ESP);
  /* 10421d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10421d80 push 4 */
  push32((uint32_t)(0x4u));
  /* 10421d82 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421d88u);
  /* 10421d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421d8d call 0x104246d0 */
  push32(0x10421d92u); f_104246d0();
  /* 10421d92 mov esi, esp */
  ESI = (ESP);
  /* 10421d94 push 0x1044c240 */
  push32((uint32_t)(0x1044c240u));
  /* 10421d99 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10421d9fu);
  /* 10421d9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421da2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421da4 call 0x104246d0 */
  push32(0x10421da9u); f_104246d0();
  /* 10421da9 mov esi, esp */
  ESI = (ESP);
  /* 10421dab push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 10421db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421db4 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10421dbau);
  /* 10421dba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421dbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421dbf call 0x104246d0 */
  push32(0x10421dc4u); f_104246d0();
L_10421dc4:;
  /* 10421dc4 mov esi, esp */
  ESI = (ESP);
  /* 10421dc6 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10421dccu);
  /* 10421dcc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421dce call 0x104246d0 */
  push32(0x10421dd3u); f_104246d0();
  /* 10421dd3 cmp eax, 0x55f0 */
  { uint32_t _a=(EAX),_b=(0x55f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421dd8 jle 0x10421e24 */
  if ((C.zf||C.sf!=C.of)) goto L_10421e24;
  /* 10421dda mov esi, esp */
  ESI = (ESP);
  /* 10421ddc push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10421dde call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421de4u);
  /* 10421de4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421de7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421de9 call 0x104246d0 */
  push32(0x10421deeu); f_104246d0();
  /* 10421dee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421df3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421df5 je 0x10421e24 */
  if (C.zf) goto L_10421e24;
  /* 10421df7 mov esi, esp */
  ESI = (ESP);
  /* 10421df9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421dfb push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10421dfd call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421e03u);
  /* 10421e03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421e06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e08 call 0x104246d0 */
  push32(0x10421e0du); f_104246d0();
  /* 10421e0d mov esi, esp */
  ESI = (ESP);
  /* 10421e0f push 0x1044c238 */
  push32((uint32_t)(0x1044c238u));
  /* 10421e14 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10421e1au);
  /* 10421e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421e1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e1f call 0x104246d0 */
  push32(0x10421e24u); f_104246d0();
L_10421e24:;
  /* 10421e24 mov esi, esp */
  ESI = (ESP);
  /* 10421e26 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10421e2cu);
  /* 10421e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e2e call 0x104246d0 */
  push32(0x10421e33u); f_104246d0();
  /* 10421e33 cmp eax, 0x5dc0 */
  { uint32_t _a=(EAX),_b=(0x5dc0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e38 jle 0x10421f44 */
  if ((C.zf||C.sf!=C.of)) goto L_10421f44;
  /* 10421e3e mov esi, esp */
  ESI = (ESP);
  /* 10421e40 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421e42 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421e48u);
  /* 10421e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e4d call 0x104246d0 */
  push32(0x10421e52u); f_104246d0();
  /* 10421e52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421e57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421e59 je 0x10421f44 */
  if (C.zf) goto L_10421f44;
  /* 10421e5f mov esi, esp */
  ESI = (ESP);
  /* 10421e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421e63 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421e65 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421e6bu);
  /* 10421e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e70 call 0x104246d0 */
  push32(0x10421e75u); f_104246d0();
  /* 10421e75 mov esi, esp */
  ESI = (ESP);
  /* 10421e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421e79 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 10421e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10421e80 push 0x104514b8 */
  push32((uint32_t)(0x104514b8u));
  /* 10421e85 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10421e8a push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 10421e8f call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10421e95u);
  /* 10421e95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421e98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421e9a call 0x104246d0 */
  push32(0x10421e9fu); f_104246d0();
  /* 10421e9f mov esi, esp */
  ESI = (ESP);
  /* 10421ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421ea3 push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 10421ea8 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421eaeu);
  /* 10421eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421eb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421eb3 call 0x104246d0 */
  push32(0x10421eb8u); f_104246d0();
  /* 10421eb8 mov esi, esp */
  ESI = (ESP);
  /* 10421eba push 0 */
  push32((uint32_t)(0x0u));
  /* 10421ebc push 0 */
  push32((uint32_t)(0x0u));
  /* 10421ebe push 0x10451488 */
  push32((uint32_t)(0x10451488u));
  /* 10421ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421ec5 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10421ecbu);
  /* 10421ecb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ece cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421ed0 call 0x104246d0 */
  push32(0x10421ed5u); f_104246d0();
  /* 10421ed5 mov esi, esp */
  ESI = (ESP);
  /* 10421ed7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10421ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421edb push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 10421ee0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421ee2 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10421ee8u);
  /* 10421ee8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421eed call 0x104246d0 */
  push32(0x10421ef2u); f_104246d0();
  /* 10421ef2 mov esi, esp */
  ESI = (ESP);
  /* 10421ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421ef6 push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10421efb call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421f01u);
  /* 10421f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f06 call 0x104246d0 */
  push32(0x10421f0bu); f_104246d0();
  /* 10421f0b mov esi, esp */
  ESI = (ESP);
  /* 10421f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10421f0f push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 10421f14 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421f1au);
  /* 10421f1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f1f call 0x104246d0 */
  push32(0x10421f24u); f_104246d0();
  /* 10421f24 mov esi, esp */
  ESI = (ESP);
  /* 10421f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421f28 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10421f2d push 0x10451488 */
  push32((uint32_t)(0x10451488u));
  /* 10421f32 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421f34 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10421f3au);
  /* 10421f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f3f call 0x104246d0 */
  push32(0x10421f44u); f_104246d0();
L_10421f44:;
  /* 10421f44 mov esi, esp */
  ESI = (ESP);
  /* 10421f46 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421f48 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421f4eu);
  /* 10421f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f53 call 0x104246d0 */
  push32(0x10421f58u); f_104246d0();
  /* 10421f58 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421f5f jne 0x10421fc4 */
  if (!C.zf) goto L_10421fc4;
  /* 10421f61 mov esi, esp */
  ESI = (ESP);
  /* 10421f63 push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 10421f68 push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 10421f6d call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10421f73u);
  /* 10421f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f78 call 0x104246d0 */
  push32(0x10421f7du); f_104246d0();
  /* 10421f7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421f7f jle 0x10421fc4 */
  if ((C.zf||C.sf!=C.of)) goto L_10421fc4;
  /* 10421f81 mov esi, esp */
  ESI = (ESP);
  /* 10421f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421f85 push 6 */
  push32((uint32_t)(0x6u));
  /* 10421f87 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10421f8du);
  /* 10421f8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421f90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421f92 call 0x104246d0 */
  push32(0x10421f97u); f_104246d0();
  /* 10421f97 mov esi, esp */
  ESI = (ESP);
  /* 10421f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10421f9b push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 10421fa0 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10421fa6u);
  /* 10421fa6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421fa9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421fab call 0x104246d0 */
  push32(0x10421fb0u); f_104246d0();
  /* 10421fb0 mov esi, esp */
  ESI = (ESP);
  /* 10421fb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10421fb4 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10421fbau);
  /* 10421fba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421fbf call 0x104246d0 */
  push32(0x10421fc4u); f_104246d0();
L_10421fc4:;
  /* 10421fc4 mov esi, esp */
  ESI = (ESP);
  /* 10421fc6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10421fc8 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421fceu);
  /* 10421fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421fd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421fd3 call 0x104246d0 */
  push32(0x10421fd8u); f_104246d0();
  /* 10421fd8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421fdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10421fdf jne 0x104220ed */
  if (!C.zf) goto L_104220ed;
  /* 10421fe5 mov esi, esp */
  ESI = (ESP);
  /* 10421fe7 push 6 */
  push32((uint32_t)(0x6u));
  /* 10421fe9 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10421fefu);
  /* 10421fef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10421ff2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10421ff4 call 0x104246d0 */
  push32(0x10421ff9u); f_104246d0();
  /* 10421ff9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10421ffe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422000 je 0x104220ed */
  if (C.zf) goto L_104220ed;
  /* 10422006 push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 1042200b call 0x10421005 */
  push32(0x10422010u); f_10421005();
  /* 10422010 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422013 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422015 jne 0x104220ed */
  if (!C.zf) goto L_104220ed;
  /* 1042201b mov esi, esp */
  ESI = (ESP);
  /* 1042201d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042201f push 6 */
  push32((uint32_t)(0x6u));
  /* 10422021 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422027u);
  /* 10422027 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042202a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042202c call 0x104246d0 */
  push32(0x10422031u); f_104246d0();
  /* 10422031 push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10422036 call 0x10421005 */
  push32(0x1042203bu); f_10421005();
  /* 1042203b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042203e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422040 jne 0x10422087 */
  if (!C.zf) goto L_10422087;
  /* 10422042 push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 10422047 call 0x10421005 */
  push32(0x1042204cu); f_10421005();
  /* 1042204c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042204f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422051 jne 0x10422087 */
  if (!C.zf) goto L_10422087;
  /* 10422053 mov esi, esp */
  ESI = (ESP);
  /* 10422055 push 0x1044c230 */
  push32((uint32_t)(0x1044c230u));
  /* 1042205a call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422060u);
  /* 10422060 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422063 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422065 call 0x104246d0 */
  push32(0x1042206au); f_104246d0();
  /* 1042206a mov esi, esp */
  ESI = (ESP);
  /* 1042206c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10422071 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422075 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x1042207bu);
  /* 1042207b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042207e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422080 call 0x104246d0 */
  push32(0x10422085u); f_104246d0();
  /* 10422085 jmp 0x104220ed */
  goto L_104220ed;
L_10422087:;
  /* 10422087 mov esi, esp */
  ESI = (ESP);
  /* 10422089 push 0x1044c224 */
  push32((uint32_t)(0x1044c224u));
  /* 1042208e call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422094u);
  /* 10422094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422097 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422099 call 0x104246d0 */
  push32(0x1042209eu); f_104246d0();
  /* 1042209e mov esi, esp */
  ESI = (ESP);
  /* 104220a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104220a2 push 0x10451418 */
  push32((uint32_t)(0x10451418u));
  /* 104220a7 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104220adu);
  /* 104220ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104220b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104220b2 call 0x104246d0 */
  push32(0x104220b7u); f_104246d0();
  /* 104220b7 mov esi, esp */
  ESI = (ESP);
  /* 104220b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 104220bb push 0x10451420 */
  push32((uint32_t)(0x10451420u));
  /* 104220c0 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104220c6u);
  /* 104220c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104220c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104220cb call 0x104246d0 */
  push32(0x104220d0u); f_104246d0();
  /* 104220d0 mov esi, esp */
  ESI = (ESP);
  /* 104220d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104220d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104220d6 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 104220db push 5 */
  push32((uint32_t)(0x5u));
  /* 104220dd call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x104220e3u);
  /* 104220e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104220e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104220e8 call 0x104246d0 */
  push32(0x104220edu); f_104246d0();
L_104220ed:;
  /* 104220ed mov esi, esp */
  ESI = (ESP);
  /* 104220ef push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 104220f4 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 104220f9 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x104220ffu);
  /* 104220ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422102 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422104 call 0x104246d0 */
  push32(0x10422109u); f_104246d0();
  /* 10422109 mov esi, eax */
  ESI = (EAX);
  /* 1042210b push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10422110 call 0x10421005 */
  push32(0x10422115u); f_10421005();
  /* 10422115 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422118 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042211a jne 0x1042215a */
  if (!C.zf) goto L_1042215a;
  /* 1042211c push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10422121 call 0x10421005 */
  push32(0x10422126u); f_10421005();
  /* 10422126 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042212b jle 0x1042215a */
  if ((C.zf||C.sf!=C.of)) goto L_1042215a;
  /* 1042212d mov esi, esp */
  ESI = (ESP);
  /* 1042212f push 0 */
  push32((uint32_t)(0x0u));
  /* 10422131 push 0x104513f0 */
  push32((uint32_t)(0x104513f0u));
  /* 10422136 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042213cu);
  /* 1042213c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042213f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422141 call 0x104246d0 */
  push32(0x10422146u); f_104246d0();
  /* 10422146 mov esi, esp */
  ESI = (ESP);
  /* 10422148 push 5 */
  push32((uint32_t)(0x5u));
  /* 1042214a call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10422150u);
  /* 10422150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422155 call 0x104246d0 */
  push32(0x1042215au); f_104246d0();
L_1042215a:;
  /* 1042215a mov esi, esp */
  ESI = (ESP);
  /* 1042215c push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 10422161 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 10422166 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x1042216cu);
  /* 1042216c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042216f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422171 call 0x104246d0 */
  push32(0x10422176u); f_104246d0();
  /* 10422176 mov esi, eax */
  ESI = (EAX);
  /* 10422178 push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 1042217d call 0x10421005 */
  push32(0x10422182u); f_10421005();
  /* 10422182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422185 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422187 jne 0x104221c7 */
  if (!C.zf) goto L_104221c7;
  /* 10422189 push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 1042218e call 0x10421005 */
  push32(0x10422193u); f_10421005();
  /* 10422193 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422198 jle 0x104221c7 */
  if ((C.zf||C.sf!=C.of)) goto L_104221c7;
  /* 1042219a mov esi, esp */
  ESI = (ESP);
  /* 1042219c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042219e push 0x10451400 */
  push32((uint32_t)(0x10451400u));
  /* 104221a3 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104221a9u);
  /* 104221a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104221ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104221ae call 0x104246d0 */
  push32(0x104221b3u); f_104246d0();
  /* 104221b3 mov esi, esp */
  ESI = (ESP);
  /* 104221b5 push 5 */
  push32((uint32_t)(0x5u));
  /* 104221b7 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104221bdu);
  /* 104221bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104221c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104221c2 call 0x104246d0 */
  push32(0x104221c7u); f_104246d0();
L_104221c7:;
  /* 104221c7 mov esi, esp */
  ESI = (ESP);
  /* 104221c9 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104221cfu);
  /* 104221cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104221d1 call 0x104246d0 */
  push32(0x104221d6u); f_104246d0();
  /* 104221d6 cmp eax, 0x61a8 */
  { uint32_t _a=(EAX),_b=(0x61a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104221db jle 0x10422274 */
  if ((C.zf||C.sf!=C.of)) goto L_10422274;
  /* 104221e1 mov esi, esp */
  ESI = (ESP);
  /* 104221e3 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 104221e5 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104221ebu);
  /* 104221eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104221ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104221f0 call 0x104246d0 */
  push32(0x104221f5u); f_104246d0();
  /* 104221f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104221fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104221fc je 0x10422274 */
  if (C.zf) goto L_10422274;
  /* 104221fe mov esi, esp */
  ESI = (ESP);
  /* 10422200 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422202 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10422204 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042220au);
  /* 1042220a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042220d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042220f call 0x104246d0 */
  push32(0x10422214u); f_104246d0();
  /* 10422214 mov esi, esp */
  ESI = (ESP);
  /* 10422216 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422218 push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 1042221d push 1 */
  push32((uint32_t)(0x1u));
  /* 1042221f push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 10422224 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10422229 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 1042222e call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10422234u);
  /* 10422234 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422237 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422239 call 0x104246d0 */
  push32(0x1042223eu); f_104246d0();
  /* 1042223e mov esi, esp */
  ESI = (ESP);
  /* 10422240 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422242 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 10422247 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042224du);
  /* 1042224d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422250 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422252 call 0x104246d0 */
  push32(0x10422257u); f_104246d0();
  /* 10422257 mov esi, esp */
  ESI = (ESP);
  /* 10422259 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042225b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042225d push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 10422262 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422264 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x1042226au);
  /* 1042226a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042226d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042226f call 0x104246d0 */
  push32(0x10422274u); f_104246d0();
L_10422274:;
  /* 10422274 mov esi, esp */
  ESI = (ESP);
  /* 10422276 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10422278 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042227eu);
  /* 1042227e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422281 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422283 call 0x104246d0 */
  push32(0x10422288u); f_104246d0();
  /* 10422288 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042228d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042228f jne 0x104222f4 */
  if (!C.zf) goto L_104222f4;
  /* 10422291 mov esi, esp */
  ESI = (ESP);
  /* 10422293 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 10422298 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 1042229d call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x104222a3u);
  /* 104222a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104222a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104222a8 call 0x104246d0 */
  push32(0x104222adu); f_104246d0();
  /* 104222ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104222af jle 0x104222f4 */
  if ((C.zf||C.sf!=C.of)) goto L_104222f4;
  /* 104222b1 mov esi, esp */
  ESI = (ESP);
  /* 104222b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104222b5 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 104222ba call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104222c0u);
  /* 104222c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104222c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104222c5 call 0x104246d0 */
  push32(0x104222cau); f_104246d0();
  /* 104222ca mov esi, esp */
  ESI = (ESP);
  /* 104222cc push 0 */
  push32((uint32_t)(0x0u));
  /* 104222ce push 7 */
  push32((uint32_t)(0x7u));
  /* 104222d0 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104222d6u);
  /* 104222d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104222d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104222db call 0x104246d0 */
  push32(0x104222e0u); f_104246d0();
  /* 104222e0 mov esi, esp */
  ESI = (ESP);
  /* 104222e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104222e4 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104222eau);
  /* 104222ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104222ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104222ef call 0x104246d0 */
  push32(0x104222f4u); f_104246d0();
L_104222f4:;
  /* 104222f4 mov esi, esp */
  ESI = (ESP);
  /* 104222f6 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 104222f8 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104222feu);
  /* 104222fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422303 call 0x104246d0 */
  push32(0x10422308u); f_104246d0();
  /* 10422308 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042230d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042230f jne 0x104223e4 */
  if (!C.zf) goto L_104223e4;
  /* 10422315 mov esi, esp */
  ESI = (ESP);
  /* 10422317 push 7 */
  push32((uint32_t)(0x7u));
  /* 10422319 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042231fu);
  /* 1042231f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422324 call 0x104246d0 */
  push32(0x10422329u); f_104246d0();
  /* 10422329 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042232e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422330 je 0x104223e4 */
  if (C.zf) goto L_104223e4;
  /* 10422336 push 0x10451430 */
  push32((uint32_t)(0x10451430u));
  /* 1042233b call 0x10421005 */
  push32(0x10422340u); f_10421005();
  /* 10422340 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422345 jne 0x104223e4 */
  if (!C.zf) goto L_104223e4;
  /* 1042234b mov esi, esp */
  ESI = (ESP);
  /* 1042234d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042234f push 7 */
  push32((uint32_t)(0x7u));
  /* 10422351 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422357u);
  /* 10422357 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042235a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042235c call 0x104246d0 */
  push32(0x10422361u); f_104246d0();
  /* 10422361 mov esi, esp */
  ESI = (ESP);
  /* 10422363 push 0x1044c21c */
  push32((uint32_t)(0x1044c21cu));
  /* 10422368 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042236eu);
  /* 1042236e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422373 call 0x104246d0 */
  push32(0x10422378u); f_104246d0();
  /* 10422378 mov esi, esp */
  ESI = (ESP);
  /* 1042237a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1042237f push 1 */
  push32((uint32_t)(0x1u));
  /* 10422381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422383 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10422389u);
  /* 10422389 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042238c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042238e call 0x104246d0 */
  push32(0x10422393u); f_104246d0();
  /* 10422393 mov esi, esp */
  ESI = (ESP);
  /* 10422395 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1042239a push 5 */
  push32((uint32_t)(0x5u));
  /* 1042239c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042239e call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104223a4u);
  /* 104223a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104223a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104223a9 call 0x104246d0 */
  push32(0x104223aeu); f_104246d0();
  /* 104223ae mov esi, esp */
  ESI = (ESP);
  /* 104223b0 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 104223b5 push 4 */
  push32((uint32_t)(0x4u));
  /* 104223b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104223b9 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104223bfu);
  /* 104223bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104223c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104223c4 call 0x104246d0 */
  push32(0x104223c9u); f_104246d0();
  /* 104223c9 mov esi, esp */
  ESI = (ESP);
  /* 104223cb push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104223d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104223d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104223d4 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104223dau);
  /* 104223da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104223dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104223df call 0x104246d0 */
  push32(0x104223e4u); f_104246d0();
L_104223e4:;
  /* 104223e4 mov esi, esp */
  ESI = (ESP);
  /* 104223e6 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104223ecu);
  /* 104223ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104223ee call 0x104246d0 */
  push32(0x104223f3u); f_104246d0();
  /* 104223f3 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104223f8 jle 0x10422444 */
  if ((C.zf||C.sf!=C.of)) goto L_10422444;
  /* 104223fa mov esi, esp */
  ESI = (ESP);
  /* 104223fc push 0x20 */
  push32((uint32_t)(0x20u));
  /* 104223fe call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422404u);
  /* 10422404 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422409 call 0x104246d0 */
  push32(0x1042240eu); f_104246d0();
  /* 1042240e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422413 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422415 je 0x10422444 */
  if (C.zf) goto L_10422444;
  /* 10422417 mov esi, esp */
  ESI = (ESP);
  /* 10422419 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042241b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1042241d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422423u);
  /* 10422423 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422426 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422428 call 0x104246d0 */
  push32(0x1042242du); f_104246d0();
  /* 1042242d mov esi, esp */
  ESI = (ESP);
  /* 1042242f push 0x1044c214 */
  push32((uint32_t)(0x1044c214u));
  /* 10422434 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042243au);
  /* 1042243a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042243d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042243f call 0x104246d0 */
  push32(0x10422444u); f_104246d0();
L_10422444:;
  /* 10422444 mov esi, esp */
  ESI = (ESP);
  /* 10422446 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x1042244cu);
  /* 1042244c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042244e call 0x104246d0 */
  push32(0x10422453u); f_104246d0();
  /* 10422453 cmp eax, 0xa028 */
  { uint32_t _a=(EAX),_b=(0xa028u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422458 jle 0x1042251b */
  if ((C.zf||C.sf!=C.of)) goto L_1042251b;
  /* 1042245e mov esi, esp */
  ESI = (ESP);
  /* 10422460 push 8 */
  push32((uint32_t)(0x8u));
  /* 10422462 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422468u);
  /* 10422468 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042246b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042246d call 0x104246d0 */
  push32(0x10422472u); f_104246d0();
  /* 10422472 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422477 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422479 je 0x1042251b */
  if (C.zf) goto L_1042251b;
  /* 1042247f mov esi, esp */
  ESI = (ESP);
  /* 10422481 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422483 push 8 */
  push32((uint32_t)(0x8u));
  /* 10422485 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042248bu);
  /* 1042248b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042248e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422490 call 0x104246d0 */
  push32(0x10422495u); f_104246d0();
  /* 10422495 mov esi, esp */
  ESI = (ESP);
  /* 10422497 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 1042249c push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 104224a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104224a3 push 0x10451458 */
  push32((uint32_t)(0x10451458u));
  /* 104224a8 push 0x104514b0 */
  push32((uint32_t)(0x104514b0u));
  /* 104224ad push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 104224b2 call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x104224b8u);
  /* 104224b8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104224bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104224bd call 0x104246d0 */
  push32(0x104224c2u); f_104246d0();
  /* 104224c2 mov esi, esp */
  ESI = (ESP);
  /* 104224c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104224c6 push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 104224cb call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104224d1u);
  /* 104224d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104224d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104224d6 call 0x104246d0 */
  push32(0x104224dbu); f_104246d0();
  /* 104224db mov esi, esp */
  ESI = (ESP);
  /* 104224dd push 0 */
  push32((uint32_t)(0x0u));
  /* 104224df push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 104224e4 push 0x10451488 */
  push32((uint32_t)(0x10451488u));
  /* 104224e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 104224eb call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x104224f1u);
  /* 104224f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104224f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104224f6 call 0x104246d0 */
  push32(0x104224fbu); f_104246d0();
  /* 104224fb mov esi, esp */
  ESI = (ESP);
  /* 104224fd push 2 */
  push32((uint32_t)(0x2u));
  /* 104224ff push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10422504 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 10422509 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042250b call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10422511u);
  /* 10422511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422514 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422516 call 0x104246d0 */
  push32(0x1042251bu); f_104246d0();
L_1042251b:;
  /* 1042251b mov esi, esp */
  ESI = (ESP);
  /* 1042251d push 8 */
  push32((uint32_t)(0x8u));
  /* 1042251f call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422525u);
  /* 10422525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422528 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042252a call 0x104246d0 */
  push32(0x1042252fu); f_104246d0();
  /* 1042252f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422534 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422536 jne 0x104225ec */
  if (!C.zf) goto L_104225ec;
  /* 1042253c mov esi, esp */
  ESI = (ESP);
  /* 1042253e push 9 */
  push32((uint32_t)(0x9u));
  /* 10422540 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422546u);
  /* 10422546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422549 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042254b call 0x104246d0 */
  push32(0x10422550u); f_104246d0();
  /* 10422550 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422557 je 0x104225ec */
  if (C.zf) goto L_104225ec;
  /* 1042255d push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 10422562 call 0x10421005 */
  push32(0x10422567u); f_10421005();
  /* 10422567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042256a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042256c jne 0x104225ec */
  if (!C.zf) goto L_104225ec;
  /* 1042256e mov esi, esp */
  ESI = (ESP);
  /* 10422570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422572 push 9 */
  push32((uint32_t)(0x9u));
  /* 10422574 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042257au);
  /* 1042257a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042257f call 0x104246d0 */
  push32(0x10422584u); f_104246d0();
  /* 10422584 mov esi, esp */
  ESI = (ESP);
  /* 10422586 push 0x1044c20c */
  push32((uint32_t)(0x1044c20cu));
  /* 1042258b call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422591u);
  /* 10422591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422596 call 0x104246d0 */
  push32(0x1042259bu); f_104246d0();
  /* 1042259b mov esi, esp */
  ESI = (ESP);
  /* 1042259d push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 104225a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 104225a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104225a6 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104225acu);
  /* 104225ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104225af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104225b1 call 0x104246d0 */
  push32(0x104225b6u); f_104246d0();
  /* 104225b6 mov esi, esp */
  ESI = (ESP);
  /* 104225b8 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 104225bd push 5 */
  push32((uint32_t)(0x5u));
  /* 104225bf push 0 */
  push32((uint32_t)(0x0u));
  /* 104225c1 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104225c7u);
  /* 104225c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104225ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104225cc call 0x104246d0 */
  push32(0x104225d1u); f_104246d0();
  /* 104225d1 mov esi, esp */
  ESI = (ESP);
  /* 104225d3 push 0x3a98 */
  push32((uint32_t)(0x3a98u));
  /* 104225d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 104225da push 0 */
  push32((uint32_t)(0x0u));
  /* 104225dc call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104225e2u);
  /* 104225e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104225e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104225e7 call 0x104246d0 */
  push32(0x104225ecu); f_104246d0();
L_104225ec:;
  /* 104225ec mov esi, esp */
  ESI = (ESP);
  /* 104225ee push 8 */
  push32((uint32_t)(0x8u));
  /* 104225f0 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104225f6u);
  /* 104225f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104225f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104225fb call 0x104246d0 */
  push32(0x10422600u); f_104246d0();
  /* 10422600 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422607 jne 0x104226ad */
  if (!C.zf) goto L_104226ad;
  /* 1042260d mov esi, esp */
  ESI = (ESP);
  /* 1042260f push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 10422614 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 10422619 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x1042261fu);
  /* 1042261f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422624 call 0x104246d0 */
  push32(0x10422629u); f_104246d0();
  /* 10422629 mov esi, eax */
  ESI = (EAX);
  /* 1042262b push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 10422630 call 0x10421005 */
  push32(0x10422635u); f_10421005();
  /* 10422635 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422638 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042263a jne 0x104226ad */
  if (!C.zf) goto L_104226ad;
  /* 1042263c mov esi, esp */
  ESI = (ESP);
  /* 1042263e push 9 */
  push32((uint32_t)(0x9u));
  /* 10422640 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422646u);
  /* 10422646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042264b call 0x104246d0 */
  push32(0x10422650u); f_104246d0();
  /* 10422650 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422657 je 0x104226ad */
  if (C.zf) goto L_104226ad;
  /* 10422659 push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 1042265e call 0x10421005 */
  push32(0x10422663u); f_10421005();
  /* 10422663 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422666 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422668 jle 0x104226ad */
  if ((C.zf||C.sf!=C.of)) goto L_104226ad;
  /* 1042266a mov esi, esp */
  ESI = (ESP);
  /* 1042266c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042266e push 0x10451428 */
  push32((uint32_t)(0x10451428u));
  /* 10422673 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422679u);
  /* 10422679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042267c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042267e call 0x104246d0 */
  push32(0x10422683u); f_104246d0();
  /* 10422683 mov esi, esp */
  ESI = (ESP);
  /* 10422685 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422687 push 9 */
  push32((uint32_t)(0x9u));
  /* 10422689 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042268fu);
  /* 1042268f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422694 call 0x104246d0 */
  push32(0x10422699u); f_104246d0();
  /* 10422699 mov esi, esp */
  ESI = (ESP);
  /* 1042269b push 1 */
  push32((uint32_t)(0x1u));
  /* 1042269d call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104226a3u);
  /* 104226a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104226a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104226a8 call 0x104246d0 */
  push32(0x104226adu); f_104246d0();
L_104226ad:;
  /* 104226ad mov esi, esp */
  ESI = (ESP);
  /* 104226af call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104226b5u);
  /* 104226b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104226b7 call 0x104246d0 */
  push32(0x104226bcu); f_104246d0();
  /* 104226bc cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104226c1 jle 0x104227eb */
  if ((C.zf||C.sf!=C.of)) goto L_104227eb;
  /* 104226c7 mov esi, esp */
  ESI = (ESP);
  /* 104226c9 push 0xa */
  push32((uint32_t)(0xau));
  /* 104226cb call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104226d1u);
  /* 104226d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104226d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104226d6 call 0x104246d0 */
  push32(0x104226dbu); f_104246d0();
  /* 104226db and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104226e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104226e2 je 0x104227eb */
  if (C.zf) goto L_104227eb;
  /* 104226e8 mov esi, esp */
  ESI = (ESP);
  /* 104226ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104226ec push 0xa */
  push32((uint32_t)(0xau));
  /* 104226ee call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104226f4u);
  /* 104226f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104226f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104226f9 call 0x104246d0 */
  push32(0x104226feu); f_104246d0();
  /* 104226fe mov esi, esp */
  ESI = (ESP);
  /* 10422700 push 0x1044c200 */
  push32((uint32_t)(0x1044c200u));
  /* 10422705 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042270bu);
  /* 1042270b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042270e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422710 call 0x104246d0 */
  push32(0x10422715u); f_104246d0();
  /* 10422715 mov esi, esp */
  ESI = (ESP);
  /* 10422717 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10422719 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042271fu);
  /* 1042271f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422724 call 0x104246d0 */
  push32(0x10422729u); f_104246d0();
  /* 10422729 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042272e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422730 je 0x104227eb */
  if (C.zf) goto L_104227eb;
  /* 10422736 mov esi, esp */
  ESI = (ESP);
  /* 10422738 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1042273a call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422740u);
  /* 10422740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422745 call 0x104246d0 */
  push32(0x1042274au); f_104246d0();
  /* 1042274a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042274f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422751 je 0x104227eb */
  if (C.zf) goto L_104227eb;
  /* 10422757 mov esi, esp */
  ESI = (ESP);
  /* 10422759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042275b push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1042275d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422763u);
  /* 10422763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422766 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422768 call 0x104246d0 */
  push32(0x1042276du); f_104246d0();
  /* 1042276d mov esi, esp */
  ESI = (ESP);
  /* 1042276f push 0 */
  push32((uint32_t)(0x0u));
  /* 10422771 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10422773 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422779u);
  /* 10422779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042277c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042277e call 0x104246d0 */
  push32(0x10422783u); f_104246d0();
  /* 10422783 mov esi, esp */
  ESI = (ESP);
  /* 10422785 push 0x1044c1f4 */
  push32((uint32_t)(0x1044c1f4u));
  /* 1042278a call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422790u);
  /* 10422790 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422795 call 0x104246d0 */
  push32(0x1042279au); f_104246d0();
  /* 1042279a mov esi, esp */
  ESI = (ESP);
  /* 1042279c push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 104227a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104227a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104227a5 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104227abu);
  /* 104227ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104227ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104227b0 call 0x104246d0 */
  push32(0x104227b5u); f_104246d0();
  /* 104227b5 mov esi, esp */
  ESI = (ESP);
  /* 104227b7 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 104227bc push 5 */
  push32((uint32_t)(0x5u));
  /* 104227be push 0 */
  push32((uint32_t)(0x0u));
  /* 104227c0 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104227c6u);
  /* 104227c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104227c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104227cb call 0x104246d0 */
  push32(0x104227d0u); f_104246d0();
  /* 104227d0 mov esi, esp */
  ESI = (ESP);
  /* 104227d2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 104227d7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104227d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104227db call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104227e1u);
  /* 104227e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104227e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104227e6 call 0x104246d0 */
  push32(0x104227ebu); f_104246d0();
L_104227eb:;
  /* 104227eb mov esi, esp */
  ESI = (ESP);
  /* 104227ed call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104227f3u);
  /* 104227f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104227f5 call 0x104246d0 */
  push32(0x104227fau); f_104246d0();
  /* 104227fa cmp eax, 0xd6d8 */
  { uint32_t _a=(EAX),_b=(0xd6d8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104227ff jle 0x1042289e */
  if ((C.zf||C.sf!=C.of)) goto L_1042289e;
  /* 10422805 mov esi, esp */
  ESI = (ESP);
  /* 10422807 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10422809 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042280fu);
  /* 1042280f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422812 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422814 call 0x104246d0 */
  push32(0x10422819u); f_104246d0();
  /* 10422819 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042281e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422820 je 0x1042289e */
  if (C.zf) goto L_1042289e;
  /* 10422822 mov esi, esp */
  ESI = (ESP);
  /* 10422824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422826 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10422828 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042282eu);
  /* 1042282e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422833 call 0x104246d0 */
  push32(0x10422838u); f_104246d0();
  /* 10422838 mov esi, esp */
  ESI = (ESP);
  /* 1042283a push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 1042283f push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 10422844 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422846 push 0x10451458 */
  push32((uint32_t)(0x10451458u));
  /* 1042284b push 0x104513e8 */
  push32((uint32_t)(0x104513e8u));
  /* 10422850 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 10422855 call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x1042285bu);
  /* 1042285b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422860 call 0x104246d0 */
  push32(0x10422865u); f_104246d0();
  /* 10422865 mov esi, esp */
  ESI = (ESP);
  /* 10422867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422869 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 1042286e call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422874u);
  /* 10422874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422877 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422879 call 0x104246d0 */
  push32(0x1042287eu); f_104246d0();
  /* 1042287e mov esi, esp */
  ESI = (ESP);
  /* 10422880 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422882 push 0xa6 */
  push32((uint32_t)(0xa6u));
  /* 10422887 push 0x104514a0 */
  push32((uint32_t)(0x104514a0u));
  /* 1042288c push 1 */
  push32((uint32_t)(0x1u));
  /* 1042288e call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10422894u);
  /* 10422894 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422899 call 0x104246d0 */
  push32(0x1042289eu); f_104246d0();
L_1042289e:;
  /* 1042289e mov esi, esp */
  ESI = (ESP);
  /* 104228a0 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 104228a2 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104228a8u);
  /* 104228a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104228ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104228ad call 0x104246d0 */
  push32(0x104228b2u); f_104246d0();
  /* 104228b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104228b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104228b9 jne 0x10422949 */
  if (!C.zf) goto L_10422949;
  /* 104228bf mov esi, esp */
  ESI = (ESP);
  /* 104228c1 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 104228c6 push 0x104514a0 */
  push32((uint32_t)(0x104514a0u));
  /* 104228cb call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x104228d1u);
  /* 104228d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104228d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104228d6 call 0x104246d0 */
  push32(0x104228dbu); f_104246d0();
  /* 104228db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104228dd jle 0x10422949 */
  if ((C.zf||C.sf!=C.of)) goto L_10422949;
  /* 104228df mov esi, esp */
  ESI = (ESP);
  /* 104228e1 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 104228e3 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104228e9u);
  /* 104228e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104228ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104228ee call 0x104246d0 */
  push32(0x104228f3u); f_104246d0();
  /* 104228f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104228f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104228fa je 0x10422949 */
  if (C.zf) goto L_10422949;
  /* 104228fc mov esi, esp */
  ESI = (ESP);
  /* 104228fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10422900 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 10422905 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042290bu);
  /* 1042290b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042290e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422910 call 0x104246d0 */
  push32(0x10422915u); f_104246d0();
  /* 10422915 mov esi, esp */
  ESI = (ESP);
  /* 10422917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422919 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1042291b call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422921u);
  /* 10422921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422924 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422926 call 0x104246d0 */
  push32(0x1042292bu); f_104246d0();
  /* 1042292b mov esi, esp */
  ESI = (ESP);
  /* 1042292d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042292f push 0x104514a8 */
  push32((uint32_t)(0x104514a8u));
  /* 10422934 push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 10422939 call dword ptr [0x10454438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454438))), 0x1042293fu);
  /* 1042293f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422942 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422944 call 0x104246d0 */
  push32(0x10422949u); f_104246d0();
L_10422949:;
  /* 10422949 mov esi, esp */
  ESI = (ESP);
  /* 1042294b push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1042294d call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422953u);
  /* 10422953 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422956 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422958 call 0x104246d0 */
  push32(0x1042295du); f_104246d0();
  /* 1042295d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422962 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422964 jne 0x10422a1a */
  if (!C.zf) goto L_10422a1a;
  /* 1042296a mov esi, esp */
  ESI = (ESP);
  /* 1042296c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1042296e call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422974u);
  /* 10422974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422977 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422979 call 0x104246d0 */
  push32(0x1042297eu); f_104246d0();
  /* 1042297e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422983 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422985 je 0x10422a1a */
  if (C.zf) goto L_10422a1a;
  /* 1042298b push 0x104514c0 */
  push32((uint32_t)(0x104514c0u));
  /* 10422990 call 0x10421005 */
  push32(0x10422995u); f_10421005();
  /* 10422995 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042299a jne 0x10422a1a */
  if (!C.zf) goto L_10422a1a;
  /* 1042299c mov esi, esp */
  ESI = (ESP);
  /* 1042299e push 0 */
  push32((uint32_t)(0x0u));
  /* 104229a0 push 0xb */
  push32((uint32_t)(0xbu));
  /* 104229a2 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104229a8u);
  /* 104229a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104229ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104229ad call 0x104246d0 */
  push32(0x104229b2u); f_104246d0();
  /* 104229b2 mov esi, esp */
  ESI = (ESP);
  /* 104229b4 push 0x1044c1e8 */
  push32((uint32_t)(0x1044c1e8u));
  /* 104229b9 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x104229bfu);
  /* 104229bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104229c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104229c4 call 0x104246d0 */
  push32(0x104229c9u); f_104246d0();
  /* 104229c9 mov esi, esp */
  ESI = (ESP);
  /* 104229cb push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 104229d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104229d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104229d4 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104229dau);
  /* 104229da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104229dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104229df call 0x104246d0 */
  push32(0x104229e4u); f_104246d0();
  /* 104229e4 mov esi, esp */
  ESI = (ESP);
  /* 104229e6 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 104229eb push 5 */
  push32((uint32_t)(0x5u));
  /* 104229ed push 0 */
  push32((uint32_t)(0x0u));
  /* 104229ef call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104229f5u);
  /* 104229f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104229f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104229fa call 0x104246d0 */
  push32(0x104229ffu); f_104246d0();
  /* 104229ff mov esi, esp */
  ESI = (ESP);
  /* 10422a01 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10422a06 push 4 */
  push32((uint32_t)(0x4u));
  /* 10422a08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422a0a call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10422a10u);
  /* 10422a10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a15 call 0x104246d0 */
  push32(0x10422a1au); f_104246d0();
L_10422a1a:;
  /* 10422a1a mov esi, esp */
  ESI = (ESP);
  /* 10422a1c call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10422a22u);
  /* 10422a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a24 call 0x104246d0 */
  push32(0x10422a29u); f_104246d0();
  /* 10422a29 cmp eax, 0x11170 */
  { uint32_t _a=(EAX),_b=(0x11170u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a2e jle 0x10422aa2 */
  if ((C.zf||C.sf!=C.of)) goto L_10422aa2;
  /* 10422a30 mov esi, esp */
  ESI = (ESP);
  /* 10422a32 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10422a34 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422a3au);
  /* 10422a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a3f call 0x104246d0 */
  push32(0x10422a44u); f_104246d0();
  /* 10422a44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422a4b je 0x10422aa2 */
  if (C.zf) goto L_10422aa2;
  /* 10422a4d mov esi, esp */
  ESI = (ESP);
  /* 10422a4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10422a51 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10422a53 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422a59u);
  /* 10422a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a5e call 0x104246d0 */
  push32(0x10422a63u); f_104246d0();
  /* 10422a63 mov esi, esp */
  ESI = (ESP);
  /* 10422a65 push 0x1044c1dc */
  push32((uint32_t)(0x1044c1dcu));
  /* 10422a6a call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422a70u);
  /* 10422a70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a75 call 0x104246d0 */
  push32(0x10422a7au); f_104246d0();
  /* 10422a7a mov esi, esp */
  ESI = (ESP);
  /* 10422a7c push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10422a7e call dword ptr [0x10454430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454430))), 0x10422a84u);
  /* 10422a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a89 call 0x104246d0 */
  push32(0x10422a8eu); f_104246d0();
  /* 10422a8e mov esi, esp */
  ESI = (ESP);
  /* 10422a90 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10422a92 call dword ptr [0x10454430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454430))), 0x10422a98u);
  /* 10422a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422a9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422a9d call 0x104246d0 */
  push32(0x10422aa2u); f_104246d0();
L_10422aa2:;
  /* 10422aa2 mov esi, esp */
  ESI = (ESP);
  /* 10422aa4 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10422aaau);
  /* 10422aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422aac call 0x104246d0 */
  push32(0x10422ab1u); f_104246d0();
  /* 10422ab1 cmp eax, 0x11940 */
  { uint32_t _a=(EAX),_b=(0x11940u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422ab6 jle 0x10422b55 */
  if ((C.zf||C.sf!=C.of)) goto L_10422b55;
  /* 10422abc mov esi, esp */
  ESI = (ESP);
  /* 10422abe push 0xc */
  push32((uint32_t)(0xcu));
  /* 10422ac0 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422ac6u);
  /* 10422ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422acb call 0x104246d0 */
  push32(0x10422ad0u); f_104246d0();
  /* 10422ad0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422ad5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422ad7 je 0x10422b55 */
  if (C.zf) goto L_10422b55;
  /* 10422ad9 mov esi, esp */
  ESI = (ESP);
  /* 10422adb push 0 */
  push32((uint32_t)(0x0u));
  /* 10422add push 0xc */
  push32((uint32_t)(0xcu));
  /* 10422adf call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422ae5u);
  /* 10422ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ae8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422aea call 0x104246d0 */
  push32(0x10422aefu); f_104246d0();
  /* 10422aef mov esi, esp */
  ESI = (ESP);
  /* 10422af1 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10422af6 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 10422afb push 1 */
  push32((uint32_t)(0x1u));
  /* 10422afd push 0x10451510 */
  push32((uint32_t)(0x10451510u));
  /* 10422b02 push 0x104514b0 */
  push32((uint32_t)(0x104514b0u));
  /* 10422b07 push 0x104514f8 */
  push32((uint32_t)(0x104514f8u));
  /* 10422b0c call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10422b12u);
  /* 10422b12 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b17 call 0x104246d0 */
  push32(0x10422b1cu); f_104246d0();
  /* 10422b1c mov esi, esp */
  ESI = (ESP);
  /* 10422b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10422b20 push 0x104514f8 */
  push32((uint32_t)(0x104514f8u));
  /* 10422b25 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422b2bu);
  /* 10422b2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422b2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b30 call 0x104246d0 */
  push32(0x10422b35u); f_104246d0();
  /* 10422b35 mov esi, esp */
  ESI = (ESP);
  /* 10422b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422b39 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10422b3e push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 10422b43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422b45 call dword ptr [0x10454434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454434))), 0x10422b4bu);
  /* 10422b4b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422b4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b50 call 0x104246d0 */
  push32(0x10422b55u); f_104246d0();
L_10422b55:;
  /* 10422b55 mov esi, esp */
  ESI = (ESP);
  /* 10422b57 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10422b5du);
  /* 10422b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b5f call 0x104246d0 */
  push32(0x10422b64u); f_104246d0();
  /* 10422b64 cmp eax, 0x11e54 */
  { uint32_t _a=(EAX),_b=(0x11e54u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b69 jle 0x10422c08 */
  if ((C.zf||C.sf!=C.of)) goto L_10422c08;
  /* 10422b6f mov esi, esp */
  ESI = (ESP);
  /* 10422b71 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10422b73 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422b79u);
  /* 10422b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422b7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b7e call 0x104246d0 */
  push32(0x10422b83u); f_104246d0();
  /* 10422b83 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422b8a je 0x10422c08 */
  if (C.zf) goto L_10422c08;
  /* 10422b8c mov esi, esp */
  ESI = (ESP);
  /* 10422b8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10422b90 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10422b92 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422b98u);
  /* 10422b98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422b9d call 0x104246d0 */
  push32(0x10422ba2u); f_104246d0();
  /* 10422ba2 mov esi, esp */
  ESI = (ESP);
  /* 10422ba4 push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10422ba9 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 10422bae push 1 */
  push32((uint32_t)(0x1u));
  /* 10422bb0 push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 10422bb5 push 0x104513e8 */
  push32((uint32_t)(0x104513e8u));
  /* 10422bba push 0x10451500 */
  push32((uint32_t)(0x10451500u));
  /* 10422bbf call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10422bc5u);
  /* 10422bc5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422bc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422bca call 0x104246d0 */
  push32(0x10422bcfu); f_104246d0();
  /* 10422bcf mov esi, esp */
  ESI = (ESP);
  /* 10422bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422bd3 push 0x10451500 */
  push32((uint32_t)(0x10451500u));
  /* 10422bd8 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422bdeu);
  /* 10422bde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422be3 call 0x104246d0 */
  push32(0x10422be8u); f_104246d0();
  /* 10422be8 mov esi, esp */
  ESI = (ESP);
  /* 10422bea push 0 */
  push32((uint32_t)(0x0u));
  /* 10422bec push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10422bf1 push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 10422bf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422bf8 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10422bfeu);
  /* 10422bfe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c03 call 0x104246d0 */
  push32(0x10422c08u); f_104246d0();
L_10422c08:;
  /* 10422c08 mov esi, esp */
  ESI = (ESP);
  /* 10422c0a push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10422c0c call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422c12u);
  /* 10422c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c17 call 0x104246d0 */
  push32(0x10422c1cu); f_104246d0();
  /* 10422c1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422c23 jne 0x10422c9e */
  if (!C.zf) goto L_10422c9e;
  /* 10422c25 mov esi, esp */
  ESI = (ESP);
  /* 10422c27 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10422c29 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422c2fu);
  /* 10422c2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c34 call 0x104246d0 */
  push32(0x10422c39u); f_104246d0();
  /* 10422c39 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422c40 je 0x10422c9e */
  if (C.zf) goto L_10422c9e;
  /* 10422c42 mov esi, esp */
  ESI = (ESP);
  /* 10422c44 push 0x10451500 */
  push32((uint32_t)(0x10451500u));
  /* 10422c49 push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 10422c4e call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10422c54u);
  /* 10422c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c59 call 0x104246d0 */
  push32(0x10422c5eu); f_104246d0();
  /* 10422c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422c60 jle 0x10422c9e */
  if ((C.zf||C.sf!=C.of)) goto L_10422c9e;
  /* 10422c62 mov esi, esp */
  ESI = (ESP);
  /* 10422c64 push 0x1044c1d0 */
  push32((uint32_t)(0x1044c1d0u));
  /* 10422c69 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422c6fu);
  /* 10422c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c74 call 0x104246d0 */
  push32(0x10422c79u); f_104246d0();
  /* 10422c79 mov esi, esp */
  ESI = (ESP);
  /* 10422c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10422c7d push 0xd */
  push32((uint32_t)(0xdu));
  /* 10422c7f call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422c85u);
  /* 10422c85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422c88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c8a call 0x104246d0 */
  push32(0x10422c8fu); f_104246d0();
  /* 10422c8f mov esi, esp */
  ESI = (ESP);
  /* 10422c91 call dword ptr [0x10454440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454440))), 0x10422c97u);
  /* 10422c97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422c99 call 0x104246d0 */
  push32(0x10422c9eu); f_104246d0();
L_10422c9e:;
  /* 10422c9e mov esi, esp */
  ESI = (ESP);
  /* 10422ca0 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10422ca2 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422ca8u);
  /* 10422ca8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422cab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422cad call 0x104246d0 */
  push32(0x10422cb2u); f_104246d0();
  /* 10422cb2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422cb9 jne 0x10422d25 */
  if (!C.zf) goto L_10422d25;
  /* 10422cbb mov esi, esp */
  ESI = (ESP);
  /* 10422cbd push 0xf */
  push32((uint32_t)(0xfu));
  /* 10422cbf call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422cc5u);
  /* 10422cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422cc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422cca call 0x104246d0 */
  push32(0x10422ccfu); f_104246d0();
  /* 10422ccf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422cd6 je 0x10422d25 */
  if (C.zf) goto L_10422d25;
  /* 10422cd8 push 0x10451500 */
  push32((uint32_t)(0x10451500u));
  /* 10422cdd call 0x10421005 */
  push32(0x10422ce2u); f_10421005();
  /* 10422ce2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ce5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422ce7 jne 0x10422d25 */
  if (!C.zf) goto L_10422d25;
  /* 10422ce9 mov esi, esp */
  ESI = (ESP);
  /* 10422ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 10422ced push 0xf */
  push32((uint32_t)(0xfu));
  /* 10422cef call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422cf5u);
  /* 10422cf5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422cf8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422cfa call 0x104246d0 */
  push32(0x10422cffu); f_104246d0();
  /* 10422cff mov esi, esp */
  ESI = (ESP);
  /* 10422d01 push 0x1044c1c4 */
  push32((uint32_t)(0x1044c1c4u));
  /* 10422d06 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422d0cu);
  /* 10422d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d11 call 0x104246d0 */
  push32(0x10422d16u); f_104246d0();
  /* 10422d16 mov esi, esp */
  ESI = (ESP);
  /* 10422d18 call dword ptr [0x10454444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454444))), 0x10422d1eu);
  /* 10422d1e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d20 call 0x104246d0 */
  push32(0x10422d25u); f_104246d0();
L_10422d25:;
  /* 10422d25 mov esi, esp */
  ESI = (ESP);
  /* 10422d27 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10422d2du);
  /* 10422d2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d2f call 0x104246d0 */
  push32(0x10422d34u); f_104246d0();
  /* 10422d34 cmp eax, 0x3a98 */
  { uint32_t _a=(EAX),_b=(0x3a98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d39 jle 0x10422dd2 */
  if ((C.zf||C.sf!=C.of)) goto L_10422dd2;
  /* 10422d3f mov esi, esp */
  ESI = (ESP);
  /* 10422d41 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10422d43 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422d49u);
  /* 10422d49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422d4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d4e call 0x104246d0 */
  push32(0x10422d53u); f_104246d0();
  /* 10422d53 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422d58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422d5a je 0x10422dd2 */
  if (C.zf) goto L_10422dd2;
  /* 10422d5c mov esi, esp */
  ESI = (ESP);
  /* 10422d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10422d60 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10422d62 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422d68u);
  /* 10422d68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422d6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d6d call 0x104246d0 */
  push32(0x10422d72u); f_104246d0();
  /* 10422d72 mov esi, esp */
  ESI = (ESP);
  /* 10422d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422d76 push 0x10451440 */
  push32((uint32_t)(0x10451440u));
  /* 10422d7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10422d7d push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 10422d82 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10422d87 push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10422d8c call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10422d92u);
  /* 10422d92 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422d97 call 0x104246d0 */
  push32(0x10422d9cu); f_104246d0();
  /* 10422d9c mov esi, esp */
  ESI = (ESP);
  /* 10422d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10422da0 push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10422da5 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422dabu);
  /* 10422dab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422dae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422db0 call 0x104246d0 */
  push32(0x10422db5u); f_104246d0();
  /* 10422db5 mov esi, esp */
  ESI = (ESP);
  /* 10422db7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422dbb push 0x10451438 */
  push32((uint32_t)(0x10451438u));
  /* 10422dc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422dc2 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10422dc8u);
  /* 10422dc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422dcd call 0x104246d0 */
  push32(0x10422dd2u); f_104246d0();
L_10422dd2:;
  /* 10422dd2 mov esi, esp */
  ESI = (ESP);
  /* 10422dd4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10422dd6 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422ddcu);
  /* 10422ddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ddf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422de1 call 0x104246d0 */
  push32(0x10422de6u); f_104246d0();
  /* 10422de6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422deb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422ded jne 0x10422e52 */
  if (!C.zf) goto L_10422e52;
  /* 10422def mov esi, esp */
  ESI = (ESP);
  /* 10422df1 push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10422df6 push 0x10451438 */
  push32((uint32_t)(0x10451438u));
  /* 10422dfb call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10422e01u);
  /* 10422e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e06 call 0x104246d0 */
  push32(0x10422e0bu); f_104246d0();
  /* 10422e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422e0d jle 0x10422e52 */
  if ((C.zf||C.sf!=C.of)) goto L_10422e52;
  /* 10422e0f mov esi, esp */
  ESI = (ESP);
  /* 10422e11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422e13 push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10422e18 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422e1eu);
  /* 10422e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e23 call 0x104246d0 */
  push32(0x10422e28u); f_104246d0();
  /* 10422e28 mov esi, esp */
  ESI = (ESP);
  /* 10422e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10422e2c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10422e2e call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422e34u);
  /* 10422e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e39 call 0x104246d0 */
  push32(0x10422e3eu); f_104246d0();
  /* 10422e3e mov esi, esp */
  ESI = (ESP);
  /* 10422e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422e42 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10422e48u);
  /* 10422e48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e4d call 0x104246d0 */
  push32(0x10422e52u); f_104246d0();
L_10422e52:;
  /* 10422e52 mov esi, esp */
  ESI = (ESP);
  /* 10422e54 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10422e56 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422e5cu);
  /* 10422e5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e61 call 0x104246d0 */
  push32(0x10422e66u); f_104246d0();
  /* 10422e66 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422e6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422e6d jne 0x10422f04 */
  if (!C.zf) goto L_10422f04;
  /* 10422e73 mov esi, esp */
  ESI = (ESP);
  /* 10422e75 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10422e77 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422e7du);
  /* 10422e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422e82 call 0x104246d0 */
  push32(0x10422e87u); f_104246d0();
  /* 10422e87 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422e8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422e8e je 0x10422f04 */
  if (C.zf) goto L_10422f04;
  /* 10422e90 push 0x104514e8 */
  push32((uint32_t)(0x104514e8u));
  /* 10422e95 call 0x10421005 */
  push32(0x10422e9au); f_10421005();
  /* 10422e9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422e9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422e9f jne 0x10422f04 */
  if (!C.zf) goto L_10422f04;
  /* 10422ea1 mov esi, esp */
  ESI = (ESP);
  /* 10422ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422ea5 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10422ea7 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422eadu);
  /* 10422ead add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422eb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422eb2 call 0x104246d0 */
  push32(0x10422eb7u); f_104246d0();
  /* 10422eb7 mov esi, esp */
  ESI = (ESP);
  /* 10422eb9 push 0x1044c1b8 */
  push32((uint32_t)(0x1044c1b8u));
  /* 10422ebe call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10422ec4u);
  /* 10422ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422ec9 call 0x104246d0 */
  push32(0x10422eceu); f_104246d0();
  /* 10422ece mov esi, esp */
  ESI = (ESP);
  /* 10422ed0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10422ed5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10422ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422ed9 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10422edfu);
  /* 10422edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422ee2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422ee4 call 0x104246d0 */
  push32(0x10422ee9u); f_104246d0();
  /* 10422ee9 mov esi, esp */
  ESI = (ESP);
  /* 10422eeb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10422ef0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10422ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422ef4 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10422efau);
  /* 10422efa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422efd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422eff call 0x104246d0 */
  push32(0x10422f04u); f_104246d0();
L_10422f04:;
  /* 10422f04 mov esi, esp */
  ESI = (ESP);
  /* 10422f06 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10422f0cu);
  /* 10422f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f0e call 0x104246d0 */
  push32(0x10422f13u); f_104246d0();
  /* 10422f13 cmp eax, 0x4e20 */
  { uint32_t _a=(EAX),_b=(0x4e20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f18 jle 0x10422fb1 */
  if ((C.zf||C.sf!=C.of)) goto L_10422fb1;
  /* 10422f1e mov esi, esp */
  ESI = (ESP);
  /* 10422f20 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10422f22 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422f28u);
  /* 10422f28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422f2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f2d call 0x104246d0 */
  push32(0x10422f32u); f_104246d0();
  /* 10422f32 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422f37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422f39 je 0x10422fb1 */
  if (C.zf) goto L_10422fb1;
  /* 10422f3b mov esi, esp */
  ESI = (ESP);
  /* 10422f3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10422f3f push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10422f41 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10422f47u);
  /* 10422f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422f4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f4c call 0x104246d0 */
  push32(0x10422f51u); f_104246d0();
  /* 10422f51 mov esi, esp */
  ESI = (ESP);
  /* 10422f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422f55 push 0x10451450 */
  push32((uint32_t)(0x10451450u));
  /* 10422f5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10422f5c push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 10422f61 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10422f66 push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 10422f6b call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10422f71u);
  /* 10422f71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422f74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f76 call 0x104246d0 */
  push32(0x10422f7bu); f_104246d0();
  /* 10422f7b mov esi, esp */
  ESI = (ESP);
  /* 10422f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10422f7f push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 10422f84 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422f8au);
  /* 10422f8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422f8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422f8f call 0x104246d0 */
  push32(0x10422f94u); f_104246d0();
  /* 10422f94 mov esi, esp */
  ESI = (ESP);
  /* 10422f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422f98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422f9a push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 10422f9f push 1 */
  push32((uint32_t)(0x1u));
  /* 10422fa1 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10422fa7u);
  /* 10422fa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422fac call 0x104246d0 */
  push32(0x10422fb1u); f_104246d0();
L_10422fb1:;
  /* 10422fb1 mov esi, esp */
  ESI = (ESP);
  /* 10422fb3 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10422fb5 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10422fbbu);
  /* 10422fbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422fc0 call 0x104246d0 */
  push32(0x10422fc5u); f_104246d0();
  /* 10422fc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10422fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422fcc jne 0x10423031 */
  if (!C.zf) goto L_10423031;
  /* 10422fce mov esi, esp */
  ESI = (ESP);
  /* 10422fd0 push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 10422fd5 push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 10422fda call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x10422fe0u);
  /* 10422fe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10422fe3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10422fe5 call 0x104246d0 */
  push32(0x10422feau); f_104246d0();
  /* 10422fea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10422fec jle 0x10423031 */
  if ((C.zf||C.sf!=C.of)) goto L_10423031;
  /* 10422fee mov esi, esp */
  ESI = (ESP);
  /* 10422ff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10422ff2 push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 10422ff7 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10422ffdu);
  /* 10422ffd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423000 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423002 call 0x104246d0 */
  push32(0x10423007u); f_104246d0();
  /* 10423007 mov esi, esp */
  ESI = (ESP);
  /* 10423009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042300b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1042300d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423013u);
  /* 10423013 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423018 call 0x104246d0 */
  push32(0x1042301du); f_104246d0();
  /* 1042301d mov esi, esp */
  ESI = (ESP);
  /* 1042301f push 1 */
  push32((uint32_t)(0x1u));
  /* 10423021 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x10423027u);
  /* 10423027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042302a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042302c call 0x104246d0 */
  push32(0x10423031u); f_104246d0();
L_10423031:;
  /* 10423031 mov esi, esp */
  ESI = (ESP);
  /* 10423033 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10423035 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042303bu);
  /* 1042303b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042303e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423040 call 0x104246d0 */
  push32(0x10423045u); f_104246d0();
  /* 10423045 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042304a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042304c jne 0x104230c4 */
  if (!C.zf) goto L_104230c4;
  /* 1042304e mov esi, esp */
  ESI = (ESP);
  /* 10423050 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10423052 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423058u);
  /* 10423058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042305b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042305d call 0x104246d0 */
  push32(0x10423062u); f_104246d0();
  /* 10423062 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423067 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423069 je 0x104230c4 */
  if (C.zf) goto L_104230c4;
  /* 1042306b push 0x104514f0 */
  push32((uint32_t)(0x104514f0u));
  /* 10423070 call 0x10421005 */
  push32(0x10423075u); f_10421005();
  /* 10423075 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423078 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042307a jne 0x104230c4 */
  if (!C.zf) goto L_104230c4;
  /* 1042307c mov esi, esp */
  ESI = (ESP);
  /* 1042307e push 0 */
  push32((uint32_t)(0x0u));
  /* 10423080 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10423082 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423088u);
  /* 10423088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042308b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042308d call 0x104246d0 */
  push32(0x10423092u); f_104246d0();
  /* 10423092 mov esi, esp */
  ESI = (ESP);
  /* 10423094 push 0x1044c1ac */
  push32((uint32_t)(0x1044c1acu));
  /* 10423099 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042309fu);
  /* 1042309f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104230a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104230a4 call 0x104246d0 */
  push32(0x104230a9u); f_104246d0();
  /* 104230a9 mov esi, esp */
  ESI = (ESP);
  /* 104230ab push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 104230b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104230b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104230b4 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104230bau);
  /* 104230ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104230bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104230bf call 0x104246d0 */
  push32(0x104230c4u); f_104246d0();
L_104230c4:;
  /* 104230c4 mov esi, esp */
  ESI = (ESP);
  /* 104230c6 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104230ccu);
  /* 104230cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104230ce call 0x104246d0 */
  push32(0x104230d3u); f_104246d0();
  /* 104230d3 cmp eax, 0x7530 */
  { uint32_t _a=(EAX),_b=(0x7530u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104230d8 jle 0x10423171 */
  if ((C.zf||C.sf!=C.of)) goto L_10423171;
  /* 104230de mov esi, esp */
  ESI = (ESP);
  /* 104230e0 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104230e2 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104230e8u);
  /* 104230e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104230eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104230ed call 0x104246d0 */
  push32(0x104230f2u); f_104246d0();
  /* 104230f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104230f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104230f9 je 0x10423171 */
  if (C.zf) goto L_10423171;
  /* 104230fb mov esi, esp */
  ESI = (ESP);
  /* 104230fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104230ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10423101 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423107u);
  /* 10423107 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042310a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042310c call 0x104246d0 */
  push32(0x10423111u); f_104246d0();
  /* 10423111 mov esi, esp */
  ESI = (ESP);
  /* 10423113 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423115 push 0x10451478 */
  push32((uint32_t)(0x10451478u));
  /* 1042311a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042311c push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 10423121 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10423126 push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 1042312b call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x10423131u);
  /* 10423131 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423136 call 0x104246d0 */
  push32(0x1042313bu); f_104246d0();
  /* 1042313b mov esi, esp */
  ESI = (ESP);
  /* 1042313d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042313f push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 10423144 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042314au);
  /* 1042314a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042314d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042314f call 0x104246d0 */
  push32(0x10423154u); f_104246d0();
  /* 10423154 mov esi, esp */
  ESI = (ESP);
  /* 10423156 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042315a push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 1042315f push 1 */
  push32((uint32_t)(0x1u));
  /* 10423161 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10423167u);
  /* 10423167 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042316a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042316c call 0x104246d0 */
  push32(0x10423171u); f_104246d0();
L_10423171:;
  /* 10423171 mov esi, esp */
  ESI = (ESP);
  /* 10423173 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10423175 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042317bu);
  /* 1042317b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042317e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423180 call 0x104246d0 */
  push32(0x10423185u); f_104246d0();
  /* 10423185 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042318a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042318c jne 0x104231f1 */
  if (!C.zf) goto L_104231f1;
  /* 1042318e mov esi, esp */
  ESI = (ESP);
  /* 10423190 push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 10423195 push 0x10451470 */
  push32((uint32_t)(0x10451470u));
  /* 1042319a call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x104231a0u);
  /* 104231a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104231a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104231a5 call 0x104246d0 */
  push32(0x104231aau); f_104246d0();
  /* 104231aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104231ac jle 0x104231f1 */
  if ((C.zf||C.sf!=C.of)) goto L_104231f1;
  /* 104231ae mov esi, esp */
  ESI = (ESP);
  /* 104231b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104231b2 push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 104231b7 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104231bdu);
  /* 104231bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104231c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104231c2 call 0x104246d0 */
  push32(0x104231c7u); f_104246d0();
  /* 104231c7 mov esi, esp */
  ESI = (ESP);
  /* 104231c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104231cb push 0x14 */
  push32((uint32_t)(0x14u));
  /* 104231cd call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104231d3u);
  /* 104231d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104231d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104231d8 call 0x104246d0 */
  push32(0x104231ddu); f_104246d0();
  /* 104231dd mov esi, esp */
  ESI = (ESP);
  /* 104231df push 1 */
  push32((uint32_t)(0x1u));
  /* 104231e1 call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104231e7u);
  /* 104231e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104231ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104231ec call 0x104246d0 */
  push32(0x104231f1u); f_104246d0();
L_104231f1:;
  /* 104231f1 mov esi, esp */
  ESI = (ESP);
  /* 104231f3 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104231f5 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104231fbu);
  /* 104231fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104231fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423200 call 0x104246d0 */
  push32(0x10423205u); f_104246d0();
  /* 10423205 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042320a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042320c jne 0x104232c2 */
  if (!C.zf) goto L_104232c2;
  /* 10423212 mov esi, esp */
  ESI = (ESP);
  /* 10423214 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10423216 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042321cu);
  /* 1042321c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042321f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423221 call 0x104246d0 */
  push32(0x10423226u); f_104246d0();
  /* 10423226 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042322b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042322d je 0x104232c2 */
  if (C.zf) goto L_104232c2;
  /* 10423233 push 0x104514d8 */
  push32((uint32_t)(0x104514d8u));
  /* 10423238 call 0x10421005 */
  push32(0x1042323du); f_10421005();
  /* 1042323d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423242 jne 0x104232c2 */
  if (!C.zf) goto L_104232c2;
  /* 10423244 mov esi, esp */
  ESI = (ESP);
  /* 10423246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423248 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1042324a call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423250u);
  /* 10423250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423253 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423255 call 0x104246d0 */
  push32(0x1042325au); f_104246d0();
  /* 1042325a mov esi, esp */
  ESI = (ESP);
  /* 1042325c push 0x1044c1a0 */
  push32((uint32_t)(0x1044c1a0u));
  /* 10423261 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423267u);
  /* 10423267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042326a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042326c call 0x104246d0 */
  push32(0x10423271u); f_104246d0();
  /* 10423271 mov esi, esp */
  ESI = (ESP);
  /* 10423273 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10423278 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042327a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042327c call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423282u);
  /* 10423282 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423285 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423287 call 0x104246d0 */
  push32(0x1042328cu); f_104246d0();
  /* 1042328c mov esi, esp */
  ESI = (ESP);
  /* 1042328e push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10423293 push 4 */
  push32((uint32_t)(0x4u));
  /* 10423295 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423297 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x1042329du);
  /* 1042329d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104232a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104232a2 call 0x104246d0 */
  push32(0x104232a7u); f_104246d0();
  /* 104232a7 mov esi, esp */
  ESI = (ESP);
  /* 104232a9 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 104232ae push 5 */
  push32((uint32_t)(0x5u));
  /* 104232b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104232b2 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x104232b8u);
  /* 104232b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104232bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104232bd call 0x104246d0 */
  push32(0x104232c2u); f_104246d0();
L_104232c2:;
  /* 104232c2 mov esi, esp */
  ESI = (ESP);
  /* 104232c4 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104232cau);
  /* 104232ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104232cc call 0x104246d0 */
  push32(0x104232d1u); f_104246d0();
  /* 104232d1 cmp eax, 0x9c40 */
  { uint32_t _a=(EAX),_b=(0x9c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104232d6 jle 0x1042336f */
  if ((C.zf||C.sf!=C.of)) goto L_1042336f;
  /* 104232dc mov esi, esp */
  ESI = (ESP);
  /* 104232de push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104232e0 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104232e6u);
  /* 104232e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104232e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104232eb call 0x104246d0 */
  push32(0x104232f0u); f_104246d0();
  /* 104232f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104232f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104232f7 je 0x1042336f */
  if (C.zf) goto L_1042336f;
  /* 104232f9 mov esi, esp */
  ESI = (ESP);
  /* 104232fb push 0 */
  push32((uint32_t)(0x0u));
  /* 104232fd push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104232ff call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423305u);
  /* 10423305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423308 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042330a call 0x104246d0 */
  push32(0x1042330fu); f_104246d0();
  /* 1042330f mov esi, esp */
  ESI = (ESP);
  /* 10423311 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423313 push 0x10451438 */
  push32((uint32_t)(0x10451438u));
  /* 10423318 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042331a push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 1042331f push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10423324 push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 10423329 call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x1042332fu);
  /* 1042332f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423334 call 0x104246d0 */
  push32(0x10423339u); f_104246d0();
  /* 10423339 mov esi, esp */
  ESI = (ESP);
  /* 1042333b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042333d push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 10423342 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10423348u);
  /* 10423348 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042334b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042334d call 0x104246d0 */
  push32(0x10423352u); f_104246d0();
  /* 10423352 mov esi, esp */
  ESI = (ESP);
  /* 10423354 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423358 push 0x10451440 */
  push32((uint32_t)(0x10451440u));
  /* 1042335d push 1 */
  push32((uint32_t)(0x1u));
  /* 1042335f call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10423365u);
  /* 10423365 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042336a call 0x104246d0 */
  push32(0x1042336fu); f_104246d0();
L_1042336f:;
  /* 1042336f mov esi, esp */
  ESI = (ESP);
  /* 10423371 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10423373 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423379u);
  /* 10423379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042337c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042337e call 0x104246d0 */
  push32(0x10423383u); f_104246d0();
  /* 10423383 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423388 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042338a jne 0x104233ef */
  if (!C.zf) goto L_104233ef;
  /* 1042338c mov esi, esp */
  ESI = (ESP);
  /* 1042338e push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 10423393 push 0x10451440 */
  push32((uint32_t)(0x10451440u));
  /* 10423398 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x1042339eu);
  /* 1042339e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104233a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104233a3 call 0x104246d0 */
  push32(0x104233a8u); f_104246d0();
  /* 104233a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104233aa jle 0x104233ef */
  if ((C.zf||C.sf!=C.of)) goto L_104233ef;
  /* 104233ac mov esi, esp */
  ESI = (ESP);
  /* 104233ae push 0 */
  push32((uint32_t)(0x0u));
  /* 104233b0 push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 104233b5 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x104233bbu);
  /* 104233bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104233be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104233c0 call 0x104246d0 */
  push32(0x104233c5u); f_104246d0();
  /* 104233c5 mov esi, esp */
  ESI = (ESP);
  /* 104233c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104233c9 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 104233cb call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104233d1u);
  /* 104233d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104233d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104233d6 call 0x104246d0 */
  push32(0x104233dbu); f_104246d0();
  /* 104233db mov esi, esp */
  ESI = (ESP);
  /* 104233dd push 1 */
  push32((uint32_t)(0x1u));
  /* 104233df call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104233e5u);
  /* 104233e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104233e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104233ea call 0x104246d0 */
  push32(0x104233efu); f_104246d0();
L_104233ef:;
  /* 104233ef mov esi, esp */
  ESI = (ESP);
  /* 104233f1 push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 104233f3 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104233f9u);
  /* 104233f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104233fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104233fe call 0x104246d0 */
  push32(0x10423403u); f_104246d0();
  /* 10423403 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042340a jne 0x104234a1 */
  if (!C.zf) goto L_104234a1;
  /* 10423410 mov esi, esp */
  ESI = (ESP);
  /* 10423412 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10423414 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042341au);
  /* 1042341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042341d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042341f call 0x104246d0 */
  push32(0x10423424u); f_104246d0();
  /* 10423424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042342b je 0x104234a1 */
  if (C.zf) goto L_104234a1;
  /* 1042342d push 0x104514e0 */
  push32((uint32_t)(0x104514e0u));
  /* 10423432 call 0x10421005 */
  push32(0x10423437u); f_10421005();
  /* 10423437 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042343a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042343c jne 0x104234a1 */
  if (!C.zf) goto L_104234a1;
  /* 1042343e mov esi, esp */
  ESI = (ESP);
  /* 10423440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423442 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10423444 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042344au);
  /* 1042344a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042344d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042344f call 0x104246d0 */
  push32(0x10423454u); f_104246d0();
  /* 10423454 mov esi, esp */
  ESI = (ESP);
  /* 10423456 push 0x1044c194 */
  push32((uint32_t)(0x1044c194u));
  /* 1042345b call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423461u);
  /* 10423461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423466 call 0x104246d0 */
  push32(0x1042346bu); f_104246d0();
  /* 1042346b mov esi, esp */
  ESI = (ESP);
  /* 1042346d push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10423472 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423474 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423476 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x1042347cu);
  /* 1042347c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042347f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423481 call 0x104246d0 */
  push32(0x10423486u); f_104246d0();
  /* 10423486 mov esi, esp */
  ESI = (ESP);
  /* 10423488 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 1042348d push 1 */
  push32((uint32_t)(0x1u));
  /* 1042348f push 0 */
  push32((uint32_t)(0x0u));
  /* 10423491 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423497u);
  /* 10423497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042349a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042349c call 0x104246d0 */
  push32(0x104234a1u); f_104246d0();
L_104234a1:;
  /* 104234a1 mov esi, esp */
  ESI = (ESP);
  /* 104234a3 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x104234a9u);
  /* 104234a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104234ab call 0x104246d0 */
  push32(0x104234b0u); f_104246d0();
  /* 104234b0 cmp eax, 0xafc8 */
  { uint32_t _a=(EAX),_b=(0xafc8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104234b5 jle 0x1042354e */
  if ((C.zf||C.sf!=C.of)) goto L_1042354e;
  /* 104234bb mov esi, esp */
  ESI = (ESP);
  /* 104234bd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104234bf call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104234c5u);
  /* 104234c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104234c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104234ca call 0x104246d0 */
  push32(0x104234cfu); f_104246d0();
  /* 104234cf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104234d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104234d6 je 0x1042354e */
  if (C.zf) goto L_1042354e;
  /* 104234d8 mov esi, esp */
  ESI = (ESP);
  /* 104234da push 0 */
  push32((uint32_t)(0x0u));
  /* 104234dc push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104234de call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104234e4u);
  /* 104234e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104234e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104234e9 call 0x104246d0 */
  push32(0x104234eeu); f_104246d0();
  /* 104234ee mov esi, esp */
  ESI = (ESP);
  /* 104234f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104234f2 push 0x10451498 */
  push32((uint32_t)(0x10451498u));
  /* 104234f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104234f9 push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 104234fe push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 10423503 push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 10423508 call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x1042350eu);
  /* 1042350e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423511 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423513 call 0x104246d0 */
  push32(0x10423518u); f_104246d0();
  /* 10423518 mov esi, esp */
  ESI = (ESP);
  /* 1042351a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042351c push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 10423521 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x10423527u);
  /* 10423527 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042352a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042352c call 0x104246d0 */
  push32(0x10423531u); f_104246d0();
  /* 10423531 mov esi, esp */
  ESI = (ESP);
  /* 10423533 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423535 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423537 push 0x10451450 */
  push32((uint32_t)(0x10451450u));
  /* 1042353c push 1 */
  push32((uint32_t)(0x1u));
  /* 1042353e call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10423544u);
  /* 10423544 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423547 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423549 call 0x104246d0 */
  push32(0x1042354eu); f_104246d0();
L_1042354e:;
  /* 1042354e mov esi, esp */
  ESI = (ESP);
  /* 10423550 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10423552 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423558u);
  /* 10423558 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042355b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042355d call 0x104246d0 */
  push32(0x10423562u); f_104246d0();
  /* 10423562 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423567 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423569 jne 0x104235ce */
  if (!C.zf) goto L_104235ce;
  /* 1042356b mov esi, esp */
  ESI = (ESP);
  /* 1042356d push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 10423572 push 0x10451450 */
  push32((uint32_t)(0x10451450u));
  /* 10423577 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x1042357du);
  /* 1042357d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423582 call 0x104246d0 */
  push32(0x10423587u); f_104246d0();
  /* 10423587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423589 jle 0x104235ce */
  if ((C.zf||C.sf!=C.of)) goto L_104235ce;
  /* 1042358b mov esi, esp */
  ESI = (ESP);
  /* 1042358d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042358f push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 10423594 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042359au);
  /* 1042359a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042359d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042359f call 0x104246d0 */
  push32(0x104235a4u); f_104246d0();
  /* 104235a4 mov esi, esp */
  ESI = (ESP);
  /* 104235a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104235a8 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104235aa call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104235b0u);
  /* 104235b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104235b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104235b5 call 0x104246d0 */
  push32(0x104235bau); f_104246d0();
  /* 104235ba mov esi, esp */
  ESI = (ESP);
  /* 104235bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104235be call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104235c4u);
  /* 104235c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104235c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104235c9 call 0x104246d0 */
  push32(0x104235ceu); f_104246d0();
L_104235ce:;
  /* 104235ce mov esi, esp */
  ESI = (ESP);
  /* 104235d0 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 104235d2 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104235d8u);
  /* 104235d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104235db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104235dd call 0x104246d0 */
  push32(0x104235e2u); f_104246d0();
  /* 104235e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104235e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104235e9 jne 0x10423680 */
  if (!C.zf) goto L_10423680;
  /* 104235ef mov esi, esp */
  ESI = (ESP);
  /* 104235f1 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 104235f3 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104235f9u);
  /* 104235f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104235fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104235fe call 0x104246d0 */
  push32(0x10423603u); f_104246d0();
  /* 10423603 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042360a je 0x10423680 */
  if (C.zf) goto L_10423680;
  /* 1042360c push 0x104514c8 */
  push32((uint32_t)(0x104514c8u));
  /* 10423611 call 0x10421005 */
  push32(0x10423616u); f_10421005();
  /* 10423616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042361b jne 0x10423680 */
  if (!C.zf) goto L_10423680;
  /* 1042361d mov esi, esp */
  ESI = (ESP);
  /* 1042361f push 0 */
  push32((uint32_t)(0x0u));
  /* 10423621 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10423623 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423629u);
  /* 10423629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042362c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042362e call 0x104246d0 */
  push32(0x10423633u); f_104246d0();
  /* 10423633 mov esi, esp */
  ESI = (ESP);
  /* 10423635 push 0x1044c188 */
  push32((uint32_t)(0x1044c188u));
  /* 1042363a call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423640u);
  /* 10423640 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423643 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423645 call 0x104246d0 */
  push32(0x1042364au); f_104246d0();
  /* 1042364a mov esi, esp */
  ESI = (ESP);
  /* 1042364c push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10423651 push 4 */
  push32((uint32_t)(0x4u));
  /* 10423653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423655 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x1042365bu);
  /* 1042365b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042365e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423660 call 0x104246d0 */
  push32(0x10423665u); f_104246d0();
  /* 10423665 mov esi, esp */
  ESI = (ESP);
  /* 10423667 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 1042366c push 5 */
  push32((uint32_t)(0x5u));
  /* 1042366e push 0 */
  push32((uint32_t)(0x0u));
  /* 10423670 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423676u);
  /* 10423676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042367b call 0x104246d0 */
  push32(0x10423680u); f_104246d0();
L_10423680:;
  /* 10423680 mov esi, esp */
  ESI = (ESP);
  /* 10423682 call dword ptr [0x1045440c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045440c))), 0x10423688u);
  /* 10423688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042368a call 0x104246d0 */
  push32(0x1042368fu); f_104246d0();
  /* 1042368f cmp eax, 0xc350 */
  { uint32_t _a=(EAX),_b=(0xc350u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423694 jle 0x1042374e */
  if ((C.zf||C.sf!=C.of)) goto L_1042374e;
  /* 1042369a mov esi, esp */
  ESI = (ESP);
  /* 1042369c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1042369e call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104236a4u);
  /* 104236a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104236a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104236a9 call 0x104246d0 */
  push32(0x104236aeu); f_104246d0();
  /* 104236ae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104236b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104236b5 je 0x1042374e */
  if (C.zf) goto L_1042374e;
  /* 104236bb mov esi, esp */
  ESI = (ESP);
  /* 104236bd push 0 */
  push32((uint32_t)(0x0u));
  /* 104236bf push 0x2d */
  push32((uint32_t)(0x2du));
  /* 104236c1 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104236c7u);
  /* 104236c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104236ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104236cc call 0x104246d0 */
  push32(0x104236d1u); f_104246d0();
  /* 104236d1 mov esi, esp */
  ESI = (ESP);
  /* 104236d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104236d5 push 0x10451480 */
  push32((uint32_t)(0x10451480u));
  /* 104236da push 1 */
  push32((uint32_t)(0x1u));
  /* 104236dc push 0x10451460 */
  push32((uint32_t)(0x10451460u));
  /* 104236e1 push 0x104513e0 */
  push32((uint32_t)(0x104513e0u));
  /* 104236e6 push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 104236eb call dword ptr [0x10454424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454424))), 0x104236f1u);
  /* 104236f1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104236f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104236f6 call 0x104246d0 */
  push32(0x104236fbu); f_104246d0();
  /* 104236fb mov esi, esp */
  ESI = (ESP);
  /* 104236fd push 0 */
  push32((uint32_t)(0x0u));
  /* 104236ff push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 10423704 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042370au);
  /* 1042370a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042370d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042370f call 0x104246d0 */
  push32(0x10423714u); f_104246d0();
  /* 10423714 mov esi, esp */
  ESI = (ESP);
  /* 10423716 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423718 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042371a push 0x10451488 */
  push32((uint32_t)(0x10451488u));
  /* 1042371f push 1 */
  push32((uint32_t)(0x1u));
  /* 10423721 call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10423727u);
  /* 10423727 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042372a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042372c call 0x104246d0 */
  push32(0x10423731u); f_104246d0();
  /* 10423731 mov esi, esp */
  ESI = (ESP);
  /* 10423733 push 2 */
  push32((uint32_t)(0x2u));
  /* 10423735 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423737 push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 1042373c push 1 */
  push32((uint32_t)(0x1u));
  /* 1042373e call dword ptr [0x10454420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454420))), 0x10423744u);
  /* 10423744 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423749 call 0x104246d0 */
  push32(0x1042374eu); f_104246d0();
L_1042374e:;
  /* 1042374e mov esi, esp */
  ESI = (ESP);
  /* 10423750 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10423752 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423758u);
  /* 10423758 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042375b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042375d call 0x104246d0 */
  push32(0x10423762u); f_104246d0();
  /* 10423762 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423767 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423769 jne 0x104237ce */
  if (!C.zf) goto L_104237ce;
  /* 1042376b mov esi, esp */
  ESI = (ESP);
  /* 1042376d push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 10423772 push 0x10451490 */
  push32((uint32_t)(0x10451490u));
  /* 10423777 call dword ptr [0x10454418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454418))), 0x1042377du);
  /* 1042377d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423780 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423782 call 0x104246d0 */
  push32(0x10423787u); f_104246d0();
  /* 10423787 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423789 jle 0x104237ce */
  if ((C.zf||C.sf!=C.of)) goto L_104237ce;
  /* 1042378b mov esi, esp */
  ESI = (ESP);
  /* 1042378d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042378f push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 10423794 call dword ptr [0x1045441c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045441c))), 0x1042379au);
  /* 1042379a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042379d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042379f call 0x104246d0 */
  push32(0x104237a4u); f_104246d0();
  /* 104237a4 mov esi, esp */
  ESI = (ESP);
  /* 104237a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104237a8 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 104237aa call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x104237b0u);
  /* 104237b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104237b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104237b5 call 0x104246d0 */
  push32(0x104237bau); f_104246d0();
  /* 104237ba mov esi, esp */
  ESI = (ESP);
  /* 104237bc push 1 */
  push32((uint32_t)(0x1u));
  /* 104237be call dword ptr [0x1045442c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045442c))), 0x104237c4u);
  /* 104237c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104237c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104237c9 call 0x104246d0 */
  push32(0x104237ceu); f_104246d0();
L_104237ce:;
  /* 104237ce mov esi, esp */
  ESI = (ESP);
  /* 104237d0 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 104237d2 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104237d8u);
  /* 104237d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104237db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104237dd call 0x104246d0 */
  push32(0x104237e2u); f_104246d0();
  /* 104237e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104237e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104237e9 jne 0x10423861 */
  if (!C.zf) goto L_10423861;
  /* 104237eb mov esi, esp */
  ESI = (ESP);
  /* 104237ed push 0x17 */
  push32((uint32_t)(0x17u));
  /* 104237ef call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104237f5u);
  /* 104237f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104237f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104237fa call 0x104246d0 */
  push32(0x104237ffu); f_104246d0();
  /* 104237ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423806 je 0x10423861 */
  if (C.zf) goto L_10423861;
  /* 10423808 push 0x104514d0 */
  push32((uint32_t)(0x104514d0u));
  /* 1042380d call 0x10421005 */
  push32(0x10423812u); f_10421005();
  /* 10423812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423815 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423817 jne 0x10423861 */
  if (!C.zf) goto L_10423861;
  /* 10423819 mov esi, esp */
  ESI = (ESP);
  /* 1042381b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042381d push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1042381f call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423825u);
  /* 10423825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042382a call 0x104246d0 */
  push32(0x1042382fu); f_104246d0();
  /* 1042382f mov esi, esp */
  ESI = (ESP);
  /* 10423831 push 0x1044c17c */
  push32((uint32_t)(0x1044c17cu));
  /* 10423836 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042383cu);
  /* 1042383c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042383f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423841 call 0x104246d0 */
  push32(0x10423846u); f_104246d0();
  /* 10423846 mov esi, esp */
  ESI = (ESP);
  /* 10423848 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1042384d push 1 */
  push32((uint32_t)(0x1u));
  /* 1042384f push 0 */
  push32((uint32_t)(0x0u));
  /* 10423851 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423857u);
  /* 10423857 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042385a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042385c call 0x104246d0 */
  push32(0x10423861u); f_104246d0();
L_10423861:;
  /* 10423861 mov esi, esp */
  ESI = (ESP);
  /* 10423863 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10423865 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042386bu);
  /* 1042386b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042386e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423870 call 0x104246d0 */
  push32(0x10423875u); f_104246d0();
  /* 10423875 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042387a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042387c je 0x104238cc */
  if (C.zf) goto L_104238cc;
  /* 1042387e push 0x10451410 */
  push32((uint32_t)(0x10451410u));
  /* 10423883 call 0x10421005 */
  push32(0x10423888u); f_10421005();
  /* 10423888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042388b cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042388e jge 0x104238cc */
  if ((C.sf==C.of)) goto L_104238cc;
  /* 10423890 mov esi, esp */
  ESI = (ESP);
  /* 10423892 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423894 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10423896 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042389cu);
  /* 1042389c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042389f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104238a1 call 0x104246d0 */
  push32(0x104238a6u); f_104246d0();
  /* 104238a6 mov esi, esp */
  ESI = (ESP);
  /* 104238a8 push 0x1044c170 */
  push32((uint32_t)(0x1044c170u));
  /* 104238ad call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x104238b3u);
  /* 104238b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104238b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104238b8 call 0x104246d0 */
  push32(0x104238bdu); f_104246d0();
  /* 104238bd mov esi, esp */
  ESI = (ESP);
  /* 104238bf call dword ptr [0x10454440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454440))), 0x104238c5u);
  /* 104238c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104238c7 call 0x104246d0 */
  push32(0x104238ccu); f_104246d0();
L_104238cc:;
  /* 104238cc mov esi, esp */
  ESI = (ESP);
  /* 104238ce push 0x10 */
  push32((uint32_t)(0x10u));
  /* 104238d0 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104238d6u);
  /* 104238d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104238d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104238db call 0x104246d0 */
  push32(0x104238e0u); f_104246d0();
  /* 104238e0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104238e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104238e7 je 0x104239fc */
  if (C.zf) goto L_104239fc;
  /* 104238ed mov esi, esp */
  ESI = (ESP);
  /* 104238ef push 5 */
  push32((uint32_t)(0x5u));
  /* 104238f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104238f3 call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x104238f9u);
  /* 104238f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104238fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104238fe call 0x104246d0 */
  push32(0x10423903u); f_104246d0();
  /* 10423903 cmp eax, 0x23 */
  { uint32_t _a=(EAX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423906 jl 0x10423927 */
  if ((C.sf!=C.of)) goto L_10423927;
  /* 10423908 mov esi, esp */
  ESI = (ESP);
  /* 1042390a push 4 */
  push32((uint32_t)(0x4u));
  /* 1042390c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042390e call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x10423914u);
  /* 10423914 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423917 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423919 call 0x104246d0 */
  push32(0x1042391eu); f_104246d0();
  /* 1042391e cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423921 jge 0x104239fc */
  if ((C.sf==C.of)) goto L_104239fc;
L_10423927:;
  /* 10423927 mov esi, esp */
  ESI = (ESP);
  /* 10423929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042392b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1042392d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423933u);
  /* 10423933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423936 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423938 call 0x104246d0 */
  push32(0x1042393du); f_104246d0();
  /* 1042393d mov esi, esp */
  ESI = (ESP);
  /* 1042393f push 0x1044c164 */
  push32((uint32_t)(0x1044c164u));
  /* 10423944 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x1042394au);
  /* 1042394a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042394d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042394f call 0x104246d0 */
  push32(0x10423954u); f_104246d0();
  /* 10423954 mov esi, esp */
  ESI = (ESP);
  /* 10423956 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10423958 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x1042395eu);
  /* 1042395e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423963 call 0x104246d0 */
  push32(0x10423968u); f_104246d0();
  /* 10423968 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042396d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042396f je 0x104239b9 */
  if (C.zf) goto L_104239b9;
  /* 10423971 mov esi, esp */
  ESI = (ESP);
  /* 10423973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423975 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10423977 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x1042397du);
  /* 1042397d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423980 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423982 call 0x104246d0 */
  push32(0x10423987u); f_104246d0();
  /* 10423987 mov esi, esp */
  ESI = (ESP);
  /* 10423989 push 0x1044c158 */
  push32((uint32_t)(0x1044c158u));
  /* 1042398e call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423994u);
  /* 10423994 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423997 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423999 call 0x104246d0 */
  push32(0x1042399eu); f_104246d0();
  /* 1042399e mov esi, esp */
  ESI = (ESP);
  /* 104239a0 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 104239a5 push 7 */
  push32((uint32_t)(0x7u));
  /* 104239a7 call dword ptr [0x1045444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045444c))), 0x104239adu);
  /* 104239ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104239b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104239b2 call 0x104246d0 */
  push32(0x104239b7u); f_104246d0();
  /* 104239b7 jmp 0x104239fc */
  goto L_104239fc;
L_104239b9:;
  /* 104239b9 mov esi, esp */
  ESI = (ESP);
  /* 104239bb push 0x47 */
  push32((uint32_t)(0x47u));
  /* 104239bd call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x104239c3u);
  /* 104239c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104239c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104239c8 call 0x104246d0 */
  push32(0x104239cdu); f_104246d0();
  /* 104239cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104239d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104239d4 jne 0x104239fc */
  if (!C.zf) goto L_104239fc;
  /* 104239d6 mov esi, esp */
  ESI = (ESP);
  /* 104239d8 push 0x1044c14c */
  push32((uint32_t)(0x1044c14cu));
  /* 104239dd call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x104239e3u);
  /* 104239e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104239e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104239e8 call 0x104246d0 */
  push32(0x104239edu); f_104246d0();
  /* 104239ed mov esi, esp */
  ESI = (ESP);
  /* 104239ef call dword ptr [0x10454440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454440))), 0x104239f5u);
  /* 104239f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104239f7 call 0x104246d0 */
  push32(0x104239fcu); f_104246d0();
L_104239fc:;
  /* 104239fc mov esi, esp */
  ESI = (ESP);
  /* 104239fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10423a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423a02 call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x10423a08u);
  /* 10423a08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a0d call 0x104246d0 */
  push32(0x10423a12u); f_104246d0();
  /* 10423a12 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a15 jle 0x10423a48 */
  if ((C.zf||C.sf!=C.of)) goto L_10423a48;
  /* 10423a17 mov esi, esp */
  ESI = (ESP);
  /* 10423a19 push 4 */
  push32((uint32_t)(0x4u));
  /* 10423a1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10423a1d call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x10423a23u);
  /* 10423a23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a28 call 0x104246d0 */
  push32(0x10423a2du); f_104246d0();
  /* 10423a2d cmp eax, 0x1a */
  { uint32_t _a=(EAX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a30 jle 0x10423a48 */
  if ((C.zf||C.sf!=C.of)) goto L_10423a48;
  /* 10423a32 mov esi, esp */
  ESI = (ESP);
  /* 10423a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10423a36 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10423a38 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423a3eu);
  /* 10423a3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a43 call 0x104246d0 */
  push32(0x10423a48u); f_104246d0();
L_10423a48:;
  /* 10423a48 mov esi, esp */
  ESI = (ESP);
  /* 10423a4a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10423a4c call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423a52u);
  /* 10423a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a57 call 0x104246d0 */
  push32(0x10423a5cu); f_104246d0();
  /* 10423a5c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423a61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423a63 je 0x10423b5c */
  if (C.zf) goto L_10423b5c;
  /* 10423a69 mov esi, esp */
  ESI = (ESP);
  /* 10423a6b push 1 */
  push32((uint32_t)(0x1u));
  /* 10423a6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10423a6f call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x10423a75u);
  /* 10423a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a7a call 0x104246d0 */
  push32(0x10423a7fu); f_104246d0();
  /* 10423a7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423a81 jne 0x10423b5c */
  if (!C.zf) goto L_10423b5c;
  /* 10423a87 mov esi, esp */
  ESI = (ESP);
  /* 10423a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423a8b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10423a8d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423a93u);
  /* 10423a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423a96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423a98 call 0x104246d0 */
  push32(0x10423a9du); f_104246d0();
  /* 10423a9d mov esi, esp */
  ESI = (ESP);
  /* 10423a9f push 0x1044c140 */
  push32((uint32_t)(0x1044c140u));
  /* 10423aa4 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423aaau);
  /* 10423aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423aad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423aaf call 0x104246d0 */
  push32(0x10423ab4u); f_104246d0();
  /* 10423ab4 mov esi, esp */
  ESI = (ESP);
  /* 10423ab6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10423ab8 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423abeu);
  /* 10423abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423ac3 call 0x104246d0 */
  push32(0x10423ac8u); f_104246d0();
  /* 10423ac8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423acf je 0x10423b19 */
  if (C.zf) goto L_10423b19;
  /* 10423ad1 mov esi, esp */
  ESI = (ESP);
  /* 10423ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423ad5 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10423ad7 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423addu);
  /* 10423add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423ae2 call 0x104246d0 */
  push32(0x10423ae7u); f_104246d0();
  /* 10423ae7 mov esi, esp */
  ESI = (ESP);
  /* 10423ae9 push 0x1044c158 */
  push32((uint32_t)(0x1044c158u));
  /* 10423aee call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423af4u);
  /* 10423af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423af9 call 0x104246d0 */
  push32(0x10423afeu); f_104246d0();
  /* 10423afe mov esi, esp */
  ESI = (ESP);
  /* 10423b00 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10423b05 push 7 */
  push32((uint32_t)(0x7u));
  /* 10423b07 call dword ptr [0x1045444c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045444c))), 0x10423b0du);
  /* 10423b0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b12 call 0x104246d0 */
  push32(0x10423b17u); f_104246d0();
  /* 10423b17 jmp 0x10423b5c */
  goto L_10423b5c;
L_10423b19:;
  /* 10423b19 mov esi, esp */
  ESI = (ESP);
  /* 10423b1b push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10423b1d call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423b23u);
  /* 10423b23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b28 call 0x104246d0 */
  push32(0x10423b2du); f_104246d0();
  /* 10423b2d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423b34 jne 0x10423b5c */
  if (!C.zf) goto L_10423b5c;
  /* 10423b36 mov esi, esp */
  ESI = (ESP);
  /* 10423b38 push 0x1044c14c */
  push32((uint32_t)(0x1044c14cu));
  /* 10423b3d call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423b43u);
  /* 10423b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b48 call 0x104246d0 */
  push32(0x10423b4du); f_104246d0();
  /* 10423b4d mov esi, esp */
  ESI = (ESP);
  /* 10423b4f call dword ptr [0x10454440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454440))), 0x10423b55u);
  /* 10423b55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b57 call 0x104246d0 */
  push32(0x10423b5cu); f_104246d0();
L_10423b5c:;
  /* 10423b5c mov esi, esp */
  ESI = (ESP);
  /* 10423b5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10423b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423b62 call dword ptr [0x1045443c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045443c))), 0x10423b68u);
  /* 10423b68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b6d call 0x104246d0 */
  push32(0x10423b72u); f_104246d0();
  /* 10423b72 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b75 jle 0x10423b8d */
  if ((C.zf||C.sf!=C.of)) goto L_10423b8d;
  /* 10423b77 mov esi, esp */
  ESI = (ESP);
  /* 10423b79 push 1 */
  push32((uint32_t)(0x1u));
  /* 10423b7b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10423b7d call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423b83u);
  /* 10423b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b88 call 0x104246d0 */
  push32(0x10423b8du); f_104246d0();
L_10423b8d:;
  /* 10423b8d mov esi, esp */
  ESI = (ESP);
  /* 10423b8f push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10423b91 call dword ptr [0x104543f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543f8))), 0x10423b97u);
  /* 10423b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423b9c call 0x104246d0 */
  push32(0x10423ba1u); f_104246d0();
  /* 10423ba1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423ba8 je 0x10423c49 */
  if (C.zf) goto L_10423c49;
  /* 10423bae mov esi, esp */
  ESI = (ESP);
  /* 10423bb0 push 7 */
  push32((uint32_t)(0x7u));
  /* 10423bb2 call dword ptr [0x10454450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454450))), 0x10423bb8u);
  /* 10423bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423bbd call 0x104246d0 */
  push32(0x10423bc2u); f_104246d0();
  /* 10423bc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10423bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10423bc9 je 0x10423c49 */
  if (C.zf) goto L_10423c49;
  /* 10423bcb mov esi, esp */
  ESI = (ESP);
  /* 10423bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10423bcf push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10423bd1 call dword ptr [0x10454404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454404))), 0x10423bd7u);
  /* 10423bd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423bda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423bdc call 0x104246d0 */
  push32(0x10423be1u); f_104246d0();
  /* 10423be1 mov esi, esp */
  ESI = (ESP);
  /* 10423be3 push 0x1044c134 */
  push32((uint32_t)(0x1044c134u));
  /* 10423be8 call dword ptr [0x10454414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454414))), 0x10423beeu);
  /* 10423bee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423bf1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423bf3 call 0x104246d0 */
  push32(0x10423bf8u); f_104246d0();
  /* 10423bf8 mov esi, esp */
  ESI = (ESP);
  /* 10423bfa push 0x1b58 */
  push32((uint32_t)(0x1b58u));
  /* 10423bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10423c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423c03 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423c09u);
  /* 10423c09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423c0e call 0x104246d0 */
  push32(0x10423c13u); f_104246d0();
  /* 10423c13 mov esi, esp */
  ESI = (ESP);
  /* 10423c15 push 0x1f40 */
  push32((uint32_t)(0x1f40u));
  /* 10423c1a push 5 */
  push32((uint32_t)(0x5u));
  /* 10423c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10423c1e call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423c24u);
  /* 10423c24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423c29 call 0x104246d0 */
  push32(0x10423c2eu); f_104246d0();
  /* 10423c2e mov esi, esp */
  ESI = (ESP);
  /* 10423c30 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10423c35 push 4 */
  push32((uint32_t)(0x4u));
  /* 10423c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10423c39 call dword ptr [0x10454428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454428))), 0x10423c3fu);
  /* 10423c3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423c44 call 0x104246d0 */
  push32(0x10423c49u); f_104246d0();
L_10423c49:;
  /* 10423c49 pop edi */
  EDI = (pop32());
  /* 10423c4a pop esi */
  ESI = (pop32());
  /* 10423c4b pop ebx */
  EBX = (pop32());
  /* 10423c4c add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10423c4f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10423c51 call 0x104246d0 */
  push32(0x10423c56u); f_104246d0();
  /* 10423c56 mov esp, ebp */
  ESP = (EBP);
  /* 10423c58 pop ebp */
  EBP = (pop32());
  /* 10423c59 ret  */
  ESPCHK(0x10421680u, _esp0);
  ESP += 4; return;
}

/* FUN_100045d0 @ 0x104245d0 (63 bytes, 26 insns) */
void f_104245d0(void) {
  FTRACE(0x104245d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104245d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104245d1 mov ebp, esp */
  EBP = (ESP);
  /* 104245d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104245d6 push ebx */
  push32((uint32_t)(EBX));
  /* 104245d7 push esi */
  push32((uint32_t)(ESI));
  /* 104245d8 push edi */
  push32((uint32_t)(EDI));
  /* 104245d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104245dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104245e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104245e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104245e8 mov esi, esp */
  ESI = (ESP);
  /* 104245ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104245ed push eax */
  push32((uint32_t)(EAX));
  /* 104245ee call dword ptr [0x104543fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104543fc))), 0x104245f4u);
  /* 104245f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104245f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104245f9 call 0x104246d0 */
  push32(0x104245feu); f_104246d0();
  /* 104245fe pop edi */
  EDI = (pop32());
  /* 104245ff pop esi */
  ESI = (pop32());
  /* 10424600 pop ebx */
  EBX = (pop32());
  /* 10424601 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424604 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424606 call 0x104246d0 */
  push32(0x1042460bu); f_104246d0();
  /* 1042460b mov esp, ebp */
  ESP = (EBP);
  /* 1042460d pop ebp */
  EBP = (pop32());
  /* 1042460e ret  */
  ESPCHK(0x104245d0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x104246d0 (56 bytes, 28 insns) */
void f_104246d0(void) {
  FTRACE(0x104246d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104246d0 jne 0x104246d3 */
  if (!C.zf) goto L_104246d3;
  /* 104246d2 ret  */
  ESPCHK(0x104246d0u, _esp0);
  ESP += 4; return;
L_104246d3:;
  /* 104246d3 push ebp */
  push32((uint32_t)(EBP));
  /* 104246d4 mov ebp, esp */
  EBP = (ESP);
  /* 104246d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104246d9 push eax */
  push32((uint32_t)(EAX));
  /* 104246da push edx */
  push32((uint32_t)(EDX));
  /* 104246db push ebx */
  push32((uint32_t)(EBX));
  /* 104246dc push esi */
  push32((uint32_t)(ESI));
  /* 104246dd push edi */
  push32((uint32_t)(EDI));
  /* 104246de push 0x1044c298 */
  push32((uint32_t)(0x1044c298u));
  /* 104246e3 push 0x1044c294 */
  push32((uint32_t)(0x1044c294u));
  /* 104246e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 104246ea push 0x1044c284 */
  push32((uint32_t)(0x1044c284u));
  /* 104246ef push 1 */
  push32((uint32_t)(0x1u));
  /* 104246f1 call 0x10424aa0 */
  push32(0x104246f6u); f_10424aa0();
  /* 104246f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104246f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104246fc jne 0x104246ff */
  if (!C.zf) goto L_104246ff;
  /* 104246fe int3  */
  x86_unimpl("int3 @ 0x104246fe");
L_104246ff:;
  /* 104246ff pop edi */
  EDI = (pop32());
  /* 10424700 pop esi */
  ESI = (pop32());
  /* 10424701 pop ebx */
  EBX = (pop32());
  /* 10424702 pop edx */
  EDX = (pop32());
  /* 10424703 pop eax */
  EAX = (pop32());
  /* 10424704 mov esp, ebp */
  ESP = (EBP);
  /* 10424706 pop ebp */
  EBP = (pop32());
  /* 10424707 ret  */
  ESPCHK(0x104246d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004710 @ 0x10424710 (313 bytes, 78 insns) */
void f_10424710(void) {
  FTRACE(0x10424710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424710 push ebp */
  push32((uint32_t)(EBP));
  /* 10424711 mov ebp, esp */
  EBP = (ESP);
  /* 10424713 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424717 jne 0x104247d7 */
  if (!C.zf) goto L_104247d7;
  /* 1042471d call dword ptr [0x104542ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542ec))), 0x10424723u);
  /* 10424723 mov dword ptr [0x10451578], eax */
  w32((uint32_t)(0x10451578), (EAX));
  /* 10424728 push 1 */
  push32((uint32_t)(0x1u));
  /* 1042472a call 0x104281d0 */
  push32(0x1042472fu); f_104281d0();
  /* 1042472f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424734 jne 0x1042473d */
  if (!C.zf) goto L_1042473d;
  /* 10424736 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424738 jmp 0x10424845 */
  goto L_10424845;
L_1042473d:;
  /* 1042473d mov eax, dword ptr [0x10451578] */
  EAX = (r32((uint32_t)(0x10451578)));
  /* 10424742 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10424745 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042474a mov dword ptr [0x10451584], eax */
  w32((uint32_t)(0x10451584), (EAX));
  /* 1042474f mov ecx, dword ptr [0x10451578] */
  ECX = (r32((uint32_t)(0x10451578)));
  /* 10424755 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042475b mov dword ptr [0x10451580], ecx */
  w32((uint32_t)(0x10451580), (ECX));
  /* 10424761 mov edx, dword ptr [0x10451580] */
  EDX = (r32((uint32_t)(0x10451580)));
  /* 10424767 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1042476a add edx, dword ptr [0x10451584] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10451584))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10424770 mov dword ptr [0x1045157c], edx */
  w32((uint32_t)(0x1045157c), (EDX));
  /* 10424776 mov eax, dword ptr [0x10451578] */
  EAX = (r32((uint32_t)(0x10451578)));
  /* 1042477b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1042477e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10424783 mov dword ptr [0x10451578], eax */
  w32((uint32_t)(0x10451578), (EAX));
  /* 10424788 call 0x10425340 */
  push32(0x1042478du); f_10425340();
  /* 1042478d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042478f jne 0x1042479d */
  if (!C.zf) goto L_1042479d;
  /* 10424791 call 0x10428220 */
  push32(0x10424796u); f_10428220();
  /* 10424796 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424798 jmp 0x10424845 */
  goto L_10424845;
L_1042479d:;
  /* 1042479d call dword ptr [0x104542e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e8))), 0x104247a3u);
  /* 104247a3 mov dword ptr [0x104530cc], eax */
  w32((uint32_t)(0x104530cc), (EAX));
  /* 104247a8 call 0x10427fb0 */
  push32(0x104247adu); f_10427fb0();
  /* 104247ad mov dword ptr [0x10451560], eax */
  w32((uint32_t)(0x10451560), (EAX));
  /* 104247b2 call 0x104255f0 */
  push32(0x104247b7u); f_104255f0();
  /* 104247b7 call 0x10427aa0 */
  push32(0x104247bcu); f_10427aa0();
  /* 104247bc call 0x10427950 */
  push32(0x104247c1u); f_10427950();
  /* 104247c1 call 0x10425140 */
  push32(0x104247c6u); f_10425140();
  /* 104247c6 mov ecx, dword ptr [0x1045155c] */
  ECX = (r32((uint32_t)(0x1045155c)));
  /* 104247cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104247cf mov dword ptr [0x1045155c], ecx */
  w32((uint32_t)(0x1045155c), (ECX));
  /* 104247d5 jmp 0x10424840 */
  goto L_10424840;
L_104247d7:;
  /* 104247d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104247db jne 0x10424830 */
  if (!C.zf) goto L_10424830;
  /* 104247dd cmp dword ptr [0x1045155c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045155c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104247e4 jle 0x1042482a */
  if ((C.zf||C.sf!=C.of)) goto L_1042482a;
  /* 104247e6 mov edx, dword ptr [0x1045155c] */
  EDX = (r32((uint32_t)(0x1045155c)));
  /* 104247ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104247ef mov dword ptr [0x1045155c], edx */
  w32((uint32_t)(0x1045155c), (EDX));
  /* 104247f5 cmp dword ptr [0x104515b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104515b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104247fc jne 0x10424803 */
  if (!C.zf) goto L_10424803;
  /* 104247fe call 0x104251c0 */
  push32(0x10424803u); f_104251c0();
L_10424803:;
  /* 10424803 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10424805 call 0x10426ef0 */
  push32(0x1042480au); f_10426ef0();
  /* 1042480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042480d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10424810 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424812 je 0x10424819 */
  if (C.zf) goto L_10424819;
  /* 10424814 call 0x10427800 */
  push32(0x10424819u); f_10427800();
L_10424819:;
  /* 10424819 call 0x10425920 */
  push32(0x1042481eu); f_10425920();
  /* 1042481e call 0x104253d0 */
  push32(0x10424823u); f_104253d0();
  /* 10424823 call 0x10428220 */
  push32(0x10424828u); f_10428220();
  /* 10424828 jmp 0x1042482e */
  goto L_1042482e;
L_1042482a:;
  /* 1042482a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042482c jmp 0x10424845 */
  goto L_10424845;
L_1042482e:;
  /* 1042482e jmp 0x10424840 */
  goto L_10424840;
L_10424830:;
  /* 10424830 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424834 jne 0x10424840 */
  if (!C.zf) goto L_10424840;
  /* 10424836 push 0 */
  push32((uint32_t)(0x0u));
  /* 10424838 call 0x104254c0 */
  push32(0x1042483du); f_104254c0();
  /* 1042483d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424840:;
  /* 10424840 mov eax, 1 */
  EAX = (0x1u);
L_10424845:;
  /* 10424845 pop ebp */
  EBP = (pop32());
  /* 10424846 ret 0xc */
  ESPCHK(0x10424710u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10424850 (243 bytes, 86 insns) */
void f_10424850(void) {
  FTRACE(0x10424850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424850 push ebp */
  push32((uint32_t)(EBP));
  /* 10424851 mov ebp, esp */
  EBP = (ESP);
  /* 10424853 push ecx */
  push32((uint32_t)(ECX));
  /* 10424854 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1042485b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042485f jne 0x10424871 */
  if (!C.zf) goto L_10424871;
  /* 10424861 cmp dword ptr [0x1045155c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1045155c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424868 jne 0x10424871 */
  if (!C.zf) goto L_10424871;
  /* 1042486a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042486c jmp 0x1042493d */
  goto L_1042493d;
L_10424871:;
  /* 10424871 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424875 je 0x1042487d */
  if (C.zf) goto L_1042487d;
  /* 10424877 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042487b jne 0x104248bf */
  if (!C.zf) goto L_104248bf;
L_1042487d:;
  /* 1042487d cmp dword ptr [0x104530dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424884 je 0x1042489b */
  if (C.zf) goto L_1042489b;
  /* 10424886 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424889 push eax */
  push32((uint32_t)(EAX));
  /* 1042488a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042488d push ecx */
  push32((uint32_t)(ECX));
  /* 1042488e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424891 push edx */
  push32((uint32_t)(EDX));
  /* 10424892 call dword ptr [0x104530dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104530dc))), 0x10424898u);
  /* 10424898 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042489b:;
  /* 1042489b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042489f je 0x104248b5 */
  if (C.zf) goto L_104248b5;
  /* 104248a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104248a4 push eax */
  push32((uint32_t)(EAX));
  /* 104248a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104248a8 push ecx */
  push32((uint32_t)(ECX));
  /* 104248a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104248ac push edx */
  push32((uint32_t)(EDX));
  /* 104248ad call 0x10424710 */
  push32(0x104248b2u); f_10424710();
  /* 104248b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104248b5:;
  /* 104248b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104248b9 jne 0x104248bf */
  if (!C.zf) goto L_104248bf;
  /* 104248bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104248bd jmp 0x1042493d */
  goto L_1042493d;
L_104248bf:;
  /* 104248bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104248c2 push eax */
  push32((uint32_t)(EAX));
  /* 104248c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104248c6 push ecx */
  push32((uint32_t)(ECX));
  /* 104248c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104248ca push edx */
  push32((uint32_t)(EDX));
  /* 104248cb call 0x1042100f */
  push32(0x104248d0u); f_1042100f();
  /* 104248d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104248d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104248d7 jne 0x104248ee */
  if (!C.zf) goto L_104248ee;
  /* 104248d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104248dd jne 0x104248ee */
  if (!C.zf) goto L_104248ee;
  /* 104248df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104248e2 push eax */
  push32((uint32_t)(EAX));
  /* 104248e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104248e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104248e8 push ecx */
  push32((uint32_t)(ECX));
  /* 104248e9 call 0x10424710 */
  push32(0x104248eeu); f_10424710();
L_104248ee:;
  /* 104248ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104248f2 je 0x104248fa */
  if (C.zf) goto L_104248fa;
  /* 104248f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104248f8 jne 0x1042493a */
  if (!C.zf) goto L_1042493a;
L_104248fa:;
  /* 104248fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104248fd push edx */
  push32((uint32_t)(EDX));
  /* 104248fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424901 push eax */
  push32((uint32_t)(EAX));
  /* 10424902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424905 push ecx */
  push32((uint32_t)(ECX));
  /* 10424906 call 0x10424710 */
  push32(0x1042490bu); f_10424710();
  /* 1042490b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042490d jne 0x10424916 */
  if (!C.zf) goto L_10424916;
  /* 1042490f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10424916:;
  /* 10424916 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042491a je 0x1042493a */
  if (C.zf) goto L_1042493a;
  /* 1042491c cmp dword ptr [0x104530dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424923 je 0x1042493a */
  if (C.zf) goto L_1042493a;
  /* 10424925 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424928 push edx */
  push32((uint32_t)(EDX));
  /* 10424929 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042492c push eax */
  push32((uint32_t)(EAX));
  /* 1042492d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424930 push ecx */
  push32((uint32_t)(ECX));
  /* 10424931 call dword ptr [0x104530dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104530dc))), 0x10424937u);
  /* 10424937 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042493a:;
  /* 1042493a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1042493d:;
  /* 1042493d mov esp, ebp */
  ESP = (EBP);
  /* 1042493f pop ebp */
  EBP = (pop32());
  /* 10424940 ret 0xc */
  ESPCHK(0x10424850u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10424950 (58 bytes, 18 insns) */
void f_10424950(void) {
  FTRACE(0x10424950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424950 push ebp */
  push32((uint32_t)(EBP));
  /* 10424951 mov ebp, esp */
  EBP = (ESP);
  /* 10424953 cmp dword ptr [0x10451568], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042495a je 0x1042496e */
  if (C.zf) goto L_1042496e;
  /* 1042495c cmp dword ptr [0x10451568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424963 jne 0x10424973 */
  if (!C.zf) goto L_10424973;
  /* 10424965 cmp dword ptr [0x1045156c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045156c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042496c jne 0x10424973 */
  if (!C.zf) goto L_10424973;
L_1042496e:;
  /* 1042496e call 0x104282c0 */
  push32(0x10424973u); f_104282c0();
L_10424973:;
  /* 10424973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424976 push eax */
  push32((uint32_t)(EAX));
  /* 10424977 call 0x10428310 */
  push32(0x1042497cu); f_10428310();
  /* 1042497c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042497f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10424984 call dword ptr [0x1044fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1044fa30))), 0x1042498au);
  /* 1042498a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042498d pop ebp */
  EBP = (pop32());
  /* 1042498e ret  */
  ESPCHK(0x10424950u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x10424990 (11 bytes, 5 insns) */
void f_10424990(void) {
  FTRACE(0x10424990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424990 push ebp */
  push32((uint32_t)(EBP));
  /* 10424991 mov ebp, esp */
  EBP = (ESP);
  /* 10424993 call dword ptr [0x104542f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f0))), 0x10424999u);
  /* 10424999 pop ebp */
  EBP = (pop32());
  /* 1042499a ret  */
  ESPCHK(0x10424990u, _esp0);
  ESP += 4; return;
}

/* FUN_100049a0 @ 0x104249a0 (87 bytes, 30 insns) */
void f_104249a0(void) {
  FTRACE(0x104249a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104249a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104249a1 mov ebp, esp */
  EBP = (ESP);
  /* 104249a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104249a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104249a8 jl 0x104249b0 */
  if ((C.sf!=C.of)) goto L_104249b0;
  /* 104249aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104249ae jl 0x104249b5 */
  if ((C.sf!=C.of)) goto L_104249b5;
L_104249b0:;
  /* 104249b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104249b3 jmp 0x104249f3 */
  goto L_104249f3;
L_104249b5:;
  /* 104249b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104249b9 jne 0x104249c7 */
  if (!C.zf) goto L_104249c7;
  /* 104249bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104249be mov eax, dword ptr [eax*4 + 0x1044fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1044fa38)));
  /* 104249c5 jmp 0x104249f3 */
  goto L_104249f3;
L_104249c7:;
  /* 104249c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104249ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 104249cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104249cf je 0x104249d6 */
  if (C.zf) goto L_104249d6;
  /* 104249d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104249d4 jmp 0x104249f3 */
  goto L_104249f3;
L_104249d6:;
  /* 104249d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104249d9 mov eax, dword ptr [edx*4 + 0x1044fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1044fa38)));
  /* 104249e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104249e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104249e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104249e9 mov dword ptr [ecx*4 + 0x1044fa38], edx */
  w32((uint32_t)(ECX*4 + 0x1044fa38), (EDX));
  /* 104249f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104249f3:;
  /* 104249f3 mov esp, ebp */
  ESP = (EBP);
  /* 104249f5 pop ebp */
  EBP = (pop32());
  /* 104249f6 ret  */
  ESPCHK(0x104249a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10424a00 (126 bytes, 38 insns) */
void f_10424a00(void) {
  FTRACE(0x10424a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10424a01 mov ebp, esp */
  EBP = (ESP);
  /* 10424a03 push ecx */
  push32((uint32_t)(ECX));
  /* 10424a04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424a08 jl 0x10424a10 */
  if ((C.sf!=C.of)) goto L_10424a10;
  /* 10424a0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424a0e jl 0x10424a17 */
  if ((C.sf!=C.of)) goto L_10424a17;
L_10424a10:;
  /* 10424a10 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10424a15 jmp 0x10424a7a */
  goto L_10424a7a;
L_10424a17:;
  /* 10424a17 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424a1b jne 0x10424a29 */
  if (!C.zf) goto L_10424a29;
  /* 10424a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a20 mov eax, dword ptr [eax*4 + 0x1044fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1044fa44)));
  /* 10424a27 jmp 0x10424a7a */
  goto L_10424a7a;
L_10424a29:;
  /* 10424a29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a2c mov edx, dword ptr [ecx*4 + 0x1044fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa44)));
  /* 10424a33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10424a36 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424a3a jne 0x10424a50 */
  if (!C.zf) goto L_10424a50;
  /* 10424a3c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10424a3e call dword ptr [0x104542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f4))), 0x10424a44u);
  /* 10424a44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a47 mov dword ptr [ecx*4 + 0x1044fa44], eax */
  w32((uint32_t)(ECX*4 + 0x1044fa44), (EAX));
  /* 10424a4e jmp 0x10424a77 */
  goto L_10424a77;
L_10424a50:;
  /* 10424a50 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424a54 jne 0x10424a6a */
  if (!C.zf) goto L_10424a6a;
  /* 10424a56 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10424a58 call dword ptr [0x104542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f4))), 0x10424a5eu);
  /* 10424a5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a61 mov dword ptr [edx*4 + 0x1044fa44], eax */
  w32((uint32_t)(EDX*4 + 0x1044fa44), (EAX));
  /* 10424a68 jmp 0x10424a77 */
  goto L_10424a77;
L_10424a6a:;
  /* 10424a6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424a70 mov dword ptr [eax*4 + 0x1044fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x1044fa44), (ECX));
L_10424a77:;
  /* 10424a77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10424a7a:;
  /* 10424a7a mov esp, ebp */
  ESP = (EBP);
  /* 10424a7c pop ebp */
  EBP = (pop32());
  /* 10424a7d ret  */
  ESPCHK(0x10424a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a80 @ 0x10424a80 (28 bytes, 11 insns) */
void f_10424a80(void) {
  FTRACE(0x10424a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10424a81 mov ebp, esp */
  EBP = (ESP);
  /* 10424a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10424a84 mov eax, dword ptr [0x104530c0] */
  EAX = (r32((uint32_t)(0x104530c0)));
  /* 10424a89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10424a8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424a8f mov dword ptr [0x104530c0], ecx */
  w32((uint32_t)(0x104530c0), (ECX));
  /* 10424a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10424a98 mov esp, ebp */
  ESP = (EBP);
  /* 10424a9a pop ebp */
  EBP = (pop32());
  /* 10424a9b ret  */
  ESPCHK(0x10424a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004aa0 @ 0x10424aa0 (912 bytes, 248 insns) */
void f_10424aa0(void) {
  FTRACE(0x10424aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10424aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10424aa3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10424aa8 call 0x10428b80 */
  push32(0x10424aadu); f_10428b80();
  /* 10424aad push edi */
  push32((uint32_t)(EDI));
  /* 10424aae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10424ab5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10424aba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424abc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10424ac2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10424ac4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10424ac6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10424ac7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10424ace mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10424ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424ad5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10424adb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10424add stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10424adf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10424ae0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10424ae7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10424aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424aee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10424af4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10424af6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10424af8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10424af9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10424afc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10424b02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b06 jl 0x10424b0e */
  if ((C.sf!=C.of)) goto L_10424b0e;
  /* 10424b08 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b0c jl 0x10424b16 */
  if ((C.sf!=C.of)) goto L_10424b16;
L_10424b0e:;
  /* 10424b0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10424b11 jmp 0x10424e2b */
  goto L_10424e2b;
L_10424b16:;
  /* 10424b16 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b1a jne 0x10424bc0 */
  if (!C.zf) goto L_10424bc0;
  /* 10424b20 push 0x1044fa34 */
  push32((uint32_t)(0x1044fa34u));
  /* 10424b25 call dword ptr [0x1045430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045430c))), 0x10424b2bu);
  /* 10424b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424b2d jle 0x10424bc0 */
  if ((C.zf||C.sf!=C.of)) goto L_10424bc0;
  /* 10424b33 cmp dword ptr [0x10451570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b3a jne 0x10424b7e */
  if (!C.zf) goto L_10424b7e;
  /* 10424b3c push 0x1044c440 */
  push32((uint32_t)(0x1044c440u));
  /* 10424b41 call dword ptr [0x10454308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454308))), 0x10424b47u);
  /* 10424b47 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10424b4d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b54 je 0x10424b76 */
  if (C.zf) goto L_10424b76;
  /* 10424b56 push 0x1044c434 */
  push32((uint32_t)(0x1044c434u));
  /* 10424b5b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10424b61 push ecx */
  push32((uint32_t)(ECX));
  /* 10424b62 call dword ptr [0x10454304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454304))), 0x10424b68u);
  /* 10424b68 mov dword ptr [0x10451570], eax */
  w32((uint32_t)(0x10451570), (EAX));
  /* 10424b6d cmp dword ptr [0x10451570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424b74 jne 0x10424b7e */
  if (!C.zf) goto L_10424b7e;
L_10424b76:;
  /* 10424b76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10424b79 jmp 0x10424e2b */
  goto L_10424e2b;
L_10424b7e:;
  /* 10424b7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424b81 push edx */
  push32((uint32_t)(EDX));
  /* 10424b82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424b85 push eax */
  push32((uint32_t)(EAX));
  /* 10424b86 push 0x1044c400 */
  push32((uint32_t)(0x1044c400u));
  /* 10424b8b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10424b91 push ecx */
  push32((uint32_t)(ECX));
  /* 10424b92 call dword ptr [0x10451570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10451570))), 0x10424b98u);
  /* 10424b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424b9b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10424ba1 push edx */
  push32((uint32_t)(EDX));
  /* 10424ba2 call dword ptr [0x10454300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454300))), 0x10424ba8u);
  /* 10424ba8 push 0x1044fa34 */
  push32((uint32_t)(0x1044fa34u));
  /* 10424bad call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10424bb3u);
  /* 10424bb3 call 0x10424990 */
  push32(0x10424bb8u); f_10424990();
  /* 10424bb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10424bbb jmp 0x10424e2b */
  goto L_10424e2b;
L_10424bc0:;
  /* 10424bc0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424bc4 je 0x10424bfd */
  if (C.zf) goto L_10424bfd;
  /* 10424bc6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10424bcc push eax */
  push32((uint32_t)(EAX));
  /* 10424bcd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10424bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10424bd1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10424bd6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10424bdc push edx */
  push32((uint32_t)(EDX));
  /* 10424bdd call 0x10428a80 */
  push32(0x10424be2u); f_10428a80();
  /* 10424be2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424be5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424be7 jge 0x10424bfd */
  if ((C.sf==C.of)) goto L_10424bfd;
  /* 10424be9 push 0x1044c3d4 */
  push32((uint32_t)(0x1044c3d4u));
  /* 10424bee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10424bf4 push eax */
  push32((uint32_t)(EAX));
  /* 10424bf5 call 0x10428990 */
  push32(0x10424bfau); f_10428990();
  /* 10424bfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424bfd:;
  /* 10424bfd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424c01 jne 0x10424c35 */
  if (!C.zf) goto L_10424c35;
  /* 10424c03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424c07 je 0x10424c15 */
  if (C.zf) goto L_10424c15;
  /* 10424c09 mov dword ptr [ebp - 0x3028], 0x1044c3c0 */
  w32((uint32_t)(EBP + -0x3028), (0x1044c3c0u));
  /* 10424c13 jmp 0x10424c1f */
  goto L_10424c1f;
L_10424c15:;
  /* 10424c15 mov dword ptr [ebp - 0x3028], 0x1044c3ac */
  w32((uint32_t)(EBP + -0x3028), (0x1044c3acu));
L_10424c1f:;
  /* 10424c1f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10424c25 push ecx */
  push32((uint32_t)(ECX));
  /* 10424c26 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10424c2c push edx */
  push32((uint32_t)(EDX));
  /* 10424c2d call 0x10428990 */
  push32(0x10424c32u); f_10428990();
  /* 10424c32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424c35:;
  /* 10424c35 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10424c3b push eax */
  push32((uint32_t)(EAX));
  /* 10424c3c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10424c42 push ecx */
  push32((uint32_t)(ECX));
  /* 10424c43 call 0x104289a0 */
  push32(0x10424c48u); f_104289a0();
  /* 10424c48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424c4b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424c4f jne 0x10424c8a */
  if (!C.zf) goto L_10424c8a;
  /* 10424c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424c54 mov eax, dword ptr [edx*4 + 0x1044fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1044fa38)));
  /* 10424c5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10424c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424c60 je 0x10424c76 */
  if (C.zf) goto L_10424c76;
  /* 10424c62 push 0x1044c3a8 */
  push32((uint32_t)(0x1044c3a8u));
  /* 10424c67 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10424c6d push ecx */
  push32((uint32_t)(ECX));
  /* 10424c6e call 0x104289a0 */
  push32(0x10424c73u); f_104289a0();
  /* 10424c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424c76:;
  /* 10424c76 push 0x1044c3a4 */
  push32((uint32_t)(0x1044c3a4u));
  /* 10424c7b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10424c81 push edx */
  push32((uint32_t)(EDX));
  /* 10424c82 call 0x104289a0 */
  push32(0x10424c87u); f_104289a0();
  /* 10424c87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424c8a:;
  /* 10424c8a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424c8e je 0x10424cd2 */
  if (C.zf) goto L_10424cd2;
  /* 10424c90 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10424c96 push eax */
  push32((uint32_t)(EAX));
  /* 10424c97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424c9a push ecx */
  push32((uint32_t)(ECX));
  /* 10424c9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424c9e push edx */
  push32((uint32_t)(EDX));
  /* 10424c9f push 0x1044c398 */
  push32((uint32_t)(0x1044c398u));
  /* 10424ca4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10424ca9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10424caf push eax */
  push32((uint32_t)(EAX));
  /* 10424cb0 call 0x10428890 */
  push32(0x10424cb5u); f_10428890();
  /* 10424cb5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424cba jge 0x10424cd0 */
  if ((C.sf==C.of)) goto L_10424cd0;
  /* 10424cbc push 0x1044c3d4 */
  push32((uint32_t)(0x1044c3d4u));
  /* 10424cc1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10424cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 10424cc8 call 0x10428990 */
  push32(0x10424ccdu); f_10428990();
  /* 10424ccd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424cd0:;
  /* 10424cd0 jmp 0x10424ce8 */
  goto L_10424ce8;
L_10424cd2:;
  /* 10424cd2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10424cd8 push edx */
  push32((uint32_t)(EDX));
  /* 10424cd9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10424cdf push eax */
  push32((uint32_t)(EAX));
  /* 10424ce0 call 0x10428990 */
  push32(0x10424ce5u); f_10428990();
  /* 10424ce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424ce8:;
  /* 10424ce8 cmp dword ptr [0x104530c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424cef je 0x10424d2c */
  if (C.zf) goto L_10424d2c;
  /* 10424cf1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10424cf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10424cf8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10424cfe push edx */
  push32((uint32_t)(EDX));
  /* 10424cff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d02 push eax */
  push32((uint32_t)(EAX));
  /* 10424d03 call dword ptr [0x104530c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104530c0))), 0x10424d09u);
  /* 10424d09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424d0e je 0x10424d2c */
  if (C.zf) goto L_10424d2c;
  /* 10424d10 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424d14 jne 0x10424d21 */
  if (!C.zf) goto L_10424d21;
  /* 10424d16 push 0x1044fa34 */
  push32((uint32_t)(0x1044fa34u));
  /* 10424d1b call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10424d21u);
L_10424d21:;
  /* 10424d21 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10424d27 jmp 0x10424e2b */
  goto L_10424e2b;
L_10424d2c:;
  /* 10424d2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d2f mov edx, dword ptr [ecx*4 + 0x1044fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa38)));
  /* 10424d36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10424d39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10424d3b je 0x10424d7b */
  if (C.zf) goto L_10424d7b;
  /* 10424d3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d40 cmp dword ptr [eax*4 + 0x1044fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1044fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424d48 je 0x10424d7b */
  if (C.zf) goto L_10424d7b;
  /* 10424d4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10424d4c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10424d52 push ecx */
  push32((uint32_t)(ECX));
  /* 10424d53 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10424d59 push edx */
  push32((uint32_t)(EDX));
  /* 10424d5a call 0x10428810 */
  push32(0x10424d5fu); f_10428810();
  /* 10424d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424d62 push eax */
  push32((uint32_t)(EAX));
  /* 10424d63 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10424d69 push eax */
  push32((uint32_t)(EAX));
  /* 10424d6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d6d mov edx, dword ptr [ecx*4 + 0x1044fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa44)));
  /* 10424d74 push edx */
  push32((uint32_t)(EDX));
  /* 10424d75 call dword ptr [0x104542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f8))), 0x10424d7bu);
L_10424d7b:;
  /* 10424d7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d7e mov ecx, dword ptr [eax*4 + 0x1044fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1044fa38)));
  /* 10424d85 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10424d88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10424d8a je 0x10424d99 */
  if (C.zf) goto L_10424d99;
  /* 10424d8c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10424d92 push edx */
  push32((uint32_t)(EDX));
  /* 10424d93 call dword ptr [0x10454300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454300))), 0x10424d99u);
L_10424d99:;
  /* 10424d99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424d9c mov ecx, dword ptr [eax*4 + 0x1044fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1044fa38)));
  /* 10424da3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10424da6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10424da8 je 0x10424e18 */
  if (C.zf) goto L_10424e18;
  /* 10424daa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424dae je 0x10424dcd */
  if (C.zf) goto L_10424dcd;
  /* 10424db0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10424db2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10424db8 push edx */
  push32((uint32_t)(EDX));
  /* 10424db9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424dbc push eax */
  push32((uint32_t)(EAX));
  /* 10424dbd call 0x10428520 */
  push32(0x10424dc2u); f_10428520();
  /* 10424dc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424dc5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10424dcb jmp 0x10424dd7 */
  goto L_10424dd7;
L_10424dcd:;
  /* 10424dcd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10424dd7:;
  /* 10424dd7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10424ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10424dde mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10424de1 push edx */
  push32((uint32_t)(EDX));
  /* 10424de2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10424de8 push eax */
  push32((uint32_t)(EAX));
  /* 10424de9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424dec push ecx */
  push32((uint32_t)(ECX));
  /* 10424ded mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10424df0 push edx */
  push32((uint32_t)(EDX));
  /* 10424df1 call 0x10424e30 */
  push32(0x10424df6u); f_10424e30();
  /* 10424df6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424df9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10424dff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424e03 jne 0x10424e10 */
  if (!C.zf) goto L_10424e10;
  /* 10424e05 push 0x1044fa34 */
  push32((uint32_t)(0x1044fa34u));
  /* 10424e0a call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10424e10u);
L_10424e10:;
  /* 10424e10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10424e16 jmp 0x10424e2b */
  goto L_10424e2b;
L_10424e18:;
  /* 10424e18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424e1c jne 0x10424e29 */
  if (!C.zf) goto L_10424e29;
  /* 10424e1e push 0x1044fa34 */
  push32((uint32_t)(0x1044fa34u));
  /* 10424e23 call dword ptr [0x104542fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542fc))), 0x10424e29u);
L_10424e29:;
  /* 10424e29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10424e2b:;
  /* 10424e2b pop edi */
  EDI = (pop32());
  /* 10424e2c mov esp, ebp */
  ESP = (EBP);
  /* 10424e2e pop ebp */
  EBP = (pop32());
  /* 10424e2f ret  */
  ESPCHK(0x10424aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x10424e30 (780 bytes, 197 insns) */
void f_10424e30(void) {
  FTRACE(0x10424e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10424e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10424e31 mov ebp, esp */
  EBP = (ESP);
  /* 10424e33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10424e38 call 0x10428b80 */
  push32(0x10424e3du); f_10428b80();
L_10424e3d:;
  /* 10424e3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424e41 jne 0x10424e68 */
  if (!C.zf) goto L_10424e68;
  /* 10424e43 push 0x1044c590 */
  push32((uint32_t)(0x1044c590u));
  /* 10424e48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10424e4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10424e4f push 0x1044c584 */
  push32((uint32_t)(0x1044c584u));
  /* 10424e54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10424e56 call 0x10424aa0 */
  push32(0x10424e5bu); f_10424aa0();
  /* 10424e5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424e5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424e61 jne 0x10424e68 */
  if (!C.zf) goto L_10424e68;
  /* 10424e63 call 0x10424990 */
  push32(0x10424e68u); f_10424990();
L_10424e68:;
  /* 10424e68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10424e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424e6c jne 0x10424e3d */
  if (!C.zf) goto L_10424e3d;
  /* 10424e6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10424e73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10424e79 push ecx */
  push32((uint32_t)(ECX));
  /* 10424e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10424e7c call dword ptr [0x10454310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454310))), 0x10424e82u);
  /* 10424e82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10424e84 jne 0x10424e9a */
  if (!C.zf) goto L_10424e9a;
  /* 10424e86 push 0x1044c56c */
  push32((uint32_t)(0x1044c56cu));
  /* 10424e8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10424e91 push edx */
  push32((uint32_t)(EDX));
  /* 10424e92 call 0x10428990 */
  push32(0x10424e97u); f_10428990();
  /* 10424e97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424e9a:;
  /* 10424e9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10424ea0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10424ea3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10424ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 10424ea7 call 0x10428810 */
  push32(0x10424eacu); f_10428810();
  /* 10424eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424eaf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424eb2 jbe 0x10424edd */
  if ((C.cf||C.zf)) goto L_10424edd;
  /* 10424eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10424eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10424eb8 call 0x10428810 */
  push32(0x10424ebdu); f_10428810();
  /* 10424ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424ec0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10424ec3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10424ec7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10424eca push 3 */
  push32((uint32_t)(0x3u));
  /* 10424ecc push 0x1044c568 */
  push32((uint32_t)(0x1044c568u));
  /* 10424ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10424ed4 push eax */
  push32((uint32_t)(EAX));
  /* 10424ed5 call 0x10429200 */
  push32(0x10424edau); f_10429200();
  /* 10424eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424edd:;
  /* 10424edd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10424ee0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10424ee6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424eed je 0x10424f38 */
  if (C.zf) goto L_10424f38;
  /* 10424eef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10424ef5 push edx */
  push32((uint32_t)(EDX));
  /* 10424ef6 call 0x10428810 */
  push32(0x10424efbu); f_10428810();
  /* 10424efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424efe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424f01 jbe 0x10424f38 */
  if ((C.cf||C.zf)) goto L_10424f38;
  /* 10424f03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10424f09 push eax */
  push32((uint32_t)(EAX));
  /* 10424f0a call 0x10428810 */
  push32(0x10424f0fu); f_10428810();
  /* 10424f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10424f12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10424f18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10424f1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10424f22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10424f24 push 0x1044c568 */
  push32((uint32_t)(0x1044c568u));
  /* 10424f29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10424f2f push eax */
  push32((uint32_t)(EAX));
  /* 10424f30 call 0x10429200 */
  push32(0x10424f35u); f_10429200();
  /* 10424f35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10424f38:;
  /* 10424f38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424f3c jne 0x10424f4a */
  if (!C.zf) goto L_10424f4a;
  /* 10424f3e mov dword ptr [ebp - 0x1114], 0x1044c4f4 */
  w32((uint32_t)(EBP + -0x1114), (0x1044c4f4u));
  /* 10424f48 jmp 0x10424f54 */
  goto L_10424f54;
L_10424f4a:;
  /* 10424f4a mov dword ptr [ebp - 0x1114], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1114), (0x1044c294u));
L_10424f54:;
  /* 10424f54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10424f57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10424f5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10424f5c je 0x10424f69 */
  if (C.zf) goto L_10424f69;
  /* 10424f5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10424f61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10424f67 jmp 0x10424f73 */
  goto L_10424f73;
L_10424f69:;
  /* 10424f69 mov dword ptr [ebp - 0x1118], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1118), (0x1044c294u));
L_10424f73:;
  /* 10424f73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10424f76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10424f79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10424f7b je 0x10424f8f */
  if (C.zf) goto L_10424f8f;
  /* 10424f7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424f81 jne 0x10424f8f */
  if (!C.zf) goto L_10424f8f;
  /* 10424f83 mov dword ptr [ebp - 0x111c], 0x1044c4e4 */
  w32((uint32_t)(EBP + -0x111c), (0x1044c4e4u));
  /* 10424f8d jmp 0x10424f99 */
  goto L_10424f99;
L_10424f8f:;
  /* 10424f8f mov dword ptr [ebp - 0x111c], 0x1044c294 */
  w32((uint32_t)(EBP + -0x111c), (0x1044c294u));
L_10424f99:;
  /* 10424f99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10424f9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10424f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10424fa1 je 0x10424faf */
  if (C.zf) goto L_10424faf;
  /* 10424fa3 mov dword ptr [ebp - 0x1120], 0x1044c4e0 */
  w32((uint32_t)(EBP + -0x1120), (0x1044c4e0u));
  /* 10424fad jmp 0x10424fb9 */
  goto L_10424fb9;
L_10424faf:;
  /* 10424faf mov dword ptr [ebp - 0x1120], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1120), (0x1044c294u));
L_10424fb9:;
  /* 10424fb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424fbd je 0x10424fca */
  if (C.zf) goto L_10424fca;
  /* 10424fbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10424fc2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10424fc8 jmp 0x10424fd4 */
  goto L_10424fd4;
L_10424fca:;
  /* 10424fca mov dword ptr [ebp - 0x1124], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1124), (0x1044c294u));
L_10424fd4:;
  /* 10424fd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424fd8 je 0x10424fe6 */
  if (C.zf) goto L_10424fe6;
  /* 10424fda mov dword ptr [ebp - 0x1128], 0x1044c4d8 */
  w32((uint32_t)(EBP + -0x1128), (0x1044c4d8u));
  /* 10424fe4 jmp 0x10424ff0 */
  goto L_10424ff0;
L_10424fe6:;
  /* 10424fe6 mov dword ptr [ebp - 0x1128], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1128), (0x1044c294u));
L_10424ff0:;
  /* 10424ff0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10424ff4 je 0x10425001 */
  if (C.zf) goto L_10425001;
  /* 10424ff6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10424ff9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10424fff jmp 0x1042500b */
  goto L_1042500b;
L_10425001:;
  /* 10425001 mov dword ptr [ebp - 0x112c], 0x1044c294 */
  w32((uint32_t)(EBP + -0x112c), (0x1044c294u));
L_1042500b:;
  /* 1042500b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042500f je 0x1042501d */
  if (C.zf) goto L_1042501d;
  /* 10425011 mov dword ptr [ebp - 0x1130], 0x1044c4d0 */
  w32((uint32_t)(EBP + -0x1130), (0x1044c4d0u));
  /* 1042501b jmp 0x10425027 */
  goto L_10425027;
L_1042501d:;
  /* 1042501d mov dword ptr [ebp - 0x1130], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1130), (0x1044c294u));
L_10425027:;
  /* 10425027 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042502e je 0x1042503e */
  if (C.zf) goto L_1042503e;
  /* 10425030 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10425036 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1042503c jmp 0x10425048 */
  goto L_10425048;
L_1042503e:;
  /* 1042503e mov dword ptr [ebp - 0x1134], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1134), (0x1044c294u));
L_10425048:;
  /* 10425048 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042504f je 0x1042505d */
  if (C.zf) goto L_1042505d;
  /* 10425051 mov dword ptr [ebp - 0x1138], 0x1044c4c4 */
  w32((uint32_t)(EBP + -0x1138), (0x1044c4c4u));
  /* 1042505b jmp 0x10425067 */
  goto L_10425067;
L_1042505d:;
  /* 1042505d mov dword ptr [ebp - 0x1138], 0x1044c294 */
  w32((uint32_t)(EBP + -0x1138), (0x1044c294u));
L_10425067:;
  /* 10425067 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1042506d push edx */
  push32((uint32_t)(EDX));
  /* 1042506e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10425074 push eax */
  push32((uint32_t)(EAX));
  /* 10425075 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1042507b push ecx */
  push32((uint32_t)(ECX));
  /* 1042507c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10425082 push edx */
  push32((uint32_t)(EDX));
  /* 10425083 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10425089 push eax */
  push32((uint32_t)(EAX));
  /* 1042508a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10425090 push ecx */
  push32((uint32_t)(ECX));
  /* 10425091 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10425097 push edx */
  push32((uint32_t)(EDX));
  /* 10425098 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1042509e push eax */
  push32((uint32_t)(EAX));
  /* 1042509f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 104250a5 push ecx */
  push32((uint32_t)(ECX));
  /* 104250a6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 104250ac push edx */
  push32((uint32_t)(EDX));
  /* 104250ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104250b0 push eax */
  push32((uint32_t)(EAX));
  /* 104250b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104250b4 mov edx, dword ptr [ecx*4 + 0x1044fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa50)));
  /* 104250bb push edx */
  push32((uint32_t)(EDX));
  /* 104250bc push 0x1044c470 */
  push32((uint32_t)(0x1044c470u));
  /* 104250c1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104250c6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 104250cc push eax */
  push32((uint32_t)(EAX));
  /* 104250cd call 0x10428890 */
  push32(0x104250d2u); f_10428890();
  /* 104250d2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104250d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104250d7 jge 0x104250ed */
  if ((C.sf==C.of)) goto L_104250ed;
  /* 104250d9 push 0x1044c3d4 */
  push32((uint32_t)(0x1044c3d4u));
  /* 104250de lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 104250e4 push ecx */
  push32((uint32_t)(ECX));
  /* 104250e5 call 0x10428990 */
  push32(0x104250eau); f_10428990();
  /* 104250ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104250ed:;
  /* 104250ed push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 104250f2 push 0x1044c44c */
  push32((uint32_t)(0x1044c44cu));
  /* 104250f7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 104250fd push edx */
  push32((uint32_t)(EDX));
  /* 104250fe call 0x10429140 */
  push32(0x10425103u); f_10429140();
  /* 10425103 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425106 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1042510c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425113 jne 0x10425126 */
  if (!C.zf) goto L_10425126;
  /* 10425115 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10425117 call 0x10428e80 */
  push32(0x1042511cu); f_10428e80();
  /* 1042511c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042511f push 3 */
  push32((uint32_t)(0x3u));
  /* 10425121 call 0x104251a0 */
  push32(0x10425126u); f_104251a0();
L_10425126:;
  /* 10425126 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042512d jne 0x10425136 */
  if (!C.zf) goto L_10425136;
  /* 1042512f mov eax, 1 */
  EAX = (0x1u);
  /* 10425134 jmp 0x10425138 */
  goto L_10425138;
L_10425136:;
  /* 10425136 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10425138:;
  /* 10425138 mov esp, ebp */
  ESP = (EBP);
  /* 1042513a pop ebp */
  EBP = (pop32());
  /* 1042513b ret  */
  ESPCHK(0x10424e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005140 @ 0x10425140 (56 bytes, 15 insns) */
void f_10425140(void) {
  FTRACE(0x10425140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425140 push ebp */
  push32((uint32_t)(EBP));
  /* 10425141 mov ebp, esp */
  EBP = (ESP);
  /* 10425143 cmp dword ptr [0x104530bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042514a je 0x10425152 */
  if (C.zf) goto L_10425152;
  /* 1042514c call dword ptr [0x104530bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x104530bc))), 0x10425152u);
L_10425152:;
  /* 10425152 push 0x1044f418 */
  push32((uint32_t)(0x1044f418u));
  /* 10425157 push 0x1044f208 */
  push32((uint32_t)(0x1044f208u));
  /* 1042515c call 0x10425310 */
  push32(0x10425161u); f_10425310();
  /* 10425161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425164 push 0x1044f104 */
  push32((uint32_t)(0x1044f104u));
  /* 10425169 push 0x1044f000 */
  push32((uint32_t)(0x1044f000u));
  /* 1042516e call 0x10425310 */
  push32(0x10425173u); f_10425310();
  /* 10425173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425176 pop ebp */
  EBP = (pop32());
  /* 10425177 ret  */
  ESPCHK(0x10425140u, _esp0);
  ESP += 4; return;
}

/* FUN_10005180 @ 0x10425180 (21 bytes, 10 insns) */
void f_10425180(void) {
  FTRACE(0x10425180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425180 push ebp */
  push32((uint32_t)(EBP));
  /* 10425181 mov ebp, esp */
  EBP = (ESP);
  /* 10425183 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425185 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042518a push eax */
  push32((uint32_t)(EAX));
  /* 1042518b call 0x10425200 */
  push32(0x10425190u); f_10425200();
  /* 10425190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425193 pop ebp */
  EBP = (pop32());
  /* 10425194 ret  */
  ESPCHK(0x10425180u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x104251a0 (21 bytes, 10 insns) */
void f_104251a0(void) {
  FTRACE(0x104251a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104251a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104251a1 mov ebp, esp */
  EBP = (ESP);
  /* 104251a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104251a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104251a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104251aa push eax */
  push32((uint32_t)(EAX));
  /* 104251ab call 0x10425200 */
  push32(0x104251b0u); f_10425200();
  /* 104251b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104251b3 pop ebp */
  EBP = (pop32());
  /* 104251b4 ret  */
  ESPCHK(0x104251a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051c0 @ 0x104251c0 (19 bytes, 9 insns) */
void f_104251c0(void) {
  FTRACE(0x104251c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104251c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104251c1 mov ebp, esp */
  EBP = (ESP);
  /* 104251c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104251c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104251c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104251c9 call 0x10425200 */
  push32(0x104251ceu); f_10425200();
  /* 104251ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104251d1 pop ebp */
  EBP = (pop32());
  /* 104251d2 ret  */
  ESPCHK(0x104251c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100051e0 @ 0x104251e0 (19 bytes, 9 insns) */
void f_104251e0(void) {
  FTRACE(0x104251e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104251e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104251e1 mov ebp, esp */
  EBP = (ESP);
  /* 104251e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104251e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 104251e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104251e9 call 0x10425200 */
  push32(0x104251eeu); f_10425200();
  /* 104251ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104251f1 pop ebp */
  EBP = (pop32());
  /* 104251f2 ret  */
  ESPCHK(0x104251e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005200 @ 0x10425200 (227 bytes, 61 insns) */
void f_10425200(void) {
  FTRACE(0x10425200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425200 push ebp */
  push32((uint32_t)(EBP));
  /* 10425201 mov ebp, esp */
  EBP = (ESP);
  /* 10425203 push ecx */
  push32((uint32_t)(ECX));
  /* 10425204 call 0x104252f0 */
  push32(0x10425209u); f_104252f0();
  /* 10425209 cmp dword ptr [0x104515b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104515b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425210 jne 0x10425223 */
  if (!C.zf) goto L_10425223;
  /* 10425212 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425215 push eax */
  push32((uint32_t)(EAX));
  /* 10425216 call dword ptr [0x1045431c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045431c))), 0x1042521cu);
  /* 1042521c push eax */
  push32((uint32_t)(EAX));
  /* 1042521d call dword ptr [0x10454318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454318))), 0x10425223u);
L_10425223:;
  /* 10425223 mov dword ptr [0x104515b0], 1 */
  w32((uint32_t)(0x104515b0), (0x1u));
  /* 1042522d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10425230 mov byte ptr [0x104515ac], cl */
  w8((uint32_t)(0x104515ac), (CL));
  /* 10425236 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042523a jne 0x10425283 */
  if (!C.zf) goto L_10425283;
  /* 1042523c cmp dword ptr [0x104530b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425243 je 0x10425271 */
  if (C.zf) goto L_10425271;
  /* 10425245 mov edx, dword ptr [0x104530b4] */
  EDX = (r32((uint32_t)(0x104530b4)));
  /* 1042524b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1042524e:;
  /* 1042524e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425251 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425254 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425257 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042525a cmp ecx, dword ptr [0x104530b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104530b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425260 jb 0x10425271 */
  if (C.cf) goto L_10425271;
  /* 10425262 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425265 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425268 je 0x1042526f */
  if (C.zf) goto L_1042526f;
  /* 1042526a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042526d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1042526fu);
L_1042526f:;
  /* 1042526f jmp 0x1042524e */
  goto L_1042524e;
L_10425271:;
  /* 10425271 push 0x1044f724 */
  push32((uint32_t)(0x1044f724u));
  /* 10425276 push 0x1044f51c */
  push32((uint32_t)(0x1044f51cu));
  /* 1042527b call 0x10425310 */
  push32(0x10425280u); f_10425310();
  /* 10425280 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425283:;
  /* 10425283 push 0x1044f92c */
  push32((uint32_t)(0x1044f92cu));
  /* 10425288 push 0x1044f828 */
  push32((uint32_t)(0x1044f828u));
  /* 1042528d call 0x10425310 */
  push32(0x10425292u); f_10425310();
  /* 10425292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425295 cmp dword ptr [0x104515b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104515b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042529c jne 0x104252be */
  if (!C.zf) goto L_104252be;
  /* 1042529e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104252a0 call 0x10426ef0 */
  push32(0x104252a5u); f_10426ef0();
  /* 104252a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104252a8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 104252ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104252ad je 0x104252be */
  if (C.zf) goto L_104252be;
  /* 104252af mov dword ptr [0x104515b8], 1 */
  w32((uint32_t)(0x104515b8), (0x1u));
  /* 104252b9 call 0x10427800 */
  push32(0x104252beu); f_10427800();
L_104252be:;
  /* 104252be cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104252c2 je 0x104252cb */
  if (C.zf) goto L_104252cb;
  /* 104252c4 call 0x10425300 */
  push32(0x104252c9u); f_10425300();
  /* 104252c9 jmp 0x104252df */
  goto L_104252df;
L_104252cb:;
  /* 104252cb mov dword ptr [0x104515b4], 1 */
  w32((uint32_t)(0x104515b4), (0x1u));
  /* 104252d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104252d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104252d9 call dword ptr [0x10454314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454314))), 0x104252dfu);
L_104252df:;
  /* 104252df mov esp, ebp */
  ESP = (EBP);
  /* 104252e1 pop ebp */
  EBP = (pop32());
  /* 104252e2 ret  */
  ESPCHK(0x10425200u, _esp0);
  ESP += 4; return;
}

/* FUN_100052f0 @ 0x104252f0 (15 bytes, 7 insns) */
void f_104252f0(void) {
  FTRACE(0x104252f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104252f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104252f1 mov ebp, esp */
  EBP = (ESP);
  /* 104252f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 104252f5 call 0x104293e0 */
  push32(0x104252fau); f_104293e0();
  /* 104252fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104252fd pop ebp */
  EBP = (pop32());
  /* 104252fe ret  */
  ESPCHK(0x104252f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005300 @ 0x10425300 (15 bytes, 7 insns) */
void f_10425300(void) {
  FTRACE(0x10425300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425300 push ebp */
  push32((uint32_t)(EBP));
  /* 10425301 mov ebp, esp */
  EBP = (ESP);
  /* 10425303 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10425305 call 0x10429480 */
  push32(0x1042530au); f_10429480();
  /* 1042530a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042530d pop ebp */
  EBP = (pop32());
  /* 1042530e ret  */
  ESPCHK(0x10425300u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10425310 (37 bytes, 16 insns) */
void f_10425310(void) {
  FTRACE(0x10425310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425310 push ebp */
  push32((uint32_t)(EBP));
  /* 10425311 mov ebp, esp */
  EBP = (ESP);
L_10425313:;
  /* 10425313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425316 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425319 jae 0x10425333 */
  if (!C.cf) goto L_10425333;
  /* 1042531b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042531e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425321 je 0x10425328 */
  if (C.zf) goto L_10425328;
  /* 10425323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425326 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10425328u);
L_10425328:;
  /* 10425328 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042532b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042532e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10425331 jmp 0x10425313 */
  goto L_10425313;
L_10425333:;
  /* 10425333 pop ebp */
  EBP = (pop32());
  /* 10425334 ret  */
  ESPCHK(0x10425310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005340 @ 0x10425340 (130 bytes, 42 insns) */
void f_10425340(void) {
  FTRACE(0x10425340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425340 push ebp */
  push32((uint32_t)(EBP));
  /* 10425341 mov ebp, esp */
  EBP = (ESP);
  /* 10425343 push ecx */
  push32((uint32_t)(ECX));
  /* 10425344 call 0x10429300 */
  push32(0x10425349u); f_10429300();
  /* 10425349 call dword ptr [0x10454328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454328))), 0x1042534fu);
  /* 1042534f mov dword ptr [0x1044fa5c], eax */
  w32((uint32_t)(0x1044fa5c), (EAX));
  /* 10425354 cmp dword ptr [0x1044fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042535b jne 0x10425361 */
  if (!C.zf) goto L_10425361;
  /* 1042535d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042535f jmp 0x104253be */
  goto L_104253be;
L_10425361:;
  /* 10425361 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10425363 push 0x1044c5a8 */
  push32((uint32_t)(0x1044c5a8u));
  /* 10425368 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042536a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1042536c push 1 */
  push32((uint32_t)(0x1u));
  /* 1042536e call 0x10425df0 */
  push32(0x10425373u); f_10425df0();
  /* 10425373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425376 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425379 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042537d je 0x10425394 */
  if (C.zf) goto L_10425394;
  /* 1042537f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425382 push eax */
  push32((uint32_t)(EAX));
  /* 10425383 mov ecx, dword ptr [0x1044fa5c] */
  ECX = (r32((uint32_t)(0x1044fa5c)));
  /* 10425389 push ecx */
  push32((uint32_t)(ECX));
  /* 1042538a call dword ptr [0x10454324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454324))), 0x10425390u);
  /* 10425390 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425392 jne 0x10425398 */
  if (!C.zf) goto L_10425398;
L_10425394:;
  /* 10425394 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425396 jmp 0x104253be */
  goto L_104253be;
L_10425398:;
  /* 10425398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042539b push edx */
  push32((uint32_t)(EDX));
  /* 1042539c call 0x10425400 */
  push32(0x104253a1u); f_10425400();
  /* 104253a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104253a4 call dword ptr [0x10454320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454320))), 0x104253aau);
  /* 104253aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104253ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104253af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104253b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 104253b9 mov eax, 1 */
  EAX = (0x1u);
L_104253be:;
  /* 104253be mov esp, ebp */
  ESP = (EBP);
  /* 104253c0 pop ebp */
  EBP = (pop32());
  /* 104253c1 ret  */
  ESPCHK(0x10425340u, _esp0);
  ESP += 4; return;
}

/* FUN_100053d0 @ 0x104253d0 (41 bytes, 11 insns) */
void f_104253d0(void) {
  FTRACE(0x104253d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104253d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104253d1 mov ebp, esp */
  EBP = (ESP);
  /* 104253d3 call 0x10429340 */
  push32(0x104253d8u); f_10429340();
  /* 104253d8 cmp dword ptr [0x1044fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104253df je 0x104253f7 */
  if (C.zf) goto L_104253f7;
  /* 104253e1 mov eax, dword ptr [0x1044fa5c] */
  EAX = (r32((uint32_t)(0x1044fa5c)));
  /* 104253e6 push eax */
  push32((uint32_t)(EAX));
  /* 104253e7 call dword ptr [0x1045432c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045432c))), 0x104253edu);
  /* 104253ed mov dword ptr [0x1044fa5c], 0xffffffff */
  w32((uint32_t)(0x1044fa5c), (0xffffffffu));
L_104253f7:;
  /* 104253f7 pop ebp */
  EBP = (pop32());
  /* 104253f8 ret  */
  ESPCHK(0x104253d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x10425400 (25 bytes, 8 insns) */
void f_10425400(void) {
  FTRACE(0x10425400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425400 push ebp */
  push32((uint32_t)(EBP));
  /* 10425401 mov ebp, esp */
  EBP = (ESP);
  /* 10425403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425406 mov dword ptr [eax + 0x50], 0x1044fc00 */
  w32((uint32_t)(EAX + 0x50), (0x1044fc00u));
  /* 1042540d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425410 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10425417 pop ebp */
  EBP = (pop32());
  /* 10425418 ret  */
  ESPCHK(0x10425400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005420 @ 0x10425420 (152 bytes, 48 insns) */
void f_10425420(void) {
  FTRACE(0x10425420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425420 push ebp */
  push32((uint32_t)(EBP));
  /* 10425421 mov ebp, esp */
  EBP = (ESP);
  /* 10425423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425426 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x1042542cu);
  /* 1042542c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042542f mov eax, dword ptr [0x1044fa5c] */
  EAX = (r32((uint32_t)(0x1044fa5c)));
  /* 10425434 push eax */
  push32((uint32_t)(EAX));
  /* 10425435 call dword ptr [0x10454334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454334))), 0x1042543bu);
  /* 1042543b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042543e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425442 jne 0x104254a7 */
  if (!C.zf) goto L_104254a7;
  /* 10425444 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10425449 push 0x1044c5a8 */
  push32((uint32_t)(0x1044c5a8u));
  /* 1042544e push 2 */
  push32((uint32_t)(0x2u));
  /* 10425450 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10425452 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425454 call 0x10425df0 */
  push32(0x10425459u); f_10425df0();
  /* 10425459 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042545c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042545f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425463 je 0x1042549d */
  if (C.zf) goto L_1042549d;
  /* 10425465 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425468 push ecx */
  push32((uint32_t)(ECX));
  /* 10425469 mov edx, dword ptr [0x1044fa5c] */
  EDX = (r32((uint32_t)(0x1044fa5c)));
  /* 1042546f push edx */
  push32((uint32_t)(EDX));
  /* 10425470 call dword ptr [0x10454324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454324))), 0x10425476u);
  /* 10425476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425478 je 0x1042549d */
  if (C.zf) goto L_1042549d;
  /* 1042547a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042547d push eax */
  push32((uint32_t)(EAX));
  /* 1042547e call 0x10425400 */
  push32(0x10425483u); f_10425400();
  /* 10425483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425486 call dword ptr [0x10454320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454320))), 0x1042548cu);
  /* 1042548c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042548f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10425491 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425494 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1042549b jmp 0x104254a7 */
  goto L_104254a7;
L_1042549d:;
  /* 1042549d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1042549f call 0x10424950 */
  push32(0x104254a4u); f_10424950();
  /* 104254a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104254a7:;
  /* 104254a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104254aa push eax */
  push32((uint32_t)(EAX));
  /* 104254ab call dword ptr [0x10454330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454330))), 0x104254b1u);
  /* 104254b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104254b4 mov esp, ebp */
  ESP = (EBP);
  /* 104254b6 pop ebp */
  EBP = (pop32());
  /* 104254b7 ret  */
  ESPCHK(0x10425420u, _esp0);
  ESP += 4; return;
}

/* FUN_100054c0 @ 0x104254c0 (263 bytes, 86 insns) */
void f_104254c0(void) {
  FTRACE(0x104254c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104254c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104254c1 mov ebp, esp */
  EBP = (ESP);
  /* 104254c3 cmp dword ptr [0x1044fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104254ca je 0x104255c5 */
  if (C.zf) goto L_104255c5;
  /* 104254d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104254d4 jne 0x104254e5 */
  if (!C.zf) goto L_104254e5;
  /* 104254d6 mov eax, dword ptr [0x1044fa5c] */
  EAX = (r32((uint32_t)(0x1044fa5c)));
  /* 104254db push eax */
  push32((uint32_t)(EAX));
  /* 104254dc call dword ptr [0x10454334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454334))), 0x104254e2u);
  /* 104254e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104254e5:;
  /* 104254e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104254e9 je 0x104255b6 */
  if (C.zf) goto L_104255b6;
  /* 104254ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104254f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104254f6 je 0x10425509 */
  if (C.zf) goto L_10425509;
  /* 104254f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104254fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104254fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10425500 push eax */
  push32((uint32_t)(EAX));
  /* 10425501 call 0x10426470 */
  push32(0x10425506u); f_10426470();
  /* 10425506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425509:;
  /* 10425509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042550c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425510 je 0x10425523 */
  if (C.zf) goto L_10425523;
  /* 10425512 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425514 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425517 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1042551a push eax */
  push32((uint32_t)(EAX));
  /* 1042551b call 0x10426470 */
  push32(0x10425520u); f_10426470();
  /* 10425520 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425523:;
  /* 10425523 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425526 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042552a je 0x1042553d */
  if (C.zf) goto L_1042553d;
  /* 1042552c push 2 */
  push32((uint32_t)(0x2u));
  /* 1042552e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425531 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10425534 push eax */
  push32((uint32_t)(EAX));
  /* 10425535 call 0x10426470 */
  push32(0x1042553au); f_10426470();
  /* 1042553a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042553d:;
  /* 1042553d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425540 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425544 je 0x10425557 */
  if (C.zf) goto L_10425557;
  /* 10425546 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042554b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1042554e push eax */
  push32((uint32_t)(EAX));
  /* 1042554f call 0x10426470 */
  push32(0x10425554u); f_10426470();
  /* 10425554 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425557:;
  /* 10425557 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042555a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042555e je 0x10425571 */
  if (C.zf) goto L_10425571;
  /* 10425560 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425562 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425565 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10425568 push eax */
  push32((uint32_t)(EAX));
  /* 10425569 call 0x10426470 */
  push32(0x1042556eu); f_10426470();
  /* 1042556e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425571:;
  /* 10425571 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425574 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425578 je 0x1042558b */
  if (C.zf) goto L_1042558b;
  /* 1042557a push 2 */
  push32((uint32_t)(0x2u));
  /* 1042557c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042557f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10425582 push eax */
  push32((uint32_t)(EAX));
  /* 10425583 call 0x10426470 */
  push32(0x10425588u); f_10426470();
  /* 10425588 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042558b:;
  /* 1042558b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042558e cmp dword ptr [ecx + 0x50], 0x1044fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1044fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425595 je 0x104255a8 */
  if (C.zf) goto L_104255a8;
  /* 10425597 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425599 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042559c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1042559f push eax */
  push32((uint32_t)(EAX));
  /* 104255a0 call 0x10426470 */
  push32(0x104255a5u); f_10426470();
  /* 104255a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104255a8:;
  /* 104255a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104255aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104255ad push ecx */
  push32((uint32_t)(ECX));
  /* 104255ae call 0x10426470 */
  push32(0x104255b3u); f_10426470();
  /* 104255b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104255b6:;
  /* 104255b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104255b8 mov edx, dword ptr [0x1044fa5c] */
  EDX = (r32((uint32_t)(0x1044fa5c)));
  /* 104255be push edx */
  push32((uint32_t)(EDX));
  /* 104255bf call dword ptr [0x10454324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454324))), 0x104255c5u);
L_104255c5:;
  /* 104255c5 pop ebp */
  EBP = (pop32());
  /* 104255c6 ret  */
  ESPCHK(0x104254c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055d0 @ 0x104255d0 (11 bytes, 5 insns) */
void f_104255d0(void) {
  FTRACE(0x104255d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104255d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104255d1 mov ebp, esp */
  EBP = (ESP);
  /* 104255d3 call dword ptr [0x10454320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454320))), 0x104255d9u);
  /* 104255d9 pop ebp */
  EBP = (pop32());
  /* 104255da ret  */
  ESPCHK(0x104255d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e0 @ 0x104255e0 (11 bytes, 5 insns) */
void f_104255e0(void) {
  FTRACE(0x104255e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104255e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104255e1 mov ebp, esp */
  EBP = (ESP);
  /* 104255e3 call dword ptr [0x10454274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454274))), 0x104255e9u);
  /* 104255e9 pop ebp */
  EBP = (pop32());
  /* 104255ea ret  */
  ESPCHK(0x104255e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055f0 @ 0x104255f0 (804 bytes, 236 insns) */
void f_104255f0(void) {
  FTRACE(0x104255f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104255f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104255f1 mov ebp, esp */
  EBP = (ESP);
  /* 104255f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104255f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 104255fb push 0x1044c5b4 */
  push32((uint32_t)(0x1044c5b4u));
  /* 10425600 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425602 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10425607 call 0x104259e0 */
  push32(0x1042560cu); f_104259e0();
  /* 1042560c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042560f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10425612 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425616 jne 0x10425622 */
  if (!C.zf) goto L_10425622;
  /* 10425618 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1042561a call 0x10424950 */
  push32(0x1042561fu); f_10424950();
  /* 1042561f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10425622:;
  /* 10425622 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425625 mov dword ptr [0x10452f60], eax */
  w32((uint32_t)(0x10452f60), (EAX));
  /* 1042562a mov dword ptr [0x1045309c], 0x20 */
  w32((uint32_t)(0x1045309c), (0x20u));
  /* 10425634 jmp 0x1042563f */
  goto L_1042563f;
L_10425636:;
  /* 10425636 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425639 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042563c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1042563f:;
  /* 1042563f mov edx, dword ptr [0x10452f60] */
  EDX = (r32((uint32_t)(0x10452f60)));
  /* 10425645 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042564b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042564e jae 0x10425673 */
  if (!C.cf) goto L_10425673;
  /* 10425650 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425653 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10425657 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042565a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10425660 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425663 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10425667 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042566a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10425671 jmp 0x10425636 */
  goto L_10425636;
L_10425673:;
  /* 10425673 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10425676 push ecx */
  push32((uint32_t)(ECX));
  /* 10425677 call dword ptr [0x10454348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454348))), 0x1042567du);
  /* 1042567d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10425680 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10425686 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10425688 je 0x10425815 */
  if (C.zf) goto L_10425815;
  /* 1042568e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425692 je 0x10425815 */
  if (C.zf) goto L_10425815;
  /* 10425698 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042569b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1042569d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 104256a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104256a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104256a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104256a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104256ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104256af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 104256b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104256b9 jge 0x104256c3 */
  if ((C.sf==C.of)) goto L_104256c3;
  /* 104256bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 104256be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 104256c1 jmp 0x104256ca */
  goto L_104256ca;
L_104256c3:;
  /* 104256c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_104256ca:;
  /* 104256ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 104256cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 104256d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 104256d7 jmp 0x104256e2 */
  goto L_104256e2;
L_104256d9:;
  /* 104256d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 104256dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104256df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_104256e2:;
  /* 104256e2 mov ecx, dword ptr [0x1045309c] */
  ECX = (r32((uint32_t)(0x1045309c)));
  /* 104256e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104256eb jge 0x10425782 */
  if ((C.sf==C.of)) goto L_10425782;
  /* 104256f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 104256f6 push 0x1044c5b4 */
  push32((uint32_t)(0x1044c5b4u));
  /* 104256fb push 2 */
  push32((uint32_t)(0x2u));
  /* 104256fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10425702 call 0x104259e0 */
  push32(0x10425707u); f_104259e0();
  /* 10425707 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042570a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1042570d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425711 jne 0x1042571e */
  if (!C.zf) goto L_1042571e;
  /* 10425713 mov edx, dword ptr [0x1045309c] */
  EDX = (r32((uint32_t)(0x1045309c)));
  /* 10425719 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1042571c jmp 0x10425782 */
  goto L_10425782;
L_1042571e:;
  /* 1042571e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10425721 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425724 mov dword ptr [eax*4 + 0x10452f60], ecx */
  w32((uint32_t)(EAX*4 + 0x10452f60), (ECX));
  /* 1042572b mov edx, dword ptr [0x1045309c] */
  EDX = (r32((uint32_t)(0x1045309c)));
  /* 10425731 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425734 mov dword ptr [0x1045309c], edx */
  w32((uint32_t)(0x1045309c), (EDX));
  /* 1042573a jmp 0x10425745 */
  goto L_10425745;
L_1042573c:;
  /* 1042573c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042573f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425742 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10425745:;
  /* 10425745 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10425748 mov edx, dword ptr [ecx*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10452f60)));
  /* 1042574f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425755 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425758 jae 0x1042577d */
  if (!C.cf) goto L_1042577d;
  /* 1042575a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042575d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10425761 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425764 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1042576a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042576d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10425771 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425774 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1042577b jmp 0x1042573c */
  goto L_1042573c;
L_1042577d:;
  /* 1042577d jmp 0x104256d9 */
  goto L_104256d9;
L_10425782:;
  /* 10425782 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10425789 jmp 0x104257a6 */
  goto L_104257a6;
L_1042578b:;
  /* 1042578b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1042578e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425791 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10425794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425797 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042579a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042579d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 104257a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104257a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_104257a6:;
  /* 104257a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104257a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104257ac jge 0x10425815 */
  if ((C.sf==C.of)) goto L_10425815;
  /* 104257ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 104257b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104257b4 je 0x10425810 */
  if (C.zf) goto L_10425810;
  /* 104257b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104257b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 104257bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104257bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104257c1 je 0x10425810 */
  if (C.zf) goto L_10425810;
  /* 104257c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104257c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104257c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 104257cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104257ce jne 0x104257e0 */
  if (!C.zf) goto L_104257e0;
  /* 104257d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 104257d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104257d5 push edx */
  push32((uint32_t)(EDX));
  /* 104257d6 call dword ptr [0x10454344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454344))), 0x104257dcu);
  /* 104257dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104257de je 0x10425810 */
  if (C.zf) goto L_10425810;
L_104257e0:;
  /* 104257e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 104257e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 104257e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 104257e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 104257ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104257ef mov edx, dword ptr [eax*4 + 0x10452f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 104257f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104257f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 104257fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104257fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10425801 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10425803 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10425805 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425808 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042580b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042580d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10425810:;
  /* 10425810 jmp 0x1042578b */
  goto L_1042578b;
L_10425815:;
  /* 10425815 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1042581c jmp 0x10425827 */
  goto L_10425827;
L_1042581e:;
  /* 1042581e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10425821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425824 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10425827:;
  /* 10425827 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042582b jge 0x10425904 */
  if ((C.sf==C.of)) goto L_10425904;
  /* 10425831 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10425834 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10425837 mov edx, dword ptr [0x10452f60] */
  EDX = (r32((uint32_t)(0x10452f60)));
  /* 1042583d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042583f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10425842 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425845 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425848 jne 0x104258f0 */
  if (!C.zf) goto L_104258f0;
  /* 1042584e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10425851 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10425855 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425859 jne 0x10425864 */
  if (!C.zf) goto L_10425864;
  /* 1042585b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10425862 jmp 0x10425874 */
  goto L_10425874;
L_10425864:;
  /* 10425864 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10425867 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042586a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042586c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042586e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425871 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10425874:;
  /* 10425874 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10425877 push eax */
  push32((uint32_t)(EAX));
  /* 10425878 call dword ptr [0x104542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f4))), 0x1042587eu);
  /* 1042587e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10425881 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425885 je 0x104258df */
  if (C.zf) goto L_104258df;
  /* 10425887 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1042588a push ecx */
  push32((uint32_t)(ECX));
  /* 1042588b call dword ptr [0x10454344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454344))), 0x10425891u);
  /* 10425891 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10425894 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425898 je 0x104258df */
  if (C.zf) goto L_104258df;
  /* 1042589a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042589d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104258a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104258a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 104258a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 104258ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104258ae jne 0x104258c0 */
  if (!C.zf) goto L_104258c0;
  /* 104258b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 104258b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 104258b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 104258be jmp 0x104258dd */
  goto L_104258dd;
L_104258c0:;
  /* 104258c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 104258c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104258c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104258cc jne 0x104258dd */
  if (!C.zf) goto L_104258dd;
  /* 104258ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104258d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 104258d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104258dd:;
  /* 104258dd jmp 0x104258ee */
  goto L_104258ee;
L_104258df:;
  /* 104258df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104258e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 104258e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104258ee:;
  /* 104258ee jmp 0x104258ff */
  goto L_104258ff;
L_104258f0:;
  /* 104258f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 104258f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 104258f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 104258fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_104258ff:;
  /* 104258ff jmp 0x1042581e */
  goto L_1042581e;
L_10425904:;
  /* 10425904 mov eax, dword ptr [0x1045309c] */
  EAX = (r32((uint32_t)(0x1045309c)));
  /* 10425909 push eax */
  push32((uint32_t)(EAX));
  /* 1042590a call dword ptr [0x10454278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454278))), 0x10425910u);
  /* 10425910 mov esp, ebp */
  ESP = (EBP);
  /* 10425912 pop ebp */
  EBP = (pop32());
  /* 10425913 ret  */
  ESPCHK(0x104255f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10425920 (155 bytes, 45 insns) */
void f_10425920(void) {
  FTRACE(0x10425920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425920 push ebp */
  push32((uint32_t)(EBP));
  /* 10425921 mov ebp, esp */
  EBP = (ESP);
  /* 10425923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425926 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042592d jmp 0x10425938 */
  goto L_10425938;
L_1042592f:;
  /* 1042592f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425932 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425935 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10425938:;
  /* 10425938 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042593c jge 0x104259b7 */
  if ((C.sf==C.of)) goto L_104259b7;
  /* 1042593e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425941 cmp dword ptr [ecx*4 + 0x10452f60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10452f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425949 je 0x104259b2 */
  if (C.zf) goto L_104259b2;
  /* 1042594b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042594e mov eax, dword ptr [edx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 10425955 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425958 jmp 0x10425963 */
  goto L_10425963;
L_1042595a:;
  /* 1042595a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042595d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425960 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10425963:;
  /* 10425963 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425966 mov eax, dword ptr [edx*4 + 0x10452f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10452f60)));
  /* 1042596d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425972 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425975 jae 0x1042598f */
  if (!C.cf) goto L_1042598f;
  /* 10425977 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042597a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042597e je 0x1042598d */
  if (C.zf) goto L_1042598d;
  /* 10425980 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425983 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425986 push edx */
  push32((uint32_t)(EDX));
  /* 10425987 call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x1042598du);
L_1042598d:;
  /* 1042598d jmp 0x1042595a */
  goto L_1042595a;
L_1042598f:;
  /* 1042598f push 2 */
  push32((uint32_t)(0x2u));
  /* 10425991 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425994 mov ecx, dword ptr [eax*4 + 0x10452f60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10452f60)));
  /* 1042599b push ecx */
  push32((uint32_t)(ECX));
  /* 1042599c call 0x10426470 */
  push32(0x104259a1u); f_10426470();
  /* 104259a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104259a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104259a7 mov dword ptr [edx*4 + 0x10452f60], 0 */
  w32((uint32_t)(EDX*4 + 0x10452f60), (0x0u));
L_104259b2:;
  /* 104259b2 jmp 0x1042592f */
  goto L_1042592f;
L_104259b7:;
  /* 104259b7 mov esp, ebp */
  ESP = (EBP);
  /* 104259b9 pop ebp */
  EBP = (pop32());
  /* 104259ba ret  */
  ESPCHK(0x10425920u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c0 @ 0x104259c0 (29 bytes, 13 insns) */
void f_104259c0(void) {
  FTRACE(0x104259c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104259c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104259c1 mov ebp, esp */
  EBP = (ESP);
  /* 104259c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104259c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104259c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104259c9 mov eax, dword ptr [0x10451760] */
  EAX = (r32((uint32_t)(0x10451760)));
  /* 104259ce push eax */
  push32((uint32_t)(EAX));
  /* 104259cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104259d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104259d3 call 0x10425a30 */
  push32(0x104259d8u); f_10425a30();
  /* 104259d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104259db pop ebp */
  EBP = (pop32());
  /* 104259dc ret  */
  ESPCHK(0x104259c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059e0 @ 0x104259e0 (35 bytes, 16 insns) */
void f_104259e0(void) {
  FTRACE(0x104259e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104259e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104259e1 mov ebp, esp */
  EBP = (ESP);
  /* 104259e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104259e6 push eax */
  push32((uint32_t)(EAX));
  /* 104259e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104259ea push ecx */
  push32((uint32_t)(ECX));
  /* 104259eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104259ee push edx */
  push32((uint32_t)(EDX));
  /* 104259ef mov eax, dword ptr [0x10451760] */
  EAX = (r32((uint32_t)(0x10451760)));
  /* 104259f4 push eax */
  push32((uint32_t)(EAX));
  /* 104259f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104259f8 push ecx */
  push32((uint32_t)(ECX));
  /* 104259f9 call 0x10425a30 */
  push32(0x104259feu); f_10425a30();
  /* 104259fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a01 pop ebp */
  EBP = (pop32());
  /* 10425a02 ret  */
  ESPCHK(0x104259e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a10 @ 0x10425a10 (27 bytes, 13 insns) */
void f_10425a10(void) {
  FTRACE(0x10425a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10425a11 mov ebp, esp */
  EBP = (ESP);
  /* 10425a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425a15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425a17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425a19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425a1c push eax */
  push32((uint32_t)(EAX));
  /* 10425a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425a20 push ecx */
  push32((uint32_t)(ECX));
  /* 10425a21 call 0x10425a30 */
  push32(0x10425a26u); f_10425a30();
  /* 10425a26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a29 pop ebp */
  EBP = (pop32());
  /* 10425a2a ret  */
  ESPCHK(0x10425a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a30 @ 0x10425a30 (94 bytes, 38 insns) */
void f_10425a30(void) {
  FTRACE(0x10425a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10425a31 mov ebp, esp */
  EBP = (ESP);
  /* 10425a33 push ecx */
  push32((uint32_t)(ECX));
L_10425a34:;
  /* 10425a34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10425a36 call 0x104293e0 */
  push32(0x10425a3bu); f_104293e0();
  /* 10425a3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425a41 push eax */
  push32((uint32_t)(EAX));
  /* 10425a42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425a45 push ecx */
  push32((uint32_t)(ECX));
  /* 10425a46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425a49 push edx */
  push32((uint32_t)(EDX));
  /* 10425a4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425a4d push eax */
  push32((uint32_t)(EAX));
  /* 10425a4e call 0x10425ab0 */
  push32(0x10425a53u); f_10425ab0();
  /* 10425a53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425a59 push 9 */
  push32((uint32_t)(0x9u));
  /* 10425a5b call 0x10429480 */
  push32(0x10425a60u); f_10429480();
  /* 10425a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425a67 jne 0x10425a6f */
  if (!C.zf) goto L_10425a6f;
  /* 10425a69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425a6d jne 0x10425a74 */
  if (!C.zf) goto L_10425a74;
L_10425a6f:;
  /* 10425a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425a72 jmp 0x10425a8a */
  goto L_10425a8a;
L_10425a74:;
  /* 10425a74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425a77 push ecx */
  push32((uint32_t)(ECX));
  /* 10425a78 call 0x10429720 */
  push32(0x10425a7du); f_10429720();
  /* 10425a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425a82 jne 0x10425a88 */
  if (!C.zf) goto L_10425a88;
  /* 10425a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425a86 jmp 0x10425a8a */
  goto L_10425a8a;
L_10425a88:;
  /* 10425a88 jmp 0x10425a34 */
  goto L_10425a34;
L_10425a8a:;
  /* 10425a8a mov esp, ebp */
  ESP = (EBP);
  /* 10425a8c pop ebp */
  EBP = (pop32());
  /* 10425a8d ret  */
  ESPCHK(0x10425a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10425a90 (23 bytes, 11 insns) */
void f_10425a90(void) {
  FTRACE(0x10425a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10425a91 mov ebp, esp */
  EBP = (ESP);
  /* 10425a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425a99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425a9c push eax */
  push32((uint32_t)(EAX));
  /* 10425a9d call 0x10425ab0 */
  push32(0x10425aa2u); f_10425ab0();
  /* 10425aa2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425aa5 pop ebp */
  EBP = (pop32());
  /* 10425aa6 ret  */
  ESPCHK(0x10425a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10425ab0 (787 bytes, 254 insns) */
void f_10425ab0(void) {
  FTRACE(0x10425ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10425ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10425ab3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 10425ab7 push esi */
  push32((uint32_t)(ESI));
  /* 10425ab8 push edi */
  push32((uint32_t)(EDI));
  /* 10425ab9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10425ac0 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 10425ac5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10425ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425aca je 0x10425afc */
  if (C.zf) goto L_10425afc;
L_10425acc:;
  /* 10425acc call 0x10426b80 */
  push32(0x10425ad1u); f_10426b80();
  /* 10425ad1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425ad3 jne 0x10425af6 */
  if (!C.zf) goto L_10425af6;
  /* 10425ad5 push 0x1044c6a8 */
  push32((uint32_t)(0x1044c6a8u));
  /* 10425ada push 0 */
  push32((uint32_t)(0x0u));
  /* 10425adc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10425ae1 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10425ae6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10425ae8 call 0x10424aa0 */
  push32(0x10425aedu); f_10424aa0();
  /* 10425aed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425af3 jne 0x10425af6 */
  if (!C.zf) goto L_10425af6;
  /* 10425af5 int3  */
  x86_unimpl("int3 @ 0x10425af5");
L_10425af6:;
  /* 10425af6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10425af8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10425afa jne 0x10425acc */
  if (!C.zf) goto L_10425acc;
L_10425afc:;
  /* 10425afc mov edx, dword ptr [0x1044fa88] */
  EDX = (r32((uint32_t)(0x1044fa88)));
  /* 10425b02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10425b05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425b08 cmp eax, dword ptr [0x1044fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1044fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425b0e jne 0x10425b11 */
  if (!C.zf) goto L_10425b11;
  /* 10425b10 int3  */
  x86_unimpl("int3 @ 0x10425b10");
L_10425b11:;
  /* 10425b11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425b14 push ecx */
  push32((uint32_t)(ECX));
  /* 10425b15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425b18 push edx */
  push32((uint32_t)(EDX));
  /* 10425b19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425b1c push eax */
  push32((uint32_t)(EAX));
  /* 10425b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425b20 push ecx */
  push32((uint32_t)(ECX));
  /* 10425b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425b24 push edx */
  push32((uint32_t)(EDX));
  /* 10425b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425b29 call dword ptr [0x1044fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1044fc90))), 0x10425b2fu);
  /* 10425b2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425b34 jne 0x10425b94 */
  if (!C.zf) goto L_10425b94;
  /* 10425b36 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425b3a je 0x10425b67 */
  if (C.zf) goto L_10425b67;
L_10425b3c:;
  /* 10425b3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425b3f push eax */
  push32((uint32_t)(EAX));
  /* 10425b40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10425b44 push 0x1044c664 */
  push32((uint32_t)(0x1044c664u));
  /* 10425b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b51 call 0x10424aa0 */
  push32(0x10425b56u); f_10424aa0();
  /* 10425b56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425b59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425b5c jne 0x10425b5f */
  if (!C.zf) goto L_10425b5f;
  /* 10425b5e int3  */
  x86_unimpl("int3 @ 0x10425b5e");
L_10425b5f:;
  /* 10425b5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10425b61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10425b63 jne 0x10425b3c */
  if (!C.zf) goto L_10425b3c;
  /* 10425b65 jmp 0x10425b8d */
  goto L_10425b8d;
L_10425b67:;
  /* 10425b67 push 0x1044c640 */
  push32((uint32_t)(0x1044c640u));
  /* 10425b6c push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10425b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425b79 call 0x10424aa0 */
  push32(0x10425b7eu); f_10424aa0();
  /* 10425b7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425b81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425b84 jne 0x10425b87 */
  if (!C.zf) goto L_10425b87;
  /* 10425b86 int3  */
  x86_unimpl("int3 @ 0x10425b86");
L_10425b87:;
  /* 10425b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425b8b jne 0x10425b67 */
  if (!C.zf) goto L_10425b67;
L_10425b8d:;
  /* 10425b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425b8f jmp 0x10425dbc */
  goto L_10425dbc;
L_10425b94:;
  /* 10425b94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425b97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10425b9d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425ba0 je 0x10425bb6 */
  if (C.zf) goto L_10425bb6;
  /* 10425ba2 mov edx, dword ptr [0x1044fa84] */
  EDX = (r32((uint32_t)(0x1044fa84)));
  /* 10425ba8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10425bab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10425bad jne 0x10425bb6 */
  if (!C.zf) goto L_10425bb6;
  /* 10425baf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10425bb6:;
  /* 10425bb6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425bba ja 0x10425bc7 */
  if ((!C.cf&&!C.zf)) goto L_10425bc7;
  /* 10425bbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425bbf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425bc2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425bc5 jbe 0x10425bf3 */
  if ((C.cf||C.zf)) goto L_10425bf3;
L_10425bc7:;
  /* 10425bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425bca push ecx */
  push32((uint32_t)(ECX));
  /* 10425bcb push 0x1044c618 */
  push32((uint32_t)(0x1044c618u));
  /* 10425bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425bd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425bd8 call 0x10424aa0 */
  push32(0x10425bddu); f_10424aa0();
  /* 10425bdd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425be0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425be3 jne 0x10425be6 */
  if (!C.zf) goto L_10425be6;
  /* 10425be5 int3  */
  x86_unimpl("int3 @ 0x10425be5");
L_10425be6:;
  /* 10425be6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10425be8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10425bea jne 0x10425bc7 */
  if (!C.zf) goto L_10425bc7;
  /* 10425bec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425bee jmp 0x10425dbc */
  goto L_10425dbc;
L_10425bf3:;
  /* 10425bf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425bf6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10425bfb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425bfe je 0x10425c40 */
  if (C.zf) goto L_10425c40;
  /* 10425c00 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c04 je 0x10425c40 */
  if (C.zf) goto L_10425c40;
  /* 10425c06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425c09 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10425c0f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c12 je 0x10425c40 */
  if (C.zf) goto L_10425c40;
  /* 10425c14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c18 je 0x10425c40 */
  if (C.zf) goto L_10425c40;
L_10425c1a:;
  /* 10425c1a push 0x1044c5e4 */
  push32((uint32_t)(0x1044c5e4u));
  /* 10425c1f push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10425c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10425c2c call 0x10424aa0 */
  push32(0x10425c31u); f_10424aa0();
  /* 10425c31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425c34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c37 jne 0x10425c3a */
  if (!C.zf) goto L_10425c3a;
  /* 10425c39 int3  */
  x86_unimpl("int3 @ 0x10425c39");
L_10425c3a:;
  /* 10425c3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10425c3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10425c3e jne 0x10425c1a */
  if (!C.zf) goto L_10425c1a;
L_10425c40:;
  /* 10425c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425c43 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425c46 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10425c49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10425c4c push ecx */
  push32((uint32_t)(ECX));
  /* 10425c4d call 0x10429830 */
  push32(0x10425c52u); f_10429830();
  /* 10425c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425c55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425c58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c5c jne 0x10425c65 */
  if (!C.zf) goto L_10425c65;
  /* 10425c5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425c60 jmp 0x10425dbc */
  goto L_10425dbc;
L_10425c65:;
  /* 10425c65 mov edx, dword ptr [0x1044fa88] */
  EDX = (r32((uint32_t)(0x1044fa88)));
  /* 10425c6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425c6e mov dword ptr [0x1044fa88], edx */
  w32((uint32_t)(0x1044fa88), (EDX));
  /* 10425c74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425c78 je 0x10425cc3 */
  if (C.zf) goto L_10425cc3;
  /* 10425c7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425c7d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10425c83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425c86 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10425c8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425c90 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10425c97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425c9a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10425ca1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425ca4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425ca7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10425caa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425cad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10425cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425cb7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10425cbe jmp 0x10425d63 */
  goto L_10425d63;
L_10425cc3:;
  /* 10425cc3 mov edx, dword ptr [0x104515c0] */
  EDX = (r32((uint32_t)(0x104515c0)));
  /* 10425cc9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425ccc mov dword ptr [0x104515c0], edx */
  w32((uint32_t)(0x104515c0), (EDX));
  /* 10425cd2 mov eax, dword ptr [0x104515c8] */
  EAX = (r32((uint32_t)(0x104515c8)));
  /* 10425cd7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425cda mov dword ptr [0x104515c8], eax */
  w32((uint32_t)(0x104515c8), (EAX));
  /* 10425cdf mov ecx, dword ptr [0x104515c8] */
  ECX = (r32((uint32_t)(0x104515c8)));
  /* 10425ce5 cmp ecx, dword ptr [0x104515cc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x104515cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425ceb jbe 0x10425cf9 */
  if ((C.cf||C.zf)) goto L_10425cf9;
  /* 10425ced mov edx, dword ptr [0x104515c8] */
  EDX = (r32((uint32_t)(0x104515c8)));
  /* 10425cf3 mov dword ptr [0x104515cc], edx */
  w32((uint32_t)(0x104515cc), (EDX));
L_10425cf9:;
  /* 10425cf9 cmp dword ptr [0x104515c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104515c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425d00 je 0x10425d0f */
  if (C.zf) goto L_10425d0f;
  /* 10425d02 mov eax, dword ptr [0x104515c4] */
  EAX = (r32((uint32_t)(0x104515c4)));
  /* 10425d07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10425d0d jmp 0x10425d18 */
  goto L_10425d18;
L_10425d0f:;
  /* 10425d0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d12 mov dword ptr [0x104515bc], edx */
  w32((uint32_t)(0x104515bc), (EDX));
L_10425d18:;
  /* 10425d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d1b mov ecx, dword ptr [0x104515c4] */
  ECX = (r32((uint32_t)(0x104515c4)));
  /* 10425d21 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10425d23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d26 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10425d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425d33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10425d36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425d3c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10425d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425d45 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10425d48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425d4e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10425d51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425d57 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10425d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d5d mov dword ptr [0x104515c4], ecx */
  w32((uint32_t)(0x104515c4), (ECX));
L_10425d63:;
  /* 10425d63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10425d65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10425d67 mov dl, byte ptr [0x1044fa90] */
  DL = (r8((uint32_t)(0x1044fa90)));
  /* 10425d6d push edx */
  push32((uint32_t)(EDX));
  /* 10425d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d71 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425d74 push eax */
  push32((uint32_t)(EAX));
  /* 10425d75 call 0x10429750 */
  push32(0x10425d7au); f_10429750();
  /* 10425d7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425d7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10425d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10425d81 mov cl, byte ptr [0x1044fa90] */
  CL = (r8((uint32_t)(0x1044fa90)));
  /* 10425d87 push ecx */
  push32((uint32_t)(ECX));
  /* 10425d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425d8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425d8e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10425d92 push ecx */
  push32((uint32_t)(ECX));
  /* 10425d93 call 0x10429750 */
  push32(0x10425d98u); f_10429750();
  /* 10425d98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425d9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425d9e push edx */
  push32((uint32_t)(EDX));
  /* 10425d9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425da1 mov al, byte ptr [0x1044fa92] */
  AL = (r8((uint32_t)(0x1044fa92)));
  /* 10425da6 push eax */
  push32((uint32_t)(EAX));
  /* 10425da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425daa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425dad push ecx */
  push32((uint32_t)(ECX));
  /* 10425dae call 0x10429750 */
  push32(0x10425db3u); f_10429750();
  /* 10425db3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425db6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425db9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10425dbc:;
  /* 10425dbc pop edi */
  EDI = (pop32());
  /* 10425dbd pop esi */
  ESI = (pop32());
  /* 10425dbe pop ebx */
  EBX = (pop32());
  /* 10425dbf mov esp, ebp */
  ESP = (EBP);
  /* 10425dc1 pop ebp */
  EBP = (pop32());
  /* 10425dc2 ret  */
  ESPCHK(0x10425ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x10425dd0 (27 bytes, 13 insns) */
void f_10425dd0(void) {
  FTRACE(0x10425dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10425dd1 mov ebp, esp */
  EBP = (ESP);
  /* 10425dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425dd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425dd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425ddc push eax */
  push32((uint32_t)(EAX));
  /* 10425ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425de0 push ecx */
  push32((uint32_t)(ECX));
  /* 10425de1 call 0x10425df0 */
  push32(0x10425de6u); f_10425df0();
  /* 10425de6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425de9 pop ebp */
  EBP = (pop32());
  /* 10425dea ret  */
  ESPCHK(0x10425dd0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10425df0 (96 bytes, 37 insns) */
void f_10425df0(void) {
  FTRACE(0x10425df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425df0 push ebp */
  push32((uint32_t)(EBP));
  /* 10425df1 mov ebp, esp */
  EBP = (ESP);
  /* 10425df3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425df9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10425dfd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10425e00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10425e04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425e07 push edx */
  push32((uint32_t)(EDX));
  /* 10425e08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425e0b push eax */
  push32((uint32_t)(EAX));
  /* 10425e0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425e0f push ecx */
  push32((uint32_t)(ECX));
  /* 10425e10 call 0x104259e0 */
  push32(0x10425e15u); f_104259e0();
  /* 10425e15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10425e1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425e1f je 0x10425e49 */
  if (C.zf) goto L_10425e49;
  /* 10425e21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425e24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10425e27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10425e2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10425e30:;
  /* 10425e30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10425e33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425e36 jae 0x10425e49 */
  if (!C.cf) goto L_10425e49;
  /* 10425e38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10425e3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10425e3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10425e41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10425e47 jmp 0x10425e30 */
  goto L_10425e30;
L_10425e49:;
  /* 10425e49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10425e4c mov esp, ebp */
  ESP = (EBP);
  /* 10425e4e pop ebp */
  EBP = (pop32());
  /* 10425e4f ret  */
  ESPCHK(0x10425df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e50 @ 0x10425e50 (27 bytes, 13 insns) */
void f_10425e50(void) {
  FTRACE(0x10425e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10425e51 mov ebp, esp */
  EBP = (ESP);
  /* 10425e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425e5c push eax */
  push32((uint32_t)(EAX));
  /* 10425e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10425e61 call 0x10425e70 */
  push32(0x10425e66u); f_10425e70();
  /* 10425e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e69 pop ebp */
  EBP = (pop32());
  /* 10425e6a ret  */
  ESPCHK(0x10425e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e70 @ 0x10425e70 (64 bytes, 27 insns) */
void f_10425e70(void) {
  FTRACE(0x10425e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10425e71 mov ebp, esp */
  EBP = (ESP);
  /* 10425e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10425e74 push 9 */
  push32((uint32_t)(0x9u));
  /* 10425e76 call 0x104293e0 */
  push32(0x10425e7bu); f_104293e0();
  /* 10425e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10425e80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425e83 push eax */
  push32((uint32_t)(EAX));
  /* 10425e84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425e87 push ecx */
  push32((uint32_t)(ECX));
  /* 10425e88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425e8b push edx */
  push32((uint32_t)(EDX));
  /* 10425e8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425e8f push eax */
  push32((uint32_t)(EAX));
  /* 10425e90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425e93 push ecx */
  push32((uint32_t)(ECX));
  /* 10425e94 call 0x10425eb0 */
  push32(0x10425e99u); f_10425eb0();
  /* 10425e99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425e9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10425e9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10425ea1 call 0x10429480 */
  push32(0x10425ea6u); f_10429480();
  /* 10425ea6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425ea9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10425eac mov esp, ebp */
  ESP = (EBP);
  /* 10425eae pop ebp */
  EBP = (pop32());
  /* 10425eaf ret  */
  ESPCHK(0x10425e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x10425eb0 (1297 bytes, 431 insns) */
void f_10425eb0(void) {
  FTRACE(0x10425eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10425eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10425eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10425eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10425eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10425eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10425eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10425eb9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10425ec0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425ec4 jne 0x10425ee3 */
  if (!C.zf) goto L_10425ee3;
  /* 10425ec6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425ec9 push eax */
  push32((uint32_t)(EAX));
  /* 10425eca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10425ece mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425ed1 push edx */
  push32((uint32_t)(EDX));
  /* 10425ed2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425ed5 push eax */
  push32((uint32_t)(EAX));
  /* 10425ed6 call 0x104259e0 */
  push32(0x10425edbu); f_104259e0();
  /* 10425edb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425ede jmp 0x104263ba */
  goto L_104263ba;
L_10425ee3:;
  /* 10425ee3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425ee7 je 0x10425f06 */
  if (C.zf) goto L_10425f06;
  /* 10425ee9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425eed jne 0x10425f06 */
  if (!C.zf) goto L_10425f06;
  /* 10425eef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425ef2 push ecx */
  push32((uint32_t)(ECX));
  /* 10425ef3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425ef6 push edx */
  push32((uint32_t)(EDX));
  /* 10425ef7 call 0x10426470 */
  push32(0x10425efcu); f_10426470();
  /* 10425efc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425f01 jmp 0x104263ba */
  goto L_104263ba;
L_10425f06:;
  /* 10425f06 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 10425f0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10425f0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425f10 je 0x10425f42 */
  if (C.zf) goto L_10425f42;
L_10425f12:;
  /* 10425f12 call 0x10426b80 */
  push32(0x10425f17u); f_10426b80();
  /* 10425f17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425f19 jne 0x10425f3c */
  if (!C.zf) goto L_10425f3c;
  /* 10425f1b push 0x1044c6a8 */
  push32((uint32_t)(0x1044c6a8u));
  /* 10425f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425f22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10425f27 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10425f2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10425f2e call 0x10424aa0 */
  push32(0x10425f33u); f_10424aa0();
  /* 10425f33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425f36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425f39 jne 0x10425f3c */
  if (!C.zf) goto L_10425f3c;
  /* 10425f3b int3  */
  x86_unimpl("int3 @ 0x10425f3b");
L_10425f3c:;
  /* 10425f3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10425f3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10425f40 jne 0x10425f12 */
  if (!C.zf) goto L_10425f12;
L_10425f42:;
  /* 10425f42 mov edx, dword ptr [0x1044fa88] */
  EDX = (r32((uint32_t)(0x1044fa88)));
  /* 10425f48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10425f4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10425f4e cmp eax, dword ptr [0x1044fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1044fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425f54 jne 0x10425f57 */
  if (!C.zf) goto L_10425f57;
  /* 10425f56 int3  */
  x86_unimpl("int3 @ 0x10425f56");
L_10425f57:;
  /* 10425f57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425f5a push ecx */
  push32((uint32_t)(ECX));
  /* 10425f5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425f5e push edx */
  push32((uint32_t)(EDX));
  /* 10425f5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10425f62 push eax */
  push32((uint32_t)(EAX));
  /* 10425f63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10425f66 push ecx */
  push32((uint32_t)(ECX));
  /* 10425f67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425f6a push edx */
  push32((uint32_t)(EDX));
  /* 10425f6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10425f6e push eax */
  push32((uint32_t)(EAX));
  /* 10425f6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10425f71 call dword ptr [0x1044fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1044fc90))), 0x10425f77u);
  /* 10425f77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425f7c jne 0x10425fdc */
  if (!C.zf) goto L_10425fdc;
  /* 10425f7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425f82 je 0x10425faf */
  if (C.zf) goto L_10425faf;
L_10425f84:;
  /* 10425f84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10425f87 push ecx */
  push32((uint32_t)(ECX));
  /* 10425f88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10425f8b push edx */
  push32((uint32_t)(EDX));
  /* 10425f8c push 0x1044c824 */
  push32((uint32_t)(0x1044c824u));
  /* 10425f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425f95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425f99 call 0x10424aa0 */
  push32(0x10425f9eu); f_10424aa0();
  /* 10425f9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425fa1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425fa4 jne 0x10425fa7 */
  if (!C.zf) goto L_10425fa7;
  /* 10425fa6 int3  */
  x86_unimpl("int3 @ 0x10425fa6");
L_10425fa7:;
  /* 10425fa7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425fa9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10425fab jne 0x10425f84 */
  if (!C.zf) goto L_10425f84;
  /* 10425fad jmp 0x10425fd5 */
  goto L_10425fd5;
L_10425faf:;
  /* 10425faf push 0x1044c800 */
  push32((uint32_t)(0x1044c800u));
  /* 10425fb4 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10425fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fc1 call 0x10424aa0 */
  push32(0x10425fc6u); f_10424aa0();
  /* 10425fc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425fc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425fcc jne 0x10425fcf */
  if (!C.zf) goto L_10425fcf;
  /* 10425fce int3  */
  x86_unimpl("int3 @ 0x10425fce");
L_10425fcf:;
  /* 10425fcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10425fd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10425fd3 jne 0x10425faf */
  if (!C.zf) goto L_10425faf;
L_10425fd5:;
  /* 10425fd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10425fd7 jmp 0x104263ba */
  goto L_104263ba;
L_10425fdc:;
  /* 10425fdc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425fe0 jbe 0x1042600e */
  if ((C.cf||C.zf)) goto L_1042600e;
L_10425fe2:;
  /* 10425fe2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10425fe5 push edx */
  push32((uint32_t)(EDX));
  /* 10425fe6 push 0x1044c7d0 */
  push32((uint32_t)(0x1044c7d0u));
  /* 10425feb push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fed push 0 */
  push32((uint32_t)(0x0u));
  /* 10425fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10425ff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10425ff3 call 0x10424aa0 */
  push32(0x10425ff8u); f_10424aa0();
  /* 10425ff8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10425ffb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10425ffe jne 0x10426001 */
  if (!C.zf) goto L_10426001;
  /* 10426000 int3  */
  x86_unimpl("int3 @ 0x10426000");
L_10426001:;
  /* 10426001 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426005 jne 0x10425fe2 */
  if (!C.zf) goto L_10425fe2;
  /* 10426007 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426009 jmp 0x104263ba */
  goto L_104263ba;
L_1042600e:;
  /* 1042600e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426012 je 0x10426056 */
  if (C.zf) goto L_10426056;
  /* 10426014 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10426017 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042601d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426020 je 0x10426056 */
  if (C.zf) goto L_10426056;
  /* 10426022 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10426025 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042602b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042602e je 0x10426056 */
  if (C.zf) goto L_10426056;
L_10426030:;
  /* 10426030 push 0x1044c5e4 */
  push32((uint32_t)(0x1044c5e4u));
  /* 10426035 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 1042603a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042603c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042603e push 0 */
  push32((uint32_t)(0x0u));
  /* 10426040 push 1 */
  push32((uint32_t)(0x1u));
  /* 10426042 call 0x10424aa0 */
  push32(0x10426047u); f_10424aa0();
  /* 10426047 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042604a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042604d jne 0x10426050 */
  if (!C.zf) goto L_10426050;
  /* 1042604f int3  */
  x86_unimpl("int3 @ 0x1042604f");
L_10426050:;
  /* 10426050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426052 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426054 jne 0x10426030 */
  if (!C.zf) goto L_10426030;
L_10426056:;
  /* 10426056 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426059 push ecx */
  push32((uint32_t)(ECX));
  /* 1042605a call 0x10426fe0 */
  push32(0x1042605fu); f_10426fe0();
  /* 1042605f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426064 jne 0x10426087 */
  if (!C.zf) goto L_10426087;
  /* 10426066 push 0x1044c7ac */
  push32((uint32_t)(0x1044c7acu));
  /* 1042606b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042606d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10426072 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426077 push 2 */
  push32((uint32_t)(0x2u));
  /* 10426079 call 0x10424aa0 */
  push32(0x1042607eu); f_10424aa0();
  /* 1042607e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426081 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426084 jne 0x10426087 */
  if (!C.zf) goto L_10426087;
  /* 10426086 int3  */
  x86_unimpl("int3 @ 0x10426086");
L_10426087:;
  /* 10426087 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426089 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042608b jne 0x10426056 */
  if (!C.zf) goto L_10426056;
  /* 1042608d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426090 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426093 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10426096 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426099 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042609d jne 0x104260a6 */
  if (!C.zf) goto L_104260a6;
  /* 1042609f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_104260a6:;
  /* 104260a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104260aa je 0x104260ea */
  if (C.zf) goto L_104260ea;
L_104260ac:;
  /* 104260ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104260af cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104260b6 jne 0x104260c1 */
  if (!C.zf) goto L_104260c1;
  /* 104260b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104260bb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104260bf je 0x104260e2 */
  if (C.zf) goto L_104260e2;
L_104260c1:;
  /* 104260c1 push 0x1044c764 */
  push32((uint32_t)(0x1044c764u));
  /* 104260c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104260c8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 104260cd push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104260d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104260d4 call 0x10424aa0 */
  push32(0x104260d9u); f_10424aa0();
  /* 104260d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104260dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104260df jne 0x104260e2 */
  if (!C.zf) goto L_104260e2;
  /* 104260e1 int3  */
  x86_unimpl("int3 @ 0x104260e1");
L_104260e2:;
  /* 104260e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104260e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104260e6 jne 0x104260ac */
  if (!C.zf) goto L_104260ac;
  /* 104260e8 jmp 0x1042614e */
  goto L_1042614e;
L_104260ea:;
  /* 104260ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104260ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104260f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104260f5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104260f8 jne 0x1042610f */
  if (!C.zf) goto L_1042610f;
  /* 104260fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104260fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426103 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426106 jne 0x1042610f */
  if (!C.zf) goto L_1042610f;
  /* 10426108 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1042610f:;
  /* 1042610f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426112 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426115 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042611a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042611d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426123 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426125 je 0x10426148 */
  if (C.zf) goto L_10426148;
  /* 10426127 push 0x1044c728 */
  push32((uint32_t)(0x1044c728u));
  /* 1042612c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042612e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10426133 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426138 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042613a call 0x10424aa0 */
  push32(0x1042613fu); f_10424aa0();
  /* 1042613f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426142 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426145 jne 0x10426148 */
  if (!C.zf) goto L_10426148;
  /* 10426147 int3  */
  x86_unimpl("int3 @ 0x10426147");
L_10426148:;
  /* 10426148 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042614a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042614c jne 0x1042610f */
  if (!C.zf) goto L_1042610f;
L_1042614e:;
  /* 1042614e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426152 je 0x10426179 */
  if (C.zf) goto L_10426179;
  /* 10426154 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426157 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042615a push eax */
  push32((uint32_t)(EAX));
  /* 1042615b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042615e push ecx */
  push32((uint32_t)(ECX));
  /* 1042615f call 0x10429960 */
  push32(0x10426164u); f_10429960();
  /* 10426164 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426167 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042616a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042616e jne 0x10426177 */
  if (!C.zf) goto L_10426177;
  /* 10426170 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426172 jmp 0x104263ba */
  goto L_104263ba;
L_10426177:;
  /* 10426177 jmp 0x1042619c */
  goto L_1042619c;
L_10426179:;
  /* 10426179 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042617c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042617f push edx */
  push32((uint32_t)(EDX));
  /* 10426180 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426183 push eax */
  push32((uint32_t)(EAX));
  /* 10426184 call 0x104298b0 */
  push32(0x10426189u); f_104298b0();
  /* 10426189 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042618c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042618f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426193 jne 0x1042619c */
  if (!C.zf) goto L_1042619c;
  /* 10426195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426197 jmp 0x104263ba */
  goto L_104263ba;
L_1042619c:;
  /* 1042619c mov ecx, dword ptr [0x1044fa88] */
  ECX = (r32((uint32_t)(0x1044fa88)));
  /* 104261a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104261a5 mov dword ptr [0x1044fa88], ecx */
  w32((uint32_t)(0x1044fa88), (ECX));
  /* 104261ab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104261af jne 0x10426207 */
  if (!C.zf) goto L_10426207;
  /* 104261b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104261b4 mov eax, dword ptr [0x104515c0] */
  EAX = (r32((uint32_t)(0x104515c0)));
  /* 104261b9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104261bc mov dword ptr [0x104515c0], eax */
  w32((uint32_t)(0x104515c0), (EAX));
  /* 104261c1 mov ecx, dword ptr [0x104515c0] */
  ECX = (r32((uint32_t)(0x104515c0)));
  /* 104261c7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104261ca mov dword ptr [0x104515c0], ecx */
  w32((uint32_t)(0x104515c0), (ECX));
  /* 104261d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104261d3 mov eax, dword ptr [0x104515c8] */
  EAX = (r32((uint32_t)(0x104515c8)));
  /* 104261d8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104261db mov dword ptr [0x104515c8], eax */
  w32((uint32_t)(0x104515c8), (EAX));
  /* 104261e0 mov ecx, dword ptr [0x104515c8] */
  ECX = (r32((uint32_t)(0x104515c8)));
  /* 104261e6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104261e9 mov dword ptr [0x104515c8], ecx */
  w32((uint32_t)(0x104515c8), (ECX));
  /* 104261ef mov edx, dword ptr [0x104515c8] */
  EDX = (r32((uint32_t)(0x104515c8)));
  /* 104261f5 cmp edx, dword ptr [0x104515cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x104515cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104261fb jbe 0x10426207 */
  if ((C.cf||C.zf)) goto L_10426207;
  /* 104261fd mov eax, dword ptr [0x104515c8] */
  EAX = (r32((uint32_t)(0x104515c8)));
  /* 10426202 mov dword ptr [0x104515cc], eax */
  w32((uint32_t)(0x104515cc), (EAX));
L_10426207:;
  /* 10426207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042620a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042620d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10426210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426213 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426216 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426219 jbe 0x1042623f */
  if ((C.cf||C.zf)) goto L_1042623f;
  /* 1042621b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042621e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426221 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426224 push edx */
  push32((uint32_t)(EDX));
  /* 10426225 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426227 mov al, byte ptr [0x1044fa92] */
  AL = (r8((uint32_t)(0x1044fa92)));
  /* 1042622c push eax */
  push32((uint32_t)(EAX));
  /* 1042622d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426230 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426233 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426236 push edx */
  push32((uint32_t)(EDX));
  /* 10426237 call 0x10429750 */
  push32(0x1042623cu); f_10429750();
  /* 1042623c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042623f:;
  /* 1042623f push 4 */
  push32((uint32_t)(0x4u));
  /* 10426241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426243 mov al, byte ptr [0x1044fa90] */
  AL = (r8((uint32_t)(0x1044fa90)));
  /* 10426248 push eax */
  push32((uint32_t)(EAX));
  /* 10426249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042624c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042624f push ecx */
  push32((uint32_t)(ECX));
  /* 10426250 call 0x10429750 */
  push32(0x10426255u); f_10429750();
  /* 10426255 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426258 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042625c jne 0x10426279 */
  if (!C.zf) goto L_10426279;
  /* 1042625e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426261 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10426264 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10426267 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042626a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042626d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10426270 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426273 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10426276 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10426279:;
  /* 10426279 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042627c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042627f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10426282:;
  /* 10426282 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426286 jne 0x104262b7 */
  if (!C.zf) goto L_104262b7;
  /* 10426288 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042628c jne 0x10426296 */
  if (!C.zf) goto L_10426296;
  /* 1042628e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426291 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426294 je 0x104262b7 */
  if (C.zf) goto L_104262b7;
L_10426296:;
  /* 10426296 push 0x1044c6f4 */
  push32((uint32_t)(0x1044c6f4u));
  /* 1042629b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042629d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 104262a2 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104262a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104262a9 call 0x10424aa0 */
  push32(0x104262aeu); f_10424aa0();
  /* 104262ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104262b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104262b4 jne 0x104262b7 */
  if (!C.zf) goto L_104262b7;
  /* 104262b6 int3  */
  x86_unimpl("int3 @ 0x104262b6");
L_104262b7:;
  /* 104262b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104262b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104262bb jne 0x10426282 */
  if (!C.zf) goto L_10426282;
  /* 104262bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104262c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104262c3 je 0x104262cb */
  if (C.zf) goto L_104262cb;
  /* 104262c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104262c9 je 0x104262d3 */
  if (C.zf) goto L_104262d3;
L_104262cb:;
  /* 104262cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104262ce jmp 0x104263ba */
  goto L_104263ba;
L_104262d3:;
  /* 104262d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104262d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104262d9 je 0x104262eb */
  if (C.zf) goto L_104262eb;
  /* 104262db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104262de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104262e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104262e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104262e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 104262e9 jmp 0x10426327 */
  goto L_10426327;
L_104262eb:;
  /* 104262eb mov eax, dword ptr [0x104515bc] */
  EAX = (r32((uint32_t)(0x104515bc)));
  /* 104262f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104262f3 je 0x10426316 */
  if (C.zf) goto L_10426316;
  /* 104262f5 push 0x1044c6d8 */
  push32((uint32_t)(0x1044c6d8u));
  /* 104262fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104262fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10426301 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426306 push 2 */
  push32((uint32_t)(0x2u));
  /* 10426308 call 0x10424aa0 */
  push32(0x1042630du); f_10424aa0();
  /* 1042630d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426310 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426313 jne 0x10426316 */
  if (!C.zf) goto L_10426316;
  /* 10426315 int3  */
  x86_unimpl("int3 @ 0x10426315");
L_10426316:;
  /* 10426316 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10426318 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042631a jne 0x104262eb */
  if (!C.zf) goto L_104262eb;
  /* 1042631c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042631f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10426322 mov dword ptr [0x104515bc], eax */
  w32((uint32_t)(0x104515bc), (EAX));
L_10426327:;
  /* 10426327 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042632a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042632e je 0x1042633f */
  if (C.zf) goto L_1042633f;
  /* 10426330 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426333 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10426336 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426339 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042633b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1042633d jmp 0x1042637a */
  goto L_1042637a;
L_1042633f:;
  /* 1042633f mov eax, dword ptr [0x104515c4] */
  EAX = (r32((uint32_t)(0x104515c4)));
  /* 10426344 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426347 je 0x1042636a */
  if (C.zf) goto L_1042636a;
  /* 10426349 push 0x1044c6bc */
  push32((uint32_t)(0x1044c6bcu));
  /* 1042634e push 0 */
  push32((uint32_t)(0x0u));
  /* 10426350 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10426355 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 1042635a push 2 */
  push32((uint32_t)(0x2u));
  /* 1042635c call 0x10424aa0 */
  push32(0x10426361u); f_10424aa0();
  /* 10426361 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426364 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426367 jne 0x1042636a */
  if (!C.zf) goto L_1042636a;
  /* 10426369 int3  */
  x86_unimpl("int3 @ 0x10426369");
L_1042636a:;
  /* 1042636a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042636c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042636e jne 0x1042633f */
  if (!C.zf) goto L_1042633f;
  /* 10426370 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426373 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10426375 mov dword ptr [0x104515c4], eax */
  w32((uint32_t)(0x104515c4), (EAX));
L_1042637a:;
  /* 1042637a cmp dword ptr [0x104515c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104515c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426381 je 0x10426391 */
  if (C.zf) goto L_10426391;
  /* 10426383 mov ecx, dword ptr [0x104515c4] */
  ECX = (r32((uint32_t)(0x104515c4)));
  /* 10426389 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042638c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1042638f jmp 0x10426399 */
  goto L_10426399;
L_10426391:;
  /* 10426391 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426394 mov dword ptr [0x104515bc], eax */
  w32((uint32_t)(0x104515bc), (EAX));
L_10426399:;
  /* 10426399 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042639c mov edx, dword ptr [0x104515c4] */
  EDX = (r32((uint32_t)(0x104515c4)));
  /* 104263a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104263a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104263a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 104263ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104263b1 mov dword ptr [0x104515c4], ecx */
  w32((uint32_t)(0x104515c4), (ECX));
  /* 104263b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104263ba:;
  /* 104263ba pop edi */
  EDI = (pop32());
  /* 104263bb pop esi */
  ESI = (pop32());
  /* 104263bc pop ebx */
  EBX = (pop32());
  /* 104263bd mov esp, ebp */
  ESP = (EBP);
  /* 104263bf pop ebp */
  EBP = (pop32());
  /* 104263c0 ret  */
  ESPCHK(0x10425eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063d0 @ 0x104263d0 (27 bytes, 13 insns) */
void f_104263d0(void) {
  FTRACE(0x104263d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104263d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104263d1 mov ebp, esp */
  EBP = (ESP);
  /* 104263d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104263d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104263d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 104263d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104263dc push eax */
  push32((uint32_t)(EAX));
  /* 104263dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104263e0 push ecx */
  push32((uint32_t)(ECX));
  /* 104263e1 call 0x104263f0 */
  push32(0x104263e6u); f_104263f0();
  /* 104263e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104263e9 pop ebp */
  EBP = (pop32());
  /* 104263ea ret  */
  ESPCHK(0x104263d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100063f0 @ 0x104263f0 (64 bytes, 27 insns) */
void f_104263f0(void) {
  FTRACE(0x104263f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104263f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104263f1 mov ebp, esp */
  EBP = (ESP);
  /* 104263f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104263f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104263f6 call 0x104293e0 */
  push32(0x104263fbu); f_104293e0();
  /* 104263fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104263fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10426400 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10426403 push eax */
  push32((uint32_t)(EAX));
  /* 10426404 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10426407 push ecx */
  push32((uint32_t)(ECX));
  /* 10426408 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042640b push edx */
  push32((uint32_t)(EDX));
  /* 1042640c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042640f push eax */
  push32((uint32_t)(EAX));
  /* 10426410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426413 push ecx */
  push32((uint32_t)(ECX));
  /* 10426414 call 0x10425eb0 */
  push32(0x10426419u); f_10425eb0();
  /* 10426419 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042641c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042641f push 9 */
  push32((uint32_t)(0x9u));
  /* 10426421 call 0x10429480 */
  push32(0x10426426u); f_10429480();
  /* 10426426 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426429 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042642c mov esp, ebp */
  ESP = (EBP);
  /* 1042642e pop ebp */
  EBP = (pop32());
  /* 1042642f ret  */
  ESPCHK(0x104263f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006430 @ 0x10426430 (19 bytes, 9 insns) */
void f_10426430(void) {
  FTRACE(0x10426430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426430 push ebp */
  push32((uint32_t)(EBP));
  /* 10426431 mov ebp, esp */
  EBP = (ESP);
  /* 10426433 push 1 */
  push32((uint32_t)(0x1u));
  /* 10426435 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426438 push eax */
  push32((uint32_t)(EAX));
  /* 10426439 call 0x10426470 */
  push32(0x1042643eu); f_10426470();
  /* 1042643e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426441 pop ebp */
  EBP = (pop32());
  /* 10426442 ret  */
  ESPCHK(0x10426430u, _esp0);
  ESP += 4; return;
}

/* FUN_10006450 @ 0x10426450 (19 bytes, 9 insns) */
void f_10426450(void) {
  FTRACE(0x10426450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426450 push ebp */
  push32((uint32_t)(EBP));
  /* 10426451 mov ebp, esp */
  EBP = (ESP);
  /* 10426453 push 1 */
  push32((uint32_t)(0x1u));
  /* 10426455 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426458 push eax */
  push32((uint32_t)(EAX));
  /* 10426459 call 0x104264a0 */
  push32(0x1042645eu); f_104264a0();
  /* 1042645e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426461 pop ebp */
  EBP = (pop32());
  /* 10426462 ret  */
  ESPCHK(0x10426450u, _esp0);
  ESP += 4; return;
}

/* FUN_10006470 @ 0x10426470 (41 bytes, 16 insns) */
void f_10426470(void) {
  FTRACE(0x10426470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426470 push ebp */
  push32((uint32_t)(EBP));
  /* 10426471 mov ebp, esp */
  EBP = (ESP);
  /* 10426473 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426475 call 0x104293e0 */
  push32(0x1042647au); f_104293e0();
  /* 1042647a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042647d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426480 push eax */
  push32((uint32_t)(EAX));
  /* 10426481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426484 push ecx */
  push32((uint32_t)(ECX));
  /* 10426485 call 0x104264a0 */
  push32(0x1042648au); f_104264a0();
  /* 1042648a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042648d push 9 */
  push32((uint32_t)(0x9u));
  /* 1042648f call 0x10429480 */
  push32(0x10426494u); f_10429480();
  /* 10426494 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426497 pop ebp */
  EBP = (pop32());
  /* 10426498 ret  */
  ESPCHK(0x10426470u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x104264a0 (1004 bytes, 342 insns) */
void f_104264a0(void) {
  FTRACE(0x104264a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104264a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104264a1 mov ebp, esp */
  EBP = (ESP);
  /* 104264a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104264a4 push ebx */
  push32((uint32_t)(EBX));
  /* 104264a5 push esi */
  push32((uint32_t)(ESI));
  /* 104264a6 push edi */
  push32((uint32_t)(EDI));
  /* 104264a7 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 104264ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104264af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104264b1 je 0x104264e3 */
  if (C.zf) goto L_104264e3;
L_104264b3:;
  /* 104264b3 call 0x10426b80 */
  push32(0x104264b8u); f_10426b80();
  /* 104264b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104264ba jne 0x104264dd */
  if (!C.zf) goto L_104264dd;
  /* 104264bc push 0x1044c6a8 */
  push32((uint32_t)(0x1044c6a8u));
  /* 104264c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104264c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 104264c8 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104264cd push 2 */
  push32((uint32_t)(0x2u));
  /* 104264cf call 0x10424aa0 */
  push32(0x104264d4u); f_10424aa0();
  /* 104264d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104264d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104264da jne 0x104264dd */
  if (!C.zf) goto L_104264dd;
  /* 104264dc int3  */
  x86_unimpl("int3 @ 0x104264dc");
L_104264dd:;
  /* 104264dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104264df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104264e1 jne 0x104264b3 */
  if (!C.zf) goto L_104264b3;
L_104264e3:;
  /* 104264e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104264e7 jne 0x104264ee */
  if (!C.zf) goto L_104264ee;
  /* 104264e9 jmp 0x10426885 */
  goto L_10426885;
L_104264ee:;
  /* 104264ee push 0 */
  push32((uint32_t)(0x0u));
  /* 104264f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104264f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104264f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104264f7 push edx */
  push32((uint32_t)(EDX));
  /* 104264f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104264fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104264fd push eax */
  push32((uint32_t)(EAX));
  /* 104264fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10426500 call dword ptr [0x1044fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1044fc90))), 0x10426506u);
  /* 10426506 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042650b jne 0x10426538 */
  if (!C.zf) goto L_10426538;
L_1042650d:;
  /* 1042650d push 0x1044c96c */
  push32((uint32_t)(0x1044c96cu));
  /* 10426512 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426517 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426519 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042651b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042651d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042651f call 0x10424aa0 */
  push32(0x10426524u); f_10424aa0();
  /* 10426524 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426527 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042652a jne 0x1042652d */
  if (!C.zf) goto L_1042652d;
  /* 1042652c int3  */
  x86_unimpl("int3 @ 0x1042652c");
L_1042652d:;
  /* 1042652d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042652f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426531 jne 0x1042650d */
  if (!C.zf) goto L_1042650d;
  /* 10426533 jmp 0x10426885 */
  goto L_10426885;
L_10426538:;
  /* 10426538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042653b push edx */
  push32((uint32_t)(EDX));
  /* 1042653c call 0x10426fe0 */
  push32(0x10426541u); f_10426fe0();
  /* 10426541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426546 jne 0x10426569 */
  if (!C.zf) goto L_10426569;
  /* 10426548 push 0x1044c7ac */
  push32((uint32_t)(0x1044c7acu));
  /* 1042654d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042654f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10426554 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426559 push 2 */
  push32((uint32_t)(0x2u));
  /* 1042655b call 0x10424aa0 */
  push32(0x10426560u); f_10424aa0();
  /* 10426560 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426563 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426566 jne 0x10426569 */
  if (!C.zf) goto L_10426569;
  /* 10426568 int3  */
  x86_unimpl("int3 @ 0x10426568");
L_10426569:;
  /* 10426569 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042656b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042656d jne 0x10426538 */
  if (!C.zf) goto L_10426538;
  /* 1042656f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426572 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426575 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10426578:;
  /* 10426578 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042657b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1042657e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10426583 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426586 je 0x104265cb */
  if (C.zf) goto L_104265cb;
  /* 10426588 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042658b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042658f je 0x104265cb */
  if (C.zf) goto L_104265cb;
  /* 10426591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426594 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426597 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042659c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042659f je 0x104265cb */
  if (C.zf) goto L_104265cb;
  /* 104265a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104265a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104265a8 je 0x104265cb */
  if (C.zf) goto L_104265cb;
  /* 104265aa push 0x1044c944 */
  push32((uint32_t)(0x1044c944u));
  /* 104265af push 0 */
  push32((uint32_t)(0x0u));
  /* 104265b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 104265b6 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104265bb push 2 */
  push32((uint32_t)(0x2u));
  /* 104265bd call 0x10424aa0 */
  push32(0x104265c2u); f_10424aa0();
  /* 104265c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104265c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104265c8 jne 0x104265cb */
  if (!C.zf) goto L_104265cb;
  /* 104265ca int3  */
  x86_unimpl("int3 @ 0x104265ca");
L_104265cb:;
  /* 104265cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104265cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104265cf jne 0x10426578 */
  if (!C.zf) goto L_10426578;
  /* 104265d1 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 104265d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104265d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104265db jne 0x104266a6 */
  if (!C.zf) goto L_104266a6;
  /* 104265e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 104265e3 mov cl, byte ptr [0x1044fa90] */
  CL = (r8((uint32_t)(0x1044fa90)));
  /* 104265e9 push ecx */
  push32((uint32_t)(ECX));
  /* 104265ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104265ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104265f0 push edx */
  push32((uint32_t)(EDX));
  /* 104265f1 call 0x10426af0 */
  push32(0x104265f6u); f_10426af0();
  /* 104265f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104265f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104265fb jne 0x10426640 */
  if (!C.zf) goto L_10426640;
L_104265fd:;
  /* 104265fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426600 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426603 push eax */
  push32((uint32_t)(EAX));
  /* 10426604 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426607 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1042660a push edx */
  push32((uint32_t)(EDX));
  /* 1042660b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042660e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10426611 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426617 mov edx, dword ptr [ecx*4 + 0x1044fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa94)));
  /* 1042661e push edx */
  push32((uint32_t)(EDX));
  /* 1042661f push 0x1044c918 */
  push32((uint32_t)(0x1044c918u));
  /* 10426624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426626 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426628 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042662a push 1 */
  push32((uint32_t)(0x1u));
  /* 1042662c call 0x10424aa0 */
  push32(0x10426631u); f_10424aa0();
  /* 10426631 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426634 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426637 jne 0x1042663a */
  if (!C.zf) goto L_1042663a;
  /* 10426639 int3  */
  x86_unimpl("int3 @ 0x10426639");
L_1042663a:;
  /* 1042663a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042663c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042663e jne 0x104265fd */
  if (!C.zf) goto L_104265fd;
L_10426640:;
  /* 10426640 push 4 */
  push32((uint32_t)(0x4u));
  /* 10426642 mov cl, byte ptr [0x1044fa90] */
  CL = (r8((uint32_t)(0x1044fa90)));
  /* 10426648 push ecx */
  push32((uint32_t)(ECX));
  /* 10426649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042664c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042664f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426652 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10426656 push edx */
  push32((uint32_t)(EDX));
  /* 10426657 call 0x10426af0 */
  push32(0x1042665cu); f_10426af0();
  /* 1042665c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042665f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426661 jne 0x104266a6 */
  if (!C.zf) goto L_104266a6;
L_10426663:;
  /* 10426663 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426666 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426669 push eax */
  push32((uint32_t)(EAX));
  /* 1042666a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042666d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10426670 push edx */
  push32((uint32_t)(EDX));
  /* 10426671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426674 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10426677 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042667d mov edx, dword ptr [ecx*4 + 0x1044fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa94)));
  /* 10426684 push edx */
  push32((uint32_t)(EDX));
  /* 10426685 push 0x1044c8ec */
  push32((uint32_t)(0x1044c8ecu));
  /* 1042668a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042668c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042668e push 0 */
  push32((uint32_t)(0x0u));
  /* 10426690 push 1 */
  push32((uint32_t)(0x1u));
  /* 10426692 call 0x10424aa0 */
  push32(0x10426697u); f_10424aa0();
  /* 10426697 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042669a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042669d jne 0x104266a0 */
  if (!C.zf) goto L_104266a0;
  /* 1042669f int3  */
  x86_unimpl("int3 @ 0x1042669f");
L_104266a0:;
  /* 104266a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104266a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104266a4 jne 0x10426663 */
  if (!C.zf) goto L_10426663;
L_104266a6:;
  /* 104266a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104266a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104266ad jne 0x1042671b */
  if (!C.zf) goto L_1042671b;
L_104266af:;
  /* 104266af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104266b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104266b9 jne 0x104266c4 */
  if (!C.zf) goto L_104266c4;
  /* 104266bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104266be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104266c2 je 0x104266e5 */
  if (C.zf) goto L_104266e5;
L_104266c4:;
  /* 104266c4 push 0x1044c8ac */
  push32((uint32_t)(0x1044c8acu));
  /* 104266c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104266cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 104266d0 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104266d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 104266d7 call 0x10424aa0 */
  push32(0x104266dcu); f_10424aa0();
  /* 104266dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104266df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104266e2 jne 0x104266e5 */
  if (!C.zf) goto L_104266e5;
  /* 104266e4 int3  */
  x86_unimpl("int3 @ 0x104266e4");
L_104266e5:;
  /* 104266e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104266e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104266e9 jne 0x104266af */
  if (!C.zf) goto L_104266af;
  /* 104266eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104266ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104266f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104266f4 push eax */
  push32((uint32_t)(EAX));
  /* 104266f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104266f7 mov cl, byte ptr [0x1044fa91] */
  CL = (r8((uint32_t)(0x1044fa91)));
  /* 104266fd push ecx */
  push32((uint32_t)(ECX));
  /* 104266fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426701 push edx */
  push32((uint32_t)(EDX));
  /* 10426702 call 0x10429750 */
  push32(0x10426707u); f_10429750();
  /* 10426707 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042670a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042670d push eax */
  push32((uint32_t)(EAX));
  /* 1042670e call 0x10429b50 */
  push32(0x10426713u); f_10429b50();
  /* 10426713 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426716 jmp 0x10426885 */
  goto L_10426885;
L_1042671b:;
  /* 1042671b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042671e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426722 jne 0x10426731 */
  if (!C.zf) goto L_10426731;
  /* 10426724 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426728 jne 0x10426731 */
  if (!C.zf) goto L_10426731;
  /* 1042672a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10426731:;
  /* 10426731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426734 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426737 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042673a je 0x1042675d */
  if (C.zf) goto L_1042675d;
  /* 1042673c push 0x1044c88c */
  push32((uint32_t)(0x1044c88cu));
  /* 10426741 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426743 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10426748 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 1042674d push 2 */
  push32((uint32_t)(0x2u));
  /* 1042674f call 0x10424aa0 */
  push32(0x10426754u); f_10424aa0();
  /* 10426754 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426757 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042675a jne 0x1042675d */
  if (!C.zf) goto L_1042675d;
  /* 1042675c int3  */
  x86_unimpl("int3 @ 0x1042675c");
L_1042675d:;
  /* 1042675d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042675f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426761 jne 0x10426731 */
  if (!C.zf) goto L_10426731;
  /* 10426763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426766 mov eax, dword ptr [0x104515c8] */
  EAX = (r32((uint32_t)(0x104515c8)));
  /* 1042676b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042676e mov dword ptr [0x104515c8], eax */
  w32((uint32_t)(0x104515c8), (EAX));
  /* 10426773 mov ecx, dword ptr [0x1044fa84] */
  ECX = (r32((uint32_t)(0x1044fa84)));
  /* 10426779 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1042677c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042677e jne 0x1042685c */
  if (!C.zf) goto L_1042685c;
  /* 10426784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426787 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042678a je 0x1042679c */
  if (C.zf) goto L_1042679c;
  /* 1042678c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042678f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10426791 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426794 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10426797 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1042679a jmp 0x104267da */
  goto L_104267da;
L_1042679c:;
  /* 1042679c mov ecx, dword ptr [0x104515bc] */
  ECX = (r32((uint32_t)(0x104515bc)));
  /* 104267a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104267a5 je 0x104267c8 */
  if (C.zf) goto L_104267c8;
  /* 104267a7 push 0x1044c874 */
  push32((uint32_t)(0x1044c874u));
  /* 104267ac push 0 */
  push32((uint32_t)(0x0u));
  /* 104267ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 104267b3 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104267b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 104267ba call 0x10424aa0 */
  push32(0x104267bfu); f_10424aa0();
  /* 104267bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104267c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104267c5 jne 0x104267c8 */
  if (!C.zf) goto L_104267c8;
  /* 104267c7 int3  */
  x86_unimpl("int3 @ 0x104267c7");
L_104267c8:;
  /* 104267c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104267ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104267cc jne 0x1042679c */
  if (!C.zf) goto L_1042679c;
  /* 104267ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104267d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104267d4 mov dword ptr [0x104515bc], ecx */
  w32((uint32_t)(0x104515bc), (ECX));
L_104267da:;
  /* 104267da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104267dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104267e1 je 0x104267f2 */
  if (C.zf) goto L_104267f2;
  /* 104267e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104267e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104267e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104267ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104267ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 104267f0 jmp 0x1042682f */
  goto L_1042682f;
L_104267f2:;
  /* 104267f2 mov ecx, dword ptr [0x104515c4] */
  ECX = (r32((uint32_t)(0x104515c4)));
  /* 104267f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104267fb je 0x1042681e */
  if (C.zf) goto L_1042681e;
  /* 104267fd push 0x1044c85c */
  push32((uint32_t)(0x1044c85cu));
  /* 10426802 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426804 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10426809 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 1042680e push 2 */
  push32((uint32_t)(0x2u));
  /* 10426810 call 0x10424aa0 */
  push32(0x10426815u); f_10424aa0();
  /* 10426815 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426818 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042681b jne 0x1042681e */
  if (!C.zf) goto L_1042681e;
  /* 1042681d int3  */
  x86_unimpl("int3 @ 0x1042681d");
L_1042681e:;
  /* 1042681e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426820 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426822 jne 0x104267f2 */
  if (!C.zf) goto L_104267f2;
  /* 10426824 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426827 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10426829 mov dword ptr [0x104515c4], ecx */
  w32((uint32_t)(0x104515c4), (ECX));
L_1042682f:;
  /* 1042682f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426832 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10426835 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426838 push eax */
  push32((uint32_t)(EAX));
  /* 10426839 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042683b mov cl, byte ptr [0x1044fa91] */
  CL = (r8((uint32_t)(0x1044fa91)));
  /* 10426841 push ecx */
  push32((uint32_t)(ECX));
  /* 10426842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426845 push edx */
  push32((uint32_t)(EDX));
  /* 10426846 call 0x10429750 */
  push32(0x1042684bu); f_10429750();
  /* 1042684b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042684e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426851 push eax */
  push32((uint32_t)(EAX));
  /* 10426852 call 0x10429b50 */
  push32(0x10426857u); f_10429b50();
  /* 10426857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042685a jmp 0x10426885 */
  goto L_10426885;
L_1042685c:;
  /* 1042685c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042685f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10426866 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426869 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042686c push eax */
  push32((uint32_t)(EAX));
  /* 1042686d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042686f mov cl, byte ptr [0x1044fa91] */
  CL = (r8((uint32_t)(0x1044fa91)));
  /* 10426875 push ecx */
  push32((uint32_t)(ECX));
  /* 10426876 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426879 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042687c push edx */
  push32((uint32_t)(EDX));
  /* 1042687d call 0x10429750 */
  push32(0x10426882u); f_10429750();
  /* 10426882 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10426885:;
  /* 10426885 pop edi */
  EDI = (pop32());
  /* 10426886 pop esi */
  ESI = (pop32());
  /* 10426887 pop ebx */
  EBX = (pop32());
  /* 10426888 mov esp, ebp */
  ESP = (EBP);
  /* 1042688a pop ebp */
  EBP = (pop32());
  /* 1042688b ret  */
  ESPCHK(0x104264a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x10426890 (19 bytes, 9 insns) */
void f_10426890(void) {
  FTRACE(0x10426890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426890 push ebp */
  push32((uint32_t)(EBP));
  /* 10426891 mov ebp, esp */
  EBP = (ESP);
  /* 10426893 push 1 */
  push32((uint32_t)(0x1u));
  /* 10426895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426898 push eax */
  push32((uint32_t)(EAX));
  /* 10426899 call 0x104268b0 */
  push32(0x1042689eu); f_104268b0();
  /* 1042689e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104268a1 pop ebp */
  EBP = (pop32());
  /* 104268a2 ret  */
  ESPCHK(0x10426890u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x104268b0 (342 bytes, 119 insns) */
void f_104268b0(void) {
  FTRACE(0x104268b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104268b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104268b1 mov ebp, esp */
  EBP = (ESP);
  /* 104268b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104268b6 push ebx */
  push32((uint32_t)(EBX));
  /* 104268b7 push esi */
  push32((uint32_t)(ESI));
  /* 104268b8 push edi */
  push32((uint32_t)(EDI));
  /* 104268b9 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 104268be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 104268c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104268c3 je 0x104268f5 */
  if (C.zf) goto L_104268f5;
L_104268c5:;
  /* 104268c5 call 0x10426b80 */
  push32(0x104268cau); f_10426b80();
  /* 104268ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104268cc jne 0x104268ef */
  if (!C.zf) goto L_104268ef;
  /* 104268ce push 0x1044c6a8 */
  push32((uint32_t)(0x1044c6a8u));
  /* 104268d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104268d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 104268da push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104268df push 2 */
  push32((uint32_t)(0x2u));
  /* 104268e1 call 0x10424aa0 */
  push32(0x104268e6u); f_10424aa0();
  /* 104268e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104268e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104268ec jne 0x104268ef */
  if (!C.zf) goto L_104268ef;
  /* 104268ee int3  */
  x86_unimpl("int3 @ 0x104268ee");
L_104268ef:;
  /* 104268ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104268f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104268f3 jne 0x104268c5 */
  if (!C.zf) goto L_104268c5;
L_104268f5:;
  /* 104268f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 104268f7 call 0x104293e0 */
  push32(0x104268fcu); f_104293e0();
  /* 104268fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104268ff:;
  /* 104268ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426902 push edx */
  push32((uint32_t)(EDX));
  /* 10426903 call 0x10426fe0 */
  push32(0x10426908u); f_10426fe0();
  /* 10426908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042690b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042690d jne 0x10426930 */
  if (!C.zf) goto L_10426930;
  /* 1042690f push 0x1044c7ac */
  push32((uint32_t)(0x1044c7acu));
  /* 10426914 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426916 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1042691b push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426920 push 2 */
  push32((uint32_t)(0x2u));
  /* 10426922 call 0x10424aa0 */
  push32(0x10426927u); f_10424aa0();
  /* 10426927 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042692a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042692d jne 0x10426930 */
  if (!C.zf) goto L_10426930;
  /* 1042692f int3  */
  x86_unimpl("int3 @ 0x1042692f");
L_10426930:;
  /* 10426930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426934 jne 0x104268ff */
  if (!C.zf) goto L_104268ff;
  /* 10426936 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426939 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042693c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1042693f:;
  /* 1042693f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426942 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426945 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042694a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042694d je 0x10426992 */
  if (C.zf) goto L_10426992;
  /* 1042694f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426952 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426956 je 0x10426992 */
  if (C.zf) goto L_10426992;
  /* 10426958 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042695b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1042695e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10426963 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426966 je 0x10426992 */
  if (C.zf) goto L_10426992;
  /* 10426968 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042696b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042696f je 0x10426992 */
  if (C.zf) goto L_10426992;
  /* 10426971 push 0x1044c944 */
  push32((uint32_t)(0x1044c944u));
  /* 10426976 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426978 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1042697d push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426982 push 2 */
  push32((uint32_t)(0x2u));
  /* 10426984 call 0x10424aa0 */
  push32(0x10426989u); f_10424aa0();
  /* 10426989 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042698c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042698f jne 0x10426992 */
  if (!C.zf) goto L_10426992;
  /* 10426991 int3  */
  x86_unimpl("int3 @ 0x10426991");
L_10426992:;
  /* 10426992 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426996 jne 0x1042693f */
  if (!C.zf) goto L_1042693f;
  /* 10426998 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042699b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042699f jne 0x104269ae */
  if (!C.zf) goto L_104269ae;
  /* 104269a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104269a5 jne 0x104269ae */
  if (!C.zf) goto L_104269ae;
  /* 104269a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_104269ae:;
  /* 104269ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104269b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104269b5 je 0x104269e9 */
  if (C.zf) goto L_104269e9;
L_104269b7:;
  /* 104269b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104269ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104269bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104269c0 je 0x104269e3 */
  if (C.zf) goto L_104269e3;
  /* 104269c2 push 0x1044c88c */
  push32((uint32_t)(0x1044c88cu));
  /* 104269c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104269c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 104269ce push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 104269d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104269d5 call 0x10424aa0 */
  push32(0x104269dau); f_10424aa0();
  /* 104269da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104269dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104269e0 jne 0x104269e3 */
  if (!C.zf) goto L_104269e3;
  /* 104269e2 int3  */
  x86_unimpl("int3 @ 0x104269e2");
L_104269e3:;
  /* 104269e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104269e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104269e7 jne 0x104269b7 */
  if (!C.zf) goto L_104269b7;
L_104269e9:;
  /* 104269e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104269ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 104269ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104269f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104269f4 call 0x10429480 */
  push32(0x104269f9u); f_10429480();
  /* 104269f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104269fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104269ff pop edi */
  EDI = (pop32());
  /* 10426a00 pop esi */
  ESI = (pop32());
  /* 10426a01 pop ebx */
  EBX = (pop32());
  /* 10426a02 mov esp, ebp */
  ESP = (EBP);
  /* 10426a04 pop ebp */
  EBP = (pop32());
  /* 10426a05 ret  */
  ESPCHK(0x104268b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a10 @ 0x10426a10 (28 bytes, 11 insns) */
void f_10426a10(void) {
  FTRACE(0x10426a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10426a11 mov ebp, esp */
  EBP = (ESP);
  /* 10426a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10426a14 mov eax, dword ptr [0x1044fa8c] */
  EAX = (r32((uint32_t)(0x1044fa8c)));
  /* 10426a19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10426a1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426a1f mov dword ptr [0x1044fa8c], ecx */
  w32((uint32_t)(0x1044fa8c), (ECX));
  /* 10426a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426a28 mov esp, ebp */
  ESP = (EBP);
  /* 10426a2a pop ebp */
  EBP = (pop32());
  /* 10426a2b ret  */
  ESPCHK(0x10426a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a30 @ 0x10426a30 (157 bytes, 59 insns) */
void f_10426a30(void) {
  FTRACE(0x10426a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426a30 push ebp */
  push32((uint32_t)(EBP));
  /* 10426a31 mov ebp, esp */
  EBP = (ESP);
  /* 10426a33 push ecx */
  push32((uint32_t)(ECX));
  /* 10426a34 push ebx */
  push32((uint32_t)(EBX));
  /* 10426a35 push esi */
  push32((uint32_t)(ESI));
  /* 10426a36 push edi */
  push32((uint32_t)(EDI));
  /* 10426a37 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426a39 call 0x104293e0 */
  push32(0x10426a3eu); f_104293e0();
  /* 10426a3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426a41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426a44 push eax */
  push32((uint32_t)(EAX));
  /* 10426a45 call 0x10426fe0 */
  push32(0x10426a4au); f_10426fe0();
  /* 10426a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426a4f je 0x10426abc */
  if (C.zf) goto L_10426abc;
  /* 10426a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426a54 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426a57 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10426a5a:;
  /* 10426a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426a5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426a60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10426a65 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426a68 je 0x10426aad */
  if (C.zf) goto L_10426aad;
  /* 10426a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426a6d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426a71 je 0x10426aad */
  if (C.zf) goto L_10426aad;
  /* 10426a73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426a76 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10426a79 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10426a7e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426a81 je 0x10426aad */
  if (C.zf) goto L_10426aad;
  /* 10426a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426a86 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426a8a je 0x10426aad */
  if (C.zf) goto L_10426aad;
  /* 10426a8c push 0x1044c944 */
  push32((uint32_t)(0x1044c944u));
  /* 10426a91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426a93 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10426a98 push 0x1044c69c */
  push32((uint32_t)(0x1044c69cu));
  /* 10426a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10426a9f call 0x10424aa0 */
  push32(0x10426aa4u); f_10424aa0();
  /* 10426aa4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426aa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426aaa jne 0x10426aad */
  if (!C.zf) goto L_10426aad;
  /* 10426aac int3  */
  x86_unimpl("int3 @ 0x10426aac");
L_10426aad:;
  /* 10426aad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426aaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426ab1 jne 0x10426a5a */
  if (!C.zf) goto L_10426a5a;
  /* 10426ab3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426ab6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426ab9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10426abc:;
  /* 10426abc push 9 */
  push32((uint32_t)(0x9u));
  /* 10426abe call 0x10429480 */
  push32(0x10426ac3u); f_10429480();
  /* 10426ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426ac6 pop edi */
  EDI = (pop32());
  /* 10426ac7 pop esi */
  ESI = (pop32());
  /* 10426ac8 pop ebx */
  EBX = (pop32());
  /* 10426ac9 mov esp, ebp */
  ESP = (EBP);
  /* 10426acb pop ebp */
  EBP = (pop32());
  /* 10426acc ret  */
  ESPCHK(0x10426a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x10426ad0 (28 bytes, 11 insns) */
void f_10426ad0(void) {
  FTRACE(0x10426ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10426ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10426ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10426ad4 mov eax, dword ptr [0x1044fc90] */
  EAX = (r32((uint32_t)(0x1044fc90)));
  /* 10426ad9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10426adc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426adf mov dword ptr [0x1044fc90], ecx */
  w32((uint32_t)(0x1044fc90), (ECX));
  /* 10426ae5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426ae8 mov esp, ebp */
  ESP = (EBP);
  /* 10426aea pop ebp */
  EBP = (pop32());
  /* 10426aeb ret  */
  ESPCHK(0x10426ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006af0 @ 0x10426af0 (136 bytes, 55 insns) */
void f_10426af0(void) {
  FTRACE(0x10426af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10426af1 mov ebp, esp */
  EBP = (ESP);
  /* 10426af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10426af4 push ebx */
  push32((uint32_t)(EBX));
  /* 10426af5 push esi */
  push32((uint32_t)(ESI));
  /* 10426af6 push edi */
  push32((uint32_t)(EDI));
  /* 10426af7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10426afe:;
  /* 10426afe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10426b01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10426b04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426b07 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10426b0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426b0c je 0x10426b6e */
  if (C.zf) goto L_10426b6e;
  /* 10426b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426b11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426b13 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10426b15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426b18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426b1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426b21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426b24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10426b27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426b29 je 0x10426b6c */
  if (C.zf) goto L_10426b6c;
L_10426b2b:;
  /* 10426b2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426b2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10426b33 push eax */
  push32((uint32_t)(EAX));
  /* 10426b34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426b39 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10426b3c push edx */
  push32((uint32_t)(EDX));
  /* 10426b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426b40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426b43 push eax */
  push32((uint32_t)(EAX));
  /* 10426b44 push 0x1044c988 */
  push32((uint32_t)(0x1044c988u));
  /* 10426b49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10426b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10426b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10426b51 call 0x10424aa0 */
  push32(0x10426b56u); f_10424aa0();
  /* 10426b56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426b59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426b5c jne 0x10426b5f */
  if (!C.zf) goto L_10426b5f;
  /* 10426b5e int3  */
  x86_unimpl("int3 @ 0x10426b5e");
L_10426b5f:;
  /* 10426b5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10426b61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426b63 jne 0x10426b2b */
  if (!C.zf) goto L_10426b2b;
  /* 10426b65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10426b6c:;
  /* 10426b6c jmp 0x10426afe */
  goto L_10426afe;
L_10426b6e:;
  /* 10426b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426b71 pop edi */
  EDI = (pop32());
  /* 10426b72 pop esi */
  ESI = (pop32());
  /* 10426b73 pop ebx */
  EBX = (pop32());
  /* 10426b74 mov esp, ebp */
  ESP = (EBP);
  /* 10426b76 pop ebp */
  EBP = (pop32());
  /* 10426b77 ret  */
  ESPCHK(0x10426af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x10426b80 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10426b80(void) {
  FTRACE(0x10426b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10426b81 mov ebp, esp */
  EBP = (ESP);
  /* 10426b83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426b86 push ebx */
  push32((uint32_t)(EBX));
  /* 10426b87 push esi */
  push32((uint32_t)(ESI));
  /* 10426b88 push edi */
  push32((uint32_t)(EDI));
  /* 10426b89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10426b90 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 10426b95 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10426b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426b9a jne 0x10426ba6 */
  if (!C.zf) goto L_10426ba6;
  /* 10426b9c mov eax, 1 */
  EAX = (0x1u);
  /* 10426ba1 jmp 0x10426ed8 */
  goto L_10426ed8;
L_10426ba6:;
  /* 10426ba6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426ba8 call 0x104293e0 */
  push32(0x10426badu); f_104293e0();
  /* 10426bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426bb0 call 0x10429bc0 */
  push32(0x10426bb5u); f_10429bc0();
  /* 10426bb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10426bb8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426bbc je 0x10426cc9 */
  if (C.zf) goto L_10426cc9;
  /* 10426bc2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426bc6 je 0x10426cc9 */
  if (C.zf) goto L_10426cc9;
  /* 10426bcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10426bcf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10426bd2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10426bd5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426bd8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10426bdb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426bdf ja 0x10426c92 */
  if ((!C.cf&&!C.zf)) goto L_10426c92;
  /* 10426be5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10426be8 jmp dword ptr [eax*4 + 0x10426edf] */
  switch (EAX) {
    case 0: goto L_10426c6a;
    case 1: goto L_10426c42;
    case 2: goto L_10426c1a;
    case 3: goto L_10426bef;
    default: x86_unimpl("switch@0x10426be8 out of table"); return;
  }
L_10426bef:;
  /* 10426bef push 0x1044cadc */
  push32((uint32_t)(0x1044cadcu));
  /* 10426bf4 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10426bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10426bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c01 call 0x10424aa0 */
  push32(0x10426c06u); f_10424aa0();
  /* 10426c06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426c0c jne 0x10426c0f */
  if (!C.zf) goto L_10426c0f;
  /* 10426c0e int3  */
  x86_unimpl("int3 @ 0x10426c0e");
L_10426c0f:;
  /* 10426c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10426c11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426c13 jne 0x10426bef */
  if (!C.zf) goto L_10426bef;
  /* 10426c15 jmp 0x10426cb8 */
  goto L_10426cb8;
L_10426c1a:;
  /* 10426c1a push 0x1044cab8 */
  push32((uint32_t)(0x1044cab8u));
  /* 10426c1f push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426c24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c2c call 0x10424aa0 */
  push32(0x10426c31u); f_10424aa0();
  /* 10426c31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426c34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426c37 jne 0x10426c3a */
  if (!C.zf) goto L_10426c3a;
  /* 10426c39 int3  */
  x86_unimpl("int3 @ 0x10426c39");
L_10426c3a:;
  /* 10426c3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426c3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426c3e jne 0x10426c1a */
  if (!C.zf) goto L_10426c1a;
  /* 10426c40 jmp 0x10426cb8 */
  goto L_10426cb8;
L_10426c42:;
  /* 10426c42 push 0x1044ca94 */
  push32((uint32_t)(0x1044ca94u));
  /* 10426c47 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426c4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c54 call 0x10424aa0 */
  push32(0x10426c59u); f_10424aa0();
  /* 10426c59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426c5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426c5f jne 0x10426c62 */
  if (!C.zf) goto L_10426c62;
  /* 10426c61 int3  */
  x86_unimpl("int3 @ 0x10426c61");
L_10426c62:;
  /* 10426c62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426c66 jne 0x10426c42 */
  if (!C.zf) goto L_10426c42;
  /* 10426c68 jmp 0x10426cb8 */
  goto L_10426cb8;
L_10426c6a:;
  /* 10426c6a push 0x1044ca70 */
  push32((uint32_t)(0x1044ca70u));
  /* 10426c6f push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c7c call 0x10424aa0 */
  push32(0x10426c81u); f_10424aa0();
  /* 10426c81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426c84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426c87 jne 0x10426c8a */
  if (!C.zf) goto L_10426c8a;
  /* 10426c89 int3  */
  x86_unimpl("int3 @ 0x10426c89");
L_10426c8a:;
  /* 10426c8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10426c8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426c8e jne 0x10426c6a */
  if (!C.zf) goto L_10426c6a;
  /* 10426c90 jmp 0x10426cb8 */
  goto L_10426cb8;
L_10426c92:;
  /* 10426c92 push 0x1044ca44 */
  push32((uint32_t)(0x1044ca44u));
  /* 10426c97 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10426c9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10426c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ca0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ca2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ca4 call 0x10424aa0 */
  push32(0x10426ca9u); f_10424aa0();
  /* 10426ca9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426caf jne 0x10426cb2 */
  if (!C.zf) goto L_10426cb2;
  /* 10426cb1 int3  */
  x86_unimpl("int3 @ 0x10426cb1");
L_10426cb2:;
  /* 10426cb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426cb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426cb6 jne 0x10426c92 */
  if (!C.zf) goto L_10426c92;
L_10426cb8:;
  /* 10426cb8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426cba call 0x10429480 */
  push32(0x10426cbfu); f_10429480();
  /* 10426cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426cc4 jmp 0x10426ed8 */
  goto L_10426ed8;
L_10426cc9:;
  /* 10426cc9 mov eax, dword ptr [0x104515c4] */
  EAX = (r32((uint32_t)(0x104515c4)));
  /* 10426cce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10426cd1 jmp 0x10426cdb */
  goto L_10426cdb;
L_10426cd3:;
  /* 10426cd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426cd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10426cd8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10426cdb:;
  /* 10426cdb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426cdf je 0x10426ecb */
  if (C.zf) goto L_10426ecb;
  /* 10426ce5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10426cec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426cef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10426cf2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426cf8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426cfb je 0x10426d20 */
  if (C.zf) goto L_10426d20;
  /* 10426cfd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426d04 je 0x10426d20 */
  if (C.zf) goto L_10426d20;
  /* 10426d06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10426d0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426d12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426d15 je 0x10426d20 */
  if (C.zf) goto L_10426d20;
  /* 10426d17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426d1e jne 0x10426d38 */
  if (!C.zf) goto L_10426d38;
L_10426d20:;
  /* 10426d20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10426d26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10426d2c mov edx, dword ptr [ecx*4 + 0x1044fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa94)));
  /* 10426d33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10426d36 jmp 0x10426d3f */
  goto L_10426d3f;
L_10426d38:;
  /* 10426d38 mov dword ptr [ebp - 0x14], 0x1044ca3c */
  w32((uint32_t)(EBP + -0x14), (0x1044ca3cu));
L_10426d3f:;
  /* 10426d3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10426d41 mov al, byte ptr [0x1044fa90] */
  AL = (r8((uint32_t)(0x1044fa90)));
  /* 10426d46 push eax */
  push32((uint32_t)(EAX));
  /* 10426d47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426d4d push ecx */
  push32((uint32_t)(ECX));
  /* 10426d4e call 0x10426af0 */
  push32(0x10426d53u); f_10426af0();
  /* 10426d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426d56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426d58 jne 0x10426d94 */
  if (!C.zf) goto L_10426d94;
L_10426d5a:;
  /* 10426d5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426d60 push edx */
  push32((uint32_t)(EDX));
  /* 10426d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426d64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10426d67 push ecx */
  push32((uint32_t)(ECX));
  /* 10426d68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10426d6b push edx */
  push32((uint32_t)(EDX));
  /* 10426d6c push 0x1044c918 */
  push32((uint32_t)(0x1044c918u));
  /* 10426d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426d73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426d77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426d79 call 0x10424aa0 */
  push32(0x10426d7eu); f_10424aa0();
  /* 10426d7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426d81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426d84 jne 0x10426d87 */
  if (!C.zf) goto L_10426d87;
  /* 10426d86 int3  */
  x86_unimpl("int3 @ 0x10426d86");
L_10426d87:;
  /* 10426d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426d8b jne 0x10426d5a */
  if (!C.zf) goto L_10426d5a;
  /* 10426d8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10426d94:;
  /* 10426d94 push 4 */
  push32((uint32_t)(0x4u));
  /* 10426d96 mov cl, byte ptr [0x1044fa90] */
  CL = (r8((uint32_t)(0x1044fa90)));
  /* 10426d9c push ecx */
  push32((uint32_t)(ECX));
  /* 10426d9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426da0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10426da3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426da6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10426daa push edx */
  push32((uint32_t)(EDX));
  /* 10426dab call 0x10426af0 */
  push32(0x10426db0u); f_10426af0();
  /* 10426db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426db5 jne 0x10426df1 */
  if (!C.zf) goto L_10426df1;
L_10426db7:;
  /* 10426db7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426dba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426dbd push eax */
  push32((uint32_t)(EAX));
  /* 10426dbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426dc1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10426dc4 push edx */
  push32((uint32_t)(EDX));
  /* 10426dc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10426dc8 push eax */
  push32((uint32_t)(EAX));
  /* 10426dc9 push 0x1044c8ec */
  push32((uint32_t)(0x1044c8ecu));
  /* 10426dce push 0 */
  push32((uint32_t)(0x0u));
  /* 10426dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426dd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426dd6 call 0x10424aa0 */
  push32(0x10426ddbu); f_10424aa0();
  /* 10426ddb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426dde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426de1 jne 0x10426de4 */
  if (!C.zf) goto L_10426de4;
  /* 10426de3 int3  */
  x86_unimpl("int3 @ 0x10426de3");
L_10426de4:;
  /* 10426de4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10426de6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10426de8 jne 0x10426db7 */
  if (!C.zf) goto L_10426db7;
  /* 10426dea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10426df1:;
  /* 10426df1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426df4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426df8 jne 0x10426e4a */
  if (!C.zf) goto L_10426e4a;
  /* 10426dfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426dfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10426e00 push ecx */
  push32((uint32_t)(ECX));
  /* 10426e01 mov dl, byte ptr [0x1044fa91] */
  DL = (r8((uint32_t)(0x1044fa91)));
  /* 10426e07 push edx */
  push32((uint32_t)(EDX));
  /* 10426e08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e0e push eax */
  push32((uint32_t)(EAX));
  /* 10426e0f call 0x10426af0 */
  push32(0x10426e14u); f_10426af0();
  /* 10426e14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426e19 jne 0x10426e4a */
  if (!C.zf) goto L_10426e4a;
L_10426e1b:;
  /* 10426e1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e21 push ecx */
  push32((uint32_t)(ECX));
  /* 10426e22 push 0x1044ca10 */
  push32((uint32_t)(0x1044ca10u));
  /* 10426e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e2f call 0x10424aa0 */
  push32(0x10426e34u); f_10424aa0();
  /* 10426e34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426e3a jne 0x10426e3d */
  if (!C.zf) goto L_10426e3d;
  /* 10426e3c int3  */
  x86_unimpl("int3 @ 0x10426e3c");
L_10426e3d:;
  /* 10426e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426e3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426e41 jne 0x10426e1b */
  if (!C.zf) goto L_10426e1b;
  /* 10426e43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10426e4a:;
  /* 10426e4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426e4e jne 0x10426ec6 */
  if (!C.zf) goto L_10426ec6;
  /* 10426e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426e57 je 0x10426e8c */
  if (C.zf) goto L_10426e8c;
L_10426e59:;
  /* 10426e59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10426e5f push edx */
  push32((uint32_t)(EDX));
  /* 10426e60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10426e66 push ecx */
  push32((uint32_t)(ECX));
  /* 10426e67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10426e6a push edx */
  push32((uint32_t)(EDX));
  /* 10426e6b push 0x1044c9f0 */
  push32((uint32_t)(0x1044c9f0u));
  /* 10426e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426e78 call 0x10424aa0 */
  push32(0x10426e7du); f_10424aa0();
  /* 10426e7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426e83 jne 0x10426e86 */
  if (!C.zf) goto L_10426e86;
  /* 10426e85 int3  */
  x86_unimpl("int3 @ 0x10426e85");
L_10426e86:;
  /* 10426e86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426e8a jne 0x10426e59 */
  if (!C.zf) goto L_10426e59;
L_10426e8c:;
  /* 10426e8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10426e92 push edx */
  push32((uint32_t)(EDX));
  /* 10426e93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10426e96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426e99 push eax */
  push32((uint32_t)(EAX));
  /* 10426e9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10426e9d push ecx */
  push32((uint32_t)(ECX));
  /* 10426e9e push 0x1044c9c4 */
  push32((uint32_t)(0x1044c9c4u));
  /* 10426ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10426eab call 0x10424aa0 */
  push32(0x10426eb0u); f_10424aa0();
  /* 10426eb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426eb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426eb6 jne 0x10426eb9 */
  if (!C.zf) goto L_10426eb9;
  /* 10426eb8 int3  */
  x86_unimpl("int3 @ 0x10426eb8");
L_10426eb9:;
  /* 10426eb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10426ebb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10426ebd jne 0x10426e8c */
  if (!C.zf) goto L_10426e8c;
  /* 10426ebf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10426ec6:;
  /* 10426ec6 jmp 0x10426cd3 */
  goto L_10426cd3;
L_10426ecb:;
  /* 10426ecb push 9 */
  push32((uint32_t)(0x9u));
  /* 10426ecd call 0x10429480 */
  push32(0x10426ed2u); f_10429480();
  /* 10426ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10426ed8:;
  /* 10426ed8 pop edi */
  EDI = (pop32());
  /* 10426ed9 pop esi */
  ESI = (pop32());
  /* 10426eda pop ebx */
  EBX = (pop32());
  /* 10426edb mov esp, ebp */
  ESP = (EBP);
  /* 10426edd pop ebp */
  EBP = (pop32());
  /* 10426ede ret  */
  ESPCHK(0x10426b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x10426ef0 (34 bytes, 13 insns) */
void f_10426ef0(void) {
  FTRACE(0x10426ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10426ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10426ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10426ef4 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 10426ef9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10426efc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426f00 je 0x10426f0b */
  if (C.zf) goto L_10426f0b;
  /* 10426f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426f05 mov dword ptr [0x1044fa84], ecx */
  w32((uint32_t)(0x1044fa84), (ECX));
L_10426f0b:;
  /* 10426f0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426f0e mov esp, ebp */
  ESP = (EBP);
  /* 10426f10 pop ebp */
  EBP = (pop32());
  /* 10426f11 ret  */
  ESPCHK(0x10426ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f20 @ 0x10426f20 (103 bytes, 38 insns) */
void f_10426f20(void) {
  FTRACE(0x10426f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10426f21 mov ebp, esp */
  EBP = (ESP);
  /* 10426f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10426f24 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 10426f29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10426f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426f2e jne 0x10426f32 */
  if (!C.zf) goto L_10426f32;
  /* 10426f30 jmp 0x10426f83 */
  goto L_10426f83;
L_10426f32:;
  /* 10426f32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426f34 call 0x104293e0 */
  push32(0x10426f39u); f_104293e0();
  /* 10426f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10426f3c mov ecx, dword ptr [0x104515c4] */
  ECX = (r32((uint32_t)(0x104515c4)));
  /* 10426f42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10426f45 jmp 0x10426f4f */
  goto L_10426f4f;
L_10426f47:;
  /* 10426f47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426f4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10426f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10426f4f:;
  /* 10426f4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426f53 je 0x10426f79 */
  if (C.zf) goto L_10426f79;
  /* 10426f55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426f58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10426f5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10426f61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426f64 jne 0x10426f77 */
  if (!C.zf) goto L_10426f77;
  /* 10426f66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426f69 push eax */
  push32((uint32_t)(EAX));
  /* 10426f6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426f6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10426f70 push ecx */
  push32((uint32_t)(ECX));
  /* 10426f71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10426f74u);
  /* 10426f74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10426f77:;
  /* 10426f77 jmp 0x10426f47 */
  goto L_10426f47;
L_10426f79:;
  /* 10426f79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10426f7b call 0x10429480 */
  push32(0x10426f80u); f_10429480();
  /* 10426f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10426f83:;
  /* 10426f83 mov esp, ebp */
  ESP = (EBP);
  /* 10426f85 pop ebp */
  EBP = (pop32());
  /* 10426f86 ret  */
  ESPCHK(0x10426f20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10426f90 (75 bytes, 28 insns) */
void f_10426f90(void) {
  FTRACE(0x10426f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10426f91 mov ebp, esp */
  EBP = (ESP);
  /* 10426f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10426f94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426f98 je 0x10426fcd */
  if (C.zf) goto L_10426fcd;
  /* 10426f9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426f9d push eax */
  push32((uint32_t)(EAX));
  /* 10426f9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426fa1 push ecx */
  push32((uint32_t)(ECX));
  /* 10426fa2 call dword ptr [0x10454354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454354))), 0x10426fa8u);
  /* 10426fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426faa jne 0x10426fcd */
  if (!C.zf) goto L_10426fcd;
  /* 10426fac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426fb0 je 0x10426fc4 */
  if (C.zf) goto L_10426fc4;
  /* 10426fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10426fb5 push edx */
  push32((uint32_t)(EDX));
  /* 10426fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10426fba call dword ptr [0x10454350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454350))), 0x10426fc0u);
  /* 10426fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10426fc2 jne 0x10426fcd */
  if (!C.zf) goto L_10426fcd;
L_10426fc4:;
  /* 10426fc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10426fcb jmp 0x10426fd4 */
  goto L_10426fd4;
L_10426fcd:;
  /* 10426fcd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10426fd4:;
  /* 10426fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10426fd7 mov esp, ebp */
  ESP = (EBP);
  /* 10426fd9 pop ebp */
  EBP = (pop32());
  /* 10426fda ret  */
  ESPCHK(0x10426f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x10426fe0 (134 bytes, 50 insns) */
void f_10426fe0(void) {
  FTRACE(0x10426fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10426fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10426fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10426fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10426fe4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10426fe8 jne 0x10426fee */
  if (!C.zf) goto L_10426fee;
  /* 10426fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10426fec jmp 0x10427062 */
  goto L_10427062;
L_10426fee:;
  /* 10426fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10426ff0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10426ff2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10426ff5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10426ff8 push eax */
  push32((uint32_t)(EAX));
  /* 10426ff9 call 0x10426f90 */
  push32(0x10426ffeu); f_10426f90();
  /* 10426ffe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427003 jne 0x10427009 */
  if (!C.zf) goto L_10427009;
  /* 10427005 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427007 jmp 0x10427062 */
  goto L_10427062;
L_10427009:;
  /* 10427009 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042700c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042700f push ecx */
  push32((uint32_t)(ECX));
  /* 10427010 call 0x10429ce0 */
  push32(0x10427015u); f_10429ce0();
  /* 10427015 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042701b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042701f je 0x10427036 */
  if (C.zf) goto L_10427036;
  /* 10427021 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427024 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427027 push edx */
  push32((uint32_t)(EDX));
  /* 10427028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042702b push eax */
  push32((uint32_t)(EAX));
  /* 1042702c call 0x10429d40 */
  push32(0x10427031u); f_10429d40();
  /* 10427031 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427034 jmp 0x10427062 */
  goto L_10427062;
L_10427036:;
  /* 10427036 mov ecx, dword ptr [0x10451578] */
  ECX = (r32((uint32_t)(0x10451578)));
  /* 1042703c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10427042 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427044 je 0x1042704d */
  if (C.zf) goto L_1042704d;
  /* 10427046 mov eax, 1 */
  EAX = (0x1u);
  /* 1042704b jmp 0x10427062 */
  goto L_10427062;
L_1042704d:;
  /* 1042704d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427050 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427053 push edx */
  push32((uint32_t)(EDX));
  /* 10427054 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427056 mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 1042705b push eax */
  push32((uint32_t)(EAX));
  /* 1042705c call dword ptr [0x10454358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454358))), 0x10427062u);
L_10427062:;
  /* 10427062 mov esp, ebp */
  ESP = (EBP);
  /* 10427064 pop ebp */
  EBP = (pop32());
  /* 10427065 ret  */
  ESPCHK(0x10426fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007070 @ 0x10427070 (227 bytes, 80 insns) */
void f_10427070(void) {
  FTRACE(0x10427070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427070 push ebp */
  push32((uint32_t)(EBP));
  /* 10427071 mov ebp, esp */
  EBP = (ESP);
  /* 10427073 push ecx */
  push32((uint32_t)(ECX));
  /* 10427074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427077 push eax */
  push32((uint32_t)(EAX));
  /* 10427078 call 0x10426fe0 */
  push32(0x1042707du); f_10426fe0();
  /* 1042707d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427080 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427082 jne 0x1042708b */
  if (!C.zf) goto L_1042708b;
  /* 10427084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427086 jmp 0x1042714f */
  goto L_1042714f;
L_1042708b:;
  /* 1042708b push 9 */
  push32((uint32_t)(0x9u));
  /* 1042708d call 0x104293e0 */
  push32(0x10427092u); f_104293e0();
  /* 10427092 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427098 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042709b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1042709e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104270a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104270a9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270ac je 0x104270d0 */
  if (C.zf) goto L_104270d0;
  /* 104270ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270b1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270b5 je 0x104270d0 */
  if (C.zf) goto L_104270d0;
  /* 104270b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104270bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104270c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270c5 je 0x104270d0 */
  if (C.zf) goto L_104270d0;
  /* 104270c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270ca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270ce jne 0x10427143 */
  if (!C.zf) goto L_10427143;
L_104270d0:;
  /* 104270d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 104270d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104270d5 push edx */
  push32((uint32_t)(EDX));
  /* 104270d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104270d9 push eax */
  push32((uint32_t)(EAX));
  /* 104270da call 0x10426f90 */
  push32(0x104270dfu); f_10426f90();
  /* 104270df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104270e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104270e4 je 0x10427143 */
  if (C.zf) goto L_10427143;
  /* 104270e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 104270ec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270ef jne 0x10427143 */
  if (!C.zf) goto L_10427143;
  /* 104270f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104270f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 104270f7 cmp ecx, dword ptr [0x1044fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1044fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104270fd jg 0x10427143 */
  if ((!C.zf&&C.sf==C.of)) goto L_10427143;
  /* 104270ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427103 je 0x10427110 */
  if (C.zf) goto L_10427110;
  /* 10427105 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042710b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1042710e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10427110:;
  /* 10427110 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427114 je 0x10427121 */
  if (C.zf) goto L_10427121;
  /* 10427116 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427119 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042711c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1042711f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10427121:;
  /* 10427121 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427125 je 0x10427132 */
  if (C.zf) goto L_10427132;
  /* 10427127 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1042712a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042712d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10427130 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10427132:;
  /* 10427132 push 9 */
  push32((uint32_t)(0x9u));
  /* 10427134 call 0x10429480 */
  push32(0x10427139u); f_10429480();
  /* 10427139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042713c mov eax, 1 */
  EAX = (0x1u);
  /* 10427141 jmp 0x1042714f */
  goto L_1042714f;
L_10427143:;
  /* 10427143 push 9 */
  push32((uint32_t)(0x9u));
  /* 10427145 call 0x10429480 */
  push32(0x1042714au); f_10429480();
  /* 1042714a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042714d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042714f:;
  /* 1042714f mov esp, ebp */
  ESP = (EBP);
  /* 10427151 pop ebp */
  EBP = (pop32());
  /* 10427152 ret  */
  ESPCHK(0x10427070u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x10427160 (28 bytes, 11 insns) */
void f_10427160(void) {
  FTRACE(0x10427160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427160 push ebp */
  push32((uint32_t)(EBP));
  /* 10427161 mov ebp, esp */
  EBP = (ESP);
  /* 10427163 push ecx */
  push32((uint32_t)(ECX));
  /* 10427164 mov eax, dword ptr [0x10452f38] */
  EAX = (r32((uint32_t)(0x10452f38)));
  /* 10427169 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042716c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042716f mov dword ptr [0x10452f38], ecx */
  w32((uint32_t)(0x10452f38), (ECX));
  /* 10427175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427178 mov esp, ebp */
  ESP = (EBP);
  /* 1042717a pop ebp */
  EBP = (pop32());
  /* 1042717b ret  */
  ESPCHK(0x10427160u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10427180 (362 bytes, 116 insns) */
void f_10427180(void) {
  FTRACE(0x10427180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427180 push ebp */
  push32((uint32_t)(EBP));
  /* 10427181 mov ebp, esp */
  EBP = (ESP);
  /* 10427183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427186 push ebx */
  push32((uint32_t)(EBX));
  /* 10427187 push esi */
  push32((uint32_t)(ESI));
  /* 10427188 push edi */
  push32((uint32_t)(EDI));
  /* 10427189 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042718d jne 0x104271ba */
  if (!C.zf) goto L_104271ba;
L_1042718f:;
  /* 1042718f push 0x1044cb24 */
  push32((uint32_t)(0x1044cb24u));
  /* 10427194 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10427199 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042719b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042719d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042719f push 0 */
  push32((uint32_t)(0x0u));
  /* 104271a1 call 0x10424aa0 */
  push32(0x104271a6u); f_10424aa0();
  /* 104271a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104271a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104271ac jne 0x104271af */
  if (!C.zf) goto L_104271af;
  /* 104271ae int3  */
  x86_unimpl("int3 @ 0x104271ae");
L_104271af:;
  /* 104271af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104271b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104271b3 jne 0x1042718f */
  if (!C.zf) goto L_1042718f;
  /* 104271b5 jmp 0x104272e3 */
  goto L_104272e3;
L_104271ba:;
  /* 104271ba push 9 */
  push32((uint32_t)(0x9u));
  /* 104271bc call 0x104293e0 */
  push32(0x104271c1u); f_104293e0();
  /* 104271c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104271c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104271c7 mov edx, dword ptr [0x104515c4] */
  EDX = (r32((uint32_t)(0x104515c4)));
  /* 104271cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 104271cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104271d6 jmp 0x104271e1 */
  goto L_104271e1;
L_104271d8:;
  /* 104271d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104271db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104271de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104271e1:;
  /* 104271e1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104271e5 jge 0x10427205 */
  if ((C.sf==C.of)) goto L_10427205;
  /* 104271e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104271ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104271ed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 104271f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104271f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104271fb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10427203 jmp 0x104271d8 */
  goto L_104271d8;
L_10427205:;
  /* 10427205 mov edx, dword ptr [0x104515c4] */
  EDX = (r32((uint32_t)(0x104515c4)));
  /* 1042720b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1042720e jmp 0x10427218 */
  goto L_10427218;
L_10427210:;
  /* 10427210 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427213 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427215 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10427218:;
  /* 10427218 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042721c je 0x104272c1 */
  if (C.zf) goto L_104272c1;
  /* 10427222 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427225 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10427228 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042722d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042722f jl 0x10427297 */
  if ((C.sf!=C.of)) goto L_10427297;
  /* 10427231 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427234 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10427237 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042723d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427240 jge 0x10427297 */
  if ((C.sf==C.of)) goto L_10427297;
  /* 10427242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427245 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10427248 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1042724e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427251 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10427255 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427258 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042725b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1042725e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10427264 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427267 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1042726b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042726e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10427271 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10427276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427279 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1042727d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427280 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427286 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10427289 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042728e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427291 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10427295 jmp 0x104272bc */
  goto L_104272bc;
L_10427297:;
  /* 10427297 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042729a push edx */
  push32((uint32_t)(EDX));
  /* 1042729b push 0x1044cb00 */
  push32((uint32_t)(0x1044cb00u));
  /* 104272a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104272a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104272a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104272a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104272a8 call 0x10424aa0 */
  push32(0x104272adu); f_10424aa0();
  /* 104272ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104272b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104272b3 jne 0x104272b6 */
  if (!C.zf) goto L_104272b6;
  /* 104272b5 int3  */
  x86_unimpl("int3 @ 0x104272b5");
L_104272b6:;
  /* 104272b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104272b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104272ba jne 0x10427297 */
  if (!C.zf) goto L_10427297;
L_104272bc:;
  /* 104272bc jmp 0x10427210 */
  goto L_10427210;
L_104272c1:;
  /* 104272c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104272c4 mov edx, dword ptr [0x104515cc] */
  EDX = (r32((uint32_t)(0x104515cc)));
  /* 104272ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 104272cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104272d0 mov ecx, dword ptr [0x104515c0] */
  ECX = (r32((uint32_t)(0x104515c0)));
  /* 104272d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 104272d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 104272db call 0x10429480 */
  push32(0x104272e0u); f_10429480();
  /* 104272e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104272e3:;
  /* 104272e3 pop edi */
  EDI = (pop32());
  /* 104272e4 pop esi */
  ESI = (pop32());
  /* 104272e5 pop ebx */
  EBX = (pop32());
  /* 104272e6 mov esp, ebp */
  ESP = (EBP);
  /* 104272e8 pop ebp */
  EBP = (pop32());
  /* 104272e9 ret  */
  ESPCHK(0x10427180u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x104272f0 (291 bytes, 95 insns) */
void f_104272f0(void) {
  FTRACE(0x104272f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104272f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104272f1 mov ebp, esp */
  EBP = (ESP);
  /* 104272f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104272f6 push ebx */
  push32((uint32_t)(EBX));
  /* 104272f7 push esi */
  push32((uint32_t)(ESI));
  /* 104272f8 push edi */
  push32((uint32_t)(EDI));
  /* 104272f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10427300 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427304 je 0x10427312 */
  if (C.zf) goto L_10427312;
  /* 10427306 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042730a je 0x10427312 */
  if (C.zf) goto L_10427312;
  /* 1042730c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427310 jne 0x10427340 */
  if (!C.zf) goto L_10427340;
L_10427312:;
  /* 10427312 push 0x1044cb4c */
  push32((uint32_t)(0x1044cb4cu));
  /* 10427317 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 1042731c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042731e push 0 */
  push32((uint32_t)(0x0u));
  /* 10427320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427322 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427324 call 0x10424aa0 */
  push32(0x10427329u); f_10424aa0();
  /* 10427329 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042732c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042732f jne 0x10427332 */
  if (!C.zf) goto L_10427332;
  /* 10427331 int3  */
  x86_unimpl("int3 @ 0x10427331");
L_10427332:;
  /* 10427332 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427336 jne 0x10427312 */
  if (!C.zf) goto L_10427312;
  /* 10427338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042733b jmp 0x1042740c */
  goto L_1042740c;
L_10427340:;
  /* 10427340 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10427347 jmp 0x10427352 */
  goto L_10427352;
L_10427349:;
  /* 10427349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042734c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042734f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10427352:;
  /* 10427352 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427356 jge 0x104273dc */
  if ((C.sf==C.of)) goto L_104273dc;
  /* 1042735c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042735f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427365 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10427368 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1042736c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427370 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427373 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427376 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1042737a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042737d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427380 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427383 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10427386 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1042738a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042738e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427391 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427394 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10427398 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042739b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042739e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104273a3 jne 0x104273b2 */
  if (!C.zf) goto L_104273b2;
  /* 104273a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104273a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104273ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104273b0 je 0x104273d7 */
  if (C.zf) goto L_104273d7;
L_104273b2:;
  /* 104273b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104273b6 je 0x104273d7 */
  if (C.zf) goto L_104273d7;
  /* 104273b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104273bc jne 0x104273d0 */
  if (!C.zf) goto L_104273d0;
  /* 104273be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104273c2 jne 0x104273d7 */
  if (!C.zf) goto L_104273d7;
  /* 104273c4 mov eax, dword ptr [0x1044fa84] */
  EAX = (r32((uint32_t)(0x1044fa84)));
  /* 104273c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 104273cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104273ce je 0x104273d7 */
  if (C.zf) goto L_104273d7;
L_104273d0:;
  /* 104273d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_104273d7:;
  /* 104273d7 jmp 0x10427349 */
  goto L_10427349;
L_104273dc:;
  /* 104273dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104273df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104273e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104273e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104273e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104273eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 104273ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104273f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104273f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 104273f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104273fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104273fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10427400 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427403 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10427409 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1042740c:;
  /* 1042740c pop edi */
  EDI = (pop32());
  /* 1042740d pop esi */
  ESI = (pop32());
  /* 1042740e pop ebx */
  EBX = (pop32());
  /* 1042740f mov esp, ebp */
  ESP = (EBP);
  /* 10427411 pop ebp */
  EBP = (pop32());
  /* 10427412 ret  */
  ESPCHK(0x104272f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x10427420 (697 bytes, 253 insns) */
void f_10427420(void) {
  FTRACE(0x10427420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427420 push ebp */
  push32((uint32_t)(EBP));
  /* 10427421 mov ebp, esp */
  EBP = (ESP);
  /* 10427423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427426 push ebx */
  push32((uint32_t)(EBX));
  /* 10427427 push esi */
  push32((uint32_t)(ESI));
  /* 10427428 push edi */
  push32((uint32_t)(EDI));
  /* 10427429 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10427430 push 9 */
  push32((uint32_t)(0x9u));
  /* 10427432 call 0x104293e0 */
  push32(0x10427437u); f_104293e0();
  /* 10427437 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042743a:;
  /* 1042743a push 0x1044cc44 */
  push32((uint32_t)(0x1044cc44u));
  /* 1042743f push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 10427444 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427446 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427448 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042744a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042744c call 0x10424aa0 */
  push32(0x10427451u); f_10424aa0();
  /* 10427451 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427454 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427457 jne 0x1042745a */
  if (!C.zf) goto L_1042745a;
  /* 10427459 int3  */
  x86_unimpl("int3 @ 0x10427459");
L_1042745a:;
  /* 1042745a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042745c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042745e jne 0x1042743a */
  if (!C.zf) goto L_1042743a;
  /* 10427460 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427464 je 0x1042746e */
  if (C.zf) goto L_1042746e;
  /* 10427466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427469 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042746b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1042746e:;
  /* 1042746e mov eax, dword ptr [0x104515c4] */
  EAX = (r32((uint32_t)(0x104515c4)));
  /* 10427473 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10427476 jmp 0x10427480 */
  goto L_10427480;
L_10427478:;
  /* 10427478 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042747b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042747d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10427480:;
  /* 10427480 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427484 je 0x104276a2 */
  if (C.zf) goto L_104276a2;
  /* 1042748a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042748d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427490 je 0x104276a2 */
  if (C.zf) goto L_104276a2;
  /* 10427496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427499 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1042749c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104274a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104274a5 je 0x104274d4 */
  if (C.zf) goto L_104274d4;
  /* 104274a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104274aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 104274ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104274b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104274b5 je 0x104274d4 */
  if (C.zf) goto L_104274d4;
  /* 104274b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104274ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104274bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104274c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104274c5 jne 0x104274d9 */
  if (!C.zf) goto L_104274d9;
  /* 104274c7 mov ecx, dword ptr [0x1044fa84] */
  ECX = (r32((uint32_t)(0x1044fa84)));
  /* 104274cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 104274d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104274d2 jne 0x104274d9 */
  if (!C.zf) goto L_104274d9;
L_104274d4:;
  /* 104274d4 jmp 0x1042769d */
  goto L_1042769d;
L_104274d9:;
  /* 104274d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104274dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104274e0 je 0x10427552 */
  if (C.zf) goto L_10427552;
  /* 104274e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104274e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104274e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104274e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104274ec push ecx */
  push32((uint32_t)(ECX));
  /* 104274ed call 0x10426f90 */
  push32(0x104274f2u); f_10426f90();
  /* 104274f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104274f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104274f7 jne 0x10427523 */
  if (!C.zf) goto L_10427523;
L_104274f9:;
  /* 104274f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104274fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 104274ff push eax */
  push32((uint32_t)(EAX));
  /* 10427500 push 0x1044cc30 */
  push32((uint32_t)(0x1044cc30u));
  /* 10427505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427507 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427509 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042750b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042750d call 0x10424aa0 */
  push32(0x10427512u); f_10424aa0();
  /* 10427512 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427515 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427518 jne 0x1042751b */
  if (!C.zf) goto L_1042751b;
  /* 1042751a int3  */
  x86_unimpl("int3 @ 0x1042751a");
L_1042751b:;
  /* 1042751b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042751d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042751f jne 0x104274f9 */
  if (!C.zf) goto L_104274f9;
  /* 10427521 jmp 0x10427552 */
  goto L_10427552;
L_10427523:;
  /* 10427523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427526 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10427529 push eax */
  push32((uint32_t)(EAX));
  /* 1042752a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042752d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10427530 push edx */
  push32((uint32_t)(EDX));
  /* 10427531 push 0x1044cc24 */
  push32((uint32_t)(0x1044cc24u));
  /* 10427536 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427538 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042753a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042753c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042753e call 0x10424aa0 */
  push32(0x10427543u); f_10424aa0();
  /* 10427543 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427546 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427549 jne 0x1042754c */
  if (!C.zf) goto L_1042754c;
  /* 1042754b int3  */
  x86_unimpl("int3 @ 0x1042754b");
L_1042754c:;
  /* 1042754c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042754e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427550 jne 0x10427523 */
  if (!C.zf) goto L_10427523;
L_10427552:;
  /* 10427552 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427555 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10427558 push edx */
  push32((uint32_t)(EDX));
  /* 10427559 push 0x1044cc1c */
  push32((uint32_t)(0x1044cc1cu));
  /* 1042755e push 0 */
  push32((uint32_t)(0x0u));
  /* 10427560 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427564 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427566 call 0x10424aa0 */
  push32(0x1042756bu); f_10424aa0();
  /* 1042756b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042756e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427571 jne 0x10427574 */
  if (!C.zf) goto L_10427574;
  /* 10427573 int3  */
  x86_unimpl("int3 @ 0x10427573");
L_10427574:;
  /* 10427574 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427578 jne 0x10427552 */
  if (!C.zf) goto L_10427552;
  /* 1042757a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042757d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10427580 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10427586 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427589 jne 0x104275fc */
  if (!C.zf) goto L_104275fc;
L_1042758b:;
  /* 1042758b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042758e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10427591 push ecx */
  push32((uint32_t)(ECX));
  /* 10427592 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427595 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10427598 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1042759b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104275a0 push eax */
  push32((uint32_t)(EAX));
  /* 104275a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104275a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104275a7 push ecx */
  push32((uint32_t)(ECX));
  /* 104275a8 push 0x1044cbe8 */
  push32((uint32_t)(0x1044cbe8u));
  /* 104275ad push 0 */
  push32((uint32_t)(0x0u));
  /* 104275af push 0 */
  push32((uint32_t)(0x0u));
  /* 104275b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104275b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104275b5 call 0x10424aa0 */
  push32(0x104275bau); f_10424aa0();
  /* 104275ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104275bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104275c0 jne 0x104275c3 */
  if (!C.zf) goto L_104275c3;
  /* 104275c2 int3  */
  x86_unimpl("int3 @ 0x104275c2");
L_104275c3:;
  /* 104275c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104275c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104275c7 jne 0x1042758b */
  if (!C.zf) goto L_1042758b;
  /* 104275c9 cmp dword ptr [0x10452f38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452f38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104275d0 je 0x104275eb */
  if (C.zf) goto L_104275eb;
  /* 104275d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104275d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 104275d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104275d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104275dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104275df push edx */
  push32((uint32_t)(EDX));
  /* 104275e0 call dword ptr [0x10452f38] */
  call_ind((uint32_t)(r32((uint32_t)(0x10452f38))), 0x104275e6u);
  /* 104275e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104275e9 jmp 0x104275f7 */
  goto L_104275f7;
L_104275eb:;
  /* 104275eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104275ee push eax */
  push32((uint32_t)(EAX));
  /* 104275ef call 0x104276e0 */
  push32(0x104275f4u); f_104276e0();
  /* 104275f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104275f7:;
  /* 104275f7 jmp 0x1042769d */
  goto L_1042769d;
L_104275fc:;
  /* 104275fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104275ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427603 jne 0x10427642 */
  if (!C.zf) goto L_10427642;
L_10427605:;
  /* 10427605 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427608 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042760b push eax */
  push32((uint32_t)(EAX));
  /* 1042760c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042760f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427612 push ecx */
  push32((uint32_t)(ECX));
  /* 10427613 push 0x1044cbc0 */
  push32((uint32_t)(0x1044cbc0u));
  /* 10427618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042761a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042761c push 0 */
  push32((uint32_t)(0x0u));
  /* 1042761e push 0 */
  push32((uint32_t)(0x0u));
  /* 10427620 call 0x10424aa0 */
  push32(0x10427625u); f_10424aa0();
  /* 10427625 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427628 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042762b jne 0x1042762e */
  if (!C.zf) goto L_1042762e;
  /* 1042762d int3  */
  x86_unimpl("int3 @ 0x1042762d");
L_1042762e:;
  /* 1042762e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427630 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10427632 jne 0x10427605 */
  if (!C.zf) goto L_10427605;
  /* 10427634 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427637 push eax */
  push32((uint32_t)(EAX));
  /* 10427638 call 0x104276e0 */
  push32(0x1042763du); f_104276e0();
  /* 1042763d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427640 jmp 0x1042769d */
  goto L_1042769d;
L_10427642:;
  /* 10427642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427645 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10427648 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042764e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427651 jne 0x1042769d */
  if (!C.zf) goto L_1042769d;
L_10427653:;
  /* 10427653 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427656 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10427659 push ecx */
  push32((uint32_t)(ECX));
  /* 1042765a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042765d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10427660 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10427663 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10427668 push eax */
  push32((uint32_t)(EAX));
  /* 10427669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042766c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042766f push ecx */
  push32((uint32_t)(ECX));
  /* 10427670 push 0x1044cb8c */
  push32((uint32_t)(0x1044cb8cu));
  /* 10427675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042767b push 0 */
  push32((uint32_t)(0x0u));
  /* 1042767d call 0x10424aa0 */
  push32(0x10427682u); f_10424aa0();
  /* 10427682 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427685 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427688 jne 0x1042768b */
  if (!C.zf) goto L_1042768b;
  /* 1042768a int3  */
  x86_unimpl("int3 @ 0x1042768a");
L_1042768b:;
  /* 1042768b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042768d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042768f jne 0x10427653 */
  if (!C.zf) goto L_10427653;
  /* 10427691 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427694 push eax */
  push32((uint32_t)(EAX));
  /* 10427695 call 0x104276e0 */
  push32(0x1042769au); f_104276e0();
  /* 1042769a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042769d:;
  /* 1042769d jmp 0x10427478 */
  goto L_10427478;
L_104276a2:;
  /* 104276a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 104276a4 call 0x10429480 */
  push32(0x104276a9u); f_10429480();
  /* 104276a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104276ac:;
  /* 104276ac push 0x1044cb74 */
  push32((uint32_t)(0x1044cb74u));
  /* 104276b1 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 104276b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104276b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104276ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104276bc push 0 */
  push32((uint32_t)(0x0u));
  /* 104276be call 0x10424aa0 */
  push32(0x104276c3u); f_10424aa0();
  /* 104276c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104276c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104276c9 jne 0x104276cc */
  if (!C.zf) goto L_104276cc;
  /* 104276cb int3  */
  x86_unimpl("int3 @ 0x104276cb");
L_104276cc:;
  /* 104276cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104276ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104276d0 jne 0x104276ac */
  if (!C.zf) goto L_104276ac;
  /* 104276d2 pop edi */
  EDI = (pop32());
  /* 104276d3 pop esi */
  ESI = (pop32());
  /* 104276d4 pop ebx */
  EBX = (pop32());
  /* 104276d5 mov esp, ebp */
  ESP = (EBP);
  /* 104276d7 pop ebp */
  EBP = (pop32());
  /* 104276d8 ret  */
  ESPCHK(0x10427420u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e0 @ 0x104276e0 (276 bytes, 89 insns) */
void f_104276e0(void) {
  FTRACE(0x104276e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104276e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104276e1 mov ebp, esp */
  EBP = (ESP);
  /* 104276e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104276e6 push ebx */
  push32((uint32_t)(EBX));
  /* 104276e7 push esi */
  push32((uint32_t)(ESI));
  /* 104276e8 push edi */
  push32((uint32_t)(EDI));
  /* 104276e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 104276f0 jmp 0x104276fb */
  goto L_104276fb;
L_104276f2:;
  /* 104276f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104276f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104276f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_104276fb:;
  /* 104276fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104276fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427702 jge 0x1042770f */
  if ((C.sf==C.of)) goto L_1042770f;
  /* 10427704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427707 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1042770a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1042770d jmp 0x10427716 */
  goto L_10427716;
L_1042770f:;
  /* 1042770f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10427716:;
  /* 10427716 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10427719 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042771c jge 0x104277bc */
  if ((C.sf==C.of)) goto L_104277bc;
  /* 10427722 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427725 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427728 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1042772b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1042772e cmp dword ptr [0x1044fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1044fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427735 jle 0x10427753 */
  if ((C.zf||C.sf!=C.of)) goto L_10427753;
  /* 10427737 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1042773c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1042773f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10427745 push ecx */
  push32((uint32_t)(ECX));
  /* 10427746 call 0x1042b9f0 */
  push32(0x1042774bu); f_1042b9f0();
  /* 1042774b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042774e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10427751 jmp 0x10427770 */
  goto L_10427770;
L_10427753:;
  /* 10427753 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10427756 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042775c mov eax, dword ptr [0x1044fc98] */
  EAX = (r32((uint32_t)(0x1044fc98)));
  /* 10427761 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10427763 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10427767 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1042776d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10427770:;
  /* 10427770 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427774 je 0x10427784 */
  if (C.zf) goto L_10427784;
  /* 10427776 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10427779 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042777f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10427782 jmp 0x1042778b */
  goto L_1042778b;
L_10427784:;
  /* 10427784 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1042778b:;
  /* 1042778b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1042778e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10427791 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10427795 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10427798 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042779e push edx */
  push32((uint32_t)(EDX));
  /* 1042779f push 0x1044cc68 */
  push32((uint32_t)(0x1044cc68u));
  /* 104277a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104277a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104277aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 104277ae push ecx */
  push32((uint32_t)(ECX));
  /* 104277af call 0x1042b8f0 */
  push32(0x104277b4u); f_1042b8f0();
  /* 104277b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104277b7 jmp 0x104276f2 */
  goto L_104276f2;
L_104277bc:;
  /* 104277bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 104277bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_104277c4:;
  /* 104277c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 104277c7 push eax */
  push32((uint32_t)(EAX));
  /* 104277c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 104277cb push ecx */
  push32((uint32_t)(ECX));
  /* 104277cc push 0x1044cc58 */
  push32((uint32_t)(0x1044cc58u));
  /* 104277d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104277d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104277d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104277d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104277d9 call 0x10424aa0 */
  push32(0x104277deu); f_10424aa0();
  /* 104277de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104277e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104277e4 jne 0x104277e7 */
  if (!C.zf) goto L_104277e7;
  /* 104277e6 int3  */
  x86_unimpl("int3 @ 0x104277e6");
L_104277e7:;
  /* 104277e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104277e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104277eb jne 0x104277c4 */
  if (!C.zf) goto L_104277c4;
  /* 104277ed pop edi */
  EDI = (pop32());
  /* 104277ee pop esi */
  ESI = (pop32());
  /* 104277ef pop ebx */
  EBX = (pop32());
  /* 104277f0 mov esp, ebp */
  ESP = (EBP);
  /* 104277f2 pop ebp */
  EBP = (pop32());
  /* 104277f3 ret  */
  ESPCHK(0x104276e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007800 @ 0x10427800 (116 bytes, 46 insns) */
void f_10427800(void) {
  FTRACE(0x10427800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427800 push ebp */
  push32((uint32_t)(EBP));
  /* 10427801 mov ebp, esp */
  EBP = (ESP);
  /* 10427803 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427806 push ebx */
  push32((uint32_t)(EBX));
  /* 10427807 push esi */
  push32((uint32_t)(ESI));
  /* 10427808 push edi */
  push32((uint32_t)(EDI));
  /* 10427809 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1042780c push eax */
  push32((uint32_t)(EAX));
  /* 1042780d call 0x10427180 */
  push32(0x10427812u); f_10427180();
  /* 10427812 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427815 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427819 jne 0x10427834 */
  if (!C.zf) goto L_10427834;
  /* 1042781b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042781f jne 0x10427834 */
  if (!C.zf) goto L_10427834;
  /* 10427821 mov ecx, dword ptr [0x1044fa84] */
  ECX = (r32((uint32_t)(0x1044fa84)));
  /* 10427827 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1042782a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1042782c je 0x1042786b */
  if (C.zf) goto L_1042786b;
  /* 1042782e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427832 je 0x1042786b */
  if (C.zf) goto L_1042786b;
L_10427834:;
  /* 10427834 push 0x1044cc70 */
  push32((uint32_t)(0x1044cc70u));
  /* 10427839 push 0x1044c63c */
  push32((uint32_t)(0x1044c63cu));
  /* 1042783e push 0 */
  push32((uint32_t)(0x0u));
  /* 10427840 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427842 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427844 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427846 call 0x10424aa0 */
  push32(0x1042784bu); f_10424aa0();
  /* 1042784b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042784e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427851 jne 0x10427854 */
  if (!C.zf) goto L_10427854;
  /* 10427853 int3  */
  x86_unimpl("int3 @ 0x10427853");
L_10427854:;
  /* 10427854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427856 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10427858 jne 0x10427834 */
  if (!C.zf) goto L_10427834;
  /* 1042785a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042785c call 0x10427420 */
  push32(0x10427861u); f_10427420();
  /* 10427861 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427864 mov eax, 1 */
  EAX = (0x1u);
  /* 10427869 jmp 0x1042786d */
  goto L_1042786d;
L_1042786b:;
  /* 1042786b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042786d:;
  /* 1042786d pop edi */
  EDI = (pop32());
  /* 1042786e pop esi */
  ESI = (pop32());
  /* 1042786f pop ebx */
  EBX = (pop32());
  /* 10427870 mov esp, ebp */
  ESP = (EBP);
  /* 10427872 pop ebp */
  EBP = (pop32());
  /* 10427873 ret  */
  ESPCHK(0x10427800u, _esp0);
  ESP += 4; return;
}

/* FUN_10007880 @ 0x10427880 (197 bytes, 79 insns) */
void f_10427880(void) {
  FTRACE(0x10427880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427880 push ebp */
  push32((uint32_t)(EBP));
  /* 10427881 mov ebp, esp */
  EBP = (ESP);
  /* 10427883 push ecx */
  push32((uint32_t)(ECX));
  /* 10427884 push ebx */
  push32((uint32_t)(EBX));
  /* 10427885 push esi */
  push32((uint32_t)(ESI));
  /* 10427886 push edi */
  push32((uint32_t)(EDI));
  /* 10427887 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042788b jne 0x10427892 */
  if (!C.zf) goto L_10427892;
  /* 1042788d jmp 0x1042793e */
  goto L_1042793e;
L_10427892:;
  /* 10427892 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10427899 jmp 0x104278a4 */
  goto L_104278a4;
L_1042789b:;
  /* 1042789b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042789e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104278a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104278a4:;
  /* 104278a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104278a8 jge 0x104278ee */
  if ((C.sf==C.of)) goto L_104278ee;
L_104278aa:;
  /* 104278aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104278ad mov edx, dword ptr [ecx*4 + 0x1044fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fa94)));
  /* 104278b4 push edx */
  push32((uint32_t)(EDX));
  /* 104278b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104278b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104278bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 104278bf push edx */
  push32((uint32_t)(EDX));
  /* 104278c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104278c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104278c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 104278ca push edx */
  push32((uint32_t)(EDX));
  /* 104278cb push 0x1044cccc */
  push32((uint32_t)(0x1044ccccu));
  /* 104278d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104278d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104278d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104278d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 104278d8 call 0x10424aa0 */
  push32(0x104278ddu); f_10424aa0();
  /* 104278dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104278e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104278e3 jne 0x104278e6 */
  if (!C.zf) goto L_104278e6;
  /* 104278e5 int3  */
  x86_unimpl("int3 @ 0x104278e5");
L_104278e6:;
  /* 104278e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104278e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104278ea jne 0x104278aa */
  if (!C.zf) goto L_104278aa;
  /* 104278ec jmp 0x1042789b */
  goto L_1042789b;
L_104278ee:;
  /* 104278ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104278f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 104278f4 push edx */
  push32((uint32_t)(EDX));
  /* 104278f5 push 0x1044cca8 */
  push32((uint32_t)(0x1044cca8u));
  /* 104278fa push 0 */
  push32((uint32_t)(0x0u));
  /* 104278fc push 0 */
  push32((uint32_t)(0x0u));
  /* 104278fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10427900 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427902 call 0x10424aa0 */
  push32(0x10427907u); f_10424aa0();
  /* 10427907 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042790a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042790d jne 0x10427910 */
  if (!C.zf) goto L_10427910;
  /* 1042790f int3  */
  x86_unimpl("int3 @ 0x1042790f");
L_10427910:;
  /* 10427910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427914 jne 0x104278ee */
  if (!C.zf) goto L_104278ee;
L_10427916:;
  /* 10427916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427919 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1042791c push edx */
  push32((uint32_t)(EDX));
  /* 1042791d push 0x1044cc88 */
  push32((uint32_t)(0x1044cc88u));
  /* 10427922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427924 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427926 push 0 */
  push32((uint32_t)(0x0u));
  /* 10427928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042792a call 0x10424aa0 */
  push32(0x1042792fu); f_10424aa0();
  /* 1042792f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427932 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427935 jne 0x10427938 */
  if (!C.zf) goto L_10427938;
  /* 10427937 int3  */
  x86_unimpl("int3 @ 0x10427937");
L_10427938:;
  /* 10427938 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042793a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042793c jne 0x10427916 */
  if (!C.zf) goto L_10427916;
L_1042793e:;
  /* 1042793e pop edi */
  EDI = (pop32());
  /* 1042793f pop esi */
  ESI = (pop32());
  /* 10427940 pop ebx */
  EBX = (pop32());
  /* 10427941 mov esp, ebp */
  ESP = (EBP);
  /* 10427943 pop ebp */
  EBP = (pop32());
  /* 10427944 ret  */
  ESPCHK(0x10427880u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x10427950 (329 bytes, 102 insns) */
void f_10427950(void) {
  FTRACE(0x10427950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427950 push ebp */
  push32((uint32_t)(EBP));
  /* 10427951 mov ebp, esp */
  EBP = (ESP);
  /* 10427953 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427956 cmp dword ptr [0x104530b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042795d jne 0x10427964 */
  if (!C.zf) goto L_10427964;
  /* 1042795f call 0x1042c290 */
  push32(0x10427964u); f_1042c290();
L_10427964:;
  /* 10427964 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042796b mov eax, dword ptr [0x10451560] */
  EAX = (r32((uint32_t)(0x10451560)));
  /* 10427970 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10427973:;
  /* 10427973 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427976 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10427979 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042797b je 0x104279a9 */
  if (C.zf) goto L_104279a9;
  /* 1042797d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427980 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427983 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427986 je 0x10427991 */
  if (C.zf) goto L_10427991;
  /* 10427988 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042798b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042798e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10427991:;
  /* 10427991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427994 push eax */
  push32((uint32_t)(EAX));
  /* 10427995 call 0x10428810 */
  push32(0x1042799au); f_10428810();
  /* 1042799a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042799d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104279a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104279a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104279a7 jmp 0x10427973 */
  goto L_10427973;
L_104279a9:;
  /* 104279a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 104279ab push 0x1044ccec */
  push32((uint32_t)(0x1044ccecu));
  /* 104279b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 104279b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104279b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 104279bc push ecx */
  push32((uint32_t)(ECX));
  /* 104279bd call 0x104259e0 */
  push32(0x104279c2u); f_104259e0();
  /* 104279c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104279c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104279c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104279cb mov dword ptr [0x10451594], edx */
  w32((uint32_t)(0x10451594), (EDX));
  /* 104279d1 cmp dword ptr [0x10451594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104279d8 jne 0x104279e4 */
  if (!C.zf) goto L_104279e4;
  /* 104279da push 9 */
  push32((uint32_t)(0x9u));
  /* 104279dc call 0x10424950 */
  push32(0x104279e1u); f_10424950();
  /* 104279e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104279e4:;
  /* 104279e4 mov eax, dword ptr [0x10451560] */
  EAX = (r32((uint32_t)(0x10451560)));
  /* 104279e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104279ec jmp 0x104279f7 */
  goto L_104279f7;
L_104279ee:;
  /* 104279ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104279f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104279f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104279f7:;
  /* 104279f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104279fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 104279fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104279ff je 0x10427a67 */
  if (C.zf) goto L_10427a67;
  /* 10427a01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427a04 push ecx */
  push32((uint32_t)(ECX));
  /* 10427a05 call 0x10428810 */
  push32(0x10427a0au); f_10428810();
  /* 10427a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10427a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427a16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10427a19 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427a1c je 0x10427a65 */
  if (C.zf) goto L_10427a65;
  /* 10427a1e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10427a20 push 0x1044ccec */
  push32((uint32_t)(0x1044ccecu));
  /* 10427a25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10427a27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427a2a push ecx */
  push32((uint32_t)(ECX));
  /* 10427a2b call 0x104259e0 */
  push32(0x10427a30u); f_104259e0();
  /* 10427a30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a33 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427a36 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10427a38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427a3b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427a3e jne 0x10427a4a */
  if (!C.zf) goto L_10427a4a;
  /* 10427a40 push 9 */
  push32((uint32_t)(0x9u));
  /* 10427a42 call 0x10424950 */
  push32(0x10427a47u); f_10424950();
  /* 10427a47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10427a4a:;
  /* 10427a4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427a4d push ecx */
  push32((uint32_t)(ECX));
  /* 10427a4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427a51 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10427a53 push eax */
  push32((uint32_t)(EAX));
  /* 10427a54 call 0x10428990 */
  push32(0x10427a59u); f_10428990();
  /* 10427a59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427a5f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10427a65:;
  /* 10427a65 jmp 0x104279ee */
  goto L_104279ee;
L_10427a67:;
  /* 10427a67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10427a69 mov edx, dword ptr [0x10451560] */
  EDX = (r32((uint32_t)(0x10451560)));
  /* 10427a6f push edx */
  push32((uint32_t)(EDX));
  /* 10427a70 call 0x10426470 */
  push32(0x10427a75u); f_10426470();
  /* 10427a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427a78 mov dword ptr [0x10451560], 0 */
  w32((uint32_t)(0x10451560), (0x0u));
  /* 10427a82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427a85 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10427a8b mov dword ptr [0x104530a0], 1 */
  w32((uint32_t)(0x104530a0), (0x1u));
  /* 10427a95 mov esp, ebp */
  ESP = (EBP);
  /* 10427a97 pop ebp */
  EBP = (pop32());
  /* 10427a98 ret  */
  ESPCHK(0x10427950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa0 @ 0x10427aa0 (216 bytes, 69 insns) */
void f_10427aa0(void) {
  FTRACE(0x10427aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10427aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10427aa3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427aa6 cmp dword ptr [0x104530b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104530b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427aad jne 0x10427ab4 */
  if (!C.zf) goto L_10427ab4;
  /* 10427aaf call 0x1042c290 */
  push32(0x10427ab4u); f_1042c290();
L_10427ab4:;
  /* 10427ab4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10427ab9 push 0x104515d0 */
  push32((uint32_t)(0x104515d0u));
  /* 10427abe push 0 */
  push32((uint32_t)(0x0u));
  /* 10427ac0 call dword ptr [0x10454310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454310))), 0x10427ac6u);
  /* 10427ac6 mov dword ptr [0x104515a4], 0x104515d0 */
  w32((uint32_t)(0x104515a4), (0x104515d0u));
  /* 10427ad0 mov eax, dword ptr [0x104530cc] */
  EAX = (r32((uint32_t)(0x104530cc)));
  /* 10427ad5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427ad8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427ada jne 0x10427ae7 */
  if (!C.zf) goto L_10427ae7;
  /* 10427adc mov edx, dword ptr [0x104515a4] */
  EDX = (r32((uint32_t)(0x104515a4)));
  /* 10427ae2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10427ae5 jmp 0x10427aef */
  goto L_10427aef;
L_10427ae7:;
  /* 10427ae7 mov eax, dword ptr [0x104530cc] */
  EAX = (r32((uint32_t)(0x104530cc)));
  /* 10427aec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10427aef:;
  /* 10427aef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10427af2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10427af5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10427af8 push edx */
  push32((uint32_t)(EDX));
  /* 10427af9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10427afc push eax */
  push32((uint32_t)(EAX));
  /* 10427afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10427aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10427b01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427b04 push ecx */
  push32((uint32_t)(ECX));
  /* 10427b05 call 0x10427b80 */
  push32(0x10427b0au); f_10427b80();
  /* 10427b0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427b0d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10427b12 push 0x1044ccf8 */
  push32((uint32_t)(0x1044ccf8u));
  /* 10427b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10427b19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427b1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427b1f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10427b22 push ecx */
  push32((uint32_t)(ECX));
  /* 10427b23 call 0x104259e0 */
  push32(0x10427b28u); f_104259e0();
  /* 10427b28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427b2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10427b2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427b32 jne 0x10427b3e */
  if (!C.zf) goto L_10427b3e;
  /* 10427b34 push 8 */
  push32((uint32_t)(0x8u));
  /* 10427b36 call 0x10424950 */
  push32(0x10427b3bu); f_10424950();
  /* 10427b3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10427b3e:;
  /* 10427b3e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10427b41 push edx */
  push32((uint32_t)(EDX));
  /* 10427b42 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10427b45 push eax */
  push32((uint32_t)(EAX));
  /* 10427b46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427b49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427b4c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10427b4f push eax */
  push32((uint32_t)(EAX));
  /* 10427b50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10427b54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427b57 push edx */
  push32((uint32_t)(EDX));
  /* 10427b58 call 0x10427b80 */
  push32(0x10427b5du); f_10427b80();
  /* 10427b5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10427b60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427b63 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427b66 mov dword ptr [0x10451588], eax */
  w32((uint32_t)(0x10451588), (EAX));
  /* 10427b6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10427b6e mov dword ptr [0x1045158c], ecx */
  w32((uint32_t)(0x1045158c), (ECX));
  /* 10427b74 mov esp, ebp */
  ESP = (EBP);
  /* 10427b76 pop ebp */
  EBP = (pop32());
  /* 10427b77 ret  */
  ESPCHK(0x10427aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b80 @ 0x10427b80 (1060 bytes, 360 insns) */
void f_10427b80(void) {
  FTRACE(0x10427b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10427b81 mov ebp, esp */
  EBP = (ESP);
  /* 10427b83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427b86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427b89 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10427b8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427b92 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10427b98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10427b9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10427b9e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427ba2 je 0x10427bb5 */
  if (C.zf) goto L_10427bb5;
  /* 10427ba4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427ba7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427baa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10427bac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427baf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427bb2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10427bb5:;
  /* 10427bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427bb8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427bbb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427bbe jne 0x10427c8d */
  if (!C.zf) goto L_10427c8d;
L_10427bc4:;
  /* 10427bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427bc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427bca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10427bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427bd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427bd3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427bd6 je 0x10427c52 */
  if (C.zf) goto L_10427c52;
  /* 10427bd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427bdb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10427bde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427be0 je 0x10427c52 */
  if (C.zf) goto L_10427c52;
  /* 10427be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427be5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427be7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10427be9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427beb mov al, byte ptr [edx + 0x10452e01] */
  AL = (r8((uint32_t)(EDX + 0x10452e01)));
  /* 10427bf1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10427bf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427bf6 je 0x10427c27 */
  if (C.zf) goto L_10427c27;
  /* 10427bf8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427bfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10427bfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10427c05 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427c09 je 0x10427c27 */
  if (C.zf) goto L_10427c27;
  /* 10427c0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427c11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10427c13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10427c15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10427c1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427c21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10427c27:;
  /* 10427c27 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427c2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10427c34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427c38 je 0x10427c4d */
  if (C.zf) goto L_10427c4d;
  /* 10427c3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427c40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10427c42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10427c44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c4a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10427c4d:;
  /* 10427c4d jmp 0x10427bc4 */
  goto L_10427bc4;
L_10427c52:;
  /* 10427c52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10427c57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c5a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c5d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10427c5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427c63 je 0x10427c74 */
  if (C.zf) goto L_10427c74;
  /* 10427c65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c68 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10427c6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427c6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c71 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10427c74:;
  /* 10427c74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427c77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427c7a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427c7d jne 0x10427c88 */
  if (!C.zf) goto L_10427c88;
  /* 10427c7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427c82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10427c88:;
  /* 10427c88 jmp 0x10427d5c */
  goto L_10427d5c;
L_10427c8d:;
  /* 10427c8d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427c92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427c95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427c98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10427c9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427c9e je 0x10427cb3 */
  if (C.zf) goto L_10427cb3;
  /* 10427ca0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427ca6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10427ca8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10427caa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427cad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427cb0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10427cb3:;
  /* 10427cb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427cb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10427cb8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10427cbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427cbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427cc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10427cc4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427cc7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10427ccd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427ccf mov dl, byte ptr [ecx + 0x10452e01] */
  DL = (r8((uint32_t)(ECX + 0x10452e01)));
  /* 10427cd5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10427cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10427cda je 0x10427d0b */
  if (C.zf) goto L_10427d0b;
  /* 10427cdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427cdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427ce1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427ce4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427ce7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10427ce9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427ced je 0x10427d02 */
  if (C.zf) goto L_10427d02;
  /* 10427cef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427cf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427cf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10427cf7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10427cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427cfc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427cff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10427d02:;
  /* 10427d02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427d08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10427d0b:;
  /* 10427d0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427d0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10427d14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427d17 je 0x10427d37 */
  if (C.zf) goto L_10427d37;
  /* 10427d19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427d1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10427d21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427d23 je 0x10427d37 */
  if (C.zf) goto L_10427d37;
  /* 10427d25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427d28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10427d2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427d31 jne 0x10427c8d */
  if (!C.zf) goto L_10427c8d;
L_10427d37:;
  /* 10427d37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10427d3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10427d40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10427d42 jne 0x10427d4f */
  if (!C.zf) goto L_10427d4f;
  /* 10427d44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427d4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10427d4d jmp 0x10427d5c */
  goto L_10427d5c;
L_10427d4f:;
  /* 10427d4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427d53 je 0x10427d5c */
  if (C.zf) goto L_10427d5c;
  /* 10427d55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427d58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10427d5c:;
  /* 10427d5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10427d63:;
  /* 10427d63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10427d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427d6b je 0x10427d8e */
  if (C.zf) goto L_10427d8e;
L_10427d6d:;
  /* 10427d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10427d73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427d76 je 0x10427d83 */
  if (C.zf) goto L_10427d83;
  /* 10427d78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427d7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427d81 jne 0x10427d8e */
  if (!C.zf) goto L_10427d8e;
L_10427d83:;
  /* 10427d83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427d89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10427d8c jmp 0x10427d6d */
  goto L_10427d6d;
L_10427d8e:;
  /* 10427d8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427d91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427d94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427d96 jne 0x10427d9d */
  if (!C.zf) goto L_10427d9d;
  /* 10427d98 jmp 0x10427f7b */
  goto L_10427f7b;
L_10427d9d:;
  /* 10427d9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427da1 je 0x10427db4 */
  if (C.zf) goto L_10427db4;
  /* 10427da3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427da6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427da9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10427dab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427dae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427db1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10427db4:;
  /* 10427db4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427db7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10427db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427dbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427dbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10427dc1:;
  /* 10427dc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10427dc8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10427dcf:;
  /* 10427dcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427dd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10427dd5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427dd8 jne 0x10427dee */
  if (!C.zf) goto L_10427dee;
  /* 10427dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427ddd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427de0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10427de3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427de6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427de9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10427dec jmp 0x10427dcf */
  goto L_10427dcf;
L_10427dee:;
  /* 10427dee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427df1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427df4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427df7 jne 0x10427e4a */
  if (!C.zf) goto L_10427e4a;
  /* 10427df9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427dfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427dfe mov ecx, 2 */
  ECX = (0x2u);
  /* 10427e03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10427e05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10427e07 jne 0x10427e42 */
  if (!C.zf) goto L_10427e42;
  /* 10427e09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e0d je 0x10427e2f */
  if (C.zf) goto L_10427e2f;
  /* 10427e0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427e12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10427e16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e19 jne 0x10427e26 */
  if (!C.zf) goto L_10427e26;
  /* 10427e1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427e21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10427e24 jmp 0x10427e2d */
  goto L_10427e2d;
L_10427e26:;
  /* 10427e26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10427e2d:;
  /* 10427e2d jmp 0x10427e36 */
  goto L_10427e36;
L_10427e2f:;
  /* 10427e2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10427e36:;
  /* 10427e36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10427e38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10427e3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10427e42:;
  /* 10427e42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427e45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10427e47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10427e4a:;
  /* 10427e4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427e4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10427e50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427e53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10427e56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427e58 je 0x10427e7e */
  if (C.zf) goto L_10427e7e;
  /* 10427e5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e5e je 0x10427e6f */
  if (C.zf) goto L_10427e6f;
  /* 10427e60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427e63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10427e66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427e69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427e6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10427e6f:;
  /* 10427e6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427e72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10427e74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427e77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427e7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10427e7c jmp 0x10427e4a */
  goto L_10427e4a;
L_10427e7e:;
  /* 10427e7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427e81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10427e84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10427e86 je 0x10427ea4 */
  if (C.zf) goto L_10427ea4;
  /* 10427e88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e8c jne 0x10427ea9 */
  if (!C.zf) goto L_10427ea9;
  /* 10427e8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427e91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10427e94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427e97 je 0x10427ea4 */
  if (C.zf) goto L_10427ea4;
  /* 10427e99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427e9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10427e9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427ea2 jne 0x10427ea9 */
  if (!C.zf) goto L_10427ea9;
L_10427ea4:;
  /* 10427ea4 jmp 0x10427f54 */
  goto L_10427f54;
L_10427ea9:;
  /* 10427ea9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427ead je 0x10427f46 */
  if (C.zf) goto L_10427f46;
  /* 10427eb3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427eb7 je 0x10427f0d */
  if (C.zf) goto L_10427f0d;
  /* 10427eb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427ebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427ebe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10427ec0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10427ec2 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 10427ec8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10427ecb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427ecd je 0x10427ef8 */
  if (C.zf) goto L_10427ef8;
  /* 10427ecf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427ed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427ed5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10427ed7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10427ed9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427edc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427edf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10427ee2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427ee5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427ee8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10427eeb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427eee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10427ef0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427ef3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427ef6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10427ef8:;
  /* 10427ef8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427efb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427efe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10427f00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10427f02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427f05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10427f0b jmp 0x10427f39 */
  goto L_10427f39;
L_10427f0d:;
  /* 10427f0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427f10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10427f12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10427f14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10427f16 mov cl, byte ptr [eax + 0x10452e01] */
  CL = (r8((uint32_t)(EAX + 0x10452e01)));
  /* 10427f1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10427f1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10427f21 je 0x10427f39 */
  if (C.zf) goto L_10427f39;
  /* 10427f23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427f26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10427f2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427f31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10427f39:;
  /* 10427f39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427f3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10427f46:;
  /* 10427f46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10427f49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10427f4f jmp 0x10427dc1 */
  goto L_10427dc1;
L_10427f54:;
  /* 10427f54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427f58 je 0x10427f69 */
  if (C.zf) goto L_10427f69;
  /* 10427f5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427f5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10427f60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10427f63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10427f69:;
  /* 10427f69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10427f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10427f74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10427f76 jmp 0x10427d63 */
  goto L_10427d63;
L_10427f7b:;
  /* 10427f7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427f7f je 0x10427f93 */
  if (C.zf) goto L_10427f93;
  /* 10427f81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427f84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10427f8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10427f8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10427f93:;
  /* 10427f93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427f96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10427f98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10427f9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10427f9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10427fa0 mov esp, ebp */
  ESP = (EBP);
  /* 10427fa2 pop ebp */
  EBP = (pop32());
  /* 10427fa3 ret  */
  ESPCHK(0x10427b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fb0 @ 0x10427fb0 (537 bytes, 173 insns) */
void f_10427fb0(void) {
  FTRACE(0x10427fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10427fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10427fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10427fb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10427fb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10427fbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10427fc4 cmp dword ptr [0x104516d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427fcb jne 0x1042800a */
  if (!C.zf) goto L_1042800a;
  /* 10427fcd call dword ptr [0x1045436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045436c))), 0x10427fd3u);
  /* 10427fd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10427fd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427fda je 0x10427fe8 */
  if (C.zf) goto L_10427fe8;
  /* 10427fdc mov dword ptr [0x104516d4], 1 */
  w32((uint32_t)(0x104516d4), (0x1u));
  /* 10427fe6 jmp 0x1042800a */
  goto L_1042800a;
L_10427fe8:;
  /* 10427fe8 call dword ptr [0x10454368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454368))), 0x10427feeu);
  /* 10427fee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10427ff1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10427ff5 je 0x10428003 */
  if (C.zf) goto L_10428003;
  /* 10427ff7 mov dword ptr [0x104516d4], 2 */
  w32((uint32_t)(0x104516d4), (0x2u));
  /* 10428001 jmp 0x1042800a */
  goto L_1042800a;
L_10428003:;
  /* 10428003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10428005 jmp 0x104281c5 */
  goto L_104281c5;
L_1042800a:;
  /* 1042800a cmp dword ptr [0x104516d4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x104516d4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428011 jne 0x1042810e */
  if (!C.zf) goto L_1042810e;
  /* 10428017 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042801b jne 0x10428033 */
  if (!C.zf) goto L_10428033;
  /* 1042801d call dword ptr [0x1045436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045436c))), 0x10428023u);
  /* 10428023 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10428026 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042802a jne 0x10428033 */
  if (!C.zf) goto L_10428033;
  /* 1042802c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042802e jmp 0x104281c5 */
  goto L_104281c5;
L_10428033:;
  /* 10428033 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10428036 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10428039:;
  /* 10428039 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042803c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1042803e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10428041 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10428043 je 0x10428065 */
  if (C.zf) goto L_10428065;
  /* 10428045 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428048 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042804b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042804e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428051 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428053 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10428056 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10428058 jne 0x10428063 */
  if (!C.zf) goto L_10428063;
  /* 1042805a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042805d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428060 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10428063:;
  /* 10428063 jmp 0x10428039 */
  goto L_10428039;
L_10428065:;
  /* 10428065 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428068 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042806b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1042806d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428070 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10428073 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428075 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428077 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1042807b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042807e push edx */
  push32((uint32_t)(EDX));
  /* 1042807f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10428082 push eax */
  push32((uint32_t)(EAX));
  /* 10428083 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428085 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428087 call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x1042808du);
  /* 1042808d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10428090 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428094 je 0x104280b4 */
  if (C.zf) goto L_104280b4;
  /* 10428096 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10428098 push 0x1044cd04 */
  push32((uint32_t)(0x1044cd04u));
  /* 1042809d push 2 */
  push32((uint32_t)(0x2u));
  /* 1042809f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104280a2 push ecx */
  push32((uint32_t)(ECX));
  /* 104280a3 call 0x104259e0 */
  push32(0x104280a8u); f_104259e0();
  /* 104280a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104280ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 104280ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104280b2 jne 0x104280c5 */
  if (!C.zf) goto L_104280c5;
L_104280b4:;
  /* 104280b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104280b7 push edx */
  push32((uint32_t)(EDX));
  /* 104280b8 call dword ptr [0x10454360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454360))), 0x104280beu);
  /* 104280be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104280c0 jmp 0x104281c5 */
  goto L_104281c5;
L_104280c5:;
  /* 104280c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104280c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104280c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104280cc push eax */
  push32((uint32_t)(EAX));
  /* 104280cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104280d0 push ecx */
  push32((uint32_t)(ECX));
  /* 104280d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104280d4 push edx */
  push32((uint32_t)(EDX));
  /* 104280d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104280d8 push eax */
  push32((uint32_t)(EAX));
  /* 104280d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104280db push 0 */
  push32((uint32_t)(0x0u));
  /* 104280dd call dword ptr [0x10454364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454364))), 0x104280e3u);
  /* 104280e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104280e5 jne 0x104280fc */
  if (!C.zf) goto L_104280fc;
  /* 104280e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104280e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104280ec push ecx */
  push32((uint32_t)(ECX));
  /* 104280ed call 0x10426470 */
  push32(0x104280f2u); f_10426470();
  /* 104280f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104280f5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_104280fc:;
  /* 104280fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104280ff push edx */
  push32((uint32_t)(EDX));
  /* 10428100 call dword ptr [0x10454360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454360))), 0x10428106u);
  /* 10428106 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428109 jmp 0x104281c5 */
  goto L_104281c5;
L_1042810e:;
  /* 1042810e cmp dword ptr [0x104516d4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x104516d4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428115 jne 0x104281c3 */
  if (!C.zf) goto L_104281c3;
  /* 1042811b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042811f jne 0x10428137 */
  if (!C.zf) goto L_10428137;
  /* 10428121 call dword ptr [0x10454368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454368))), 0x10428127u);
  /* 10428127 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1042812a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042812e jne 0x10428137 */
  if (!C.zf) goto L_10428137;
  /* 10428130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10428132 jmp 0x104281c5 */
  goto L_104281c5;
L_10428137:;
  /* 10428137 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1042813a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1042813d:;
  /* 1042813d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428140 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10428143 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10428145 je 0x10428165 */
  if (C.zf) goto L_10428165;
  /* 10428147 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042814a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042814d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428150 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428153 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10428156 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10428158 jne 0x10428163 */
  if (!C.zf) goto L_10428163;
  /* 1042815a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042815d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428160 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10428163:;
  /* 10428163 jmp 0x1042813d */
  goto L_1042813d;
L_10428165:;
  /* 10428165 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428168 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042816b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042816e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10428171 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10428176 push 0x1044cd04 */
  push32((uint32_t)(0x1044cd04u));
  /* 1042817b push 2 */
  push32((uint32_t)(0x2u));
  /* 1042817d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10428180 push edx */
  push32((uint32_t)(EDX));
  /* 10428181 call 0x104259e0 */
  push32(0x10428186u); f_104259e0();
  /* 10428186 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428189 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1042818c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428190 jne 0x104281a0 */
  if (!C.zf) goto L_104281a0;
  /* 10428192 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428195 push eax */
  push32((uint32_t)(EAX));
  /* 10428196 call dword ptr [0x1045435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045435c))), 0x1042819cu);
  /* 1042819c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042819e jmp 0x104281c5 */
  goto L_104281c5;
L_104281a0:;
  /* 104281a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104281a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104281a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104281a7 push edx */
  push32((uint32_t)(EDX));
  /* 104281a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104281ab push eax */
  push32((uint32_t)(EAX));
  /* 104281ac call 0x1042c2c0 */
  push32(0x104281b1u); f_1042c2c0();
  /* 104281b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104281b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104281b7 push ecx */
  push32((uint32_t)(ECX));
  /* 104281b8 call dword ptr [0x1045435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045435c))), 0x104281beu);
  /* 104281be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104281c1 jmp 0x104281c5 */
  goto L_104281c5;
L_104281c3:;
  /* 104281c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104281c5:;
  /* 104281c5 mov esp, ebp */
  ESP = (EBP);
  /* 104281c7 pop ebp */
  EBP = (pop32());
  /* 104281c8 ret  */
  ESPCHK(0x10427fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x104281d0 (77 bytes, 25 insns) */
void f_104281d0(void) {
  FTRACE(0x104281d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104281d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104281d1 mov ebp, esp */
  EBP = (ESP);
  /* 104281d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104281d5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 104281da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104281dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104281e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 104281e3 push eax */
  push32((uint32_t)(EAX));
  /* 104281e4 call dword ptr [0x10454374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454374))), 0x104281eau);
  /* 104281ea mov dword ptr [0x10452f2c], eax */
  w32((uint32_t)(0x10452f2c), (EAX));
  /* 104281ef cmp dword ptr [0x10452f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10452f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104281f6 jne 0x104281fc */
  if (!C.zf) goto L_104281fc;
  /* 104281f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104281fa jmp 0x1042821b */
  goto L_1042821b;
L_104281fc:;
  /* 104281fc call 0x10429c80 */
  push32(0x10428201u); f_10429c80();
  /* 10428201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10428203 jne 0x10428216 */
  if (!C.zf) goto L_10428216;
  /* 10428205 mov ecx, dword ptr [0x10452f2c] */
  ECX = (r32((uint32_t)(0x10452f2c)));
  /* 1042820b push ecx */
  push32((uint32_t)(ECX));
  /* 1042820c call dword ptr [0x10454370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454370))), 0x10428212u);
  /* 10428212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10428214 jmp 0x1042821b */
  goto L_1042821b;
L_10428216:;
  /* 10428216 mov eax, 1 */
  EAX = (0x1u);
L_1042821b:;
  /* 1042821b pop ebp */
  EBP = (pop32());
  /* 1042821c ret  */
  ESPCHK(0x104281d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x10428220 (156 bytes, 48 insns) */
void f_10428220(void) {
  FTRACE(0x10428220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428220 push ebp */
  push32((uint32_t)(EBP));
  /* 10428221 mov ebp, esp */
  EBP = (ESP);
  /* 10428223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428226 mov eax, dword ptr [0x10452f28] */
  EAX = (r32((uint32_t)(0x10452f28)));
  /* 1042822b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1042822e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10428235 jmp 0x10428240 */
  goto L_10428240;
L_10428237:;
  /* 10428237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042823a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042823d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10428240:;
  /* 10428240 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428243 cmp edx, dword ptr [0x10452f24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10452f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428249 jge 0x10428296 */
  if ((C.sf==C.of)) goto L_10428296;
  /* 1042824b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10428250 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10428255 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428258 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1042825b push ecx */
  push32((uint32_t)(ECX));
  /* 1042825c call dword ptr [0x1045437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045437c))), 0x10428262u);
  /* 10428262 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10428267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428269 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042826c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1042826f push eax */
  push32((uint32_t)(EAX));
  /* 10428270 call dword ptr [0x1045437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045437c))), 0x10428276u);
  /* 10428276 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428279 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1042827c push edx */
  push32((uint32_t)(EDX));
  /* 1042827d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042827f mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 10428284 push eax */
  push32((uint32_t)(EAX));
  /* 10428285 call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x1042828bu);
  /* 1042828b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042828e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428291 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10428294 jmp 0x10428237 */
  goto L_10428237;
L_10428296:;
  /* 10428296 mov edx, dword ptr [0x10452f28] */
  EDX = (r32((uint32_t)(0x10452f28)));
  /* 1042829c push edx */
  push32((uint32_t)(EDX));
  /* 1042829d push 0 */
  push32((uint32_t)(0x0u));
  /* 1042829f mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 104282a4 push eax */
  push32((uint32_t)(EAX));
  /* 104282a5 call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x104282abu);
  /* 104282ab mov ecx, dword ptr [0x10452f2c] */
  ECX = (r32((uint32_t)(0x10452f2c)));
  /* 104282b1 push ecx */
  push32((uint32_t)(ECX));
  /* 104282b2 call dword ptr [0x10454370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454370))), 0x104282b8u);
  /* 104282b8 mov esp, ebp */
  ESP = (EBP);
  /* 104282ba pop ebp */
  EBP = (pop32());
  /* 104282bb ret  */
  ESPCHK(0x10428220u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x104282c0 (73 bytes, 19 insns) */
void f_104282c0(void) {
  FTRACE(0x104282c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104282c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104282c1 mov ebp, esp */
  EBP = (ESP);
  /* 104282c3 cmp dword ptr [0x10451568], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104282ca je 0x104282de */
  if (C.zf) goto L_104282de;
  /* 104282cc cmp dword ptr [0x10451568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104282d3 jne 0x10428307 */
  if (!C.zf) goto L_10428307;
  /* 104282d5 cmp dword ptr [0x1045156c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045156c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104282dc jne 0x10428307 */
  if (!C.zf) goto L_10428307;
L_104282de:;
  /* 104282de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 104282e3 call 0x10428310 */
  push32(0x104282e8u); f_10428310();
  /* 104282e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104282eb cmp dword ptr [0x104516d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104282f2 je 0x104282fa */
  if (C.zf) goto L_104282fa;
  /* 104282f4 call dword ptr [0x104516d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104516d8))), 0x104282fau);
L_104282fa:;
  /* 104282fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 104282ff call 0x10428310 */
  push32(0x10428304u); f_10428310();
  /* 10428304 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428307:;
  /* 10428307 pop ebp */
  EBP = (pop32());
  /* 10428308 ret  */
  ESPCHK(0x104282c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x10428310 (447 bytes, 131 insns) */
void f_10428310(void) {
  FTRACE(0x10428310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428310 push ebp */
  push32((uint32_t)(EBP));
  /* 10428311 mov ebp, esp */
  EBP = (ESP);
  /* 10428313 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428319 push ebx */
  push32((uint32_t)(EBX));
  /* 1042831a push esi */
  push32((uint32_t)(ESI));
  /* 1042831b push edi */
  push32((uint32_t)(EDI));
  /* 1042831c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10428323 jmp 0x1042832e */
  goto L_1042832e;
L_10428325:;
  /* 10428325 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428328 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042832b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1042832e:;
  /* 1042832e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428332 jae 0x10428347 */
  if (!C.cf) goto L_10428347;
  /* 10428334 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428337 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042833a cmp edx, dword ptr [ecx*8 + 0x1044fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1044fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428341 jne 0x10428345 */
  if (!C.zf) goto L_10428345;
  /* 10428343 jmp 0x10428347 */
  goto L_10428347;
L_10428345:;
  /* 10428345 jmp 0x10428325 */
  goto L_10428325;
L_10428347:;
  /* 10428347 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042834a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042834d cmp ecx, dword ptr [eax*8 + 0x1044fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1044fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428354 jne 0x104284c8 */
  if (!C.zf) goto L_104284c8;
  /* 1042835a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428361 je 0x10428384 */
  if (C.zf) goto L_10428384;
  /* 10428363 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428366 mov eax, dword ptr [edx*8 + 0x1044fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1044fab4)));
  /* 1042836d push eax */
  push32((uint32_t)(EAX));
  /* 1042836e push 0 */
  push32((uint32_t)(0x0u));
  /* 10428370 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428372 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428374 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428376 call 0x10424aa0 */
  push32(0x1042837bu); f_10424aa0();
  /* 1042837b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042837e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428381 jne 0x10428384 */
  if (!C.zf) goto L_10428384;
  /* 10428383 int3  */
  x86_unimpl("int3 @ 0x10428383");
L_10428384:;
  /* 10428384 cmp dword ptr [0x10451568], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042838b je 0x1042839f */
  if (C.zf) goto L_1042839f;
  /* 1042838d cmp dword ptr [0x10451568], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451568))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428394 jne 0x104283d8 */
  if (!C.zf) goto L_104283d8;
  /* 10428396 cmp dword ptr [0x1045156c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1045156c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042839d jne 0x104283d8 */
  if (!C.zf) goto L_104283d8;
L_1042839f:;
  /* 1042839f push 0 */
  push32((uint32_t)(0x0u));
  /* 104283a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 104283a4 push ecx */
  push32((uint32_t)(ECX));
  /* 104283a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104283a8 mov eax, dword ptr [edx*8 + 0x1044fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1044fab4)));
  /* 104283af push eax */
  push32((uint32_t)(EAX));
  /* 104283b0 call 0x10428810 */
  push32(0x104283b5u); f_10428810();
  /* 104283b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104283b8 push eax */
  push32((uint32_t)(EAX));
  /* 104283b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104283bc mov edx, dword ptr [ecx*8 + 0x1044fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1044fab4)));
  /* 104283c3 push edx */
  push32((uint32_t)(EDX));
  /* 104283c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 104283c6 call dword ptr [0x104542f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f4))), 0x104283ccu);
  /* 104283cc push eax */
  push32((uint32_t)(EAX));
  /* 104283cd call dword ptr [0x104542f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542f8))), 0x104283d3u);
  /* 104283d3 jmp 0x104284c8 */
  goto L_104284c8;
L_104283d8:;
  /* 104283d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104283df je 0x104284c8 */
  if (C.zf) goto L_104284c8;
  /* 104283e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 104283ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 104283f0 push eax */
  push32((uint32_t)(EAX));
  /* 104283f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 104283f3 call dword ptr [0x10454310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454310))), 0x104283f9u);
  /* 104283f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104283fb jne 0x10428411 */
  if (!C.zf) goto L_10428411;
  /* 104283fd push 0x1044c56c */
  push32((uint32_t)(0x1044c56cu));
  /* 10428402 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10428408 push ecx */
  push32((uint32_t)(ECX));
  /* 10428409 call 0x10428990 */
  push32(0x1042840eu); f_10428990();
  /* 1042840e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428411:;
  /* 10428411 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10428417 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1042841a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042841d push eax */
  push32((uint32_t)(EAX));
  /* 1042841e call 0x10428810 */
  push32(0x10428423u); f_10428810();
  /* 10428423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428426 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428429 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042842c jbe 0x1042845a */
  if ((C.cf||C.zf)) goto L_1042845a;
  /* 1042842e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10428434 push ecx */
  push32((uint32_t)(ECX));
  /* 10428435 call 0x10428810 */
  push32(0x1042843au); f_10428810();
  /* 1042843a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042843d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428440 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10428444 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428447 push 3 */
  push32((uint32_t)(0x3u));
  /* 10428449 push 0x1044c568 */
  push32((uint32_t)(0x1044c568u));
  /* 1042844e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428451 push ecx */
  push32((uint32_t)(ECX));
  /* 10428452 call 0x10429200 */
  push32(0x10428457u); f_10429200();
  /* 10428457 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042845a:;
  /* 1042845a push 0x1044cfc0 */
  push32((uint32_t)(0x1044cfc0u));
  /* 1042845f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10428465 push edx */
  push32((uint32_t)(EDX));
  /* 10428466 call 0x10428990 */
  push32(0x1042846bu); f_10428990();
  /* 1042846b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042846e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428471 push eax */
  push32((uint32_t)(EAX));
  /* 10428472 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10428478 push ecx */
  push32((uint32_t)(ECX));
  /* 10428479 call 0x104289a0 */
  push32(0x1042847eu); f_104289a0();
  /* 1042847e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428481 push 0x1044c4e0 */
  push32((uint32_t)(0x1044c4e0u));
  /* 10428486 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1042848c push edx */
  push32((uint32_t)(EDX));
  /* 1042848d call 0x104289a0 */
  push32(0x10428492u); f_104289a0();
  /* 10428492 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428498 mov ecx, dword ptr [eax*8 + 0x1044fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1044fab4)));
  /* 1042849f push ecx */
  push32((uint32_t)(ECX));
  /* 104284a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 104284a6 push edx */
  push32((uint32_t)(EDX));
  /* 104284a7 call 0x104289a0 */
  push32(0x104284acu); f_104289a0();
  /* 104284ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104284af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 104284b4 push 0x1044cf98 */
  push32((uint32_t)(0x1044cf98u));
  /* 104284b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 104284bf push eax */
  push32((uint32_t)(EAX));
  /* 104284c0 call 0x10429140 */
  push32(0x104284c5u); f_10429140();
  /* 104284c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104284c8:;
  /* 104284c8 pop edi */
  EDI = (pop32());
  /* 104284c9 pop esi */
  ESI = (pop32());
  /* 104284ca pop ebx */
  EBX = (pop32());
  /* 104284cb mov esp, ebp */
  ESP = (EBP);
  /* 104284cd pop ebp */
  EBP = (pop32());
  /* 104284ce ret  */
  ESPCHK(0x10428310u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x104284d0 (80 bytes, 27 insns) */
void f_104284d0(void) {
  FTRACE(0x104284d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104284d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104284d1 mov ebp, esp */
  EBP = (ESP);
  /* 104284d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104284d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104284db jmp 0x104284e6 */
  goto L_104284e6;
L_104284dd:;
  /* 104284dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104284e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104284e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104284e6:;
  /* 104284e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104284ea jae 0x104284ff */
  if (!C.cf) goto L_104284ff;
  /* 104284ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104284ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104284f2 cmp edx, dword ptr [ecx*8 + 0x1044fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1044fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104284f9 jne 0x104284fd */
  if (!C.zf) goto L_104284fd;
  /* 104284fb jmp 0x104284ff */
  goto L_104284ff;
L_104284fd:;
  /* 104284fd jmp 0x104284dd */
  goto L_104284dd;
L_104284ff:;
  /* 104284ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428505 cmp ecx, dword ptr [eax*8 + 0x1044fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1044fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042850c jne 0x1042851a */
  if (!C.zf) goto L_1042851a;
  /* 1042850e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428511 mov eax, dword ptr [edx*8 + 0x1044fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1044fab4)));
  /* 10428518 jmp 0x1042851c */
  goto L_1042851c;
L_1042851a:;
  /* 1042851a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1042851c:;
  /* 1042851c mov esp, ebp */
  ESP = (EBP);
  /* 1042851e pop ebp */
  EBP = (pop32());
  /* 1042851f ret  */
  ESPCHK(0x104284d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10428520 (66 bytes, 28 insns) */
void f_10428520(void) {
  FTRACE(0x10428520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428520 push ebp */
  push32((uint32_t)(EBP));
  /* 10428521 mov ebp, esp */
  EBP = (ESP);
  /* 10428523 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428527 jne 0x10428547 */
  if (!C.zf) goto L_10428547;
  /* 10428529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042852d jge 0x10428547 */
  if ((C.sf==C.of)) goto L_10428547;
  /* 1042852f push 1 */
  push32((uint32_t)(0x1u));
  /* 10428531 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10428534 push eax */
  push32((uint32_t)(EAX));
  /* 10428535 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428538 push ecx */
  push32((uint32_t)(ECX));
  /* 10428539 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042853c push edx */
  push32((uint32_t)(EDX));
  /* 1042853d call 0x10428570 */
  push32(0x10428542u); f_10428570();
  /* 10428542 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428545 jmp 0x1042855d */
  goto L_1042855d;
L_10428547:;
  /* 10428547 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428549 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042854c push eax */
  push32((uint32_t)(EAX));
  /* 1042854d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428550 push ecx */
  push32((uint32_t)(ECX));
  /* 10428551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428554 push edx */
  push32((uint32_t)(EDX));
  /* 10428555 call 0x10428570 */
  push32(0x1042855au); f_10428570();
  /* 1042855a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042855d:;
  /* 1042855d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428560 pop ebp */
  EBP = (pop32());
  /* 10428561 ret  */
  ESPCHK(0x10428520u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10428570 (194 bytes, 71 insns) */
void f_10428570(void) {
  FTRACE(0x10428570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428570 push ebp */
  push32((uint32_t)(EBP));
  /* 10428571 mov ebp, esp */
  EBP = (ESP);
  /* 10428573 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428576 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428579 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042857c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428580 je 0x10428599 */
  if (C.zf) goto L_10428599;
  /* 10428582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428585 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10428588 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042858b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042858e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10428591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428594 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10428596 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10428599:;
  /* 10428599 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042859c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1042859f:;
  /* 1042859f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104285a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104285a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104285a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 104285aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104285ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104285af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104285b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 104285b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104285b9 jbe 0x104285d1 */
  if ((C.cf||C.zf)) goto L_104285d1;
  /* 104285bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104285be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104285c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104285c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104285cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104285cf jmp 0x104285e5 */
  goto L_104285e5;
L_104285d1:;
  /* 104285d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104285d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104285d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104285dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104285e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_104285e5:;
  /* 104285e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104285e9 ja 0x1042859f */
  if ((!C.cf&&!C.zf)) goto L_1042859f;
  /* 104285eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 104285f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104285f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104285fa:;
  /* 104285fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104285fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104285ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10428602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428605 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428608 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1042860a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1042860c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042860f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10428612 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10428614 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428617 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042861a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1042861d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428623 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10428626 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428629 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042862c jb 0x104285fa */
  if (C.cf) goto L_104285fa;
  /* 1042862e mov esp, ebp */
  ESP = (EBP);
  /* 10428630 pop ebp */
  EBP = (pop32());
  /* 10428631 ret  */
  ESPCHK(0x10428570u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10428640 (63 bytes, 24 insns) */
void f_10428640(void) {
  FTRACE(0x10428640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428640 push ebp */
  push32((uint32_t)(EBP));
  /* 10428641 mov ebp, esp */
  EBP = (ESP);
  /* 10428643 push ecx */
  push32((uint32_t)(ECX));
  /* 10428644 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428648 jne 0x10428659 */
  if (!C.zf) goto L_10428659;
  /* 1042864a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042864e jge 0x10428659 */
  if ((C.sf==C.of)) goto L_10428659;
  /* 10428650 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10428657 jmp 0x10428660 */
  goto L_10428660;
L_10428659:;
  /* 10428659 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10428660:;
  /* 10428660 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428663 push eax */
  push32((uint32_t)(EAX));
  /* 10428664 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10428667 push ecx */
  push32((uint32_t)(ECX));
  /* 10428668 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042866b push edx */
  push32((uint32_t)(EDX));
  /* 1042866c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042866f push eax */
  push32((uint32_t)(EAX));
  /* 10428670 call 0x10428570 */
  push32(0x10428675u); f_10428570();
  /* 10428675 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428678 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042867b mov esp, ebp */
  ESP = (EBP);
  /* 1042867d pop ebp */
  EBP = (pop32());
  /* 1042867e ret  */
  ESPCHK(0x10428640u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10428680 (30 bytes, 14 insns) */
void f_10428680(void) {
  FTRACE(0x10428680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428680 push ebp */
  push32((uint32_t)(EBP));
  /* 10428681 mov ebp, esp */
  EBP = (ESP);
  /* 10428683 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428685 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10428688 push eax */
  push32((uint32_t)(EAX));
  /* 10428689 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042868c push ecx */
  push32((uint32_t)(ECX));
  /* 1042868d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428690 push edx */
  push32((uint32_t)(EDX));
  /* 10428691 call 0x10428570 */
  push32(0x10428696u); f_10428570();
  /* 10428696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428699 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042869c pop ebp */
  EBP = (pop32());
  /* 1042869d ret  */
  ESPCHK(0x10428680u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x104286a0 (72 bytes, 28 insns) */
void f_104286a0(void) {
  FTRACE(0x104286a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104286a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104286a1 mov ebp, esp */
  EBP = (ESP);
  /* 104286a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104286a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104286a8 jne 0x104286c1 */
  if (!C.zf) goto L_104286c1;
  /* 104286aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104286ae jg 0x104286c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_104286c1;
  /* 104286b0 jl 0x104286b8 */
  if ((C.sf!=C.of)) goto L_104286b8;
  /* 104286b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104286b6 jae 0x104286c1 */
  if (!C.cf) goto L_104286c1;
L_104286b8:;
  /* 104286b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104286bf jmp 0x104286c8 */
  goto L_104286c8;
L_104286c1:;
  /* 104286c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104286c8:;
  /* 104286c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104286cb push eax */
  push32((uint32_t)(EAX));
  /* 104286cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104286cf push ecx */
  push32((uint32_t)(ECX));
  /* 104286d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104286d3 push edx */
  push32((uint32_t)(EDX));
  /* 104286d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104286d7 push eax */
  push32((uint32_t)(EAX));
  /* 104286d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104286db push ecx */
  push32((uint32_t)(ECX));
  /* 104286dc call 0x104286f0 */
  push32(0x104286e1u); f_104286f0();
  /* 104286e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104286e4 mov esp, ebp */
  ESP = (EBP);
  /* 104286e6 pop ebp */
  EBP = (pop32());
  /* 104286e7 ret  */
  ESPCHK(0x104286a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x104286f0 (242 bytes, 91 insns) */
void f_104286f0(void) {
  FTRACE(0x104286f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104286f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104286f1 mov ebp, esp */
  EBP = (ESP);
  /* 104286f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104286f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104286f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104286fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428700 je 0x10428724 */
  if (C.zf) goto L_10428724;
  /* 10428702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428705 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10428708 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042870b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042870e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10428711 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428714 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10428716 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428719 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042871c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042871e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10428721 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10428724:;
  /* 10428724 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428727 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1042872a:;
  /* 1042872a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1042872d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1042872f push ecx */
  push32((uint32_t)(ECX));
  /* 10428730 push eax */
  push32((uint32_t)(EAX));
  /* 10428731 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428734 push edx */
  push32((uint32_t)(EDX));
  /* 10428735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428738 push eax */
  push32((uint32_t)(EAX));
  /* 10428739 call 0x1042c670 */
  push32(0x1042873eu); f_1042c670();
  /* 1042873e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428741 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10428744 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428746 push edx */
  push32((uint32_t)(EDX));
  /* 10428747 push ecx */
  push32((uint32_t)(ECX));
  /* 10428748 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042874b push eax */
  push32((uint32_t)(EAX));
  /* 1042874c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042874f push ecx */
  push32((uint32_t)(ECX));
  /* 10428750 call 0x1042c600 */
  push32(0x10428755u); f_1042c600();
  /* 10428755 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10428758 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1042875b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042875f jbe 0x10428777 */
  if ((C.cf||C.zf)) goto L_10428777;
  /* 10428761 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428764 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042876a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1042876c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042876f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428772 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10428775 jmp 0x1042878b */
  goto L_1042878b;
L_10428777:;
  /* 10428777 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1042877a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042877d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428780 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10428782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428785 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428788 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1042878b:;
  /* 1042878b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042878f ja 0x1042872a */
  if ((!C.cf&&!C.zf)) goto L_1042872a;
  /* 10428791 jb 0x10428799 */
  if (C.cf) goto L_10428799;
  /* 10428793 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428797 ja 0x1042872a */
  if ((!C.cf&&!C.zf)) goto L_1042872a;
L_10428799:;
  /* 10428799 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042879c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1042879f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104287a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104287a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104287a8:;
  /* 104287a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104287ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104287ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 104287b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104287b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104287b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104287b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 104287ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104287bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 104287c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 104287c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104287c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104287c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104287cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104287ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104287d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104287d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104287d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104287da jb 0x104287a8 */
  if (C.cf) goto L_104287a8;
  /* 104287dc mov esp, ebp */
  ESP = (EBP);
  /* 104287de pop ebp */
  EBP = (pop32());
  /* 104287df ret 0x14 */
  ESPCHK(0x104286f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x104287f0 (31 bytes, 15 insns) */
void f_104287f0(void) {
  FTRACE(0x104287f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104287f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104287f1 mov ebp, esp */
  EBP = (ESP);
  /* 104287f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104287f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104287f8 push eax */
  push32((uint32_t)(EAX));
  /* 104287f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104287fc push ecx */
  push32((uint32_t)(ECX));
  /* 104287fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428800 push edx */
  push32((uint32_t)(EDX));
  /* 10428801 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428804 push eax */
  push32((uint32_t)(EAX));
  /* 10428805 call 0x104286f0 */
  push32(0x1042880au); f_104286f0();
  /* 1042880a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1042880d pop ebp */
  EBP = (pop32());
  /* 1042880e ret  */
  ESPCHK(0x104287f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10428810 (123 bytes, 44 insns) */
void f_10428810(void) {
  FTRACE(0x10428810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428810 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10428814 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1042881a je 0x10428830 */
  if (C.zf) goto L_10428830;
L_1042881c:;
  /* 1042881c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1042881e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1042881f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10428821 je 0x10428863 */
  if (C.zf) goto L_10428863;
  /* 10428823 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10428829 jne 0x1042881c */
  if (!C.zf) goto L_1042881c;
  /* 1042882b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10428830:;
  /* 10428830 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10428832 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10428837 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428839 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042883c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042883e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428841 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10428846 je 0x10428830 */
  if (C.zf) goto L_10428830;
  /* 10428848 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1042884b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1042884d je 0x10428881 */
  if (C.zf) goto L_10428881;
  /* 1042884f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10428851 je 0x10428877 */
  if (C.zf) goto L_10428877;
  /* 10428853 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10428858 je 0x1042886d */
  if (C.zf) goto L_1042886d;
  /* 1042885a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1042885f je 0x10428863 */
  if (C.zf) goto L_10428863;
  /* 10428861 jmp 0x10428830 */
  goto L_10428830;
L_10428863:;
  /* 10428863 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10428866 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1042886a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042886c ret  */
  ESPCHK(0x10428810u, _esp0);
  ESP += 4; return;
L_1042886d:;
  /* 1042886d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10428870 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10428874 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428876 ret  */
  ESPCHK(0x10428810u, _esp0);
  ESP += 4; return;
L_10428877:;
  /* 10428877 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1042887a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1042887e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428880 ret  */
  ESPCHK(0x10428810u, _esp0);
  ESP += 4; return;
L_10428881:;
  /* 10428881 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10428884 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10428888 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042888a ret  */
  ESPCHK(0x10428810u, _esp0);
  ESP += 4; return;
}

/* FUN_10008890 @ 0x10428890 (249 bytes, 93 insns) */
void f_10428890(void) {
  FTRACE(0x10428890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428890 push ebp */
  push32((uint32_t)(EBP));
  /* 10428891 mov ebp, esp */
  EBP = (ESP);
  /* 10428893 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428896 push ebx */
  push32((uint32_t)(EBX));
  /* 10428897 push esi */
  push32((uint32_t)(ESI));
  /* 10428898 push edi */
  push32((uint32_t)(EDI));
  /* 10428899 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1042889c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1042889f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 104288a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_104288a5:;
  /* 104288a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104288a9 jne 0x104288c9 */
  if (!C.zf) goto L_104288c9;
  /* 104288ab push 0x1044cff8 */
  push32((uint32_t)(0x1044cff8u));
  /* 104288b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 104288b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 104288b4 push 0x1044cfec */
  push32((uint32_t)(0x1044cfecu));
  /* 104288b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 104288bb call 0x10424aa0 */
  push32(0x104288c0u); f_10424aa0();
  /* 104288c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104288c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104288c6 jne 0x104288c9 */
  if (!C.zf) goto L_104288c9;
  /* 104288c8 int3  */
  x86_unimpl("int3 @ 0x104288c8");
L_104288c9:;
  /* 104288c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104288cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104288cd jne 0x104288a5 */
  if (!C.zf) goto L_104288a5;
L_104288cf:;
  /* 104288cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104288d3 jne 0x104288f3 */
  if (!C.zf) goto L_104288f3;
  /* 104288d5 push 0x1044cfdc */
  push32((uint32_t)(0x1044cfdcu));
  /* 104288da push 0 */
  push32((uint32_t)(0x0u));
  /* 104288dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 104288de push 0x1044cfec */
  push32((uint32_t)(0x1044cfecu));
  /* 104288e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 104288e5 call 0x10424aa0 */
  push32(0x104288eau); f_10424aa0();
  /* 104288ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104288ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104288f0 jne 0x104288f3 */
  if (!C.zf) goto L_104288f3;
  /* 104288f2 int3  */
  x86_unimpl("int3 @ 0x104288f2");
L_104288f3:;
  /* 104288f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104288f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104288f7 jne 0x104288cf */
  if (!C.zf) goto L_104288cf;
  /* 104288f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104288fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10428903 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428909 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1042890c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042890f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428912 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10428914 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428917 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042891a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1042891d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10428920 push edx */
  push32((uint32_t)(EDX));
  /* 10428921 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10428924 push eax */
  push32((uint32_t)(EAX));
  /* 10428925 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428928 push ecx */
  push32((uint32_t)(ECX));
  /* 10428929 call 0x1042c970 */
  push32(0x1042892eu); f_1042c970();
  /* 1042892e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428931 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10428934 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428937 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042893a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1042893d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428940 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10428943 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428946 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042894a jl 0x1042896e */
  if ((C.sf!=C.of)) goto L_1042896e;
  /* 1042894c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042894f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10428951 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10428954 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428956 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1042895c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1042895f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428962 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10428964 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428967 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1042896a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1042896c jmp 0x1042897f */
  goto L_1042897f;
L_1042896e:;
  /* 1042896e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428971 push eax */
  push32((uint32_t)(EAX));
  /* 10428972 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428974 call 0x1042c6f0 */
  push32(0x10428979u); f_1042c6f0();
  /* 10428979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042897c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1042897f:;
  /* 1042897f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10428982 pop edi */
  EDI = (pop32());
  /* 10428983 pop esi */
  ESI = (pop32());
  /* 10428984 pop ebx */
  EBX = (pop32());
  /* 10428985 mov esp, ebp */
  ESP = (EBP);
  /* 10428987 pop ebp */
  EBP = (pop32());
  /* 10428988 ret  */
  ESPCHK(0x10428890u, _esp0);
  ESP += 4; return;
}

/* FUN_10008990 @ 0x10428990 (7 bytes, 3 insns) */
void f_10428990(void) {
  FTRACE(0x10428990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428990 push edi */
  push32((uint32_t)(EDI));
  /* 10428991 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10428995 jmp 0x10428a01 */
  jmp_ind(0x10428a01u); return;
}

/* FUN_100089a0 @ 0x104289a0 (224 bytes, 84 insns) */
void f_104289a0(void) {
  FTRACE(0x104289a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104289a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 104289a4 push edi */
  push32((uint32_t)(EDI));
  /* 104289a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104289ab je 0x104289bc */
  if (C.zf) goto L_104289bc;
L_104289ad:;
  /* 104289ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 104289af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 104289b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104289b2 je 0x104289ef */
  if (C.zf) goto L_104289ef;
  /* 104289b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 104289ba jne 0x104289ad */
  if (!C.zf) goto L_104289ad;
L_104289bc:;
  /* 104289bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 104289be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 104289c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104289c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104289c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 104289ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104289cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104289d2 je 0x104289bc */
  if (C.zf) goto L_104289bc;
  /* 104289d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 104289d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104289d9 je 0x104289fe */
  if (C.zf) goto L_104289fe;
  /* 104289db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104289dd je 0x104289f9 */
  if (C.zf) goto L_104289f9;
  /* 104289df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 104289e4 je 0x104289f4 */
  if (C.zf) goto L_104289f4;
  /* 104289e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 104289eb je 0x104289ef */
  if (C.zf) goto L_104289ef;
  /* 104289ed jmp 0x104289bc */
  goto L_104289bc;
L_104289ef:;
  /* 104289ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 104289f2 jmp 0x10428a01 */
  goto L_10428a01;
L_104289f4:;
  /* 104289f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 104289f7 jmp 0x10428a01 */
  goto L_10428a01;
L_104289f9:;
  /* 104289f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 104289fc jmp 0x10428a01 */
  goto L_10428a01;
L_104289fe:;
  /* 104289fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10428a01:;
  /* 10428a01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10428a05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10428a0b je 0x10428a26 */
  if (C.zf) goto L_10428a26;
L_10428a0d:;
  /* 10428a0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10428a0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10428a10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10428a12 je 0x10428a78 */
  if (C.zf) goto L_10428a78;
  /* 10428a14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10428a16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10428a17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10428a1d jne 0x10428a0d */
  if (!C.zf) goto L_10428a0d;
  /* 10428a1f jmp 0x10428a26 */
  goto L_10428a26;
L_10428a21:;
  /* 10428a21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10428a23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10428a26:;
  /* 10428a26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10428a2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10428a2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428a2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10428a32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10428a34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428a36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428a39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10428a3e je 0x10428a21 */
  if (C.zf) goto L_10428a21;
  /* 10428a40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10428a42 je 0x10428a78 */
  if (C.zf) goto L_10428a78;
  /* 10428a44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10428a46 je 0x10428a6f */
  if (C.zf) goto L_10428a6f;
  /* 10428a48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10428a4e je 0x10428a62 */
  if (C.zf) goto L_10428a62;
  /* 10428a50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10428a56 je 0x10428a5a */
  if (C.zf) goto L_10428a5a;
  /* 10428a58 jmp 0x10428a21 */
  goto L_10428a21;
L_10428a5a:;
  /* 10428a5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10428a5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10428a60 pop edi */
  EDI = (pop32());
  /* 10428a61 ret  */
  ESPCHK(0x104289a0u, _esp0);
  ESP += 4; return;
L_10428a62:;
  /* 10428a62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10428a65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10428a69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10428a6d pop edi */
  EDI = (pop32());
  /* 10428a6e ret  */
  ESPCHK(0x104289a0u, _esp0);
  ESP += 4; return;
L_10428a6f:;
  /* 10428a6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10428a72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10428a76 pop edi */
  EDI = (pop32());
  /* 10428a77 ret  */
  ESPCHK(0x104289a0u, _esp0);
  ESP += 4; return;
L_10428a78:;
  /* 10428a78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10428a7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10428a7e pop edi */
  EDI = (pop32());
  /* 10428a7f ret  */
  ESPCHK(0x104289a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a80 @ 0x10428a80 (243 bytes, 91 insns) */
void f_10428a80(void) {
  FTRACE(0x10428a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10428a81 mov ebp, esp */
  EBP = (ESP);
  /* 10428a83 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428a86 push ebx */
  push32((uint32_t)(EBX));
  /* 10428a87 push esi */
  push32((uint32_t)(ESI));
  /* 10428a88 push edi */
  push32((uint32_t)(EDI));
  /* 10428a89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10428a8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10428a8f:;
  /* 10428a8f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428a93 jne 0x10428ab3 */
  if (!C.zf) goto L_10428ab3;
  /* 10428a95 push 0x1044cff8 */
  push32((uint32_t)(0x1044cff8u));
  /* 10428a9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10428a9c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10428a9e push 0x1044d008 */
  push32((uint32_t)(0x1044d008u));
  /* 10428aa3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10428aa5 call 0x10424aa0 */
  push32(0x10428aaau); f_10424aa0();
  /* 10428aaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428aad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428ab0 jne 0x10428ab3 */
  if (!C.zf) goto L_10428ab3;
  /* 10428ab2 int3  */
  x86_unimpl("int3 @ 0x10428ab2");
L_10428ab3:;
  /* 10428ab3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10428ab5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10428ab7 jne 0x10428a8f */
  if (!C.zf) goto L_10428a8f;
L_10428ab9:;
  /* 10428ab9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428abd jne 0x10428add */
  if (!C.zf) goto L_10428add;
  /* 10428abf push 0x1044cfdc */
  push32((uint32_t)(0x1044cfdcu));
  /* 10428ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10428ac6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10428ac8 push 0x1044d008 */
  push32((uint32_t)(0x1044d008u));
  /* 10428acd push 2 */
  push32((uint32_t)(0x2u));
  /* 10428acf call 0x10424aa0 */
  push32(0x10428ad4u); f_10424aa0();
  /* 10428ad4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428ad7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428ada jne 0x10428add */
  if (!C.zf) goto L_10428add;
  /* 10428adc int3  */
  x86_unimpl("int3 @ 0x10428adc");
L_10428add:;
  /* 10428add xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428adf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10428ae1 jne 0x10428ab9 */
  if (!C.zf) goto L_10428ab9;
  /* 10428ae3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428ae6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10428aed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428af0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428af3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10428af6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428af9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428afc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10428afe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428b04 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10428b07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10428b0a push ecx */
  push32((uint32_t)(ECX));
  /* 10428b0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10428b0e push edx */
  push32((uint32_t)(EDX));
  /* 10428b0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b12 push eax */
  push32((uint32_t)(EAX));
  /* 10428b13 call 0x1042c970 */
  push32(0x10428b18u); f_1042c970();
  /* 10428b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428b1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10428b1e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b21 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10428b24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428b27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10428b2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b30 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428b34 jl 0x10428b58 */
  if ((C.sf!=C.of)) goto L_10428b58;
  /* 10428b36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10428b3b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10428b3e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10428b40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10428b46 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10428b49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10428b4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428b51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10428b56 jmp 0x10428b69 */
  goto L_10428b69;
L_10428b58:;
  /* 10428b58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10428b5b push edx */
  push32((uint32_t)(EDX));
  /* 10428b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10428b5e call 0x1042c6f0 */
  push32(0x10428b63u); f_1042c6f0();
  /* 10428b63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428b66 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10428b69:;
  /* 10428b69 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10428b6c pop edi */
  EDI = (pop32());
  /* 10428b6d pop esi */
  ESI = (pop32());
  /* 10428b6e pop ebx */
  EBX = (pop32());
  /* 10428b6f mov esp, ebp */
  ESP = (EBP);
  /* 10428b71 pop ebp */
  EBP = (pop32());
  /* 10428b72 ret  */
  ESPCHK(0x10428a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b80 @ 0x10428b80 (47 bytes, 17 insns) */
void f_10428b80(void) {
  FTRACE(0x10428b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428b80 push ecx */
  push32((uint32_t)(ECX));
  /* 10428b81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428b86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10428b8a jb 0x10428ba0 */
  if (C.cf) goto L_10428ba0;
L_10428b8c:;
  /* 10428b8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428b92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428b97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10428b99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428b9e jae 0x10428b8c */
  if (!C.cf) goto L_10428b8c;
L_10428ba0:;
  /* 10428ba0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428ba2 mov eax, esp */
  EAX = (ESP);
  /* 10428ba4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10428ba6 mov esp, ecx */
  ESP = (ECX);
  /* 10428ba8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10428baa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10428bad push eax */
  push32((uint32_t)(EAX));
  /* 10428bae ret  */
  ESPCHK(0x10428b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb0 @ 0x10428bb0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10428bb0(void) {
  FTRACE(0x10428bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10428bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10428bb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428bb6 push esi */
  push32((uint32_t)(ESI));
  /* 10428bb7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bbb je 0x10428bc3 */
  if (C.zf) goto L_10428bc3;
  /* 10428bbd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bc1 jne 0x10428bc8 */
  if (!C.zf) goto L_10428bc8;
L_10428bc3:;
  /* 10428bc3 jmp 0x10428d98 */
  goto L_10428d98;
L_10428bc8:;
  /* 10428bc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bcc je 0x10428be4 */
  if (C.zf) goto L_10428be4;
  /* 10428bce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bd2 je 0x10428be4 */
  if (C.zf) goto L_10428be4;
  /* 10428bd4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bd8 je 0x10428be4 */
  if (C.zf) goto L_10428be4;
  /* 10428bda cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bde jne 0x10428cc1 */
  if (!C.zf) goto L_10428cc1;
L_10428be4:;
  /* 10428be4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428be6 call 0x104293e0 */
  push32(0x10428bebu); f_104293e0();
  /* 10428beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428bee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bf2 je 0x10428bfa */
  if (C.zf) goto L_10428bfa;
  /* 10428bf4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428bf8 jne 0x10428c3f */
  if (!C.zf) goto L_10428c3f;
L_10428bfa:;
  /* 10428bfa cmp dword ptr [0x104516ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428c01 jne 0x10428c3f */
  if (!C.zf) goto L_10428c3f;
  /* 10428c03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428c05 push 0x10428de0 */
  push32((uint32_t)(0x10428de0u));
  /* 10428c0a call dword ptr [0x10454380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454380))), 0x10428c10u);
  /* 10428c10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428c13 jne 0x10428c21 */
  if (!C.zf) goto L_10428c21;
  /* 10428c15 mov dword ptr [0x104516ec], 1 */
  w32((uint32_t)(0x104516ec), (0x1u));
  /* 10428c1f jmp 0x10428c3f */
  goto L_10428c3f;
L_10428c21:;
  /* 10428c21 call dword ptr [0x10454338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454338))), 0x10428c27u);
  /* 10428c27 mov esi, eax */
  ESI = (EAX);
  /* 10428c29 call 0x1042d8c0 */
  push32(0x10428c2eu); f_1042d8c0();
  /* 10428c2e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10428c30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428c32 call 0x10429480 */
  push32(0x10428c37u); f_10429480();
  /* 10428c37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428c3a jmp 0x10428d98 */
  goto L_10428d98;
L_10428c3f:;
  /* 10428c3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428c42 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10428c45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10428c48 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428c4b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10428c4e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428c52 ja 0x10428cb2 */
  if ((!C.cf&&!C.zf)) goto L_10428cb2;
  /* 10428c54 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10428c57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428c59 mov dl, byte ptr [eax + 0x10428dbf] */
  DL = (r8((uint32_t)(EAX + 0x10428dbf)));
  /* 10428c5f jmp dword ptr [edx*4 + 0x10428dab] */
  switch (EDX) {
    case 0: goto L_10428c66;
    case 1: goto L_10428ca0;
    case 2: goto L_10428c7a;
    case 3: goto L_10428c8d;
    case 4: goto L_10428cb2;
    default: x86_unimpl("switch@0x10428c5f out of table"); return;
  }
L_10428c66:;
  /* 10428c66 mov ecx, dword ptr [0x104516dc] */
  ECX = (r32((uint32_t)(0x104516dc)));
  /* 10428c6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10428c6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428c72 mov dword ptr [0x104516dc], edx */
  w32((uint32_t)(0x104516dc), (EDX));
  /* 10428c78 jmp 0x10428cb2 */
  goto L_10428cb2;
L_10428c7a:;
  /* 10428c7a mov eax, dword ptr [0x104516e0] */
  EAX = (r32((uint32_t)(0x104516e0)));
  /* 10428c7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428c82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428c85 mov dword ptr [0x104516e0], ecx */
  w32((uint32_t)(0x104516e0), (ECX));
  /* 10428c8b jmp 0x10428cb2 */
  goto L_10428cb2;
L_10428c8d:;
  /* 10428c8d mov edx, dword ptr [0x104516e4] */
  EDX = (r32((uint32_t)(0x104516e4)));
  /* 10428c93 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10428c96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428c99 mov dword ptr [0x104516e4], eax */
  w32((uint32_t)(0x104516e4), (EAX));
  /* 10428c9e jmp 0x10428cb2 */
  goto L_10428cb2;
L_10428ca0:;
  /* 10428ca0 mov ecx, dword ptr [0x104516e8] */
  ECX = (r32((uint32_t)(0x104516e8)));
  /* 10428ca6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10428ca9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428cac mov dword ptr [0x104516e8], edx */
  w32((uint32_t)(0x104516e8), (EDX));
L_10428cb2:;
  /* 10428cb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428cb4 call 0x10429480 */
  push32(0x10428cb9u); f_10429480();
  /* 10428cb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428cbc jmp 0x10428d93 */
  goto L_10428d93;
L_10428cc1:;
  /* 10428cc1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428cc5 je 0x10428cd8 */
  if (C.zf) goto L_10428cd8;
  /* 10428cc7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428ccb je 0x10428cd8 */
  if (C.zf) goto L_10428cd8;
  /* 10428ccd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428cd1 je 0x10428cd8 */
  if (C.zf) goto L_10428cd8;
  /* 10428cd3 jmp 0x10428d98 */
  goto L_10428d98;
L_10428cd8:;
  /* 10428cd8 call 0x10425420 */
  push32(0x10428cddu); f_10425420();
  /* 10428cdd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10428ce0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428ce3 cmp dword ptr [eax + 0x50], 0x1044fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1044fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428cea jne 0x10428d35 */
  if (!C.zf) goto L_10428d35;
  /* 10428cec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10428cf1 push 0x1044d014 */
  push32((uint32_t)(0x1044d014u));
  /* 10428cf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10428cf8 mov ecx, dword ptr [0x1044fc80] */
  ECX = (r32((uint32_t)(0x1044fc80)));
  /* 10428cfe push ecx */
  push32((uint32_t)(ECX));
  /* 10428cff call 0x104259e0 */
  push32(0x10428d04u); f_104259e0();
  /* 10428d04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428d07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428d0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10428d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428d10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428d14 je 0x10428d33 */
  if (C.zf) goto L_10428d33;
  /* 10428d16 mov ecx, dword ptr [0x1044fc80] */
  ECX = (r32((uint32_t)(0x1044fc80)));
  /* 10428d1c push ecx */
  push32((uint32_t)(ECX));
  /* 10428d1d push 0x1044fc00 */
  push32((uint32_t)(0x1044fc00u));
  /* 10428d22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428d25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10428d28 push eax */
  push32((uint32_t)(EAX));
  /* 10428d29 call 0x1042c2c0 */
  push32(0x10428d2eu); f_1042c2c0();
  /* 10428d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428d31 jmp 0x10428d35 */
  goto L_10428d35;
L_10428d33:;
  /* 10428d33 jmp 0x10428d98 */
  goto L_10428d98;
L_10428d35:;
  /* 10428d35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428d38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10428d3b push edx */
  push32((uint32_t)(EDX));
  /* 10428d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428d3f push eax */
  push32((uint32_t)(EAX));
  /* 10428d40 call 0x104290c0 */
  push32(0x10428d45u); f_104290c0();
  /* 10428d45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428d48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10428d4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428d4f jne 0x10428d53 */
  if (!C.zf) goto L_10428d53;
  /* 10428d51 jmp 0x10428d98 */
  goto L_10428d98;
L_10428d53:;
  /* 10428d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428d56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10428d59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10428d5c:;
  /* 10428d5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428d5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10428d62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428d65 jne 0x10428d93 */
  if (!C.zf) goto L_10428d93;
  /* 10428d67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428d6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10428d6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10428d70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428d73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428d76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10428d79 mov edx, dword ptr [0x1044fc84] */
  EDX = (r32((uint32_t)(0x1044fc84)));
  /* 10428d7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10428d82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428d85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10428d88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428d8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428d8d jb 0x10428d91 */
  if (C.cf) goto L_10428d91;
  /* 10428d8f jmp 0x10428d93 */
  goto L_10428d93;
L_10428d91:;
  /* 10428d91 jmp 0x10428d5c */
  goto L_10428d5c;
L_10428d93:;
  /* 10428d93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428d96 jmp 0x10428da6 */
  goto L_10428da6;
L_10428d98:;
  /* 10428d98 call 0x1042d8b0 */
  push32(0x10428d9du); f_1042d8b0();
  /* 10428d9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10428da3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10428da6:;
  /* 10428da6 pop esi */
  ESI = (pop32());
  /* 10428da7 mov esp, ebp */
  ESP = (EBP);
  /* 10428da9 pop ebp */
  EBP = (pop32());
  /* 10428daa ret  */
  ESPCHK(0x10428bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008de0 @ 0x10428de0 (146 bytes, 45 insns) */
void f_10428de0(void) {
  FTRACE(0x10428de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10428de1 mov ebp, esp */
  EBP = (ESP);
  /* 10428de3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428de8 call 0x104293e0 */
  push32(0x10428dedu); f_104293e0();
  /* 10428ded add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428df0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428df4 jne 0x10428e0e */
  if (!C.zf) goto L_10428e0e;
  /* 10428df6 mov dword ptr [ebp - 8], 0x104516dc */
  w32((uint32_t)(EBP + -0x8), (0x104516dcu));
  /* 10428dfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428e00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10428e02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10428e05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10428e0c jmp 0x10428e24 */
  goto L_10428e24;
L_10428e0e:;
  /* 10428e0e mov dword ptr [ebp - 8], 0x104516e0 */
  w32((uint32_t)(EBP + -0x8), (0x104516e0u));
  /* 10428e15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428e18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10428e1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428e1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10428e24:;
  /* 10428e24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428e28 jne 0x10428e38 */
  if (!C.zf) goto L_10428e38;
  /* 10428e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10428e2c call 0x10429480 */
  push32(0x10428e31u); f_10429480();
  /* 10428e31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428e34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10428e36 jmp 0x10428e6c */
  goto L_10428e6c;
L_10428e38:;
  /* 10428e38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428e3c je 0x10428e5d */
  if (C.zf) goto L_10428e5d;
  /* 10428e3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10428e41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10428e47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428e49 call 0x10429480 */
  push32(0x10428e4eu); f_10429480();
  /* 10428e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428e51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428e54 push edx */
  push32((uint32_t)(EDX));
  /* 10428e55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10428e58u);
  /* 10428e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428e5b jmp 0x10428e67 */
  goto L_10428e67;
L_10428e5d:;
  /* 10428e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10428e5f call 0x10429480 */
  push32(0x10428e64u); f_10429480();
  /* 10428e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428e67:;
  /* 10428e67 mov eax, 1 */
  EAX = (0x1u);
L_10428e6c:;
  /* 10428e6c mov esp, ebp */
  ESP = (EBP);
  /* 10428e6e pop ebp */
  EBP = (pop32());
  /* 10428e6f ret 4 */
  ESPCHK(0x10428de0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008e80 @ 0x10428e80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10428e80(void) {
  FTRACE(0x10428e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10428e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10428e81 mov ebp, esp */
  EBP = (ESP);
  /* 10428e83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428e86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10428e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428e90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10428e93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10428e96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10428e99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10428e9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428ea0 ja 0x10428f4e */
  if ((!C.cf&&!C.zf)) goto L_10428f4e;
  /* 10428ea6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10428ea9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10428eab mov dl, byte ptr [eax + 0x104290a2] */
  DL = (r8((uint32_t)(EAX + 0x104290a2)));
  /* 10428eb1 jmp dword ptr [edx*4 + 0x1042908a] */
  switch (EDX) {
    case 0: goto L_10428eb8;
    case 1: goto L_10428f23;
    case 2: goto L_10428f09;
    case 3: goto L_10428ed5;
    case 4: goto L_10428eef;
    case 5: goto L_10428f4e;
    default: x86_unimpl("switch@0x10428eb1 out of table"); return;
  }
L_10428eb8:;
  /* 10428eb8 mov dword ptr [ebp - 0x18], 0x104516dc */
  w32((uint32_t)(EBP + -0x18), (0x104516dcu));
  /* 10428ebf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428ec2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428ec4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10428ec7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428eca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428ecd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428ed0 jmp 0x10428f56 */
  goto L_10428f56;
L_10428ed5:;
  /* 10428ed5 mov dword ptr [ebp - 0x18], 0x104516e0 */
  w32((uint32_t)(EBP + -0x18), (0x104516e0u));
  /* 10428edc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428edf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428ee1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10428ee4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428ee7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428eea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428eed jmp 0x10428f56 */
  goto L_10428f56;
L_10428eef:;
  /* 10428eef mov dword ptr [ebp - 0x18], 0x104516e4 */
  w32((uint32_t)(EBP + -0x18), (0x104516e4u));
  /* 10428ef6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428ef9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428efb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10428efe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428f01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428f04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428f07 jmp 0x10428f56 */
  goto L_10428f56;
L_10428f09:;
  /* 10428f09 mov dword ptr [ebp - 0x18], 0x104516e8 */
  w32((uint32_t)(EBP + -0x18), (0x104516e8u));
  /* 10428f10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428f13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428f15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10428f18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10428f1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428f1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10428f21 jmp 0x10428f56 */
  goto L_10428f56;
L_10428f23:;
  /* 10428f23 call 0x10425420 */
  push32(0x10428f28u); f_10425420();
  /* 10428f28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10428f2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428f2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10428f31 push edx */
  push32((uint32_t)(EDX));
  /* 10428f32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10428f35 push eax */
  push32((uint32_t)(EAX));
  /* 10428f36 call 0x104290c0 */
  push32(0x10428f3bu); f_104290c0();
  /* 10428f3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10428f3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428f41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10428f44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10428f47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10428f49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10428f4c jmp 0x10428f56 */
  goto L_10428f56;
L_10428f4e:;
  /* 10428f4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10428f51 jmp 0x10429086 */
  goto L_10429086;
L_10428f56:;
  /* 10428f56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428f5a je 0x10428f66 */
  if (C.zf) goto L_10428f66;
  /* 10428f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10428f5e call 0x104293e0 */
  push32(0x10428f63u); f_104293e0();
  /* 10428f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428f66:;
  /* 10428f66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428f6a jne 0x10428f83 */
  if (!C.zf) goto L_10428f83;
  /* 10428f6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428f70 je 0x10428f7c */
  if (C.zf) goto L_10428f7c;
  /* 10428f72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10428f74 call 0x10429480 */
  push32(0x10428f79u); f_10429480();
  /* 10428f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428f7c:;
  /* 10428f7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10428f7e jmp 0x10429086 */
  goto L_10429086;
L_10428f83:;
  /* 10428f83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428f87 jne 0x10428fa0 */
  if (!C.zf) goto L_10428fa0;
  /* 10428f89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428f8d je 0x10428f99 */
  if (C.zf) goto L_10428f99;
  /* 10428f8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10428f91 call 0x10429480 */
  push32(0x10428f96u); f_10429480();
  /* 10428f96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10428f99:;
  /* 10428f99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10428f9b call 0x104251a0 */
  push32(0x10428fa0u); f_104251a0();
L_10428fa0:;
  /* 10428fa0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428fa4 je 0x10428fb2 */
  if (C.zf) goto L_10428fb2;
  /* 10428fa6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428faa je 0x10428fb2 */
  if (C.zf) goto L_10428fb2;
  /* 10428fac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428fb0 jne 0x10428fde */
  if (!C.zf) goto L_10428fde;
L_10428fb2:;
  /* 10428fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428fb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10428fb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10428fbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428fbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10428fc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428fc9 jne 0x10428fde */
  if (!C.zf) goto L_10428fde;
  /* 10428fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428fce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10428fd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10428fd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10428fd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10428fde:;
  /* 10428fde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10428fe2 jne 0x10429020 */
  if (!C.zf) goto L_10429020;
  /* 10428fe4 mov eax, dword ptr [0x1044fc78] */
  EAX = (r32((uint32_t)(0x1044fc78)));
  /* 10428fe9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10428fec jmp 0x10428ff7 */
  goto L_10428ff7;
L_10428fee:;
  /* 10428fee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10428ff1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10428ff4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10428ff7:;
  /* 10428ff7 mov edx, dword ptr [0x1044fc78] */
  EDX = (r32((uint32_t)(0x1044fc78)));
  /* 10428ffd add edx, dword ptr [0x1044fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1044fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429003 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429006 jge 0x1042901e */
  if ((C.sf==C.of)) goto L_1042901e;
  /* 10429008 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042900b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1042900e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429011 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10429014 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1042901c jmp 0x10428fee */
  goto L_10428fee;
L_1042901e:;
  /* 1042901e jmp 0x10429029 */
  goto L_10429029;
L_10429020:;
  /* 10429020 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10429023 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10429029:;
  /* 10429029 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042902d je 0x10429039 */
  if (C.zf) goto L_10429039;
  /* 1042902f push 1 */
  push32((uint32_t)(0x1u));
  /* 10429031 call 0x10429480 */
  push32(0x10429036u); f_10429480();
  /* 10429036 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10429039:;
  /* 10429039 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042903d jne 0x10429050 */
  if (!C.zf) goto L_10429050;
  /* 1042903f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429042 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10429045 push edx */
  push32((uint32_t)(EDX));
  /* 10429046 push 8 */
  push32((uint32_t)(0x8u));
  /* 10429048 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1042904bu);
  /* 1042904b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042904e jmp 0x1042905a */
  goto L_1042905a;
L_10429050:;
  /* 10429050 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429053 push eax */
  push32((uint32_t)(EAX));
  /* 10429054 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10429057u);
  /* 10429057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042905a:;
  /* 1042905a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042905e je 0x1042906c */
  if (C.zf) goto L_1042906c;
  /* 10429060 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429064 je 0x1042906c */
  if (C.zf) goto L_1042906c;
  /* 10429066 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042906a jne 0x10429084 */
  if (!C.zf) goto L_10429084;
L_1042906c:;
  /* 1042906c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042906f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10429072 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10429075 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429079 jne 0x10429084 */
  if (!C.zf) goto L_10429084;
  /* 1042907b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042907e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429081 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10429084:;
  /* 10429084 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10429086:;
  /* 10429086 mov esp, ebp */
  ESP = (EBP);
  /* 10429088 pop ebp */
  EBP = (pop32());
  /* 10429089 ret  */
  ESPCHK(0x10428e80u, _esp0);
  ESP += 4; return;
}

/* FUN_100090c0 @ 0x104290c0 (91 bytes, 35 insns) */
void f_104290c0(void) {
  FTRACE(0x104290c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104290c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104290c1 mov ebp, esp */
  EBP = (ESP);
  /* 104290c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104290c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104290c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104290ca:;
  /* 104290ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104290cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104290d0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104290d3 je 0x104290f3 */
  if (C.zf) goto L_104290f3;
  /* 104290d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104290d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104290db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104290de mov ecx, dword ptr [0x1044fc84] */
  ECX = (r32((uint32_t)(0x1044fc84)));
  /* 104290e4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104290e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104290ea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104290ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104290ef jae 0x104290f3 */
  if (!C.cf) goto L_104290f3;
  /* 104290f1 jmp 0x104290ca */
  goto L_104290ca;
L_104290f3:;
  /* 104290f3 mov eax, dword ptr [0x1044fc84] */
  EAX = (r32((uint32_t)(0x1044fc84)));
  /* 104290f8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104290fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104290fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429100 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429103 jae 0x10429115 */
  if (!C.cf) goto L_10429115;
  /* 10429105 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429108 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1042910b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042910e jne 0x10429115 */
  if (!C.zf) goto L_10429115;
  /* 10429110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429113 jmp 0x10429117 */
  goto L_10429117;
L_10429115:;
  /* 10429115 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10429117:;
  /* 10429117 mov esp, ebp */
  ESP = (EBP);
  /* 10429119 pop ebp */
  EBP = (pop32());
  /* 1042911a ret  */
  ESPCHK(0x104290c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009120 @ 0x10429120 (13 bytes, 6 insns) */
void f_10429120(void) {
  FTRACE(0x10429120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429120 push ebp */
  push32((uint32_t)(EBP));
  /* 10429121 mov ebp, esp */
  EBP = (ESP);
  /* 10429123 call 0x10425420 */
  push32(0x10429128u); f_10425420();
  /* 10429128 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042912b pop ebp */
  EBP = (pop32());
  /* 1042912c ret  */
  ESPCHK(0x10429120u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x10429130 (13 bytes, 6 insns) */
void f_10429130(void) {
  FTRACE(0x10429130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429130 push ebp */
  push32((uint32_t)(EBP));
  /* 10429131 mov ebp, esp */
  EBP = (ESP);
  /* 10429133 call 0x10425420 */
  push32(0x10429138u); f_10425420();
  /* 10429138 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042913b pop ebp */
  EBP = (pop32());
  /* 1042913c ret  */
  ESPCHK(0x10429130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x10429140 (187 bytes, 54 insns) */
void f_10429140(void) {
  FTRACE(0x10429140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429140 push ebp */
  push32((uint32_t)(EBP));
  /* 10429141 mov ebp, esp */
  EBP = (ESP);
  /* 10429143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429146 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042914d cmp dword ptr [0x104516f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429154 jne 0x104291b3 */
  if (!C.zf) goto L_104291b3;
  /* 10429156 push 0x1044c440 */
  push32((uint32_t)(0x1044c440u));
  /* 1042915b call dword ptr [0x10454308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454308))), 0x10429161u);
  /* 10429161 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10429164 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429168 je 0x10429187 */
  if (C.zf) goto L_10429187;
  /* 1042916a push 0x1044d044 */
  push32((uint32_t)(0x1044d044u));
  /* 1042916f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429172 push eax */
  push32((uint32_t)(EAX));
  /* 10429173 call dword ptr [0x10454304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454304))), 0x10429179u);
  /* 10429179 mov dword ptr [0x104516f0], eax */
  w32((uint32_t)(0x104516f0), (EAX));
  /* 1042917e cmp dword ptr [0x104516f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429185 jne 0x1042918b */
  if (!C.zf) goto L_1042918b;
L_10429187:;
  /* 10429187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429189 jmp 0x104291f7 */
  goto L_104291f7;
L_1042918b:;
  /* 1042918b push 0x1044d034 */
  push32((uint32_t)(0x1044d034u));
  /* 10429190 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429193 push ecx */
  push32((uint32_t)(ECX));
  /* 10429194 call dword ptr [0x10454304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454304))), 0x1042919au);
  /* 1042919a mov dword ptr [0x104516f4], eax */
  w32((uint32_t)(0x104516f4), (EAX));
  /* 1042919f push 0x1044d020 */
  push32((uint32_t)(0x1044d020u));
  /* 104291a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104291a7 push edx */
  push32((uint32_t)(EDX));
  /* 104291a8 call dword ptr [0x10454304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454304))), 0x104291aeu);
  /* 104291ae mov dword ptr [0x104516f8], eax */
  w32((uint32_t)(0x104516f8), (EAX));
L_104291b3:;
  /* 104291b3 cmp dword ptr [0x104516f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104291ba je 0x104291c5 */
  if (C.zf) goto L_104291c5;
  /* 104291bc call dword ptr [0x104516f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104516f4))), 0x104291c2u);
  /* 104291c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104291c5:;
  /* 104291c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104291c9 je 0x104291e1 */
  if (C.zf) goto L_104291e1;
  /* 104291cb cmp dword ptr [0x104516f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x104516f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104291d2 je 0x104291e1 */
  if (C.zf) goto L_104291e1;
  /* 104291d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104291d7 push eax */
  push32((uint32_t)(EAX));
  /* 104291d8 call dword ptr [0x104516f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x104516f8))), 0x104291deu);
  /* 104291de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_104291e1:;
  /* 104291e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104291e4 push ecx */
  push32((uint32_t)(ECX));
  /* 104291e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104291e8 push edx */
  push32((uint32_t)(EDX));
  /* 104291e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104291ec push eax */
  push32((uint32_t)(EAX));
  /* 104291ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104291f0 push ecx */
  push32((uint32_t)(ECX));
  /* 104291f1 call dword ptr [0x104516f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104516f0))), 0x104291f7u);
L_104291f7:;
  /* 104291f7 mov esp, ebp */
  ESP = (EBP);
  /* 104291f9 pop ebp */
  EBP = (pop32());
  /* 104291fa ret  */
  ESPCHK(0x10429140u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10429200 (254 bytes, 109 insns) */
void f_10429200(void) {
  FTRACE(0x10429200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429200 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10429204 push edi */
  push32((uint32_t)(EDI));
  /* 10429205 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10429207 je 0x10429283 */
  if (C.zf) goto L_10429283;
  /* 10429209 push esi */
  push32((uint32_t)(ESI));
  /* 1042920a push ebx */
  push32((uint32_t)(EBX));
  /* 1042920b mov ebx, ecx */
  EBX = (ECX);
  /* 1042920d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10429211 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10429217 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1042921b jne 0x10429224 */
  if (!C.zf) goto L_10429224;
  /* 1042921d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10429220 jne 0x10429291 */
  if (!C.zf) goto L_10429291;
  /* 10429222 jmp 0x10429245 */
  goto L_10429245;
L_10429224:;
  /* 10429224 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10429226 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10429227 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10429229 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1042922a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1042922b je 0x10429252 */
  if (C.zf) goto L_10429252;
  /* 1042922d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1042922f je 0x1042925a */
  if (C.zf) goto L_1042925a;
  /* 10429231 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10429237 jne 0x10429224 */
  if (!C.zf) goto L_10429224;
  /* 10429239 mov ebx, ecx */
  EBX = (ECX);
  /* 1042923b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042923e jne 0x10429291 */
  if (!C.zf) goto L_10429291;
L_10429240:;
  /* 10429240 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10429243 je 0x10429252 */
  if (C.zf) goto L_10429252;
L_10429245:;
  /* 10429245 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10429247 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10429248 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042924a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1042924b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1042924d je 0x1042927e */
  if (C.zf) goto L_1042927e;
  /* 1042924f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10429250 jne 0x10429245 */
  if (!C.zf) goto L_10429245;
L_10429252:;
  /* 10429252 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10429256 pop ebx */
  EBX = (pop32());
  /* 10429257 pop esi */
  ESI = (pop32());
  /* 10429258 pop edi */
  EDI = (pop32());
  /* 10429259 ret  */
  ESPCHK(0x10429200u, _esp0);
  ESP += 4; return;
L_1042925a:;
  /* 1042925a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10429260 je 0x10429274 */
  if (C.zf) goto L_10429274;
L_10429262:;
  /* 10429262 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10429264 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10429265 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10429266 je 0x104292f6 */
  if (C.zf) goto L_104292f6;
  /* 1042926c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10429272 jne 0x10429262 */
  if (!C.zf) goto L_10429262;
L_10429274:;
  /* 10429274 mov ebx, ecx */
  EBX = (ECX);
  /* 10429276 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10429279 jne 0x104292e7 */
  if (!C.zf) goto L_104292e7;
L_1042927b:;
  /* 1042927b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1042927d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1042927e:;
  /* 1042927e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1042927f jne 0x1042927b */
  if (!C.zf) goto L_1042927b;
  /* 10429281 pop ebx */
  EBX = (pop32());
  /* 10429282 pop esi */
  ESI = (pop32());
L_10429283:;
  /* 10429283 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10429287 pop edi */
  EDI = (pop32());
  /* 10429288 ret  */
  ESPCHK(0x10429200u, _esp0);
  ESP += 4; return;
L_10429289:;
  /* 10429289 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1042928b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1042928e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1042928f je 0x10429240 */
  if (C.zf) goto L_10429240;
L_10429291:;
  /* 10429291 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10429296 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10429298 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042929a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042929d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1042929f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 104292a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104292a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 104292a9 je 0x10429289 */
  if (C.zf) goto L_10429289;
  /* 104292ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 104292ad je 0x104292db */
  if (C.zf) goto L_104292db;
  /* 104292af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 104292b1 je 0x104292d1 */
  if (C.zf) goto L_104292d1;
  /* 104292b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 104292b9 je 0x104292c7 */
  if (C.zf) goto L_104292c7;
  /* 104292bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 104292c1 jne 0x10429289 */
  if (!C.zf) goto L_10429289;
  /* 104292c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104292c5 jmp 0x104292df */
  goto L_104292df;
L_104292c7:;
  /* 104292c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104292cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104292cf jmp 0x104292df */
  goto L_104292df;
L_104292d1:;
  /* 104292d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104292d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 104292d9 jmp 0x104292df */
  goto L_104292df;
L_104292db:;
  /* 104292db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104292dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_104292df:;
  /* 104292df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104292e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104292e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104292e5 je 0x104292f1 */
  if (C.zf) goto L_104292f1;
L_104292e7:;
  /* 104292e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104292e9:;
  /* 104292e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 104292eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104292ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 104292ef jne 0x104292e9 */
  if (!C.zf) goto L_104292e9;
L_104292f1:;
  /* 104292f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 104292f4 jne 0x1042927b */
  if (!C.zf) goto L_1042927b;
L_104292f6:;
  /* 104292f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 104292fa pop ebx */
  EBX = (pop32());
  /* 104292fb pop esi */
  ESI = (pop32());
  /* 104292fc pop edi */
  EDI = (pop32());
  /* 104292fd ret  */
  ESPCHK(0x10429200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009300 @ 0x10429300 (55 bytes, 16 insns) */
void f_10429300(void) {
  FTRACE(0x10429300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429300 push ebp */
  push32((uint32_t)(EBP));
  /* 10429301 mov ebp, esp */
  EBP = (ESP);
  /* 10429303 mov eax, dword ptr [0x1044fb84] */
  EAX = (r32((uint32_t)(0x1044fb84)));
  /* 10429308 push eax */
  push32((uint32_t)(EAX));
  /* 10429309 call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x1042930fu);
  /* 1042930f mov ecx, dword ptr [0x1044fb74] */
  ECX = (r32((uint32_t)(0x1044fb74)));
  /* 10429315 push ecx */
  push32((uint32_t)(ECX));
  /* 10429316 call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x1042931cu);
  /* 1042931c mov edx, dword ptr [0x1044fb64] */
  EDX = (r32((uint32_t)(0x1044fb64)));
  /* 10429322 push edx */
  push32((uint32_t)(EDX));
  /* 10429323 call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x10429329u);
  /* 10429329 mov eax, dword ptr [0x1044fb44] */
  EAX = (r32((uint32_t)(0x1044fb44)));
  /* 1042932e push eax */
  push32((uint32_t)(EAX));
  /* 1042932f call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x10429335u);
  /* 10429335 pop ebp */
  EBP = (pop32());
  /* 10429336 ret  */
  ESPCHK(0x10429300u, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x10429340 (159 bytes, 47 insns) */
void f_10429340(void) {
  FTRACE(0x10429340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429340 push ebp */
  push32((uint32_t)(EBP));
  /* 10429341 mov ebp, esp */
  EBP = (ESP);
  /* 10429343 push ecx */
  push32((uint32_t)(ECX));
  /* 10429344 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1042934b jmp 0x10429356 */
  goto L_10429356;
L_1042934d:;
  /* 1042934d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429350 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429353 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10429356:;
  /* 10429356 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042935a jge 0x104293a9 */
  if ((C.sf==C.of)) goto L_104293a9;
  /* 1042935c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042935f cmp dword ptr [ecx*4 + 0x1044fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1044fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429367 je 0x104293a7 */
  if (C.zf) goto L_104293a7;
  /* 10429369 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042936d je 0x104293a7 */
  if (C.zf) goto L_104293a7;
  /* 1042936f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429373 je 0x104293a7 */
  if (C.zf) goto L_104293a7;
  /* 10429375 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429379 je 0x104293a7 */
  if (C.zf) goto L_104293a7;
  /* 1042937b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042937f je 0x104293a7 */
  if (C.zf) goto L_104293a7;
  /* 10429381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429384 mov eax, dword ptr [edx*4 + 0x1044fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1044fb40)));
  /* 1042938b push eax */
  push32((uint32_t)(EAX));
  /* 1042938c call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x10429392u);
  /* 10429392 push 2 */
  push32((uint32_t)(0x2u));
  /* 10429394 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429397 mov edx, dword ptr [ecx*4 + 0x1044fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1044fb40)));
  /* 1042939e push edx */
  push32((uint32_t)(EDX));
  /* 1042939f call 0x10426470 */
  push32(0x104293a4u); f_10426470();
  /* 104293a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104293a7:;
  /* 104293a7 jmp 0x1042934d */
  goto L_1042934d;
L_104293a9:;
  /* 104293a9 mov eax, dword ptr [0x1044fb64] */
  EAX = (r32((uint32_t)(0x1044fb64)));
  /* 104293ae push eax */
  push32((uint32_t)(EAX));
  /* 104293af call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x104293b5u);
  /* 104293b5 mov ecx, dword ptr [0x1044fb74] */
  ECX = (r32((uint32_t)(0x1044fb74)));
  /* 104293bb push ecx */
  push32((uint32_t)(ECX));
  /* 104293bc call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x104293c2u);
  /* 104293c2 mov edx, dword ptr [0x1044fb84] */
  EDX = (r32((uint32_t)(0x1044fb84)));
  /* 104293c8 push edx */
  push32((uint32_t)(EDX));
  /* 104293c9 call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x104293cfu);
  /* 104293cf mov eax, dword ptr [0x1044fb44] */
  EAX = (r32((uint32_t)(0x1044fb44)));
  /* 104293d4 push eax */
  push32((uint32_t)(EAX));
  /* 104293d5 call dword ptr [0x1045434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045434c))), 0x104293dbu);
  /* 104293db mov esp, ebp */
  ESP = (EBP);
  /* 104293dd pop ebp */
  EBP = (pop32());
  /* 104293de ret  */
  ESPCHK(0x10429340u, _esp0);
  ESP += 4; return;
}

/* FUN_100093e0 @ 0x104293e0 (151 bytes, 46 insns) */
void f_104293e0(void) {
  FTRACE(0x104293e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104293e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104293e1 mov ebp, esp */
  EBP = (ESP);
  /* 104293e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104293e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104293e7 cmp dword ptr [eax*4 + 0x1044fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1044fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104293ef jne 0x10429462 */
  if (!C.zf) goto L_10429462;
  /* 104293f1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 104293f6 push 0x1044d050 */
  push32((uint32_t)(0x1044d050u));
  /* 104293fb push 2 */
  push32((uint32_t)(0x2u));
  /* 104293fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 104293ff call 0x104259e0 */
  push32(0x10429404u); f_104259e0();
  /* 10429404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429407 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042940a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042940e jne 0x1042941a */
  if (!C.zf) goto L_1042941a;
  /* 10429410 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10429412 call 0x10424950 */
  push32(0x10429417u); f_10424950();
  /* 10429417 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042941a:;
  /* 1042941a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042941c call 0x104293e0 */
  push32(0x10429421u); f_104293e0();
  /* 10429421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429427 cmp dword ptr [ecx*4 + 0x1044fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1044fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042942f jne 0x1042944a */
  if (!C.zf) goto L_1042944a;
  /* 10429431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429434 push edx */
  push32((uint32_t)(EDX));
  /* 10429435 call dword ptr [0x10454384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454384))), 0x1042943bu);
  /* 1042943b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042943e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429441 mov dword ptr [eax*4 + 0x1044fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1044fb40), (ECX));
  /* 10429448 jmp 0x10429458 */
  goto L_10429458;
L_1042944a:;
  /* 1042944a push 2 */
  push32((uint32_t)(0x2u));
  /* 1042944c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042944f push edx */
  push32((uint32_t)(EDX));
  /* 10429450 call 0x10426470 */
  push32(0x10429455u); f_10426470();
  /* 10429455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10429458:;
  /* 10429458 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1042945a call 0x10429480 */
  push32(0x1042945fu); f_10429480();
  /* 1042945f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10429462:;
  /* 10429462 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429465 mov ecx, dword ptr [eax*4 + 0x1044fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1044fb40)));
  /* 1042946c push ecx */
  push32((uint32_t)(ECX));
  /* 1042946d call dword ptr [0x10454388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454388))), 0x10429473u);
  /* 10429473 mov esp, ebp */
  ESP = (EBP);
  /* 10429475 pop ebp */
  EBP = (pop32());
  /* 10429476 ret  */
  ESPCHK(0x104293e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x10429480 (22 bytes, 8 insns) */
void f_10429480(void) {
  FTRACE(0x10429480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429480 push ebp */
  push32((uint32_t)(EBP));
  /* 10429481 mov ebp, esp */
  EBP = (ESP);
  /* 10429483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429486 mov ecx, dword ptr [eax*4 + 0x1044fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1044fb40)));
  /* 1042948d push ecx */
  push32((uint32_t)(ECX));
  /* 1042948e call dword ptr [0x1045438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045438c))), 0x10429494u);
  /* 10429494 pop ebp */
  EBP = (pop32());
  /* 10429495 ret  */
  ESPCHK(0x10429480u, _esp0);
  ESP += 4; return;
}

/* FUN_100094a0 @ 0x104294a0 (26 bytes, 10 insns) */
void f_104294a0(void) {
  FTRACE(0x104294a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104294a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104294a1 mov ebp, esp */
  EBP = (ESP);
  /* 104294a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104294a6 push eax */
  push32((uint32_t)(EAX));
  /* 104294a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104294a9 call dword ptr [0x10454390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454390))), 0x104294afu);
  /* 104294af push 0xff */
  push32((uint32_t)(0xffu));
  /* 104294b4 call dword ptr [0x10454314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454314))), 0x104294bau);
  /* 104294ba pop ebp */
  EBP = (pop32());
  /* 104294bb ret  */
  ESPCHK(0x104294a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x104294c0 (446 bytes, 130 insns) */
void f_104294c0(void) {
  FTRACE(0x104294c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104294c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104294c1 mov ebp, esp */
  EBP = (ESP);
  /* 104294c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104294c6 call 0x10425420 */
  push32(0x104294cbu); f_10425420();
  /* 104294cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104294ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104294d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 104294d4 push ecx */
  push32((uint32_t)(ECX));
  /* 104294d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104294d8 push edx */
  push32((uint32_t)(EDX));
  /* 104294d9 call 0x10429680 */
  push32(0x104294deu); f_10429680();
  /* 104294de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104294e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104294e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104294e8 je 0x104294f3 */
  if (C.zf) goto L_104294f3;
  /* 104294ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104294ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104294f1 jne 0x10429502 */
  if (!C.zf) goto L_10429502;
L_104294f3:;
  /* 104294f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104294f6 push ecx */
  push32((uint32_t)(ECX));
  /* 104294f7 call dword ptr [0x1045433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1045433c))), 0x104294fdu);
  /* 104294fd jmp 0x1042967a */
  goto L_1042967a;
L_10429502:;
  /* 10429502 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429505 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429509 jne 0x1042951f */
  if (!C.zf) goto L_1042951f;
  /* 1042950b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042950e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10429515 mov eax, 1 */
  EAX = (0x1u);
  /* 1042951a jmp 0x1042967a */
  goto L_1042967a;
L_1042951f:;
  /* 1042951f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429522 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429526 jne 0x10429530 */
  if (!C.zf) goto L_10429530;
  /* 10429528 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1042952b jmp 0x1042967a */
  goto L_1042967a;
L_10429530:;
  /* 10429530 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429533 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10429536 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10429539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042953c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1042953f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10429542 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429548 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1042954b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042954e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429552 jne 0x10429657 */
  if (!C.zf) goto L_10429657;
  /* 10429558 mov eax, dword ptr [0x1044fc78] */
  EAX = (r32((uint32_t)(0x1044fc78)));
  /* 1042955d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10429560 jmp 0x1042956b */
  goto L_1042956b;
L_10429562:;
  /* 10429562 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10429565 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429568 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1042956b:;
  /* 1042956b mov edx, dword ptr [0x1044fc78] */
  EDX = (r32((uint32_t)(0x1044fc78)));
  /* 10429571 add edx, dword ptr [0x1044fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1044fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429577 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042957a jge 0x10429592 */
  if ((C.sf==C.of)) goto L_10429592;
  /* 1042957c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1042957f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10429582 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429585 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10429588 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10429590 jmp 0x10429562 */
  goto L_10429562;
L_10429592:;
  /* 10429592 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429595 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10429598 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1042959b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042959e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104295a4 jne 0x104295b5 */
  if (!C.zf) goto L_104295b5;
  /* 104295a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104295a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 104295b0 jmp 0x1042963d */
  goto L_1042963d;
L_104295b5:;
  /* 104295b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104295b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104295be jne 0x104295cc */
  if (!C.zf) goto L_104295cc;
  /* 104295c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104295c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 104295ca jmp 0x1042963d */
  goto L_1042963d;
L_104295cc:;
  /* 104295cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104295cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104295d5 jne 0x104295e3 */
  if (!C.zf) goto L_104295e3;
  /* 104295d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104295da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 104295e1 jmp 0x1042963d */
  goto L_1042963d;
L_104295e3:;
  /* 104295e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104295e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104295ec jne 0x104295fa */
  if (!C.zf) goto L_104295fa;
  /* 104295ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104295f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 104295f8 jmp 0x1042963d */
  goto L_1042963d;
L_104295fa:;
  /* 104295fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104295fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429603 jne 0x10429611 */
  if (!C.zf) goto L_10429611;
  /* 10429605 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429608 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1042960f jmp 0x1042963d */
  goto L_1042963d;
L_10429611:;
  /* 10429611 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429614 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042961a jne 0x10429628 */
  if (!C.zf) goto L_10429628;
  /* 1042961c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042961f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10429626 jmp 0x1042963d */
  goto L_1042963d;
L_10429628:;
  /* 10429628 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042962b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429631 jne 0x1042963d */
  if (!C.zf) goto L_1042963d;
  /* 10429633 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429636 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1042963d:;
  /* 1042963d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429640 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10429643 push edx */
  push32((uint32_t)(EDX));
  /* 10429644 push 8 */
  push32((uint32_t)(0x8u));
  /* 10429646 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10429649u);
  /* 10429649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042964c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1042964f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429652 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10429655 jmp 0x1042966e */
  goto L_1042966e;
L_10429657:;
  /* 10429657 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1042965a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10429661 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429664 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10429667 push ecx */
  push32((uint32_t)(ECX));
  /* 10429668 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1042966bu);
  /* 1042966b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1042966e:;
  /* 1042966e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429671 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10429674 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10429677 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1042967a:;
  /* 1042967a mov esp, ebp */
  ESP = (EBP);
  /* 1042967c pop ebp */
  EBP = (pop32());
  /* 1042967d ret  */
  ESPCHK(0x104294c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009680 @ 0x10429680 (89 bytes, 35 insns) */
void f_10429680(void) {
  FTRACE(0x10429680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429680 push ebp */
  push32((uint32_t)(EBP));
  /* 10429681 mov ebp, esp */
  EBP = (ESP);
  /* 10429683 push ecx */
  push32((uint32_t)(ECX));
  /* 10429684 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429687 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1042968a:;
  /* 1042968a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042968d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1042968f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429692 je 0x104296b2 */
  if (C.zf) goto L_104296b2;
  /* 10429694 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429697 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042969a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042969d mov ecx, dword ptr [0x1044fc84] */
  ECX = (r32((uint32_t)(0x1044fc84)));
  /* 104296a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104296a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104296a9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104296ab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104296ae jae 0x104296b2 */
  if (!C.cf) goto L_104296b2;
  /* 104296b0 jmp 0x1042968a */
  goto L_1042968a;
L_104296b2:;
  /* 104296b2 mov eax, dword ptr [0x1044fc84] */
  EAX = (r32((uint32_t)(0x1044fc84)));
  /* 104296b7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104296ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104296bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104296bf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104296c2 jae 0x104296ce */
  if (!C.cf) goto L_104296ce;
  /* 104296c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104296c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104296c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104296cc je 0x104296d2 */
  if (C.zf) goto L_104296d2;
L_104296ce:;
  /* 104296ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104296d0 jmp 0x104296d5 */
  goto L_104296d5;
L_104296d2:;
  /* 104296d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_104296d5:;
  /* 104296d5 mov esp, ebp */
  ESP = (EBP);
  /* 104296d7 pop ebp */
  EBP = (pop32());
  /* 104296d8 ret  */
  ESPCHK(0x10429680u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x104296e0 (48 bytes, 17 insns) */
void f_104296e0(void) {
  FTRACE(0x104296e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104296e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104296e1 mov ebp, esp */
  EBP = (ESP);
  /* 104296e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104296e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 104296e6 call 0x104293e0 */
  push32(0x104296ebu); f_104293e0();
  /* 104296eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104296ee mov eax, dword ptr [0x10451764] */
  EAX = (r32((uint32_t)(0x10451764)));
  /* 104296f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104296f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104296f9 mov dword ptr [0x10451764], ecx */
  w32((uint32_t)(0x10451764), (ECX));
  /* 104296ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10429701 call 0x10429480 */
  push32(0x10429706u); f_10429480();
  /* 10429706 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429709 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042970c mov esp, ebp */
  ESP = (EBP);
  /* 1042970e pop ebp */
  EBP = (pop32());
  /* 1042970f ret  */
  ESPCHK(0x104296e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009710 @ 0x10429710 (10 bytes, 5 insns) */
void f_10429710(void) {
  FTRACE(0x10429710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429710 push ebp */
  push32((uint32_t)(EBP));
  /* 10429711 mov ebp, esp */
  EBP = (ESP);
  /* 10429713 mov eax, dword ptr [0x10451764] */
  EAX = (r32((uint32_t)(0x10451764)));
  /* 10429718 pop ebp */
  EBP = (pop32());
  /* 10429719 ret  */
  ESPCHK(0x10429710u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10429720 (45 bytes, 19 insns) */
void f_10429720(void) {
  FTRACE(0x10429720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429720 push ebp */
  push32((uint32_t)(EBP));
  /* 10429721 mov ebp, esp */
  EBP = (ESP);
  /* 10429723 push ecx */
  push32((uint32_t)(ECX));
  /* 10429724 mov eax, dword ptr [0x10451764] */
  EAX = (r32((uint32_t)(0x10451764)));
  /* 10429729 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1042972c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429730 je 0x10429740 */
  if (C.zf) goto L_10429740;
  /* 10429732 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429735 push ecx */
  push32((uint32_t)(ECX));
  /* 10429736 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10429739u);
  /* 10429739 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042973c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042973e jne 0x10429744 */
  if (!C.zf) goto L_10429744;
L_10429740:;
  /* 10429740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429742 jmp 0x10429749 */
  goto L_10429749;
L_10429744:;
  /* 10429744 mov eax, 1 */
  EAX = (0x1u);
L_10429749:;
  /* 10429749 mov esp, ebp */
  ESP = (EBP);
  /* 1042974b pop ebp */
  EBP = (pop32());
  /* 1042974c ret  */
  ESPCHK(0x10429720u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10429750 (88 bytes, 40 insns) */
void f_10429750(void) {
  FTRACE(0x10429750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429750 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10429754 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10429758 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1042975a je 0x104297a3 */
  if (C.zf) goto L_104297a3;
  /* 1042975c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042975e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10429762 push edi */
  push32((uint32_t)(EDI));
  /* 10429763 mov edi, ecx */
  EDI = (ECX);
  /* 10429765 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429768 jb 0x10429797 */
  if (C.cf) goto L_10429797;
  /* 1042976a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1042976c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1042976f je 0x10429779 */
  if (C.zf) goto L_10429779;
  /* 10429771 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10429773:;
  /* 10429773 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10429775 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10429776 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10429777 jne 0x10429773 */
  if (!C.zf) goto L_10429773;
L_10429779:;
  /* 10429779 mov ecx, eax */
  ECX = (EAX);
  /* 1042977b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1042977e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429780 mov ecx, eax */
  ECX = (EAX);
  /* 10429782 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10429785 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429787 mov ecx, edx */
  ECX = (EDX);
  /* 10429789 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1042978c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1042978f je 0x10429797 */
  if (C.zf) goto L_10429797;
  /* 10429791 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10429793 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10429795 je 0x1042979d */
  if (C.zf) goto L_1042979d;
L_10429797:;
  /* 10429797 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10429799 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1042979a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1042979b jne 0x10429797 */
  if (!C.zf) goto L_10429797;
L_1042979d:;
  /* 1042979d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104297a1 pop edi */
  EDI = (pop32());
  /* 104297a2 ret  */
  ESPCHK(0x10429750u, _esp0);
  ESP += 4; return;
L_104297a3:;
  /* 104297a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 104297a7 ret  */
  ESPCHK(0x10429750u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b0 @ 0x104297b0 (23 bytes, 10 insns) */
void f_104297b0(void) {
  FTRACE(0x104297b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104297b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104297b1 mov ebp, esp */
  EBP = (ESP);
  /* 104297b3 mov eax, dword ptr [0x10451760] */
  EAX = (r32((uint32_t)(0x10451760)));
  /* 104297b8 push eax */
  push32((uint32_t)(EAX));
  /* 104297b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104297bc push ecx */
  push32((uint32_t)(ECX));
  /* 104297bd call 0x104297d0 */
  push32(0x104297c2u); f_104297d0();
  /* 104297c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104297c5 pop ebp */
  EBP = (pop32());
  /* 104297c6 ret  */
  ESPCHK(0x104297b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x104297d0 (87 bytes, 34 insns) */
void f_104297d0(void) {
  FTRACE(0x104297d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104297d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104297d1 mov ebp, esp */
  EBP = (ESP);
  /* 104297d3 push ecx */
  push32((uint32_t)(ECX));
  /* 104297d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104297d8 jbe 0x104297de */
  if ((C.cf||C.zf)) goto L_104297de;
  /* 104297da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104297dc jmp 0x10429823 */
  goto L_10429823;
L_104297de:;
  /* 104297de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104297e2 ja 0x104297f5 */
  if ((!C.cf&&!C.zf)) goto L_104297f5;
  /* 104297e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104297e7 push eax */
  push32((uint32_t)(EAX));
  /* 104297e8 call 0x10429830 */
  push32(0x104297edu); f_10429830();
  /* 104297ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104297f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104297f3 jmp 0x104297fc */
  goto L_104297fc;
L_104297f5:;
  /* 104297f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_104297fc:;
  /* 104297fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429800 jne 0x10429808 */
  if (!C.zf) goto L_10429808;
  /* 10429802 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429806 jne 0x1042980d */
  if (!C.zf) goto L_1042980d;
L_10429808:;
  /* 10429808 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042980b jmp 0x10429823 */
  goto L_10429823;
L_1042980d:;
  /* 1042980d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429810 push ecx */
  push32((uint32_t)(ECX));
  /* 10429811 call 0x10429720 */
  push32(0x10429816u); f_10429720();
  /* 10429816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042981b jne 0x10429821 */
  if (!C.zf) goto L_10429821;
  /* 1042981d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1042981f jmp 0x10429823 */
  goto L_10429823;
L_10429821:;
  /* 10429821 jmp 0x104297de */
  goto L_104297de;
L_10429823:;
  /* 10429823 mov esp, ebp */
  ESP = (EBP);
  /* 10429825 pop ebp */
  EBP = (pop32());
  /* 10429826 ret  */
  ESPCHK(0x104297d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009830 @ 0x10429830 (109 bytes, 37 insns) */
void f_10429830(void) {
  FTRACE(0x10429830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429830 push ebp */
  push32((uint32_t)(EBP));
  /* 10429831 mov ebp, esp */
  EBP = (ESP);
  /* 10429833 push ecx */
  push32((uint32_t)(ECX));
  /* 10429834 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429837 cmp eax, dword ptr [0x1044fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1044fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042983d ja 0x1042986d */
  if ((!C.cf&&!C.zf)) goto L_1042986d;
  /* 1042983f push 9 */
  push32((uint32_t)(0x9u));
  /* 10429841 call 0x104293e0 */
  push32(0x10429846u); f_104293e0();
  /* 10429846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429849 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042984c push ecx */
  push32((uint32_t)(ECX));
  /* 1042984d call 0x1042a370 */
  push32(0x10429852u); f_1042a370();
  /* 10429852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10429858 push 9 */
  push32((uint32_t)(0x9u));
  /* 1042985a call 0x10429480 */
  push32(0x1042985fu); f_10429480();
  /* 1042985f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429862 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429866 je 0x1042986d */
  if (C.zf) goto L_1042986d;
  /* 10429868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042986b jmp 0x10429899 */
  goto L_10429899;
L_1042986d:;
  /* 1042986d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429871 jne 0x1042987a */
  if (!C.zf) goto L_1042987a;
  /* 10429873 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1042987a:;
  /* 1042987a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042987d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429880 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10429883 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10429886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429889 push eax */
  push32((uint32_t)(EAX));
  /* 1042988a push 0 */
  push32((uint32_t)(0x0u));
  /* 1042988c mov ecx, dword ptr [0x10452f2c] */
  ECX = (r32((uint32_t)(0x10452f2c)));
  /* 10429892 push ecx */
  push32((uint32_t)(ECX));
  /* 10429893 call dword ptr [0x104542e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e4))), 0x10429899u);
L_10429899:;
  /* 10429899 mov esp, ebp */
  ESP = (EBP);
  /* 1042989b pop ebp */
  EBP = (pop32());
  /* 1042989c ret  */
  ESPCHK(0x10429830u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x104298a0 (10 bytes, 5 insns) */
void f_104298a0(void) {
  FTRACE(0x104298a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104298a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104298a1 mov ebp, esp */
  EBP = (ESP);
  /* 104298a3 mov eax, 1 */
  EAX = (0x1u);
  /* 104298a8 pop ebp */
  EBP = (pop32());
  /* 104298a9 ret  */
  ESPCHK(0x104298a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x104298b0 (173 bytes, 59 insns) */
void f_104298b0(void) {
  FTRACE(0x104298b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104298b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104298b1 mov ebp, esp */
  EBP = (ESP);
  /* 104298b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104298b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104298ba jbe 0x104298c3 */
  if ((C.cf||C.zf)) goto L_104298c3;
  /* 104298bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104298be jmp 0x10429959 */
  goto L_10429959;
L_104298c3:;
  /* 104298c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 104298c5 call 0x104293e0 */
  push32(0x104298cau); f_104293e0();
  /* 104298ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104298cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104298d0 push eax */
  push32((uint32_t)(EAX));
  /* 104298d1 call 0x10429ce0 */
  push32(0x104298d6u); f_10429ce0();
  /* 104298d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104298d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104298dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104298e0 je 0x10429921 */
  if (C.zf) goto L_10429921;
  /* 104298e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104298e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104298ec cmp ecx, dword ptr [0x1044fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1044fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104298f2 ja 0x10429912 */
  if ((!C.cf&&!C.zf)) goto L_10429912;
  /* 104298f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104298f7 push edx */
  push32((uint32_t)(EDX));
  /* 104298f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104298fb push eax */
  push32((uint32_t)(EAX));
  /* 104298fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104298ff push ecx */
  push32((uint32_t)(ECX));
  /* 10429900 call 0x1042abb0 */
  push32(0x10429905u); f_1042abb0();
  /* 10429905 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1042990a je 0x10429912 */
  if (C.zf) goto L_10429912;
  /* 1042990c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042990f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10429912:;
  /* 10429912 push 9 */
  push32((uint32_t)(0x9u));
  /* 10429914 call 0x10429480 */
  push32(0x10429919u); f_10429480();
  /* 10429919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042991c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1042991f jmp 0x10429959 */
  goto L_10429959;
L_10429921:;
  /* 10429921 push 9 */
  push32((uint32_t)(0x9u));
  /* 10429923 call 0x10429480 */
  push32(0x10429928u); f_10429480();
  /* 10429928 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042992b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042992f jne 0x10429938 */
  if (!C.zf) goto L_10429938;
  /* 10429931 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10429938:;
  /* 10429938 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042993b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1042993e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10429940 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10429943 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429946 push ecx */
  push32((uint32_t)(ECX));
  /* 10429947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1042994a push edx */
  push32((uint32_t)(EDX));
  /* 1042994b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1042994d mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 10429952 push eax */
  push32((uint32_t)(EAX));
  /* 10429953 call dword ptr [0x10454340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454340))), 0x10429959u);
L_10429959:;
  /* 10429959 mov esp, ebp */
  ESP = (EBP);
  /* 1042995b pop ebp */
  EBP = (pop32());
  /* 1042995c ret  */
  ESPCHK(0x104298b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009960 @ 0x10429960 (490 bytes, 165 insns) */
void f_10429960(void) {
  FTRACE(0x10429960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429960 push ebp */
  push32((uint32_t)(EBP));
  /* 10429961 mov ebp, esp */
  EBP = (ESP);
  /* 10429963 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429966 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1042996a jne 0x1042997d */
  if (!C.zf) goto L_1042997d;
  /* 1042996c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1042996f push eax */
  push32((uint32_t)(EAX));
  /* 10429970 call 0x104297b0 */
  push32(0x10429975u); f_104297b0();
  /* 10429975 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429978 jmp 0x10429b46 */
  goto L_10429b46;
L_1042997d:;
  /* 1042997d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429981 jne 0x10429996 */
  if (!C.zf) goto L_10429996;
  /* 10429983 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429986 push ecx */
  push32((uint32_t)(ECX));
  /* 10429987 call 0x10429b50 */
  push32(0x1042998cu); f_10429b50();
  /* 1042998c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1042998f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429991 jmp 0x10429b46 */
  goto L_10429b46;
L_10429996:;
  /* 10429996 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1042999d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104299a1 ja 0x10429b19 */
  if ((!C.cf&&!C.zf)) goto L_10429b19;
  /* 104299a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 104299a9 call 0x104293e0 */
  push32(0x104299aeu); f_104293e0();
  /* 104299ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104299b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104299b4 push edx */
  push32((uint32_t)(EDX));
  /* 104299b5 call 0x10429ce0 */
  push32(0x104299bau); f_10429ce0();
  /* 104299ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104299bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104299c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104299c4 je 0x10429adc */
  if (C.zf) goto L_10429adc;
  /* 104299ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104299cd cmp eax, dword ptr [0x1044fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1044fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104299d3 ja 0x10429a50 */
  if ((!C.cf&&!C.zf)) goto L_10429a50;
  /* 104299d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104299d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104299d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104299dc push edx */
  push32((uint32_t)(EDX));
  /* 104299dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104299e0 push eax */
  push32((uint32_t)(EAX));
  /* 104299e1 call 0x1042abb0 */
  push32(0x104299e6u); f_1042abb0();
  /* 104299e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104299e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104299eb je 0x104299f5 */
  if (C.zf) goto L_104299f5;
  /* 104299ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104299f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104299f3 jmp 0x10429a50 */
  goto L_10429a50;
L_104299f5:;
  /* 104299f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104299f8 push edx */
  push32((uint32_t)(EDX));
  /* 104299f9 call 0x1042a370 */
  push32(0x104299feu); f_1042a370();
  /* 104299fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429a01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10429a04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a08 je 0x10429a50 */
  if (C.zf) goto L_10429a50;
  /* 10429a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429a0d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10429a10 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429a13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10429a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429a19 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a1c jae 0x10429a26 */
  if (!C.cf) goto L_10429a26;
  /* 10429a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429a21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10429a24 jmp 0x10429a2c */
  goto L_10429a2c;
L_10429a26:;
  /* 10429a26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429a29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10429a2c:;
  /* 10429a2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10429a2f push edx */
  push32((uint32_t)(EDX));
  /* 10429a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429a33 push eax */
  push32((uint32_t)(EAX));
  /* 10429a34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429a37 push ecx */
  push32((uint32_t)(ECX));
  /* 10429a38 call 0x1042c2c0 */
  push32(0x10429a3du); f_1042c2c0();
  /* 10429a3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429a40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429a43 push edx */
  push32((uint32_t)(EDX));
  /* 10429a44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429a47 push eax */
  push32((uint32_t)(EAX));
  /* 10429a48 call 0x10429da0 */
  push32(0x10429a4du); f_10429da0();
  /* 10429a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10429a50:;
  /* 10429a50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a54 jne 0x10429ad0 */
  if (!C.zf) goto L_10429ad0;
  /* 10429a56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a5a jne 0x10429a63 */
  if (!C.zf) goto L_10429a63;
  /* 10429a5c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10429a63:;
  /* 10429a63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429a66 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429a69 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10429a6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10429a6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429a72 push edx */
  push32((uint32_t)(EDX));
  /* 10429a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10429a75 mov eax, dword ptr [0x10452f2c] */
  EAX = (r32((uint32_t)(0x10452f2c)));
  /* 10429a7a push eax */
  push32((uint32_t)(EAX));
  /* 10429a7b call dword ptr [0x104542e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x104542e4))), 0x10429a81u);
  /* 10429a81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10429a84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a88 je 0x10429ad0 */
  if (C.zf) goto L_10429ad0;
  /* 10429a8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429a8d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10429a90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10429a93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10429a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429a99 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429a9c jae 0x10429aa6 */
  if (!C.cf) goto L_10429aa6;
  /* 10429a9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429aa1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10429aa4 jmp 0x10429aac */
  goto L_10429aac;
L_10429aa6:;
  /* 10429aa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429aa9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10429aac:;
  /* 10429aac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10429aaf push eax */
  push32((uint32_t)(EAX));
  /* 10429ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10429ab4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429ab7 push edx */
  push32((uint32_t)(EDX));
  /* 10429ab8 call 0x1042c2c0 */
  push32(0x10429abdu); f_1042c2c0();
  /* 10429abd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ac0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10429ac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10429ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10429ac8 call 0x10429da0 */
  push32(0x10429acdu); f_10429da0();
  /* 10429acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10429ad0:;
  /* 10429ad0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10429ad2 call 0x10429480 */
  push32(0x10429ad7u); f_10429480();
  /* 10429ad7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ada jmp 0x10429b19 */
  goto L_10429b19;
L_10429adc:;
  /* 10429adc push 9 */
  push32((uint32_t)(0x9u));
  /* 10429ade call 0x10429480 */
  push32(0x10429ae3u); f_10429480();
  /* 10429ae3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ae6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429aea jne 0x10429af3 */
  if (!C.zf) goto L_10429af3;
  /* 10429aec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10429af3:;
  /* 10429af3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429af6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10429af9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10429afc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10429aff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429b02 push eax */
  push32((uint32_t)(EAX));
  /* 10429b03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429b06 push ecx */
  push32((uint32_t)(ECX));
  /* 10429b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10429b09 mov edx, dword ptr [0x10452f2c] */
  EDX = (r32((uint32_t)(0x10452f2c)));
  /* 10429b0f push edx */
  push32((uint32_t)(EDX));
  /* 10429b10 call dword ptr [0x10454340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454340))), 0x10429b16u);
  /* 10429b16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10429b19:;
  /* 10429b19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429b1d jne 0x10429b28 */
  if (!C.zf) goto L_10429b28;
  /* 10429b1f cmp dword ptr [0x10451760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10451760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429b26 jne 0x10429b2d */
  if (!C.zf) goto L_10429b2d;
L_10429b28:;
  /* 10429b28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10429b2b jmp 0x10429b46 */
  goto L_10429b46;
L_10429b2d:;
  /* 10429b2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10429b30 push eax */
  push32((uint32_t)(EAX));
  /* 10429b31 call 0x10429720 */
  push32(0x10429b36u); f_10429720();
  /* 10429b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429b39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10429b3b jne 0x10429b41 */
  if (!C.zf) goto L_10429b41;
  /* 10429b3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10429b3f jmp 0x10429b46 */
  goto L_10429b46;
L_10429b41:;
  /* 10429b41 jmp 0x10429996 */
  goto L_10429996;
L_10429b46:;
  /* 10429b46 mov esp, ebp */
  ESP = (EBP);
  /* 10429b48 pop ebp */
  EBP = (pop32());
  /* 10429b49 ret  */
  ESPCHK(0x10429960u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b50 @ 0x10429b50 (104 bytes, 38 insns) */
void f_10429b50(void) {
  FTRACE(0x10429b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10429b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10429b51 mov ebp, esp */
  EBP = (ESP);
  /* 10429b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10429b54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429b58 jne 0x10429b5c */
  if (!C.zf) goto L_10429b5c;
  /* 10429b5a jmp 0x10429bb4 */
  goto L_10429bb4;
L_10429b5c:;
  /* 10429b5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10429b5e call 0x104293e0 */
  push32(0x10429b63u); f_104293e0();
  /* 10429b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429b69 push eax */
  push32((uint32_t)(EAX));
  /* 10429b6a call 0x10429ce0 */
  push32(0x10429b6fu); f_10429ce0();
  /* 10429b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429b72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10429b75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10429b79 je 0x10429b97 */
  if (C.zf) goto L_10429b97;
  /* 10429b7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429b7e push ecx */
  push32((uint32_t)(ECX));
  /* 10429b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10429b82 push edx */
  push32((uint32_t)(EDX));
  /* 10429b83 call 0x10429da0 */
  push32(0x10429b88u); f_10429da0();
  /* 10429b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429b8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10429b8d call 0x10429480 */
  push32(0x10429b92u); f_10429480();
  /* 10429b92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429b95 jmp 0x10429bb4 */
  goto L_10429bb4;
L_10429b97:;
  /* 10429b97 push 9 */
  push32((uint32_t)(0x9u));
  /* 10429b99 call 0x10429480 */
  push32(0x10429b9eu); f_10429480();
  /* 10429b9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10429ba1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10429ba4 push eax */
  push32((uint32_t)(EAX));
  /* 10429ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10429ba7 mov ecx, dword ptr [0x10452f2c] */
  ECX = (r32((uint32_t)(0x10452f2c)));
  /* 10429bad push ecx */
  push32((uint32_t)(ECX));
  /* 10429bae call dword ptr [0x10454378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10454378))), 0x10429bb4u);
L_10429bb4:;
  /* 10429bb4 mov esp, ebp */
  ESP = (EBP);
  /* 10429bb6 pop ebp */
  EBP = (pop32());
  /* 10429bb7 ret  */
  ESPCHK(0x10429b50u, _esp0);
  ESP += 4; return;
}

