#include "recomp.h"

/* OnInit @ 0x10311005 (5 bytes, 1 insns) */
void f_10311005(void) {
  FTRACE(0x10311005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10311005 jmp 0x10311090 */
  f_10311090(); return;
}

/* thunk_FUN_10001030 @ 0x1031100a (5 bytes, 1 insns) */
void f_1031100a(void) {
  FTRACE(0x1031100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031100a jmp 0x10311030 */
  f_10311030(); return;
}

/* ProcessScenary @ 0x1031100f (5 bytes, 1 insns) */
void f_1031100f(void) {
  FTRACE(0x1031100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1031100f jmp 0x10311410 */
  f_10311410(); return;
}

/* FUN_10001030 @ 0x10311030 (67 bytes, 26 insns) */
void f_10311030(void) {
  FTRACE(0x10311030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10311030 push ebp */
  push32((uint32_t)(EBP));
  /* 10311031 mov ebp, esp */
  EBP = (ESP);
  /* 10311033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311036 push ebx */
  push32((uint32_t)(EBX));
  /* 10311037 push esi */
  push32((uint32_t)(ESI));
  /* 10311038 push edi */
  push32((uint32_t)(EDI));
  /* 10311039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1031103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10311041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10311046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10311048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311052 je 0x10311056 */
  if (C.zf) goto L_10311056;
  /* 10311054 jmp 0x1031105b */
  goto L_1031105b;
L_10311056:;
  /* 10311056 call 0x10311005 */
  push32(0x1031105bu); f_10311005();
L_1031105b:;
  /* 1031105b mov eax, 1 */
  EAX = (0x1u);
  /* 10311060 pop edi */
  EDI = (pop32());
  /* 10311061 pop esi */
  ESI = (pop32());
  /* 10311062 pop ebx */
  EBX = (pop32());
  /* 10311063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311068 call 0x103123b0 */
  push32(0x1031106du); f_103123b0();
  /* 1031106d mov esp, ebp */
  ESP = (EBP);
  /* 1031106f pop ebp */
  EBP = (pop32());
  /* 10311070 ret 0xc */
  ESPCHK(0x10311030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10311090 (715 bytes, 201 insns) */
void f_10311090(void) {
  FTRACE(0x10311090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10311090 push ebp */
  push32((uint32_t)(EBP));
  /* 10311091 mov ebp, esp */
  EBP = (ESP);
  /* 10311093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311096 push ebx */
  push32((uint32_t)(EBX));
  /* 10311097 push esi */
  push32((uint32_t)(ESI));
  /* 10311098 push edi */
  push32((uint32_t)(EDI));
  /* 10311099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1031109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 103110a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 103110a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103110a8 mov esi, esp */
  ESI = (ESP);
  /* 103110aa push 0x1033a090 */
  push32((uint32_t)(0x1033a090u));
  /* 103110af push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 103110b4 call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x103110bau);
  /* 103110ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103110bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103110bf call 0x103123b0 */
  push32(0x103110c4u); f_103123b0();
  /* 103110c4 mov esi, esp */
  ESI = (ESP);
  /* 103110c6 push 0x1033a08c */
  push32((uint32_t)(0x1033a08cu));
  /* 103110cb push 0x1033f420 */
  push32((uint32_t)(0x1033f420u));
  /* 103110d0 call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x103110d6u);
  /* 103110d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103110d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103110db call 0x103123b0 */
  push32(0x103110e0u); f_103123b0();
  /* 103110e0 mov esi, esp */
  ESI = (ESP);
  /* 103110e2 push 0x1033a088 */
  push32((uint32_t)(0x1033a088u));
  /* 103110e7 push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 103110ec call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x103110f2u);
  /* 103110f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103110f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103110f7 call 0x103123b0 */
  push32(0x103110fcu); f_103123b0();
  /* 103110fc mov esi, esp */
  ESI = (ESP);
  /* 103110fe push 0x1033a084 */
  push32((uint32_t)(0x1033a084u));
  /* 10311103 push 0x1033f430 */
  push32((uint32_t)(0x1033f430u));
  /* 10311108 call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x1031110eu);
  /* 1031110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311113 call 0x103123b0 */
  push32(0x10311118u); f_103123b0();
  /* 10311118 mov esi, esp */
  ESI = (ESP);
  /* 1031111a push 0x1033a080 */
  push32((uint32_t)(0x1033a080u));
  /* 1031111f push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311124 call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x1031112au);
  /* 1031112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031112f call 0x103123b0 */
  push32(0x10311134u); f_103123b0();
  /* 10311134 mov esi, esp */
  ESI = (ESP);
  /* 10311136 push 0x1033a07c */
  push32((uint32_t)(0x1033a07cu));
  /* 1031113b push 0x1033f440 */
  push32((uint32_t)(0x1033f440u));
  /* 10311140 call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x10311146u);
  /* 10311146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031114b call 0x103123b0 */
  push32(0x10311150u); f_103123b0();
  /* 10311150 mov esi, esp */
  ESI = (ESP);
  /* 10311152 push 0x1033a078 */
  push32((uint32_t)(0x1033a078u));
  /* 10311157 push 0x1033f448 */
  push32((uint32_t)(0x1033f448u));
  /* 1031115c call dword ptr [0x10342418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342418))), 0x10311162u);
  /* 10311162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311167 call 0x103123b0 */
  push32(0x1031116cu); f_103123b0();
  /* 1031116c mov esi, esp */
  ESI = (ESP);
  /* 1031116e push 8 */
  push32((uint32_t)(0x8u));
  /* 10311170 push 0x1033f3e0 */
  push32((uint32_t)(0x1033f3e0u));
  /* 10311175 call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x1031117bu);
  /* 1031117b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031117e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311180 call 0x103123b0 */
  push32(0x10311185u); f_103123b0();
  /* 10311185 mov esi, esp */
  ESI = (ESP);
  /* 10311187 push 8 */
  push32((uint32_t)(0x8u));
  /* 10311189 push 0x1033f3f8 */
  push32((uint32_t)(0x1033f3f8u));
  /* 1031118e call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x10311194u);
  /* 10311194 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311197 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311199 call 0x103123b0 */
  push32(0x1031119eu); f_103123b0();
  /* 1031119e mov esi, esp */
  ESI = (ESP);
  /* 103111a0 push 8 */
  push32((uint32_t)(0x8u));
  /* 103111a2 push 0x1033f3e8 */
  push32((uint32_t)(0x1033f3e8u));
  /* 103111a7 call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x103111adu);
  /* 103111ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103111b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103111b2 call 0x103123b0 */
  push32(0x103111b7u); f_103123b0();
  /* 103111b7 mov esi, esp */
  ESI = (ESP);
  /* 103111b9 push 8 */
  push32((uint32_t)(0x8u));
  /* 103111bb push 0x1033f400 */
  push32((uint32_t)(0x1033f400u));
  /* 103111c0 call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x103111c6u);
  /* 103111c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103111c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103111cb call 0x103123b0 */
  push32(0x103111d0u); f_103123b0();
  /* 103111d0 mov esi, esp */
  ESI = (ESP);
  /* 103111d2 push 8 */
  push32((uint32_t)(0x8u));
  /* 103111d4 push 0x1033f3f0 */
  push32((uint32_t)(0x1033f3f0u));
  /* 103111d9 call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x103111dfu);
  /* 103111df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103111e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103111e4 call 0x103123b0 */
  push32(0x103111e9u); f_103123b0();
  /* 103111e9 mov esi, esp */
  ESI = (ESP);
  /* 103111eb push 8 */
  push32((uint32_t)(0x8u));
  /* 103111ed push 0x1033f408 */
  push32((uint32_t)(0x1033f408u));
  /* 103111f2 call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x103111f8u);
  /* 103111f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103111fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103111fd call 0x103123b0 */
  push32(0x10311202u); f_103123b0();
  /* 10311202 mov esi, esp */
  ESI = (ESP);
  /* 10311204 push 8 */
  push32((uint32_t)(0x8u));
  /* 10311206 push 0x1033f410 */
  push32((uint32_t)(0x1033f410u));
  /* 1031120b call dword ptr [0x1034241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034241c))), 0x10311211u);
  /* 10311211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311216 call 0x103123b0 */
  push32(0x1031121bu); f_103123b0();
  /* 1031121b mov esi, esp */
  ESI = (ESP);
  /* 1031121d push 0x1033a068 */
  push32((uint32_t)(0x1033a068u));
  /* 10311222 push 0x1033f450 */
  push32((uint32_t)(0x1033f450u));
  /* 10311227 call dword ptr [0x10342420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342420))), 0x1031122du);
  /* 1031122d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311230 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311232 call 0x103123b0 */
  push32(0x10311237u); f_103123b0();
  /* 10311237 mov esi, esp */
  ESI = (ESP);
  /* 10311239 push 0x1033a058 */
  push32((uint32_t)(0x1033a058u));
  /* 1031123e push 0x1033f470 */
  push32((uint32_t)(0x1033f470u));
  /* 10311243 call dword ptr [0x10342420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342420))), 0x10311249u);
  /* 10311249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031124c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031124e call 0x103123b0 */
  push32(0x10311253u); f_103123b0();
  /* 10311253 mov esi, esp */
  ESI = (ESP);
  /* 10311255 push 0x1033a048 */
  push32((uint32_t)(0x1033a048u));
  /* 1031125a push 0x1033f460 */
  push32((uint32_t)(0x1033f460u));
  /* 1031125f call dword ptr [0x10342420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342420))), 0x10311265u);
  /* 10311265 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311268 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031126a call 0x103123b0 */
  push32(0x1031126fu); f_103123b0();
  /* 1031126f mov esi, esp */
  ESI = (ESP);
  /* 10311271 push 0x1033a038 */
  push32((uint32_t)(0x1033a038u));
  /* 10311276 push 0x1033f468 */
  push32((uint32_t)(0x1033f468u));
  /* 1031127b call dword ptr [0x10342420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342420))), 0x10311281u);
  /* 10311281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311284 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311286 call 0x103123b0 */
  push32(0x1031128bu); f_103123b0();
  /* 1031128b mov esi, esp */
  ESI = (ESP);
  /* 1031128d push 0x1033a030 */
  push32((uint32_t)(0x1033a030u));
  /* 10311292 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311297 call dword ptr [0x10342424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342424))), 0x1031129du);
  /* 1031129d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103112a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103112a2 call 0x103123b0 */
  push32(0x103112a7u); f_103123b0();
  /* 103112a7 mov esi, esp */
  ESI = (ESP);
  /* 103112a9 push 0x1033a028 */
  push32((uint32_t)(0x1033a028u));
  /* 103112ae push 1 */
  push32((uint32_t)(0x1u));
  /* 103112b0 call dword ptr [0x10342428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342428))), 0x103112b6u);
  /* 103112b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103112b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103112bb call 0x103123b0 */
  push32(0x103112c0u); f_103123b0();
  /* 103112c0 mov esi, esp */
  ESI = (ESP);
  /* 103112c2 push 0x1033a01c */
  push32((uint32_t)(0x1033a01cu));
  /* 103112c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103112c9 call dword ptr [0x10342428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342428))), 0x103112cfu);
  /* 103112cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103112d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103112d4 call 0x103123b0 */
  push32(0x103112d9u); f_103123b0();
  /* 103112d9 mov esi, esp */
  ESI = (ESP);
  /* 103112db push 0x1033a028 */
  push32((uint32_t)(0x1033a028u));
  /* 103112e0 push 3 */
  push32((uint32_t)(0x3u));
  /* 103112e2 call dword ptr [0x10342428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342428))), 0x103112e8u);
  /* 103112e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103112eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103112ed call 0x103123b0 */
  push32(0x103112f2u); f_103123b0();
  /* 103112f2 mov esi, esp */
  ESI = (ESP);
  /* 103112f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103112f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103112f8 call dword ptr [0x1034242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034242c))), 0x103112feu);
  /* 103112fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311303 call 0x103123b0 */
  push32(0x10311308u); f_103123b0();
  /* 10311308 mov esi, esp */
  ESI = (ESP);
  /* 1031130a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1031130c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031130e call dword ptr [0x1034242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034242c))), 0x10311314u);
  /* 10311314 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311319 call 0x103123b0 */
  push32(0x1031131eu); f_103123b0();
  /* 1031131e mov esi, esp */
  ESI = (ESP);
  /* 10311320 push 0xa */
  push32((uint32_t)(0xau));
  /* 10311322 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311324 call dword ptr [0x1034242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034242c))), 0x1031132au);
  /* 1031132a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031132d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031132f call 0x103123b0 */
  push32(0x10311334u); f_103123b0();
  /* 10311334 mov esi, esp */
  ESI = (ESP);
  /* 10311336 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10311338 push 4 */
  push32((uint32_t)(0x4u));
  /* 1031133a call dword ptr [0x1034242c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034242c))), 0x10311340u);
  /* 10311340 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311343 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311345 call 0x103123b0 */
  push32(0x1031134au); f_103123b0();
  /* 1031134a pop edi */
  EDI = (pop32());
  /* 1031134b pop esi */
  ESI = (pop32());
  /* 1031134c pop ebx */
  EBX = (pop32());
  /* 1031134d add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311350 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311352 call 0x103123b0 */
  push32(0x10311357u); f_103123b0();
  /* 10311357 mov esp, ebp */
  ESP = (EBP);
  /* 10311359 pop ebp */
  EBP = (pop32());
  /* 1031135a ret  */
  ESPCHK(0x10311090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001410 @ 0x10311410 (3086 bytes, 898 insns) */
void f_10311410(void) {
  FTRACE(0x10311410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10311410 push ebp */
  push32((uint32_t)(EBP));
  /* 10311411 mov ebp, esp */
  EBP = (ESP);
  /* 10311413 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311416 push ebx */
  push32((uint32_t)(EBX));
  /* 10311417 push esi */
  push32((uint32_t)(ESI));
  /* 10311418 push edi */
  push32((uint32_t)(EDI));
  /* 10311419 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1031141c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10311421 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10311426 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10311428 mov esi, esp */
  ESI = (ESP);
  /* 1031142a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1031142c call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311432u);
  /* 10311432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311435 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311437 call 0x103123b0 */
  push32(0x1031143cu); f_103123b0();
  /* 1031143c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311441 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311443 je 0x103117ce */
  if (C.zf) goto L_103117ce;
  /* 10311449 mov esi, esp */
  ESI = (ESP);
  /* 1031144b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031144d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1031144f call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311455u);
  /* 10311455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031145a call 0x103123b0 */
  push32(0x1031145fu); f_103123b0();
  /* 1031145f mov esi, esp */
  ESI = (ESP);
  /* 10311461 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311466 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311468 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031146a call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311470u);
  /* 10311470 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311473 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311475 call 0x103123b0 */
  push32(0x1031147au); f_103123b0();
  /* 1031147a mov esi, esp */
  ESI = (ESP);
  /* 1031147c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311481 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311485 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031148bu);
  /* 1031148b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031148e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311490 call 0x103123b0 */
  push32(0x10311495u); f_103123b0();
  /* 10311495 mov esi, esp */
  ESI = (ESP);
  /* 10311497 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1031149c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031149e push 0 */
  push32((uint32_t)(0x0u));
  /* 103114a0 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103114a6u);
  /* 103114a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103114a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103114ab call 0x103123b0 */
  push32(0x103114b0u); f_103123b0();
  /* 103114b0 mov esi, esp */
  ESI = (ESP);
  /* 103114b2 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103114b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103114b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103114bb call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103114c1u);
  /* 103114c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103114c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103114c6 call 0x103123b0 */
  push32(0x103114cbu); f_103123b0();
  /* 103114cb mov esi, esp */
  ESI = (ESP);
  /* 103114cd push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103114d2 push 5 */
  push32((uint32_t)(0x5u));
  /* 103114d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103114d6 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103114dcu);
  /* 103114dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103114df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103114e1 call 0x103123b0 */
  push32(0x103114e6u); f_103123b0();
  /* 103114e6 mov esi, esp */
  ESI = (ESP);
  /* 103114e8 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 103114ed push 4 */
  push32((uint32_t)(0x4u));
  /* 103114ef push 0 */
  push32((uint32_t)(0x0u));
  /* 103114f1 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103114f7u);
  /* 103114f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103114fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103114fc call 0x103123b0 */
  push32(0x10311501u); f_103123b0();
  /* 10311501 mov esi, esp */
  ESI = (ESP);
  /* 10311503 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311508 push 3 */
  push32((uint32_t)(0x3u));
  /* 1031150a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031150c call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311512u);
  /* 10311512 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311515 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311517 call 0x103123b0 */
  push32(0x1031151cu); f_103123b0();
  /* 1031151c mov esi, esp */
  ESI = (ESP);
  /* 1031151e push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311523 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311525 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311527 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031152du);
  /* 1031152d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311530 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311532 call 0x103123b0 */
  push32(0x10311537u); f_103123b0();
  /* 10311537 mov esi, esp */
  ESI = (ESP);
  /* 10311539 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1031153e push 0 */
  push32((uint32_t)(0x0u));
  /* 10311540 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311542 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311548u);
  /* 10311548 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031154b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031154d call 0x103123b0 */
  push32(0x10311552u); f_103123b0();
  /* 10311552 mov esi, esp */
  ESI = (ESP);
  /* 10311554 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311559 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031155b push 1 */
  push32((uint32_t)(0x1u));
  /* 1031155d call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311563u);
  /* 10311563 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311566 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311568 call 0x103123b0 */
  push32(0x1031156du); f_103123b0();
  /* 1031156d mov esi, esp */
  ESI = (ESP);
  /* 1031156f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10311574 push 5 */
  push32((uint32_t)(0x5u));
  /* 10311576 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311578 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031157eu);
  /* 1031157e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311581 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311583 call 0x103123b0 */
  push32(0x10311588u); f_103123b0();
  /* 10311588 mov esi, esp */
  ESI = (ESP);
  /* 1031158a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1031158f push 4 */
  push32((uint32_t)(0x4u));
  /* 10311591 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311593 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311599u);
  /* 10311599 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031159c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031159e call 0x103123b0 */
  push32(0x103115a3u); f_103123b0();
  /* 103115a3 mov esi, esp */
  ESI = (ESP);
  /* 103115a5 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103115aa push 3 */
  push32((uint32_t)(0x3u));
  /* 103115ac push 2 */
  push32((uint32_t)(0x2u));
  /* 103115ae call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103115b4u);
  /* 103115b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103115b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103115b9 call 0x103123b0 */
  push32(0x103115beu); f_103123b0();
  /* 103115be mov esi, esp */
  ESI = (ESP);
  /* 103115c0 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 103115c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103115c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103115c9 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103115cfu);
  /* 103115cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103115d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103115d4 call 0x103123b0 */
  push32(0x103115d9u); f_103123b0();
  /* 103115d9 mov esi, esp */
  ESI = (ESP);
  /* 103115db push 0 */
  push32((uint32_t)(0x0u));
  /* 103115dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103115df push 2 */
  push32((uint32_t)(0x2u));
  /* 103115e1 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103115e7u);
  /* 103115e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103115ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103115ec call 0x103123b0 */
  push32(0x103115f1u); f_103123b0();
  /* 103115f1 mov esi, esp */
  ESI = (ESP);
  /* 103115f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103115f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103115f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103115f9 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103115ffu);
  /* 103115ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311602 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311604 call 0x103123b0 */
  push32(0x10311609u); f_103123b0();
  /* 10311609 mov esi, esp */
  ESI = (ESP);
  /* 1031160b push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10311610 push 5 */
  push32((uint32_t)(0x5u));
  /* 10311612 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311614 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031161au);
  /* 1031161a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031161d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031161f call 0x103123b0 */
  push32(0x10311624u); f_103123b0();
  /* 10311624 mov esi, esp */
  ESI = (ESP);
  /* 10311626 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 1031162b push 4 */
  push32((uint32_t)(0x4u));
  /* 1031162d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031162f call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311635u);
  /* 10311635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311638 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031163a call 0x103123b0 */
  push32(0x1031163fu); f_103123b0();
  /* 1031163f mov esi, esp */
  ESI = (ESP);
  /* 10311641 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 10311646 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311648 push 3 */
  push32((uint32_t)(0x3u));
  /* 1031164a call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311650u);
  /* 10311650 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311653 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311655 call 0x103123b0 */
  push32(0x1031165au); f_103123b0();
  /* 1031165a mov esi, esp */
  ESI = (ESP);
  /* 1031165c push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 10311661 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311663 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311665 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031166bu);
  /* 1031166b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031166e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311670 call 0x103123b0 */
  push32(0x10311675u); f_103123b0();
  /* 10311675 mov esi, esp */
  ESI = (ESP);
  /* 10311677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031167b push 3 */
  push32((uint32_t)(0x3u));
  /* 1031167d call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x10311683u);
  /* 10311683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311686 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311688 call 0x103123b0 */
  push32(0x1031168du); f_103123b0();
  /* 1031168d mov esi, esp */
  ESI = (ESP);
  /* 1031168f push 0 */
  push32((uint32_t)(0x0u));
  /* 10311691 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311693 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311695 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x1031169bu);
  /* 1031169b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031169e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103116a0 call 0x103123b0 */
  push32(0x103116a5u); f_103123b0();
  /* 103116a5 mov esi, esp */
  ESI = (ESP);
  /* 103116a7 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 103116ac push 5 */
  push32((uint32_t)(0x5u));
  /* 103116ae push 3 */
  push32((uint32_t)(0x3u));
  /* 103116b0 call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103116b6u);
  /* 103116b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103116b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103116bb call 0x103123b0 */
  push32(0x103116c0u); f_103123b0();
  /* 103116c0 mov esi, esp */
  ESI = (ESP);
  /* 103116c2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 103116c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 103116c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 103116cb call dword ptr [0x103423e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e0))), 0x103116d1u);
  /* 103116d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103116d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103116d6 call 0x103123b0 */
  push32(0x103116dbu); f_103123b0();
  /* 103116db mov esi, esp */
  ESI = (ESP);
  /* 103116dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103116df push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 103116e4 push 4 */
  push32((uint32_t)(0x4u));
  /* 103116e6 push 0x1033f450 */
  push32((uint32_t)(0x1033f450u));
  /* 103116eb push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 103116f0 push 0x1033f3e0 */
  push32((uint32_t)(0x1033f3e0u));
  /* 103116f5 call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x103116fbu);
  /* 103116fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103116fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311700 call 0x103123b0 */
  push32(0x10311705u); f_103123b0();
  /* 10311705 mov esi, esp */
  ESI = (ESP);
  /* 10311707 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311709 push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 1031170e push 4 */
  push32((uint32_t)(0x4u));
  /* 10311710 push 0x1033f460 */
  push32((uint32_t)(0x1033f460u));
  /* 10311715 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 1031171a push 0x1033f3e8 */
  push32((uint32_t)(0x1033f3e8u));
  /* 1031171f call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311725u);
  /* 10311725 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031172a call 0x103123b0 */
  push32(0x1031172fu); f_103123b0();
  /* 1031172f mov esi, esp */
  ESI = (ESP);
  /* 10311731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311733 push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311738 push 4 */
  push32((uint32_t)(0x4u));
  /* 1031173a push 0x1033f460 */
  push32((uint32_t)(0x1033f460u));
  /* 1031173f push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311744 push 0x1033f3f0 */
  push32((uint32_t)(0x1033f3f0u));
  /* 10311749 call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x1031174fu);
  /* 1031174f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311752 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311754 call 0x103123b0 */
  push32(0x10311759u); f_103123b0();
  /* 10311759 mov esi, esp */
  ESI = (ESP);
  /* 1031175b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031175d push 0x1033f448 */
  push32((uint32_t)(0x1033f448u));
  /* 10311762 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311764 push 0x1033f470 */
  push32((uint32_t)(0x1033f470u));
  /* 10311769 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 1031176e push 0x1033f410 */
  push32((uint32_t)(0x1033f410u));
  /* 10311773 call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311779u);
  /* 10311779 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031177c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031177e call 0x103123b0 */
  push32(0x10311783u); f_103123b0();
  /* 10311783 mov esi, esp */
  ESI = (ESP);
  /* 10311785 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311787 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x1031178du);
  /* 1031178d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311792 call 0x103123b0 */
  push32(0x10311797u); f_103123b0();
  /* 10311797 mov esi, esp */
  ESI = (ESP);
  /* 10311799 push eax */
  push32((uint32_t)(EAX));
  /* 1031179a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031179c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031179e push 1 */
  push32((uint32_t)(0x1u));
  /* 103117a0 push 0x1033a0c4 */
  push32((uint32_t)(0x1033a0c4u));
  /* 103117a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 103117a7 call dword ptr [0x103423ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423ec))), 0x103117adu);
  /* 103117ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103117b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103117b2 call 0x103123b0 */
  push32(0x103117b7u); f_103123b0();
  /* 103117b7 mov esi, esp */
  ESI = (ESP);
  /* 103117b9 push 0x1033a0bc */
  push32((uint32_t)(0x1033a0bcu));
  /* 103117be call dword ptr [0x103423f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f0))), 0x103117c4u);
  /* 103117c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103117c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103117c9 call 0x103123b0 */
  push32(0x103117ceu); f_103123b0();
L_103117ce:;
  /* 103117ce mov esi, esp */
  ESI = (ESP);
  /* 103117d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 103117d2 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x103117d8u);
  /* 103117d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103117db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103117dd call 0x103123b0 */
  push32(0x103117e2u); f_103123b0();
  /* 103117e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103117e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103117e9 je 0x10311844 */
  if (C.zf) goto L_10311844;
  /* 103117eb mov esi, esp */
  ESI = (ESP);
  /* 103117ed push 1 */
  push32((uint32_t)(0x1u));
  /* 103117ef call dword ptr [0x103423f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f4))), 0x103117f5u);
  /* 103117f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103117f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103117fa call 0x103123b0 */
  push32(0x103117ffu); f_103123b0();
  /* 103117ff and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311804 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311806 je 0x10311844 */
  if (C.zf) goto L_10311844;
  /* 10311808 mov esi, esp */
  ESI = (ESP);
  /* 1031180a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031180c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031180e call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311814u);
  /* 10311814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311819 call 0x103123b0 */
  push32(0x1031181eu); f_103123b0();
  /* 1031181e mov esi, esp */
  ESI = (ESP);
  /* 10311820 push 0x1033a0b4 */
  push32((uint32_t)(0x1033a0b4u));
  /* 10311825 call dword ptr [0x103423f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f0))), 0x1031182bu);
  /* 1031182b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031182e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311830 call 0x103123b0 */
  push32(0x10311835u); f_103123b0();
  /* 10311835 mov esi, esp */
  ESI = (ESP);
  /* 10311837 call dword ptr [0x103423f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f8))), 0x1031183du);
  /* 1031183d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031183f call 0x103123b0 */
  push32(0x10311844u); f_103123b0();
L_10311844:;
  /* 10311844 mov esi, esp */
  ESI = (ESP);
  /* 10311846 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311848 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x1031184eu);
  /* 1031184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311853 call 0x103123b0 */
  push32(0x10311858u); f_103123b0();
  /* 10311858 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031185d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031185f je 0x103118ba */
  if (C.zf) goto L_103118ba;
  /* 10311861 mov esi, esp */
  ESI = (ESP);
  /* 10311863 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311865 call dword ptr [0x103423f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f4))), 0x1031186bu);
  /* 1031186b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031186e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311870 call 0x103123b0 */
  push32(0x10311875u); f_103123b0();
  /* 10311875 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031187a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031187c je 0x103118ba */
  if (C.zf) goto L_103118ba;
  /* 1031187e mov esi, esp */
  ESI = (ESP);
  /* 10311880 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311882 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311884 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x1031188au);
  /* 1031188a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031188d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031188f call 0x103123b0 */
  push32(0x10311894u); f_103123b0();
  /* 10311894 mov esi, esp */
  ESI = (ESP);
  /* 10311896 push 0x1033a0ac */
  push32((uint32_t)(0x1033a0acu));
  /* 1031189b call dword ptr [0x103423f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423f0))), 0x103118a1u);
  /* 103118a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103118a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103118a6 call 0x103123b0 */
  push32(0x103118abu); f_103123b0();
  /* 103118ab mov esi, esp */
  ESI = (ESP);
  /* 103118ad call dword ptr [0x103423fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423fc))), 0x103118b3u);
  /* 103118b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103118b5 call 0x103123b0 */
  push32(0x103118bau); f_103123b0();
L_103118ba:;
  /* 103118ba mov esi, esp */
  ESI = (ESP);
  /* 103118bc push 3 */
  push32((uint32_t)(0x3u));
  /* 103118be call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x103118c4u);
  /* 103118c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103118c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103118c9 call 0x103123b0 */
  push32(0x103118ceu); f_103123b0();
  /* 103118ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 103118d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103118d5 je 0x10311a0f */
  if (C.zf) goto L_10311a0f;
  /* 103118db mov esi, esp */
  ESI = (ESP);
  /* 103118dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103118df push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 103118e4 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x103118eau);
  /* 103118ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103118ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103118ef call 0x103123b0 */
  push32(0x103118f4u); f_103123b0();
  /* 103118f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103118f6 jle 0x10311a0f */
  if ((C.zf||C.sf!=C.of)) goto L_10311a0f;
  /* 103118fc mov esi, esp */
  ESI = (ESP);
  /* 103118fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10311900 push 0x1033f420 */
  push32((uint32_t)(0x1033f420u));
  /* 10311905 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x1031190bu);
  /* 1031190b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031190e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311910 call 0x103123b0 */
  push32(0x10311915u); f_103123b0();
  /* 10311915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311917 jne 0x10311a0f */
  if (!C.zf) goto L_10311a0f;
  /* 1031191d mov esi, esp */
  ESI = (ESP);
  /* 1031191f push 0 */
  push32((uint32_t)(0x0u));
  /* 10311921 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311923 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311929u);
  /* 10311929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031192c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031192e call 0x103123b0 */
  push32(0x10311933u); f_103123b0();
  /* 10311933 mov esi, esp */
  ESI = (ESP);
  /* 10311935 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311937 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x1031193du);
  /* 1031193d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311940 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311942 call 0x103123b0 */
  push32(0x10311947u); f_103123b0();
  /* 10311947 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031194d mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 10311952 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311954 mov esi, esp */
  ESI = (ESP);
  /* 10311956 push ecx */
  push32((uint32_t)(ECX));
  /* 10311957 push 0x1033a0a4 */
  push32((uint32_t)(0x1033a0a4u));
  /* 1031195c call dword ptr [0x10342404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342404))), 0x10311962u);
  /* 10311962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311965 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311967 call 0x103123b0 */
  push32(0x1031196cu); f_103123b0();
  /* 1031196c mov esi, esp */
  ESI = (ESP);
  /* 1031196e push 0 */
  push32((uint32_t)(0x0u));
  /* 10311970 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311976u);
  /* 10311976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311979 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031197b call 0x103123b0 */
  push32(0x10311980u); f_103123b0();
  /* 10311980 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311986 mov edx, 0xbb8 */
  EDX = (0xbb8u);
  /* 1031198b sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031198d mov esi, esp */
  ESI = (ESP);
  /* 1031198f push edx */
  push32((uint32_t)(EDX));
  /* 10311990 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311994 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x1031199au);
  /* 1031199a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031199d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031199f call 0x103123b0 */
  push32(0x103119a4u); f_103123b0();
  /* 103119a4 mov esi, esp */
  ESI = (ESP);
  /* 103119a6 push 4 */
  push32((uint32_t)(0x4u));
  /* 103119a8 call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x103119aeu);
  /* 103119ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103119b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103119b3 call 0x103123b0 */
  push32(0x103119b8u); f_103123b0();
  /* 103119b8 mov esi, esp */
  ESI = (ESP);
  /* 103119ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103119bc push 0x1033f3e0 */
  push32((uint32_t)(0x1033f3e0u));
  /* 103119c1 call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x103119c7u);
  /* 103119c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103119ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103119cc call 0x103123b0 */
  push32(0x103119d1u); f_103123b0();
  /* 103119d1 mov esi, esp */
  ESI = (ESP);
  /* 103119d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 103119d5 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x103119dbu);
  /* 103119db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103119de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103119e0 call 0x103123b0 */
  push32(0x103119e5u); f_103123b0();
  /* 103119e5 mov esi, esp */
  ESI = (ESP);
  /* 103119e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103119e9 push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 103119ee push 4 */
  push32((uint32_t)(0x4u));
  /* 103119f0 push 0x1033f470 */
  push32((uint32_t)(0x1033f470u));
  /* 103119f5 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 103119fa push 0x1033f3f8 */
  push32((uint32_t)(0x1033f3f8u));
  /* 103119ff call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311a05u);
  /* 10311a05 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a0a call 0x103123b0 */
  push32(0x10311a0fu); f_103123b0();
L_10311a0f:;
  /* 10311a0f mov esi, esp */
  ESI = (ESP);
  /* 10311a11 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311a13 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311a19u);
  /* 10311a19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a1e call 0x103123b0 */
  push32(0x10311a23u); f_103123b0();
  /* 10311a23 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311a28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311a2a je 0x10311b2b */
  if (C.zf) goto L_10311b2b;
  /* 10311a30 mov esi, esp */
  ESI = (ESP);
  /* 10311a32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311a34 push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 10311a39 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311a3fu);
  /* 10311a3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a44 call 0x103123b0 */
  push32(0x10311a49u); f_103123b0();
  /* 10311a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311a4b jle 0x10311b2b */
  if ((C.zf||C.sf!=C.of)) goto L_10311b2b;
  /* 10311a51 mov esi, esp */
  ESI = (ESP);
  /* 10311a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311a55 push 0x1033f420 */
  push32((uint32_t)(0x1033f420u));
  /* 10311a5a call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311a60u);
  /* 10311a60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a65 call 0x103123b0 */
  push32(0x10311a6au); f_103123b0();
  /* 10311a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311a6c jne 0x10311b2b */
  if (!C.zf) goto L_10311b2b;
  /* 10311a72 mov esi, esp */
  ESI = (ESP);
  /* 10311a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311a76 push 3 */
  push32((uint32_t)(0x3u));
  /* 10311a78 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311a7eu);
  /* 10311a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a83 call 0x103123b0 */
  push32(0x10311a88u); f_103123b0();
  /* 10311a88 mov esi, esp */
  ESI = (ESP);
  /* 10311a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10311a8c call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311a92u);
  /* 10311a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311a97 call 0x103123b0 */
  push32(0x10311a9cu); f_103123b0();
  /* 10311a9c imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311aa2 mov ecx, 0xbb8 */
  ECX = (0xbb8u);
  /* 10311aa7 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311aa9 mov esi, esp */
  ESI = (ESP);
  /* 10311aab push ecx */
  push32((uint32_t)(ECX));
  /* 10311aac push 1 */
  push32((uint32_t)(0x1u));
  /* 10311aae push 1 */
  push32((uint32_t)(0x1u));
  /* 10311ab0 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x10311ab6u);
  /* 10311ab6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311ab9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311abb call 0x103123b0 */
  push32(0x10311ac0u); f_103123b0();
  /* 10311ac0 mov esi, esp */
  ESI = (ESP);
  /* 10311ac2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311ac4 call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x10311acau);
  /* 10311aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311acd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311acf call 0x103123b0 */
  push32(0x10311ad4u); f_103123b0();
  /* 10311ad4 mov esi, esp */
  ESI = (ESP);
  /* 10311ad6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311ad8 push 0x1033f3e0 */
  push32((uint32_t)(0x1033f3e0u));
  /* 10311add call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x10311ae3u);
  /* 10311ae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311ae6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311ae8 call 0x103123b0 */
  push32(0x10311aedu); f_103123b0();
  /* 10311aed mov esi, esp */
  ESI = (ESP);
  /* 10311aef push 4 */
  push32((uint32_t)(0x4u));
  /* 10311af1 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x10311af7u);
  /* 10311af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311afc call 0x103123b0 */
  push32(0x10311b01u); f_103123b0();
  /* 10311b01 mov esi, esp */
  ESI = (ESP);
  /* 10311b03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311b05 push 0x1033f418 */
  push32((uint32_t)(0x1033f418u));
  /* 10311b0a push 4 */
  push32((uint32_t)(0x4u));
  /* 10311b0c push 0x1033f470 */
  push32((uint32_t)(0x1033f470u));
  /* 10311b11 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311b16 push 0x1033f3f8 */
  push32((uint32_t)(0x1033f3f8u));
  /* 10311b1b call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311b21u);
  /* 10311b21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311b26 call 0x103123b0 */
  push32(0x10311b2bu); f_103123b0();
L_10311b2b:;
  /* 10311b2b mov esi, esp */
  ESI = (ESP);
  /* 10311b2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10311b2f call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311b35u);
  /* 10311b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311b38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311b3a call 0x103123b0 */
  push32(0x10311b3fu); f_103123b0();
  /* 10311b3f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311b46 je 0x10311c80 */
  if (C.zf) goto L_10311c80;
  /* 10311b4c mov esi, esp */
  ESI = (ESP);
  /* 10311b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10311b50 push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 10311b55 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311b5bu);
  /* 10311b5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311b5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311b60 call 0x103123b0 */
  push32(0x10311b65u); f_103123b0();
  /* 10311b65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311b67 jle 0x10311c80 */
  if ((C.zf||C.sf!=C.of)) goto L_10311c80;
  /* 10311b6d mov esi, esp */
  ESI = (ESP);
  /* 10311b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10311b71 push 0x1033f430 */
  push32((uint32_t)(0x1033f430u));
  /* 10311b76 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311b7cu);
  /* 10311b7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311b7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311b81 call 0x103123b0 */
  push32(0x10311b86u); f_103123b0();
  /* 10311b86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311b88 jne 0x10311c80 */
  if (!C.zf) goto L_10311c80;
  /* 10311b8e mov esi, esp */
  ESI = (ESP);
  /* 10311b90 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311b92 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311b94 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311b9au);
  /* 10311b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311b9f call 0x103123b0 */
  push32(0x10311ba4u); f_103123b0();
  /* 10311ba4 mov esi, esp */
  ESI = (ESP);
  /* 10311ba6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311ba8 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311baeu);
  /* 10311bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311bb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311bb3 call 0x103123b0 */
  push32(0x10311bb8u); f_103123b0();
  /* 10311bb8 imul eax, eax, 0x190 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x190u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311bbe mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 10311bc3 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311bc5 mov esi, esp */
  ESI = (ESP);
  /* 10311bc7 push edx */
  push32((uint32_t)(EDX));
  /* 10311bc8 push 0x1033a09c */
  push32((uint32_t)(0x1033a09cu));
  /* 10311bcd call dword ptr [0x10342404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342404))), 0x10311bd3u);
  /* 10311bd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311bd8 call 0x103123b0 */
  push32(0x10311bddu); f_103123b0();
  /* 10311bdd mov esi, esp */
  ESI = (ESP);
  /* 10311bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 10311be1 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311be7u);
  /* 10311be7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311bea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311bec call 0x103123b0 */
  push32(0x10311bf1u); f_103123b0();
  /* 10311bf1 imul eax, eax, 0x190 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x190u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311bf7 mov ecx, 0x7d0 */
  ECX = (0x7d0u);
  /* 10311bfc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311bfe mov esi, esp */
  ESI = (ESP);
  /* 10311c00 push ecx */
  push32((uint32_t)(ECX));
  /* 10311c01 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311c05 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x10311c0bu);
  /* 10311c0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c10 call 0x103123b0 */
  push32(0x10311c15u); f_103123b0();
  /* 10311c15 mov esi, esp */
  ESI = (ESP);
  /* 10311c17 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311c19 call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x10311c1fu);
  /* 10311c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c24 call 0x103123b0 */
  push32(0x10311c29u); f_103123b0();
  /* 10311c29 mov esi, esp */
  ESI = (ESP);
  /* 10311c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10311c2d push 0x1033f3e8 */
  push32((uint32_t)(0x1033f3e8u));
  /* 10311c32 call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x10311c38u);
  /* 10311c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c3d call 0x103123b0 */
  push32(0x10311c42u); f_103123b0();
  /* 10311c42 mov esi, esp */
  ESI = (ESP);
  /* 10311c44 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311c46 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x10311c4cu);
  /* 10311c4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c51 call 0x103123b0 */
  push32(0x10311c56u); f_103123b0();
  /* 10311c56 mov esi, esp */
  ESI = (ESP);
  /* 10311c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311c5a push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 10311c5f push 4 */
  push32((uint32_t)(0x4u));
  /* 10311c61 push 0x1033f468 */
  push32((uint32_t)(0x1033f468u));
  /* 10311c66 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311c6b push 0x1033f400 */
  push32((uint32_t)(0x1033f400u));
  /* 10311c70 call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311c76u);
  /* 10311c76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c7b call 0x103123b0 */
  push32(0x10311c80u); f_103123b0();
L_10311c80:;
  /* 10311c80 mov esi, esp */
  ESI = (ESP);
  /* 10311c82 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311c84 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311c8au);
  /* 10311c8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311c8d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311c8f call 0x103123b0 */
  push32(0x10311c94u); f_103123b0();
  /* 10311c94 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311c99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311c9b je 0x10311d9c */
  if (C.zf) goto L_10311d9c;
  /* 10311ca1 mov esi, esp */
  ESI = (ESP);
  /* 10311ca3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311ca5 push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 10311caa call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311cb0u);
  /* 10311cb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311cb3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311cb5 call 0x103123b0 */
  push32(0x10311cbau); f_103123b0();
  /* 10311cba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311cbc jle 0x10311d9c */
  if ((C.zf||C.sf!=C.of)) goto L_10311d9c;
  /* 10311cc2 mov esi, esp */
  ESI = (ESP);
  /* 10311cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311cc6 push 0x1033f430 */
  push32((uint32_t)(0x1033f430u));
  /* 10311ccb call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311cd1u);
  /* 10311cd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311cd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311cd6 call 0x103123b0 */
  push32(0x10311cdbu); f_103123b0();
  /* 10311cdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311cdd jne 0x10311d9c */
  if (!C.zf) goto L_10311d9c;
  /* 10311ce3 mov esi, esp */
  ESI = (ESP);
  /* 10311ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311ce7 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311ce9 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311cefu);
  /* 10311cef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311cf4 call 0x103123b0 */
  push32(0x10311cf9u); f_103123b0();
  /* 10311cf9 mov esi, esp */
  ESI = (ESP);
  /* 10311cfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10311cfd call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311d03u);
  /* 10311d03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d08 call 0x103123b0 */
  push32(0x10311d0du); f_103123b0();
  /* 10311d0d imul eax, eax, 0x190 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x190u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311d13 mov edx, 0x7d0 */
  EDX = (0x7d0u);
  /* 10311d18 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311d1a mov esi, esp */
  ESI = (ESP);
  /* 10311d1c push edx */
  push32((uint32_t)(EDX));
  /* 10311d1d push 1 */
  push32((uint32_t)(0x1u));
  /* 10311d1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10311d21 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x10311d27u);
  /* 10311d27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d2c call 0x103123b0 */
  push32(0x10311d31u); f_103123b0();
  /* 10311d31 mov esi, esp */
  ESI = (ESP);
  /* 10311d33 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311d35 call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x10311d3bu);
  /* 10311d3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d40 call 0x103123b0 */
  push32(0x10311d45u); f_103123b0();
  /* 10311d45 mov esi, esp */
  ESI = (ESP);
  /* 10311d47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311d49 push 0x1033f3e8 */
  push32((uint32_t)(0x1033f3e8u));
  /* 10311d4e call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x10311d54u);
  /* 10311d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d59 call 0x103123b0 */
  push32(0x10311d5eu); f_103123b0();
  /* 10311d5e mov esi, esp */
  ESI = (ESP);
  /* 10311d60 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311d62 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x10311d68u);
  /* 10311d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d6d call 0x103123b0 */
  push32(0x10311d72u); f_103123b0();
  /* 10311d72 mov esi, esp */
  ESI = (ESP);
  /* 10311d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311d76 push 0x1033f428 */
  push32((uint32_t)(0x1033f428u));
  /* 10311d7b push 4 */
  push32((uint32_t)(0x4u));
  /* 10311d7d push 0x1033f468 */
  push32((uint32_t)(0x1033f468u));
  /* 10311d82 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311d87 push 0x1033f400 */
  push32((uint32_t)(0x1033f400u));
  /* 10311d8c call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311d92u);
  /* 10311d92 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311d97 call 0x103123b0 */
  push32(0x10311d9cu); f_103123b0();
L_10311d9c:;
  /* 10311d9c mov esi, esp */
  ESI = (ESP);
  /* 10311d9e push 5 */
  push32((uint32_t)(0x5u));
  /* 10311da0 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311da6u);
  /* 10311da6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311dab call 0x103123b0 */
  push32(0x10311db0u); f_103123b0();
  /* 10311db0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311db7 je 0x10311ef1 */
  if (C.zf) goto L_10311ef1;
  /* 10311dbd mov esi, esp */
  ESI = (ESP);
  /* 10311dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10311dc1 push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311dc6 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311dccu);
  /* 10311dcc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311dd1 call 0x103123b0 */
  push32(0x10311dd6u); f_103123b0();
  /* 10311dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311dd8 jle 0x10311ef1 */
  if ((C.zf||C.sf!=C.of)) goto L_10311ef1;
  /* 10311dde mov esi, esp */
  ESI = (ESP);
  /* 10311de0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311de2 push 0x1033f440 */
  push32((uint32_t)(0x1033f440u));
  /* 10311de7 call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311dedu);
  /* 10311ded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311df0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311df2 call 0x103123b0 */
  push32(0x10311df7u); f_103123b0();
  /* 10311df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311df9 jne 0x10311ef1 */
  if (!C.zf) goto L_10311ef1;
  /* 10311dff mov esi, esp */
  ESI = (ESP);
  /* 10311e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311e03 push 5 */
  push32((uint32_t)(0x5u));
  /* 10311e05 call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311e0bu);
  /* 10311e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e10 call 0x103123b0 */
  push32(0x10311e15u); f_103123b0();
  /* 10311e15 mov esi, esp */
  ESI = (ESP);
  /* 10311e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311e19 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311e1fu);
  /* 10311e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e24 call 0x103123b0 */
  push32(0x10311e29u); f_103123b0();
  /* 10311e29 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311e2f mov ecx, 0xfa0 */
  ECX = (0xfa0u);
  /* 10311e34 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311e36 mov esi, esp */
  ESI = (ESP);
  /* 10311e38 push ecx */
  push32((uint32_t)(ECX));
  /* 10311e39 push 0x1033a094 */
  push32((uint32_t)(0x1033a094u));
  /* 10311e3e call dword ptr [0x10342404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342404))), 0x10311e44u);
  /* 10311e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e49 call 0x103123b0 */
  push32(0x10311e4eu); f_103123b0();
  /* 10311e4e mov esi, esp */
  ESI = (ESP);
  /* 10311e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311e52 call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311e58u);
  /* 10311e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e5d call 0x103123b0 */
  push32(0x10311e62u); f_103123b0();
  /* 10311e62 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311e68 mov edx, 0xfa0 */
  EDX = (0xfa0u);
  /* 10311e6d sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311e6f mov esi, esp */
  ESI = (ESP);
  /* 10311e71 push edx */
  push32((uint32_t)(EDX));
  /* 10311e72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311e76 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x10311e7cu);
  /* 10311e7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e81 call 0x103123b0 */
  push32(0x10311e86u); f_103123b0();
  /* 10311e86 mov esi, esp */
  ESI = (ESP);
  /* 10311e88 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311e8a call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x10311e90u);
  /* 10311e90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311e93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311e95 call 0x103123b0 */
  push32(0x10311e9au); f_103123b0();
  /* 10311e9a mov esi, esp */
  ESI = (ESP);
  /* 10311e9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10311e9e push 0x1033f3f0 */
  push32((uint32_t)(0x1033f3f0u));
  /* 10311ea3 call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x10311ea9u);
  /* 10311ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311eae call 0x103123b0 */
  push32(0x10311eb3u); f_103123b0();
  /* 10311eb3 mov esi, esp */
  ESI = (ESP);
  /* 10311eb5 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311eb7 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x10311ebdu);
  /* 10311ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311ec2 call 0x103123b0 */
  push32(0x10311ec7u); f_103123b0();
  /* 10311ec7 mov esi, esp */
  ESI = (ESP);
  /* 10311ec9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311ecb push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311ed0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311ed2 push 0x1033f468 */
  push32((uint32_t)(0x1033f468u));
  /* 10311ed7 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311edc push 0x1033f408 */
  push32((uint32_t)(0x1033f408u));
  /* 10311ee1 call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10311ee7u);
  /* 10311ee7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311eea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311eec call 0x103123b0 */
  push32(0x10311ef1u); f_103123b0();
L_10311ef1:;
  /* 10311ef1 mov esi, esp */
  ESI = (ESP);
  /* 10311ef3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10311ef5 call dword ptr [0x103423d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423d8))), 0x10311efbu);
  /* 10311efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311efe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f00 call 0x103123b0 */
  push32(0x10311f05u); f_103123b0();
  /* 10311f05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10311f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311f0c je 0x1031200d */
  if (C.zf) goto L_1031200d;
  /* 10311f12 mov esi, esp */
  ESI = (ESP);
  /* 10311f14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311f16 push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311f1b call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311f21u);
  /* 10311f21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f26 call 0x103123b0 */
  push32(0x10311f2bu); f_103123b0();
  /* 10311f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311f2d jle 0x1031200d */
  if ((C.zf||C.sf!=C.of)) goto L_1031200d;
  /* 10311f33 mov esi, esp */
  ESI = (ESP);
  /* 10311f35 push 2 */
  push32((uint32_t)(0x2u));
  /* 10311f37 push 0x1033f440 */
  push32((uint32_t)(0x1033f440u));
  /* 10311f3c call dword ptr [0x10342400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342400))), 0x10311f42u);
  /* 10311f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f47 call 0x103123b0 */
  push32(0x10311f4cu); f_103123b0();
  /* 10311f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10311f4e jne 0x1031200d */
  if (!C.zf) goto L_1031200d;
  /* 10311f54 mov esi, esp */
  ESI = (ESP);
  /* 10311f56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311f58 push 5 */
  push32((uint32_t)(0x5u));
  /* 10311f5a call dword ptr [0x103423dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423dc))), 0x10311f60u);
  /* 10311f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311f63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f65 call 0x103123b0 */
  push32(0x10311f6au); f_103123b0();
  /* 10311f6a mov esi, esp */
  ESI = (ESP);
  /* 10311f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10311f6e call dword ptr [0x103423e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e8))), 0x10311f74u);
  /* 10311f74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311f77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f79 call 0x103123b0 */
  push32(0x10311f7eu); f_103123b0();
  /* 10311f7e imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10311f84 mov ecx, 0xfa0 */
  ECX = (0xfa0u);
  /* 10311f89 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10311f8b mov esi, esp */
  ESI = (ESP);
  /* 10311f8d push ecx */
  push32((uint32_t)(ECX));
  /* 10311f8e push 1 */
  push32((uint32_t)(0x1u));
  /* 10311f90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10311f92 call dword ptr [0x10342408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342408))), 0x10311f98u);
  /* 10311f98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311f9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311f9d call 0x103123b0 */
  push32(0x10311fa2u); f_103123b0();
  /* 10311fa2 mov esi, esp */
  ESI = (ESP);
  /* 10311fa4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311fa6 call dword ptr [0x1034240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034240c))), 0x10311facu);
  /* 10311fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311faf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311fb1 call 0x103123b0 */
  push32(0x10311fb6u); f_103123b0();
  /* 10311fb6 mov esi, esp */
  ESI = (ESP);
  /* 10311fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311fba push 0x1033f3f0 */
  push32((uint32_t)(0x1033f3f0u));
  /* 10311fbf call dword ptr [0x10342410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342410))), 0x10311fc5u);
  /* 10311fc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311fca call 0x103123b0 */
  push32(0x10311fcfu); f_103123b0();
  /* 10311fcf mov esi, esp */
  ESI = (ESP);
  /* 10311fd1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10311fd3 call dword ptr [0x10342414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342414))), 0x10311fd9u);
  /* 10311fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10311fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10311fde call 0x103123b0 */
  push32(0x10311fe3u); f_103123b0();
  /* 10311fe3 mov esi, esp */
  ESI = (ESP);
  /* 10311fe5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10311fe7 push 0x1033f438 */
  push32((uint32_t)(0x1033f438u));
  /* 10311fec push 4 */
  push32((uint32_t)(0x4u));
  /* 10311fee push 0x1033f468 */
  push32((uint32_t)(0x1033f468u));
  /* 10311ff3 push 0x1033f458 */
  push32((uint32_t)(0x1033f458u));
  /* 10311ff8 push 0x1033f408 */
  push32((uint32_t)(0x1033f408u));
  /* 10311ffd call dword ptr [0x103423e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103423e4))), 0x10312003u);
  /* 10312003 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312006 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312008 call 0x103123b0 */
  push32(0x1031200du); f_103123b0();
L_1031200d:;
  /* 1031200d pop edi */
  EDI = (pop32());
  /* 1031200e pop esi */
  ESI = (pop32());
  /* 1031200f pop ebx */
  EBX = (pop32());
  /* 10312010 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312013 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312015 call 0x103123b0 */
  push32(0x1031201au); f_103123b0();
  /* 1031201a mov esp, ebp */
  ESP = (EBP);
  /* 1031201c pop ebp */
  EBP = (pop32());
  /* 1031201d ret  */
  ESPCHK(0x10311410u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x103123b0 (56 bytes, 28 insns) */
void f_103123b0(void) {
  FTRACE(0x103123b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103123b0 jne 0x103123b3 */
  if (!C.zf) goto L_103123b3;
  /* 103123b2 ret  */
  ESPCHK(0x103123b0u, _esp0);
  ESP += 4; return;
L_103123b3:;
  /* 103123b3 push ebp */
  push32((uint32_t)(EBP));
  /* 103123b4 mov ebp, esp */
  EBP = (ESP);
  /* 103123b6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103123b9 push eax */
  push32((uint32_t)(EAX));
  /* 103123ba push edx */
  push32((uint32_t)(EDX));
  /* 103123bb push ebx */
  push32((uint32_t)(EBX));
  /* 103123bc push esi */
  push32((uint32_t)(ESI));
  /* 103123bd push edi */
  push32((uint32_t)(EDI));
  /* 103123be push 0x1033a0e4 */
  push32((uint32_t)(0x1033a0e4u));
  /* 103123c3 push 0x1033a0e0 */
  push32((uint32_t)(0x1033a0e0u));
  /* 103123c8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 103123ca push 0x1033a0d0 */
  push32((uint32_t)(0x1033a0d0u));
  /* 103123cf push 1 */
  push32((uint32_t)(0x1u));
  /* 103123d1 call 0x10312780 */
  push32(0x103123d6u); f_10312780();
  /* 103123d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103123d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103123dc jne 0x103123df */
  if (!C.zf) goto L_103123df;
  /* 103123de int3  */
  x86_unimpl("int3 @ 0x103123de");
L_103123df:;
  /* 103123df pop edi */
  EDI = (pop32());
  /* 103123e0 pop esi */
  ESI = (pop32());
  /* 103123e1 pop ebx */
  EBX = (pop32());
  /* 103123e2 pop edx */
  EDX = (pop32());
  /* 103123e3 pop eax */
  EAX = (pop32());
  /* 103123e4 mov esp, ebp */
  ESP = (EBP);
  /* 103123e6 pop ebp */
  EBP = (pop32());
  /* 103123e7 ret  */
  ESPCHK(0x103123b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x103123f0 (313 bytes, 78 insns) */
void f_103123f0(void) {
  FTRACE(0x103123f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103123f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103123f1 mov ebp, esp */
  EBP = (ESP);
  /* 103123f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103123f7 jne 0x103124b7 */
  if (!C.zf) goto L_103124b7;
  /* 103123fd call dword ptr [0x103422b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b0))), 0x10312403u);
  /* 10312403 mov dword ptr [0x1033f4b8], eax */
  w32((uint32_t)(0x1033f4b8), (EAX));
  /* 10312408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1031240a call 0x10315eb0 */
  push32(0x1031240fu); f_10315eb0();
  /* 1031240f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312412 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312414 jne 0x1031241d */
  if (!C.zf) goto L_1031241d;
  /* 10312416 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10312418 jmp 0x10312525 */
  goto L_10312525;
L_1031241d:;
  /* 1031241d mov eax, dword ptr [0x1033f4b8] */
  EAX = (r32((uint32_t)(0x1033f4b8)));
  /* 10312422 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10312425 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031242a mov dword ptr [0x1033f4c4], eax */
  w32((uint32_t)(0x1033f4c4), (EAX));
  /* 1031242f mov ecx, dword ptr [0x1033f4b8] */
  ECX = (r32((uint32_t)(0x1033f4b8)));
  /* 10312435 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031243b mov dword ptr [0x1033f4c0], ecx */
  w32((uint32_t)(0x1033f4c0), (ECX));
  /* 10312441 mov edx, dword ptr [0x1033f4c0] */
  EDX = (r32((uint32_t)(0x1033f4c0)));
  /* 10312447 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1031244a add edx, dword ptr [0x1033f4c4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033f4c4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10312450 mov dword ptr [0x1033f4bc], edx */
  w32((uint32_t)(0x1033f4bc), (EDX));
  /* 10312456 mov eax, dword ptr [0x1033f4b8] */
  EAX = (r32((uint32_t)(0x1033f4b8)));
  /* 1031245b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1031245e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10312463 mov dword ptr [0x1033f4b8], eax */
  w32((uint32_t)(0x1033f4b8), (EAX));
  /* 10312468 call 0x10313020 */
  push32(0x1031246du); f_10313020();
  /* 1031246d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031246f jne 0x1031247d */
  if (!C.zf) goto L_1031247d;
  /* 10312471 call 0x10315f00 */
  push32(0x10312476u); f_10315f00();
  /* 10312476 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10312478 jmp 0x10312525 */
  goto L_10312525;
L_1031247d:;
  /* 1031247d call dword ptr [0x103422ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422ac))), 0x10312483u);
  /* 10312483 mov dword ptr [0x1034100c], eax */
  w32((uint32_t)(0x1034100c), (EAX));
  /* 10312488 call 0x10315c90 */
  push32(0x1031248du); f_10315c90();
  /* 1031248d mov dword ptr [0x1033f4a0], eax */
  w32((uint32_t)(0x1033f4a0), (EAX));
  /* 10312492 call 0x103132d0 */
  push32(0x10312497u); f_103132d0();
  /* 10312497 call 0x10315780 */
  push32(0x1031249cu); f_10315780();
  /* 1031249c call 0x10315630 */
  push32(0x103124a1u); f_10315630();
  /* 103124a1 call 0x10312e20 */
  push32(0x103124a6u); f_10312e20();
  /* 103124a6 mov ecx, dword ptr [0x1033f49c] */
  ECX = (r32((uint32_t)(0x1033f49c)));
  /* 103124ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103124af mov dword ptr [0x1033f49c], ecx */
  w32((uint32_t)(0x1033f49c), (ECX));
  /* 103124b5 jmp 0x10312520 */
  goto L_10312520;
L_103124b7:;
  /* 103124b7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103124bb jne 0x10312510 */
  if (!C.zf) goto L_10312510;
  /* 103124bd cmp dword ptr [0x1033f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103124c4 jle 0x1031250a */
  if ((C.zf||C.sf!=C.of)) goto L_1031250a;
  /* 103124c6 mov edx, dword ptr [0x1033f49c] */
  EDX = (r32((uint32_t)(0x1033f49c)));
  /* 103124cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103124cf mov dword ptr [0x1033f49c], edx */
  w32((uint32_t)(0x1033f49c), (EDX));
  /* 103124d5 cmp dword ptr [0x1033f4f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103124dc jne 0x103124e3 */
  if (!C.zf) goto L_103124e3;
  /* 103124de call 0x10312ea0 */
  push32(0x103124e3u); f_10312ea0();
L_103124e3:;
  /* 103124e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 103124e5 call 0x10314bd0 */
  push32(0x103124eau); f_10314bd0();
  /* 103124ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103124ed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 103124f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103124f2 je 0x103124f9 */
  if (C.zf) goto L_103124f9;
  /* 103124f4 call 0x103154e0 */
  push32(0x103124f9u); f_103154e0();
L_103124f9:;
  /* 103124f9 call 0x10313600 */
  push32(0x103124feu); f_10313600();
  /* 103124fe call 0x103130b0 */
  push32(0x10312503u); f_103130b0();
  /* 10312503 call 0x10315f00 */
  push32(0x10312508u); f_10315f00();
  /* 10312508 jmp 0x1031250e */
  goto L_1031250e;
L_1031250a:;
  /* 1031250a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031250c jmp 0x10312525 */
  goto L_10312525;
L_1031250e:;
  /* 1031250e jmp 0x10312520 */
  goto L_10312520;
L_10312510:;
  /* 10312510 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312514 jne 0x10312520 */
  if (!C.zf) goto L_10312520;
  /* 10312516 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312518 call 0x103131a0 */
  push32(0x1031251du); f_103131a0();
  /* 1031251d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312520:;
  /* 10312520 mov eax, 1 */
  EAX = (0x1u);
L_10312525:;
  /* 10312525 pop ebp */
  EBP = (pop32());
  /* 10312526 ret 0xc */
  ESPCHK(0x103123f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10312530 (243 bytes, 86 insns) */
void f_10312530(void) {
  FTRACE(0x10312530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312530 push ebp */
  push32((uint32_t)(EBP));
  /* 10312531 mov ebp, esp */
  EBP = (ESP);
  /* 10312533 push ecx */
  push32((uint32_t)(ECX));
  /* 10312534 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031253b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031253f jne 0x10312551 */
  if (!C.zf) goto L_10312551;
  /* 10312541 cmp dword ptr [0x1033f49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312548 jne 0x10312551 */
  if (!C.zf) goto L_10312551;
  /* 1031254a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031254c jmp 0x1031261d */
  goto L_1031261d;
L_10312551:;
  /* 10312551 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312555 je 0x1031255d */
  if (C.zf) goto L_1031255d;
  /* 10312557 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031255b jne 0x1031259f */
  if (!C.zf) goto L_1031259f;
L_1031255d:;
  /* 1031255d cmp dword ptr [0x1034101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1034101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312564 je 0x1031257b */
  if (C.zf) goto L_1031257b;
  /* 10312566 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312569 push eax */
  push32((uint32_t)(EAX));
  /* 1031256a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031256d push ecx */
  push32((uint32_t)(ECX));
  /* 1031256e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312571 push edx */
  push32((uint32_t)(EDX));
  /* 10312572 call dword ptr [0x1034101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034101c))), 0x10312578u);
  /* 10312578 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031257b:;
  /* 1031257b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031257f je 0x10312595 */
  if (C.zf) goto L_10312595;
  /* 10312581 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312584 push eax */
  push32((uint32_t)(EAX));
  /* 10312585 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10312588 push ecx */
  push32((uint32_t)(ECX));
  /* 10312589 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031258c push edx */
  push32((uint32_t)(EDX));
  /* 1031258d call 0x103123f0 */
  push32(0x10312592u); f_103123f0();
  /* 10312592 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10312595:;
  /* 10312595 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312599 jne 0x1031259f */
  if (!C.zf) goto L_1031259f;
  /* 1031259b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031259d jmp 0x1031261d */
  goto L_1031261d;
L_1031259f:;
  /* 1031259f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103125a2 push eax */
  push32((uint32_t)(EAX));
  /* 103125a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103125a6 push ecx */
  push32((uint32_t)(ECX));
  /* 103125a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103125aa push edx */
  push32((uint32_t)(EDX));
  /* 103125ab call 0x1031100a */
  push32(0x103125b0u); f_1031100a();
  /* 103125b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103125b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103125b7 jne 0x103125ce */
  if (!C.zf) goto L_103125ce;
  /* 103125b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103125bd jne 0x103125ce */
  if (!C.zf) goto L_103125ce;
  /* 103125bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103125c2 push eax */
  push32((uint32_t)(EAX));
  /* 103125c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103125c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103125c8 push ecx */
  push32((uint32_t)(ECX));
  /* 103125c9 call 0x103123f0 */
  push32(0x103125ceu); f_103123f0();
L_103125ce:;
  /* 103125ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103125d2 je 0x103125da */
  if (C.zf) goto L_103125da;
  /* 103125d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103125d8 jne 0x1031261a */
  if (!C.zf) goto L_1031261a;
L_103125da:;
  /* 103125da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103125dd push edx */
  push32((uint32_t)(EDX));
  /* 103125de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103125e1 push eax */
  push32((uint32_t)(EAX));
  /* 103125e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103125e5 push ecx */
  push32((uint32_t)(ECX));
  /* 103125e6 call 0x103123f0 */
  push32(0x103125ebu); f_103123f0();
  /* 103125eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103125ed jne 0x103125f6 */
  if (!C.zf) goto L_103125f6;
  /* 103125ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103125f6:;
  /* 103125f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103125fa je 0x1031261a */
  if (C.zf) goto L_1031261a;
  /* 103125fc cmp dword ptr [0x1034101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1034101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312603 je 0x1031261a */
  if (C.zf) goto L_1031261a;
  /* 10312605 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312608 push edx */
  push32((uint32_t)(EDX));
  /* 10312609 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031260c push eax */
  push32((uint32_t)(EAX));
  /* 1031260d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312610 push ecx */
  push32((uint32_t)(ECX));
  /* 10312611 call dword ptr [0x1034101c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034101c))), 0x10312617u);
  /* 10312617 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031261a:;
  /* 1031261a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031261d:;
  /* 1031261d mov esp, ebp */
  ESP = (EBP);
  /* 1031261f pop ebp */
  EBP = (pop32());
  /* 10312620 ret 0xc */
  ESPCHK(0x10312530u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10312630 (58 bytes, 18 insns) */
void f_10312630(void) {
  FTRACE(0x10312630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312630 push ebp */
  push32((uint32_t)(EBP));
  /* 10312631 mov ebp, esp */
  EBP = (ESP);
  /* 10312633 cmp dword ptr [0x1033f4a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031263a je 0x1031264e */
  if (C.zf) goto L_1031264e;
  /* 1031263c cmp dword ptr [0x1033f4a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312643 jne 0x10312653 */
  if (!C.zf) goto L_10312653;
  /* 10312645 cmp dword ptr [0x1033f4ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031264c jne 0x10312653 */
  if (!C.zf) goto L_10312653;
L_1031264e:;
  /* 1031264e call 0x10315fa0 */
  push32(0x10312653u); f_10315fa0();
L_10312653:;
  /* 10312653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312656 push eax */
  push32((uint32_t)(EAX));
  /* 10312657 call 0x10315ff0 */
  push32(0x1031265cu); f_10315ff0();
  /* 1031265c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031265f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10312664 call dword ptr [0x1033da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033da30))), 0x1031266au);
  /* 1031266a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031266d pop ebp */
  EBP = (pop32());
  /* 1031266e ret  */
  ESPCHK(0x10312630u, _esp0);
  ESP += 4; return;
}

/* FUN_10002670 @ 0x10312670 (11 bytes, 5 insns) */
void f_10312670(void) {
  FTRACE(0x10312670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312670 push ebp */
  push32((uint32_t)(EBP));
  /* 10312671 mov ebp, esp */
  EBP = (ESP);
  /* 10312673 call dword ptr [0x103422b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b4))), 0x10312679u);
  /* 10312679 pop ebp */
  EBP = (pop32());
  /* 1031267a ret  */
  ESPCHK(0x10312670u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x10312680 (87 bytes, 30 insns) */
void f_10312680(void) {
  FTRACE(0x10312680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312680 push ebp */
  push32((uint32_t)(EBP));
  /* 10312681 mov ebp, esp */
  EBP = (ESP);
  /* 10312683 push ecx */
  push32((uint32_t)(ECX));
  /* 10312684 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312688 jl 0x10312690 */
  if ((C.sf!=C.of)) goto L_10312690;
  /* 1031268a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031268e jl 0x10312695 */
  if ((C.sf!=C.of)) goto L_10312695;
L_10312690:;
  /* 10312690 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10312693 jmp 0x103126d3 */
  goto L_103126d3;
L_10312695:;
  /* 10312695 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312699 jne 0x103126a7 */
  if (!C.zf) goto L_103126a7;
  /* 1031269b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031269e mov eax, dword ptr [eax*4 + 0x1033da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1033da38)));
  /* 103126a5 jmp 0x103126d3 */
  goto L_103126d3;
L_103126a7:;
  /* 103126a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103126aa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 103126ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103126af je 0x103126b6 */
  if (C.zf) goto L_103126b6;
  /* 103126b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103126b4 jmp 0x103126d3 */
  goto L_103126d3;
L_103126b6:;
  /* 103126b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103126b9 mov eax, dword ptr [edx*4 + 0x1033da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033da38)));
  /* 103126c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103126c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103126c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103126c9 mov dword ptr [ecx*4 + 0x1033da38], edx */
  w32((uint32_t)(ECX*4 + 0x1033da38), (EDX));
  /* 103126d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103126d3:;
  /* 103126d3 mov esp, ebp */
  ESP = (EBP);
  /* 103126d5 pop ebp */
  EBP = (pop32());
  /* 103126d6 ret  */
  ESPCHK(0x10312680u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x103126e0 (126 bytes, 38 insns) */
void f_103126e0(void) {
  FTRACE(0x103126e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103126e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103126e1 mov ebp, esp */
  EBP = (ESP);
  /* 103126e3 push ecx */
  push32((uint32_t)(ECX));
  /* 103126e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103126e8 jl 0x103126f0 */
  if ((C.sf!=C.of)) goto L_103126f0;
  /* 103126ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103126ee jl 0x103126f7 */
  if ((C.sf!=C.of)) goto L_103126f7;
L_103126f0:;
  /* 103126f0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 103126f5 jmp 0x1031275a */
  goto L_1031275a;
L_103126f7:;
  /* 103126f7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103126fb jne 0x10312709 */
  if (!C.zf) goto L_10312709;
  /* 103126fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312700 mov eax, dword ptr [eax*4 + 0x1033da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1033da44)));
  /* 10312707 jmp 0x1031275a */
  goto L_1031275a;
L_10312709:;
  /* 10312709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031270c mov edx, dword ptr [ecx*4 + 0x1033da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da44)));
  /* 10312713 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10312716 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031271a jne 0x10312730 */
  if (!C.zf) goto L_10312730;
  /* 1031271c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1031271e call dword ptr [0x103422b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b8))), 0x10312724u);
  /* 10312724 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312727 mov dword ptr [ecx*4 + 0x1033da44], eax */
  w32((uint32_t)(ECX*4 + 0x1033da44), (EAX));
  /* 1031272e jmp 0x10312757 */
  goto L_10312757;
L_10312730:;
  /* 10312730 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312734 jne 0x1031274a */
  if (!C.zf) goto L_1031274a;
  /* 10312736 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10312738 call dword ptr [0x103422b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b8))), 0x1031273eu);
  /* 1031273e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312741 mov dword ptr [edx*4 + 0x1033da44], eax */
  w32((uint32_t)(EDX*4 + 0x1033da44), (EAX));
  /* 10312748 jmp 0x10312757 */
  goto L_10312757;
L_1031274a:;
  /* 1031274a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031274d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10312750 mov dword ptr [eax*4 + 0x1033da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1033da44), (ECX));
L_10312757:;
  /* 10312757 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031275a:;
  /* 1031275a mov esp, ebp */
  ESP = (EBP);
  /* 1031275c pop ebp */
  EBP = (pop32());
  /* 1031275d ret  */
  ESPCHK(0x103126e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002760 @ 0x10312760 (28 bytes, 11 insns) */
void f_10312760(void) {
  FTRACE(0x10312760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312760 push ebp */
  push32((uint32_t)(EBP));
  /* 10312761 mov ebp, esp */
  EBP = (ESP);
  /* 10312763 push ecx */
  push32((uint32_t)(ECX));
  /* 10312764 mov eax, dword ptr [0x10341000] */
  EAX = (r32((uint32_t)(0x10341000)));
  /* 10312769 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031276c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031276f mov dword ptr [0x10341000], ecx */
  w32((uint32_t)(0x10341000), (ECX));
  /* 10312775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312778 mov esp, ebp */
  ESP = (EBP);
  /* 1031277a pop ebp */
  EBP = (pop32());
  /* 1031277b ret  */
  ESPCHK(0x10312760u, _esp0);
  ESP += 4; return;
}

/* FUN_10002780 @ 0x10312780 (912 bytes, 248 insns) */
void f_10312780(void) {
  FTRACE(0x10312780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312780 push ebp */
  push32((uint32_t)(EBP));
  /* 10312781 mov ebp, esp */
  EBP = (ESP);
  /* 10312783 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10312788 call 0x10316860 */
  push32(0x1031278du); f_10316860();
  /* 1031278d push edi */
  push32((uint32_t)(EDI));
  /* 1031278e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10312795 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1031279a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031279c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 103127a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103127a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103127a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103127a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 103127ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103127b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103127b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 103127bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103127bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103127bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103127c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 103127c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 103127cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103127ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 103127d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 103127d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 103127d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 103127d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 103127dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 103127e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103127e6 jl 0x103127ee */
  if ((C.sf!=C.of)) goto L_103127ee;
  /* 103127e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103127ec jl 0x103127f6 */
  if ((C.sf!=C.of)) goto L_103127f6;
L_103127ee:;
  /* 103127ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103127f1 jmp 0x10312b0b */
  goto L_10312b0b;
L_103127f6:;
  /* 103127f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103127fa jne 0x103128a0 */
  if (!C.zf) goto L_103128a0;
  /* 10312800 push 0x1033da34 */
  push32((uint32_t)(0x1033da34u));
  /* 10312805 call dword ptr [0x103422d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d0))), 0x1031280bu);
  /* 1031280b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031280d jle 0x103128a0 */
  if ((C.zf||C.sf!=C.of)) goto L_103128a0;
  /* 10312813 cmp dword ptr [0x1033f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031281a jne 0x1031285e */
  if (!C.zf) goto L_1031285e;
  /* 1031281c push 0x1033a28c */
  push32((uint32_t)(0x1033a28cu));
  /* 10312821 call dword ptr [0x103422cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422cc))), 0x10312827u);
  /* 10312827 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1031282d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312834 je 0x10312856 */
  if (C.zf) goto L_10312856;
  /* 10312836 push 0x1033a280 */
  push32((uint32_t)(0x1033a280u));
  /* 1031283b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10312841 push ecx */
  push32((uint32_t)(ECX));
  /* 10312842 call dword ptr [0x103422c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c8))), 0x10312848u);
  /* 10312848 mov dword ptr [0x1033f4b0], eax */
  w32((uint32_t)(0x1033f4b0), (EAX));
  /* 1031284d cmp dword ptr [0x1033f4b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312854 jne 0x1031285e */
  if (!C.zf) goto L_1031285e;
L_10312856:;
  /* 10312856 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10312859 jmp 0x10312b0b */
  goto L_10312b0b;
L_1031285e:;
  /* 1031285e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312861 push edx */
  push32((uint32_t)(EDX));
  /* 10312862 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10312865 push eax */
  push32((uint32_t)(EAX));
  /* 10312866 push 0x1033a24c */
  push32((uint32_t)(0x1033a24cu));
  /* 1031286b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10312871 push ecx */
  push32((uint32_t)(ECX));
  /* 10312872 call dword ptr [0x1033f4b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f4b0))), 0x10312878u);
  /* 10312878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031287b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10312881 push edx */
  push32((uint32_t)(EDX));
  /* 10312882 call dword ptr [0x103422c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c4))), 0x10312888u);
  /* 10312888 push 0x1033da34 */
  push32((uint32_t)(0x1033da34u));
  /* 1031288d call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10312893u);
  /* 10312893 call 0x10312670 */
  push32(0x10312898u); f_10312670();
  /* 10312898 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031289b jmp 0x10312b0b */
  goto L_10312b0b;
L_103128a0:;
  /* 103128a0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103128a4 je 0x103128dd */
  if (C.zf) goto L_103128dd;
  /* 103128a6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 103128ac push eax */
  push32((uint32_t)(EAX));
  /* 103128ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103128b0 push ecx */
  push32((uint32_t)(ECX));
  /* 103128b1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 103128b6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 103128bc push edx */
  push32((uint32_t)(EDX));
  /* 103128bd call 0x10316760 */
  push32(0x103128c2u); f_10316760();
  /* 103128c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103128c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103128c7 jge 0x103128dd */
  if ((C.sf==C.of)) goto L_103128dd;
  /* 103128c9 push 0x1033a220 */
  push32((uint32_t)(0x1033a220u));
  /* 103128ce lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 103128d4 push eax */
  push32((uint32_t)(EAX));
  /* 103128d5 call 0x10316670 */
  push32(0x103128dau); f_10316670();
  /* 103128da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103128dd:;
  /* 103128dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103128e1 jne 0x10312915 */
  if (!C.zf) goto L_10312915;
  /* 103128e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103128e7 je 0x103128f5 */
  if (C.zf) goto L_103128f5;
  /* 103128e9 mov dword ptr [ebp - 0x3028], 0x1033a20c */
  w32((uint32_t)(EBP + -0x3028), (0x1033a20cu));
  /* 103128f3 jmp 0x103128ff */
  goto L_103128ff;
L_103128f5:;
  /* 103128f5 mov dword ptr [ebp - 0x3028], 0x1033a1f8 */
  w32((uint32_t)(EBP + -0x3028), (0x1033a1f8u));
L_103128ff:;
  /* 103128ff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10312905 push ecx */
  push32((uint32_t)(ECX));
  /* 10312906 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1031290c push edx */
  push32((uint32_t)(EDX));
  /* 1031290d call 0x10316670 */
  push32(0x10312912u); f_10316670();
  /* 10312912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312915:;
  /* 10312915 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1031291b push eax */
  push32((uint32_t)(EAX));
  /* 1031291c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10312922 push ecx */
  push32((uint32_t)(ECX));
  /* 10312923 call 0x10316680 */
  push32(0x10312928u); f_10316680();
  /* 10312928 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031292b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031292f jne 0x1031296a */
  if (!C.zf) goto L_1031296a;
  /* 10312931 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312934 mov eax, dword ptr [edx*4 + 0x1033da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033da38)));
  /* 1031293b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1031293e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312940 je 0x10312956 */
  if (C.zf) goto L_10312956;
  /* 10312942 push 0x1033a1f4 */
  push32((uint32_t)(0x1033a1f4u));
  /* 10312947 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1031294d push ecx */
  push32((uint32_t)(ECX));
  /* 1031294e call 0x10316680 */
  push32(0x10312953u); f_10316680();
  /* 10312953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312956:;
  /* 10312956 push 0x1033a1f0 */
  push32((uint32_t)(0x1033a1f0u));
  /* 1031295b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10312961 push edx */
  push32((uint32_t)(EDX));
  /* 10312962 call 0x10316680 */
  push32(0x10312967u); f_10316680();
  /* 10312967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031296a:;
  /* 1031296a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031296e je 0x103129b2 */
  if (C.zf) goto L_103129b2;
  /* 10312970 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10312976 push eax */
  push32((uint32_t)(EAX));
  /* 10312977 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031297a push ecx */
  push32((uint32_t)(ECX));
  /* 1031297b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031297e push edx */
  push32((uint32_t)(EDX));
  /* 1031297f push 0x1033a1e4 */
  push32((uint32_t)(0x1033a1e4u));
  /* 10312984 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10312989 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1031298f push eax */
  push32((uint32_t)(EAX));
  /* 10312990 call 0x10316570 */
  push32(0x10312995u); f_10316570();
  /* 10312995 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031299a jge 0x103129b0 */
  if ((C.sf==C.of)) goto L_103129b0;
  /* 1031299c push 0x1033a220 */
  push32((uint32_t)(0x1033a220u));
  /* 103129a1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 103129a7 push ecx */
  push32((uint32_t)(ECX));
  /* 103129a8 call 0x10316670 */
  push32(0x103129adu); f_10316670();
  /* 103129ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103129b0:;
  /* 103129b0 jmp 0x103129c8 */
  goto L_103129c8;
L_103129b2:;
  /* 103129b2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 103129b8 push edx */
  push32((uint32_t)(EDX));
  /* 103129b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 103129bf push eax */
  push32((uint32_t)(EAX));
  /* 103129c0 call 0x10316670 */
  push32(0x103129c5u); f_10316670();
  /* 103129c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103129c8:;
  /* 103129c8 cmp dword ptr [0x10341000], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10341000))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103129cf je 0x10312a0c */
  if (C.zf) goto L_10312a0c;
  /* 103129d1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 103129d7 push ecx */
  push32((uint32_t)(ECX));
  /* 103129d8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 103129de push edx */
  push32((uint32_t)(EDX));
  /* 103129df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103129e2 push eax */
  push32((uint32_t)(EAX));
  /* 103129e3 call dword ptr [0x10341000] */
  call_ind((uint32_t)(r32((uint32_t)(0x10341000))), 0x103129e9u);
  /* 103129e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103129ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103129ee je 0x10312a0c */
  if (C.zf) goto L_10312a0c;
  /* 103129f0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103129f4 jne 0x10312a01 */
  if (!C.zf) goto L_10312a01;
  /* 103129f6 push 0x1033da34 */
  push32((uint32_t)(0x1033da34u));
  /* 103129fb call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10312a01u);
L_10312a01:;
  /* 10312a01 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10312a07 jmp 0x10312b0b */
  goto L_10312b0b;
L_10312a0c:;
  /* 10312a0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312a0f mov edx, dword ptr [ecx*4 + 0x1033da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da38)));
  /* 10312a16 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10312a19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10312a1b je 0x10312a5b */
  if (C.zf) goto L_10312a5b;
  /* 10312a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312a20 cmp dword ptr [eax*4 + 0x1033da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1033da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312a28 je 0x10312a5b */
  if (C.zf) goto L_10312a5b;
  /* 10312a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10312a2c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10312a32 push ecx */
  push32((uint32_t)(ECX));
  /* 10312a33 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10312a39 push edx */
  push32((uint32_t)(EDX));
  /* 10312a3a call 0x103164f0 */
  push32(0x10312a3fu); f_103164f0();
  /* 10312a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312a42 push eax */
  push32((uint32_t)(EAX));
  /* 10312a43 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10312a49 push eax */
  push32((uint32_t)(EAX));
  /* 10312a4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312a4d mov edx, dword ptr [ecx*4 + 0x1033da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da44)));
  /* 10312a54 push edx */
  push32((uint32_t)(EDX));
  /* 10312a55 call dword ptr [0x103422bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422bc))), 0x10312a5bu);
L_10312a5b:;
  /* 10312a5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312a5e mov ecx, dword ptr [eax*4 + 0x1033da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033da38)));
  /* 10312a65 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10312a68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10312a6a je 0x10312a79 */
  if (C.zf) goto L_10312a79;
  /* 10312a6c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10312a72 push edx */
  push32((uint32_t)(EDX));
  /* 10312a73 call dword ptr [0x103422c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c4))), 0x10312a79u);
L_10312a79:;
  /* 10312a79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312a7c mov ecx, dword ptr [eax*4 + 0x1033da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033da38)));
  /* 10312a83 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10312a86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10312a88 je 0x10312af8 */
  if (C.zf) goto L_10312af8;
  /* 10312a8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312a8e je 0x10312aad */
  if (C.zf) goto L_10312aad;
  /* 10312a90 push 0xa */
  push32((uint32_t)(0xau));
  /* 10312a92 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10312a98 push edx */
  push32((uint32_t)(EDX));
  /* 10312a99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312a9c push eax */
  push32((uint32_t)(EAX));
  /* 10312a9d call 0x10316200 */
  push32(0x10312aa2u); f_10316200();
  /* 10312aa2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312aa5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10312aab jmp 0x10312ab7 */
  goto L_10312ab7;
L_10312aad:;
  /* 10312aad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10312ab7:;
  /* 10312ab7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10312abd push ecx */
  push32((uint32_t)(ECX));
  /* 10312abe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10312ac1 push edx */
  push32((uint32_t)(EDX));
  /* 10312ac2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10312ac8 push eax */
  push32((uint32_t)(EAX));
  /* 10312ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10312acc push ecx */
  push32((uint32_t)(ECX));
  /* 10312acd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312ad0 push edx */
  push32((uint32_t)(EDX));
  /* 10312ad1 call 0x10312b10 */
  push32(0x10312ad6u); f_10312b10();
  /* 10312ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312ad9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10312adf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312ae3 jne 0x10312af0 */
  if (!C.zf) goto L_10312af0;
  /* 10312ae5 push 0x1033da34 */
  push32((uint32_t)(0x1033da34u));
  /* 10312aea call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10312af0u);
L_10312af0:;
  /* 10312af0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10312af6 jmp 0x10312b0b */
  goto L_10312b0b;
L_10312af8:;
  /* 10312af8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312afc jne 0x10312b09 */
  if (!C.zf) goto L_10312b09;
  /* 10312afe push 0x1033da34 */
  push32((uint32_t)(0x1033da34u));
  /* 10312b03 call dword ptr [0x103422c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c0))), 0x10312b09u);
L_10312b09:;
  /* 10312b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10312b0b:;
  /* 10312b0b pop edi */
  EDI = (pop32());
  /* 10312b0c mov esp, ebp */
  ESP = (EBP);
  /* 10312b0e pop ebp */
  EBP = (pop32());
  /* 10312b0f ret  */
  ESPCHK(0x10312780u, _esp0);
  ESP += 4; return;
}

/* FUN_10002b10 @ 0x10312b10 (780 bytes, 197 insns) */
void f_10312b10(void) {
  FTRACE(0x10312b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10312b11 mov ebp, esp */
  EBP = (ESP);
  /* 10312b13 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10312b18 call 0x10316860 */
  push32(0x10312b1du); f_10316860();
L_10312b1d:;
  /* 10312b1d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312b21 jne 0x10312b48 */
  if (!C.zf) goto L_10312b48;
  /* 10312b23 push 0x1033a3dc */
  push32((uint32_t)(0x1033a3dcu));
  /* 10312b28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312b2a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10312b2f push 0x1033a3d0 */
  push32((uint32_t)(0x1033a3d0u));
  /* 10312b34 push 2 */
  push32((uint32_t)(0x2u));
  /* 10312b36 call 0x10312780 */
  push32(0x10312b3bu); f_10312780();
  /* 10312b3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312b3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312b41 jne 0x10312b48 */
  if (!C.zf) goto L_10312b48;
  /* 10312b43 call 0x10312670 */
  push32(0x10312b48u); f_10312670();
L_10312b48:;
  /* 10312b48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10312b4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312b4c jne 0x10312b1d */
  if (!C.zf) goto L_10312b1d;
  /* 10312b4e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10312b53 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10312b59 push ecx */
  push32((uint32_t)(ECX));
  /* 10312b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10312b5c call dword ptr [0x103422d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d4))), 0x10312b62u);
  /* 10312b62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312b64 jne 0x10312b7a */
  if (!C.zf) goto L_10312b7a;
  /* 10312b66 push 0x1033a3b8 */
  push32((uint32_t)(0x1033a3b8u));
  /* 10312b6b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10312b71 push edx */
  push32((uint32_t)(EDX));
  /* 10312b72 call 0x10316670 */
  push32(0x10312b77u); f_10316670();
  /* 10312b77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312b7a:;
  /* 10312b7a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10312b80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10312b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312b86 push ecx */
  push32((uint32_t)(ECX));
  /* 10312b87 call 0x103164f0 */
  push32(0x10312b8cu); f_103164f0();
  /* 10312b8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312b8f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312b92 jbe 0x10312bbd */
  if ((C.cf||C.zf)) goto L_10312bbd;
  /* 10312b94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312b97 push edx */
  push32((uint32_t)(EDX));
  /* 10312b98 call 0x103164f0 */
  push32(0x10312b9du); f_103164f0();
  /* 10312b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312ba0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312ba3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10312ba7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10312baa push 3 */
  push32((uint32_t)(0x3u));
  /* 10312bac push 0x1033a3b4 */
  push32((uint32_t)(0x1033a3b4u));
  /* 10312bb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10312bb5 call 0x10316ee0 */
  push32(0x10312bbau); f_10316ee0();
  /* 10312bba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312bbd:;
  /* 10312bbd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10312bc0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10312bc6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312bcd je 0x10312c18 */
  if (C.zf) goto L_10312c18;
  /* 10312bcf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10312bd5 push edx */
  push32((uint32_t)(EDX));
  /* 10312bd6 call 0x103164f0 */
  push32(0x10312bdbu); f_103164f0();
  /* 10312bdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312bde cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312be1 jbe 0x10312c18 */
  if ((C.cf||C.zf)) goto L_10312c18;
  /* 10312be3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10312be9 push eax */
  push32((uint32_t)(EAX));
  /* 10312bea call 0x103164f0 */
  push32(0x10312befu); f_103164f0();
  /* 10312bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312bf2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10312bf8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10312bfc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10312c02 push 3 */
  push32((uint32_t)(0x3u));
  /* 10312c04 push 0x1033a3b4 */
  push32((uint32_t)(0x1033a3b4u));
  /* 10312c09 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10312c0f push eax */
  push32((uint32_t)(EAX));
  /* 10312c10 call 0x10316ee0 */
  push32(0x10312c15u); f_10316ee0();
  /* 10312c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312c18:;
  /* 10312c18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312c1c jne 0x10312c2a */
  if (!C.zf) goto L_10312c2a;
  /* 10312c1e mov dword ptr [ebp - 0x1114], 0x1033a340 */
  w32((uint32_t)(EBP + -0x1114), (0x1033a340u));
  /* 10312c28 jmp 0x10312c34 */
  goto L_10312c34;
L_10312c2a:;
  /* 10312c2a mov dword ptr [ebp - 0x1114], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1114), (0x1033a0e0u));
L_10312c34:;
  /* 10312c34 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10312c37 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10312c3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10312c3c je 0x10312c49 */
  if (C.zf) goto L_10312c49;
  /* 10312c3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10312c41 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10312c47 jmp 0x10312c53 */
  goto L_10312c53;
L_10312c49:;
  /* 10312c49 mov dword ptr [ebp - 0x1118], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1118), (0x1033a0e0u));
L_10312c53:;
  /* 10312c53 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10312c56 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10312c59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10312c5b je 0x10312c6f */
  if (C.zf) goto L_10312c6f;
  /* 10312c5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312c61 jne 0x10312c6f */
  if (!C.zf) goto L_10312c6f;
  /* 10312c63 mov dword ptr [ebp - 0x111c], 0x1033a330 */
  w32((uint32_t)(EBP + -0x111c), (0x1033a330u));
  /* 10312c6d jmp 0x10312c79 */
  goto L_10312c79;
L_10312c6f:;
  /* 10312c6f mov dword ptr [ebp - 0x111c], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x111c), (0x1033a0e0u));
L_10312c79:;
  /* 10312c79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10312c7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10312c7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10312c81 je 0x10312c8f */
  if (C.zf) goto L_10312c8f;
  /* 10312c83 mov dword ptr [ebp - 0x1120], 0x1033a32c */
  w32((uint32_t)(EBP + -0x1120), (0x1033a32cu));
  /* 10312c8d jmp 0x10312c99 */
  goto L_10312c99;
L_10312c8f:;
  /* 10312c8f mov dword ptr [ebp - 0x1120], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1120), (0x1033a0e0u));
L_10312c99:;
  /* 10312c99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312c9d je 0x10312caa */
  if (C.zf) goto L_10312caa;
  /* 10312c9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10312ca2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10312ca8 jmp 0x10312cb4 */
  goto L_10312cb4;
L_10312caa:;
  /* 10312caa mov dword ptr [ebp - 0x1124], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1124), (0x1033a0e0u));
L_10312cb4:;
  /* 10312cb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312cb8 je 0x10312cc6 */
  if (C.zf) goto L_10312cc6;
  /* 10312cba mov dword ptr [ebp - 0x1128], 0x1033a324 */
  w32((uint32_t)(EBP + -0x1128), (0x1033a324u));
  /* 10312cc4 jmp 0x10312cd0 */
  goto L_10312cd0;
L_10312cc6:;
  /* 10312cc6 mov dword ptr [ebp - 0x1128], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1128), (0x1033a0e0u));
L_10312cd0:;
  /* 10312cd0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312cd4 je 0x10312ce1 */
  if (C.zf) goto L_10312ce1;
  /* 10312cd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10312cd9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10312cdf jmp 0x10312ceb */
  goto L_10312ceb;
L_10312ce1:;
  /* 10312ce1 mov dword ptr [ebp - 0x112c], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x112c), (0x1033a0e0u));
L_10312ceb:;
  /* 10312ceb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312cef je 0x10312cfd */
  if (C.zf) goto L_10312cfd;
  /* 10312cf1 mov dword ptr [ebp - 0x1130], 0x1033a31c */
  w32((uint32_t)(EBP + -0x1130), (0x1033a31cu));
  /* 10312cfb jmp 0x10312d07 */
  goto L_10312d07;
L_10312cfd:;
  /* 10312cfd mov dword ptr [ebp - 0x1130], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1130), (0x1033a0e0u));
L_10312d07:;
  /* 10312d07 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312d0e je 0x10312d1e */
  if (C.zf) goto L_10312d1e;
  /* 10312d10 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10312d16 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10312d1c jmp 0x10312d28 */
  goto L_10312d28;
L_10312d1e:;
  /* 10312d1e mov dword ptr [ebp - 0x1134], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1134), (0x1033a0e0u));
L_10312d28:;
  /* 10312d28 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312d2f je 0x10312d3d */
  if (C.zf) goto L_10312d3d;
  /* 10312d31 mov dword ptr [ebp - 0x1138], 0x1033a310 */
  w32((uint32_t)(EBP + -0x1138), (0x1033a310u));
  /* 10312d3b jmp 0x10312d47 */
  goto L_10312d47;
L_10312d3d:;
  /* 10312d3d mov dword ptr [ebp - 0x1138], 0x1033a0e0 */
  w32((uint32_t)(EBP + -0x1138), (0x1033a0e0u));
L_10312d47:;
  /* 10312d47 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10312d4d push edx */
  push32((uint32_t)(EDX));
  /* 10312d4e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10312d54 push eax */
  push32((uint32_t)(EAX));
  /* 10312d55 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10312d5b push ecx */
  push32((uint32_t)(ECX));
  /* 10312d5c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10312d62 push edx */
  push32((uint32_t)(EDX));
  /* 10312d63 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10312d69 push eax */
  push32((uint32_t)(EAX));
  /* 10312d6a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10312d70 push ecx */
  push32((uint32_t)(ECX));
  /* 10312d71 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10312d77 push edx */
  push32((uint32_t)(EDX));
  /* 10312d78 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10312d7e push eax */
  push32((uint32_t)(EAX));
  /* 10312d7f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10312d85 push ecx */
  push32((uint32_t)(ECX));
  /* 10312d86 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10312d8c push edx */
  push32((uint32_t)(EDX));
  /* 10312d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312d90 push eax */
  push32((uint32_t)(EAX));
  /* 10312d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312d94 mov edx, dword ptr [ecx*4 + 0x1033da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da50)));
  /* 10312d9b push edx */
  push32((uint32_t)(EDX));
  /* 10312d9c push 0x1033a2bc */
  push32((uint32_t)(0x1033a2bcu));
  /* 10312da1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10312da6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10312dac push eax */
  push32((uint32_t)(EAX));
  /* 10312dad call 0x10316570 */
  push32(0x10312db2u); f_10316570();
  /* 10312db2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312db5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312db7 jge 0x10312dcd */
  if ((C.sf==C.of)) goto L_10312dcd;
  /* 10312db9 push 0x1033a220 */
  push32((uint32_t)(0x1033a220u));
  /* 10312dbe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10312dc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10312dc5 call 0x10316670 */
  push32(0x10312dcau); f_10316670();
  /* 10312dca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312dcd:;
  /* 10312dcd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10312dd2 push 0x1033a298 */
  push32((uint32_t)(0x1033a298u));
  /* 10312dd7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10312ddd push edx */
  push32((uint32_t)(EDX));
  /* 10312dde call 0x10316e20 */
  push32(0x10312de3u); f_10316e20();
  /* 10312de3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312de6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10312dec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312df3 jne 0x10312e06 */
  if (!C.zf) goto L_10312e06;
  /* 10312df5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10312df7 call 0x10316b60 */
  push32(0x10312dfcu); f_10316b60();
  /* 10312dfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312dff push 3 */
  push32((uint32_t)(0x3u));
  /* 10312e01 call 0x10312e80 */
  push32(0x10312e06u); f_10312e80();
L_10312e06:;
  /* 10312e06 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312e0d jne 0x10312e16 */
  if (!C.zf) goto L_10312e16;
  /* 10312e0f mov eax, 1 */
  EAX = (0x1u);
  /* 10312e14 jmp 0x10312e18 */
  goto L_10312e18;
L_10312e16:;
  /* 10312e16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10312e18:;
  /* 10312e18 mov esp, ebp */
  ESP = (EBP);
  /* 10312e1a pop ebp */
  EBP = (pop32());
  /* 10312e1b ret  */
  ESPCHK(0x10312b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e20 @ 0x10312e20 (56 bytes, 15 insns) */
void f_10312e20(void) {
  FTRACE(0x10312e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10312e21 mov ebp, esp */
  EBP = (ESP);
  /* 10312e23 cmp dword ptr [0x10340ffc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ffc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312e2a je 0x10312e32 */
  if (C.zf) goto L_10312e32;
  /* 10312e2c call dword ptr [0x10340ffc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10340ffc))), 0x10312e32u);
L_10312e32:;
  /* 10312e32 push 0x1033d418 */
  push32((uint32_t)(0x1033d418u));
  /* 10312e37 push 0x1033d208 */
  push32((uint32_t)(0x1033d208u));
  /* 10312e3c call 0x10312ff0 */
  push32(0x10312e41u); f_10312ff0();
  /* 10312e41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312e44 push 0x1033d104 */
  push32((uint32_t)(0x1033d104u));
  /* 10312e49 push 0x1033d000 */
  push32((uint32_t)(0x1033d000u));
  /* 10312e4e call 0x10312ff0 */
  push32(0x10312e53u); f_10312ff0();
  /* 10312e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312e56 pop ebp */
  EBP = (pop32());
  /* 10312e57 ret  */
  ESPCHK(0x10312e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e60 @ 0x10312e60 (21 bytes, 10 insns) */
void f_10312e60(void) {
  FTRACE(0x10312e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10312e61 mov ebp, esp */
  EBP = (ESP);
  /* 10312e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312e67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312e6a push eax */
  push32((uint32_t)(EAX));
  /* 10312e6b call 0x10312ee0 */
  push32(0x10312e70u); f_10312ee0();
  /* 10312e70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312e73 pop ebp */
  EBP = (pop32());
  /* 10312e74 ret  */
  ESPCHK(0x10312e60u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10312e80 (21 bytes, 10 insns) */
void f_10312e80(void) {
  FTRACE(0x10312e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10312e81 mov ebp, esp */
  EBP = (ESP);
  /* 10312e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10312e87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312e8a push eax */
  push32((uint32_t)(EAX));
  /* 10312e8b call 0x10312ee0 */
  push32(0x10312e90u); f_10312ee0();
  /* 10312e90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312e93 pop ebp */
  EBP = (pop32());
  /* 10312e94 ret  */
  ESPCHK(0x10312e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ea0 @ 0x10312ea0 (19 bytes, 9 insns) */
void f_10312ea0(void) {
  FTRACE(0x10312ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10312ea3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10312ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312ea9 call 0x10312ee0 */
  push32(0x10312eaeu); f_10312ee0();
  /* 10312eae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312eb1 pop ebp */
  EBP = (pop32());
  /* 10312eb2 ret  */
  ESPCHK(0x10312ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ec0 @ 0x10312ec0 (19 bytes, 9 insns) */
void f_10312ec0(void) {
  FTRACE(0x10312ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10312ec3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10312ec5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10312ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10312ec9 call 0x10312ee0 */
  push32(0x10312eceu); f_10312ee0();
  /* 10312ece add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312ed1 pop ebp */
  EBP = (pop32());
  /* 10312ed2 ret  */
  ESPCHK(0x10312ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ee0 @ 0x10312ee0 (227 bytes, 61 insns) */
void f_10312ee0(void) {
  FTRACE(0x10312ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10312ee3 push ecx */
  push32((uint32_t)(ECX));
  /* 10312ee4 call 0x10312fd0 */
  push32(0x10312ee9u); f_10312fd0();
  /* 10312ee9 cmp dword ptr [0x1033f4f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312ef0 jne 0x10312f03 */
  if (!C.zf) goto L_10312f03;
  /* 10312ef2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312ef5 push eax */
  push32((uint32_t)(EAX));
  /* 10312ef6 call dword ptr [0x103422e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e0))), 0x10312efcu);
  /* 10312efc push eax */
  push32((uint32_t)(EAX));
  /* 10312efd call dword ptr [0x103422dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422dc))), 0x10312f03u);
L_10312f03:;
  /* 10312f03 mov dword ptr [0x1033f4f0], 1 */
  w32((uint32_t)(0x1033f4f0), (0x1u));
  /* 10312f0d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10312f10 mov byte ptr [0x1033f4ec], cl */
  w8((uint32_t)(0x1033f4ec), (CL));
  /* 10312f16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312f1a jne 0x10312f63 */
  if (!C.zf) goto L_10312f63;
  /* 10312f1c cmp dword ptr [0x10340ff8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ff8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312f23 je 0x10312f51 */
  if (C.zf) goto L_10312f51;
  /* 10312f25 mov edx, dword ptr [0x10340ff4] */
  EDX = (r32((uint32_t)(0x10340ff4)));
  /* 10312f2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10312f2e:;
  /* 10312f2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312f31 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10312f34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10312f37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312f3a cmp ecx, dword ptr [0x10340ff8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10340ff8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312f40 jb 0x10312f51 */
  if (C.cf) goto L_10312f51;
  /* 10312f42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312f45 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312f48 je 0x10312f4f */
  if (C.zf) goto L_10312f4f;
  /* 10312f4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10312f4d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10312f4fu);
L_10312f4f:;
  /* 10312f4f jmp 0x10312f2e */
  goto L_10312f2e;
L_10312f51:;
  /* 10312f51 push 0x1033d724 */
  push32((uint32_t)(0x1033d724u));
  /* 10312f56 push 0x1033d51c */
  push32((uint32_t)(0x1033d51cu));
  /* 10312f5b call 0x10312ff0 */
  push32(0x10312f60u); f_10312ff0();
  /* 10312f60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10312f63:;
  /* 10312f63 push 0x1033d92c */
  push32((uint32_t)(0x1033d92cu));
  /* 10312f68 push 0x1033d828 */
  push32((uint32_t)(0x1033d828u));
  /* 10312f6d call 0x10312ff0 */
  push32(0x10312f72u); f_10312ff0();
  /* 10312f72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312f75 cmp dword ptr [0x1033f4f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312f7c jne 0x10312f9e */
  if (!C.zf) goto L_10312f9e;
  /* 10312f7e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10312f80 call 0x10314bd0 */
  push32(0x10312f85u); f_10314bd0();
  /* 10312f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312f88 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10312f8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10312f8d je 0x10312f9e */
  if (C.zf) goto L_10312f9e;
  /* 10312f8f mov dword ptr [0x1033f4f8], 1 */
  w32((uint32_t)(0x1033f4f8), (0x1u));
  /* 10312f99 call 0x103154e0 */
  push32(0x10312f9eu); f_103154e0();
L_10312f9e:;
  /* 10312f9e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312fa2 je 0x10312fab */
  if (C.zf) goto L_10312fab;
  /* 10312fa4 call 0x10312fe0 */
  push32(0x10312fa9u); f_10312fe0();
  /* 10312fa9 jmp 0x10312fbf */
  goto L_10312fbf;
L_10312fab:;
  /* 10312fab mov dword ptr [0x1033f4f4], 1 */
  w32((uint32_t)(0x1033f4f4), (0x1u));
  /* 10312fb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 10312fb9 call dword ptr [0x103422d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d8))), 0x10312fbfu);
L_10312fbf:;
  /* 10312fbf mov esp, ebp */
  ESP = (EBP);
  /* 10312fc1 pop ebp */
  EBP = (pop32());
  /* 10312fc2 ret  */
  ESPCHK(0x10312ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x10312fd0 (15 bytes, 7 insns) */
void f_10312fd0(void) {
  FTRACE(0x10312fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10312fd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10312fd5 call 0x103170c0 */
  push32(0x10312fdau); f_103170c0();
  /* 10312fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312fdd pop ebp */
  EBP = (pop32());
  /* 10312fde ret  */
  ESPCHK(0x10312fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fe0 @ 0x10312fe0 (15 bytes, 7 insns) */
void f_10312fe0(void) {
  FTRACE(0x10312fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10312fe3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10312fe5 call 0x10317160 */
  push32(0x10312feau); f_10317160();
  /* 10312fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10312fed pop ebp */
  EBP = (pop32());
  /* 10312fee ret  */
  ESPCHK(0x10312fe0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10312ff0 (37 bytes, 16 insns) */
void f_10312ff0(void) {
  FTRACE(0x10312ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10312ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10312ff1 mov ebp, esp */
  EBP = (ESP);
L_10312ff3:;
  /* 10312ff3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312ff6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10312ff9 jae 0x10313013 */
  if (!C.cf) goto L_10313013;
  /* 10312ffb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10312ffe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313001 je 0x10313008 */
  if (C.zf) goto L_10313008;
  /* 10313003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313006 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10313008u);
L_10313008:;
  /* 10313008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031300b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031300e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10313011 jmp 0x10312ff3 */
  goto L_10312ff3;
L_10313013:;
  /* 10313013 pop ebp */
  EBP = (pop32());
  /* 10313014 ret  */
  ESPCHK(0x10312ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x10313020 (130 bytes, 42 insns) */
void f_10313020(void) {
  FTRACE(0x10313020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313020 push ebp */
  push32((uint32_t)(EBP));
  /* 10313021 mov ebp, esp */
  EBP = (ESP);
  /* 10313023 push ecx */
  push32((uint32_t)(ECX));
  /* 10313024 call 0x10316fe0 */
  push32(0x10313029u); f_10316fe0();
  /* 10313029 call dword ptr [0x103422ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422ec))), 0x1031302fu);
  /* 1031302f mov dword ptr [0x1033da5c], eax */
  w32((uint32_t)(0x1033da5c), (EAX));
  /* 10313034 cmp dword ptr [0x1033da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1033da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031303b jne 0x10313041 */
  if (!C.zf) goto L_10313041;
  /* 1031303d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031303f jmp 0x1031309e */
  goto L_1031309e;
L_10313041:;
  /* 10313041 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10313043 push 0x1033a3f4 */
  push32((uint32_t)(0x1033a3f4u));
  /* 10313048 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031304a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1031304c push 1 */
  push32((uint32_t)(0x1u));
  /* 1031304e call 0x10313ad0 */
  push32(0x10313053u); f_10313ad0();
  /* 10313053 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313056 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10313059 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031305d je 0x10313074 */
  if (C.zf) goto L_10313074;
  /* 1031305f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313062 push eax */
  push32((uint32_t)(EAX));
  /* 10313063 mov ecx, dword ptr [0x1033da5c] */
  ECX = (r32((uint32_t)(0x1033da5c)));
  /* 10313069 push ecx */
  push32((uint32_t)(ECX));
  /* 1031306a call dword ptr [0x103422e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e8))), 0x10313070u);
  /* 10313070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313072 jne 0x10313078 */
  if (!C.zf) goto L_10313078;
L_10313074:;
  /* 10313074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313076 jmp 0x1031309e */
  goto L_1031309e;
L_10313078:;
  /* 10313078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031307b push edx */
  push32((uint32_t)(EDX));
  /* 1031307c call 0x103130e0 */
  push32(0x10313081u); f_103130e0();
  /* 10313081 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313084 call dword ptr [0x103422e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e4))), 0x1031308au);
  /* 1031308a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031308d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1031308f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313092 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10313099 mov eax, 1 */
  EAX = (0x1u);
L_1031309e:;
  /* 1031309e mov esp, ebp */
  ESP = (EBP);
  /* 103130a0 pop ebp */
  EBP = (pop32());
  /* 103130a1 ret  */
  ESPCHK(0x10313020u, _esp0);
  ESP += 4; return;
}

/* FUN_100030b0 @ 0x103130b0 (41 bytes, 11 insns) */
void f_103130b0(void) {
  FTRACE(0x103130b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103130b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103130b1 mov ebp, esp */
  EBP = (ESP);
  /* 103130b3 call 0x10317020 */
  push32(0x103130b8u); f_10317020();
  /* 103130b8 cmp dword ptr [0x1033da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1033da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103130bf je 0x103130d7 */
  if (C.zf) goto L_103130d7;
  /* 103130c1 mov eax, dword ptr [0x1033da5c] */
  EAX = (r32((uint32_t)(0x1033da5c)));
  /* 103130c6 push eax */
  push32((uint32_t)(EAX));
  /* 103130c7 call dword ptr [0x103422f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422f0))), 0x103130cdu);
  /* 103130cd mov dword ptr [0x1033da5c], 0xffffffff */
  w32((uint32_t)(0x1033da5c), (0xffffffffu));
L_103130d7:;
  /* 103130d7 pop ebp */
  EBP = (pop32());
  /* 103130d8 ret  */
  ESPCHK(0x103130b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030e0 @ 0x103130e0 (25 bytes, 8 insns) */
void f_103130e0(void) {
  FTRACE(0x103130e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103130e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103130e1 mov ebp, esp */
  EBP = (ESP);
  /* 103130e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103130e6 mov dword ptr [eax + 0x50], 0x1033dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1033dc00u));
  /* 103130ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103130f0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 103130f7 pop ebp */
  EBP = (pop32());
  /* 103130f8 ret  */
  ESPCHK(0x103130e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003100 @ 0x10313100 (152 bytes, 48 insns) */
void f_10313100(void) {
  FTRACE(0x10313100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313100 push ebp */
  push32((uint32_t)(EBP));
  /* 10313101 mov ebp, esp */
  EBP = (ESP);
  /* 10313103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313106 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x1031310cu);
  /* 1031310c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031310f mov eax, dword ptr [0x1033da5c] */
  EAX = (r32((uint32_t)(0x1033da5c)));
  /* 10313114 push eax */
  push32((uint32_t)(EAX));
  /* 10313115 call dword ptr [0x103422f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422f8))), 0x1031311bu);
  /* 1031311b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031311e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313122 jne 0x10313187 */
  if (!C.zf) goto L_10313187;
  /* 10313124 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10313129 push 0x1033a3f4 */
  push32((uint32_t)(0x1033a3f4u));
  /* 1031312e push 2 */
  push32((uint32_t)(0x2u));
  /* 10313130 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10313132 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313134 call 0x10313ad0 */
  push32(0x10313139u); f_10313ad0();
  /* 10313139 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031313c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031313f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313143 je 0x1031317d */
  if (C.zf) goto L_1031317d;
  /* 10313145 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313148 push ecx */
  push32((uint32_t)(ECX));
  /* 10313149 mov edx, dword ptr [0x1033da5c] */
  EDX = (r32((uint32_t)(0x1033da5c)));
  /* 1031314f push edx */
  push32((uint32_t)(EDX));
  /* 10313150 call dword ptr [0x103422e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e8))), 0x10313156u);
  /* 10313156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313158 je 0x1031317d */
  if (C.zf) goto L_1031317d;
  /* 1031315a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031315d push eax */
  push32((uint32_t)(EAX));
  /* 1031315e call 0x103130e0 */
  push32(0x10313163u); f_103130e0();
  /* 10313163 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313166 call dword ptr [0x103422e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e4))), 0x1031316cu);
  /* 1031316c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031316f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10313171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313174 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1031317b jmp 0x10313187 */
  goto L_10313187;
L_1031317d:;
  /* 1031317d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1031317f call 0x10312630 */
  push32(0x10313184u); f_10312630();
  /* 10313184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313187:;
  /* 10313187 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031318a push eax */
  push32((uint32_t)(EAX));
  /* 1031318b call dword ptr [0x103422f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422f4))), 0x10313191u);
  /* 10313191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313194 mov esp, ebp */
  ESP = (EBP);
  /* 10313196 pop ebp */
  EBP = (pop32());
  /* 10313197 ret  */
  ESPCHK(0x10313100u, _esp0);
  ESP += 4; return;
}

/* FUN_100031a0 @ 0x103131a0 (263 bytes, 86 insns) */
void f_103131a0(void) {
  FTRACE(0x103131a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103131a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103131a1 mov ebp, esp */
  EBP = (ESP);
  /* 103131a3 cmp dword ptr [0x1033da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1033da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103131aa je 0x103132a5 */
  if (C.zf) goto L_103132a5;
  /* 103131b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103131b4 jne 0x103131c5 */
  if (!C.zf) goto L_103131c5;
  /* 103131b6 mov eax, dword ptr [0x1033da5c] */
  EAX = (r32((uint32_t)(0x1033da5c)));
  /* 103131bb push eax */
  push32((uint32_t)(EAX));
  /* 103131bc call dword ptr [0x103422f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422f8))), 0x103131c2u);
  /* 103131c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_103131c5:;
  /* 103131c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103131c9 je 0x10313296 */
  if (C.zf) goto L_10313296;
  /* 103131cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103131d2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103131d6 je 0x103131e9 */
  if (C.zf) goto L_103131e9;
  /* 103131d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 103131da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103131dd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 103131e0 push eax */
  push32((uint32_t)(EAX));
  /* 103131e1 call 0x10314150 */
  push32(0x103131e6u); f_10314150();
  /* 103131e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103131e9:;
  /* 103131e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103131ec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103131f0 je 0x10313203 */
  if (C.zf) goto L_10313203;
  /* 103131f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 103131f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103131f7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 103131fa push eax */
  push32((uint32_t)(EAX));
  /* 103131fb call 0x10314150 */
  push32(0x10313200u); f_10314150();
  /* 10313200 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313203:;
  /* 10313203 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313206 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031320a je 0x1031321d */
  if (C.zf) goto L_1031321d;
  /* 1031320c push 2 */
  push32((uint32_t)(0x2u));
  /* 1031320e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313211 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10313214 push eax */
  push32((uint32_t)(EAX));
  /* 10313215 call 0x10314150 */
  push32(0x1031321au); f_10314150();
  /* 1031321a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031321d:;
  /* 1031321d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313220 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313224 je 0x10313237 */
  if (C.zf) goto L_10313237;
  /* 10313226 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031322b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1031322e push eax */
  push32((uint32_t)(EAX));
  /* 1031322f call 0x10314150 */
  push32(0x10313234u); f_10314150();
  /* 10313234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313237:;
  /* 10313237 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031323a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031323e je 0x10313251 */
  if (C.zf) goto L_10313251;
  /* 10313240 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313242 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313245 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10313248 push eax */
  push32((uint32_t)(EAX));
  /* 10313249 call 0x10314150 */
  push32(0x1031324eu); f_10314150();
  /* 1031324e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313251:;
  /* 10313251 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313254 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313258 je 0x1031326b */
  if (C.zf) goto L_1031326b;
  /* 1031325a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031325c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031325f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10313262 push eax */
  push32((uint32_t)(EAX));
  /* 10313263 call 0x10314150 */
  push32(0x10313268u); f_10314150();
  /* 10313268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031326b:;
  /* 1031326b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031326e cmp dword ptr [ecx + 0x50], 0x1033dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1033dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313275 je 0x10313288 */
  if (C.zf) goto L_10313288;
  /* 10313277 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313279 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031327c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1031327f push eax */
  push32((uint32_t)(EAX));
  /* 10313280 call 0x10314150 */
  push32(0x10313285u); f_10314150();
  /* 10313285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313288:;
  /* 10313288 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031328a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031328d push ecx */
  push32((uint32_t)(ECX));
  /* 1031328e call 0x10314150 */
  push32(0x10313293u); f_10314150();
  /* 10313293 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313296:;
  /* 10313296 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313298 mov edx, dword ptr [0x1033da5c] */
  EDX = (r32((uint32_t)(0x1033da5c)));
  /* 1031329e push edx */
  push32((uint32_t)(EDX));
  /* 1031329f call dword ptr [0x103422e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e8))), 0x103132a5u);
L_103132a5:;
  /* 103132a5 pop ebp */
  EBP = (pop32());
  /* 103132a6 ret  */
  ESPCHK(0x103131a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032b0 @ 0x103132b0 (11 bytes, 5 insns) */
void f_103132b0(void) {
  FTRACE(0x103132b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103132b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103132b1 mov ebp, esp */
  EBP = (ESP);
  /* 103132b3 call dword ptr [0x103422e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422e4))), 0x103132b9u);
  /* 103132b9 pop ebp */
  EBP = (pop32());
  /* 103132ba ret  */
  ESPCHK(0x103132b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032c0 @ 0x103132c0 (11 bytes, 5 insns) */
void f_103132c0(void) {
  FTRACE(0x103132c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103132c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103132c1 mov ebp, esp */
  EBP = (ESP);
  /* 103132c3 call dword ptr [0x10342300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342300))), 0x103132c9u);
  /* 103132c9 pop ebp */
  EBP = (pop32());
  /* 103132ca ret  */
  ESPCHK(0x103132c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100032d0 @ 0x103132d0 (804 bytes, 236 insns) */
void f_103132d0(void) {
  FTRACE(0x103132d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103132d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103132d1 mov ebp, esp */
  EBP = (ESP);
  /* 103132d3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103132d6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 103132db push 0x1033a400 */
  push32((uint32_t)(0x1033a400u));
  /* 103132e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 103132e2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103132e7 call 0x103136c0 */
  push32(0x103132ecu); f_103136c0();
  /* 103132ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103132ef mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103132f2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103132f6 jne 0x10313302 */
  if (!C.zf) goto L_10313302;
  /* 103132f8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 103132fa call 0x10312630 */
  push32(0x103132ffu); f_10312630();
  /* 103132ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313302:;
  /* 10313302 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313305 mov dword ptr [0x10340ea0], eax */
  w32((uint32_t)(0x10340ea0), (EAX));
  /* 1031330a mov dword ptr [0x10340fdc], 0x20 */
  w32((uint32_t)(0x10340fdc), (0x20u));
  /* 10313314 jmp 0x1031331f */
  goto L_1031331f;
L_10313316:;
  /* 10313316 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313319 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031331c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1031331f:;
  /* 1031331f mov edx, dword ptr [0x10340ea0] */
  EDX = (r32((uint32_t)(0x10340ea0)));
  /* 10313325 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031332b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031332e jae 0x10313353 */
  if (!C.cf) goto L_10313353;
  /* 10313330 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313333 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10313337 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031333a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10313340 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313343 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10313347 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031334a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10313351 jmp 0x10313316 */
  goto L_10313316;
L_10313353:;
  /* 10313353 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10313356 push ecx */
  push32((uint32_t)(ECX));
  /* 10313357 call dword ptr [0x10342258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342258))), 0x1031335du);
  /* 1031335d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10313360 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10313366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10313368 je 0x103134f5 */
  if (C.zf) goto L_103134f5;
  /* 1031336e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313372 je 0x103134f5 */
  if (C.zf) goto L_103134f5;
  /* 10313378 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031337b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031337d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10313380 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10313383 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313386 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10313389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031338c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031338f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10313392 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313399 jge 0x103133a3 */
  if ((C.sf==C.of)) goto L_103133a3;
  /* 1031339b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1031339e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 103133a1 jmp 0x103133aa */
  goto L_103133aa;
L_103133a3:;
  /* 103133a3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_103133aa:;
  /* 103133aa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 103133ad mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103133b0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 103133b7 jmp 0x103133c2 */
  goto L_103133c2;
L_103133b9:;
  /* 103133b9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 103133bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103133bf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_103133c2:;
  /* 103133c2 mov ecx, dword ptr [0x10340fdc] */
  ECX = (r32((uint32_t)(0x10340fdc)));
  /* 103133c8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103133cb jge 0x10313462 */
  if ((C.sf==C.of)) goto L_10313462;
  /* 103133d1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 103133d6 push 0x1033a400 */
  push32((uint32_t)(0x1033a400u));
  /* 103133db push 2 */
  push32((uint32_t)(0x2u));
  /* 103133dd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 103133e2 call 0x103136c0 */
  push32(0x103133e7u); f_103136c0();
  /* 103133e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103133ea mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 103133ed cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103133f1 jne 0x103133fe */
  if (!C.zf) goto L_103133fe;
  /* 103133f3 mov edx, dword ptr [0x10340fdc] */
  EDX = (r32((uint32_t)(0x10340fdc)));
  /* 103133f9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 103133fc jmp 0x10313462 */
  goto L_10313462;
L_103133fe:;
  /* 103133fe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10313401 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313404 mov dword ptr [eax*4 + 0x10340ea0], ecx */
  w32((uint32_t)(EAX*4 + 0x10340ea0), (ECX));
  /* 1031340b mov edx, dword ptr [0x10340fdc] */
  EDX = (r32((uint32_t)(0x10340fdc)));
  /* 10313411 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313414 mov dword ptr [0x10340fdc], edx */
  w32((uint32_t)(0x10340fdc), (EDX));
  /* 1031341a jmp 0x10313425 */
  goto L_10313425;
L_1031341c:;
  /* 1031341c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031341f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313422 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10313425:;
  /* 10313425 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10313428 mov edx, dword ptr [ecx*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10340ea0)));
  /* 1031342f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313435 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313438 jae 0x1031345d */
  if (!C.cf) goto L_1031345d;
  /* 1031343a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031343d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10313441 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313444 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1031344a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031344d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10313451 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313454 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1031345b jmp 0x1031341c */
  goto L_1031341c;
L_1031345d:;
  /* 1031345d jmp 0x103133b9 */
  goto L_103133b9;
L_10313462:;
  /* 10313462 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10313469 jmp 0x10313486 */
  goto L_10313486;
L_1031346b:;
  /* 1031346b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1031346e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313471 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10313474 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313477 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031347a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031347d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10313480 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313483 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10313486:;
  /* 10313486 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10313489 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031348c jge 0x103134f5 */
  if ((C.sf==C.of)) goto L_103134f5;
  /* 1031348e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10313491 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313494 je 0x103134f0 */
  if (C.zf) goto L_103134f0;
  /* 10313496 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313499 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031349c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1031349f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103134a1 je 0x103134f0 */
  if (C.zf) goto L_103134f0;
  /* 103134a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103134a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103134a9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 103134ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103134ae jne 0x103134c0 */
  if (!C.zf) goto L_103134c0;
  /* 103134b0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103134b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103134b5 push edx */
  push32((uint32_t)(EDX));
  /* 103134b6 call dword ptr [0x10342308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342308))), 0x103134bcu);
  /* 103134bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103134be je 0x103134f0 */
  if (C.zf) goto L_103134f0;
L_103134c0:;
  /* 103134c0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 103134c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 103134c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 103134c9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 103134cc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 103134cf mov edx, dword ptr [eax*4 + 0x10340ea0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 103134d6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103134d8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 103134db mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103134de mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 103134e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103134e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103134e5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103134e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103134eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103134ed mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_103134f0:;
  /* 103134f0 jmp 0x1031346b */
  goto L_1031346b;
L_103134f5:;
  /* 103134f5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 103134fc jmp 0x10313507 */
  goto L_10313507;
L_103134fe:;
  /* 103134fe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10313501 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313504 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10313507:;
  /* 10313507 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031350b jge 0x103135e4 */
  if ((C.sf==C.of)) goto L_103135e4;
  /* 10313511 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10313514 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10313517 mov edx, dword ptr [0x10340ea0] */
  EDX = (r32((uint32_t)(0x10340ea0)));
  /* 1031351d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031351f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10313522 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313525 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313528 jne 0x103135d0 */
  if (!C.zf) goto L_103135d0;
  /* 1031352e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313531 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10313535 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313539 jne 0x10313544 */
  if (!C.zf) goto L_10313544;
  /* 1031353b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10313542 jmp 0x10313554 */
  goto L_10313554;
L_10313544:;
  /* 10313544 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10313547 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031354a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031354c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031354e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313551 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10313554:;
  /* 10313554 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10313557 push eax */
  push32((uint32_t)(EAX));
  /* 10313558 call dword ptr [0x103422b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b8))), 0x1031355eu);
  /* 1031355e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10313561 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313565 je 0x103135bf */
  if (C.zf) goto L_103135bf;
  /* 10313567 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1031356a push ecx */
  push32((uint32_t)(ECX));
  /* 1031356b call dword ptr [0x10342308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342308))), 0x10313571u);
  /* 10313571 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10313574 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313578 je 0x103135bf */
  if (C.zf) goto L_103135bf;
  /* 1031357a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031357d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10313580 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10313582 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10313585 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031358b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031358e jne 0x103135a0 */
  if (!C.zf) goto L_103135a0;
  /* 10313590 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10313593 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10313596 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10313598 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031359b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1031359e jmp 0x103135bd */
  goto L_103135bd;
L_103135a0:;
  /* 103135a0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 103135a3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103135a9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103135ac jne 0x103135bd */
  if (!C.zf) goto L_103135bd;
  /* 103135ae mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103135b4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 103135b7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103135bd:;
  /* 103135bd jmp 0x103135ce */
  goto L_103135ce;
L_103135bf:;
  /* 103135bf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135c2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103135c5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 103135c8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103135ce:;
  /* 103135ce jmp 0x103135df */
  goto L_103135df;
L_103135d0:;
  /* 103135d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135d3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 103135d6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 103135d9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 103135dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_103135df:;
  /* 103135df jmp 0x103134fe */
  goto L_103134fe;
L_103135e4:;
  /* 103135e4 mov eax, dword ptr [0x10340fdc] */
  EAX = (r32((uint32_t)(0x10340fdc)));
  /* 103135e9 push eax */
  push32((uint32_t)(EAX));
  /* 103135ea call dword ptr [0x10342304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342304))), 0x103135f0u);
  /* 103135f0 mov esp, ebp */
  ESP = (EBP);
  /* 103135f2 pop ebp */
  EBP = (pop32());
  /* 103135f3 ret  */
  ESPCHK(0x103132d0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10313600 (155 bytes, 45 insns) */
void f_10313600(void) {
  FTRACE(0x10313600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313600 push ebp */
  push32((uint32_t)(EBP));
  /* 10313601 mov ebp, esp */
  EBP = (ESP);
  /* 10313603 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313606 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031360d jmp 0x10313618 */
  goto L_10313618;
L_1031360f:;
  /* 1031360f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313615 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10313618:;
  /* 10313618 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031361c jge 0x10313697 */
  if ((C.sf==C.of)) goto L_10313697;
  /* 1031361e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313621 cmp dword ptr [ecx*4 + 0x10340ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10340ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313629 je 0x10313692 */
  if (C.zf) goto L_10313692;
  /* 1031362b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031362e mov eax, dword ptr [edx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 10313635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10313638 jmp 0x10313643 */
  goto L_10313643;
L_1031363a:;
  /* 1031363a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031363d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313640 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10313643:;
  /* 10313643 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313646 mov eax, dword ptr [edx*4 + 0x10340ea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10340ea0)));
  /* 1031364d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313652 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313655 jae 0x1031366f */
  if (!C.cf) goto L_1031366f;
  /* 10313657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031365a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031365e je 0x1031366d */
  if (C.zf) goto L_1031366d;
  /* 10313660 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313663 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313666 push edx */
  push32((uint32_t)(EDX));
  /* 10313667 call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x1031366du);
L_1031366d:;
  /* 1031366d jmp 0x1031363a */
  goto L_1031363a;
L_1031366f:;
  /* 1031366f push 2 */
  push32((uint32_t)(0x2u));
  /* 10313671 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313674 mov ecx, dword ptr [eax*4 + 0x10340ea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10340ea0)));
  /* 1031367b push ecx */
  push32((uint32_t)(ECX));
  /* 1031367c call 0x10314150 */
  push32(0x10313681u); f_10314150();
  /* 10313681 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313684 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313687 mov dword ptr [edx*4 + 0x10340ea0], 0 */
  w32((uint32_t)(EDX*4 + 0x10340ea0), (0x0u));
L_10313692:;
  /* 10313692 jmp 0x1031360f */
  goto L_1031360f;
L_10313697:;
  /* 10313697 mov esp, ebp */
  ESP = (EBP);
  /* 10313699 pop ebp */
  EBP = (pop32());
  /* 1031369a ret  */
  ESPCHK(0x10313600u, _esp0);
  ESP += 4; return;
}

/* FUN_100036a0 @ 0x103136a0 (29 bytes, 13 insns) */
void f_103136a0(void) {
  FTRACE(0x103136a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103136a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103136a1 mov ebp, esp */
  EBP = (ESP);
  /* 103136a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103136a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103136a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103136a9 mov eax, dword ptr [0x1033f6a0] */
  EAX = (r32((uint32_t)(0x1033f6a0)));
  /* 103136ae push eax */
  push32((uint32_t)(EAX));
  /* 103136af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103136b2 push ecx */
  push32((uint32_t)(ECX));
  /* 103136b3 call 0x10313710 */
  push32(0x103136b8u); f_10313710();
  /* 103136b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103136bb pop ebp */
  EBP = (pop32());
  /* 103136bc ret  */
  ESPCHK(0x103136a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036c0 @ 0x103136c0 (35 bytes, 16 insns) */
void f_103136c0(void) {
  FTRACE(0x103136c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103136c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103136c1 mov ebp, esp */
  EBP = (ESP);
  /* 103136c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103136c6 push eax */
  push32((uint32_t)(EAX));
  /* 103136c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103136ca push ecx */
  push32((uint32_t)(ECX));
  /* 103136cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103136ce push edx */
  push32((uint32_t)(EDX));
  /* 103136cf mov eax, dword ptr [0x1033f6a0] */
  EAX = (r32((uint32_t)(0x1033f6a0)));
  /* 103136d4 push eax */
  push32((uint32_t)(EAX));
  /* 103136d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103136d8 push ecx */
  push32((uint32_t)(ECX));
  /* 103136d9 call 0x10313710 */
  push32(0x103136deu); f_10313710();
  /* 103136de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103136e1 pop ebp */
  EBP = (pop32());
  /* 103136e2 ret  */
  ESPCHK(0x103136c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100036f0 @ 0x103136f0 (27 bytes, 13 insns) */
void f_103136f0(void) {
  FTRACE(0x103136f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103136f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103136f1 mov ebp, esp */
  EBP = (ESP);
  /* 103136f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103136f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103136f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103136f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103136fc push eax */
  push32((uint32_t)(EAX));
  /* 103136fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313700 push ecx */
  push32((uint32_t)(ECX));
  /* 10313701 call 0x10313710 */
  push32(0x10313706u); f_10313710();
  /* 10313706 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313709 pop ebp */
  EBP = (pop32());
  /* 1031370a ret  */
  ESPCHK(0x103136f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003710 @ 0x10313710 (94 bytes, 38 insns) */
void f_10313710(void) {
  FTRACE(0x10313710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313710 push ebp */
  push32((uint32_t)(EBP));
  /* 10313711 mov ebp, esp */
  EBP = (ESP);
  /* 10313713 push ecx */
  push32((uint32_t)(ECX));
L_10313714:;
  /* 10313714 push 9 */
  push32((uint32_t)(0x9u));
  /* 10313716 call 0x103170c0 */
  push32(0x1031371bu); f_103170c0();
  /* 1031371b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031371e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313721 push eax */
  push32((uint32_t)(EAX));
  /* 10313722 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313725 push ecx */
  push32((uint32_t)(ECX));
  /* 10313726 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313729 push edx */
  push32((uint32_t)(EDX));
  /* 1031372a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031372d push eax */
  push32((uint32_t)(EAX));
  /* 1031372e call 0x10313790 */
  push32(0x10313733u); f_10313790();
  /* 10313733 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313736 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10313739 push 9 */
  push32((uint32_t)(0x9u));
  /* 1031373b call 0x10317160 */
  push32(0x10313740u); f_10317160();
  /* 10313740 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313743 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313747 jne 0x1031374f */
  if (!C.zf) goto L_1031374f;
  /* 10313749 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031374d jne 0x10313754 */
  if (!C.zf) goto L_10313754;
L_1031374f:;
  /* 1031374f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313752 jmp 0x1031376a */
  goto L_1031376a;
L_10313754:;
  /* 10313754 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313757 push ecx */
  push32((uint32_t)(ECX));
  /* 10313758 call 0x10317400 */
  push32(0x1031375du); f_10317400();
  /* 1031375d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313762 jne 0x10313768 */
  if (!C.zf) goto L_10313768;
  /* 10313764 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313766 jmp 0x1031376a */
  goto L_1031376a;
L_10313768:;
  /* 10313768 jmp 0x10313714 */
  goto L_10313714;
L_1031376a:;
  /* 1031376a mov esp, ebp */
  ESP = (EBP);
  /* 1031376c pop ebp */
  EBP = (pop32());
  /* 1031376d ret  */
  ESPCHK(0x10313710u, _esp0);
  ESP += 4; return;
}

/* FUN_10003770 @ 0x10313770 (23 bytes, 11 insns) */
void f_10313770(void) {
  FTRACE(0x10313770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313770 push ebp */
  push32((uint32_t)(EBP));
  /* 10313771 mov ebp, esp */
  EBP = (ESP);
  /* 10313773 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313777 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031377c push eax */
  push32((uint32_t)(EAX));
  /* 1031377d call 0x10313790 */
  push32(0x10313782u); f_10313790();
  /* 10313782 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313785 pop ebp */
  EBP = (pop32());
  /* 10313786 ret  */
  ESPCHK(0x10313770u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x10313790 (787 bytes, 254 insns) */
void f_10313790(void) {
  FTRACE(0x10313790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313790 push ebp */
  push32((uint32_t)(EBP));
  /* 10313791 mov ebp, esp */
  EBP = (ESP);
  /* 10313793 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313796 push ebx */
  push32((uint32_t)(EBX));
  /* 10313797 push esi */
  push32((uint32_t)(ESI));
  /* 10313798 push edi */
  push32((uint32_t)(EDI));
  /* 10313799 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 103137a0 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 103137a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103137a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103137aa je 0x103137dc */
  if (C.zf) goto L_103137dc;
L_103137ac:;
  /* 103137ac call 0x10314860 */
  push32(0x103137b1u); f_10314860();
  /* 103137b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103137b3 jne 0x103137d6 */
  if (!C.zf) goto L_103137d6;
  /* 103137b5 push 0x1033a4f4 */
  push32((uint32_t)(0x1033a4f4u));
  /* 103137ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103137bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 103137c1 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103137c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103137c8 call 0x10312780 */
  push32(0x103137cdu); f_10312780();
  /* 103137cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103137d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103137d3 jne 0x103137d6 */
  if (!C.zf) goto L_103137d6;
  /* 103137d5 int3  */
  x86_unimpl("int3 @ 0x103137d5");
L_103137d6:;
  /* 103137d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103137d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103137da jne 0x103137ac */
  if (!C.zf) goto L_103137ac;
L_103137dc:;
  /* 103137dc mov edx, dword ptr [0x1033da88] */
  EDX = (r32((uint32_t)(0x1033da88)));
  /* 103137e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 103137e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103137e8 cmp eax, dword ptr [0x1033da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103137ee jne 0x103137f1 */
  if (!C.zf) goto L_103137f1;
  /* 103137f0 int3  */
  x86_unimpl("int3 @ 0x103137f0");
L_103137f1:;
  /* 103137f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103137f4 push ecx */
  push32((uint32_t)(ECX));
  /* 103137f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103137f8 push edx */
  push32((uint32_t)(EDX));
  /* 103137f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103137fc push eax */
  push32((uint32_t)(EAX));
  /* 103137fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313800 push ecx */
  push32((uint32_t)(ECX));
  /* 10313801 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313804 push edx */
  push32((uint32_t)(EDX));
  /* 10313805 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313807 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313809 call dword ptr [0x1033dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033dc90))), 0x1031380fu);
  /* 1031380f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313814 jne 0x10313874 */
  if (!C.zf) goto L_10313874;
  /* 10313816 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031381a je 0x10313847 */
  if (C.zf) goto L_10313847;
L_1031381c:;
  /* 1031381c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031381f push eax */
  push32((uint32_t)(EAX));
  /* 10313820 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313823 push ecx */
  push32((uint32_t)(ECX));
  /* 10313824 push 0x1033a4b0 */
  push32((uint32_t)(0x1033a4b0u));
  /* 10313829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031382b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031382d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031382f push 0 */
  push32((uint32_t)(0x0u));
  /* 10313831 call 0x10312780 */
  push32(0x10313836u); f_10312780();
  /* 10313836 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313839 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031383c jne 0x1031383f */
  if (!C.zf) goto L_1031383f;
  /* 1031383e int3  */
  x86_unimpl("int3 @ 0x1031383e");
L_1031383f:;
  /* 1031383f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10313841 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10313843 jne 0x1031381c */
  if (!C.zf) goto L_1031381c;
  /* 10313845 jmp 0x1031386d */
  goto L_1031386d;
L_10313847:;
  /* 10313847 push 0x1033a48c */
  push32((uint32_t)(0x1033a48cu));
  /* 1031384c push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10313851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313853 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313857 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313859 call 0x10312780 */
  push32(0x1031385eu); f_10312780();
  /* 1031385e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313861 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313864 jne 0x10313867 */
  if (!C.zf) goto L_10313867;
  /* 10313866 int3  */
  x86_unimpl("int3 @ 0x10313866");
L_10313867:;
  /* 10313867 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313869 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031386b jne 0x10313847 */
  if (!C.zf) goto L_10313847;
L_1031386d:;
  /* 1031386d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031386f jmp 0x10313a9c */
  goto L_10313a9c;
L_10313874:;
  /* 10313874 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313877 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031387d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313880 je 0x10313896 */
  if (C.zf) goto L_10313896;
  /* 10313882 mov edx, dword ptr [0x1033da84] */
  EDX = (r32((uint32_t)(0x1033da84)));
  /* 10313888 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1031388b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031388d jne 0x10313896 */
  if (!C.zf) goto L_10313896;
  /* 1031388f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10313896:;
  /* 10313896 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031389a ja 0x103138a7 */
  if ((!C.cf&&!C.zf)) goto L_103138a7;
  /* 1031389c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031389f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103138a2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138a5 jbe 0x103138d3 */
  if ((C.cf||C.zf)) goto L_103138d3;
L_103138a7:;
  /* 103138a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103138aa push ecx */
  push32((uint32_t)(ECX));
  /* 103138ab push 0x1033a464 */
  push32((uint32_t)(0x1033a464u));
  /* 103138b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103138b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103138b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103138b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 103138b8 call 0x10312780 */
  push32(0x103138bdu); f_10312780();
  /* 103138bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103138c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138c3 jne 0x103138c6 */
  if (!C.zf) goto L_103138c6;
  /* 103138c5 int3  */
  x86_unimpl("int3 @ 0x103138c5");
L_103138c6:;
  /* 103138c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103138c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103138ca jne 0x103138a7 */
  if (!C.zf) goto L_103138a7;
  /* 103138cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103138ce jmp 0x10313a9c */
  goto L_10313a9c;
L_103138d3:;
  /* 103138d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103138d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103138db cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138de je 0x10313920 */
  if (C.zf) goto L_10313920;
  /* 103138e0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138e4 je 0x10313920 */
  if (C.zf) goto L_10313920;
  /* 103138e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103138e9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103138ef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138f2 je 0x10313920 */
  if (C.zf) goto L_10313920;
  /* 103138f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103138f8 je 0x10313920 */
  if (C.zf) goto L_10313920;
L_103138fa:;
  /* 103138fa push 0x1033a430 */
  push32((uint32_t)(0x1033a430u));
  /* 103138ff push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10313904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031390a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031390c call 0x10312780 */
  push32(0x10313911u); f_10312780();
  /* 10313911 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313917 jne 0x1031391a */
  if (!C.zf) goto L_1031391a;
  /* 10313919 int3  */
  x86_unimpl("int3 @ 0x10313919");
L_1031391a:;
  /* 1031391a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031391c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031391e jne 0x103138fa */
  if (!C.zf) goto L_103138fa;
L_10313920:;
  /* 10313920 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313923 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313926 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10313929 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031392c push ecx */
  push32((uint32_t)(ECX));
  /* 1031392d call 0x10317510 */
  push32(0x10313932u); f_10317510();
  /* 10313932 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313935 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10313938 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031393c jne 0x10313945 */
  if (!C.zf) goto L_10313945;
  /* 1031393e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313940 jmp 0x10313a9c */
  goto L_10313a9c;
L_10313945:;
  /* 10313945 mov edx, dword ptr [0x1033da88] */
  EDX = (r32((uint32_t)(0x1033da88)));
  /* 1031394b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031394e mov dword ptr [0x1033da88], edx */
  w32((uint32_t)(0x1033da88), (EDX));
  /* 10313954 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313958 je 0x103139a3 */
  if (C.zf) goto L_103139a3;
  /* 1031395a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031395d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10313963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313966 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1031396d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313970 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10313977 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031397a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10313981 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313987 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1031398a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031398d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10313994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313997 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1031399e jmp 0x10313a43 */
  goto L_10313a43;
L_103139a3:;
  /* 103139a3 mov edx, dword ptr [0x1033f500] */
  EDX = (r32((uint32_t)(0x1033f500)));
  /* 103139a9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103139ac mov dword ptr [0x1033f500], edx */
  w32((uint32_t)(0x1033f500), (EDX));
  /* 103139b2 mov eax, dword ptr [0x1033f508] */
  EAX = (r32((uint32_t)(0x1033f508)));
  /* 103139b7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103139ba mov dword ptr [0x1033f508], eax */
  w32((uint32_t)(0x1033f508), (EAX));
  /* 103139bf mov ecx, dword ptr [0x1033f508] */
  ECX = (r32((uint32_t)(0x1033f508)));
  /* 103139c5 cmp ecx, dword ptr [0x1033f50c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033f50c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103139cb jbe 0x103139d9 */
  if ((C.cf||C.zf)) goto L_103139d9;
  /* 103139cd mov edx, dword ptr [0x1033f508] */
  EDX = (r32((uint32_t)(0x1033f508)));
  /* 103139d3 mov dword ptr [0x1033f50c], edx */
  w32((uint32_t)(0x1033f50c), (EDX));
L_103139d9:;
  /* 103139d9 cmp dword ptr [0x1033f504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103139e0 je 0x103139ef */
  if (C.zf) goto L_103139ef;
  /* 103139e2 mov eax, dword ptr [0x1033f504] */
  EAX = (r32((uint32_t)(0x1033f504)));
  /* 103139e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103139ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103139ed jmp 0x103139f8 */
  goto L_103139f8;
L_103139ef:;
  /* 103139ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103139f2 mov dword ptr [0x1033f4fc], edx */
  w32((uint32_t)(0x1033f4fc), (EDX));
L_103139f8:;
  /* 103139f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103139fb mov ecx, dword ptr [0x1033f504] */
  ECX = (r32((uint32_t)(0x1033f504)));
  /* 10313a01 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10313a03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a06 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10313a0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313a13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10313a16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313a1c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10313a1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313a25 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10313a28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313a2e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10313a31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313a37 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10313a3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a3d mov dword ptr [0x1033f504], ecx */
  w32((uint32_t)(0x1033f504), (ECX));
L_10313a43:;
  /* 10313a43 push 4 */
  push32((uint32_t)(0x4u));
  /* 10313a45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10313a47 mov dl, byte ptr [0x1033da90] */
  DL = (r8((uint32_t)(0x1033da90)));
  /* 10313a4d push edx */
  push32((uint32_t)(EDX));
  /* 10313a4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a51 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313a54 push eax */
  push32((uint32_t)(EAX));
  /* 10313a55 call 0x10317430 */
  push32(0x10313a5au); f_10317430();
  /* 10313a5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313a5d push 4 */
  push32((uint32_t)(0x4u));
  /* 10313a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10313a61 mov cl, byte ptr [0x1033da90] */
  CL = (r8((uint32_t)(0x1033da90)));
  /* 10313a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10313a68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313a6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a6e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10313a72 push ecx */
  push32((uint32_t)(ECX));
  /* 10313a73 call 0x10317430 */
  push32(0x10313a78u); f_10317430();
  /* 10313a78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313a7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313a7e push edx */
  push32((uint32_t)(EDX));
  /* 10313a7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313a81 mov al, byte ptr [0x1033da92] */
  AL = (r8((uint32_t)(0x1033da92)));
  /* 10313a86 push eax */
  push32((uint32_t)(EAX));
  /* 10313a87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313a8d push ecx */
  push32((uint32_t)(ECX));
  /* 10313a8e call 0x10317430 */
  push32(0x10313a93u); f_10317430();
  /* 10313a93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313a96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313a99 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10313a9c:;
  /* 10313a9c pop edi */
  EDI = (pop32());
  /* 10313a9d pop esi */
  ESI = (pop32());
  /* 10313a9e pop ebx */
  EBX = (pop32());
  /* 10313a9f mov esp, ebp */
  ESP = (EBP);
  /* 10313aa1 pop ebp */
  EBP = (pop32());
  /* 10313aa2 ret  */
  ESPCHK(0x10313790u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab0 @ 0x10313ab0 (27 bytes, 13 insns) */
void f_10313ab0(void) {
  FTRACE(0x10313ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10313ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10313ab3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313ab5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313ab7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313ab9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313abc push eax */
  push32((uint32_t)(EAX));
  /* 10313abd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313ac0 push ecx */
  push32((uint32_t)(ECX));
  /* 10313ac1 call 0x10313ad0 */
  push32(0x10313ac6u); f_10313ad0();
  /* 10313ac6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313ac9 pop ebp */
  EBP = (pop32());
  /* 10313aca ret  */
  ESPCHK(0x10313ab0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10313ad0 (96 bytes, 37 insns) */
void f_10313ad0(void) {
  FTRACE(0x10313ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10313ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10313ad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313ad6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313ad9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10313add mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10313ae0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10313ae4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10313ae8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313aeb push eax */
  push32((uint32_t)(EAX));
  /* 10313aec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313aef push ecx */
  push32((uint32_t)(ECX));
  /* 10313af0 call 0x103136c0 */
  push32(0x10313af5u); f_103136c0();
  /* 10313af5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313af8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10313afb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313aff je 0x10313b29 */
  if (C.zf) goto L_10313b29;
  /* 10313b01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313b04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10313b07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313b0a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10313b10:;
  /* 10313b10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313b13 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313b16 jae 0x10313b29 */
  if (!C.cf) goto L_10313b29;
  /* 10313b18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313b1b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10313b1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313b21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10313b27 jmp 0x10313b10 */
  goto L_10313b10;
L_10313b29:;
  /* 10313b29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313b2c mov esp, ebp */
  ESP = (EBP);
  /* 10313b2e pop ebp */
  EBP = (pop32());
  /* 10313b2f ret  */
  ESPCHK(0x10313ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10313b30 (27 bytes, 13 insns) */
void f_10313b30(void) {
  FTRACE(0x10313b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10313b31 mov ebp, esp */
  EBP = (ESP);
  /* 10313b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313b39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313b3c push eax */
  push32((uint32_t)(EAX));
  /* 10313b3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313b40 push ecx */
  push32((uint32_t)(ECX));
  /* 10313b41 call 0x10313b50 */
  push32(0x10313b46u); f_10313b50();
  /* 10313b46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b49 pop ebp */
  EBP = (pop32());
  /* 10313b4a ret  */
  ESPCHK(0x10313b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x10313b50 (64 bytes, 27 insns) */
void f_10313b50(void) {
  FTRACE(0x10313b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10313b51 mov ebp, esp */
  EBP = (ESP);
  /* 10313b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10313b54 push 9 */
  push32((uint32_t)(0x9u));
  /* 10313b56 call 0x103170c0 */
  push32(0x10313b5bu); f_103170c0();
  /* 10313b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b5e push 1 */
  push32((uint32_t)(0x1u));
  /* 10313b60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313b63 push eax */
  push32((uint32_t)(EAX));
  /* 10313b64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313b67 push ecx */
  push32((uint32_t)(ECX));
  /* 10313b68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313b6b push edx */
  push32((uint32_t)(EDX));
  /* 10313b6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313b6f push eax */
  push32((uint32_t)(EAX));
  /* 10313b70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10313b74 call 0x10313b90 */
  push32(0x10313b79u); f_10313b90();
  /* 10313b79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10313b7f push 9 */
  push32((uint32_t)(0x9u));
  /* 10313b81 call 0x10317160 */
  push32(0x10313b86u); f_10317160();
  /* 10313b86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313b89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313b8c mov esp, ebp */
  ESP = (EBP);
  /* 10313b8e pop ebp */
  EBP = (pop32());
  /* 10313b8f ret  */
  ESPCHK(0x10313b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b90 @ 0x10313b90 (1297 bytes, 431 insns) */
void f_10313b90(void) {
  FTRACE(0x10313b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10313b90 push ebp */
  push32((uint32_t)(EBP));
  /* 10313b91 mov ebp, esp */
  EBP = (ESP);
  /* 10313b93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313b96 push ebx */
  push32((uint32_t)(EBX));
  /* 10313b97 push esi */
  push32((uint32_t)(ESI));
  /* 10313b98 push edi */
  push32((uint32_t)(EDI));
  /* 10313b99 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10313ba0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313ba4 jne 0x10313bc3 */
  if (!C.zf) goto L_10313bc3;
  /* 10313ba6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313ba9 push eax */
  push32((uint32_t)(EAX));
  /* 10313baa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313bad push ecx */
  push32((uint32_t)(ECX));
  /* 10313bae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313bb1 push edx */
  push32((uint32_t)(EDX));
  /* 10313bb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313bb5 push eax */
  push32((uint32_t)(EAX));
  /* 10313bb6 call 0x103136c0 */
  push32(0x10313bbbu); f_103136c0();
  /* 10313bbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313bbe jmp 0x1031409a */
  goto L_1031409a;
L_10313bc3:;
  /* 10313bc3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313bc7 je 0x10313be6 */
  if (C.zf) goto L_10313be6;
  /* 10313bc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313bcd jne 0x10313be6 */
  if (!C.zf) goto L_10313be6;
  /* 10313bcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10313bd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313bd6 push edx */
  push32((uint32_t)(EDX));
  /* 10313bd7 call 0x10314150 */
  push32(0x10313bdcu); f_10314150();
  /* 10313bdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313bdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313be1 jmp 0x1031409a */
  goto L_1031409a;
L_10313be6:;
  /* 10313be6 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 10313beb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10313bee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313bf0 je 0x10313c22 */
  if (C.zf) goto L_10313c22;
L_10313bf2:;
  /* 10313bf2 call 0x10314860 */
  push32(0x10313bf7u); f_10314860();
  /* 10313bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313bf9 jne 0x10313c1c */
  if (!C.zf) goto L_10313c1c;
  /* 10313bfb push 0x1033a4f4 */
  push32((uint32_t)(0x1033a4f4u));
  /* 10313c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c02 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10313c07 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10313c0e call 0x10312780 */
  push32(0x10313c13u); f_10312780();
  /* 10313c13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313c16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313c19 jne 0x10313c1c */
  if (!C.zf) goto L_10313c1c;
  /* 10313c1b int3  */
  x86_unimpl("int3 @ 0x10313c1b");
L_10313c1c:;
  /* 10313c1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10313c1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10313c20 jne 0x10313bf2 */
  if (!C.zf) goto L_10313bf2;
L_10313c22:;
  /* 10313c22 mov edx, dword ptr [0x1033da88] */
  EDX = (r32((uint32_t)(0x1033da88)));
  /* 10313c28 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10313c2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10313c2e cmp eax, dword ptr [0x1033da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313c34 jne 0x10313c37 */
  if (!C.zf) goto L_10313c37;
  /* 10313c36 int3  */
  x86_unimpl("int3 @ 0x10313c36");
L_10313c37:;
  /* 10313c37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313c3a push ecx */
  push32((uint32_t)(ECX));
  /* 10313c3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313c3e push edx */
  push32((uint32_t)(EDX));
  /* 10313c3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10313c42 push eax */
  push32((uint32_t)(EAX));
  /* 10313c43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313c46 push ecx */
  push32((uint32_t)(ECX));
  /* 10313c47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313c4a push edx */
  push32((uint32_t)(EDX));
  /* 10313c4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313c4e push eax */
  push32((uint32_t)(EAX));
  /* 10313c4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10313c51 call dword ptr [0x1033dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033dc90))), 0x10313c57u);
  /* 10313c57 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313c5c jne 0x10313cbc */
  if (!C.zf) goto L_10313cbc;
  /* 10313c5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313c62 je 0x10313c8f */
  if (C.zf) goto L_10313c8f;
L_10313c64:;
  /* 10313c64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313c67 push ecx */
  push32((uint32_t)(ECX));
  /* 10313c68 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313c6b push edx */
  push32((uint32_t)(EDX));
  /* 10313c6c push 0x1033a670 */
  push32((uint32_t)(0x1033a670u));
  /* 10313c71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c79 call 0x10312780 */
  push32(0x10313c7eu); f_10312780();
  /* 10313c7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313c84 jne 0x10313c87 */
  if (!C.zf) goto L_10313c87;
  /* 10313c86 int3  */
  x86_unimpl("int3 @ 0x10313c86");
L_10313c87:;
  /* 10313c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313c89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313c8b jne 0x10313c64 */
  if (!C.zf) goto L_10313c64;
  /* 10313c8d jmp 0x10313cb5 */
  goto L_10313cb5;
L_10313c8f:;
  /* 10313c8f push 0x1033a64c */
  push32((uint32_t)(0x1033a64cu));
  /* 10313c94 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10313c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10313c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10313ca1 call 0x10312780 */
  push32(0x10313ca6u); f_10312780();
  /* 10313ca6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313ca9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313cac jne 0x10313caf */
  if (!C.zf) goto L_10313caf;
  /* 10313cae int3  */
  x86_unimpl("int3 @ 0x10313cae");
L_10313caf:;
  /* 10313caf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10313cb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10313cb3 jne 0x10313c8f */
  if (!C.zf) goto L_10313c8f;
L_10313cb5:;
  /* 10313cb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313cb7 jmp 0x1031409a */
  goto L_1031409a;
L_10313cbc:;
  /* 10313cbc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313cc0 jbe 0x10313cee */
  if ((C.cf||C.zf)) goto L_10313cee;
L_10313cc2:;
  /* 10313cc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313cc5 push edx */
  push32((uint32_t)(EDX));
  /* 10313cc6 push 0x1033a61c */
  push32((uint32_t)(0x1033a61cu));
  /* 10313ccb push 0 */
  push32((uint32_t)(0x0u));
  /* 10313ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 10313ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 10313cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313cd3 call 0x10312780 */
  push32(0x10313cd8u); f_10312780();
  /* 10313cd8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313cdb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313cde jne 0x10313ce1 */
  if (!C.zf) goto L_10313ce1;
  /* 10313ce0 int3  */
  x86_unimpl("int3 @ 0x10313ce0");
L_10313ce1:;
  /* 10313ce1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313ce5 jne 0x10313cc2 */
  if (!C.zf) goto L_10313cc2;
  /* 10313ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313ce9 jmp 0x1031409a */
  goto L_1031409a;
L_10313cee:;
  /* 10313cee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313cf2 je 0x10313d36 */
  if (C.zf) goto L_10313d36;
  /* 10313cf4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313cf7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10313cfd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d00 je 0x10313d36 */
  if (C.zf) goto L_10313d36;
  /* 10313d02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313d05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10313d0b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d0e je 0x10313d36 */
  if (C.zf) goto L_10313d36;
L_10313d10:;
  /* 10313d10 push 0x1033a430 */
  push32((uint32_t)(0x1033a430u));
  /* 10313d15 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10313d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10313d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10313d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10313d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 10313d22 call 0x10312780 */
  push32(0x10313d27u); f_10312780();
  /* 10313d27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313d2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d2d jne 0x10313d30 */
  if (!C.zf) goto L_10313d30;
  /* 10313d2f int3  */
  x86_unimpl("int3 @ 0x10313d2f");
L_10313d30:;
  /* 10313d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313d34 jne 0x10313d10 */
  if (!C.zf) goto L_10313d10;
L_10313d36:;
  /* 10313d36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313d39 push ecx */
  push32((uint32_t)(ECX));
  /* 10313d3a call 0x10314cc0 */
  push32(0x10313d3fu); f_10314cc0();
  /* 10313d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313d42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10313d44 jne 0x10313d67 */
  if (!C.zf) goto L_10313d67;
  /* 10313d46 push 0x1033a5f8 */
  push32((uint32_t)(0x1033a5f8u));
  /* 10313d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10313d4d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10313d52 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313d57 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313d59 call 0x10312780 */
  push32(0x10313d5eu); f_10312780();
  /* 10313d5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313d61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d64 jne 0x10313d67 */
  if (!C.zf) goto L_10313d67;
  /* 10313d66 int3  */
  x86_unimpl("int3 @ 0x10313d66");
L_10313d67:;
  /* 10313d67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10313d69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10313d6b jne 0x10313d36 */
  if (!C.zf) goto L_10313d36;
  /* 10313d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10313d70 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313d73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10313d76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313d79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d7d jne 0x10313d86 */
  if (!C.zf) goto L_10313d86;
  /* 10313d7f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10313d86:;
  /* 10313d86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d8a je 0x10313dca */
  if (C.zf) goto L_10313dca;
L_10313d8c:;
  /* 10313d8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313d8f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d96 jne 0x10313da1 */
  if (!C.zf) goto L_10313da1;
  /* 10313d98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313d9b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313d9f je 0x10313dc2 */
  if (C.zf) goto L_10313dc2;
L_10313da1:;
  /* 10313da1 push 0x1033a5b0 */
  push32((uint32_t)(0x1033a5b0u));
  /* 10313da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10313da8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10313dad push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313db2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313db4 call 0x10312780 */
  push32(0x10313db9u); f_10312780();
  /* 10313db9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313dbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313dbf jne 0x10313dc2 */
  if (!C.zf) goto L_10313dc2;
  /* 10313dc1 int3  */
  x86_unimpl("int3 @ 0x10313dc1");
L_10313dc2:;
  /* 10313dc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10313dc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10313dc6 jne 0x10313d8c */
  if (!C.zf) goto L_10313d8c;
  /* 10313dc8 jmp 0x10313e2e */
  goto L_10313e2e;
L_10313dca:;
  /* 10313dca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313dcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10313dd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10313dd5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313dd8 jne 0x10313def */
  if (!C.zf) goto L_10313def;
  /* 10313dda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313ddd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10313de3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313de6 jne 0x10313def */
  if (!C.zf) goto L_10313def;
  /* 10313de8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10313def:;
  /* 10313def mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313df2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10313df5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10313dfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10313dfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10313e03 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e05 je 0x10313e28 */
  if (C.zf) goto L_10313e28;
  /* 10313e07 push 0x1033a574 */
  push32((uint32_t)(0x1033a574u));
  /* 10313e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10313e0e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10313e13 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313e18 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313e1a call 0x10312780 */
  push32(0x10313e1fu); f_10312780();
  /* 10313e1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e25 jne 0x10313e28 */
  if (!C.zf) goto L_10313e28;
  /* 10313e27 int3  */
  x86_unimpl("int3 @ 0x10313e27");
L_10313e28:;
  /* 10313e28 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10313e2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10313e2c jne 0x10313def */
  if (!C.zf) goto L_10313def;
L_10313e2e:;
  /* 10313e2e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e32 je 0x10313e59 */
  if (C.zf) goto L_10313e59;
  /* 10313e34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313e37 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e3a push eax */
  push32((uint32_t)(EAX));
  /* 10313e3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313e3e push ecx */
  push32((uint32_t)(ECX));
  /* 10313e3f call 0x10317640 */
  push32(0x10313e44u); f_10317640();
  /* 10313e44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10313e4a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e4e jne 0x10313e57 */
  if (!C.zf) goto L_10313e57;
  /* 10313e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313e52 jmp 0x1031409a */
  goto L_1031409a;
L_10313e57:;
  /* 10313e57 jmp 0x10313e7c */
  goto L_10313e7c;
L_10313e59:;
  /* 10313e59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313e5c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e5f push edx */
  push32((uint32_t)(EDX));
  /* 10313e60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10313e63 push eax */
  push32((uint32_t)(EAX));
  /* 10313e64 call 0x10317590 */
  push32(0x10313e69u); f_10317590();
  /* 10313e69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10313e6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e73 jne 0x10313e7c */
  if (!C.zf) goto L_10313e7c;
  /* 10313e75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313e77 jmp 0x1031409a */
  goto L_1031409a;
L_10313e7c:;
  /* 10313e7c mov ecx, dword ptr [0x1033da88] */
  ECX = (r32((uint32_t)(0x1033da88)));
  /* 10313e82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313e85 mov dword ptr [0x1033da88], ecx */
  w32((uint32_t)(0x1033da88), (ECX));
  /* 10313e8b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313e8f jne 0x10313ee7 */
  if (!C.zf) goto L_10313ee7;
  /* 10313e91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313e94 mov eax, dword ptr [0x1033f500] */
  EAX = (r32((uint32_t)(0x1033f500)));
  /* 10313e99 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313e9c mov dword ptr [0x1033f500], eax */
  w32((uint32_t)(0x1033f500), (EAX));
  /* 10313ea1 mov ecx, dword ptr [0x1033f500] */
  ECX = (r32((uint32_t)(0x1033f500)));
  /* 10313ea7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313eaa mov dword ptr [0x1033f500], ecx */
  w32((uint32_t)(0x1033f500), (ECX));
  /* 10313eb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313eb3 mov eax, dword ptr [0x1033f508] */
  EAX = (r32((uint32_t)(0x1033f508)));
  /* 10313eb8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313ebb mov dword ptr [0x1033f508], eax */
  w32((uint32_t)(0x1033f508), (EAX));
  /* 10313ec0 mov ecx, dword ptr [0x1033f508] */
  ECX = (r32((uint32_t)(0x1033f508)));
  /* 10313ec6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313ec9 mov dword ptr [0x1033f508], ecx */
  w32((uint32_t)(0x1033f508), (ECX));
  /* 10313ecf mov edx, dword ptr [0x1033f508] */
  EDX = (r32((uint32_t)(0x1033f508)));
  /* 10313ed5 cmp edx, dword ptr [0x1033f50c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033f50c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313edb jbe 0x10313ee7 */
  if ((C.cf||C.zf)) goto L_10313ee7;
  /* 10313edd mov eax, dword ptr [0x1033f508] */
  EAX = (r32((uint32_t)(0x1033f508)));
  /* 10313ee2 mov dword ptr [0x1033f50c], eax */
  w32((uint32_t)(0x1033f50c), (EAX));
L_10313ee7:;
  /* 10313ee7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313eea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313eed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10313ef0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313ef3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313ef6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313ef9 jbe 0x10313f1f */
  if ((C.cf||C.zf)) goto L_10313f1f;
  /* 10313efb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313efe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313f01 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10313f04 push edx */
  push32((uint32_t)(EDX));
  /* 10313f05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313f07 mov al, byte ptr [0x1033da92] */
  AL = (r8((uint32_t)(0x1033da92)));
  /* 10313f0c push eax */
  push32((uint32_t)(EAX));
  /* 10313f0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313f13 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313f16 push edx */
  push32((uint32_t)(EDX));
  /* 10313f17 call 0x10317430 */
  push32(0x10313f1cu); f_10317430();
  /* 10313f1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10313f1f:;
  /* 10313f1f push 4 */
  push32((uint32_t)(0x4u));
  /* 10313f21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10313f23 mov al, byte ptr [0x1033da90] */
  AL = (r8((uint32_t)(0x1033da90)));
  /* 10313f28 push eax */
  push32((uint32_t)(EAX));
  /* 10313f29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313f2c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10313f2f push ecx */
  push32((uint32_t)(ECX));
  /* 10313f30 call 0x10317430 */
  push32(0x10313f35u); f_10317430();
  /* 10313f35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313f38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313f3c jne 0x10313f59 */
  if (!C.zf) goto L_10313f59;
  /* 10313f3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10313f44 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10313f47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10313f4d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10313f50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f53 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10313f56 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10313f59:;
  /* 10313f59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10313f5f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10313f62:;
  /* 10313f62 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313f66 jne 0x10313f97 */
  if (!C.zf) goto L_10313f97;
  /* 10313f68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313f6c jne 0x10313f76 */
  if (!C.zf) goto L_10313f76;
  /* 10313f6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313f71 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313f74 je 0x10313f97 */
  if (C.zf) goto L_10313f97;
L_10313f76:;
  /* 10313f76 push 0x1033a540 */
  push32((uint32_t)(0x1033a540u));
  /* 10313f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10313f7d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10313f82 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313f87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313f89 call 0x10312780 */
  push32(0x10313f8eu); f_10312780();
  /* 10313f8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313f91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313f94 jne 0x10313f97 */
  if (!C.zf) goto L_10313f97;
  /* 10313f96 int3  */
  x86_unimpl("int3 @ 0x10313f96");
L_10313f97:;
  /* 10313f97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10313f99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10313f9b jne 0x10313f62 */
  if (!C.zf) goto L_10313f62;
  /* 10313f9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313fa0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313fa3 je 0x10313fab */
  if (C.zf) goto L_10313fab;
  /* 10313fa5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313fa9 je 0x10313fb3 */
  if (C.zf) goto L_10313fb3;
L_10313fab:;
  /* 10313fab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10313fae jmp 0x1031409a */
  goto L_1031409a;
L_10313fb3:;
  /* 10313fb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313fb6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313fb9 je 0x10313fcb */
  if (C.zf) goto L_10313fcb;
  /* 10313fbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313fbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10313fc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313fc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10313fc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10313fc9 jmp 0x10314007 */
  goto L_10314007;
L_10313fcb:;
  /* 10313fcb mov eax, dword ptr [0x1033f4fc] */
  EAX = (r32((uint32_t)(0x1033f4fc)));
  /* 10313fd0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313fd3 je 0x10313ff6 */
  if (C.zf) goto L_10313ff6;
  /* 10313fd5 push 0x1033a524 */
  push32((uint32_t)(0x1033a524u));
  /* 10313fda push 0 */
  push32((uint32_t)(0x0u));
  /* 10313fdc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10313fe1 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10313fe6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10313fe8 call 0x10312780 */
  push32(0x10313fedu); f_10312780();
  /* 10313fed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10313ff0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10313ff3 jne 0x10313ff6 */
  if (!C.zf) goto L_10313ff6;
  /* 10313ff5 int3  */
  x86_unimpl("int3 @ 0x10313ff5");
L_10313ff6:;
  /* 10313ff6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10313ff8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10313ffa jne 0x10313fcb */
  if (!C.zf) goto L_10313fcb;
  /* 10313ffc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10313fff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10314002 mov dword ptr [0x1033f4fc], eax */
  w32((uint32_t)(0x1033f4fc), (EAX));
L_10314007:;
  /* 10314007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031400a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031400e je 0x1031401f */
  if (C.zf) goto L_1031401f;
  /* 10314010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314013 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10314016 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314019 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031401b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031401d jmp 0x1031405a */
  goto L_1031405a;
L_1031401f:;
  /* 1031401f mov eax, dword ptr [0x1033f504] */
  EAX = (r32((uint32_t)(0x1033f504)));
  /* 10314024 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314027 je 0x1031404a */
  if (C.zf) goto L_1031404a;
  /* 10314029 push 0x1033a508 */
  push32((uint32_t)(0x1033a508u));
  /* 1031402e push 0 */
  push32((uint32_t)(0x0u));
  /* 10314030 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10314035 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 1031403a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031403c call 0x10312780 */
  push32(0x10314041u); f_10312780();
  /* 10314041 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314044 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314047 jne 0x1031404a */
  if (!C.zf) goto L_1031404a;
  /* 10314049 int3  */
  x86_unimpl("int3 @ 0x10314049");
L_1031404a:;
  /* 1031404a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031404c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031404e jne 0x1031401f */
  if (!C.zf) goto L_1031401f;
  /* 10314050 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314053 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10314055 mov dword ptr [0x1033f504], eax */
  w32((uint32_t)(0x1033f504), (EAX));
L_1031405a:;
  /* 1031405a cmp dword ptr [0x1033f504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314061 je 0x10314071 */
  if (C.zf) goto L_10314071;
  /* 10314063 mov ecx, dword ptr [0x1033f504] */
  ECX = (r32((uint32_t)(0x1033f504)));
  /* 10314069 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031406c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1031406f jmp 0x10314079 */
  goto L_10314079;
L_10314071:;
  /* 10314071 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314074 mov dword ptr [0x1033f4fc], eax */
  w32((uint32_t)(0x1033f4fc), (EAX));
L_10314079:;
  /* 10314079 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031407c mov edx, dword ptr [0x1033f504] */
  EDX = (r32((uint32_t)(0x1033f504)));
  /* 10314082 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10314084 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314087 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1031408e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10314091 mov dword ptr [0x1033f504], ecx */
  w32((uint32_t)(0x1033f504), (ECX));
  /* 10314097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1031409a:;
  /* 1031409a pop edi */
  EDI = (pop32());
  /* 1031409b pop esi */
  ESI = (pop32());
  /* 1031409c pop ebx */
  EBX = (pop32());
  /* 1031409d mov esp, ebp */
  ESP = (EBP);
  /* 1031409f pop ebp */
  EBP = (pop32());
  /* 103140a0 ret  */
  ESPCHK(0x10313b90u, _esp0);
  ESP += 4; return;
}

/* FUN_100040b0 @ 0x103140b0 (27 bytes, 13 insns) */
void f_103140b0(void) {
  FTRACE(0x103140b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103140b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103140b1 mov ebp, esp */
  EBP = (ESP);
  /* 103140b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103140b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103140b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 103140b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103140bc push eax */
  push32((uint32_t)(EAX));
  /* 103140bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103140c0 push ecx */
  push32((uint32_t)(ECX));
  /* 103140c1 call 0x103140d0 */
  push32(0x103140c6u); f_103140d0();
  /* 103140c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103140c9 pop ebp */
  EBP = (pop32());
  /* 103140ca ret  */
  ESPCHK(0x103140b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040d0 @ 0x103140d0 (64 bytes, 27 insns) */
void f_103140d0(void) {
  FTRACE(0x103140d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103140d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103140d1 mov ebp, esp */
  EBP = (ESP);
  /* 103140d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103140d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103140d6 call 0x103170c0 */
  push32(0x103140dbu); f_103170c0();
  /* 103140db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103140de push 0 */
  push32((uint32_t)(0x0u));
  /* 103140e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103140e3 push eax */
  push32((uint32_t)(EAX));
  /* 103140e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103140e7 push ecx */
  push32((uint32_t)(ECX));
  /* 103140e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103140eb push edx */
  push32((uint32_t)(EDX));
  /* 103140ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103140ef push eax */
  push32((uint32_t)(EAX));
  /* 103140f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103140f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103140f4 call 0x10313b90 */
  push32(0x103140f9u); f_10313b90();
  /* 103140f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103140fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103140ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10314101 call 0x10317160 */
  push32(0x10314106u); f_10317160();
  /* 10314106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314109 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031410c mov esp, ebp */
  ESP = (EBP);
  /* 1031410e pop ebp */
  EBP = (pop32());
  /* 1031410f ret  */
  ESPCHK(0x103140d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004110 @ 0x10314110 (19 bytes, 9 insns) */
void f_10314110(void) {
  FTRACE(0x10314110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314110 push ebp */
  push32((uint32_t)(EBP));
  /* 10314111 mov ebp, esp */
  EBP = (ESP);
  /* 10314113 push 1 */
  push32((uint32_t)(0x1u));
  /* 10314115 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314118 push eax */
  push32((uint32_t)(EAX));
  /* 10314119 call 0x10314150 */
  push32(0x1031411eu); f_10314150();
  /* 1031411e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314121 pop ebp */
  EBP = (pop32());
  /* 10314122 ret  */
  ESPCHK(0x10314110u, _esp0);
  ESP += 4; return;
}

/* FUN_10004130 @ 0x10314130 (19 bytes, 9 insns) */
void f_10314130(void) {
  FTRACE(0x10314130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314130 push ebp */
  push32((uint32_t)(EBP));
  /* 10314131 mov ebp, esp */
  EBP = (ESP);
  /* 10314133 push 1 */
  push32((uint32_t)(0x1u));
  /* 10314135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314138 push eax */
  push32((uint32_t)(EAX));
  /* 10314139 call 0x10314180 */
  push32(0x1031413eu); f_10314180();
  /* 1031413e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314141 pop ebp */
  EBP = (pop32());
  /* 10314142 ret  */
  ESPCHK(0x10314130u, _esp0);
  ESP += 4; return;
}

/* FUN_10004150 @ 0x10314150 (41 bytes, 16 insns) */
void f_10314150(void) {
  FTRACE(0x10314150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314150 push ebp */
  push32((uint32_t)(EBP));
  /* 10314151 mov ebp, esp */
  EBP = (ESP);
  /* 10314153 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314155 call 0x103170c0 */
  push32(0x1031415au); f_103170c0();
  /* 1031415a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031415d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314160 push eax */
  push32((uint32_t)(EAX));
  /* 10314161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314164 push ecx */
  push32((uint32_t)(ECX));
  /* 10314165 call 0x10314180 */
  push32(0x1031416au); f_10314180();
  /* 1031416a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031416d push 9 */
  push32((uint32_t)(0x9u));
  /* 1031416f call 0x10317160 */
  push32(0x10314174u); f_10317160();
  /* 10314174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314177 pop ebp */
  EBP = (pop32());
  /* 10314178 ret  */
  ESPCHK(0x10314150u, _esp0);
  ESP += 4; return;
}

/* FUN_10004180 @ 0x10314180 (1004 bytes, 342 insns) */
void f_10314180(void) {
  FTRACE(0x10314180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314180 push ebp */
  push32((uint32_t)(EBP));
  /* 10314181 mov ebp, esp */
  EBP = (ESP);
  /* 10314183 push ecx */
  push32((uint32_t)(ECX));
  /* 10314184 push ebx */
  push32((uint32_t)(EBX));
  /* 10314185 push esi */
  push32((uint32_t)(ESI));
  /* 10314186 push edi */
  push32((uint32_t)(EDI));
  /* 10314187 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 1031418c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1031418f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314191 je 0x103141c3 */
  if (C.zf) goto L_103141c3;
L_10314193:;
  /* 10314193 call 0x10314860 */
  push32(0x10314198u); f_10314860();
  /* 10314198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031419a jne 0x103141bd */
  if (!C.zf) goto L_103141bd;
  /* 1031419c push 0x1033a4f4 */
  push32((uint32_t)(0x1033a4f4u));
  /* 103141a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141a3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 103141a8 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103141ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103141af call 0x10312780 */
  push32(0x103141b4u); f_10312780();
  /* 103141b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103141b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103141ba jne 0x103141bd */
  if (!C.zf) goto L_103141bd;
  /* 103141bc int3  */
  x86_unimpl("int3 @ 0x103141bc");
L_103141bd:;
  /* 103141bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103141bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103141c1 jne 0x10314193 */
  if (!C.zf) goto L_10314193;
L_103141c3:;
  /* 103141c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103141c7 jne 0x103141ce */
  if (!C.zf) goto L_103141ce;
  /* 103141c9 jmp 0x10314565 */
  goto L_10314565;
L_103141ce:;
  /* 103141ce push 0 */
  push32((uint32_t)(0x0u));
  /* 103141d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103141d7 push edx */
  push32((uint32_t)(EDX));
  /* 103141d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103141dd push eax */
  push32((uint32_t)(EAX));
  /* 103141de push 3 */
  push32((uint32_t)(0x3u));
  /* 103141e0 call dword ptr [0x1033dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033dc90))), 0x103141e6u);
  /* 103141e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103141e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103141eb jne 0x10314218 */
  if (!C.zf) goto L_10314218;
L_103141ed:;
  /* 103141ed push 0x1033a7b8 */
  push32((uint32_t)(0x1033a7b8u));
  /* 103141f2 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 103141f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103141fb push 0 */
  push32((uint32_t)(0x0u));
  /* 103141fd push 0 */
  push32((uint32_t)(0x0u));
  /* 103141ff call 0x10312780 */
  push32(0x10314204u); f_10312780();
  /* 10314204 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314207 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031420a jne 0x1031420d */
  if (!C.zf) goto L_1031420d;
  /* 1031420c int3  */
  x86_unimpl("int3 @ 0x1031420c");
L_1031420d:;
  /* 1031420d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031420f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10314211 jne 0x103141ed */
  if (!C.zf) goto L_103141ed;
  /* 10314213 jmp 0x10314565 */
  goto L_10314565;
L_10314218:;
  /* 10314218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031421b push edx */
  push32((uint32_t)(EDX));
  /* 1031421c call 0x10314cc0 */
  push32(0x10314221u); f_10314cc0();
  /* 10314221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314224 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314226 jne 0x10314249 */
  if (!C.zf) goto L_10314249;
  /* 10314228 push 0x1033a5f8 */
  push32((uint32_t)(0x1033a5f8u));
  /* 1031422d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031422f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10314234 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10314239 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031423b call 0x10312780 */
  push32(0x10314240u); f_10312780();
  /* 10314240 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314243 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314246 jne 0x10314249 */
  if (!C.zf) goto L_10314249;
  /* 10314248 int3  */
  x86_unimpl("int3 @ 0x10314248");
L_10314249:;
  /* 10314249 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031424b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031424d jne 0x10314218 */
  if (!C.zf) goto L_10314218;
  /* 1031424f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314252 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314255 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10314258:;
  /* 10314258 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031425b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031425e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314263 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314266 je 0x103142ab */
  if (C.zf) goto L_103142ab;
  /* 10314268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031426b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031426f je 0x103142ab */
  if (C.zf) goto L_103142ab;
  /* 10314271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314274 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314277 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031427c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031427f je 0x103142ab */
  if (C.zf) goto L_103142ab;
  /* 10314281 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314284 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314288 je 0x103142ab */
  if (C.zf) goto L_103142ab;
  /* 1031428a push 0x1033a790 */
  push32((uint32_t)(0x1033a790u));
  /* 1031428f push 0 */
  push32((uint32_t)(0x0u));
  /* 10314291 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10314296 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 1031429b push 2 */
  push32((uint32_t)(0x2u));
  /* 1031429d call 0x10312780 */
  push32(0x103142a2u); f_10312780();
  /* 103142a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103142a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103142a8 jne 0x103142ab */
  if (!C.zf) goto L_103142ab;
  /* 103142aa int3  */
  x86_unimpl("int3 @ 0x103142aa");
L_103142ab:;
  /* 103142ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103142ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103142af jne 0x10314258 */
  if (!C.zf) goto L_10314258;
  /* 103142b1 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 103142b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103142b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103142bb jne 0x10314386 */
  if (!C.zf) goto L_10314386;
  /* 103142c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 103142c3 mov cl, byte ptr [0x1033da90] */
  CL = (r8((uint32_t)(0x1033da90)));
  /* 103142c9 push ecx */
  push32((uint32_t)(ECX));
  /* 103142ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103142cd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103142d0 push edx */
  push32((uint32_t)(EDX));
  /* 103142d1 call 0x103147d0 */
  push32(0x103142d6u); f_103147d0();
  /* 103142d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103142d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103142db jne 0x10314320 */
  if (!C.zf) goto L_10314320;
L_103142dd:;
  /* 103142dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103142e0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103142e3 push eax */
  push32((uint32_t)(EAX));
  /* 103142e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103142e7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 103142ea push edx */
  push32((uint32_t)(EDX));
  /* 103142eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103142ee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103142f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103142f7 mov edx, dword ptr [ecx*4 + 0x1033da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da94)));
  /* 103142fe push edx */
  push32((uint32_t)(EDX));
  /* 103142ff push 0x1033a764 */
  push32((uint32_t)(0x1033a764u));
  /* 10314304 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314306 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031430a push 1 */
  push32((uint32_t)(0x1u));
  /* 1031430c call 0x10312780 */
  push32(0x10314311u); f_10312780();
  /* 10314311 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314314 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314317 jne 0x1031431a */
  if (!C.zf) goto L_1031431a;
  /* 10314319 int3  */
  x86_unimpl("int3 @ 0x10314319");
L_1031431a:;
  /* 1031431a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031431c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031431e jne 0x103142dd */
  if (!C.zf) goto L_103142dd;
L_10314320:;
  /* 10314320 push 4 */
  push32((uint32_t)(0x4u));
  /* 10314322 mov cl, byte ptr [0x1033da90] */
  CL = (r8((uint32_t)(0x1033da90)));
  /* 10314328 push ecx */
  push32((uint32_t)(ECX));
  /* 10314329 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031432c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1031432f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314332 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10314336 push edx */
  push32((uint32_t)(EDX));
  /* 10314337 call 0x103147d0 */
  push32(0x1031433cu); f_103147d0();
  /* 1031433c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031433f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314341 jne 0x10314386 */
  if (!C.zf) goto L_10314386;
L_10314343:;
  /* 10314343 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314346 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314349 push eax */
  push32((uint32_t)(EAX));
  /* 1031434a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031434d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10314350 push edx */
  push32((uint32_t)(EDX));
  /* 10314351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314354 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10314357 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1031435d mov edx, dword ptr [ecx*4 + 0x1033da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da94)));
  /* 10314364 push edx */
  push32((uint32_t)(EDX));
  /* 10314365 push 0x1033a738 */
  push32((uint32_t)(0x1033a738u));
  /* 1031436a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031436c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031436e push 0 */
  push32((uint32_t)(0x0u));
  /* 10314370 push 1 */
  push32((uint32_t)(0x1u));
  /* 10314372 call 0x10312780 */
  push32(0x10314377u); f_10312780();
  /* 10314377 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031437a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031437d jne 0x10314380 */
  if (!C.zf) goto L_10314380;
  /* 1031437f int3  */
  x86_unimpl("int3 @ 0x1031437f");
L_10314380:;
  /* 10314380 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314382 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314384 jne 0x10314343 */
  if (!C.zf) goto L_10314343;
L_10314386:;
  /* 10314386 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314389 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031438d jne 0x103143fb */
  if (!C.zf) goto L_103143fb;
L_1031438f:;
  /* 1031438f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314392 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314399 jne 0x103143a4 */
  if (!C.zf) goto L_103143a4;
  /* 1031439b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031439e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103143a2 je 0x103143c5 */
  if (C.zf) goto L_103143c5;
L_103143a4:;
  /* 103143a4 push 0x1033a6f8 */
  push32((uint32_t)(0x1033a6f8u));
  /* 103143a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103143ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 103143b0 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103143b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 103143b7 call 0x10312780 */
  push32(0x103143bcu); f_10312780();
  /* 103143bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103143bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103143c2 jne 0x103143c5 */
  if (!C.zf) goto L_103143c5;
  /* 103143c4 int3  */
  x86_unimpl("int3 @ 0x103143c4");
L_103143c5:;
  /* 103143c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103143c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103143c9 jne 0x1031438f */
  if (!C.zf) goto L_1031438f;
  /* 103143cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103143ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103143d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103143d4 push eax */
  push32((uint32_t)(EAX));
  /* 103143d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103143d7 mov cl, byte ptr [0x1033da91] */
  CL = (r8((uint32_t)(0x1033da91)));
  /* 103143dd push ecx */
  push32((uint32_t)(ECX));
  /* 103143de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103143e1 push edx */
  push32((uint32_t)(EDX));
  /* 103143e2 call 0x10317430 */
  push32(0x103143e7u); f_10317430();
  /* 103143e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103143ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103143ed push eax */
  push32((uint32_t)(EAX));
  /* 103143ee call 0x10317830 */
  push32(0x103143f3u); f_10317830();
  /* 103143f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103143f6 jmp 0x10314565 */
  goto L_10314565;
L_103143fb:;
  /* 103143fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103143fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314402 jne 0x10314411 */
  if (!C.zf) goto L_10314411;
  /* 10314404 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314408 jne 0x10314411 */
  if (!C.zf) goto L_10314411;
  /* 1031440a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10314411:;
  /* 10314411 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314414 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314417 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031441a je 0x1031443d */
  if (C.zf) goto L_1031443d;
  /* 1031441c push 0x1033a6d8 */
  push32((uint32_t)(0x1033a6d8u));
  /* 10314421 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314423 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10314428 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 1031442d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031442f call 0x10312780 */
  push32(0x10314434u); f_10312780();
  /* 10314434 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314437 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031443a jne 0x1031443d */
  if (!C.zf) goto L_1031443d;
  /* 1031443c int3  */
  x86_unimpl("int3 @ 0x1031443c");
L_1031443d:;
  /* 1031443d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031443f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10314441 jne 0x10314411 */
  if (!C.zf) goto L_10314411;
  /* 10314443 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314446 mov eax, dword ptr [0x1033f508] */
  EAX = (r32((uint32_t)(0x1033f508)));
  /* 1031444b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031444e mov dword ptr [0x1033f508], eax */
  w32((uint32_t)(0x1033f508), (EAX));
  /* 10314453 mov ecx, dword ptr [0x1033da84] */
  ECX = (r32((uint32_t)(0x1033da84)));
  /* 10314459 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1031445c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031445e jne 0x1031453c */
  if (!C.zf) goto L_1031453c;
  /* 10314464 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314467 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031446a je 0x1031447c */
  if (C.zf) goto L_1031447c;
  /* 1031446c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031446f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10314471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314474 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10314477 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1031447a jmp 0x103144ba */
  goto L_103144ba;
L_1031447c:;
  /* 1031447c mov ecx, dword ptr [0x1033f4fc] */
  ECX = (r32((uint32_t)(0x1033f4fc)));
  /* 10314482 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314485 je 0x103144a8 */
  if (C.zf) goto L_103144a8;
  /* 10314487 push 0x1033a6c0 */
  push32((uint32_t)(0x1033a6c0u));
  /* 1031448c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031448e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10314493 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10314498 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031449a call 0x10312780 */
  push32(0x1031449fu); f_10312780();
  /* 1031449f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103144a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103144a5 jne 0x103144a8 */
  if (!C.zf) goto L_103144a8;
  /* 103144a7 int3  */
  x86_unimpl("int3 @ 0x103144a7");
L_103144a8:;
  /* 103144a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103144aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103144ac jne 0x1031447c */
  if (!C.zf) goto L_1031447c;
  /* 103144ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103144b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103144b4 mov dword ptr [0x1033f4fc], ecx */
  w32((uint32_t)(0x1033f4fc), (ECX));
L_103144ba:;
  /* 103144ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103144bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103144c1 je 0x103144d2 */
  if (C.zf) goto L_103144d2;
  /* 103144c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103144c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 103144c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103144cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103144ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 103144d0 jmp 0x1031450f */
  goto L_1031450f;
L_103144d2:;
  /* 103144d2 mov ecx, dword ptr [0x1033f504] */
  ECX = (r32((uint32_t)(0x1033f504)));
  /* 103144d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103144db je 0x103144fe */
  if (C.zf) goto L_103144fe;
  /* 103144dd push 0x1033a6a8 */
  push32((uint32_t)(0x1033a6a8u));
  /* 103144e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103144e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 103144e9 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103144ee push 2 */
  push32((uint32_t)(0x2u));
  /* 103144f0 call 0x10312780 */
  push32(0x103144f5u); f_10312780();
  /* 103144f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103144f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103144fb jne 0x103144fe */
  if (!C.zf) goto L_103144fe;
  /* 103144fd int3  */
  x86_unimpl("int3 @ 0x103144fd");
L_103144fe:;
  /* 103144fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314502 jne 0x103144d2 */
  if (!C.zf) goto L_103144d2;
  /* 10314504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314507 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10314509 mov dword ptr [0x1033f504], ecx */
  w32((uint32_t)(0x1033f504), (ECX));
L_1031450f:;
  /* 1031450f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314512 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10314515 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314518 push eax */
  push32((uint32_t)(EAX));
  /* 10314519 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031451b mov cl, byte ptr [0x1033da91] */
  CL = (r8((uint32_t)(0x1033da91)));
  /* 10314521 push ecx */
  push32((uint32_t)(ECX));
  /* 10314522 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314525 push edx */
  push32((uint32_t)(EDX));
  /* 10314526 call 0x10317430 */
  push32(0x1031452bu); f_10317430();
  /* 1031452b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031452e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314531 push eax */
  push32((uint32_t)(EAX));
  /* 10314532 call 0x10317830 */
  push32(0x10314537u); f_10317830();
  /* 10314537 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031453a jmp 0x10314565 */
  goto L_10314565;
L_1031453c:;
  /* 1031453c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031453f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10314546 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314549 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1031454c push eax */
  push32((uint32_t)(EAX));
  /* 1031454d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031454f mov cl, byte ptr [0x1033da91] */
  CL = (r8((uint32_t)(0x1033da91)));
  /* 10314555 push ecx */
  push32((uint32_t)(ECX));
  /* 10314556 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314559 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031455c push edx */
  push32((uint32_t)(EDX));
  /* 1031455d call 0x10317430 */
  push32(0x10314562u); f_10317430();
  /* 10314562 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10314565:;
  /* 10314565 pop edi */
  EDI = (pop32());
  /* 10314566 pop esi */
  ESI = (pop32());
  /* 10314567 pop ebx */
  EBX = (pop32());
  /* 10314568 mov esp, ebp */
  ESP = (EBP);
  /* 1031456a pop ebp */
  EBP = (pop32());
  /* 1031456b ret  */
  ESPCHK(0x10314180u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10314570 (19 bytes, 9 insns) */
void f_10314570(void) {
  FTRACE(0x10314570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314570 push ebp */
  push32((uint32_t)(EBP));
  /* 10314571 mov ebp, esp */
  EBP = (ESP);
  /* 10314573 push 1 */
  push32((uint32_t)(0x1u));
  /* 10314575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314578 push eax */
  push32((uint32_t)(EAX));
  /* 10314579 call 0x10314590 */
  push32(0x1031457eu); f_10314590();
  /* 1031457e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314581 pop ebp */
  EBP = (pop32());
  /* 10314582 ret  */
  ESPCHK(0x10314570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10314590 (342 bytes, 119 insns) */
void f_10314590(void) {
  FTRACE(0x10314590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314590 push ebp */
  push32((uint32_t)(EBP));
  /* 10314591 mov ebp, esp */
  EBP = (ESP);
  /* 10314593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314596 push ebx */
  push32((uint32_t)(EBX));
  /* 10314597 push esi */
  push32((uint32_t)(ESI));
  /* 10314598 push edi */
  push32((uint32_t)(EDI));
  /* 10314599 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 1031459e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103145a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103145a3 je 0x103145d5 */
  if (C.zf) goto L_103145d5;
L_103145a5:;
  /* 103145a5 call 0x10314860 */
  push32(0x103145aau); f_10314860();
  /* 103145aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103145ac jne 0x103145cf */
  if (!C.zf) goto L_103145cf;
  /* 103145ae push 0x1033a4f4 */
  push32((uint32_t)(0x1033a4f4u));
  /* 103145b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103145b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 103145ba push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103145bf push 2 */
  push32((uint32_t)(0x2u));
  /* 103145c1 call 0x10312780 */
  push32(0x103145c6u); f_10312780();
  /* 103145c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103145c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103145cc jne 0x103145cf */
  if (!C.zf) goto L_103145cf;
  /* 103145ce int3  */
  x86_unimpl("int3 @ 0x103145ce");
L_103145cf:;
  /* 103145cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103145d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103145d3 jne 0x103145a5 */
  if (!C.zf) goto L_103145a5;
L_103145d5:;
  /* 103145d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103145d7 call 0x103170c0 */
  push32(0x103145dcu); f_103170c0();
  /* 103145dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103145df:;
  /* 103145df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103145e2 push edx */
  push32((uint32_t)(EDX));
  /* 103145e3 call 0x10314cc0 */
  push32(0x103145e8u); f_10314cc0();
  /* 103145e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103145eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103145ed jne 0x10314610 */
  if (!C.zf) goto L_10314610;
  /* 103145ef push 0x1033a5f8 */
  push32((uint32_t)(0x1033a5f8u));
  /* 103145f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103145f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 103145fb push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10314600 push 2 */
  push32((uint32_t)(0x2u));
  /* 10314602 call 0x10312780 */
  push32(0x10314607u); f_10312780();
  /* 10314607 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031460a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031460d jne 0x10314610 */
  if (!C.zf) goto L_10314610;
  /* 1031460f int3  */
  x86_unimpl("int3 @ 0x1031460f");
L_10314610:;
  /* 10314610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314614 jne 0x103145df */
  if (!C.zf) goto L_103145df;
  /* 10314616 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314619 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031461c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1031461f:;
  /* 1031461f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314622 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314625 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031462a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031462d je 0x10314672 */
  if (C.zf) goto L_10314672;
  /* 1031462f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314632 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314636 je 0x10314672 */
  if (C.zf) goto L_10314672;
  /* 10314638 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031463b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031463e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314643 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314646 je 0x10314672 */
  if (C.zf) goto L_10314672;
  /* 10314648 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031464b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031464f je 0x10314672 */
  if (C.zf) goto L_10314672;
  /* 10314651 push 0x1033a790 */
  push32((uint32_t)(0x1033a790u));
  /* 10314656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314658 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1031465d push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 10314662 push 2 */
  push32((uint32_t)(0x2u));
  /* 10314664 call 0x10312780 */
  push32(0x10314669u); f_10312780();
  /* 10314669 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031466c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031466f jne 0x10314672 */
  if (!C.zf) goto L_10314672;
  /* 10314671 int3  */
  x86_unimpl("int3 @ 0x10314671");
L_10314672:;
  /* 10314672 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314674 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314676 jne 0x1031461f */
  if (!C.zf) goto L_1031461f;
  /* 10314678 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031467b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031467f jne 0x1031468e */
  if (!C.zf) goto L_1031468e;
  /* 10314681 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314685 jne 0x1031468e */
  if (!C.zf) goto L_1031468e;
  /* 10314687 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1031468e:;
  /* 1031468e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314691 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314695 je 0x103146c9 */
  if (C.zf) goto L_103146c9;
L_10314697:;
  /* 10314697 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031469a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031469d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103146a0 je 0x103146c3 */
  if (C.zf) goto L_103146c3;
  /* 103146a2 push 0x1033a6d8 */
  push32((uint32_t)(0x1033a6d8u));
  /* 103146a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103146a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 103146ae push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 103146b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103146b5 call 0x10312780 */
  push32(0x103146bau); f_10312780();
  /* 103146ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103146bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103146c0 jne 0x103146c3 */
  if (!C.zf) goto L_103146c3;
  /* 103146c2 int3  */
  x86_unimpl("int3 @ 0x103146c2");
L_103146c3:;
  /* 103146c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103146c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103146c7 jne 0x10314697 */
  if (!C.zf) goto L_10314697;
L_103146c9:;
  /* 103146c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103146cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103146cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103146d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103146d4 call 0x10317160 */
  push32(0x103146d9u); f_10317160();
  /* 103146d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103146dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103146df pop edi */
  EDI = (pop32());
  /* 103146e0 pop esi */
  ESI = (pop32());
  /* 103146e1 pop ebx */
  EBX = (pop32());
  /* 103146e2 mov esp, ebp */
  ESP = (EBP);
  /* 103146e4 pop ebp */
  EBP = (pop32());
  /* 103146e5 ret  */
  ESPCHK(0x10314590u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f0 @ 0x103146f0 (28 bytes, 11 insns) */
void f_103146f0(void) {
  FTRACE(0x103146f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103146f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103146f1 mov ebp, esp */
  EBP = (ESP);
  /* 103146f3 push ecx */
  push32((uint32_t)(ECX));
  /* 103146f4 mov eax, dword ptr [0x1033da8c] */
  EAX = (r32((uint32_t)(0x1033da8c)));
  /* 103146f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103146fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103146ff mov dword ptr [0x1033da8c], ecx */
  w32((uint32_t)(0x1033da8c), (ECX));
  /* 10314705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314708 mov esp, ebp */
  ESP = (EBP);
  /* 1031470a pop ebp */
  EBP = (pop32());
  /* 1031470b ret  */
  ESPCHK(0x103146f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004710 @ 0x10314710 (157 bytes, 59 insns) */
void f_10314710(void) {
  FTRACE(0x10314710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314710 push ebp */
  push32((uint32_t)(EBP));
  /* 10314711 mov ebp, esp */
  EBP = (ESP);
  /* 10314713 push ecx */
  push32((uint32_t)(ECX));
  /* 10314714 push ebx */
  push32((uint32_t)(EBX));
  /* 10314715 push esi */
  push32((uint32_t)(ESI));
  /* 10314716 push edi */
  push32((uint32_t)(EDI));
  /* 10314717 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314719 call 0x103170c0 */
  push32(0x1031471eu); f_103170c0();
  /* 1031471e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314721 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314724 push eax */
  push32((uint32_t)(EAX));
  /* 10314725 call 0x10314cc0 */
  push32(0x1031472au); f_10314cc0();
  /* 1031472a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031472d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031472f je 0x1031479c */
  if (C.zf) goto L_1031479c;
  /* 10314731 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314734 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314737 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031473a:;
  /* 1031473a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031473d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314740 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314745 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314748 je 0x1031478d */
  if (C.zf) goto L_1031478d;
  /* 1031474a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031474d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314751 je 0x1031478d */
  if (C.zf) goto L_1031478d;
  /* 10314753 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314756 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314759 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031475e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314761 je 0x1031478d */
  if (C.zf) goto L_1031478d;
  /* 10314763 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314766 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031476a je 0x1031478d */
  if (C.zf) goto L_1031478d;
  /* 1031476c push 0x1033a790 */
  push32((uint32_t)(0x1033a790u));
  /* 10314771 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314773 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10314778 push 0x1033a4e8 */
  push32((uint32_t)(0x1033a4e8u));
  /* 1031477d push 2 */
  push32((uint32_t)(0x2u));
  /* 1031477f call 0x10312780 */
  push32(0x10314784u); f_10312780();
  /* 10314784 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314787 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031478a jne 0x1031478d */
  if (!C.zf) goto L_1031478d;
  /* 1031478c int3  */
  x86_unimpl("int3 @ 0x1031478c");
L_1031478d:;
  /* 1031478d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031478f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314791 jne 0x1031473a */
  if (!C.zf) goto L_1031473a;
  /* 10314793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314796 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314799 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1031479c:;
  /* 1031479c push 9 */
  push32((uint32_t)(0x9u));
  /* 1031479e call 0x10317160 */
  push32(0x103147a3u); f_10317160();
  /* 103147a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103147a6 pop edi */
  EDI = (pop32());
  /* 103147a7 pop esi */
  ESI = (pop32());
  /* 103147a8 pop ebx */
  EBX = (pop32());
  /* 103147a9 mov esp, ebp */
  ESP = (EBP);
  /* 103147ab pop ebp */
  EBP = (pop32());
  /* 103147ac ret  */
  ESPCHK(0x10314710u, _esp0);
  ESP += 4; return;
}

/* FUN_100047b0 @ 0x103147b0 (28 bytes, 11 insns) */
void f_103147b0(void) {
  FTRACE(0x103147b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103147b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103147b1 mov ebp, esp */
  EBP = (ESP);
  /* 103147b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103147b4 mov eax, dword ptr [0x1033dc90] */
  EAX = (r32((uint32_t)(0x1033dc90)));
  /* 103147b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103147bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103147bf mov dword ptr [0x1033dc90], ecx */
  w32((uint32_t)(0x1033dc90), (ECX));
  /* 103147c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103147c8 mov esp, ebp */
  ESP = (EBP);
  /* 103147ca pop ebp */
  EBP = (pop32());
  /* 103147cb ret  */
  ESPCHK(0x103147b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100047d0 @ 0x103147d0 (136 bytes, 55 insns) */
void f_103147d0(void) {
  FTRACE(0x103147d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103147d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103147d1 mov ebp, esp */
  EBP = (ESP);
  /* 103147d3 push ecx */
  push32((uint32_t)(ECX));
  /* 103147d4 push ebx */
  push32((uint32_t)(EBX));
  /* 103147d5 push esi */
  push32((uint32_t)(ESI));
  /* 103147d6 push edi */
  push32((uint32_t)(EDI));
  /* 103147d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_103147de:;
  /* 103147de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103147e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103147e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103147e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103147ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103147ec je 0x1031484e */
  if (C.zf) goto L_1031484e;
  /* 103147ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103147f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103147f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103147f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103147f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103147fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314801 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314804 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10314807 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314809 je 0x1031484c */
  if (C.zf) goto L_1031484c;
L_1031480b:;
  /* 1031480b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031480e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314813 push eax */
  push32((uint32_t)(EAX));
  /* 10314814 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314817 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314819 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1031481c push edx */
  push32((uint32_t)(EDX));
  /* 1031481d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314820 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314823 push eax */
  push32((uint32_t)(EAX));
  /* 10314824 push 0x1033a7d4 */
  push32((uint32_t)(0x1033a7d4u));
  /* 10314829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031482b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031482d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031482f push 0 */
  push32((uint32_t)(0x0u));
  /* 10314831 call 0x10312780 */
  push32(0x10314836u); f_10312780();
  /* 10314836 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314839 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031483c jne 0x1031483f */
  if (!C.zf) goto L_1031483f;
  /* 1031483e int3  */
  x86_unimpl("int3 @ 0x1031483e");
L_1031483f:;
  /* 1031483f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10314841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10314843 jne 0x1031480b */
  if (!C.zf) goto L_1031480b;
  /* 10314845 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1031484c:;
  /* 1031484c jmp 0x103147de */
  goto L_103147de;
L_1031484e:;
  /* 1031484e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314851 pop edi */
  EDI = (pop32());
  /* 10314852 pop esi */
  ESI = (pop32());
  /* 10314853 pop ebx */
  EBX = (pop32());
  /* 10314854 mov esp, ebp */
  ESP = (EBP);
  /* 10314856 pop ebp */
  EBP = (pop32());
  /* 10314857 ret  */
  ESPCHK(0x103147d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004860 @ 0x10314860 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10314860(void) {
  FTRACE(0x10314860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314860 push ebp */
  push32((uint32_t)(EBP));
  /* 10314861 mov ebp, esp */
  EBP = (ESP);
  /* 10314863 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314866 push ebx */
  push32((uint32_t)(EBX));
  /* 10314867 push esi */
  push32((uint32_t)(ESI));
  /* 10314868 push edi */
  push32((uint32_t)(EDI));
  /* 10314869 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10314870 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 10314875 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10314878 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031487a jne 0x10314886 */
  if (!C.zf) goto L_10314886;
  /* 1031487c mov eax, 1 */
  EAX = (0x1u);
  /* 10314881 jmp 0x10314bb8 */
  goto L_10314bb8;
L_10314886:;
  /* 10314886 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314888 call 0x103170c0 */
  push32(0x1031488du); f_103170c0();
  /* 1031488d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314890 call 0x103178a0 */
  push32(0x10314895u); f_103178a0();
  /* 10314895 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10314898 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031489c je 0x103149a9 */
  if (C.zf) goto L_103149a9;
  /* 103148a2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103148a6 je 0x103149a9 */
  if (C.zf) goto L_103149a9;
  /* 103148ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103148af mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 103148b2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 103148b5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103148b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 103148bb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103148bf ja 0x10314972 */
  if ((!C.cf&&!C.zf)) goto L_10314972;
  /* 103148c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 103148c8 jmp dword ptr [eax*4 + 0x10314bbf] */
  switch (EAX) {
    case 0: goto L_1031494a;
    case 1: goto L_10314922;
    case 2: goto L_103148fa;
    case 3: goto L_103148cf;
    default: x86_unimpl("switch@0x103148c8 out of table"); return;
  }
L_103148cf:;
  /* 103148cf push 0x1033a928 */
  push32((uint32_t)(0x1033a928u));
  /* 103148d4 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 103148d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103148db push 0 */
  push32((uint32_t)(0x0u));
  /* 103148dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103148df push 0 */
  push32((uint32_t)(0x0u));
  /* 103148e1 call 0x10312780 */
  push32(0x103148e6u); f_10312780();
  /* 103148e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103148e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103148ec jne 0x103148ef */
  if (!C.zf) goto L_103148ef;
  /* 103148ee int3  */
  x86_unimpl("int3 @ 0x103148ee");
L_103148ef:;
  /* 103148ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103148f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103148f3 jne 0x103148cf */
  if (!C.zf) goto L_103148cf;
  /* 103148f5 jmp 0x10314998 */
  goto L_10314998;
L_103148fa:;
  /* 103148fa push 0x1033a904 */
  push32((uint32_t)(0x1033a904u));
  /* 103148ff push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10314904 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314908 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031490a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031490c call 0x10312780 */
  push32(0x10314911u); f_10312780();
  /* 10314911 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314917 jne 0x1031491a */
  if (!C.zf) goto L_1031491a;
  /* 10314919 int3  */
  x86_unimpl("int3 @ 0x10314919");
L_1031491a:;
  /* 1031491a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031491c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031491e jne 0x103148fa */
  if (!C.zf) goto L_103148fa;
  /* 10314920 jmp 0x10314998 */
  goto L_10314998;
L_10314922:;
  /* 10314922 push 0x1033a8e0 */
  push32((uint32_t)(0x1033a8e0u));
  /* 10314927 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 1031492c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031492e push 0 */
  push32((uint32_t)(0x0u));
  /* 10314930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314934 call 0x10312780 */
  push32(0x10314939u); f_10312780();
  /* 10314939 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031493c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031493f jne 0x10314942 */
  if (!C.zf) goto L_10314942;
  /* 10314941 int3  */
  x86_unimpl("int3 @ 0x10314941");
L_10314942:;
  /* 10314942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314946 jne 0x10314922 */
  if (!C.zf) goto L_10314922;
  /* 10314948 jmp 0x10314998 */
  goto L_10314998;
L_1031494a:;
  /* 1031494a push 0x1033a8bc */
  push32((uint32_t)(0x1033a8bcu));
  /* 1031494f push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10314954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314958 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031495a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031495c call 0x10312780 */
  push32(0x10314961u); f_10312780();
  /* 10314961 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314964 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314967 jne 0x1031496a */
  if (!C.zf) goto L_1031496a;
  /* 10314969 int3  */
  x86_unimpl("int3 @ 0x10314969");
L_1031496a:;
  /* 1031496a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031496c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031496e jne 0x1031494a */
  if (!C.zf) goto L_1031494a;
  /* 10314970 jmp 0x10314998 */
  goto L_10314998;
L_10314972:;
  /* 10314972 push 0x1033a890 */
  push32((uint32_t)(0x1033a890u));
  /* 10314977 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 1031497c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031497e push 0 */
  push32((uint32_t)(0x0u));
  /* 10314980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314982 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314984 call 0x10312780 */
  push32(0x10314989u); f_10312780();
  /* 10314989 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031498c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031498f jne 0x10314992 */
  if (!C.zf) goto L_10314992;
  /* 10314991 int3  */
  x86_unimpl("int3 @ 0x10314991");
L_10314992:;
  /* 10314992 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314994 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314996 jne 0x10314972 */
  if (!C.zf) goto L_10314972;
L_10314998:;
  /* 10314998 push 9 */
  push32((uint32_t)(0x9u));
  /* 1031499a call 0x10317160 */
  push32(0x1031499fu); f_10317160();
  /* 1031499f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103149a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103149a4 jmp 0x10314bb8 */
  goto L_10314bb8;
L_103149a9:;
  /* 103149a9 mov eax, dword ptr [0x1033f504] */
  EAX = (r32((uint32_t)(0x1033f504)));
  /* 103149ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103149b1 jmp 0x103149bb */
  goto L_103149bb;
L_103149b3:;
  /* 103149b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103149b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103149b8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_103149bb:;
  /* 103149bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103149bf je 0x10314bab */
  if (C.zf) goto L_10314bab;
  /* 103149c5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 103149cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103149cf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103149d2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103149d8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103149db je 0x10314a00 */
  if (C.zf) goto L_10314a00;
  /* 103149dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103149e0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103149e4 je 0x10314a00 */
  if (C.zf) goto L_10314a00;
  /* 103149e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103149e9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 103149ec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 103149f2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103149f5 je 0x10314a00 */
  if (C.zf) goto L_10314a00;
  /* 103149f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103149fa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103149fe jne 0x10314a18 */
  if (!C.zf) goto L_10314a18;
L_10314a00:;
  /* 10314a00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a03 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10314a06 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10314a0c mov edx, dword ptr [ecx*4 + 0x1033da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da94)));
  /* 10314a13 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10314a16 jmp 0x10314a1f */
  goto L_10314a1f;
L_10314a18:;
  /* 10314a18 mov dword ptr [ebp - 0x14], 0x1033a888 */
  w32((uint32_t)(EBP + -0x14), (0x1033a888u));
L_10314a1f:;
  /* 10314a1f push 4 */
  push32((uint32_t)(0x4u));
  /* 10314a21 mov al, byte ptr [0x1033da90] */
  AL = (r8((uint32_t)(0x1033da90)));
  /* 10314a26 push eax */
  push32((uint32_t)(EAX));
  /* 10314a27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a2a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a2d push ecx */
  push32((uint32_t)(ECX));
  /* 10314a2e call 0x103147d0 */
  push32(0x10314a33u); f_103147d0();
  /* 10314a33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314a38 jne 0x10314a74 */
  if (!C.zf) goto L_10314a74;
L_10314a3a:;
  /* 10314a3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a3d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a40 push edx */
  push32((uint32_t)(EDX));
  /* 10314a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10314a47 push ecx */
  push32((uint32_t)(ECX));
  /* 10314a48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10314a4b push edx */
  push32((uint32_t)(EDX));
  /* 10314a4c push 0x1033a764 */
  push32((uint32_t)(0x1033a764u));
  /* 10314a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314a59 call 0x10312780 */
  push32(0x10314a5eu); f_10312780();
  /* 10314a5e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314a64 jne 0x10314a67 */
  if (!C.zf) goto L_10314a67;
  /* 10314a66 int3  */
  x86_unimpl("int3 @ 0x10314a66");
L_10314a67:;
  /* 10314a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314a6b jne 0x10314a3a */
  if (!C.zf) goto L_10314a3a;
  /* 10314a6d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10314a74:;
  /* 10314a74 push 4 */
  push32((uint32_t)(0x4u));
  /* 10314a76 mov cl, byte ptr [0x1033da90] */
  CL = (r8((uint32_t)(0x1033da90)));
  /* 10314a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10314a7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a80 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10314a83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a86 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10314a8a push edx */
  push32((uint32_t)(EDX));
  /* 10314a8b call 0x103147d0 */
  push32(0x10314a90u); f_103147d0();
  /* 10314a90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314a95 jne 0x10314ad1 */
  if (!C.zf) goto L_10314ad1;
L_10314a97:;
  /* 10314a97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314a9a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314a9d push eax */
  push32((uint32_t)(EAX));
  /* 10314a9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314aa1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10314aa4 push edx */
  push32((uint32_t)(EDX));
  /* 10314aa5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10314aa8 push eax */
  push32((uint32_t)(EAX));
  /* 10314aa9 push 0x1033a738 */
  push32((uint32_t)(0x1033a738u));
  /* 10314aae push 0 */
  push32((uint32_t)(0x0u));
  /* 10314ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314ab6 call 0x10312780 */
  push32(0x10314abbu); f_10312780();
  /* 10314abb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314abe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314ac1 jne 0x10314ac4 */
  if (!C.zf) goto L_10314ac4;
  /* 10314ac3 int3  */
  x86_unimpl("int3 @ 0x10314ac3");
L_10314ac4:;
  /* 10314ac4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10314ac6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10314ac8 jne 0x10314a97 */
  if (!C.zf) goto L_10314a97;
  /* 10314aca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10314ad1:;
  /* 10314ad1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314ad4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314ad8 jne 0x10314b2a */
  if (!C.zf) goto L_10314b2a;
  /* 10314ada mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314add mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10314ae0 push ecx */
  push32((uint32_t)(ECX));
  /* 10314ae1 mov dl, byte ptr [0x1033da91] */
  DL = (r8((uint32_t)(0x1033da91)));
  /* 10314ae7 push edx */
  push32((uint32_t)(EDX));
  /* 10314ae8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314aeb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314aee push eax */
  push32((uint32_t)(EAX));
  /* 10314aef call 0x103147d0 */
  push32(0x10314af4u); f_103147d0();
  /* 10314af4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314af9 jne 0x10314b2a */
  if (!C.zf) goto L_10314b2a;
L_10314afb:;
  /* 10314afb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314afe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314b01 push ecx */
  push32((uint32_t)(ECX));
  /* 10314b02 push 0x1033a85c */
  push32((uint32_t)(0x1033a85cu));
  /* 10314b07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b0f call 0x10312780 */
  push32(0x10314b14u); f_10312780();
  /* 10314b14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314b17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314b1a jne 0x10314b1d */
  if (!C.zf) goto L_10314b1d;
  /* 10314b1c int3  */
  x86_unimpl("int3 @ 0x10314b1c");
L_10314b1d:;
  /* 10314b1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314b1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314b21 jne 0x10314afb */
  if (!C.zf) goto L_10314afb;
  /* 10314b23 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10314b2a:;
  /* 10314b2a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314b2e jne 0x10314ba6 */
  if (!C.zf) goto L_10314ba6;
  /* 10314b30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314b33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314b37 je 0x10314b6c */
  if (C.zf) goto L_10314b6c;
L_10314b39:;
  /* 10314b39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314b3c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10314b3f push edx */
  push32((uint32_t)(EDX));
  /* 10314b40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314b43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10314b46 push ecx */
  push32((uint32_t)(ECX));
  /* 10314b47 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10314b4a push edx */
  push32((uint32_t)(EDX));
  /* 10314b4b push 0x1033a83c */
  push32((uint32_t)(0x1033a83cu));
  /* 10314b50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b58 call 0x10312780 */
  push32(0x10314b5du); f_10312780();
  /* 10314b5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314b60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314b63 jne 0x10314b66 */
  if (!C.zf) goto L_10314b66;
  /* 10314b65 int3  */
  x86_unimpl("int3 @ 0x10314b65");
L_10314b66:;
  /* 10314b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314b68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314b6a jne 0x10314b39 */
  if (!C.zf) goto L_10314b39;
L_10314b6c:;
  /* 10314b6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314b6f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10314b72 push edx */
  push32((uint32_t)(EDX));
  /* 10314b73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314b76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314b79 push eax */
  push32((uint32_t)(EAX));
  /* 10314b7a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10314b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10314b7e push 0x1033a810 */
  push32((uint32_t)(0x1033a810u));
  /* 10314b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314b8b call 0x10312780 */
  push32(0x10314b90u); f_10312780();
  /* 10314b90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314b93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314b96 jne 0x10314b99 */
  if (!C.zf) goto L_10314b99;
  /* 10314b98 int3  */
  x86_unimpl("int3 @ 0x10314b98");
L_10314b99:;
  /* 10314b99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10314b9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10314b9d jne 0x10314b6c */
  if (!C.zf) goto L_10314b6c;
  /* 10314b9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10314ba6:;
  /* 10314ba6 jmp 0x103149b3 */
  goto L_103149b3;
L_10314bab:;
  /* 10314bab push 9 */
  push32((uint32_t)(0x9u));
  /* 10314bad call 0x10317160 */
  push32(0x10314bb2u); f_10317160();
  /* 10314bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10314bb8:;
  /* 10314bb8 pop edi */
  EDI = (pop32());
  /* 10314bb9 pop esi */
  ESI = (pop32());
  /* 10314bba pop ebx */
  EBX = (pop32());
  /* 10314bbb mov esp, ebp */
  ESP = (EBP);
  /* 10314bbd pop ebp */
  EBP = (pop32());
  /* 10314bbe ret  */
  ESPCHK(0x10314860u, _esp0);
  ESP += 4; return;
}

/* FUN_10004bd0 @ 0x10314bd0 (34 bytes, 13 insns) */
void f_10314bd0(void) {
  FTRACE(0x10314bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10314bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10314bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10314bd4 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 10314bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10314bdc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314be0 je 0x10314beb */
  if (C.zf) goto L_10314beb;
  /* 10314be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314be5 mov dword ptr [0x1033da84], ecx */
  w32((uint32_t)(0x1033da84), (ECX));
L_10314beb:;
  /* 10314beb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314bee mov esp, ebp */
  ESP = (EBP);
  /* 10314bf0 pop ebp */
  EBP = (pop32());
  /* 10314bf1 ret  */
  ESPCHK(0x10314bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x10314c00 (103 bytes, 38 insns) */
void f_10314c00(void) {
  FTRACE(0x10314c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10314c01 mov ebp, esp */
  EBP = (ESP);
  /* 10314c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10314c04 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 10314c09 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10314c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314c0e jne 0x10314c12 */
  if (!C.zf) goto L_10314c12;
  /* 10314c10 jmp 0x10314c63 */
  goto L_10314c63;
L_10314c12:;
  /* 10314c12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314c14 call 0x103170c0 */
  push32(0x10314c19u); f_103170c0();
  /* 10314c19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314c1c mov ecx, dword ptr [0x1033f504] */
  ECX = (r32((uint32_t)(0x1033f504)));
  /* 10314c22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10314c25 jmp 0x10314c2f */
  goto L_10314c2f;
L_10314c27:;
  /* 10314c27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314c2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10314c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10314c2f:;
  /* 10314c2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314c33 je 0x10314c59 */
  if (C.zf) goto L_10314c59;
  /* 10314c35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314c38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10314c3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10314c41 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314c44 jne 0x10314c57 */
  if (!C.zf) goto L_10314c57;
  /* 10314c46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314c49 push eax */
  push32((uint32_t)(EAX));
  /* 10314c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314c4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10314c51 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10314c54u);
  /* 10314c54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10314c57:;
  /* 10314c57 jmp 0x10314c27 */
  goto L_10314c27;
L_10314c59:;
  /* 10314c59 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314c5b call 0x10317160 */
  push32(0x10314c60u); f_10317160();
  /* 10314c60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10314c63:;
  /* 10314c63 mov esp, ebp */
  ESP = (EBP);
  /* 10314c65 pop ebp */
  EBP = (pop32());
  /* 10314c66 ret  */
  ESPCHK(0x10314c00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10314c70 (75 bytes, 28 insns) */
void f_10314c70(void) {
  FTRACE(0x10314c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10314c71 mov ebp, esp */
  EBP = (ESP);
  /* 10314c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10314c74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314c78 je 0x10314cad */
  if (C.zf) goto L_10314cad;
  /* 10314c7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314c7d push eax */
  push32((uint32_t)(EAX));
  /* 10314c7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314c81 push ecx */
  push32((uint32_t)(ECX));
  /* 10314c82 call dword ptr [0x10342318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342318))), 0x10314c88u);
  /* 10314c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314c8a jne 0x10314cad */
  if (!C.zf) goto L_10314cad;
  /* 10314c8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314c90 je 0x10314ca4 */
  if (C.zf) goto L_10314ca4;
  /* 10314c92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314c95 push edx */
  push32((uint32_t)(EDX));
  /* 10314c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314c99 push eax */
  push32((uint32_t)(EAX));
  /* 10314c9a call dword ptr [0x10342314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342314))), 0x10314ca0u);
  /* 10314ca0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314ca2 jne 0x10314cad */
  if (!C.zf) goto L_10314cad;
L_10314ca4:;
  /* 10314ca4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10314cab jmp 0x10314cb4 */
  goto L_10314cb4;
L_10314cad:;
  /* 10314cad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10314cb4:;
  /* 10314cb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314cb7 mov esp, ebp */
  ESP = (EBP);
  /* 10314cb9 pop ebp */
  EBP = (pop32());
  /* 10314cba ret  */
  ESPCHK(0x10314c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cc0 @ 0x10314cc0 (134 bytes, 50 insns) */
void f_10314cc0(void) {
  FTRACE(0x10314cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10314cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10314cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10314cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314cc8 jne 0x10314cce */
  if (!C.zf) goto L_10314cce;
  /* 10314cca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314ccc jmp 0x10314d42 */
  goto L_10314d42;
L_10314cce:;
  /* 10314cce push 1 */
  push32((uint32_t)(0x1u));
  /* 10314cd0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10314cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314cd5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314cd8 push eax */
  push32((uint32_t)(EAX));
  /* 10314cd9 call 0x10314c70 */
  push32(0x10314cdeu); f_10314c70();
  /* 10314cde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314ce3 jne 0x10314ce9 */
  if (!C.zf) goto L_10314ce9;
  /* 10314ce5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314ce7 jmp 0x10314d42 */
  goto L_10314d42;
L_10314ce9:;
  /* 10314ce9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314cec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314cef push ecx */
  push32((uint32_t)(ECX));
  /* 10314cf0 call 0x103179c0 */
  push32(0x10314cf5u); f_103179c0();
  /* 10314cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314cf8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10314cfb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314cff je 0x10314d16 */
  if (C.zf) goto L_10314d16;
  /* 10314d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314d04 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314d07 push edx */
  push32((uint32_t)(EDX));
  /* 10314d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314d0b push eax */
  push32((uint32_t)(EAX));
  /* 10314d0c call 0x10317a20 */
  push32(0x10314d11u); f_10317a20();
  /* 10314d11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314d14 jmp 0x10314d42 */
  goto L_10314d42;
L_10314d16:;
  /* 10314d16 mov ecx, dword ptr [0x1033f4b8] */
  ECX = (r32((uint32_t)(0x1033f4b8)));
  /* 10314d1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10314d22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10314d24 je 0x10314d2d */
  if (C.zf) goto L_10314d2d;
  /* 10314d26 mov eax, 1 */
  EAX = (0x1u);
  /* 10314d2b jmp 0x10314d42 */
  goto L_10314d42;
L_10314d2d:;
  /* 10314d2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314d30 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314d33 push edx */
  push32((uint32_t)(EDX));
  /* 10314d34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314d36 mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 10314d3b push eax */
  push32((uint32_t)(EAX));
  /* 10314d3c call dword ptr [0x1034231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034231c))), 0x10314d42u);
L_10314d42:;
  /* 10314d42 mov esp, ebp */
  ESP = (EBP);
  /* 10314d44 pop ebp */
  EBP = (pop32());
  /* 10314d45 ret  */
  ESPCHK(0x10314cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d50 @ 0x10314d50 (227 bytes, 80 insns) */
void f_10314d50(void) {
  FTRACE(0x10314d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10314d51 mov ebp, esp */
  EBP = (ESP);
  /* 10314d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10314d54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314d57 push eax */
  push32((uint32_t)(EAX));
  /* 10314d58 call 0x10314cc0 */
  push32(0x10314d5du); f_10314cc0();
  /* 10314d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314d60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314d62 jne 0x10314d6b */
  if (!C.zf) goto L_10314d6b;
  /* 10314d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314d66 jmp 0x10314e2f */
  goto L_10314e2f;
L_10314d6b:;
  /* 10314d6b push 9 */
  push32((uint32_t)(0x9u));
  /* 10314d6d call 0x103170c0 */
  push32(0x10314d72u); f_103170c0();
  /* 10314d72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314d75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314d78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314d7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10314d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314d81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314d84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314d89 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314d8c je 0x10314db0 */
  if (C.zf) goto L_10314db0;
  /* 10314d8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314d91 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314d95 je 0x10314db0 */
  if (C.zf) goto L_10314db0;
  /* 10314d97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314d9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314d9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314da2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314da5 je 0x10314db0 */
  if (C.zf) goto L_10314db0;
  /* 10314da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314daa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314dae jne 0x10314e23 */
  if (!C.zf) goto L_10314e23;
L_10314db0:;
  /* 10314db0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10314db2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10314db5 push edx */
  push32((uint32_t)(EDX));
  /* 10314db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314db9 push eax */
  push32((uint32_t)(EAX));
  /* 10314dba call 0x10314c70 */
  push32(0x10314dbfu); f_10314c70();
  /* 10314dbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314dc4 je 0x10314e23 */
  if (C.zf) goto L_10314e23;
  /* 10314dc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314dc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10314dcc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314dcf jne 0x10314e23 */
  if (!C.zf) goto L_10314e23;
  /* 10314dd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314dd4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10314dd7 cmp ecx, dword ptr [0x1033da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314ddd jg 0x10314e23 */
  if ((!C.zf&&C.sf==C.of)) goto L_10314e23;
  /* 10314ddf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314de3 je 0x10314df0 */
  if (C.zf) goto L_10314df0;
  /* 10314de5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10314de8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314deb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10314dee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10314df0:;
  /* 10314df0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314df4 je 0x10314e01 */
  if (C.zf) goto L_10314e01;
  /* 10314df6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10314df9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314dfc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10314dff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10314e01:;
  /* 10314e01 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314e05 je 0x10314e12 */
  if (C.zf) goto L_10314e12;
  /* 10314e07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10314e0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314e0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10314e10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10314e12:;
  /* 10314e12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314e14 call 0x10317160 */
  push32(0x10314e19u); f_10317160();
  /* 10314e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314e1c mov eax, 1 */
  EAX = (0x1u);
  /* 10314e21 jmp 0x10314e2f */
  goto L_10314e2f;
L_10314e23:;
  /* 10314e23 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314e25 call 0x10317160 */
  push32(0x10314e2au); f_10317160();
  /* 10314e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314e2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10314e2f:;
  /* 10314e2f mov esp, ebp */
  ESP = (EBP);
  /* 10314e31 pop ebp */
  EBP = (pop32());
  /* 10314e32 ret  */
  ESPCHK(0x10314d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x10314e40 (28 bytes, 11 insns) */
void f_10314e40(void) {
  FTRACE(0x10314e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10314e41 mov ebp, esp */
  EBP = (ESP);
  /* 10314e43 push ecx */
  push32((uint32_t)(ECX));
  /* 10314e44 mov eax, dword ptr [0x10340e78] */
  EAX = (r32((uint32_t)(0x10340e78)));
  /* 10314e49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10314e4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314e4f mov dword ptr [0x10340e78], ecx */
  w32((uint32_t)(0x10340e78), (ECX));
  /* 10314e55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314e58 mov esp, ebp */
  ESP = (EBP);
  /* 10314e5a pop ebp */
  EBP = (pop32());
  /* 10314e5b ret  */
  ESPCHK(0x10314e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e60 @ 0x10314e60 (362 bytes, 116 insns) */
void f_10314e60(void) {
  FTRACE(0x10314e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10314e61 mov ebp, esp */
  EBP = (ESP);
  /* 10314e63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314e66 push ebx */
  push32((uint32_t)(EBX));
  /* 10314e67 push esi */
  push32((uint32_t)(ESI));
  /* 10314e68 push edi */
  push32((uint32_t)(EDI));
  /* 10314e69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314e6d jne 0x10314e9a */
  if (!C.zf) goto L_10314e9a;
L_10314e6f:;
  /* 10314e6f push 0x1033a970 */
  push32((uint32_t)(0x1033a970u));
  /* 10314e74 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10314e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314e7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10314e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10314e7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10314e81 call 0x10312780 */
  push32(0x10314e86u); f_10312780();
  /* 10314e86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314e89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314e8c jne 0x10314e8f */
  if (!C.zf) goto L_10314e8f;
  /* 10314e8e int3  */
  x86_unimpl("int3 @ 0x10314e8e");
L_10314e8f:;
  /* 10314e8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314e93 jne 0x10314e6f */
  if (!C.zf) goto L_10314e6f;
  /* 10314e95 jmp 0x10314fc3 */
  goto L_10314fc3;
L_10314e9a:;
  /* 10314e9a push 9 */
  push32((uint32_t)(0x9u));
  /* 10314e9c call 0x103170c0 */
  push32(0x10314ea1u); f_103170c0();
  /* 10314ea1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314ea4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314ea7 mov edx, dword ptr [0x1033f504] */
  EDX = (r32((uint32_t)(0x1033f504)));
  /* 10314ead mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10314eaf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10314eb6 jmp 0x10314ec1 */
  goto L_10314ec1;
L_10314eb8:;
  /* 10314eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314ebb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314ebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10314ec1:;
  /* 10314ec1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314ec5 jge 0x10314ee5 */
  if ((C.sf==C.of)) goto L_10314ee5;
  /* 10314ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314eca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314ecd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10314ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10314ed8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314edb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10314ee3 jmp 0x10314eb8 */
  goto L_10314eb8;
L_10314ee5:;
  /* 10314ee5 mov edx, dword ptr [0x1033f504] */
  EDX = (r32((uint32_t)(0x1033f504)));
  /* 10314eeb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10314eee jmp 0x10314ef8 */
  goto L_10314ef8;
L_10314ef0:;
  /* 10314ef0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314ef3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10314ef5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10314ef8:;
  /* 10314ef8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314efc je 0x10314fa1 */
  if (C.zf) goto L_10314fa1;
  /* 10314f02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314f08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314f0f jl 0x10314f77 */
  if ((C.sf!=C.of)) goto L_10314f77;
  /* 10314f11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f14 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10314f17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10314f1d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314f20 jge 0x10314f77 */
  if ((C.sf==C.of)) goto L_10314f77;
  /* 10314f22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f25 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10314f28 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10314f2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314f31 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10314f35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314f38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f3b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10314f3e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10314f44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314f47 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10314f4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f4e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10314f51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314f59 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10314f5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f60 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10314f63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f66 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10314f69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10314f6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314f71 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10314f75 jmp 0x10314f9c */
  goto L_10314f9c;
L_10314f77:;
  /* 10314f77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10314f7a push edx */
  push32((uint32_t)(EDX));
  /* 10314f7b push 0x1033a94c */
  push32((uint32_t)(0x1033a94cu));
  /* 10314f80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314f82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314f84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10314f88 call 0x10312780 */
  push32(0x10314f8du); f_10312780();
  /* 10314f8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10314f90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314f93 jne 0x10314f96 */
  if (!C.zf) goto L_10314f96;
  /* 10314f95 int3  */
  x86_unimpl("int3 @ 0x10314f95");
L_10314f96:;
  /* 10314f96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10314f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10314f9a jne 0x10314f77 */
  if (!C.zf) goto L_10314f77;
L_10314f9c:;
  /* 10314f9c jmp 0x10314ef0 */
  goto L_10314ef0;
L_10314fa1:;
  /* 10314fa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314fa4 mov edx, dword ptr [0x1033f50c] */
  EDX = (r32((uint32_t)(0x1033f50c)));
  /* 10314faa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10314fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10314fb0 mov ecx, dword ptr [0x1033f500] */
  ECX = (r32((uint32_t)(0x1033f500)));
  /* 10314fb6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10314fb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10314fbb call 0x10317160 */
  push32(0x10314fc0u); f_10317160();
  /* 10314fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10314fc3:;
  /* 10314fc3 pop edi */
  EDI = (pop32());
  /* 10314fc4 pop esi */
  ESI = (pop32());
  /* 10314fc5 pop ebx */
  EBX = (pop32());
  /* 10314fc6 mov esp, ebp */
  ESP = (EBP);
  /* 10314fc8 pop ebp */
  EBP = (pop32());
  /* 10314fc9 ret  */
  ESPCHK(0x10314e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x10314fd0 (291 bytes, 95 insns) */
void f_10314fd0(void) {
  FTRACE(0x10314fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10314fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10314fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10314fd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10314fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10314fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10314fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10314fd9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10314fe0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314fe4 je 0x10314ff2 */
  if (C.zf) goto L_10314ff2;
  /* 10314fe6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314fea je 0x10314ff2 */
  if (C.zf) goto L_10314ff2;
  /* 10314fec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10314ff0 jne 0x10315020 */
  if (!C.zf) goto L_10315020;
L_10314ff2:;
  /* 10314ff2 push 0x1033a998 */
  push32((uint32_t)(0x1033a998u));
  /* 10314ff7 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10314ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 10314ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 10315000 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315004 call 0x10312780 */
  push32(0x10315009u); f_10312780();
  /* 10315009 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031500c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031500f jne 0x10315012 */
  if (!C.zf) goto L_10315012;
  /* 10315011 int3  */
  x86_unimpl("int3 @ 0x10315011");
L_10315012:;
  /* 10315012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315014 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315016 jne 0x10314ff2 */
  if (!C.zf) goto L_10314ff2;
  /* 10315018 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031501b jmp 0x103150ec */
  goto L_103150ec;
L_10315020:;
  /* 10315020 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10315027 jmp 0x10315032 */
  goto L_10315032;
L_10315029:;
  /* 10315029 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031502c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031502f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10315032:;
  /* 10315032 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315036 jge 0x103150bc */
  if ((C.sf==C.of)) goto L_103150bc;
  /* 1031503c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031503f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315045 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10315048 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1031504c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315053 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10315056 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1031505a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031505d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315060 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315063 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10315066 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1031506a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031506e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10315074 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10315078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031507b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031507e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315083 jne 0x10315092 */
  if (!C.zf) goto L_10315092;
  /* 10315085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315088 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031508b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315090 je 0x103150b7 */
  if (C.zf) goto L_103150b7;
L_10315092:;
  /* 10315092 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315096 je 0x103150b7 */
  if (C.zf) goto L_103150b7;
  /* 10315098 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031509c jne 0x103150b0 */
  if (!C.zf) goto L_103150b0;
  /* 1031509e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103150a2 jne 0x103150b7 */
  if (!C.zf) goto L_103150b7;
  /* 103150a4 mov eax, dword ptr [0x1033da84] */
  EAX = (r32((uint32_t)(0x1033da84)));
  /* 103150a9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 103150ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103150ae je 0x103150b7 */
  if (C.zf) goto L_103150b7;
L_103150b0:;
  /* 103150b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_103150b7:;
  /* 103150b7 jmp 0x10315029 */
  goto L_10315029;
L_103150bc:;
  /* 103150bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103150bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103150c2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103150c5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103150c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103150cb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 103150ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103150d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103150d4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 103150d7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103150da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103150dd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 103150e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103150e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 103150e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_103150ec:;
  /* 103150ec pop edi */
  EDI = (pop32());
  /* 103150ed pop esi */
  ESI = (pop32());
  /* 103150ee pop ebx */
  EBX = (pop32());
  /* 103150ef mov esp, ebp */
  ESP = (EBP);
  /* 103150f1 pop ebp */
  EBP = (pop32());
  /* 103150f2 ret  */
  ESPCHK(0x10314fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005100 @ 0x10315100 (697 bytes, 253 insns) */
void f_10315100(void) {
  FTRACE(0x10315100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315100 push ebp */
  push32((uint32_t)(EBP));
  /* 10315101 mov ebp, esp */
  EBP = (ESP);
  /* 10315103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315106 push ebx */
  push32((uint32_t)(EBX));
  /* 10315107 push esi */
  push32((uint32_t)(ESI));
  /* 10315108 push edi */
  push32((uint32_t)(EDI));
  /* 10315109 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10315110 push 9 */
  push32((uint32_t)(0x9u));
  /* 10315112 call 0x103170c0 */
  push32(0x10315117u); f_103170c0();
  /* 10315117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031511a:;
  /* 1031511a push 0x1033aa90 */
  push32((uint32_t)(0x1033aa90u));
  /* 1031511f push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10315124 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315126 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315128 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031512a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031512c call 0x10312780 */
  push32(0x10315131u); f_10312780();
  /* 10315131 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315134 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315137 jne 0x1031513a */
  if (!C.zf) goto L_1031513a;
  /* 10315139 int3  */
  x86_unimpl("int3 @ 0x10315139");
L_1031513a:;
  /* 1031513a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031513c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031513e jne 0x1031511a */
  if (!C.zf) goto L_1031511a;
  /* 10315140 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315144 je 0x1031514e */
  if (C.zf) goto L_1031514e;
  /* 10315146 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10315149 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031514b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1031514e:;
  /* 1031514e mov eax, dword ptr [0x1033f504] */
  EAX = (r32((uint32_t)(0x1033f504)));
  /* 10315153 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10315156 jmp 0x10315160 */
  goto L_10315160;
L_10315158:;
  /* 10315158 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031515b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031515d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10315160:;
  /* 10315160 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315164 je 0x10315382 */
  if (C.zf) goto L_10315382;
  /* 1031516a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031516d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315170 je 0x10315382 */
  if (C.zf) goto L_10315382;
  /* 10315176 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315179 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1031517c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10315182 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315185 je 0x103151b4 */
  if (C.zf) goto L_103151b4;
  /* 10315187 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031518a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1031518d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10315193 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10315195 je 0x103151b4 */
  if (C.zf) goto L_103151b4;
  /* 10315197 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031519a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1031519d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103151a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103151a5 jne 0x103151b9 */
  if (!C.zf) goto L_103151b9;
  /* 103151a7 mov ecx, dword ptr [0x1033da84] */
  ECX = (r32((uint32_t)(0x1033da84)));
  /* 103151ad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 103151b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103151b2 jne 0x103151b9 */
  if (!C.zf) goto L_103151b9;
L_103151b4:;
  /* 103151b4 jmp 0x1031537d */
  goto L_1031537d;
L_103151b9:;
  /* 103151b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103151bc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103151c0 je 0x10315232 */
  if (C.zf) goto L_10315232;
  /* 103151c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103151c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103151c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103151c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 103151cc push ecx */
  push32((uint32_t)(ECX));
  /* 103151cd call 0x10314c70 */
  push32(0x103151d2u); f_10314c70();
  /* 103151d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103151d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103151d7 jne 0x10315203 */
  if (!C.zf) goto L_10315203;
L_103151d9:;
  /* 103151d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103151dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 103151df push eax */
  push32((uint32_t)(EAX));
  /* 103151e0 push 0x1033aa7c */
  push32((uint32_t)(0x1033aa7cu));
  /* 103151e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103151e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103151e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 103151eb push 0 */
  push32((uint32_t)(0x0u));
  /* 103151ed call 0x10312780 */
  push32(0x103151f2u); f_10312780();
  /* 103151f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103151f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103151f8 jne 0x103151fb */
  if (!C.zf) goto L_103151fb;
  /* 103151fa int3  */
  x86_unimpl("int3 @ 0x103151fa");
L_103151fb:;
  /* 103151fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103151fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103151ff jne 0x103151d9 */
  if (!C.zf) goto L_103151d9;
  /* 10315201 jmp 0x10315232 */
  goto L_10315232;
L_10315203:;
  /* 10315203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315206 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10315209 push eax */
  push32((uint32_t)(EAX));
  /* 1031520a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031520d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10315210 push edx */
  push32((uint32_t)(EDX));
  /* 10315211 push 0x1033aa70 */
  push32((uint32_t)(0x1033aa70u));
  /* 10315216 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315218 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031521a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031521c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031521e call 0x10312780 */
  push32(0x10315223u); f_10312780();
  /* 10315223 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315226 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315229 jne 0x1031522c */
  if (!C.zf) goto L_1031522c;
  /* 1031522b int3  */
  x86_unimpl("int3 @ 0x1031522b");
L_1031522c:;
  /* 1031522c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031522e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315230 jne 0x10315203 */
  if (!C.zf) goto L_10315203;
L_10315232:;
  /* 10315232 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315235 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10315238 push edx */
  push32((uint32_t)(EDX));
  /* 10315239 push 0x1033aa68 */
  push32((uint32_t)(0x1033aa68u));
  /* 1031523e push 0 */
  push32((uint32_t)(0x0u));
  /* 10315240 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315242 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315246 call 0x10312780 */
  push32(0x1031524bu); f_10312780();
  /* 1031524b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031524e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315251 jne 0x10315254 */
  if (!C.zf) goto L_10315254;
  /* 10315253 int3  */
  x86_unimpl("int3 @ 0x10315253");
L_10315254:;
  /* 10315254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315258 jne 0x10315232 */
  if (!C.zf) goto L_10315232;
  /* 1031525a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031525d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10315260 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10315266 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315269 jne 0x103152dc */
  if (!C.zf) goto L_103152dc;
L_1031526b:;
  /* 1031526b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031526e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10315271 push ecx */
  push32((uint32_t)(ECX));
  /* 10315272 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315275 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10315278 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1031527b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10315280 push eax */
  push32((uint32_t)(EAX));
  /* 10315281 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315284 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315287 push ecx */
  push32((uint32_t)(ECX));
  /* 10315288 push 0x1033aa34 */
  push32((uint32_t)(0x1033aa34u));
  /* 1031528d push 0 */
  push32((uint32_t)(0x0u));
  /* 1031528f push 0 */
  push32((uint32_t)(0x0u));
  /* 10315291 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315293 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315295 call 0x10312780 */
  push32(0x1031529au); f_10312780();
  /* 1031529a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031529d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103152a0 jne 0x103152a3 */
  if (!C.zf) goto L_103152a3;
  /* 103152a2 int3  */
  x86_unimpl("int3 @ 0x103152a2");
L_103152a3:;
  /* 103152a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103152a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103152a7 jne 0x1031526b */
  if (!C.zf) goto L_1031526b;
  /* 103152a9 cmp dword ptr [0x10340e78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340e78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103152b0 je 0x103152cb */
  if (C.zf) goto L_103152cb;
  /* 103152b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152b5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 103152b8 push ecx */
  push32((uint32_t)(ECX));
  /* 103152b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152bc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103152bf push edx */
  push32((uint32_t)(EDX));
  /* 103152c0 call dword ptr [0x10340e78] */
  call_ind((uint32_t)(r32((uint32_t)(0x10340e78))), 0x103152c6u);
  /* 103152c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103152c9 jmp 0x103152d7 */
  goto L_103152d7;
L_103152cb:;
  /* 103152cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152ce push eax */
  push32((uint32_t)(EAX));
  /* 103152cf call 0x103153c0 */
  push32(0x103152d4u); f_103153c0();
  /* 103152d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103152d7:;
  /* 103152d7 jmp 0x1031537d */
  goto L_1031537d;
L_103152dc:;
  /* 103152dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152df cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103152e3 jne 0x10315322 */
  if (!C.zf) goto L_10315322;
L_103152e5:;
  /* 103152e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152e8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103152eb push eax */
  push32((uint32_t)(EAX));
  /* 103152ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103152ef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103152f2 push ecx */
  push32((uint32_t)(ECX));
  /* 103152f3 push 0x1033aa0c */
  push32((uint32_t)(0x1033aa0cu));
  /* 103152f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 103152fa push 0 */
  push32((uint32_t)(0x0u));
  /* 103152fc push 0 */
  push32((uint32_t)(0x0u));
  /* 103152fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10315300 call 0x10312780 */
  push32(0x10315305u); f_10312780();
  /* 10315305 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315308 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031530b jne 0x1031530e */
  if (!C.zf) goto L_1031530e;
  /* 1031530d int3  */
  x86_unimpl("int3 @ 0x1031530d");
L_1031530e:;
  /* 1031530e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315310 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315312 jne 0x103152e5 */
  if (!C.zf) goto L_103152e5;
  /* 10315314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315317 push eax */
  push32((uint32_t)(EAX));
  /* 10315318 call 0x103153c0 */
  push32(0x1031531du); f_103153c0();
  /* 1031531d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315320 jmp 0x1031537d */
  goto L_1031537d;
L_10315322:;
  /* 10315322 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315325 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10315328 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031532e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315331 jne 0x1031537d */
  if (!C.zf) goto L_1031537d;
L_10315333:;
  /* 10315333 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315336 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10315339 push ecx */
  push32((uint32_t)(ECX));
  /* 1031533a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031533d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10315340 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10315343 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10315348 push eax */
  push32((uint32_t)(EAX));
  /* 10315349 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031534c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031534f push ecx */
  push32((uint32_t)(ECX));
  /* 10315350 push 0x1033a9d8 */
  push32((uint32_t)(0x1033a9d8u));
  /* 10315355 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031535b push 0 */
  push32((uint32_t)(0x0u));
  /* 1031535d call 0x10312780 */
  push32(0x10315362u); f_10312780();
  /* 10315362 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315365 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315368 jne 0x1031536b */
  if (!C.zf) goto L_1031536b;
  /* 1031536a int3  */
  x86_unimpl("int3 @ 0x1031536a");
L_1031536b:;
  /* 1031536b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031536d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031536f jne 0x10315333 */
  if (!C.zf) goto L_10315333;
  /* 10315371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315374 push eax */
  push32((uint32_t)(EAX));
  /* 10315375 call 0x103153c0 */
  push32(0x1031537au); f_103153c0();
  /* 1031537a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031537d:;
  /* 1031537d jmp 0x10315158 */
  goto L_10315158;
L_10315382:;
  /* 10315382 push 9 */
  push32((uint32_t)(0x9u));
  /* 10315384 call 0x10317160 */
  push32(0x10315389u); f_10317160();
  /* 10315389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031538c:;
  /* 1031538c push 0x1033a9c0 */
  push32((uint32_t)(0x1033a9c0u));
  /* 10315391 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 10315396 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315398 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031539a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031539c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031539e call 0x10312780 */
  push32(0x103153a3u); f_10312780();
  /* 103153a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103153a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103153a9 jne 0x103153ac */
  if (!C.zf) goto L_103153ac;
  /* 103153ab int3  */
  x86_unimpl("int3 @ 0x103153ab");
L_103153ac:;
  /* 103153ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 103153ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103153b0 jne 0x1031538c */
  if (!C.zf) goto L_1031538c;
  /* 103153b2 pop edi */
  EDI = (pop32());
  /* 103153b3 pop esi */
  ESI = (pop32());
  /* 103153b4 pop ebx */
  EBX = (pop32());
  /* 103153b5 mov esp, ebp */
  ESP = (EBP);
  /* 103153b7 pop ebp */
  EBP = (pop32());
  /* 103153b8 ret  */
  ESPCHK(0x10315100u, _esp0);
  ESP += 4; return;
}

/* FUN_100053c0 @ 0x103153c0 (276 bytes, 89 insns) */
void f_103153c0(void) {
  FTRACE(0x103153c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103153c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103153c1 mov ebp, esp */
  EBP = (ESP);
  /* 103153c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103153c6 push ebx */
  push32((uint32_t)(EBX));
  /* 103153c7 push esi */
  push32((uint32_t)(ESI));
  /* 103153c8 push edi */
  push32((uint32_t)(EDI));
  /* 103153c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 103153d0 jmp 0x103153db */
  goto L_103153db;
L_103153d2:;
  /* 103153d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103153d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103153d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_103153db:;
  /* 103153db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103153de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103153e2 jge 0x103153ef */
  if ((C.sf==C.of)) goto L_103153ef;
  /* 103153e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103153e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 103153ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 103153ed jmp 0x103153f6 */
  goto L_103153f6;
L_103153ef:;
  /* 103153ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_103153f6:;
  /* 103153f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 103153f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103153fc jge 0x1031549c */
  if ((C.sf==C.of)) goto L_1031549c;
  /* 10315402 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10315405 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315408 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1031540b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1031540e cmp dword ptr [0x1033dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315415 jle 0x10315433 */
  if ((C.zf||C.sf!=C.of)) goto L_10315433;
  /* 10315417 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1031541c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1031541f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10315425 push ecx */
  push32((uint32_t)(ECX));
  /* 10315426 call 0x103196d0 */
  push32(0x1031542bu); f_103196d0();
  /* 1031542b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031542e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10315431 jmp 0x10315450 */
  goto L_10315450;
L_10315433:;
  /* 10315433 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10315436 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031543c mov eax, dword ptr [0x1033dc98] */
  EAX = (r32((uint32_t)(0x1033dc98)));
  /* 10315441 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10315443 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10315447 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1031544d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10315450:;
  /* 10315450 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315454 je 0x10315464 */
  if (C.zf) goto L_10315464;
  /* 10315456 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10315459 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031545f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10315462 jmp 0x1031546b */
  goto L_1031546b;
L_10315464:;
  /* 10315464 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1031546b:;
  /* 1031546b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1031546e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10315471 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10315475 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10315478 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031547e push edx */
  push32((uint32_t)(EDX));
  /* 1031547f push 0x1033aab4 */
  push32((uint32_t)(0x1033aab4u));
  /* 10315484 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10315487 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031548a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1031548e push ecx */
  push32((uint32_t)(ECX));
  /* 1031548f call 0x103195d0 */
  push32(0x10315494u); f_103195d0();
  /* 10315494 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315497 jmp 0x103153d2 */
  goto L_103153d2;
L_1031549c:;
  /* 1031549c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1031549f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_103154a4:;
  /* 103154a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103154a7 push eax */
  push32((uint32_t)(EAX));
  /* 103154a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 103154ab push ecx */
  push32((uint32_t)(ECX));
  /* 103154ac push 0x1033aaa4 */
  push32((uint32_t)(0x1033aaa4u));
  /* 103154b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103154b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103154b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 103154b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103154b9 call 0x10312780 */
  push32(0x103154beu); f_10312780();
  /* 103154be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103154c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103154c4 jne 0x103154c7 */
  if (!C.zf) goto L_103154c7;
  /* 103154c6 int3  */
  x86_unimpl("int3 @ 0x103154c6");
L_103154c7:;
  /* 103154c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103154c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103154cb jne 0x103154a4 */
  if (!C.zf) goto L_103154a4;
  /* 103154cd pop edi */
  EDI = (pop32());
  /* 103154ce pop esi */
  ESI = (pop32());
  /* 103154cf pop ebx */
  EBX = (pop32());
  /* 103154d0 mov esp, ebp */
  ESP = (EBP);
  /* 103154d2 pop ebp */
  EBP = (pop32());
  /* 103154d3 ret  */
  ESPCHK(0x103153c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x103154e0 (116 bytes, 46 insns) */
void f_103154e0(void) {
  FTRACE(0x103154e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103154e0 push ebp */
  push32((uint32_t)(EBP));
  /* 103154e1 mov ebp, esp */
  EBP = (ESP);
  /* 103154e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103154e6 push ebx */
  push32((uint32_t)(EBX));
  /* 103154e7 push esi */
  push32((uint32_t)(ESI));
  /* 103154e8 push edi */
  push32((uint32_t)(EDI));
  /* 103154e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 103154ec push eax */
  push32((uint32_t)(EAX));
  /* 103154ed call 0x10314e60 */
  push32(0x103154f2u); f_10314e60();
  /* 103154f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103154f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103154f9 jne 0x10315514 */
  if (!C.zf) goto L_10315514;
  /* 103154fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103154ff jne 0x10315514 */
  if (!C.zf) goto L_10315514;
  /* 10315501 mov ecx, dword ptr [0x1033da84] */
  ECX = (r32((uint32_t)(0x1033da84)));
  /* 10315507 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1031550a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1031550c je 0x1031554b */
  if (C.zf) goto L_1031554b;
  /* 1031550e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315512 je 0x1031554b */
  if (C.zf) goto L_1031554b;
L_10315514:;
  /* 10315514 push 0x1033aabc */
  push32((uint32_t)(0x1033aabcu));
  /* 10315519 push 0x1033a488 */
  push32((uint32_t)(0x1033a488u));
  /* 1031551e push 0 */
  push32((uint32_t)(0x0u));
  /* 10315520 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315522 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315524 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315526 call 0x10312780 */
  push32(0x1031552bu); f_10312780();
  /* 1031552b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031552e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315531 jne 0x10315534 */
  if (!C.zf) goto L_10315534;
  /* 10315533 int3  */
  x86_unimpl("int3 @ 0x10315533");
L_10315534:;
  /* 10315534 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315536 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315538 jne 0x10315514 */
  if (!C.zf) goto L_10315514;
  /* 1031553a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031553c call 0x10315100 */
  push32(0x10315541u); f_10315100();
  /* 10315541 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315544 mov eax, 1 */
  EAX = (0x1u);
  /* 10315549 jmp 0x1031554d */
  goto L_1031554d;
L_1031554b:;
  /* 1031554b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1031554d:;
  /* 1031554d pop edi */
  EDI = (pop32());
  /* 1031554e pop esi */
  ESI = (pop32());
  /* 1031554f pop ebx */
  EBX = (pop32());
  /* 10315550 mov esp, ebp */
  ESP = (EBP);
  /* 10315552 pop ebp */
  EBP = (pop32());
  /* 10315553 ret  */
  ESPCHK(0x103154e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x10315560 (197 bytes, 79 insns) */
void f_10315560(void) {
  FTRACE(0x10315560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315560 push ebp */
  push32((uint32_t)(EBP));
  /* 10315561 mov ebp, esp */
  EBP = (ESP);
  /* 10315563 push ecx */
  push32((uint32_t)(ECX));
  /* 10315564 push ebx */
  push32((uint32_t)(EBX));
  /* 10315565 push esi */
  push32((uint32_t)(ESI));
  /* 10315566 push edi */
  push32((uint32_t)(EDI));
  /* 10315567 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031556b jne 0x10315572 */
  if (!C.zf) goto L_10315572;
  /* 1031556d jmp 0x1031561e */
  goto L_1031561e;
L_10315572:;
  /* 10315572 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10315579 jmp 0x10315584 */
  goto L_10315584;
L_1031557b:;
  /* 1031557b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031557e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315581 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10315584:;
  /* 10315584 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315588 jge 0x103155ce */
  if ((C.sf==C.of)) goto L_103155ce;
L_1031558a:;
  /* 1031558a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031558d mov edx, dword ptr [ecx*4 + 0x1033da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033da94)));
  /* 10315594 push edx */
  push32((uint32_t)(EDX));
  /* 10315595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315598 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031559b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1031559f push edx */
  push32((uint32_t)(EDX));
  /* 103155a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103155a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103155a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 103155aa push edx */
  push32((uint32_t)(EDX));
  /* 103155ab push 0x1033ab18 */
  push32((uint32_t)(0x1033ab18u));
  /* 103155b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103155b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 103155b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103155b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 103155b8 call 0x10312780 */
  push32(0x103155bdu); f_10312780();
  /* 103155bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103155c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103155c3 jne 0x103155c6 */
  if (!C.zf) goto L_103155c6;
  /* 103155c5 int3  */
  x86_unimpl("int3 @ 0x103155c5");
L_103155c6:;
  /* 103155c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103155c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103155ca jne 0x1031558a */
  if (!C.zf) goto L_1031558a;
  /* 103155cc jmp 0x1031557b */
  goto L_1031557b;
L_103155ce:;
  /* 103155ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103155d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 103155d4 push edx */
  push32((uint32_t)(EDX));
  /* 103155d5 push 0x1033aaf4 */
  push32((uint32_t)(0x1033aaf4u));
  /* 103155da push 0 */
  push32((uint32_t)(0x0u));
  /* 103155dc push 0 */
  push32((uint32_t)(0x0u));
  /* 103155de push 0 */
  push32((uint32_t)(0x0u));
  /* 103155e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 103155e2 call 0x10312780 */
  push32(0x103155e7u); f_10312780();
  /* 103155e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103155ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103155ed jne 0x103155f0 */
  if (!C.zf) goto L_103155f0;
  /* 103155ef int3  */
  x86_unimpl("int3 @ 0x103155ef");
L_103155f0:;
  /* 103155f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103155f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103155f4 jne 0x103155ce */
  if (!C.zf) goto L_103155ce;
L_103155f6:;
  /* 103155f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103155f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 103155fc push edx */
  push32((uint32_t)(EDX));
  /* 103155fd push 0x1033aad4 */
  push32((uint32_t)(0x1033aad4u));
  /* 10315602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315604 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315606 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1031560a call 0x10312780 */
  push32(0x1031560fu); f_10312780();
  /* 1031560f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315612 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315615 jne 0x10315618 */
  if (!C.zf) goto L_10315618;
  /* 10315617 int3  */
  x86_unimpl("int3 @ 0x10315617");
L_10315618:;
  /* 10315618 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031561a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031561c jne 0x103155f6 */
  if (!C.zf) goto L_103155f6;
L_1031561e:;
  /* 1031561e pop edi */
  EDI = (pop32());
  /* 1031561f pop esi */
  ESI = (pop32());
  /* 10315620 pop ebx */
  EBX = (pop32());
  /* 10315621 mov esp, ebp */
  ESP = (EBP);
  /* 10315623 pop ebp */
  EBP = (pop32());
  /* 10315624 ret  */
  ESPCHK(0x10315560u, _esp0);
  ESP += 4; return;
}

/* FUN_10005630 @ 0x10315630 (329 bytes, 102 insns) */
void f_10315630(void) {
  FTRACE(0x10315630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315630 push ebp */
  push32((uint32_t)(EBP));
  /* 10315631 mov ebp, esp */
  EBP = (ESP);
  /* 10315633 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315636 cmp dword ptr [0x10340ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031563d jne 0x10315644 */
  if (!C.zf) goto L_10315644;
  /* 1031563f call 0x10319f70 */
  push32(0x10315644u); f_10319f70();
L_10315644:;
  /* 10315644 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031564b mov eax, dword ptr [0x1033f4a0] */
  EAX = (r32((uint32_t)(0x1033f4a0)));
  /* 10315650 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10315653:;
  /* 10315653 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315656 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10315659 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031565b je 0x10315689 */
  if (C.zf) goto L_10315689;
  /* 1031565d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315660 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10315663 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315666 je 0x10315671 */
  if (C.zf) goto L_10315671;
  /* 10315668 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031566b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031566e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10315671:;
  /* 10315671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315674 push eax */
  push32((uint32_t)(EAX));
  /* 10315675 call 0x103164f0 */
  push32(0x1031567au); f_103164f0();
  /* 1031567a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031567d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315680 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10315684 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10315687 jmp 0x10315653 */
  goto L_10315653;
L_10315689:;
  /* 10315689 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1031568b push 0x1033ab38 */
  push32((uint32_t)(0x1033ab38u));
  /* 10315690 push 2 */
  push32((uint32_t)(0x2u));
  /* 10315692 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315695 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1031569c push ecx */
  push32((uint32_t)(ECX));
  /* 1031569d call 0x103136c0 */
  push32(0x103156a2u); f_103136c0();
  /* 103156a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103156a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103156a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103156ab mov dword ptr [0x1033f4d4], edx */
  w32((uint32_t)(0x1033f4d4), (EDX));
  /* 103156b1 cmp dword ptr [0x1033f4d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103156b8 jne 0x103156c4 */
  if (!C.zf) goto L_103156c4;
  /* 103156ba push 9 */
  push32((uint32_t)(0x9u));
  /* 103156bc call 0x10312630 */
  push32(0x103156c1u); f_10312630();
  /* 103156c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103156c4:;
  /* 103156c4 mov eax, dword ptr [0x1033f4a0] */
  EAX = (r32((uint32_t)(0x1033f4a0)));
  /* 103156c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103156cc jmp 0x103156d7 */
  goto L_103156d7;
L_103156ce:;
  /* 103156ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103156d1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103156d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103156d7:;
  /* 103156d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103156da movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103156dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103156df je 0x10315747 */
  if (C.zf) goto L_10315747;
  /* 103156e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103156e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103156e5 call 0x103164f0 */
  push32(0x103156eau); f_103164f0();
  /* 103156ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103156ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103156f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103156f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103156f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103156f9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103156fc je 0x10315745 */
  if (C.zf) goto L_10315745;
  /* 103156fe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10315700 push 0x1033ab38 */
  push32((uint32_t)(0x1033ab38u));
  /* 10315705 push 2 */
  push32((uint32_t)(0x2u));
  /* 10315707 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031570a push ecx */
  push32((uint32_t)(ECX));
  /* 1031570b call 0x103136c0 */
  push32(0x10315710u); f_103136c0();
  /* 10315710 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315713 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315716 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10315718 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031571b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031571e jne 0x1031572a */
  if (!C.zf) goto L_1031572a;
  /* 10315720 push 9 */
  push32((uint32_t)(0x9u));
  /* 10315722 call 0x10312630 */
  push32(0x10315727u); f_10312630();
  /* 10315727 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031572a:;
  /* 1031572a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031572d push ecx */
  push32((uint32_t)(ECX));
  /* 1031572e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315731 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10315733 push eax */
  push32((uint32_t)(EAX));
  /* 10315734 call 0x10316670 */
  push32(0x10315739u); f_10316670();
  /* 10315739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031573c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031573f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315742 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10315745:;
  /* 10315745 jmp 0x103156ce */
  goto L_103156ce;
L_10315747:;
  /* 10315747 push 2 */
  push32((uint32_t)(0x2u));
  /* 10315749 mov edx, dword ptr [0x1033f4a0] */
  EDX = (r32((uint32_t)(0x1033f4a0)));
  /* 1031574f push edx */
  push32((uint32_t)(EDX));
  /* 10315750 call 0x10314150 */
  push32(0x10315755u); f_10314150();
  /* 10315755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315758 mov dword ptr [0x1033f4a0], 0 */
  w32((uint32_t)(0x1033f4a0), (0x0u));
  /* 10315762 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315765 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031576b mov dword ptr [0x10340fe0], 1 */
  w32((uint32_t)(0x10340fe0), (0x1u));
  /* 10315775 mov esp, ebp */
  ESP = (EBP);
  /* 10315777 pop ebp */
  EBP = (pop32());
  /* 10315778 ret  */
  ESPCHK(0x10315630u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x10315780 (216 bytes, 69 insns) */
void f_10315780(void) {
  FTRACE(0x10315780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315780 push ebp */
  push32((uint32_t)(EBP));
  /* 10315781 mov ebp, esp */
  EBP = (ESP);
  /* 10315783 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315786 cmp dword ptr [0x10340ff0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340ff0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031578d jne 0x10315794 */
  if (!C.zf) goto L_10315794;
  /* 1031578f call 0x10319f70 */
  push32(0x10315794u); f_10319f70();
L_10315794:;
  /* 10315794 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10315799 push 0x1033f510 */
  push32((uint32_t)(0x1033f510u));
  /* 1031579e push 0 */
  push32((uint32_t)(0x0u));
  /* 103157a0 call dword ptr [0x103422d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d4))), 0x103157a6u);
  /* 103157a6 mov dword ptr [0x1033f4e4], 0x1033f510 */
  w32((uint32_t)(0x1033f4e4), (0x1033f510u));
  /* 103157b0 mov eax, dword ptr [0x1034100c] */
  EAX = (r32((uint32_t)(0x1034100c)));
  /* 103157b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103157b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 103157ba jne 0x103157c7 */
  if (!C.zf) goto L_103157c7;
  /* 103157bc mov edx, dword ptr [0x1033f4e4] */
  EDX = (r32((uint32_t)(0x1033f4e4)));
  /* 103157c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 103157c5 jmp 0x103157cf */
  goto L_103157cf;
L_103157c7:;
  /* 103157c7 mov eax, dword ptr [0x1034100c] */
  EAX = (r32((uint32_t)(0x1034100c)));
  /* 103157cc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_103157cf:;
  /* 103157cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 103157d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 103157d5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 103157d8 push edx */
  push32((uint32_t)(EDX));
  /* 103157d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 103157dc push eax */
  push32((uint32_t)(EAX));
  /* 103157dd push 0 */
  push32((uint32_t)(0x0u));
  /* 103157df push 0 */
  push32((uint32_t)(0x0u));
  /* 103157e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103157e4 push ecx */
  push32((uint32_t)(ECX));
  /* 103157e5 call 0x10315860 */
  push32(0x103157eau); f_10315860();
  /* 103157ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103157ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 103157f2 push 0x1033ab44 */
  push32((uint32_t)(0x1033ab44u));
  /* 103157f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 103157f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103157fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103157ff lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10315802 push ecx */
  push32((uint32_t)(ECX));
  /* 10315803 call 0x103136c0 */
  push32(0x10315808u); f_103136c0();
  /* 10315808 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031580b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1031580e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315812 jne 0x1031581e */
  if (!C.zf) goto L_1031581e;
  /* 10315814 push 8 */
  push32((uint32_t)(0x8u));
  /* 10315816 call 0x10312630 */
  push32(0x1031581bu); f_10312630();
  /* 1031581b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031581e:;
  /* 1031581e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10315821 push edx */
  push32((uint32_t)(EDX));
  /* 10315822 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10315825 push eax */
  push32((uint32_t)(EAX));
  /* 10315826 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315829 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031582c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1031582f push eax */
  push32((uint32_t)(EAX));
  /* 10315830 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315833 push ecx */
  push32((uint32_t)(ECX));
  /* 10315834 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315837 push edx */
  push32((uint32_t)(EDX));
  /* 10315838 call 0x10315860 */
  push32(0x1031583du); f_10315860();
  /* 1031583d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315840 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315843 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315846 mov dword ptr [0x1033f4c8], eax */
  w32((uint32_t)(0x1033f4c8), (EAX));
  /* 1031584b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031584e mov dword ptr [0x1033f4cc], ecx */
  w32((uint32_t)(0x1033f4cc), (ECX));
  /* 10315854 mov esp, ebp */
  ESP = (EBP);
  /* 10315856 pop ebp */
  EBP = (pop32());
  /* 10315857 ret  */
  ESPCHK(0x10315780u, _esp0);
  ESP += 4; return;
}

/* FUN_10005860 @ 0x10315860 (1060 bytes, 360 insns) */
void f_10315860(void) {
  FTRACE(0x10315860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315860 push ebp */
  push32((uint32_t)(EBP));
  /* 10315861 mov ebp, esp */
  EBP = (ESP);
  /* 10315863 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315866 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315869 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1031586f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10315872 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10315878 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031587b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1031587e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315882 je 0x10315895 */
  if (C.zf) goto L_10315895;
  /* 10315884 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10315887 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031588a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1031588c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031588f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315892 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10315895:;
  /* 10315895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315898 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031589b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031589e jne 0x1031596d */
  if (!C.zf) goto L_1031596d;
L_103158a4:;
  /* 103158a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103158a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103158aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103158ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103158b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 103158b3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103158b6 je 0x10315932 */
  if (C.zf) goto L_10315932;
  /* 103158b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103158bb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 103158be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103158c0 je 0x10315932 */
  if (C.zf) goto L_10315932;
  /* 103158c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103158c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103158c7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103158c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103158cb mov al, byte ptr [edx + 0x10340d41] */
  AL = (r8((uint32_t)(EDX + 0x10340d41)));
  /* 103158d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 103158d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103158d6 je 0x10315907 */
  if (C.zf) goto L_10315907;
  /* 103158d8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 103158db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 103158dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103158e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103158e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 103158e5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103158e9 je 0x10315907 */
  if (C.zf) goto L_10315907;
  /* 103158eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103158ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103158f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 103158f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 103158f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103158f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103158fb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 103158fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315901 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315904 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10315907:;
  /* 10315907 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031590a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031590c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031590f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315912 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10315914 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315918 je 0x1031592d */
  if (C.zf) goto L_1031592d;
  /* 1031591a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031591d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315920 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10315922 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10315924 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315927 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031592a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1031592d:;
  /* 1031592d jmp 0x103158a4 */
  goto L_103158a4;
L_10315932:;
  /* 10315932 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315935 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10315937 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031593a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1031593d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1031593f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315943 je 0x10315954 */
  if (C.zf) goto L_10315954;
  /* 10315945 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315948 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1031594b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031594e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315951 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10315954:;
  /* 10315954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315957 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1031595a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031595d jne 0x10315968 */
  if (!C.zf) goto L_10315968;
  /* 1031595f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315962 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315965 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10315968:;
  /* 10315968 jmp 0x10315a3c */
  goto L_10315a3c;
L_1031596d:;
  /* 1031596d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315970 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10315972 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315975 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315978 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1031597a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031597e je 0x10315993 */
  if (C.zf) goto L_10315993;
  /* 10315980 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10315988 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1031598a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031598d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315990 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10315993:;
  /* 10315993 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315996 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10315998 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1031599b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031599e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103159a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103159a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103159a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 103159ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103159af mov dl, byte ptr [ecx + 0x10340d41] */
  DL = (r8((uint32_t)(ECX + 0x10340d41)));
  /* 103159b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 103159b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103159ba je 0x103159eb */
  if (C.zf) goto L_103159eb;
  /* 103159bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 103159bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 103159c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103159c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 103159c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 103159c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103159cd je 0x103159e2 */
  if (C.zf) goto L_103159e2;
  /* 103159cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103159d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103159d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103159d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103159d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103159dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103159df mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_103159e2:;
  /* 103159e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103159e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103159e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103159eb:;
  /* 103159eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103159ee and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 103159f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103159f7 je 0x10315a17 */
  if (C.zf) goto L_10315a17;
  /* 103159f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103159fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10315a01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315a03 je 0x10315a17 */
  if (C.zf) goto L_10315a17;
  /* 10315a05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315a08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10315a0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315a11 jne 0x1031596d */
  if (!C.zf) goto L_1031596d;
L_10315a17:;
  /* 10315a17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315a1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10315a20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315a22 jne 0x10315a2f */
  if (!C.zf) goto L_10315a2f;
  /* 10315a24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315a2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10315a2d jmp 0x10315a3c */
  goto L_10315a3c;
L_10315a2f:;
  /* 10315a2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315a33 je 0x10315a3c */
  if (C.zf) goto L_10315a3c;
  /* 10315a35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315a38 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10315a3c:;
  /* 10315a3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10315a43:;
  /* 10315a43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10315a49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315a4b je 0x10315a6e */
  if (C.zf) goto L_10315a6e;
L_10315a4d:;
  /* 10315a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10315a53 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315a56 je 0x10315a63 */
  if (C.zf) goto L_10315a63;
  /* 10315a58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10315a5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315a61 jne 0x10315a6e */
  if (!C.zf) goto L_10315a6e;
L_10315a63:;
  /* 10315a63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315a69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10315a6c jmp 0x10315a4d */
  goto L_10315a4d;
L_10315a6e:;
  /* 10315a6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315a71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10315a74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10315a76 jne 0x10315a7d */
  if (!C.zf) goto L_10315a7d;
  /* 10315a78 jmp 0x10315c5b */
  goto L_10315c5b;
L_10315a7d:;
  /* 10315a7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315a81 je 0x10315a94 */
  if (C.zf) goto L_10315a94;
  /* 10315a83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10315a86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315a89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10315a8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10315a8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315a91 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10315a94:;
  /* 10315a94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10315a97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10315a99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315a9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10315a9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10315aa1:;
  /* 10315aa1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10315aa8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10315aaf:;
  /* 10315aaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315ab2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10315ab5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315ab8 jne 0x10315ace */
  if (!C.zf) goto L_10315ace;
  /* 10315aba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315abd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315ac0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10315ac3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315ac6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315ac9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10315acc jmp 0x10315aaf */
  goto L_10315aaf;
L_10315ace:;
  /* 10315ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315ad1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10315ad4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315ad7 jne 0x10315b2a */
  if (!C.zf) goto L_10315b2a;
  /* 10315ad9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315adc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315ade mov ecx, 2 */
  ECX = (0x2u);
  /* 10315ae3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10315ae5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315ae7 jne 0x10315b22 */
  if (!C.zf) goto L_10315b22;
  /* 10315ae9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315aed je 0x10315b0f */
  if (C.zf) goto L_10315b0f;
  /* 10315aef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315af2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10315af6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315af9 jne 0x10315b06 */
  if (!C.zf) goto L_10315b06;
  /* 10315afb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315afe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315b01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10315b04 jmp 0x10315b0d */
  goto L_10315b0d;
L_10315b06:;
  /* 10315b06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10315b0d:;
  /* 10315b0d jmp 0x10315b16 */
  goto L_10315b16;
L_10315b0f:;
  /* 10315b0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10315b16:;
  /* 10315b16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315b18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b1c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10315b1f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10315b22:;
  /* 10315b22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315b25 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10315b27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10315b2a:;
  /* 10315b2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315b2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315b30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315b33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10315b36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10315b38 je 0x10315b5e */
  if (C.zf) goto L_10315b5e;
  /* 10315b3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b3e je 0x10315b4f */
  if (C.zf) goto L_10315b4f;
  /* 10315b40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315b43 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10315b46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315b49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315b4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10315b4f:;
  /* 10315b4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315b52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10315b54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315b57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315b5a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10315b5c jmp 0x10315b2a */
  goto L_10315b2a;
L_10315b5e:;
  /* 10315b5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315b61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10315b64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315b66 je 0x10315b84 */
  if (C.zf) goto L_10315b84;
  /* 10315b68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b6c jne 0x10315b89 */
  if (!C.zf) goto L_10315b89;
  /* 10315b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315b71 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10315b74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b77 je 0x10315b84 */
  if (C.zf) goto L_10315b84;
  /* 10315b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315b7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10315b7f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b82 jne 0x10315b89 */
  if (!C.zf) goto L_10315b89;
L_10315b84:;
  /* 10315b84 jmp 0x10315c34 */
  goto L_10315c34;
L_10315b89:;
  /* 10315b89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b8d je 0x10315c26 */
  if (C.zf) goto L_10315c26;
  /* 10315b93 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315b97 je 0x10315bed */
  if (C.zf) goto L_10315bed;
  /* 10315b99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315b9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10315ba0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10315ba2 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 10315ba8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10315bab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10315bad je 0x10315bd8 */
  if (C.zf) goto L_10315bd8;
  /* 10315baf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315bb5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10315bb7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10315bb9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315bbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315bbf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10315bc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315bc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315bc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10315bcb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315bce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10315bd0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315bd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315bd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10315bd8:;
  /* 10315bd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315bdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315bde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10315be0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10315be2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315be8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10315beb jmp 0x10315c19 */
  goto L_10315c19;
L_10315bed:;
  /* 10315bed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315bf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315bf2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10315bf4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10315bf6 mov cl, byte ptr [eax + 0x10340d41] */
  CL = (r8((uint32_t)(EAX + 0x10340d41)));
  /* 10315bfc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10315bff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10315c01 je 0x10315c19 */
  if (C.zf) goto L_10315c19;
  /* 10315c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315c06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10315c0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10315c11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10315c19:;
  /* 10315c19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10315c1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10315c26:;
  /* 10315c26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315c29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10315c2f jmp 0x10315aa1 */
  goto L_10315aa1;
L_10315c34:;
  /* 10315c34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315c38 je 0x10315c49 */
  if (C.zf) goto L_10315c49;
  /* 10315c3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315c3d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10315c40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10315c43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c46 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10315c49:;
  /* 10315c49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10315c4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10315c54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10315c56 jmp 0x10315a43 */
  goto L_10315a43;
L_10315c5b:;
  /* 10315c5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315c5f je 0x10315c73 */
  if (C.zf) goto L_10315c73;
  /* 10315c61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10315c64 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10315c6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10315c6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c70 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10315c73:;
  /* 10315c73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10315c76 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10315c78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315c7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10315c7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10315c80 mov esp, ebp */
  ESP = (EBP);
  /* 10315c82 pop ebp */
  EBP = (pop32());
  /* 10315c83 ret  */
  ESPCHK(0x10315860u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c90 @ 0x10315c90 (537 bytes, 173 insns) */
void f_10315c90(void) {
  FTRACE(0x10315c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10315c91 mov ebp, esp */
  EBP = (ESP);
  /* 10315c93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315c96 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10315c9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10315ca4 cmp dword ptr [0x1033f614], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f614))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315cab jne 0x10315cea */
  if (!C.zf) goto L_10315cea;
  /* 10315cad call dword ptr [0x10342330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342330))), 0x10315cb3u);
  /* 10315cb3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10315cb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315cba je 0x10315cc8 */
  if (C.zf) goto L_10315cc8;
  /* 10315cbc mov dword ptr [0x1033f614], 1 */
  w32((uint32_t)(0x1033f614), (0x1u));
  /* 10315cc6 jmp 0x10315cea */
  goto L_10315cea;
L_10315cc8:;
  /* 10315cc8 call dword ptr [0x1034232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034232c))), 0x10315cceu);
  /* 10315cce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10315cd1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315cd5 je 0x10315ce3 */
  if (C.zf) goto L_10315ce3;
  /* 10315cd7 mov dword ptr [0x1033f614], 2 */
  w32((uint32_t)(0x1033f614), (0x2u));
  /* 10315ce1 jmp 0x10315cea */
  goto L_10315cea;
L_10315ce3:;
  /* 10315ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315ce5 jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315cea:;
  /* 10315cea cmp dword ptr [0x1033f614], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f614))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315cf1 jne 0x10315dee */
  if (!C.zf) goto L_10315dee;
  /* 10315cf7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315cfb jne 0x10315d13 */
  if (!C.zf) goto L_10315d13;
  /* 10315cfd call dword ptr [0x10342330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342330))), 0x10315d03u);
  /* 10315d03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10315d06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315d0a jne 0x10315d13 */
  if (!C.zf) goto L_10315d13;
  /* 10315d0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315d0e jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315d13:;
  /* 10315d13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10315d16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10315d19:;
  /* 10315d19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315d1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315d1e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10315d21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315d23 je 0x10315d45 */
  if (C.zf) goto L_10315d45;
  /* 10315d25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315d28 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315d2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10315d2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315d31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10315d33 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10315d36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315d38 jne 0x10315d43 */
  if (!C.zf) goto L_10315d43;
  /* 10315d3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315d3d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315d40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10315d43:;
  /* 10315d43 jmp 0x10315d19 */
  goto L_10315d19;
L_10315d45:;
  /* 10315d45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315d48 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315d4b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10315d4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315d50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10315d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315d5e push edx */
  push32((uint32_t)(EDX));
  /* 10315d5f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10315d62 push eax */
  push32((uint32_t)(EAX));
  /* 10315d63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315d67 call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10315d6du);
  /* 10315d6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10315d70 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315d74 je 0x10315d94 */
  if (C.zf) goto L_10315d94;
  /* 10315d76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10315d78 push 0x1033ab50 */
  push32((uint32_t)(0x1033ab50u));
  /* 10315d7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10315d7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315d82 push ecx */
  push32((uint32_t)(ECX));
  /* 10315d83 call 0x103136c0 */
  push32(0x10315d88u); f_103136c0();
  /* 10315d88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315d8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10315d8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315d92 jne 0x10315da5 */
  if (!C.zf) goto L_10315da5;
L_10315d94:;
  /* 10315d94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10315d97 push edx */
  push32((uint32_t)(EDX));
  /* 10315d98 call dword ptr [0x10342324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342324))), 0x10315d9eu);
  /* 10315d9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315da0 jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315da5:;
  /* 10315da5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315da7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315da9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315dac push eax */
  push32((uint32_t)(EAX));
  /* 10315dad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315db0 push ecx */
  push32((uint32_t)(ECX));
  /* 10315db1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315db4 push edx */
  push32((uint32_t)(EDX));
  /* 10315db5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10315db8 push eax */
  push32((uint32_t)(EAX));
  /* 10315db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10315dbd call dword ptr [0x10342328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342328))), 0x10315dc3u);
  /* 10315dc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315dc5 jne 0x10315ddc */
  if (!C.zf) goto L_10315ddc;
  /* 10315dc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10315dc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315dcc push ecx */
  push32((uint32_t)(ECX));
  /* 10315dcd call 0x10314150 */
  push32(0x10315dd2u); f_10314150();
  /* 10315dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315dd5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10315ddc:;
  /* 10315ddc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10315ddf push edx */
  push32((uint32_t)(EDX));
  /* 10315de0 call dword ptr [0x10342324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342324))), 0x10315de6u);
  /* 10315de6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315de9 jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315dee:;
  /* 10315dee cmp dword ptr [0x1033f614], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1033f614))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315df5 jne 0x10315ea3 */
  if (!C.zf) goto L_10315ea3;
  /* 10315dfb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315dff jne 0x10315e17 */
  if (!C.zf) goto L_10315e17;
  /* 10315e01 call dword ptr [0x1034232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034232c))), 0x10315e07u);
  /* 10315e07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10315e0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315e0e jne 0x10315e17 */
  if (!C.zf) goto L_10315e17;
  /* 10315e10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315e12 jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315e17:;
  /* 10315e17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315e1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10315e1d:;
  /* 10315e1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10315e23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315e25 je 0x10315e45 */
  if (C.zf) goto L_10315e45;
  /* 10315e27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315e2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10315e30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e33 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10315e36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10315e38 jne 0x10315e43 */
  if (!C.zf) goto L_10315e43;
  /* 10315e3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315e40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10315e43:;
  /* 10315e43 jmp 0x10315e1d */
  goto L_10315e1d;
L_10315e45:;
  /* 10315e45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e48 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315e4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315e4e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10315e51 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10315e56 push 0x1033ab50 */
  push32((uint32_t)(0x1033ab50u));
  /* 10315e5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10315e5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315e60 push edx */
  push32((uint32_t)(EDX));
  /* 10315e61 call 0x103136c0 */
  push32(0x10315e66u); f_103136c0();
  /* 10315e66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315e69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10315e6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315e70 jne 0x10315e80 */
  if (!C.zf) goto L_10315e80;
  /* 10315e72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315e75 push eax */
  push32((uint32_t)(EAX));
  /* 10315e76 call dword ptr [0x10342320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342320))), 0x10315e7cu);
  /* 10315e7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315e7e jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315e80:;
  /* 10315e80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10315e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10315e84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315e87 push edx */
  push32((uint32_t)(EDX));
  /* 10315e88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315e8b push eax */
  push32((uint32_t)(EAX));
  /* 10315e8c call 0x10319fa0 */
  push32(0x10315e91u); f_10319fa0();
  /* 10315e91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315e94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10315e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10315e98 call dword ptr [0x10342320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342320))), 0x10315e9eu);
  /* 10315e9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10315ea1 jmp 0x10315ea5 */
  goto L_10315ea5;
L_10315ea3:;
  /* 10315ea3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10315ea5:;
  /* 10315ea5 mov esp, ebp */
  ESP = (EBP);
  /* 10315ea7 pop ebp */
  EBP = (pop32());
  /* 10315ea8 ret  */
  ESPCHK(0x10315c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x10315eb0 (77 bytes, 25 insns) */
void f_10315eb0(void) {
  FTRACE(0x10315eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10315eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10315eb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315eb5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10315eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315ebc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315ec0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10315ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10315ec4 call dword ptr [0x10342338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342338))), 0x10315ecau);
  /* 10315eca mov dword ptr [0x10340e6c], eax */
  w32((uint32_t)(0x10340e6c), (EAX));
  /* 10315ecf cmp dword ptr [0x10340e6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10340e6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315ed6 jne 0x10315edc */
  if (!C.zf) goto L_10315edc;
  /* 10315ed8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315eda jmp 0x10315efb */
  goto L_10315efb;
L_10315edc:;
  /* 10315edc call 0x10317960 */
  push32(0x10315ee1u); f_10317960();
  /* 10315ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10315ee3 jne 0x10315ef6 */
  if (!C.zf) goto L_10315ef6;
  /* 10315ee5 mov ecx, dword ptr [0x10340e6c] */
  ECX = (r32((uint32_t)(0x10340e6c)));
  /* 10315eeb push ecx */
  push32((uint32_t)(ECX));
  /* 10315eec call dword ptr [0x10342334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342334))), 0x10315ef2u);
  /* 10315ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10315ef4 jmp 0x10315efb */
  goto L_10315efb;
L_10315ef6:;
  /* 10315ef6 mov eax, 1 */
  EAX = (0x1u);
L_10315efb:;
  /* 10315efb pop ebp */
  EBP = (pop32());
  /* 10315efc ret  */
  ESPCHK(0x10315eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f00 @ 0x10315f00 (156 bytes, 48 insns) */
void f_10315f00(void) {
  FTRACE(0x10315f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10315f01 mov ebp, esp */
  EBP = (ESP);
  /* 10315f03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315f06 mov eax, dword ptr [0x10340e68] */
  EAX = (r32((uint32_t)(0x10340e68)));
  /* 10315f0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10315f0e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10315f15 jmp 0x10315f20 */
  goto L_10315f20;
L_10315f17:;
  /* 10315f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315f1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315f1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10315f20:;
  /* 10315f20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10315f23 cmp edx, dword ptr [0x10340e64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10340e64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315f29 jge 0x10315f76 */
  if ((C.sf==C.of)) goto L_10315f76;
  /* 10315f2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10315f30 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10315f35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315f38 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10315f3b push ecx */
  push32((uint32_t)(ECX));
  /* 10315f3c call dword ptr [0x10342340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342340))), 0x10315f42u);
  /* 10315f42 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10315f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10315f49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315f4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10315f4f push eax */
  push32((uint32_t)(EAX));
  /* 10315f50 call dword ptr [0x10342340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342340))), 0x10315f56u);
  /* 10315f56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315f59 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10315f5c push edx */
  push32((uint32_t)(EDX));
  /* 10315f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10315f5f mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 10315f64 push eax */
  push32((uint32_t)(EAX));
  /* 10315f65 call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x10315f6bu);
  /* 10315f6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10315f6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10315f71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10315f74 jmp 0x10315f17 */
  goto L_10315f17;
L_10315f76:;
  /* 10315f76 mov edx, dword ptr [0x10340e68] */
  EDX = (r32((uint32_t)(0x10340e68)));
  /* 10315f7c push edx */
  push32((uint32_t)(EDX));
  /* 10315f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10315f7f mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 10315f84 push eax */
  push32((uint32_t)(EAX));
  /* 10315f85 call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x10315f8bu);
  /* 10315f8b mov ecx, dword ptr [0x10340e6c] */
  ECX = (r32((uint32_t)(0x10340e6c)));
  /* 10315f91 push ecx */
  push32((uint32_t)(ECX));
  /* 10315f92 call dword ptr [0x10342334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342334))), 0x10315f98u);
  /* 10315f98 mov esp, ebp */
  ESP = (EBP);
  /* 10315f9a pop ebp */
  EBP = (pop32());
  /* 10315f9b ret  */
  ESPCHK(0x10315f00u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10315fa0 (73 bytes, 19 insns) */
void f_10315fa0(void) {
  FTRACE(0x10315fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10315fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10315fa3 cmp dword ptr [0x1033f4a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315faa je 0x10315fbe */
  if (C.zf) goto L_10315fbe;
  /* 10315fac cmp dword ptr [0x1033f4a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315fb3 jne 0x10315fe7 */
  if (!C.zf) goto L_10315fe7;
  /* 10315fb5 cmp dword ptr [0x1033f4ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315fbc jne 0x10315fe7 */
  if (!C.zf) goto L_10315fe7;
L_10315fbe:;
  /* 10315fbe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10315fc3 call 0x10315ff0 */
  push32(0x10315fc8u); f_10315ff0();
  /* 10315fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10315fcb cmp dword ptr [0x1033f618], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f618))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10315fd2 je 0x10315fda */
  if (C.zf) goto L_10315fda;
  /* 10315fd4 call dword ptr [0x1033f618] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f618))), 0x10315fdau);
L_10315fda:;
  /* 10315fda push 0xff */
  push32((uint32_t)(0xffu));
  /* 10315fdf call 0x10315ff0 */
  push32(0x10315fe4u); f_10315ff0();
  /* 10315fe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10315fe7:;
  /* 10315fe7 pop ebp */
  EBP = (pop32());
  /* 10315fe8 ret  */
  ESPCHK(0x10315fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ff0 @ 0x10315ff0 (447 bytes, 131 insns) */
void f_10315ff0(void) {
  FTRACE(0x10315ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10315ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10315ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10315ff3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10315ff9 push ebx */
  push32((uint32_t)(EBX));
  /* 10315ffa push esi */
  push32((uint32_t)(ESI));
  /* 10315ffb push edi */
  push32((uint32_t)(EDI));
  /* 10315ffc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10316003 jmp 0x1031600e */
  goto L_1031600e;
L_10316005:;
  /* 10316005 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316008 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031600b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1031600e:;
  /* 1031600e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316012 jae 0x10316027 */
  if (!C.cf) goto L_10316027;
  /* 10316014 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316017 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031601a cmp edx, dword ptr [ecx*8 + 0x1033dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1033dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316021 jne 0x10316025 */
  if (!C.zf) goto L_10316025;
  /* 10316023 jmp 0x10316027 */
  goto L_10316027;
L_10316025:;
  /* 10316025 jmp 0x10316005 */
  goto L_10316005;
L_10316027:;
  /* 10316027 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031602a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031602d cmp ecx, dword ptr [eax*8 + 0x1033dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1033dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316034 jne 0x103161a8 */
  if (!C.zf) goto L_103161a8;
  /* 1031603a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316041 je 0x10316064 */
  if (C.zf) goto L_10316064;
  /* 10316043 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316046 mov eax, dword ptr [edx*8 + 0x1033dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1033dab4)));
  /* 1031604d push eax */
  push32((uint32_t)(EAX));
  /* 1031604e push 0 */
  push32((uint32_t)(0x0u));
  /* 10316050 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316052 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316054 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316056 call 0x10312780 */
  push32(0x1031605bu); f_10312780();
  /* 1031605b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031605e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316061 jne 0x10316064 */
  if (!C.zf) goto L_10316064;
  /* 10316063 int3  */
  x86_unimpl("int3 @ 0x10316063");
L_10316064:;
  /* 10316064 cmp dword ptr [0x1033f4a8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031606b je 0x1031607f */
  if (C.zf) goto L_1031607f;
  /* 1031606d cmp dword ptr [0x1033f4a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316074 jne 0x103160b8 */
  if (!C.zf) goto L_103160b8;
  /* 10316076 cmp dword ptr [0x1033f4ac], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1033f4ac))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031607d jne 0x103160b8 */
  if (!C.zf) goto L_103160b8;
L_1031607f:;
  /* 1031607f push 0 */
  push32((uint32_t)(0x0u));
  /* 10316081 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10316084 push ecx */
  push32((uint32_t)(ECX));
  /* 10316085 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316088 mov eax, dword ptr [edx*8 + 0x1033dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1033dab4)));
  /* 1031608f push eax */
  push32((uint32_t)(EAX));
  /* 10316090 call 0x103164f0 */
  push32(0x10316095u); f_103164f0();
  /* 10316095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316098 push eax */
  push32((uint32_t)(EAX));
  /* 10316099 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031609c mov edx, dword ptr [ecx*8 + 0x1033dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1033dab4)));
  /* 103160a3 push edx */
  push32((uint32_t)(EDX));
  /* 103160a4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 103160a6 call dword ptr [0x103422b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422b8))), 0x103160acu);
  /* 103160ac push eax */
  push32((uint32_t)(EAX));
  /* 103160ad call dword ptr [0x103422bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422bc))), 0x103160b3u);
  /* 103160b3 jmp 0x103161a8 */
  goto L_103161a8;
L_103160b8:;
  /* 103160b8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103160bf je 0x103161a8 */
  if (C.zf) goto L_103161a8;
  /* 103160c5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 103160ca lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 103160d0 push eax */
  push32((uint32_t)(EAX));
  /* 103160d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103160d3 call dword ptr [0x103422d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d4))), 0x103160d9u);
  /* 103160d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103160db jne 0x103160f1 */
  if (!C.zf) goto L_103160f1;
  /* 103160dd push 0x1033a3b8 */
  push32((uint32_t)(0x1033a3b8u));
  /* 103160e2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 103160e8 push ecx */
  push32((uint32_t)(ECX));
  /* 103160e9 call 0x10316670 */
  push32(0x103160eeu); f_10316670();
  /* 103160ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103160f1:;
  /* 103160f1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 103160f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 103160fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103160fd push eax */
  push32((uint32_t)(EAX));
  /* 103160fe call 0x103164f0 */
  push32(0x10316103u); f_103164f0();
  /* 10316103 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316106 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316109 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031610c jbe 0x1031613a */
  if ((C.cf||C.zf)) goto L_1031613a;
  /* 1031610e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10316114 push ecx */
  push32((uint32_t)(ECX));
  /* 10316115 call 0x103164f0 */
  push32(0x1031611au); f_103164f0();
  /* 1031611a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031611d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316120 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10316124 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316127 push 3 */
  push32((uint32_t)(0x3u));
  /* 10316129 push 0x1033a3b4 */
  push32((uint32_t)(0x1033a3b4u));
  /* 1031612e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316131 push ecx */
  push32((uint32_t)(ECX));
  /* 10316132 call 0x10316ee0 */
  push32(0x10316137u); f_10316ee0();
  /* 10316137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031613a:;
  /* 1031613a push 0x1033ae0c */
  push32((uint32_t)(0x1033ae0cu));
  /* 1031613f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10316145 push edx */
  push32((uint32_t)(EDX));
  /* 10316146 call 0x10316670 */
  push32(0x1031614bu); f_10316670();
  /* 1031614b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031614e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316151 push eax */
  push32((uint32_t)(EAX));
  /* 10316152 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10316158 push ecx */
  push32((uint32_t)(ECX));
  /* 10316159 call 0x10316680 */
  push32(0x1031615eu); f_10316680();
  /* 1031615e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316161 push 0x1033a32c */
  push32((uint32_t)(0x1033a32cu));
  /* 10316166 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1031616c push edx */
  push32((uint32_t)(EDX));
  /* 1031616d call 0x10316680 */
  push32(0x10316172u); f_10316680();
  /* 10316172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316178 mov ecx, dword ptr [eax*8 + 0x1033dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1033dab4)));
  /* 1031617f push ecx */
  push32((uint32_t)(ECX));
  /* 10316180 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10316186 push edx */
  push32((uint32_t)(EDX));
  /* 10316187 call 0x10316680 */
  push32(0x1031618cu); f_10316680();
  /* 1031618c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031618f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10316194 push 0x1033ade4 */
  push32((uint32_t)(0x1033ade4u));
  /* 10316199 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1031619f push eax */
  push32((uint32_t)(EAX));
  /* 103161a0 call 0x10316e20 */
  push32(0x103161a5u); f_10316e20();
  /* 103161a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103161a8:;
  /* 103161a8 pop edi */
  EDI = (pop32());
  /* 103161a9 pop esi */
  ESI = (pop32());
  /* 103161aa pop ebx */
  EBX = (pop32());
  /* 103161ab mov esp, ebp */
  ESP = (EBP);
  /* 103161ad pop ebp */
  EBP = (pop32());
  /* 103161ae ret  */
  ESPCHK(0x10315ff0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x103161b0 (80 bytes, 27 insns) */
void f_103161b0(void) {
  FTRACE(0x103161b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103161b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103161b1 mov ebp, esp */
  EBP = (ESP);
  /* 103161b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103161b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103161bb jmp 0x103161c6 */
  goto L_103161c6;
L_103161bd:;
  /* 103161bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103161c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103161c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103161c6:;
  /* 103161c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103161ca jae 0x103161df */
  if (!C.cf) goto L_103161df;
  /* 103161cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103161cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103161d2 cmp edx, dword ptr [ecx*8 + 0x1033dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1033dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103161d9 jne 0x103161dd */
  if (!C.zf) goto L_103161dd;
  /* 103161db jmp 0x103161df */
  goto L_103161df;
L_103161dd:;
  /* 103161dd jmp 0x103161bd */
  goto L_103161bd;
L_103161df:;
  /* 103161df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103161e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103161e5 cmp ecx, dword ptr [eax*8 + 0x1033dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1033dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103161ec jne 0x103161fa */
  if (!C.zf) goto L_103161fa;
  /* 103161ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103161f1 mov eax, dword ptr [edx*8 + 0x1033dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1033dab4)));
  /* 103161f8 jmp 0x103161fc */
  goto L_103161fc;
L_103161fa:;
  /* 103161fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_103161fc:;
  /* 103161fc mov esp, ebp */
  ESP = (EBP);
  /* 103161fe pop ebp */
  EBP = (pop32());
  /* 103161ff ret  */
  ESPCHK(0x103161b0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10316200 (66 bytes, 28 insns) */
void f_10316200(void) {
  FTRACE(0x10316200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316200 push ebp */
  push32((uint32_t)(EBP));
  /* 10316201 mov ebp, esp */
  EBP = (ESP);
  /* 10316203 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316207 jne 0x10316227 */
  if (!C.zf) goto L_10316227;
  /* 10316209 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031620d jge 0x10316227 */
  if ((C.sf==C.of)) goto L_10316227;
  /* 1031620f push 1 */
  push32((uint32_t)(0x1u));
  /* 10316211 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10316214 push eax */
  push32((uint32_t)(EAX));
  /* 10316215 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316218 push ecx */
  push32((uint32_t)(ECX));
  /* 10316219 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031621c push edx */
  push32((uint32_t)(EDX));
  /* 1031621d call 0x10316250 */
  push32(0x10316222u); f_10316250();
  /* 10316222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316225 jmp 0x1031623d */
  goto L_1031623d;
L_10316227:;
  /* 10316227 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316229 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1031622c push eax */
  push32((uint32_t)(EAX));
  /* 1031622d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316230 push ecx */
  push32((uint32_t)(ECX));
  /* 10316231 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316234 push edx */
  push32((uint32_t)(EDX));
  /* 10316235 call 0x10316250 */
  push32(0x1031623au); f_10316250();
  /* 1031623a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031623d:;
  /* 1031623d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316240 pop ebp */
  EBP = (pop32());
  /* 10316241 ret  */
  ESPCHK(0x10316200u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10316250 (194 bytes, 71 insns) */
void f_10316250(void) {
  FTRACE(0x10316250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316250 push ebp */
  push32((uint32_t)(EBP));
  /* 10316251 mov ebp, esp */
  EBP = (ESP);
  /* 10316253 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316256 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316259 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031625c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316260 je 0x10316279 */
  if (C.zf) goto L_10316279;
  /* 10316262 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316265 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10316268 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031626b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031626e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10316271 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316274 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10316276 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10316279:;
  /* 10316279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031627c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1031627f:;
  /* 1031627f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316282 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316284 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10316287 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1031628a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031628d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1031628f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10316292 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10316295 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316299 jbe 0x103162b1 */
  if ((C.cf||C.zf)) goto L_103162b1;
  /* 1031629b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031629e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103162a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162a4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103162a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103162ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103162af jmp 0x103162c5 */
  goto L_103162c5;
L_103162b1:;
  /* 103162b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 103162b4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103162b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103162bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103162c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_103162c5:;
  /* 103162c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103162c9 ja 0x1031627f */
  if ((!C.cf&&!C.zf)) goto L_1031627f;
  /* 103162cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162ce mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 103162d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103162d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_103162da:;
  /* 103162da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103162df mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 103162e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103162e8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103162ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 103162ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103162ef mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103162f2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103162f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103162f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103162fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103162fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316300 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316303 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10316306 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316309 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031630c jb 0x103162da */
  if (C.cf) goto L_103162da;
  /* 1031630e mov esp, ebp */
  ESP = (EBP);
  /* 10316310 pop ebp */
  EBP = (pop32());
  /* 10316311 ret  */
  ESPCHK(0x10316250u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10316320 (63 bytes, 24 insns) */
void f_10316320(void) {
  FTRACE(0x10316320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316320 push ebp */
  push32((uint32_t)(EBP));
  /* 10316321 mov ebp, esp */
  EBP = (ESP);
  /* 10316323 push ecx */
  push32((uint32_t)(ECX));
  /* 10316324 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316328 jne 0x10316339 */
  if (!C.zf) goto L_10316339;
  /* 1031632a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031632e jge 0x10316339 */
  if ((C.sf==C.of)) goto L_10316339;
  /* 10316330 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10316337 jmp 0x10316340 */
  goto L_10316340;
L_10316339:;
  /* 10316339 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10316340:;
  /* 10316340 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316343 push eax */
  push32((uint32_t)(EAX));
  /* 10316344 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10316347 push ecx */
  push32((uint32_t)(ECX));
  /* 10316348 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031634b push edx */
  push32((uint32_t)(EDX));
  /* 1031634c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031634f push eax */
  push32((uint32_t)(EAX));
  /* 10316350 call 0x10316250 */
  push32(0x10316355u); f_10316250();
  /* 10316355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316358 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031635b mov esp, ebp */
  ESP = (EBP);
  /* 1031635d pop ebp */
  EBP = (pop32());
  /* 1031635e ret  */
  ESPCHK(0x10316320u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10316360 (30 bytes, 14 insns) */
void f_10316360(void) {
  FTRACE(0x10316360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316360 push ebp */
  push32((uint32_t)(EBP));
  /* 10316361 mov ebp, esp */
  EBP = (ESP);
  /* 10316363 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316365 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10316368 push eax */
  push32((uint32_t)(EAX));
  /* 10316369 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031636c push ecx */
  push32((uint32_t)(ECX));
  /* 1031636d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316370 push edx */
  push32((uint32_t)(EDX));
  /* 10316371 call 0x10316250 */
  push32(0x10316376u); f_10316250();
  /* 10316376 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031637c pop ebp */
  EBP = (pop32());
  /* 1031637d ret  */
  ESPCHK(0x10316360u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10316380 (72 bytes, 28 insns) */
void f_10316380(void) {
  FTRACE(0x10316380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316380 push ebp */
  push32((uint32_t)(EBP));
  /* 10316381 mov ebp, esp */
  EBP = (ESP);
  /* 10316383 push ecx */
  push32((uint32_t)(ECX));
  /* 10316384 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316388 jne 0x103163a1 */
  if (!C.zf) goto L_103163a1;
  /* 1031638a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031638e jg 0x103163a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_103163a1;
  /* 10316390 jl 0x10316398 */
  if ((C.sf!=C.of)) goto L_10316398;
  /* 10316392 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316396 jae 0x103163a1 */
  if (!C.cf) goto L_103163a1;
L_10316398:;
  /* 10316398 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1031639f jmp 0x103163a8 */
  goto L_103163a8;
L_103163a1:;
  /* 103163a1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103163a8:;
  /* 103163a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103163ab push eax */
  push32((uint32_t)(EAX));
  /* 103163ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103163af push ecx */
  push32((uint32_t)(ECX));
  /* 103163b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103163b3 push edx */
  push32((uint32_t)(EDX));
  /* 103163b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103163b7 push eax */
  push32((uint32_t)(EAX));
  /* 103163b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103163bb push ecx */
  push32((uint32_t)(ECX));
  /* 103163bc call 0x103163d0 */
  push32(0x103163c1u); f_103163d0();
  /* 103163c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103163c4 mov esp, ebp */
  ESP = (EBP);
  /* 103163c6 pop ebp */
  EBP = (pop32());
  /* 103163c7 ret  */
  ESPCHK(0x10316380u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x103163d0 (242 bytes, 91 insns) */
void f_103163d0(void) {
  FTRACE(0x103163d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103163d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103163d1 mov ebp, esp */
  EBP = (ESP);
  /* 103163d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103163d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103163d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103163dc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103163e0 je 0x10316404 */
  if (C.zf) goto L_10316404;
  /* 103163e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 103163e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 103163e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103163eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103163ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103163f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103163f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 103163f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103163f9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103163fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 103163fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10316401 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10316404:;
  /* 10316404 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316407 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1031640a:;
  /* 1031640a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1031640d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1031640f push ecx */
  push32((uint32_t)(ECX));
  /* 10316410 push eax */
  push32((uint32_t)(EAX));
  /* 10316411 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316414 push edx */
  push32((uint32_t)(EDX));
  /* 10316415 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316418 push eax */
  push32((uint32_t)(EAX));
  /* 10316419 call 0x1031a350 */
  push32(0x1031641eu); f_1031a350();
  /* 1031641e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316421 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10316424 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316426 push edx */
  push32((uint32_t)(EDX));
  /* 10316427 push ecx */
  push32((uint32_t)(ECX));
  /* 10316428 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031642b push eax */
  push32((uint32_t)(EAX));
  /* 1031642c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031642f push ecx */
  push32((uint32_t)(ECX));
  /* 10316430 call 0x1031a2e0 */
  push32(0x10316435u); f_1031a2e0();
  /* 10316435 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10316438 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1031643b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031643f jbe 0x10316457 */
  if ((C.cf||C.zf)) goto L_10316457;
  /* 10316441 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316444 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316447 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031644a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1031644c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031644f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316452 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10316455 jmp 0x1031646b */
  goto L_1031646b;
L_10316457:;
  /* 10316457 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1031645a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031645d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316460 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10316462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316465 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316468 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1031646b:;
  /* 1031646b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031646f ja 0x1031640a */
  if ((!C.cf&&!C.zf)) goto L_1031640a;
  /* 10316471 jb 0x10316479 */
  if (C.cf) goto L_10316479;
  /* 10316473 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316477 ja 0x1031640a */
  if ((!C.cf&&!C.zf)) goto L_1031640a;
L_10316479:;
  /* 10316479 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031647c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1031647f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316482 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316485 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10316488:;
  /* 10316488 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031648b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1031648d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10316490 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316493 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316496 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10316498 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1031649a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031649d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 103164a0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 103164a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103164a5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103164a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 103164ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103164ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 103164b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103164b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103164b7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103164ba jb 0x10316488 */
  if (C.cf) goto L_10316488;
  /* 103164bc mov esp, ebp */
  ESP = (EBP);
  /* 103164be pop ebp */
  EBP = (pop32());
  /* 103164bf ret 0x14 */
  ESPCHK(0x103163d0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x103164d0 (31 bytes, 15 insns) */
void f_103164d0(void) {
  FTRACE(0x103164d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103164d0 push ebp */
  push32((uint32_t)(EBP));
  /* 103164d1 mov ebp, esp */
  EBP = (ESP);
  /* 103164d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 103164d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 103164d8 push eax */
  push32((uint32_t)(EAX));
  /* 103164d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 103164dc push ecx */
  push32((uint32_t)(ECX));
  /* 103164dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103164e0 push edx */
  push32((uint32_t)(EDX));
  /* 103164e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103164e4 push eax */
  push32((uint32_t)(EAX));
  /* 103164e5 call 0x103163d0 */
  push32(0x103164eau); f_103163d0();
  /* 103164ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 103164ed pop ebp */
  EBP = (pop32());
  /* 103164ee ret  */
  ESPCHK(0x103164d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x103164f0 (123 bytes, 44 insns) */
void f_103164f0(void) {
  FTRACE(0x103164f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103164f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 103164f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103164fa je 0x10316510 */
  if (C.zf) goto L_10316510;
L_103164fc:;
  /* 103164fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 103164fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103164ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10316501 je 0x10316543 */
  if (C.zf) goto L_10316543;
  /* 10316503 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10316509 jne 0x103164fc */
  if (!C.zf) goto L_103164fc;
  /* 1031650b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10316510:;
  /* 10316510 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10316512 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10316517 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316519 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031651c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1031651e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316521 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10316526 je 0x10316510 */
  if (C.zf) goto L_10316510;
  /* 10316528 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1031652b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1031652d je 0x10316561 */
  if (C.zf) goto L_10316561;
  /* 1031652f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10316531 je 0x10316557 */
  if (C.zf) goto L_10316557;
  /* 10316533 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10316538 je 0x1031654d */
  if (C.zf) goto L_1031654d;
  /* 1031653a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1031653f je 0x10316543 */
  if (C.zf) goto L_10316543;
  /* 10316541 jmp 0x10316510 */
  goto L_10316510;
L_10316543:;
  /* 10316543 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10316546 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1031654a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031654c ret  */
  ESPCHK(0x103164f0u, _esp0);
  ESP += 4; return;
L_1031654d:;
  /* 1031654d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10316550 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10316554 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316556 ret  */
  ESPCHK(0x103164f0u, _esp0);
  ESP += 4; return;
L_10316557:;
  /* 10316557 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1031655a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1031655e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316560 ret  */
  ESPCHK(0x103164f0u, _esp0);
  ESP += 4; return;
L_10316561:;
  /* 10316561 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10316564 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10316568 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031656a ret  */
  ESPCHK(0x103164f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006570 @ 0x10316570 (249 bytes, 93 insns) */
void f_10316570(void) {
  FTRACE(0x10316570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316570 push ebp */
  push32((uint32_t)(EBP));
  /* 10316571 mov ebp, esp */
  EBP = (ESP);
  /* 10316573 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316576 push ebx */
  push32((uint32_t)(EBX));
  /* 10316577 push esi */
  push32((uint32_t)(ESI));
  /* 10316578 push edi */
  push32((uint32_t)(EDI));
  /* 10316579 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1031657c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1031657f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10316582 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10316585:;
  /* 10316585 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316589 jne 0x103165a9 */
  if (!C.zf) goto L_103165a9;
  /* 1031658b push 0x1033ae44 */
  push32((uint32_t)(0x1033ae44u));
  /* 10316590 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316592 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10316594 push 0x1033ae38 */
  push32((uint32_t)(0x1033ae38u));
  /* 10316599 push 2 */
  push32((uint32_t)(0x2u));
  /* 1031659b call 0x10312780 */
  push32(0x103165a0u); f_10312780();
  /* 103165a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103165a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103165a6 jne 0x103165a9 */
  if (!C.zf) goto L_103165a9;
  /* 103165a8 int3  */
  x86_unimpl("int3 @ 0x103165a8");
L_103165a9:;
  /* 103165a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103165ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103165ad jne 0x10316585 */
  if (!C.zf) goto L_10316585;
L_103165af:;
  /* 103165af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103165b3 jne 0x103165d3 */
  if (!C.zf) goto L_103165d3;
  /* 103165b5 push 0x1033ae28 */
  push32((uint32_t)(0x1033ae28u));
  /* 103165ba push 0 */
  push32((uint32_t)(0x0u));
  /* 103165bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 103165be push 0x1033ae38 */
  push32((uint32_t)(0x1033ae38u));
  /* 103165c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 103165c5 call 0x10312780 */
  push32(0x103165cau); f_10312780();
  /* 103165ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103165cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103165d0 jne 0x103165d3 */
  if (!C.zf) goto L_103165d3;
  /* 103165d2 int3  */
  x86_unimpl("int3 @ 0x103165d2");
L_103165d3:;
  /* 103165d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103165d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103165d7 jne 0x103165af */
  if (!C.zf) goto L_103165af;
  /* 103165d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103165dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 103165e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103165e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103165e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 103165ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103165ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103165f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 103165f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103165f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103165fa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 103165fd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10316600 push edx */
  push32((uint32_t)(EDX));
  /* 10316601 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10316604 push eax */
  push32((uint32_t)(EAX));
  /* 10316605 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316608 push ecx */
  push32((uint32_t)(ECX));
  /* 10316609 call 0x1031a650 */
  push32(0x1031660eu); f_1031a650();
  /* 1031660e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316611 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10316614 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316617 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1031661a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031661d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316620 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10316623 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316626 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031662a jl 0x1031664e */
  if ((C.sf!=C.of)) goto L_1031664e;
  /* 1031662c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031662f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10316631 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10316634 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316636 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1031663c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1031663f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316642 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10316644 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316647 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031664a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1031664c jmp 0x1031665f */
  goto L_1031665f;
L_1031664e:;
  /* 1031664e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316651 push eax */
  push32((uint32_t)(EAX));
  /* 10316652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10316654 call 0x1031a3d0 */
  push32(0x10316659u); f_1031a3d0();
  /* 10316659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031665c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1031665f:;
  /* 1031665f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10316662 pop edi */
  EDI = (pop32());
  /* 10316663 pop esi */
  ESI = (pop32());
  /* 10316664 pop ebx */
  EBX = (pop32());
  /* 10316665 mov esp, ebp */
  ESP = (EBP);
  /* 10316667 pop ebp */
  EBP = (pop32());
  /* 10316668 ret  */
  ESPCHK(0x10316570u, _esp0);
  ESP += 4; return;
}

/* FUN_10006670 @ 0x10316670 (7 bytes, 3 insns) */
void f_10316670(void) {
  FTRACE(0x10316670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316670 push edi */
  push32((uint32_t)(EDI));
  /* 10316671 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10316675 jmp 0x103166e1 */
  jmp_ind(0x103166e1u); return;
}

/* FUN_10006680 @ 0x10316680 (224 bytes, 84 insns) */
void f_10316680(void) {
  FTRACE(0x10316680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316680 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10316684 push edi */
  push32((uint32_t)(EDI));
  /* 10316685 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1031668b je 0x1031669c */
  if (C.zf) goto L_1031669c;
L_1031668d:;
  /* 1031668d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1031668f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10316690 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10316692 je 0x103166cf */
  if (C.zf) goto L_103166cf;
  /* 10316694 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1031669a jne 0x1031668d */
  if (!C.zf) goto L_1031668d;
L_1031669c:;
  /* 1031669c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1031669e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 103166a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103166a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 103166a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 103166aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 103166ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 103166b2 je 0x1031669c */
  if (C.zf) goto L_1031669c;
  /* 103166b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 103166b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 103166b9 je 0x103166de */
  if (C.zf) goto L_103166de;
  /* 103166bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 103166bd je 0x103166d9 */
  if (C.zf) goto L_103166d9;
  /* 103166bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 103166c4 je 0x103166d4 */
  if (C.zf) goto L_103166d4;
  /* 103166c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 103166cb je 0x103166cf */
  if (C.zf) goto L_103166cf;
  /* 103166cd jmp 0x1031669c */
  goto L_1031669c;
L_103166cf:;
  /* 103166cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 103166d2 jmp 0x103166e1 */
  goto L_103166e1;
L_103166d4:;
  /* 103166d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 103166d7 jmp 0x103166e1 */
  goto L_103166e1;
L_103166d9:;
  /* 103166d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 103166dc jmp 0x103166e1 */
  goto L_103166e1;
L_103166de:;
  /* 103166de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_103166e1:;
  /* 103166e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 103166e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103166eb je 0x10316706 */
  if (C.zf) goto L_10316706;
L_103166ed:;
  /* 103166ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 103166ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 103166f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 103166f2 je 0x10316758 */
  if (C.zf) goto L_10316758;
  /* 103166f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 103166f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 103166f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 103166fd jne 0x103166ed */
  if (!C.zf) goto L_103166ed;
  /* 103166ff jmp 0x10316706 */
  goto L_10316706;
L_10316701:;
  /* 10316701 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10316703 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10316706:;
  /* 10316706 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1031670b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1031670d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031670f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10316712 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10316714 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316716 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316719 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1031671e je 0x10316701 */
  if (C.zf) goto L_10316701;
  /* 10316720 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10316722 je 0x10316758 */
  if (C.zf) goto L_10316758;
  /* 10316724 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10316726 je 0x1031674f */
  if (C.zf) goto L_1031674f;
  /* 10316728 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1031672e je 0x10316742 */
  if (C.zf) goto L_10316742;
  /* 10316730 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10316736 je 0x1031673a */
  if (C.zf) goto L_1031673a;
  /* 10316738 jmp 0x10316701 */
  goto L_10316701;
L_1031673a:;
  /* 1031673a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1031673c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10316740 pop edi */
  EDI = (pop32());
  /* 10316741 ret  */
  ESPCHK(0x10316680u, _esp0);
  ESP += 4; return;
L_10316742:;
  /* 10316742 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10316745 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10316749 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1031674d pop edi */
  EDI = (pop32());
  /* 1031674e ret  */
  ESPCHK(0x10316680u, _esp0);
  ESP += 4; return;
L_1031674f:;
  /* 1031674f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10316752 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10316756 pop edi */
  EDI = (pop32());
  /* 10316757 ret  */
  ESPCHK(0x10316680u, _esp0);
  ESP += 4; return;
L_10316758:;
  /* 10316758 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1031675a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1031675e pop edi */
  EDI = (pop32());
  /* 1031675f ret  */
  ESPCHK(0x10316680u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10316760 (243 bytes, 91 insns) */
void f_10316760(void) {
  FTRACE(0x10316760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316760 push ebp */
  push32((uint32_t)(EBP));
  /* 10316761 mov ebp, esp */
  EBP = (ESP);
  /* 10316763 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316766 push ebx */
  push32((uint32_t)(EBX));
  /* 10316767 push esi */
  push32((uint32_t)(ESI));
  /* 10316768 push edi */
  push32((uint32_t)(EDI));
  /* 10316769 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1031676c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1031676f:;
  /* 1031676f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316773 jne 0x10316793 */
  if (!C.zf) goto L_10316793;
  /* 10316775 push 0x1033ae44 */
  push32((uint32_t)(0x1033ae44u));
  /* 1031677a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031677c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1031677e push 0x1033ae54 */
  push32((uint32_t)(0x1033ae54u));
  /* 10316783 push 2 */
  push32((uint32_t)(0x2u));
  /* 10316785 call 0x10312780 */
  push32(0x1031678au); f_10312780();
  /* 1031678a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031678d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316790 jne 0x10316793 */
  if (!C.zf) goto L_10316793;
  /* 10316792 int3  */
  x86_unimpl("int3 @ 0x10316792");
L_10316793:;
  /* 10316793 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10316795 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10316797 jne 0x1031676f */
  if (!C.zf) goto L_1031676f;
L_10316799:;
  /* 10316799 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031679d jne 0x103167bd */
  if (!C.zf) goto L_103167bd;
  /* 1031679f push 0x1033ae28 */
  push32((uint32_t)(0x1033ae28u));
  /* 103167a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 103167a6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 103167a8 push 0x1033ae54 */
  push32((uint32_t)(0x1033ae54u));
  /* 103167ad push 2 */
  push32((uint32_t)(0x2u));
  /* 103167af call 0x10312780 */
  push32(0x103167b4u); f_10312780();
  /* 103167b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103167b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103167ba jne 0x103167bd */
  if (!C.zf) goto L_103167bd;
  /* 103167bc int3  */
  x86_unimpl("int3 @ 0x103167bc");
L_103167bd:;
  /* 103167bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 103167bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 103167c1 jne 0x10316799 */
  if (!C.zf) goto L_10316799;
  /* 103167c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103167c6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 103167cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 103167d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103167d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 103167d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103167d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103167dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 103167de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 103167e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103167e4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 103167e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 103167ea push ecx */
  push32((uint32_t)(ECX));
  /* 103167eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 103167ee push edx */
  push32((uint32_t)(EDX));
  /* 103167ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 103167f2 push eax */
  push32((uint32_t)(EAX));
  /* 103167f3 call 0x1031a650 */
  push32(0x103167f8u); f_1031a650();
  /* 103167f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103167fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 103167fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316801 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10316804 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316807 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031680a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1031680d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316810 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316814 jl 0x10316838 */
  if ((C.sf!=C.of)) goto L_10316838;
  /* 10316816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316819 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031681b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1031681e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10316820 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10316826 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10316829 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031682c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1031682e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316831 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10316834 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10316836 jmp 0x10316849 */
  goto L_10316849;
L_10316838:;
  /* 10316838 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1031683b push edx */
  push32((uint32_t)(EDX));
  /* 1031683c push 0 */
  push32((uint32_t)(0x0u));
  /* 1031683e call 0x1031a3d0 */
  push32(0x10316843u); f_1031a3d0();
  /* 10316843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316846 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10316849:;
  /* 10316849 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1031684c pop edi */
  EDI = (pop32());
  /* 1031684d pop esi */
  ESI = (pop32());
  /* 1031684e pop ebx */
  EBX = (pop32());
  /* 1031684f mov esp, ebp */
  ESP = (EBP);
  /* 10316851 pop ebp */
  EBP = (pop32());
  /* 10316852 ret  */
  ESPCHK(0x10316760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006860 @ 0x10316860 (47 bytes, 17 insns) */
void f_10316860(void) {
  FTRACE(0x10316860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316860 push ecx */
  push32((uint32_t)(ECX));
  /* 10316861 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316866 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1031686a jb 0x10316880 */
  if (C.cf) goto L_10316880;
L_1031686c:;
  /* 1031686c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316872 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316877 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10316879 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031687e jae 0x1031686c */
  if (!C.cf) goto L_1031686c;
L_10316880:;
  /* 10316880 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316882 mov eax, esp */
  EAX = (ESP);
  /* 10316884 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10316886 mov esp, ecx */
  ESP = (ECX);
  /* 10316888 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1031688a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1031688d push eax */
  push32((uint32_t)(EAX));
  /* 1031688e ret  */
  ESPCHK(0x10316860u, _esp0);
  ESP += 4; return;
}

/* FUN_10006890 @ 0x10316890 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10316890(void) {
  FTRACE(0x10316890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316890 push ebp */
  push32((uint32_t)(EBP));
  /* 10316891 mov ebp, esp */
  EBP = (ESP);
  /* 10316893 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316896 push esi */
  push32((uint32_t)(ESI));
  /* 10316897 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031689b je 0x103168a3 */
  if (C.zf) goto L_103168a3;
  /* 1031689d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168a1 jne 0x103168a8 */
  if (!C.zf) goto L_103168a8;
L_103168a3:;
  /* 103168a3 jmp 0x10316a78 */
  goto L_10316a78;
L_103168a8:;
  /* 103168a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168ac je 0x103168c4 */
  if (C.zf) goto L_103168c4;
  /* 103168ae cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168b2 je 0x103168c4 */
  if (C.zf) goto L_103168c4;
  /* 103168b4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168b8 je 0x103168c4 */
  if (C.zf) goto L_103168c4;
  /* 103168ba cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168be jne 0x103169a1 */
  if (!C.zf) goto L_103169a1;
L_103168c4:;
  /* 103168c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 103168c6 call 0x103170c0 */
  push32(0x103168cbu); f_103170c0();
  /* 103168cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103168ce cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168d2 je 0x103168da */
  if (C.zf) goto L_103168da;
  /* 103168d4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168d8 jne 0x1031691f */
  if (!C.zf) goto L_1031691f;
L_103168da:;
  /* 103168da cmp dword ptr [0x1033f62c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f62c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168e1 jne 0x1031691f */
  if (!C.zf) goto L_1031691f;
  /* 103168e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 103168e5 push 0x10316ac0 */
  push32((uint32_t)(0x10316ac0u));
  /* 103168ea call dword ptr [0x10342310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342310))), 0x103168f0u);
  /* 103168f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103168f3 jne 0x10316901 */
  if (!C.zf) goto L_10316901;
  /* 103168f5 mov dword ptr [0x1033f62c], 1 */
  w32((uint32_t)(0x1033f62c), (0x1u));
  /* 103168ff jmp 0x1031691f */
  goto L_1031691f;
L_10316901:;
  /* 10316901 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x10316907u);
  /* 10316907 mov esi, eax */
  ESI = (EAX);
  /* 10316909 call 0x1031b5a0 */
  push32(0x1031690eu); f_1031b5a0();
  /* 1031690e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10316910 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316912 call 0x10317160 */
  push32(0x10316917u); f_10317160();
  /* 10316917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031691a jmp 0x10316a78 */
  goto L_10316a78;
L_1031691f:;
  /* 1031691f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316922 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10316925 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10316928 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1031692b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1031692e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316932 ja 0x10316992 */
  if ((!C.cf&&!C.zf)) goto L_10316992;
  /* 10316934 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10316937 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316939 mov dl, byte ptr [eax + 0x10316a9f] */
  DL = (r8((uint32_t)(EAX + 0x10316a9f)));
  /* 1031693f jmp dword ptr [edx*4 + 0x10316a8b] */
  switch (EDX) {
    case 0: goto L_10316946;
    case 1: goto L_10316980;
    case 2: goto L_1031695a;
    case 3: goto L_1031696d;
    case 4: goto L_10316992;
    default: x86_unimpl("switch@0x1031693f out of table"); return;
  }
L_10316946:;
  /* 10316946 mov ecx, dword ptr [0x1033f61c] */
  ECX = (r32((uint32_t)(0x1033f61c)));
  /* 1031694c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031694f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316952 mov dword ptr [0x1033f61c], edx */
  w32((uint32_t)(0x1033f61c), (EDX));
  /* 10316958 jmp 0x10316992 */
  goto L_10316992;
L_1031695a:;
  /* 1031695a mov eax, dword ptr [0x1033f620] */
  EAX = (r32((uint32_t)(0x1033f620)));
  /* 1031695f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316962 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316965 mov dword ptr [0x1033f620], ecx */
  w32((uint32_t)(0x1033f620), (ECX));
  /* 1031696b jmp 0x10316992 */
  goto L_10316992;
L_1031696d:;
  /* 1031696d mov edx, dword ptr [0x1033f624] */
  EDX = (r32((uint32_t)(0x1033f624)));
  /* 10316973 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10316976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316979 mov dword ptr [0x1033f624], eax */
  w32((uint32_t)(0x1033f624), (EAX));
  /* 1031697e jmp 0x10316992 */
  goto L_10316992;
L_10316980:;
  /* 10316980 mov ecx, dword ptr [0x1033f628] */
  ECX = (r32((uint32_t)(0x1033f628)));
  /* 10316986 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10316989 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031698c mov dword ptr [0x1033f628], edx */
  w32((uint32_t)(0x1033f628), (EDX));
L_10316992:;
  /* 10316992 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316994 call 0x10317160 */
  push32(0x10316999u); f_10317160();
  /* 10316999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031699c jmp 0x10316a73 */
  goto L_10316a73;
L_103169a1:;
  /* 103169a1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103169a5 je 0x103169b8 */
  if (C.zf) goto L_103169b8;
  /* 103169a7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103169ab je 0x103169b8 */
  if (C.zf) goto L_103169b8;
  /* 103169ad cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103169b1 je 0x103169b8 */
  if (C.zf) goto L_103169b8;
  /* 103169b3 jmp 0x10316a78 */
  goto L_10316a78;
L_103169b8:;
  /* 103169b8 call 0x10313100 */
  push32(0x103169bdu); f_10313100();
  /* 103169bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103169c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103169c3 cmp dword ptr [eax + 0x50], 0x1033dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1033dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103169ca jne 0x10316a15 */
  if (!C.zf) goto L_10316a15;
  /* 103169cc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 103169d1 push 0x1033ae60 */
  push32((uint32_t)(0x1033ae60u));
  /* 103169d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 103169d8 mov ecx, dword ptr [0x1033dc80] */
  ECX = (r32((uint32_t)(0x1033dc80)));
  /* 103169de push ecx */
  push32((uint32_t)(ECX));
  /* 103169df call 0x103136c0 */
  push32(0x103169e4u); f_103136c0();
  /* 103169e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103169e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103169ea mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 103169ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103169f0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103169f4 je 0x10316a13 */
  if (C.zf) goto L_10316a13;
  /* 103169f6 mov ecx, dword ptr [0x1033dc80] */
  ECX = (r32((uint32_t)(0x1033dc80)));
  /* 103169fc push ecx */
  push32((uint32_t)(ECX));
  /* 103169fd push 0x1033dc00 */
  push32((uint32_t)(0x1033dc00u));
  /* 10316a02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316a05 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10316a08 push eax */
  push32((uint32_t)(EAX));
  /* 10316a09 call 0x10319fa0 */
  push32(0x10316a0eu); f_10319fa0();
  /* 10316a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316a11 jmp 0x10316a15 */
  goto L_10316a15;
L_10316a13:;
  /* 10316a13 jmp 0x10316a78 */
  goto L_10316a78;
L_10316a15:;
  /* 10316a15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316a18 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10316a1b push edx */
  push32((uint32_t)(EDX));
  /* 10316a1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316a1f push eax */
  push32((uint32_t)(EAX));
  /* 10316a20 call 0x10316da0 */
  push32(0x10316a25u); f_10316da0();
  /* 10316a25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316a28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10316a2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316a2f jne 0x10316a33 */
  if (!C.zf) goto L_10316a33;
  /* 10316a31 jmp 0x10316a78 */
  goto L_10316a78;
L_10316a33:;
  /* 10316a33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316a36 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10316a39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10316a3c:;
  /* 10316a3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316a3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10316a42 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316a45 jne 0x10316a73 */
  if (!C.zf) goto L_10316a73;
  /* 10316a47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316a4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316a4d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10316a50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316a53 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316a56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10316a59 mov edx, dword ptr [0x1033dc84] */
  EDX = (r32((uint32_t)(0x1033dc84)));
  /* 10316a5f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10316a62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316a65 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10316a68 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316a6a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316a6d jb 0x10316a71 */
  if (C.cf) goto L_10316a71;
  /* 10316a6f jmp 0x10316a73 */
  goto L_10316a73;
L_10316a71:;
  /* 10316a71 jmp 0x10316a3c */
  goto L_10316a3c;
L_10316a73:;
  /* 10316a73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316a76 jmp 0x10316a86 */
  goto L_10316a86;
L_10316a78:;
  /* 10316a78 call 0x1031b590 */
  push32(0x10316a7du); f_1031b590();
  /* 10316a7d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10316a83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10316a86:;
  /* 10316a86 pop esi */
  ESI = (pop32());
  /* 10316a87 mov esp, ebp */
  ESP = (EBP);
  /* 10316a89 pop ebp */
  EBP = (pop32());
  /* 10316a8a ret  */
  ESPCHK(0x10316890u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10316ac0 (146 bytes, 45 insns) */
void f_10316ac0(void) {
  FTRACE(0x10316ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10316ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10316ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316ac6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316ac8 call 0x103170c0 */
  push32(0x10316acdu); f_103170c0();
  /* 10316acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316ad0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316ad4 jne 0x10316aee */
  if (!C.zf) goto L_10316aee;
  /* 10316ad6 mov dword ptr [ebp - 8], 0x1033f61c */
  w32((uint32_t)(EBP + -0x8), (0x1033f61cu));
  /* 10316add mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316ae0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10316ae2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10316ae5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10316aec jmp 0x10316b04 */
  goto L_10316b04;
L_10316aee:;
  /* 10316aee mov dword ptr [ebp - 8], 0x1033f620 */
  w32((uint32_t)(EBP + -0x8), (0x1033f620u));
  /* 10316af5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316af8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10316afa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316afd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10316b04:;
  /* 10316b04 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316b08 jne 0x10316b18 */
  if (!C.zf) goto L_10316b18;
  /* 10316b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 10316b0c call 0x10317160 */
  push32(0x10316b11u); f_10317160();
  /* 10316b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316b14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10316b16 jmp 0x10316b4c */
  goto L_10316b4c;
L_10316b18:;
  /* 10316b18 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316b1c je 0x10316b3d */
  if (C.zf) goto L_10316b3d;
  /* 10316b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316b21 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10316b27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316b29 call 0x10317160 */
  push32(0x10316b2eu); f_10317160();
  /* 10316b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316b34 push edx */
  push32((uint32_t)(EDX));
  /* 10316b35 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10316b38u);
  /* 10316b38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316b3b jmp 0x10316b47 */
  goto L_10316b47;
L_10316b3d:;
  /* 10316b3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10316b3f call 0x10317160 */
  push32(0x10316b44u); f_10317160();
  /* 10316b44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316b47:;
  /* 10316b47 mov eax, 1 */
  EAX = (0x1u);
L_10316b4c:;
  /* 10316b4c mov esp, ebp */
  ESP = (EBP);
  /* 10316b4e pop ebp */
  EBP = (pop32());
  /* 10316b4f ret 4 */
  ESPCHK(0x10316ac0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006b60 @ 0x10316b60 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10316b60(void) {
  FTRACE(0x10316b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10316b61 mov ebp, esp */
  EBP = (ESP);
  /* 10316b63 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316b66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10316b6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316b70 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10316b73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10316b76 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316b79 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10316b7c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316b80 ja 0x10316c2e */
  if ((!C.cf&&!C.zf)) goto L_10316c2e;
  /* 10316b86 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10316b89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316b8b mov dl, byte ptr [eax + 0x10316d82] */
  DL = (r8((uint32_t)(EAX + 0x10316d82)));
  /* 10316b91 jmp dword ptr [edx*4 + 0x10316d6a] */
  switch (EDX) {
    case 0: goto L_10316b98;
    case 1: goto L_10316c03;
    case 2: goto L_10316be9;
    case 3: goto L_10316bb5;
    case 4: goto L_10316bcf;
    case 5: goto L_10316c2e;
    default: x86_unimpl("switch@0x10316b91 out of table"); return;
  }
L_10316b98:;
  /* 10316b98 mov dword ptr [ebp - 0x18], 0x1033f61c */
  w32((uint32_t)(EBP + -0x18), (0x1033f61cu));
  /* 10316b9f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316ba2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316ba4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10316ba7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316baa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316bad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316bb0 jmp 0x10316c36 */
  goto L_10316c36;
L_10316bb5:;
  /* 10316bb5 mov dword ptr [ebp - 0x18], 0x1033f620 */
  w32((uint32_t)(EBP + -0x18), (0x1033f620u));
  /* 10316bbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316bbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316bc1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10316bc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316bc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316bca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316bcd jmp 0x10316c36 */
  goto L_10316c36;
L_10316bcf:;
  /* 10316bcf mov dword ptr [ebp - 0x18], 0x1033f624 */
  w32((uint32_t)(EBP + -0x18), (0x1033f624u));
  /* 10316bd6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316bd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316bdb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10316bde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316be1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316be4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316be7 jmp 0x10316c36 */
  goto L_10316c36;
L_10316be9:;
  /* 10316be9 mov dword ptr [ebp - 0x18], 0x1033f628 */
  w32((uint32_t)(EBP + -0x18), (0x1033f628u));
  /* 10316bf0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316bf3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316bf5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10316bf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10316bfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316bfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10316c01 jmp 0x10316c36 */
  goto L_10316c36;
L_10316c03:;
  /* 10316c03 call 0x10313100 */
  push32(0x10316c08u); f_10313100();
  /* 10316c08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10316c0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316c0e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10316c11 push edx */
  push32((uint32_t)(EDX));
  /* 10316c12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316c15 push eax */
  push32((uint32_t)(EAX));
  /* 10316c16 call 0x10316da0 */
  push32(0x10316c1bu); f_10316da0();
  /* 10316c1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316c1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316c21 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10316c24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316c27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10316c29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10316c2c jmp 0x10316c36 */
  goto L_10316c36;
L_10316c2e:;
  /* 10316c2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10316c31 jmp 0x10316d66 */
  goto L_10316d66;
L_10316c36:;
  /* 10316c36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c3a je 0x10316c46 */
  if (C.zf) goto L_10316c46;
  /* 10316c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10316c3e call 0x103170c0 */
  push32(0x10316c43u); f_103170c0();
  /* 10316c43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316c46:;
  /* 10316c46 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c4a jne 0x10316c63 */
  if (!C.zf) goto L_10316c63;
  /* 10316c4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c50 je 0x10316c5c */
  if (C.zf) goto L_10316c5c;
  /* 10316c52 push 1 */
  push32((uint32_t)(0x1u));
  /* 10316c54 call 0x10317160 */
  push32(0x10316c59u); f_10317160();
  /* 10316c59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316c5c:;
  /* 10316c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10316c5e jmp 0x10316d66 */
  goto L_10316d66;
L_10316c63:;
  /* 10316c63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c67 jne 0x10316c80 */
  if (!C.zf) goto L_10316c80;
  /* 10316c69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c6d je 0x10316c79 */
  if (C.zf) goto L_10316c79;
  /* 10316c6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10316c71 call 0x10317160 */
  push32(0x10316c76u); f_10317160();
  /* 10316c76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316c79:;
  /* 10316c79 push 3 */
  push32((uint32_t)(0x3u));
  /* 10316c7b call 0x10312e80 */
  push32(0x10316c80u); f_10312e80();
L_10316c80:;
  /* 10316c80 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c84 je 0x10316c92 */
  if (C.zf) goto L_10316c92;
  /* 10316c86 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c8a je 0x10316c92 */
  if (C.zf) goto L_10316c92;
  /* 10316c8c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316c90 jne 0x10316cbe */
  if (!C.zf) goto L_10316cbe;
L_10316c92:;
  /* 10316c92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316c95 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10316c98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10316c9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316c9e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10316ca5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316ca9 jne 0x10316cbe */
  if (!C.zf) goto L_10316cbe;
  /* 10316cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316cae mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10316cb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10316cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316cb7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10316cbe:;
  /* 10316cbe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316cc2 jne 0x10316d00 */
  if (!C.zf) goto L_10316d00;
  /* 10316cc4 mov eax, dword ptr [0x1033dc78] */
  EAX = (r32((uint32_t)(0x1033dc78)));
  /* 10316cc9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10316ccc jmp 0x10316cd7 */
  goto L_10316cd7;
L_10316cce:;
  /* 10316cce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10316cd1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316cd4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10316cd7:;
  /* 10316cd7 mov edx, dword ptr [0x1033dc78] */
  EDX = (r32((uint32_t)(0x1033dc78)));
  /* 10316cdd add edx, dword ptr [0x1033dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316ce3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316ce6 jge 0x10316cfe */
  if ((C.sf==C.of)) goto L_10316cfe;
  /* 10316ce8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10316ceb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10316cee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316cf1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10316cf4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10316cfc jmp 0x10316cce */
  goto L_10316cce;
L_10316cfe:;
  /* 10316cfe jmp 0x10316d09 */
  goto L_10316d09;
L_10316d00:;
  /* 10316d00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10316d03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10316d09:;
  /* 10316d09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d0d je 0x10316d19 */
  if (C.zf) goto L_10316d19;
  /* 10316d0f push 1 */
  push32((uint32_t)(0x1u));
  /* 10316d11 call 0x10317160 */
  push32(0x10316d16u); f_10317160();
  /* 10316d16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316d19:;
  /* 10316d19 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d1d jne 0x10316d30 */
  if (!C.zf) goto L_10316d30;
  /* 10316d1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316d22 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10316d25 push edx */
  push32((uint32_t)(EDX));
  /* 10316d26 push 8 */
  push32((uint32_t)(0x8u));
  /* 10316d28 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10316d2bu);
  /* 10316d2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10316d2e jmp 0x10316d3a */
  goto L_10316d3a;
L_10316d30:;
  /* 10316d30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316d33 push eax */
  push32((uint32_t)(EAX));
  /* 10316d34 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10316d37u);
  /* 10316d37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10316d3a:;
  /* 10316d3a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d3e je 0x10316d4c */
  if (C.zf) goto L_10316d4c;
  /* 10316d40 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d44 je 0x10316d4c */
  if (C.zf) goto L_10316d4c;
  /* 10316d46 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d4a jne 0x10316d64 */
  if (!C.zf) goto L_10316d64;
L_10316d4c:;
  /* 10316d4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316d4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10316d52 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10316d55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316d59 jne 0x10316d64 */
  if (!C.zf) goto L_10316d64;
  /* 10316d5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316d5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316d61 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10316d64:;
  /* 10316d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10316d66:;
  /* 10316d66 mov esp, ebp */
  ESP = (EBP);
  /* 10316d68 pop ebp */
  EBP = (pop32());
  /* 10316d69 ret  */
  ESPCHK(0x10316b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006da0 @ 0x10316da0 (91 bytes, 35 insns) */
void f_10316da0(void) {
  FTRACE(0x10316da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10316da1 mov ebp, esp */
  EBP = (ESP);
  /* 10316da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10316da4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316da7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10316daa:;
  /* 10316daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316dad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10316db0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316db3 je 0x10316dd3 */
  if (C.zf) goto L_10316dd3;
  /* 10316db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316db8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316dbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10316dbe mov ecx, dword ptr [0x1033dc84] */
  ECX = (r32((uint32_t)(0x1033dc84)));
  /* 10316dc4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10316dc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316dca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316dcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316dcf jae 0x10316dd3 */
  if (!C.cf) goto L_10316dd3;
  /* 10316dd1 jmp 0x10316daa */
  goto L_10316daa;
L_10316dd3:;
  /* 10316dd3 mov eax, dword ptr [0x1033dc84] */
  EAX = (r32((uint32_t)(0x1033dc84)));
  /* 10316dd8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10316ddb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316dde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316de0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316de3 jae 0x10316df5 */
  if (!C.cf) goto L_10316df5;
  /* 10316de5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316de8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10316deb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316dee jne 0x10316df5 */
  if (!C.zf) goto L_10316df5;
  /* 10316df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316df3 jmp 0x10316df7 */
  goto L_10316df7;
L_10316df5:;
  /* 10316df5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10316df7:;
  /* 10316df7 mov esp, ebp */
  ESP = (EBP);
  /* 10316df9 pop ebp */
  EBP = (pop32());
  /* 10316dfa ret  */
  ESPCHK(0x10316da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e00 @ 0x10316e00 (13 bytes, 6 insns) */
void f_10316e00(void) {
  FTRACE(0x10316e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10316e01 mov ebp, esp */
  EBP = (ESP);
  /* 10316e03 call 0x10313100 */
  push32(0x10316e08u); f_10313100();
  /* 10316e08 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316e0b pop ebp */
  EBP = (pop32());
  /* 10316e0c ret  */
  ESPCHK(0x10316e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x10316e10 (13 bytes, 6 insns) */
void f_10316e10(void) {
  FTRACE(0x10316e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10316e11 mov ebp, esp */
  EBP = (ESP);
  /* 10316e13 call 0x10313100 */
  push32(0x10316e18u); f_10313100();
  /* 10316e18 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316e1b pop ebp */
  EBP = (pop32());
  /* 10316e1c ret  */
  ESPCHK(0x10316e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e20 @ 0x10316e20 (187 bytes, 54 insns) */
void f_10316e20(void) {
  FTRACE(0x10316e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10316e21 mov ebp, esp */
  EBP = (ESP);
  /* 10316e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10316e26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10316e2d cmp dword ptr [0x1033f630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316e34 jne 0x10316e93 */
  if (!C.zf) goto L_10316e93;
  /* 10316e36 push 0x1033a28c */
  push32((uint32_t)(0x1033a28cu));
  /* 10316e3b call dword ptr [0x103422cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422cc))), 0x10316e41u);
  /* 10316e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10316e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316e48 je 0x10316e67 */
  if (C.zf) goto L_10316e67;
  /* 10316e4a push 0x1033ae90 */
  push32((uint32_t)(0x1033ae90u));
  /* 10316e4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316e52 push eax */
  push32((uint32_t)(EAX));
  /* 10316e53 call dword ptr [0x103422c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c8))), 0x10316e59u);
  /* 10316e59 mov dword ptr [0x1033f630], eax */
  w32((uint32_t)(0x1033f630), (EAX));
  /* 10316e5e cmp dword ptr [0x1033f630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316e65 jne 0x10316e6b */
  if (!C.zf) goto L_10316e6b;
L_10316e67:;
  /* 10316e67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10316e69 jmp 0x10316ed7 */
  goto L_10316ed7;
L_10316e6b:;
  /* 10316e6b push 0x1033ae80 */
  push32((uint32_t)(0x1033ae80u));
  /* 10316e70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10316e74 call dword ptr [0x103422c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c8))), 0x10316e7au);
  /* 10316e7a mov dword ptr [0x1033f634], eax */
  w32((uint32_t)(0x1033f634), (EAX));
  /* 10316e7f push 0x1033ae6c */
  push32((uint32_t)(0x1033ae6cu));
  /* 10316e84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10316e87 push edx */
  push32((uint32_t)(EDX));
  /* 10316e88 call dword ptr [0x103422c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422c8))), 0x10316e8eu);
  /* 10316e8e mov dword ptr [0x1033f638], eax */
  w32((uint32_t)(0x1033f638), (EAX));
L_10316e93:;
  /* 10316e93 cmp dword ptr [0x1033f634], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f634))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316e9a je 0x10316ea5 */
  if (C.zf) goto L_10316ea5;
  /* 10316e9c call dword ptr [0x1033f634] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f634))), 0x10316ea2u);
  /* 10316ea2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10316ea5:;
  /* 10316ea5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316ea9 je 0x10316ec1 */
  if (C.zf) goto L_10316ec1;
  /* 10316eab cmp dword ptr [0x1033f638], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f638))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10316eb2 je 0x10316ec1 */
  if (C.zf) goto L_10316ec1;
  /* 10316eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316eb7 push eax */
  push32((uint32_t)(EAX));
  /* 10316eb8 call dword ptr [0x1033f638] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f638))), 0x10316ebeu);
  /* 10316ebe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10316ec1:;
  /* 10316ec1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10316ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 10316ec5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10316ec8 push edx */
  push32((uint32_t)(EDX));
  /* 10316ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10316ecc push eax */
  push32((uint32_t)(EAX));
  /* 10316ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10316ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 10316ed1 call dword ptr [0x1033f630] */
  call_ind((uint32_t)(r32((uint32_t)(0x1033f630))), 0x10316ed7u);
L_10316ed7:;
  /* 10316ed7 mov esp, ebp */
  ESP = (EBP);
  /* 10316ed9 pop ebp */
  EBP = (pop32());
  /* 10316eda ret  */
  ESPCHK(0x10316e20u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10316ee0 (254 bytes, 109 insns) */
void f_10316ee0(void) {
  FTRACE(0x10316ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316ee0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10316ee4 push edi */
  push32((uint32_t)(EDI));
  /* 10316ee5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10316ee7 je 0x10316f63 */
  if (C.zf) goto L_10316f63;
  /* 10316ee9 push esi */
  push32((uint32_t)(ESI));
  /* 10316eea push ebx */
  push32((uint32_t)(EBX));
  /* 10316eeb mov ebx, ecx */
  EBX = (ECX);
  /* 10316eed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10316ef1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10316ef7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10316efb jne 0x10316f04 */
  if (!C.zf) goto L_10316f04;
  /* 10316efd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10316f00 jne 0x10316f71 */
  if (!C.zf) goto L_10316f71;
  /* 10316f02 jmp 0x10316f25 */
  goto L_10316f25;
L_10316f04:;
  /* 10316f04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10316f06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10316f07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10316f09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10316f0a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10316f0b je 0x10316f32 */
  if (C.zf) goto L_10316f32;
  /* 10316f0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10316f0f je 0x10316f3a */
  if (C.zf) goto L_10316f3a;
  /* 10316f11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10316f17 jne 0x10316f04 */
  if (!C.zf) goto L_10316f04;
  /* 10316f19 mov ebx, ecx */
  EBX = (ECX);
  /* 10316f1b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10316f1e jne 0x10316f71 */
  if (!C.zf) goto L_10316f71;
L_10316f20:;
  /* 10316f20 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10316f23 je 0x10316f32 */
  if (C.zf) goto L_10316f32;
L_10316f25:;
  /* 10316f25 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10316f27 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10316f28 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10316f2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10316f2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10316f2d je 0x10316f5e */
  if (C.zf) goto L_10316f5e;
  /* 10316f2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10316f30 jne 0x10316f25 */
  if (!C.zf) goto L_10316f25;
L_10316f32:;
  /* 10316f32 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10316f36 pop ebx */
  EBX = (pop32());
  /* 10316f37 pop esi */
  ESI = (pop32());
  /* 10316f38 pop edi */
  EDI = (pop32());
  /* 10316f39 ret  */
  ESPCHK(0x10316ee0u, _esp0);
  ESP += 4; return;
L_10316f3a:;
  /* 10316f3a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10316f40 je 0x10316f54 */
  if (C.zf) goto L_10316f54;
L_10316f42:;
  /* 10316f42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10316f44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10316f45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10316f46 je 0x10316fd6 */
  if (C.zf) goto L_10316fd6;
  /* 10316f4c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10316f52 jne 0x10316f42 */
  if (!C.zf) goto L_10316f42;
L_10316f54:;
  /* 10316f54 mov ebx, ecx */
  EBX = (ECX);
  /* 10316f56 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10316f59 jne 0x10316fc7 */
  if (!C.zf) goto L_10316fc7;
L_10316f5b:;
  /* 10316f5b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10316f5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10316f5e:;
  /* 10316f5e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10316f5f jne 0x10316f5b */
  if (!C.zf) goto L_10316f5b;
  /* 10316f61 pop ebx */
  EBX = (pop32());
  /* 10316f62 pop esi */
  ESI = (pop32());
L_10316f63:;
  /* 10316f63 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10316f67 pop edi */
  EDI = (pop32());
  /* 10316f68 ret  */
  ESPCHK(0x10316ee0u, _esp0);
  ESP += 4; return;
L_10316f69:;
  /* 10316f69 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10316f6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10316f6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10316f6f je 0x10316f20 */
  if (C.zf) goto L_10316f20;
L_10316f71:;
  /* 10316f71 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10316f76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10316f78 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10316f7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10316f7d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10316f7f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10316f81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10316f84 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10316f89 je 0x10316f69 */
  if (C.zf) goto L_10316f69;
  /* 10316f8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10316f8d je 0x10316fbb */
  if (C.zf) goto L_10316fbb;
  /* 10316f8f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10316f91 je 0x10316fb1 */
  if (C.zf) goto L_10316fb1;
  /* 10316f93 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10316f99 je 0x10316fa7 */
  if (C.zf) goto L_10316fa7;
  /* 10316f9b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10316fa1 jne 0x10316f69 */
  if (!C.zf) goto L_10316f69;
  /* 10316fa3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10316fa5 jmp 0x10316fbf */
  goto L_10316fbf;
L_10316fa7:;
  /* 10316fa7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10316fad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10316faf jmp 0x10316fbf */
  goto L_10316fbf;
L_10316fb1:;
  /* 10316fb1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10316fb7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10316fb9 jmp 0x10316fbf */
  goto L_10316fbf;
L_10316fbb:;
  /* 10316fbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10316fbd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10316fbf:;
  /* 10316fbf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10316fc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10316fc4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10316fc5 je 0x10316fd1 */
  if (C.zf) goto L_10316fd1;
L_10316fc7:;
  /* 10316fc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10316fc9:;
  /* 10316fc9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10316fcb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10316fce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10316fcf jne 0x10316fc9 */
  if (!C.zf) goto L_10316fc9;
L_10316fd1:;
  /* 10316fd1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10316fd4 jne 0x10316f5b */
  if (!C.zf) goto L_10316f5b;
L_10316fd6:;
  /* 10316fd6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10316fda pop ebx */
  EBX = (pop32());
  /* 10316fdb pop esi */
  ESI = (pop32());
  /* 10316fdc pop edi */
  EDI = (pop32());
  /* 10316fdd ret  */
  ESPCHK(0x10316ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x10316fe0 (55 bytes, 16 insns) */
void f_10316fe0(void) {
  FTRACE(0x10316fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10316fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10316fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10316fe3 mov eax, dword ptr [0x1033db84] */
  EAX = (r32((uint32_t)(0x1033db84)));
  /* 10316fe8 push eax */
  push32((uint32_t)(EAX));
  /* 10316fe9 call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x10316fefu);
  /* 10316fef mov ecx, dword ptr [0x1033db74] */
  ECX = (r32((uint32_t)(0x1033db74)));
  /* 10316ff5 push ecx */
  push32((uint32_t)(ECX));
  /* 10316ff6 call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x10316ffcu);
  /* 10316ffc mov edx, dword ptr [0x1033db64] */
  EDX = (r32((uint32_t)(0x1033db64)));
  /* 10317002 push edx */
  push32((uint32_t)(EDX));
  /* 10317003 call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x10317009u);
  /* 10317009 mov eax, dword ptr [0x1033db44] */
  EAX = (r32((uint32_t)(0x1033db44)));
  /* 1031700e push eax */
  push32((uint32_t)(EAX));
  /* 1031700f call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x10317015u);
  /* 10317015 pop ebp */
  EBP = (pop32());
  /* 10317016 ret  */
  ESPCHK(0x10316fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x10317020 (159 bytes, 47 insns) */
void f_10317020(void) {
  FTRACE(0x10317020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317020 push ebp */
  push32((uint32_t)(EBP));
  /* 10317021 mov ebp, esp */
  EBP = (ESP);
  /* 10317023 push ecx */
  push32((uint32_t)(ECX));
  /* 10317024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1031702b jmp 0x10317036 */
  goto L_10317036;
L_1031702d:;
  /* 1031702d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317030 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10317036:;
  /* 10317036 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031703a jge 0x10317089 */
  if ((C.sf==C.of)) goto L_10317089;
  /* 1031703c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031703f cmp dword ptr [ecx*4 + 0x1033db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1033db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317047 je 0x10317087 */
  if (C.zf) goto L_10317087;
  /* 10317049 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031704d je 0x10317087 */
  if (C.zf) goto L_10317087;
  /* 1031704f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317053 je 0x10317087 */
  if (C.zf) goto L_10317087;
  /* 10317055 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317059 je 0x10317087 */
  if (C.zf) goto L_10317087;
  /* 1031705b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031705f je 0x10317087 */
  if (C.zf) goto L_10317087;
  /* 10317061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317064 mov eax, dword ptr [edx*4 + 0x1033db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1033db40)));
  /* 1031706b push eax */
  push32((uint32_t)(EAX));
  /* 1031706c call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x10317072u);
  /* 10317072 push 2 */
  push32((uint32_t)(0x2u));
  /* 10317074 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317077 mov edx, dword ptr [ecx*4 + 0x1033db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1033db40)));
  /* 1031707e push edx */
  push32((uint32_t)(EDX));
  /* 1031707f call 0x10314150 */
  push32(0x10317084u); f_10314150();
  /* 10317084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10317087:;
  /* 10317087 jmp 0x1031702d */
  goto L_1031702d;
L_10317089:;
  /* 10317089 mov eax, dword ptr [0x1033db64] */
  EAX = (r32((uint32_t)(0x1033db64)));
  /* 1031708e push eax */
  push32((uint32_t)(EAX));
  /* 1031708f call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x10317095u);
  /* 10317095 mov ecx, dword ptr [0x1033db74] */
  ECX = (r32((uint32_t)(0x1033db74)));
  /* 1031709b push ecx */
  push32((uint32_t)(ECX));
  /* 1031709c call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x103170a2u);
  /* 103170a2 mov edx, dword ptr [0x1033db84] */
  EDX = (r32((uint32_t)(0x1033db84)));
  /* 103170a8 push edx */
  push32((uint32_t)(EDX));
  /* 103170a9 call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x103170afu);
  /* 103170af mov eax, dword ptr [0x1033db44] */
  EAX = (r32((uint32_t)(0x1033db44)));
  /* 103170b4 push eax */
  push32((uint32_t)(EAX));
  /* 103170b5 call dword ptr [0x10342254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342254))), 0x103170bbu);
  /* 103170bb mov esp, ebp */
  ESP = (EBP);
  /* 103170bd pop ebp */
  EBP = (pop32());
  /* 103170be ret  */
  ESPCHK(0x10317020u, _esp0);
  ESP += 4; return;
}

/* FUN_100070c0 @ 0x103170c0 (151 bytes, 46 insns) */
void f_103170c0(void) {
  FTRACE(0x103170c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103170c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103170c1 mov ebp, esp */
  EBP = (ESP);
  /* 103170c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103170c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103170c7 cmp dword ptr [eax*4 + 0x1033db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1033db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103170cf jne 0x10317142 */
  if (!C.zf) goto L_10317142;
  /* 103170d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 103170d6 push 0x1033ae9c */
  push32((uint32_t)(0x1033ae9cu));
  /* 103170db push 2 */
  push32((uint32_t)(0x2u));
  /* 103170dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 103170df call 0x103136c0 */
  push32(0x103170e4u); f_103136c0();
  /* 103170e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103170e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103170ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103170ee jne 0x103170fa */
  if (!C.zf) goto L_103170fa;
  /* 103170f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103170f2 call 0x10312630 */
  push32(0x103170f7u); f_10312630();
  /* 103170f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103170fa:;
  /* 103170fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 103170fc call 0x103170c0 */
  push32(0x10317101u); f_103170c0();
  /* 10317101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317104 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317107 cmp dword ptr [ecx*4 + 0x1033db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1033db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031710f jne 0x1031712a */
  if (!C.zf) goto L_1031712a;
  /* 10317111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317114 push edx */
  push32((uint32_t)(EDX));
  /* 10317115 call dword ptr [0x10342348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342348))), 0x1031711bu);
  /* 1031711b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031711e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317121 mov dword ptr [eax*4 + 0x1033db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1033db40), (ECX));
  /* 10317128 jmp 0x10317138 */
  goto L_10317138;
L_1031712a:;
  /* 1031712a push 2 */
  push32((uint32_t)(0x2u));
  /* 1031712c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031712f push edx */
  push32((uint32_t)(EDX));
  /* 10317130 call 0x10314150 */
  push32(0x10317135u); f_10314150();
  /* 10317135 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10317138:;
  /* 10317138 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1031713a call 0x10317160 */
  push32(0x1031713fu); f_10317160();
  /* 1031713f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10317142:;
  /* 10317142 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317145 mov ecx, dword ptr [eax*4 + 0x1033db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033db40)));
  /* 1031714c push ecx */
  push32((uint32_t)(ECX));
  /* 1031714d call dword ptr [0x1034234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034234c))), 0x10317153u);
  /* 10317153 mov esp, ebp */
  ESP = (EBP);
  /* 10317155 pop ebp */
  EBP = (pop32());
  /* 10317156 ret  */
  ESPCHK(0x103170c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007160 @ 0x10317160 (22 bytes, 8 insns) */
void f_10317160(void) {
  FTRACE(0x10317160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317160 push ebp */
  push32((uint32_t)(EBP));
  /* 10317161 mov ebp, esp */
  EBP = (ESP);
  /* 10317163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317166 mov ecx, dword ptr [eax*4 + 0x1033db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1033db40)));
  /* 1031716d push ecx */
  push32((uint32_t)(ECX));
  /* 1031716e call dword ptr [0x10342350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342350))), 0x10317174u);
  /* 10317174 pop ebp */
  EBP = (pop32());
  /* 10317175 ret  */
  ESPCHK(0x10317160u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10317180 (26 bytes, 10 insns) */
void f_10317180(void) {
  FTRACE(0x10317180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317180 push ebp */
  push32((uint32_t)(EBP));
  /* 10317181 mov ebp, esp */
  EBP = (ESP);
  /* 10317183 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317186 push eax */
  push32((uint32_t)(EAX));
  /* 10317187 push 0 */
  push32((uint32_t)(0x0u));
  /* 10317189 call dword ptr [0x10342354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342354))), 0x1031718fu);
  /* 1031718f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10317194 call dword ptr [0x103422d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422d8))), 0x1031719au);
  /* 1031719a pop ebp */
  EBP = (pop32());
  /* 1031719b ret  */
  ESPCHK(0x10317180u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x103171a0 (446 bytes, 130 insns) */
void f_103171a0(void) {
  FTRACE(0x103171a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103171a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103171a1 mov ebp, esp */
  EBP = (ESP);
  /* 103171a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 103171a6 call 0x10313100 */
  push32(0x103171abu); f_10313100();
  /* 103171ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103171ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103171b1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 103171b4 push ecx */
  push32((uint32_t)(ECX));
  /* 103171b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103171b8 push edx */
  push32((uint32_t)(EDX));
  /* 103171b9 call 0x10317360 */
  push32(0x103171beu); f_10317360();
  /* 103171be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103171c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 103171c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103171c8 je 0x103171d3 */
  if (C.zf) goto L_103171d3;
  /* 103171ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103171cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103171d1 jne 0x103171e2 */
  if (!C.zf) goto L_103171e2;
L_103171d3:;
  /* 103171d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103171d6 push ecx */
  push32((uint32_t)(ECX));
  /* 103171d7 call dword ptr [0x10342358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342358))), 0x103171ddu);
  /* 103171dd jmp 0x1031735a */
  goto L_1031735a;
L_103171e2:;
  /* 103171e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103171e5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103171e9 jne 0x103171ff */
  if (!C.zf) goto L_103171ff;
  /* 103171eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103171ee mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 103171f5 mov eax, 1 */
  EAX = (0x1u);
  /* 103171fa jmp 0x1031735a */
  goto L_1031735a;
L_103171ff:;
  /* 103171ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10317202 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317206 jne 0x10317210 */
  if (!C.zf) goto L_10317210;
  /* 10317208 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1031720b jmp 0x1031735a */
  goto L_1031735a;
L_10317210:;
  /* 10317210 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10317213 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10317216 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10317219 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031721c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1031721f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10317222 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317225 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317228 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1031722b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031722e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317232 jne 0x10317337 */
  if (!C.zf) goto L_10317337;
  /* 10317238 mov eax, dword ptr [0x1033dc78] */
  EAX = (r32((uint32_t)(0x1033dc78)));
  /* 1031723d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10317240 jmp 0x1031724b */
  goto L_1031724b;
L_10317242:;
  /* 10317242 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10317245 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317248 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1031724b:;
  /* 1031724b mov edx, dword ptr [0x1033dc78] */
  EDX = (r32((uint32_t)(0x1033dc78)));
  /* 10317251 add edx, dword ptr [0x1033dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1033dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317257 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031725a jge 0x10317272 */
  if ((C.sf==C.of)) goto L_10317272;
  /* 1031725c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031725f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10317262 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317265 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10317268 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10317270 jmp 0x10317242 */
  goto L_10317242;
L_10317272:;
  /* 10317272 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317275 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10317278 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1031727b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031727e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317284 jne 0x10317295 */
  if (!C.zf) goto L_10317295;
  /* 10317286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317289 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10317290 jmp 0x1031731d */
  goto L_1031731d;
L_10317295:;
  /* 10317295 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10317298 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031729e jne 0x103172ac */
  if (!C.zf) goto L_103172ac;
  /* 103172a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103172a3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 103172aa jmp 0x1031731d */
  goto L_1031731d;
L_103172ac:;
  /* 103172ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103172af cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103172b5 jne 0x103172c3 */
  if (!C.zf) goto L_103172c3;
  /* 103172b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103172ba mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 103172c1 jmp 0x1031731d */
  goto L_1031731d;
L_103172c3:;
  /* 103172c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 103172c6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103172cc jne 0x103172da */
  if (!C.zf) goto L_103172da;
  /* 103172ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 103172d1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 103172d8 jmp 0x1031731d */
  goto L_1031731d;
L_103172da:;
  /* 103172da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 103172dd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103172e3 jne 0x103172f1 */
  if (!C.zf) goto L_103172f1;
  /* 103172e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 103172e8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 103172ef jmp 0x1031731d */
  goto L_1031731d;
L_103172f1:;
  /* 103172f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 103172f4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103172fa jne 0x10317308 */
  if (!C.zf) goto L_10317308;
  /* 103172fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103172ff mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10317306 jmp 0x1031731d */
  goto L_1031731d;
L_10317308:;
  /* 10317308 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031730b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317311 jne 0x1031731d */
  if (!C.zf) goto L_1031731d;
  /* 10317313 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317316 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1031731d:;
  /* 1031731d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317320 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10317323 push edx */
  push32((uint32_t)(EDX));
  /* 10317324 push 8 */
  push32((uint32_t)(0x8u));
  /* 10317326 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10317329u);
  /* 10317329 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031732c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031732f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317332 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10317335 jmp 0x1031734e */
  goto L_1031734e;
L_10317337:;
  /* 10317337 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031733a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10317341 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10317344 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10317347 push ecx */
  push32((uint32_t)(ECX));
  /* 10317348 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1031734bu);
  /* 1031734b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1031734e:;
  /* 1031734e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317351 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10317354 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10317357 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1031735a:;
  /* 1031735a mov esp, ebp */
  ESP = (EBP);
  /* 1031735c pop ebp */
  EBP = (pop32());
  /* 1031735d ret  */
  ESPCHK(0x103171a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007360 @ 0x10317360 (89 bytes, 35 insns) */
void f_10317360(void) {
  FTRACE(0x10317360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317360 push ebp */
  push32((uint32_t)(EBP));
  /* 10317361 mov ebp, esp */
  EBP = (ESP);
  /* 10317363 push ecx */
  push32((uint32_t)(ECX));
  /* 10317364 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317367 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1031736a:;
  /* 1031736a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031736d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1031736f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317372 je 0x10317392 */
  if (C.zf) goto L_10317392;
  /* 10317374 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317377 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031737a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031737d mov ecx, dword ptr [0x1033dc84] */
  ECX = (r32((uint32_t)(0x1033dc84)));
  /* 10317383 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10317386 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317389 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031738b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031738e jae 0x10317392 */
  if (!C.cf) goto L_10317392;
  /* 10317390 jmp 0x1031736a */
  goto L_1031736a;
L_10317392:;
  /* 10317392 mov eax, dword ptr [0x1033dc84] */
  EAX = (r32((uint32_t)(0x1033dc84)));
  /* 10317397 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1031739a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031739d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031739f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103173a2 jae 0x103173ae */
  if (!C.cf) goto L_103173ae;
  /* 103173a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103173a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 103173a9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103173ac je 0x103173b2 */
  if (C.zf) goto L_103173b2;
L_103173ae:;
  /* 103173ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103173b0 jmp 0x103173b5 */
  goto L_103173b5;
L_103173b2:;
  /* 103173b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_103173b5:;
  /* 103173b5 mov esp, ebp */
  ESP = (EBP);
  /* 103173b7 pop ebp */
  EBP = (pop32());
  /* 103173b8 ret  */
  ESPCHK(0x10317360u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x103173c0 (48 bytes, 17 insns) */
void f_103173c0(void) {
  FTRACE(0x103173c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103173c0 push ebp */
  push32((uint32_t)(EBP));
  /* 103173c1 mov ebp, esp */
  EBP = (ESP);
  /* 103173c3 push ecx */
  push32((uint32_t)(ECX));
  /* 103173c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 103173c6 call 0x103170c0 */
  push32(0x103173cbu); f_103170c0();
  /* 103173cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103173ce mov eax, dword ptr [0x1033f6a4] */
  EAX = (r32((uint32_t)(0x1033f6a4)));
  /* 103173d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103173d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103173d9 mov dword ptr [0x1033f6a4], ecx */
  w32((uint32_t)(0x1033f6a4), (ECX));
  /* 103173df push 9 */
  push32((uint32_t)(0x9u));
  /* 103173e1 call 0x10317160 */
  push32(0x103173e6u); f_10317160();
  /* 103173e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103173e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103173ec mov esp, ebp */
  ESP = (EBP);
  /* 103173ee pop ebp */
  EBP = (pop32());
  /* 103173ef ret  */
  ESPCHK(0x103173c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100073f0 @ 0x103173f0 (10 bytes, 5 insns) */
void f_103173f0(void) {
  FTRACE(0x103173f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103173f0 push ebp */
  push32((uint32_t)(EBP));
  /* 103173f1 mov ebp, esp */
  EBP = (ESP);
  /* 103173f3 mov eax, dword ptr [0x1033f6a4] */
  EAX = (r32((uint32_t)(0x1033f6a4)));
  /* 103173f8 pop ebp */
  EBP = (pop32());
  /* 103173f9 ret  */
  ESPCHK(0x103173f0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10317400 (45 bytes, 19 insns) */
void f_10317400(void) {
  FTRACE(0x10317400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317400 push ebp */
  push32((uint32_t)(EBP));
  /* 10317401 mov ebp, esp */
  EBP = (ESP);
  /* 10317403 push ecx */
  push32((uint32_t)(ECX));
  /* 10317404 mov eax, dword ptr [0x1033f6a4] */
  EAX = (r32((uint32_t)(0x1033f6a4)));
  /* 10317409 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1031740c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317410 je 0x10317420 */
  if (C.zf) goto L_10317420;
  /* 10317412 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317415 push ecx */
  push32((uint32_t)(ECX));
  /* 10317416 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10317419u);
  /* 10317419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031741c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031741e jne 0x10317424 */
  if (!C.zf) goto L_10317424;
L_10317420:;
  /* 10317420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10317422 jmp 0x10317429 */
  goto L_10317429;
L_10317424:;
  /* 10317424 mov eax, 1 */
  EAX = (0x1u);
L_10317429:;
  /* 10317429 mov esp, ebp */
  ESP = (EBP);
  /* 1031742b pop ebp */
  EBP = (pop32());
  /* 1031742c ret  */
  ESPCHK(0x10317400u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10317430 (88 bytes, 40 insns) */
void f_10317430(void) {
  FTRACE(0x10317430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317430 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10317434 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10317438 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1031743a je 0x10317483 */
  if (C.zf) goto L_10317483;
  /* 1031743c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031743e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10317442 push edi */
  push32((uint32_t)(EDI));
  /* 10317443 mov edi, ecx */
  EDI = (ECX);
  /* 10317445 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317448 jb 0x10317477 */
  if (C.cf) goto L_10317477;
  /* 1031744a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1031744c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1031744f je 0x10317459 */
  if (C.zf) goto L_10317459;
  /* 10317451 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10317453:;
  /* 10317453 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10317455 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10317456 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10317457 jne 0x10317453 */
  if (!C.zf) goto L_10317453;
L_10317459:;
  /* 10317459 mov ecx, eax */
  ECX = (EAX);
  /* 1031745b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1031745e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317460 mov ecx, eax */
  ECX = (EAX);
  /* 10317462 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10317465 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317467 mov ecx, edx */
  ECX = (EDX);
  /* 10317469 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1031746c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1031746f je 0x10317477 */
  if (C.zf) goto L_10317477;
  /* 10317471 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10317473 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10317475 je 0x1031747d */
  if (C.zf) goto L_1031747d;
L_10317477:;
  /* 10317477 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10317479 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1031747a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1031747b jne 0x10317477 */
  if (!C.zf) goto L_10317477;
L_1031747d:;
  /* 1031747d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10317481 pop edi */
  EDI = (pop32());
  /* 10317482 ret  */
  ESPCHK(0x10317430u, _esp0);
  ESP += 4; return;
L_10317483:;
  /* 10317483 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10317487 ret  */
  ESPCHK(0x10317430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007490 @ 0x10317490 (23 bytes, 10 insns) */
void f_10317490(void) {
  FTRACE(0x10317490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317490 push ebp */
  push32((uint32_t)(EBP));
  /* 10317491 mov ebp, esp */
  EBP = (ESP);
  /* 10317493 mov eax, dword ptr [0x1033f6a0] */
  EAX = (r32((uint32_t)(0x1033f6a0)));
  /* 10317498 push eax */
  push32((uint32_t)(EAX));
  /* 10317499 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031749c push ecx */
  push32((uint32_t)(ECX));
  /* 1031749d call 0x103174b0 */
  push32(0x103174a2u); f_103174b0();
  /* 103174a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103174a5 pop ebp */
  EBP = (pop32());
  /* 103174a6 ret  */
  ESPCHK(0x10317490u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x103174b0 (87 bytes, 34 insns) */
void f_103174b0(void) {
  FTRACE(0x103174b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103174b0 push ebp */
  push32((uint32_t)(EBP));
  /* 103174b1 mov ebp, esp */
  EBP = (ESP);
  /* 103174b3 push ecx */
  push32((uint32_t)(ECX));
  /* 103174b4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103174b8 jbe 0x103174be */
  if ((C.cf||C.zf)) goto L_103174be;
  /* 103174ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103174bc jmp 0x10317503 */
  goto L_10317503;
L_103174be:;
  /* 103174be cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103174c2 ja 0x103174d5 */
  if ((!C.cf&&!C.zf)) goto L_103174d5;
  /* 103174c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103174c7 push eax */
  push32((uint32_t)(EAX));
  /* 103174c8 call 0x10317510 */
  push32(0x103174cdu); f_10317510();
  /* 103174cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103174d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 103174d3 jmp 0x103174dc */
  goto L_103174dc;
L_103174d5:;
  /* 103174d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_103174dc:;
  /* 103174dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103174e0 jne 0x103174e8 */
  if (!C.zf) goto L_103174e8;
  /* 103174e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103174e6 jne 0x103174ed */
  if (!C.zf) goto L_103174ed;
L_103174e8:;
  /* 103174e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103174eb jmp 0x10317503 */
  goto L_10317503;
L_103174ed:;
  /* 103174ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103174f0 push ecx */
  push32((uint32_t)(ECX));
  /* 103174f1 call 0x10317400 */
  push32(0x103174f6u); f_10317400();
  /* 103174f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103174f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103174fb jne 0x10317501 */
  if (!C.zf) goto L_10317501;
  /* 103174fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 103174ff jmp 0x10317503 */
  goto L_10317503;
L_10317501:;
  /* 10317501 jmp 0x103174be */
  goto L_103174be;
L_10317503:;
  /* 10317503 mov esp, ebp */
  ESP = (EBP);
  /* 10317505 pop ebp */
  EBP = (pop32());
  /* 10317506 ret  */
  ESPCHK(0x103174b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007510 @ 0x10317510 (109 bytes, 37 insns) */
void f_10317510(void) {
  FTRACE(0x10317510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317510 push ebp */
  push32((uint32_t)(EBP));
  /* 10317511 mov ebp, esp */
  EBP = (ESP);
  /* 10317513 push ecx */
  push32((uint32_t)(ECX));
  /* 10317514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317517 cmp eax, dword ptr [0x1033dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031751d ja 0x1031754d */
  if ((!C.cf&&!C.zf)) goto L_1031754d;
  /* 1031751f push 9 */
  push32((uint32_t)(0x9u));
  /* 10317521 call 0x103170c0 */
  push32(0x10317526u); f_103170c0();
  /* 10317526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317529 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031752c push ecx */
  push32((uint32_t)(ECX));
  /* 1031752d call 0x10318050 */
  push32(0x10317532u); f_10318050();
  /* 10317532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317535 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10317538 push 9 */
  push32((uint32_t)(0x9u));
  /* 1031753a call 0x10317160 */
  push32(0x1031753fu); f_10317160();
  /* 1031753f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317542 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317546 je 0x1031754d */
  if (C.zf) goto L_1031754d;
  /* 10317548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1031754b jmp 0x10317579 */
  goto L_10317579;
L_1031754d:;
  /* 1031754d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317551 jne 0x1031755a */
  if (!C.zf) goto L_1031755a;
  /* 10317553 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1031755a:;
  /* 1031755a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031755d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317560 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10317563 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10317566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317569 push eax */
  push32((uint32_t)(EAX));
  /* 1031756a push 0 */
  push32((uint32_t)(0x0u));
  /* 1031756c mov ecx, dword ptr [0x10340e6c] */
  ECX = (r32((uint32_t)(0x10340e6c)));
  /* 10317572 push ecx */
  push32((uint32_t)(ECX));
  /* 10317573 call dword ptr [0x10342344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342344))), 0x10317579u);
L_10317579:;
  /* 10317579 mov esp, ebp */
  ESP = (EBP);
  /* 1031757b pop ebp */
  EBP = (pop32());
  /* 1031757c ret  */
  ESPCHK(0x10317510u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x10317580 (10 bytes, 5 insns) */
void f_10317580(void) {
  FTRACE(0x10317580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317580 push ebp */
  push32((uint32_t)(EBP));
  /* 10317581 mov ebp, esp */
  EBP = (ESP);
  /* 10317583 mov eax, 1 */
  EAX = (0x1u);
  /* 10317588 pop ebp */
  EBP = (pop32());
  /* 10317589 ret  */
  ESPCHK(0x10317580u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x10317590 (173 bytes, 59 insns) */
void f_10317590(void) {
  FTRACE(0x10317590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317590 push ebp */
  push32((uint32_t)(EBP));
  /* 10317591 mov ebp, esp */
  EBP = (ESP);
  /* 10317593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317596 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031759a jbe 0x103175a3 */
  if ((C.cf||C.zf)) goto L_103175a3;
  /* 1031759c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031759e jmp 0x10317639 */
  goto L_10317639;
L_103175a3:;
  /* 103175a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 103175a5 call 0x103170c0 */
  push32(0x103175aau); f_103170c0();
  /* 103175aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103175ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103175b0 push eax */
  push32((uint32_t)(EAX));
  /* 103175b1 call 0x103179c0 */
  push32(0x103175b6u); f_103179c0();
  /* 103175b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103175b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103175bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103175c0 je 0x10317601 */
  if (C.zf) goto L_10317601;
  /* 103175c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 103175c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103175cc cmp ecx, dword ptr [0x1033dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1033dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103175d2 ja 0x103175f2 */
  if ((!C.cf&&!C.zf)) goto L_103175f2;
  /* 103175d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103175d7 push edx */
  push32((uint32_t)(EDX));
  /* 103175d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103175db push eax */
  push32((uint32_t)(EAX));
  /* 103175dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 103175df push ecx */
  push32((uint32_t)(ECX));
  /* 103175e0 call 0x10318890 */
  push32(0x103175e5u); f_10318890();
  /* 103175e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103175e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103175ea je 0x103175f2 */
  if (C.zf) goto L_103175f2;
  /* 103175ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103175ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_103175f2:;
  /* 103175f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 103175f4 call 0x10317160 */
  push32(0x103175f9u); f_10317160();
  /* 103175f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103175fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 103175ff jmp 0x10317639 */
  goto L_10317639;
L_10317601:;
  /* 10317601 push 9 */
  push32((uint32_t)(0x9u));
  /* 10317603 call 0x10317160 */
  push32(0x10317608u); f_10317160();
  /* 10317608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031760b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031760f jne 0x10317618 */
  if (!C.zf) goto L_10317618;
  /* 10317611 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10317618:;
  /* 10317618 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031761b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1031761e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10317620 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10317623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317626 push ecx */
  push32((uint32_t)(ECX));
  /* 10317627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031762a push edx */
  push32((uint32_t)(EDX));
  /* 1031762b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1031762d mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 10317632 push eax */
  push32((uint32_t)(EAX));
  /* 10317633 call dword ptr [0x1034235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034235c))), 0x10317639u);
L_10317639:;
  /* 10317639 mov esp, ebp */
  ESP = (EBP);
  /* 1031763b pop ebp */
  EBP = (pop32());
  /* 1031763c ret  */
  ESPCHK(0x10317590u, _esp0);
  ESP += 4; return;
}

/* FUN_10007640 @ 0x10317640 (490 bytes, 165 insns) */
void f_10317640(void) {
  FTRACE(0x10317640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317640 push ebp */
  push32((uint32_t)(EBP));
  /* 10317641 mov ebp, esp */
  EBP = (ESP);
  /* 10317643 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317646 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031764a jne 0x1031765d */
  if (!C.zf) goto L_1031765d;
  /* 1031764c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1031764f push eax */
  push32((uint32_t)(EAX));
  /* 10317650 call 0x10317490 */
  push32(0x10317655u); f_10317490();
  /* 10317655 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317658 jmp 0x10317826 */
  goto L_10317826;
L_1031765d:;
  /* 1031765d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317661 jne 0x10317676 */
  if (!C.zf) goto L_10317676;
  /* 10317663 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317666 push ecx */
  push32((uint32_t)(ECX));
  /* 10317667 call 0x10317830 */
  push32(0x1031766cu); f_10317830();
  /* 1031766c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031766f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10317671 jmp 0x10317826 */
  goto L_10317826;
L_10317676:;
  /* 10317676 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1031767d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317681 ja 0x103177f9 */
  if ((!C.cf&&!C.zf)) goto L_103177f9;
  /* 10317687 push 9 */
  push32((uint32_t)(0x9u));
  /* 10317689 call 0x103170c0 */
  push32(0x1031768eu); f_103170c0();
  /* 1031768e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317694 push edx */
  push32((uint32_t)(EDX));
  /* 10317695 call 0x103179c0 */
  push32(0x1031769au); f_103179c0();
  /* 1031769a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031769d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 103176a0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103176a4 je 0x103177bc */
  if (C.zf) goto L_103177bc;
  /* 103176aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103176ad cmp eax, dword ptr [0x1033dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1033dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103176b3 ja 0x10317730 */
  if ((!C.cf&&!C.zf)) goto L_10317730;
  /* 103176b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 103176b8 push ecx */
  push32((uint32_t)(ECX));
  /* 103176b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 103176bc push edx */
  push32((uint32_t)(EDX));
  /* 103176bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 103176c0 push eax */
  push32((uint32_t)(EAX));
  /* 103176c1 call 0x10318890 */
  push32(0x103176c6u); f_10318890();
  /* 103176c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103176c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103176cb je 0x103176d5 */
  if (C.zf) goto L_103176d5;
  /* 103176cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103176d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 103176d3 jmp 0x10317730 */
  goto L_10317730;
L_103176d5:;
  /* 103176d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103176d8 push edx */
  push32((uint32_t)(EDX));
  /* 103176d9 call 0x10318050 */
  push32(0x103176deu); f_10318050();
  /* 103176de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103176e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 103176e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103176e8 je 0x10317730 */
  if (C.zf) goto L_10317730;
  /* 103176ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103176ed mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 103176f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 103176f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 103176f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 103176f9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103176fc jae 0x10317706 */
  if (!C.cf) goto L_10317706;
  /* 103176fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317701 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10317704 jmp 0x1031770c */
  goto L_1031770c;
L_10317706:;
  /* 10317706 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317709 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1031770c:;
  /* 1031770c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1031770f push edx */
  push32((uint32_t)(EDX));
  /* 10317710 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317713 push eax */
  push32((uint32_t)(EAX));
  /* 10317714 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317717 push ecx */
  push32((uint32_t)(ECX));
  /* 10317718 call 0x10319fa0 */
  push32(0x1031771du); f_10319fa0();
  /* 1031771d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317720 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317723 push edx */
  push32((uint32_t)(EDX));
  /* 10317724 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10317727 push eax */
  push32((uint32_t)(EAX));
  /* 10317728 call 0x10317a80 */
  push32(0x1031772du); f_10317a80();
  /* 1031772d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10317730:;
  /* 10317730 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317734 jne 0x103177b0 */
  if (!C.zf) goto L_103177b0;
  /* 10317736 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031773a jne 0x10317743 */
  if (!C.zf) goto L_10317743;
  /* 1031773c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10317743:;
  /* 10317743 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317746 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10317749 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1031774c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1031774f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317752 push edx */
  push32((uint32_t)(EDX));
  /* 10317753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10317755 mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 1031775a push eax */
  push32((uint32_t)(EAX));
  /* 1031775b call dword ptr [0x10342344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10342344))), 0x10317761u);
  /* 10317761 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10317764 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317768 je 0x103177b0 */
  if (C.zf) goto L_103177b0;
  /* 1031776a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031776d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10317770 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10317773 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10317776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317779 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1031777c jae 0x10317786 */
  if (!C.cf) goto L_10317786;
  /* 1031777e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317781 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10317784 jmp 0x1031778c */
  goto L_1031778c;
L_10317786:;
  /* 10317786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317789 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1031778c:;
  /* 1031778c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1031778f push eax */
  push32((uint32_t)(EAX));
  /* 10317790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317793 push ecx */
  push32((uint32_t)(ECX));
  /* 10317794 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10317797 push edx */
  push32((uint32_t)(EDX));
  /* 10317798 call 0x10319fa0 */
  push32(0x1031779du); f_10319fa0();
  /* 1031779d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103177a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 103177a3 push eax */
  push32((uint32_t)(EAX));
  /* 103177a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 103177a7 push ecx */
  push32((uint32_t)(ECX));
  /* 103177a8 call 0x10317a80 */
  push32(0x103177adu); f_10317a80();
  /* 103177ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_103177b0:;
  /* 103177b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 103177b2 call 0x10317160 */
  push32(0x103177b7u); f_10317160();
  /* 103177b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103177ba jmp 0x103177f9 */
  goto L_103177f9;
L_103177bc:;
  /* 103177bc push 9 */
  push32((uint32_t)(0x9u));
  /* 103177be call 0x10317160 */
  push32(0x103177c3u); f_10317160();
  /* 103177c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103177c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103177ca jne 0x103177d3 */
  if (!C.zf) goto L_103177d3;
  /* 103177cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_103177d3:;
  /* 103177d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 103177d6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 103177d9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 103177dc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 103177df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 103177e2 push eax */
  push32((uint32_t)(EAX));
  /* 103177e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 103177e6 push ecx */
  push32((uint32_t)(ECX));
  /* 103177e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 103177e9 mov edx, dword ptr [0x10340e6c] */
  EDX = (r32((uint32_t)(0x10340e6c)));
  /* 103177ef push edx */
  push32((uint32_t)(EDX));
  /* 103177f0 call dword ptr [0x1034235c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034235c))), 0x103177f6u);
  /* 103177f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_103177f9:;
  /* 103177f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103177fd jne 0x10317808 */
  if (!C.zf) goto L_10317808;
  /* 103177ff cmp dword ptr [0x1033f6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1033f6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317806 jne 0x1031780d */
  if (!C.zf) goto L_1031780d;
L_10317808:;
  /* 10317808 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1031780b jmp 0x10317826 */
  goto L_10317826;
L_1031780d:;
  /* 1031780d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10317810 push eax */
  push32((uint32_t)(EAX));
  /* 10317811 call 0x10317400 */
  push32(0x10317816u); f_10317400();
  /* 10317816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317819 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1031781b jne 0x10317821 */
  if (!C.zf) goto L_10317821;
  /* 1031781d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1031781f jmp 0x10317826 */
  goto L_10317826;
L_10317821:;
  /* 10317821 jmp 0x10317676 */
  goto L_10317676;
L_10317826:;
  /* 10317826 mov esp, ebp */
  ESP = (EBP);
  /* 10317828 pop ebp */
  EBP = (pop32());
  /* 10317829 ret  */
  ESPCHK(0x10317640u, _esp0);
  ESP += 4; return;
}

/* FUN_10007830 @ 0x10317830 (104 bytes, 38 insns) */
void f_10317830(void) {
  FTRACE(0x10317830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317830 push ebp */
  push32((uint32_t)(EBP));
  /* 10317831 mov ebp, esp */
  EBP = (ESP);
  /* 10317833 push ecx */
  push32((uint32_t)(ECX));
  /* 10317834 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317838 jne 0x1031783c */
  if (!C.zf) goto L_1031783c;
  /* 1031783a jmp 0x10317894 */
  goto L_10317894;
L_1031783c:;
  /* 1031783c push 9 */
  push32((uint32_t)(0x9u));
  /* 1031783e call 0x103170c0 */
  push32(0x10317843u); f_103170c0();
  /* 10317843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317849 push eax */
  push32((uint32_t)(EAX));
  /* 1031784a call 0x103179c0 */
  push32(0x1031784fu); f_103179c0();
  /* 1031784f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317852 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10317855 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10317859 je 0x10317877 */
  if (C.zf) goto L_10317877;
  /* 1031785b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1031785e push ecx */
  push32((uint32_t)(ECX));
  /* 1031785f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317862 push edx */
  push32((uint32_t)(EDX));
  /* 10317863 call 0x10317a80 */
  push32(0x10317868u); f_10317a80();
  /* 10317868 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1031786b push 9 */
  push32((uint32_t)(0x9u));
  /* 1031786d call 0x10317160 */
  push32(0x10317872u); f_10317160();
  /* 10317872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317875 jmp 0x10317894 */
  goto L_10317894;
L_10317877:;
  /* 10317877 push 9 */
  push32((uint32_t)(0x9u));
  /* 10317879 call 0x10317160 */
  push32(0x1031787eu); f_10317160();
  /* 1031787e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10317881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10317884 push eax */
  push32((uint32_t)(EAX));
  /* 10317885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10317887 mov ecx, dword ptr [0x10340e6c] */
  ECX = (r32((uint32_t)(0x10340e6c)));
  /* 1031788d push ecx */
  push32((uint32_t)(ECX));
  /* 1031788e call dword ptr [0x1034233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034233c))), 0x10317894u);
L_10317894:;
  /* 10317894 mov esp, ebp */
  ESP = (EBP);
  /* 10317896 pop ebp */
  EBP = (pop32());
  /* 10317897 ret  */
  ESPCHK(0x10317830u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x103178a0 (116 bytes, 34 insns) */
void f_103178a0(void) {
  FTRACE(0x103178a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 103178a0 push ebp */
  push32((uint32_t)(EBP));
  /* 103178a1 mov ebp, esp */
  EBP = (ESP);
  /* 103178a3 push ecx */
  push32((uint32_t)(ECX));
  /* 103178a4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 103178ab push 9 */
  push32((uint32_t)(0x9u));
  /* 103178ad call 0x103170c0 */
  push32(0x103178b2u); f_103170c0();
  /* 103178b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103178b5 call 0x10318fb0 */
  push32(0x103178bau); f_10318fb0();
  /* 103178ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103178bc jge 0x103178c5 */
  if ((C.sf==C.of)) goto L_103178c5;
  /* 103178be mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_103178c5:;
  /* 103178c5 push 9 */
  push32((uint32_t)(0x9u));
  /* 103178c7 call 0x10317160 */
  push32(0x103178ccu); f_10317160();
  /* 103178cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 103178cf push 0 */
  push32((uint32_t)(0x0u));
  /* 103178d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 103178d3 mov eax, dword ptr [0x10340e6c] */
  EAX = (r32((uint32_t)(0x10340e6c)));
  /* 103178d8 push eax */
  push32((uint32_t)(EAX));
  /* 103178d9 call dword ptr [0x1034231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1034231c))), 0x103178dfu);
  /* 103178df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 103178e1 jne 0x1031790d */
  if (!C.zf) goto L_1031790d;
  /* 103178e3 call dword ptr [0x103422fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x103422fc))), 0x103178e9u);
  /* 103178e9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 103178ec jne 0x10317906 */
  if (!C.zf) goto L_10317906;
  /* 103178ee call 0x1031b5a0 */
  push32(0x103178f3u); f_1031b5a0();
  /* 103178f3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 103178f9 call 0x1031b590 */
  push32(0x103178feu); f_1031b590();
  /* 103178fe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10317904 jmp 0x1031790d */
  goto L_1031790d;
L_10317906:;
  /* 10317906 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1031790d:;
  /* 1031790d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10317910 mov esp, ebp */
  ESP = (EBP);
  /* 10317912 pop ebp */
  EBP = (pop32());
  /* 10317913 ret  */
  ESPCHK(0x103178a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007920 @ 0x10317920 (10 bytes, 5 insns) */
void f_10317920(void) {
  FTRACE(0x10317920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10317920 push ebp */
  push32((uint32_t)(EBP));
  /* 10317921 mov ebp, esp */
  EBP = (ESP);
  /* 10317923 call 0x103178a0 */
  push32(0x10317928u); f_103178a0();
  /* 10317928 pop ebp */
  EBP = (pop32());
  /* 10317929 ret  */
  ESPCHK(0x10317920u, _esp0);
  ESP += 4; return;
}

