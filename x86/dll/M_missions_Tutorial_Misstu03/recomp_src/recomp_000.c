#include "recomp.h"

/* thunk_FUN_10002fd0 @ 0x12351005 (5 bytes, 1 insns) */
void f_12351005(void) {
  FTRACE(0x12351005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12351005 jmp 0x12352fd0 */
  f_12352fd0(); return;
}

/* OnInit @ 0x1235100a (5 bytes, 1 insns) */
void f_1235100a(void) {
  FTRACE(0x1235100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235100a jmp 0x12351090 */
  f_12351090(); return;
}

/* thunk_FUN_10001030 @ 0x1235100f (5 bytes, 1 insns) */
void f_1235100f(void) {
  FTRACE(0x1235100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1235100f jmp 0x12351030 */
  f_12351030(); return;
}

/* ProcessScenary @ 0x12351014 (5 bytes, 1 insns) */
void f_12351014(void) {
  FTRACE(0x12351014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12351014 jmp 0x123515c0 */
  f_123515c0(); return;
}

/* FUN_10001030 @ 0x12351030 (67 bytes, 26 insns) */
void f_12351030(void) {
  FTRACE(0x12351030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12351030 push ebp */
  push32((uint32_t)(EBP));
  /* 12351031 mov ebp, esp */
  EBP = (ESP);
  /* 12351033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12351036 push ebx */
  push32((uint32_t)(EBX));
  /* 12351037 push esi */
  push32((uint32_t)(ESI));
  /* 12351038 push edi */
  push32((uint32_t)(EDI));
  /* 12351039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1235103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12351041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12351046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12351048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351052 je 0x12351056 */
  if (C.zf) goto L_12351056;
  /* 12351054 jmp 0x1235105b */
  goto L_1235105b;
L_12351056:;
  /* 12351056 call 0x1235100a */
  push32(0x1235105bu); f_1235100a();
L_1235105b:;
  /* 1235105b mov eax, 1 */
  EAX = (0x1u);
  /* 12351060 pop edi */
  EDI = (pop32());
  /* 12351061 pop esi */
  ESI = (pop32());
  /* 12351062 pop ebx */
  EBX = (pop32());
  /* 12351063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351068 call 0x123530b0 */
  push32(0x1235106du); f_123530b0();
  /* 1235106d mov esp, ebp */
  ESP = (EBP);
  /* 1235106f pop ebp */
  EBP = (pop32());
  /* 12351070 ret 0xc */
  ESPCHK(0x12351030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12351090 (1054 bytes, 285 insns) */
void f_12351090(void) {
  FTRACE(0x12351090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12351090 push ebp */
  push32((uint32_t)(EBP));
  /* 12351091 mov ebp, esp */
  EBP = (ESP);
  /* 12351093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12351096 push ebx */
  push32((uint32_t)(EBX));
  /* 12351097 push esi */
  push32((uint32_t)(ESI));
  /* 12351098 push edi */
  push32((uint32_t)(EDI));
  /* 12351099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1235109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123510a8 mov esi, esp */
  ESI = (ESP);
  /* 123510aa push 0x1237b100 */
  push32((uint32_t)(0x1237b100u));
  /* 123510af push 0x123803e8 */
  push32((uint32_t)(0x123803e8u));
  /* 123510b4 call dword ptr [0x12383414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383414))), 0x123510bau);
  /* 123510ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123510bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123510bf call 0x123530b0 */
  push32(0x123510c4u); f_123530b0();
  /* 123510c4 mov esi, esp */
  ESI = (ESP);
  /* 123510c6 push 0x1237b0f8 */
  push32((uint32_t)(0x1237b0f8u));
  /* 123510cb push 0x123803f8 */
  push32((uint32_t)(0x123803f8u));
  /* 123510d0 call dword ptr [0x12383414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383414))), 0x123510d6u);
  /* 123510d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123510d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123510db call 0x123530b0 */
  push32(0x123510e0u); f_123530b0();
  /* 123510e0 mov esi, esp */
  ESI = (ESP);
  /* 123510e2 push 0x1237b0f0 */
  push32((uint32_t)(0x1237b0f0u));
  /* 123510e7 push 0x123803f0 */
  push32((uint32_t)(0x123803f0u));
  /* 123510ec call dword ptr [0x12383414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383414))), 0x123510f2u);
  /* 123510f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123510f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123510f7 call 0x123530b0 */
  push32(0x123510fcu); f_123530b0();
  /* 123510fc mov esi, esp */
  ESI = (ESP);
  /* 123510fe push 0x1237b0e8 */
  push32((uint32_t)(0x1237b0e8u));
  /* 12351103 push 0x12380408 */
  push32((uint32_t)(0x12380408u));
  /* 12351108 call dword ptr [0x12383414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383414))), 0x1235110eu);
  /* 1235110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351113 call 0x123530b0 */
  push32(0x12351118u); f_123530b0();
  /* 12351118 mov esi, esp */
  ESI = (ESP);
  /* 1235111a push 0x1237b0e0 */
  push32((uint32_t)(0x1237b0e0u));
  /* 1235111f push 0x12380440 */
  push32((uint32_t)(0x12380440u));
  /* 12351124 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235112au);
  /* 1235112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235112f call 0x123530b0 */
  push32(0x12351134u); f_123530b0();
  /* 12351134 mov esi, esp */
  ESI = (ESP);
  /* 12351136 push 0x1237b0d8 */
  push32((uint32_t)(0x1237b0d8u));
  /* 1235113b push 0x12380448 */
  push32((uint32_t)(0x12380448u));
  /* 12351140 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x12351146u);
  /* 12351146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235114b call 0x123530b0 */
  push32(0x12351150u); f_123530b0();
  /* 12351150 mov esi, esp */
  ESI = (ESP);
  /* 12351152 push 0x1237b0d0 */
  push32((uint32_t)(0x1237b0d0u));
  /* 12351157 push 0x12380450 */
  push32((uint32_t)(0x12380450u));
  /* 1235115c call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x12351162u);
  /* 12351162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351167 call 0x123530b0 */
  push32(0x1235116cu); f_123530b0();
  /* 1235116c mov esi, esp */
  ESI = (ESP);
  /* 1235116e push 0x1237b0c8 */
  push32((uint32_t)(0x1237b0c8u));
  /* 12351173 push 0x12380458 */
  push32((uint32_t)(0x12380458u));
  /* 12351178 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235117eu);
  /* 1235117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351183 call 0x123530b0 */
  push32(0x12351188u); f_123530b0();
  /* 12351188 mov esi, esp */
  ESI = (ESP);
  /* 1235118a push 0x1237b0c0 */
  push32((uint32_t)(0x1237b0c0u));
  /* 1235118f push 0x12380460 */
  push32((uint32_t)(0x12380460u));
  /* 12351194 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235119au);
  /* 1235119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235119f call 0x123530b0 */
  push32(0x123511a4u); f_123530b0();
  /* 123511a4 mov esi, esp */
  ESI = (ESP);
  /* 123511a6 push 0x1237b0b8 */
  push32((uint32_t)(0x1237b0b8u));
  /* 123511ab push 0x12380468 */
  push32((uint32_t)(0x12380468u));
  /* 123511b0 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x123511b6u);
  /* 123511b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123511b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123511bb call 0x123530b0 */
  push32(0x123511c0u); f_123530b0();
  /* 123511c0 mov esi, esp */
  ESI = (ESP);
  /* 123511c2 push 0x1237b0b0 */
  push32((uint32_t)(0x1237b0b0u));
  /* 123511c7 push 0x12380470 */
  push32((uint32_t)(0x12380470u));
  /* 123511cc call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x123511d2u);
  /* 123511d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123511d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123511d7 call 0x123530b0 */
  push32(0x123511dcu); f_123530b0();
  /* 123511dc mov esi, esp */
  ESI = (ESP);
  /* 123511de push 0x1237b0a8 */
  push32((uint32_t)(0x1237b0a8u));
  /* 123511e3 push 0x12380478 */
  push32((uint32_t)(0x12380478u));
  /* 123511e8 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x123511eeu);
  /* 123511ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123511f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123511f3 call 0x123530b0 */
  push32(0x123511f8u); f_123530b0();
  /* 123511f8 mov esi, esp */
  ESI = (ESP);
  /* 123511fa push 0x1237b0a0 */
  push32((uint32_t)(0x1237b0a0u));
  /* 123511ff push 0x12380480 */
  push32((uint32_t)(0x12380480u));
  /* 12351204 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235120au);
  /* 1235120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235120f call 0x123530b0 */
  push32(0x12351214u); f_123530b0();
  /* 12351214 mov esi, esp */
  ESI = (ESP);
  /* 12351216 push 0x1237b098 */
  push32((uint32_t)(0x1237b098u));
  /* 1235121b push 0x12380420 */
  push32((uint32_t)(0x12380420u));
  /* 12351220 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x12351226u);
  /* 12351226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235122b call 0x123530b0 */
  push32(0x12351230u); f_123530b0();
  /* 12351230 mov esi, esp */
  ESI = (ESP);
  /* 12351232 push 0x1237b090 */
  push32((uint32_t)(0x1237b090u));
  /* 12351237 push 0x12380418 */
  push32((uint32_t)(0x12380418u));
  /* 1235123c call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x12351242u);
  /* 12351242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351247 call 0x123530b0 */
  push32(0x1235124cu); f_123530b0();
  /* 1235124c mov esi, esp */
  ESI = (ESP);
  /* 1235124e push 0x1237b088 */
  push32((uint32_t)(0x1237b088u));
  /* 12351253 push 0x12380430 */
  push32((uint32_t)(0x12380430u));
  /* 12351258 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235125eu);
  /* 1235125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351263 call 0x123530b0 */
  push32(0x12351268u); f_123530b0();
  /* 12351268 mov esi, esp */
  ESI = (ESP);
  /* 1235126a push 0x1237b080 */
  push32((uint32_t)(0x1237b080u));
  /* 1235126f push 0x12380428 */
  push32((uint32_t)(0x12380428u));
  /* 12351274 call dword ptr [0x12383418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383418))), 0x1235127au);
  /* 1235127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235127f call 0x123530b0 */
  push32(0x12351284u); f_123530b0();
  /* 12351284 mov esi, esp */
  ESI = (ESP);
  /* 12351286 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12351288 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235128a call dword ptr [0x1238341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238341c))), 0x12351290u);
  /* 12351290 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351295 call 0x123530b0 */
  push32(0x1235129au); f_123530b0();
  /* 1235129a mov esi, esp */
  ESI = (ESP);
  /* 1235129c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235129e push 4 */
  push32((uint32_t)(0x4u));
  /* 123512a0 call dword ptr [0x1238341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238341c))), 0x123512a6u);
  /* 123512a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123512a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123512ab call 0x123530b0 */
  push32(0x123512b0u); f_123530b0();
  /* 123512b0 mov esi, esp */
  ESI = (ESP);
  /* 123512b2 push 8 */
  push32((uint32_t)(0x8u));
  /* 123512b4 push 0x123804a0 */
  push32((uint32_t)(0x123804a0u));
  /* 123512b9 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x123512bfu);
  /* 123512bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123512c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123512c4 call 0x123530b0 */
  push32(0x123512c9u); f_123530b0();
  /* 123512c9 mov esi, esp */
  ESI = (ESP);
  /* 123512cb push 8 */
  push32((uint32_t)(0x8u));
  /* 123512cd push 0x123804e0 */
  push32((uint32_t)(0x123804e0u));
  /* 123512d2 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x123512d8u);
  /* 123512d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123512db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123512dd call 0x123530b0 */
  push32(0x123512e2u); f_123530b0();
  /* 123512e2 mov esi, esp */
  ESI = (ESP);
  /* 123512e4 push 8 */
  push32((uint32_t)(0x8u));
  /* 123512e6 push 0x123804e8 */
  push32((uint32_t)(0x123804e8u));
  /* 123512eb call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x123512f1u);
  /* 123512f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123512f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123512f6 call 0x123530b0 */
  push32(0x123512fbu); f_123530b0();
  /* 123512fb mov esi, esp */
  ESI = (ESP);
  /* 123512fd push 8 */
  push32((uint32_t)(0x8u));
  /* 123512ff push 0x123804c8 */
  push32((uint32_t)(0x123804c8u));
  /* 12351304 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x1235130au);
  /* 1235130a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235130d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235130f call 0x123530b0 */
  push32(0x12351314u); f_123530b0();
  /* 12351314 mov esi, esp */
  ESI = (ESP);
  /* 12351316 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351318 push 0x123804d8 */
  push32((uint32_t)(0x123804d8u));
  /* 1235131d call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x12351323u);
  /* 12351323 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351328 call 0x123530b0 */
  push32(0x1235132du); f_123530b0();
  /* 1235132d mov esi, esp */
  ESI = (ESP);
  /* 1235132f push 8 */
  push32((uint32_t)(0x8u));
  /* 12351331 push 0x123804b8 */
  push32((uint32_t)(0x123804b8u));
  /* 12351336 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x1235133cu);
  /* 1235133c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235133f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351341 call 0x123530b0 */
  push32(0x12351346u); f_123530b0();
  /* 12351346 mov esi, esp */
  ESI = (ESP);
  /* 12351348 push 8 */
  push32((uint32_t)(0x8u));
  /* 1235134a push 0x123804c0 */
  push32((uint32_t)(0x123804c0u));
  /* 1235134f call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x12351355u);
  /* 12351355 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351358 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235135a call 0x123530b0 */
  push32(0x1235135fu); f_123530b0();
  /* 1235135f mov esi, esp */
  ESI = (ESP);
  /* 12351361 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351363 push 0x123804a8 */
  push32((uint32_t)(0x123804a8u));
  /* 12351368 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x1235136eu);
  /* 1235136e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351371 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351373 call 0x123530b0 */
  push32(0x12351378u); f_123530b0();
  /* 12351378 mov esi, esp */
  ESI = (ESP);
  /* 1235137a push 8 */
  push32((uint32_t)(0x8u));
  /* 1235137c push 0x123804b0 */
  push32((uint32_t)(0x123804b0u));
  /* 12351381 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x12351387u);
  /* 12351387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235138a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235138c call 0x123530b0 */
  push32(0x12351391u); f_123530b0();
  /* 12351391 mov esi, esp */
  ESI = (ESP);
  /* 12351393 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351395 push 0x123804f0 */
  push32((uint32_t)(0x123804f0u));
  /* 1235139a call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x123513a0u);
  /* 123513a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123513a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123513a5 call 0x123530b0 */
  push32(0x123513aau); f_123530b0();
  /* 123513aa mov esi, esp */
  ESI = (ESP);
  /* 123513ac push 8 */
  push32((uint32_t)(0x8u));
  /* 123513ae push 0x123804d0 */
  push32((uint32_t)(0x123804d0u));
  /* 123513b3 call dword ptr [0x12383420] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383420))), 0x123513b9u);
  /* 123513b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123513bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123513be call 0x123530b0 */
  push32(0x123513c3u); f_123530b0();
  /* 123513c3 mov esi, esp */
  ESI = (ESP);
  /* 123513c5 push 0x1237b074 */
  push32((uint32_t)(0x1237b074u));
  /* 123513ca push 0x123803e0 */
  push32((uint32_t)(0x123803e0u));
  /* 123513cf call dword ptr [0x12383424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383424))), 0x123513d5u);
  /* 123513d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123513d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123513da call 0x123530b0 */
  push32(0x123513dfu); f_123530b0();
  /* 123513df mov esi, esp */
  ESI = (ESP);
  /* 123513e1 push 0x1237b064 */
  push32((uint32_t)(0x1237b064u));
  /* 123513e6 push 0x12380488 */
  push32((uint32_t)(0x12380488u));
  /* 123513eb call dword ptr [0x12383424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383424))), 0x123513f1u);
  /* 123513f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123513f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123513f6 call 0x123530b0 */
  push32(0x123513fbu); f_123530b0();
  /* 123513fb mov esi, esp */
  ESI = (ESP);
  /* 123513fd push 0x1237b054 */
  push32((uint32_t)(0x1237b054u));
  /* 12351402 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 12351407 call dword ptr [0x12383424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383424))), 0x1235140du);
  /* 1235140d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351410 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351412 call 0x123530b0 */
  push32(0x12351417u); f_123530b0();
  /* 12351417 mov esi, esp */
  ESI = (ESP);
  /* 12351419 push 0x1237b044 */
  push32((uint32_t)(0x1237b044u));
  /* 1235141e push 0x123804f8 */
  push32((uint32_t)(0x123804f8u));
  /* 12351423 call dword ptr [0x12383424] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383424))), 0x12351429u);
  /* 12351429 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235142c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235142e call 0x123530b0 */
  push32(0x12351433u); f_123530b0();
  /* 12351433 mov esi, esp */
  ESI = (ESP);
  /* 12351435 push 0x1237b038 */
  push32((uint32_t)(0x1237b038u));
  /* 1235143a push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 1235143f call dword ptr [0x12383428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383428))), 0x12351445u);
  /* 12351445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235144a call 0x123530b0 */
  push32(0x1235144fu); f_123530b0();
  /* 1235144f mov esi, esp */
  ESI = (ESP);
  /* 12351451 push 0x1237b02c */
  push32((uint32_t)(0x1237b02cu));
  /* 12351456 push 0x12380490 */
  push32((uint32_t)(0x12380490u));
  /* 1235145b call dword ptr [0x12383428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383428))), 0x12351461u);
  /* 12351461 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351464 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351466 call 0x123530b0 */
  push32(0x1235146bu); f_123530b0();
  /* 1235146b mov esi, esp */
  ESI = (ESP);
  /* 1235146d push 0x1237b024 */
  push32((uint32_t)(0x1237b024u));
  /* 12351472 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351474 call dword ptr [0x1238342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238342c))), 0x1235147au);
  /* 1235147a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235147d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235147f call 0x123530b0 */
  push32(0x12351484u); f_123530b0();
  /* 12351484 mov esi, esp */
  ESI = (ESP);
  /* 12351486 push 0x1237b01c */
  push32((uint32_t)(0x1237b01cu));
  /* 1235148b push 4 */
  push32((uint32_t)(0x4u));
  /* 1235148d call dword ptr [0x1238342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238342c))), 0x12351493u);
  /* 12351493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351498 call 0x123530b0 */
  push32(0x1235149du); f_123530b0();
  /* 1235149d pop edi */
  EDI = (pop32());
  /* 1235149e pop esi */
  ESI = (pop32());
  /* 1235149f pop ebx */
  EBX = (pop32());
  /* 123514a0 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123514a3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123514a5 call 0x123530b0 */
  push32(0x123514aau); f_123530b0();
  /* 123514aa mov esp, ebp */
  ESP = (EBP);
  /* 123514ac pop ebp */
  EBP = (pop32());
  /* 123514ad ret  */
  ESPCHK(0x12351090u, _esp0);
  ESP += 4; return;
}

/* FUN_100015c0 @ 0x123515c0 (5329 bytes, 1558 insns) */
void f_123515c0(void) {
  FTRACE(0x123515c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123515c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123515c1 mov ebp, esp */
  EBP = (ESP);
  /* 123515c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123515c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123515c7 push esi */
  push32((uint32_t)(ESI));
  /* 123515c8 push edi */
  push32((uint32_t)(EDI));
  /* 123515c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 123515cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123515d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123515d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123515d8 mov esi, esp */
  ESI = (ESP);
  /* 123515da push 1 */
  push32((uint32_t)(0x1u));
  /* 123515dc call dword ptr [0x123833dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833dc))), 0x123515e2u);
  /* 123515e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123515e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123515e7 call 0x123530b0 */
  push32(0x123515ecu); f_123530b0();
  /* 123515ec mov esi, esp */
  ESI = (ESP);
  /* 123515ee push 1 */
  push32((uint32_t)(0x1u));
  /* 123515f0 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123515f6u);
  /* 123515f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123515f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123515fb call 0x123530b0 */
  push32(0x12351600u); f_123530b0();
  /* 12351600 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351607 je 0x1235165c */
  if (C.zf) goto L_1235165c;
  /* 12351609 mov esi, esp */
  ESI = (ESP);
  /* 1235160b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235160d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235160f call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351615u);
  /* 12351615 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351618 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235161a call 0x123530b0 */
  push32(0x1235161fu); f_123530b0();
  /* 1235161f mov esi, esp */
  ESI = (ESP);
  /* 12351621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351623 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351625 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235162bu);
  /* 1235162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235162e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351630 call 0x123530b0 */
  push32(0x12351635u); f_123530b0();
  /* 12351635 mov esi, esp */
  ESI = (ESP);
  /* 12351637 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 1235163c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235163e push 0x1237b1fc */
  push32((uint32_t)(0x1237b1fcu));
  /* 12351643 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351645 push 0x1237b1f8 */
  push32((uint32_t)(0x1237b1f8u));
  /* 1235164a push 8 */
  push32((uint32_t)(0x8u));
  /* 1235164c call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351652u);
  /* 12351652 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351657 call 0x123530b0 */
  push32(0x1235165cu); f_123530b0();
L_1235165c:;
  /* 1235165c mov esi, esp */
  ESI = (ESP);
  /* 1235165e push 2 */
  push32((uint32_t)(0x2u));
  /* 12351660 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351666u);
  /* 12351666 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235166b call 0x123530b0 */
  push32(0x12351670u); f_123530b0();
  /* 12351670 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351677 je 0x1235179c */
  if (C.zf) goto L_1235179c;
  /* 1235167d mov esi, esp */
  ESI = (ESP);
  /* 1235167f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351681 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351687u);
  /* 12351687 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235168a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235168c call 0x123530b0 */
  push32(0x12351691u); f_123530b0();
  /* 12351691 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351696 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351698 je 0x1235179c */
  if (C.zf) goto L_1235179c;
  /* 1235169e mov esi, esp */
  ESI = (ESP);
  /* 123516a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123516a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123516a4 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123516aau);
  /* 123516aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123516ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123516af call 0x123530b0 */
  push32(0x123516b4u); f_123530b0();
  /* 123516b4 mov esi, esp */
  ESI = (ESP);
  /* 123516b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123516b8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123516ba call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123516c0u);
  /* 123516c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123516c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123516c5 call 0x123530b0 */
  push32(0x123516cau); f_123530b0();
  /* 123516ca mov esi, esp */
  ESI = (ESP);
  /* 123516cc push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 123516d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123516d3 push 0x1237b1e8 */
  push32((uint32_t)(0x1237b1e8u));
  /* 123516d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123516da push 0x1237b1e4 */
  push32((uint32_t)(0x1237b1e4u));
  /* 123516df push 8 */
  push32((uint32_t)(0x8u));
  /* 123516e1 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x123516e7u);
  /* 123516e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123516ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123516ec call 0x123530b0 */
  push32(0x123516f1u); f_123530b0();
  /* 123516f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123516f3 jne 0x1235179c */
  if (!C.zf) goto L_1235179c;
  /* 123516f9 mov esi, esp */
  ESI = (ESP);
  /* 123516fb push 0 */
  push32((uint32_t)(0x0u));
  /* 123516fd push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123516ff call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351705u);
  /* 12351705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235170a call 0x123530b0 */
  push32(0x1235170fu); f_123530b0();
  /* 1235170f mov esi, esp */
  ESI = (ESP);
  /* 12351711 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351713 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12351715 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235171bu);
  /* 1235171b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235171e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351720 call 0x123530b0 */
  push32(0x12351725u); f_123530b0();
  /* 12351725 mov esi, esp */
  ESI = (ESP);
  /* 12351727 push 0x12380440 */
  push32((uint32_t)(0x12380440u));
  /* 1235172c call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x12351732u);
  /* 12351732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351737 call 0x123530b0 */
  push32(0x1235173cu); f_123530b0();
  /* 1235173c mov esi, esp */
  ESI = (ESP);
  /* 1235173e push 0 */
  push32((uint32_t)(0x0u));
  /* 12351740 push 0x12380440 */
  push32((uint32_t)(0x12380440u));
  /* 12351745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351747 push 0x123803e0 */
  push32((uint32_t)(0x123803e0u));
  /* 1235174c push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351751 push 0x123804a0 */
  push32((uint32_t)(0x123804a0u));
  /* 12351756 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x1235175cu);
  /* 1235175c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235175f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351761 call 0x123530b0 */
  push32(0x12351766u); f_123530b0();
  /* 12351766 mov esi, esp */
  ESI = (ESP);
  /* 12351768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235176a push 0x123803e8 */
  push32((uint32_t)(0x123803e8u));
  /* 1235176f call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12351775u);
  /* 12351775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351778 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235177a call 0x123530b0 */
  push32(0x1235177fu); f_123530b0();
  /* 1235177f mov esi, esp */
  ESI = (ESP);
  /* 12351781 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351783 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351785 push 0x12380440 */
  push32((uint32_t)(0x12380440u));
  /* 1235178a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235178c call dword ptr [0x123833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f8))), 0x12351792u);
  /* 12351792 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351795 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351797 call 0x123530b0 */
  push32(0x1235179cu); f_123530b0();
L_1235179c:;
  /* 1235179c mov esi, esp */
  ESI = (ESP);
  /* 1235179e push 3 */
  push32((uint32_t)(0x3u));
  /* 123517a0 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123517a6u);
  /* 123517a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123517a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123517ab call 0x123530b0 */
  push32(0x123517b0u); f_123530b0();
  /* 123517b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123517b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123517b7 je 0x12351927 */
  if (C.zf) goto L_12351927;
  /* 123517bd mov esi, esp */
  ESI = (ESP);
  /* 123517bf push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123517c1 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123517c7u);
  /* 123517c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123517ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123517cc call 0x123530b0 */
  push32(0x123517d1u); f_123530b0();
  /* 123517d1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123517d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123517d8 je 0x12351927 */
  if (C.zf) goto L_12351927;
  /* 123517de mov esi, esp */
  ESI = (ESP);
  /* 123517e0 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123517e2 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123517e8u);
  /* 123517e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123517eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123517ed call 0x123530b0 */
  push32(0x123517f2u); f_123530b0();
  /* 123517f2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123517f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123517f9 je 0x12351927 */
  if (C.zf) goto L_12351927;
  /* 123517ff mov esi, esp */
  ESI = (ESP);
  /* 12351801 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351803 push 3 */
  push32((uint32_t)(0x3u));
  /* 12351805 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235180bu);
  /* 1235180b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235180e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351810 call 0x123530b0 */
  push32(0x12351815u); f_123530b0();
  /* 12351815 mov esi, esp */
  ESI = (ESP);
  /* 12351817 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351819 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235181b call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351821u);
  /* 12351821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351826 call 0x123530b0 */
  push32(0x1235182bu); f_123530b0();
  /* 1235182b mov esi, esp */
  ESI = (ESP);
  /* 1235182d push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 12351832 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351834 push 0x1237b1dc */
  push32((uint32_t)(0x1237b1dcu));
  /* 12351839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235183b push 0x1237b1d8 */
  push32((uint32_t)(0x1237b1d8u));
  /* 12351840 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351842 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351848u);
  /* 12351848 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235184d call 0x123530b0 */
  push32(0x12351852u); f_123530b0();
  /* 12351852 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351854 jne 0x12351927 */
  if (!C.zf) goto L_12351927;
  /* 1235185a mov esi, esp */
  ESI = (ESP);
  /* 1235185c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235185e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351860 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351866u);
  /* 12351866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235186b call 0x123530b0 */
  push32(0x12351870u); f_123530b0();
  /* 12351870 mov esi, esp */
  ESI = (ESP);
  /* 12351872 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351874 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12351876 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235187cu);
  /* 1235187c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235187f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351881 call 0x123530b0 */
  push32(0x12351886u); f_123530b0();
  /* 12351886 mov esi, esp */
  ESI = (ESP);
  /* 12351888 push 0x12380448 */
  push32((uint32_t)(0x12380448u));
  /* 1235188d call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x12351893u);
  /* 12351893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351898 call 0x123530b0 */
  push32(0x1235189du); f_123530b0();
  /* 1235189d mov esi, esp */
  ESI = (ESP);
  /* 1235189f push 0 */
  push32((uint32_t)(0x0u));
  /* 123518a1 push 0x12380448 */
  push32((uint32_t)(0x12380448u));
  /* 123518a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123518a8 push 0x12380488 */
  push32((uint32_t)(0x12380488u));
  /* 123518ad push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 123518b2 push 0x123804e0 */
  push32((uint32_t)(0x123804e0u));
  /* 123518b7 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x123518bdu);
  /* 123518bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123518c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123518c2 call 0x123530b0 */
  push32(0x123518c7u); f_123530b0();
  /* 123518c7 mov esi, esp */
  ESI = (ESP);
  /* 123518c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123518cb push 0x12380450 */
  push32((uint32_t)(0x12380450u));
  /* 123518d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 123518d2 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 123518d7 push 0x12380490 */
  push32((uint32_t)(0x12380490u));
  /* 123518dc push 0x123804e8 */
  push32((uint32_t)(0x123804e8u));
  /* 123518e1 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x123518e7u);
  /* 123518e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123518ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123518ec call 0x123530b0 */
  push32(0x123518f1u); f_123530b0();
  /* 123518f1 mov esi, esp */
  ESI = (ESP);
  /* 123518f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123518f5 push 0x123804e8 */
  push32((uint32_t)(0x123804e8u));
  /* 123518fa call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12351900u);
  /* 12351900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351905 call 0x123530b0 */
  push32(0x1235190au); f_123530b0();
  /* 1235190a mov esi, esp */
  ESI = (ESP);
  /* 1235190c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235190e push 0 */
  push32((uint32_t)(0x0u));
  /* 12351910 push 0x12380448 */
  push32((uint32_t)(0x12380448u));
  /* 12351915 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351917 call dword ptr [0x123833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f8))), 0x1235191du);
  /* 1235191d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351922 call 0x123530b0 */
  push32(0x12351927u); f_123530b0();
L_12351927:;
  /* 12351927 mov esi, esp */
  ESI = (ESP);
  /* 12351929 push 4 */
  push32((uint32_t)(0x4u));
  /* 1235192b call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351931u);
  /* 12351931 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351936 call 0x123530b0 */
  push32(0x1235193bu); f_123530b0();
  /* 1235193b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351942 je 0x12351adc */
  if (C.zf) goto L_12351adc;
  /* 12351948 mov esi, esp */
  ESI = (ESP);
  /* 1235194a push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235194c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351952u);
  /* 12351952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351955 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351957 call 0x123530b0 */
  push32(0x1235195cu); f_123530b0();
  /* 1235195c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351961 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351963 je 0x12351adc */
  if (C.zf) goto L_12351adc;
  /* 12351969 mov esi, esp */
  ESI = (ESP);
  /* 1235196b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235196d call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351973u);
  /* 12351973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351976 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351978 call 0x123530b0 */
  push32(0x1235197du); f_123530b0();
  /* 1235197d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351982 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351984 je 0x12351adc */
  if (C.zf) goto L_12351adc;
  /* 1235198a mov esi, esp */
  ESI = (ESP);
  /* 1235198c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235198e push 4 */
  push32((uint32_t)(0x4u));
  /* 12351990 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351996u);
  /* 12351996 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351999 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235199b call 0x123530b0 */
  push32(0x123519a0u); f_123530b0();
  /* 123519a0 mov esi, esp */
  ESI = (ESP);
  /* 123519a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123519a4 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123519a6 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123519acu);
  /* 123519ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123519af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123519b1 call 0x123530b0 */
  push32(0x123519b6u); f_123530b0();
  /* 123519b6 mov esi, esp */
  ESI = (ESP);
  /* 123519b8 push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 123519bd push 0 */
  push32((uint32_t)(0x0u));
  /* 123519bf push 0x1237b1d0 */
  push32((uint32_t)(0x1237b1d0u));
  /* 123519c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123519c6 push 0x1237b1cc */
  push32((uint32_t)(0x1237b1ccu));
  /* 123519cb push 8 */
  push32((uint32_t)(0x8u));
  /* 123519cd call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x123519d3u);
  /* 123519d3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123519d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123519d8 call 0x123530b0 */
  push32(0x123519ddu); f_123530b0();
  /* 123519dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123519df jne 0x12351adc */
  if (!C.zf) goto L_12351adc;
  /* 123519e5 mov esi, esp */
  ESI = (ESP);
  /* 123519e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123519e9 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123519eb call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123519f1u);
  /* 123519f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123519f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123519f6 call 0x123530b0 */
  push32(0x123519fbu); f_123530b0();
  /* 123519fb mov esi, esp */
  ESI = (ESP);
  /* 123519fd push 0 */
  push32((uint32_t)(0x0u));
  /* 123519ff push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12351a01 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351a07u);
  /* 12351a07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351a0c call 0x123530b0 */
  push32(0x12351a11u); f_123530b0();
  /* 12351a11 mov esi, esp */
  ESI = (ESP);
  /* 12351a13 push 0x12380468 */
  push32((uint32_t)(0x12380468u));
  /* 12351a18 call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x12351a1eu);
  /* 12351a1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351a21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351a23 call 0x123530b0 */
  push32(0x12351a28u); f_123530b0();
  /* 12351a28 mov esi, esp */
  ESI = (ESP);
  /* 12351a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12351a2c push 0x12380468 */
  push32((uint32_t)(0x12380468u));
  /* 12351a31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351a33 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 12351a38 push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351a3d push 0x123804c8 */
  push32((uint32_t)(0x123804c8u));
  /* 12351a42 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351a48u);
  /* 12351a48 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351a4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351a4d call 0x123530b0 */
  push32(0x12351a52u); f_123530b0();
  /* 12351a52 mov esi, esp */
  ESI = (ESP);
  /* 12351a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351a56 push 0x12380470 */
  push32((uint32_t)(0x12380470u));
  /* 12351a5b push 0 */
  push32((uint32_t)(0x0u));
  /* 12351a5d push 0x12380488 */
  push32((uint32_t)(0x12380488u));
  /* 12351a62 push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351a67 push 0x123804d8 */
  push32((uint32_t)(0x123804d8u));
  /* 12351a6c call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351a72u);
  /* 12351a72 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351a75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351a77 call 0x123530b0 */
  push32(0x12351a7cu); f_123530b0();
  /* 12351a7c mov esi, esp */
  ESI = (ESP);
  /* 12351a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12351a80 push 0x12380478 */
  push32((uint32_t)(0x12380478u));
  /* 12351a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351a87 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 12351a8c push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351a91 push 0x123804b8 */
  push32((uint32_t)(0x123804b8u));
  /* 12351a96 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351a9cu);
  /* 12351a9c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351aa1 call 0x123530b0 */
  push32(0x12351aa6u); f_123530b0();
  /* 12351aa6 mov esi, esp */
  ESI = (ESP);
  /* 12351aa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351aaa push 0x123804b8 */
  push32((uint32_t)(0x123804b8u));
  /* 12351aaf call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12351ab5u);
  /* 12351ab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ab8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351aba call 0x123530b0 */
  push32(0x12351abfu); f_123530b0();
  /* 12351abf mov esi, esp */
  ESI = (ESP);
  /* 12351ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351ac5 push 0x12380468 */
  push32((uint32_t)(0x12380468u));
  /* 12351aca push 1 */
  push32((uint32_t)(0x1u));
  /* 12351acc call dword ptr [0x123833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f8))), 0x12351ad2u);
  /* 12351ad2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ad5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351ad7 call 0x123530b0 */
  push32(0x12351adcu); f_123530b0();
L_12351adc:;
  /* 12351adc mov esi, esp */
  ESI = (ESP);
  /* 12351ade push 5 */
  push32((uint32_t)(0x5u));
  /* 12351ae0 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351ae6u);
  /* 12351ae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ae9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351aeb call 0x123530b0 */
  push32(0x12351af0u); f_123530b0();
  /* 12351af0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351af5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351af7 je 0x12351b8a */
  if (C.zf) goto L_12351b8a;
  /* 12351afd mov esi, esp */
  ESI = (ESP);
  /* 12351aff push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351b01 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351b07u);
  /* 12351b07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b0c call 0x123530b0 */
  push32(0x12351b11u); f_123530b0();
  /* 12351b11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351b16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351b18 je 0x12351b8a */
  if (C.zf) goto L_12351b8a;
  /* 12351b1a mov esi, esp */
  ESI = (ESP);
  /* 12351b1c push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351b1e call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351b24u);
  /* 12351b24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b29 call 0x123530b0 */
  push32(0x12351b2eu); f_123530b0();
  /* 12351b2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351b33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351b35 je 0x12351b8a */
  if (C.zf) goto L_12351b8a;
  /* 12351b37 mov esi, esp */
  ESI = (ESP);
  /* 12351b39 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351b3b push 5 */
  push32((uint32_t)(0x5u));
  /* 12351b3d call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351b43u);
  /* 12351b43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b48 call 0x123530b0 */
  push32(0x12351b4du); f_123530b0();
  /* 12351b4d mov esi, esp */
  ESI = (ESP);
  /* 12351b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12351b51 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351b53 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351b59u);
  /* 12351b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b5e call 0x123530b0 */
  push32(0x12351b63u); f_123530b0();
  /* 12351b63 mov esi, esp */
  ESI = (ESP);
  /* 12351b65 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12351b6a push 0 */
  push32((uint32_t)(0x0u));
  /* 12351b6c push 0x1237b1c4 */
  push32((uint32_t)(0x1237b1c4u));
  /* 12351b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351b73 push 0x1237b1c0 */
  push32((uint32_t)(0x1237b1c0u));
  /* 12351b78 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351b7a call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351b80u);
  /* 12351b80 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b85 call 0x123530b0 */
  push32(0x12351b8au); f_123530b0();
L_12351b8a:;
  /* 12351b8a mov esi, esp */
  ESI = (ESP);
  /* 12351b8c push 6 */
  push32((uint32_t)(0x6u));
  /* 12351b8e call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351b94u);
  /* 12351b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351b97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351b99 call 0x123530b0 */
  push32(0x12351b9eu); f_123530b0();
  /* 12351b9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351ba5 je 0x12351c38 */
  if (C.zf) goto L_12351c38;
  /* 12351bab mov esi, esp */
  ESI = (ESP);
  /* 12351bad push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351baf call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351bb5u);
  /* 12351bb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351bb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351bba call 0x123530b0 */
  push32(0x12351bbfu); f_123530b0();
  /* 12351bbf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351bc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351bc6 je 0x12351c38 */
  if (C.zf) goto L_12351c38;
  /* 12351bc8 mov esi, esp */
  ESI = (ESP);
  /* 12351bca push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351bcc call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351bd2u);
  /* 12351bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351bd7 call 0x123530b0 */
  push32(0x12351bdcu); f_123530b0();
  /* 12351bdc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351be3 je 0x12351c38 */
  if (C.zf) goto L_12351c38;
  /* 12351be5 mov esi, esp */
  ESI = (ESP);
  /* 12351be7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351be9 push 6 */
  push32((uint32_t)(0x6u));
  /* 12351beb call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351bf1u);
  /* 12351bf1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351bf4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351bf6 call 0x123530b0 */
  push32(0x12351bfbu); f_123530b0();
  /* 12351bfb mov esi, esp */
  ESI = (ESP);
  /* 12351bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12351bff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351c01 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351c07u);
  /* 12351c07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351c0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351c0c call 0x123530b0 */
  push32(0x12351c11u); f_123530b0();
  /* 12351c11 mov esi, esp */
  ESI = (ESP);
  /* 12351c13 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12351c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351c1a push 0x1237b1b8 */
  push32((uint32_t)(0x1237b1b8u));
  /* 12351c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12351c21 push 0x1237b1b4 */
  push32((uint32_t)(0x1237b1b4u));
  /* 12351c26 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351c28 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351c2eu);
  /* 12351c2e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351c31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351c33 call 0x123530b0 */
  push32(0x12351c38u); f_123530b0();
L_12351c38:;
  /* 12351c38 mov esi, esp */
  ESI = (ESP);
  /* 12351c3a push 7 */
  push32((uint32_t)(0x7u));
  /* 12351c3c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351c42u);
  /* 12351c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351c45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351c47 call 0x123530b0 */
  push32(0x12351c4cu); f_123530b0();
  /* 12351c4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351c51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351c53 je 0x12351ce6 */
  if (C.zf) goto L_12351ce6;
  /* 12351c59 mov esi, esp */
  ESI = (ESP);
  /* 12351c5b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351c5d call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351c63u);
  /* 12351c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351c66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351c68 call 0x123530b0 */
  push32(0x12351c6du); f_123530b0();
  /* 12351c6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351c74 je 0x12351ce6 */
  if (C.zf) goto L_12351ce6;
  /* 12351c76 mov esi, esp */
  ESI = (ESP);
  /* 12351c78 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351c7a call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351c80u);
  /* 12351c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351c83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351c85 call 0x123530b0 */
  push32(0x12351c8au); f_123530b0();
  /* 12351c8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351c8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351c91 je 0x12351ce6 */
  if (C.zf) goto L_12351ce6;
  /* 12351c93 mov esi, esp */
  ESI = (ESP);
  /* 12351c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351c97 push 7 */
  push32((uint32_t)(0x7u));
  /* 12351c99 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351c9fu);
  /* 12351c9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351ca4 call 0x123530b0 */
  push32(0x12351ca9u); f_123530b0();
  /* 12351ca9 mov esi, esp */
  ESI = (ESP);
  /* 12351cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12351cad push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351caf call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351cb5u);
  /* 12351cb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351cba call 0x123530b0 */
  push32(0x12351cbfu); f_123530b0();
  /* 12351cbf mov esi, esp */
  ESI = (ESP);
  /* 12351cc1 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12351cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351cc8 push 0x1237b1ac */
  push32((uint32_t)(0x1237b1acu));
  /* 12351ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 12351ccf push 0x1237b1a8 */
  push32((uint32_t)(0x1237b1a8u));
  /* 12351cd4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351cd6 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351cdcu);
  /* 12351cdc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351ce1 call 0x123530b0 */
  push32(0x12351ce6u); f_123530b0();
L_12351ce6:;
  /* 12351ce6 mov esi, esp */
  ESI = (ESP);
  /* 12351ce8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351cea call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351cf0u);
  /* 12351cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351cf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351cf5 call 0x123530b0 */
  push32(0x12351cfau); f_123530b0();
  /* 12351cfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351cff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351d01 je 0x12351f08 */
  if (C.zf) goto L_12351f08;
  /* 12351d07 mov esi, esp */
  ESI = (ESP);
  /* 12351d09 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351d0b call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351d11u);
  /* 12351d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351d14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351d16 call 0x123530b0 */
  push32(0x12351d1bu); f_123530b0();
  /* 12351d1b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351d22 je 0x12351f08 */
  if (C.zf) goto L_12351f08;
  /* 12351d28 mov esi, esp */
  ESI = (ESP);
  /* 12351d2a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351d2c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351d32u);
  /* 12351d32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351d35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351d37 call 0x123530b0 */
  push32(0x12351d3cu); f_123530b0();
  /* 12351d3c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351d41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351d43 je 0x12351f08 */
  if (C.zf) goto L_12351f08;
  /* 12351d49 mov esi, esp */
  ESI = (ESP);
  /* 12351d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12351d4d push 8 */
  push32((uint32_t)(0x8u));
  /* 12351d4f call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351d55u);
  /* 12351d55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351d58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351d5a call 0x123530b0 */
  push32(0x12351d5fu); f_123530b0();
  /* 12351d5f mov esi, esp */
  ESI = (ESP);
  /* 12351d61 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351d63 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351d65 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351d6bu);
  /* 12351d6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351d6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351d70 call 0x123530b0 */
  push32(0x12351d75u); f_123530b0();
  /* 12351d75 mov esi, esp */
  ESI = (ESP);
  /* 12351d77 push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 12351d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12351d7e push 0x1237b1a0 */
  push32((uint32_t)(0x1237b1a0u));
  /* 12351d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351d85 push 0x1237b19c */
  push32((uint32_t)(0x1237b19cu));
  /* 12351d8a push 8 */
  push32((uint32_t)(0x8u));
  /* 12351d8c call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351d92u);
  /* 12351d92 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351d97 call 0x123530b0 */
  push32(0x12351d9cu); f_123530b0();
  /* 12351d9c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351d9e jne 0x12351f08 */
  if (!C.zf) goto L_12351f08;
  /* 12351da4 mov esi, esp */
  ESI = (ESP);
  /* 12351da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351da8 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351daa call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351db0u);
  /* 12351db0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351db5 call 0x123530b0 */
  push32(0x12351dbau); f_123530b0();
  /* 12351dba mov esi, esp */
  ESI = (ESP);
  /* 12351dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 12351dbe push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12351dc0 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351dc6u);
  /* 12351dc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351dc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351dcb call 0x123530b0 */
  push32(0x12351dd0u); f_123530b0();
  /* 12351dd0 mov esi, esp */
  ESI = (ESP);
  /* 12351dd2 push 0x12380420 */
  push32((uint32_t)(0x12380420u));
  /* 12351dd7 call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x12351dddu);
  /* 12351ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351de0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351de2 call 0x123530b0 */
  push32(0x12351de7u); f_123530b0();
  /* 12351de7 mov esi, esp */
  ESI = (ESP);
  /* 12351de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351deb push 0x12380420 */
  push32((uint32_t)(0x12380420u));
  /* 12351df0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351df2 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 12351df7 push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351dfc push 0x123804c0 */
  push32((uint32_t)(0x123804c0u));
  /* 12351e01 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351e07u);
  /* 12351e07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351e0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351e0c call 0x123530b0 */
  push32(0x12351e11u); f_123530b0();
  /* 12351e11 mov esi, esp */
  ESI = (ESP);
  /* 12351e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e15 push 0x12380418 */
  push32((uint32_t)(0x12380418u));
  /* 12351e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e1c push 0x12380488 */
  push32((uint32_t)(0x12380488u));
  /* 12351e21 push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351e26 push 0x123804a8 */
  push32((uint32_t)(0x123804a8u));
  /* 12351e2b call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351e31u);
  /* 12351e31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351e34 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351e36 call 0x123530b0 */
  push32(0x12351e3bu); f_123530b0();
  /* 12351e3b mov esi, esp */
  ESI = (ESP);
  /* 12351e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e3f push 0x12380480 */
  push32((uint32_t)(0x12380480u));
  /* 12351e44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e46 push 0x123804f8 */
  push32((uint32_t)(0x123804f8u));
  /* 12351e4b push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351e50 push 0x123804b0 */
  push32((uint32_t)(0x123804b0u));
  /* 12351e55 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351e5bu);
  /* 12351e5b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351e5e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351e60 call 0x123530b0 */
  push32(0x12351e65u); f_123530b0();
  /* 12351e65 mov esi, esp */
  ESI = (ESP);
  /* 12351e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e69 push 0x12380430 */
  push32((uint32_t)(0x12380430u));
  /* 12351e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 12351e70 push 0x12380438 */
  push32((uint32_t)(0x12380438u));
  /* 12351e75 push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351e7a push 0x123804f0 */
  push32((uint32_t)(0x123804f0u));
  /* 12351e7f call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351e85u);
  /* 12351e85 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351e88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351e8a call 0x123530b0 */
  push32(0x12351e8fu); f_123530b0();
  /* 12351e8f mov esi, esp */
  ESI = (ESP);
  /* 12351e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351e93 push 0x12380428 */
  push32((uint32_t)(0x12380428u));
  /* 12351e98 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351e9a push 0x12380488 */
  push32((uint32_t)(0x12380488u));
  /* 12351e9f push 0x12380498 */
  push32((uint32_t)(0x12380498u));
  /* 12351ea4 push 0x123804d0 */
  push32((uint32_t)(0x123804d0u));
  /* 12351ea9 call dword ptr [0x123833f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f0))), 0x12351eafu);
  /* 12351eaf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351eb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351eb4 call 0x123530b0 */
  push32(0x12351eb9u); f_123530b0();
  /* 12351eb9 mov esi, esp */
  ESI = (ESP);
  /* 12351ebb push 0 */
  push32((uint32_t)(0x0u));
  /* 12351ebd push 0x123804f0 */
  push32((uint32_t)(0x123804f0u));
  /* 12351ec2 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12351ec8u);
  /* 12351ec8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ecb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351ecd call 0x123530b0 */
  push32(0x12351ed2u); f_123530b0();
  /* 12351ed2 mov esi, esp */
  ESI = (ESP);
  /* 12351ed4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351ed6 push 0x123804d0 */
  push32((uint32_t)(0x123804d0u));
  /* 12351edb call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12351ee1u);
  /* 12351ee1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351ee6 call 0x123530b0 */
  push32(0x12351eebu); f_123530b0();
  /* 12351eeb mov esi, esp */
  ESI = (ESP);
  /* 12351eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12351eef push 0 */
  push32((uint32_t)(0x0u));
  /* 12351ef1 push 0x12380420 */
  push32((uint32_t)(0x12380420u));
  /* 12351ef6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12351ef8 call dword ptr [0x123833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f8))), 0x12351efeu);
  /* 12351efe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f03 call 0x123530b0 */
  push32(0x12351f08u); f_123530b0();
L_12351f08:;
  /* 12351f08 mov esi, esp */
  ESI = (ESP);
  /* 12351f0a push 9 */
  push32((uint32_t)(0x9u));
  /* 12351f0c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351f12u);
  /* 12351f12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f17 call 0x123530b0 */
  push32(0x12351f1cu); f_123530b0();
  /* 12351f1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351f21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351f23 je 0x12351fb6 */
  if (C.zf) goto L_12351fb6;
  /* 12351f29 mov esi, esp */
  ESI = (ESP);
  /* 12351f2b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351f2d call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351f33u);
  /* 12351f33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f38 call 0x123530b0 */
  push32(0x12351f3du); f_123530b0();
  /* 12351f3d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351f44 je 0x12351fb6 */
  if (C.zf) goto L_12351fb6;
  /* 12351f46 mov esi, esp */
  ESI = (ESP);
  /* 12351f48 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351f4a call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351f50u);
  /* 12351f50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f55 call 0x123530b0 */
  push32(0x12351f5au); f_123530b0();
  /* 12351f5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351f5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351f61 je 0x12351fb6 */
  if (C.zf) goto L_12351fb6;
  /* 12351f63 mov esi, esp */
  ESI = (ESP);
  /* 12351f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351f67 push 9 */
  push32((uint32_t)(0x9u));
  /* 12351f69 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351f6fu);
  /* 12351f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f74 call 0x123530b0 */
  push32(0x12351f79u); f_123530b0();
  /* 12351f79 mov esi, esp */
  ESI = (ESP);
  /* 12351f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12351f7d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351f7f call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12351f85u);
  /* 12351f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351f8a call 0x123530b0 */
  push32(0x12351f8fu); f_123530b0();
  /* 12351f8f mov esi, esp */
  ESI = (ESP);
  /* 12351f91 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12351f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12351f98 push 0x1237b194 */
  push32((uint32_t)(0x1237b194u));
  /* 12351f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12351f9f push 0x1237b190 */
  push32((uint32_t)(0x1237b190u));
  /* 12351fa4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12351fa6 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12351facu);
  /* 12351fac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351faf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351fb1 call 0x123530b0 */
  push32(0x12351fb6u); f_123530b0();
L_12351fb6:;
  /* 12351fb6 mov esi, esp */
  ESI = (ESP);
  /* 12351fb8 push 0xa */
  push32((uint32_t)(0xau));
  /* 12351fba call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351fc0u);
  /* 12351fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351fc5 call 0x123530b0 */
  push32(0x12351fcau); f_123530b0();
  /* 12351fca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351fd1 je 0x12352064 */
  if (C.zf) goto L_12352064;
  /* 12351fd7 mov esi, esp */
  ESI = (ESP);
  /* 12351fd9 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12351fdb call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351fe1u);
  /* 12351fe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12351fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12351fe6 call 0x123530b0 */
  push32(0x12351febu); f_123530b0();
  /* 12351feb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12351ff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12351ff2 je 0x12352064 */
  if (C.zf) goto L_12352064;
  /* 12351ff4 mov esi, esp */
  ESI = (ESP);
  /* 12351ff6 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12351ff8 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12351ffeu);
  /* 12351ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352003 call 0x123530b0 */
  push32(0x12352008u); f_123530b0();
  /* 12352008 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235200d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235200f je 0x12352064 */
  if (C.zf) goto L_12352064;
  /* 12352011 mov esi, esp */
  ESI = (ESP);
  /* 12352013 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352015 push 0xa */
  push32((uint32_t)(0xau));
  /* 12352017 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235201du);
  /* 1235201d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352020 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352022 call 0x123530b0 */
  push32(0x12352027u); f_123530b0();
  /* 12352027 mov esi, esp */
  ESI = (ESP);
  /* 12352029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235202b push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235202d call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352033u);
  /* 12352033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352036 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352038 call 0x123530b0 */
  push32(0x1235203du); f_123530b0();
  /* 1235203d mov esi, esp */
  ESI = (ESP);
  /* 1235203f push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12352044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352046 push 0x1237b188 */
  push32((uint32_t)(0x1237b188u));
  /* 1235204b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235204d push 0x1237b180 */
  push32((uint32_t)(0x1237b180u));
  /* 12352052 push 8 */
  push32((uint32_t)(0x8u));
  /* 12352054 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x1235205au);
  /* 1235205a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235205d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235205f call 0x123530b0 */
  push32(0x12352064u); f_123530b0();
L_12352064:;
  /* 12352064 mov esi, esp */
  ESI = (ESP);
  /* 12352066 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12352068 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x1235206eu);
  /* 1235206e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352071 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352073 call 0x123530b0 */
  push32(0x12352078u); f_123530b0();
  /* 12352078 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235207d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235207f je 0x1235217a */
  if (C.zf) goto L_1235217a;
  /* 12352085 mov esi, esp */
  ESI = (ESP);
  /* 12352087 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12352089 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x1235208fu);
  /* 1235208f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352094 call 0x123530b0 */
  push32(0x12352099u); f_123530b0();
  /* 12352099 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235209e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123520a0 je 0x1235217a */
  if (C.zf) goto L_1235217a;
  /* 123520a6 mov esi, esp */
  ESI = (ESP);
  /* 123520a8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123520aa call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123520b0u);
  /* 123520b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123520b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123520b5 call 0x123530b0 */
  push32(0x123520bau); f_123530b0();
  /* 123520ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123520bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123520c1 je 0x1235217a */
  if (C.zf) goto L_1235217a;
  /* 123520c7 mov esi, esp */
  ESI = (ESP);
  /* 123520c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123520cb push 0xb */
  push32((uint32_t)(0xbu));
  /* 123520cd call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123520d3u);
  /* 123520d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123520d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123520d8 call 0x123530b0 */
  push32(0x123520ddu); f_123530b0();
  /* 123520dd mov esi, esp */
  ESI = (ESP);
  /* 123520df push 0 */
  push32((uint32_t)(0x0u));
  /* 123520e1 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123520e3 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123520e9u);
  /* 123520e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123520ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123520ee call 0x123530b0 */
  push32(0x123520f3u); f_123530b0();
  /* 123520f3 mov esi, esp */
  ESI = (ESP);
  /* 123520f5 push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 123520fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123520fc push 0x1237b178 */
  push32((uint32_t)(0x1237b178u));
  /* 12352101 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352103 push 0x1237b170 */
  push32((uint32_t)(0x1237b170u));
  /* 12352108 push 8 */
  push32((uint32_t)(0x8u));
  /* 1235210a call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12352110u);
  /* 12352110 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352115 call 0x123530b0 */
  push32(0x1235211au); f_123530b0();
  /* 1235211a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235211c jne 0x1235217a */
  if (!C.zf) goto L_1235217a;
  /* 1235211e mov esi, esp */
  ESI = (ESP);
  /* 12352120 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352122 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12352124 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235212au);
  /* 1235212a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235212d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235212f call 0x123530b0 */
  push32(0x12352134u); f_123530b0();
  /* 12352134 mov esi, esp */
  ESI = (ESP);
  /* 12352136 push 0x12380458 */
  push32((uint32_t)(0x12380458u));
  /* 1235213b call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x12352141u);
  /* 12352141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352144 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352146 call 0x123530b0 */
  push32(0x1235214bu); f_123530b0();
  /* 1235214b mov esi, esp */
  ESI = (ESP);
  /* 1235214d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235214f push 0x123803f8 */
  push32((uint32_t)(0x123803f8u));
  /* 12352154 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x1235215au);
  /* 1235215a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235215d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235215f call 0x123530b0 */
  push32(0x12352164u); f_123530b0();
  /* 12352164 mov esi, esp */
  ESI = (ESP);
  /* 12352166 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352168 push 4 */
  push32((uint32_t)(0x4u));
  /* 1235216a call dword ptr [0x123833fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833fc))), 0x12352170u);
  /* 12352170 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352173 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352175 call 0x123530b0 */
  push32(0x1235217au); f_123530b0();
L_1235217a:;
  /* 1235217a mov esi, esp */
  ESI = (ESP);
  /* 1235217c push 0xc */
  push32((uint32_t)(0xcu));
  /* 1235217e call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352184u);
  /* 12352184 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352189 call 0x123530b0 */
  push32(0x1235218eu); f_123530b0();
  /* 1235218e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352195 je 0x12352228 */
  if (C.zf) goto L_12352228;
  /* 1235219b mov esi, esp */
  ESI = (ESP);
  /* 1235219d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235219f call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123521a5u);
  /* 123521a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123521a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123521aa call 0x123530b0 */
  push32(0x123521afu); f_123530b0();
  /* 123521af and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123521b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123521b6 je 0x12352228 */
  if (C.zf) goto L_12352228;
  /* 123521b8 mov esi, esp */
  ESI = (ESP);
  /* 123521ba push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123521bc call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123521c2u);
  /* 123521c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123521c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123521c7 call 0x123530b0 */
  push32(0x123521ccu); f_123530b0();
  /* 123521cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123521d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123521d3 je 0x12352228 */
  if (C.zf) goto L_12352228;
  /* 123521d5 mov esi, esp */
  ESI = (ESP);
  /* 123521d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123521d9 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123521db call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123521e1u);
  /* 123521e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123521e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123521e6 call 0x123530b0 */
  push32(0x123521ebu); f_123530b0();
  /* 123521eb mov esi, esp */
  ESI = (ESP);
  /* 123521ed push 0 */
  push32((uint32_t)(0x0u));
  /* 123521ef push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123521f1 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123521f7u);
  /* 123521f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123521fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123521fc call 0x123530b0 */
  push32(0x12352201u); f_123530b0();
  /* 12352201 mov esi, esp */
  ESI = (ESP);
  /* 12352203 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12352208 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235220a push 0x1237b168 */
  push32((uint32_t)(0x1237b168u));
  /* 1235220f push 0 */
  push32((uint32_t)(0x0u));
  /* 12352211 push 0x1237b160 */
  push32((uint32_t)(0x1237b160u));
  /* 12352216 push 8 */
  push32((uint32_t)(0x8u));
  /* 12352218 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x1235221eu);
  /* 1235221e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352223 call 0x123530b0 */
  push32(0x12352228u); f_123530b0();
L_12352228:;
  /* 12352228 mov esi, esp */
  ESI = (ESP);
  /* 1235222a push 0xd */
  push32((uint32_t)(0xdu));
  /* 1235222c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352232u);
  /* 12352232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352237 call 0x123530b0 */
  push32(0x1235223cu); f_123530b0();
  /* 1235223c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352241 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352243 je 0x123522d6 */
  if (C.zf) goto L_123522d6;
  /* 12352249 mov esi, esp */
  ESI = (ESP);
  /* 1235224b push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235224d call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352253u);
  /* 12352253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352256 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352258 call 0x123530b0 */
  push32(0x1235225du); f_123530b0();
  /* 1235225d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352262 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352264 je 0x123522d6 */
  if (C.zf) goto L_123522d6;
  /* 12352266 mov esi, esp */
  ESI = (ESP);
  /* 12352268 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235226a call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352270u);
  /* 12352270 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352273 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352275 call 0x123530b0 */
  push32(0x1235227au); f_123530b0();
  /* 1235227a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235227f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352281 je 0x123522d6 */
  if (C.zf) goto L_123522d6;
  /* 12352283 mov esi, esp */
  ESI = (ESP);
  /* 12352285 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352287 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12352289 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235228fu);
  /* 1235228f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352294 call 0x123530b0 */
  push32(0x12352299u); f_123530b0();
  /* 12352299 mov esi, esp */
  ESI = (ESP);
  /* 1235229b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235229d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235229f call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123522a5u);
  /* 123522a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123522a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123522aa call 0x123530b0 */
  push32(0x123522afu); f_123530b0();
  /* 123522af mov esi, esp */
  ESI = (ESP);
  /* 123522b1 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 123522b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123522b8 push 0x1237b158 */
  push32((uint32_t)(0x1237b158u));
  /* 123522bd push 0 */
  push32((uint32_t)(0x0u));
  /* 123522bf push 0x1237b150 */
  push32((uint32_t)(0x1237b150u));
  /* 123522c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 123522c6 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x123522ccu);
  /* 123522cc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123522cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123522d1 call 0x123530b0 */
  push32(0x123522d6u); f_123530b0();
L_123522d6:;
  /* 123522d6 mov esi, esp */
  ESI = (ESP);
  /* 123522d8 push 0xe */
  push32((uint32_t)(0xeu));
  /* 123522da call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123522e0u);
  /* 123522e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123522e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123522e5 call 0x123530b0 */
  push32(0x123522eau); f_123530b0();
  /* 123522ea and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123522ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123522f1 je 0x1235241f */
  if (C.zf) goto L_1235241f;
  /* 123522f7 mov esi, esp */
  ESI = (ESP);
  /* 123522f9 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123522fb call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352301u);
  /* 12352301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352304 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352306 call 0x123530b0 */
  push32(0x1235230bu); f_123530b0();
  /* 1235230b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352310 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352312 je 0x1235241f */
  if (C.zf) goto L_1235241f;
  /* 12352318 mov esi, esp */
  ESI = (ESP);
  /* 1235231a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235231c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352322u);
  /* 12352322 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352327 call 0x123530b0 */
  push32(0x1235232cu); f_123530b0();
  /* 1235232c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352333 je 0x1235241f */
  if (C.zf) goto L_1235241f;
  /* 12352339 mov esi, esp */
  ESI = (ESP);
  /* 1235233b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235233d push 0xe */
  push32((uint32_t)(0xeu));
  /* 1235233f call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352345u);
  /* 12352345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352348 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235234a call 0x123530b0 */
  push32(0x1235234fu); f_123530b0();
  /* 1235234f mov esi, esp */
  ESI = (ESP);
  /* 12352351 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352353 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12352355 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235235bu);
  /* 1235235b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235235e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352360 call 0x123530b0 */
  push32(0x12352365u); f_123530b0();
  /* 12352365 mov esi, esp */
  ESI = (ESP);
  /* 12352367 push 0x1237b1f0 */
  push32((uint32_t)(0x1237b1f0u));
  /* 1235236c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235236e push 0x1237b148 */
  push32((uint32_t)(0x1237b148u));
  /* 12352373 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352375 push 0x1237b140 */
  push32((uint32_t)(0x1237b140u));
  /* 1235237a push 8 */
  push32((uint32_t)(0x8u));
  /* 1235237c call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12352382u);
  /* 12352382 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352385 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352387 call 0x123530b0 */
  push32(0x1235238cu); f_123530b0();
  /* 1235238c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235238e jne 0x1235241f */
  if (!C.zf) goto L_1235241f;
  /* 12352394 mov esi, esp */
  ESI = (ESP);
  /* 12352396 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352398 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235239a call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123523a0u);
  /* 123523a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123523a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123523a5 call 0x123530b0 */
  push32(0x123523aau); f_123530b0();
  /* 123523aa mov esi, esp */
  ESI = (ESP);
  /* 123523ac push 0x12380460 */
  push32((uint32_t)(0x12380460u));
  /* 123523b1 call dword ptr [0x123833ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833ec))), 0x123523b7u);
  /* 123523b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123523ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123523bc call 0x123530b0 */
  push32(0x123523c1u); f_123530b0();
  /* 123523c1 mov esi, esp */
  ESI = (ESP);
  /* 123523c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123523c5 push 0x123803f0 */
  push32((uint32_t)(0x123803f0u));
  /* 123523ca call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123523d0u);
  /* 123523d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123523d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123523d5 call 0x123530b0 */
  push32(0x123523dau); f_123530b0();
  /* 123523da mov esi, esp */
  ESI = (ESP);
  /* 123523dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123523de push 4 */
  push32((uint32_t)(0x4u));
  /* 123523e0 call dword ptr [0x123833fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833fc))), 0x123523e6u);
  /* 123523e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123523e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123523eb call 0x123530b0 */
  push32(0x123523f0u); f_123530b0();
  /* 123523f0 mov esi, esp */
  ESI = (ESP);
  /* 123523f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123523f4 push 0x12380408 */
  push32((uint32_t)(0x12380408u));
  /* 123523f9 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123523ffu);
  /* 123523ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352402 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352404 call 0x123530b0 */
  push32(0x12352409u); f_123530b0();
  /* 12352409 mov esi, esp */
  ESI = (ESP);
  /* 1235240b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235240d push 4 */
  push32((uint32_t)(0x4u));
  /* 1235240f call dword ptr [0x123833fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833fc))), 0x12352415u);
  /* 12352415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235241a call 0x123530b0 */
  push32(0x1235241fu); f_123530b0();
L_1235241f:;
  /* 1235241f mov esi, esp */
  ESI = (ESP);
  /* 12352421 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12352423 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352429u);
  /* 12352429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235242c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235242e call 0x123530b0 */
  push32(0x12352433u); f_123530b0();
  /* 12352433 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352438 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235243a je 0x123524cd */
  if (C.zf) goto L_123524cd;
  /* 12352440 mov esi, esp */
  ESI = (ESP);
  /* 12352442 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12352444 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x1235244au);
  /* 1235244a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235244d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235244f call 0x123530b0 */
  push32(0x12352454u); f_123530b0();
  /* 12352454 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352459 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235245b je 0x123524cd */
  if (C.zf) goto L_123524cd;
  /* 1235245d mov esi, esp */
  ESI = (ESP);
  /* 1235245f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12352461 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352467u);
  /* 12352467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235246a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235246c call 0x123530b0 */
  push32(0x12352471u); f_123530b0();
  /* 12352471 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352476 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352478 je 0x123524cd */
  if (C.zf) goto L_123524cd;
  /* 1235247a mov esi, esp */
  ESI = (ESP);
  /* 1235247c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235247e push 0xf */
  push32((uint32_t)(0xfu));
  /* 12352480 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352486u);
  /* 12352486 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352489 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235248b call 0x123530b0 */
  push32(0x12352490u); f_123530b0();
  /* 12352490 mov esi, esp */
  ESI = (ESP);
  /* 12352492 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352494 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12352496 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235249cu);
  /* 1235249c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235249f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123524a1 call 0x123530b0 */
  push32(0x123524a6u); f_123530b0();
  /* 123524a6 mov esi, esp */
  ESI = (ESP);
  /* 123524a8 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 123524ad push 0 */
  push32((uint32_t)(0x0u));
  /* 123524af push 0x1237b138 */
  push32((uint32_t)(0x1237b138u));
  /* 123524b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123524b6 push 0x1237b130 */
  push32((uint32_t)(0x1237b130u));
  /* 123524bb push 8 */
  push32((uint32_t)(0x8u));
  /* 123524bd call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x123524c3u);
  /* 123524c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123524c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123524c8 call 0x123530b0 */
  push32(0x123524cdu); f_123530b0();
L_123524cd:;
  /* 123524cd mov esi, esp */
  ESI = (ESP);
  /* 123524cf push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123524d1 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123524d7u);
  /* 123524d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123524da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123524dc call 0x123530b0 */
  push32(0x123524e1u); f_123530b0();
  /* 123524e1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123524e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123524e8 je 0x1235257b */
  if (C.zf) goto L_1235257b;
  /* 123524ee mov esi, esp */
  ESI = (ESP);
  /* 123524f0 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123524f2 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123524f8u);
  /* 123524f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123524fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123524fd call 0x123530b0 */
  push32(0x12352502u); f_123530b0();
  /* 12352502 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352507 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352509 je 0x1235257b */
  if (C.zf) goto L_1235257b;
  /* 1235250b mov esi, esp */
  ESI = (ESP);
  /* 1235250d push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235250f call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352515u);
  /* 12352515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235251a call 0x123530b0 */
  push32(0x1235251fu); f_123530b0();
  /* 1235251f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352526 je 0x1235257b */
  if (C.zf) goto L_1235257b;
  /* 12352528 mov esi, esp */
  ESI = (ESP);
  /* 1235252a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235252c push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1235252e call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352534u);
  /* 12352534 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352539 call 0x123530b0 */
  push32(0x1235253eu); f_123530b0();
  /* 1235253e mov esi, esp */
  ESI = (ESP);
  /* 12352540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352542 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12352544 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235254au);
  /* 1235254a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235254d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235254f call 0x123530b0 */
  push32(0x12352554u); f_123530b0();
  /* 12352554 mov esi, esp */
  ESI = (ESP);
  /* 12352556 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 1235255b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235255d push 0x1237b128 */
  push32((uint32_t)(0x1237b128u));
  /* 12352562 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352564 push 0x1237b120 */
  push32((uint32_t)(0x1237b120u));
  /* 12352569 push 8 */
  push32((uint32_t)(0x8u));
  /* 1235256b call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x12352571u);
  /* 12352571 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352574 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352576 call 0x123530b0 */
  push32(0x1235257bu); f_123530b0();
L_1235257b:;
  /* 1235257b mov esi, esp */
  ESI = (ESP);
  /* 1235257d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235257f call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352585u);
  /* 12352585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235258a call 0x123530b0 */
  push32(0x1235258fu); f_123530b0();
  /* 1235258f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352594 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352596 je 0x12352629 */
  if (C.zf) goto L_12352629;
  /* 1235259c mov esi, esp */
  ESI = (ESP);
  /* 1235259e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 123525a0 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123525a6u);
  /* 123525a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123525a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123525ab call 0x123530b0 */
  push32(0x123525b0u); f_123530b0();
  /* 123525b0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123525b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123525b7 je 0x12352629 */
  if (C.zf) goto L_12352629;
  /* 123525b9 mov esi, esp */
  ESI = (ESP);
  /* 123525bb push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123525bd call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123525c3u);
  /* 123525c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123525c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123525c8 call 0x123530b0 */
  push32(0x123525cdu); f_123530b0();
  /* 123525cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123525d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123525d4 je 0x12352629 */
  if (C.zf) goto L_12352629;
  /* 123525d6 mov esi, esp */
  ESI = (ESP);
  /* 123525d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123525da push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123525dc call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123525e2u);
  /* 123525e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123525e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123525e7 call 0x123530b0 */
  push32(0x123525ecu); f_123530b0();
  /* 123525ec mov esi, esp */
  ESI = (ESP);
  /* 123525ee push 0 */
  push32((uint32_t)(0x0u));
  /* 123525f0 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123525f2 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123525f8u);
  /* 123525f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123525fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123525fd call 0x123530b0 */
  push32(0x12352602u); f_123530b0();
  /* 12352602 mov esi, esp */
  ESI = (ESP);
  /* 12352604 push 0x1237b204 */
  push32((uint32_t)(0x1237b204u));
  /* 12352609 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235260b push 0x1237b118 */
  push32((uint32_t)(0x1237b118u));
  /* 12352610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352612 push 0x1237b110 */
  push32((uint32_t)(0x1237b110u));
  /* 12352617 push 8 */
  push32((uint32_t)(0x8u));
  /* 12352619 call dword ptr [0x123833e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e8))), 0x1235261fu);
  /* 1235261f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352622 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352624 call 0x123530b0 */
  push32(0x12352629u); f_123530b0();
L_12352629:;
  /* 12352629 mov esi, esp */
  ESI = (ESP);
  /* 1235262b push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1235262d call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352633u);
  /* 12352633 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352636 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352638 call 0x123530b0 */
  push32(0x1235263du); f_123530b0();
  /* 1235263d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352642 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352644 je 0x123526f7 */
  if (C.zf) goto L_123526f7;
  /* 1235264a mov esi, esp */
  ESI = (ESP);
  /* 1235264c push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1235264e call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352654u);
  /* 12352654 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352657 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352659 call 0x123530b0 */
  push32(0x1235265eu); f_123530b0();
  /* 1235265e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352663 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352665 je 0x123526f7 */
  if (C.zf) goto L_123526f7;
  /* 1235266b mov esi, esp */
  ESI = (ESP);
  /* 1235266d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1235266f call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352675u);
  /* 12352675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352678 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235267a call 0x123530b0 */
  push32(0x1235267fu); f_123530b0();
  /* 1235267f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352684 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352686 jne 0x123526f7 */
  if (!C.zf) goto L_123526f7;
  /* 12352688 mov esi, esp */
  ESI = (ESP);
  /* 1235268a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1235268c call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352692u);
  /* 12352692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352695 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352697 call 0x123530b0 */
  push32(0x1235269cu); f_123530b0();
  /* 1235269c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123526a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123526a3 je 0x123526f7 */
  if (C.zf) goto L_123526f7;
  /* 123526a5 mov esi, esp */
  ESI = (ESP);
  /* 123526a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123526a9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123526ab call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123526b1u);
  /* 123526b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123526b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123526b6 call 0x123530b0 */
  push32(0x123526bbu); f_123530b0();
  /* 123526bb mov esi, esp */
  ESI = (ESP);
  /* 123526bd push 0 */
  push32((uint32_t)(0x0u));
  /* 123526bf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 123526c1 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123526c7u);
  /* 123526c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123526ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123526cc call 0x123530b0 */
  push32(0x123526d1u); f_123530b0();
  /* 123526d1 mov esi, esp */
  ESI = (ESP);
  /* 123526d3 push 0x1237b108 */
  push32((uint32_t)(0x1237b108u));
  /* 123526d8 call dword ptr [0x12383400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383400))), 0x123526deu);
  /* 123526de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123526e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123526e3 call 0x123530b0 */
  push32(0x123526e8u); f_123530b0();
  /* 123526e8 mov esi, esp */
  ESI = (ESP);
  /* 123526ea call dword ptr [0x12383404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383404))), 0x123526f0u);
  /* 123526f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123526f2 call 0x123530b0 */
  push32(0x123526f7u); f_123530b0();
L_123526f7:;
  /* 123526f7 mov esi, esp */
  ESI = (ESP);
  /* 123526f9 call dword ptr [0x12383408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383408))), 0x123526ffu);
  /* 123526ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352701 call 0x123530b0 */
  push32(0x12352706u); f_123530b0();
  /* 12352706 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235270b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235270d je 0x12352a6a */
  if (C.zf) goto L_12352a6a;
  /* 12352713 mov esi, esp */
  ESI = (ESP);
  /* 12352715 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352717 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12352719 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x1235271fu);
  /* 1235271f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352724 call 0x123530b0 */
  push32(0x12352729u); f_123530b0();
  /* 12352729 push 0x123803e8 */
  push32((uint32_t)(0x123803e8u));
  /* 1235272e call 0x12351005 */
  push32(0x12352733u); f_12351005();
  /* 12352733 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352738 jle 0x12352767 */
  if ((C.zf||C.sf!=C.of)) goto L_12352767;
  /* 1235273a mov esi, esp */
  ESI = (ESP);
  /* 1235273c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235273e push 0x123803e8 */
  push32((uint32_t)(0x123803e8u));
  /* 12352743 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352749u);
  /* 12352749 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235274c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235274e call 0x123530b0 */
  push32(0x12352753u); f_123530b0();
  /* 12352753 mov esi, esp */
  ESI = (ESP);
  /* 12352755 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352757 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x1235275du);
  /* 1235275d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352762 call 0x123530b0 */
  push32(0x12352767u); f_123530b0();
L_12352767:;
  /* 12352767 mov esi, esp */
  ESI = (ESP);
  /* 12352769 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1235276b call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352771u);
  /* 12352771 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352774 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352776 call 0x123530b0 */
  push32(0x1235277bu); f_123530b0();
  /* 1235277b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12352780 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352782 jne 0x123527db */
  if (!C.zf) goto L_123527db;
  /* 12352784 mov esi, esp */
  ESI = (ESP);
  /* 12352786 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352788 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1235278a call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352790u);
  /* 12352790 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352795 call 0x123530b0 */
  push32(0x1235279au); f_123530b0();
  /* 1235279a mov esi, esp */
  ESI = (ESP);
  /* 1235279c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235279e call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x123527a4u);
  /* 123527a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123527a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123527a9 call 0x123530b0 */
  push32(0x123527aeu); f_123530b0();
  /* 123527ae mov esi, esp */
  ESI = (ESP);
  /* 123527b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123527b2 push 0x123804a0 */
  push32((uint32_t)(0x123804a0u));
  /* 123527b7 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123527bdu);
  /* 123527bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123527c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123527c2 call 0x123530b0 */
  push32(0x123527c7u); f_123530b0();
  /* 123527c7 mov esi, esp */
  ESI = (ESP);
  /* 123527c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123527cb call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x123527d1u);
  /* 123527d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123527d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123527d6 call 0x123530b0 */
  push32(0x123527dbu); f_123530b0();
L_123527db:;
  /* 123527db mov esi, esp */
  ESI = (ESP);
  /* 123527dd push 0x35 */
  push32((uint32_t)(0x35u));
  /* 123527df call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x123527e5u);
  /* 123527e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123527e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123527ea call 0x123530b0 */
  push32(0x123527efu); f_123530b0();
  /* 123527ef and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123527f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123527f6 jne 0x12352894 */
  if (!C.zf) goto L_12352894;
  /* 123527fc mov esi, esp */
  ESI = (ESP);
  /* 123527fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12352800 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12352802 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352808u);
  /* 12352808 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235280b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235280d call 0x123530b0 */
  push32(0x12352812u); f_123530b0();
  /* 12352812 mov esi, esp */
  ESI = (ESP);
  /* 12352814 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352816 call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x1235281cu);
  /* 1235281c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235281f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352821 call 0x123530b0 */
  push32(0x12352826u); f_123530b0();
  /* 12352826 mov esi, esp */
  ESI = (ESP);
  /* 12352828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235282a push 0x123804e0 */
  push32((uint32_t)(0x123804e0u));
  /* 1235282f call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352835u);
  /* 12352835 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235283a call 0x123530b0 */
  push32(0x1235283fu); f_123530b0();
  /* 1235283f mov esi, esp */
  ESI = (ESP);
  /* 12352841 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352843 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x12352849u);
  /* 12352849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235284c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235284e call 0x123530b0 */
  push32(0x12352853u); f_123530b0();
  /* 12352853 mov esi, esp */
  ESI = (ESP);
  /* 12352855 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352857 call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x1235285du);
  /* 1235285d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352860 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352862 call 0x123530b0 */
  push32(0x12352867u); f_123530b0();
  /* 12352867 mov esi, esp */
  ESI = (ESP);
  /* 12352869 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235286b push 0x123804e8 */
  push32((uint32_t)(0x123804e8u));
  /* 12352870 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352876u);
  /* 12352876 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352879 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235287b call 0x123530b0 */
  push32(0x12352880u); f_123530b0();
  /* 12352880 mov esi, esp */
  ESI = (ESP);
  /* 12352882 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352884 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x1235288au);
  /* 1235288a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235288d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235288f call 0x123530b0 */
  push32(0x12352894u); f_123530b0();
L_12352894:;
  /* 12352894 mov esi, esp */
  ESI = (ESP);
  /* 12352896 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12352898 call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x1235289eu);
  /* 1235289e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123528a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123528a3 call 0x123530b0 */
  push32(0x123528a8u); f_123530b0();
  /* 123528a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123528ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123528af jne 0x12352966 */
  if (!C.zf) goto L_12352966;
  /* 123528b5 mov esi, esp */
  ESI = (ESP);
  /* 123528b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123528b9 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 123528bb call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x123528c1u);
  /* 123528c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123528c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123528c6 call 0x123530b0 */
  push32(0x123528cbu); f_123530b0();
  /* 123528cb mov esi, esp */
  ESI = (ESP);
  /* 123528cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123528cf call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x123528d5u);
  /* 123528d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123528d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123528da call 0x123530b0 */
  push32(0x123528dfu); f_123530b0();
  /* 123528df mov esi, esp */
  ESI = (ESP);
  /* 123528e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123528e3 push 0x123804c8 */
  push32((uint32_t)(0x123804c8u));
  /* 123528e8 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123528eeu);
  /* 123528ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123528f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123528f3 call 0x123530b0 */
  push32(0x123528f8u); f_123530b0();
  /* 123528f8 mov esi, esp */
  ESI = (ESP);
  /* 123528fa push 1 */
  push32((uint32_t)(0x1u));
  /* 123528fc push 0x123804d8 */
  push32((uint32_t)(0x123804d8u));
  /* 12352901 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352907u);
  /* 12352907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235290a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235290c call 0x123530b0 */
  push32(0x12352911u); f_123530b0();
  /* 12352911 mov esi, esp */
  ESI = (ESP);
  /* 12352913 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352915 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x1235291bu);
  /* 1235291b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235291e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352920 call 0x123530b0 */
  push32(0x12352925u); f_123530b0();
  /* 12352925 mov esi, esp */
  ESI = (ESP);
  /* 12352927 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352929 call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x1235292fu);
  /* 1235292f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352934 call 0x123530b0 */
  push32(0x12352939u); f_123530b0();
  /* 12352939 mov esi, esp */
  ESI = (ESP);
  /* 1235293b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235293d push 0x123804b8 */
  push32((uint32_t)(0x123804b8u));
  /* 12352942 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352948u);
  /* 12352948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235294b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235294d call 0x123530b0 */
  push32(0x12352952u); f_123530b0();
  /* 12352952 mov esi, esp */
  ESI = (ESP);
  /* 12352954 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352956 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x1235295cu);
  /* 1235295c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235295f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352961 call 0x123530b0 */
  push32(0x12352966u); f_123530b0();
L_12352966:;
  /* 12352966 mov esi, esp */
  ESI = (ESP);
  /* 12352968 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1235296a call dword ptr [0x123833e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e0))), 0x12352970u);
  /* 12352970 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352973 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352975 call 0x123530b0 */
  push32(0x1235297au); f_123530b0();
  /* 1235297a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235297f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12352981 jne 0x12352a6a */
  if (!C.zf) goto L_12352a6a;
  /* 12352987 mov esi, esp */
  ESI = (ESP);
  /* 12352989 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235298b push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1235298d call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352993u);
  /* 12352993 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352996 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352998 call 0x123530b0 */
  push32(0x1235299du); f_123530b0();
  /* 1235299d mov esi, esp */
  ESI = (ESP);
  /* 1235299f push 0 */
  push32((uint32_t)(0x0u));
  /* 123529a1 call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x123529a7u);
  /* 123529a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123529aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123529ac call 0x123530b0 */
  push32(0x123529b1u); f_123530b0();
  /* 123529b1 mov esi, esp */
  ESI = (ESP);
  /* 123529b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123529b5 push 0x123804c0 */
  push32((uint32_t)(0x123804c0u));
  /* 123529ba call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123529c0u);
  /* 123529c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123529c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123529c5 call 0x123530b0 */
  push32(0x123529cau); f_123530b0();
  /* 123529ca mov esi, esp */
  ESI = (ESP);
  /* 123529cc push 1 */
  push32((uint32_t)(0x1u));
  /* 123529ce push 0x123804a8 */
  push32((uint32_t)(0x123804a8u));
  /* 123529d3 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123529d9u);
  /* 123529d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123529dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123529de call 0x123530b0 */
  push32(0x123529e3u); f_123530b0();
  /* 123529e3 mov esi, esp */
  ESI = (ESP);
  /* 123529e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123529e7 push 0x123804b0 */
  push32((uint32_t)(0x123804b0u));
  /* 123529ec call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x123529f2u);
  /* 123529f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123529f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123529f7 call 0x123530b0 */
  push32(0x123529fcu); f_123530b0();
  /* 123529fc mov esi, esp */
  ESI = (ESP);
  /* 123529fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12352a00 call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x12352a06u);
  /* 12352a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a0b call 0x123530b0 */
  push32(0x12352a10u); f_123530b0();
  /* 12352a10 mov esi, esp */
  ESI = (ESP);
  /* 12352a12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352a14 call dword ptr [0x12383410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383410))), 0x12352a1au);
  /* 12352a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a1f call 0x123530b0 */
  push32(0x12352a24u); f_123530b0();
  /* 12352a24 mov esi, esp */
  ESI = (ESP);
  /* 12352a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12352a28 push 0x123804f0 */
  push32((uint32_t)(0x123804f0u));
  /* 12352a2d call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352a33u);
  /* 12352a33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a38 call 0x123530b0 */
  push32(0x12352a3du); f_123530b0();
  /* 12352a3d mov esi, esp */
  ESI = (ESP);
  /* 12352a3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12352a41 push 0x123804d0 */
  push32((uint32_t)(0x123804d0u));
  /* 12352a46 call dword ptr [0x123833f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833f4))), 0x12352a4cu);
  /* 12352a4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a51 call 0x123530b0 */
  push32(0x12352a56u); f_123530b0();
  /* 12352a56 mov esi, esp */
  ESI = (ESP);
  /* 12352a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 12352a5a call dword ptr [0x1238340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238340c))), 0x12352a60u);
  /* 12352a60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a65 call 0x123530b0 */
  push32(0x12352a6au); f_123530b0();
L_12352a6a:;
  /* 12352a6a mov esi, esp */
  ESI = (ESP);
  /* 12352a6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12352a6e push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12352a70 call dword ptr [0x123833e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833e4))), 0x12352a76u);
  /* 12352a76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a7b call 0x123530b0 */
  push32(0x12352a80u); f_123530b0();
  /* 12352a80 pop edi */
  EDI = (pop32());
  /* 12352a81 pop esi */
  ESI = (pop32());
  /* 12352a82 pop ebx */
  EBX = (pop32());
  /* 12352a83 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352a86 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352a88 call 0x123530b0 */
  push32(0x12352a8du); f_123530b0();
  /* 12352a8d mov esp, ebp */
  ESP = (EBP);
  /* 12352a8f pop ebp */
  EBP = (pop32());
  /* 12352a90 ret  */
  ESPCHK(0x123515c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x12352fd0 (63 bytes, 26 insns) */
void f_12352fd0(void) {
  FTRACE(0x12352fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12352fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12352fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12352fd3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12352fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12352fd7 push esi */
  push32((uint32_t)(ESI));
  /* 12352fd8 push edi */
  push32((uint32_t)(EDI));
  /* 12352fd9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 12352fdc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12352fe1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12352fe6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12352fe8 mov esi, esp */
  ESI = (ESP);
  /* 12352fea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12352fed push eax */
  push32((uint32_t)(EAX));
  /* 12352fee call dword ptr [0x123833d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123833d8))), 0x12352ff4u);
  /* 12352ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12352ff7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12352ff9 call 0x123530b0 */
  push32(0x12352ffeu); f_123530b0();
  /* 12352ffe pop edi */
  EDI = (pop32());
  /* 12352fff pop esi */
  ESI = (pop32());
  /* 12353000 pop ebx */
  EBX = (pop32());
  /* 12353001 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353004 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353006 call 0x123530b0 */
  push32(0x1235300bu); f_123530b0();
  /* 1235300b mov esp, ebp */
  ESP = (EBP);
  /* 1235300d pop ebp */
  EBP = (pop32());
  /* 1235300e ret  */
  ESPCHK(0x12352fd0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x123530b0 (56 bytes, 28 insns) */
void f_123530b0(void) {
  FTRACE(0x123530b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123530b0 jne 0x123530b3 */
  if (!C.zf) goto L_123530b3;
  /* 123530b2 ret  */
  ESPCHK(0x123530b0u, _esp0);
  ESP += 4; return;
L_123530b3:;
  /* 123530b3 push ebp */
  push32((uint32_t)(EBP));
  /* 123530b4 mov ebp, esp */
  EBP = (ESP);
  /* 123530b6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123530b9 push eax */
  push32((uint32_t)(EAX));
  /* 123530ba push edx */
  push32((uint32_t)(EDX));
  /* 123530bb push ebx */
  push32((uint32_t)(EBX));
  /* 123530bc push esi */
  push32((uint32_t)(ESI));
  /* 123530bd push edi */
  push32((uint32_t)(EDI));
  /* 123530be push 0x1237b21c */
  push32((uint32_t)(0x1237b21cu));
  /* 123530c3 push 0x1237b218 */
  push32((uint32_t)(0x1237b218u));
  /* 123530c8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 123530ca push 0x1237b208 */
  push32((uint32_t)(0x1237b208u));
  /* 123530cf push 1 */
  push32((uint32_t)(0x1u));
  /* 123530d1 call 0x12353480 */
  push32(0x123530d6u); f_12353480();
  /* 123530d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123530d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123530dc jne 0x123530df */
  if (!C.zf) goto L_123530df;
  /* 123530de int3  */
  x86_unimpl("int3 @ 0x123530de");
L_123530df:;
  /* 123530df pop edi */
  EDI = (pop32());
  /* 123530e0 pop esi */
  ESI = (pop32());
  /* 123530e1 pop ebx */
  EBX = (pop32());
  /* 123530e2 pop edx */
  EDX = (pop32());
  /* 123530e3 pop eax */
  EAX = (pop32());
  /* 123530e4 mov esp, ebp */
  ESP = (EBP);
  /* 123530e6 pop ebp */
  EBP = (pop32());
  /* 123530e7 ret  */
  ESPCHK(0x123530b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100030f0 @ 0x123530f0 (313 bytes, 78 insns) */
void f_123530f0(void) {
  FTRACE(0x123530f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123530f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123530f1 mov ebp, esp */
  EBP = (ESP);
  /* 123530f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123530f7 jne 0x123531b7 */
  if (!C.zf) goto L_123531b7;
  /* 123530fd call dword ptr [0x123832b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b0))), 0x12353103u);
  /* 12353103 mov dword ptr [0x1238055c], eax */
  w32((uint32_t)(0x1238055c), (EAX));
  /* 12353108 push 1 */
  push32((uint32_t)(0x1u));
  /* 1235310a call 0x12356bb0 */
  push32(0x1235310fu); f_12356bb0();
  /* 1235310f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353114 jne 0x1235311d */
  if (!C.zf) goto L_1235311d;
  /* 12353116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12353118 jmp 0x12353225 */
  goto L_12353225;
L_1235311d:;
  /* 1235311d mov eax, dword ptr [0x1238055c] */
  EAX = (r32((uint32_t)(0x1238055c)));
  /* 12353122 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12353125 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235312a mov dword ptr [0x12380568], eax */
  w32((uint32_t)(0x12380568), (EAX));
  /* 1235312f mov ecx, dword ptr [0x1238055c] */
  ECX = (r32((uint32_t)(0x1238055c)));
  /* 12353135 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235313b mov dword ptr [0x12380564], ecx */
  w32((uint32_t)(0x12380564), (ECX));
  /* 12353141 mov edx, dword ptr [0x12380564] */
  EDX = (r32((uint32_t)(0x12380564)));
  /* 12353147 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1235314a add edx, dword ptr [0x12380568] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12380568))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12353150 mov dword ptr [0x12380560], edx */
  w32((uint32_t)(0x12380560), (EDX));
  /* 12353156 mov eax, dword ptr [0x1238055c] */
  EAX = (r32((uint32_t)(0x1238055c)));
  /* 1235315b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1235315e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12353163 mov dword ptr [0x1238055c], eax */
  w32((uint32_t)(0x1238055c), (EAX));
  /* 12353168 call 0x12353d20 */
  push32(0x1235316du); f_12353d20();
  /* 1235316d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235316f jne 0x1235317d */
  if (!C.zf) goto L_1235317d;
  /* 12353171 call 0x12356c00 */
  push32(0x12353176u); f_12356c00();
  /* 12353176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12353178 jmp 0x12353225 */
  goto L_12353225;
L_1235317d:;
  /* 1235317d call dword ptr [0x123832ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832ac))), 0x12353183u);
  /* 12353183 mov dword ptr [0x123820ac], eax */
  w32((uint32_t)(0x123820ac), (EAX));
  /* 12353188 call 0x12356990 */
  push32(0x1235318du); f_12356990();
  /* 1235318d mov dword ptr [0x12380544], eax */
  w32((uint32_t)(0x12380544), (EAX));
  /* 12353192 call 0x12353fd0 */
  push32(0x12353197u); f_12353fd0();
  /* 12353197 call 0x12356480 */
  push32(0x1235319cu); f_12356480();
  /* 1235319c call 0x12356330 */
  push32(0x123531a1u); f_12356330();
  /* 123531a1 call 0x12353b20 */
  push32(0x123531a6u); f_12353b20();
  /* 123531a6 mov ecx, dword ptr [0x12380540] */
  ECX = (r32((uint32_t)(0x12380540)));
  /* 123531ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123531af mov dword ptr [0x12380540], ecx */
  w32((uint32_t)(0x12380540), (ECX));
  /* 123531b5 jmp 0x12353220 */
  goto L_12353220;
L_123531b7:;
  /* 123531b7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123531bb jne 0x12353210 */
  if (!C.zf) goto L_12353210;
  /* 123531bd cmp dword ptr [0x12380540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123531c4 jle 0x1235320a */
  if ((C.zf||C.sf!=C.of)) goto L_1235320a;
  /* 123531c6 mov edx, dword ptr [0x12380540] */
  EDX = (r32((uint32_t)(0x12380540)));
  /* 123531cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123531cf mov dword ptr [0x12380540], edx */
  w32((uint32_t)(0x12380540), (EDX));
  /* 123531d5 cmp dword ptr [0x12380594], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380594))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123531dc jne 0x123531e3 */
  if (!C.zf) goto L_123531e3;
  /* 123531de call 0x12353ba0 */
  push32(0x123531e3u); f_12353ba0();
L_123531e3:;
  /* 123531e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123531e5 call 0x123558d0 */
  push32(0x123531eau); f_123558d0();
  /* 123531ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123531ed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123531f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123531f2 je 0x123531f9 */
  if (C.zf) goto L_123531f9;
  /* 123531f4 call 0x123561e0 */
  push32(0x123531f9u); f_123561e0();
L_123531f9:;
  /* 123531f9 call 0x12354300 */
  push32(0x123531feu); f_12354300();
  /* 123531fe call 0x12353db0 */
  push32(0x12353203u); f_12353db0();
  /* 12353203 call 0x12356c00 */
  push32(0x12353208u); f_12356c00();
  /* 12353208 jmp 0x1235320e */
  goto L_1235320e;
L_1235320a:;
  /* 1235320a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235320c jmp 0x12353225 */
  goto L_12353225;
L_1235320e:;
  /* 1235320e jmp 0x12353220 */
  goto L_12353220;
L_12353210:;
  /* 12353210 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353214 jne 0x12353220 */
  if (!C.zf) goto L_12353220;
  /* 12353216 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353218 call 0x12353ea0 */
  push32(0x1235321du); f_12353ea0();
  /* 1235321d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353220:;
  /* 12353220 mov eax, 1 */
  EAX = (0x1u);
L_12353225:;
  /* 12353225 pop ebp */
  EBP = (pop32());
  /* 12353226 ret 0xc */
  ESPCHK(0x123530f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12353230 (243 bytes, 86 insns) */
void f_12353230(void) {
  FTRACE(0x12353230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353230 push ebp */
  push32((uint32_t)(EBP));
  /* 12353231 mov ebp, esp */
  EBP = (ESP);
  /* 12353233 push ecx */
  push32((uint32_t)(ECX));
  /* 12353234 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235323b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235323f jne 0x12353251 */
  if (!C.zf) goto L_12353251;
  /* 12353241 cmp dword ptr [0x12380540], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380540))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353248 jne 0x12353251 */
  if (!C.zf) goto L_12353251;
  /* 1235324a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235324c jmp 0x1235331d */
  goto L_1235331d;
L_12353251:;
  /* 12353251 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353255 je 0x1235325d */
  if (C.zf) goto L_1235325d;
  /* 12353257 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235325b jne 0x1235329f */
  if (!C.zf) goto L_1235329f;
L_1235325d:;
  /* 1235325d cmp dword ptr [0x123820bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123820bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353264 je 0x1235327b */
  if (C.zf) goto L_1235327b;
  /* 12353266 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12353269 push eax */
  push32((uint32_t)(EAX));
  /* 1235326a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235326d push ecx */
  push32((uint32_t)(ECX));
  /* 1235326e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353271 push edx */
  push32((uint32_t)(EDX));
  /* 12353272 call dword ptr [0x123820bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123820bc))), 0x12353278u);
  /* 12353278 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235327b:;
  /* 1235327b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235327f je 0x12353295 */
  if (C.zf) goto L_12353295;
  /* 12353281 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12353284 push eax */
  push32((uint32_t)(EAX));
  /* 12353285 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12353288 push ecx */
  push32((uint32_t)(ECX));
  /* 12353289 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235328c push edx */
  push32((uint32_t)(EDX));
  /* 1235328d call 0x123530f0 */
  push32(0x12353292u); f_123530f0();
  /* 12353292 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12353295:;
  /* 12353295 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353299 jne 0x1235329f */
  if (!C.zf) goto L_1235329f;
  /* 1235329b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235329d jmp 0x1235331d */
  goto L_1235331d;
L_1235329f:;
  /* 1235329f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123532a2 push eax */
  push32((uint32_t)(EAX));
  /* 123532a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123532a6 push ecx */
  push32((uint32_t)(ECX));
  /* 123532a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123532aa push edx */
  push32((uint32_t)(EDX));
  /* 123532ab call 0x1235100f */
  push32(0x123532b0u); f_1235100f();
  /* 123532b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123532b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123532b7 jne 0x123532ce */
  if (!C.zf) goto L_123532ce;
  /* 123532b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123532bd jne 0x123532ce */
  if (!C.zf) goto L_123532ce;
  /* 123532bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123532c2 push eax */
  push32((uint32_t)(EAX));
  /* 123532c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123532c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123532c8 push ecx */
  push32((uint32_t)(ECX));
  /* 123532c9 call 0x123530f0 */
  push32(0x123532ceu); f_123530f0();
L_123532ce:;
  /* 123532ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123532d2 je 0x123532da */
  if (C.zf) goto L_123532da;
  /* 123532d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123532d8 jne 0x1235331a */
  if (!C.zf) goto L_1235331a;
L_123532da:;
  /* 123532da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123532dd push edx */
  push32((uint32_t)(EDX));
  /* 123532de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123532e1 push eax */
  push32((uint32_t)(EAX));
  /* 123532e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123532e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123532e6 call 0x123530f0 */
  push32(0x123532ebu); f_123530f0();
  /* 123532eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123532ed jne 0x123532f6 */
  if (!C.zf) goto L_123532f6;
  /* 123532ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123532f6:;
  /* 123532f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123532fa je 0x1235331a */
  if (C.zf) goto L_1235331a;
  /* 123532fc cmp dword ptr [0x123820bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123820bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353303 je 0x1235331a */
  if (C.zf) goto L_1235331a;
  /* 12353305 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12353308 push edx */
  push32((uint32_t)(EDX));
  /* 12353309 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235330c push eax */
  push32((uint32_t)(EAX));
  /* 1235330d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353310 push ecx */
  push32((uint32_t)(ECX));
  /* 12353311 call dword ptr [0x123820bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123820bc))), 0x12353317u);
  /* 12353317 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235331a:;
  /* 1235331a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235331d:;
  /* 1235331d mov esp, ebp */
  ESP = (EBP);
  /* 1235331f pop ebp */
  EBP = (pop32());
  /* 12353320 ret 0xc */
  ESPCHK(0x12353230u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12353330 (58 bytes, 18 insns) */
void f_12353330(void) {
  FTRACE(0x12353330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353330 push ebp */
  push32((uint32_t)(EBP));
  /* 12353331 mov ebp, esp */
  EBP = (ESP);
  /* 12353333 cmp dword ptr [0x1238054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235333a je 0x1235334e */
  if (C.zf) goto L_1235334e;
  /* 1235333c cmp dword ptr [0x1238054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353343 jne 0x12353353 */
  if (!C.zf) goto L_12353353;
  /* 12353345 cmp dword ptr [0x12380550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235334c jne 0x12353353 */
  if (!C.zf) goto L_12353353;
L_1235334e:;
  /* 1235334e call 0x12356ca0 */
  push32(0x12353353u); f_12356ca0();
L_12353353:;
  /* 12353353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353356 push eax */
  push32((uint32_t)(EAX));
  /* 12353357 call 0x12356cf0 */
  push32(0x1235335cu); f_12356cf0();
  /* 1235335c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235335f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12353364 call dword ptr [0x1237ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237ea30))), 0x1235336au);
  /* 1235336a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235336d pop ebp */
  EBP = (pop32());
  /* 1235336e ret  */
  ESPCHK(0x12353330u, _esp0);
  ESP += 4; return;
}

/* FUN_10003370 @ 0x12353370 (11 bytes, 5 insns) */
void f_12353370(void) {
  FTRACE(0x12353370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353370 push ebp */
  push32((uint32_t)(EBP));
  /* 12353371 mov ebp, esp */
  EBP = (ESP);
  /* 12353373 call dword ptr [0x123832b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b4))), 0x12353379u);
  /* 12353379 pop ebp */
  EBP = (pop32());
  /* 1235337a ret  */
  ESPCHK(0x12353370u, _esp0);
  ESP += 4; return;
}

/* FUN_10003380 @ 0x12353380 (87 bytes, 30 insns) */
void f_12353380(void) {
  FTRACE(0x12353380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353380 push ebp */
  push32((uint32_t)(EBP));
  /* 12353381 mov ebp, esp */
  EBP = (ESP);
  /* 12353383 push ecx */
  push32((uint32_t)(ECX));
  /* 12353384 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353388 jl 0x12353390 */
  if ((C.sf!=C.of)) goto L_12353390;
  /* 1235338a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235338e jl 0x12353395 */
  if ((C.sf!=C.of)) goto L_12353395;
L_12353390:;
  /* 12353390 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12353393 jmp 0x123533d3 */
  goto L_123533d3;
L_12353395:;
  /* 12353395 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353399 jne 0x123533a7 */
  if (!C.zf) goto L_123533a7;
  /* 1235339b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235339e mov eax, dword ptr [eax*4 + 0x1237ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1237ea38)));
  /* 123533a5 jmp 0x123533d3 */
  goto L_123533d3;
L_123533a7:;
  /* 123533a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123533aa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 123533ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123533af je 0x123533b6 */
  if (C.zf) goto L_123533b6;
  /* 123533b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123533b4 jmp 0x123533d3 */
  goto L_123533d3;
L_123533b6:;
  /* 123533b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123533b9 mov eax, dword ptr [edx*4 + 0x1237ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1237ea38)));
  /* 123533c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123533c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123533c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123533c9 mov dword ptr [ecx*4 + 0x1237ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1237ea38), (EDX));
  /* 123533d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123533d3:;
  /* 123533d3 mov esp, ebp */
  ESP = (EBP);
  /* 123533d5 pop ebp */
  EBP = (pop32());
  /* 123533d6 ret  */
  ESPCHK(0x12353380u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x123533e0 (126 bytes, 38 insns) */
void f_123533e0(void) {
  FTRACE(0x123533e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123533e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123533e1 mov ebp, esp */
  EBP = (ESP);
  /* 123533e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123533e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123533e8 jl 0x123533f0 */
  if ((C.sf!=C.of)) goto L_123533f0;
  /* 123533ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123533ee jl 0x123533f7 */
  if ((C.sf!=C.of)) goto L_123533f7;
L_123533f0:;
  /* 123533f0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 123533f5 jmp 0x1235345a */
  goto L_1235345a;
L_123533f7:;
  /* 123533f7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123533fb jne 0x12353409 */
  if (!C.zf) goto L_12353409;
  /* 123533fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353400 mov eax, dword ptr [eax*4 + 0x1237ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1237ea44)));
  /* 12353407 jmp 0x1235345a */
  goto L_1235345a;
L_12353409:;
  /* 12353409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235340c mov edx, dword ptr [ecx*4 + 0x1237ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea44)));
  /* 12353413 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12353416 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235341a jne 0x12353430 */
  if (!C.zf) goto L_12353430;
  /* 1235341c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1235341e call dword ptr [0x123832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b8))), 0x12353424u);
  /* 12353424 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353427 mov dword ptr [ecx*4 + 0x1237ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1237ea44), (EAX));
  /* 1235342e jmp 0x12353457 */
  goto L_12353457;
L_12353430:;
  /* 12353430 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353434 jne 0x1235344a */
  if (!C.zf) goto L_1235344a;
  /* 12353436 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12353438 call dword ptr [0x123832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b8))), 0x1235343eu);
  /* 1235343e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353441 mov dword ptr [edx*4 + 0x1237ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1237ea44), (EAX));
  /* 12353448 jmp 0x12353457 */
  goto L_12353457;
L_1235344a:;
  /* 1235344a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235344d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12353450 mov dword ptr [eax*4 + 0x1237ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1237ea44), (ECX));
L_12353457:;
  /* 12353457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1235345a:;
  /* 1235345a mov esp, ebp */
  ESP = (EBP);
  /* 1235345c pop ebp */
  EBP = (pop32());
  /* 1235345d ret  */
  ESPCHK(0x123533e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003460 @ 0x12353460 (28 bytes, 11 insns) */
void f_12353460(void) {
  FTRACE(0x12353460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353460 push ebp */
  push32((uint32_t)(EBP));
  /* 12353461 mov ebp, esp */
  EBP = (ESP);
  /* 12353463 push ecx */
  push32((uint32_t)(ECX));
  /* 12353464 mov eax, dword ptr [0x123820a0] */
  EAX = (r32((uint32_t)(0x123820a0)));
  /* 12353469 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235346c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235346f mov dword ptr [0x123820a0], ecx */
  w32((uint32_t)(0x123820a0), (ECX));
  /* 12353475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353478 mov esp, ebp */
  ESP = (EBP);
  /* 1235347a pop ebp */
  EBP = (pop32());
  /* 1235347b ret  */
  ESPCHK(0x12353460u, _esp0);
  ESP += 4; return;
}

/* FUN_10003480 @ 0x12353480 (912 bytes, 248 insns) */
void f_12353480(void) {
  FTRACE(0x12353480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353480 push ebp */
  push32((uint32_t)(EBP));
  /* 12353481 mov ebp, esp */
  EBP = (ESP);
  /* 12353483 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12353488 call 0x12357560 */
  push32(0x1235348du); f_12357560();
  /* 1235348d push edi */
  push32((uint32_t)(EDI));
  /* 1235348e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12353495 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1235349a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235349c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 123534a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123534a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123534a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123534a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 123534ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123534b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123534b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 123534bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123534bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123534bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123534c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 123534c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123534cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123534ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 123534d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123534d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123534d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123534d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 123534dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 123534e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123534e6 jl 0x123534ee */
  if ((C.sf!=C.of)) goto L_123534ee;
  /* 123534e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123534ec jl 0x123534f6 */
  if ((C.sf!=C.of)) goto L_123534f6;
L_123534ee:;
  /* 123534ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123534f1 jmp 0x1235380b */
  goto L_1235380b;
L_123534f6:;
  /* 123534f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123534fa jne 0x123535a0 */
  if (!C.zf) goto L_123535a0;
  /* 12353500 push 0x1237ea34 */
  push32((uint32_t)(0x1237ea34u));
  /* 12353505 call dword ptr [0x123832d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d0))), 0x1235350bu);
  /* 1235350b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235350d jle 0x123535a0 */
  if ((C.zf||C.sf!=C.of)) goto L_123535a0;
  /* 12353513 cmp dword ptr [0x12380554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235351a jne 0x1235355e */
  if (!C.zf) goto L_1235355e;
  /* 1235351c push 0x1237b3c4 */
  push32((uint32_t)(0x1237b3c4u));
  /* 12353521 call dword ptr [0x123832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832cc))), 0x12353527u);
  /* 12353527 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1235352d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353534 je 0x12353556 */
  if (C.zf) goto L_12353556;
  /* 12353536 push 0x1237b3b8 */
  push32((uint32_t)(0x1237b3b8u));
  /* 1235353b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12353541 push ecx */
  push32((uint32_t)(ECX));
  /* 12353542 call dword ptr [0x123832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c8))), 0x12353548u);
  /* 12353548 mov dword ptr [0x12380554], eax */
  w32((uint32_t)(0x12380554), (EAX));
  /* 1235354d cmp dword ptr [0x12380554], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380554))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353554 jne 0x1235355e */
  if (!C.zf) goto L_1235355e;
L_12353556:;
  /* 12353556 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12353559 jmp 0x1235380b */
  goto L_1235380b;
L_1235355e:;
  /* 1235355e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12353561 push edx */
  push32((uint32_t)(EDX));
  /* 12353562 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12353565 push eax */
  push32((uint32_t)(EAX));
  /* 12353566 push 0x1237b384 */
  push32((uint32_t)(0x1237b384u));
  /* 1235356b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12353571 push ecx */
  push32((uint32_t)(ECX));
  /* 12353572 call dword ptr [0x12380554] */
  call_ind((uint32_t)(r32((uint32_t)(0x12380554))), 0x12353578u);
  /* 12353578 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235357b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12353581 push edx */
  push32((uint32_t)(EDX));
  /* 12353582 call dword ptr [0x123832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c4))), 0x12353588u);
  /* 12353588 push 0x1237ea34 */
  push32((uint32_t)(0x1237ea34u));
  /* 1235358d call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12353593u);
  /* 12353593 call 0x12353370 */
  push32(0x12353598u); f_12353370();
  /* 12353598 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235359b jmp 0x1235380b */
  goto L_1235380b;
L_123535a0:;
  /* 123535a0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123535a4 je 0x123535dd */
  if (C.zf) goto L_123535dd;
  /* 123535a6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 123535ac push eax */
  push32((uint32_t)(EAX));
  /* 123535ad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123535b0 push ecx */
  push32((uint32_t)(ECX));
  /* 123535b1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 123535b6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 123535bc push edx */
  push32((uint32_t)(EDX));
  /* 123535bd call 0x12357460 */
  push32(0x123535c2u); f_12357460();
  /* 123535c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123535c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123535c7 jge 0x123535dd */
  if ((C.sf==C.of)) goto L_123535dd;
  /* 123535c9 push 0x1237b358 */
  push32((uint32_t)(0x1237b358u));
  /* 123535ce lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 123535d4 push eax */
  push32((uint32_t)(EAX));
  /* 123535d5 call 0x12357370 */
  push32(0x123535dau); f_12357370();
  /* 123535da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123535dd:;
  /* 123535dd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123535e1 jne 0x12353615 */
  if (!C.zf) goto L_12353615;
  /* 123535e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123535e7 je 0x123535f5 */
  if (C.zf) goto L_123535f5;
  /* 123535e9 mov dword ptr [ebp - 0x3028], 0x1237b344 */
  w32((uint32_t)(EBP + -0x3028), (0x1237b344u));
  /* 123535f3 jmp 0x123535ff */
  goto L_123535ff;
L_123535f5:;
  /* 123535f5 mov dword ptr [ebp - 0x3028], 0x1237b330 */
  w32((uint32_t)(EBP + -0x3028), (0x1237b330u));
L_123535ff:;
  /* 123535ff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12353605 push ecx */
  push32((uint32_t)(ECX));
  /* 12353606 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1235360c push edx */
  push32((uint32_t)(EDX));
  /* 1235360d call 0x12357370 */
  push32(0x12353612u); f_12357370();
  /* 12353612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353615:;
  /* 12353615 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1235361b push eax */
  push32((uint32_t)(EAX));
  /* 1235361c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12353622 push ecx */
  push32((uint32_t)(ECX));
  /* 12353623 call 0x12357380 */
  push32(0x12353628u); f_12357380();
  /* 12353628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235362b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235362f jne 0x1235366a */
  if (!C.zf) goto L_1235366a;
  /* 12353631 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353634 mov eax, dword ptr [edx*4 + 0x1237ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1237ea38)));
  /* 1235363b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1235363e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353640 je 0x12353656 */
  if (C.zf) goto L_12353656;
  /* 12353642 push 0x1237b32c */
  push32((uint32_t)(0x1237b32cu));
  /* 12353647 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1235364d push ecx */
  push32((uint32_t)(ECX));
  /* 1235364e call 0x12357380 */
  push32(0x12353653u); f_12357380();
  /* 12353653 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353656:;
  /* 12353656 push 0x1237b328 */
  push32((uint32_t)(0x1237b328u));
  /* 1235365b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12353661 push edx */
  push32((uint32_t)(EDX));
  /* 12353662 call 0x12357380 */
  push32(0x12353667u); f_12357380();
  /* 12353667 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235366a:;
  /* 1235366a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235366e je 0x123536b2 */
  if (C.zf) goto L_123536b2;
  /* 12353670 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12353676 push eax */
  push32((uint32_t)(EAX));
  /* 12353677 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235367a push ecx */
  push32((uint32_t)(ECX));
  /* 1235367b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235367e push edx */
  push32((uint32_t)(EDX));
  /* 1235367f push 0x1237b31c */
  push32((uint32_t)(0x1237b31cu));
  /* 12353684 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12353689 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1235368f push eax */
  push32((uint32_t)(EAX));
  /* 12353690 call 0x12357270 */
  push32(0x12353695u); f_12357270();
  /* 12353695 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235369a jge 0x123536b0 */
  if ((C.sf==C.of)) goto L_123536b0;
  /* 1235369c push 0x1237b358 */
  push32((uint32_t)(0x1237b358u));
  /* 123536a1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 123536a7 push ecx */
  push32((uint32_t)(ECX));
  /* 123536a8 call 0x12357370 */
  push32(0x123536adu); f_12357370();
  /* 123536ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123536b0:;
  /* 123536b0 jmp 0x123536c8 */
  goto L_123536c8;
L_123536b2:;
  /* 123536b2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 123536b8 push edx */
  push32((uint32_t)(EDX));
  /* 123536b9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 123536bf push eax */
  push32((uint32_t)(EAX));
  /* 123536c0 call 0x12357370 */
  push32(0x123536c5u); f_12357370();
  /* 123536c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123536c8:;
  /* 123536c8 cmp dword ptr [0x123820a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123820a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123536cf je 0x1235370c */
  if (C.zf) goto L_1235370c;
  /* 123536d1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 123536d7 push ecx */
  push32((uint32_t)(ECX));
  /* 123536d8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 123536de push edx */
  push32((uint32_t)(EDX));
  /* 123536df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123536e2 push eax */
  push32((uint32_t)(EAX));
  /* 123536e3 call dword ptr [0x123820a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123820a0))), 0x123536e9u);
  /* 123536e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123536ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123536ee je 0x1235370c */
  if (C.zf) goto L_1235370c;
  /* 123536f0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123536f4 jne 0x12353701 */
  if (!C.zf) goto L_12353701;
  /* 123536f6 push 0x1237ea34 */
  push32((uint32_t)(0x1237ea34u));
  /* 123536fb call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12353701u);
L_12353701:;
  /* 12353701 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12353707 jmp 0x1235380b */
  goto L_1235380b;
L_1235370c:;
  /* 1235370c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235370f mov edx, dword ptr [ecx*4 + 0x1237ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea38)));
  /* 12353716 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12353719 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235371b je 0x1235375b */
  if (C.zf) goto L_1235375b;
  /* 1235371d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353720 cmp dword ptr [eax*4 + 0x1237ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1237ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353728 je 0x1235375b */
  if (C.zf) goto L_1235375b;
  /* 1235372a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235372c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12353732 push ecx */
  push32((uint32_t)(ECX));
  /* 12353733 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12353739 push edx */
  push32((uint32_t)(EDX));
  /* 1235373a call 0x123571f0 */
  push32(0x1235373fu); f_123571f0();
  /* 1235373f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353742 push eax */
  push32((uint32_t)(EAX));
  /* 12353743 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12353749 push eax */
  push32((uint32_t)(EAX));
  /* 1235374a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235374d mov edx, dword ptr [ecx*4 + 0x1237ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea44)));
  /* 12353754 push edx */
  push32((uint32_t)(EDX));
  /* 12353755 call dword ptr [0x123832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832bc))), 0x1235375bu);
L_1235375b:;
  /* 1235375b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235375e mov ecx, dword ptr [eax*4 + 0x1237ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237ea38)));
  /* 12353765 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12353768 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235376a je 0x12353779 */
  if (C.zf) goto L_12353779;
  /* 1235376c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12353772 push edx */
  push32((uint32_t)(EDX));
  /* 12353773 call dword ptr [0x123832c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c4))), 0x12353779u);
L_12353779:;
  /* 12353779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235377c mov ecx, dword ptr [eax*4 + 0x1237ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237ea38)));
  /* 12353783 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12353786 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12353788 je 0x123537f8 */
  if (C.zf) goto L_123537f8;
  /* 1235378a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235378e je 0x123537ad */
  if (C.zf) goto L_123537ad;
  /* 12353790 push 0xa */
  push32((uint32_t)(0xau));
  /* 12353792 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12353798 push edx */
  push32((uint32_t)(EDX));
  /* 12353799 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235379c push eax */
  push32((uint32_t)(EAX));
  /* 1235379d call 0x12356f00 */
  push32(0x123537a2u); f_12356f00();
  /* 123537a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123537a5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 123537ab jmp 0x123537b7 */
  goto L_123537b7;
L_123537ad:;
  /* 123537ad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_123537b7:;
  /* 123537b7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 123537bd push ecx */
  push32((uint32_t)(ECX));
  /* 123537be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123537c1 push edx */
  push32((uint32_t)(EDX));
  /* 123537c2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 123537c8 push eax */
  push32((uint32_t)(EAX));
  /* 123537c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123537cc push ecx */
  push32((uint32_t)(ECX));
  /* 123537cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123537d0 push edx */
  push32((uint32_t)(EDX));
  /* 123537d1 call 0x12353810 */
  push32(0x123537d6u); f_12353810();
  /* 123537d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123537d9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 123537df cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123537e3 jne 0x123537f0 */
  if (!C.zf) goto L_123537f0;
  /* 123537e5 push 0x1237ea34 */
  push32((uint32_t)(0x1237ea34u));
  /* 123537ea call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x123537f0u);
L_123537f0:;
  /* 123537f0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 123537f6 jmp 0x1235380b */
  goto L_1235380b;
L_123537f8:;
  /* 123537f8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123537fc jne 0x12353809 */
  if (!C.zf) goto L_12353809;
  /* 123537fe push 0x1237ea34 */
  push32((uint32_t)(0x1237ea34u));
  /* 12353803 call dword ptr [0x123832c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c0))), 0x12353809u);
L_12353809:;
  /* 12353809 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235380b:;
  /* 1235380b pop edi */
  EDI = (pop32());
  /* 1235380c mov esp, ebp */
  ESP = (EBP);
  /* 1235380e pop ebp */
  EBP = (pop32());
  /* 1235380f ret  */
  ESPCHK(0x12353480u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x12353810 (780 bytes, 197 insns) */
void f_12353810(void) {
  FTRACE(0x12353810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353810 push ebp */
  push32((uint32_t)(EBP));
  /* 12353811 mov ebp, esp */
  EBP = (ESP);
  /* 12353813 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12353818 call 0x12357560 */
  push32(0x1235381du); f_12357560();
L_1235381d:;
  /* 1235381d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353821 jne 0x12353848 */
  if (!C.zf) goto L_12353848;
  /* 12353823 push 0x1237b514 */
  push32((uint32_t)(0x1237b514u));
  /* 12353828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235382a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1235382f push 0x1237b508 */
  push32((uint32_t)(0x1237b508u));
  /* 12353834 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353836 call 0x12353480 */
  push32(0x1235383bu); f_12353480();
  /* 1235383b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235383e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353841 jne 0x12353848 */
  if (!C.zf) goto L_12353848;
  /* 12353843 call 0x12353370 */
  push32(0x12353848u); f_12353370();
L_12353848:;
  /* 12353848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235384a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235384c jne 0x1235381d */
  if (!C.zf) goto L_1235381d;
  /* 1235384e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12353853 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12353859 push ecx */
  push32((uint32_t)(ECX));
  /* 1235385a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235385c call dword ptr [0x123832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d4))), 0x12353862u);
  /* 12353862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353864 jne 0x1235387a */
  if (!C.zf) goto L_1235387a;
  /* 12353866 push 0x1237b4f0 */
  push32((uint32_t)(0x1237b4f0u));
  /* 1235386b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12353871 push edx */
  push32((uint32_t)(EDX));
  /* 12353872 call 0x12357370 */
  push32(0x12353877u); f_12357370();
  /* 12353877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235387a:;
  /* 1235387a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12353880 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12353883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353886 push ecx */
  push32((uint32_t)(ECX));
  /* 12353887 call 0x123571f0 */
  push32(0x1235388cu); f_123571f0();
  /* 1235388c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235388f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353892 jbe 0x123538bd */
  if ((C.cf||C.zf)) goto L_123538bd;
  /* 12353894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353897 push edx */
  push32((uint32_t)(EDX));
  /* 12353898 call 0x123571f0 */
  push32(0x1235389du); f_123571f0();
  /* 1235389d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123538a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123538a3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 123538a7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123538aa push 3 */
  push32((uint32_t)(0x3u));
  /* 123538ac push 0x1237b4ec */
  push32((uint32_t)(0x1237b4ecu));
  /* 123538b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123538b4 push eax */
  push32((uint32_t)(EAX));
  /* 123538b5 call 0x12357be0 */
  push32(0x123538bau); f_12357be0();
  /* 123538ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123538bd:;
  /* 123538bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123538c0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 123538c6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123538cd je 0x12353918 */
  if (C.zf) goto L_12353918;
  /* 123538cf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123538d5 push edx */
  push32((uint32_t)(EDX));
  /* 123538d6 call 0x123571f0 */
  push32(0x123538dbu); f_123571f0();
  /* 123538db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123538de cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123538e1 jbe 0x12353918 */
  if ((C.cf||C.zf)) goto L_12353918;
  /* 123538e3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123538e9 push eax */
  push32((uint32_t)(EAX));
  /* 123538ea call 0x123571f0 */
  push32(0x123538efu); f_123571f0();
  /* 123538ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123538f2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 123538f8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 123538fc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12353902 push 3 */
  push32((uint32_t)(0x3u));
  /* 12353904 push 0x1237b4ec */
  push32((uint32_t)(0x1237b4ecu));
  /* 12353909 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1235390f push eax */
  push32((uint32_t)(EAX));
  /* 12353910 call 0x12357be0 */
  push32(0x12353915u); f_12357be0();
  /* 12353915 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353918:;
  /* 12353918 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235391c jne 0x1235392a */
  if (!C.zf) goto L_1235392a;
  /* 1235391e mov dword ptr [ebp - 0x1114], 0x1237b478 */
  w32((uint32_t)(EBP + -0x1114), (0x1237b478u));
  /* 12353928 jmp 0x12353934 */
  goto L_12353934;
L_1235392a:;
  /* 1235392a mov dword ptr [ebp - 0x1114], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1114), (0x1237b218u));
L_12353934:;
  /* 12353934 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12353937 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1235393a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235393c je 0x12353949 */
  if (C.zf) goto L_12353949;
  /* 1235393e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12353941 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12353947 jmp 0x12353953 */
  goto L_12353953;
L_12353949:;
  /* 12353949 mov dword ptr [ebp - 0x1118], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1118), (0x1237b218u));
L_12353953:;
  /* 12353953 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12353956 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12353959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235395b je 0x1235396f */
  if (C.zf) goto L_1235396f;
  /* 1235395d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353961 jne 0x1235396f */
  if (!C.zf) goto L_1235396f;
  /* 12353963 mov dword ptr [ebp - 0x111c], 0x1237b468 */
  w32((uint32_t)(EBP + -0x111c), (0x1237b468u));
  /* 1235396d jmp 0x12353979 */
  goto L_12353979;
L_1235396f:;
  /* 1235396f mov dword ptr [ebp - 0x111c], 0x1237b218 */
  w32((uint32_t)(EBP + -0x111c), (0x1237b218u));
L_12353979:;
  /* 12353979 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235397c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235397f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12353981 je 0x1235398f */
  if (C.zf) goto L_1235398f;
  /* 12353983 mov dword ptr [ebp - 0x1120], 0x1237b464 */
  w32((uint32_t)(EBP + -0x1120), (0x1237b464u));
  /* 1235398d jmp 0x12353999 */
  goto L_12353999;
L_1235398f:;
  /* 1235398f mov dword ptr [ebp - 0x1120], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1120), (0x1237b218u));
L_12353999:;
  /* 12353999 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235399d je 0x123539aa */
  if (C.zf) goto L_123539aa;
  /* 1235399f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123539a2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 123539a8 jmp 0x123539b4 */
  goto L_123539b4;
L_123539aa:;
  /* 123539aa mov dword ptr [ebp - 0x1124], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1124), (0x1237b218u));
L_123539b4:;
  /* 123539b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123539b8 je 0x123539c6 */
  if (C.zf) goto L_123539c6;
  /* 123539ba mov dword ptr [ebp - 0x1128], 0x1237b45c */
  w32((uint32_t)(EBP + -0x1128), (0x1237b45cu));
  /* 123539c4 jmp 0x123539d0 */
  goto L_123539d0;
L_123539c6:;
  /* 123539c6 mov dword ptr [ebp - 0x1128], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1128), (0x1237b218u));
L_123539d0:;
  /* 123539d0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123539d4 je 0x123539e1 */
  if (C.zf) goto L_123539e1;
  /* 123539d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123539d9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 123539df jmp 0x123539eb */
  goto L_123539eb;
L_123539e1:;
  /* 123539e1 mov dword ptr [ebp - 0x112c], 0x1237b218 */
  w32((uint32_t)(EBP + -0x112c), (0x1237b218u));
L_123539eb:;
  /* 123539eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123539ef je 0x123539fd */
  if (C.zf) goto L_123539fd;
  /* 123539f1 mov dword ptr [ebp - 0x1130], 0x1237b454 */
  w32((uint32_t)(EBP + -0x1130), (0x1237b454u));
  /* 123539fb jmp 0x12353a07 */
  goto L_12353a07;
L_123539fd:;
  /* 123539fd mov dword ptr [ebp - 0x1130], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1130), (0x1237b218u));
L_12353a07:;
  /* 12353a07 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353a0e je 0x12353a1e */
  if (C.zf) goto L_12353a1e;
  /* 12353a10 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12353a16 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12353a1c jmp 0x12353a28 */
  goto L_12353a28;
L_12353a1e:;
  /* 12353a1e mov dword ptr [ebp - 0x1134], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1134), (0x1237b218u));
L_12353a28:;
  /* 12353a28 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353a2f je 0x12353a3d */
  if (C.zf) goto L_12353a3d;
  /* 12353a31 mov dword ptr [ebp - 0x1138], 0x1237b448 */
  w32((uint32_t)(EBP + -0x1138), (0x1237b448u));
  /* 12353a3b jmp 0x12353a47 */
  goto L_12353a47;
L_12353a3d:;
  /* 12353a3d mov dword ptr [ebp - 0x1138], 0x1237b218 */
  w32((uint32_t)(EBP + -0x1138), (0x1237b218u));
L_12353a47:;
  /* 12353a47 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12353a4d push edx */
  push32((uint32_t)(EDX));
  /* 12353a4e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12353a54 push eax */
  push32((uint32_t)(EAX));
  /* 12353a55 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12353a5b push ecx */
  push32((uint32_t)(ECX));
  /* 12353a5c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12353a62 push edx */
  push32((uint32_t)(EDX));
  /* 12353a63 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12353a69 push eax */
  push32((uint32_t)(EAX));
  /* 12353a6a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12353a70 push ecx */
  push32((uint32_t)(ECX));
  /* 12353a71 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12353a77 push edx */
  push32((uint32_t)(EDX));
  /* 12353a78 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12353a7e push eax */
  push32((uint32_t)(EAX));
  /* 12353a7f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12353a85 push ecx */
  push32((uint32_t)(ECX));
  /* 12353a86 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12353a8c push edx */
  push32((uint32_t)(EDX));
  /* 12353a8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353a90 push eax */
  push32((uint32_t)(EAX));
  /* 12353a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353a94 mov edx, dword ptr [ecx*4 + 0x1237ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea50)));
  /* 12353a9b push edx */
  push32((uint32_t)(EDX));
  /* 12353a9c push 0x1237b3f4 */
  push32((uint32_t)(0x1237b3f4u));
  /* 12353aa1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12353aa6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12353aac push eax */
  push32((uint32_t)(EAX));
  /* 12353aad call 0x12357270 */
  push32(0x12353ab2u); f_12357270();
  /* 12353ab2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353ab5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353ab7 jge 0x12353acd */
  if ((C.sf==C.of)) goto L_12353acd;
  /* 12353ab9 push 0x1237b358 */
  push32((uint32_t)(0x1237b358u));
  /* 12353abe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12353ac4 push ecx */
  push32((uint32_t)(ECX));
  /* 12353ac5 call 0x12357370 */
  push32(0x12353acau); f_12357370();
  /* 12353aca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353acd:;
  /* 12353acd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12353ad2 push 0x1237b3d0 */
  push32((uint32_t)(0x1237b3d0u));
  /* 12353ad7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12353add push edx */
  push32((uint32_t)(EDX));
  /* 12353ade call 0x12357b20 */
  push32(0x12353ae3u); f_12357b20();
  /* 12353ae3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353ae6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12353aec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353af3 jne 0x12353b06 */
  if (!C.zf) goto L_12353b06;
  /* 12353af5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12353af7 call 0x12357860 */
  push32(0x12353afcu); f_12357860();
  /* 12353afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353aff push 3 */
  push32((uint32_t)(0x3u));
  /* 12353b01 call 0x12353b80 */
  push32(0x12353b06u); f_12353b80();
L_12353b06:;
  /* 12353b06 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353b0d jne 0x12353b16 */
  if (!C.zf) goto L_12353b16;
  /* 12353b0f mov eax, 1 */
  EAX = (0x1u);
  /* 12353b14 jmp 0x12353b18 */
  goto L_12353b18;
L_12353b16:;
  /* 12353b16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12353b18:;
  /* 12353b18 mov esp, ebp */
  ESP = (EBP);
  /* 12353b1a pop ebp */
  EBP = (pop32());
  /* 12353b1b ret  */
  ESPCHK(0x12353810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x12353b20 (56 bytes, 15 insns) */
void f_12353b20(void) {
  FTRACE(0x12353b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12353b21 mov ebp, esp */
  EBP = (ESP);
  /* 12353b23 cmp dword ptr [0x1238209c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238209c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353b2a je 0x12353b32 */
  if (C.zf) goto L_12353b32;
  /* 12353b2c call dword ptr [0x1238209c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238209c))), 0x12353b32u);
L_12353b32:;
  /* 12353b32 push 0x1237e418 */
  push32((uint32_t)(0x1237e418u));
  /* 12353b37 push 0x1237e208 */
  push32((uint32_t)(0x1237e208u));
  /* 12353b3c call 0x12353cf0 */
  push32(0x12353b41u); f_12353cf0();
  /* 12353b41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353b44 push 0x1237e104 */
  push32((uint32_t)(0x1237e104u));
  /* 12353b49 push 0x1237e000 */
  push32((uint32_t)(0x1237e000u));
  /* 12353b4e call 0x12353cf0 */
  push32(0x12353b53u); f_12353cf0();
  /* 12353b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353b56 pop ebp */
  EBP = (pop32());
  /* 12353b57 ret  */
  ESPCHK(0x12353b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b60 @ 0x12353b60 (21 bytes, 10 insns) */
void f_12353b60(void) {
  FTRACE(0x12353b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12353b61 mov ebp, esp */
  EBP = (ESP);
  /* 12353b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353b67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353b6a push eax */
  push32((uint32_t)(EAX));
  /* 12353b6b call 0x12353be0 */
  push32(0x12353b70u); f_12353be0();
  /* 12353b70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353b73 pop ebp */
  EBP = (pop32());
  /* 12353b74 ret  */
  ESPCHK(0x12353b60u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12353b80 (21 bytes, 10 insns) */
void f_12353b80(void) {
  FTRACE(0x12353b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12353b81 mov ebp, esp */
  EBP = (ESP);
  /* 12353b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353b85 push 1 */
  push32((uint32_t)(0x1u));
  /* 12353b87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353b8a push eax */
  push32((uint32_t)(EAX));
  /* 12353b8b call 0x12353be0 */
  push32(0x12353b90u); f_12353be0();
  /* 12353b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353b93 pop ebp */
  EBP = (pop32());
  /* 12353b94 ret  */
  ESPCHK(0x12353b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ba0 @ 0x12353ba0 (19 bytes, 9 insns) */
void f_12353ba0(void) {
  FTRACE(0x12353ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12353ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12353ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353ba7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353ba9 call 0x12353be0 */
  push32(0x12353baeu); f_12353be0();
  /* 12353bae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353bb1 pop ebp */
  EBP = (pop32());
  /* 12353bb2 ret  */
  ESPCHK(0x12353ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bc0 @ 0x12353bc0 (19 bytes, 9 insns) */
void f_12353bc0(void) {
  FTRACE(0x12353bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12353bc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12353bc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12353bc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353bc9 call 0x12353be0 */
  push32(0x12353bceu); f_12353be0();
  /* 12353bce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353bd1 pop ebp */
  EBP = (pop32());
  /* 12353bd2 ret  */
  ESPCHK(0x12353bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003be0 @ 0x12353be0 (227 bytes, 61 insns) */
void f_12353be0(void) {
  FTRACE(0x12353be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353be1 mov ebp, esp */
  EBP = (ESP);
  /* 12353be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12353be4 call 0x12353cd0 */
  push32(0x12353be9u); f_12353cd0();
  /* 12353be9 cmp dword ptr [0x12380598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353bf0 jne 0x12353c03 */
  if (!C.zf) goto L_12353c03;
  /* 12353bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12353bf6 call dword ptr [0x123832e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e0))), 0x12353bfcu);
  /* 12353bfc push eax */
  push32((uint32_t)(EAX));
  /* 12353bfd call dword ptr [0x123832dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832dc))), 0x12353c03u);
L_12353c03:;
  /* 12353c03 mov dword ptr [0x12380594], 1 */
  w32((uint32_t)(0x12380594), (0x1u));
  /* 12353c0d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12353c10 mov byte ptr [0x12380590], cl */
  w8((uint32_t)(0x12380590), (CL));
  /* 12353c16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353c1a jne 0x12353c63 */
  if (!C.zf) goto L_12353c63;
  /* 12353c1c cmp dword ptr [0x12382098], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12382098))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353c23 je 0x12353c51 */
  if (C.zf) goto L_12353c51;
  /* 12353c25 mov edx, dword ptr [0x12382094] */
  EDX = (r32((uint32_t)(0x12382094)));
  /* 12353c2b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12353c2e:;
  /* 12353c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353c31 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12353c34 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12353c37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353c3a cmp ecx, dword ptr [0x12382098] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12382098))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353c40 jb 0x12353c51 */
  if (C.cf) goto L_12353c51;
  /* 12353c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353c45 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353c48 je 0x12353c4f */
  if (C.zf) goto L_12353c4f;
  /* 12353c4a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353c4d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12353c4fu);
L_12353c4f:;
  /* 12353c4f jmp 0x12353c2e */
  goto L_12353c2e;
L_12353c51:;
  /* 12353c51 push 0x1237e724 */
  push32((uint32_t)(0x1237e724u));
  /* 12353c56 push 0x1237e51c */
  push32((uint32_t)(0x1237e51cu));
  /* 12353c5b call 0x12353cf0 */
  push32(0x12353c60u); f_12353cf0();
  /* 12353c60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353c63:;
  /* 12353c63 push 0x1237e92c */
  push32((uint32_t)(0x1237e92cu));
  /* 12353c68 push 0x1237e828 */
  push32((uint32_t)(0x1237e828u));
  /* 12353c6d call 0x12353cf0 */
  push32(0x12353c72u); f_12353cf0();
  /* 12353c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353c75 cmp dword ptr [0x1238059c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238059c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353c7c jne 0x12353c9e */
  if (!C.zf) goto L_12353c9e;
  /* 12353c7e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12353c80 call 0x123558d0 */
  push32(0x12353c85u); f_123558d0();
  /* 12353c85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353c88 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12353c8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353c8d je 0x12353c9e */
  if (C.zf) goto L_12353c9e;
  /* 12353c8f mov dword ptr [0x1238059c], 1 */
  w32((uint32_t)(0x1238059c), (0x1u));
  /* 12353c99 call 0x123561e0 */
  push32(0x12353c9eu); f_123561e0();
L_12353c9e:;
  /* 12353c9e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353ca2 je 0x12353cab */
  if (C.zf) goto L_12353cab;
  /* 12353ca4 call 0x12353ce0 */
  push32(0x12353ca9u); f_12353ce0();
  /* 12353ca9 jmp 0x12353cbf */
  goto L_12353cbf;
L_12353cab:;
  /* 12353cab mov dword ptr [0x12380598], 1 */
  w32((uint32_t)(0x12380598), (0x1u));
  /* 12353cb5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353cb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12353cb9 call dword ptr [0x123832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d8))), 0x12353cbfu);
L_12353cbf:;
  /* 12353cbf mov esp, ebp */
  ESP = (EBP);
  /* 12353cc1 pop ebp */
  EBP = (pop32());
  /* 12353cc2 ret  */
  ESPCHK(0x12353be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cd0 @ 0x12353cd0 (15 bytes, 7 insns) */
void f_12353cd0(void) {
  FTRACE(0x12353cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12353cd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12353cd5 call 0x12357dc0 */
  push32(0x12353cdau); f_12357dc0();
  /* 12353cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353cdd pop ebp */
  EBP = (pop32());
  /* 12353cde ret  */
  ESPCHK(0x12353cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ce0 @ 0x12353ce0 (15 bytes, 7 insns) */
void f_12353ce0(void) {
  FTRACE(0x12353ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12353ce3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12353ce5 call 0x12357e60 */
  push32(0x12353ceau); f_12357e60();
  /* 12353cea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353ced pop ebp */
  EBP = (pop32());
  /* 12353cee ret  */
  ESPCHK(0x12353ce0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12353cf0 (37 bytes, 16 insns) */
void f_12353cf0(void) {
  FTRACE(0x12353cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353cf1 mov ebp, esp */
  EBP = (ESP);
L_12353cf3:;
  /* 12353cf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353cf6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353cf9 jae 0x12353d13 */
  if (!C.cf) goto L_12353d13;
  /* 12353cfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353cfe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353d01 je 0x12353d08 */
  if (C.zf) goto L_12353d08;
  /* 12353d03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353d06 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12353d08u);
L_12353d08:;
  /* 12353d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353d0b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12353d0e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12353d11 jmp 0x12353cf3 */
  goto L_12353cf3;
L_12353d13:;
  /* 12353d13 pop ebp */
  EBP = (pop32());
  /* 12353d14 ret  */
  ESPCHK(0x12353cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d20 @ 0x12353d20 (130 bytes, 42 insns) */
void f_12353d20(void) {
  FTRACE(0x12353d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12353d21 mov ebp, esp */
  EBP = (ESP);
  /* 12353d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12353d24 call 0x12357ce0 */
  push32(0x12353d29u); f_12357ce0();
  /* 12353d29 call dword ptr [0x123832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832ec))), 0x12353d2fu);
  /* 12353d2f mov dword ptr [0x1237ea5c], eax */
  w32((uint32_t)(0x1237ea5c), (EAX));
  /* 12353d34 cmp dword ptr [0x1237ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1237ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353d3b jne 0x12353d41 */
  if (!C.zf) goto L_12353d41;
  /* 12353d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12353d3f jmp 0x12353d9e */
  goto L_12353d9e;
L_12353d41:;
  /* 12353d41 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12353d43 push 0x1237b52c */
  push32((uint32_t)(0x1237b52cu));
  /* 12353d48 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353d4a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12353d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 12353d4e call 0x123547d0 */
  push32(0x12353d53u); f_123547d0();
  /* 12353d53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353d56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12353d59 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353d5d je 0x12353d74 */
  if (C.zf) goto L_12353d74;
  /* 12353d5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353d62 push eax */
  push32((uint32_t)(EAX));
  /* 12353d63 mov ecx, dword ptr [0x1237ea5c] */
  ECX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353d69 push ecx */
  push32((uint32_t)(ECX));
  /* 12353d6a call dword ptr [0x123832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e8))), 0x12353d70u);
  /* 12353d70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353d72 jne 0x12353d78 */
  if (!C.zf) goto L_12353d78;
L_12353d74:;
  /* 12353d74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12353d76 jmp 0x12353d9e */
  goto L_12353d9e;
L_12353d78:;
  /* 12353d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353d7b push edx */
  push32((uint32_t)(EDX));
  /* 12353d7c call 0x12353de0 */
  push32(0x12353d81u); f_12353de0();
  /* 12353d81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353d84 call dword ptr [0x123832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e4))), 0x12353d8au);
  /* 12353d8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353d8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12353d8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353d92 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12353d99 mov eax, 1 */
  EAX = (0x1u);
L_12353d9e:;
  /* 12353d9e mov esp, ebp */
  ESP = (EBP);
  /* 12353da0 pop ebp */
  EBP = (pop32());
  /* 12353da1 ret  */
  ESPCHK(0x12353d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003db0 @ 0x12353db0 (41 bytes, 11 insns) */
void f_12353db0(void) {
  FTRACE(0x12353db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353db1 mov ebp, esp */
  EBP = (ESP);
  /* 12353db3 call 0x12357d20 */
  push32(0x12353db8u); f_12357d20();
  /* 12353db8 cmp dword ptr [0x1237ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1237ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353dbf je 0x12353dd7 */
  if (C.zf) goto L_12353dd7;
  /* 12353dc1 mov eax, dword ptr [0x1237ea5c] */
  EAX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353dc6 push eax */
  push32((uint32_t)(EAX));
  /* 12353dc7 call dword ptr [0x123832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832f0))), 0x12353dcdu);
  /* 12353dcd mov dword ptr [0x1237ea5c], 0xffffffff */
  w32((uint32_t)(0x1237ea5c), (0xffffffffu));
L_12353dd7:;
  /* 12353dd7 pop ebp */
  EBP = (pop32());
  /* 12353dd8 ret  */
  ESPCHK(0x12353db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x12353de0 (25 bytes, 8 insns) */
void f_12353de0(void) {
  FTRACE(0x12353de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353de1 mov ebp, esp */
  EBP = (ESP);
  /* 12353de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353de6 mov dword ptr [eax + 0x50], 0x1237ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1237ec00u));
  /* 12353ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353df0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12353df7 pop ebp */
  EBP = (pop32());
  /* 12353df8 ret  */
  ESPCHK(0x12353de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e00 @ 0x12353e00 (152 bytes, 48 insns) */
void f_12353e00(void) {
  FTRACE(0x12353e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12353e01 mov ebp, esp */
  EBP = (ESP);
  /* 12353e03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12353e06 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x12353e0cu);
  /* 12353e0c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12353e0f mov eax, dword ptr [0x1237ea5c] */
  EAX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353e14 push eax */
  push32((uint32_t)(EAX));
  /* 12353e15 call dword ptr [0x123832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832f8))), 0x12353e1bu);
  /* 12353e1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12353e1e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353e22 jne 0x12353e87 */
  if (!C.zf) goto L_12353e87;
  /* 12353e24 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12353e29 push 0x1237b52c */
  push32((uint32_t)(0x1237b52cu));
  /* 12353e2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12353e30 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12353e32 push 1 */
  push32((uint32_t)(0x1u));
  /* 12353e34 call 0x123547d0 */
  push32(0x12353e39u); f_123547d0();
  /* 12353e39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353e3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12353e3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353e43 je 0x12353e7d */
  if (C.zf) goto L_12353e7d;
  /* 12353e45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353e48 push ecx */
  push32((uint32_t)(ECX));
  /* 12353e49 mov edx, dword ptr [0x1237ea5c] */
  EDX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353e4f push edx */
  push32((uint32_t)(EDX));
  /* 12353e50 call dword ptr [0x123832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e8))), 0x12353e56u);
  /* 12353e56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12353e58 je 0x12353e7d */
  if (C.zf) goto L_12353e7d;
  /* 12353e5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353e5d push eax */
  push32((uint32_t)(EAX));
  /* 12353e5e call 0x12353de0 */
  push32(0x12353e63u); f_12353de0();
  /* 12353e63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353e66 call dword ptr [0x123832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e4))), 0x12353e6cu);
  /* 12353e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353e6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12353e71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353e74 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12353e7b jmp 0x12353e87 */
  goto L_12353e87;
L_12353e7d:;
  /* 12353e7d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12353e7f call 0x12353330 */
  push32(0x12353e84u); f_12353330();
  /* 12353e84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353e87:;
  /* 12353e87 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12353e8a push eax */
  push32((uint32_t)(EAX));
  /* 12353e8b call dword ptr [0x123832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832f4))), 0x12353e91u);
  /* 12353e91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12353e94 mov esp, ebp */
  ESP = (EBP);
  /* 12353e96 pop ebp */
  EBP = (pop32());
  /* 12353e97 ret  */
  ESPCHK(0x12353e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ea0 @ 0x12353ea0 (263 bytes, 86 insns) */
void f_12353ea0(void) {
  FTRACE(0x12353ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12353ea3 cmp dword ptr [0x1237ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1237ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353eaa je 0x12353fa5 */
  if (C.zf) goto L_12353fa5;
  /* 12353eb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353eb4 jne 0x12353ec5 */
  if (!C.zf) goto L_12353ec5;
  /* 12353eb6 mov eax, dword ptr [0x1237ea5c] */
  EAX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353ebb push eax */
  push32((uint32_t)(EAX));
  /* 12353ebc call dword ptr [0x123832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832f8))), 0x12353ec2u);
  /* 12353ec2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12353ec5:;
  /* 12353ec5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353ec9 je 0x12353f96 */
  if (C.zf) goto L_12353f96;
  /* 12353ecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353ed2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353ed6 je 0x12353ee9 */
  if (C.zf) goto L_12353ee9;
  /* 12353ed8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353eda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353edd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12353ee0 push eax */
  push32((uint32_t)(EAX));
  /* 12353ee1 call 0x12354e50 */
  push32(0x12353ee6u); f_12354e50();
  /* 12353ee6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353ee9:;
  /* 12353ee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353eec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353ef0 je 0x12353f03 */
  if (C.zf) goto L_12353f03;
  /* 12353ef2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353ef4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353ef7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 12353efa push eax */
  push32((uint32_t)(EAX));
  /* 12353efb call 0x12354e50 */
  push32(0x12353f00u); f_12354e50();
  /* 12353f00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f03:;
  /* 12353f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f06 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353f0a je 0x12353f1d */
  if (C.zf) goto L_12353f1d;
  /* 12353f0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f11 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12353f14 push eax */
  push32((uint32_t)(EAX));
  /* 12353f15 call 0x12354e50 */
  push32(0x12353f1au); f_12354e50();
  /* 12353f1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f1d:;
  /* 12353f1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f20 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353f24 je 0x12353f37 */
  if (C.zf) goto L_12353f37;
  /* 12353f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f2b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 12353f2e push eax */
  push32((uint32_t)(EAX));
  /* 12353f2f call 0x12354e50 */
  push32(0x12353f34u); f_12354e50();
  /* 12353f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f37:;
  /* 12353f37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f3a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353f3e je 0x12353f51 */
  if (C.zf) goto L_12353f51;
  /* 12353f40 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f45 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12353f48 push eax */
  push32((uint32_t)(EAX));
  /* 12353f49 call 0x12354e50 */
  push32(0x12353f4eu); f_12354e50();
  /* 12353f4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f51:;
  /* 12353f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f54 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353f58 je 0x12353f6b */
  if (C.zf) goto L_12353f6b;
  /* 12353f5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f5f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12353f62 push eax */
  push32((uint32_t)(EAX));
  /* 12353f63 call 0x12354e50 */
  push32(0x12353f68u); f_12354e50();
  /* 12353f68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f6b:;
  /* 12353f6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f6e cmp dword ptr [ecx + 0x50], 0x1237ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1237ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353f75 je 0x12353f88 */
  if (C.zf) goto L_12353f88;
  /* 12353f77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f7c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12353f7f push eax */
  push32((uint32_t)(EAX));
  /* 12353f80 call 0x12354e50 */
  push32(0x12353f85u); f_12354e50();
  /* 12353f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f88:;
  /* 12353f88 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353f8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12353f8d push ecx */
  push32((uint32_t)(ECX));
  /* 12353f8e call 0x12354e50 */
  push32(0x12353f93u); f_12354e50();
  /* 12353f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12353f96:;
  /* 12353f96 push 0 */
  push32((uint32_t)(0x0u));
  /* 12353f98 mov edx, dword ptr [0x1237ea5c] */
  EDX = (r32((uint32_t)(0x1237ea5c)));
  /* 12353f9e push edx */
  push32((uint32_t)(EDX));
  /* 12353f9f call dword ptr [0x123832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e8))), 0x12353fa5u);
L_12353fa5:;
  /* 12353fa5 pop ebp */
  EBP = (pop32());
  /* 12353fa6 ret  */
  ESPCHK(0x12353ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fb0 @ 0x12353fb0 (11 bytes, 5 insns) */
void f_12353fb0(void) {
  FTRACE(0x12353fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353fb1 mov ebp, esp */
  EBP = (ESP);
  /* 12353fb3 call dword ptr [0x123832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832e4))), 0x12353fb9u);
  /* 12353fb9 pop ebp */
  EBP = (pop32());
  /* 12353fba ret  */
  ESPCHK(0x12353fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fc0 @ 0x12353fc0 (11 bytes, 5 insns) */
void f_12353fc0(void) {
  FTRACE(0x12353fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353fc1 mov ebp, esp */
  EBP = (ESP);
  /* 12353fc3 call dword ptr [0x12383300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383300))), 0x12353fc9u);
  /* 12353fc9 pop ebp */
  EBP = (pop32());
  /* 12353fca ret  */
  ESPCHK(0x12353fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x12353fd0 (804 bytes, 236 insns) */
void f_12353fd0(void) {
  FTRACE(0x12353fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12353fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12353fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12353fd3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12353fd6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 12353fdb push 0x1237b538 */
  push32((uint32_t)(0x1237b538u));
  /* 12353fe0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12353fe2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12353fe7 call 0x123543c0 */
  push32(0x12353fecu); f_123543c0();
  /* 12353fec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12353fef mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12353ff2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12353ff6 jne 0x12354002 */
  if (!C.zf) goto L_12354002;
  /* 12353ff8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12353ffa call 0x12353330 */
  push32(0x12353fffu); f_12353330();
  /* 12353fff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12354002:;
  /* 12354002 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354005 mov dword ptr [0x12381f40], eax */
  w32((uint32_t)(0x12381f40), (EAX));
  /* 1235400a mov dword ptr [0x1238207c], 0x20 */
  w32((uint32_t)(0x1238207c), (0x20u));
  /* 12354014 jmp 0x1235401f */
  goto L_1235401f;
L_12354016:;
  /* 12354016 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354019 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235401c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1235401f:;
  /* 1235401f mov edx, dword ptr [0x12381f40] */
  EDX = (r32((uint32_t)(0x12381f40)));
  /* 12354025 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235402b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235402e jae 0x12354053 */
  if (!C.cf) goto L_12354053;
  /* 12354030 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354033 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12354037 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235403a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12354040 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354043 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12354047 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235404a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12354051 jmp 0x12354016 */
  goto L_12354016;
L_12354053:;
  /* 12354053 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12354056 push ecx */
  push32((uint32_t)(ECX));
  /* 12354057 call dword ptr [0x12383258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383258))), 0x1235405du);
  /* 1235405d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12354060 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12354066 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354068 je 0x123541f5 */
  if (C.zf) goto L_123541f5;
  /* 1235406e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354072 je 0x123541f5 */
  if (C.zf) goto L_123541f5;
  /* 12354078 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235407b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235407d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12354080 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12354083 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354086 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12354089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235408c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235408f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12354092 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354099 jge 0x123540a3 */
  if ((C.sf==C.of)) goto L_123540a3;
  /* 1235409b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1235409e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 123540a1 jmp 0x123540aa */
  goto L_123540aa;
L_123540a3:;
  /* 123540a3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_123540aa:;
  /* 123540aa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 123540ad mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123540b0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 123540b7 jmp 0x123540c2 */
  goto L_123540c2;
L_123540b9:;
  /* 123540b9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 123540bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123540bf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_123540c2:;
  /* 123540c2 mov ecx, dword ptr [0x1238207c] */
  ECX = (r32((uint32_t)(0x1238207c)));
  /* 123540c8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123540cb jge 0x12354162 */
  if ((C.sf==C.of)) goto L_12354162;
  /* 123540d1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123540d6 push 0x1237b538 */
  push32((uint32_t)(0x1237b538u));
  /* 123540db push 2 */
  push32((uint32_t)(0x2u));
  /* 123540dd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123540e2 call 0x123543c0 */
  push32(0x123540e7u); f_123543c0();
  /* 123540e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123540ea mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 123540ed cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123540f1 jne 0x123540fe */
  if (!C.zf) goto L_123540fe;
  /* 123540f3 mov edx, dword ptr [0x1238207c] */
  EDX = (r32((uint32_t)(0x1238207c)));
  /* 123540f9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123540fc jmp 0x12354162 */
  goto L_12354162;
L_123540fe:;
  /* 123540fe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12354101 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354104 mov dword ptr [eax*4 + 0x12381f40], ecx */
  w32((uint32_t)(EAX*4 + 0x12381f40), (ECX));
  /* 1235410b mov edx, dword ptr [0x1238207c] */
  EDX = (r32((uint32_t)(0x1238207c)));
  /* 12354111 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354114 mov dword ptr [0x1238207c], edx */
  w32((uint32_t)(0x1238207c), (EDX));
  /* 1235411a jmp 0x12354125 */
  goto L_12354125;
L_1235411c:;
  /* 1235411c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235411f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354122 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12354125:;
  /* 12354125 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12354128 mov edx, dword ptr [ecx*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12381f40)));
  /* 1235412f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354135 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354138 jae 0x1235415d */
  if (!C.cf) goto L_1235415d;
  /* 1235413a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235413d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12354141 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354144 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1235414a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235414d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12354151 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354154 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1235415b jmp 0x1235411c */
  goto L_1235411c;
L_1235415d:;
  /* 1235415d jmp 0x123540b9 */
  goto L_123540b9;
L_12354162:;
  /* 12354162 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12354169 jmp 0x12354186 */
  goto L_12354186;
L_1235416b:;
  /* 1235416b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1235416e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354171 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12354174 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354177 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235417a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235417d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12354180 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354183 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12354186:;
  /* 12354186 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12354189 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235418c jge 0x123541f5 */
  if ((C.sf==C.of)) goto L_123541f5;
  /* 1235418e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12354191 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354194 je 0x123541f0 */
  if (C.zf) goto L_123541f0;
  /* 12354196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354199 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235419c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1235419f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123541a1 je 0x123541f0 */
  if (C.zf) goto L_123541f0;
  /* 123541a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123541a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123541a9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 123541ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123541ae jne 0x123541c0 */
  if (!C.zf) goto L_123541c0;
  /* 123541b0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123541b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123541b5 push edx */
  push32((uint32_t)(EDX));
  /* 123541b6 call dword ptr [0x12383308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383308))), 0x123541bcu);
  /* 123541bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123541be je 0x123541f0 */
  if (C.zf) goto L_123541f0;
L_123541c0:;
  /* 123541c0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 123541c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123541c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123541c9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123541cc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123541cf mov edx, dword ptr [eax*4 + 0x12381f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 123541d6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123541d8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 123541db mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123541de mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123541e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123541e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123541e5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123541e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123541eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123541ed mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_123541f0:;
  /* 123541f0 jmp 0x1235416b */
  goto L_1235416b;
L_123541f5:;
  /* 123541f5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 123541fc jmp 0x12354207 */
  goto L_12354207;
L_123541fe:;
  /* 123541fe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12354201 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354204 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12354207:;
  /* 12354207 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235420b jge 0x123542e4 */
  if ((C.sf==C.of)) goto L_123542e4;
  /* 12354211 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12354214 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12354217 mov edx, dword ptr [0x12381f40] */
  EDX = (r32((uint32_t)(0x12381f40)));
  /* 1235421d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235421f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12354222 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354225 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354228 jne 0x123542d0 */
  if (!C.zf) goto L_123542d0;
  /* 1235422e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354231 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12354235 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354239 jne 0x12354244 */
  if (!C.zf) goto L_12354244;
  /* 1235423b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12354242 jmp 0x12354254 */
  goto L_12354254;
L_12354244:;
  /* 12354244 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12354247 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235424a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235424c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235424e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354251 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12354254:;
  /* 12354254 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12354257 push eax */
  push32((uint32_t)(EAX));
  /* 12354258 call dword ptr [0x123832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b8))), 0x1235425eu);
  /* 1235425e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12354261 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354265 je 0x123542bf */
  if (C.zf) goto L_123542bf;
  /* 12354267 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1235426a push ecx */
  push32((uint32_t)(ECX));
  /* 1235426b call dword ptr [0x12383308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383308))), 0x12354271u);
  /* 12354271 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12354274 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354278 je 0x123542bf */
  if (C.zf) goto L_123542bf;
  /* 1235427a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235427d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12354280 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12354282 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12354285 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235428b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235428e jne 0x123542a0 */
  if (!C.zf) goto L_123542a0;
  /* 12354290 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12354293 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12354296 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12354298 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235429b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1235429e jmp 0x123542bd */
  goto L_123542bd;
L_123542a0:;
  /* 123542a0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 123542a3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123542a9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123542ac jne 0x123542bd */
  if (!C.zf) goto L_123542bd;
  /* 123542ae mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123542b4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 123542b7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123542bd:;
  /* 123542bd jmp 0x123542ce */
  goto L_123542ce;
L_123542bf:;
  /* 123542bf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542c2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123542c5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 123542c8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123542ce:;
  /* 123542ce jmp 0x123542df */
  goto L_123542df;
L_123542d0:;
  /* 123542d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542d3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123542d6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 123542d9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123542dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123542df:;
  /* 123542df jmp 0x123541fe */
  goto L_123541fe;
L_123542e4:;
  /* 123542e4 mov eax, dword ptr [0x1238207c] */
  EAX = (r32((uint32_t)(0x1238207c)));
  /* 123542e9 push eax */
  push32((uint32_t)(EAX));
  /* 123542ea call dword ptr [0x12383304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383304))), 0x123542f0u);
  /* 123542f0 mov esp, ebp */
  ESP = (EBP);
  /* 123542f2 pop ebp */
  EBP = (pop32());
  /* 123542f3 ret  */
  ESPCHK(0x12353fd0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12354300 (155 bytes, 45 insns) */
void f_12354300(void) {
  FTRACE(0x12354300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354300 push ebp */
  push32((uint32_t)(EBP));
  /* 12354301 mov ebp, esp */
  EBP = (ESP);
  /* 12354303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354306 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235430d jmp 0x12354318 */
  goto L_12354318;
L_1235430f:;
  /* 1235430f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354312 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354315 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12354318:;
  /* 12354318 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235431c jge 0x12354397 */
  if ((C.sf==C.of)) goto L_12354397;
  /* 1235431e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354321 cmp dword ptr [ecx*4 + 0x12381f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12381f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354329 je 0x12354392 */
  if (C.zf) goto L_12354392;
  /* 1235432b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235432e mov eax, dword ptr [edx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 12354335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12354338 jmp 0x12354343 */
  goto L_12354343;
L_1235433a:;
  /* 1235433a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235433d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354340 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12354343:;
  /* 12354343 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354346 mov eax, dword ptr [edx*4 + 0x12381f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12381f40)));
  /* 1235434d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354352 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354355 jae 0x1235436f */
  if (!C.cf) goto L_1235436f;
  /* 12354357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235435a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235435e je 0x1235436d */
  if (C.zf) goto L_1235436d;
  /* 12354360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354363 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354366 push edx */
  push32((uint32_t)(EDX));
  /* 12354367 call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x1235436du);
L_1235436d:;
  /* 1235436d jmp 0x1235433a */
  goto L_1235433a;
L_1235436f:;
  /* 1235436f push 2 */
  push32((uint32_t)(0x2u));
  /* 12354371 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354374 mov ecx, dword ptr [eax*4 + 0x12381f40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12381f40)));
  /* 1235437b push ecx */
  push32((uint32_t)(ECX));
  /* 1235437c call 0x12354e50 */
  push32(0x12354381u); f_12354e50();
  /* 12354381 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354384 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354387 mov dword ptr [edx*4 + 0x12381f40], 0 */
  w32((uint32_t)(EDX*4 + 0x12381f40), (0x0u));
L_12354392:;
  /* 12354392 jmp 0x1235430f */
  goto L_1235430f;
L_12354397:;
  /* 12354397 mov esp, ebp */
  ESP = (EBP);
  /* 12354399 pop ebp */
  EBP = (pop32());
  /* 1235439a ret  */
  ESPCHK(0x12354300u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x123543a0 (29 bytes, 13 insns) */
void f_123543a0(void) {
  FTRACE(0x123543a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123543a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123543a1 mov ebp, esp */
  EBP = (ESP);
  /* 123543a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123543a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123543a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123543a9 mov eax, dword ptr [0x12380740] */
  EAX = (r32((uint32_t)(0x12380740)));
  /* 123543ae push eax */
  push32((uint32_t)(EAX));
  /* 123543af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123543b2 push ecx */
  push32((uint32_t)(ECX));
  /* 123543b3 call 0x12354410 */
  push32(0x123543b8u); f_12354410();
  /* 123543b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123543bb pop ebp */
  EBP = (pop32());
  /* 123543bc ret  */
  ESPCHK(0x123543a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x123543c0 (35 bytes, 16 insns) */
void f_123543c0(void) {
  FTRACE(0x123543c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123543c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123543c1 mov ebp, esp */
  EBP = (ESP);
  /* 123543c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123543c6 push eax */
  push32((uint32_t)(EAX));
  /* 123543c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123543ca push ecx */
  push32((uint32_t)(ECX));
  /* 123543cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123543ce push edx */
  push32((uint32_t)(EDX));
  /* 123543cf mov eax, dword ptr [0x12380740] */
  EAX = (r32((uint32_t)(0x12380740)));
  /* 123543d4 push eax */
  push32((uint32_t)(EAX));
  /* 123543d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123543d8 push ecx */
  push32((uint32_t)(ECX));
  /* 123543d9 call 0x12354410 */
  push32(0x123543deu); f_12354410();
  /* 123543de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123543e1 pop ebp */
  EBP = (pop32());
  /* 123543e2 ret  */
  ESPCHK(0x123543c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x123543f0 (27 bytes, 13 insns) */
void f_123543f0(void) {
  FTRACE(0x123543f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123543f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123543f1 mov ebp, esp */
  EBP = (ESP);
  /* 123543f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123543f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123543f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123543f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123543fc push eax */
  push32((uint32_t)(EAX));
  /* 123543fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354400 push ecx */
  push32((uint32_t)(ECX));
  /* 12354401 call 0x12354410 */
  push32(0x12354406u); f_12354410();
  /* 12354406 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354409 pop ebp */
  EBP = (pop32());
  /* 1235440a ret  */
  ESPCHK(0x123543f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004410 @ 0x12354410 (94 bytes, 38 insns) */
void f_12354410(void) {
  FTRACE(0x12354410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354410 push ebp */
  push32((uint32_t)(EBP));
  /* 12354411 mov ebp, esp */
  EBP = (ESP);
  /* 12354413 push ecx */
  push32((uint32_t)(ECX));
L_12354414:;
  /* 12354414 push 9 */
  push32((uint32_t)(0x9u));
  /* 12354416 call 0x12357dc0 */
  push32(0x1235441bu); f_12357dc0();
  /* 1235441b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235441e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12354421 push eax */
  push32((uint32_t)(EAX));
  /* 12354422 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12354425 push ecx */
  push32((uint32_t)(ECX));
  /* 12354426 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354429 push edx */
  push32((uint32_t)(EDX));
  /* 1235442a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235442d push eax */
  push32((uint32_t)(EAX));
  /* 1235442e call 0x12354490 */
  push32(0x12354433u); f_12354490();
  /* 12354433 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354436 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12354439 push 9 */
  push32((uint32_t)(0x9u));
  /* 1235443b call 0x12357e60 */
  push32(0x12354440u); f_12357e60();
  /* 12354440 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354443 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354447 jne 0x1235444f */
  if (!C.zf) goto L_1235444f;
  /* 12354449 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235444d jne 0x12354454 */
  if (!C.zf) goto L_12354454;
L_1235444f:;
  /* 1235444f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354452 jmp 0x1235446a */
  goto L_1235446a;
L_12354454:;
  /* 12354454 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354457 push ecx */
  push32((uint32_t)(ECX));
  /* 12354458 call 0x12358100 */
  push32(0x1235445du); f_12358100();
  /* 1235445d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354460 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354462 jne 0x12354468 */
  if (!C.zf) goto L_12354468;
  /* 12354464 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354466 jmp 0x1235446a */
  goto L_1235446a;
L_12354468:;
  /* 12354468 jmp 0x12354414 */
  goto L_12354414;
L_1235446a:;
  /* 1235446a mov esp, ebp */
  ESP = (EBP);
  /* 1235446c pop ebp */
  EBP = (pop32());
  /* 1235446d ret  */
  ESPCHK(0x12354410u, _esp0);
  ESP += 4; return;
}

/* FUN_10004470 @ 0x12354470 (23 bytes, 11 insns) */
void f_12354470(void) {
  FTRACE(0x12354470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354470 push ebp */
  push32((uint32_t)(EBP));
  /* 12354471 mov ebp, esp */
  EBP = (ESP);
  /* 12354473 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354475 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354477 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354479 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235447c push eax */
  push32((uint32_t)(EAX));
  /* 1235447d call 0x12354490 */
  push32(0x12354482u); f_12354490();
  /* 12354482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354485 pop ebp */
  EBP = (pop32());
  /* 12354486 ret  */
  ESPCHK(0x12354470u, _esp0);
  ESP += 4; return;
}

/* FUN_10004490 @ 0x12354490 (787 bytes, 254 insns) */
void f_12354490(void) {
  FTRACE(0x12354490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354490 push ebp */
  push32((uint32_t)(EBP));
  /* 12354491 mov ebp, esp */
  EBP = (ESP);
  /* 12354493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354496 push ebx */
  push32((uint32_t)(EBX));
  /* 12354497 push esi */
  push32((uint32_t)(ESI));
  /* 12354498 push edi */
  push32((uint32_t)(EDI));
  /* 12354499 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123544a0 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 123544a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123544a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123544aa je 0x123544dc */
  if (C.zf) goto L_123544dc;
L_123544ac:;
  /* 123544ac call 0x12355560 */
  push32(0x123544b1u); f_12355560();
  /* 123544b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123544b3 jne 0x123544d6 */
  if (!C.zf) goto L_123544d6;
  /* 123544b5 push 0x1237b62c */
  push32((uint32_t)(0x1237b62cu));
  /* 123544ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123544bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 123544c1 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 123544c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123544c8 call 0x12353480 */
  push32(0x123544cdu); f_12353480();
  /* 123544cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123544d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123544d3 jne 0x123544d6 */
  if (!C.zf) goto L_123544d6;
  /* 123544d5 int3  */
  x86_unimpl("int3 @ 0x123544d5");
L_123544d6:;
  /* 123544d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123544d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123544da jne 0x123544ac */
  if (!C.zf) goto L_123544ac;
L_123544dc:;
  /* 123544dc mov edx, dword ptr [0x1237ea88] */
  EDX = (r32((uint32_t)(0x1237ea88)));
  /* 123544e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123544e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123544e8 cmp eax, dword ptr [0x1237ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123544ee jne 0x123544f1 */
  if (!C.zf) goto L_123544f1;
  /* 123544f0 int3  */
  x86_unimpl("int3 @ 0x123544f0");
L_123544f1:;
  /* 123544f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123544f4 push ecx */
  push32((uint32_t)(ECX));
  /* 123544f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123544f8 push edx */
  push32((uint32_t)(EDX));
  /* 123544f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123544fc push eax */
  push32((uint32_t)(EAX));
  /* 123544fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354500 push ecx */
  push32((uint32_t)(ECX));
  /* 12354501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354504 push edx */
  push32((uint32_t)(EDX));
  /* 12354505 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354507 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354509 call dword ptr [0x1237ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237ec90))), 0x1235450fu);
  /* 1235450f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354514 jne 0x12354574 */
  if (!C.zf) goto L_12354574;
  /* 12354516 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235451a je 0x12354547 */
  if (C.zf) goto L_12354547;
L_1235451c:;
  /* 1235451c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235451f push eax */
  push32((uint32_t)(EAX));
  /* 12354520 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354523 push ecx */
  push32((uint32_t)(ECX));
  /* 12354524 push 0x1237b5e8 */
  push32((uint32_t)(0x1237b5e8u));
  /* 12354529 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235452b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235452d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235452f push 0 */
  push32((uint32_t)(0x0u));
  /* 12354531 call 0x12353480 */
  push32(0x12354536u); f_12353480();
  /* 12354536 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354539 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235453c jne 0x1235453f */
  if (!C.zf) goto L_1235453f;
  /* 1235453e int3  */
  x86_unimpl("int3 @ 0x1235453e");
L_1235453f:;
  /* 1235453f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354541 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354543 jne 0x1235451c */
  if (!C.zf) goto L_1235451c;
  /* 12354545 jmp 0x1235456d */
  goto L_1235456d;
L_12354547:;
  /* 12354547 push 0x1237b5c4 */
  push32((uint32_t)(0x1237b5c4u));
  /* 1235454c push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12354551 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354553 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354555 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354559 call 0x12353480 */
  push32(0x1235455eu); f_12353480();
  /* 1235455e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354561 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354564 jne 0x12354567 */
  if (!C.zf) goto L_12354567;
  /* 12354566 int3  */
  x86_unimpl("int3 @ 0x12354566");
L_12354567:;
  /* 12354567 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235456b jne 0x12354547 */
  if (!C.zf) goto L_12354547;
L_1235456d:;
  /* 1235456d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235456f jmp 0x1235479c */
  goto L_1235479c;
L_12354574:;
  /* 12354574 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354577 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235457d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354580 je 0x12354596 */
  if (C.zf) goto L_12354596;
  /* 12354582 mov edx, dword ptr [0x1237ea84] */
  EDX = (r32((uint32_t)(0x1237ea84)));
  /* 12354588 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1235458b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235458d jne 0x12354596 */
  if (!C.zf) goto L_12354596;
  /* 1235458f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12354596:;
  /* 12354596 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235459a ja 0x123545a7 */
  if ((!C.cf&&!C.zf)) goto L_123545a7;
  /* 1235459c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235459f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123545a2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545a5 jbe 0x123545d3 */
  if ((C.cf||C.zf)) goto L_123545d3;
L_123545a7:;
  /* 123545a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123545aa push ecx */
  push32((uint32_t)(ECX));
  /* 123545ab push 0x1237b59c */
  push32((uint32_t)(0x1237b59cu));
  /* 123545b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123545b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123545b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123545b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123545b8 call 0x12353480 */
  push32(0x123545bdu); f_12353480();
  /* 123545bd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123545c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545c3 jne 0x123545c6 */
  if (!C.zf) goto L_123545c6;
  /* 123545c5 int3  */
  x86_unimpl("int3 @ 0x123545c5");
L_123545c6:;
  /* 123545c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123545c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123545ca jne 0x123545a7 */
  if (!C.zf) goto L_123545a7;
  /* 123545cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123545ce jmp 0x1235479c */
  goto L_1235479c;
L_123545d3:;
  /* 123545d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123545d6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123545db cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545de je 0x12354620 */
  if (C.zf) goto L_12354620;
  /* 123545e0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545e4 je 0x12354620 */
  if (C.zf) goto L_12354620;
  /* 123545e6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123545e9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123545ef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545f2 je 0x12354620 */
  if (C.zf) goto L_12354620;
  /* 123545f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123545f8 je 0x12354620 */
  if (C.zf) goto L_12354620;
L_123545fa:;
  /* 123545fa push 0x1237b568 */
  push32((uint32_t)(0x1237b568u));
  /* 123545ff push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12354604 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235460a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235460c call 0x12353480 */
  push32(0x12354611u); f_12353480();
  /* 12354611 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354614 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354617 jne 0x1235461a */
  if (!C.zf) goto L_1235461a;
  /* 12354619 int3  */
  x86_unimpl("int3 @ 0x12354619");
L_1235461a:;
  /* 1235461a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235461c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235461e jne 0x123545fa */
  if (!C.zf) goto L_123545fa;
L_12354620:;
  /* 12354620 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354623 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354626 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12354629 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235462c push ecx */
  push32((uint32_t)(ECX));
  /* 1235462d call 0x12358210 */
  push32(0x12354632u); f_12358210();
  /* 12354632 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354635 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12354638 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235463c jne 0x12354645 */
  if (!C.zf) goto L_12354645;
  /* 1235463e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354640 jmp 0x1235479c */
  goto L_1235479c;
L_12354645:;
  /* 12354645 mov edx, dword ptr [0x1237ea88] */
  EDX = (r32((uint32_t)(0x1237ea88)));
  /* 1235464b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235464e mov dword ptr [0x1237ea88], edx */
  w32((uint32_t)(0x1237ea88), (EDX));
  /* 12354654 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354658 je 0x123546a3 */
  if (C.zf) goto L_123546a3;
  /* 1235465a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235465d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12354663 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354666 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1235466d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354670 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12354677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235467a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12354681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354687 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1235468a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235468d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12354694 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354697 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1235469e jmp 0x12354743 */
  goto L_12354743;
L_123546a3:;
  /* 123546a3 mov edx, dword ptr [0x123805a4] */
  EDX = (r32((uint32_t)(0x123805a4)));
  /* 123546a9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123546ac mov dword ptr [0x123805a4], edx */
  w32((uint32_t)(0x123805a4), (EDX));
  /* 123546b2 mov eax, dword ptr [0x123805ac] */
  EAX = (r32((uint32_t)(0x123805ac)));
  /* 123546b7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123546ba mov dword ptr [0x123805ac], eax */
  w32((uint32_t)(0x123805ac), (EAX));
  /* 123546bf mov ecx, dword ptr [0x123805ac] */
  ECX = (r32((uint32_t)(0x123805ac)));
  /* 123546c5 cmp ecx, dword ptr [0x123805b0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123805b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123546cb jbe 0x123546d9 */
  if ((C.cf||C.zf)) goto L_123546d9;
  /* 123546cd mov edx, dword ptr [0x123805ac] */
  EDX = (r32((uint32_t)(0x123805ac)));
  /* 123546d3 mov dword ptr [0x123805b0], edx */
  w32((uint32_t)(0x123805b0), (EDX));
L_123546d9:;
  /* 123546d9 cmp dword ptr [0x123805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123546e0 je 0x123546ef */
  if (C.zf) goto L_123546ef;
  /* 123546e2 mov eax, dword ptr [0x123805a8] */
  EAX = (r32((uint32_t)(0x123805a8)));
  /* 123546e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123546ea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123546ed jmp 0x123546f8 */
  goto L_123546f8;
L_123546ef:;
  /* 123546ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123546f2 mov dword ptr [0x123805a0], edx */
  w32((uint32_t)(0x123805a0), (EDX));
L_123546f8:;
  /* 123546f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123546fb mov ecx, dword ptr [0x123805a8] */
  ECX = (r32((uint32_t)(0x123805a8)));
  /* 12354701 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12354703 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354706 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1235470d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354710 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354713 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12354716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354719 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235471c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1235471f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354722 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354725 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12354728 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235472b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235472e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12354731 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354737 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1235473a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235473d mov dword ptr [0x123805a8], ecx */
  w32((uint32_t)(0x123805a8), (ECX));
L_12354743:;
  /* 12354743 push 4 */
  push32((uint32_t)(0x4u));
  /* 12354745 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354747 mov dl, byte ptr [0x1237ea90] */
  DL = (r8((uint32_t)(0x1237ea90)));
  /* 1235474d push edx */
  push32((uint32_t)(EDX));
  /* 1235474e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354751 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354754 push eax */
  push32((uint32_t)(EAX));
  /* 12354755 call 0x12358130 */
  push32(0x1235475au); f_12358130();
  /* 1235475a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235475d push 4 */
  push32((uint32_t)(0x4u));
  /* 1235475f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354761 mov cl, byte ptr [0x1237ea90] */
  CL = (r8((uint32_t)(0x1237ea90)));
  /* 12354767 push ecx */
  push32((uint32_t)(ECX));
  /* 12354768 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235476b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235476e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12354772 push ecx */
  push32((uint32_t)(ECX));
  /* 12354773 call 0x12358130 */
  push32(0x12354778u); f_12358130();
  /* 12354778 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235477b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235477e push edx */
  push32((uint32_t)(EDX));
  /* 1235477f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354781 mov al, byte ptr [0x1237ea92] */
  AL = (r8((uint32_t)(0x1237ea92)));
  /* 12354786 push eax */
  push32((uint32_t)(EAX));
  /* 12354787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235478a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235478d push ecx */
  push32((uint32_t)(ECX));
  /* 1235478e call 0x12358130 */
  push32(0x12354793u); f_12358130();
  /* 12354793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354799 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1235479c:;
  /* 1235479c pop edi */
  EDI = (pop32());
  /* 1235479d pop esi */
  ESI = (pop32());
  /* 1235479e pop ebx */
  EBX = (pop32());
  /* 1235479f mov esp, ebp */
  ESP = (EBP);
  /* 123547a1 pop ebp */
  EBP = (pop32());
  /* 123547a2 ret  */
  ESPCHK(0x12354490u, _esp0);
  ESP += 4; return;
}

/* FUN_100047b0 @ 0x123547b0 (27 bytes, 13 insns) */
void f_123547b0(void) {
  FTRACE(0x123547b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123547b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123547b1 mov ebp, esp */
  EBP = (ESP);
  /* 123547b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123547b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123547b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123547b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123547bc push eax */
  push32((uint32_t)(EAX));
  /* 123547bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123547c0 push ecx */
  push32((uint32_t)(ECX));
  /* 123547c1 call 0x123547d0 */
  push32(0x123547c6u); f_123547d0();
  /* 123547c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123547c9 pop ebp */
  EBP = (pop32());
  /* 123547ca ret  */
  ESPCHK(0x123547b0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x123547d0 (96 bytes, 37 insns) */
void f_123547d0(void) {
  FTRACE(0x123547d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123547d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123547d1 mov ebp, esp */
  EBP = (ESP);
  /* 123547d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123547d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123547d9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123547dd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 123547e0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123547e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123547e4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 123547e7 push edx */
  push32((uint32_t)(EDX));
  /* 123547e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123547eb push eax */
  push32((uint32_t)(EAX));
  /* 123547ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123547ef push ecx */
  push32((uint32_t)(ECX));
  /* 123547f0 call 0x123543c0 */
  push32(0x123547f5u); f_123543c0();
  /* 123547f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123547f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123547fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123547ff je 0x12354829 */
  if (C.zf) goto L_12354829;
  /* 12354801 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354804 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12354807 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235480a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235480d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12354810:;
  /* 12354810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354813 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354816 jae 0x12354829 */
  if (!C.cf) goto L_12354829;
  /* 12354818 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235481b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1235481e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354821 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354824 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12354827 jmp 0x12354810 */
  goto L_12354810;
L_12354829:;
  /* 12354829 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235482c mov esp, ebp */
  ESP = (EBP);
  /* 1235482e pop ebp */
  EBP = (pop32());
  /* 1235482f ret  */
  ESPCHK(0x123547d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004830 @ 0x12354830 (27 bytes, 13 insns) */
void f_12354830(void) {
  FTRACE(0x12354830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354830 push ebp */
  push32((uint32_t)(EBP));
  /* 12354831 mov ebp, esp */
  EBP = (ESP);
  /* 12354833 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354835 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354837 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354839 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235483c push eax */
  push32((uint32_t)(EAX));
  /* 1235483d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354840 push ecx */
  push32((uint32_t)(ECX));
  /* 12354841 call 0x12354850 */
  push32(0x12354846u); f_12354850();
  /* 12354846 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354849 pop ebp */
  EBP = (pop32());
  /* 1235484a ret  */
  ESPCHK(0x12354830u, _esp0);
  ESP += 4; return;
}

/* FUN_10004850 @ 0x12354850 (64 bytes, 27 insns) */
void f_12354850(void) {
  FTRACE(0x12354850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354850 push ebp */
  push32((uint32_t)(EBP));
  /* 12354851 mov ebp, esp */
  EBP = (ESP);
  /* 12354853 push ecx */
  push32((uint32_t)(ECX));
  /* 12354854 push 9 */
  push32((uint32_t)(0x9u));
  /* 12354856 call 0x12357dc0 */
  push32(0x1235485bu); f_12357dc0();
  /* 1235485b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235485e push 1 */
  push32((uint32_t)(0x1u));
  /* 12354860 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12354863 push eax */
  push32((uint32_t)(EAX));
  /* 12354864 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12354867 push ecx */
  push32((uint32_t)(ECX));
  /* 12354868 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235486b push edx */
  push32((uint32_t)(EDX));
  /* 1235486c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235486f push eax */
  push32((uint32_t)(EAX));
  /* 12354870 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354873 push ecx */
  push32((uint32_t)(ECX));
  /* 12354874 call 0x12354890 */
  push32(0x12354879u); f_12354890();
  /* 12354879 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235487c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235487f push 9 */
  push32((uint32_t)(0x9u));
  /* 12354881 call 0x12357e60 */
  push32(0x12354886u); f_12357e60();
  /* 12354886 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235488c mov esp, ebp */
  ESP = (EBP);
  /* 1235488e pop ebp */
  EBP = (pop32());
  /* 1235488f ret  */
  ESPCHK(0x12354850u, _esp0);
  ESP += 4; return;
}

/* FUN_10004890 @ 0x12354890 (1297 bytes, 431 insns) */
void f_12354890(void) {
  FTRACE(0x12354890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354890 push ebp */
  push32((uint32_t)(EBP));
  /* 12354891 mov ebp, esp */
  EBP = (ESP);
  /* 12354893 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354896 push ebx */
  push32((uint32_t)(EBX));
  /* 12354897 push esi */
  push32((uint32_t)(ESI));
  /* 12354898 push edi */
  push32((uint32_t)(EDI));
  /* 12354899 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 123548a0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123548a4 jne 0x123548c3 */
  if (!C.zf) goto L_123548c3;
  /* 123548a6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123548a9 push eax */
  push32((uint32_t)(EAX));
  /* 123548aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123548ad push ecx */
  push32((uint32_t)(ECX));
  /* 123548ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123548b1 push edx */
  push32((uint32_t)(EDX));
  /* 123548b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123548b5 push eax */
  push32((uint32_t)(EAX));
  /* 123548b6 call 0x123543c0 */
  push32(0x123548bbu); f_123543c0();
  /* 123548bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123548be jmp 0x12354d9a */
  goto L_12354d9a;
L_123548c3:;
  /* 123548c3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123548c7 je 0x123548e6 */
  if (C.zf) goto L_123548e6;
  /* 123548c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123548cd jne 0x123548e6 */
  if (!C.zf) goto L_123548e6;
  /* 123548cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123548d2 push ecx */
  push32((uint32_t)(ECX));
  /* 123548d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123548d6 push edx */
  push32((uint32_t)(EDX));
  /* 123548d7 call 0x12354e50 */
  push32(0x123548dcu); f_12354e50();
  /* 123548dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123548df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123548e1 jmp 0x12354d9a */
  goto L_12354d9a;
L_123548e6:;
  /* 123548e6 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 123548eb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123548ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123548f0 je 0x12354922 */
  if (C.zf) goto L_12354922;
L_123548f2:;
  /* 123548f2 call 0x12355560 */
  push32(0x123548f7u); f_12355560();
  /* 123548f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123548f9 jne 0x1235491c */
  if (!C.zf) goto L_1235491c;
  /* 123548fb push 0x1237b62c */
  push32((uint32_t)(0x1237b62cu));
  /* 12354900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354902 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12354907 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 1235490c push 2 */
  push32((uint32_t)(0x2u));
  /* 1235490e call 0x12353480 */
  push32(0x12354913u); f_12353480();
  /* 12354913 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354916 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354919 jne 0x1235491c */
  if (!C.zf) goto L_1235491c;
  /* 1235491b int3  */
  x86_unimpl("int3 @ 0x1235491b");
L_1235491c:;
  /* 1235491c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235491e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354920 jne 0x123548f2 */
  if (!C.zf) goto L_123548f2;
L_12354922:;
  /* 12354922 mov edx, dword ptr [0x1237ea88] */
  EDX = (r32((uint32_t)(0x1237ea88)));
  /* 12354928 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1235492b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235492e cmp eax, dword ptr [0x1237ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354934 jne 0x12354937 */
  if (!C.zf) goto L_12354937;
  /* 12354936 int3  */
  x86_unimpl("int3 @ 0x12354936");
L_12354937:;
  /* 12354937 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235493a push ecx */
  push32((uint32_t)(ECX));
  /* 1235493b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235493e push edx */
  push32((uint32_t)(EDX));
  /* 1235493f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12354942 push eax */
  push32((uint32_t)(EAX));
  /* 12354943 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354946 push ecx */
  push32((uint32_t)(ECX));
  /* 12354947 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235494a push edx */
  push32((uint32_t)(EDX));
  /* 1235494b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235494e push eax */
  push32((uint32_t)(EAX));
  /* 1235494f push 2 */
  push32((uint32_t)(0x2u));
  /* 12354951 call dword ptr [0x1237ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237ec90))), 0x12354957u);
  /* 12354957 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235495a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235495c jne 0x123549bc */
  if (!C.zf) goto L_123549bc;
  /* 1235495e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354962 je 0x1235498f */
  if (C.zf) goto L_1235498f;
L_12354964:;
  /* 12354964 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12354967 push ecx */
  push32((uint32_t)(ECX));
  /* 12354968 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235496b push edx */
  push32((uint32_t)(EDX));
  /* 1235496c push 0x1237b7a8 */
  push32((uint32_t)(0x1237b7a8u));
  /* 12354971 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354975 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354977 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354979 call 0x12353480 */
  push32(0x1235497eu); f_12353480();
  /* 1235497e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354981 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354984 jne 0x12354987 */
  if (!C.zf) goto L_12354987;
  /* 12354986 int3  */
  x86_unimpl("int3 @ 0x12354986");
L_12354987:;
  /* 12354987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235498b jne 0x12354964 */
  if (!C.zf) goto L_12354964;
  /* 1235498d jmp 0x123549b5 */
  goto L_123549b5;
L_1235498f:;
  /* 1235498f push 0x1237b784 */
  push32((uint32_t)(0x1237b784u));
  /* 12354994 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12354999 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235499b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235499d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235499f push 0 */
  push32((uint32_t)(0x0u));
  /* 123549a1 call 0x12353480 */
  push32(0x123549a6u); f_12353480();
  /* 123549a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123549a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123549ac jne 0x123549af */
  if (!C.zf) goto L_123549af;
  /* 123549ae int3  */
  x86_unimpl("int3 @ 0x123549ae");
L_123549af:;
  /* 123549af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123549b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123549b3 jne 0x1235498f */
  if (!C.zf) goto L_1235498f;
L_123549b5:;
  /* 123549b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123549b7 jmp 0x12354d9a */
  goto L_12354d9a;
L_123549bc:;
  /* 123549bc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123549c0 jbe 0x123549ee */
  if ((C.cf||C.zf)) goto L_123549ee;
L_123549c2:;
  /* 123549c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123549c5 push edx */
  push32((uint32_t)(EDX));
  /* 123549c6 push 0x1237b754 */
  push32((uint32_t)(0x1237b754u));
  /* 123549cb push 0 */
  push32((uint32_t)(0x0u));
  /* 123549cd push 0 */
  push32((uint32_t)(0x0u));
  /* 123549cf push 0 */
  push32((uint32_t)(0x0u));
  /* 123549d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 123549d3 call 0x12353480 */
  push32(0x123549d8u); f_12353480();
  /* 123549d8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123549db cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123549de jne 0x123549e1 */
  if (!C.zf) goto L_123549e1;
  /* 123549e0 int3  */
  x86_unimpl("int3 @ 0x123549e0");
L_123549e1:;
  /* 123549e1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123549e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123549e5 jne 0x123549c2 */
  if (!C.zf) goto L_123549c2;
  /* 123549e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123549e9 jmp 0x12354d9a */
  goto L_12354d9a;
L_123549ee:;
  /* 123549ee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123549f2 je 0x12354a36 */
  if (C.zf) goto L_12354a36;
  /* 123549f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123549f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123549fd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a00 je 0x12354a36 */
  if (C.zf) goto L_12354a36;
  /* 12354a02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354a05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12354a0b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a0e je 0x12354a36 */
  if (C.zf) goto L_12354a36;
L_12354a10:;
  /* 12354a10 push 0x1237b568 */
  push32((uint32_t)(0x1237b568u));
  /* 12354a15 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12354a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12354a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12354a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12354a20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354a22 call 0x12353480 */
  push32(0x12354a27u); f_12353480();
  /* 12354a27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354a2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a2d jne 0x12354a30 */
  if (!C.zf) goto L_12354a30;
  /* 12354a2f int3  */
  x86_unimpl("int3 @ 0x12354a2f");
L_12354a30:;
  /* 12354a30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354a32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354a34 jne 0x12354a10 */
  if (!C.zf) goto L_12354a10;
L_12354a36:;
  /* 12354a36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354a39 push ecx */
  push32((uint32_t)(ECX));
  /* 12354a3a call 0x123559c0 */
  push32(0x12354a3fu); f_123559c0();
  /* 12354a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354a44 jne 0x12354a67 */
  if (!C.zf) goto L_12354a67;
  /* 12354a46 push 0x1237b730 */
  push32((uint32_t)(0x1237b730u));
  /* 12354a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12354a4d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12354a52 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354a57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354a59 call 0x12353480 */
  push32(0x12354a5eu); f_12353480();
  /* 12354a5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354a61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a64 jne 0x12354a67 */
  if (!C.zf) goto L_12354a67;
  /* 12354a66 int3  */
  x86_unimpl("int3 @ 0x12354a66");
L_12354a67:;
  /* 12354a67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354a69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354a6b jne 0x12354a36 */
  if (!C.zf) goto L_12354a36;
  /* 12354a6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354a70 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354a73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12354a76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354a79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a7d jne 0x12354a86 */
  if (!C.zf) goto L_12354a86;
  /* 12354a7f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12354a86:;
  /* 12354a86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a8a je 0x12354aca */
  if (C.zf) goto L_12354aca;
L_12354a8c:;
  /* 12354a8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354a8f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a96 jne 0x12354aa1 */
  if (!C.zf) goto L_12354aa1;
  /* 12354a98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354a9b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354a9f je 0x12354ac2 */
  if (C.zf) goto L_12354ac2;
L_12354aa1:;
  /* 12354aa1 push 0x1237b6e8 */
  push32((uint32_t)(0x1237b6e8u));
  /* 12354aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354aa8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12354aad push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354ab4 call 0x12353480 */
  push32(0x12354ab9u); f_12353480();
  /* 12354ab9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354abc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354abf jne 0x12354ac2 */
  if (!C.zf) goto L_12354ac2;
  /* 12354ac1 int3  */
  x86_unimpl("int3 @ 0x12354ac1");
L_12354ac2:;
  /* 12354ac2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354ac4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354ac6 jne 0x12354a8c */
  if (!C.zf) goto L_12354a8c;
  /* 12354ac8 jmp 0x12354b2e */
  goto L_12354b2e;
L_12354aca:;
  /* 12354aca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354acd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12354ad0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12354ad5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354ad8 jne 0x12354aef */
  if (!C.zf) goto L_12354aef;
  /* 12354ada mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354add and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12354ae3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354ae6 jne 0x12354aef */
  if (!C.zf) goto L_12354aef;
  /* 12354ae8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12354aef:;
  /* 12354aef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354af2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12354af5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12354afa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354afd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12354b03 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b05 je 0x12354b28 */
  if (C.zf) goto L_12354b28;
  /* 12354b07 push 0x1237b6ac */
  push32((uint32_t)(0x1237b6acu));
  /* 12354b0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12354b0e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12354b13 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354b18 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354b1a call 0x12353480 */
  push32(0x12354b1fu); f_12353480();
  /* 12354b1f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b22 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b25 jne 0x12354b28 */
  if (!C.zf) goto L_12354b28;
  /* 12354b27 int3  */
  x86_unimpl("int3 @ 0x12354b27");
L_12354b28:;
  /* 12354b28 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354b2a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354b2c jne 0x12354aef */
  if (!C.zf) goto L_12354aef;
L_12354b2e:;
  /* 12354b2e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b32 je 0x12354b59 */
  if (C.zf) goto L_12354b59;
  /* 12354b34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354b37 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b3a push eax */
  push32((uint32_t)(EAX));
  /* 12354b3b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354b3e push ecx */
  push32((uint32_t)(ECX));
  /* 12354b3f call 0x12358340 */
  push32(0x12354b44u); f_12358340();
  /* 12354b44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12354b4a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b4e jne 0x12354b57 */
  if (!C.zf) goto L_12354b57;
  /* 12354b50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354b52 jmp 0x12354d9a */
  goto L_12354d9a;
L_12354b57:;
  /* 12354b57 jmp 0x12354b7c */
  goto L_12354b7c;
L_12354b59:;
  /* 12354b59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354b5c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b5f push edx */
  push32((uint32_t)(EDX));
  /* 12354b60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12354b63 push eax */
  push32((uint32_t)(EAX));
  /* 12354b64 call 0x12358290 */
  push32(0x12354b69u); f_12358290();
  /* 12354b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12354b6f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b73 jne 0x12354b7c */
  if (!C.zf) goto L_12354b7c;
  /* 12354b75 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354b77 jmp 0x12354d9a */
  goto L_12354d9a;
L_12354b7c:;
  /* 12354b7c mov ecx, dword ptr [0x1237ea88] */
  ECX = (r32((uint32_t)(0x1237ea88)));
  /* 12354b82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354b85 mov dword ptr [0x1237ea88], ecx */
  w32((uint32_t)(0x1237ea88), (ECX));
  /* 12354b8b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354b8f jne 0x12354be7 */
  if (!C.zf) goto L_12354be7;
  /* 12354b91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354b94 mov eax, dword ptr [0x123805a4] */
  EAX = (r32((uint32_t)(0x123805a4)));
  /* 12354b99 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354b9c mov dword ptr [0x123805a4], eax */
  w32((uint32_t)(0x123805a4), (EAX));
  /* 12354ba1 mov ecx, dword ptr [0x123805a4] */
  ECX = (r32((uint32_t)(0x123805a4)));
  /* 12354ba7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354baa mov dword ptr [0x123805a4], ecx */
  w32((uint32_t)(0x123805a4), (ECX));
  /* 12354bb0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354bb3 mov eax, dword ptr [0x123805ac] */
  EAX = (r32((uint32_t)(0x123805ac)));
  /* 12354bb8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354bbb mov dword ptr [0x123805ac], eax */
  w32((uint32_t)(0x123805ac), (EAX));
  /* 12354bc0 mov ecx, dword ptr [0x123805ac] */
  ECX = (r32((uint32_t)(0x123805ac)));
  /* 12354bc6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354bc9 mov dword ptr [0x123805ac], ecx */
  w32((uint32_t)(0x123805ac), (ECX));
  /* 12354bcf mov edx, dword ptr [0x123805ac] */
  EDX = (r32((uint32_t)(0x123805ac)));
  /* 12354bd5 cmp edx, dword ptr [0x123805b0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123805b0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354bdb jbe 0x12354be7 */
  if ((C.cf||C.zf)) goto L_12354be7;
  /* 12354bdd mov eax, dword ptr [0x123805ac] */
  EAX = (r32((uint32_t)(0x123805ac)));
  /* 12354be2 mov dword ptr [0x123805b0], eax */
  w32((uint32_t)(0x123805b0), (EAX));
L_12354be7:;
  /* 12354be7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354bea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354bed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12354bf0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354bf3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354bf6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354bf9 jbe 0x12354c1f */
  if ((C.cf||C.zf)) goto L_12354c1f;
  /* 12354bfb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354bfe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354c01 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354c04 push edx */
  push32((uint32_t)(EDX));
  /* 12354c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354c07 mov al, byte ptr [0x1237ea92] */
  AL = (r8((uint32_t)(0x1237ea92)));
  /* 12354c0c push eax */
  push32((uint32_t)(EAX));
  /* 12354c0d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c10 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354c13 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354c16 push edx */
  push32((uint32_t)(EDX));
  /* 12354c17 call 0x12358130 */
  push32(0x12354c1cu); f_12358130();
  /* 12354c1c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12354c1f:;
  /* 12354c1f push 4 */
  push32((uint32_t)(0x4u));
  /* 12354c21 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354c23 mov al, byte ptr [0x1237ea90] */
  AL = (r8((uint32_t)(0x1237ea90)));
  /* 12354c28 push eax */
  push32((uint32_t)(EAX));
  /* 12354c29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354c2c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354c2f push ecx */
  push32((uint32_t)(ECX));
  /* 12354c30 call 0x12358130 */
  push32(0x12354c35u); f_12358130();
  /* 12354c35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354c38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354c3c jne 0x12354c59 */
  if (!C.zf) goto L_12354c59;
  /* 12354c3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c41 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12354c44 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12354c47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12354c4d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12354c50 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c53 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12354c56 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12354c59:;
  /* 12354c59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c5c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354c5f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12354c62:;
  /* 12354c62 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354c66 jne 0x12354c97 */
  if (!C.zf) goto L_12354c97;
  /* 12354c68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354c6c jne 0x12354c76 */
  if (!C.zf) goto L_12354c76;
  /* 12354c6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354c71 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354c74 je 0x12354c97 */
  if (C.zf) goto L_12354c97;
L_12354c76:;
  /* 12354c76 push 0x1237b678 */
  push32((uint32_t)(0x1237b678u));
  /* 12354c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12354c7d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12354c82 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354c89 call 0x12353480 */
  push32(0x12354c8eu); f_12353480();
  /* 12354c8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354c91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354c94 jne 0x12354c97 */
  if (!C.zf) goto L_12354c97;
  /* 12354c96 int3  */
  x86_unimpl("int3 @ 0x12354c96");
L_12354c97:;
  /* 12354c97 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354c99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354c9b jne 0x12354c62 */
  if (!C.zf) goto L_12354c62;
  /* 12354c9d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354ca0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354ca3 je 0x12354cab */
  if (C.zf) goto L_12354cab;
  /* 12354ca5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354ca9 je 0x12354cb3 */
  if (C.zf) goto L_12354cb3;
L_12354cab:;
  /* 12354cab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354cae jmp 0x12354d9a */
  goto L_12354d9a;
L_12354cb3:;
  /* 12354cb3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354cb6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354cb9 je 0x12354ccb */
  if (C.zf) goto L_12354ccb;
  /* 12354cbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354cbe mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12354cc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354cc3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12354cc6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12354cc9 jmp 0x12354d07 */
  goto L_12354d07;
L_12354ccb:;
  /* 12354ccb mov eax, dword ptr [0x123805a0] */
  EAX = (r32((uint32_t)(0x123805a0)));
  /* 12354cd0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354cd3 je 0x12354cf6 */
  if (C.zf) goto L_12354cf6;
  /* 12354cd5 push 0x1237b65c */
  push32((uint32_t)(0x1237b65cu));
  /* 12354cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12354cdc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12354ce1 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354ce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354ce8 call 0x12353480 */
  push32(0x12354cedu); f_12353480();
  /* 12354ced add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354cf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354cf3 jne 0x12354cf6 */
  if (!C.zf) goto L_12354cf6;
  /* 12354cf5 int3  */
  x86_unimpl("int3 @ 0x12354cf5");
L_12354cf6:;
  /* 12354cf6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354cf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354cfa jne 0x12354ccb */
  if (!C.zf) goto L_12354ccb;
  /* 12354cfc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354cff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12354d02 mov dword ptr [0x123805a0], eax */
  w32((uint32_t)(0x123805a0), (EAX));
L_12354d07:;
  /* 12354d07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d0a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354d0e je 0x12354d1f */
  if (C.zf) goto L_12354d1f;
  /* 12354d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d13 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12354d16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12354d1b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12354d1d jmp 0x12354d5a */
  goto L_12354d5a;
L_12354d1f:;
  /* 12354d1f mov eax, dword ptr [0x123805a8] */
  EAX = (r32((uint32_t)(0x123805a8)));
  /* 12354d24 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354d27 je 0x12354d4a */
  if (C.zf) goto L_12354d4a;
  /* 12354d29 push 0x1237b640 */
  push32((uint32_t)(0x1237b640u));
  /* 12354d2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12354d30 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12354d35 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12354d3c call 0x12353480 */
  push32(0x12354d41u); f_12353480();
  /* 12354d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354d44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354d47 jne 0x12354d4a */
  if (!C.zf) goto L_12354d4a;
  /* 12354d49 int3  */
  x86_unimpl("int3 @ 0x12354d49");
L_12354d4a:;
  /* 12354d4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354d4e jne 0x12354d1f */
  if (!C.zf) goto L_12354d1f;
  /* 12354d50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d53 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12354d55 mov dword ptr [0x123805a8], eax */
  w32((uint32_t)(0x123805a8), (EAX));
L_12354d5a:;
  /* 12354d5a cmp dword ptr [0x123805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354d61 je 0x12354d71 */
  if (C.zf) goto L_12354d71;
  /* 12354d63 mov ecx, dword ptr [0x123805a8] */
  ECX = (r32((uint32_t)(0x123805a8)));
  /* 12354d69 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d6c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12354d6f jmp 0x12354d79 */
  goto L_12354d79;
L_12354d71:;
  /* 12354d71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d74 mov dword ptr [0x123805a0], eax */
  w32((uint32_t)(0x123805a0), (EAX));
L_12354d79:;
  /* 12354d79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d7c mov edx, dword ptr [0x123805a8] */
  EDX = (r32((uint32_t)(0x123805a8)));
  /* 12354d82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12354d84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d87 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12354d8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12354d91 mov dword ptr [0x123805a8], ecx */
  w32((uint32_t)(0x123805a8), (ECX));
  /* 12354d97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12354d9a:;
  /* 12354d9a pop edi */
  EDI = (pop32());
  /* 12354d9b pop esi */
  ESI = (pop32());
  /* 12354d9c pop ebx */
  EBX = (pop32());
  /* 12354d9d mov esp, ebp */
  ESP = (EBP);
  /* 12354d9f pop ebp */
  EBP = (pop32());
  /* 12354da0 ret  */
  ESPCHK(0x12354890u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x12354db0 (27 bytes, 13 insns) */
void f_12354db0(void) {
  FTRACE(0x12354db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12354db1 mov ebp, esp */
  EBP = (ESP);
  /* 12354db3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354db7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354db9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354dbc push eax */
  push32((uint32_t)(EAX));
  /* 12354dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12354dc1 call 0x12354dd0 */
  push32(0x12354dc6u); f_12354dd0();
  /* 12354dc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354dc9 pop ebp */
  EBP = (pop32());
  /* 12354dca ret  */
  ESPCHK(0x12354db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004dd0 @ 0x12354dd0 (64 bytes, 27 insns) */
void f_12354dd0(void) {
  FTRACE(0x12354dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12354dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12354dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12354dd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12354dd6 call 0x12357dc0 */
  push32(0x12354ddbu); f_12357dc0();
  /* 12354ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354dde push 0 */
  push32((uint32_t)(0x0u));
  /* 12354de0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12354de3 push eax */
  push32((uint32_t)(EAX));
  /* 12354de4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12354de7 push ecx */
  push32((uint32_t)(ECX));
  /* 12354de8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12354deb push edx */
  push32((uint32_t)(EDX));
  /* 12354dec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354def push eax */
  push32((uint32_t)(EAX));
  /* 12354df0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354df3 push ecx */
  push32((uint32_t)(ECX));
  /* 12354df4 call 0x12354890 */
  push32(0x12354df9u); f_12354890();
  /* 12354df9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354dfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12354dff push 9 */
  push32((uint32_t)(0x9u));
  /* 12354e01 call 0x12357e60 */
  push32(0x12354e06u); f_12357e60();
  /* 12354e06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354e0c mov esp, ebp */
  ESP = (EBP);
  /* 12354e0e pop ebp */
  EBP = (pop32());
  /* 12354e0f ret  */
  ESPCHK(0x12354dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e10 @ 0x12354e10 (19 bytes, 9 insns) */
void f_12354e10(void) {
  FTRACE(0x12354e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354e10 push ebp */
  push32((uint32_t)(EBP));
  /* 12354e11 mov ebp, esp */
  EBP = (ESP);
  /* 12354e13 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354e15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354e18 push eax */
  push32((uint32_t)(EAX));
  /* 12354e19 call 0x12354e50 */
  push32(0x12354e1eu); f_12354e50();
  /* 12354e1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e21 pop ebp */
  EBP = (pop32());
  /* 12354e22 ret  */
  ESPCHK(0x12354e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e30 @ 0x12354e30 (19 bytes, 9 insns) */
void f_12354e30(void) {
  FTRACE(0x12354e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12354e31 mov ebp, esp */
  EBP = (ESP);
  /* 12354e33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12354e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354e38 push eax */
  push32((uint32_t)(EAX));
  /* 12354e39 call 0x12354e80 */
  push32(0x12354e3eu); f_12354e80();
  /* 12354e3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e41 pop ebp */
  EBP = (pop32());
  /* 12354e42 ret  */
  ESPCHK(0x12354e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x12354e50 (41 bytes, 16 insns) */
void f_12354e50(void) {
  FTRACE(0x12354e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12354e51 mov ebp, esp */
  EBP = (ESP);
  /* 12354e53 push 9 */
  push32((uint32_t)(0x9u));
  /* 12354e55 call 0x12357dc0 */
  push32(0x12354e5au); f_12357dc0();
  /* 12354e5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354e60 push eax */
  push32((uint32_t)(EAX));
  /* 12354e61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354e64 push ecx */
  push32((uint32_t)(ECX));
  /* 12354e65 call 0x12354e80 */
  push32(0x12354e6au); f_12354e80();
  /* 12354e6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e6d push 9 */
  push32((uint32_t)(0x9u));
  /* 12354e6f call 0x12357e60 */
  push32(0x12354e74u); f_12357e60();
  /* 12354e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354e77 pop ebp */
  EBP = (pop32());
  /* 12354e78 ret  */
  ESPCHK(0x12354e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x12354e80 (1004 bytes, 342 insns) */
void f_12354e80(void) {
  FTRACE(0x12354e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12354e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12354e81 mov ebp, esp */
  EBP = (ESP);
  /* 12354e83 push ecx */
  push32((uint32_t)(ECX));
  /* 12354e84 push ebx */
  push32((uint32_t)(EBX));
  /* 12354e85 push esi */
  push32((uint32_t)(ESI));
  /* 12354e86 push edi */
  push32((uint32_t)(EDI));
  /* 12354e87 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 12354e8c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12354e8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354e91 je 0x12354ec3 */
  if (C.zf) goto L_12354ec3;
L_12354e93:;
  /* 12354e93 call 0x12355560 */
  push32(0x12354e98u); f_12355560();
  /* 12354e98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354e9a jne 0x12354ebd */
  if (!C.zf) goto L_12354ebd;
  /* 12354e9c push 0x1237b62c */
  push32((uint32_t)(0x1237b62cu));
  /* 12354ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354ea3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12354ea8 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354ead push 2 */
  push32((uint32_t)(0x2u));
  /* 12354eaf call 0x12353480 */
  push32(0x12354eb4u); f_12353480();
  /* 12354eb4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354eb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354eba jne 0x12354ebd */
  if (!C.zf) goto L_12354ebd;
  /* 12354ebc int3  */
  x86_unimpl("int3 @ 0x12354ebc");
L_12354ebd:;
  /* 12354ebd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354ebf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354ec1 jne 0x12354e93 */
  if (!C.zf) goto L_12354e93;
L_12354ec3:;
  /* 12354ec3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354ec7 jne 0x12354ece */
  if (!C.zf) goto L_12354ece;
  /* 12354ec9 jmp 0x12355265 */
  goto L_12355265;
L_12354ece:;
  /* 12354ece push 0 */
  push32((uint32_t)(0x0u));
  /* 12354ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354ed2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354ed4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12354ed7 push edx */
  push32((uint32_t)(EDX));
  /* 12354ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354eda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354edd push eax */
  push32((uint32_t)(EAX));
  /* 12354ede push 3 */
  push32((uint32_t)(0x3u));
  /* 12354ee0 call dword ptr [0x1237ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1237ec90))), 0x12354ee6u);
  /* 12354ee6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354ee9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354eeb jne 0x12354f18 */
  if (!C.zf) goto L_12354f18;
L_12354eed:;
  /* 12354eed push 0x1237b8f0 */
  push32((uint32_t)(0x1237b8f0u));
  /* 12354ef2 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12354ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354ef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12354efb push 0 */
  push32((uint32_t)(0x0u));
  /* 12354efd push 0 */
  push32((uint32_t)(0x0u));
  /* 12354eff call 0x12353480 */
  push32(0x12354f04u); f_12353480();
  /* 12354f04 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354f07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f0a jne 0x12354f0d */
  if (!C.zf) goto L_12354f0d;
  /* 12354f0c int3  */
  x86_unimpl("int3 @ 0x12354f0c");
L_12354f0d:;
  /* 12354f0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12354f0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12354f11 jne 0x12354eed */
  if (!C.zf) goto L_12354eed;
  /* 12354f13 jmp 0x12355265 */
  goto L_12355265;
L_12354f18:;
  /* 12354f18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354f1b push edx */
  push32((uint32_t)(EDX));
  /* 12354f1c call 0x123559c0 */
  push32(0x12354f21u); f_123559c0();
  /* 12354f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354f24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354f26 jne 0x12354f49 */
  if (!C.zf) goto L_12354f49;
  /* 12354f28 push 0x1237b730 */
  push32((uint32_t)(0x1237b730u));
  /* 12354f2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12354f2f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12354f34 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354f39 push 2 */
  push32((uint32_t)(0x2u));
  /* 12354f3b call 0x12353480 */
  push32(0x12354f40u); f_12353480();
  /* 12354f40 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354f43 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f46 jne 0x12354f49 */
  if (!C.zf) goto L_12354f49;
  /* 12354f48 int3  */
  x86_unimpl("int3 @ 0x12354f48");
L_12354f49:;
  /* 12354f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12354f4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354f4d jne 0x12354f18 */
  if (!C.zf) goto L_12354f18;
  /* 12354f4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12354f52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12354f55 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12354f58:;
  /* 12354f58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354f5b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12354f5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12354f63 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f66 je 0x12354fab */
  if (C.zf) goto L_12354fab;
  /* 12354f68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354f6b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f6f je 0x12354fab */
  if (C.zf) goto L_12354fab;
  /* 12354f71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354f74 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12354f77 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12354f7c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f7f je 0x12354fab */
  if (C.zf) goto L_12354fab;
  /* 12354f81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354f84 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354f88 je 0x12354fab */
  if (C.zf) goto L_12354fab;
  /* 12354f8a push 0x1237b8c8 */
  push32((uint32_t)(0x1237b8c8u));
  /* 12354f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12354f91 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12354f96 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12354f9b push 2 */
  push32((uint32_t)(0x2u));
  /* 12354f9d call 0x12353480 */
  push32(0x12354fa2u); f_12353480();
  /* 12354fa2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354fa5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12354fa8 jne 0x12354fab */
  if (!C.zf) goto L_12354fab;
  /* 12354faa int3  */
  x86_unimpl("int3 @ 0x12354faa");
L_12354fab:;
  /* 12354fab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12354fad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12354faf jne 0x12354f58 */
  if (!C.zf) goto L_12354f58;
  /* 12354fb1 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 12354fb6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12354fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354fbb jne 0x12355086 */
  if (!C.zf) goto L_12355086;
  /* 12354fc1 push 4 */
  push32((uint32_t)(0x4u));
  /* 12354fc3 mov cl, byte ptr [0x1237ea90] */
  CL = (r8((uint32_t)(0x1237ea90)));
  /* 12354fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12354fca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354fcd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354fd0 push edx */
  push32((uint32_t)(EDX));
  /* 12354fd1 call 0x123554d0 */
  push32(0x12354fd6u); f_123554d0();
  /* 12354fd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12354fd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12354fdb jne 0x12355020 */
  if (!C.zf) goto L_12355020;
L_12354fdd:;
  /* 12354fdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354fe0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12354fe3 push eax */
  push32((uint32_t)(EAX));
  /* 12354fe4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354fe7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12354fea push edx */
  push32((uint32_t)(EDX));
  /* 12354feb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12354fee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12354ff1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12354ff7 mov edx, dword ptr [ecx*4 + 0x1237ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea94)));
  /* 12354ffe push edx */
  push32((uint32_t)(EDX));
  /* 12354fff push 0x1237b89c */
  push32((uint32_t)(0x1237b89cu));
  /* 12355004 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355006 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355008 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235500a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235500c call 0x12353480 */
  push32(0x12355011u); f_12353480();
  /* 12355011 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355014 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355017 jne 0x1235501a */
  if (!C.zf) goto L_1235501a;
  /* 12355019 int3  */
  x86_unimpl("int3 @ 0x12355019");
L_1235501a:;
  /* 1235501a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235501c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235501e jne 0x12354fdd */
  if (!C.zf) goto L_12354fdd;
L_12355020:;
  /* 12355020 push 4 */
  push32((uint32_t)(0x4u));
  /* 12355022 mov cl, byte ptr [0x1237ea90] */
  CL = (r8((uint32_t)(0x1237ea90)));
  /* 12355028 push ecx */
  push32((uint32_t)(ECX));
  /* 12355029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235502c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1235502f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355032 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12355036 push edx */
  push32((uint32_t)(EDX));
  /* 12355037 call 0x123554d0 */
  push32(0x1235503cu); f_123554d0();
  /* 1235503c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235503f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355041 jne 0x12355086 */
  if (!C.zf) goto L_12355086;
L_12355043:;
  /* 12355043 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355046 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355049 push eax */
  push32((uint32_t)(EAX));
  /* 1235504a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235504d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12355050 push edx */
  push32((uint32_t)(EDX));
  /* 12355051 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355054 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12355057 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235505d mov edx, dword ptr [ecx*4 + 0x1237ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea94)));
  /* 12355064 push edx */
  push32((uint32_t)(EDX));
  /* 12355065 push 0x1237b870 */
  push32((uint32_t)(0x1237b870u));
  /* 1235506a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235506c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235506e push 0 */
  push32((uint32_t)(0x0u));
  /* 12355070 push 1 */
  push32((uint32_t)(0x1u));
  /* 12355072 call 0x12353480 */
  push32(0x12355077u); f_12353480();
  /* 12355077 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235507a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235507d jne 0x12355080 */
  if (!C.zf) goto L_12355080;
  /* 1235507f int3  */
  x86_unimpl("int3 @ 0x1235507f");
L_12355080:;
  /* 12355080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355082 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355084 jne 0x12355043 */
  if (!C.zf) goto L_12355043;
L_12355086:;
  /* 12355086 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355089 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235508d jne 0x123550fb */
  if (!C.zf) goto L_123550fb;
L_1235508f:;
  /* 1235508f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355092 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355099 jne 0x123550a4 */
  if (!C.zf) goto L_123550a4;
  /* 1235509b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235509e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123550a2 je 0x123550c5 */
  if (C.zf) goto L_123550c5;
L_123550a4:;
  /* 123550a4 push 0x1237b830 */
  push32((uint32_t)(0x1237b830u));
  /* 123550a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123550ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 123550b0 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 123550b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123550b7 call 0x12353480 */
  push32(0x123550bcu); f_12353480();
  /* 123550bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123550bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123550c2 jne 0x123550c5 */
  if (!C.zf) goto L_123550c5;
  /* 123550c4 int3  */
  x86_unimpl("int3 @ 0x123550c4");
L_123550c5:;
  /* 123550c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123550c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123550c9 jne 0x1235508f */
  if (!C.zf) goto L_1235508f;
  /* 123550cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123550ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123550d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123550d4 push eax */
  push32((uint32_t)(EAX));
  /* 123550d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123550d7 mov cl, byte ptr [0x1237ea91] */
  CL = (r8((uint32_t)(0x1237ea91)));
  /* 123550dd push ecx */
  push32((uint32_t)(ECX));
  /* 123550de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123550e1 push edx */
  push32((uint32_t)(EDX));
  /* 123550e2 call 0x12358130 */
  push32(0x123550e7u); f_12358130();
  /* 123550e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123550ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123550ed push eax */
  push32((uint32_t)(EAX));
  /* 123550ee call 0x12358530 */
  push32(0x123550f3u); f_12358530();
  /* 123550f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123550f6 jmp 0x12355265 */
  goto L_12355265;
L_123550fb:;
  /* 123550fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123550fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355102 jne 0x12355111 */
  if (!C.zf) goto L_12355111;
  /* 12355104 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355108 jne 0x12355111 */
  if (!C.zf) goto L_12355111;
  /* 1235510a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12355111:;
  /* 12355111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355114 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355117 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235511a je 0x1235513d */
  if (C.zf) goto L_1235513d;
  /* 1235511c push 0x1237b810 */
  push32((uint32_t)(0x1237b810u));
  /* 12355121 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355123 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12355128 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 1235512d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235512f call 0x12353480 */
  push32(0x12355134u); f_12353480();
  /* 12355134 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355137 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235513a jne 0x1235513d */
  if (!C.zf) goto L_1235513d;
  /* 1235513c int3  */
  x86_unimpl("int3 @ 0x1235513c");
L_1235513d:;
  /* 1235513d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235513f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355141 jne 0x12355111 */
  if (!C.zf) goto L_12355111;
  /* 12355143 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355146 mov eax, dword ptr [0x123805ac] */
  EAX = (r32((uint32_t)(0x123805ac)));
  /* 1235514b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235514e mov dword ptr [0x123805ac], eax */
  w32((uint32_t)(0x123805ac), (EAX));
  /* 12355153 mov ecx, dword ptr [0x1237ea84] */
  ECX = (r32((uint32_t)(0x1237ea84)));
  /* 12355159 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1235515c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235515e jne 0x1235523c */
  if (!C.zf) goto L_1235523c;
  /* 12355164 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355167 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235516a je 0x1235517c */
  if (C.zf) goto L_1235517c;
  /* 1235516c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235516f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12355171 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355174 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12355177 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1235517a jmp 0x123551ba */
  goto L_123551ba;
L_1235517c:;
  /* 1235517c mov ecx, dword ptr [0x123805a0] */
  ECX = (r32((uint32_t)(0x123805a0)));
  /* 12355182 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355185 je 0x123551a8 */
  if (C.zf) goto L_123551a8;
  /* 12355187 push 0x1237b7f8 */
  push32((uint32_t)(0x1237b7f8u));
  /* 1235518c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235518e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12355193 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12355198 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235519a call 0x12353480 */
  push32(0x1235519fu); f_12353480();
  /* 1235519f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123551a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123551a5 jne 0x123551a8 */
  if (!C.zf) goto L_123551a8;
  /* 123551a7 int3  */
  x86_unimpl("int3 @ 0x123551a7");
L_123551a8:;
  /* 123551a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123551aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123551ac jne 0x1235517c */
  if (!C.zf) goto L_1235517c;
  /* 123551ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123551b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123551b4 mov dword ptr [0x123805a0], ecx */
  w32((uint32_t)(0x123805a0), (ECX));
L_123551ba:;
  /* 123551ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123551bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123551c1 je 0x123551d2 */
  if (C.zf) goto L_123551d2;
  /* 123551c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123551c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123551c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123551cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123551ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123551d0 jmp 0x1235520f */
  goto L_1235520f;
L_123551d2:;
  /* 123551d2 mov ecx, dword ptr [0x123805a8] */
  ECX = (r32((uint32_t)(0x123805a8)));
  /* 123551d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123551db je 0x123551fe */
  if (C.zf) goto L_123551fe;
  /* 123551dd push 0x1237b7e0 */
  push32((uint32_t)(0x1237b7e0u));
  /* 123551e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123551e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 123551e9 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 123551ee push 2 */
  push32((uint32_t)(0x2u));
  /* 123551f0 call 0x12353480 */
  push32(0x123551f5u); f_12353480();
  /* 123551f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123551f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123551fb jne 0x123551fe */
  if (!C.zf) goto L_123551fe;
  /* 123551fd int3  */
  x86_unimpl("int3 @ 0x123551fd");
L_123551fe:;
  /* 123551fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12355200 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355202 jne 0x123551d2 */
  if (!C.zf) goto L_123551d2;
  /* 12355204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355207 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12355209 mov dword ptr [0x123805a8], ecx */
  w32((uint32_t)(0x123805a8), (ECX));
L_1235520f:;
  /* 1235520f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355212 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12355215 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355218 push eax */
  push32((uint32_t)(EAX));
  /* 12355219 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235521b mov cl, byte ptr [0x1237ea91] */
  CL = (r8((uint32_t)(0x1237ea91)));
  /* 12355221 push ecx */
  push32((uint32_t)(ECX));
  /* 12355222 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355225 push edx */
  push32((uint32_t)(EDX));
  /* 12355226 call 0x12358130 */
  push32(0x1235522bu); f_12358130();
  /* 1235522b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235522e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355231 push eax */
  push32((uint32_t)(EAX));
  /* 12355232 call 0x12358530 */
  push32(0x12355237u); f_12358530();
  /* 12355237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235523a jmp 0x12355265 */
  goto L_12355265;
L_1235523c:;
  /* 1235523c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235523f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12355246 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355249 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1235524c push eax */
  push32((uint32_t)(EAX));
  /* 1235524d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235524f mov cl, byte ptr [0x1237ea91] */
  CL = (r8((uint32_t)(0x1237ea91)));
  /* 12355255 push ecx */
  push32((uint32_t)(ECX));
  /* 12355256 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355259 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235525c push edx */
  push32((uint32_t)(EDX));
  /* 1235525d call 0x12358130 */
  push32(0x12355262u); f_12358130();
  /* 12355262 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355265:;
  /* 12355265 pop edi */
  EDI = (pop32());
  /* 12355266 pop esi */
  ESI = (pop32());
  /* 12355267 pop ebx */
  EBX = (pop32());
  /* 12355268 mov esp, ebp */
  ESP = (EBP);
  /* 1235526a pop ebp */
  EBP = (pop32());
  /* 1235526b ret  */
  ESPCHK(0x12354e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005270 @ 0x12355270 (19 bytes, 9 insns) */
void f_12355270(void) {
  FTRACE(0x12355270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355270 push ebp */
  push32((uint32_t)(EBP));
  /* 12355271 mov ebp, esp */
  EBP = (ESP);
  /* 12355273 push 1 */
  push32((uint32_t)(0x1u));
  /* 12355275 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355278 push eax */
  push32((uint32_t)(EAX));
  /* 12355279 call 0x12355290 */
  push32(0x1235527eu); f_12355290();
  /* 1235527e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355281 pop ebp */
  EBP = (pop32());
  /* 12355282 ret  */
  ESPCHK(0x12355270u, _esp0);
  ESP += 4; return;
}

/* FUN_10005290 @ 0x12355290 (342 bytes, 119 insns) */
void f_12355290(void) {
  FTRACE(0x12355290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355290 push ebp */
  push32((uint32_t)(EBP));
  /* 12355291 mov ebp, esp */
  EBP = (ESP);
  /* 12355293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355296 push ebx */
  push32((uint32_t)(EBX));
  /* 12355297 push esi */
  push32((uint32_t)(ESI));
  /* 12355298 push edi */
  push32((uint32_t)(EDI));
  /* 12355299 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 1235529e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123552a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123552a3 je 0x123552d5 */
  if (C.zf) goto L_123552d5;
L_123552a5:;
  /* 123552a5 call 0x12355560 */
  push32(0x123552aau); f_12355560();
  /* 123552aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123552ac jne 0x123552cf */
  if (!C.zf) goto L_123552cf;
  /* 123552ae push 0x1237b62c */
  push32((uint32_t)(0x1237b62cu));
  /* 123552b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123552b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 123552ba push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 123552bf push 2 */
  push32((uint32_t)(0x2u));
  /* 123552c1 call 0x12353480 */
  push32(0x123552c6u); f_12353480();
  /* 123552c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123552c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123552cc jne 0x123552cf */
  if (!C.zf) goto L_123552cf;
  /* 123552ce int3  */
  x86_unimpl("int3 @ 0x123552ce");
L_123552cf:;
  /* 123552cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123552d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123552d3 jne 0x123552a5 */
  if (!C.zf) goto L_123552a5;
L_123552d5:;
  /* 123552d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 123552d7 call 0x12357dc0 */
  push32(0x123552dcu); f_12357dc0();
  /* 123552dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123552df:;
  /* 123552df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123552e2 push edx */
  push32((uint32_t)(EDX));
  /* 123552e3 call 0x123559c0 */
  push32(0x123552e8u); f_123559c0();
  /* 123552e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123552eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123552ed jne 0x12355310 */
  if (!C.zf) goto L_12355310;
  /* 123552ef push 0x1237b730 */
  push32((uint32_t)(0x1237b730u));
  /* 123552f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123552f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 123552fb push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12355300 push 2 */
  push32((uint32_t)(0x2u));
  /* 12355302 call 0x12353480 */
  push32(0x12355307u); f_12353480();
  /* 12355307 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235530a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235530d jne 0x12355310 */
  if (!C.zf) goto L_12355310;
  /* 1235530f int3  */
  x86_unimpl("int3 @ 0x1235530f");
L_12355310:;
  /* 12355310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355312 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355314 jne 0x123552df */
  if (!C.zf) goto L_123552df;
  /* 12355316 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355319 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235531c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1235531f:;
  /* 1235531f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355322 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355325 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235532a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235532d je 0x12355372 */
  if (C.zf) goto L_12355372;
  /* 1235532f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355332 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355336 je 0x12355372 */
  if (C.zf) goto L_12355372;
  /* 12355338 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235533b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1235533e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355343 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355346 je 0x12355372 */
  if (C.zf) goto L_12355372;
  /* 12355348 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235534b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235534f je 0x12355372 */
  if (C.zf) goto L_12355372;
  /* 12355351 push 0x1237b8c8 */
  push32((uint32_t)(0x1237b8c8u));
  /* 12355356 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355358 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1235535d push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 12355362 push 2 */
  push32((uint32_t)(0x2u));
  /* 12355364 call 0x12353480 */
  push32(0x12355369u); f_12353480();
  /* 12355369 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235536c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235536f jne 0x12355372 */
  if (!C.zf) goto L_12355372;
  /* 12355371 int3  */
  x86_unimpl("int3 @ 0x12355371");
L_12355372:;
  /* 12355372 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12355374 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355376 jne 0x1235531f */
  if (!C.zf) goto L_1235531f;
  /* 12355378 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235537b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235537f jne 0x1235538e */
  if (!C.zf) goto L_1235538e;
  /* 12355381 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355385 jne 0x1235538e */
  if (!C.zf) goto L_1235538e;
  /* 12355387 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1235538e:;
  /* 1235538e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355391 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355395 je 0x123553c9 */
  if (C.zf) goto L_123553c9;
L_12355397:;
  /* 12355397 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235539a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1235539d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123553a0 je 0x123553c3 */
  if (C.zf) goto L_123553c3;
  /* 123553a2 push 0x1237b810 */
  push32((uint32_t)(0x1237b810u));
  /* 123553a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123553a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 123553ae push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 123553b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123553b5 call 0x12353480 */
  push32(0x123553bau); f_12353480();
  /* 123553ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123553bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123553c0 jne 0x123553c3 */
  if (!C.zf) goto L_123553c3;
  /* 123553c2 int3  */
  x86_unimpl("int3 @ 0x123553c2");
L_123553c3:;
  /* 123553c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123553c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123553c7 jne 0x12355397 */
  if (!C.zf) goto L_12355397;
L_123553c9:;
  /* 123553c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123553cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123553cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123553d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123553d4 call 0x12357e60 */
  push32(0x123553d9u); f_12357e60();
  /* 123553d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123553dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123553df pop edi */
  EDI = (pop32());
  /* 123553e0 pop esi */
  ESI = (pop32());
  /* 123553e1 pop ebx */
  EBX = (pop32());
  /* 123553e2 mov esp, ebp */
  ESP = (EBP);
  /* 123553e4 pop ebp */
  EBP = (pop32());
  /* 123553e5 ret  */
  ESPCHK(0x12355290u, _esp0);
  ESP += 4; return;
}

/* FUN_100053f0 @ 0x123553f0 (28 bytes, 11 insns) */
void f_123553f0(void) {
  FTRACE(0x123553f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123553f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123553f1 mov ebp, esp */
  EBP = (ESP);
  /* 123553f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123553f4 mov eax, dword ptr [0x1237ea8c] */
  EAX = (r32((uint32_t)(0x1237ea8c)));
  /* 123553f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123553fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123553ff mov dword ptr [0x1237ea8c], ecx */
  w32((uint32_t)(0x1237ea8c), (ECX));
  /* 12355405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355408 mov esp, ebp */
  ESP = (EBP);
  /* 1235540a pop ebp */
  EBP = (pop32());
  /* 1235540b ret  */
  ESPCHK(0x123553f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005410 @ 0x12355410 (157 bytes, 59 insns) */
void f_12355410(void) {
  FTRACE(0x12355410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355410 push ebp */
  push32((uint32_t)(EBP));
  /* 12355411 mov ebp, esp */
  EBP = (ESP);
  /* 12355413 push ecx */
  push32((uint32_t)(ECX));
  /* 12355414 push ebx */
  push32((uint32_t)(EBX));
  /* 12355415 push esi */
  push32((uint32_t)(ESI));
  /* 12355416 push edi */
  push32((uint32_t)(EDI));
  /* 12355417 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355419 call 0x12357dc0 */
  push32(0x1235541eu); f_12357dc0();
  /* 1235541e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355421 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355424 push eax */
  push32((uint32_t)(EAX));
  /* 12355425 call 0x123559c0 */
  push32(0x1235542au); f_123559c0();
  /* 1235542a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235542d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235542f je 0x1235549c */
  if (C.zf) goto L_1235549c;
  /* 12355431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355434 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355437 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235543a:;
  /* 1235543a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235543d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355440 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355445 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355448 je 0x1235548d */
  if (C.zf) goto L_1235548d;
  /* 1235544a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235544d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355451 je 0x1235548d */
  if (C.zf) goto L_1235548d;
  /* 12355453 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355456 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355459 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235545e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355461 je 0x1235548d */
  if (C.zf) goto L_1235548d;
  /* 12355463 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355466 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235546a je 0x1235548d */
  if (C.zf) goto L_1235548d;
  /* 1235546c push 0x1237b8c8 */
  push32((uint32_t)(0x1237b8c8u));
  /* 12355471 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355473 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12355478 push 0x1237b620 */
  push32((uint32_t)(0x1237b620u));
  /* 1235547d push 2 */
  push32((uint32_t)(0x2u));
  /* 1235547f call 0x12353480 */
  push32(0x12355484u); f_12353480();
  /* 12355484 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355487 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235548a jne 0x1235548d */
  if (!C.zf) goto L_1235548d;
  /* 1235548c int3  */
  x86_unimpl("int3 @ 0x1235548c");
L_1235548d:;
  /* 1235548d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235548f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355491 jne 0x1235543a */
  if (!C.zf) goto L_1235543a;
  /* 12355493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355496 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355499 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1235549c:;
  /* 1235549c push 9 */
  push32((uint32_t)(0x9u));
  /* 1235549e call 0x12357e60 */
  push32(0x123554a3u); f_12357e60();
  /* 123554a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123554a6 pop edi */
  EDI = (pop32());
  /* 123554a7 pop esi */
  ESI = (pop32());
  /* 123554a8 pop ebx */
  EBX = (pop32());
  /* 123554a9 mov esp, ebp */
  ESP = (EBP);
  /* 123554ab pop ebp */
  EBP = (pop32());
  /* 123554ac ret  */
  ESPCHK(0x12355410u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x123554b0 (28 bytes, 11 insns) */
void f_123554b0(void) {
  FTRACE(0x123554b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123554b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123554b1 mov ebp, esp */
  EBP = (ESP);
  /* 123554b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123554b4 mov eax, dword ptr [0x1237ec90] */
  EAX = (r32((uint32_t)(0x1237ec90)));
  /* 123554b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123554bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123554bf mov dword ptr [0x1237ec90], ecx */
  w32((uint32_t)(0x1237ec90), (ECX));
  /* 123554c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123554c8 mov esp, ebp */
  ESP = (EBP);
  /* 123554ca pop ebp */
  EBP = (pop32());
  /* 123554cb ret  */
  ESPCHK(0x123554b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x123554d0 (136 bytes, 55 insns) */
void f_123554d0(void) {
  FTRACE(0x123554d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123554d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123554d1 mov ebp, esp */
  EBP = (ESP);
  /* 123554d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123554d4 push ebx */
  push32((uint32_t)(EBX));
  /* 123554d5 push esi */
  push32((uint32_t)(ESI));
  /* 123554d6 push edi */
  push32((uint32_t)(EDI));
  /* 123554d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_123554de:;
  /* 123554de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123554e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123554e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123554e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123554ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123554ec je 0x1235554e */
  if (C.zf) goto L_1235554e;
  /* 123554ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123554f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123554f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123554f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123554f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123554fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355501 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355504 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12355507 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355509 je 0x1235554c */
  if (C.zf) goto L_1235554c;
L_1235550b:;
  /* 1235550b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235550e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355513 push eax */
  push32((uint32_t)(EAX));
  /* 12355514 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355517 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12355519 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1235551c push edx */
  push32((uint32_t)(EDX));
  /* 1235551d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355520 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355523 push eax */
  push32((uint32_t)(EAX));
  /* 12355524 push 0x1237b90c */
  push32((uint32_t)(0x1237b90cu));
  /* 12355529 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235552b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235552d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235552f push 0 */
  push32((uint32_t)(0x0u));
  /* 12355531 call 0x12353480 */
  push32(0x12355536u); f_12353480();
  /* 12355536 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355539 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235553c jne 0x1235553f */
  if (!C.zf) goto L_1235553f;
  /* 1235553e int3  */
  x86_unimpl("int3 @ 0x1235553e");
L_1235553f:;
  /* 1235553f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12355541 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355543 jne 0x1235550b */
  if (!C.zf) goto L_1235550b;
  /* 12355545 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1235554c:;
  /* 1235554c jmp 0x123554de */
  goto L_123554de;
L_1235554e:;
  /* 1235554e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355551 pop edi */
  EDI = (pop32());
  /* 12355552 pop esi */
  ESI = (pop32());
  /* 12355553 pop ebx */
  EBX = (pop32());
  /* 12355554 mov esp, ebp */
  ESP = (EBP);
  /* 12355556 pop ebp */
  EBP = (pop32());
  /* 12355557 ret  */
  ESPCHK(0x123554d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x12355560 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12355560(void) {
  FTRACE(0x12355560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355560 push ebp */
  push32((uint32_t)(EBP));
  /* 12355561 mov ebp, esp */
  EBP = (ESP);
  /* 12355563 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355566 push ebx */
  push32((uint32_t)(EBX));
  /* 12355567 push esi */
  push32((uint32_t)(ESI));
  /* 12355568 push edi */
  push32((uint32_t)(EDI));
  /* 12355569 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12355570 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 12355575 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12355578 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235557a jne 0x12355586 */
  if (!C.zf) goto L_12355586;
  /* 1235557c mov eax, 1 */
  EAX = (0x1u);
  /* 12355581 jmp 0x123558b8 */
  goto L_123558b8;
L_12355586:;
  /* 12355586 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355588 call 0x12357dc0 */
  push32(0x1235558du); f_12357dc0();
  /* 1235558d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355590 call 0x123585a0 */
  push32(0x12355595u); f_123585a0();
  /* 12355595 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12355598 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235559c je 0x123556a9 */
  if (C.zf) goto L_123556a9;
  /* 123555a2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123555a6 je 0x123556a9 */
  if (C.zf) goto L_123556a9;
  /* 123555ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123555af mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 123555b2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 123555b5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123555b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 123555bb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123555bf ja 0x12355672 */
  if ((!C.cf&&!C.zf)) goto L_12355672;
  /* 123555c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 123555c8 jmp dword ptr [eax*4 + 0x123558bf] */
  switch (EAX) {
    case 0: goto L_1235564a;
    case 1: goto L_12355622;
    case 2: goto L_123555fa;
    case 3: goto L_123555cf;
    default: x86_unimpl("switch@0x123555c8 out of table"); return;
  }
L_123555cf:;
  /* 123555cf push 0x1237ba60 */
  push32((uint32_t)(0x1237ba60u));
  /* 123555d4 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 123555d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123555db push 0 */
  push32((uint32_t)(0x0u));
  /* 123555dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123555df push 0 */
  push32((uint32_t)(0x0u));
  /* 123555e1 call 0x12353480 */
  push32(0x123555e6u); f_12353480();
  /* 123555e6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123555e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123555ec jne 0x123555ef */
  if (!C.zf) goto L_123555ef;
  /* 123555ee int3  */
  x86_unimpl("int3 @ 0x123555ee");
L_123555ef:;
  /* 123555ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123555f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123555f3 jne 0x123555cf */
  if (!C.zf) goto L_123555cf;
  /* 123555f5 jmp 0x12355698 */
  goto L_12355698;
L_123555fa:;
  /* 123555fa push 0x1237ba3c */
  push32((uint32_t)(0x1237ba3cu));
  /* 123555ff push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12355604 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355606 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355608 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235560a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235560c call 0x12353480 */
  push32(0x12355611u); f_12353480();
  /* 12355611 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355614 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355617 jne 0x1235561a */
  if (!C.zf) goto L_1235561a;
  /* 12355619 int3  */
  x86_unimpl("int3 @ 0x12355619");
L_1235561a:;
  /* 1235561a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235561c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235561e jne 0x123555fa */
  if (!C.zf) goto L_123555fa;
  /* 12355620 jmp 0x12355698 */
  goto L_12355698;
L_12355622:;
  /* 12355622 push 0x1237ba18 */
  push32((uint32_t)(0x1237ba18u));
  /* 12355627 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 1235562c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235562e push 0 */
  push32((uint32_t)(0x0u));
  /* 12355630 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355632 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355634 call 0x12353480 */
  push32(0x12355639u); f_12353480();
  /* 12355639 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235563c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235563f jne 0x12355642 */
  if (!C.zf) goto L_12355642;
  /* 12355641 int3  */
  x86_unimpl("int3 @ 0x12355641");
L_12355642:;
  /* 12355642 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355644 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355646 jne 0x12355622 */
  if (!C.zf) goto L_12355622;
  /* 12355648 jmp 0x12355698 */
  goto L_12355698;
L_1235564a:;
  /* 1235564a push 0x1237b9f4 */
  push32((uint32_t)(0x1237b9f4u));
  /* 1235564f push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12355654 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355656 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235565a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235565c call 0x12353480 */
  push32(0x12355661u); f_12353480();
  /* 12355661 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355664 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355667 jne 0x1235566a */
  if (!C.zf) goto L_1235566a;
  /* 12355669 int3  */
  x86_unimpl("int3 @ 0x12355669");
L_1235566a:;
  /* 1235566a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235566c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235566e jne 0x1235564a */
  if (!C.zf) goto L_1235564a;
  /* 12355670 jmp 0x12355698 */
  goto L_12355698;
L_12355672:;
  /* 12355672 push 0x1237b9c8 */
  push32((uint32_t)(0x1237b9c8u));
  /* 12355677 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 1235567c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235567e push 0 */
  push32((uint32_t)(0x0u));
  /* 12355680 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355682 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355684 call 0x12353480 */
  push32(0x12355689u); f_12353480();
  /* 12355689 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235568c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235568f jne 0x12355692 */
  if (!C.zf) goto L_12355692;
  /* 12355691 int3  */
  x86_unimpl("int3 @ 0x12355691");
L_12355692:;
  /* 12355692 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12355694 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355696 jne 0x12355672 */
  if (!C.zf) goto L_12355672;
L_12355698:;
  /* 12355698 push 9 */
  push32((uint32_t)(0x9u));
  /* 1235569a call 0x12357e60 */
  push32(0x1235569fu); f_12357e60();
  /* 1235569f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123556a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123556a4 jmp 0x123558b8 */
  goto L_123558b8;
L_123556a9:;
  /* 123556a9 mov eax, dword ptr [0x123805a8] */
  EAX = (r32((uint32_t)(0x123805a8)));
  /* 123556ae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123556b1 jmp 0x123556bb */
  goto L_123556bb;
L_123556b3:;
  /* 123556b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123556b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123556b8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_123556bb:;
  /* 123556bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123556bf je 0x123558ab */
  if (C.zf) goto L_123558ab;
  /* 123556c5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 123556cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123556cf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123556d2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123556d8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123556db je 0x12355700 */
  if (C.zf) goto L_12355700;
  /* 123556dd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123556e0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123556e4 je 0x12355700 */
  if (C.zf) goto L_12355700;
  /* 123556e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123556e9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123556ec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123556f2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123556f5 je 0x12355700 */
  if (C.zf) goto L_12355700;
  /* 123556f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123556fa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123556fe jne 0x12355718 */
  if (!C.zf) goto L_12355718;
L_12355700:;
  /* 12355700 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355703 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12355706 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235570c mov edx, dword ptr [ecx*4 + 0x1237ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea94)));
  /* 12355713 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12355716 jmp 0x1235571f */
  goto L_1235571f;
L_12355718:;
  /* 12355718 mov dword ptr [ebp - 0x14], 0x1237b9c0 */
  w32((uint32_t)(EBP + -0x14), (0x1237b9c0u));
L_1235571f:;
  /* 1235571f push 4 */
  push32((uint32_t)(0x4u));
  /* 12355721 mov al, byte ptr [0x1237ea90] */
  AL = (r8((uint32_t)(0x1237ea90)));
  /* 12355726 push eax */
  push32((uint32_t)(EAX));
  /* 12355727 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235572a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235572d push ecx */
  push32((uint32_t)(ECX));
  /* 1235572e call 0x123554d0 */
  push32(0x12355733u); f_123554d0();
  /* 12355733 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355738 jne 0x12355774 */
  if (!C.zf) goto L_12355774;
L_1235573a:;
  /* 1235573a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235573d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355740 push edx */
  push32((uint32_t)(EDX));
  /* 12355741 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355744 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12355747 push ecx */
  push32((uint32_t)(ECX));
  /* 12355748 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235574b push edx */
  push32((uint32_t)(EDX));
  /* 1235574c push 0x1237b89c */
  push32((uint32_t)(0x1237b89cu));
  /* 12355751 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355755 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355757 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355759 call 0x12353480 */
  push32(0x1235575eu); f_12353480();
  /* 1235575e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355761 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355764 jne 0x12355767 */
  if (!C.zf) goto L_12355767;
  /* 12355766 int3  */
  x86_unimpl("int3 @ 0x12355766");
L_12355767:;
  /* 12355767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235576b jne 0x1235573a */
  if (!C.zf) goto L_1235573a;
  /* 1235576d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12355774:;
  /* 12355774 push 4 */
  push32((uint32_t)(0x4u));
  /* 12355776 mov cl, byte ptr [0x1237ea90] */
  CL = (r8((uint32_t)(0x1237ea90)));
  /* 1235577c push ecx */
  push32((uint32_t)(ECX));
  /* 1235577d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355780 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12355783 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355786 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1235578a push edx */
  push32((uint32_t)(EDX));
  /* 1235578b call 0x123554d0 */
  push32(0x12355790u); f_123554d0();
  /* 12355790 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355793 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355795 jne 0x123557d1 */
  if (!C.zf) goto L_123557d1;
L_12355797:;
  /* 12355797 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235579a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235579d push eax */
  push32((uint32_t)(EAX));
  /* 1235579e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123557a1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123557a4 push edx */
  push32((uint32_t)(EDX));
  /* 123557a5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 123557a8 push eax */
  push32((uint32_t)(EAX));
  /* 123557a9 push 0x1237b870 */
  push32((uint32_t)(0x1237b870u));
  /* 123557ae push 0 */
  push32((uint32_t)(0x0u));
  /* 123557b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123557b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123557b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123557b6 call 0x12353480 */
  push32(0x123557bbu); f_12353480();
  /* 123557bb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123557be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123557c1 jne 0x123557c4 */
  if (!C.zf) goto L_123557c4;
  /* 123557c3 int3  */
  x86_unimpl("int3 @ 0x123557c3");
L_123557c4:;
  /* 123557c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123557c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123557c8 jne 0x12355797 */
  if (!C.zf) goto L_12355797;
  /* 123557ca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123557d1:;
  /* 123557d1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123557d4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123557d8 jne 0x1235582a */
  if (!C.zf) goto L_1235582a;
  /* 123557da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123557dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123557e0 push ecx */
  push32((uint32_t)(ECX));
  /* 123557e1 mov dl, byte ptr [0x1237ea91] */
  DL = (r8((uint32_t)(0x1237ea91)));
  /* 123557e7 push edx */
  push32((uint32_t)(EDX));
  /* 123557e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123557eb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123557ee push eax */
  push32((uint32_t)(EAX));
  /* 123557ef call 0x123554d0 */
  push32(0x123557f4u); f_123554d0();
  /* 123557f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123557f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123557f9 jne 0x1235582a */
  if (!C.zf) goto L_1235582a;
L_123557fb:;
  /* 123557fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123557fe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355801 push ecx */
  push32((uint32_t)(ECX));
  /* 12355802 push 0x1237b994 */
  push32((uint32_t)(0x1237b994u));
  /* 12355807 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355809 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235580b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235580d push 0 */
  push32((uint32_t)(0x0u));
  /* 1235580f call 0x12353480 */
  push32(0x12355814u); f_12353480();
  /* 12355814 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355817 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235581a jne 0x1235581d */
  if (!C.zf) goto L_1235581d;
  /* 1235581c int3  */
  x86_unimpl("int3 @ 0x1235581c");
L_1235581d:;
  /* 1235581d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235581f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355821 jne 0x123557fb */
  if (!C.zf) goto L_123557fb;
  /* 12355823 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1235582a:;
  /* 1235582a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235582e jne 0x123558a6 */
  if (!C.zf) goto L_123558a6;
  /* 12355830 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355833 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355837 je 0x1235586c */
  if (C.zf) goto L_1235586c;
L_12355839:;
  /* 12355839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235583c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1235583f push edx */
  push32((uint32_t)(EDX));
  /* 12355840 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355843 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12355846 push ecx */
  push32((uint32_t)(ECX));
  /* 12355847 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235584a push edx */
  push32((uint32_t)(EDX));
  /* 1235584b push 0x1237b974 */
  push32((uint32_t)(0x1237b974u));
  /* 12355850 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355852 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355854 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355856 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355858 call 0x12353480 */
  push32(0x1235585du); f_12353480();
  /* 1235585d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355860 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355863 jne 0x12355866 */
  if (!C.zf) goto L_12355866;
  /* 12355865 int3  */
  x86_unimpl("int3 @ 0x12355865");
L_12355866:;
  /* 12355866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235586a jne 0x12355839 */
  if (!C.zf) goto L_12355839;
L_1235586c:;
  /* 1235586c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235586f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12355872 push edx */
  push32((uint32_t)(EDX));
  /* 12355873 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355876 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355879 push eax */
  push32((uint32_t)(EAX));
  /* 1235587a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235587d push ecx */
  push32((uint32_t)(ECX));
  /* 1235587e push 0x1237b948 */
  push32((uint32_t)(0x1237b948u));
  /* 12355883 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355885 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355887 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355889 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235588b call 0x12353480 */
  push32(0x12355890u); f_12353480();
  /* 12355890 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355893 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355896 jne 0x12355899 */
  if (!C.zf) goto L_12355899;
  /* 12355898 int3  */
  x86_unimpl("int3 @ 0x12355898");
L_12355899:;
  /* 12355899 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235589b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235589d jne 0x1235586c */
  if (!C.zf) goto L_1235586c;
  /* 1235589f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123558a6:;
  /* 123558a6 jmp 0x123556b3 */
  goto L_123556b3;
L_123558ab:;
  /* 123558ab push 9 */
  push32((uint32_t)(0x9u));
  /* 123558ad call 0x12357e60 */
  push32(0x123558b2u); f_12357e60();
  /* 123558b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123558b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123558b8:;
  /* 123558b8 pop edi */
  EDI = (pop32());
  /* 123558b9 pop esi */
  ESI = (pop32());
  /* 123558ba pop ebx */
  EBX = (pop32());
  /* 123558bb mov esp, ebp */
  ESP = (EBP);
  /* 123558bd pop ebp */
  EBP = (pop32());
  /* 123558be ret  */
  ESPCHK(0x12355560u, _esp0);
  ESP += 4; return;
}

/* FUN_100058d0 @ 0x123558d0 (34 bytes, 13 insns) */
void f_123558d0(void) {
  FTRACE(0x123558d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123558d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123558d1 mov ebp, esp */
  EBP = (ESP);
  /* 123558d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123558d4 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 123558d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123558dc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123558e0 je 0x123558eb */
  if (C.zf) goto L_123558eb;
  /* 123558e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123558e5 mov dword ptr [0x1237ea84], ecx */
  w32((uint32_t)(0x1237ea84), (ECX));
L_123558eb:;
  /* 123558eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123558ee mov esp, ebp */
  ESP = (EBP);
  /* 123558f0 pop ebp */
  EBP = (pop32());
  /* 123558f1 ret  */
  ESPCHK(0x123558d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005900 @ 0x12355900 (103 bytes, 38 insns) */
void f_12355900(void) {
  FTRACE(0x12355900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355900 push ebp */
  push32((uint32_t)(EBP));
  /* 12355901 mov ebp, esp */
  EBP = (ESP);
  /* 12355903 push ecx */
  push32((uint32_t)(ECX));
  /* 12355904 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 12355909 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1235590c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235590e jne 0x12355912 */
  if (!C.zf) goto L_12355912;
  /* 12355910 jmp 0x12355963 */
  goto L_12355963;
L_12355912:;
  /* 12355912 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355914 call 0x12357dc0 */
  push32(0x12355919u); f_12357dc0();
  /* 12355919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235591c mov ecx, dword ptr [0x123805a8] */
  ECX = (r32((uint32_t)(0x123805a8)));
  /* 12355922 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12355925 jmp 0x1235592f */
  goto L_1235592f;
L_12355927:;
  /* 12355927 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235592a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235592c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235592f:;
  /* 1235592f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355933 je 0x12355959 */
  if (C.zf) goto L_12355959;
  /* 12355935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355938 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1235593b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12355941 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355944 jne 0x12355957 */
  if (!C.zf) goto L_12355957;
  /* 12355946 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355949 push eax */
  push32((uint32_t)(EAX));
  /* 1235594a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235594d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355950 push ecx */
  push32((uint32_t)(ECX));
  /* 12355951 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12355954u);
  /* 12355954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355957:;
  /* 12355957 jmp 0x12355927 */
  goto L_12355927;
L_12355959:;
  /* 12355959 push 9 */
  push32((uint32_t)(0x9u));
  /* 1235595b call 0x12357e60 */
  push32(0x12355960u); f_12357e60();
  /* 12355960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355963:;
  /* 12355963 mov esp, ebp */
  ESP = (EBP);
  /* 12355965 pop ebp */
  EBP = (pop32());
  /* 12355966 ret  */
  ESPCHK(0x12355900u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12355970 (75 bytes, 28 insns) */
void f_12355970(void) {
  FTRACE(0x12355970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355970 push ebp */
  push32((uint32_t)(EBP));
  /* 12355971 mov ebp, esp */
  EBP = (ESP);
  /* 12355973 push ecx */
  push32((uint32_t)(ECX));
  /* 12355974 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355978 je 0x123559ad */
  if (C.zf) goto L_123559ad;
  /* 1235597a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235597d push eax */
  push32((uint32_t)(EAX));
  /* 1235597e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355981 push ecx */
  push32((uint32_t)(ECX));
  /* 12355982 call dword ptr [0x12383318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383318))), 0x12355988u);
  /* 12355988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235598a jne 0x123559ad */
  if (!C.zf) goto L_123559ad;
  /* 1235598c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355990 je 0x123559a4 */
  if (C.zf) goto L_123559a4;
  /* 12355992 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355995 push edx */
  push32((uint32_t)(EDX));
  /* 12355996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355999 push eax */
  push32((uint32_t)(EAX));
  /* 1235599a call dword ptr [0x12383314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383314))), 0x123559a0u);
  /* 123559a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123559a2 jne 0x123559ad */
  if (!C.zf) goto L_123559ad;
L_123559a4:;
  /* 123559a4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 123559ab jmp 0x123559b4 */
  goto L_123559b4;
L_123559ad:;
  /* 123559ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123559b4:;
  /* 123559b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123559b7 mov esp, ebp */
  ESP = (EBP);
  /* 123559b9 pop ebp */
  EBP = (pop32());
  /* 123559ba ret  */
  ESPCHK(0x12355970u, _esp0);
  ESP += 4; return;
}

/* FUN_100059c0 @ 0x123559c0 (134 bytes, 50 insns) */
void f_123559c0(void) {
  FTRACE(0x123559c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123559c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123559c1 mov ebp, esp */
  EBP = (ESP);
  /* 123559c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123559c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123559c8 jne 0x123559ce */
  if (!C.zf) goto L_123559ce;
  /* 123559ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123559cc jmp 0x12355a42 */
  goto L_12355a42;
L_123559ce:;
  /* 123559ce push 1 */
  push32((uint32_t)(0x1u));
  /* 123559d0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 123559d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123559d5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123559d8 push eax */
  push32((uint32_t)(EAX));
  /* 123559d9 call 0x12355970 */
  push32(0x123559deu); f_12355970();
  /* 123559de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123559e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123559e3 jne 0x123559e9 */
  if (!C.zf) goto L_123559e9;
  /* 123559e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123559e7 jmp 0x12355a42 */
  goto L_12355a42;
L_123559e9:;
  /* 123559e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123559ec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123559ef push ecx */
  push32((uint32_t)(ECX));
  /* 123559f0 call 0x123586c0 */
  push32(0x123559f5u); f_123586c0();
  /* 123559f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123559f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123559fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123559ff je 0x12355a16 */
  if (C.zf) goto L_12355a16;
  /* 12355a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355a04 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355a07 push edx */
  push32((uint32_t)(EDX));
  /* 12355a08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355a0b push eax */
  push32((uint32_t)(EAX));
  /* 12355a0c call 0x12358720 */
  push32(0x12355a11u); f_12358720();
  /* 12355a11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355a14 jmp 0x12355a42 */
  goto L_12355a42;
L_12355a16:;
  /* 12355a16 mov ecx, dword ptr [0x1238055c] */
  ECX = (r32((uint32_t)(0x1238055c)));
  /* 12355a1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12355a22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355a24 je 0x12355a2d */
  if (C.zf) goto L_12355a2d;
  /* 12355a26 mov eax, 1 */
  EAX = (0x1u);
  /* 12355a2b jmp 0x12355a42 */
  goto L_12355a42;
L_12355a2d:;
  /* 12355a2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355a30 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355a33 push edx */
  push32((uint32_t)(EDX));
  /* 12355a34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355a36 mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 12355a3b push eax */
  push32((uint32_t)(EAX));
  /* 12355a3c call dword ptr [0x1238331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238331c))), 0x12355a42u);
L_12355a42:;
  /* 12355a42 mov esp, ebp */
  ESP = (EBP);
  /* 12355a44 pop ebp */
  EBP = (pop32());
  /* 12355a45 ret  */
  ESPCHK(0x123559c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a50 @ 0x12355a50 (227 bytes, 80 insns) */
void f_12355a50(void) {
  FTRACE(0x12355a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12355a51 mov ebp, esp */
  EBP = (ESP);
  /* 12355a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12355a54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355a57 push eax */
  push32((uint32_t)(EAX));
  /* 12355a58 call 0x123559c0 */
  push32(0x12355a5du); f_123559c0();
  /* 12355a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355a60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355a62 jne 0x12355a6b */
  if (!C.zf) goto L_12355a6b;
  /* 12355a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355a66 jmp 0x12355b2f */
  goto L_12355b2f;
L_12355a6b:;
  /* 12355a6b push 9 */
  push32((uint32_t)(0x9u));
  /* 12355a6d call 0x12357dc0 */
  push32(0x12355a72u); f_12357dc0();
  /* 12355a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355a78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355a7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12355a7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355a81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355a84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355a89 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355a8c je 0x12355ab0 */
  if (C.zf) goto L_12355ab0;
  /* 12355a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355a91 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355a95 je 0x12355ab0 */
  if (C.zf) goto L_12355ab0;
  /* 12355a97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355a9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355a9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355aa2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355aa5 je 0x12355ab0 */
  if (C.zf) goto L_12355ab0;
  /* 12355aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355aaa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355aae jne 0x12355b23 */
  if (!C.zf) goto L_12355b23;
L_12355ab0:;
  /* 12355ab0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12355ab2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355ab5 push edx */
  push32((uint32_t)(EDX));
  /* 12355ab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355ab9 push eax */
  push32((uint32_t)(EAX));
  /* 12355aba call 0x12355970 */
  push32(0x12355abfu); f_12355970();
  /* 12355abf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355ac2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355ac4 je 0x12355b23 */
  if (C.zf) goto L_12355b23;
  /* 12355ac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355ac9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12355acc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355acf jne 0x12355b23 */
  if (!C.zf) goto L_12355b23;
  /* 12355ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355ad4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12355ad7 cmp ecx, dword ptr [0x1237ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355add jg 0x12355b23 */
  if ((!C.zf&&C.sf==C.of)) goto L_12355b23;
  /* 12355adf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355ae3 je 0x12355af0 */
  if (C.zf) goto L_12355af0;
  /* 12355ae5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12355ae8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355aeb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12355aee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12355af0:;
  /* 12355af0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355af4 je 0x12355b01 */
  if (C.zf) goto L_12355b01;
  /* 12355af6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12355af9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355afc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12355aff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12355b01:;
  /* 12355b01 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355b05 je 0x12355b12 */
  if (C.zf) goto L_12355b12;
  /* 12355b07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12355b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355b0d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12355b10 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12355b12:;
  /* 12355b12 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355b14 call 0x12357e60 */
  push32(0x12355b19u); f_12357e60();
  /* 12355b19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355b1c mov eax, 1 */
  EAX = (0x1u);
  /* 12355b21 jmp 0x12355b2f */
  goto L_12355b2f;
L_12355b23:;
  /* 12355b23 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355b25 call 0x12357e60 */
  push32(0x12355b2au); f_12357e60();
  /* 12355b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12355b2f:;
  /* 12355b2f mov esp, ebp */
  ESP = (EBP);
  /* 12355b31 pop ebp */
  EBP = (pop32());
  /* 12355b32 ret  */
  ESPCHK(0x12355a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b40 @ 0x12355b40 (28 bytes, 11 insns) */
void f_12355b40(void) {
  FTRACE(0x12355b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12355b41 mov ebp, esp */
  EBP = (ESP);
  /* 12355b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12355b44 mov eax, dword ptr [0x12381f18] */
  EAX = (r32((uint32_t)(0x12381f18)));
  /* 12355b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12355b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355b4f mov dword ptr [0x12381f18], ecx */
  w32((uint32_t)(0x12381f18), (ECX));
  /* 12355b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355b58 mov esp, ebp */
  ESP = (EBP);
  /* 12355b5a pop ebp */
  EBP = (pop32());
  /* 12355b5b ret  */
  ESPCHK(0x12355b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b60 @ 0x12355b60 (362 bytes, 116 insns) */
void f_12355b60(void) {
  FTRACE(0x12355b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12355b61 mov ebp, esp */
  EBP = (ESP);
  /* 12355b63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355b66 push ebx */
  push32((uint32_t)(EBX));
  /* 12355b67 push esi */
  push32((uint32_t)(ESI));
  /* 12355b68 push edi */
  push32((uint32_t)(EDI));
  /* 12355b69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355b6d jne 0x12355b9a */
  if (!C.zf) goto L_12355b9a;
L_12355b6f:;
  /* 12355b6f push 0x1237baa8 */
  push32((uint32_t)(0x1237baa8u));
  /* 12355b74 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12355b79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355b7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12355b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12355b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12355b81 call 0x12353480 */
  push32(0x12355b86u); f_12353480();
  /* 12355b86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355b89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355b8c jne 0x12355b8f */
  if (!C.zf) goto L_12355b8f;
  /* 12355b8e int3  */
  x86_unimpl("int3 @ 0x12355b8e");
L_12355b8f:;
  /* 12355b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355b93 jne 0x12355b6f */
  if (!C.zf) goto L_12355b6f;
  /* 12355b95 jmp 0x12355cc3 */
  goto L_12355cc3;
L_12355b9a:;
  /* 12355b9a push 9 */
  push32((uint32_t)(0x9u));
  /* 12355b9c call 0x12357dc0 */
  push32(0x12355ba1u); f_12357dc0();
  /* 12355ba1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355ba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355ba7 mov edx, dword ptr [0x123805a8] */
  EDX = (r32((uint32_t)(0x123805a8)));
  /* 12355bad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12355baf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12355bb6 jmp 0x12355bc1 */
  goto L_12355bc1;
L_12355bb8:;
  /* 12355bb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355bbb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355bbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12355bc1:;
  /* 12355bc1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355bc5 jge 0x12355be5 */
  if ((C.sf==C.of)) goto L_12355be5;
  /* 12355bc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355bca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355bcd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12355bd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355bd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355bdb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12355be3 jmp 0x12355bb8 */
  goto L_12355bb8;
L_12355be5:;
  /* 12355be5 mov edx, dword ptr [0x123805a8] */
  EDX = (r32((uint32_t)(0x123805a8)));
  /* 12355beb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12355bee jmp 0x12355bf8 */
  goto L_12355bf8;
L_12355bf0:;
  /* 12355bf0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355bf3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12355bf5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12355bf8:;
  /* 12355bf8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355bfc je 0x12355ca1 */
  if (C.zf) goto L_12355ca1;
  /* 12355c02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c05 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355c08 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355c0f jl 0x12355c77 */
  if ((C.sf!=C.of)) goto L_12355c77;
  /* 12355c11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c14 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12355c17 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12355c1d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355c20 jge 0x12355c77 */
  if ((C.sf==C.of)) goto L_12355c77;
  /* 12355c22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c25 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12355c28 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12355c2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355c31 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12355c35 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355c38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c3b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12355c3e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12355c44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355c47 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12355c4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c4e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355c51 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355c56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355c59 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12355c5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c60 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355c63 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c66 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12355c69 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355c71 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12355c75 jmp 0x12355c9c */
  goto L_12355c9c;
L_12355c77:;
  /* 12355c77 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355c7a push edx */
  push32((uint32_t)(EDX));
  /* 12355c7b push 0x1237ba84 */
  push32((uint32_t)(0x1237ba84u));
  /* 12355c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355c86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355c88 call 0x12353480 */
  push32(0x12355c8du); f_12353480();
  /* 12355c8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355c93 jne 0x12355c96 */
  if (!C.zf) goto L_12355c96;
  /* 12355c95 int3  */
  x86_unimpl("int3 @ 0x12355c95");
L_12355c96:;
  /* 12355c96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355c98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355c9a jne 0x12355c77 */
  if (!C.zf) goto L_12355c77;
L_12355c9c:;
  /* 12355c9c jmp 0x12355bf0 */
  goto L_12355bf0;
L_12355ca1:;
  /* 12355ca1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355ca4 mov edx, dword ptr [0x123805b0] */
  EDX = (r32((uint32_t)(0x123805b0)));
  /* 12355caa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12355cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355cb0 mov ecx, dword ptr [0x123805a4] */
  ECX = (r32((uint32_t)(0x123805a4)));
  /* 12355cb6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12355cb9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355cbb call 0x12357e60 */
  push32(0x12355cc0u); f_12357e60();
  /* 12355cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355cc3:;
  /* 12355cc3 pop edi */
  EDI = (pop32());
  /* 12355cc4 pop esi */
  ESI = (pop32());
  /* 12355cc5 pop ebx */
  EBX = (pop32());
  /* 12355cc6 mov esp, ebp */
  ESP = (EBP);
  /* 12355cc8 pop ebp */
  EBP = (pop32());
  /* 12355cc9 ret  */
  ESPCHK(0x12355b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cd0 @ 0x12355cd0 (291 bytes, 95 insns) */
void f_12355cd0(void) {
  FTRACE(0x12355cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12355cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12355cd3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355cd6 push ebx */
  push32((uint32_t)(EBX));
  /* 12355cd7 push esi */
  push32((uint32_t)(ESI));
  /* 12355cd8 push edi */
  push32((uint32_t)(EDI));
  /* 12355cd9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12355ce0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355ce4 je 0x12355cf2 */
  if (C.zf) goto L_12355cf2;
  /* 12355ce6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355cea je 0x12355cf2 */
  if (C.zf) goto L_12355cf2;
  /* 12355cec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355cf0 jne 0x12355d20 */
  if (!C.zf) goto L_12355d20;
L_12355cf2:;
  /* 12355cf2 push 0x1237bad0 */
  push32((uint32_t)(0x1237bad0u));
  /* 12355cf7 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12355cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12355cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12355d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355d04 call 0x12353480 */
  push32(0x12355d09u); f_12353480();
  /* 12355d09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d0f jne 0x12355d12 */
  if (!C.zf) goto L_12355d12;
  /* 12355d11 int3  */
  x86_unimpl("int3 @ 0x12355d11");
L_12355d12:;
  /* 12355d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355d16 jne 0x12355cf2 */
  if (!C.zf) goto L_12355cf2;
  /* 12355d18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12355d1b jmp 0x12355dec */
  goto L_12355dec;
L_12355d20:;
  /* 12355d20 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12355d27 jmp 0x12355d32 */
  goto L_12355d32;
L_12355d29:;
  /* 12355d29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355d2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12355d32:;
  /* 12355d32 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d36 jge 0x12355dbc */
  if ((C.sf==C.of)) goto L_12355dbc;
  /* 12355d3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12355d42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d45 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12355d48 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12355d4c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355d50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355d56 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12355d5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12355d60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d63 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12355d66 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12355d6a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355d6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355d74 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12355d78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355d7e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d83 jne 0x12355d92 */
  if (!C.zf) goto L_12355d92;
  /* 12355d85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355d8b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d90 je 0x12355db7 */
  if (C.zf) goto L_12355db7;
L_12355d92:;
  /* 12355d92 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d96 je 0x12355db7 */
  if (C.zf) goto L_12355db7;
  /* 12355d98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355d9c jne 0x12355db0 */
  if (!C.zf) goto L_12355db0;
  /* 12355d9e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355da2 jne 0x12355db7 */
  if (!C.zf) goto L_12355db7;
  /* 12355da4 mov eax, dword ptr [0x1237ea84] */
  EAX = (r32((uint32_t)(0x1237ea84)));
  /* 12355da9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12355dac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355dae je 0x12355db7 */
  if (C.zf) goto L_12355db7;
L_12355db0:;
  /* 12355db0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12355db7:;
  /* 12355db7 jmp 0x12355d29 */
  goto L_12355d29;
L_12355dbc:;
  /* 12355dbc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12355dbf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355dc2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12355dc5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355dc8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355dcb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12355dce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12355dd1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12355dd4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12355dd7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355dda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355ddd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12355de0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355de3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12355de9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12355dec:;
  /* 12355dec pop edi */
  EDI = (pop32());
  /* 12355ded pop esi */
  ESI = (pop32());
  /* 12355dee pop ebx */
  EBX = (pop32());
  /* 12355def mov esp, ebp */
  ESP = (EBP);
  /* 12355df1 pop ebp */
  EBP = (pop32());
  /* 12355df2 ret  */
  ESPCHK(0x12355cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e00 @ 0x12355e00 (697 bytes, 253 insns) */
void f_12355e00(void) {
  FTRACE(0x12355e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12355e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12355e01 mov ebp, esp */
  EBP = (ESP);
  /* 12355e03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12355e06 push ebx */
  push32((uint32_t)(EBX));
  /* 12355e07 push esi */
  push32((uint32_t)(ESI));
  /* 12355e08 push edi */
  push32((uint32_t)(EDI));
  /* 12355e09 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12355e10 push 9 */
  push32((uint32_t)(0x9u));
  /* 12355e12 call 0x12357dc0 */
  push32(0x12355e17u); f_12357dc0();
  /* 12355e17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355e1a:;
  /* 12355e1a push 0x1237bbc8 */
  push32((uint32_t)(0x1237bbc8u));
  /* 12355e1f push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12355e24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355e26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355e28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12355e2c call 0x12353480 */
  push32(0x12355e31u); f_12353480();
  /* 12355e31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355e34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355e37 jne 0x12355e3a */
  if (!C.zf) goto L_12355e3a;
  /* 12355e39 int3  */
  x86_unimpl("int3 @ 0x12355e39");
L_12355e3a:;
  /* 12355e3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355e3e jne 0x12355e1a */
  if (!C.zf) goto L_12355e1a;
  /* 12355e40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355e44 je 0x12355e4e */
  if (C.zf) goto L_12355e4e;
  /* 12355e46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12355e49 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12355e4b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12355e4e:;
  /* 12355e4e mov eax, dword ptr [0x123805a8] */
  EAX = (r32((uint32_t)(0x123805a8)));
  /* 12355e53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12355e56 jmp 0x12355e60 */
  goto L_12355e60;
L_12355e58:;
  /* 12355e58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355e5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12355e5d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12355e60:;
  /* 12355e60 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355e64 je 0x12356082 */
  if (C.zf) goto L_12356082;
  /* 12355e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355e6d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355e70 je 0x12356082 */
  if (C.zf) goto L_12356082;
  /* 12355e76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355e79 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12355e7c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12355e82 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355e85 je 0x12355eb4 */
  if (C.zf) goto L_12355eb4;
  /* 12355e87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355e8a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12355e8d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12355e93 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355e95 je 0x12355eb4 */
  if (C.zf) goto L_12355eb4;
  /* 12355e97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355e9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355e9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355ea2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355ea5 jne 0x12355eb9 */
  if (!C.zf) goto L_12355eb9;
  /* 12355ea7 mov ecx, dword ptr [0x1237ea84] */
  ECX = (r32((uint32_t)(0x1237ea84)));
  /* 12355ead and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12355eb0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355eb2 jne 0x12355eb9 */
  if (!C.zf) goto L_12355eb9;
L_12355eb4:;
  /* 12355eb4 jmp 0x1235607d */
  goto L_1235607d;
L_12355eb9:;
  /* 12355eb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355ebc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355ec0 je 0x12355f32 */
  if (C.zf) goto L_12355f32;
  /* 12355ec2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ec4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12355ec6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355ec9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12355ecc push ecx */
  push32((uint32_t)(ECX));
  /* 12355ecd call 0x12355970 */
  push32(0x12355ed2u); f_12355970();
  /* 12355ed2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355ed7 jne 0x12355f03 */
  if (!C.zf) goto L_12355f03;
L_12355ed9:;
  /* 12355ed9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355edc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12355edf push eax */
  push32((uint32_t)(EAX));
  /* 12355ee0 push 0x1237bbb4 */
  push32((uint32_t)(0x1237bbb4u));
  /* 12355ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ee9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355eeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12355eed call 0x12353480 */
  push32(0x12355ef2u); f_12353480();
  /* 12355ef2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355ef5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355ef8 jne 0x12355efb */
  if (!C.zf) goto L_12355efb;
  /* 12355efa int3  */
  x86_unimpl("int3 @ 0x12355efa");
L_12355efb:;
  /* 12355efb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12355efd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12355eff jne 0x12355ed9 */
  if (!C.zf) goto L_12355ed9;
  /* 12355f01 jmp 0x12355f32 */
  goto L_12355f32;
L_12355f03:;
  /* 12355f03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f06 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12355f09 push eax */
  push32((uint32_t)(EAX));
  /* 12355f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f0d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12355f10 push edx */
  push32((uint32_t)(EDX));
  /* 12355f11 push 0x1237bba8 */
  push32((uint32_t)(0x1237bba8u));
  /* 12355f16 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f1e call 0x12353480 */
  push32(0x12355f23u); f_12353480();
  /* 12355f23 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355f26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355f29 jne 0x12355f2c */
  if (!C.zf) goto L_12355f2c;
  /* 12355f2b int3  */
  x86_unimpl("int3 @ 0x12355f2b");
L_12355f2c:;
  /* 12355f2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355f2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355f30 jne 0x12355f03 */
  if (!C.zf) goto L_12355f03;
L_12355f32:;
  /* 12355f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f35 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12355f38 push edx */
  push32((uint32_t)(EDX));
  /* 12355f39 push 0x1237bba0 */
  push32((uint32_t)(0x1237bba0u));
  /* 12355f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f46 call 0x12353480 */
  push32(0x12355f4bu); f_12353480();
  /* 12355f4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355f51 jne 0x12355f54 */
  if (!C.zf) goto L_12355f54;
  /* 12355f53 int3  */
  x86_unimpl("int3 @ 0x12355f53");
L_12355f54:;
  /* 12355f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12355f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12355f58 jne 0x12355f32 */
  if (!C.zf) goto L_12355f32;
  /* 12355f5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f5d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12355f60 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12355f66 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355f69 jne 0x12355fdc */
  if (!C.zf) goto L_12355fdc;
L_12355f6b:;
  /* 12355f6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f6e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12355f71 push ecx */
  push32((uint32_t)(ECX));
  /* 12355f72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12355f78 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12355f7b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12355f80 push eax */
  push32((uint32_t)(EAX));
  /* 12355f81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355f84 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355f87 push ecx */
  push32((uint32_t)(ECX));
  /* 12355f88 push 0x1237bb6c */
  push32((uint32_t)(0x1237bb6cu));
  /* 12355f8d push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f8f push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355f95 call 0x12353480 */
  push32(0x12355f9au); f_12353480();
  /* 12355f9a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355f9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355fa0 jne 0x12355fa3 */
  if (!C.zf) goto L_12355fa3;
  /* 12355fa2 int3  */
  x86_unimpl("int3 @ 0x12355fa2");
L_12355fa3:;
  /* 12355fa3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12355fa5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12355fa7 jne 0x12355f6b */
  if (!C.zf) goto L_12355f6b;
  /* 12355fa9 cmp dword ptr [0x12381f18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381f18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355fb0 je 0x12355fcb */
  if (C.zf) goto L_12355fcb;
  /* 12355fb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fb5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12355fb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12355fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fbc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355fbf push edx */
  push32((uint32_t)(EDX));
  /* 12355fc0 call dword ptr [0x12381f18] */
  call_ind((uint32_t)(r32((uint32_t)(0x12381f18))), 0x12355fc6u);
  /* 12355fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12355fc9 jmp 0x12355fd7 */
  goto L_12355fd7;
L_12355fcb:;
  /* 12355fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fce push eax */
  push32((uint32_t)(EAX));
  /* 12355fcf call 0x123560c0 */
  push32(0x12355fd4u); f_123560c0();
  /* 12355fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12355fd7:;
  /* 12355fd7 jmp 0x1235607d */
  goto L_1235607d;
L_12355fdc:;
  /* 12355fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fdf cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12355fe3 jne 0x12356022 */
  if (!C.zf) goto L_12356022;
L_12355fe5:;
  /* 12355fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fe8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12355feb push eax */
  push32((uint32_t)(EAX));
  /* 12355fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12355fef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12355ff2 push ecx */
  push32((uint32_t)(ECX));
  /* 12355ff3 push 0x1237bb44 */
  push32((uint32_t)(0x1237bb44u));
  /* 12355ff8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ffa push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ffc push 0 */
  push32((uint32_t)(0x0u));
  /* 12355ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 12356000 call 0x12353480 */
  push32(0x12356005u); f_12353480();
  /* 12356005 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356008 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235600b jne 0x1235600e */
  if (!C.zf) goto L_1235600e;
  /* 1235600d int3  */
  x86_unimpl("int3 @ 0x1235600d");
L_1235600e:;
  /* 1235600e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356010 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356012 jne 0x12355fe5 */
  if (!C.zf) goto L_12355fe5;
  /* 12356014 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356017 push eax */
  push32((uint32_t)(EAX));
  /* 12356018 call 0x123560c0 */
  push32(0x1235601du); f_123560c0();
  /* 1235601d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356020 jmp 0x1235607d */
  goto L_1235607d;
L_12356022:;
  /* 12356022 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356025 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12356028 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235602e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356031 jne 0x1235607d */
  if (!C.zf) goto L_1235607d;
L_12356033:;
  /* 12356033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356036 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12356039 push ecx */
  push32((uint32_t)(ECX));
  /* 1235603a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235603d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12356040 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12356043 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12356048 push eax */
  push32((uint32_t)(EAX));
  /* 12356049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235604c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235604f push ecx */
  push32((uint32_t)(ECX));
  /* 12356050 push 0x1237bb10 */
  push32((uint32_t)(0x1237bb10u));
  /* 12356055 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356057 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356059 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235605b push 0 */
  push32((uint32_t)(0x0u));
  /* 1235605d call 0x12353480 */
  push32(0x12356062u); f_12353480();
  /* 12356062 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356065 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356068 jne 0x1235606b */
  if (!C.zf) goto L_1235606b;
  /* 1235606a int3  */
  x86_unimpl("int3 @ 0x1235606a");
L_1235606b:;
  /* 1235606b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235606d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235606f jne 0x12356033 */
  if (!C.zf) goto L_12356033;
  /* 12356071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356074 push eax */
  push32((uint32_t)(EAX));
  /* 12356075 call 0x123560c0 */
  push32(0x1235607au); f_123560c0();
  /* 1235607a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235607d:;
  /* 1235607d jmp 0x12355e58 */
  goto L_12355e58;
L_12356082:;
  /* 12356082 push 9 */
  push32((uint32_t)(0x9u));
  /* 12356084 call 0x12357e60 */
  push32(0x12356089u); f_12357e60();
  /* 12356089 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235608c:;
  /* 1235608c push 0x1237baf8 */
  push32((uint32_t)(0x1237baf8u));
  /* 12356091 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 12356096 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356098 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235609a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235609c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235609e call 0x12353480 */
  push32(0x123560a3u); f_12353480();
  /* 123560a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123560a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123560a9 jne 0x123560ac */
  if (!C.zf) goto L_123560ac;
  /* 123560ab int3  */
  x86_unimpl("int3 @ 0x123560ab");
L_123560ac:;
  /* 123560ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123560ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123560b0 jne 0x1235608c */
  if (!C.zf) goto L_1235608c;
  /* 123560b2 pop edi */
  EDI = (pop32());
  /* 123560b3 pop esi */
  ESI = (pop32());
  /* 123560b4 pop ebx */
  EBX = (pop32());
  /* 123560b5 mov esp, ebp */
  ESP = (EBP);
  /* 123560b7 pop ebp */
  EBP = (pop32());
  /* 123560b8 ret  */
  ESPCHK(0x12355e00u, _esp0);
  ESP += 4; return;
}

/* FUN_100060c0 @ 0x123560c0 (276 bytes, 89 insns) */
void f_123560c0(void) {
  FTRACE(0x123560c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123560c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123560c1 mov ebp, esp */
  EBP = (ESP);
  /* 123560c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123560c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123560c7 push esi */
  push32((uint32_t)(ESI));
  /* 123560c8 push edi */
  push32((uint32_t)(EDI));
  /* 123560c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 123560d0 jmp 0x123560db */
  goto L_123560db;
L_123560d2:;
  /* 123560d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123560d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123560d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_123560db:;
  /* 123560db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123560de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123560e2 jge 0x123560ef */
  if ((C.sf==C.of)) goto L_123560ef;
  /* 123560e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123560e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123560ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 123560ed jmp 0x123560f6 */
  goto L_123560f6;
L_123560ef:;
  /* 123560ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_123560f6:;
  /* 123560f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123560f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123560fc jge 0x1235619c */
  if ((C.sf==C.of)) goto L_1235619c;
  /* 12356102 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356105 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356108 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1235610b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1235610e cmp dword ptr [0x1237eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1237eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356115 jle 0x12356133 */
  if ((C.zf||C.sf!=C.of)) goto L_12356133;
  /* 12356117 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1235611c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1235611f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12356125 push ecx */
  push32((uint32_t)(ECX));
  /* 12356126 call 0x1235a3d0 */
  push32(0x1235612bu); f_1235a3d0();
  /* 1235612b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235612e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12356131 jmp 0x12356150 */
  goto L_12356150;
L_12356133:;
  /* 12356133 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12356136 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235613c mov eax, dword ptr [0x1237ec98] */
  EAX = (r32((uint32_t)(0x1237ec98)));
  /* 12356141 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12356143 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12356147 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1235614d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12356150:;
  /* 12356150 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356154 je 0x12356164 */
  if (C.zf) goto L_12356164;
  /* 12356156 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12356159 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235615f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12356162 jmp 0x1235616b */
  goto L_1235616b;
L_12356164:;
  /* 12356164 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1235616b:;
  /* 1235616b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1235616e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12356171 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12356175 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12356178 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235617e push edx */
  push32((uint32_t)(EDX));
  /* 1235617f push 0x1237bbec */
  push32((uint32_t)(0x1237bbecu));
  /* 12356184 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12356187 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235618a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1235618e push ecx */
  push32((uint32_t)(ECX));
  /* 1235618f call 0x1235a2d0 */
  push32(0x12356194u); f_1235a2d0();
  /* 12356194 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356197 jmp 0x123560d2 */
  goto L_123560d2;
L_1235619c:;
  /* 1235619c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1235619f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_123561a4:;
  /* 123561a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123561a7 push eax */
  push32((uint32_t)(EAX));
  /* 123561a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 123561ab push ecx */
  push32((uint32_t)(ECX));
  /* 123561ac push 0x1237bbdc */
  push32((uint32_t)(0x1237bbdcu));
  /* 123561b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123561b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123561b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123561b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123561b9 call 0x12353480 */
  push32(0x123561beu); f_12353480();
  /* 123561be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123561c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123561c4 jne 0x123561c7 */
  if (!C.zf) goto L_123561c7;
  /* 123561c6 int3  */
  x86_unimpl("int3 @ 0x123561c6");
L_123561c7:;
  /* 123561c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123561c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123561cb jne 0x123561a4 */
  if (!C.zf) goto L_123561a4;
  /* 123561cd pop edi */
  EDI = (pop32());
  /* 123561ce pop esi */
  ESI = (pop32());
  /* 123561cf pop ebx */
  EBX = (pop32());
  /* 123561d0 mov esp, ebp */
  ESP = (EBP);
  /* 123561d2 pop ebp */
  EBP = (pop32());
  /* 123561d3 ret  */
  ESPCHK(0x123560c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x123561e0 (116 bytes, 46 insns) */
void f_123561e0(void) {
  FTRACE(0x123561e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123561e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123561e1 mov ebp, esp */
  EBP = (ESP);
  /* 123561e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123561e6 push ebx */
  push32((uint32_t)(EBX));
  /* 123561e7 push esi */
  push32((uint32_t)(ESI));
  /* 123561e8 push edi */
  push32((uint32_t)(EDI));
  /* 123561e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123561ec push eax */
  push32((uint32_t)(EAX));
  /* 123561ed call 0x12355b60 */
  push32(0x123561f2u); f_12355b60();
  /* 123561f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123561f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123561f9 jne 0x12356214 */
  if (!C.zf) goto L_12356214;
  /* 123561fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123561ff jne 0x12356214 */
  if (!C.zf) goto L_12356214;
  /* 12356201 mov ecx, dword ptr [0x1237ea84] */
  ECX = (r32((uint32_t)(0x1237ea84)));
  /* 12356207 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1235620a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1235620c je 0x1235624b */
  if (C.zf) goto L_1235624b;
  /* 1235620e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356212 je 0x1235624b */
  if (C.zf) goto L_1235624b;
L_12356214:;
  /* 12356214 push 0x1237bbf4 */
  push32((uint32_t)(0x1237bbf4u));
  /* 12356219 push 0x1237b5c0 */
  push32((uint32_t)(0x1237b5c0u));
  /* 1235621e push 0 */
  push32((uint32_t)(0x0u));
  /* 12356220 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356222 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356224 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356226 call 0x12353480 */
  push32(0x1235622bu); f_12353480();
  /* 1235622b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235622e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356231 jne 0x12356234 */
  if (!C.zf) goto L_12356234;
  /* 12356233 int3  */
  x86_unimpl("int3 @ 0x12356233");
L_12356234:;
  /* 12356234 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356236 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356238 jne 0x12356214 */
  if (!C.zf) goto L_12356214;
  /* 1235623a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235623c call 0x12355e00 */
  push32(0x12356241u); f_12355e00();
  /* 12356241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356244 mov eax, 1 */
  EAX = (0x1u);
  /* 12356249 jmp 0x1235624d */
  goto L_1235624d;
L_1235624b:;
  /* 1235624b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1235624d:;
  /* 1235624d pop edi */
  EDI = (pop32());
  /* 1235624e pop esi */
  ESI = (pop32());
  /* 1235624f pop ebx */
  EBX = (pop32());
  /* 12356250 mov esp, ebp */
  ESP = (EBP);
  /* 12356252 pop ebp */
  EBP = (pop32());
  /* 12356253 ret  */
  ESPCHK(0x123561e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006260 @ 0x12356260 (197 bytes, 79 insns) */
void f_12356260(void) {
  FTRACE(0x12356260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356260 push ebp */
  push32((uint32_t)(EBP));
  /* 12356261 mov ebp, esp */
  EBP = (ESP);
  /* 12356263 push ecx */
  push32((uint32_t)(ECX));
  /* 12356264 push ebx */
  push32((uint32_t)(EBX));
  /* 12356265 push esi */
  push32((uint32_t)(ESI));
  /* 12356266 push edi */
  push32((uint32_t)(EDI));
  /* 12356267 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235626b jne 0x12356272 */
  if (!C.zf) goto L_12356272;
  /* 1235626d jmp 0x1235631e */
  goto L_1235631e;
L_12356272:;
  /* 12356272 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12356279 jmp 0x12356284 */
  goto L_12356284;
L_1235627b:;
  /* 1235627b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235627e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356281 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12356284:;
  /* 12356284 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356288 jge 0x123562ce */
  if ((C.sf==C.of)) goto L_123562ce;
L_1235628a:;
  /* 1235628a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235628d mov edx, dword ptr [ecx*4 + 0x1237ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237ea94)));
  /* 12356294 push edx */
  push32((uint32_t)(EDX));
  /* 12356295 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356298 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235629b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1235629f push edx */
  push32((uint32_t)(EDX));
  /* 123562a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123562a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123562a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 123562aa push edx */
  push32((uint32_t)(EDX));
  /* 123562ab push 0x1237bc50 */
  push32((uint32_t)(0x1237bc50u));
  /* 123562b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123562b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123562b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123562b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123562b8 call 0x12353480 */
  push32(0x123562bdu); f_12353480();
  /* 123562bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123562c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123562c3 jne 0x123562c6 */
  if (!C.zf) goto L_123562c6;
  /* 123562c5 int3  */
  x86_unimpl("int3 @ 0x123562c5");
L_123562c6:;
  /* 123562c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123562c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123562ca jne 0x1235628a */
  if (!C.zf) goto L_1235628a;
  /* 123562cc jmp 0x1235627b */
  goto L_1235627b;
L_123562ce:;
  /* 123562ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123562d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 123562d4 push edx */
  push32((uint32_t)(EDX));
  /* 123562d5 push 0x1237bc2c */
  push32((uint32_t)(0x1237bc2cu));
  /* 123562da push 0 */
  push32((uint32_t)(0x0u));
  /* 123562dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123562de push 0 */
  push32((uint32_t)(0x0u));
  /* 123562e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123562e2 call 0x12353480 */
  push32(0x123562e7u); f_12353480();
  /* 123562e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123562ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123562ed jne 0x123562f0 */
  if (!C.zf) goto L_123562f0;
  /* 123562ef int3  */
  x86_unimpl("int3 @ 0x123562ef");
L_123562f0:;
  /* 123562f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123562f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123562f4 jne 0x123562ce */
  if (!C.zf) goto L_123562ce;
L_123562f6:;
  /* 123562f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123562f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 123562fc push edx */
  push32((uint32_t)(EDX));
  /* 123562fd push 0x1237bc0c */
  push32((uint32_t)(0x1237bc0cu));
  /* 12356302 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356304 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356306 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356308 push 0 */
  push32((uint32_t)(0x0u));
  /* 1235630a call 0x12353480 */
  push32(0x1235630fu); f_12353480();
  /* 1235630f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356312 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356315 jne 0x12356318 */
  if (!C.zf) goto L_12356318;
  /* 12356317 int3  */
  x86_unimpl("int3 @ 0x12356317");
L_12356318:;
  /* 12356318 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235631a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235631c jne 0x123562f6 */
  if (!C.zf) goto L_123562f6;
L_1235631e:;
  /* 1235631e pop edi */
  EDI = (pop32());
  /* 1235631f pop esi */
  ESI = (pop32());
  /* 12356320 pop ebx */
  EBX = (pop32());
  /* 12356321 mov esp, ebp */
  ESP = (EBP);
  /* 12356323 pop ebp */
  EBP = (pop32());
  /* 12356324 ret  */
  ESPCHK(0x12356260u, _esp0);
  ESP += 4; return;
}

/* FUN_10006330 @ 0x12356330 (329 bytes, 102 insns) */
void f_12356330(void) {
  FTRACE(0x12356330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356330 push ebp */
  push32((uint32_t)(EBP));
  /* 12356331 mov ebp, esp */
  EBP = (ESP);
  /* 12356333 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356336 cmp dword ptr [0x12382090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12382090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235633d jne 0x12356344 */
  if (!C.zf) goto L_12356344;
  /* 1235633f call 0x1235ac70 */
  push32(0x12356344u); f_1235ac70();
L_12356344:;
  /* 12356344 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235634b mov eax, dword ptr [0x12380544] */
  EAX = (r32((uint32_t)(0x12380544)));
  /* 12356350 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12356353:;
  /* 12356353 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356356 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12356359 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235635b je 0x12356389 */
  if (C.zf) goto L_12356389;
  /* 1235635d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356360 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12356363 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356366 je 0x12356371 */
  if (C.zf) goto L_12356371;
  /* 12356368 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235636b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235636e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12356371:;
  /* 12356371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356374 push eax */
  push32((uint32_t)(EAX));
  /* 12356375 call 0x123571f0 */
  push32(0x1235637au); f_123571f0();
  /* 1235637a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235637d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356380 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12356384 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12356387 jmp 0x12356353 */
  goto L_12356353;
L_12356389:;
  /* 12356389 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1235638b push 0x1237bc70 */
  push32((uint32_t)(0x1237bc70u));
  /* 12356390 push 2 */
  push32((uint32_t)(0x2u));
  /* 12356392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356395 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1235639c push ecx */
  push32((uint32_t)(ECX));
  /* 1235639d call 0x123543c0 */
  push32(0x123563a2u); f_123543c0();
  /* 123563a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123563a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123563a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123563ab mov dword ptr [0x12380578], edx */
  w32((uint32_t)(0x12380578), (EDX));
  /* 123563b1 cmp dword ptr [0x12380578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123563b8 jne 0x123563c4 */
  if (!C.zf) goto L_123563c4;
  /* 123563ba push 9 */
  push32((uint32_t)(0x9u));
  /* 123563bc call 0x12353330 */
  push32(0x123563c1u); f_12353330();
  /* 123563c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123563c4:;
  /* 123563c4 mov eax, dword ptr [0x12380544] */
  EAX = (r32((uint32_t)(0x12380544)));
  /* 123563c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123563cc jmp 0x123563d7 */
  goto L_123563d7;
L_123563ce:;
  /* 123563ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123563d1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123563d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123563d7:;
  /* 123563d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123563da movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123563dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123563df je 0x12356447 */
  if (C.zf) goto L_12356447;
  /* 123563e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123563e4 push ecx */
  push32((uint32_t)(ECX));
  /* 123563e5 call 0x123571f0 */
  push32(0x123563eau); f_123571f0();
  /* 123563ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123563ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123563f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123563f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123563f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123563f9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123563fc je 0x12356445 */
  if (C.zf) goto L_12356445;
  /* 123563fe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12356400 push 0x1237bc70 */
  push32((uint32_t)(0x1237bc70u));
  /* 12356405 push 2 */
  push32((uint32_t)(0x2u));
  /* 12356407 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235640a push ecx */
  push32((uint32_t)(ECX));
  /* 1235640b call 0x123543c0 */
  push32(0x12356410u); f_123543c0();
  /* 12356410 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356413 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356416 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12356418 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235641b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235641e jne 0x1235642a */
  if (!C.zf) goto L_1235642a;
  /* 12356420 push 9 */
  push32((uint32_t)(0x9u));
  /* 12356422 call 0x12353330 */
  push32(0x12356427u); f_12353330();
  /* 12356427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235642a:;
  /* 1235642a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235642d push ecx */
  push32((uint32_t)(ECX));
  /* 1235642e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356431 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12356433 push eax */
  push32((uint32_t)(EAX));
  /* 12356434 call 0x12357370 */
  push32(0x12356439u); f_12357370();
  /* 12356439 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235643c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235643f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356442 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12356445:;
  /* 12356445 jmp 0x123563ce */
  goto L_123563ce;
L_12356447:;
  /* 12356447 push 2 */
  push32((uint32_t)(0x2u));
  /* 12356449 mov edx, dword ptr [0x12380544] */
  EDX = (r32((uint32_t)(0x12380544)));
  /* 1235644f push edx */
  push32((uint32_t)(EDX));
  /* 12356450 call 0x12354e50 */
  push32(0x12356455u); f_12354e50();
  /* 12356455 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356458 mov dword ptr [0x12380544], 0 */
  w32((uint32_t)(0x12380544), (0x0u));
  /* 12356462 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356465 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235646b mov dword ptr [0x12382080], 1 */
  w32((uint32_t)(0x12382080), (0x1u));
  /* 12356475 mov esp, ebp */
  ESP = (EBP);
  /* 12356477 pop ebp */
  EBP = (pop32());
  /* 12356478 ret  */
  ESPCHK(0x12356330u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x12356480 (216 bytes, 69 insns) */
void f_12356480(void) {
  FTRACE(0x12356480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356480 push ebp */
  push32((uint32_t)(EBP));
  /* 12356481 mov ebp, esp */
  EBP = (ESP);
  /* 12356483 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356486 cmp dword ptr [0x12382090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12382090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235648d jne 0x12356494 */
  if (!C.zf) goto L_12356494;
  /* 1235648f call 0x1235ac70 */
  push32(0x12356494u); f_1235ac70();
L_12356494:;
  /* 12356494 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12356499 push 0x123805b4 */
  push32((uint32_t)(0x123805b4u));
  /* 1235649e push 0 */
  push32((uint32_t)(0x0u));
  /* 123564a0 call dword ptr [0x123832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d4))), 0x123564a6u);
  /* 123564a6 mov dword ptr [0x12380588], 0x123805b4 */
  w32((uint32_t)(0x12380588), (0x123805b4u));
  /* 123564b0 mov eax, dword ptr [0x123820ac] */
  EAX = (r32((uint32_t)(0x123820ac)));
  /* 123564b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123564b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123564ba jne 0x123564c7 */
  if (!C.zf) goto L_123564c7;
  /* 123564bc mov edx, dword ptr [0x12380588] */
  EDX = (r32((uint32_t)(0x12380588)));
  /* 123564c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123564c5 jmp 0x123564cf */
  goto L_123564cf;
L_123564c7:;
  /* 123564c7 mov eax, dword ptr [0x123820ac] */
  EAX = (r32((uint32_t)(0x123820ac)));
  /* 123564cc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_123564cf:;
  /* 123564cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123564d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123564d5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 123564d8 push edx */
  push32((uint32_t)(EDX));
  /* 123564d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 123564dc push eax */
  push32((uint32_t)(EAX));
  /* 123564dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123564df push 0 */
  push32((uint32_t)(0x0u));
  /* 123564e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123564e4 push ecx */
  push32((uint32_t)(ECX));
  /* 123564e5 call 0x12356560 */
  push32(0x123564eau); f_12356560();
  /* 123564ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123564ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 123564f2 push 0x1237bc7c */
  push32((uint32_t)(0x1237bc7cu));
  /* 123564f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123564f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123564fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123564ff lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12356502 push ecx */
  push32((uint32_t)(ECX));
  /* 12356503 call 0x123543c0 */
  push32(0x12356508u); f_123543c0();
  /* 12356508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235650b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235650e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356512 jne 0x1235651e */
  if (!C.zf) goto L_1235651e;
  /* 12356514 push 8 */
  push32((uint32_t)(0x8u));
  /* 12356516 call 0x12353330 */
  push32(0x1235651bu); f_12353330();
  /* 1235651b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235651e:;
  /* 1235651e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12356521 push edx */
  push32((uint32_t)(EDX));
  /* 12356522 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12356525 push eax */
  push32((uint32_t)(EAX));
  /* 12356526 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356529 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235652c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1235652f push eax */
  push32((uint32_t)(EAX));
  /* 12356530 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356533 push ecx */
  push32((uint32_t)(ECX));
  /* 12356534 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356537 push edx */
  push32((uint32_t)(EDX));
  /* 12356538 call 0x12356560 */
  push32(0x1235653du); f_12356560();
  /* 1235653d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356540 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356543 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356546 mov dword ptr [0x1238056c], eax */
  w32((uint32_t)(0x1238056c), (EAX));
  /* 1235654b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235654e mov dword ptr [0x12380570], ecx */
  w32((uint32_t)(0x12380570), (ECX));
  /* 12356554 mov esp, ebp */
  ESP = (EBP);
  /* 12356556 pop ebp */
  EBP = (pop32());
  /* 12356557 ret  */
  ESPCHK(0x12356480u, _esp0);
  ESP += 4; return;
}

/* FUN_10006560 @ 0x12356560 (1060 bytes, 360 insns) */
void f_12356560(void) {
  FTRACE(0x12356560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356560 push ebp */
  push32((uint32_t)(EBP));
  /* 12356561 mov ebp, esp */
  EBP = (ESP);
  /* 12356563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356566 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356569 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235656f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12356572 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12356578 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235657b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235657e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356582 je 0x12356595 */
  if (C.zf) goto L_12356595;
  /* 12356584 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356587 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235658a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1235658c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235658f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356592 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12356595:;
  /* 12356595 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356598 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235659b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235659e jne 0x1235666d */
  if (!C.zf) goto L_1235666d;
L_123565a4:;
  /* 123565a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123565a7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123565aa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123565ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123565b0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123565b3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123565b6 je 0x12356632 */
  if (C.zf) goto L_12356632;
  /* 123565b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123565bb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123565be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123565c0 je 0x12356632 */
  if (C.zf) goto L_12356632;
  /* 123565c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123565c5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123565c7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123565c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123565cb mov al, byte ptr [edx + 0x12381de1] */
  AL = (r8((uint32_t)(EDX + 0x12381de1)));
  /* 123565d1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123565d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123565d6 je 0x12356607 */
  if (C.zf) goto L_12356607;
  /* 123565d8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123565db mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123565dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123565e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123565e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123565e5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123565e9 je 0x12356607 */
  if (C.zf) goto L_12356607;
  /* 123565eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123565ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123565f1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123565f3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123565f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123565f8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123565fb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123565fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356601 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356604 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12356607:;
  /* 12356607 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235660a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235660c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235660f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356612 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12356614 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356618 je 0x1235662d */
  if (C.zf) goto L_1235662d;
  /* 1235661a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235661d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356620 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12356622 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12356624 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356627 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235662a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1235662d:;
  /* 1235662d jmp 0x123565a4 */
  goto L_123565a4;
L_12356632:;
  /* 12356632 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356635 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12356637 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235663a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235663d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1235663f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356643 je 0x12356654 */
  if (C.zf) goto L_12356654;
  /* 12356645 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356648 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1235664b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235664e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356651 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12356654:;
  /* 12356654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356657 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235665a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235665d jne 0x12356668 */
  if (!C.zf) goto L_12356668;
  /* 1235665f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356662 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356665 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12356668:;
  /* 12356668 jmp 0x1235673c */
  goto L_1235673c;
L_1235666d:;
  /* 1235666d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356670 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12356672 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356675 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356678 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1235667a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235667e je 0x12356693 */
  if (C.zf) goto L_12356693;
  /* 12356680 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356686 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12356688 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1235668a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235668d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356690 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12356693:;
  /* 12356693 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12356698 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1235669b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235669e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123566a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123566a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123566a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123566ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123566af mov dl, byte ptr [ecx + 0x12381de1] */
  DL = (r8((uint32_t)(ECX + 0x12381de1)));
  /* 123566b5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 123566b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123566ba je 0x123566eb */
  if (C.zf) goto L_123566eb;
  /* 123566bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123566bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123566c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123566c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 123566c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 123566c9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123566cd je 0x123566e2 */
  if (C.zf) goto L_123566e2;
  /* 123566cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123566d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123566d5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123566d7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123566d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123566dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123566df mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_123566e2:;
  /* 123566e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123566e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123566e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123566eb:;
  /* 123566eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123566ee and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123566f4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123566f7 je 0x12356717 */
  if (C.zf) goto L_12356717;
  /* 123566f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123566fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12356701 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12356703 je 0x12356717 */
  if (C.zf) goto L_12356717;
  /* 12356705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356708 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1235670e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356711 jne 0x1235666d */
  if (!C.zf) goto L_1235666d;
L_12356717:;
  /* 12356717 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235671a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12356720 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356722 jne 0x1235672f */
  if (!C.zf) goto L_1235672f;
  /* 12356724 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356727 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235672a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235672d jmp 0x1235673c */
  goto L_1235673c;
L_1235672f:;
  /* 1235672f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356733 je 0x1235673c */
  if (C.zf) goto L_1235673c;
  /* 12356735 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356738 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1235673c:;
  /* 1235673c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12356743:;
  /* 12356743 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356746 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12356749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235674b je 0x1235676e */
  if (C.zf) goto L_1235676e;
L_1235674d:;
  /* 1235674d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356750 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12356753 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356756 je 0x12356763 */
  if (C.zf) goto L_12356763;
  /* 12356758 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235675b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235675e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356761 jne 0x1235676e */
  if (!C.zf) goto L_1235676e;
L_12356763:;
  /* 12356763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356766 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356769 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235676c jmp 0x1235674d */
  goto L_1235674d;
L_1235676e:;
  /* 1235676e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356771 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12356774 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12356776 jne 0x1235677d */
  if (!C.zf) goto L_1235677d;
  /* 12356778 jmp 0x1235695b */
  goto L_1235695b;
L_1235677d:;
  /* 1235677d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356781 je 0x12356794 */
  if (C.zf) goto L_12356794;
  /* 12356783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356786 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356789 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1235678b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235678e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356791 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12356794:;
  /* 12356794 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12356797 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12356799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235679c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235679f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_123567a1:;
  /* 123567a1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 123567a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_123567af:;
  /* 123567af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123567b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123567b5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123567b8 jne 0x123567ce */
  if (!C.zf) goto L_123567ce;
  /* 123567ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123567bd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123567c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123567c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123567c6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123567c9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 123567cc jmp 0x123567af */
  goto L_123567af;
L_123567ce:;
  /* 123567ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123567d1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123567d4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123567d7 jne 0x1235682a */
  if (!C.zf) goto L_1235682a;
  /* 123567d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123567dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123567de mov ecx, 2 */
  ECX = (0x2u);
  /* 123567e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 123567e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123567e7 jne 0x12356822 */
  if (!C.zf) goto L_12356822;
  /* 123567e9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123567ed je 0x1235680f */
  if (C.zf) goto L_1235680f;
  /* 123567ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123567f2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 123567f6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123567f9 jne 0x12356806 */
  if (!C.zf) goto L_12356806;
  /* 123567fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123567fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356801 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12356804 jmp 0x1235680d */
  goto L_1235680d;
L_12356806:;
  /* 12356806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1235680d:;
  /* 1235680d jmp 0x12356816 */
  goto L_12356816;
L_1235680f:;
  /* 1235680f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12356816:;
  /* 12356816 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356818 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235681c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1235681f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12356822:;
  /* 12356822 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356825 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12356827 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1235682a:;
  /* 1235682a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235682d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356830 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356833 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12356836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12356838 je 0x1235685e */
  if (C.zf) goto L_1235685e;
  /* 1235683a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235683e je 0x1235684f */
  if (C.zf) goto L_1235684f;
  /* 12356840 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356843 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12356846 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356849 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235684c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1235684f:;
  /* 1235684f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356852 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12356854 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356857 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235685a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1235685c jmp 0x1235682a */
  goto L_1235682a;
L_1235685e:;
  /* 1235685e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356861 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12356864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12356866 je 0x12356884 */
  if (C.zf) goto L_12356884;
  /* 12356868 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235686c jne 0x12356889 */
  if (!C.zf) goto L_12356889;
  /* 1235686e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356871 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12356874 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356877 je 0x12356884 */
  if (C.zf) goto L_12356884;
  /* 12356879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235687c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1235687f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356882 jne 0x12356889 */
  if (!C.zf) goto L_12356889;
L_12356884:;
  /* 12356884 jmp 0x12356934 */
  goto L_12356934;
L_12356889:;
  /* 12356889 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235688d je 0x12356926 */
  if (C.zf) goto L_12356926;
  /* 12356893 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356897 je 0x123568ed */
  if (C.zf) goto L_123568ed;
  /* 12356899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235689c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235689e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123568a0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123568a2 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 123568a8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123568ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123568ad je 0x123568d8 */
  if (C.zf) goto L_123568d8;
  /* 123568af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123568b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123568b5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 123568b7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 123568b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123568bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123568bf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 123568c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123568c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123568c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123568cb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 123568ce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123568d0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123568d3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123568d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_123568d8:;
  /* 123568d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123568db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123568de mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123568e0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 123568e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123568e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123568e8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123568eb jmp 0x12356919 */
  goto L_12356919;
L_123568ed:;
  /* 123568ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123568f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123568f2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123568f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123568f6 mov cl, byte ptr [eax + 0x12381de1] */
  CL = (r8((uint32_t)(EAX + 0x12381de1)));
  /* 123568fc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 123568ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12356901 je 0x12356919 */
  if (C.zf) goto L_12356919;
  /* 12356903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356906 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356909 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1235690c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235690f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12356911 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356914 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356917 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12356919:;
  /* 12356919 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235691c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235691e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356921 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356924 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12356926:;
  /* 12356926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356929 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235692c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235692f jmp 0x123567a1 */
  goto L_123567a1;
L_12356934:;
  /* 12356934 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356938 je 0x12356949 */
  if (C.zf) goto L_12356949;
  /* 1235693a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1235693d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12356940 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356943 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356946 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12356949:;
  /* 12356949 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1235694c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235694e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356951 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12356954 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12356956 jmp 0x12356743 */
  goto L_12356743;
L_1235695b:;
  /* 1235695b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235695f je 0x12356973 */
  if (C.zf) goto L_12356973;
  /* 12356961 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356964 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1235696a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235696d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356970 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12356973:;
  /* 12356973 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12356976 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12356978 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235697b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235697e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12356980 mov esp, ebp */
  ESP = (EBP);
  /* 12356982 pop ebp */
  EBP = (pop32());
  /* 12356983 ret  */
  ESPCHK(0x12356560u, _esp0);
  ESP += 4; return;
}

/* FUN_10006990 @ 0x12356990 (537 bytes, 173 insns) */
void f_12356990(void) {
  FTRACE(0x12356990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356990 push ebp */
  push32((uint32_t)(EBP));
  /* 12356991 mov ebp, esp */
  EBP = (ESP);
  /* 12356993 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356996 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1235699d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 123569a4 cmp dword ptr [0x123806b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123569ab jne 0x123569ea */
  if (!C.zf) goto L_123569ea;
  /* 123569ad call dword ptr [0x12383330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383330))), 0x123569b3u);
  /* 123569b3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 123569b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123569ba je 0x123569c8 */
  if (C.zf) goto L_123569c8;
  /* 123569bc mov dword ptr [0x123806b8], 1 */
  w32((uint32_t)(0x123806b8), (0x1u));
  /* 123569c6 jmp 0x123569ea */
  goto L_123569ea;
L_123569c8:;
  /* 123569c8 call dword ptr [0x1238332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238332c))), 0x123569ceu);
  /* 123569ce mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 123569d1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123569d5 je 0x123569e3 */
  if (C.zf) goto L_123569e3;
  /* 123569d7 mov dword ptr [0x123806b8], 2 */
  w32((uint32_t)(0x123806b8), (0x2u));
  /* 123569e1 jmp 0x123569ea */
  goto L_123569ea;
L_123569e3:;
  /* 123569e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123569e5 jmp 0x12356ba5 */
  goto L_12356ba5;
L_123569ea:;
  /* 123569ea cmp dword ptr [0x123806b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123806b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123569f1 jne 0x12356aee */
  if (!C.zf) goto L_12356aee;
  /* 123569f7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123569fb jne 0x12356a13 */
  if (!C.zf) goto L_12356a13;
  /* 123569fd call dword ptr [0x12383330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383330))), 0x12356a03u);
  /* 12356a03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12356a06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356a0a jne 0x12356a13 */
  if (!C.zf) goto L_12356a13;
  /* 12356a0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356a0e jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356a13:;
  /* 12356a13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12356a16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12356a19:;
  /* 12356a19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356a1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356a1e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12356a21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356a23 je 0x12356a45 */
  if (C.zf) goto L_12356a45;
  /* 12356a25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356a28 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356a2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12356a2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356a31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356a33 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12356a36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356a38 jne 0x12356a43 */
  if (!C.zf) goto L_12356a43;
  /* 12356a3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356a3d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356a40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12356a43:;
  /* 12356a43 jmp 0x12356a19 */
  goto L_12356a19;
L_12356a45:;
  /* 12356a45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356a48 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356a4b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12356a4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356a50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12356a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356a5e push edx */
  push32((uint32_t)(EDX));
  /* 12356a5f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12356a62 push eax */
  push32((uint32_t)(EAX));
  /* 12356a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356a67 call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12356a6du);
  /* 12356a6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12356a70 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356a74 je 0x12356a94 */
  if (C.zf) goto L_12356a94;
  /* 12356a76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12356a78 push 0x1237bc88 */
  push32((uint32_t)(0x1237bc88u));
  /* 12356a7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12356a7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356a82 push ecx */
  push32((uint32_t)(ECX));
  /* 12356a83 call 0x123543c0 */
  push32(0x12356a88u); f_123543c0();
  /* 12356a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356a8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12356a8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356a92 jne 0x12356aa5 */
  if (!C.zf) goto L_12356aa5;
L_12356a94:;
  /* 12356a94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12356a97 push edx */
  push32((uint32_t)(EDX));
  /* 12356a98 call dword ptr [0x12383324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383324))), 0x12356a9eu);
  /* 12356a9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356aa0 jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356aa5:;
  /* 12356aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356aa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356aac push eax */
  push32((uint32_t)(EAX));
  /* 12356aad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 12356ab1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ab4 push edx */
  push32((uint32_t)(EDX));
  /* 12356ab5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12356ab8 push eax */
  push32((uint32_t)(EAX));
  /* 12356ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356abb push 0 */
  push32((uint32_t)(0x0u));
  /* 12356abd call dword ptr [0x12383328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383328))), 0x12356ac3u);
  /* 12356ac3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12356ac5 jne 0x12356adc */
  if (!C.zf) goto L_12356adc;
  /* 12356ac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12356ac9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356acc push ecx */
  push32((uint32_t)(ECX));
  /* 12356acd call 0x12354e50 */
  push32(0x12356ad2u); f_12354e50();
  /* 12356ad2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356ad5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12356adc:;
  /* 12356adc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12356adf push edx */
  push32((uint32_t)(EDX));
  /* 12356ae0 call dword ptr [0x12383324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383324))), 0x12356ae6u);
  /* 12356ae6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356ae9 jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356aee:;
  /* 12356aee cmp dword ptr [0x123806b8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123806b8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356af5 jne 0x12356ba3 */
  if (!C.zf) goto L_12356ba3;
  /* 12356afb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356aff jne 0x12356b17 */
  if (!C.zf) goto L_12356b17;
  /* 12356b01 call dword ptr [0x1238332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238332c))), 0x12356b07u);
  /* 12356b07 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12356b0a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356b0e jne 0x12356b17 */
  if (!C.zf) goto L_12356b17;
  /* 12356b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356b12 jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356b17:;
  /* 12356b17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356b1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12356b1d:;
  /* 12356b1d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12356b23 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356b25 je 0x12356b45 */
  if (C.zf) goto L_12356b45;
  /* 12356b27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356b2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12356b30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b33 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12356b36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12356b38 jne 0x12356b43 */
  if (!C.zf) goto L_12356b43;
  /* 12356b3a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356b40 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12356b43:;
  /* 12356b43 jmp 0x12356b1d */
  goto L_12356b1d;
L_12356b45:;
  /* 12356b45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b48 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356b4b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356b4e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12356b51 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12356b56 push 0x1237bc88 */
  push32((uint32_t)(0x1237bc88u));
  /* 12356b5b push 2 */
  push32((uint32_t)(0x2u));
  /* 12356b5d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356b60 push edx */
  push32((uint32_t)(EDX));
  /* 12356b61 call 0x123543c0 */
  push32(0x12356b66u); f_123543c0();
  /* 12356b66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356b69 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12356b6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356b70 jne 0x12356b80 */
  if (!C.zf) goto L_12356b80;
  /* 12356b72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356b75 push eax */
  push32((uint32_t)(EAX));
  /* 12356b76 call dword ptr [0x12383320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383320))), 0x12356b7cu);
  /* 12356b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356b7e jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356b80:;
  /* 12356b80 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12356b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12356b84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356b87 push edx */
  push32((uint32_t)(EDX));
  /* 12356b88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356b8b push eax */
  push32((uint32_t)(EAX));
  /* 12356b8c call 0x1235aca0 */
  push32(0x12356b91u); f_1235aca0();
  /* 12356b91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356b94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12356b97 push ecx */
  push32((uint32_t)(ECX));
  /* 12356b98 call dword ptr [0x12383320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383320))), 0x12356b9eu);
  /* 12356b9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356ba1 jmp 0x12356ba5 */
  goto L_12356ba5;
L_12356ba3:;
  /* 12356ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12356ba5:;
  /* 12356ba5 mov esp, ebp */
  ESP = (EBP);
  /* 12356ba7 pop ebp */
  EBP = (pop32());
  /* 12356ba8 ret  */
  ESPCHK(0x12356990u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x12356bb0 (77 bytes, 25 insns) */
void f_12356bb0(void) {
  FTRACE(0x12356bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12356bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12356bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356bb5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12356bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356bbc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356bc0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12356bc3 push eax */
  push32((uint32_t)(EAX));
  /* 12356bc4 call dword ptr [0x12383338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383338))), 0x12356bcau);
  /* 12356bca mov dword ptr [0x12381f0c], eax */
  w32((uint32_t)(0x12381f0c), (EAX));
  /* 12356bcf cmp dword ptr [0x12381f0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12381f0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356bd6 jne 0x12356bdc */
  if (!C.zf) goto L_12356bdc;
  /* 12356bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356bda jmp 0x12356bfb */
  goto L_12356bfb;
L_12356bdc:;
  /* 12356bdc call 0x12358660 */
  push32(0x12356be1u); f_12358660();
  /* 12356be1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12356be3 jne 0x12356bf6 */
  if (!C.zf) goto L_12356bf6;
  /* 12356be5 mov ecx, dword ptr [0x12381f0c] */
  ECX = (r32((uint32_t)(0x12381f0c)));
  /* 12356beb push ecx */
  push32((uint32_t)(ECX));
  /* 12356bec call dword ptr [0x12383334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383334))), 0x12356bf2u);
  /* 12356bf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12356bf4 jmp 0x12356bfb */
  goto L_12356bfb;
L_12356bf6:;
  /* 12356bf6 mov eax, 1 */
  EAX = (0x1u);
L_12356bfb:;
  /* 12356bfb pop ebp */
  EBP = (pop32());
  /* 12356bfc ret  */
  ESPCHK(0x12356bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x12356c00 (156 bytes, 48 insns) */
void f_12356c00(void) {
  FTRACE(0x12356c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12356c01 mov ebp, esp */
  EBP = (ESP);
  /* 12356c03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356c06 mov eax, dword ptr [0x12381f08] */
  EAX = (r32((uint32_t)(0x12381f08)));
  /* 12356c0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12356c0e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12356c15 jmp 0x12356c20 */
  goto L_12356c20;
L_12356c17:;
  /* 12356c17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356c1a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356c1d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12356c20:;
  /* 12356c20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356c23 cmp edx, dword ptr [0x12381f04] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12381f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356c29 jge 0x12356c76 */
  if ((C.sf==C.of)) goto L_12356c76;
  /* 12356c2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12356c30 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12356c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356c38 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12356c3b push ecx */
  push32((uint32_t)(ECX));
  /* 12356c3c call dword ptr [0x12383340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383340))), 0x12356c42u);
  /* 12356c42 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12356c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356c49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356c4c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12356c4f push eax */
  push32((uint32_t)(EAX));
  /* 12356c50 call dword ptr [0x12383340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383340))), 0x12356c56u);
  /* 12356c56 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356c59 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12356c5c push edx */
  push32((uint32_t)(EDX));
  /* 12356c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12356c5f mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 12356c64 push eax */
  push32((uint32_t)(EAX));
  /* 12356c65 call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x12356c6bu);
  /* 12356c6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356c6e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356c71 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12356c74 jmp 0x12356c17 */
  goto L_12356c17;
L_12356c76:;
  /* 12356c76 mov edx, dword ptr [0x12381f08] */
  EDX = (r32((uint32_t)(0x12381f08)));
  /* 12356c7c push edx */
  push32((uint32_t)(EDX));
  /* 12356c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12356c7f mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 12356c84 push eax */
  push32((uint32_t)(EAX));
  /* 12356c85 call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x12356c8bu);
  /* 12356c8b mov ecx, dword ptr [0x12381f0c] */
  ECX = (r32((uint32_t)(0x12381f0c)));
  /* 12356c91 push ecx */
  push32((uint32_t)(ECX));
  /* 12356c92 call dword ptr [0x12383334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383334))), 0x12356c98u);
  /* 12356c98 mov esp, ebp */
  ESP = (EBP);
  /* 12356c9a pop ebp */
  EBP = (pop32());
  /* 12356c9b ret  */
  ESPCHK(0x12356c00u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12356ca0 (73 bytes, 19 insns) */
void f_12356ca0(void) {
  FTRACE(0x12356ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12356ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12356ca3 cmp dword ptr [0x1238054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356caa je 0x12356cbe */
  if (C.zf) goto L_12356cbe;
  /* 12356cac cmp dword ptr [0x1238054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356cb3 jne 0x12356ce7 */
  if (!C.zf) goto L_12356ce7;
  /* 12356cb5 cmp dword ptr [0x12380550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356cbc jne 0x12356ce7 */
  if (!C.zf) goto L_12356ce7;
L_12356cbe:;
  /* 12356cbe push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12356cc3 call 0x12356cf0 */
  push32(0x12356cc8u); f_12356cf0();
  /* 12356cc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356ccb cmp dword ptr [0x123806bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356cd2 je 0x12356cda */
  if (C.zf) goto L_12356cda;
  /* 12356cd4 call dword ptr [0x123806bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123806bc))), 0x12356cdau);
L_12356cda:;
  /* 12356cda push 0xff */
  push32((uint32_t)(0xffu));
  /* 12356cdf call 0x12356cf0 */
  push32(0x12356ce4u); f_12356cf0();
  /* 12356ce4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12356ce7:;
  /* 12356ce7 pop ebp */
  EBP = (pop32());
  /* 12356ce8 ret  */
  ESPCHK(0x12356ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x12356cf0 (447 bytes, 131 insns) */
void f_12356cf0(void) {
  FTRACE(0x12356cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12356cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12356cf3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356cf9 push ebx */
  push32((uint32_t)(EBX));
  /* 12356cfa push esi */
  push32((uint32_t)(ESI));
  /* 12356cfb push edi */
  push32((uint32_t)(EDI));
  /* 12356cfc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12356d03 jmp 0x12356d0e */
  goto L_12356d0e;
L_12356d05:;
  /* 12356d05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356d0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12356d0e:;
  /* 12356d0e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d12 jae 0x12356d27 */
  if (!C.cf) goto L_12356d27;
  /* 12356d14 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356d1a cmp edx, dword ptr [ecx*8 + 0x1237eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1237eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d21 jne 0x12356d25 */
  if (!C.zf) goto L_12356d25;
  /* 12356d23 jmp 0x12356d27 */
  goto L_12356d27;
L_12356d25:;
  /* 12356d25 jmp 0x12356d05 */
  goto L_12356d05;
L_12356d27:;
  /* 12356d27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356d2d cmp ecx, dword ptr [eax*8 + 0x1237eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1237eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d34 jne 0x12356ea8 */
  if (!C.zf) goto L_12356ea8;
  /* 12356d3a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d41 je 0x12356d64 */
  if (C.zf) goto L_12356d64;
  /* 12356d43 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d46 mov eax, dword ptr [edx*8 + 0x1237eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1237eab4)));
  /* 12356d4d push eax */
  push32((uint32_t)(EAX));
  /* 12356d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12356d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12356d56 call 0x12353480 */
  push32(0x12356d5bu); f_12353480();
  /* 12356d5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356d5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d61 jne 0x12356d64 */
  if (!C.zf) goto L_12356d64;
  /* 12356d63 int3  */
  x86_unimpl("int3 @ 0x12356d63");
L_12356d64:;
  /* 12356d64 cmp dword ptr [0x1238054c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d6b je 0x12356d7f */
  if (C.zf) goto L_12356d7f;
  /* 12356d6d cmp dword ptr [0x1238054c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1238054c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d74 jne 0x12356db8 */
  if (!C.zf) goto L_12356db8;
  /* 12356d76 cmp dword ptr [0x12380550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12380550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356d7d jne 0x12356db8 */
  if (!C.zf) goto L_12356db8;
L_12356d7f:;
  /* 12356d7f push 0 */
  push32((uint32_t)(0x0u));
  /* 12356d81 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12356d84 push ecx */
  push32((uint32_t)(ECX));
  /* 12356d85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d88 mov eax, dword ptr [edx*8 + 0x1237eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1237eab4)));
  /* 12356d8f push eax */
  push32((uint32_t)(EAX));
  /* 12356d90 call 0x123571f0 */
  push32(0x12356d95u); f_123571f0();
  /* 12356d95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356d98 push eax */
  push32((uint32_t)(EAX));
  /* 12356d99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356d9c mov edx, dword ptr [ecx*8 + 0x1237eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1237eab4)));
  /* 12356da3 push edx */
  push32((uint32_t)(EDX));
  /* 12356da4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12356da6 call dword ptr [0x123832b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832b8))), 0x12356dacu);
  /* 12356dac push eax */
  push32((uint32_t)(EAX));
  /* 12356dad call dword ptr [0x123832bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832bc))), 0x12356db3u);
  /* 12356db3 jmp 0x12356ea8 */
  goto L_12356ea8;
L_12356db8:;
  /* 12356db8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356dbf je 0x12356ea8 */
  if (C.zf) goto L_12356ea8;
  /* 12356dc5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12356dca lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12356dd0 push eax */
  push32((uint32_t)(EAX));
  /* 12356dd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356dd3 call dword ptr [0x123832d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d4))), 0x12356dd9u);
  /* 12356dd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12356ddb jne 0x12356df1 */
  if (!C.zf) goto L_12356df1;
  /* 12356ddd push 0x1237b4f0 */
  push32((uint32_t)(0x1237b4f0u));
  /* 12356de2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12356de8 push ecx */
  push32((uint32_t)(ECX));
  /* 12356de9 call 0x12357370 */
  push32(0x12356deeu); f_12357370();
  /* 12356dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12356df1:;
  /* 12356df1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12356df7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12356dfa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356dfd push eax */
  push32((uint32_t)(EAX));
  /* 12356dfe call 0x123571f0 */
  push32(0x12356e03u); f_123571f0();
  /* 12356e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e06 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e09 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356e0c jbe 0x12356e3a */
  if ((C.cf||C.zf)) goto L_12356e3a;
  /* 12356e0e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12356e14 push ecx */
  push32((uint32_t)(ECX));
  /* 12356e15 call 0x123571f0 */
  push32(0x12356e1au); f_123571f0();
  /* 12356e1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356e20 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12356e24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12356e27 push 3 */
  push32((uint32_t)(0x3u));
  /* 12356e29 push 0x1237b4ec */
  push32((uint32_t)(0x1237b4ecu));
  /* 12356e2e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356e31 push ecx */
  push32((uint32_t)(ECX));
  /* 12356e32 call 0x12357be0 */
  push32(0x12356e37u); f_12357be0();
  /* 12356e37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12356e3a:;
  /* 12356e3a push 0x1237bf44 */
  push32((uint32_t)(0x1237bf44u));
  /* 12356e3f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12356e45 push edx */
  push32((uint32_t)(EDX));
  /* 12356e46 call 0x12357370 */
  push32(0x12356e4bu); f_12357370();
  /* 12356e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356e51 push eax */
  push32((uint32_t)(EAX));
  /* 12356e52 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12356e58 push ecx */
  push32((uint32_t)(ECX));
  /* 12356e59 call 0x12357380 */
  push32(0x12356e5eu); f_12357380();
  /* 12356e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e61 push 0x1237b464 */
  push32((uint32_t)(0x1237b464u));
  /* 12356e66 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12356e6c push edx */
  push32((uint32_t)(EDX));
  /* 12356e6d call 0x12357380 */
  push32(0x12356e72u); f_12357380();
  /* 12356e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356e78 mov ecx, dword ptr [eax*8 + 0x1237eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1237eab4)));
  /* 12356e7f push ecx */
  push32((uint32_t)(ECX));
  /* 12356e80 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12356e86 push edx */
  push32((uint32_t)(EDX));
  /* 12356e87 call 0x12357380 */
  push32(0x12356e8cu); f_12357380();
  /* 12356e8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356e8f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12356e94 push 0x1237bf1c */
  push32((uint32_t)(0x1237bf1cu));
  /* 12356e99 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 12356e9f push eax */
  push32((uint32_t)(EAX));
  /* 12356ea0 call 0x12357b20 */
  push32(0x12356ea5u); f_12357b20();
  /* 12356ea5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12356ea8:;
  /* 12356ea8 pop edi */
  EDI = (pop32());
  /* 12356ea9 pop esi */
  ESI = (pop32());
  /* 12356eaa pop ebx */
  EBX = (pop32());
  /* 12356eab mov esp, ebp */
  ESP = (EBP);
  /* 12356ead pop ebp */
  EBP = (pop32());
  /* 12356eae ret  */
  ESPCHK(0x12356cf0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12356eb0 (80 bytes, 27 insns) */
void f_12356eb0(void) {
  FTRACE(0x12356eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12356eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12356eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12356eb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12356ebb jmp 0x12356ec6 */
  goto L_12356ec6;
L_12356ebd:;
  /* 12356ebd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ec0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356ec3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12356ec6:;
  /* 12356ec6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356eca jae 0x12356edf */
  if (!C.cf) goto L_12356edf;
  /* 12356ecc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ecf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356ed2 cmp edx, dword ptr [ecx*8 + 0x1237eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1237eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356ed9 jne 0x12356edd */
  if (!C.zf) goto L_12356edd;
  /* 12356edb jmp 0x12356edf */
  goto L_12356edf;
L_12356edd:;
  /* 12356edd jmp 0x12356ebd */
  goto L_12356ebd;
L_12356edf:;
  /* 12356edf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ee2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356ee5 cmp ecx, dword ptr [eax*8 + 0x1237eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1237eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356eec jne 0x12356efa */
  if (!C.zf) goto L_12356efa;
  /* 12356eee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ef1 mov eax, dword ptr [edx*8 + 0x1237eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1237eab4)));
  /* 12356ef8 jmp 0x12356efc */
  goto L_12356efc;
L_12356efa:;
  /* 12356efa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12356efc:;
  /* 12356efc mov esp, ebp */
  ESP = (EBP);
  /* 12356efe pop ebp */
  EBP = (pop32());
  /* 12356eff ret  */
  ESPCHK(0x12356eb0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12356f00 (66 bytes, 28 insns) */
void f_12356f00(void) {
  FTRACE(0x12356f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12356f01 mov ebp, esp */
  EBP = (ESP);
  /* 12356f03 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356f07 jne 0x12356f27 */
  if (!C.zf) goto L_12356f27;
  /* 12356f09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356f0d jge 0x12356f27 */
  if ((C.sf==C.of)) goto L_12356f27;
  /* 12356f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12356f11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356f14 push eax */
  push32((uint32_t)(EAX));
  /* 12356f15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356f18 push ecx */
  push32((uint32_t)(ECX));
  /* 12356f19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356f1c push edx */
  push32((uint32_t)(EDX));
  /* 12356f1d call 0x12356f50 */
  push32(0x12356f22u); f_12356f50();
  /* 12356f22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12356f25 jmp 0x12356f3d */
  goto L_12356f3d;
L_12356f27:;
  /* 12356f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12356f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12356f2c push eax */
  push32((uint32_t)(EAX));
  /* 12356f2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12356f31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356f34 push edx */
  push32((uint32_t)(EDX));
  /* 12356f35 call 0x12356f50 */
  push32(0x12356f3au); f_12356f50();
  /* 12356f3a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12356f3d:;
  /* 12356f3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356f40 pop ebp */
  EBP = (pop32());
  /* 12356f41 ret  */
  ESPCHK(0x12356f00u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12356f50 (194 bytes, 71 insns) */
void f_12356f50(void) {
  FTRACE(0x12356f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12356f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12356f51 mov ebp, esp */
  EBP = (ESP);
  /* 12356f53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356f56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12356f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12356f5c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356f60 je 0x12356f79 */
  if (C.zf) goto L_12356f79;
  /* 12356f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356f65 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12356f68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356f6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356f6e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12356f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356f74 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12356f76 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12356f79:;
  /* 12356f79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356f7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12356f7f:;
  /* 12356f7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356f82 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356f84 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12356f87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12356f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12356f8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12356f8f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12356f92 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12356f95 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356f99 jbe 0x12356fb1 */
  if ((C.cf||C.zf)) goto L_12356fb1;
  /* 12356f9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356f9e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356fa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fa4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12356fa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fa9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356fac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12356faf jmp 0x12356fc5 */
  goto L_12356fc5;
L_12356fb1:;
  /* 12356fb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12356fb4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12356fbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fbf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12356fc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12356fc5:;
  /* 12356fc5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12356fc9 ja 0x12356f7f */
  if ((!C.cf&&!C.zf)) goto L_12356f7f;
  /* 12356fcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fce mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12356fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fd4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356fd7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12356fda:;
  /* 12356fda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fdd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12356fdf mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12356fe2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356fe5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356fe8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12356fea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12356fec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12356fef mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12356ff2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12356ff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12356ff7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12356ffa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12356ffd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357000 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357003 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12357006 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357009 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235700c jb 0x12356fda */
  if (C.cf) goto L_12356fda;
  /* 1235700e mov esp, ebp */
  ESP = (EBP);
  /* 12357010 pop ebp */
  EBP = (pop32());
  /* 12357011 ret  */
  ESPCHK(0x12356f50u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12357020 (63 bytes, 24 insns) */
void f_12357020(void) {
  FTRACE(0x12357020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357020 push ebp */
  push32((uint32_t)(EBP));
  /* 12357021 mov ebp, esp */
  EBP = (ESP);
  /* 12357023 push ecx */
  push32((uint32_t)(ECX));
  /* 12357024 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357028 jne 0x12357039 */
  if (!C.zf) goto L_12357039;
  /* 1235702a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235702e jge 0x12357039 */
  if ((C.sf==C.of)) goto L_12357039;
  /* 12357030 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12357037 jmp 0x12357040 */
  goto L_12357040;
L_12357039:;
  /* 12357039 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12357040:;
  /* 12357040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357043 push eax */
  push32((uint32_t)(EAX));
  /* 12357044 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12357047 push ecx */
  push32((uint32_t)(ECX));
  /* 12357048 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235704b push edx */
  push32((uint32_t)(EDX));
  /* 1235704c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235704f push eax */
  push32((uint32_t)(EAX));
  /* 12357050 call 0x12356f50 */
  push32(0x12357055u); f_12356f50();
  /* 12357055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357058 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235705b mov esp, ebp */
  ESP = (EBP);
  /* 1235705d pop ebp */
  EBP = (pop32());
  /* 1235705e ret  */
  ESPCHK(0x12357020u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12357060 (30 bytes, 14 insns) */
void f_12357060(void) {
  FTRACE(0x12357060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357060 push ebp */
  push32((uint32_t)(EBP));
  /* 12357061 mov ebp, esp */
  EBP = (ESP);
  /* 12357063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12357065 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12357068 push eax */
  push32((uint32_t)(EAX));
  /* 12357069 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235706c push ecx */
  push32((uint32_t)(ECX));
  /* 1235706d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357070 push edx */
  push32((uint32_t)(EDX));
  /* 12357071 call 0x12356f50 */
  push32(0x12357076u); f_12356f50();
  /* 12357076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357079 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235707c pop ebp */
  EBP = (pop32());
  /* 1235707d ret  */
  ESPCHK(0x12357060u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12357080 (72 bytes, 28 insns) */
void f_12357080(void) {
  FTRACE(0x12357080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357080 push ebp */
  push32((uint32_t)(EBP));
  /* 12357081 mov ebp, esp */
  EBP = (ESP);
  /* 12357083 push ecx */
  push32((uint32_t)(ECX));
  /* 12357084 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357088 jne 0x123570a1 */
  if (!C.zf) goto L_123570a1;
  /* 1235708a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235708e jg 0x123570a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123570a1;
  /* 12357090 jl 0x12357098 */
  if ((C.sf!=C.of)) goto L_12357098;
  /* 12357092 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357096 jae 0x123570a1 */
  if (!C.cf) goto L_123570a1;
L_12357098:;
  /* 12357098 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1235709f jmp 0x123570a8 */
  goto L_123570a8;
L_123570a1:;
  /* 123570a1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123570a8:;
  /* 123570a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123570ab push eax */
  push32((uint32_t)(EAX));
  /* 123570ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123570af push ecx */
  push32((uint32_t)(ECX));
  /* 123570b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123570b3 push edx */
  push32((uint32_t)(EDX));
  /* 123570b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123570b7 push eax */
  push32((uint32_t)(EAX));
  /* 123570b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123570bb push ecx */
  push32((uint32_t)(ECX));
  /* 123570bc call 0x123570d0 */
  push32(0x123570c1u); f_123570d0();
  /* 123570c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123570c4 mov esp, ebp */
  ESP = (EBP);
  /* 123570c6 pop ebp */
  EBP = (pop32());
  /* 123570c7 ret  */
  ESPCHK(0x12357080u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x123570d0 (242 bytes, 91 insns) */
void f_123570d0(void) {
  FTRACE(0x123570d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123570d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123570d1 mov ebp, esp */
  EBP = (ESP);
  /* 123570d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123570d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123570d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123570dc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123570e0 je 0x12357104 */
  if (C.zf) goto L_12357104;
  /* 123570e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123570e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 123570e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123570eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123570ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123570f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123570f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123570f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123570f9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123570fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123570fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12357101 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12357104:;
  /* 12357104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357107 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1235710a:;
  /* 1235710a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1235710d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1235710f push ecx */
  push32((uint32_t)(ECX));
  /* 12357110 push eax */
  push32((uint32_t)(EAX));
  /* 12357111 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357114 push edx */
  push32((uint32_t)(EDX));
  /* 12357115 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357118 push eax */
  push32((uint32_t)(EAX));
  /* 12357119 call 0x1235b050 */
  push32(0x1235711eu); f_1235b050();
  /* 1235711e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12357121 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12357124 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12357126 push edx */
  push32((uint32_t)(EDX));
  /* 12357127 push ecx */
  push32((uint32_t)(ECX));
  /* 12357128 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235712b push eax */
  push32((uint32_t)(EAX));
  /* 1235712c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235712f push ecx */
  push32((uint32_t)(ECX));
  /* 12357130 call 0x1235afe0 */
  push32(0x12357135u); f_1235afe0();
  /* 12357135 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12357138 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1235713b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235713f jbe 0x12357157 */
  if ((C.cf||C.zf)) goto L_12357157;
  /* 12357141 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12357144 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357147 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235714a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1235714c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235714f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357152 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12357155 jmp 0x1235716b */
  goto L_1235716b;
L_12357157:;
  /* 12357157 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1235715a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235715d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357160 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12357162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357165 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357168 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1235716b:;
  /* 1235716b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235716f ja 0x1235710a */
  if ((!C.cf&&!C.zf)) goto L_1235710a;
  /* 12357171 jb 0x12357179 */
  if (C.cf) goto L_12357179;
  /* 12357173 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357177 ja 0x1235710a */
  if ((!C.cf&&!C.zf)) goto L_1235710a;
L_12357179:;
  /* 12357179 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235717c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1235717f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357182 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12357188:;
  /* 12357188 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235718b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1235718d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12357190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357193 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357196 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12357198 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1235719a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235719d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123571a0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123571a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123571a5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123571a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123571ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123571ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123571b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123571b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123571b7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123571ba jb 0x12357188 */
  if (C.cf) goto L_12357188;
  /* 123571bc mov esp, ebp */
  ESP = (EBP);
  /* 123571be pop ebp */
  EBP = (pop32());
  /* 123571bf ret 0x14 */
  ESPCHK(0x123570d0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x123571d0 (31 bytes, 15 insns) */
void f_123571d0(void) {
  FTRACE(0x123571d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123571d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123571d1 mov ebp, esp */
  EBP = (ESP);
  /* 123571d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123571d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123571d8 push eax */
  push32((uint32_t)(EAX));
  /* 123571d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123571dc push ecx */
  push32((uint32_t)(ECX));
  /* 123571dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123571e0 push edx */
  push32((uint32_t)(EDX));
  /* 123571e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123571e4 push eax */
  push32((uint32_t)(EAX));
  /* 123571e5 call 0x123570d0 */
  push32(0x123571eau); f_123570d0();
  /* 123571ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123571ed pop ebp */
  EBP = (pop32());
  /* 123571ee ret  */
  ESPCHK(0x123571d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x123571f0 (123 bytes, 44 insns) */
void f_123571f0(void) {
  FTRACE(0x123571f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123571f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123571f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123571fa je 0x12357210 */
  if (C.zf) goto L_12357210;
L_123571fc:;
  /* 123571fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 123571fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123571ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12357201 je 0x12357243 */
  if (C.zf) goto L_12357243;
  /* 12357203 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12357209 jne 0x123571fc */
  if (!C.zf) goto L_123571fc;
  /* 1235720b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12357210:;
  /* 12357210 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12357212 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12357217 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357219 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1235721c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1235721e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357221 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12357226 je 0x12357210 */
  if (C.zf) goto L_12357210;
  /* 12357228 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1235722b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1235722d je 0x12357261 */
  if (C.zf) goto L_12357261;
  /* 1235722f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12357231 je 0x12357257 */
  if (C.zf) goto L_12357257;
  /* 12357233 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12357238 je 0x1235724d */
  if (C.zf) goto L_1235724d;
  /* 1235723a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1235723f je 0x12357243 */
  if (C.zf) goto L_12357243;
  /* 12357241 jmp 0x12357210 */
  goto L_12357210;
L_12357243:;
  /* 12357243 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12357246 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1235724a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235724c ret  */
  ESPCHK(0x123571f0u, _esp0);
  ESP += 4; return;
L_1235724d:;
  /* 1235724d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12357250 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12357254 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357256 ret  */
  ESPCHK(0x123571f0u, _esp0);
  ESP += 4; return;
L_12357257:;
  /* 12357257 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1235725a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1235725e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357260 ret  */
  ESPCHK(0x123571f0u, _esp0);
  ESP += 4; return;
L_12357261:;
  /* 12357261 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12357264 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12357268 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235726a ret  */
  ESPCHK(0x123571f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x12357270 (249 bytes, 93 insns) */
void f_12357270(void) {
  FTRACE(0x12357270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357270 push ebp */
  push32((uint32_t)(EBP));
  /* 12357271 mov ebp, esp */
  EBP = (ESP);
  /* 12357273 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357276 push ebx */
  push32((uint32_t)(EBX));
  /* 12357277 push esi */
  push32((uint32_t)(ESI));
  /* 12357278 push edi */
  push32((uint32_t)(EDI));
  /* 12357279 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1235727c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1235727f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12357282 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12357285:;
  /* 12357285 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357289 jne 0x123572a9 */
  if (!C.zf) goto L_123572a9;
  /* 1235728b push 0x1237bf7c */
  push32((uint32_t)(0x1237bf7cu));
  /* 12357290 push 0 */
  push32((uint32_t)(0x0u));
  /* 12357292 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12357294 push 0x1237bf70 */
  push32((uint32_t)(0x1237bf70u));
  /* 12357299 push 2 */
  push32((uint32_t)(0x2u));
  /* 1235729b call 0x12353480 */
  push32(0x123572a0u); f_12353480();
  /* 123572a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123572a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123572a6 jne 0x123572a9 */
  if (!C.zf) goto L_123572a9;
  /* 123572a8 int3  */
  x86_unimpl("int3 @ 0x123572a8");
L_123572a9:;
  /* 123572a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123572ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123572ad jne 0x12357285 */
  if (!C.zf) goto L_12357285;
L_123572af:;
  /* 123572af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123572b3 jne 0x123572d3 */
  if (!C.zf) goto L_123572d3;
  /* 123572b5 push 0x1237bf60 */
  push32((uint32_t)(0x1237bf60u));
  /* 123572ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123572bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123572be push 0x1237bf70 */
  push32((uint32_t)(0x1237bf70u));
  /* 123572c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123572c5 call 0x12353480 */
  push32(0x123572cau); f_12353480();
  /* 123572ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123572cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123572d0 jne 0x123572d3 */
  if (!C.zf) goto L_123572d3;
  /* 123572d2 int3  */
  x86_unimpl("int3 @ 0x123572d2");
L_123572d3:;
  /* 123572d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123572d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123572d7 jne 0x123572af */
  if (!C.zf) goto L_123572af;
  /* 123572d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123572dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 123572e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123572e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123572e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123572ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123572ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123572f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123572f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123572f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123572fa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123572fd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12357300 push edx */
  push32((uint32_t)(EDX));
  /* 12357301 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12357304 push eax */
  push32((uint32_t)(EAX));
  /* 12357305 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357308 push ecx */
  push32((uint32_t)(ECX));
  /* 12357309 call 0x1235b350 */
  push32(0x1235730eu); f_1235b350();
  /* 1235730e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357311 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12357314 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357317 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1235731a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235731d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357320 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12357323 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357326 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235732a jl 0x1235734e */
  if ((C.sf!=C.of)) goto L_1235734e;
  /* 1235732c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235732f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12357331 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12357334 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12357336 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1235733c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1235733f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357342 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12357344 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357347 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235734a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1235734c jmp 0x1235735f */
  goto L_1235735f;
L_1235734e:;
  /* 1235734e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357351 push eax */
  push32((uint32_t)(EAX));
  /* 12357352 push 0 */
  push32((uint32_t)(0x0u));
  /* 12357354 call 0x1235b0d0 */
  push32(0x12357359u); f_1235b0d0();
  /* 12357359 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235735c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1235735f:;
  /* 1235735f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12357362 pop edi */
  EDI = (pop32());
  /* 12357363 pop esi */
  ESI = (pop32());
  /* 12357364 pop ebx */
  EBX = (pop32());
  /* 12357365 mov esp, ebp */
  ESP = (EBP);
  /* 12357367 pop ebp */
  EBP = (pop32());
  /* 12357368 ret  */
  ESPCHK(0x12357270u, _esp0);
  ESP += 4; return;
}

/* FUN_10007370 @ 0x12357370 (7 bytes, 3 insns) */
void f_12357370(void) {
  FTRACE(0x12357370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357370 push edi */
  push32((uint32_t)(EDI));
  /* 12357371 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12357375 jmp 0x123573e1 */
  jmp_ind(0x123573e1u); return;
}

/* FUN_10007380 @ 0x12357380 (224 bytes, 84 insns) */
void f_12357380(void) {
  FTRACE(0x12357380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357380 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12357384 push edi */
  push32((uint32_t)(EDI));
  /* 12357385 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1235738b je 0x1235739c */
  if (C.zf) goto L_1235739c;
L_1235738d:;
  /* 1235738d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1235738f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12357390 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12357392 je 0x123573cf */
  if (C.zf) goto L_123573cf;
  /* 12357394 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1235739a jne 0x1235738d */
  if (!C.zf) goto L_1235738d;
L_1235739c:;
  /* 1235739c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1235739e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123573a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123573a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123573a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123573aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123573ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123573b2 je 0x1235739c */
  if (C.zf) goto L_1235739c;
  /* 123573b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123573b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123573b9 je 0x123573de */
  if (C.zf) goto L_123573de;
  /* 123573bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123573bd je 0x123573d9 */
  if (C.zf) goto L_123573d9;
  /* 123573bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 123573c4 je 0x123573d4 */
  if (C.zf) goto L_123573d4;
  /* 123573c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 123573cb je 0x123573cf */
  if (C.zf) goto L_123573cf;
  /* 123573cd jmp 0x1235739c */
  goto L_1235739c;
L_123573cf:;
  /* 123573cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 123573d2 jmp 0x123573e1 */
  goto L_123573e1;
L_123573d4:;
  /* 123573d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 123573d7 jmp 0x123573e1 */
  goto L_123573e1;
L_123573d9:;
  /* 123573d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 123573dc jmp 0x123573e1 */
  goto L_123573e1;
L_123573de:;
  /* 123573de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_123573e1:;
  /* 123573e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123573e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123573eb je 0x12357406 */
  if (C.zf) goto L_12357406;
L_123573ed:;
  /* 123573ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123573ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123573f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 123573f2 je 0x12357458 */
  if (C.zf) goto L_12357458;
  /* 123573f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 123573f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123573f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123573fd jne 0x123573ed */
  if (!C.zf) goto L_123573ed;
  /* 123573ff jmp 0x12357406 */
  goto L_12357406;
L_12357401:;
  /* 12357401 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12357403 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12357406:;
  /* 12357406 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1235740b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1235740d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235740f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12357412 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12357414 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12357416 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357419 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1235741e je 0x12357401 */
  if (C.zf) goto L_12357401;
  /* 12357420 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12357422 je 0x12357458 */
  if (C.zf) goto L_12357458;
  /* 12357424 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12357426 je 0x1235744f */
  if (C.zf) goto L_1235744f;
  /* 12357428 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1235742e je 0x12357442 */
  if (C.zf) goto L_12357442;
  /* 12357430 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12357436 je 0x1235743a */
  if (C.zf) goto L_1235743a;
  /* 12357438 jmp 0x12357401 */
  goto L_12357401;
L_1235743a:;
  /* 1235743a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1235743c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12357440 pop edi */
  EDI = (pop32());
  /* 12357441 ret  */
  ESPCHK(0x12357380u, _esp0);
  ESP += 4; return;
L_12357442:;
  /* 12357442 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12357445 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12357449 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1235744d pop edi */
  EDI = (pop32());
  /* 1235744e ret  */
  ESPCHK(0x12357380u, _esp0);
  ESP += 4; return;
L_1235744f:;
  /* 1235744f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12357452 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12357456 pop edi */
  EDI = (pop32());
  /* 12357457 ret  */
  ESPCHK(0x12357380u, _esp0);
  ESP += 4; return;
L_12357458:;
  /* 12357458 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1235745a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1235745e pop edi */
  EDI = (pop32());
  /* 1235745f ret  */
  ESPCHK(0x12357380u, _esp0);
  ESP += 4; return;
}

/* FUN_10007460 @ 0x12357460 (243 bytes, 91 insns) */
void f_12357460(void) {
  FTRACE(0x12357460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357460 push ebp */
  push32((uint32_t)(EBP));
  /* 12357461 mov ebp, esp */
  EBP = (ESP);
  /* 12357463 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357466 push ebx */
  push32((uint32_t)(EBX));
  /* 12357467 push esi */
  push32((uint32_t)(ESI));
  /* 12357468 push edi */
  push32((uint32_t)(EDI));
  /* 12357469 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1235746c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1235746f:;
  /* 1235746f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357473 jne 0x12357493 */
  if (!C.zf) goto L_12357493;
  /* 12357475 push 0x1237bf7c */
  push32((uint32_t)(0x1237bf7cu));
  /* 1235747a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235747c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1235747e push 0x1237bf8c */
  push32((uint32_t)(0x1237bf8cu));
  /* 12357483 push 2 */
  push32((uint32_t)(0x2u));
  /* 12357485 call 0x12353480 */
  push32(0x1235748au); f_12353480();
  /* 1235748a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235748d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357490 jne 0x12357493 */
  if (!C.zf) goto L_12357493;
  /* 12357492 int3  */
  x86_unimpl("int3 @ 0x12357492");
L_12357493:;
  /* 12357493 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12357495 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12357497 jne 0x1235746f */
  if (!C.zf) goto L_1235746f;
L_12357499:;
  /* 12357499 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235749d jne 0x123574bd */
  if (!C.zf) goto L_123574bd;
  /* 1235749f push 0x1237bf60 */
  push32((uint32_t)(0x1237bf60u));
  /* 123574a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123574a6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 123574a8 push 0x1237bf8c */
  push32((uint32_t)(0x1237bf8cu));
  /* 123574ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123574af call 0x12353480 */
  push32(0x123574b4u); f_12353480();
  /* 123574b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123574b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123574ba jne 0x123574bd */
  if (!C.zf) goto L_123574bd;
  /* 123574bc int3  */
  x86_unimpl("int3 @ 0x123574bc");
L_123574bd:;
  /* 123574bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123574bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123574c1 jne 0x12357499 */
  if (!C.zf) goto L_12357499;
  /* 123574c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123574c6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 123574cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123574d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123574d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123574d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123574d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123574dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123574de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123574e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123574e4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123574e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123574ea push ecx */
  push32((uint32_t)(ECX));
  /* 123574eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123574ee push edx */
  push32((uint32_t)(EDX));
  /* 123574ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123574f2 push eax */
  push32((uint32_t)(EAX));
  /* 123574f3 call 0x1235b350 */
  push32(0x123574f8u); f_1235b350();
  /* 123574f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123574fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123574fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357501 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12357504 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357507 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235750a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1235750d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357510 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357514 jl 0x12357538 */
  if ((C.sf!=C.of)) goto L_12357538;
  /* 12357516 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357519 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235751b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1235751e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12357520 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12357526 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12357529 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235752c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1235752e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357531 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12357534 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12357536 jmp 0x12357549 */
  goto L_12357549;
L_12357538:;
  /* 12357538 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1235753b push edx */
  push32((uint32_t)(EDX));
  /* 1235753c push 0 */
  push32((uint32_t)(0x0u));
  /* 1235753e call 0x1235b0d0 */
  push32(0x12357543u); f_1235b0d0();
  /* 12357543 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357546 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12357549:;
  /* 12357549 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1235754c pop edi */
  EDI = (pop32());
  /* 1235754d pop esi */
  ESI = (pop32());
  /* 1235754e pop ebx */
  EBX = (pop32());
  /* 1235754f mov esp, ebp */
  ESP = (EBP);
  /* 12357551 pop ebp */
  EBP = (pop32());
  /* 12357552 ret  */
  ESPCHK(0x12357460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x12357560 (47 bytes, 17 insns) */
void f_12357560(void) {
  FTRACE(0x12357560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357560 push ecx */
  push32((uint32_t)(ECX));
  /* 12357561 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357566 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1235756a jb 0x12357580 */
  if (C.cf) goto L_12357580;
L_1235756c:;
  /* 1235756c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357572 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357577 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12357579 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235757e jae 0x1235756c */
  if (!C.cf) goto L_1235756c;
L_12357580:;
  /* 12357580 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357582 mov eax, esp */
  EAX = (ESP);
  /* 12357584 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12357586 mov esp, ecx */
  ESP = (ECX);
  /* 12357588 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1235758a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1235758d push eax */
  push32((uint32_t)(EAX));
  /* 1235758e ret  */
  ESPCHK(0x12357560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007590 @ 0x12357590 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12357590(void) {
  FTRACE(0x12357590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357590 push ebp */
  push32((uint32_t)(EBP));
  /* 12357591 mov ebp, esp */
  EBP = (ESP);
  /* 12357593 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357596 push esi */
  push32((uint32_t)(ESI));
  /* 12357597 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235759b je 0x123575a3 */
  if (C.zf) goto L_123575a3;
  /* 1235759d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575a1 jne 0x123575a8 */
  if (!C.zf) goto L_123575a8;
L_123575a3:;
  /* 123575a3 jmp 0x12357778 */
  goto L_12357778;
L_123575a8:;
  /* 123575a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575ac je 0x123575c4 */
  if (C.zf) goto L_123575c4;
  /* 123575ae cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575b2 je 0x123575c4 */
  if (C.zf) goto L_123575c4;
  /* 123575b4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575b8 je 0x123575c4 */
  if (C.zf) goto L_123575c4;
  /* 123575ba cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575be jne 0x123576a1 */
  if (!C.zf) goto L_123576a1;
L_123575c4:;
  /* 123575c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123575c6 call 0x12357dc0 */
  push32(0x123575cbu); f_12357dc0();
  /* 123575cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123575ce cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575d2 je 0x123575da */
  if (C.zf) goto L_123575da;
  /* 123575d4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575d8 jne 0x1235761f */
  if (!C.zf) goto L_1235761f;
L_123575da:;
  /* 123575da cmp dword ptr [0x123806d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575e1 jne 0x1235761f */
  if (!C.zf) goto L_1235761f;
  /* 123575e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123575e5 push 0x123577c0 */
  push32((uint32_t)(0x123577c0u));
  /* 123575ea call dword ptr [0x12383310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383310))), 0x123575f0u);
  /* 123575f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123575f3 jne 0x12357601 */
  if (!C.zf) goto L_12357601;
  /* 123575f5 mov dword ptr [0x123806d0], 1 */
  w32((uint32_t)(0x123806d0), (0x1u));
  /* 123575ff jmp 0x1235761f */
  goto L_1235761f;
L_12357601:;
  /* 12357601 call dword ptr [0x123832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832fc))), 0x12357607u);
  /* 12357607 mov esi, eax */
  ESI = (EAX);
  /* 12357609 call 0x1235c2a0 */
  push32(0x1235760eu); f_1235c2a0();
  /* 1235760e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12357610 push 1 */
  push32((uint32_t)(0x1u));
  /* 12357612 call 0x12357e60 */
  push32(0x12357617u); f_12357e60();
  /* 12357617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235761a jmp 0x12357778 */
  goto L_12357778;
L_1235761f:;
  /* 1235761f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357622 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12357625 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357628 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1235762b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1235762e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357632 ja 0x12357692 */
  if ((!C.cf&&!C.zf)) goto L_12357692;
  /* 12357634 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357637 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12357639 mov dl, byte ptr [eax + 0x1235779f] */
  DL = (r8((uint32_t)(EAX + 0x1235779f)));
  /* 1235763f jmp dword ptr [edx*4 + 0x1235778b] */
  switch (EDX) {
    case 0: goto L_12357646;
    case 1: goto L_12357680;
    case 2: goto L_1235765a;
    case 3: goto L_1235766d;
    case 4: goto L_12357692;
    default: x86_unimpl("switch@0x1235763f out of table"); return;
  }
L_12357646:;
  /* 12357646 mov ecx, dword ptr [0x123806c0] */
  ECX = (r32((uint32_t)(0x123806c0)));
  /* 1235764c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1235764f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357652 mov dword ptr [0x123806c0], edx */
  w32((uint32_t)(0x123806c0), (EDX));
  /* 12357658 jmp 0x12357692 */
  goto L_12357692;
L_1235765a:;
  /* 1235765a mov eax, dword ptr [0x123806c4] */
  EAX = (r32((uint32_t)(0x123806c4)));
  /* 1235765f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12357662 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357665 mov dword ptr [0x123806c4], ecx */
  w32((uint32_t)(0x123806c4), (ECX));
  /* 1235766b jmp 0x12357692 */
  goto L_12357692;
L_1235766d:;
  /* 1235766d mov edx, dword ptr [0x123806c8] */
  EDX = (r32((uint32_t)(0x123806c8)));
  /* 12357673 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12357676 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357679 mov dword ptr [0x123806c8], eax */
  w32((uint32_t)(0x123806c8), (EAX));
  /* 1235767e jmp 0x12357692 */
  goto L_12357692;
L_12357680:;
  /* 12357680 mov ecx, dword ptr [0x123806cc] */
  ECX = (r32((uint32_t)(0x123806cc)));
  /* 12357686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12357689 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235768c mov dword ptr [0x123806cc], edx */
  w32((uint32_t)(0x123806cc), (EDX));
L_12357692:;
  /* 12357692 push 1 */
  push32((uint32_t)(0x1u));
  /* 12357694 call 0x12357e60 */
  push32(0x12357699u); f_12357e60();
  /* 12357699 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235769c jmp 0x12357773 */
  goto L_12357773;
L_123576a1:;
  /* 123576a1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123576a5 je 0x123576b8 */
  if (C.zf) goto L_123576b8;
  /* 123576a7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123576ab je 0x123576b8 */
  if (C.zf) goto L_123576b8;
  /* 123576ad cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123576b1 je 0x123576b8 */
  if (C.zf) goto L_123576b8;
  /* 123576b3 jmp 0x12357778 */
  goto L_12357778;
L_123576b8:;
  /* 123576b8 call 0x12353e00 */
  push32(0x123576bdu); f_12353e00();
  /* 123576bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123576c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123576c3 cmp dword ptr [eax + 0x50], 0x1237ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1237ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123576ca jne 0x12357715 */
  if (!C.zf) goto L_12357715;
  /* 123576cc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 123576d1 push 0x1237bf98 */
  push32((uint32_t)(0x1237bf98u));
  /* 123576d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123576d8 mov ecx, dword ptr [0x1237ec80] */
  ECX = (r32((uint32_t)(0x1237ec80)));
  /* 123576de push ecx */
  push32((uint32_t)(ECX));
  /* 123576df call 0x123543c0 */
  push32(0x123576e4u); f_123543c0();
  /* 123576e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123576e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123576ea mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 123576ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123576f0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123576f4 je 0x12357713 */
  if (C.zf) goto L_12357713;
  /* 123576f6 mov ecx, dword ptr [0x1237ec80] */
  ECX = (r32((uint32_t)(0x1237ec80)));
  /* 123576fc push ecx */
  push32((uint32_t)(ECX));
  /* 123576fd push 0x1237ec00 */
  push32((uint32_t)(0x1237ec00u));
  /* 12357702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357705 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12357708 push eax */
  push32((uint32_t)(EAX));
  /* 12357709 call 0x1235aca0 */
  push32(0x1235770eu); f_1235aca0();
  /* 1235770e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357711 jmp 0x12357715 */
  goto L_12357715;
L_12357713:;
  /* 12357713 jmp 0x12357778 */
  goto L_12357778;
L_12357715:;
  /* 12357715 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357718 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1235771b push edx */
  push32((uint32_t)(EDX));
  /* 1235771c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235771f push eax */
  push32((uint32_t)(EAX));
  /* 12357720 call 0x12357aa0 */
  push32(0x12357725u); f_12357aa0();
  /* 12357725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357728 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1235772b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235772f jne 0x12357733 */
  if (!C.zf) goto L_12357733;
  /* 12357731 jmp 0x12357778 */
  goto L_12357778;
L_12357733:;
  /* 12357733 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357736 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12357739 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1235773c:;
  /* 1235773c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235773f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12357742 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357745 jne 0x12357773 */
  if (!C.zf) goto L_12357773;
  /* 12357747 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235774a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235774d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12357750 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357753 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357756 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12357759 mov edx, dword ptr [0x1237ec84] */
  EDX = (r32((uint32_t)(0x1237ec84)));
  /* 1235775f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12357762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357765 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12357768 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235776a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235776d jb 0x12357771 */
  if (C.cf) goto L_12357771;
  /* 1235776f jmp 0x12357773 */
  goto L_12357773;
L_12357771:;
  /* 12357771 jmp 0x1235773c */
  goto L_1235773c;
L_12357773:;
  /* 12357773 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12357776 jmp 0x12357786 */
  goto L_12357786;
L_12357778:;
  /* 12357778 call 0x1235c290 */
  push32(0x1235777du); f_1235c290();
  /* 1235777d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12357783 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12357786:;
  /* 12357786 pop esi */
  ESI = (pop32());
  /* 12357787 mov esp, ebp */
  ESP = (EBP);
  /* 12357789 pop ebp */
  EBP = (pop32());
  /* 1235778a ret  */
  ESPCHK(0x12357590u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x123577c0 (146 bytes, 45 insns) */
void f_123577c0(void) {
  FTRACE(0x123577c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123577c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123577c1 mov ebp, esp */
  EBP = (ESP);
  /* 123577c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123577c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 123577c8 call 0x12357dc0 */
  push32(0x123577cdu); f_12357dc0();
  /* 123577cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123577d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123577d4 jne 0x123577ee */
  if (!C.zf) goto L_123577ee;
  /* 123577d6 mov dword ptr [ebp - 8], 0x123806c0 */
  w32((uint32_t)(EBP + -0x8), (0x123806c0u));
  /* 123577dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123577e0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123577e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 123577e5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 123577ec jmp 0x12357804 */
  goto L_12357804;
L_123577ee:;
  /* 123577ee mov dword ptr [ebp - 8], 0x123806c4 */
  w32((uint32_t)(EBP + -0x8), (0x123806c4u));
  /* 123577f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123577f8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123577fa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123577fd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12357804:;
  /* 12357804 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357808 jne 0x12357818 */
  if (!C.zf) goto L_12357818;
  /* 1235780a push 1 */
  push32((uint32_t)(0x1u));
  /* 1235780c call 0x12357e60 */
  push32(0x12357811u); f_12357e60();
  /* 12357811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12357816 jmp 0x1235784c */
  goto L_1235784c;
L_12357818:;
  /* 12357818 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235781c je 0x1235783d */
  if (C.zf) goto L_1235783d;
  /* 1235781e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357821 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12357827 push 1 */
  push32((uint32_t)(0x1u));
  /* 12357829 call 0x12357e60 */
  push32(0x1235782eu); f_12357e60();
  /* 1235782e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357834 push edx */
  push32((uint32_t)(EDX));
  /* 12357835 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12357838u);
  /* 12357838 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235783b jmp 0x12357847 */
  goto L_12357847;
L_1235783d:;
  /* 1235783d push 1 */
  push32((uint32_t)(0x1u));
  /* 1235783f call 0x12357e60 */
  push32(0x12357844u); f_12357e60();
  /* 12357844 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357847:;
  /* 12357847 mov eax, 1 */
  EAX = (0x1u);
L_1235784c:;
  /* 1235784c mov esp, ebp */
  ESP = (EBP);
  /* 1235784e pop ebp */
  EBP = (pop32());
  /* 1235784f ret 4 */
  ESPCHK(0x123577c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007860 @ 0x12357860 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12357860(void) {
  FTRACE(0x12357860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357860 push ebp */
  push32((uint32_t)(EBP));
  /* 12357861 mov ebp, esp */
  EBP = (ESP);
  /* 12357863 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357866 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1235786d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357870 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12357873 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12357876 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357879 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1235787c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357880 ja 0x1235792e */
  if ((!C.cf&&!C.zf)) goto L_1235792e;
  /* 12357886 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12357889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1235788b mov dl, byte ptr [eax + 0x12357a82] */
  DL = (r8((uint32_t)(EAX + 0x12357a82)));
  /* 12357891 jmp dword ptr [edx*4 + 0x12357a6a] */
  switch (EDX) {
    case 0: goto L_12357898;
    case 1: goto L_12357903;
    case 2: goto L_123578e9;
    case 3: goto L_123578b5;
    case 4: goto L_123578cf;
    case 5: goto L_1235792e;
    default: x86_unimpl("switch@0x12357891 out of table"); return;
  }
L_12357898:;
  /* 12357898 mov dword ptr [ebp - 0x18], 0x123806c0 */
  w32((uint32_t)(EBP + -0x18), (0x123806c0u));
  /* 1235789f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123578a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123578a4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123578a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123578aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123578ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123578b0 jmp 0x12357936 */
  goto L_12357936;
L_123578b5:;
  /* 123578b5 mov dword ptr [ebp - 0x18], 0x123806c4 */
  w32((uint32_t)(EBP + -0x18), (0x123806c4u));
  /* 123578bc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123578bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123578c1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123578c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123578c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123578ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123578cd jmp 0x12357936 */
  goto L_12357936;
L_123578cf:;
  /* 123578cf mov dword ptr [ebp - 0x18], 0x123806c8 */
  w32((uint32_t)(EBP + -0x18), (0x123806c8u));
  /* 123578d6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123578d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123578db mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123578de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123578e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123578e4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123578e7 jmp 0x12357936 */
  goto L_12357936;
L_123578e9:;
  /* 123578e9 mov dword ptr [ebp - 0x18], 0x123806cc */
  w32((uint32_t)(EBP + -0x18), (0x123806ccu));
  /* 123578f0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 123578f3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123578f5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 123578f8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123578fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123578fe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12357901 jmp 0x12357936 */
  goto L_12357936;
L_12357903:;
  /* 12357903 call 0x12353e00 */
  push32(0x12357908u); f_12353e00();
  /* 12357908 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235790b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235790e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12357911 push edx */
  push32((uint32_t)(EDX));
  /* 12357912 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357915 push eax */
  push32((uint32_t)(EAX));
  /* 12357916 call 0x12357aa0 */
  push32(0x1235791bu); f_12357aa0();
  /* 1235791b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235791e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357921 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12357924 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12357927 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12357929 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1235792c jmp 0x12357936 */
  goto L_12357936;
L_1235792e:;
  /* 1235792e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12357931 jmp 0x12357a66 */
  goto L_12357a66;
L_12357936:;
  /* 12357936 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235793a je 0x12357946 */
  if (C.zf) goto L_12357946;
  /* 1235793c push 1 */
  push32((uint32_t)(0x1u));
  /* 1235793e call 0x12357dc0 */
  push32(0x12357943u); f_12357dc0();
  /* 12357943 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357946:;
  /* 12357946 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235794a jne 0x12357963 */
  if (!C.zf) goto L_12357963;
  /* 1235794c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357950 je 0x1235795c */
  if (C.zf) goto L_1235795c;
  /* 12357952 push 1 */
  push32((uint32_t)(0x1u));
  /* 12357954 call 0x12357e60 */
  push32(0x12357959u); f_12357e60();
  /* 12357959 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235795c:;
  /* 1235795c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235795e jmp 0x12357a66 */
  goto L_12357a66;
L_12357963:;
  /* 12357963 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357967 jne 0x12357980 */
  if (!C.zf) goto L_12357980;
  /* 12357969 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235796d je 0x12357979 */
  if (C.zf) goto L_12357979;
  /* 1235796f push 1 */
  push32((uint32_t)(0x1u));
  /* 12357971 call 0x12357e60 */
  push32(0x12357976u); f_12357e60();
  /* 12357976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357979:;
  /* 12357979 push 3 */
  push32((uint32_t)(0x3u));
  /* 1235797b call 0x12353b80 */
  push32(0x12357980u); f_12353b80();
L_12357980:;
  /* 12357980 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357984 je 0x12357992 */
  if (C.zf) goto L_12357992;
  /* 12357986 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235798a je 0x12357992 */
  if (C.zf) goto L_12357992;
  /* 1235798c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357990 jne 0x123579be */
  if (!C.zf) goto L_123579be;
L_12357992:;
  /* 12357992 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357995 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12357998 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1235799b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235799e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 123579a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123579a9 jne 0x123579be */
  if (!C.zf) goto L_123579be;
  /* 123579ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123579ae mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 123579b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123579b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123579b7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_123579be:;
  /* 123579be cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123579c2 jne 0x12357a00 */
  if (!C.zf) goto L_12357a00;
  /* 123579c4 mov eax, dword ptr [0x1237ec78] */
  EAX = (r32((uint32_t)(0x1237ec78)));
  /* 123579c9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123579cc jmp 0x123579d7 */
  goto L_123579d7;
L_123579ce:;
  /* 123579ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123579d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123579d4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_123579d7:;
  /* 123579d7 mov edx, dword ptr [0x1237ec78] */
  EDX = (r32((uint32_t)(0x1237ec78)));
  /* 123579dd add edx, dword ptr [0x1237ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123579e3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123579e6 jge 0x123579fe */
  if ((C.sf==C.of)) goto L_123579fe;
  /* 123579e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123579eb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123579ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123579f1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 123579f4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 123579fc jmp 0x123579ce */
  goto L_123579ce;
L_123579fe:;
  /* 123579fe jmp 0x12357a09 */
  goto L_12357a09;
L_12357a00:;
  /* 12357a00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12357a03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12357a09:;
  /* 12357a09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a0d je 0x12357a19 */
  if (C.zf) goto L_12357a19;
  /* 12357a0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12357a11 call 0x12357e60 */
  push32(0x12357a16u); f_12357e60();
  /* 12357a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357a19:;
  /* 12357a19 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a1d jne 0x12357a30 */
  if (!C.zf) goto L_12357a30;
  /* 12357a1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357a22 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12357a25 push edx */
  push32((uint32_t)(EDX));
  /* 12357a26 push 8 */
  push32((uint32_t)(0x8u));
  /* 12357a28 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12357a2bu);
  /* 12357a2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357a2e jmp 0x12357a3a */
  goto L_12357a3a;
L_12357a30:;
  /* 12357a30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357a33 push eax */
  push32((uint32_t)(EAX));
  /* 12357a34 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12357a37u);
  /* 12357a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357a3a:;
  /* 12357a3a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a3e je 0x12357a4c */
  if (C.zf) goto L_12357a4c;
  /* 12357a40 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a44 je 0x12357a4c */
  if (C.zf) goto L_12357a4c;
  /* 12357a46 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a4a jne 0x12357a64 */
  if (!C.zf) goto L_12357a64;
L_12357a4c:;
  /* 12357a4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357a4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12357a52 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12357a55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357a59 jne 0x12357a64 */
  if (!C.zf) goto L_12357a64;
  /* 12357a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357a61 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12357a64:;
  /* 12357a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12357a66:;
  /* 12357a66 mov esp, ebp */
  ESP = (EBP);
  /* 12357a68 pop ebp */
  EBP = (pop32());
  /* 12357a69 ret  */
  ESPCHK(0x12357860u, _esp0);
  ESP += 4; return;
}

/* FUN_10007aa0 @ 0x12357aa0 (91 bytes, 35 insns) */
void f_12357aa0(void) {
  FTRACE(0x12357aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12357aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12357aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12357aa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357aa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12357aaa:;
  /* 12357aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357aad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12357ab0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ab3 je 0x12357ad3 */
  if (C.zf) goto L_12357ad3;
  /* 12357ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357ab8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357abb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12357abe mov ecx, dword ptr [0x1237ec84] */
  ECX = (r32((uint32_t)(0x1237ec84)));
  /* 12357ac4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12357ac7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357aca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357acc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357acf jae 0x12357ad3 */
  if (!C.cf) goto L_12357ad3;
  /* 12357ad1 jmp 0x12357aaa */
  goto L_12357aaa;
L_12357ad3:;
  /* 12357ad3 mov eax, dword ptr [0x1237ec84] */
  EAX = (r32((uint32_t)(0x1237ec84)));
  /* 12357ad8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12357adb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357ade add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357ae0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ae3 jae 0x12357af5 */
  if (!C.cf) goto L_12357af5;
  /* 12357ae5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357ae8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12357aeb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357aee jne 0x12357af5 */
  if (!C.zf) goto L_12357af5;
  /* 12357af0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357af3 jmp 0x12357af7 */
  goto L_12357af7;
L_12357af5:;
  /* 12357af5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12357af7:;
  /* 12357af7 mov esp, ebp */
  ESP = (EBP);
  /* 12357af9 pop ebp */
  EBP = (pop32());
  /* 12357afa ret  */
  ESPCHK(0x12357aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x12357b00 (13 bytes, 6 insns) */
void f_12357b00(void) {
  FTRACE(0x12357b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12357b01 mov ebp, esp */
  EBP = (ESP);
  /* 12357b03 call 0x12353e00 */
  push32(0x12357b08u); f_12353e00();
  /* 12357b08 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357b0b pop ebp */
  EBP = (pop32());
  /* 12357b0c ret  */
  ESPCHK(0x12357b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x12357b10 (13 bytes, 6 insns) */
void f_12357b10(void) {
  FTRACE(0x12357b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12357b11 mov ebp, esp */
  EBP = (ESP);
  /* 12357b13 call 0x12353e00 */
  push32(0x12357b18u); f_12353e00();
  /* 12357b18 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357b1b pop ebp */
  EBP = (pop32());
  /* 12357b1c ret  */
  ESPCHK(0x12357b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b20 @ 0x12357b20 (187 bytes, 54 insns) */
void f_12357b20(void) {
  FTRACE(0x12357b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12357b21 mov ebp, esp */
  EBP = (ESP);
  /* 12357b23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357b26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12357b2d cmp dword ptr [0x123806d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357b34 jne 0x12357b93 */
  if (!C.zf) goto L_12357b93;
  /* 12357b36 push 0x1237b3c4 */
  push32((uint32_t)(0x1237b3c4u));
  /* 12357b3b call dword ptr [0x123832cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832cc))), 0x12357b41u);
  /* 12357b41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12357b44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357b48 je 0x12357b67 */
  if (C.zf) goto L_12357b67;
  /* 12357b4a push 0x1237bfc8 */
  push32((uint32_t)(0x1237bfc8u));
  /* 12357b4f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357b52 push eax */
  push32((uint32_t)(EAX));
  /* 12357b53 call dword ptr [0x123832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c8))), 0x12357b59u);
  /* 12357b59 mov dword ptr [0x123806d4], eax */
  w32((uint32_t)(0x123806d4), (EAX));
  /* 12357b5e cmp dword ptr [0x123806d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357b65 jne 0x12357b6b */
  if (!C.zf) goto L_12357b6b;
L_12357b67:;
  /* 12357b67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12357b69 jmp 0x12357bd7 */
  goto L_12357bd7;
L_12357b6b:;
  /* 12357b6b push 0x1237bfb8 */
  push32((uint32_t)(0x1237bfb8u));
  /* 12357b70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357b73 push ecx */
  push32((uint32_t)(ECX));
  /* 12357b74 call dword ptr [0x123832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c8))), 0x12357b7au);
  /* 12357b7a mov dword ptr [0x123806d8], eax */
  w32((uint32_t)(0x123806d8), (EAX));
  /* 12357b7f push 0x1237bfa4 */
  push32((uint32_t)(0x1237bfa4u));
  /* 12357b84 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357b87 push edx */
  push32((uint32_t)(EDX));
  /* 12357b88 call dword ptr [0x123832c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832c8))), 0x12357b8eu);
  /* 12357b8e mov dword ptr [0x123806dc], eax */
  w32((uint32_t)(0x123806dc), (EAX));
L_12357b93:;
  /* 12357b93 cmp dword ptr [0x123806d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357b9a je 0x12357ba5 */
  if (C.zf) goto L_12357ba5;
  /* 12357b9c call dword ptr [0x123806d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123806d8))), 0x12357ba2u);
  /* 12357ba2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12357ba5:;
  /* 12357ba5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ba9 je 0x12357bc1 */
  if (C.zf) goto L_12357bc1;
  /* 12357bab cmp dword ptr [0x123806dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123806dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357bb2 je 0x12357bc1 */
  if (C.zf) goto L_12357bc1;
  /* 12357bb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357bb7 push eax */
  push32((uint32_t)(EAX));
  /* 12357bb8 call dword ptr [0x123806dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123806dc))), 0x12357bbeu);
  /* 12357bbe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12357bc1:;
  /* 12357bc1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12357bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12357bc5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357bc8 push edx */
  push32((uint32_t)(EDX));
  /* 12357bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357bcc push eax */
  push32((uint32_t)(EAX));
  /* 12357bcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12357bd1 call dword ptr [0x123806d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123806d4))), 0x12357bd7u);
L_12357bd7:;
  /* 12357bd7 mov esp, ebp */
  ESP = (EBP);
  /* 12357bd9 pop ebp */
  EBP = (pop32());
  /* 12357bda ret  */
  ESPCHK(0x12357b20u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12357be0 (254 bytes, 109 insns) */
void f_12357be0(void) {
  FTRACE(0x12357be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357be0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12357be4 push edi */
  push32((uint32_t)(EDI));
  /* 12357be5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12357be7 je 0x12357c63 */
  if (C.zf) goto L_12357c63;
  /* 12357be9 push esi */
  push32((uint32_t)(ESI));
  /* 12357bea push ebx */
  push32((uint32_t)(EBX));
  /* 12357beb mov ebx, ecx */
  EBX = (ECX);
  /* 12357bed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12357bf1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12357bf7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12357bfb jne 0x12357c04 */
  if (!C.zf) goto L_12357c04;
  /* 12357bfd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12357c00 jne 0x12357c71 */
  if (!C.zf) goto L_12357c71;
  /* 12357c02 jmp 0x12357c25 */
  goto L_12357c25;
L_12357c04:;
  /* 12357c04 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12357c06 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12357c07 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12357c09 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12357c0a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12357c0b je 0x12357c32 */
  if (C.zf) goto L_12357c32;
  /* 12357c0d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12357c0f je 0x12357c3a */
  if (C.zf) goto L_12357c3a;
  /* 12357c11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12357c17 jne 0x12357c04 */
  if (!C.zf) goto L_12357c04;
  /* 12357c19 mov ebx, ecx */
  EBX = (ECX);
  /* 12357c1b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12357c1e jne 0x12357c71 */
  if (!C.zf) goto L_12357c71;
L_12357c20:;
  /* 12357c20 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12357c23 je 0x12357c32 */
  if (C.zf) goto L_12357c32;
L_12357c25:;
  /* 12357c25 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12357c27 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12357c28 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12357c2a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12357c2b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12357c2d je 0x12357c5e */
  if (C.zf) goto L_12357c5e;
  /* 12357c2f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12357c30 jne 0x12357c25 */
  if (!C.zf) goto L_12357c25;
L_12357c32:;
  /* 12357c32 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12357c36 pop ebx */
  EBX = (pop32());
  /* 12357c37 pop esi */
  ESI = (pop32());
  /* 12357c38 pop edi */
  EDI = (pop32());
  /* 12357c39 ret  */
  ESPCHK(0x12357be0u, _esp0);
  ESP += 4; return;
L_12357c3a:;
  /* 12357c3a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12357c40 je 0x12357c54 */
  if (C.zf) goto L_12357c54;
L_12357c42:;
  /* 12357c42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12357c44 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12357c45 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12357c46 je 0x12357cd6 */
  if (C.zf) goto L_12357cd6;
  /* 12357c4c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12357c52 jne 0x12357c42 */
  if (!C.zf) goto L_12357c42;
L_12357c54:;
  /* 12357c54 mov ebx, ecx */
  EBX = (ECX);
  /* 12357c56 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12357c59 jne 0x12357cc7 */
  if (!C.zf) goto L_12357cc7;
L_12357c5b:;
  /* 12357c5b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12357c5d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12357c5e:;
  /* 12357c5e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12357c5f jne 0x12357c5b */
  if (!C.zf) goto L_12357c5b;
  /* 12357c61 pop ebx */
  EBX = (pop32());
  /* 12357c62 pop esi */
  ESI = (pop32());
L_12357c63:;
  /* 12357c63 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12357c67 pop edi */
  EDI = (pop32());
  /* 12357c68 ret  */
  ESPCHK(0x12357be0u, _esp0);
  ESP += 4; return;
L_12357c69:;
  /* 12357c69 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12357c6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12357c6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12357c6f je 0x12357c20 */
  if (C.zf) goto L_12357c20;
L_12357c71:;
  /* 12357c71 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12357c76 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12357c78 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357c7a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12357c7d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12357c7f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12357c81 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12357c84 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12357c89 je 0x12357c69 */
  if (C.zf) goto L_12357c69;
  /* 12357c8b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12357c8d je 0x12357cbb */
  if (C.zf) goto L_12357cbb;
  /* 12357c8f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12357c91 je 0x12357cb1 */
  if (C.zf) goto L_12357cb1;
  /* 12357c93 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12357c99 je 0x12357ca7 */
  if (C.zf) goto L_12357ca7;
  /* 12357c9b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12357ca1 jne 0x12357c69 */
  if (!C.zf) goto L_12357c69;
  /* 12357ca3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12357ca5 jmp 0x12357cbf */
  goto L_12357cbf;
L_12357ca7:;
  /* 12357ca7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12357cad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12357caf jmp 0x12357cbf */
  goto L_12357cbf;
L_12357cb1:;
  /* 12357cb1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12357cb7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12357cb9 jmp 0x12357cbf */
  goto L_12357cbf;
L_12357cbb:;
  /* 12357cbb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12357cbd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12357cbf:;
  /* 12357cbf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12357cc2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12357cc4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12357cc5 je 0x12357cd1 */
  if (C.zf) goto L_12357cd1;
L_12357cc7:;
  /* 12357cc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12357cc9:;
  /* 12357cc9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12357ccb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12357cce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12357ccf jne 0x12357cc9 */
  if (!C.zf) goto L_12357cc9;
L_12357cd1:;
  /* 12357cd1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12357cd4 jne 0x12357c5b */
  if (!C.zf) goto L_12357c5b;
L_12357cd6:;
  /* 12357cd6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12357cda pop ebx */
  EBX = (pop32());
  /* 12357cdb pop esi */
  ESI = (pop32());
  /* 12357cdc pop edi */
  EDI = (pop32());
  /* 12357cdd ret  */
  ESPCHK(0x12357be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ce0 @ 0x12357ce0 (55 bytes, 16 insns) */
void f_12357ce0(void) {
  FTRACE(0x12357ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12357ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12357ce3 mov eax, dword ptr [0x1237eb84] */
  EAX = (r32((uint32_t)(0x1237eb84)));
  /* 12357ce8 push eax */
  push32((uint32_t)(EAX));
  /* 12357ce9 call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x12357cefu);
  /* 12357cef mov ecx, dword ptr [0x1237eb74] */
  ECX = (r32((uint32_t)(0x1237eb74)));
  /* 12357cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12357cf6 call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x12357cfcu);
  /* 12357cfc mov edx, dword ptr [0x1237eb64] */
  EDX = (r32((uint32_t)(0x1237eb64)));
  /* 12357d02 push edx */
  push32((uint32_t)(EDX));
  /* 12357d03 call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x12357d09u);
  /* 12357d09 mov eax, dword ptr [0x1237eb44] */
  EAX = (r32((uint32_t)(0x1237eb44)));
  /* 12357d0e push eax */
  push32((uint32_t)(EAX));
  /* 12357d0f call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x12357d15u);
  /* 12357d15 pop ebp */
  EBP = (pop32());
  /* 12357d16 ret  */
  ESPCHK(0x12357ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x12357d20 (159 bytes, 47 insns) */
void f_12357d20(void) {
  FTRACE(0x12357d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12357d21 mov ebp, esp */
  EBP = (ESP);
  /* 12357d23 push ecx */
  push32((uint32_t)(ECX));
  /* 12357d24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12357d2b jmp 0x12357d36 */
  goto L_12357d36;
L_12357d2d:;
  /* 12357d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357d30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357d33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12357d36:;
  /* 12357d36 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d3a jge 0x12357d89 */
  if ((C.sf==C.of)) goto L_12357d89;
  /* 12357d3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357d3f cmp dword ptr [ecx*4 + 0x1237eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1237eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d47 je 0x12357d87 */
  if (C.zf) goto L_12357d87;
  /* 12357d49 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d4d je 0x12357d87 */
  if (C.zf) goto L_12357d87;
  /* 12357d4f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d53 je 0x12357d87 */
  if (C.zf) goto L_12357d87;
  /* 12357d55 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d59 je 0x12357d87 */
  if (C.zf) goto L_12357d87;
  /* 12357d5b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357d5f je 0x12357d87 */
  if (C.zf) goto L_12357d87;
  /* 12357d61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357d64 mov eax, dword ptr [edx*4 + 0x1237eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1237eb40)));
  /* 12357d6b push eax */
  push32((uint32_t)(EAX));
  /* 12357d6c call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x12357d72u);
  /* 12357d72 push 2 */
  push32((uint32_t)(0x2u));
  /* 12357d74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357d77 mov edx, dword ptr [ecx*4 + 0x1237eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1237eb40)));
  /* 12357d7e push edx */
  push32((uint32_t)(EDX));
  /* 12357d7f call 0x12354e50 */
  push32(0x12357d84u); f_12354e50();
  /* 12357d84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357d87:;
  /* 12357d87 jmp 0x12357d2d */
  goto L_12357d2d;
L_12357d89:;
  /* 12357d89 mov eax, dword ptr [0x1237eb64] */
  EAX = (r32((uint32_t)(0x1237eb64)));
  /* 12357d8e push eax */
  push32((uint32_t)(EAX));
  /* 12357d8f call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x12357d95u);
  /* 12357d95 mov ecx, dword ptr [0x1237eb74] */
  ECX = (r32((uint32_t)(0x1237eb74)));
  /* 12357d9b push ecx */
  push32((uint32_t)(ECX));
  /* 12357d9c call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x12357da2u);
  /* 12357da2 mov edx, dword ptr [0x1237eb84] */
  EDX = (r32((uint32_t)(0x1237eb84)));
  /* 12357da8 push edx */
  push32((uint32_t)(EDX));
  /* 12357da9 call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x12357dafu);
  /* 12357daf mov eax, dword ptr [0x1237eb44] */
  EAX = (r32((uint32_t)(0x1237eb44)));
  /* 12357db4 push eax */
  push32((uint32_t)(EAX));
  /* 12357db5 call dword ptr [0x12383254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383254))), 0x12357dbbu);
  /* 12357dbb mov esp, ebp */
  ESP = (EBP);
  /* 12357dbd pop ebp */
  EBP = (pop32());
  /* 12357dbe ret  */
  ESPCHK(0x12357d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007dc0 @ 0x12357dc0 (151 bytes, 46 insns) */
void f_12357dc0(void) {
  FTRACE(0x12357dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12357dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12357dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12357dc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357dc7 cmp dword ptr [eax*4 + 0x1237eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1237eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357dcf jne 0x12357e42 */
  if (!C.zf) goto L_12357e42;
  /* 12357dd1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12357dd6 push 0x1237bfd4 */
  push32((uint32_t)(0x1237bfd4u));
  /* 12357ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 12357ddd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12357ddf call 0x123543c0 */
  push32(0x12357de4u); f_123543c0();
  /* 12357de4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357de7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12357dea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357dee jne 0x12357dfa */
  if (!C.zf) goto L_12357dfa;
  /* 12357df0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12357df2 call 0x12353330 */
  push32(0x12357df7u); f_12353330();
  /* 12357df7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357dfa:;
  /* 12357dfa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12357dfc call 0x12357dc0 */
  push32(0x12357e01u); f_12357dc0();
  /* 12357e01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357e04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357e07 cmp dword ptr [ecx*4 + 0x1237eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1237eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357e0f jne 0x12357e2a */
  if (!C.zf) goto L_12357e2a;
  /* 12357e11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357e14 push edx */
  push32((uint32_t)(EDX));
  /* 12357e15 call dword ptr [0x12383348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383348))), 0x12357e1bu);
  /* 12357e1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357e1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357e21 mov dword ptr [eax*4 + 0x1237eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1237eb40), (ECX));
  /* 12357e28 jmp 0x12357e38 */
  goto L_12357e38;
L_12357e2a:;
  /* 12357e2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12357e2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12357e2f push edx */
  push32((uint32_t)(EDX));
  /* 12357e30 call 0x12354e50 */
  push32(0x12357e35u); f_12354e50();
  /* 12357e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357e38:;
  /* 12357e38 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12357e3a call 0x12357e60 */
  push32(0x12357e3fu); f_12357e60();
  /* 12357e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12357e42:;
  /* 12357e42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357e45 mov ecx, dword ptr [eax*4 + 0x1237eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237eb40)));
  /* 12357e4c push ecx */
  push32((uint32_t)(ECX));
  /* 12357e4d call dword ptr [0x1238334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238334c))), 0x12357e53u);
  /* 12357e53 mov esp, ebp */
  ESP = (EBP);
  /* 12357e55 pop ebp */
  EBP = (pop32());
  /* 12357e56 ret  */
  ESPCHK(0x12357dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x12357e60 (22 bytes, 8 insns) */
void f_12357e60(void) {
  FTRACE(0x12357e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357e60 push ebp */
  push32((uint32_t)(EBP));
  /* 12357e61 mov ebp, esp */
  EBP = (ESP);
  /* 12357e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357e66 mov ecx, dword ptr [eax*4 + 0x1237eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1237eb40)));
  /* 12357e6d push ecx */
  push32((uint32_t)(ECX));
  /* 12357e6e call dword ptr [0x12383350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383350))), 0x12357e74u);
  /* 12357e74 pop ebp */
  EBP = (pop32());
  /* 12357e75 ret  */
  ESPCHK(0x12357e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x12357e80 (26 bytes, 10 insns) */
void f_12357e80(void) {
  FTRACE(0x12357e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12357e81 mov ebp, esp */
  EBP = (ESP);
  /* 12357e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357e86 push eax */
  push32((uint32_t)(EAX));
  /* 12357e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12357e89 call dword ptr [0x12383354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383354))), 0x12357e8fu);
  /* 12357e8f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12357e94 call dword ptr [0x123832d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123832d8))), 0x12357e9au);
  /* 12357e9a pop ebp */
  EBP = (pop32());
  /* 12357e9b ret  */
  ESPCHK(0x12357e80u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12357ea0 (446 bytes, 130 insns) */
void f_12357ea0(void) {
  FTRACE(0x12357ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12357ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12357ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12357ea3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12357ea6 call 0x12353e00 */
  push32(0x12357eabu); f_12353e00();
  /* 12357eab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12357eae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357eb1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12357eb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12357eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12357eb8 push edx */
  push32((uint32_t)(EDX));
  /* 12357eb9 call 0x12358060 */
  push32(0x12357ebeu); f_12358060();
  /* 12357ebe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12357ec1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12357ec4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ec8 je 0x12357ed3 */
  if (C.zf) goto L_12357ed3;
  /* 12357eca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357ecd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ed1 jne 0x12357ee2 */
  if (!C.zf) goto L_12357ee2;
L_12357ed3:;
  /* 12357ed3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357ed6 push ecx */
  push32((uint32_t)(ECX));
  /* 12357ed7 call dword ptr [0x12383358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383358))), 0x12357eddu);
  /* 12357edd jmp 0x1235805a */
  goto L_1235805a;
L_12357ee2:;
  /* 12357ee2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357ee5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ee9 jne 0x12357eff */
  if (!C.zf) goto L_12357eff;
  /* 12357eeb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357eee mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12357ef5 mov eax, 1 */
  EAX = (0x1u);
  /* 12357efa jmp 0x1235805a */
  goto L_1235805a;
L_12357eff:;
  /* 12357eff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357f02 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357f06 jne 0x12357f10 */
  if (!C.zf) goto L_12357f10;
  /* 12357f08 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12357f0b jmp 0x1235805a */
  goto L_1235805a;
L_12357f10:;
  /* 12357f10 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357f13 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12357f16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12357f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357f1c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 12357f1f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12357f22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357f25 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12357f28 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 12357f2b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357f2e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357f32 jne 0x12358037 */
  if (!C.zf) goto L_12358037;
  /* 12357f38 mov eax, dword ptr [0x1237ec78] */
  EAX = (r32((uint32_t)(0x1237ec78)));
  /* 12357f3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12357f40 jmp 0x12357f4b */
  goto L_12357f4b;
L_12357f42:;
  /* 12357f42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12357f45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357f48 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12357f4b:;
  /* 12357f4b mov edx, dword ptr [0x1237ec78] */
  EDX = (r32((uint32_t)(0x1237ec78)));
  /* 12357f51 add edx, dword ptr [0x1237ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1237ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12357f57 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357f5a jge 0x12357f72 */
  if ((C.sf==C.of)) goto L_12357f72;
  /* 12357f5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12357f5f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12357f62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357f65 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12357f68 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12357f70 jmp 0x12357f42 */
  goto L_12357f42;
L_12357f72:;
  /* 12357f72 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357f75 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12357f78 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12357f7b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357f7e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357f84 jne 0x12357f95 */
  if (!C.zf) goto L_12357f95;
  /* 12357f86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357f89 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12357f90 jmp 0x1235801d */
  goto L_1235801d;
L_12357f95:;
  /* 12357f95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357f98 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357f9e jne 0x12357fac */
  if (!C.zf) goto L_12357fac;
  /* 12357fa0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357fa3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 12357faa jmp 0x1235801d */
  goto L_1235801d;
L_12357fac:;
  /* 12357fac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357faf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357fb5 jne 0x12357fc3 */
  if (!C.zf) goto L_12357fc3;
  /* 12357fb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357fba mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12357fc1 jmp 0x1235801d */
  goto L_1235801d;
L_12357fc3:;
  /* 12357fc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357fc6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357fcc jne 0x12357fda */
  if (!C.zf) goto L_12357fda;
  /* 12357fce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357fd1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 12357fd8 jmp 0x1235801d */
  goto L_1235801d;
L_12357fda:;
  /* 12357fda mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357fdd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357fe3 jne 0x12357ff1 */
  if (!C.zf) goto L_12357ff1;
  /* 12357fe5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357fe8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 12357fef jmp 0x1235801d */
  goto L_1235801d;
L_12357ff1:;
  /* 12357ff1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12357ff4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12357ffa jne 0x12358008 */
  if (!C.zf) goto L_12358008;
  /* 12357ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12357fff mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12358006 jmp 0x1235801d */
  goto L_1235801d;
L_12358008:;
  /* 12358008 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235800b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358011 jne 0x1235801d */
  if (!C.zf) goto L_1235801d;
  /* 12358013 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358016 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1235801d:;
  /* 1235801d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358020 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12358023 push edx */
  push32((uint32_t)(EDX));
  /* 12358024 push 8 */
  push32((uint32_t)(0x8u));
  /* 12358026 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12358029u);
  /* 12358029 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235802c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235802f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12358032 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12358035 jmp 0x1235804e */
  goto L_1235804e;
L_12358037:;
  /* 12358037 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235803a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12358041 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12358044 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12358047 push ecx */
  push32((uint32_t)(ECX));
  /* 12358048 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1235804bu);
  /* 1235804b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1235804e:;
  /* 1235804e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358051 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12358054 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12358057 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1235805a:;
  /* 1235805a mov esp, ebp */
  ESP = (EBP);
  /* 1235805c pop ebp */
  EBP = (pop32());
  /* 1235805d ret  */
  ESPCHK(0x12357ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008060 @ 0x12358060 (89 bytes, 35 insns) */
void f_12358060(void) {
  FTRACE(0x12358060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358060 push ebp */
  push32((uint32_t)(EBP));
  /* 12358061 mov ebp, esp */
  EBP = (ESP);
  /* 12358063 push ecx */
  push32((uint32_t)(ECX));
  /* 12358064 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358067 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1235806a:;
  /* 1235806a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235806d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1235806f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358072 je 0x12358092 */
  if (C.zf) goto L_12358092;
  /* 12358074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358077 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235807a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235807d mov ecx, dword ptr [0x1237ec84] */
  ECX = (r32((uint32_t)(0x1237ec84)));
  /* 12358083 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12358086 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358089 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235808b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235808e jae 0x12358092 */
  if (!C.cf) goto L_12358092;
  /* 12358090 jmp 0x1235806a */
  goto L_1235806a;
L_12358092:;
  /* 12358092 mov eax, dword ptr [0x1237ec84] */
  EAX = (r32((uint32_t)(0x1237ec84)));
  /* 12358097 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1235809a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235809d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235809f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123580a2 jae 0x123580ae */
  if (!C.cf) goto L_123580ae;
  /* 123580a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123580a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123580a9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123580ac je 0x123580b2 */
  if (C.zf) goto L_123580b2;
L_123580ae:;
  /* 123580ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123580b0 jmp 0x123580b5 */
  goto L_123580b5;
L_123580b2:;
  /* 123580b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123580b5:;
  /* 123580b5 mov esp, ebp */
  ESP = (EBP);
  /* 123580b7 pop ebp */
  EBP = (pop32());
  /* 123580b8 ret  */
  ESPCHK(0x12358060u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x123580c0 (48 bytes, 17 insns) */
void f_123580c0(void) {
  FTRACE(0x123580c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123580c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123580c1 mov ebp, esp */
  EBP = (ESP);
  /* 123580c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123580c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 123580c6 call 0x12357dc0 */
  push32(0x123580cbu); f_12357dc0();
  /* 123580cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123580ce mov eax, dword ptr [0x12380744] */
  EAX = (r32((uint32_t)(0x12380744)));
  /* 123580d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123580d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123580d9 mov dword ptr [0x12380744], ecx */
  w32((uint32_t)(0x12380744), (ECX));
  /* 123580df push 9 */
  push32((uint32_t)(0x9u));
  /* 123580e1 call 0x12357e60 */
  push32(0x123580e6u); f_12357e60();
  /* 123580e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123580e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123580ec mov esp, ebp */
  ESP = (EBP);
  /* 123580ee pop ebp */
  EBP = (pop32());
  /* 123580ef ret  */
  ESPCHK(0x123580c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080f0 @ 0x123580f0 (10 bytes, 5 insns) */
void f_123580f0(void) {
  FTRACE(0x123580f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123580f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123580f1 mov ebp, esp */
  EBP = (ESP);
  /* 123580f3 mov eax, dword ptr [0x12380744] */
  EAX = (r32((uint32_t)(0x12380744)));
  /* 123580f8 pop ebp */
  EBP = (pop32());
  /* 123580f9 ret  */
  ESPCHK(0x123580f0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12358100 (45 bytes, 19 insns) */
void f_12358100(void) {
  FTRACE(0x12358100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358100 push ebp */
  push32((uint32_t)(EBP));
  /* 12358101 mov ebp, esp */
  EBP = (ESP);
  /* 12358103 push ecx */
  push32((uint32_t)(ECX));
  /* 12358104 mov eax, dword ptr [0x12380744] */
  EAX = (r32((uint32_t)(0x12380744)));
  /* 12358109 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1235810c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358110 je 0x12358120 */
  if (C.zf) goto L_12358120;
  /* 12358112 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358115 push ecx */
  push32((uint32_t)(ECX));
  /* 12358116 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12358119u);
  /* 12358119 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235811c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235811e jne 0x12358124 */
  if (!C.zf) goto L_12358124;
L_12358120:;
  /* 12358120 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12358122 jmp 0x12358129 */
  goto L_12358129;
L_12358124:;
  /* 12358124 mov eax, 1 */
  EAX = (0x1u);
L_12358129:;
  /* 12358129 mov esp, ebp */
  ESP = (EBP);
  /* 1235812b pop ebp */
  EBP = (pop32());
  /* 1235812c ret  */
  ESPCHK(0x12358100u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12358130 (88 bytes, 40 insns) */
void f_12358130(void) {
  FTRACE(0x12358130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358130 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12358134 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12358138 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1235813a je 0x12358183 */
  if (C.zf) goto L_12358183;
  /* 1235813c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235813e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12358142 push edi */
  push32((uint32_t)(EDI));
  /* 12358143 mov edi, ecx */
  EDI = (ECX);
  /* 12358145 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358148 jb 0x12358177 */
  if (C.cf) goto L_12358177;
  /* 1235814a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1235814c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1235814f je 0x12358159 */
  if (C.zf) goto L_12358159;
  /* 12358151 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12358153:;
  /* 12358153 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12358155 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12358156 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12358157 jne 0x12358153 */
  if (!C.zf) goto L_12358153;
L_12358159:;
  /* 12358159 mov ecx, eax */
  ECX = (EAX);
  /* 1235815b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1235815e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358160 mov ecx, eax */
  ECX = (EAX);
  /* 12358162 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12358165 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358167 mov ecx, edx */
  ECX = (EDX);
  /* 12358169 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1235816c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1235816f je 0x12358177 */
  if (C.zf) goto L_12358177;
  /* 12358171 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12358173 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12358175 je 0x1235817d */
  if (C.zf) goto L_1235817d;
L_12358177:;
  /* 12358177 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12358179 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1235817a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1235817b jne 0x12358177 */
  if (!C.zf) goto L_12358177;
L_1235817d:;
  /* 1235817d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12358181 pop edi */
  EDI = (pop32());
  /* 12358182 ret  */
  ESPCHK(0x12358130u, _esp0);
  ESP += 4; return;
L_12358183:;
  /* 12358183 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12358187 ret  */
  ESPCHK(0x12358130u, _esp0);
  ESP += 4; return;
}

/* FUN_10008190 @ 0x12358190 (23 bytes, 10 insns) */
void f_12358190(void) {
  FTRACE(0x12358190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358190 push ebp */
  push32((uint32_t)(EBP));
  /* 12358191 mov ebp, esp */
  EBP = (ESP);
  /* 12358193 mov eax, dword ptr [0x12380740] */
  EAX = (r32((uint32_t)(0x12380740)));
  /* 12358198 push eax */
  push32((uint32_t)(EAX));
  /* 12358199 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235819c push ecx */
  push32((uint32_t)(ECX));
  /* 1235819d call 0x123581b0 */
  push32(0x123581a2u); f_123581b0();
  /* 123581a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123581a5 pop ebp */
  EBP = (pop32());
  /* 123581a6 ret  */
  ESPCHK(0x12358190u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x123581b0 (87 bytes, 34 insns) */
void f_123581b0(void) {
  FTRACE(0x123581b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123581b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123581b1 mov ebp, esp */
  EBP = (ESP);
  /* 123581b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123581b4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123581b8 jbe 0x123581be */
  if ((C.cf||C.zf)) goto L_123581be;
  /* 123581ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123581bc jmp 0x12358203 */
  goto L_12358203;
L_123581be:;
  /* 123581be cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123581c2 ja 0x123581d5 */
  if ((!C.cf&&!C.zf)) goto L_123581d5;
  /* 123581c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123581c7 push eax */
  push32((uint32_t)(EAX));
  /* 123581c8 call 0x12358210 */
  push32(0x123581cdu); f_12358210();
  /* 123581cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123581d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123581d3 jmp 0x123581dc */
  goto L_123581dc;
L_123581d5:;
  /* 123581d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123581dc:;
  /* 123581dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123581e0 jne 0x123581e8 */
  if (!C.zf) goto L_123581e8;
  /* 123581e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123581e6 jne 0x123581ed */
  if (!C.zf) goto L_123581ed;
L_123581e8:;
  /* 123581e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123581eb jmp 0x12358203 */
  goto L_12358203;
L_123581ed:;
  /* 123581ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123581f0 push ecx */
  push32((uint32_t)(ECX));
  /* 123581f1 call 0x12358100 */
  push32(0x123581f6u); f_12358100();
  /* 123581f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123581f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123581fb jne 0x12358201 */
  if (!C.zf) goto L_12358201;
  /* 123581fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123581ff jmp 0x12358203 */
  goto L_12358203;
L_12358201:;
  /* 12358201 jmp 0x123581be */
  goto L_123581be;
L_12358203:;
  /* 12358203 mov esp, ebp */
  ESP = (EBP);
  /* 12358205 pop ebp */
  EBP = (pop32());
  /* 12358206 ret  */
  ESPCHK(0x123581b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x12358210 (109 bytes, 37 insns) */
void f_12358210(void) {
  FTRACE(0x12358210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358210 push ebp */
  push32((uint32_t)(EBP));
  /* 12358211 mov ebp, esp */
  EBP = (ESP);
  /* 12358213 push ecx */
  push32((uint32_t)(ECX));
  /* 12358214 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358217 cmp eax, dword ptr [0x1237ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235821d ja 0x1235824d */
  if ((!C.cf&&!C.zf)) goto L_1235824d;
  /* 1235821f push 9 */
  push32((uint32_t)(0x9u));
  /* 12358221 call 0x12357dc0 */
  push32(0x12358226u); f_12357dc0();
  /* 12358226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358229 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235822c push ecx */
  push32((uint32_t)(ECX));
  /* 1235822d call 0x12358d50 */
  push32(0x12358232u); f_12358d50();
  /* 12358232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358235 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12358238 push 9 */
  push32((uint32_t)(0x9u));
  /* 1235823a call 0x12357e60 */
  push32(0x1235823fu); f_12357e60();
  /* 1235823f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358242 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358246 je 0x1235824d */
  if (C.zf) goto L_1235824d;
  /* 12358248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1235824b jmp 0x12358279 */
  goto L_12358279;
L_1235824d:;
  /* 1235824d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358251 jne 0x1235825a */
  if (!C.zf) goto L_1235825a;
  /* 12358253 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1235825a:;
  /* 1235825a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235825d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358260 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12358263 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12358266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358269 push eax */
  push32((uint32_t)(EAX));
  /* 1235826a push 0 */
  push32((uint32_t)(0x0u));
  /* 1235826c mov ecx, dword ptr [0x12381f0c] */
  ECX = (r32((uint32_t)(0x12381f0c)));
  /* 12358272 push ecx */
  push32((uint32_t)(ECX));
  /* 12358273 call dword ptr [0x12383344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383344))), 0x12358279u);
L_12358279:;
  /* 12358279 mov esp, ebp */
  ESP = (EBP);
  /* 1235827b pop ebp */
  EBP = (pop32());
  /* 1235827c ret  */
  ESPCHK(0x12358210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008280 @ 0x12358280 (10 bytes, 5 insns) */
void f_12358280(void) {
  FTRACE(0x12358280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358280 push ebp */
  push32((uint32_t)(EBP));
  /* 12358281 mov ebp, esp */
  EBP = (ESP);
  /* 12358283 mov eax, 1 */
  EAX = (0x1u);
  /* 12358288 pop ebp */
  EBP = (pop32());
  /* 12358289 ret  */
  ESPCHK(0x12358280u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x12358290 (173 bytes, 59 insns) */
void f_12358290(void) {
  FTRACE(0x12358290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358290 push ebp */
  push32((uint32_t)(EBP));
  /* 12358291 mov ebp, esp */
  EBP = (ESP);
  /* 12358293 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358296 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235829a jbe 0x123582a3 */
  if ((C.cf||C.zf)) goto L_123582a3;
  /* 1235829c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235829e jmp 0x12358339 */
  goto L_12358339;
L_123582a3:;
  /* 123582a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 123582a5 call 0x12357dc0 */
  push32(0x123582aau); f_12357dc0();
  /* 123582aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123582ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123582b0 push eax */
  push32((uint32_t)(EAX));
  /* 123582b1 call 0x123586c0 */
  push32(0x123582b6u); f_123586c0();
  /* 123582b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123582b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123582bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123582c0 je 0x12358301 */
  if (C.zf) goto L_12358301;
  /* 123582c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123582c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123582cc cmp ecx, dword ptr [0x1237ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1237ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123582d2 ja 0x123582f2 */
  if ((!C.cf&&!C.zf)) goto L_123582f2;
  /* 123582d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123582d7 push edx */
  push32((uint32_t)(EDX));
  /* 123582d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123582db push eax */
  push32((uint32_t)(EAX));
  /* 123582dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123582df push ecx */
  push32((uint32_t)(ECX));
  /* 123582e0 call 0x12359590 */
  push32(0x123582e5u); f_12359590();
  /* 123582e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123582e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123582ea je 0x123582f2 */
  if (C.zf) goto L_123582f2;
  /* 123582ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123582ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123582f2:;
  /* 123582f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123582f4 call 0x12357e60 */
  push32(0x123582f9u); f_12357e60();
  /* 123582f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123582fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123582ff jmp 0x12358339 */
  goto L_12358339;
L_12358301:;
  /* 12358301 push 9 */
  push32((uint32_t)(0x9u));
  /* 12358303 call 0x12357e60 */
  push32(0x12358308u); f_12357e60();
  /* 12358308 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235830b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235830f jne 0x12358318 */
  if (!C.zf) goto L_12358318;
  /* 12358311 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12358318:;
  /* 12358318 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235831b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1235831e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12358320 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12358323 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358326 push ecx */
  push32((uint32_t)(ECX));
  /* 12358327 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235832a push edx */
  push32((uint32_t)(EDX));
  /* 1235832b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1235832d mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 12358332 push eax */
  push32((uint32_t)(EAX));
  /* 12358333 call dword ptr [0x1238335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238335c))), 0x12358339u);
L_12358339:;
  /* 12358339 mov esp, ebp */
  ESP = (EBP);
  /* 1235833b pop ebp */
  EBP = (pop32());
  /* 1235833c ret  */
  ESPCHK(0x12358290u, _esp0);
  ESP += 4; return;
}

/* FUN_10008340 @ 0x12358340 (490 bytes, 165 insns) */
void f_12358340(void) {
  FTRACE(0x12358340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358340 push ebp */
  push32((uint32_t)(EBP));
  /* 12358341 mov ebp, esp */
  EBP = (ESP);
  /* 12358343 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358346 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235834a jne 0x1235835d */
  if (!C.zf) goto L_1235835d;
  /* 1235834c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1235834f push eax */
  push32((uint32_t)(EAX));
  /* 12358350 call 0x12358190 */
  push32(0x12358355u); f_12358190();
  /* 12358355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358358 jmp 0x12358526 */
  goto L_12358526;
L_1235835d:;
  /* 1235835d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358361 jne 0x12358376 */
  if (!C.zf) goto L_12358376;
  /* 12358363 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358366 push ecx */
  push32((uint32_t)(ECX));
  /* 12358367 call 0x12358530 */
  push32(0x1235836cu); f_12358530();
  /* 1235836c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235836f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12358371 jmp 0x12358526 */
  goto L_12358526;
L_12358376:;
  /* 12358376 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1235837d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358381 ja 0x123584f9 */
  if ((!C.cf&&!C.zf)) goto L_123584f9;
  /* 12358387 push 9 */
  push32((uint32_t)(0x9u));
  /* 12358389 call 0x12357dc0 */
  push32(0x1235838eu); f_12357dc0();
  /* 1235838e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358391 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358394 push edx */
  push32((uint32_t)(EDX));
  /* 12358395 call 0x123586c0 */
  push32(0x1235839au); f_123586c0();
  /* 1235839a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235839d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123583a0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123583a4 je 0x123584bc */
  if (C.zf) goto L_123584bc;
  /* 123583aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123583ad cmp eax, dword ptr [0x1237ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1237ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123583b3 ja 0x12358430 */
  if ((!C.cf&&!C.zf)) goto L_12358430;
  /* 123583b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123583b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123583b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123583bc push edx */
  push32((uint32_t)(EDX));
  /* 123583bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123583c0 push eax */
  push32((uint32_t)(EAX));
  /* 123583c1 call 0x12359590 */
  push32(0x123583c6u); f_12359590();
  /* 123583c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123583c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123583cb je 0x123583d5 */
  if (C.zf) goto L_123583d5;
  /* 123583cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123583d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123583d3 jmp 0x12358430 */
  goto L_12358430;
L_123583d5:;
  /* 123583d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123583d8 push edx */
  push32((uint32_t)(EDX));
  /* 123583d9 call 0x12358d50 */
  push32(0x123583deu); f_12358d50();
  /* 123583de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123583e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123583e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123583e8 je 0x12358430 */
  if (C.zf) goto L_12358430;
  /* 123583ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123583ed mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 123583f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123583f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123583f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123583f9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123583fc jae 0x12358406 */
  if (!C.cf) goto L_12358406;
  /* 123583fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358401 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12358404 jmp 0x1235840c */
  goto L_1235840c;
L_12358406:;
  /* 12358406 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358409 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1235840c:;
  /* 1235840c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1235840f push edx */
  push32((uint32_t)(EDX));
  /* 12358410 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358413 push eax */
  push32((uint32_t)(EAX));
  /* 12358414 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358417 push ecx */
  push32((uint32_t)(ECX));
  /* 12358418 call 0x1235aca0 */
  push32(0x1235841du); f_1235aca0();
  /* 1235841d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358420 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358423 push edx */
  push32((uint32_t)(EDX));
  /* 12358424 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12358427 push eax */
  push32((uint32_t)(EAX));
  /* 12358428 call 0x12358780 */
  push32(0x1235842du); f_12358780();
  /* 1235842d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12358430:;
  /* 12358430 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358434 jne 0x123584b0 */
  if (!C.zf) goto L_123584b0;
  /* 12358436 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235843a jne 0x12358443 */
  if (!C.zf) goto L_12358443;
  /* 1235843c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12358443:;
  /* 12358443 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358446 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12358449 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1235844c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1235844f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358452 push edx */
  push32((uint32_t)(EDX));
  /* 12358453 push 0 */
  push32((uint32_t)(0x0u));
  /* 12358455 mov eax, dword ptr [0x12381f0c] */
  EAX = (r32((uint32_t)(0x12381f0c)));
  /* 1235845a push eax */
  push32((uint32_t)(EAX));
  /* 1235845b call dword ptr [0x12383344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12383344))), 0x12358461u);
  /* 12358461 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12358464 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358468 je 0x123584b0 */
  if (C.zf) goto L_123584b0;
  /* 1235846a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235846d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12358470 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12358473 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12358476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358479 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1235847c jae 0x12358486 */
  if (!C.cf) goto L_12358486;
  /* 1235847e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358481 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12358484 jmp 0x1235848c */
  goto L_1235848c;
L_12358486:;
  /* 12358486 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358489 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1235848c:;
  /* 1235848c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1235848f push eax */
  push32((uint32_t)(EAX));
  /* 12358490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358493 push ecx */
  push32((uint32_t)(ECX));
  /* 12358494 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12358497 push edx */
  push32((uint32_t)(EDX));
  /* 12358498 call 0x1235aca0 */
  push32(0x1235849du); f_1235aca0();
  /* 1235849d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123584a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123584a3 push eax */
  push32((uint32_t)(EAX));
  /* 123584a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123584a7 push ecx */
  push32((uint32_t)(ECX));
  /* 123584a8 call 0x12358780 */
  push32(0x123584adu); f_12358780();
  /* 123584ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123584b0:;
  /* 123584b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 123584b2 call 0x12357e60 */
  push32(0x123584b7u); f_12357e60();
  /* 123584b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123584ba jmp 0x123584f9 */
  goto L_123584f9;
L_123584bc:;
  /* 123584bc push 9 */
  push32((uint32_t)(0x9u));
  /* 123584be call 0x12357e60 */
  push32(0x123584c3u); f_12357e60();
  /* 123584c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123584c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123584ca jne 0x123584d3 */
  if (!C.zf) goto L_123584d3;
  /* 123584cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_123584d3:;
  /* 123584d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123584d6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123584d9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 123584dc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123584df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123584e2 push eax */
  push32((uint32_t)(EAX));
  /* 123584e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123584e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123584e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123584e9 mov edx, dword ptr [0x12381f0c] */
  EDX = (r32((uint32_t)(0x12381f0c)));
  /* 123584ef push edx */
  push32((uint32_t)(EDX));
  /* 123584f0 call dword ptr [0x1238335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238335c))), 0x123584f6u);
  /* 123584f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123584f9:;
  /* 123584f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123584fd jne 0x12358508 */
  if (!C.zf) goto L_12358508;
  /* 123584ff cmp dword ptr [0x12380740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12380740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358506 jne 0x1235850d */
  if (!C.zf) goto L_1235850d;
L_12358508:;
  /* 12358508 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1235850b jmp 0x12358526 */
  goto L_12358526;
L_1235850d:;
  /* 1235850d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12358510 push eax */
  push32((uint32_t)(EAX));
  /* 12358511 call 0x12358100 */
  push32(0x12358516u); f_12358100();
  /* 12358516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1235851b jne 0x12358521 */
  if (!C.zf) goto L_12358521;
  /* 1235851d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1235851f jmp 0x12358526 */
  goto L_12358526;
L_12358521:;
  /* 12358521 jmp 0x12358376 */
  goto L_12358376;
L_12358526:;
  /* 12358526 mov esp, ebp */
  ESP = (EBP);
  /* 12358528 pop ebp */
  EBP = (pop32());
  /* 12358529 ret  */
  ESPCHK(0x12358340u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x12358530 (104 bytes, 38 insns) */
void f_12358530(void) {
  FTRACE(0x12358530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12358530 push ebp */
  push32((uint32_t)(EBP));
  /* 12358531 mov ebp, esp */
  EBP = (ESP);
  /* 12358533 push ecx */
  push32((uint32_t)(ECX));
  /* 12358534 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358538 jne 0x1235853c */
  if (!C.zf) goto L_1235853c;
  /* 1235853a jmp 0x12358594 */
  goto L_12358594;
L_1235853c:;
  /* 1235853c push 9 */
  push32((uint32_t)(0x9u));
  /* 1235853e call 0x12357dc0 */
  push32(0x12358543u); f_12357dc0();
  /* 12358543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358546 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358549 push eax */
  push32((uint32_t)(EAX));
  /* 1235854a call 0x123586c0 */
  push32(0x1235854fu); f_123586c0();
  /* 1235854f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358552 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12358555 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12358559 je 0x12358577 */
  if (C.zf) goto L_12358577;
  /* 1235855b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1235855e push ecx */
  push32((uint32_t)(ECX));
  /* 1235855f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12358562 push edx */
  push32((uint32_t)(EDX));
  /* 12358563 call 0x12358780 */
  push32(0x12358568u); f_12358780();
  /* 12358568 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1235856b push 9 */
  push32((uint32_t)(0x9u));
  /* 1235856d call 0x12357e60 */
  push32(0x12358572u); f_12357e60();
  /* 12358572 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358575 jmp 0x12358594 */
  goto L_12358594;
L_12358577:;
  /* 12358577 push 9 */
  push32((uint32_t)(0x9u));
  /* 12358579 call 0x12357e60 */
  push32(0x1235857eu); f_12357e60();
  /* 1235857e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12358581 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12358584 push eax */
  push32((uint32_t)(EAX));
  /* 12358585 push 0 */
  push32((uint32_t)(0x0u));
  /* 12358587 mov ecx, dword ptr [0x12381f0c] */
  ECX = (r32((uint32_t)(0x12381f0c)));
  /* 1235858d push ecx */
  push32((uint32_t)(ECX));
  /* 1235858e call dword ptr [0x1238333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1238333c))), 0x12358594u);
L_12358594:;
  /* 12358594 mov esp, ebp */
  ESP = (EBP);
  /* 12358596 pop ebp */
  EBP = (pop32());
  /* 12358597 ret  */
  ESPCHK(0x12358530u, _esp0);
  ESP += 4; return;
}

