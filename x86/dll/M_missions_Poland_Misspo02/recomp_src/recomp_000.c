#include "recomp.h"

/* thunk_FUN_10004960 @ 0x10831005 (5 bytes, 1 insns) */
void f_10831005(void) {
  FTRACE(0x10831005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10831005 jmp 0x10834960 */
  f_10834960(); return;
}

/* OnInit @ 0x1083100a (5 bytes, 1 insns) */
void f_1083100a(void) {
  FTRACE(0x1083100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083100a jmp 0x10831090 */
  f_10831090(); return;
}

/* thunk_FUN_10001030 @ 0x1083100f (5 bytes, 1 insns) */
void f_1083100f(void) {
  FTRACE(0x1083100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1083100f jmp 0x10831030 */
  f_10831030(); return;
}

/* ProcessScenary @ 0x10831014 (5 bytes, 1 insns) */
void f_10831014(void) {
  FTRACE(0x10831014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10831014 jmp 0x10831660 */
  f_10831660(); return;
}

/* FUN_10001030 @ 0x10831030 (67 bytes, 26 insns) */
void f_10831030(void) {
  FTRACE(0x10831030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10831030 push ebp */
  push32((uint32_t)(EBP));
  /* 10831031 mov ebp, esp */
  EBP = (ESP);
  /* 10831033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10831036 push ebx */
  push32((uint32_t)(EBX));
  /* 10831037 push esi */
  push32((uint32_t)(ESI));
  /* 10831038 push edi */
  push32((uint32_t)(EDI));
  /* 10831039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1083103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10831041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10831046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10831048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831052 je 0x10831056 */
  if (C.zf) goto L_10831056;
  /* 10831054 jmp 0x1083105b */
  goto L_1083105b;
L_10831056:;
  /* 10831056 call 0x1083100a */
  push32(0x1083105bu); f_1083100a();
L_1083105b:;
  /* 1083105b mov eax, 1 */
  EAX = (0x1u);
  /* 10831060 pop edi */
  EDI = (pop32());
  /* 10831061 pop esi */
  ESI = (pop32());
  /* 10831062 pop ebx */
  EBX = (pop32());
  /* 10831063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831068 call 0x10834ad0 */
  push32(0x1083106du); f_10834ad0();
  /* 1083106d mov esp, ebp */
  ESP = (EBP);
  /* 1083106f pop ebp */
  EBP = (pop32());
  /* 10831070 ret 0xc */
  ESPCHK(0x10831030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10831090 (1184 bytes, 316 insns) */
void f_10831090(void) {
  FTRACE(0x10831090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10831090 push ebp */
  push32((uint32_t)(EBP));
  /* 10831091 mov ebp, esp */
  EBP = (ESP);
  /* 10831093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10831096 push ebx */
  push32((uint32_t)(EBX));
  /* 10831097 push esi */
  push32((uint32_t)(ESI));
  /* 10831098 push edi */
  push32((uint32_t)(EDI));
  /* 10831099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1083109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 108310a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 108310a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 108310a8 mov esi, esp */
  ESI = (ESP);
  /* 108310aa push 0x1085c11c */
  push32((uint32_t)(0x1085c11cu));
  /* 108310af push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 108310b4 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108310bau);
  /* 108310ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108310bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108310bf call 0x10834ad0 */
  push32(0x108310c4u); f_10834ad0();
  /* 108310c4 mov esi, esp */
  ESI = (ESP);
  /* 108310c6 push 0x1085c118 */
  push32((uint32_t)(0x1085c118u));
  /* 108310cb push 0x108613f8 */
  push32((uint32_t)(0x108613f8u));
  /* 108310d0 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108310d6u);
  /* 108310d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108310d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108310db call 0x10834ad0 */
  push32(0x108310e0u); f_10834ad0();
  /* 108310e0 mov esi, esp */
  ESI = (ESP);
  /* 108310e2 push 0x1085c114 */
  push32((uint32_t)(0x1085c114u));
  /* 108310e7 push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 108310ec call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108310f2u);
  /* 108310f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108310f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108310f7 call 0x10834ad0 */
  push32(0x108310fcu); f_10834ad0();
  /* 108310fc mov esi, esp */
  ESI = (ESP);
  /* 108310fe push 0x1085c110 */
  push32((uint32_t)(0x1085c110u));
  /* 10831103 push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10831108 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x1083110eu);
  /* 1083110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831113 call 0x10834ad0 */
  push32(0x10831118u); f_10834ad0();
  /* 10831118 mov esi, esp */
  ESI = (ESP);
  /* 1083111a push 0x1085c10c */
  push32((uint32_t)(0x1085c10cu));
  /* 1083111f push 0x10861480 */
  push32((uint32_t)(0x10861480u));
  /* 10831124 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x1083112au);
  /* 1083112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083112f call 0x10834ad0 */
  push32(0x10831134u); f_10834ad0();
  /* 10831134 mov esi, esp */
  ESI = (ESP);
  /* 10831136 push 0x1085c108 */
  push32((uint32_t)(0x1085c108u));
  /* 1083113b push 0x10861410 */
  push32((uint32_t)(0x10861410u));
  /* 10831140 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x10831146u);
  /* 10831146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083114b call 0x10834ad0 */
  push32(0x10831150u); f_10834ad0();
  /* 10831150 mov esi, esp */
  ESI = (ESP);
  /* 10831152 push 0x1085c104 */
  push32((uint32_t)(0x1085c104u));
  /* 10831157 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 1083115c call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x10831162u);
  /* 10831162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831167 call 0x10834ad0 */
  push32(0x1083116cu); f_10834ad0();
  /* 1083116c mov esi, esp */
  ESI = (ESP);
  /* 1083116e push 0x1085c100 */
  push32((uint32_t)(0x1085c100u));
  /* 10831173 push 0x10861490 */
  push32((uint32_t)(0x10861490u));
  /* 10831178 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x1083117eu);
  /* 1083117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831183 call 0x10834ad0 */
  push32(0x10831188u); f_10834ad0();
  /* 10831188 mov esi, esp */
  ESI = (ESP);
  /* 1083118a push 0x1085c0fc */
  push32((uint32_t)(0x1085c0fcu));
  /* 1083118f push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10831194 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x1083119au);
  /* 1083119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083119f call 0x10834ad0 */
  push32(0x108311a4u); f_10834ad0();
  /* 108311a4 mov esi, esp */
  ESI = (ESP);
  /* 108311a6 push 0x1085c0f8 */
  push32((uint32_t)(0x1085c0f8u));
  /* 108311ab push 0x10861498 */
  push32((uint32_t)(0x10861498u));
  /* 108311b0 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108311b6u);
  /* 108311b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108311b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108311bb call 0x10834ad0 */
  push32(0x108311c0u); f_10834ad0();
  /* 108311c0 mov esi, esp */
  ESI = (ESP);
  /* 108311c2 push 0x1085c0f4 */
  push32((uint32_t)(0x1085c0f4u));
  /* 108311c7 push 0x108614a0 */
  push32((uint32_t)(0x108614a0u));
  /* 108311cc call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108311d2u);
  /* 108311d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108311d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108311d7 call 0x10834ad0 */
  push32(0x108311dcu); f_10834ad0();
  /* 108311dc mov esi, esp */
  ESI = (ESP);
  /* 108311de push 0x1085c0f0 */
  push32((uint32_t)(0x1085c0f0u));
  /* 108311e3 push 0x10861428 */
  push32((uint32_t)(0x10861428u));
  /* 108311e8 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x108311eeu);
  /* 108311ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108311f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108311f3 call 0x10834ad0 */
  push32(0x108311f8u); f_10834ad0();
  /* 108311f8 mov esi, esp */
  ESI = (ESP);
  /* 108311fa push 0x1085c0ec */
  push32((uint32_t)(0x1085c0ecu));
  /* 108311ff push 0x108614a8 */
  push32((uint32_t)(0x108614a8u));
  /* 10831204 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x1083120au);
  /* 1083120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083120f call 0x10834ad0 */
  push32(0x10831214u); f_10834ad0();
  /* 10831214 mov esi, esp */
  ESI = (ESP);
  /* 10831216 push 0x1085c0e8 */
  push32((uint32_t)(0x1085c0e8u));
  /* 1083121b push 0x108614b0 */
  push32((uint32_t)(0x108614b0u));
  /* 10831220 call dword ptr [0x108644ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ec))), 0x10831226u);
  /* 10831226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083122b call 0x10834ad0 */
  push32(0x10831230u); f_10834ad0();
  /* 10831230 mov esi, esp */
  ESI = (ESP);
  /* 10831232 push 0x1085c0e4 */
  push32((uint32_t)(0x1085c0e4u));
  /* 10831237 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 1083123c call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x10831242u);
  /* 10831242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831247 call 0x10834ad0 */
  push32(0x1083124cu); f_10834ad0();
  /* 1083124c mov esi, esp */
  ESI = (ESP);
  /* 1083124e push 0x1085c0e0 */
  push32((uint32_t)(0x1085c0e0u));
  /* 10831253 push 0x10861440 */
  push32((uint32_t)(0x10861440u));
  /* 10831258 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x1083125eu);
  /* 1083125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831263 call 0x10834ad0 */
  push32(0x10831268u); f_10834ad0();
  /* 10831268 mov esi, esp */
  ESI = (ESP);
  /* 1083126a push 0x1085c0dc */
  push32((uint32_t)(0x1085c0dcu));
  /* 1083126f push 0x10861448 */
  push32((uint32_t)(0x10861448u));
  /* 10831274 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x1083127au);
  /* 1083127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083127f call 0x10834ad0 */
  push32(0x10831284u); f_10834ad0();
  /* 10831284 mov esi, esp */
  ESI = (ESP);
  /* 10831286 push 0x1085c0d8 */
  push32((uint32_t)(0x1085c0d8u));
  /* 1083128b push 0x10861450 */
  push32((uint32_t)(0x10861450u));
  /* 10831290 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x10831296u);
  /* 10831296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083129b call 0x10834ad0 */
  push32(0x108312a0u); f_10834ad0();
  /* 108312a0 mov esi, esp */
  ESI = (ESP);
  /* 108312a2 push 0x1085c0d4 */
  push32((uint32_t)(0x1085c0d4u));
  /* 108312a7 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108312ac call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x108312b2u);
  /* 108312b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108312b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108312b7 call 0x10834ad0 */
  push32(0x108312bcu); f_10834ad0();
  /* 108312bc mov esi, esp */
  ESI = (ESP);
  /* 108312be push 0x1085c0d0 */
  push32((uint32_t)(0x1085c0d0u));
  /* 108312c3 push 0x10861460 */
  push32((uint32_t)(0x10861460u));
  /* 108312c8 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x108312ceu);
  /* 108312ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108312d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108312d3 call 0x10834ad0 */
  push32(0x108312d8u); f_10834ad0();
  /* 108312d8 mov esi, esp */
  ESI = (ESP);
  /* 108312da push 0x1085c0cc */
  push32((uint32_t)(0x1085c0ccu));
  /* 108312df push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 108312e4 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x108312eau);
  /* 108312ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108312ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108312ef call 0x10834ad0 */
  push32(0x108312f4u); f_10834ad0();
  /* 108312f4 mov esi, esp */
  ESI = (ESP);
  /* 108312f6 push 0x1085c0c8 */
  push32((uint32_t)(0x1085c0c8u));
  /* 108312fb push 0x10861470 */
  push32((uint32_t)(0x10861470u));
  /* 10831300 call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x10831306u);
  /* 10831306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083130b call 0x10834ad0 */
  push32(0x10831310u); f_10834ad0();
  /* 10831310 mov esi, esp */
  ESI = (ESP);
  /* 10831312 push 0x1085c0c4 */
  push32((uint32_t)(0x1085c0c4u));
  /* 10831317 push 0x10861478 */
  push32((uint32_t)(0x10861478u));
  /* 1083131c call dword ptr [0x108644f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f0))), 0x10831322u);
  /* 10831322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831327 call 0x10834ad0 */
  push32(0x1083132cu); f_10834ad0();
  /* 1083132c mov esi, esp */
  ESI = (ESP);
  /* 1083132e push 0x1085c0a8 */
  push32((uint32_t)(0x1085c0a8u));
  /* 10831333 push 0x10861510 */
  push32((uint32_t)(0x10861510u));
  /* 10831338 call dword ptr [0x108644e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e8))), 0x1083133eu);
  /* 1083133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831343 call 0x10834ad0 */
  push32(0x10831348u); f_10834ad0();
  /* 10831348 mov esi, esp */
  ESI = (ESP);
  /* 1083134a push 0x1085c08c */
  push32((uint32_t)(0x1085c08cu));
  /* 1083134f push 0x10861518 */
  push32((uint32_t)(0x10861518u));
  /* 10831354 call dword ptr [0x108644e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e8))), 0x1083135au);
  /* 1083135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083135f call 0x10834ad0 */
  push32(0x10831364u); f_10834ad0();
  /* 10831364 mov esi, esp */
  ESI = (ESP);
  /* 10831366 push 4 */
  push32((uint32_t)(0x4u));
  /* 10831368 push 0x108614b8 */
  push32((uint32_t)(0x108614b8u));
  /* 1083136d call dword ptr [0x108644f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f8))), 0x10831373u);
  /* 10831373 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831376 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831378 call 0x10834ad0 */
  push32(0x1083137du); f_10834ad0();
  /* 1083137d mov esi, esp */
  ESI = (ESP);
  /* 1083137f push 4 */
  push32((uint32_t)(0x4u));
  /* 10831381 push 0x108613e8 */
  push32((uint32_t)(0x108613e8u));
  /* 10831386 call dword ptr [0x108644f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f8))), 0x1083138cu);
  /* 1083138c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083138f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831391 call 0x10834ad0 */
  push32(0x10831396u); f_10834ad0();
  /* 10831396 mov esi, esp */
  ESI = (ESP);
  /* 10831398 push 0x1085c070 */
  push32((uint32_t)(0x1085c070u));
  /* 1083139d push 0x10861508 */
  push32((uint32_t)(0x10861508u));
  /* 108313a2 call dword ptr [0x108644fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644fc))), 0x108313a8u);
  /* 108313a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108313ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108313ad call 0x10834ad0 */
  push32(0x108313b2u); f_10834ad0();
  /* 108313b2 mov esi, esp */
  ESI = (ESP);
  /* 108313b4 push 0x1085c060 */
  push32((uint32_t)(0x1085c060u));
  /* 108313b9 push 0x108613e0 */
  push32((uint32_t)(0x108613e0u));
  /* 108313be call dword ptr [0x108644fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644fc))), 0x108313c4u);
  /* 108313c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108313c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108313c9 call 0x10834ad0 */
  push32(0x108313ceu); f_10834ad0();
  /* 108313ce mov esi, esp */
  ESI = (ESP);
  /* 108313d0 push 0x1085c04c */
  push32((uint32_t)(0x1085c04cu));
  /* 108313d5 push 0x108614d0 */
  push32((uint32_t)(0x108614d0u));
  /* 108313da call dword ptr [0x108644fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644fc))), 0x108313e0u);
  /* 108313e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108313e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108313e5 call 0x10834ad0 */
  push32(0x108313eau); f_10834ad0();
  /* 108313ea mov esi, esp */
  ESI = (ESP);
  /* 108313ec push 0x1085c038 */
  push32((uint32_t)(0x1085c038u));
  /* 108313f1 push 0x10861520 */
  push32((uint32_t)(0x10861520u));
  /* 108313f6 call dword ptr [0x108644fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644fc))), 0x108313fcu);
  /* 108313fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108313ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831401 call 0x10834ad0 */
  push32(0x10831406u); f_10834ad0();
  /* 10831406 mov esi, esp */
  ESI = (ESP);
  /* 10831408 push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 1083140d call dword ptr [0x108644f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644f4))), 0x10831413u);
  /* 10831413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831416 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831418 call 0x10834ad0 */
  push32(0x1083141du); f_10834ad0();
  /* 1083141d mov esi, esp */
  ESI = (ESP);
  /* 1083141f push 0x1085c02c */
  push32((uint32_t)(0x1085c02cu));
  /* 10831424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831426 call dword ptr [0x10864504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864504))), 0x1083142cu);
  /* 1083142c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083142f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831431 call 0x10834ad0 */
  push32(0x10831436u); f_10834ad0();
  /* 10831436 mov esi, esp */
  ESI = (ESP);
  /* 10831438 push 0x1085c024 */
  push32((uint32_t)(0x1085c024u));
  /* 1083143d push 3 */
  push32((uint32_t)(0x3u));
  /* 1083143f call dword ptr [0x10864504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864504))), 0x10831445u);
  /* 10831445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083144a call 0x10834ad0 */
  push32(0x1083144fu); f_10834ad0();
  /* 1083144f mov esi, esp */
  ESI = (ESP);
  /* 10831451 push 0x1085c01c */
  push32((uint32_t)(0x1085c01cu));
  /* 10831456 push 4 */
  push32((uint32_t)(0x4u));
  /* 10831458 call dword ptr [0x10864504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864504))), 0x1083145eu);
  /* 1083145e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831463 call 0x10834ad0 */
  push32(0x10831468u); f_10834ad0();
  /* 10831468 mov esi, esp */
  ESI = (ESP);
  /* 1083146a push 0x1085c024 */
  push32((uint32_t)(0x1085c024u));
  /* 1083146f push 5 */
  push32((uint32_t)(0x5u));
  /* 10831471 call dword ptr [0x10864504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864504))), 0x10831477u);
  /* 10831477 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083147a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083147c call 0x10834ad0 */
  push32(0x10831481u); f_10834ad0();
  /* 10831481 mov esi, esp */
  ESI = (ESP);
  /* 10831483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831485 push 0x10861508 */
  push32((uint32_t)(0x10861508u));
  /* 1083148a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083148c call dword ptr [0x10864508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864508))), 0x10831492u);
  /* 10831492 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831495 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831497 call 0x10834ad0 */
  push32(0x1083149cu); f_10834ad0();
  /* 1083149c mov esi, esp */
  ESI = (ESP);
  /* 1083149e push 0 */
  push32((uint32_t)(0x0u));
  /* 108314a0 push 0x10861520 */
  push32((uint32_t)(0x10861520u));
  /* 108314a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108314a7 call dword ptr [0x10864508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864508))), 0x108314adu);
  /* 108314ad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108314b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108314b2 call 0x10834ad0 */
  push32(0x108314b7u); f_10834ad0();
  /* 108314b7 mov esi, esp */
  ESI = (ESP);
  /* 108314b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108314bb push 0x108614d0 */
  push32((uint32_t)(0x108614d0u));
  /* 108314c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108314c2 call dword ptr [0x10864508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864508))), 0x108314c8u);
  /* 108314c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108314cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108314cd call 0x10834ad0 */
  push32(0x108314d2u); f_10834ad0();
  /* 108314d2 mov esi, esp */
  ESI = (ESP);
  /* 108314d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108314d6 push 0x108613e0 */
  push32((uint32_t)(0x108613e0u));
  /* 108314db push 5 */
  push32((uint32_t)(0x5u));
  /* 108314dd call dword ptr [0x10864508] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864508))), 0x108314e3u);
  /* 108314e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108314e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108314e8 call 0x10834ad0 */
  push32(0x108314edu); f_10834ad0();
  /* 108314ed mov esi, esp */
  ESI = (ESP);
  /* 108314ef push 0x10861510 */
  push32((uint32_t)(0x10861510u));
  /* 108314f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108314f6 call dword ptr [0x10864500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864500))), 0x108314fcu);
  /* 108314fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108314ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831501 call 0x10834ad0 */
  push32(0x10831506u); f_10834ad0();
  /* 10831506 mov esi, esp */
  ESI = (ESP);
  /* 10831508 push 0x10861518 */
  push32((uint32_t)(0x10861518u));
  /* 1083150d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083150f call dword ptr [0x10864500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864500))), 0x10831515u);
  /* 10831515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083151a call 0x10834ad0 */
  push32(0x1083151fu); f_10834ad0();
  /* 1083151f pop edi */
  EDI = (pop32());
  /* 10831520 pop esi */
  ESI = (pop32());
  /* 10831521 pop ebx */
  EBX = (pop32());
  /* 10831522 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831525 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831527 call 0x10834ad0 */
  push32(0x1083152cu); f_10834ad0();
  /* 1083152c mov esp, ebp */
  ESP = (EBP);
  /* 1083152e pop ebp */
  EBP = (pop32());
  /* 1083152f ret  */
  ESPCHK(0x10831090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001660 @ 0x10831660 (10365 bytes, 2997 insns) [5 switch table(s)] */
void f_10831660(void) {
  FTRACE(0x10831660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10831660 push ebp */
  push32((uint32_t)(EBP));
  /* 10831661 mov ebp, esp */
  EBP = (ESP);
  /* 10831663 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10831666 push ebx */
  push32((uint32_t)(EBX));
  /* 10831667 push esi */
  push32((uint32_t)(ESI));
  /* 10831668 push edi */
  push32((uint32_t)(EDI));
  /* 10831669 lea edi, [ebp - 0x6c] */
  EDI = ((uint32_t)(EBP + -0x6c));
  /* 1083166c mov ecx, 0x1b */
  ECX = (0x1bu);
  /* 10831671 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10831676 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10831678 mov esi, esp */
  ESI = (ESP);
  /* 1083167a push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1083167c call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831682u);
  /* 10831682 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831685 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831687 call 0x10834ad0 */
  push32(0x1083168cu); f_10834ad0();
  /* 1083168c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831693 je 0x10831a71 */
  if (C.zf) goto L_10831a71;
  /* 10831699 mov esi, esp */
  ESI = (ESP);
  /* 1083169b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1083169d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083169f call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108316a5u);
  /* 108316a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108316a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108316aa call 0x10834ad0 */
  push32(0x108316afu); f_10834ad0();
  /* 108316af mov esi, esp */
  ESI = (ESP);
  /* 108316b1 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108316b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108316b5 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108316bbu);
  /* 108316bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108316be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108316c0 call 0x10834ad0 */
  push32(0x108316c5u); f_10834ad0();
  /* 108316c5 mov esi, esp */
  ESI = (ESP);
  /* 108316c7 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108316c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 108316cb call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108316d1u);
  /* 108316d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108316d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108316d6 call 0x10834ad0 */
  push32(0x108316dbu); f_10834ad0();
  /* 108316db mov esi, esp */
  ESI = (ESP);
  /* 108316dd push 0x12 */
  push32((uint32_t)(0x12u));
  /* 108316df push 4 */
  push32((uint32_t)(0x4u));
  /* 108316e1 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108316e7u);
  /* 108316e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108316ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108316ec call 0x10834ad0 */
  push32(0x108316f1u); f_10834ad0();
  /* 108316f1 mov esi, esp */
  ESI = (ESP);
  /* 108316f3 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108316f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108316f7 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108316fdu);
  /* 108316fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831700 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831702 call 0x10834ad0 */
  push32(0x10831707u); f_10834ad0();
  /* 10831707 mov esi, esp */
  ESI = (ESP);
  /* 10831709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083170b push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10831710 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831716u);
  /* 10831716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831719 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083171b call 0x10834ad0 */
  push32(0x10831720u); f_10834ad0();
  /* 10831720 mov dword ptr [0x108613e8], 0xa */
  w32((uint32_t)(0x108613e8), (0xau));
  /* 1083172a mov dword ptr [0x108614b8], 0 */
  w32((uint32_t)(0x108614b8), (0x0u));
  /* 10831734 mov esi, esp */
  ESI = (ESP);
  /* 10831736 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831738 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1083173a call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831740u);
  /* 10831740 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831743 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831745 call 0x10834ad0 */
  push32(0x1083174au); f_10834ad0();
  /* 1083174a mov esi, esp */
  ESI = (ESP);
  /* 1083174c push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10831751 push 3 */
  push32((uint32_t)(0x3u));
  /* 10831753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831755 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083175bu);
  /* 1083175b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083175e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831760 call 0x10834ad0 */
  push32(0x10831765u); f_10834ad0();
  /* 10831765 mov esi, esp */
  ESI = (ESP);
  /* 10831767 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 1083176c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083176e push 0 */
  push32((uint32_t)(0x0u));
  /* 10831770 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831776u);
  /* 10831776 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831779 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083177b call 0x10834ad0 */
  push32(0x10831780u); f_10834ad0();
  /* 10831780 mov esi, esp */
  ESI = (ESP);
  /* 10831782 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10831787 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083178b call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831791u);
  /* 10831791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831796 call 0x10834ad0 */
  push32(0x1083179bu); f_10834ad0();
  /* 1083179b mov esi, esp */
  ESI = (ESP);
  /* 1083179d push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108317a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108317a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108317a6 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x108317acu);
  /* 108317ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108317af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108317b1 call 0x10834ad0 */
  push32(0x108317b6u); f_10834ad0();
  /* 108317b6 mov esi, esp */
  ESI = (ESP);
  /* 108317b8 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108317bd push 5 */
  push32((uint32_t)(0x5u));
  /* 108317bf push 0 */
  push32((uint32_t)(0x0u));
  /* 108317c1 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x108317c7u);
  /* 108317c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108317ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108317cc call 0x10834ad0 */
  push32(0x108317d1u); f_10834ad0();
  /* 108317d1 mov esi, esp */
  ESI = (ESP);
  /* 108317d3 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 108317d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 108317da push 0 */
  push32((uint32_t)(0x0u));
  /* 108317dc call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x108317e2u);
  /* 108317e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108317e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108317e7 call 0x10834ad0 */
  push32(0x108317ecu); f_10834ad0();
  /* 108317ec mov esi, esp */
  ESI = (ESP);
  /* 108317ee push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 108317f3 push 3 */
  push32((uint32_t)(0x3u));
  /* 108317f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108317f7 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x108317fdu);
  /* 108317fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831802 call 0x10834ad0 */
  push32(0x10831807u); f_10834ad0();
  /* 10831807 mov esi, esp */
  ESI = (ESP);
  /* 10831809 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1083180e push 1 */
  push32((uint32_t)(0x1u));
  /* 10831810 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831812 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831818u);
  /* 10831818 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083181b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083181d call 0x10834ad0 */
  push32(0x10831822u); f_10834ad0();
  /* 10831822 mov esi, esp */
  ESI = (ESP);
  /* 10831824 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10831829 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083182b push 5 */
  push32((uint32_t)(0x5u));
  /* 1083182d call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831833u);
  /* 10831833 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831836 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831838 call 0x10834ad0 */
  push32(0x1083183du); f_10834ad0();
  /* 1083183d mov esi, esp */
  ESI = (ESP);
  /* 1083183f push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10831844 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831846 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831848 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083184eu);
  /* 1083184e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831853 call 0x10834ad0 */
  push32(0x10831858u); f_10834ad0();
  /* 10831858 mov esi, esp */
  ESI = (ESP);
  /* 1083185a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1083185f push 5 */
  push32((uint32_t)(0x5u));
  /* 10831861 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831863 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831869u);
  /* 10831869 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083186c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083186e call 0x10834ad0 */
  push32(0x10831873u); f_10834ad0();
  /* 10831873 mov esi, esp */
  ESI = (ESP);
  /* 10831875 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1083187a push 4 */
  push32((uint32_t)(0x4u));
  /* 1083187c push 5 */
  push32((uint32_t)(0x5u));
  /* 1083187e call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831884u);
  /* 10831884 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831887 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831889 call 0x10834ad0 */
  push32(0x1083188eu); f_10834ad0();
  /* 1083188e mov esi, esp */
  ESI = (ESP);
  /* 10831890 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10831895 call dword ptr [0x1086446c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086446c))), 0x1083189bu);
  /* 1083189b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083189e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108318a0 call 0x10834ad0 */
  push32(0x108318a5u); f_10834ad0();
  /* 108318a5 mov esi, esp */
  ESI = (ESP);
  /* 108318a7 push 0x1085c380 */
  push32((uint32_t)(0x1085c380u));
  /* 108318ac call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108318b2u);
  /* 108318b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108318b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108318b7 call 0x10834ad0 */
  push32(0x108318bcu); f_10834ad0();
  /* 108318bc mov esi, esp */
  ESI = (ESP);
  /* 108318be push 0 */
  push32((uint32_t)(0x0u));
  /* 108318c0 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x108318c6u);
  /* 108318c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108318c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108318cb call 0x10834ad0 */
  push32(0x108318d0u); f_10834ad0();
  /* 108318d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108318d2 jne 0x10831991 */
  if (!C.zf) goto L_10831991;
  /* 108318d8 mov esi, esp */
  ESI = (ESP);
  /* 108318da push 0x1085c378 */
  push32((uint32_t)(0x1085c378u));
  /* 108318df call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108318e5u);
  /* 108318e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108318e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108318ea call 0x10834ad0 */
  push32(0x108318efu); f_10834ad0();
  /* 108318ef mov esi, esp */
  ESI = (ESP);
  /* 108318f1 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 108318f6 push 3 */
  push32((uint32_t)(0x3u));
  /* 108318f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108318fa call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831900u);
  /* 10831900 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831905 call 0x10834ad0 */
  push32(0x1083190au); f_10834ad0();
  /* 1083190a mov esi, esp */
  ESI = (ESP);
  /* 1083190c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10831911 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831913 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831915 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083191bu);
  /* 1083191b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083191e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831920 call 0x10834ad0 */
  push32(0x10831925u); f_10834ad0();
  /* 10831925 mov esi, esp */
  ESI = (ESP);
  /* 10831927 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1083192c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083192e push 0 */
  push32((uint32_t)(0x0u));
  /* 10831930 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831936u);
  /* 10831936 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083193b call 0x10834ad0 */
  push32(0x10831940u); f_10834ad0();
  /* 10831940 mov esi, esp */
  ESI = (ESP);
  /* 10831942 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10831947 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831949 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083194b call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831951u);
  /* 10831951 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831954 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831956 call 0x10834ad0 */
  push32(0x1083195bu); f_10834ad0();
  /* 1083195b mov esi, esp */
  ESI = (ESP);
  /* 1083195d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10831962 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831966 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083196cu);
  /* 1083196c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083196f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831971 call 0x10834ad0 */
  push32(0x10831976u); f_10834ad0();
  /* 10831976 mov esi, esp */
  ESI = (ESP);
  /* 10831978 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1083197d push 4 */
  push32((uint32_t)(0x4u));
  /* 1083197f push 0 */
  push32((uint32_t)(0x0u));
  /* 10831981 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10831987u);
  /* 10831987 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083198a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083198c call 0x10834ad0 */
  push32(0x10831991u); f_10834ad0();
L_10831991:;
  /* 10831991 mov esi, esp */
  ESI = (ESP);
  /* 10831993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831995 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 1083199a call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108319a0u);
  /* 108319a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108319a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108319a5 call 0x10834ad0 */
  push32(0x108319aau); f_10834ad0();
  /* 108319aa mov esi, esp */
  ESI = (ESP);
  /* 108319ac push 5 */
  push32((uint32_t)(0x5u));
  /* 108319ae call dword ptr [0x10864478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864478))), 0x108319b4u);
  /* 108319b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108319b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108319b9 call 0x10834ad0 */
  push32(0x108319beu); f_10834ad0();
  /* 108319be mov esi, esp */
  ESI = (ESP);
  /* 108319c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108319c2 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 108319c7 push 0x10861460 */
  push32((uint32_t)(0x10861460u));
  /* 108319cc push 5 */
  push32((uint32_t)(0x5u));
  /* 108319ce call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x108319d4u);
  /* 108319d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108319d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108319d9 call 0x10834ad0 */
  push32(0x108319deu); f_10834ad0();
  /* 108319de mov esi, esp */
  ESI = (ESP);
  /* 108319e0 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 108319e5 call dword ptr [0x10864480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864480))), 0x108319ebu);
  /* 108319eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108319ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108319f0 call 0x10834ad0 */
  push32(0x108319f5u); f_10834ad0();
  /* 108319f5 mov esi, esp */
  ESI = (ESP);
  /* 108319f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108319f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 108319fb push 0x10861470 */
  push32((uint32_t)(0x10861470u));
  /* 10831a00 call dword ptr [0x10864484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864484))), 0x10831a06u);
  /* 10831a06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a0b call 0x10834ad0 */
  push32(0x10831a10u); f_10834ad0();
  /* 10831a10 mov esi, esp */
  ESI = (ESP);
  /* 10831a12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831a14 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x10831a1au);
  /* 10831a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a1f call 0x10834ad0 */
  push32(0x10831a24u); f_10834ad0();
  /* 10831a24 mov esi, esp */
  ESI = (ESP);
  /* 10831a26 push eax */
  push32((uint32_t)(EAX));
  /* 10831a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831a29 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10831a2d push 0x1085c36c */
  push32((uint32_t)(0x1085c36cu));
  /* 10831a32 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831a34 call dword ptr [0x1086447c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086447c))), 0x10831a3au);
  /* 10831a3a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a3f call 0x10834ad0 */
  push32(0x10831a44u); f_10834ad0();
  /* 10831a44 mov esi, esp */
  ESI = (ESP);
  /* 10831a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831a48 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10831a4d call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831a53u);
  /* 10831a53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a58 call 0x10834ad0 */
  push32(0x10831a5du); f_10834ad0();
  /* 10831a5d mov esi, esp */
  ESI = (ESP);
  /* 10831a5f push 5 */
  push32((uint32_t)(0x5u));
  /* 10831a61 call dword ptr [0x10864478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864478))), 0x10831a67u);
  /* 10831a67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a6c call 0x10834ad0 */
  push32(0x10831a71u); f_10834ad0();
L_10831a71:;
  /* 10831a71 mov esi, esp */
  ESI = (ESP);
  /* 10831a73 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10831a75 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831a7bu);
  /* 10831a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831a80 call 0x10834ad0 */
  push32(0x10831a85u); f_10834ad0();
  /* 10831a85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831a8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831a8c je 0x10831b12 */
  if (C.zf) goto L_10831b12;
  /* 10831a92 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10831a97 call 0x10831005 */
  push32(0x10831a9cu); f_10831005();
  /* 10831a9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831a9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831aa1 jne 0x10831b12 */
  if (!C.zf) goto L_10831b12;
  /* 10831aa3 mov esi, esp */
  ESI = (ESP);
  /* 10831aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831aa7 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10831aa9 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831aafu);
  /* 10831aaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831ab2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831ab4 call 0x10834ad0 */
  push32(0x10831ab9u); f_10834ad0();
  /* 10831ab9 mov esi, esp */
  ESI = (ESP);
  /* 10831abb push 3 */
  push32((uint32_t)(0x3u));
  /* 10831abd push 0 */
  push32((uint32_t)(0x0u));
  /* 10831abf call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10831ac5u);
  /* 10831ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831ac8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831aca call 0x10834ad0 */
  push32(0x10831acfu); f_10834ad0();
  /* 10831acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831ad1 jle 0x10831aec */
  if ((C.zf||C.sf!=C.of)) goto L_10831aec;
  /* 10831ad3 mov esi, esp */
  ESI = (ESP);
  /* 10831ad5 push 0x1085c360 */
  push32((uint32_t)(0x1085c360u));
  /* 10831ada call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831ae0u);
  /* 10831ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831ae5 call 0x10834ad0 */
  push32(0x10831aeau); f_10834ad0();
  /* 10831aea jmp 0x10831b03 */
  goto L_10831b03;
L_10831aec:;
  /* 10831aec mov esi, esp */
  ESI = (ESP);
  /* 10831aee push 0x1085c354 */
  push32((uint32_t)(0x1085c354u));
  /* 10831af3 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831af9u);
  /* 10831af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831afe call 0x10834ad0 */
  push32(0x10831b03u); f_10834ad0();
L_10831b03:;
  /* 10831b03 mov esi, esp */
  ESI = (ESP);
  /* 10831b05 call dword ptr [0x10864490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864490))), 0x10831b0bu);
  /* 10831b0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b0d call 0x10834ad0 */
  push32(0x10831b12u); f_10834ad0();
L_10831b12:;
  /* 10831b12 mov esi, esp */
  ESI = (ESP);
  /* 10831b14 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10831b16 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831b1cu);
  /* 10831b1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b21 call 0x10834ad0 */
  push32(0x10831b26u); f_10834ad0();
  /* 10831b26 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831b2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831b2d je 0x10831b88 */
  if (C.zf) goto L_10831b88;
  /* 10831b2f mov esi, esp */
  ESI = (ESP);
  /* 10831b31 push 5 */
  push32((uint32_t)(0x5u));
  /* 10831b33 call dword ptr [0x10864488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864488))), 0x10831b39u);
  /* 10831b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831b3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b3e call 0x10834ad0 */
  push32(0x10831b43u); f_10834ad0();
  /* 10831b43 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831b4a je 0x10831b88 */
  if (C.zf) goto L_10831b88;
  /* 10831b4c mov esi, esp */
  ESI = (ESP);
  /* 10831b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10831b50 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10831b52 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831b58u);
  /* 10831b58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831b5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b5d call 0x10834ad0 */
  push32(0x10831b62u); f_10834ad0();
  /* 10831b62 mov esi, esp */
  ESI = (ESP);
  /* 10831b64 push 0x1085c348 */
  push32((uint32_t)(0x1085c348u));
  /* 10831b69 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831b6fu);
  /* 10831b6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b74 call 0x10834ad0 */
  push32(0x10831b79u); f_10834ad0();
  /* 10831b79 mov esi, esp */
  ESI = (ESP);
  /* 10831b7b call dword ptr [0x10864498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864498))), 0x10831b81u);
  /* 10831b81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b83 call 0x10834ad0 */
  push32(0x10831b88u); f_10834ad0();
L_10831b88:;
  /* 10831b88 mov esi, esp */
  ESI = (ESP);
  /* 10831b8a push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10831b8f call dword ptr [0x1086449c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086449c))), 0x10831b95u);
  /* 10831b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831b98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831b9a call 0x10834ad0 */
  push32(0x10831b9fu); f_10834ad0();
  /* 10831b9f cmp dword ptr [0x108613e8], eax */
  { uint32_t _a=(r32((uint32_t)(0x108613e8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831ba5 jg 0x10831c31 */
  if ((!C.zf&&C.sf==C.of)) goto L_10831c31;
  /* 10831bab mov eax, dword ptr [0x108613e8] */
  EAX = (r32((uint32_t)(0x108613e8)));
  /* 10831bb0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10831bb1 mov ecx, 5 */
  ECX = (0x5u);
  /* 10831bb6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10831bb8 mov edx, dword ptr [0x108613e8] */
  EDX = (r32((uint32_t)(0x108613e8)));
  /* 10831bbe lea eax, [edx + eax + 0xa] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0xa));
  /* 10831bc2 mov dword ptr [0x108613e8], eax */
  w32((uint32_t)(0x108613e8), (EAX));
  /* 10831bc7 mov esi, esp */
  ESI = (ESP);
  /* 10831bc9 push 0x1085c340 */
  push32((uint32_t)(0x1085c340u));
  /* 10831bce call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831bd4u);
  /* 10831bd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831bd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831bd9 call 0x10834ad0 */
  push32(0x10831bdeu); f_10834ad0();
  /* 10831bde mov esi, esp */
  ESI = (ESP);
  /* 10831be0 push 0x108614d8 */
  push32((uint32_t)(0x108614d8u));
  /* 10831be5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831be7 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10831bec call dword ptr [0x10864494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864494))), 0x10831bf2u);
  /* 10831bf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831bf7 call 0x10834ad0 */
  push32(0x10831bfcu); f_10834ad0();
  /* 10831bfc mov cl, byte ptr [0x108614e0] */
  CL = (r8((uint32_t)(0x108614e0)));
  /* 10831c02 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10831c05 mov byte ptr [0x108614e0], cl */
  w8((uint32_t)(0x108614e0), (CL));
  /* 10831c0b mov dl, byte ptr [0x108614e1] */
  DL = (r8((uint32_t)(0x108614e1)));
  /* 10831c11 add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 10831c14 mov byte ptr [0x108614e1], dl */
  w8((uint32_t)(0x108614e1), (DL));
  /* 10831c1a mov esi, esp */
  ESI = (ESP);
  /* 10831c1c push 0x108614d8 */
  push32((uint32_t)(0x108614d8u));
  /* 10831c21 call dword ptr [0x108644a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a4))), 0x10831c27u);
  /* 10831c27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831c2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831c2c call 0x10834ad0 */
  push32(0x10831c31u); f_10834ad0();
L_10831c31:;
  /* 10831c31 mov esi, esp */
  ESI = (ESP);
  /* 10831c33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831c35 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831c3bu);
  /* 10831c3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831c40 call 0x10834ad0 */
  push32(0x10831c45u); f_10834ad0();
  /* 10831c45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831c4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831c4c je 0x10831ce3 */
  if (C.zf) goto L_10831ce3;
  /* 10831c52 mov esi, esp */
  ESI = (ESP);
  /* 10831c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831c56 push 0x10861440 */
  push32((uint32_t)(0x10861440u));
  /* 10831c5b call dword ptr [0x108644a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a8))), 0x10831c61u);
  /* 10831c61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831c64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831c66 call 0x10834ad0 */
  push32(0x10831c6bu); f_10834ad0();
  /* 10831c6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831c6d jle 0x10831ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_10831ce3;
  /* 10831c6f push 0x108613f8 */
  push32((uint32_t)(0x108613f8u));
  /* 10831c74 call 0x10831005 */
  push32(0x10831c79u); f_10831005();
  /* 10831c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831c7e jle 0x10831ce3 */
  if ((C.zf||C.sf!=C.of)) goto L_10831ce3;
  /* 10831c80 mov esi, esp */
  ESI = (ESP);
  /* 10831c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831c84 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831c86 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831c8cu);
  /* 10831c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831c8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831c91 call 0x10834ad0 */
  push32(0x10831c96u); f_10834ad0();
  /* 10831c96 mov esi, esp */
  ESI = (ESP);
  /* 10831c98 push 0x1085c338 */
  push32((uint32_t)(0x1085c338u));
  /* 10831c9d call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831ca3u);
  /* 10831ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831ca8 call 0x10834ad0 */
  push32(0x10831cadu); f_10834ad0();
  /* 10831cad mov esi, esp */
  ESI = (ESP);
  /* 10831caf push 0 */
  push32((uint32_t)(0x0u));
  /* 10831cb1 push 0x108613f8 */
  push32((uint32_t)(0x108613f8u));
  /* 10831cb6 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831cbcu);
  /* 10831cbc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831cbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831cc1 call 0x10834ad0 */
  push32(0x10831cc6u); f_10834ad0();
  /* 10831cc6 mov esi, esp */
  ESI = (ESP);
  /* 10831cc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831cca push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10831ccc push 0x10861450 */
  push32((uint32_t)(0x10861450u));
  /* 10831cd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831cd3 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10831cd9u);
  /* 10831cd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831cde call 0x10834ad0 */
  push32(0x10831ce3u); f_10834ad0();
L_10831ce3:;
  /* 10831ce3 mov esi, esp */
  ESI = (ESP);
  /* 10831ce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831ce7 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831cedu);
  /* 10831ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831cf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831cf2 call 0x10834ad0 */
  push32(0x10831cf7u); f_10834ad0();
  /* 10831cf7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831cfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831cfe je 0x1083228f */
  if (C.zf) goto L_1083228f;
  /* 10831d04 mov esi, esp */
  ESI = (ESP);
  /* 10831d06 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10831d0b push 0x10861450 */
  push32((uint32_t)(0x10861450u));
  /* 10831d10 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10831d16u);
  /* 10831d16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831d19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d1b call 0x10834ad0 */
  push32(0x10831d20u); f_10834ad0();
  /* 10831d20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831d22 jle 0x1083228f */
  if ((C.zf||C.sf!=C.of)) goto L_1083228f;
  /* 10831d28 mov esi, esp */
  ESI = (ESP);
  /* 10831d2a push 0x108613f8 */
  push32((uint32_t)(0x108613f8u));
  /* 10831d2f push 0x10861450 */
  push32((uint32_t)(0x10861450u));
  /* 10831d34 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10831d3au);
  /* 10831d3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d3f call 0x10834ad0 */
  push32(0x10831d44u); f_10834ad0();
  /* 10831d44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831d46 jle 0x1083228f */
  if ((C.zf||C.sf!=C.of)) goto L_1083228f;
  /* 10831d4c mov esi, esp */
  ESI = (ESP);
  /* 10831d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10831d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831d52 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831d58u);
  /* 10831d58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d5d call 0x10834ad0 */
  push32(0x10831d62u); f_10834ad0();
  /* 10831d62 mov esi, esp */
  ESI = (ESP);
  /* 10831d64 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10831d66 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10831d6cu);
  /* 10831d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d71 call 0x10834ad0 */
  push32(0x10831d76u); f_10834ad0();
  /* 10831d76 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10831d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10831d7d je 0x10831fd1 */
  if (C.zf) goto L_10831fd1;
  /* 10831d83 mov esi, esp */
  ESI = (ESP);
  /* 10831d85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831d89 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10831d8fu);
  /* 10831d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831d92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d94 call 0x10834ad0 */
  push32(0x10831d99u); f_10834ad0();
  /* 10831d99 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831d9e jge 0x10831e71 */
  if ((C.sf==C.of)) goto L_10831e71;
  /* 10831da4 mov esi, esp */
  ESI = (ESP);
  /* 10831da6 push 0x1085c324 */
  push32((uint32_t)(0x1085c324u));
  /* 10831dab push 0 */
  push32((uint32_t)(0x0u));
  /* 10831dad push 0x1085c31c */
  push32((uint32_t)(0x1085c31cu));
  /* 10831db2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10831db4 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10831dbau);
  /* 10831dba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831dbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831dbf call 0x10834ad0 */
  push32(0x10831dc4u); f_10834ad0();
  /* 10831dc4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10831dc7 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831dcb je 0x10831dde */
  if (C.zf) goto L_10831dde;
  /* 10831dcd cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831dd1 je 0x10831df7 */
  if (C.zf) goto L_10831df7;
  /* 10831dd3 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831dd7 je 0x10831e3f */
  if (C.zf) goto L_10831e3f;
  /* 10831dd9 jmp 0x10831e6c */
  goto L_10831e6c;
L_10831dde:;
  /* 10831dde mov esi, esp */
  ESI = (ESP);
  /* 10831de0 push 0x1085c310 */
  push32((uint32_t)(0x1085c310u));
  /* 10831de5 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831debu);
  /* 10831deb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831dee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831df0 call 0x10834ad0 */
  push32(0x10831df5u); f_10834ad0();
  /* 10831df5 jmp 0x10831e6c */
  goto L_10831e6c;
L_10831df7:;
  /* 10831df7 mov esi, esp */
  ESI = (ESP);
  /* 10831df9 push 0x1085c304 */
  push32((uint32_t)(0x1085c304u));
  /* 10831dfe call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831e04u);
  /* 10831e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e09 call 0x10834ad0 */
  push32(0x10831e0eu); f_10834ad0();
  /* 10831e0e mov esi, esp */
  ESI = (ESP);
  /* 10831e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831e12 push 0x10861410 */
  push32((uint32_t)(0x10861410u));
  /* 10831e17 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831e1du);
  /* 10831e1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e22 call 0x10834ad0 */
  push32(0x10831e27u); f_10834ad0();
  /* 10831e27 mov esi, esp */
  ESI = (ESP);
  /* 10831e29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831e2b push 1 */
  push32((uint32_t)(0x1u));
  /* 10831e2d call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10831e33u);
  /* 10831e33 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e38 call 0x10834ad0 */
  push32(0x10831e3du); f_10834ad0();
  /* 10831e3d jmp 0x10831e6c */
  goto L_10831e6c;
L_10831e3f:;
  /* 10831e3f mov esi, esp */
  ESI = (ESP);
  /* 10831e41 push 0x1085c2f8 */
  push32((uint32_t)(0x1085c2f8u));
  /* 10831e46 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831e4cu);
  /* 10831e4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e51 call 0x10834ad0 */
  push32(0x10831e56u); f_10834ad0();
  /* 10831e56 mov esi, esp */
  ESI = (ESP);
  /* 10831e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831e5a push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10831e5c call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831e62u);
  /* 10831e62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e67 call 0x10834ad0 */
  push32(0x10831e6cu); f_10834ad0();
L_10831e6c:;
  /* 10831e6c jmp 0x10831fcc */
  goto L_10831fcc;
L_10831e71:;
  /* 10831e71 mov esi, esp */
  ESI = (ESP);
  /* 10831e73 push 0x1085c2e0 */
  push32((uint32_t)(0x1085c2e0u));
  /* 10831e78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831e7a push 0x1085c31c */
  push32((uint32_t)(0x1085c31cu));
  /* 10831e7f push 9 */
  push32((uint32_t)(0x9u));
  /* 10831e81 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10831e87u);
  /* 10831e87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e8c call 0x10834ad0 */
  push32(0x10831e91u); f_10834ad0();
  /* 10831e91 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10831e94 cmp dword ptr [ebp - 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831e98 ja 0x10831fcc */
  if ((!C.cf&&!C.zf)) goto L_10831fcc;
  /* 10831e9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10831ea1 jmp dword ptr [eax*4 + 0x10833edd] */
  switch (EAX) {
    case 0: goto L_10831ea8;
    case 1: goto L_10831ec4;
    case 2: goto L_10831f0f;
    case 3: goto L_10831f9f;
    case 4: goto L_10832129;
    case 5: goto L_1083215b;
    case 6: goto L_108321bc;
    case 7: goto L_10832262;
    case 8: goto L_10832cfd;
    case 9: goto L_10832d82;
    case 10: goto L_10832e00;
    case 11: goto L_10832f5f;
    case 12: goto L_10833124;
    case 13: goto L_108331a9;
    case 14: goto L_10833227;
    case 15: goto L_108334df;
    case 16: goto L_10833c85;
    case 17: goto L_10833cb7;
    case 18: goto L_10833d30;
    case 19: goto L_10833d49;
    default: x86_unimpl("switch@0x10831ea1 out of table"); return;
  }
L_10831ea8:;
  /* 10831ea8 mov esi, esp */
  ESI = (ESP);
  /* 10831eaa push 0x1085c310 */
  push32((uint32_t)(0x1085c310u));
  /* 10831eaf call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831eb5u);
  /* 10831eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831eb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831eba call 0x10834ad0 */
  push32(0x10831ebfu); f_10834ad0();
  /* 10831ebf jmp 0x10831fcc */
  goto L_10831fcc;
L_10831ec4:;
  /* 10831ec4 mov esi, esp */
  ESI = (ESP);
  /* 10831ec6 push 0x1085c304 */
  push32((uint32_t)(0x1085c304u));
  /* 10831ecb call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831ed1u);
  /* 10831ed1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831ed4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831ed6 call 0x10834ad0 */
  push32(0x10831edbu); f_10834ad0();
  /* 10831edb mov esi, esp */
  ESI = (ESP);
  /* 10831edd push 0 */
  push32((uint32_t)(0x0u));
  /* 10831edf push 0x10861410 */
  push32((uint32_t)(0x10861410u));
  /* 10831ee4 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831eeau);
  /* 10831eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831eef call 0x10834ad0 */
  push32(0x10831ef4u); f_10834ad0();
  /* 10831ef4 mov esi, esp */
  ESI = (ESP);
  /* 10831ef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10831ef8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831efa call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10831f00u);
  /* 10831f00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f05 call 0x10834ad0 */
  push32(0x10831f0au); f_10834ad0();
  /* 10831f0a jmp 0x10831fcc */
  goto L_10831fcc;
L_10831f0f:;
  /* 10831f0f mov esi, esp */
  ESI = (ESP);
  /* 10831f11 push 0x1085c2d4 */
  push32((uint32_t)(0x1085c2d4u));
  /* 10831f16 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831f1cu);
  /* 10831f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f21 call 0x10834ad0 */
  push32(0x10831f26u); f_10834ad0();
  /* 10831f26 mov esi, esp */
  ESI = (ESP);
  /* 10831f28 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 10831f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 10831f2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10831f31 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10831f37u);
  /* 10831f37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f3a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f3c call 0x10834ad0 */
  push32(0x10831f41u); f_10834ad0();
  /* 10831f41 mov esi, esp */
  ESI = (ESP);
  /* 10831f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831f45 push 0x10861480 */
  push32((uint32_t)(0x10861480u));
  /* 10831f4a call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831f50u);
  /* 10831f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f55 call 0x10834ad0 */
  push32(0x10831f5au); f_10834ad0();
  /* 10831f5a mov esi, esp */
  ESI = (ESP);
  /* 10831f5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10831f5e call dword ptr [0x108644c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c0))), 0x10831f64u);
  /* 10831f64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f69 call 0x10834ad0 */
  push32(0x10831f6eu); f_10834ad0();
  /* 10831f6e mov esi, esp */
  ESI = (ESP);
  /* 10831f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831f72 push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10831f77 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10831f7du);
  /* 10831f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f82 call 0x10834ad0 */
  push32(0x10831f87u); f_10834ad0();
  /* 10831f87 mov esi, esp */
  ESI = (ESP);
  /* 10831f89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831f8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10831f8d call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10831f93u);
  /* 10831f93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831f96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831f98 call 0x10834ad0 */
  push32(0x10831f9du); f_10834ad0();
  /* 10831f9d jmp 0x10831fcc */
  goto L_10831fcc;
L_10831f9f:;
  /* 10831f9f mov esi, esp */
  ESI = (ESP);
  /* 10831fa1 push 0x1085c2f8 */
  push32((uint32_t)(0x1085c2f8u));
  /* 10831fa6 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10831facu);
  /* 10831fac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831faf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831fb1 call 0x10834ad0 */
  push32(0x10831fb6u); f_10834ad0();
  /* 10831fb6 mov esi, esp */
  ESI = (ESP);
  /* 10831fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831fba push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10831fbc call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10831fc2u);
  /* 10831fc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831fc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831fc7 call 0x10834ad0 */
  push32(0x10831fccu); f_10834ad0();
L_10831fcc:;
  /* 10831fcc jmp 0x1083228f */
  goto L_1083228f;
L_10831fd1:;
  /* 10831fd1 mov esi, esp */
  ESI = (ESP);
  /* 10831fd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10831fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831fd7 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10831fddu);
  /* 10831fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10831fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831fe2 call 0x10834ad0 */
  push32(0x10831fe7u); f_10834ad0();
  /* 10831fe7 cmp eax, 0xbb8 */
  { uint32_t _a=(EAX),_b=(0xbb8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10831fec jge 0x108320f2 */
  if ((C.sf==C.of)) goto L_108320f2;
  /* 10831ff2 mov esi, esp */
  ESI = (ESP);
  /* 10831ff4 push 0x1085c324 */
  push32((uint32_t)(0x1085c324u));
  /* 10831ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10831ffb push 0x1085c2c8 */
  push32((uint32_t)(0x1085c2c8u));
  /* 10832000 push 9 */
  push32((uint32_t)(0x9u));
  /* 10832002 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10832008u);
  /* 10832008 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083200b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083200d call 0x10834ad0 */
  push32(0x10832012u); f_10834ad0();
  /* 10832012 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10832015 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832019 je 0x10832030 */
  if (C.zf) goto L_10832030;
  /* 1083201b cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083201f je 0x10832062 */
  if (C.zf) goto L_10832062;
  /* 10832021 cmp dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832025 je 0x108320c0 */
  if (C.zf) goto L_108320c0;
  /* 1083202b jmp 0x108320ed */
  goto L_108320ed;
L_10832030:;
  /* 10832030 mov esi, esp */
  ESI = (ESP);
  /* 10832032 push 0x1085c310 */
  push32((uint32_t)(0x1085c310u));
  /* 10832037 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x1083203du);
  /* 1083203d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832040 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832042 call 0x10834ad0 */
  push32(0x10832047u); f_10834ad0();
  /* 10832047 mov esi, esp */
  ESI = (ESP);
  /* 10832049 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083204b push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1083204d call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832053u);
  /* 10832053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832056 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832058 call 0x10834ad0 */
  push32(0x1083205du); f_10834ad0();
  /* 1083205d jmp 0x108320ed */
  goto L_108320ed;
L_10832062:;
  /* 10832062 mov esi, esp */
  ESI = (ESP);
  /* 10832064 push 0x1085c304 */
  push32((uint32_t)(0x1085c304u));
  /* 10832069 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x1083206fu);
  /* 1083206f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832072 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832074 call 0x10834ad0 */
  push32(0x10832079u); f_10834ad0();
  /* 10832079 mov esi, esp */
  ESI = (ESP);
  /* 1083207b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083207d push 0x10861410 */
  push32((uint32_t)(0x10861410u));
  /* 10832082 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832088u);
  /* 10832088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083208b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083208d call 0x10834ad0 */
  push32(0x10832092u); f_10834ad0();
  /* 10832092 mov esi, esp */
  ESI = (ESP);
  /* 10832094 push 2 */
  push32((uint32_t)(0x2u));
  /* 10832096 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832098 call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x1083209eu);
  /* 1083209e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108320a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108320a3 call 0x10834ad0 */
  push32(0x108320a8u); f_10834ad0();
  /* 108320a8 mov esi, esp */
  ESI = (ESP);
  /* 108320aa push 1 */
  push32((uint32_t)(0x1u));
  /* 108320ac push 0x21 */
  push32((uint32_t)(0x21u));
  /* 108320ae call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108320b4u);
  /* 108320b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108320b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108320b9 call 0x10834ad0 */
  push32(0x108320beu); f_10834ad0();
  /* 108320be jmp 0x108320ed */
  goto L_108320ed;
L_108320c0:;
  /* 108320c0 mov esi, esp */
  ESI = (ESP);
  /* 108320c2 push 0x1085c2f8 */
  push32((uint32_t)(0x1085c2f8u));
  /* 108320c7 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108320cdu);
  /* 108320cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108320d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108320d2 call 0x10834ad0 */
  push32(0x108320d7u); f_10834ad0();
  /* 108320d7 mov esi, esp */
  ESI = (ESP);
  /* 108320d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108320db push 0x21 */
  push32((uint32_t)(0x21u));
  /* 108320dd call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108320e3u);
  /* 108320e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108320e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108320e8 call 0x10834ad0 */
  push32(0x108320edu); f_10834ad0();
L_108320ed:;
  /* 108320ed jmp 0x1083228f */
  goto L_1083228f;
L_108320f2:;
  /* 108320f2 mov esi, esp */
  ESI = (ESP);
  /* 108320f4 push 0x1085c2e0 */
  push32((uint32_t)(0x1085c2e0u));
  /* 108320f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108320fb push 0x1085c2c8 */
  push32((uint32_t)(0x1085c2c8u));
  /* 10832100 push 9 */
  push32((uint32_t)(0x9u));
  /* 10832102 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10832108u);
  /* 10832108 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083210b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083210d call 0x10834ad0 */
  push32(0x10832112u); f_10834ad0();
  /* 10832112 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10832115 cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832119 ja 0x1083228f */
  if ((!C.cf&&!C.zf)) goto L_1083228f;
  /* 1083211f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10832122 jmp dword ptr [ecx*4 + 0x10833eed] */
  switch (ECX) {
    case 0: goto L_10832129;
    case 1: goto L_1083215b;
    case 2: goto L_108321bc;
    case 3: goto L_10832262;
    case 4: goto L_10832cfd;
    case 5: goto L_10832d82;
    case 6: goto L_10832e00;
    case 7: goto L_10832f5f;
    case 8: goto L_10833124;
    case 9: goto L_108331a9;
    case 10: goto L_10833227;
    case 11: goto L_108334df;
    case 12: goto L_10833c85;
    case 13: goto L_10833cb7;
    case 14: goto L_10833d30;
    case 15: goto L_10833d49;
    default: x86_unimpl("switch@0x10832122 out of table"); return;
  }
L_10832129:;
  /* 10832129 mov esi, esp */
  ESI = (ESP);
  /* 1083212b push 0x1085c310 */
  push32((uint32_t)(0x1085c310u));
  /* 10832130 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832136u);
  /* 10832136 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832139 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083213b call 0x10834ad0 */
  push32(0x10832140u); f_10834ad0();
  /* 10832140 mov esi, esp */
  ESI = (ESP);
  /* 10832142 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832144 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10832146 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083214cu);
  /* 1083214c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083214f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832151 call 0x10834ad0 */
  push32(0x10832156u); f_10834ad0();
  /* 10832156 jmp 0x1083228f */
  goto L_1083228f;
L_1083215b:;
  /* 1083215b mov esi, esp */
  ESI = (ESP);
  /* 1083215d push 0x1085c304 */
  push32((uint32_t)(0x1085c304u));
  /* 10832162 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832168u);
  /* 10832168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083216b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083216d call 0x10834ad0 */
  push32(0x10832172u); f_10834ad0();
  /* 10832172 mov esi, esp */
  ESI = (ESP);
  /* 10832174 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832176 push 0x10861410 */
  push32((uint32_t)(0x10861410u));
  /* 1083217b call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832181u);
  /* 10832181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832184 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832186 call 0x10834ad0 */
  push32(0x1083218bu); f_10834ad0();
  /* 1083218b mov esi, esp */
  ESI = (ESP);
  /* 1083218d push 2 */
  push32((uint32_t)(0x2u));
  /* 1083218f push 1 */
  push32((uint32_t)(0x1u));
  /* 10832191 call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10832197u);
  /* 10832197 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083219a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083219c call 0x10834ad0 */
  push32(0x108321a1u); f_10834ad0();
  /* 108321a1 mov esi, esp */
  ESI = (ESP);
  /* 108321a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108321a5 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 108321a7 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108321adu);
  /* 108321ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108321b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108321b2 call 0x10834ad0 */
  push32(0x108321b7u); f_10834ad0();
  /* 108321b7 jmp 0x1083228f */
  goto L_1083228f;
L_108321bc:;
  /* 108321bc mov esi, esp */
  ESI = (ESP);
  /* 108321be push 0x1085c2d4 */
  push32((uint32_t)(0x1085c2d4u));
  /* 108321c3 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108321c9u);
  /* 108321c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108321cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108321ce call 0x10834ad0 */
  push32(0x108321d3u); f_10834ad0();
  /* 108321d3 mov esi, esp */
  ESI = (ESP);
  /* 108321d5 push 0xfffff448 */
  push32((uint32_t)(0xfffff448u));
  /* 108321da push 1 */
  push32((uint32_t)(0x1u));
  /* 108321dc push 0 */
  push32((uint32_t)(0x0u));
  /* 108321de call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x108321e4u);
  /* 108321e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108321e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108321e9 call 0x10834ad0 */
  push32(0x108321eeu); f_10834ad0();
  /* 108321ee mov esi, esp */
  ESI = (ESP);
  /* 108321f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108321f2 push 0x10861480 */
  push32((uint32_t)(0x10861480u));
  /* 108321f7 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108321fdu);
  /* 108321fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832200 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832202 call 0x10834ad0 */
  push32(0x10832207u); f_10834ad0();
  /* 10832207 mov esi, esp */
  ESI = (ESP);
  /* 10832209 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083220b call dword ptr [0x108644c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c0))), 0x10832211u);
  /* 10832211 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832216 call 0x10834ad0 */
  push32(0x1083221bu); f_10834ad0();
  /* 1083221b mov esi, esp */
  ESI = (ESP);
  /* 1083221d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083221f push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10832224 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x1083222au);
  /* 1083222a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083222d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083222f call 0x10834ad0 */
  push32(0x10832234u); f_10834ad0();
  /* 10832234 mov esi, esp */
  ESI = (ESP);
  /* 10832236 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832238 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083223a call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10832240u);
  /* 10832240 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832243 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832245 call 0x10834ad0 */
  push32(0x1083224au); f_10834ad0();
  /* 1083224a mov esi, esp */
  ESI = (ESP);
  /* 1083224c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083224e push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10832250 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832256u);
  /* 10832256 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832259 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083225b call 0x10834ad0 */
  push32(0x10832260u); f_10834ad0();
  /* 10832260 jmp 0x1083228f */
  goto L_1083228f;
L_10832262:;
  /* 10832262 mov esi, esp */
  ESI = (ESP);
  /* 10832264 push 0x1085c2f8 */
  push32((uint32_t)(0x1085c2f8u));
  /* 10832269 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x1083226fu);
  /* 1083226f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832272 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832274 call 0x10834ad0 */
  push32(0x10832279u); f_10834ad0();
  /* 10832279 mov esi, esp */
  ESI = (ESP);
  /* 1083227b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083227d push 0x21 */
  push32((uint32_t)(0x21u));
  /* 1083227f call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832285u);
  /* 10832285 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832288 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083228a call 0x10834ad0 */
  push32(0x1083228fu); f_10834ad0();
L_1083228f:;
  /* 1083228f mov esi, esp */
  ESI = (ESP);
  /* 10832291 push 0x21 */
  push32((uint32_t)(0x21u));
  /* 10832293 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10832299u);
  /* 10832299 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083229c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083229e call 0x10834ad0 */
  push32(0x108322a3u); f_10834ad0();
  /* 108322a3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108322a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108322aa jne 0x108322ff */
  if (!C.zf) goto L_108322ff;
  /* 108322ac mov esi, esp */
  ESI = (ESP);
  /* 108322ae push 2 */
  push32((uint32_t)(0x2u));
  /* 108322b0 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x108322b6u);
  /* 108322b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108322b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108322bb call 0x10834ad0 */
  push32(0x108322c0u); f_10834ad0();
  /* 108322c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108322c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108322c7 jne 0x108322ff */
  if (!C.zf) goto L_108322ff;
  /* 108322c9 mov esi, esp */
  ESI = (ESP);
  /* 108322cb push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 108322d0 push 0x10861450 */
  push32((uint32_t)(0x10861450u));
  /* 108322d5 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x108322dbu);
  /* 108322db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108322de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108322e0 call 0x10834ad0 */
  push32(0x108322e5u); f_10834ad0();
  /* 108322e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108322e7 jne 0x108322ff */
  if (!C.zf) goto L_108322ff;
  /* 108322e9 mov esi, esp */
  ESI = (ESP);
  /* 108322eb push 1 */
  push32((uint32_t)(0x1u));
  /* 108322ed push 2 */
  push32((uint32_t)(0x2u));
  /* 108322ef call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108322f5u);
  /* 108322f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108322f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108322fa call 0x10834ad0 */
  push32(0x108322ffu); f_10834ad0();
L_108322ff:;
  /* 108322ff mov esi, esp */
  ESI = (ESP);
  /* 10832301 push 3 */
  push32((uint32_t)(0x3u));
  /* 10832303 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10832309u);
  /* 10832309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083230c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083230e call 0x10834ad0 */
  push32(0x10832313u); f_10834ad0();
  /* 10832313 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832318 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083231a je 0x108323b0 */
  if (C.zf) goto L_108323b0;
  /* 10832320 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 10832325 call 0x10831005 */
  push32(0x1083232au); f_10831005();
  /* 1083232a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083232d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083232f jle 0x108323b0 */
  if ((C.zf||C.sf!=C.of)) goto L_108323b0;
  /* 10832331 mov esi, esp */
  ESI = (ESP);
  /* 10832333 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832338 push 0x10861460 */
  push32((uint32_t)(0x10861460u));
  /* 1083233d call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10832343u);
  /* 10832343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832346 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832348 call 0x10834ad0 */
  push32(0x1083234du); f_10834ad0();
  /* 1083234d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083234f jle 0x108323b0 */
  if ((C.zf||C.sf!=C.of)) goto L_108323b0;
  /* 10832351 mov esi, esp */
  ESI = (ESP);
  /* 10832353 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832355 push 3 */
  push32((uint32_t)(0x3u));
  /* 10832357 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083235du);
  /* 1083235d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832360 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832362 call 0x10834ad0 */
  push32(0x10832367u); f_10834ad0();
  /* 10832367 mov esi, esp */
  ESI = (ESP);
  /* 10832369 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083236b push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832370 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832376u);
  /* 10832376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083237b call 0x10834ad0 */
  push32(0x10832380u); f_10834ad0();
  /* 10832380 mov esi, esp */
  ESI = (ESP);
  /* 10832382 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 10832387 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832389 call dword ptr [0x108644b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b8))), 0x1083238fu);
  /* 1083238f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832394 call 0x10834ad0 */
  push32(0x10832399u); f_10834ad0();
  /* 10832399 mov esi, esp */
  ESI = (ESP);
  /* 1083239b push 0x1085c2c0 */
  push32((uint32_t)(0x1085c2c0u));
  /* 108323a0 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108323a6u);
  /* 108323a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108323a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108323ab call 0x10834ad0 */
  push32(0x108323b0u); f_10834ad0();
L_108323b0:;
  /* 108323b0 mov esi, esp */
  ESI = (ESP);
  /* 108323b2 push 3 */
  push32((uint32_t)(0x3u));
  /* 108323b4 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x108323bau);
  /* 108323ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108323bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108323bf call 0x10834ad0 */
  push32(0x108323c4u); f_10834ad0();
  /* 108323c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108323c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108323cb jne 0x10832410 */
  if (!C.zf) goto L_10832410;
  /* 108323cd push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 108323d2 call 0x10831005 */
  push32(0x108323d7u); f_10831005();
  /* 108323d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108323da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108323dc jle 0x10832410 */
  if ((C.zf||C.sf!=C.of)) goto L_10832410;
  /* 108323de mov esi, esp */
  ESI = (ESP);
  /* 108323e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108323e2 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108323e7 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108323edu);
  /* 108323ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108323f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108323f2 call 0x10834ad0 */
  push32(0x108323f7u); f_10834ad0();
  /* 108323f7 mov esi, esp */
  ESI = (ESP);
  /* 108323f9 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 108323fe push 5 */
  push32((uint32_t)(0x5u));
  /* 10832400 call dword ptr [0x108644b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b8))), 0x10832406u);
  /* 10832406 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832409 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083240b call 0x10834ad0 */
  push32(0x10832410u); f_10834ad0();
L_10832410:;
  /* 10832410 mov esi, esp */
  ESI = (ESP);
  /* 10832412 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832414 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 10832419 call dword ptr [0x108644c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c8))), 0x1083241fu);
  /* 1083241f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832424 call 0x10834ad0 */
  push32(0x10832429u); f_10834ad0();
  /* 10832429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083242b jle 0x10832470 */
  if ((C.zf||C.sf!=C.of)) goto L_10832470;
  /* 1083242d mov esi, esp */
  ESI = (ESP);
  /* 1083242f push 5 */
  push32((uint32_t)(0x5u));
  /* 10832431 call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10832437u);
  /* 10832437 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083243a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083243c call 0x10834ad0 */
  push32(0x10832441u); f_10834ad0();
  /* 10832441 mov esi, esp */
  ESI = (ESP);
  /* 10832443 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832445 push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 1083244a push 5 */
  push32((uint32_t)(0x5u));
  /* 1083244c call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x10832452u);
  /* 10832452 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832455 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832457 call 0x10834ad0 */
  push32(0x1083245cu); f_10834ad0();
  /* 1083245c mov esi, esp */
  ESI = (ESP);
  /* 1083245e push 5 */
  push32((uint32_t)(0x5u));
  /* 10832460 call dword ptr [0x108644d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d4))), 0x10832466u);
  /* 10832466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832469 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083246b call 0x10834ad0 */
  push32(0x10832470u); f_10834ad0();
L_10832470:;
  /* 10832470 mov esi, esp */
  ESI = (ESP);
  /* 10832472 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832474 push 0x10861490 */
  push32((uint32_t)(0x10861490u));
  /* 10832479 call dword ptr [0x108644c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c8))), 0x1083247fu);
  /* 1083247f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832482 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832484 call 0x10834ad0 */
  push32(0x10832489u); f_10834ad0();
  /* 10832489 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083248b jle 0x108324d0 */
  if ((C.zf||C.sf!=C.of)) goto L_108324d0;
  /* 1083248d mov esi, esp */
  ESI = (ESP);
  /* 1083248f push 5 */
  push32((uint32_t)(0x5u));
  /* 10832491 call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10832497u);
  /* 10832497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083249a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083249c call 0x10834ad0 */
  push32(0x108324a1u); f_10834ad0();
  /* 108324a1 mov esi, esp */
  ESI = (ESP);
  /* 108324a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108324a5 push 0x10861490 */
  push32((uint32_t)(0x10861490u));
  /* 108324aa push 5 */
  push32((uint32_t)(0x5u));
  /* 108324ac call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x108324b2u);
  /* 108324b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108324b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108324b7 call 0x10834ad0 */
  push32(0x108324bcu); f_10834ad0();
  /* 108324bc mov esi, esp */
  ESI = (ESP);
  /* 108324be push 5 */
  push32((uint32_t)(0x5u));
  /* 108324c0 call dword ptr [0x108644d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d4))), 0x108324c6u);
  /* 108324c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108324c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108324cb call 0x10834ad0 */
  push32(0x108324d0u); f_10834ad0();
L_108324d0:;
  /* 108324d0 mov esi, esp */
  ESI = (ESP);
  /* 108324d2 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 108324d4 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x108324dau);
  /* 108324da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108324dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108324df call 0x10834ad0 */
  push32(0x108324e4u); f_10834ad0();
  /* 108324e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108324e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108324eb je 0x1083254a */
  if (C.zf) goto L_1083254a;
  /* 108324ed push 0x10861418 */
  push32((uint32_t)(0x10861418u));
  /* 108324f2 call 0x10831005 */
  push32(0x108324f7u); f_10831005();
  /* 108324f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108324fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108324fc jne 0x1083254a */
  if (!C.zf) goto L_1083254a;
  /* 108324fe mov esi, esp */
  ESI = (ESP);
  /* 10832500 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832502 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10832504 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083250au);
  /* 1083250a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083250d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083250f call 0x10834ad0 */
  push32(0x10832514u); f_10834ad0();
  /* 10832514 mov esi, esp */
  ESI = (ESP);
  /* 10832516 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832518 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 1083251d call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832523u);
  /* 10832523 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832526 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832528 call 0x10834ad0 */
  push32(0x1083252du); f_10834ad0();
  /* 1083252d mov esi, esp */
  ESI = (ESP);
  /* 1083252f push 0 */
  push32((uint32_t)(0x0u));
  /* 10832531 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832533 push 0x10861470 */
  push32((uint32_t)(0x10861470u));
  /* 10832538 push 5 */
  push32((uint32_t)(0x5u));
  /* 1083253a call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10832540u);
  /* 10832540 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832543 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832545 call 0x10834ad0 */
  push32(0x1083254au); f_10834ad0();
L_1083254a:;
  /* 1083254a mov esi, esp */
  ESI = (ESP);
  /* 1083254c push 4 */
  push32((uint32_t)(0x4u));
  /* 1083254e call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10832554u);
  /* 10832554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832557 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832559 call 0x10834ad0 */
  push32(0x1083255eu); f_10834ad0();
  /* 1083255e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832563 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832565 je 0x10832620 */
  if (C.zf) goto L_10832620;
  /* 1083256b mov esi, esp */
  ESI = (ESP);
  /* 1083256d push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832572 push 0x10861470 */
  push32((uint32_t)(0x10861470u));
  /* 10832577 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x1083257du);
  /* 1083257d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832580 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832582 call 0x10834ad0 */
  push32(0x10832587u); f_10834ad0();
  /* 10832587 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832589 jle 0x10832620 */
  if ((C.zf||C.sf!=C.of)) goto L_10832620;
  /* 1083258f mov esi, esp */
  ESI = (ESP);
  /* 10832591 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832593 push 4 */
  push32((uint32_t)(0x4u));
  /* 10832595 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083259bu);
  /* 1083259b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083259e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108325a0 call 0x10834ad0 */
  push32(0x108325a5u); f_10834ad0();
  /* 108325a5 mov esi, esp */
  ESI = (ESP);
  /* 108325a7 push 0x1085c2b8 */
  push32((uint32_t)(0x1085c2b8u));
  /* 108325ac call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108325b2u);
  /* 108325b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108325b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108325b7 call 0x10834ad0 */
  push32(0x108325bcu); f_10834ad0();
  /* 108325bc mov esi, esp */
  ESI = (ESP);
  /* 108325be push 0 */
  push32((uint32_t)(0x0u));
  /* 108325c0 push 0x10861498 */
  push32((uint32_t)(0x10861498u));
  /* 108325c5 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108325cbu);
  /* 108325cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108325ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108325d0 call 0x10834ad0 */
  push32(0x108325d5u); f_10834ad0();
  /* 108325d5 mov esi, esp */
  ESI = (ESP);
  /* 108325d7 push 0x108614a8 */
  push32((uint32_t)(0x108614a8u));
  /* 108325dc push 5 */
  push32((uint32_t)(0x5u));
  /* 108325de call dword ptr [0x108644b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b8))), 0x108325e4u);
  /* 108325e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108325e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108325e9 call 0x10834ad0 */
  push32(0x108325eeu); f_10834ad0();
  /* 108325ee mov esi, esp */
  ESI = (ESP);
  /* 108325f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108325f2 push 0x108614a0 */
  push32((uint32_t)(0x108614a0u));
  /* 108325f7 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108325fdu);
  /* 108325fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832600 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832602 call 0x10834ad0 */
  push32(0x10832607u); f_10834ad0();
  /* 10832607 mov esi, esp */
  ESI = (ESP);
  /* 10832609 push 0x10861428 */
  push32((uint32_t)(0x10861428u));
  /* 1083260e push 5 */
  push32((uint32_t)(0x5u));
  /* 10832610 call dword ptr [0x108644b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b8))), 0x10832616u);
  /* 10832616 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832619 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083261b call 0x10834ad0 */
  push32(0x10832620u); f_10834ad0();
L_10832620:;
  /* 10832620 mov esi, esp */
  ESI = (ESP);
  /* 10832622 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832624 push 0x108614b0 */
  push32((uint32_t)(0x108614b0u));
  /* 10832629 call dword ptr [0x108644c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c8))), 0x1083262fu);
  /* 1083262f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832632 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832634 call 0x10834ad0 */
  push32(0x10832639u); f_10834ad0();
  /* 10832639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083263b jle 0x10832680 */
  if ((C.zf||C.sf!=C.of)) goto L_10832680;
  /* 1083263d mov esi, esp */
  ESI = (ESP);
  /* 1083263f push 5 */
  push32((uint32_t)(0x5u));
  /* 10832641 call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10832647u);
  /* 10832647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083264a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083264c call 0x10834ad0 */
  push32(0x10832651u); f_10834ad0();
  /* 10832651 mov esi, esp */
  ESI = (ESP);
  /* 10832653 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832655 push 0x108614b0 */
  push32((uint32_t)(0x108614b0u));
  /* 1083265a push 5 */
  push32((uint32_t)(0x5u));
  /* 1083265c call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x10832662u);
  /* 10832662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832667 call 0x10834ad0 */
  push32(0x1083266cu); f_10834ad0();
  /* 1083266c mov esi, esp */
  ESI = (ESP);
  /* 1083266e push 5 */
  push32((uint32_t)(0x5u));
  /* 10832670 call dword ptr [0x108644d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d4))), 0x10832676u);
  /* 10832676 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832679 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083267b call 0x10834ad0 */
  push32(0x10832680u); f_10834ad0();
L_10832680:;
  /* 10832680 mov esi, esp */
  ESI = (ESP);
  /* 10832682 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10832684 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x1083268au);
  /* 1083268a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083268d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083268f call 0x10834ad0 */
  push32(0x10832694u); f_10834ad0();
  /* 10832694 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083269b je 0x10832794 */
  if (C.zf) goto L_10832794;
  /* 108326a1 push 0x108614a8 */
  push32((uint32_t)(0x108614a8u));
  /* 108326a6 call 0x10831005 */
  push32(0x108326abu); f_10831005();
  /* 108326ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108326ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108326b0 jne 0x10832794 */
  if (!C.zf) goto L_10832794;
  /* 108326b6 push 0x10861428 */
  push32((uint32_t)(0x10861428u));
  /* 108326bb call 0x10831005 */
  push32(0x108326c0u); f_10831005();
  /* 108326c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108326c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108326c5 jne 0x10832794 */
  if (!C.zf) goto L_10832794;
  /* 108326cb mov esi, esp */
  ESI = (ESP);
  /* 108326cd push 0 */
  push32((uint32_t)(0x0u));
  /* 108326cf push 0x22 */
  push32((uint32_t)(0x22u));
  /* 108326d1 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108326d7u);
  /* 108326d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108326da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108326dc call 0x10834ad0 */
  push32(0x108326e1u); f_10834ad0();
  /* 108326e1 mov esi, esp */
  ESI = (ESP);
  /* 108326e3 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 108326e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108326e7 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108326edu);
  /* 108326ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108326f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108326f2 call 0x10834ad0 */
  push32(0x108326f7u); f_10834ad0();
  /* 108326f7 mov esi, esp */
  ESI = (ESP);
  /* 108326f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108326fb call dword ptr [0x108644d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d8))), 0x10832701u);
  /* 10832701 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832706 call 0x10834ad0 */
  push32(0x1083270bu); f_10834ad0();
  /* 1083270b mov esi, esp */
  ESI = (ESP);
  /* 1083270d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083270f call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x10832715u);
  /* 10832715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832718 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083271a call 0x10834ad0 */
  push32(0x1083271fu); f_10834ad0();
  /* 1083271f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832721 jne 0x1083273e */
  if (!C.zf) goto L_1083273e;
  /* 10832723 mov esi, esp */
  ESI = (ESP);
  /* 10832725 push 0x5dc */
  push32((uint32_t)(0x5dcu));
  /* 1083272a push 7 */
  push32((uint32_t)(0x7u));
  /* 1083272c call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10832732u);
  /* 10832732 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832737 call 0x10834ad0 */
  push32(0x1083273cu); f_10834ad0();
  /* 1083273c jmp 0x10832794 */
  goto L_10832794;
L_1083273e:;
  /* 1083273e mov esi, esp */
  ESI = (ESP);
  /* 10832740 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832742 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832747 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x1083274du);
  /* 1083274d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832752 call 0x10834ad0 */
  push32(0x10832757u); f_10834ad0();
  /* 10832757 mov esi, esp */
  ESI = (ESP);
  /* 10832759 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083275b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083275d push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 10832762 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832764 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x1083276au);
  /* 1083276a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083276d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083276f call 0x10834ad0 */
  push32(0x10832774u); f_10834ad0();
  /* 10832774 mov esi, esp */
  ESI = (ESP);
  /* 10832776 push 2 */
  push32((uint32_t)(0x2u));
  /* 10832778 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1083277d push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832782 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832784 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x1083278au);
  /* 1083278a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083278d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083278f call 0x10834ad0 */
  push32(0x10832794u); f_10834ad0();
L_10832794:;
  /* 10832794 mov esi, esp */
  ESI = (ESP);
  /* 10832796 push 7 */
  push32((uint32_t)(0x7u));
  /* 10832798 call dword ptr [0x108644e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e0))), 0x1083279eu);
  /* 1083279e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108327a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108327a3 call 0x10834ad0 */
  push32(0x108327a8u); f_10834ad0();
  /* 108327a8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108327ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108327af je 0x10832807 */
  if (C.zf) goto L_10832807;
  /* 108327b1 mov esi, esp */
  ESI = (ESP);
  /* 108327b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108327b5 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108327ba call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108327c0u);
  /* 108327c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108327c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108327c5 call 0x10834ad0 */
  push32(0x108327cau); f_10834ad0();
  /* 108327ca mov esi, esp */
  ESI = (ESP);
  /* 108327cc push 0 */
  push32((uint32_t)(0x0u));
  /* 108327ce push 0 */
  push32((uint32_t)(0x0u));
  /* 108327d0 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108327d5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108327d7 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108327ddu);
  /* 108327dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108327e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108327e2 call 0x10834ad0 */
  push32(0x108327e7u); f_10834ad0();
  /* 108327e7 mov esi, esp */
  ESI = (ESP);
  /* 108327e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108327eb push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 108327f0 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 108327f5 push 5 */
  push32((uint32_t)(0x5u));
  /* 108327f7 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108327fdu);
  /* 108327fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832800 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832802 call 0x10834ad0 */
  push32(0x10832807u); f_10834ad0();
L_10832807:;
  /* 10832807 mov esi, esp */
  ESI = (ESP);
  /* 10832809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1083280b call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10832811u);
  /* 10832811 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832816 call 0x10834ad0 */
  push32(0x1083281bu); f_10834ad0();
  /* 1083281b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832820 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832822 je 0x10832bfd */
  if (C.zf) goto L_10832bfd;
  /* 10832828 mov esi, esp */
  ESI = (ESP);
  /* 1083282a push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 1083282f push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832834 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x1083283au);
  /* 1083283a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083283d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083283f call 0x10834ad0 */
  push32(0x10832844u); f_10834ad0();
  /* 10832844 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832846 jle 0x10832bfd */
  if ((C.zf||C.sf!=C.of)) goto L_10832bfd;
  /* 1083284c mov esi, esp */
  ESI = (ESP);
  /* 1083284e push 0 */
  push32((uint32_t)(0x0u));
  /* 10832850 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832852 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832858u);
  /* 10832858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083285b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083285d call 0x10834ad0 */
  push32(0x10832862u); f_10834ad0();
  /* 10832862 mov esi, esp */
  ESI = (ESP);
  /* 10832864 push 0x1085c29c */
  push32((uint32_t)(0x1085c29cu));
  /* 10832869 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083286b push 0x1085c294 */
  push32((uint32_t)(0x1085c294u));
  /* 10832870 push 9 */
  push32((uint32_t)(0x9u));
  /* 10832872 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10832878u);
  /* 10832878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083287b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083287d call 0x10834ad0 */
  push32(0x10832882u); f_10834ad0();
  /* 10832882 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10832885 cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832889 je 0x1083289a */
  if (C.zf) goto L_1083289a;
  /* 1083288b cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083288f je 0x108329f9 */
  if (C.zf) goto L_108329f9;
  /* 10832895 jmp 0x10832b84 */
  goto L_10832b84;
L_1083289a:;
  /* 1083289a mov esi, esp */
  ESI = (ESP);
  /* 1083289c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083289e push 0 */
  push32((uint32_t)(0x0u));
  /* 108328a0 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x108328a6u);
  /* 108328a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108328a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108328ab call 0x10834ad0 */
  push32(0x108328b0u); f_10834ad0();
  /* 108328b0 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108328b5 jl 0x10832906 */
  if ((C.sf!=C.of)) goto L_10832906;
  /* 108328b7 mov esi, esp */
  ESI = (ESP);
  /* 108328b9 push 0x1085c288 */
  push32((uint32_t)(0x1085c288u));
  /* 108328be call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108328c4u);
  /* 108328c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108328c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108328c9 call 0x10834ad0 */
  push32(0x108328ceu); f_10834ad0();
  /* 108328ce mov esi, esp */
  ESI = (ESP);
  /* 108328d0 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 108328d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108328d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108328d9 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x108328dfu);
  /* 108328df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108328e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108328e4 call 0x10834ad0 */
  push32(0x108328e9u); f_10834ad0();
  /* 108328e9 mov esi, esp */
  ESI = (ESP);
  /* 108328eb push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 108328f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108328f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 108328f4 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x108328fau);
  /* 108328fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108328fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108328ff call 0x10834ad0 */
  push32(0x10832904u); f_10834ad0();
  /* 10832904 jmp 0x10832985 */
  goto L_10832985;
L_10832906:;
  /* 10832906 mov esi, esp */
  ESI = (ESP);
  /* 10832908 push 0x1085c27c */
  push32((uint32_t)(0x1085c27cu));
  /* 1083290d call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832913u);
  /* 10832913 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832916 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832918 call 0x10834ad0 */
  push32(0x1083291du); f_10834ad0();
  /* 1083291d mov esi, esp */
  ESI = (ESP);
  /* 1083291f push 1 */
  push32((uint32_t)(0x1u));
  /* 10832921 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832923 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832929u);
  /* 10832929 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083292c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083292e call 0x10834ad0 */
  push32(0x10832933u); f_10834ad0();
  /* 10832933 mov esi, esp */
  ESI = (ESP);
  /* 10832935 push eax */
  push32((uint32_t)(EAX));
  /* 10832936 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832938 push 5 */
  push32((uint32_t)(0x5u));
  /* 1083293a call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10832940u);
  /* 10832940 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832945 call 0x10834ad0 */
  push32(0x1083294au); f_10834ad0();
  /* 1083294a mov esi, esp */
  ESI = (ESP);
  /* 1083294c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083294e push 0 */
  push32((uint32_t)(0x0u));
  /* 10832950 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832956u);
  /* 10832956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832959 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083295b call 0x10834ad0 */
  push32(0x10832960u); f_10834ad0();
  /* 10832960 mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 10832965 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10832967 mov dword ptr [0x108614b8], edx */
  w32((uint32_t)(0x108614b8), (EDX));
  /* 1083296d mov esi, esp */
  ESI = (ESP);
  /* 1083296f push 0 */
  push32((uint32_t)(0x0u));
  /* 10832971 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832975 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083297bu);
  /* 1083297b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083297e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832980 call 0x10834ad0 */
  push32(0x10832985u); f_10834ad0();
L_10832985:;
  /* 10832985 mov esi, esp */
  ESI = (ESP);
  /* 10832987 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832989 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x1083298fu);
  /* 1083298f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832992 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832994 call 0x10834ad0 */
  push32(0x10832999u); f_10834ad0();
  /* 10832999 imul eax, eax, 0xbb8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xbb8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083299f mov ecx, 0x4e20 */
  ECX = (0x4e20u);
  /* 108329a4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108329a6 mov esi, esp */
  ESI = (ESP);
  /* 108329a8 push ecx */
  push32((uint32_t)(ECX));
  /* 108329a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 108329ab call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x108329b1u);
  /* 108329b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108329b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108329b6 call 0x10834ad0 */
  push32(0x108329bbu); f_10834ad0();
  /* 108329bb mov esi, esp */
  ESI = (ESP);
  /* 108329bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108329bf push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108329c4 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108329cau);
  /* 108329ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108329cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108329cf call 0x10834ad0 */
  push32(0x108329d4u); f_10834ad0();
  /* 108329d4 mov esi, esp */
  ESI = (ESP);
  /* 108329d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108329d8 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 108329dd push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108329e2 push 5 */
  push32((uint32_t)(0x5u));
  /* 108329e4 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108329eau);
  /* 108329ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108329ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108329ef call 0x10834ad0 */
  push32(0x108329f4u); f_10834ad0();
  /* 108329f4 jmp 0x10832bfd */
  goto L_10832bfd;
L_108329f9:;
  /* 108329f9 mov esi, esp */
  ESI = (ESP);
  /* 108329fb push 1 */
  push32((uint32_t)(0x1u));
  /* 108329fd push 0 */
  push32((uint32_t)(0x0u));
  /* 108329ff call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832a05u);
  /* 10832a05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a0a call 0x10834ad0 */
  push32(0x10832a0fu); f_10834ad0();
  /* 10832a0f cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a14 jl 0x10832a94 */
  if ((C.sf!=C.of)) goto L_10832a94;
  /* 10832a16 mov esi, esp */
  ESI = (ESP);
  /* 10832a18 push 0x1085c270 */
  push32((uint32_t)(0x1085c270u));
  /* 10832a1d call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832a23u);
  /* 10832a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a28 call 0x10834ad0 */
  push32(0x10832a2du); f_10834ad0();
  /* 10832a2d mov esi, esp */
  ESI = (ESP);
  /* 10832a2f push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10832a31 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832a33 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x10832a39u);
  /* 10832a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a3e call 0x10834ad0 */
  push32(0x10832a43u); f_10834ad0();
  /* 10832a43 mov esi, esp */
  ESI = (ESP);
  /* 10832a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832a47 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832a4c call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832a52u);
  /* 10832a52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a57 call 0x10834ad0 */
  push32(0x10832a5cu); f_10834ad0();
  /* 10832a5c mov esi, esp */
  ESI = (ESP);
  /* 10832a5e push 0 */
  push32((uint32_t)(0x0u));
  /* 10832a60 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832a62 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832a67 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832a69 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10832a6fu);
  /* 10832a6f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a74 call 0x10834ad0 */
  push32(0x10832a79u); f_10834ad0();
  /* 10832a79 mov esi, esp */
  ESI = (ESP);
  /* 10832a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10832a7d push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832a7f call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832a85u);
  /* 10832a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832a88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832a8a call 0x10834ad0 */
  push32(0x10832a8fu); f_10834ad0();
  /* 10832a8f jmp 0x10832b82 */
  goto L_10832b82;
L_10832a94:;
  /* 10832a94 mov esi, esp */
  ESI = (ESP);
  /* 10832a96 push 0x1085c27c */
  push32((uint32_t)(0x1085c27cu));
  /* 10832a9b call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832aa1u);
  /* 10832aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832aa4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832aa6 call 0x10834ad0 */
  push32(0x10832aabu); f_10834ad0();
  /* 10832aab mov esi, esp */
  ESI = (ESP);
  /* 10832aad push 1 */
  push32((uint32_t)(0x1u));
  /* 10832aaf push 0 */
  push32((uint32_t)(0x0u));
  /* 10832ab1 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832ab7u);
  /* 10832ab7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832aba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832abc call 0x10834ad0 */
  push32(0x10832ac1u); f_10834ad0();
  /* 10832ac1 mov esi, esp */
  ESI = (ESP);
  /* 10832ac3 push eax */
  push32((uint32_t)(EAX));
  /* 10832ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832ac6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832ac8 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10832aceu);
  /* 10832ace add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832ad1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ad3 call 0x10834ad0 */
  push32(0x10832ad8u); f_10834ad0();
  /* 10832ad8 mov esi, esp */
  ESI = (ESP);
  /* 10832ada push 1 */
  push32((uint32_t)(0x1u));
  /* 10832adc push 0 */
  push32((uint32_t)(0x0u));
  /* 10832ade call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832ae4u);
  /* 10832ae4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ae9 call 0x10834ad0 */
  push32(0x10832aeeu); f_10834ad0();
  /* 10832aee mov edx, 0x3e8 */
  EDX = (0x3e8u);
  /* 10832af3 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10832af5 mov dword ptr [0x108614b8], edx */
  w32((uint32_t)(0x108614b8), (EDX));
  /* 10832afb mov esi, esp */
  ESI = (ESP);
  /* 10832afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10832aff push 1 */
  push32((uint32_t)(0x1u));
  /* 10832b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832b03 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10832b09u);
  /* 10832b09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b0e call 0x10834ad0 */
  push32(0x10832b13u); f_10834ad0();
  /* 10832b13 mov esi, esp */
  ESI = (ESP);
  /* 10832b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832b17 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832b1c call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832b22u);
  /* 10832b22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b27 call 0x10834ad0 */
  push32(0x10832b2cu); f_10834ad0();
  /* 10832b2c mov esi, esp */
  ESI = (ESP);
  /* 10832b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10832b30 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10832b35 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 10832b3a push 5 */
  push32((uint32_t)(0x5u));
  /* 10832b3c call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10832b42u);
  /* 10832b42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b47 call 0x10834ad0 */
  push32(0x10832b4cu); f_10834ad0();
  /* 10832b4c mov esi, esp */
  ESI = (ESP);
  /* 10832b4e push 1 */
  push32((uint32_t)(0x1u));
  /* 10832b50 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x10832b56u);
  /* 10832b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b5b call 0x10834ad0 */
  push32(0x10832b60u); f_10834ad0();
  /* 10832b60 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10832b66 mov ecx, 0x7530 */
  ECX = (0x7530u);
  /* 10832b6b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10832b6d mov esi, esp */
  ESI = (ESP);
  /* 10832b6f push ecx */
  push32((uint32_t)(ECX));
  /* 10832b70 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832b72 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10832b78u);
  /* 10832b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b7d call 0x10834ad0 */
  push32(0x10832b82u); f_10834ad0();
L_10832b82:;
  /* 10832b82 jmp 0x10832bfd */
  goto L_10832bfd;
L_10832b84:;
  /* 10832b84 mov esi, esp */
  ESI = (ESP);
  /* 10832b86 push 0x1085c264 */
  push32((uint32_t)(0x1085c264u));
  /* 10832b8b call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832b91u);
  /* 10832b91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832b94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832b96 call 0x10834ad0 */
  push32(0x10832b9bu); f_10834ad0();
  /* 10832b9b mov esi, esp */
  ESI = (ESP);
  /* 10832b9d push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10832b9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10832ba1 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x10832ba7u);
  /* 10832ba7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832baa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832bac call 0x10834ad0 */
  push32(0x10832bb1u); f_10834ad0();
  /* 10832bb1 mov esi, esp */
  ESI = (ESP);
  /* 10832bb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832bb5 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832bba call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832bc0u);
  /* 10832bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832bc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832bc5 call 0x10834ad0 */
  push32(0x10832bcau); f_10834ad0();
  /* 10832bca mov esi, esp */
  ESI = (ESP);
  /* 10832bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10832bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10832bd0 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832bd5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832bd7 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10832bddu);
  /* 10832bdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832be0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832be2 call 0x10834ad0 */
  push32(0x10832be7u); f_10834ad0();
  /* 10832be7 mov esi, esp */
  ESI = (ESP);
  /* 10832be9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832beb push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832bed call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832bf3u);
  /* 10832bf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832bf6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832bf8 call 0x10834ad0 */
  push32(0x10832bfdu); f_10834ad0();
L_10832bfd:;
  /* 10832bfd mov esi, esp */
  ESI = (ESP);
  /* 10832bff push 1 */
  push32((uint32_t)(0x1u));
  /* 10832c01 call dword ptr [0x108644e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e0))), 0x10832c07u);
  /* 10832c07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832c0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832c0c call 0x10834ad0 */
  push32(0x10832c11u); f_10834ad0();
  /* 10832c11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832c16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832c18 je 0x10832c53 */
  if (C.zf) goto L_10832c53;
  /* 10832c1a mov esi, esp */
  ESI = (ESP);
  /* 10832c1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10832c1e push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832c23 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832c29u);
  /* 10832c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832c2e call 0x10834ad0 */
  push32(0x10832c33u); f_10834ad0();
  /* 10832c33 mov esi, esp */
  ESI = (ESP);
  /* 10832c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832c37 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10832c3c push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832c41 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832c43 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10832c49u);
  /* 10832c49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832c4e call 0x10834ad0 */
  push32(0x10832c53u); f_10834ad0();
L_10832c53:;
  /* 10832c53 mov esi, esp */
  ESI = (ESP);
  /* 10832c55 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832c57 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10832c5du);
  /* 10832c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832c62 call 0x10834ad0 */
  push32(0x10832c67u); f_10834ad0();
  /* 10832c67 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832c6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832c6e je 0x1083372b */
  if (C.zf) goto L_1083372b;
  /* 10832c74 mov esi, esp */
  ESI = (ESP);
  /* 10832c76 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832c78 call dword ptr [0x108644e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e4))), 0x10832c7eu);
  /* 10832c7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832c81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832c83 call 0x10834ad0 */
  push32(0x10832c88u); f_10834ad0();
  /* 10832c88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10832c8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832c8f je 0x1083372b */
  if (C.zf) goto L_1083372b;
  /* 10832c95 mov esi, esp */
  ESI = (ESP);
  /* 10832c97 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832c9c push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832ca1 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10832ca7u);
  /* 10832ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832caa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832cac call 0x10834ad0 */
  push32(0x10832cb1u); f_10834ad0();
  /* 10832cb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10832cb3 jle 0x1083372b */
  if ((C.zf||C.sf!=C.of)) goto L_1083372b;
  /* 10832cb9 cmp dword ptr [0x108614b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108614b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832cc0 jne 0x108330ed */
  if (!C.zf) goto L_108330ed;
  /* 10832cc6 mov esi, esp */
  ESI = (ESP);
  /* 10832cc8 push 0x1085c248 */
  push32((uint32_t)(0x1085c248u));
  /* 10832ccd push 0 */
  push32((uint32_t)(0x0u));
  /* 10832ccf push 0x1085c240 */
  push32((uint32_t)(0x1085c240u));
  /* 10832cd4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10832cd6 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10832cdcu);
  /* 10832cdc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832cdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ce1 call 0x10834ad0 */
  push32(0x10832ce6u); f_10834ad0();
  /* 10832ce6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10832ce9 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ced ja 0x108330e8 */
  if ((!C.cf&&!C.zf)) goto L_108330e8;
  /* 10832cf3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10832cf6 jmp dword ptr [edx*4 + 0x10833efd] */
  switch (EDX) {
    case 0: goto L_10832cfd;
    case 1: goto L_10832d82;
    case 2: goto L_10832e00;
    case 3: goto L_10832f5f;
    case 4: goto L_10833124;
    case 5: goto L_108331a9;
    case 6: goto L_10833227;
    case 7: goto L_108334df;
    case 8: goto L_10833c85;
    case 9: goto L_10833cb7;
    case 10: goto L_10833d30;
    case 11: goto L_10833d49;
    default: x86_unimpl("switch@0x10832cf6 out of table"); return;
  }
L_10832cfd:;
  /* 10832cfd mov esi, esp */
  ESI = (ESP);
  /* 10832cff push 0x1085c234 */
  push32((uint32_t)(0x1085c234u));
  /* 10832d04 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832d0au);
  /* 10832d0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d0d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d0f call 0x10834ad0 */
  push32(0x10832d14u); f_10834ad0();
  /* 10832d14 mov esi, esp */
  ESI = (ESP);
  /* 10832d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832d18 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832d1d call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832d23u);
  /* 10832d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d28 call 0x10834ad0 */
  push32(0x10832d2du); f_10834ad0();
  /* 10832d2d mov esi, esp */
  ESI = (ESP);
  /* 10832d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10832d31 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10832d33 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 10832d38 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832d3a call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10832d40u);
  /* 10832d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d45 call 0x10834ad0 */
  push32(0x10832d4au); f_10834ad0();
  /* 10832d4a mov esi, esp */
  ESI = (ESP);
  /* 10832d4c push 2 */
  push32((uint32_t)(0x2u));
  /* 10832d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10832d50 push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10832d55 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832d57 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10832d5du);
  /* 10832d5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d62 call 0x10834ad0 */
  push32(0x10832d67u); f_10834ad0();
  /* 10832d67 mov esi, esp */
  ESI = (ESP);
  /* 10832d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832d6b push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832d6d call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832d73u);
  /* 10832d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d78 call 0x10834ad0 */
  push32(0x10832d7du); f_10834ad0();
  /* 10832d7d jmp 0x108330e8 */
  goto L_108330e8;
L_10832d82:;
  /* 10832d82 mov esi, esp */
  ESI = (ESP);
  /* 10832d84 push 0x1085c228 */
  push32((uint32_t)(0x1085c228u));
  /* 10832d89 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832d8fu);
  /* 10832d8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832d92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832d94 call 0x10834ad0 */
  push32(0x10832d99u); f_10834ad0();
  /* 10832d99 mov esi, esp */
  ESI = (ESP);
  /* 10832d9b push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10832d9d push 5 */
  push32((uint32_t)(0x5u));
  /* 10832d9f call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x10832da5u);
  /* 10832da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832da8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832daa call 0x10834ad0 */
  push32(0x10832dafu); f_10834ad0();
  /* 10832daf mov esi, esp */
  ESI = (ESP);
  /* 10832db1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832db3 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832db8 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832dbeu);
  /* 10832dbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832dc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832dc3 call 0x10834ad0 */
  push32(0x10832dc8u); f_10834ad0();
  /* 10832dc8 mov esi, esp */
  ESI = (ESP);
  /* 10832dca push 0 */
  push32((uint32_t)(0x0u));
  /* 10832dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10832dce push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832dd3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832dd5 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10832ddbu);
  /* 10832ddb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832dde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832de0 call 0x10834ad0 */
  push32(0x10832de5u); f_10834ad0();
  /* 10832de5 mov esi, esp */
  ESI = (ESP);
  /* 10832de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832de9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832deb call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832df1u);
  /* 10832df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832df6 call 0x10834ad0 */
  push32(0x10832dfbu); f_10834ad0();
  /* 10832dfb jmp 0x108330e8 */
  goto L_108330e8;
L_10832e00:;
  /* 10832e00 mov esi, esp */
  ESI = (ESP);
  /* 10832e02 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832e04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832e06 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832e0cu);
  /* 10832e0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e11 call 0x10834ad0 */
  push32(0x10832e16u); f_10834ad0();
  /* 10832e16 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e1b jl 0x10832e6c */
  if ((C.sf!=C.of)) goto L_10832e6c;
  /* 10832e1d mov esi, esp */
  ESI = (ESP);
  /* 10832e1f push 0x1085c21c */
  push32((uint32_t)(0x1085c21cu));
  /* 10832e24 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832e2au);
  /* 10832e2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e2f call 0x10834ad0 */
  push32(0x10832e34u); f_10834ad0();
  /* 10832e34 mov esi, esp */
  ESI = (ESP);
  /* 10832e36 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10832e3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10832e3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10832e3f call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10832e45u);
  /* 10832e45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e4a call 0x10834ad0 */
  push32(0x10832e4fu); f_10834ad0();
  /* 10832e4f mov esi, esp */
  ESI = (ESP);
  /* 10832e51 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10832e56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832e58 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832e5a call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10832e60u);
  /* 10832e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e65 call 0x10834ad0 */
  push32(0x10832e6au); f_10834ad0();
  /* 10832e6a jmp 0x10832eeb */
  goto L_10832eeb;
L_10832e6c:;
  /* 10832e6c mov esi, esp */
  ESI = (ESP);
  /* 10832e6e push 0x1085c27c */
  push32((uint32_t)(0x1085c27cu));
  /* 10832e73 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832e79u);
  /* 10832e79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e7e call 0x10834ad0 */
  push32(0x10832e83u); f_10834ad0();
  /* 10832e83 mov esi, esp */
  ESI = (ESP);
  /* 10832e85 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832e89 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832e8fu);
  /* 10832e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832e94 call 0x10834ad0 */
  push32(0x10832e99u); f_10834ad0();
  /* 10832e99 mov esi, esp */
  ESI = (ESP);
  /* 10832e9b push eax */
  push32((uint32_t)(EAX));
  /* 10832e9c push 1 */
  push32((uint32_t)(0x1u));
  /* 10832e9e push 5 */
  push32((uint32_t)(0x5u));
  /* 10832ea0 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10832ea6u);
  /* 10832ea6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832ea9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832eab call 0x10834ad0 */
  push32(0x10832eb0u); f_10834ad0();
  /* 10832eb0 mov esi, esp */
  ESI = (ESP);
  /* 10832eb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832eb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832eb6 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832ebcu);
  /* 10832ebc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ec1 call 0x10834ad0 */
  push32(0x10832ec6u); f_10834ad0();
  /* 10832ec6 mov ecx, 0x3e8 */
  ECX = (0x3e8u);
  /* 10832ecb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10832ecd mov dword ptr [0x108614b8], ecx */
  w32((uint32_t)(0x108614b8), (ECX));
  /* 10832ed3 mov esi, esp */
  ESI = (ESP);
  /* 10832ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832edb call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x10832ee1u);
  /* 10832ee1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ee6 call 0x10834ad0 */
  push32(0x10832eebu); f_10834ad0();
L_10832eeb:;
  /* 10832eeb mov esi, esp */
  ESI = (ESP);
  /* 10832eed push 0 */
  push32((uint32_t)(0x0u));
  /* 10832eef push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832ef4 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832efau);
  /* 10832efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832efd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832eff call 0x10834ad0 */
  push32(0x10832f04u); f_10834ad0();
  /* 10832f04 mov esi, esp */
  ESI = (ESP);
  /* 10832f06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832f08 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10832f0d push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 10832f12 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832f14 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10832f1au);
  /* 10832f1a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832f1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f1f call 0x10834ad0 */
  push32(0x10832f24u); f_10834ad0();
  /* 10832f24 mov esi, esp */
  ESI = (ESP);
  /* 10832f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832f28 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x10832f2eu);
  /* 10832f2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f33 call 0x10834ad0 */
  push32(0x10832f38u); f_10834ad0();
  /* 10832f38 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10832f3e mov edx, 0x7530 */
  EDX = (0x7530u);
  /* 10832f43 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10832f45 mov esi, esp */
  ESI = (ESP);
  /* 10832f47 push edx */
  push32((uint32_t)(EDX));
  /* 10832f48 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832f4a call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10832f50u);
  /* 10832f50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832f53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f55 call 0x10834ad0 */
  push32(0x10832f5au); f_10834ad0();
  /* 10832f5a jmp 0x108330e8 */
  goto L_108330e8;
L_10832f5f:;
  /* 10832f5f mov esi, esp */
  ESI = (ESP);
  /* 10832f61 push 1 */
  push32((uint32_t)(0x1u));
  /* 10832f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832f65 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10832f6bu);
  /* 10832f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f70 call 0x10834ad0 */
  push32(0x10832f75u); f_10834ad0();
  /* 10832f75 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f7a jl 0x10832ffa */
  if ((C.sf!=C.of)) goto L_10832ffa;
  /* 10832f7c mov esi, esp */
  ESI = (ESP);
  /* 10832f7e push 0x1085c270 */
  push32((uint32_t)(0x1085c270u));
  /* 10832f83 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10832f89u);
  /* 10832f89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832f8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832f8e call 0x10834ad0 */
  push32(0x10832f93u); f_10834ad0();
  /* 10832f93 mov esi, esp */
  ESI = (ESP);
  /* 10832f95 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10832f97 push 5 */
  push32((uint32_t)(0x5u));
  /* 10832f99 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x10832f9fu);
  /* 10832f9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832fa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832fa4 call 0x10834ad0 */
  push32(0x10832fa9u); f_10834ad0();
  /* 10832fa9 mov esi, esp */
  ESI = (ESP);
  /* 10832fab push 0 */
  push32((uint32_t)(0x0u));
  /* 10832fad push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10832fb2 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10832fb8u);
  /* 10832fb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832fbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832fbd call 0x10834ad0 */
  push32(0x10832fc2u); f_10834ad0();
  /* 10832fc2 mov esi, esp */
  ESI = (ESP);
  /* 10832fc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832fc8 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 10832fcd push 5 */
  push32((uint32_t)(0x5u));
  /* 10832fcf call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10832fd5u);
  /* 10832fd5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832fd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832fda call 0x10834ad0 */
  push32(0x10832fdfu); f_10834ad0();
  /* 10832fdf mov esi, esp */
  ESI = (ESP);
  /* 10832fe1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10832fe3 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10832fe5 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10832febu);
  /* 10832feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10832fee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10832ff0 call 0x10834ad0 */
  push32(0x10832ff5u); f_10834ad0();
  /* 10832ff5 jmp 0x108330e8 */
  goto L_108330e8;
L_10832ffa:;
  /* 10832ffa mov esi, esp */
  ESI = (ESP);
  /* 10832ffc push 0x1085c27c */
  push32((uint32_t)(0x1085c27cu));
  /* 10833001 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833007u);
  /* 10833007 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083300a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083300c call 0x10834ad0 */
  push32(0x10833011u); f_10834ad0();
  /* 10833011 mov esi, esp */
  ESI = (ESP);
  /* 10833013 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833017 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x1083301du);
  /* 1083301d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833020 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833022 call 0x10834ad0 */
  push32(0x10833027u); f_10834ad0();
  /* 10833027 mov esi, esp */
  ESI = (ESP);
  /* 10833029 push eax */
  push32((uint32_t)(EAX));
  /* 1083302a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083302c push 5 */
  push32((uint32_t)(0x5u));
  /* 1083302e call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10833034u);
  /* 10833034 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833037 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833039 call 0x10834ad0 */
  push32(0x1083303eu); f_10834ad0();
  /* 1083303e mov esi, esp */
  ESI = (ESP);
  /* 10833040 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833042 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833044 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x1083304au);
  /* 1083304a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083304d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083304f call 0x10834ad0 */
  push32(0x10833054u); f_10834ad0();
  /* 10833054 mov ecx, 0x3e8 */
  ECX = (0x3e8u);
  /* 10833059 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083305b mov dword ptr [0x108614b8], ecx */
  w32((uint32_t)(0x108614b8), (ECX));
  /* 10833061 mov esi, esp */
  ESI = (ESP);
  /* 10833063 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833065 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833069 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083306fu);
  /* 1083306f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833072 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833074 call 0x10834ad0 */
  push32(0x10833079u); f_10834ad0();
  /* 10833079 mov esi, esp */
  ESI = (ESP);
  /* 1083307b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083307d push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10833082 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833088u);
  /* 10833088 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083308b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083308d call 0x10834ad0 */
  push32(0x10833092u); f_10834ad0();
  /* 10833092 mov esi, esp */
  ESI = (ESP);
  /* 10833094 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833096 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 1083309b push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108330a0 push 5 */
  push32((uint32_t)(0x5u));
  /* 108330a2 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108330a8u);
  /* 108330a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108330ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108330ad call 0x10834ad0 */
  push32(0x108330b2u); f_10834ad0();
  /* 108330b2 mov esi, esp */
  ESI = (ESP);
  /* 108330b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108330b6 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x108330bcu);
  /* 108330bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108330bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108330c1 call 0x10834ad0 */
  push32(0x108330c6u); f_10834ad0();
  /* 108330c6 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108330cc mov edx, 0x7530 */
  EDX = (0x7530u);
  /* 108330d1 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108330d3 mov esi, esp */
  ESI = (ESP);
  /* 108330d5 push edx */
  push32((uint32_t)(EDX));
  /* 108330d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108330d8 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x108330deu);
  /* 108330de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108330e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108330e3 call 0x10834ad0 */
  push32(0x108330e8u); f_10834ad0();
L_108330e8:;
  /* 108330e8 jmp 0x1083372b */
  goto L_1083372b;
L_108330ed:;
  /* 108330ed mov esi, esp */
  ESI = (ESP);
  /* 108330ef push 0x1085c248 */
  push32((uint32_t)(0x1085c248u));
  /* 108330f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108330f6 push 0x1085c210 */
  push32((uint32_t)(0x1085c210u));
  /* 108330fb push 9 */
  push32((uint32_t)(0x9u));
  /* 108330fd call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10833103u);
  /* 10833103 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833106 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833108 call 0x10834ad0 */
  push32(0x1083310du); f_10834ad0();
  /* 1083310d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10833110 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833114 ja 0x1083372b */
  if ((!C.cf&&!C.zf)) goto L_1083372b;
  /* 1083311a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1083311d jmp dword ptr [eax*4 + 0x10833f0d] */
  switch (EAX) {
    case 0: goto L_10833124;
    case 1: goto L_108331a9;
    case 2: goto L_10833227;
    case 3: goto L_108334df;
    case 4: goto L_10833c85;
    case 5: goto L_10833cb7;
    case 6: goto L_10833d30;
    case 7: goto L_10833d49;
    default: x86_unimpl("switch@0x1083311d out of table"); return;
  }
L_10833124:;
  /* 10833124 mov esi, esp */
  ESI = (ESP);
  /* 10833126 push 0x1085c234 */
  push32((uint32_t)(0x1085c234u));
  /* 1083312b call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833131u);
  /* 10833131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833134 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833136 call 0x10834ad0 */
  push32(0x1083313bu); f_10834ad0();
  /* 1083313b mov esi, esp */
  ESI = (ESP);
  /* 1083313d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083313f push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10833144 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x1083314au);
  /* 1083314a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083314d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083314f call 0x10834ad0 */
  push32(0x10833154u); f_10834ad0();
  /* 10833154 mov esi, esp */
  ESI = (ESP);
  /* 10833156 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833158 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1083315a push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 1083315f push 5 */
  push32((uint32_t)(0x5u));
  /* 10833161 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10833167u);
  /* 10833167 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083316a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083316c call 0x10834ad0 */
  push32(0x10833171u); f_10834ad0();
  /* 10833171 mov esi, esp */
  ESI = (ESP);
  /* 10833173 push 2 */
  push32((uint32_t)(0x2u));
  /* 10833175 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833177 push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 1083317c push 5 */
  push32((uint32_t)(0x5u));
  /* 1083317e call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10833184u);
  /* 10833184 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833189 call 0x10834ad0 */
  push32(0x1083318eu); f_10834ad0();
  /* 1083318e mov esi, esp */
  ESI = (ESP);
  /* 10833190 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833192 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833194 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083319au);
  /* 1083319a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083319d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083319f call 0x10834ad0 */
  push32(0x108331a4u); f_10834ad0();
  /* 108331a4 jmp 0x1083372b */
  goto L_1083372b;
L_108331a9:;
  /* 108331a9 mov esi, esp */
  ESI = (ESP);
  /* 108331ab push 0x1085c228 */
  push32((uint32_t)(0x1085c228u));
  /* 108331b0 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108331b6u);
  /* 108331b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108331b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108331bb call 0x10834ad0 */
  push32(0x108331c0u); f_10834ad0();
  /* 108331c0 mov esi, esp */
  ESI = (ESP);
  /* 108331c2 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108331c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 108331c6 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108331ccu);
  /* 108331cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108331cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108331d1 call 0x10834ad0 */
  push32(0x108331d6u); f_10834ad0();
  /* 108331d6 mov esi, esp */
  ESI = (ESP);
  /* 108331d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108331da push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108331df call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108331e5u);
  /* 108331e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108331e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108331ea call 0x10834ad0 */
  push32(0x108331efu); f_10834ad0();
  /* 108331ef mov esi, esp */
  ESI = (ESP);
  /* 108331f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108331f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108331f5 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 108331fa push 5 */
  push32((uint32_t)(0x5u));
  /* 108331fc call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10833202u);
  /* 10833202 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833205 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833207 call 0x10834ad0 */
  push32(0x1083320cu); f_10834ad0();
  /* 1083320c mov esi, esp */
  ESI = (ESP);
  /* 1083320e push 0 */
  push32((uint32_t)(0x0u));
  /* 10833210 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833212 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833218u);
  /* 10833218 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083321b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083321d call 0x10834ad0 */
  push32(0x10833222u); f_10834ad0();
  /* 10833222 jmp 0x1083372b */
  goto L_1083372b;
L_10833227:;
  /* 10833227 mov esi, esp */
  ESI = (ESP);
  /* 10833229 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083322b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083322d call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10833233u);
  /* 10833233 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833238 call 0x10834ad0 */
  push32(0x1083323du); f_10834ad0();
  /* 1083323d mov ecx, dword ptr [0x108614b8] */
  ECX = (r32((uint32_t)(0x108614b8)));
  /* 10833243 add ecx, 0x3e8 */
  { uint32_t _a=(ECX),_b=(0x3e8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10833249 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083324b jl 0x10833329 */
  if ((C.sf!=C.of)) goto L_10833329;
  /* 10833251 mov esi, esp */
  ESI = (ESP);
  /* 10833253 push 0x1085c21c */
  push32((uint32_t)(0x1085c21cu));
  /* 10833258 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x1083325eu);
  /* 1083325e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833263 call 0x10834ad0 */
  push32(0x10833268u); f_10834ad0();
  /* 10833268 mov edx, 0xfffffc18 */
  EDX = (0xfffffc18u);
  /* 1083326d sub edx, dword ptr [0x108614b8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108614b8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10833273 mov esi, esp */
  ESI = (ESP);
  /* 10833275 push edx */
  push32((uint32_t)(EDX));
  /* 10833276 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833278 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083327a call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10833280u);
  /* 10833280 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833283 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833285 call 0x10834ad0 */
  push32(0x1083328au); f_10834ad0();
  /* 1083328a mov eax, dword ptr [0x108614b8] */
  EAX = (r32((uint32_t)(0x108614b8)));
  /* 1083328f add eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10833294 mov esi, esp */
  ESI = (ESP);
  /* 10833296 push eax */
  push32((uint32_t)(EAX));
  /* 10833297 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833299 push 5 */
  push32((uint32_t)(0x5u));
  /* 1083329b call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x108332a1u);
  /* 108332a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108332a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108332a6 call 0x10834ad0 */
  push32(0x108332abu); f_10834ad0();
  /* 108332ab mov dword ptr [0x108614b8], 0 */
  w32((uint32_t)(0x108614b8), (0x0u));
  /* 108332b5 mov esi, esp */
  ESI = (ESP);
  /* 108332b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108332b9 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108332be call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108332c4u);
  /* 108332c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108332c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108332c9 call 0x10834ad0 */
  push32(0x108332ceu); f_10834ad0();
  /* 108332ce mov esi, esp */
  ESI = (ESP);
  /* 108332d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108332d2 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 108332d7 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108332dc push 5 */
  push32((uint32_t)(0x5u));
  /* 108332de call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108332e4u);
  /* 108332e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108332e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108332e9 call 0x10834ad0 */
  push32(0x108332eeu); f_10834ad0();
  /* 108332ee mov esi, esp */
  ESI = (ESP);
  /* 108332f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108332f2 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x108332f8u);
  /* 108332f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108332fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108332fd call 0x10834ad0 */
  push32(0x10833302u); f_10834ad0();
  /* 10833302 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10833308 mov ecx, 0x7530 */
  ECX = (0x7530u);
  /* 1083330d sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083330f mov esi, esp */
  ESI = (ESP);
  /* 10833311 push ecx */
  push32((uint32_t)(ECX));
  /* 10833312 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833314 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x1083331au);
  /* 1083331a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083331d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083331f call 0x10834ad0 */
  push32(0x10833324u); f_10834ad0();
  /* 10833324 jmp 0x108334da */
  goto L_108334da;
L_10833329:;
  /* 10833329 mov esi, esp */
  ESI = (ESP);
  /* 1083332b push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1083332d call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833333u);
  /* 10833333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833338 call 0x10834ad0 */
  push32(0x1083333du); f_10834ad0();
  /* 1083333d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833344 je 0x1083345a */
  if (C.zf) goto L_1083345a;
  /* 1083334a mov esi, esp */
  ESI = (ESP);
  /* 1083334c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083334e push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10833350 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833356u);
  /* 10833356 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833359 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083335b call 0x10834ad0 */
  push32(0x10833360u); f_10834ad0();
  /* 10833360 mov esi, esp */
  ESI = (ESP);
  /* 10833362 push 0x1085c204 */
  push32((uint32_t)(0x1085c204u));
  /* 10833367 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x1083336du);
  /* 1083336d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833372 call 0x10834ad0 */
  push32(0x10833377u); f_10834ad0();
  /* 10833377 mov esi, esp */
  ESI = (ESP);
  /* 10833379 push 1 */
  push32((uint32_t)(0x1u));
  /* 1083337b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083337d call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10833383u);
  /* 10833383 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833386 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833388 call 0x10834ad0 */
  push32(0x1083338du); f_10834ad0();
  /* 1083338d mov esi, esp */
  ESI = (ESP);
  /* 1083338f push eax */
  push32((uint32_t)(EAX));
  /* 10833390 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833392 push 5 */
  push32((uint32_t)(0x5u));
  /* 10833394 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x1083339au);
  /* 1083339a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083339d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083339f call 0x10834ad0 */
  push32(0x108333a4u); f_10834ad0();
  /* 108333a4 mov esi, dword ptr [0x108614b8] */
  ESI = (r32((uint32_t)(0x108614b8)));
  /* 108333aa add esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108333b0 mov edi, esp */
  EDI = (ESP);
  /* 108333b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108333b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108333b6 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x108333bcu);
  /* 108333bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108333bf cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108333c1 call 0x10834ad0 */
  push32(0x108333c6u); f_10834ad0();
  /* 108333c6 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 108333c8 mov dword ptr [0x108614b8], esi */
  w32((uint32_t)(0x108614b8), (ESI));
  /* 108333ce mov esi, esp */
  ESI = (ESP);
  /* 108333d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108333d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108333d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108333d6 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x108333dcu);
  /* 108333dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108333df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108333e1 call 0x10834ad0 */
  push32(0x108333e6u); f_10834ad0();
  /* 108333e6 mov esi, esp */
  ESI = (ESP);
  /* 108333e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108333ea push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108333ef call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108333f5u);
  /* 108333f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108333f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108333fa call 0x10834ad0 */
  push32(0x108333ffu); f_10834ad0();
  /* 108333ff mov esi, esp */
  ESI = (ESP);
  /* 10833401 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833403 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10833408 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 1083340d push 5 */
  push32((uint32_t)(0x5u));
  /* 1083340f call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10833415u);
  /* 10833415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083341a call 0x10834ad0 */
  push32(0x1083341fu); f_10834ad0();
  /* 1083341f mov esi, esp */
  ESI = (ESP);
  /* 10833421 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833423 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x10833429u);
  /* 10833429 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083342c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083342e call 0x10834ad0 */
  push32(0x10833433u); f_10834ad0();
  /* 10833433 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10833439 mov edx, 0x7530 */
  EDX = (0x7530u);
  /* 1083343e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10833440 mov esi, esp */
  ESI = (ESP);
  /* 10833442 push edx */
  push32((uint32_t)(EDX));
  /* 10833443 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833445 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x1083344bu);
  /* 1083344b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083344e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833450 call 0x10834ad0 */
  push32(0x10833455u); f_10834ad0();
  /* 10833455 jmp 0x108334da */
  goto L_108334da;
L_1083345a:;
  /* 1083345a mov esi, esp */
  ESI = (ESP);
  /* 1083345c push 0x1085c1f8 */
  push32((uint32_t)(0x1085c1f8u));
  /* 10833461 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833467u);
  /* 10833467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083346a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083346c call 0x10834ad0 */
  push32(0x10833471u); f_10834ad0();
  /* 10833471 mov esi, esp */
  ESI = (ESP);
  /* 10833473 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833475 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 1083347a call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833480u);
  /* 10833480 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833483 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833485 call 0x10834ad0 */
  push32(0x1083348au); f_10834ad0();
  /* 1083348a mov esi, esp */
  ESI = (ESP);
  /* 1083348c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083348e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10833490 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 10833495 push 5 */
  push32((uint32_t)(0x5u));
  /* 10833497 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x1083349du);
  /* 1083349d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108334a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108334a2 call 0x10834ad0 */
  push32(0x108334a7u); f_10834ad0();
  /* 108334a7 mov esi, esp */
  ESI = (ESP);
  /* 108334a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 108334ab push 0 */
  push32((uint32_t)(0x0u));
  /* 108334ad push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 108334b2 push 5 */
  push32((uint32_t)(0x5u));
  /* 108334b4 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108334bau);
  /* 108334ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108334bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108334bf call 0x10834ad0 */
  push32(0x108334c4u); f_10834ad0();
  /* 108334c4 mov esi, esp */
  ESI = (ESP);
  /* 108334c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108334c8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 108334ca call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108334d0u);
  /* 108334d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108334d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108334d5 call 0x10834ad0 */
  push32(0x108334dau); f_10834ad0();
L_108334da:;
  /* 108334da jmp 0x1083372b */
  goto L_1083372b;
L_108334df:;
  /* 108334df mov esi, esp */
  ESI = (ESP);
  /* 108334e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108334e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108334e5 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x108334ebu);
  /* 108334eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108334ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108334f0 call 0x10834ad0 */
  push32(0x108334f5u); f_10834ad0();
  /* 108334f5 cmp eax, 0x3e8 */
  { uint32_t _a=(EAX),_b=(0x3e8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108334fa jl 0x1083357a */
  if ((C.sf!=C.of)) goto L_1083357a;
  /* 108334fc mov esi, esp */
  ESI = (ESP);
  /* 108334fe push 0x1085c270 */
  push32((uint32_t)(0x1085c270u));
  /* 10833503 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833509u);
  /* 10833509 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083350c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083350e call 0x10834ad0 */
  push32(0x10833513u); f_10834ad0();
  /* 10833513 mov esi, esp */
  ESI = (ESP);
  /* 10833515 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10833517 push 5 */
  push32((uint32_t)(0x5u));
  /* 10833519 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x1083351fu);
  /* 1083351f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833522 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833524 call 0x10834ad0 */
  push32(0x10833529u); f_10834ad0();
  /* 10833529 mov esi, esp */
  ESI = (ESP);
  /* 1083352b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083352d push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10833532 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833538u);
  /* 10833538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083353b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083353d call 0x10834ad0 */
  push32(0x10833542u); f_10834ad0();
  /* 10833542 mov esi, esp */
  ESI = (ESP);
  /* 10833544 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833546 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833548 push 0x10861438 */
  push32((uint32_t)(0x10861438u));
  /* 1083354d push 5 */
  push32((uint32_t)(0x5u));
  /* 1083354f call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10833555u);
  /* 10833555 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083355a call 0x10834ad0 */
  push32(0x1083355fu); f_10834ad0();
  /* 1083355f mov esi, esp */
  ESI = (ESP);
  /* 10833561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833563 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833565 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083356bu);
  /* 1083356b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083356e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833570 call 0x10834ad0 */
  push32(0x10833575u); f_10834ad0();
  /* 10833575 jmp 0x1083372b */
  goto L_1083372b;
L_1083357a:;
  /* 1083357a mov esi, esp */
  ESI = (ESP);
  /* 1083357c push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1083357e call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833584u);
  /* 10833584 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833587 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833589 call 0x10834ad0 */
  push32(0x1083358eu); f_10834ad0();
  /* 1083358e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833593 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833595 je 0x108336ab */
  if (C.zf) goto L_108336ab;
  /* 1083359b mov esi, esp */
  ESI = (ESP);
  /* 1083359d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083359f push 0x33 */
  push32((uint32_t)(0x33u));
  /* 108335a1 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108335a7u);
  /* 108335a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108335aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108335ac call 0x10834ad0 */
  push32(0x108335b1u); f_10834ad0();
  /* 108335b1 mov esi, esp */
  ESI = (ESP);
  /* 108335b3 push 0x1085c204 */
  push32((uint32_t)(0x1085c204u));
  /* 108335b8 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108335beu);
  /* 108335be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108335c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108335c3 call 0x10834ad0 */
  push32(0x108335c8u); f_10834ad0();
  /* 108335c8 mov esi, esp */
  ESI = (ESP);
  /* 108335ca push 1 */
  push32((uint32_t)(0x1u));
  /* 108335cc push 0 */
  push32((uint32_t)(0x0u));
  /* 108335ce call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x108335d4u);
  /* 108335d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108335d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108335d9 call 0x10834ad0 */
  push32(0x108335deu); f_10834ad0();
  /* 108335de mov esi, esp */
  ESI = (ESP);
  /* 108335e0 push eax */
  push32((uint32_t)(EAX));
  /* 108335e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108335e3 push 5 */
  push32((uint32_t)(0x5u));
  /* 108335e5 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x108335ebu);
  /* 108335eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108335ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108335f0 call 0x10834ad0 */
  push32(0x108335f5u); f_10834ad0();
  /* 108335f5 mov esi, dword ptr [0x108614b8] */
  ESI = (r32((uint32_t)(0x108614b8)));
  /* 108335fb add esi, 0x3e8 */
  { uint32_t _a=(ESI),_b=(0x3e8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10833601 mov edi, esp */
  EDI = (ESP);
  /* 10833603 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833605 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833607 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x1083360du);
  /* 1083360d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833610 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833612 call 0x10834ad0 */
  push32(0x10833617u); f_10834ad0();
  /* 10833617 sub esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10833619 mov dword ptr [0x108614b8], esi */
  w32((uint32_t)(0x108614b8), (ESI));
  /* 1083361f mov esi, esp */
  ESI = (ESP);
  /* 10833621 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833623 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833625 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833627 call dword ptr [0x10864468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864468))), 0x1083362du);
  /* 1083362d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833630 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833632 call 0x10834ad0 */
  push32(0x10833637u); f_10834ad0();
  /* 10833637 mov esi, esp */
  ESI = (ESP);
  /* 10833639 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083363b push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10833640 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833646u);
  /* 10833646 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083364b call 0x10834ad0 */
  push32(0x10833650u); f_10834ad0();
  /* 10833650 mov esi, esp */
  ESI = (ESP);
  /* 10833652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833654 push 0xc4 */
  push32((uint32_t)(0xc4u));
  /* 10833659 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 1083365e push 5 */
  push32((uint32_t)(0x5u));
  /* 10833660 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x10833666u);
  /* 10833666 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833669 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083366b call 0x10834ad0 */
  push32(0x10833670u); f_10834ad0();
  /* 10833670 mov esi, esp */
  ESI = (ESP);
  /* 10833672 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833674 call dword ptr [0x10864474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864474))), 0x1083367au);
  /* 1083367a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083367d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083367f call 0x10834ad0 */
  push32(0x10833684u); f_10834ad0();
  /* 10833684 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083368a mov ecx, 0x7530 */
  ECX = (0x7530u);
  /* 1083368f sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10833691 mov esi, esp */
  ESI = (ESP);
  /* 10833693 push ecx */
  push32((uint32_t)(ECX));
  /* 10833694 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833696 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x1083369cu);
  /* 1083369c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083369f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108336a1 call 0x10834ad0 */
  push32(0x108336a6u); f_10834ad0();
  /* 108336a6 jmp 0x1083372b */
  goto L_1083372b;
L_108336ab:;
  /* 108336ab mov esi, esp */
  ESI = (ESP);
  /* 108336ad push 0x1085c1f8 */
  push32((uint32_t)(0x1085c1f8u));
  /* 108336b2 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108336b8u);
  /* 108336b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108336bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108336bd call 0x10834ad0 */
  push32(0x108336c2u); f_10834ad0();
  /* 108336c2 mov esi, esp */
  ESI = (ESP);
  /* 108336c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108336c6 push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 108336cb call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x108336d1u);
  /* 108336d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108336d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108336d6 call 0x10834ad0 */
  push32(0x108336dbu); f_10834ad0();
  /* 108336db mov esi, esp */
  ESI = (ESP);
  /* 108336dd push 0 */
  push32((uint32_t)(0x0u));
  /* 108336df push 0x40 */
  push32((uint32_t)(0x40u));
  /* 108336e1 push 0x10861458 */
  push32((uint32_t)(0x10861458u));
  /* 108336e6 push 5 */
  push32((uint32_t)(0x5u));
  /* 108336e8 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x108336eeu);
  /* 108336ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108336f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108336f3 call 0x10834ad0 */
  push32(0x108336f8u); f_10834ad0();
  /* 108336f8 mov esi, esp */
  ESI = (ESP);
  /* 108336fa push 2 */
  push32((uint32_t)(0x2u));
  /* 108336fc push 0 */
  push32((uint32_t)(0x0u));
  /* 108336fe push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10833703 push 5 */
  push32((uint32_t)(0x5u));
  /* 10833705 call dword ptr [0x108644a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a0))), 0x1083370bu);
  /* 1083370b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083370e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833710 call 0x10834ad0 */
  push32(0x10833715u); f_10834ad0();
  /* 10833715 mov esi, esp */
  ESI = (ESP);
  /* 10833717 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833719 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1083371b call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833721u);
  /* 10833721 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833724 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833726 call 0x10834ad0 */
  push32(0x1083372bu); f_10834ad0();
L_1083372b:;
  /* 1083372b mov esi, esp */
  ESI = (ESP);
  /* 1083372d push 0x10861420 */
  push32((uint32_t)(0x10861420u));
  /* 10833732 push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10833737 call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x1083373du);
  /* 1083373d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833740 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833742 call 0x10834ad0 */
  push32(0x10833747u); f_10834ad0();
  /* 10833747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833749 jle 0x108337c8 */
  if ((C.zf||C.sf!=C.of)) goto L_108337c8;
  /* 1083374b mov esi, esp */
  ESI = (ESP);
  /* 1083374d push 6 */
  push32((uint32_t)(0x6u));
  /* 1083374f call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833755u);
  /* 10833755 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083375a call 0x10834ad0 */
  push32(0x1083375fu); f_10834ad0();
  /* 1083375f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833766 je 0x108337c8 */
  if (C.zf) goto L_108337c8;
  /* 10833768 mov esi, esp */
  ESI = (ESP);
  /* 1083376a push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1083376c call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833772u);
  /* 10833772 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833777 call 0x10834ad0 */
  push32(0x1083377cu); f_10834ad0();
  /* 1083377c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833781 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833783 jne 0x108337c8 */
  if (!C.zf) goto L_108337c8;
  /* 10833785 mov esi, esp */
  ESI = (ESP);
  /* 10833787 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833789 push 6 */
  push32((uint32_t)(0x6u));
  /* 1083378b call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833791u);
  /* 10833791 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833794 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833796 call 0x10834ad0 */
  push32(0x1083379bu); f_10834ad0();
  /* 1083379b mov esi, esp */
  ESI = (ESP);
  /* 1083379d push 0x1085c1ec */
  push32((uint32_t)(0x1085c1ecu));
  /* 108337a2 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x108337a8u);
  /* 108337a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108337ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108337ad call 0x10834ad0 */
  push32(0x108337b2u); f_10834ad0();
  /* 108337b2 mov esi, esp */
  ESI = (ESP);
  /* 108337b4 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 108337b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 108337b8 call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x108337beu);
  /* 108337be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108337c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108337c3 call 0x10834ad0 */
  push32(0x108337c8u); f_10834ad0();
L_108337c8:;
  /* 108337c8 mov esi, esp */
  ESI = (ESP);
  /* 108337ca push 7 */
  push32((uint32_t)(0x7u));
  /* 108337cc call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x108337d2u);
  /* 108337d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108337d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108337d7 call 0x10834ad0 */
  push32(0x108337dcu); f_10834ad0();
  /* 108337dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108337e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108337e3 je 0x1083382f */
  if (C.zf) goto L_1083382f;
  /* 108337e5 mov esi, esp */
  ESI = (ESP);
  /* 108337e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108337e9 push 0x10861478 */
  push32((uint32_t)(0x10861478u));
  /* 108337ee call dword ptr [0x108644a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644a8))), 0x108337f4u);
  /* 108337f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108337f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108337f9 call 0x10834ad0 */
  push32(0x108337feu); f_10834ad0();
  /* 108337fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833800 jle 0x1083382f */
  if ((C.zf||C.sf!=C.of)) goto L_1083382f;
  /* 10833802 mov esi, esp */
  ESI = (ESP);
  /* 10833804 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833806 push 7 */
  push32((uint32_t)(0x7u));
  /* 10833808 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x1083380eu);
  /* 1083380e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833813 call 0x10834ad0 */
  push32(0x10833818u); f_10834ad0();
  /* 10833818 mov esi, esp */
  ESI = (ESP);
  /* 1083381a push 0x1085c1e4 */
  push32((uint32_t)(0x1085c1e4u));
  /* 1083381f call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833825u);
  /* 10833825 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833828 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083382a call 0x10834ad0 */
  push32(0x1083382fu); f_10834ad0();
L_1083382f:;
  /* 1083382f mov esi, esp */
  ESI = (ESP);
  /* 10833831 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833833 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833839u);
  /* 10833839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083383c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083383e call 0x10834ad0 */
  push32(0x10833843u); f_10834ad0();
  /* 10833843 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083384a je 0x10833da5 */
  if (C.zf) goto L_10833da5;
  /* 10833850 mov esi, esp */
  ESI = (ESP);
  /* 10833852 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10833857 push 0x10861448 */
  push32((uint32_t)(0x10861448u));
  /* 1083385c call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10833862u);
  /* 10833862 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833867 call 0x10834ad0 */
  push32(0x1083386cu); f_10834ad0();
  /* 1083386c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083386e jle 0x10833da5 */
  if ((C.zf||C.sf!=C.of)) goto L_10833da5;
  /* 10833874 push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 10833879 call 0x10831005 */
  push32(0x1083387eu); f_10831005();
  /* 1083387e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833881 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833883 jle 0x10833da5 */
  if ((C.zf||C.sf!=C.of)) goto L_10833da5;
  /* 10833889 mov esi, esp */
  ESI = (ESP);
  /* 1083388b push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1083388d call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833893u);
  /* 10833893 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833898 call 0x10834ad0 */
  push32(0x1083389du); f_10834ad0();
  /* 1083389d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 108338a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108338a4 je 0x10833da5 */
  if (C.zf) goto L_10833da5;
  /* 108338aa mov esi, esp */
  ESI = (ESP);
  /* 108338ac push 0 */
  push32((uint32_t)(0x0u));
  /* 108338ae push 0x34 */
  push32((uint32_t)(0x34u));
  /* 108338b0 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x108338b6u);
  /* 108338b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108338b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108338bb call 0x10834ad0 */
  push32(0x108338c0u); f_10834ad0();
  /* 108338c0 mov esi, esp */
  ESI = (ESP);
  /* 108338c2 push 0x1085c1d4 */
  push32((uint32_t)(0x1085c1d4u));
  /* 108338c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108338c9 push 0x1085c1cc */
  push32((uint32_t)(0x1085c1ccu));
  /* 108338ce push 9 */
  push32((uint32_t)(0x9u));
  /* 108338d0 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x108338d6u);
  /* 108338d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108338d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108338db call 0x10834ad0 */
  push32(0x108338e0u); f_10834ad0();
  /* 108338e0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 108338e3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108338e7 je 0x108338f8 */
  if (C.zf) goto L_108338f8;
  /* 108338e9 cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108338ed je 0x108339c3 */
  if (C.zf) goto L_108339c3;
  /* 108338f3 jmp 0x10833da5 */
  goto L_10833da5;
L_108338f8:;
  /* 108338f8 mov esi, esp */
  ESI = (ESP);
  /* 108338fa push 0x1085c1c0 */
  push32((uint32_t)(0x1085c1c0u));
  /* 108338ff call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833905u);
  /* 10833905 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833908 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083390a call 0x10834ad0 */
  push32(0x1083390fu); f_10834ad0();
  /* 1083390f mov esi, esp */
  ESI = (ESP);
  /* 10833911 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833913 push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 10833918 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083391a call dword ptr [0x108644dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644dc))), 0x10833920u);
  /* 10833920 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833923 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833925 call 0x10834ad0 */
  push32(0x1083392au); f_10834ad0();
  /* 1083392a mov esi, esp */
  ESI = (ESP);
  /* 1083392c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083392e call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10833934u);
  /* 10833934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833939 call 0x10834ad0 */
  push32(0x1083393eu); f_10834ad0();
  /* 1083393e mov esi, esp */
  ESI = (ESP);
  /* 10833940 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833942 push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10833947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833949 call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x1083394fu);
  /* 1083394f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833954 call 0x10834ad0 */
  push32(0x10833959u); f_10834ad0();
  /* 10833959 mov esi, esp */
  ESI = (ESP);
  /* 1083395b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083395d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083395f push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10833964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833966 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x1083396cu);
  /* 1083396c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083396f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833971 call 0x10834ad0 */
  push32(0x10833976u); f_10834ad0();
  /* 10833976 mov esi, esp */
  ESI = (ESP);
  /* 10833978 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083397a push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 1083397f call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833985u);
  /* 10833985 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833988 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083398a call 0x10834ad0 */
  push32(0x1083398fu); f_10834ad0();
  /* 1083398f mov esi, esp */
  ESI = (ESP);
  /* 10833991 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833993 push 2 */
  push32((uint32_t)(0x2u));
  /* 10833995 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x1083399bu);
  /* 1083399b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083399e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339a0 call 0x10834ad0 */
  push32(0x108339a5u); f_10834ad0();
  /* 108339a5 mov esi, esp */
  ESI = (ESP);
  /* 108339a7 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 108339ac push 3 */
  push32((uint32_t)(0x3u));
  /* 108339ae call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x108339b4u);
  /* 108339b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108339b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339b9 call 0x10834ad0 */
  push32(0x108339beu); f_10834ad0();
  /* 108339be jmp 0x10833da5 */
  goto L_10833da5;
L_108339c3:;
  /* 108339c3 mov esi, esp */
  ESI = (ESP);
  /* 108339c5 push 0x1085c1a8 */
  push32((uint32_t)(0x1085c1a8u));
  /* 108339ca push 0 */
  push32((uint32_t)(0x0u));
  /* 108339cc push 0x1085c19c */
  push32((uint32_t)(0x1085c19cu));
  /* 108339d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 108339d3 call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x108339d9u);
  /* 108339d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108339dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339de call 0x10834ad0 */
  push32(0x108339e3u); f_10834ad0();
  /* 108339e3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 108339e6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339ea je 0x10833a05 */
  if (C.zf) goto L_10833a05;
  /* 108339ec cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339f0 je 0x10833ad0 */
  if (C.zf) goto L_10833ad0;
  /* 108339f6 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108339fa je 0x10833b4a */
  if (C.zf) goto L_10833b4a;
  /* 10833a00 jmp 0x10833da5 */
  goto L_10833da5;
L_10833a05:;
  /* 10833a05 mov esi, esp */
  ESI = (ESP);
  /* 10833a07 push 0x1085c1c0 */
  push32((uint32_t)(0x1085c1c0u));
  /* 10833a0c call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833a12u);
  /* 10833a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a17 call 0x10834ad0 */
  push32(0x10833a1cu); f_10834ad0();
  /* 10833a1c mov esi, esp */
  ESI = (ESP);
  /* 10833a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a20 push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 10833a25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a27 call dword ptr [0x108644dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644dc))), 0x10833a2du);
  /* 10833a2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a30 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a32 call 0x10834ad0 */
  push32(0x10833a37u); f_10834ad0();
  /* 10833a37 mov esi, esp */
  ESI = (ESP);
  /* 10833a39 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a3b call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10833a41u);
  /* 10833a41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a46 call 0x10834ad0 */
  push32(0x10833a4bu); f_10834ad0();
  /* 10833a4b mov esi, esp */
  ESI = (ESP);
  /* 10833a4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a4f push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10833a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a56 call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x10833a5cu);
  /* 10833a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a61 call 0x10834ad0 */
  push32(0x10833a66u); f_10834ad0();
  /* 10833a66 mov esi, esp */
  ESI = (ESP);
  /* 10833a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a6c push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10833a71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a73 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10833a79u);
  /* 10833a79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a7e call 0x10834ad0 */
  push32(0x10833a83u); f_10834ad0();
  /* 10833a83 mov esi, esp */
  ESI = (ESP);
  /* 10833a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833a87 push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 10833a8c call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833a92u);
  /* 10833a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833a97 call 0x10834ad0 */
  push32(0x10833a9cu); f_10834ad0();
  /* 10833a9c mov esi, esp */
  ESI = (ESP);
  /* 10833a9e push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833aa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10833aa2 call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10833aa8u);
  /* 10833aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833aad call 0x10834ad0 */
  push32(0x10833ab2u); f_10834ad0();
  /* 10833ab2 mov esi, esp */
  ESI = (ESP);
  /* 10833ab4 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10833ab9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10833abb call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10833ac1u);
  /* 10833ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ac6 call 0x10834ad0 */
  push32(0x10833acbu); f_10834ad0();
  /* 10833acb jmp 0x10833da5 */
  goto L_10833da5;
L_10833ad0:;
  /* 10833ad0 mov esi, esp */
  ESI = (ESP);
  /* 10833ad2 push 0x1085c190 */
  push32((uint32_t)(0x1085c190u));
  /* 10833ad7 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833addu);
  /* 10833add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ae2 call 0x10834ad0 */
  push32(0x10833ae7u); f_10834ad0();
  /* 10833ae7 mov esi, esp */
  ESI = (ESP);
  /* 10833ae9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10833aeb push 0 */
  push32((uint32_t)(0x0u));
  /* 10833aed call dword ptr [0x1086445c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086445c))), 0x10833af3u);
  /* 10833af3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833af6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833af8 call 0x10834ad0 */
  push32(0x10833afdu); f_10834ad0();
  /* 10833afd mov esi, esp */
  ESI = (ESP);
  /* 10833aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10833b01 push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 10833b06 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833b0cu);
  /* 10833b0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b11 call 0x10834ad0 */
  push32(0x10833b16u); f_10834ad0();
  /* 10833b16 mov esi, esp */
  ESI = (ESP);
  /* 10833b18 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10833b1d push 4 */
  push32((uint32_t)(0x4u));
  /* 10833b1f call dword ptr [0x108644b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b8))), 0x10833b25u);
  /* 10833b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b2a call 0x10834ad0 */
  push32(0x10833b2fu); f_10834ad0();
  /* 10833b2f mov esi, esp */
  ESI = (ESP);
  /* 10833b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833b33 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833b35 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833b3bu);
  /* 10833b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b40 call 0x10834ad0 */
  push32(0x10833b45u); f_10834ad0();
  /* 10833b45 jmp 0x10833da5 */
  goto L_10833da5;
L_10833b4a:;
  /* 10833b4a mov esi, esp */
  ESI = (ESP);
  /* 10833b4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10833b4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10833b50 call dword ptr [0x1086448c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086448c))), 0x10833b56u);
  /* 10833b56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833b59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b5b call 0x10834ad0 */
  push32(0x10833b60u); f_10834ad0();
  /* 10833b60 cmp eax, 0x1f4 */
  { uint32_t _a=(EAX),_b=(0x1f4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b65 jge 0x10833c4e */
  if ((C.sf==C.of)) goto L_10833c4e;
  /* 10833b6b mov esi, esp */
  ESI = (ESP);
  /* 10833b6d push 0x1085c178 */
  push32((uint32_t)(0x1085c178u));
  /* 10833b72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833b74 push 0x1085c16c */
  push32((uint32_t)(0x1085c16cu));
  /* 10833b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10833b7b call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10833b81u);
  /* 10833b81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833b84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b86 call 0x10834ad0 */
  push32(0x10833b8bu); f_10834ad0();
  /* 10833b8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10833b8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b92 je 0x10833ba5 */
  if (C.zf) goto L_10833ba5;
  /* 10833b94 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b98 je 0x10833bd4 */
  if (C.zf) goto L_10833bd4;
  /* 10833b9a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833b9e je 0x10833bed */
  if (C.zf) goto L_10833bed;
  /* 10833ba0 jmp 0x10833c49 */
  goto L_10833c49;
L_10833ba5:;
  /* 10833ba5 mov esi, esp */
  ESI = (ESP);
  /* 10833ba7 push 0x1085c160 */
  push32((uint32_t)(0x1085c160u));
  /* 10833bac call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833bb2u);
  /* 10833bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833bb7 call 0x10834ad0 */
  push32(0x10833bbcu); f_10834ad0();
  /* 10833bbc mov esi, esp */
  ESI = (ESP);
  /* 10833bbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10833bc0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833bc2 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833bc8u);
  /* 10833bc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833bcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833bcd call 0x10834ad0 */
  push32(0x10833bd2u); f_10834ad0();
  /* 10833bd2 jmp 0x10833c49 */
  goto L_10833c49;
L_10833bd4:;
  /* 10833bd4 mov esi, esp */
  ESI = (ESP);
  /* 10833bd6 push 0x1085c154 */
  push32((uint32_t)(0x1085c154u));
  /* 10833bdb call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833be1u);
  /* 10833be1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833be4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833be6 call 0x10834ad0 */
  push32(0x10833bebu); f_10834ad0();
  /* 10833beb jmp 0x10833c49 */
  goto L_10833c49;
L_10833bed:;
  /* 10833bed mov esi, esp */
  ESI = (ESP);
  /* 10833bef push 0x1085c148 */
  push32((uint32_t)(0x1085c148u));
  /* 10833bf4 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833bfau);
  /* 10833bfa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833bfd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833bff call 0x10834ad0 */
  push32(0x10833c04u); f_10834ad0();
  /* 10833c04 mov esi, esp */
  ESI = (ESP);
  /* 10833c06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833c08 push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 10833c0d call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833c13u);
  /* 10833c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c18 call 0x10834ad0 */
  push32(0x10833c1du); f_10834ad0();
  /* 10833c1d mov esi, esp */
  ESI = (ESP);
  /* 10833c1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10833c21 push 4 */
  push32((uint32_t)(0x4u));
  /* 10833c23 call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10833c29u);
  /* 10833c29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c2e call 0x10834ad0 */
  push32(0x10833c33u); f_10834ad0();
  /* 10833c33 mov esi, esp */
  ESI = (ESP);
  /* 10833c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833c37 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833c39 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833c3fu);
  /* 10833c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833c42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c44 call 0x10834ad0 */
  push32(0x10833c49u); f_10834ad0();
L_10833c49:;
  /* 10833c49 jmp 0x10833da5 */
  goto L_10833da5;
L_10833c4e:;
  /* 10833c4e mov esi, esp */
  ESI = (ESP);
  /* 10833c50 push 0x1085c12c */
  push32((uint32_t)(0x1085c12cu));
  /* 10833c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833c57 push 0x1085c16c */
  push32((uint32_t)(0x1085c16cu));
  /* 10833c5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10833c5e call dword ptr [0x108644b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b4))), 0x10833c64u);
  /* 10833c64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833c67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c69 call 0x10834ad0 */
  push32(0x10833c6eu); f_10834ad0();
  /* 10833c6e mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10833c71 cmp dword ptr [ebp - 0x2c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c75 ja 0x10833da5 */
  if ((!C.cf&&!C.zf)) goto L_10833da5;
  /* 10833c7b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10833c7e jmp dword ptr [edx*4 + 0x10833f1d] */
  switch (EDX) {
    case 0: goto L_10833c85;
    case 1: goto L_10833cb7;
    case 2: goto L_10833d30;
    case 3: goto L_10833d49;
    default: x86_unimpl("switch@0x10833c7e out of table"); return;
  }
L_10833c85:;
  /* 10833c85 mov esi, esp */
  ESI = (ESP);
  /* 10833c87 push 0x1085c160 */
  push32((uint32_t)(0x1085c160u));
  /* 10833c8c call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833c92u);
  /* 10833c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833c95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833c97 call 0x10834ad0 */
  push32(0x10833c9cu); f_10834ad0();
  /* 10833c9c mov esi, esp */
  ESI = (ESP);
  /* 10833c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10833ca0 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833ca2 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833ca8u);
  /* 10833ca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833cab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833cad call 0x10834ad0 */
  push32(0x10833cb2u); f_10834ad0();
  /* 10833cb2 jmp 0x10833da5 */
  goto L_10833da5;
L_10833cb7:;
  /* 10833cb7 mov esi, esp */
  ESI = (ESP);
  /* 10833cb9 push 0x1085c120 */
  push32((uint32_t)(0x1085c120u));
  /* 10833cbe call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833cc4u);
  /* 10833cc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833cc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833cc9 call 0x10834ad0 */
  push32(0x10833cceu); f_10834ad0();
  /* 10833cce mov esi, esp */
  ESI = (ESP);
  /* 10833cd0 push 0xfffffe0c */
  push32((uint32_t)(0xfffffe0cu));
  /* 10833cd5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833cd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833cd9 call dword ptr [0x108644bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644bc))), 0x10833cdfu);
  /* 10833cdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ce4 call 0x10834ad0 */
  push32(0x10833ce9u); f_10834ad0();
  /* 10833ce9 mov esi, esp */
  ESI = (ESP);
  /* 10833ceb push 0 */
  push32((uint32_t)(0x0u));
  /* 10833ced push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 10833cf2 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833cf8u);
  /* 10833cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833cfd call 0x10834ad0 */
  push32(0x10833d02u); f_10834ad0();
  /* 10833d02 mov esi, esp */
  ESI = (ESP);
  /* 10833d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833d06 push 4 */
  push32((uint32_t)(0x4u));
  /* 10833d08 call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10833d0eu);
  /* 10833d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d13 call 0x10834ad0 */
  push32(0x10833d18u); f_10834ad0();
  /* 10833d18 mov esi, esp */
  ESI = (ESP);
  /* 10833d1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10833d1c push 8 */
  push32((uint32_t)(0x8u));
  /* 10833d1e call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833d24u);
  /* 10833d24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d29 call 0x10834ad0 */
  push32(0x10833d2eu); f_10834ad0();
  /* 10833d2e jmp 0x10833da5 */
  goto L_10833da5;
L_10833d30:;
  /* 10833d30 mov esi, esp */
  ESI = (ESP);
  /* 10833d32 push 0x1085c154 */
  push32((uint32_t)(0x1085c154u));
  /* 10833d37 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833d3du);
  /* 10833d3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d42 call 0x10834ad0 */
  push32(0x10833d47u); f_10834ad0();
  /* 10833d47 jmp 0x10833da5 */
  goto L_10833da5;
L_10833d49:;
  /* 10833d49 mov esi, esp */
  ESI = (ESP);
  /* 10833d4b push 0x1085c148 */
  push32((uint32_t)(0x1085c148u));
  /* 10833d50 call dword ptr [0x10864464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864464))), 0x10833d56u);
  /* 10833d56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d5b call 0x10834ad0 */
  push32(0x10833d60u); f_10834ad0();
  /* 10833d60 mov esi, esp */
  ESI = (ESP);
  /* 10833d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833d64 push 0x10861400 */
  push32((uint32_t)(0x10861400u));
  /* 10833d69 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833d6fu);
  /* 10833d6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d74 call 0x10834ad0 */
  push32(0x10833d79u); f_10834ad0();
  /* 10833d79 mov esi, esp */
  ESI = (ESP);
  /* 10833d7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10833d7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10833d7f call dword ptr [0x108644ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644ac))), 0x10833d85u);
  /* 10833d85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833d8a call 0x10834ad0 */
  push32(0x10833d8fu); f_10834ad0();
  /* 10833d8f mov esi, esp */
  ESI = (ESP);
  /* 10833d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833d93 push 8 */
  push32((uint32_t)(0x8u));
  /* 10833d95 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833d9bu);
  /* 10833d9b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833d9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833da0 call 0x10834ad0 */
  push32(0x10833da5u); f_10834ad0();
L_10833da5:;
  /* 10833da5 mov esi, esp */
  ESI = (ESP);
  /* 10833da7 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10833da9 call dword ptr [0x10864450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864450))), 0x10833dafu);
  /* 10833daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833db2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833db4 call 0x10834ad0 */
  push32(0x10833db9u); f_10834ad0();
  /* 10833db9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833dbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833dc0 jne 0x10833df8 */
  if (!C.zf) goto L_10833df8;
  /* 10833dc2 mov esi, esp */
  ESI = (ESP);
  /* 10833dc4 push 0x108613f0 */
  push32((uint32_t)(0x108613f0u));
  /* 10833dc9 push 0x10861448 */
  push32((uint32_t)(0x10861448u));
  /* 10833dce call dword ptr [0x108644b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644b0))), 0x10833dd4u);
  /* 10833dd4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833dd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833dd9 call 0x10834ad0 */
  push32(0x10833ddeu); f_10834ad0();
  /* 10833dde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833de0 jne 0x10833df8 */
  if (!C.zf) goto L_10833df8;
  /* 10833de2 mov esi, esp */
  ESI = (ESP);
  /* 10833de4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10833de6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10833de8 call dword ptr [0x10864458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864458))), 0x10833deeu);
  /* 10833dee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833df3 call 0x10834ad0 */
  push32(0x10833df8u); f_10834ad0();
L_10833df8:;
  /* 10833df8 mov esi, esp */
  ESI = (ESP);
  /* 10833dfa push 2 */
  push32((uint32_t)(0x2u));
  /* 10833dfc call dword ptr [0x108644e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e0))), 0x10833e02u);
  /* 10833e02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e07 call 0x10834ad0 */
  push32(0x10833e0cu); f_10834ad0();
  /* 10833e0c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833e11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833e13 je 0x10833ecc */
  if (C.zf) goto L_10833ecc;
  /* 10833e19 mov esi, esp */
  ESI = (ESP);
  /* 10833e1b push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e1d push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 10833e22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e24 call dword ptr [0x108644dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644dc))), 0x10833e2au);
  /* 10833e2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e2f call 0x10834ad0 */
  push32(0x10833e34u); f_10834ad0();
  /* 10833e34 mov esi, esp */
  ESI = (ESP);
  /* 10833e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e38 call dword ptr [0x108644cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644cc))), 0x10833e3eu);
  /* 10833e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e43 call 0x10834ad0 */
  push32(0x10833e48u); f_10834ad0();
  /* 10833e48 mov esi, esp */
  ESI = (ESP);
  /* 10833e4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e4c push 0x10861408 */
  push32((uint32_t)(0x10861408u));
  /* 10833e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e53 call dword ptr [0x108644c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644c4))), 0x10833e59u);
  /* 10833e59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e5e call 0x10834ad0 */
  push32(0x10833e63u); f_10834ad0();
  /* 10833e63 mov esi, esp */
  ESI = (ESP);
  /* 10833e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e69 push 0x10861468 */
  push32((uint32_t)(0x10861468u));
  /* 10833e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e70 call dword ptr [0x10864470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864470))), 0x10833e76u);
  /* 10833e76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e7b call 0x10834ad0 */
  push32(0x10833e80u); f_10834ad0();
  /* 10833e80 mov esi, esp */
  ESI = (ESP);
  /* 10833e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10833e84 push 0x10861430 */
  push32((uint32_t)(0x10861430u));
  /* 10833e89 call dword ptr [0x10864460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864460))), 0x10833e8fu);
  /* 10833e8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833e94 call 0x10834ad0 */
  push32(0x10833e99u); f_10834ad0();
  /* 10833e99 mov esi, esp */
  ESI = (ESP);
  /* 10833e9b push 3 */
  push32((uint32_t)(0x3u));
  /* 10833e9d call dword ptr [0x108644e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644e4))), 0x10833ea3u);
  /* 10833ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ea8 call 0x10834ad0 */
  push32(0x10833eadu); f_10834ad0();
  /* 10833ead and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10833eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10833eb4 jne 0x10833ecc */
  if (!C.zf) goto L_10833ecc;
  /* 10833eb6 mov esi, esp */
  ESI = (ESP);
  /* 10833eb8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10833eba push 2 */
  push32((uint32_t)(0x2u));
  /* 10833ebc call dword ptr [0x108644d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108644d0))), 0x10833ec2u);
  /* 10833ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ec5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ec7 call 0x10834ad0 */
  push32(0x10833eccu); f_10834ad0();
L_10833ecc:;
  /* 10833ecc pop edi */
  EDI = (pop32());
  /* 10833ecd pop esi */
  ESI = (pop32());
  /* 10833ece pop ebx */
  EBX = (pop32());
  /* 10833ecf add esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10833ed2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10833ed4 call 0x10834ad0 */
  push32(0x10833ed9u); f_10834ad0();
  /* 10833ed9 mov esp, ebp */
  ESP = (EBP);
  /* 10833edb pop ebp */
  EBP = (pop32());
  /* 10833edc ret  */
  ESPCHK(0x10831660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004960 @ 0x10834960 (63 bytes, 26 insns) */
void f_10834960(void) {
  FTRACE(0x10834960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834960 push ebp */
  push32((uint32_t)(EBP));
  /* 10834961 mov ebp, esp */
  EBP = (ESP);
  /* 10834963 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10834966 push ebx */
  push32((uint32_t)(EBX));
  /* 10834967 push esi */
  push32((uint32_t)(ESI));
  /* 10834968 push edi */
  push32((uint32_t)(EDI));
  /* 10834969 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1083496c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10834971 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10834976 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10834978 mov esi, esp */
  ESI = (ESP);
  /* 1083497a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083497d push eax */
  push32((uint32_t)(EAX));
  /* 1083497e call dword ptr [0x10864454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864454))), 0x10834984u);
  /* 10834984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834987 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834989 call 0x10834ad0 */
  push32(0x1083498eu); f_10834ad0();
  /* 1083498e pop edi */
  EDI = (pop32());
  /* 1083498f pop esi */
  ESI = (pop32());
  /* 10834990 pop ebx */
  EBX = (pop32());
  /* 10834991 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834994 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834996 call 0x10834ad0 */
  push32(0x1083499bu); f_10834ad0();
  /* 1083499b mov esp, ebp */
  ESP = (EBP);
  /* 1083499d pop ebp */
  EBP = (pop32());
  /* 1083499e ret  */
  ESPCHK(0x10834960u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10834ad0 (56 bytes, 28 insns) */
void f_10834ad0(void) {
  FTRACE(0x10834ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834ad0 jne 0x10834ad3 */
  if (!C.zf) goto L_10834ad3;
  /* 10834ad2 ret  */
  ESPCHK(0x10834ad0u, _esp0);
  ESP += 4; return;
L_10834ad3:;
  /* 10834ad3 push ebp */
  push32((uint32_t)(EBP));
  /* 10834ad4 mov ebp, esp */
  EBP = (ESP);
  /* 10834ad6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10834ad9 push eax */
  push32((uint32_t)(EAX));
  /* 10834ada push edx */
  push32((uint32_t)(EDX));
  /* 10834adb push ebx */
  push32((uint32_t)(EBX));
  /* 10834adc push esi */
  push32((uint32_t)(ESI));
  /* 10834add push edi */
  push32((uint32_t)(EDI));
  /* 10834ade push 0x1085c39c */
  push32((uint32_t)(0x1085c39cu));
  /* 10834ae3 push 0x1085c398 */
  push32((uint32_t)(0x1085c398u));
  /* 10834ae8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10834aea push 0x1085c388 */
  push32((uint32_t)(0x1085c388u));
  /* 10834aef push 1 */
  push32((uint32_t)(0x1u));
  /* 10834af1 call 0x10834ea0 */
  push32(0x10834af6u); f_10834ea0();
  /* 10834af6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834af9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834afc jne 0x10834aff */
  if (!C.zf) goto L_10834aff;
  /* 10834afe int3  */
  x86_unimpl("int3 @ 0x10834afe");
L_10834aff:;
  /* 10834aff pop edi */
  EDI = (pop32());
  /* 10834b00 pop esi */
  ESI = (pop32());
  /* 10834b01 pop ebx */
  EBX = (pop32());
  /* 10834b02 pop edx */
  EDX = (pop32());
  /* 10834b03 pop eax */
  EAX = (pop32());
  /* 10834b04 mov esp, ebp */
  ESP = (EBP);
  /* 10834b06 pop ebp */
  EBP = (pop32());
  /* 10834b07 ret  */
  ESPCHK(0x10834ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b10 @ 0x10834b10 (313 bytes, 78 insns) */
void f_10834b10(void) {
  FTRACE(0x10834b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10834b11 mov ebp, esp */
  EBP = (ESP);
  /* 10834b13 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834b17 jne 0x10834bd7 */
  if (!C.zf) goto L_10834bd7;
  /* 10834b1d call dword ptr [0x1086438c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086438c))), 0x10834b23u);
  /* 10834b23 mov dword ptr [0x1086158c], eax */
  w32((uint32_t)(0x1086158c), (EAX));
  /* 10834b28 push 1 */
  push32((uint32_t)(0x1u));
  /* 10834b2a call 0x108385d0 */
  push32(0x10834b2fu); f_108385d0();
  /* 10834b2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834b32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834b34 jne 0x10834b3d */
  if (!C.zf) goto L_10834b3d;
  /* 10834b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834b38 jmp 0x10834c45 */
  goto L_10834c45;
L_10834b3d:;
  /* 10834b3d mov eax, dword ptr [0x1086158c] */
  EAX = (r32((uint32_t)(0x1086158c)));
  /* 10834b42 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10834b45 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834b4a mov dword ptr [0x10861598], eax */
  w32((uint32_t)(0x10861598), (EAX));
  /* 10834b4f mov ecx, dword ptr [0x1086158c] */
  ECX = (r32((uint32_t)(0x1086158c)));
  /* 10834b55 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10834b5b mov dword ptr [0x10861594], ecx */
  w32((uint32_t)(0x10861594), (ECX));
  /* 10834b61 mov edx, dword ptr [0x10861594] */
  EDX = (r32((uint32_t)(0x10861594)));
  /* 10834b67 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10834b6a add edx, dword ptr [0x10861598] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10861598))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10834b70 mov dword ptr [0x10861590], edx */
  w32((uint32_t)(0x10861590), (EDX));
  /* 10834b76 mov eax, dword ptr [0x1086158c] */
  EAX = (r32((uint32_t)(0x1086158c)));
  /* 10834b7b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10834b7e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834b83 mov dword ptr [0x1086158c], eax */
  w32((uint32_t)(0x1086158c), (EAX));
  /* 10834b88 call 0x10835740 */
  push32(0x10834b8du); f_10835740();
  /* 10834b8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834b8f jne 0x10834b9d */
  if (!C.zf) goto L_10834b9d;
  /* 10834b91 call 0x10838620 */
  push32(0x10834b96u); f_10838620();
  /* 10834b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834b98 jmp 0x10834c45 */
  goto L_10834c45;
L_10834b9d:;
  /* 10834b9d call dword ptr [0x10864388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864388))), 0x10834ba3u);
  /* 10834ba3 mov dword ptr [0x108630cc], eax */
  w32((uint32_t)(0x108630cc), (EAX));
  /* 10834ba8 call 0x108383b0 */
  push32(0x10834badu); f_108383b0();
  /* 10834bad mov dword ptr [0x10861574], eax */
  w32((uint32_t)(0x10861574), (EAX));
  /* 10834bb2 call 0x108359f0 */
  push32(0x10834bb7u); f_108359f0();
  /* 10834bb7 call 0x10837ea0 */
  push32(0x10834bbcu); f_10837ea0();
  /* 10834bbc call 0x10837d50 */
  push32(0x10834bc1u); f_10837d50();
  /* 10834bc1 call 0x10835540 */
  push32(0x10834bc6u); f_10835540();
  /* 10834bc6 mov ecx, dword ptr [0x10861570] */
  ECX = (r32((uint32_t)(0x10861570)));
  /* 10834bcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10834bcf mov dword ptr [0x10861570], ecx */
  w32((uint32_t)(0x10861570), (ECX));
  /* 10834bd5 jmp 0x10834c40 */
  goto L_10834c40;
L_10834bd7:;
  /* 10834bd7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834bdb jne 0x10834c30 */
  if (!C.zf) goto L_10834c30;
  /* 10834bdd cmp dword ptr [0x10861570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834be4 jle 0x10834c2a */
  if ((C.zf||C.sf!=C.of)) goto L_10834c2a;
  /* 10834be6 mov edx, dword ptr [0x10861570] */
  EDX = (r32((uint32_t)(0x10861570)));
  /* 10834bec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10834bef mov dword ptr [0x10861570], edx */
  w32((uint32_t)(0x10861570), (EDX));
  /* 10834bf5 cmp dword ptr [0x108615c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834bfc jne 0x10834c03 */
  if (!C.zf) goto L_10834c03;
  /* 10834bfe call 0x108355c0 */
  push32(0x10834c03u); f_108355c0();
L_10834c03:;
  /* 10834c03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10834c05 call 0x108372f0 */
  push32(0x10834c0au); f_108372f0();
  /* 10834c0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834c0d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10834c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834c12 je 0x10834c19 */
  if (C.zf) goto L_10834c19;
  /* 10834c14 call 0x10837c00 */
  push32(0x10834c19u); f_10837c00();
L_10834c19:;
  /* 10834c19 call 0x10835d20 */
  push32(0x10834c1eu); f_10835d20();
  /* 10834c1e call 0x108357d0 */
  push32(0x10834c23u); f_108357d0();
  /* 10834c23 call 0x10838620 */
  push32(0x10834c28u); f_10838620();
  /* 10834c28 jmp 0x10834c2e */
  goto L_10834c2e;
L_10834c2a:;
  /* 10834c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834c2c jmp 0x10834c45 */
  goto L_10834c45;
L_10834c2e:;
  /* 10834c2e jmp 0x10834c40 */
  goto L_10834c40;
L_10834c30:;
  /* 10834c30 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c34 jne 0x10834c40 */
  if (!C.zf) goto L_10834c40;
  /* 10834c36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10834c38 call 0x108358c0 */
  push32(0x10834c3du); f_108358c0();
  /* 10834c3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10834c40:;
  /* 10834c40 mov eax, 1 */
  EAX = (0x1u);
L_10834c45:;
  /* 10834c45 pop ebp */
  EBP = (pop32());
  /* 10834c46 ret 0xc */
  ESPCHK(0x10834b10u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10834c50 (243 bytes, 86 insns) */
void f_10834c50(void) {
  FTRACE(0x10834c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10834c51 mov ebp, esp */
  EBP = (ESP);
  /* 10834c53 push ecx */
  push32((uint32_t)(ECX));
  /* 10834c54 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10834c5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c5f jne 0x10834c71 */
  if (!C.zf) goto L_10834c71;
  /* 10834c61 cmp dword ptr [0x10861570], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861570))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c68 jne 0x10834c71 */
  if (!C.zf) goto L_10834c71;
  /* 10834c6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834c6c jmp 0x10834d3d */
  goto L_10834d3d;
L_10834c71:;
  /* 10834c71 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c75 je 0x10834c7d */
  if (C.zf) goto L_10834c7d;
  /* 10834c77 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c7b jne 0x10834cbf */
  if (!C.zf) goto L_10834cbf;
L_10834c7d:;
  /* 10834c7d cmp dword ptr [0x108630dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c84 je 0x10834c9b */
  if (C.zf) goto L_10834c9b;
  /* 10834c86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834c89 push eax */
  push32((uint32_t)(EAX));
  /* 10834c8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834c8d push ecx */
  push32((uint32_t)(ECX));
  /* 10834c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834c91 push edx */
  push32((uint32_t)(EDX));
  /* 10834c92 call dword ptr [0x108630dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108630dc))), 0x10834c98u);
  /* 10834c98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10834c9b:;
  /* 10834c9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834c9f je 0x10834cb5 */
  if (C.zf) goto L_10834cb5;
  /* 10834ca1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10834ca5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834ca8 push ecx */
  push32((uint32_t)(ECX));
  /* 10834ca9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834cac push edx */
  push32((uint32_t)(EDX));
  /* 10834cad call 0x10834b10 */
  push32(0x10834cb2u); f_10834b10();
  /* 10834cb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10834cb5:;
  /* 10834cb5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834cb9 jne 0x10834cbf */
  if (!C.zf) goto L_10834cbf;
  /* 10834cbb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834cbd jmp 0x10834d3d */
  goto L_10834d3d;
L_10834cbf:;
  /* 10834cbf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834cc2 push eax */
  push32((uint32_t)(EAX));
  /* 10834cc3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834cc6 push ecx */
  push32((uint32_t)(ECX));
  /* 10834cc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834cca push edx */
  push32((uint32_t)(EDX));
  /* 10834ccb call 0x1083100f */
  push32(0x10834cd0u); f_1083100f();
  /* 10834cd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10834cd3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834cd7 jne 0x10834cee */
  if (!C.zf) goto L_10834cee;
  /* 10834cd9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834cdd jne 0x10834cee */
  if (!C.zf) goto L_10834cee;
  /* 10834cdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10834ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10834ce5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834ce8 push ecx */
  push32((uint32_t)(ECX));
  /* 10834ce9 call 0x10834b10 */
  push32(0x10834ceeu); f_10834b10();
L_10834cee:;
  /* 10834cee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834cf2 je 0x10834cfa */
  if (C.zf) goto L_10834cfa;
  /* 10834cf4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834cf8 jne 0x10834d3a */
  if (!C.zf) goto L_10834d3a;
L_10834cfa:;
  /* 10834cfa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834cfd push edx */
  push32((uint32_t)(EDX));
  /* 10834cfe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834d01 push eax */
  push32((uint32_t)(EAX));
  /* 10834d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834d05 push ecx */
  push32((uint32_t)(ECX));
  /* 10834d06 call 0x10834b10 */
  push32(0x10834d0bu); f_10834b10();
  /* 10834d0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834d0d jne 0x10834d16 */
  if (!C.zf) goto L_10834d16;
  /* 10834d0f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10834d16:;
  /* 10834d16 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834d1a je 0x10834d3a */
  if (C.zf) goto L_10834d3a;
  /* 10834d1c cmp dword ptr [0x108630dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834d23 je 0x10834d3a */
  if (C.zf) goto L_10834d3a;
  /* 10834d25 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834d28 push edx */
  push32((uint32_t)(EDX));
  /* 10834d29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834d2c push eax */
  push32((uint32_t)(EAX));
  /* 10834d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834d30 push ecx */
  push32((uint32_t)(ECX));
  /* 10834d31 call dword ptr [0x108630dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108630dc))), 0x10834d37u);
  /* 10834d37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10834d3a:;
  /* 10834d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10834d3d:;
  /* 10834d3d mov esp, ebp */
  ESP = (EBP);
  /* 10834d3f pop ebp */
  EBP = (pop32());
  /* 10834d40 ret 0xc */
  ESPCHK(0x10834c50u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10834d50 (58 bytes, 18 insns) */
void f_10834d50(void) {
  FTRACE(0x10834d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10834d51 mov ebp, esp */
  EBP = (ESP);
  /* 10834d53 cmp dword ptr [0x1086157c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834d5a je 0x10834d6e */
  if (C.zf) goto L_10834d6e;
  /* 10834d5c cmp dword ptr [0x1086157c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834d63 jne 0x10834d73 */
  if (!C.zf) goto L_10834d73;
  /* 10834d65 cmp dword ptr [0x10861580], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861580))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834d6c jne 0x10834d73 */
  if (!C.zf) goto L_10834d73;
L_10834d6e:;
  /* 10834d6e call 0x108386c0 */
  push32(0x10834d73u); f_108386c0();
L_10834d73:;
  /* 10834d73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834d76 push eax */
  push32((uint32_t)(EAX));
  /* 10834d77 call 0x10838710 */
  push32(0x10834d7cu); f_10838710();
  /* 10834d7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834d7f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10834d84 call dword ptr [0x1085fa30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1085fa30))), 0x10834d8au);
  /* 10834d8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834d8d pop ebp */
  EBP = (pop32());
  /* 10834d8e ret  */
  ESPCHK(0x10834d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x10834d90 (11 bytes, 5 insns) */
void f_10834d90(void) {
  FTRACE(0x10834d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10834d91 mov ebp, esp */
  EBP = (ESP);
  /* 10834d93 call dword ptr [0x10864390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864390))), 0x10834d99u);
  /* 10834d99 pop ebp */
  EBP = (pop32());
  /* 10834d9a ret  */
  ESPCHK(0x10834d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004da0 @ 0x10834da0 (87 bytes, 30 insns) */
void f_10834da0(void) {
  FTRACE(0x10834da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10834da1 mov ebp, esp */
  EBP = (ESP);
  /* 10834da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10834da4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834da8 jl 0x10834db0 */
  if ((C.sf!=C.of)) goto L_10834db0;
  /* 10834daa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834dae jl 0x10834db5 */
  if ((C.sf!=C.of)) goto L_10834db5;
L_10834db0:;
  /* 10834db0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834db3 jmp 0x10834df3 */
  goto L_10834df3;
L_10834db5:;
  /* 10834db5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834db9 jne 0x10834dc7 */
  if (!C.zf) goto L_10834dc7;
  /* 10834dbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834dbe mov eax, dword ptr [eax*4 + 0x1085fa38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1085fa38)));
  /* 10834dc5 jmp 0x10834df3 */
  goto L_10834df3;
L_10834dc7:;
  /* 10834dc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834dca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10834dcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10834dcf je 0x10834dd6 */
  if (C.zf) goto L_10834dd6;
  /* 10834dd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834dd4 jmp 0x10834df3 */
  goto L_10834df3;
L_10834dd6:;
  /* 10834dd6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834dd9 mov eax, dword ptr [edx*4 + 0x1085fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1085fa38)));
  /* 10834de0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10834de3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834de6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834de9 mov dword ptr [ecx*4 + 0x1085fa38], edx */
  w32((uint32_t)(ECX*4 + 0x1085fa38), (EDX));
  /* 10834df0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10834df3:;
  /* 10834df3 mov esp, ebp */
  ESP = (EBP);
  /* 10834df5 pop ebp */
  EBP = (pop32());
  /* 10834df6 ret  */
  ESPCHK(0x10834da0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10834e00 (126 bytes, 38 insns) */
void f_10834e00(void) {
  FTRACE(0x10834e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834e00 push ebp */
  push32((uint32_t)(EBP));
  /* 10834e01 mov ebp, esp */
  EBP = (ESP);
  /* 10834e03 push ecx */
  push32((uint32_t)(ECX));
  /* 10834e04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834e08 jl 0x10834e10 */
  if ((C.sf!=C.of)) goto L_10834e10;
  /* 10834e0a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834e0e jl 0x10834e17 */
  if ((C.sf!=C.of)) goto L_10834e17;
L_10834e10:;
  /* 10834e10 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10834e15 jmp 0x10834e7a */
  goto L_10834e7a;
L_10834e17:;
  /* 10834e17 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834e1b jne 0x10834e29 */
  if (!C.zf) goto L_10834e29;
  /* 10834e1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e20 mov eax, dword ptr [eax*4 + 0x1085fa44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1085fa44)));
  /* 10834e27 jmp 0x10834e7a */
  goto L_10834e7a;
L_10834e29:;
  /* 10834e29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e2c mov edx, dword ptr [ecx*4 + 0x1085fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa44)));
  /* 10834e33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10834e36 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834e3a jne 0x10834e50 */
  if (!C.zf) goto L_10834e50;
  /* 10834e3c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10834e3e call dword ptr [0x10864394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864394))), 0x10834e44u);
  /* 10834e44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e47 mov dword ptr [ecx*4 + 0x1085fa44], eax */
  w32((uint32_t)(ECX*4 + 0x1085fa44), (EAX));
  /* 10834e4e jmp 0x10834e77 */
  goto L_10834e77;
L_10834e50:;
  /* 10834e50 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834e54 jne 0x10834e6a */
  if (!C.zf) goto L_10834e6a;
  /* 10834e56 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10834e58 call dword ptr [0x10864394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864394))), 0x10834e5eu);
  /* 10834e5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e61 mov dword ptr [edx*4 + 0x1085fa44], eax */
  w32((uint32_t)(EDX*4 + 0x1085fa44), (EAX));
  /* 10834e68 jmp 0x10834e77 */
  goto L_10834e77;
L_10834e6a:;
  /* 10834e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834e70 mov dword ptr [eax*4 + 0x1085fa44], ecx */
  w32((uint32_t)(EAX*4 + 0x1085fa44), (ECX));
L_10834e77:;
  /* 10834e77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10834e7a:;
  /* 10834e7a mov esp, ebp */
  ESP = (EBP);
  /* 10834e7c pop ebp */
  EBP = (pop32());
  /* 10834e7d ret  */
  ESPCHK(0x10834e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x10834e80 (28 bytes, 11 insns) */
void f_10834e80(void) {
  FTRACE(0x10834e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10834e81 mov ebp, esp */
  EBP = (ESP);
  /* 10834e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10834e84 mov eax, dword ptr [0x108630c0] */
  EAX = (r32((uint32_t)(0x108630c0)));
  /* 10834e89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10834e8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10834e8f mov dword ptr [0x108630c0], ecx */
  w32((uint32_t)(0x108630c0), (ECX));
  /* 10834e95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10834e98 mov esp, ebp */
  ESP = (EBP);
  /* 10834e9a pop ebp */
  EBP = (pop32());
  /* 10834e9b ret  */
  ESPCHK(0x10834e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea0 @ 0x10834ea0 (912 bytes, 248 insns) */
void f_10834ea0(void) {
  FTRACE(0x10834ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10834ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10834ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10834ea3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10834ea8 call 0x10838f80 */
  push32(0x10834eadu); f_10838f80();
  /* 10834ead push edi */
  push32((uint32_t)(EDI));
  /* 10834eae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10834eb5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10834eba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834ebc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10834ec2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10834ec4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10834ec6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10834ec7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10834ece mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10834ed3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834ed5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10834edb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10834edd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10834edf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10834ee0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10834ee7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10834eec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10834eee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10834ef4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10834ef6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10834ef8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10834ef9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10834efc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10834f02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f06 jl 0x10834f0e */
  if ((C.sf!=C.of)) goto L_10834f0e;
  /* 10834f08 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f0c jl 0x10834f16 */
  if ((C.sf!=C.of)) goto L_10834f16;
L_10834f0e:;
  /* 10834f0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834f11 jmp 0x1083522b */
  goto L_1083522b;
L_10834f16:;
  /* 10834f16 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f1a jne 0x10834fc0 */
  if (!C.zf) goto L_10834fc0;
  /* 10834f20 push 0x1085fa34 */
  push32((uint32_t)(0x1085fa34u));
  /* 10834f25 call dword ptr [0x108643ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643ac))), 0x10834f2bu);
  /* 10834f2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834f2d jle 0x10834fc0 */
  if ((C.zf||C.sf!=C.of)) goto L_10834fc0;
  /* 10834f33 cmp dword ptr [0x10861584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f3a jne 0x10834f7e */
  if (!C.zf) goto L_10834f7e;
  /* 10834f3c push 0x1085c544 */
  push32((uint32_t)(0x1085c544u));
  /* 10834f41 call dword ptr [0x108643a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a8))), 0x10834f47u);
  /* 10834f47 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10834f4d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f54 je 0x10834f76 */
  if (C.zf) goto L_10834f76;
  /* 10834f56 push 0x1085c538 */
  push32((uint32_t)(0x1085c538u));
  /* 10834f5b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10834f61 push ecx */
  push32((uint32_t)(ECX));
  /* 10834f62 call dword ptr [0x108643a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a4))), 0x10834f68u);
  /* 10834f68 mov dword ptr [0x10861584], eax */
  w32((uint32_t)(0x10861584), (EAX));
  /* 10834f6d cmp dword ptr [0x10861584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834f74 jne 0x10834f7e */
  if (!C.zf) goto L_10834f7e;
L_10834f76:;
  /* 10834f76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834f79 jmp 0x1083522b */
  goto L_1083522b;
L_10834f7e:;
  /* 10834f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10834f81 push edx */
  push32((uint32_t)(EDX));
  /* 10834f82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10834f85 push eax */
  push32((uint32_t)(EAX));
  /* 10834f86 push 0x1085c504 */
  push32((uint32_t)(0x1085c504u));
  /* 10834f8b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10834f91 push ecx */
  push32((uint32_t)(ECX));
  /* 10834f92 call dword ptr [0x10861584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861584))), 0x10834f98u);
  /* 10834f98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834f9b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10834fa1 push edx */
  push32((uint32_t)(EDX));
  /* 10834fa2 call dword ptr [0x108643a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a0))), 0x10834fa8u);
  /* 10834fa8 push 0x1085fa34 */
  push32((uint32_t)(0x1085fa34u));
  /* 10834fad call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x10834fb3u);
  /* 10834fb3 call 0x10834d90 */
  push32(0x10834fb8u); f_10834d90();
  /* 10834fb8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10834fbb jmp 0x1083522b */
  goto L_1083522b;
L_10834fc0:;
  /* 10834fc0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10834fc4 je 0x10834ffd */
  if (C.zf) goto L_10834ffd;
  /* 10834fc6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10834fcc push eax */
  push32((uint32_t)(EAX));
  /* 10834fcd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10834fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10834fd1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10834fd6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10834fdc push edx */
  push32((uint32_t)(EDX));
  /* 10834fdd call 0x10838e80 */
  push32(0x10834fe2u); f_10838e80();
  /* 10834fe2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10834fe5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10834fe7 jge 0x10834ffd */
  if ((C.sf==C.of)) goto L_10834ffd;
  /* 10834fe9 push 0x1085c4d8 */
  push32((uint32_t)(0x1085c4d8u));
  /* 10834fee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10834ff4 push eax */
  push32((uint32_t)(EAX));
  /* 10834ff5 call 0x10838d90 */
  push32(0x10834ffau); f_10838d90();
  /* 10834ffa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10834ffd:;
  /* 10834ffd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835001 jne 0x10835035 */
  if (!C.zf) goto L_10835035;
  /* 10835003 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835007 je 0x10835015 */
  if (C.zf) goto L_10835015;
  /* 10835009 mov dword ptr [ebp - 0x3028], 0x1085c4c4 */
  w32((uint32_t)(EBP + -0x3028), (0x1085c4c4u));
  /* 10835013 jmp 0x1083501f */
  goto L_1083501f;
L_10835015:;
  /* 10835015 mov dword ptr [ebp - 0x3028], 0x1085c4b0 */
  w32((uint32_t)(EBP + -0x3028), (0x1085c4b0u));
L_1083501f:;
  /* 1083501f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10835025 push ecx */
  push32((uint32_t)(ECX));
  /* 10835026 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1083502c push edx */
  push32((uint32_t)(EDX));
  /* 1083502d call 0x10838d90 */
  push32(0x10835032u); f_10838d90();
  /* 10835032 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835035:;
  /* 10835035 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1083503b push eax */
  push32((uint32_t)(EAX));
  /* 1083503c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10835042 push ecx */
  push32((uint32_t)(ECX));
  /* 10835043 call 0x10838da0 */
  push32(0x10835048u); f_10838da0();
  /* 10835048 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083504b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083504f jne 0x1083508a */
  if (!C.zf) goto L_1083508a;
  /* 10835051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835054 mov eax, dword ptr [edx*4 + 0x1085fa38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1085fa38)));
  /* 1083505b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1083505e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835060 je 0x10835076 */
  if (C.zf) goto L_10835076;
  /* 10835062 push 0x1085c4ac */
  push32((uint32_t)(0x1085c4acu));
  /* 10835067 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1083506d push ecx */
  push32((uint32_t)(ECX));
  /* 1083506e call 0x10838da0 */
  push32(0x10835073u); f_10838da0();
  /* 10835073 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835076:;
  /* 10835076 push 0x1085c4a8 */
  push32((uint32_t)(0x1085c4a8u));
  /* 1083507b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10835081 push edx */
  push32((uint32_t)(EDX));
  /* 10835082 call 0x10838da0 */
  push32(0x10835087u); f_10838da0();
  /* 10835087 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083508a:;
  /* 1083508a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083508e je 0x108350d2 */
  if (C.zf) goto L_108350d2;
  /* 10835090 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10835096 push eax */
  push32((uint32_t)(EAX));
  /* 10835097 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083509a push ecx */
  push32((uint32_t)(ECX));
  /* 1083509b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083509e push edx */
  push32((uint32_t)(EDX));
  /* 1083509f push 0x1085c49c */
  push32((uint32_t)(0x1085c49cu));
  /* 108350a4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108350a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108350af push eax */
  push32((uint32_t)(EAX));
  /* 108350b0 call 0x10838c90 */
  push32(0x108350b5u); f_10838c90();
  /* 108350b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108350b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108350ba jge 0x108350d0 */
  if ((C.sf==C.of)) goto L_108350d0;
  /* 108350bc push 0x1085c4d8 */
  push32((uint32_t)(0x1085c4d8u));
  /* 108350c1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 108350c7 push ecx */
  push32((uint32_t)(ECX));
  /* 108350c8 call 0x10838d90 */
  push32(0x108350cdu); f_10838d90();
  /* 108350cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108350d0:;
  /* 108350d0 jmp 0x108350e8 */
  goto L_108350e8;
L_108350d2:;
  /* 108350d2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 108350d8 push edx */
  push32((uint32_t)(EDX));
  /* 108350d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 108350df push eax */
  push32((uint32_t)(EAX));
  /* 108350e0 call 0x10838d90 */
  push32(0x108350e5u); f_10838d90();
  /* 108350e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108350e8:;
  /* 108350e8 cmp dword ptr [0x108630c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108350ef je 0x1083512c */
  if (C.zf) goto L_1083512c;
  /* 108350f1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 108350f7 push ecx */
  push32((uint32_t)(ECX));
  /* 108350f8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 108350fe push edx */
  push32((uint32_t)(EDX));
  /* 108350ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835102 push eax */
  push32((uint32_t)(EAX));
  /* 10835103 call dword ptr [0x108630c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108630c0))), 0x10835109u);
  /* 10835109 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083510c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083510e je 0x1083512c */
  if (C.zf) goto L_1083512c;
  /* 10835110 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835114 jne 0x10835121 */
  if (!C.zf) goto L_10835121;
  /* 10835116 push 0x1085fa34 */
  push32((uint32_t)(0x1085fa34u));
  /* 1083511b call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x10835121u);
L_10835121:;
  /* 10835121 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10835127 jmp 0x1083522b */
  goto L_1083522b;
L_1083512c:;
  /* 1083512c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083512f mov edx, dword ptr [ecx*4 + 0x1085fa38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa38)));
  /* 10835136 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10835139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083513b je 0x1083517b */
  if (C.zf) goto L_1083517b;
  /* 1083513d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835140 cmp dword ptr [eax*4 + 0x1085fa44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1085fa44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835148 je 0x1083517b */
  if (C.zf) goto L_1083517b;
  /* 1083514a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083514c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10835152 push ecx */
  push32((uint32_t)(ECX));
  /* 10835153 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10835159 push edx */
  push32((uint32_t)(EDX));
  /* 1083515a call 0x10838c10 */
  push32(0x1083515fu); f_10838c10();
  /* 1083515f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835162 push eax */
  push32((uint32_t)(EAX));
  /* 10835163 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10835169 push eax */
  push32((uint32_t)(EAX));
  /* 1083516a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083516d mov edx, dword ptr [ecx*4 + 0x1085fa44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa44)));
  /* 10835174 push edx */
  push32((uint32_t)(EDX));
  /* 10835175 call dword ptr [0x10864398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864398))), 0x1083517bu);
L_1083517b:;
  /* 1083517b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083517e mov ecx, dword ptr [eax*4 + 0x1085fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1085fa38)));
  /* 10835185 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10835188 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083518a je 0x10835199 */
  if (C.zf) goto L_10835199;
  /* 1083518c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10835192 push edx */
  push32((uint32_t)(EDX));
  /* 10835193 call dword ptr [0x108643a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a0))), 0x10835199u);
L_10835199:;
  /* 10835199 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083519c mov ecx, dword ptr [eax*4 + 0x1085fa38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1085fa38)));
  /* 108351a3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108351a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108351a8 je 0x10835218 */
  if (C.zf) goto L_10835218;
  /* 108351aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108351ae je 0x108351cd */
  if (C.zf) goto L_108351cd;
  /* 108351b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 108351b2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 108351b8 push edx */
  push32((uint32_t)(EDX));
  /* 108351b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108351bc push eax */
  push32((uint32_t)(EAX));
  /* 108351bd call 0x10838920 */
  push32(0x108351c2u); f_10838920();
  /* 108351c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108351c5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 108351cb jmp 0x108351d7 */
  goto L_108351d7;
L_108351cd:;
  /* 108351cd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_108351d7:;
  /* 108351d7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 108351dd push ecx */
  push32((uint32_t)(ECX));
  /* 108351de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108351e1 push edx */
  push32((uint32_t)(EDX));
  /* 108351e2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 108351e8 push eax */
  push32((uint32_t)(EAX));
  /* 108351e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108351ec push ecx */
  push32((uint32_t)(ECX));
  /* 108351ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108351f0 push edx */
  push32((uint32_t)(EDX));
  /* 108351f1 call 0x10835230 */
  push32(0x108351f6u); f_10835230();
  /* 108351f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108351f9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 108351ff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835203 jne 0x10835210 */
  if (!C.zf) goto L_10835210;
  /* 10835205 push 0x1085fa34 */
  push32((uint32_t)(0x1085fa34u));
  /* 1083520a call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x10835210u);
L_10835210:;
  /* 10835210 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10835216 jmp 0x1083522b */
  goto L_1083522b;
L_10835218:;
  /* 10835218 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083521c jne 0x10835229 */
  if (!C.zf) goto L_10835229;
  /* 1083521e push 0x1085fa34 */
  push32((uint32_t)(0x1085fa34u));
  /* 10835223 call dword ptr [0x1086439c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086439c))), 0x10835229u);
L_10835229:;
  /* 10835229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083522b:;
  /* 1083522b pop edi */
  EDI = (pop32());
  /* 1083522c mov esp, ebp */
  ESP = (EBP);
  /* 1083522e pop ebp */
  EBP = (pop32());
  /* 1083522f ret  */
  ESPCHK(0x10834ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005230 @ 0x10835230 (780 bytes, 197 insns) */
void f_10835230(void) {
  FTRACE(0x10835230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835230 push ebp */
  push32((uint32_t)(EBP));
  /* 10835231 mov ebp, esp */
  EBP = (ESP);
  /* 10835233 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10835238 call 0x10838f80 */
  push32(0x1083523du); f_10838f80();
L_1083523d:;
  /* 1083523d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835241 jne 0x10835268 */
  if (!C.zf) goto L_10835268;
  /* 10835243 push 0x1085c694 */
  push32((uint32_t)(0x1085c694u));
  /* 10835248 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083524a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1083524f push 0x1085c688 */
  push32((uint32_t)(0x1085c688u));
  /* 10835254 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835256 call 0x10834ea0 */
  push32(0x1083525bu); f_10834ea0();
  /* 1083525b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083525e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835261 jne 0x10835268 */
  if (!C.zf) goto L_10835268;
  /* 10835263 call 0x10834d90 */
  push32(0x10835268u); f_10834d90();
L_10835268:;
  /* 10835268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083526a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083526c jne 0x1083523d */
  if (!C.zf) goto L_1083523d;
  /* 1083526e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10835273 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10835279 push ecx */
  push32((uint32_t)(ECX));
  /* 1083527a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083527c call dword ptr [0x108643b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b0))), 0x10835282u);
  /* 10835282 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835284 jne 0x1083529a */
  if (!C.zf) goto L_1083529a;
  /* 10835286 push 0x1085c670 */
  push32((uint32_t)(0x1085c670u));
  /* 1083528b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10835291 push edx */
  push32((uint32_t)(EDX));
  /* 10835292 call 0x10838d90 */
  push32(0x10835297u); f_10838d90();
  /* 10835297 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083529a:;
  /* 1083529a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 108352a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108352a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108352a6 push ecx */
  push32((uint32_t)(ECX));
  /* 108352a7 call 0x10838c10 */
  push32(0x108352acu); f_10838c10();
  /* 108352ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108352af cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108352b2 jbe 0x108352dd */
  if ((C.cf||C.zf)) goto L_108352dd;
  /* 108352b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108352b7 push edx */
  push32((uint32_t)(EDX));
  /* 108352b8 call 0x10838c10 */
  push32(0x108352bdu); f_10838c10();
  /* 108352bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108352c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108352c3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 108352c7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 108352ca push 3 */
  push32((uint32_t)(0x3u));
  /* 108352cc push 0x1085c66c */
  push32((uint32_t)(0x1085c66cu));
  /* 108352d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108352d4 push eax */
  push32((uint32_t)(EAX));
  /* 108352d5 call 0x10839600 */
  push32(0x108352dau); f_10839600();
  /* 108352da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108352dd:;
  /* 108352dd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108352e0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 108352e6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108352ed je 0x10835338 */
  if (C.zf) goto L_10835338;
  /* 108352ef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 108352f5 push edx */
  push32((uint32_t)(EDX));
  /* 108352f6 call 0x10838c10 */
  push32(0x108352fbu); f_10838c10();
  /* 108352fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108352fe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835301 jbe 0x10835338 */
  if ((C.cf||C.zf)) goto L_10835338;
  /* 10835303 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10835309 push eax */
  push32((uint32_t)(EAX));
  /* 1083530a call 0x10838c10 */
  push32(0x1083530fu); f_10838c10();
  /* 1083530f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835312 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10835318 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1083531c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10835322 push 3 */
  push32((uint32_t)(0x3u));
  /* 10835324 push 0x1085c66c */
  push32((uint32_t)(0x1085c66cu));
  /* 10835329 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1083532f push eax */
  push32((uint32_t)(EAX));
  /* 10835330 call 0x10839600 */
  push32(0x10835335u); f_10839600();
  /* 10835335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835338:;
  /* 10835338 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083533c jne 0x1083534a */
  if (!C.zf) goto L_1083534a;
  /* 1083533e mov dword ptr [ebp - 0x1114], 0x1085c5f8 */
  w32((uint32_t)(EBP + -0x1114), (0x1085c5f8u));
  /* 10835348 jmp 0x10835354 */
  goto L_10835354;
L_1083534a:;
  /* 1083534a mov dword ptr [ebp - 0x1114], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1114), (0x1085c398u));
L_10835354:;
  /* 10835354 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10835357 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1083535a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083535c je 0x10835369 */
  if (C.zf) goto L_10835369;
  /* 1083535e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10835361 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10835367 jmp 0x10835373 */
  goto L_10835373;
L_10835369:;
  /* 10835369 mov dword ptr [ebp - 0x1118], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1118), (0x1085c398u));
L_10835373:;
  /* 10835373 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10835376 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10835379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083537b je 0x1083538f */
  if (C.zf) goto L_1083538f;
  /* 1083537d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835381 jne 0x1083538f */
  if (!C.zf) goto L_1083538f;
  /* 10835383 mov dword ptr [ebp - 0x111c], 0x1085c5e8 */
  w32((uint32_t)(EBP + -0x111c), (0x1085c5e8u));
  /* 1083538d jmp 0x10835399 */
  goto L_10835399;
L_1083538f:;
  /* 1083538f mov dword ptr [ebp - 0x111c], 0x1085c398 */
  w32((uint32_t)(EBP + -0x111c), (0x1085c398u));
L_10835399:;
  /* 10835399 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083539c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083539f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108353a1 je 0x108353af */
  if (C.zf) goto L_108353af;
  /* 108353a3 mov dword ptr [ebp - 0x1120], 0x1085c5e4 */
  w32((uint32_t)(EBP + -0x1120), (0x1085c5e4u));
  /* 108353ad jmp 0x108353b9 */
  goto L_108353b9;
L_108353af:;
  /* 108353af mov dword ptr [ebp - 0x1120], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1120), (0x1085c398u));
L_108353b9:;
  /* 108353b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108353bd je 0x108353ca */
  if (C.zf) goto L_108353ca;
  /* 108353bf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108353c2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 108353c8 jmp 0x108353d4 */
  goto L_108353d4;
L_108353ca:;
  /* 108353ca mov dword ptr [ebp - 0x1124], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1124), (0x1085c398u));
L_108353d4:;
  /* 108353d4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108353d8 je 0x108353e6 */
  if (C.zf) goto L_108353e6;
  /* 108353da mov dword ptr [ebp - 0x1128], 0x1085c5dc */
  w32((uint32_t)(EBP + -0x1128), (0x1085c5dcu));
  /* 108353e4 jmp 0x108353f0 */
  goto L_108353f0;
L_108353e6:;
  /* 108353e6 mov dword ptr [ebp - 0x1128], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1128), (0x1085c398u));
L_108353f0:;
  /* 108353f0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108353f4 je 0x10835401 */
  if (C.zf) goto L_10835401;
  /* 108353f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108353f9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 108353ff jmp 0x1083540b */
  goto L_1083540b;
L_10835401:;
  /* 10835401 mov dword ptr [ebp - 0x112c], 0x1085c398 */
  w32((uint32_t)(EBP + -0x112c), (0x1085c398u));
L_1083540b:;
  /* 1083540b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083540f je 0x1083541d */
  if (C.zf) goto L_1083541d;
  /* 10835411 mov dword ptr [ebp - 0x1130], 0x1085c5d4 */
  w32((uint32_t)(EBP + -0x1130), (0x1085c5d4u));
  /* 1083541b jmp 0x10835427 */
  goto L_10835427;
L_1083541d:;
  /* 1083541d mov dword ptr [ebp - 0x1130], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1130), (0x1085c398u));
L_10835427:;
  /* 10835427 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083542e je 0x1083543e */
  if (C.zf) goto L_1083543e;
  /* 10835430 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10835436 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1083543c jmp 0x10835448 */
  goto L_10835448;
L_1083543e:;
  /* 1083543e mov dword ptr [ebp - 0x1134], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1134), (0x1085c398u));
L_10835448:;
  /* 10835448 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083544f je 0x1083545d */
  if (C.zf) goto L_1083545d;
  /* 10835451 mov dword ptr [ebp - 0x1138], 0x1085c5c8 */
  w32((uint32_t)(EBP + -0x1138), (0x1085c5c8u));
  /* 1083545b jmp 0x10835467 */
  goto L_10835467;
L_1083545d:;
  /* 1083545d mov dword ptr [ebp - 0x1138], 0x1085c398 */
  w32((uint32_t)(EBP + -0x1138), (0x1085c398u));
L_10835467:;
  /* 10835467 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1083546d push edx */
  push32((uint32_t)(EDX));
  /* 1083546e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10835474 push eax */
  push32((uint32_t)(EAX));
  /* 10835475 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1083547b push ecx */
  push32((uint32_t)(ECX));
  /* 1083547c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10835482 push edx */
  push32((uint32_t)(EDX));
  /* 10835483 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10835489 push eax */
  push32((uint32_t)(EAX));
  /* 1083548a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10835490 push ecx */
  push32((uint32_t)(ECX));
  /* 10835491 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10835497 push edx */
  push32((uint32_t)(EDX));
  /* 10835498 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1083549e push eax */
  push32((uint32_t)(EAX));
  /* 1083549f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 108354a5 push ecx */
  push32((uint32_t)(ECX));
  /* 108354a6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 108354ac push edx */
  push32((uint32_t)(EDX));
  /* 108354ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108354b0 push eax */
  push32((uint32_t)(EAX));
  /* 108354b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108354b4 mov edx, dword ptr [ecx*4 + 0x1085fa50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa50)));
  /* 108354bb push edx */
  push32((uint32_t)(EDX));
  /* 108354bc push 0x1085c574 */
  push32((uint32_t)(0x1085c574u));
  /* 108354c1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108354c6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 108354cc push eax */
  push32((uint32_t)(EAX));
  /* 108354cd call 0x10838c90 */
  push32(0x108354d2u); f_10838c90();
  /* 108354d2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108354d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108354d7 jge 0x108354ed */
  if ((C.sf==C.of)) goto L_108354ed;
  /* 108354d9 push 0x1085c4d8 */
  push32((uint32_t)(0x1085c4d8u));
  /* 108354de lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 108354e4 push ecx */
  push32((uint32_t)(ECX));
  /* 108354e5 call 0x10838d90 */
  push32(0x108354eau); f_10838d90();
  /* 108354ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108354ed:;
  /* 108354ed push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 108354f2 push 0x1085c550 */
  push32((uint32_t)(0x1085c550u));
  /* 108354f7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 108354fd push edx */
  push32((uint32_t)(EDX));
  /* 108354fe call 0x10839540 */
  push32(0x10835503u); f_10839540();
  /* 10835503 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835506 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1083550c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835513 jne 0x10835526 */
  if (!C.zf) goto L_10835526;
  /* 10835515 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10835517 call 0x10839280 */
  push32(0x1083551cu); f_10839280();
  /* 1083551c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083551f push 3 */
  push32((uint32_t)(0x3u));
  /* 10835521 call 0x108355a0 */
  push32(0x10835526u); f_108355a0();
L_10835526:;
  /* 10835526 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083552d jne 0x10835536 */
  if (!C.zf) goto L_10835536;
  /* 1083552f mov eax, 1 */
  EAX = (0x1u);
  /* 10835534 jmp 0x10835538 */
  goto L_10835538;
L_10835536:;
  /* 10835536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10835538:;
  /* 10835538 mov esp, ebp */
  ESP = (EBP);
  /* 1083553a pop ebp */
  EBP = (pop32());
  /* 1083553b ret  */
  ESPCHK(0x10835230u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10835540 (56 bytes, 15 insns) */
void f_10835540(void) {
  FTRACE(0x10835540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835540 push ebp */
  push32((uint32_t)(EBP));
  /* 10835541 mov ebp, esp */
  EBP = (ESP);
  /* 10835543 cmp dword ptr [0x108630bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083554a je 0x10835552 */
  if (C.zf) goto L_10835552;
  /* 1083554c call dword ptr [0x108630bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108630bc))), 0x10835552u);
L_10835552:;
  /* 10835552 push 0x1085f418 */
  push32((uint32_t)(0x1085f418u));
  /* 10835557 push 0x1085f208 */
  push32((uint32_t)(0x1085f208u));
  /* 1083555c call 0x10835710 */
  push32(0x10835561u); f_10835710();
  /* 10835561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835564 push 0x1085f104 */
  push32((uint32_t)(0x1085f104u));
  /* 10835569 push 0x1085f000 */
  push32((uint32_t)(0x1085f000u));
  /* 1083556e call 0x10835710 */
  push32(0x10835573u); f_10835710();
  /* 10835573 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835576 pop ebp */
  EBP = (pop32());
  /* 10835577 ret  */
  ESPCHK(0x10835540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005580 @ 0x10835580 (21 bytes, 10 insns) */
void f_10835580(void) {
  FTRACE(0x10835580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835580 push ebp */
  push32((uint32_t)(EBP));
  /* 10835581 mov ebp, esp */
  EBP = (ESP);
  /* 10835583 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835587 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083558a push eax */
  push32((uint32_t)(EAX));
  /* 1083558b call 0x10835600 */
  push32(0x10835590u); f_10835600();
  /* 10835590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835593 pop ebp */
  EBP = (pop32());
  /* 10835594 ret  */
  ESPCHK(0x10835580u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x108355a0 (21 bytes, 10 insns) */
void f_108355a0(void) {
  FTRACE(0x108355a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108355a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108355a1 mov ebp, esp */
  EBP = (ESP);
  /* 108355a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108355a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108355a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108355aa push eax */
  push32((uint32_t)(EAX));
  /* 108355ab call 0x10835600 */
  push32(0x108355b0u); f_10835600();
  /* 108355b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108355b3 pop ebp */
  EBP = (pop32());
  /* 108355b4 ret  */
  ESPCHK(0x108355a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x108355c0 (19 bytes, 9 insns) */
void f_108355c0(void) {
  FTRACE(0x108355c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108355c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108355c1 mov ebp, esp */
  EBP = (ESP);
  /* 108355c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108355c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108355c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108355c9 call 0x10835600 */
  push32(0x108355ceu); f_10835600();
  /* 108355ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108355d1 pop ebp */
  EBP = (pop32());
  /* 108355d2 ret  */
  ESPCHK(0x108355c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e0 @ 0x108355e0 (19 bytes, 9 insns) */
void f_108355e0(void) {
  FTRACE(0x108355e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108355e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108355e1 mov ebp, esp */
  EBP = (ESP);
  /* 108355e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 108355e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 108355e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108355e9 call 0x10835600 */
  push32(0x108355eeu); f_10835600();
  /* 108355ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108355f1 pop ebp */
  EBP = (pop32());
  /* 108355f2 ret  */
  ESPCHK(0x108355e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005600 @ 0x10835600 (227 bytes, 61 insns) */
void f_10835600(void) {
  FTRACE(0x10835600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835600 push ebp */
  push32((uint32_t)(EBP));
  /* 10835601 mov ebp, esp */
  EBP = (ESP);
  /* 10835603 push ecx */
  push32((uint32_t)(ECX));
  /* 10835604 call 0x108356f0 */
  push32(0x10835609u); f_108356f0();
  /* 10835609 cmp dword ptr [0x108615c8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108615c8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835610 jne 0x10835623 */
  if (!C.zf) goto L_10835623;
  /* 10835612 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835615 push eax */
  push32((uint32_t)(EAX));
  /* 10835616 call dword ptr [0x108642d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642d0))), 0x1083561cu);
  /* 1083561c push eax */
  push32((uint32_t)(EAX));
  /* 1083561d call dword ptr [0x108642cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108642cc))), 0x10835623u);
L_10835623:;
  /* 10835623 mov dword ptr [0x108615c4], 1 */
  w32((uint32_t)(0x108615c4), (0x1u));
  /* 1083562d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10835630 mov byte ptr [0x108615c0], cl */
  w8((uint32_t)(0x108615c0), (CL));
  /* 10835636 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083563a jne 0x10835683 */
  if (!C.zf) goto L_10835683;
  /* 1083563c cmp dword ptr [0x108630b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835643 je 0x10835671 */
  if (C.zf) goto L_10835671;
  /* 10835645 mov edx, dword ptr [0x108630b4] */
  EDX = (r32((uint32_t)(0x108630b4)));
  /* 1083564b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1083564e:;
  /* 1083564e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835651 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835654 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10835657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083565a cmp ecx, dword ptr [0x108630b8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108630b8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835660 jb 0x10835671 */
  if (C.cf) goto L_10835671;
  /* 10835662 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835665 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835668 je 0x1083566f */
  if (C.zf) goto L_1083566f;
  /* 1083566a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083566d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1083566fu);
L_1083566f:;
  /* 1083566f jmp 0x1083564e */
  goto L_1083564e;
L_10835671:;
  /* 10835671 push 0x1085f724 */
  push32((uint32_t)(0x1085f724u));
  /* 10835676 push 0x1085f51c */
  push32((uint32_t)(0x1085f51cu));
  /* 1083567b call 0x10835710 */
  push32(0x10835680u); f_10835710();
  /* 10835680 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835683:;
  /* 10835683 push 0x1085f92c */
  push32((uint32_t)(0x1085f92cu));
  /* 10835688 push 0x1085f828 */
  push32((uint32_t)(0x1085f828u));
  /* 1083568d call 0x10835710 */
  push32(0x10835692u); f_10835710();
  /* 10835692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835695 cmp dword ptr [0x108615cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083569c jne 0x108356be */
  if (!C.zf) goto L_108356be;
  /* 1083569e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 108356a0 call 0x108372f0 */
  push32(0x108356a5u); f_108372f0();
  /* 108356a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108356a8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 108356ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108356ad je 0x108356be */
  if (C.zf) goto L_108356be;
  /* 108356af mov dword ptr [0x108615cc], 1 */
  w32((uint32_t)(0x108615cc), (0x1u));
  /* 108356b9 call 0x10837c00 */
  push32(0x108356beu); f_10837c00();
L_108356be:;
  /* 108356be cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108356c2 je 0x108356cb */
  if (C.zf) goto L_108356cb;
  /* 108356c4 call 0x10835700 */
  push32(0x108356c9u); f_10835700();
  /* 108356c9 jmp 0x108356df */
  goto L_108356df;
L_108356cb:;
  /* 108356cb mov dword ptr [0x108615c8], 1 */
  w32((uint32_t)(0x108615c8), (0x1u));
  /* 108356d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108356d8 push ecx */
  push32((uint32_t)(ECX));
  /* 108356d9 call dword ptr [0x108643b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b4))), 0x108356dfu);
L_108356df:;
  /* 108356df mov esp, ebp */
  ESP = (EBP);
  /* 108356e1 pop ebp */
  EBP = (pop32());
  /* 108356e2 ret  */
  ESPCHK(0x10835600u, _esp0);
  ESP += 4; return;
}

/* FUN_100056f0 @ 0x108356f0 (15 bytes, 7 insns) */
void f_108356f0(void) {
  FTRACE(0x108356f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108356f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108356f1 mov ebp, esp */
  EBP = (ESP);
  /* 108356f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 108356f5 call 0x108397e0 */
  push32(0x108356fau); f_108397e0();
  /* 108356fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108356fd pop ebp */
  EBP = (pop32());
  /* 108356fe ret  */
  ESPCHK(0x108356f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005700 @ 0x10835700 (15 bytes, 7 insns) */
void f_10835700(void) {
  FTRACE(0x10835700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835700 push ebp */
  push32((uint32_t)(EBP));
  /* 10835701 mov ebp, esp */
  EBP = (ESP);
  /* 10835703 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10835705 call 0x10839880 */
  push32(0x1083570au); f_10839880();
  /* 1083570a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083570d pop ebp */
  EBP = (pop32());
  /* 1083570e ret  */
  ESPCHK(0x10835700u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10835710 (37 bytes, 16 insns) */
void f_10835710(void) {
  FTRACE(0x10835710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835710 push ebp */
  push32((uint32_t)(EBP));
  /* 10835711 mov ebp, esp */
  EBP = (ESP);
L_10835713:;
  /* 10835713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835716 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835719 jae 0x10835733 */
  if (!C.cf) goto L_10835733;
  /* 1083571b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083571e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835721 je 0x10835728 */
  if (C.zf) goto L_10835728;
  /* 10835723 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835726 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10835728u);
L_10835728:;
  /* 10835728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083572b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083572e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10835731 jmp 0x10835713 */
  goto L_10835713;
L_10835733:;
  /* 10835733 pop ebp */
  EBP = (pop32());
  /* 10835734 ret  */
  ESPCHK(0x10835710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005740 @ 0x10835740 (130 bytes, 42 insns) */
void f_10835740(void) {
  FTRACE(0x10835740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835740 push ebp */
  push32((uint32_t)(EBP));
  /* 10835741 mov ebp, esp */
  EBP = (ESP);
  /* 10835743 push ecx */
  push32((uint32_t)(ECX));
  /* 10835744 call 0x10839700 */
  push32(0x10835749u); f_10839700();
  /* 10835749 call dword ptr [0x108643c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c8))), 0x1083574fu);
  /* 1083574f mov dword ptr [0x1085fa5c], eax */
  w32((uint32_t)(0x1085fa5c), (EAX));
  /* 10835754 cmp dword ptr [0x1085fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083575b jne 0x10835761 */
  if (!C.zf) goto L_10835761;
  /* 1083575d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083575f jmp 0x108357be */
  goto L_108357be;
L_10835761:;
  /* 10835761 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10835763 push 0x1085c6ac */
  push32((uint32_t)(0x1085c6acu));
  /* 10835768 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083576a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1083576c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083576e call 0x108361f0 */
  push32(0x10835773u); f_108361f0();
  /* 10835773 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835776 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10835779 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083577d je 0x10835794 */
  if (C.zf) goto L_10835794;
  /* 1083577f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835782 push eax */
  push32((uint32_t)(EAX));
  /* 10835783 mov ecx, dword ptr [0x1085fa5c] */
  ECX = (r32((uint32_t)(0x1085fa5c)));
  /* 10835789 push ecx */
  push32((uint32_t)(ECX));
  /* 1083578a call dword ptr [0x108643c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c4))), 0x10835790u);
  /* 10835790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835792 jne 0x10835798 */
  if (!C.zf) goto L_10835798;
L_10835794:;
  /* 10835794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10835796 jmp 0x108357be */
  goto L_108357be;
L_10835798:;
  /* 10835798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083579b push edx */
  push32((uint32_t)(EDX));
  /* 1083579c call 0x10835800 */
  push32(0x108357a1u); f_10835800();
  /* 108357a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108357a4 call dword ptr [0x108643c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c0))), 0x108357aau);
  /* 108357aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108357ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108357af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108357b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 108357b9 mov eax, 1 */
  EAX = (0x1u);
L_108357be:;
  /* 108357be mov esp, ebp */
  ESP = (EBP);
  /* 108357c0 pop ebp */
  EBP = (pop32());
  /* 108357c1 ret  */
  ESPCHK(0x10835740u, _esp0);
  ESP += 4; return;
}

/* FUN_100057d0 @ 0x108357d0 (41 bytes, 11 insns) */
void f_108357d0(void) {
  FTRACE(0x108357d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108357d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108357d1 mov ebp, esp */
  EBP = (ESP);
  /* 108357d3 call 0x10839740 */
  push32(0x108357d8u); f_10839740();
  /* 108357d8 cmp dword ptr [0x1085fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108357df je 0x108357f7 */
  if (C.zf) goto L_108357f7;
  /* 108357e1 mov eax, dword ptr [0x1085fa5c] */
  EAX = (r32((uint32_t)(0x1085fa5c)));
  /* 108357e6 push eax */
  push32((uint32_t)(EAX));
  /* 108357e7 call dword ptr [0x108643cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643cc))), 0x108357edu);
  /* 108357ed mov dword ptr [0x1085fa5c], 0xffffffff */
  w32((uint32_t)(0x1085fa5c), (0xffffffffu));
L_108357f7:;
  /* 108357f7 pop ebp */
  EBP = (pop32());
  /* 108357f8 ret  */
  ESPCHK(0x108357d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005800 @ 0x10835800 (25 bytes, 8 insns) */
void f_10835800(void) {
  FTRACE(0x10835800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835800 push ebp */
  push32((uint32_t)(EBP));
  /* 10835801 mov ebp, esp */
  EBP = (ESP);
  /* 10835803 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835806 mov dword ptr [eax + 0x50], 0x1085fc00 */
  w32((uint32_t)(EAX + 0x50), (0x1085fc00u));
  /* 1083580d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835810 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10835817 pop ebp */
  EBP = (pop32());
  /* 10835818 ret  */
  ESPCHK(0x10835800u, _esp0);
  ESP += 4; return;
}

/* FUN_10005820 @ 0x10835820 (152 bytes, 48 insns) */
void f_10835820(void) {
  FTRACE(0x10835820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835820 push ebp */
  push32((uint32_t)(EBP));
  /* 10835821 mov ebp, esp */
  EBP = (ESP);
  /* 10835823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835826 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x1083582cu);
  /* 1083582c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083582f mov eax, dword ptr [0x1085fa5c] */
  EAX = (r32((uint32_t)(0x1085fa5c)));
  /* 10835834 push eax */
  push32((uint32_t)(EAX));
  /* 10835835 call dword ptr [0x108643d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d4))), 0x1083583bu);
  /* 1083583b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083583e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835842 jne 0x108358a7 */
  if (!C.zf) goto L_108358a7;
  /* 10835844 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10835849 push 0x1085c6ac */
  push32((uint32_t)(0x1085c6acu));
  /* 1083584e push 2 */
  push32((uint32_t)(0x2u));
  /* 10835850 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10835852 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835854 call 0x108361f0 */
  push32(0x10835859u); f_108361f0();
  /* 10835859 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083585c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083585f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835863 je 0x1083589d */
  if (C.zf) goto L_1083589d;
  /* 10835865 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835868 push ecx */
  push32((uint32_t)(ECX));
  /* 10835869 mov edx, dword ptr [0x1085fa5c] */
  EDX = (r32((uint32_t)(0x1085fa5c)));
  /* 1083586f push edx */
  push32((uint32_t)(EDX));
  /* 10835870 call dword ptr [0x108643c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c4))), 0x10835876u);
  /* 10835876 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835878 je 0x1083589d */
  if (C.zf) goto L_1083589d;
  /* 1083587a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083587d push eax */
  push32((uint32_t)(EAX));
  /* 1083587e call 0x10835800 */
  push32(0x10835883u); f_10835800();
  /* 10835883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835886 call dword ptr [0x108643c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c0))), 0x1083588cu);
  /* 1083588c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083588f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10835891 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835894 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1083589b jmp 0x108358a7 */
  goto L_108358a7;
L_1083589d:;
  /* 1083589d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1083589f call 0x10834d50 */
  push32(0x108358a4u); f_10834d50();
  /* 108358a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108358a7:;
  /* 108358a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108358aa push eax */
  push32((uint32_t)(EAX));
  /* 108358ab call dword ptr [0x108643d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d0))), 0x108358b1u);
  /* 108358b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108358b4 mov esp, ebp */
  ESP = (EBP);
  /* 108358b6 pop ebp */
  EBP = (pop32());
  /* 108358b7 ret  */
  ESPCHK(0x10835820u, _esp0);
  ESP += 4; return;
}

/* FUN_100058c0 @ 0x108358c0 (263 bytes, 86 insns) */
void f_108358c0(void) {
  FTRACE(0x108358c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108358c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108358c1 mov ebp, esp */
  EBP = (ESP);
  /* 108358c3 cmp dword ptr [0x1085fa5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fa5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108358ca je 0x108359c5 */
  if (C.zf) goto L_108359c5;
  /* 108358d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108358d4 jne 0x108358e5 */
  if (!C.zf) goto L_108358e5;
  /* 108358d6 mov eax, dword ptr [0x1085fa5c] */
  EAX = (r32((uint32_t)(0x1085fa5c)));
  /* 108358db push eax */
  push32((uint32_t)(EAX));
  /* 108358dc call dword ptr [0x108643d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d4))), 0x108358e2u);
  /* 108358e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_108358e5:;
  /* 108358e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108358e9 je 0x108359b6 */
  if (C.zf) goto L_108359b6;
  /* 108358ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108358f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108358f6 je 0x10835909 */
  if (C.zf) goto L_10835909;
  /* 108358f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108358fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108358fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10835900 push eax */
  push32((uint32_t)(EAX));
  /* 10835901 call 0x10836870 */
  push32(0x10835906u); f_10836870();
  /* 10835906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835909:;
  /* 10835909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083590c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835910 je 0x10835923 */
  if (C.zf) goto L_10835923;
  /* 10835912 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835917 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1083591a push eax */
  push32((uint32_t)(EAX));
  /* 1083591b call 0x10836870 */
  push32(0x10835920u); f_10836870();
  /* 10835920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835923:;
  /* 10835923 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835926 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083592a je 0x1083593d */
  if (C.zf) goto L_1083593d;
  /* 1083592c push 2 */
  push32((uint32_t)(0x2u));
  /* 1083592e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835931 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10835934 push eax */
  push32((uint32_t)(EAX));
  /* 10835935 call 0x10836870 */
  push32(0x1083593au); f_10836870();
  /* 1083593a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083593d:;
  /* 1083593d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835940 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835944 je 0x10835957 */
  if (C.zf) goto L_10835957;
  /* 10835946 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835948 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083594b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1083594e push eax */
  push32((uint32_t)(EAX));
  /* 1083594f call 0x10836870 */
  push32(0x10835954u); f_10836870();
  /* 10835954 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835957:;
  /* 10835957 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083595a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083595e je 0x10835971 */
  if (C.zf) goto L_10835971;
  /* 10835960 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835965 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10835968 push eax */
  push32((uint32_t)(EAX));
  /* 10835969 call 0x10836870 */
  push32(0x1083596eu); f_10836870();
  /* 1083596e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835971:;
  /* 10835971 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835974 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835978 je 0x1083598b */
  if (C.zf) goto L_1083598b;
  /* 1083597a push 2 */
  push32((uint32_t)(0x2u));
  /* 1083597c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083597f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10835982 push eax */
  push32((uint32_t)(EAX));
  /* 10835983 call 0x10836870 */
  push32(0x10835988u); f_10836870();
  /* 10835988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083598b:;
  /* 1083598b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083598e cmp dword ptr [ecx + 0x50], 0x1085fc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1085fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835995 je 0x108359a8 */
  if (C.zf) goto L_108359a8;
  /* 10835997 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083599c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1083599f push eax */
  push32((uint32_t)(EAX));
  /* 108359a0 call 0x10836870 */
  push32(0x108359a5u); f_10836870();
  /* 108359a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108359a8:;
  /* 108359a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 108359aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108359ad push ecx */
  push32((uint32_t)(ECX));
  /* 108359ae call 0x10836870 */
  push32(0x108359b3u); f_10836870();
  /* 108359b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108359b6:;
  /* 108359b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108359b8 mov edx, dword ptr [0x1085fa5c] */
  EDX = (r32((uint32_t)(0x1085fa5c)));
  /* 108359be push edx */
  push32((uint32_t)(EDX));
  /* 108359bf call dword ptr [0x108643c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c4))), 0x108359c5u);
L_108359c5:;
  /* 108359c5 pop ebp */
  EBP = (pop32());
  /* 108359c6 ret  */
  ESPCHK(0x108358c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059d0 @ 0x108359d0 (11 bytes, 5 insns) */
void f_108359d0(void) {
  FTRACE(0x108359d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108359d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108359d1 mov ebp, esp */
  EBP = (ESP);
  /* 108359d3 call dword ptr [0x108643c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643c0))), 0x108359d9u);
  /* 108359d9 pop ebp */
  EBP = (pop32());
  /* 108359da ret  */
  ESPCHK(0x108359d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059e0 @ 0x108359e0 (11 bytes, 5 insns) */
void f_108359e0(void) {
  FTRACE(0x108359e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108359e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108359e1 mov ebp, esp */
  EBP = (ESP);
  /* 108359e3 call dword ptr [0x108643dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643dc))), 0x108359e9u);
  /* 108359e9 pop ebp */
  EBP = (pop32());
  /* 108359ea ret  */
  ESPCHK(0x108359e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059f0 @ 0x108359f0 (804 bytes, 236 insns) */
void f_108359f0(void) {
  FTRACE(0x108359f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108359f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108359f1 mov ebp, esp */
  EBP = (ESP);
  /* 108359f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108359f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 108359fb push 0x1085c6b8 */
  push32((uint32_t)(0x1085c6b8u));
  /* 10835a00 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835a02 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10835a07 call 0x10835de0 */
  push32(0x10835a0cu); f_10835de0();
  /* 10835a0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835a0f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10835a12 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835a16 jne 0x10835a22 */
  if (!C.zf) goto L_10835a22;
  /* 10835a18 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10835a1a call 0x10834d50 */
  push32(0x10835a1fu); f_10834d50();
  /* 10835a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10835a22:;
  /* 10835a22 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a25 mov dword ptr [0x10862f60], eax */
  w32((uint32_t)(0x10862f60), (EAX));
  /* 10835a2a mov dword ptr [0x1086309c], 0x20 */
  w32((uint32_t)(0x1086309c), (0x20u));
  /* 10835a34 jmp 0x10835a3f */
  goto L_10835a3f;
L_10835a36:;
  /* 10835a36 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a39 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835a3c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10835a3f:;
  /* 10835a3f mov edx, dword ptr [0x10862f60] */
  EDX = (r32((uint32_t)(0x10862f60)));
  /* 10835a45 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835a4b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835a4e jae 0x10835a73 */
  if (!C.cf) goto L_10835a73;
  /* 10835a50 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a53 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10835a57 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a5a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10835a60 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a63 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10835a67 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835a6a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10835a71 jmp 0x10835a36 */
  goto L_10835a36;
L_10835a73:;
  /* 10835a73 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10835a76 push ecx */
  push32((uint32_t)(ECX));
  /* 10835a77 call dword ptr [0x108643e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643e8))), 0x10835a7du);
  /* 10835a7d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10835a80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10835a86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10835a88 je 0x10835c15 */
  if (C.zf) goto L_10835c15;
  /* 10835a8e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835a92 je 0x10835c15 */
  if (C.zf) goto L_10835c15;
  /* 10835a98 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10835a9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10835a9d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10835aa0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10835aa3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835aa6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10835aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835aac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835aaf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10835ab2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835ab9 jge 0x10835ac3 */
  if ((C.sf==C.of)) goto L_10835ac3;
  /* 10835abb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10835abe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10835ac1 jmp 0x10835aca */
  goto L_10835aca;
L_10835ac3:;
  /* 10835ac3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10835aca:;
  /* 10835aca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10835acd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10835ad0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10835ad7 jmp 0x10835ae2 */
  goto L_10835ae2;
L_10835ad9:;
  /* 10835ad9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10835adc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835adf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10835ae2:;
  /* 10835ae2 mov ecx, dword ptr [0x1086309c] */
  ECX = (r32((uint32_t)(0x1086309c)));
  /* 10835ae8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835aeb jge 0x10835b82 */
  if ((C.sf==C.of)) goto L_10835b82;
  /* 10835af1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10835af6 push 0x1085c6b8 */
  push32((uint32_t)(0x1085c6b8u));
  /* 10835afb push 2 */
  push32((uint32_t)(0x2u));
  /* 10835afd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10835b02 call 0x10835de0 */
  push32(0x10835b07u); f_10835de0();
  /* 10835b07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b0a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10835b0d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835b11 jne 0x10835b1e */
  if (!C.zf) goto L_10835b1e;
  /* 10835b13 mov edx, dword ptr [0x1086309c] */
  EDX = (r32((uint32_t)(0x1086309c)));
  /* 10835b19 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10835b1c jmp 0x10835b82 */
  goto L_10835b82;
L_10835b1e:;
  /* 10835b1e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10835b21 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b24 mov dword ptr [eax*4 + 0x10862f60], ecx */
  w32((uint32_t)(EAX*4 + 0x10862f60), (ECX));
  /* 10835b2b mov edx, dword ptr [0x1086309c] */
  EDX = (r32((uint32_t)(0x1086309c)));
  /* 10835b31 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b34 mov dword ptr [0x1086309c], edx */
  w32((uint32_t)(0x1086309c), (EDX));
  /* 10835b3a jmp 0x10835b45 */
  goto L_10835b45;
L_10835b3c:;
  /* 10835b3c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b3f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b42 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10835b45:;
  /* 10835b45 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10835b48 mov edx, dword ptr [ecx*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10862f60)));
  /* 10835b4f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b55 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835b58 jae 0x10835b7d */
  if (!C.cf) goto L_10835b7d;
  /* 10835b5a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b5d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10835b61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b64 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10835b6a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b6d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10835b71 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835b74 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10835b7b jmp 0x10835b3c */
  goto L_10835b3c;
L_10835b7d:;
  /* 10835b7d jmp 0x10835ad9 */
  goto L_10835ad9;
L_10835b82:;
  /* 10835b82 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10835b89 jmp 0x10835ba6 */
  goto L_10835ba6;
L_10835b8b:;
  /* 10835b8b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835b8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b91 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10835b94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835b97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835b9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10835b9d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10835ba0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835ba3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10835ba6:;
  /* 10835ba6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835ba9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835bac jge 0x10835c15 */
  if ((C.sf==C.of)) goto L_10835c15;
  /* 10835bae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10835bb1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835bb4 je 0x10835c10 */
  if (C.zf) goto L_10835c10;
  /* 10835bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835bb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10835bbc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10835bbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10835bc1 je 0x10835c10 */
  if (C.zf) goto L_10835c10;
  /* 10835bc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835bc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10835bc9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10835bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835bce jne 0x10835be0 */
  if (!C.zf) goto L_10835be0;
  /* 10835bd0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10835bd3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10835bd5 push edx */
  push32((uint32_t)(EDX));
  /* 10835bd6 call dword ptr [0x108643e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643e4))), 0x10835bdcu);
  /* 10835bdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835bde je 0x10835c10 */
  if (C.zf) goto L_10835c10;
L_10835be0:;
  /* 10835be0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835be3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10835be6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835be9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10835bec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10835bef mov edx, dword ptr [eax*4 + 0x10862f60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 10835bf6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835bf8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10835bfb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835bfe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10835c01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10835c03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10835c05 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835c08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835c0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10835c0d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10835c10:;
  /* 10835c10 jmp 0x10835b8b */
  goto L_10835b8b;
L_10835c15:;
  /* 10835c15 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10835c1c jmp 0x10835c27 */
  goto L_10835c27;
L_10835c1e:;
  /* 10835c1e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835c21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835c24 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10835c27:;
  /* 10835c27 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835c2b jge 0x10835d04 */
  if ((C.sf==C.of)) goto L_10835d04;
  /* 10835c31 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835c34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10835c37 mov edx, dword ptr [0x10862f60] */
  EDX = (r32((uint32_t)(0x10862f60)));
  /* 10835c3d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835c3f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10835c42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835c45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835c48 jne 0x10835cf0 */
  if (!C.zf) goto L_10835cf0;
  /* 10835c4e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835c51 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10835c55 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835c59 jne 0x10835c64 */
  if (!C.zf) goto L_10835c64;
  /* 10835c5b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10835c62 jmp 0x10835c74 */
  goto L_10835c74;
L_10835c64:;
  /* 10835c64 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10835c67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835c6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10835c6c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835c6e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835c71 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10835c74:;
  /* 10835c74 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10835c77 push eax */
  push32((uint32_t)(EAX));
  /* 10835c78 call dword ptr [0x10864394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864394))), 0x10835c7eu);
  /* 10835c7e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10835c81 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835c85 je 0x10835cdf */
  if (C.zf) goto L_10835cdf;
  /* 10835c87 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10835c8a push ecx */
  push32((uint32_t)(ECX));
  /* 10835c8b call dword ptr [0x108643e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643e4))), 0x10835c91u);
  /* 10835c91 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10835c94 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835c98 je 0x10835cdf */
  if (C.zf) goto L_10835cdf;
  /* 10835c9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835c9d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10835ca0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10835ca2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10835ca5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10835cab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835cae jne 0x10835cc0 */
  if (!C.zf) goto L_10835cc0;
  /* 10835cb0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cb3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10835cb6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10835cb8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cbb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10835cbe jmp 0x10835cdd */
  goto L_10835cdd;
L_10835cc0:;
  /* 10835cc0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10835cc3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10835cc9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835ccc jne 0x10835cdd */
  if (!C.zf) goto L_10835cdd;
  /* 10835cce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cd1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10835cd4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10835cd7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cda mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10835cdd:;
  /* 10835cdd jmp 0x10835cee */
  goto L_10835cee;
L_10835cdf:;
  /* 10835cdf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835ce2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10835ce5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10835ce8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835ceb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10835cee:;
  /* 10835cee jmp 0x10835cff */
  goto L_10835cff;
L_10835cf0:;
  /* 10835cf0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cf3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10835cf6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10835cf9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10835cfc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10835cff:;
  /* 10835cff jmp 0x10835c1e */
  goto L_10835c1e;
L_10835d04:;
  /* 10835d04 mov eax, dword ptr [0x1086309c] */
  EAX = (r32((uint32_t)(0x1086309c)));
  /* 10835d09 push eax */
  push32((uint32_t)(EAX));
  /* 10835d0a call dword ptr [0x108643e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643e0))), 0x10835d10u);
  /* 10835d10 mov esp, ebp */
  ESP = (EBP);
  /* 10835d12 pop ebp */
  EBP = (pop32());
  /* 10835d13 ret  */
  ESPCHK(0x108359f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10835d20 (155 bytes, 45 insns) */
void f_10835d20(void) {
  FTRACE(0x10835d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10835d21 mov ebp, esp */
  EBP = (ESP);
  /* 10835d23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835d26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10835d2d jmp 0x10835d38 */
  goto L_10835d38;
L_10835d2f:;
  /* 10835d2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835d32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835d35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10835d38:;
  /* 10835d38 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835d3c jge 0x10835db7 */
  if ((C.sf==C.of)) goto L_10835db7;
  /* 10835d3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835d41 cmp dword ptr [ecx*4 + 0x10862f60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10862f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835d49 je 0x10835db2 */
  if (C.zf) goto L_10835db2;
  /* 10835d4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835d4e mov eax, dword ptr [edx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 10835d55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10835d58 jmp 0x10835d63 */
  goto L_10835d63;
L_10835d5a:;
  /* 10835d5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835d5d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835d60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10835d63:;
  /* 10835d63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835d66 mov eax, dword ptr [edx*4 + 0x10862f60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10862f60)));
  /* 10835d6d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835d72 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835d75 jae 0x10835d8f */
  if (!C.cf) goto L_10835d8f;
  /* 10835d77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835d7a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835d7e je 0x10835d8d */
  if (C.zf) goto L_10835d8d;
  /* 10835d80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835d83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835d86 push edx */
  push32((uint32_t)(EDX));
  /* 10835d87 call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x10835d8du);
L_10835d8d:;
  /* 10835d8d jmp 0x10835d5a */
  goto L_10835d5a;
L_10835d8f:;
  /* 10835d8f push 2 */
  push32((uint32_t)(0x2u));
  /* 10835d91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835d94 mov ecx, dword ptr [eax*4 + 0x10862f60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10862f60)));
  /* 10835d9b push ecx */
  push32((uint32_t)(ECX));
  /* 10835d9c call 0x10836870 */
  push32(0x10835da1u); f_10836870();
  /* 10835da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835da4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835da7 mov dword ptr [edx*4 + 0x10862f60], 0 */
  w32((uint32_t)(EDX*4 + 0x10862f60), (0x0u));
L_10835db2:;
  /* 10835db2 jmp 0x10835d2f */
  goto L_10835d2f;
L_10835db7:;
  /* 10835db7 mov esp, ebp */
  ESP = (EBP);
  /* 10835db9 pop ebp */
  EBP = (pop32());
  /* 10835dba ret  */
  ESPCHK(0x10835d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dc0 @ 0x10835dc0 (29 bytes, 13 insns) */
void f_10835dc0(void) {
  FTRACE(0x10835dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10835dc1 mov ebp, esp */
  EBP = (ESP);
  /* 10835dc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835dc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835dc9 mov eax, dword ptr [0x10861770] */
  EAX = (r32((uint32_t)(0x10861770)));
  /* 10835dce push eax */
  push32((uint32_t)(EAX));
  /* 10835dcf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10835dd3 call 0x10835e30 */
  push32(0x10835dd8u); f_10835e30();
  /* 10835dd8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835ddb pop ebp */
  EBP = (pop32());
  /* 10835ddc ret  */
  ESPCHK(0x10835dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005de0 @ 0x10835de0 (35 bytes, 16 insns) */
void f_10835de0(void) {
  FTRACE(0x10835de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10835de1 mov ebp, esp */
  EBP = (ESP);
  /* 10835de3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10835de6 push eax */
  push32((uint32_t)(EAX));
  /* 10835de7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10835dea push ecx */
  push32((uint32_t)(ECX));
  /* 10835deb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10835dee push edx */
  push32((uint32_t)(EDX));
  /* 10835def mov eax, dword ptr [0x10861770] */
  EAX = (r32((uint32_t)(0x10861770)));
  /* 10835df4 push eax */
  push32((uint32_t)(EAX));
  /* 10835df5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835df8 push ecx */
  push32((uint32_t)(ECX));
  /* 10835df9 call 0x10835e30 */
  push32(0x10835dfeu); f_10835e30();
  /* 10835dfe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e01 pop ebp */
  EBP = (pop32());
  /* 10835e02 ret  */
  ESPCHK(0x10835de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e10 @ 0x10835e10 (27 bytes, 13 insns) */
void f_10835e10(void) {
  FTRACE(0x10835e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10835e11 mov ebp, esp */
  EBP = (ESP);
  /* 10835e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835e17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835e19 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10835e1c push eax */
  push32((uint32_t)(EAX));
  /* 10835e1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835e20 push ecx */
  push32((uint32_t)(ECX));
  /* 10835e21 call 0x10835e30 */
  push32(0x10835e26u); f_10835e30();
  /* 10835e26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e29 pop ebp */
  EBP = (pop32());
  /* 10835e2a ret  */
  ESPCHK(0x10835e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x10835e30 (94 bytes, 38 insns) */
void f_10835e30(void) {
  FTRACE(0x10835e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10835e31 mov ebp, esp */
  EBP = (ESP);
  /* 10835e33 push ecx */
  push32((uint32_t)(ECX));
L_10835e34:;
  /* 10835e34 push 9 */
  push32((uint32_t)(0x9u));
  /* 10835e36 call 0x108397e0 */
  push32(0x10835e3bu); f_108397e0();
  /* 10835e3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10835e41 push eax */
  push32((uint32_t)(EAX));
  /* 10835e42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10835e45 push ecx */
  push32((uint32_t)(ECX));
  /* 10835e46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10835e49 push edx */
  push32((uint32_t)(EDX));
  /* 10835e4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835e4d push eax */
  push32((uint32_t)(EAX));
  /* 10835e4e call 0x10835eb0 */
  push32(0x10835e53u); f_10835eb0();
  /* 10835e53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10835e59 push 9 */
  push32((uint32_t)(0x9u));
  /* 10835e5b call 0x10839880 */
  push32(0x10835e60u); f_10839880();
  /* 10835e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e63 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835e67 jne 0x10835e6f */
  if (!C.zf) goto L_10835e6f;
  /* 10835e69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835e6d jne 0x10835e74 */
  if (!C.zf) goto L_10835e74;
L_10835e6f:;
  /* 10835e6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10835e72 jmp 0x10835e8a */
  goto L_10835e8a;
L_10835e74:;
  /* 10835e74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835e77 push ecx */
  push32((uint32_t)(ECX));
  /* 10835e78 call 0x10839b20 */
  push32(0x10835e7du); f_10839b20();
  /* 10835e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835e82 jne 0x10835e88 */
  if (!C.zf) goto L_10835e88;
  /* 10835e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10835e86 jmp 0x10835e8a */
  goto L_10835e8a;
L_10835e88:;
  /* 10835e88 jmp 0x10835e34 */
  goto L_10835e34;
L_10835e8a:;
  /* 10835e8a mov esp, ebp */
  ESP = (EBP);
  /* 10835e8c pop ebp */
  EBP = (pop32());
  /* 10835e8d ret  */
  ESPCHK(0x10835e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e90 @ 0x10835e90 (23 bytes, 11 insns) */
void f_10835e90(void) {
  FTRACE(0x10835e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10835e91 mov ebp, esp */
  EBP = (ESP);
  /* 10835e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835e95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835e97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835e99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835e9c push eax */
  push32((uint32_t)(EAX));
  /* 10835e9d call 0x10835eb0 */
  push32(0x10835ea2u); f_10835eb0();
  /* 10835ea2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835ea5 pop ebp */
  EBP = (pop32());
  /* 10835ea6 ret  */
  ESPCHK(0x10835e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x10835eb0 (787 bytes, 254 insns) */
void f_10835eb0(void) {
  FTRACE(0x10835eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10835eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10835eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10835eb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10835eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10835eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10835eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10835eb9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10835ec0 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 10835ec5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10835ec8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835eca je 0x10835efc */
  if (C.zf) goto L_10835efc;
L_10835ecc:;
  /* 10835ecc call 0x10836f80 */
  push32(0x10835ed1u); f_10836f80();
  /* 10835ed1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835ed3 jne 0x10835ef6 */
  if (!C.zf) goto L_10835ef6;
  /* 10835ed5 push 0x1085c7ac */
  push32((uint32_t)(0x1085c7acu));
  /* 10835eda push 0 */
  push32((uint32_t)(0x0u));
  /* 10835edc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10835ee1 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10835ee6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10835ee8 call 0x10834ea0 */
  push32(0x10835eedu); f_10834ea0();
  /* 10835eed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835ef0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835ef3 jne 0x10835ef6 */
  if (!C.zf) goto L_10835ef6;
  /* 10835ef5 int3  */
  x86_unimpl("int3 @ 0x10835ef5");
L_10835ef6:;
  /* 10835ef6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10835ef8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10835efa jne 0x10835ecc */
  if (!C.zf) goto L_10835ecc;
L_10835efc:;
  /* 10835efc mov edx, dword ptr [0x1085fa88] */
  EDX = (r32((uint32_t)(0x1085fa88)));
  /* 10835f02 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10835f05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835f08 cmp eax, dword ptr [0x1085fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1085fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835f0e jne 0x10835f11 */
  if (!C.zf) goto L_10835f11;
  /* 10835f10 int3  */
  x86_unimpl("int3 @ 0x10835f10");
L_10835f11:;
  /* 10835f11 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10835f14 push ecx */
  push32((uint32_t)(ECX));
  /* 10835f15 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10835f18 push edx */
  push32((uint32_t)(EDX));
  /* 10835f19 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10835f1c push eax */
  push32((uint32_t)(EAX));
  /* 10835f1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10835f20 push ecx */
  push32((uint32_t)(ECX));
  /* 10835f21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835f24 push edx */
  push32((uint32_t)(EDX));
  /* 10835f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f27 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835f29 call dword ptr [0x1085fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1085fc90))), 0x10835f2fu);
  /* 10835f2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835f34 jne 0x10835f94 */
  if (!C.zf) goto L_10835f94;
  /* 10835f36 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835f3a je 0x10835f67 */
  if (C.zf) goto L_10835f67;
L_10835f3c:;
  /* 10835f3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10835f3f push eax */
  push32((uint32_t)(EAX));
  /* 10835f40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10835f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10835f44 push 0x1085c768 */
  push32((uint32_t)(0x1085c768u));
  /* 10835f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f51 call 0x10834ea0 */
  push32(0x10835f56u); f_10834ea0();
  /* 10835f56 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835f59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835f5c jne 0x10835f5f */
  if (!C.zf) goto L_10835f5f;
  /* 10835f5e int3  */
  x86_unimpl("int3 @ 0x10835f5e");
L_10835f5f:;
  /* 10835f5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10835f61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10835f63 jne 0x10835f3c */
  if (!C.zf) goto L_10835f3c;
  /* 10835f65 jmp 0x10835f8d */
  goto L_10835f8d;
L_10835f67:;
  /* 10835f67 push 0x1085c744 */
  push32((uint32_t)(0x1085c744u));
  /* 10835f6c push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10835f71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835f79 call 0x10834ea0 */
  push32(0x10835f7eu); f_10834ea0();
  /* 10835f7e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835f81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835f84 jne 0x10835f87 */
  if (!C.zf) goto L_10835f87;
  /* 10835f86 int3  */
  x86_unimpl("int3 @ 0x10835f86");
L_10835f87:;
  /* 10835f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10835f89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10835f8b jne 0x10835f67 */
  if (!C.zf) goto L_10835f67;
L_10835f8d:;
  /* 10835f8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10835f8f jmp 0x108361bc */
  goto L_108361bc;
L_10835f94:;
  /* 10835f94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10835f97 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10835f9d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835fa0 je 0x10835fb6 */
  if (C.zf) goto L_10835fb6;
  /* 10835fa2 mov edx, dword ptr [0x1085fa84] */
  EDX = (r32((uint32_t)(0x1085fa84)));
  /* 10835fa8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10835fab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10835fad jne 0x10835fb6 */
  if (!C.zf) goto L_10835fb6;
  /* 10835faf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10835fb6:;
  /* 10835fb6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835fba ja 0x10835fc7 */
  if ((!C.cf&&!C.zf)) goto L_10835fc7;
  /* 10835fbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835fbf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10835fc2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835fc5 jbe 0x10835ff3 */
  if ((C.cf||C.zf)) goto L_10835ff3;
L_10835fc7:;
  /* 10835fc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10835fca push ecx */
  push32((uint32_t)(ECX));
  /* 10835fcb push 0x1085c71c */
  push32((uint32_t)(0x1085c71cu));
  /* 10835fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835fd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10835fd6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10835fd8 call 0x10834ea0 */
  push32(0x10835fddu); f_10834ea0();
  /* 10835fdd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10835fe0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835fe3 jne 0x10835fe6 */
  if (!C.zf) goto L_10835fe6;
  /* 10835fe5 int3  */
  x86_unimpl("int3 @ 0x10835fe5");
L_10835fe6:;
  /* 10835fe6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10835fe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10835fea jne 0x10835fc7 */
  if (!C.zf) goto L_10835fc7;
  /* 10835fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10835fee jmp 0x108361bc */
  goto L_108361bc;
L_10835ff3:;
  /* 10835ff3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10835ff6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10835ffb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10835ffe je 0x10836040 */
  if (C.zf) goto L_10836040;
  /* 10836000 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836004 je 0x10836040 */
  if (C.zf) goto L_10836040;
  /* 10836006 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836009 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083600f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836012 je 0x10836040 */
  if (C.zf) goto L_10836040;
  /* 10836014 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836018 je 0x10836040 */
  if (C.zf) goto L_10836040;
L_1083601a:;
  /* 1083601a push 0x1085c6e8 */
  push32((uint32_t)(0x1085c6e8u));
  /* 1083601f push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10836024 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083602a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083602c call 0x10834ea0 */
  push32(0x10836031u); f_10834ea0();
  /* 10836031 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836037 jne 0x1083603a */
  if (!C.zf) goto L_1083603a;
  /* 10836039 int3  */
  x86_unimpl("int3 @ 0x10836039");
L_1083603a:;
  /* 1083603a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083603c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083603e jne 0x1083601a */
  if (!C.zf) goto L_1083601a;
L_10836040:;
  /* 10836040 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836043 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836046 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10836049 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083604c push ecx */
  push32((uint32_t)(ECX));
  /* 1083604d call 0x10839c30 */
  push32(0x10836052u); f_10839c30();
  /* 10836052 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836055 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10836058 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083605c jne 0x10836065 */
  if (!C.zf) goto L_10836065;
  /* 1083605e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836060 jmp 0x108361bc */
  goto L_108361bc;
L_10836065:;
  /* 10836065 mov edx, dword ptr [0x1085fa88] */
  EDX = (r32((uint32_t)(0x1085fa88)));
  /* 1083606b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083606e mov dword ptr [0x1085fa88], edx */
  w32((uint32_t)(0x1085fa88), (EDX));
  /* 10836074 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836078 je 0x108360c3 */
  if (C.zf) goto L_108360c3;
  /* 1083607a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083607d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10836083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836086 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1083608d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836090 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10836097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083609a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 108360a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108360a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108360a7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 108360aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108360ad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 108360b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108360b7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 108360be jmp 0x10836163 */
  goto L_10836163;
L_108360c3:;
  /* 108360c3 mov edx, dword ptr [0x108615d4] */
  EDX = (r32((uint32_t)(0x108615d4)));
  /* 108360c9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108360cc mov dword ptr [0x108615d4], edx */
  w32((uint32_t)(0x108615d4), (EDX));
  /* 108360d2 mov eax, dword ptr [0x108615dc] */
  EAX = (r32((uint32_t)(0x108615dc)));
  /* 108360d7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108360da mov dword ptr [0x108615dc], eax */
  w32((uint32_t)(0x108615dc), (EAX));
  /* 108360df mov ecx, dword ptr [0x108615dc] */
  ECX = (r32((uint32_t)(0x108615dc)));
  /* 108360e5 cmp ecx, dword ptr [0x108615e0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x108615e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108360eb jbe 0x108360f9 */
  if ((C.cf||C.zf)) goto L_108360f9;
  /* 108360ed mov edx, dword ptr [0x108615dc] */
  EDX = (r32((uint32_t)(0x108615dc)));
  /* 108360f3 mov dword ptr [0x108615e0], edx */
  w32((uint32_t)(0x108615e0), (EDX));
L_108360f9:;
  /* 108360f9 cmp dword ptr [0x108615d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836100 je 0x1083610f */
  if (C.zf) goto L_1083610f;
  /* 10836102 mov eax, dword ptr [0x108615d8] */
  EAX = (r32((uint32_t)(0x108615d8)));
  /* 10836107 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083610a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1083610d jmp 0x10836118 */
  goto L_10836118;
L_1083610f:;
  /* 1083610f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836112 mov dword ptr [0x108615d0], edx */
  w32((uint32_t)(0x108615d0), (EDX));
L_10836118:;
  /* 10836118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083611b mov ecx, dword ptr [0x108615d8] */
  ECX = (r32((uint32_t)(0x108615d8)));
  /* 10836121 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10836123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836126 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1083612d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836130 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836133 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10836136 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836139 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083613c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1083613f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836142 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836145 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10836148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083614b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083614e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10836151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836154 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836157 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1083615a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083615d mov dword ptr [0x108615d8], ecx */
  w32((uint32_t)(0x108615d8), (ECX));
L_10836163:;
  /* 10836163 push 4 */
  push32((uint32_t)(0x4u));
  /* 10836165 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836167 mov dl, byte ptr [0x1085fa90] */
  DL = (r8((uint32_t)(0x1085fa90)));
  /* 1083616d push edx */
  push32((uint32_t)(EDX));
  /* 1083616e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836171 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836174 push eax */
  push32((uint32_t)(EAX));
  /* 10836175 call 0x10839b50 */
  push32(0x1083617au); f_10839b50();
  /* 1083617a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083617d push 4 */
  push32((uint32_t)(0x4u));
  /* 1083617f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836181 mov cl, byte ptr [0x1085fa90] */
  CL = (r8((uint32_t)(0x1085fa90)));
  /* 10836187 push ecx */
  push32((uint32_t)(ECX));
  /* 10836188 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083618b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083618e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10836192 push ecx */
  push32((uint32_t)(ECX));
  /* 10836193 call 0x10839b50 */
  push32(0x10836198u); f_10839b50();
  /* 10836198 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083619b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083619e push edx */
  push32((uint32_t)(EDX));
  /* 1083619f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108361a1 mov al, byte ptr [0x1085fa92] */
  AL = (r8((uint32_t)(0x1085fa92)));
  /* 108361a6 push eax */
  push32((uint32_t)(EAX));
  /* 108361a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108361aa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108361ad push ecx */
  push32((uint32_t)(ECX));
  /* 108361ae call 0x10839b50 */
  push32(0x108361b3u); f_10839b50();
  /* 108361b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108361b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108361b9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_108361bc:;
  /* 108361bc pop edi */
  EDI = (pop32());
  /* 108361bd pop esi */
  ESI = (pop32());
  /* 108361be pop ebx */
  EBX = (pop32());
  /* 108361bf mov esp, ebp */
  ESP = (EBP);
  /* 108361c1 pop ebp */
  EBP = (pop32());
  /* 108361c2 ret  */
  ESPCHK(0x10835eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x108361d0 (27 bytes, 13 insns) */
void f_108361d0(void) {
  FTRACE(0x108361d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108361d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108361d1 mov ebp, esp */
  EBP = (ESP);
  /* 108361d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108361d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108361d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108361d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108361dc push eax */
  push32((uint32_t)(EAX));
  /* 108361dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108361e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108361e1 call 0x108361f0 */
  push32(0x108361e6u); f_108361f0();
  /* 108361e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108361e9 pop ebp */
  EBP = (pop32());
  /* 108361ea ret  */
  ESPCHK(0x108361d0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x108361f0 (96 bytes, 37 insns) */
void f_108361f0(void) {
  FTRACE(0x108361f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108361f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108361f1 mov ebp, esp */
  EBP = (ESP);
  /* 108361f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108361f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108361f9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108361fd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10836200 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10836203 push ecx */
  push32((uint32_t)(ECX));
  /* 10836204 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10836207 push edx */
  push32((uint32_t)(EDX));
  /* 10836208 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083620b push eax */
  push32((uint32_t)(EAX));
  /* 1083620c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083620f push ecx */
  push32((uint32_t)(ECX));
  /* 10836210 call 0x10835de0 */
  push32(0x10836215u); f_10835de0();
  /* 10836215 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836218 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083621b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083621f je 0x10836249 */
  if (C.zf) goto L_10836249;
  /* 10836221 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836224 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10836227 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083622a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083622d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10836230:;
  /* 10836230 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836233 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836236 jae 0x10836249 */
  if (!C.cf) goto L_10836249;
  /* 10836238 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083623b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1083623e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836241 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836244 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10836247 jmp 0x10836230 */
  goto L_10836230;
L_10836249:;
  /* 10836249 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083624c mov esp, ebp */
  ESP = (EBP);
  /* 1083624e pop ebp */
  EBP = (pop32());
  /* 1083624f ret  */
  ESPCHK(0x108361f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006250 @ 0x10836250 (27 bytes, 13 insns) */
void f_10836250(void) {
  FTRACE(0x10836250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836250 push ebp */
  push32((uint32_t)(EBP));
  /* 10836251 mov ebp, esp */
  EBP = (ESP);
  /* 10836253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836255 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836257 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836259 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083625c push eax */
  push32((uint32_t)(EAX));
  /* 1083625d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836260 push ecx */
  push32((uint32_t)(ECX));
  /* 10836261 call 0x10836270 */
  push32(0x10836266u); f_10836270();
  /* 10836266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836269 pop ebp */
  EBP = (pop32());
  /* 1083626a ret  */
  ESPCHK(0x10836250u, _esp0);
  ESP += 4; return;
}

/* FUN_10006270 @ 0x10836270 (64 bytes, 27 insns) */
void f_10836270(void) {
  FTRACE(0x10836270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836270 push ebp */
  push32((uint32_t)(EBP));
  /* 10836271 mov ebp, esp */
  EBP = (ESP);
  /* 10836273 push ecx */
  push32((uint32_t)(ECX));
  /* 10836274 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836276 call 0x108397e0 */
  push32(0x1083627bu); f_108397e0();
  /* 1083627b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083627e push 1 */
  push32((uint32_t)(0x1u));
  /* 10836280 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10836283 push eax */
  push32((uint32_t)(EAX));
  /* 10836284 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10836287 push ecx */
  push32((uint32_t)(ECX));
  /* 10836288 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083628b push edx */
  push32((uint32_t)(EDX));
  /* 1083628c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083628f push eax */
  push32((uint32_t)(EAX));
  /* 10836290 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836293 push ecx */
  push32((uint32_t)(ECX));
  /* 10836294 call 0x108362b0 */
  push32(0x10836299u); f_108362b0();
  /* 10836299 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083629c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083629f push 9 */
  push32((uint32_t)(0x9u));
  /* 108362a1 call 0x10839880 */
  push32(0x108362a6u); f_10839880();
  /* 108362a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108362a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108362ac mov esp, ebp */
  ESP = (EBP);
  /* 108362ae pop ebp */
  EBP = (pop32());
  /* 108362af ret  */
  ESPCHK(0x10836270u, _esp0);
  ESP += 4; return;
}

/* FUN_100062b0 @ 0x108362b0 (1297 bytes, 431 insns) */
void f_108362b0(void) {
  FTRACE(0x108362b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108362b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108362b1 mov ebp, esp */
  EBP = (ESP);
  /* 108362b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108362b6 push ebx */
  push32((uint32_t)(EBX));
  /* 108362b7 push esi */
  push32((uint32_t)(ESI));
  /* 108362b8 push edi */
  push32((uint32_t)(EDI));
  /* 108362b9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108362c0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108362c4 jne 0x108362e3 */
  if (!C.zf) goto L_108362e3;
  /* 108362c6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108362c9 push eax */
  push32((uint32_t)(EAX));
  /* 108362ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108362cd push ecx */
  push32((uint32_t)(ECX));
  /* 108362ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108362d1 push edx */
  push32((uint32_t)(EDX));
  /* 108362d2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108362d5 push eax */
  push32((uint32_t)(EAX));
  /* 108362d6 call 0x10835de0 */
  push32(0x108362dbu); f_10835de0();
  /* 108362db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108362de jmp 0x108367ba */
  goto L_108367ba;
L_108362e3:;
  /* 108362e3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108362e7 je 0x10836306 */
  if (C.zf) goto L_10836306;
  /* 108362e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108362ed jne 0x10836306 */
  if (!C.zf) goto L_10836306;
  /* 108362ef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108362f2 push ecx */
  push32((uint32_t)(ECX));
  /* 108362f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108362f6 push edx */
  push32((uint32_t)(EDX));
  /* 108362f7 call 0x10836870 */
  push32(0x108362fcu); f_10836870();
  /* 108362fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108362ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836301 jmp 0x108367ba */
  goto L_108367ba;
L_10836306:;
  /* 10836306 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 1083630b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1083630e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836310 je 0x10836342 */
  if (C.zf) goto L_10836342;
L_10836312:;
  /* 10836312 call 0x10836f80 */
  push32(0x10836317u); f_10836f80();
  /* 10836317 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836319 jne 0x1083633c */
  if (!C.zf) goto L_1083633c;
  /* 1083631b push 0x1085c7ac */
  push32((uint32_t)(0x1085c7acu));
  /* 10836320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836322 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10836327 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 1083632c push 2 */
  push32((uint32_t)(0x2u));
  /* 1083632e call 0x10834ea0 */
  push32(0x10836333u); f_10834ea0();
  /* 10836333 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836336 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836339 jne 0x1083633c */
  if (!C.zf) goto L_1083633c;
  /* 1083633b int3  */
  x86_unimpl("int3 @ 0x1083633b");
L_1083633c:;
  /* 1083633c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083633e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836340 jne 0x10836312 */
  if (!C.zf) goto L_10836312;
L_10836342:;
  /* 10836342 mov edx, dword ptr [0x1085fa88] */
  EDX = (r32((uint32_t)(0x1085fa88)));
  /* 10836348 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1083634b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083634e cmp eax, dword ptr [0x1085fa8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1085fa8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836354 jne 0x10836357 */
  if (!C.zf) goto L_10836357;
  /* 10836356 int3  */
  x86_unimpl("int3 @ 0x10836356");
L_10836357:;
  /* 10836357 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083635a push ecx */
  push32((uint32_t)(ECX));
  /* 1083635b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083635e push edx */
  push32((uint32_t)(EDX));
  /* 1083635f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10836362 push eax */
  push32((uint32_t)(EAX));
  /* 10836363 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836366 push ecx */
  push32((uint32_t)(ECX));
  /* 10836367 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083636a push edx */
  push32((uint32_t)(EDX));
  /* 1083636b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083636e push eax */
  push32((uint32_t)(EAX));
  /* 1083636f push 2 */
  push32((uint32_t)(0x2u));
  /* 10836371 call dword ptr [0x1085fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1085fc90))), 0x10836377u);
  /* 10836377 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083637a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083637c jne 0x108363dc */
  if (!C.zf) goto L_108363dc;
  /* 1083637e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836382 je 0x108363af */
  if (C.zf) goto L_108363af;
L_10836384:;
  /* 10836384 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10836387 push ecx */
  push32((uint32_t)(ECX));
  /* 10836388 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083638b push edx */
  push32((uint32_t)(EDX));
  /* 1083638c push 0x1085c928 */
  push32((uint32_t)(0x1085c928u));
  /* 10836391 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836393 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836395 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836399 call 0x10834ea0 */
  push32(0x1083639eu); f_10834ea0();
  /* 1083639e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108363a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108363a4 jne 0x108363a7 */
  if (!C.zf) goto L_108363a7;
  /* 108363a6 int3  */
  x86_unimpl("int3 @ 0x108363a6");
L_108363a7:;
  /* 108363a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108363a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108363ab jne 0x10836384 */
  if (!C.zf) goto L_10836384;
  /* 108363ad jmp 0x108363d5 */
  goto L_108363d5;
L_108363af:;
  /* 108363af push 0x1085c904 */
  push32((uint32_t)(0x1085c904u));
  /* 108363b4 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 108363b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108363bb push 0 */
  push32((uint32_t)(0x0u));
  /* 108363bd push 0 */
  push32((uint32_t)(0x0u));
  /* 108363bf push 0 */
  push32((uint32_t)(0x0u));
  /* 108363c1 call 0x10834ea0 */
  push32(0x108363c6u); f_10834ea0();
  /* 108363c6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108363c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108363cc jne 0x108363cf */
  if (!C.zf) goto L_108363cf;
  /* 108363ce int3  */
  x86_unimpl("int3 @ 0x108363ce");
L_108363cf:;
  /* 108363cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108363d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108363d3 jne 0x108363af */
  if (!C.zf) goto L_108363af;
L_108363d5:;
  /* 108363d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108363d7 jmp 0x108367ba */
  goto L_108367ba;
L_108363dc:;
  /* 108363dc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108363e0 jbe 0x1083640e */
  if ((C.cf||C.zf)) goto L_1083640e;
L_108363e2:;
  /* 108363e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108363e5 push edx */
  push32((uint32_t)(EDX));
  /* 108363e6 push 0x1085c8d4 */
  push32((uint32_t)(0x1085c8d4u));
  /* 108363eb push 0 */
  push32((uint32_t)(0x0u));
  /* 108363ed push 0 */
  push32((uint32_t)(0x0u));
  /* 108363ef push 0 */
  push32((uint32_t)(0x0u));
  /* 108363f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 108363f3 call 0x10834ea0 */
  push32(0x108363f8u); f_10834ea0();
  /* 108363f8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108363fb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108363fe jne 0x10836401 */
  if (!C.zf) goto L_10836401;
  /* 10836400 int3  */
  x86_unimpl("int3 @ 0x10836400");
L_10836401:;
  /* 10836401 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836405 jne 0x108363e2 */
  if (!C.zf) goto L_108363e2;
  /* 10836407 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836409 jmp 0x108367ba */
  goto L_108367ba;
L_1083640e:;
  /* 1083640e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836412 je 0x10836456 */
  if (C.zf) goto L_10836456;
  /* 10836414 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836417 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083641d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836420 je 0x10836456 */
  if (C.zf) goto L_10836456;
  /* 10836422 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836425 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1083642b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083642e je 0x10836456 */
  if (C.zf) goto L_10836456;
L_10836430:;
  /* 10836430 push 0x1085c6e8 */
  push32((uint32_t)(0x1085c6e8u));
  /* 10836435 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 1083643a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083643c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083643e push 0 */
  push32((uint32_t)(0x0u));
  /* 10836440 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836442 call 0x10834ea0 */
  push32(0x10836447u); f_10834ea0();
  /* 10836447 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083644a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083644d jne 0x10836450 */
  if (!C.zf) goto L_10836450;
  /* 1083644f int3  */
  x86_unimpl("int3 @ 0x1083644f");
L_10836450:;
  /* 10836450 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836452 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836454 jne 0x10836430 */
  if (!C.zf) goto L_10836430;
L_10836456:;
  /* 10836456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836459 push ecx */
  push32((uint32_t)(ECX));
  /* 1083645a call 0x108373e0 */
  push32(0x1083645fu); f_108373e0();
  /* 1083645f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836462 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836464 jne 0x10836487 */
  if (!C.zf) goto L_10836487;
  /* 10836466 push 0x1085c8b0 */
  push32((uint32_t)(0x1085c8b0u));
  /* 1083646b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083646d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10836472 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836477 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836479 call 0x10834ea0 */
  push32(0x1083647eu); f_10834ea0();
  /* 1083647e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836481 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836484 jne 0x10836487 */
  if (!C.zf) goto L_10836487;
  /* 10836486 int3  */
  x86_unimpl("int3 @ 0x10836486");
L_10836487:;
  /* 10836487 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836489 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083648b jne 0x10836456 */
  if (!C.zf) goto L_10836456;
  /* 1083648d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836490 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836493 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10836496 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836499 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083649d jne 0x108364a6 */
  if (!C.zf) goto L_108364a6;
  /* 1083649f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_108364a6:;
  /* 108364a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108364aa je 0x108364ea */
  if (C.zf) goto L_108364ea;
L_108364ac:;
  /* 108364ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108364af cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108364b6 jne 0x108364c1 */
  if (!C.zf) goto L_108364c1;
  /* 108364b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108364bb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108364bf je 0x108364e2 */
  if (C.zf) goto L_108364e2;
L_108364c1:;
  /* 108364c1 push 0x1085c868 */
  push32((uint32_t)(0x1085c868u));
  /* 108364c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108364c8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 108364cd push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 108364d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 108364d4 call 0x10834ea0 */
  push32(0x108364d9u); f_10834ea0();
  /* 108364d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108364dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108364df jne 0x108364e2 */
  if (!C.zf) goto L_108364e2;
  /* 108364e1 int3  */
  x86_unimpl("int3 @ 0x108364e1");
L_108364e2:;
  /* 108364e2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108364e4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108364e6 jne 0x108364ac */
  if (!C.zf) goto L_108364ac;
  /* 108364e8 jmp 0x1083654e */
  goto L_1083654e;
L_108364ea:;
  /* 108364ea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108364ed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108364f0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108364f5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108364f8 jne 0x1083650f */
  if (!C.zf) goto L_1083650f;
  /* 108364fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108364fd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10836503 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836506 jne 0x1083650f */
  if (!C.zf) goto L_1083650f;
  /* 10836508 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1083650f:;
  /* 1083650f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836512 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836515 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083651a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083651d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10836523 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836525 je 0x10836548 */
  if (C.zf) goto L_10836548;
  /* 10836527 push 0x1085c82c */
  push32((uint32_t)(0x1085c82cu));
  /* 1083652c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083652e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10836533 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836538 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083653a call 0x10834ea0 */
  push32(0x1083653fu); f_10834ea0();
  /* 1083653f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836542 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836545 jne 0x10836548 */
  if (!C.zf) goto L_10836548;
  /* 10836547 int3  */
  x86_unimpl("int3 @ 0x10836547");
L_10836548:;
  /* 10836548 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083654a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083654c jne 0x1083650f */
  if (!C.zf) goto L_1083650f;
L_1083654e:;
  /* 1083654e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836552 je 0x10836579 */
  if (C.zf) goto L_10836579;
  /* 10836554 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836557 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083655a push eax */
  push32((uint32_t)(EAX));
  /* 1083655b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083655e push ecx */
  push32((uint32_t)(ECX));
  /* 1083655f call 0x10839d60 */
  push32(0x10836564u); f_10839d60();
  /* 10836564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836567 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083656a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083656e jne 0x10836577 */
  if (!C.zf) goto L_10836577;
  /* 10836570 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836572 jmp 0x108367ba */
  goto L_108367ba;
L_10836577:;
  /* 10836577 jmp 0x1083659c */
  goto L_1083659c;
L_10836579:;
  /* 10836579 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083657c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083657f push edx */
  push32((uint32_t)(EDX));
  /* 10836580 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836583 push eax */
  push32((uint32_t)(EAX));
  /* 10836584 call 0x10839cb0 */
  push32(0x10836589u); f_10839cb0();
  /* 10836589 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083658c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083658f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836593 jne 0x1083659c */
  if (!C.zf) goto L_1083659c;
  /* 10836595 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836597 jmp 0x108367ba */
  goto L_108367ba;
L_1083659c:;
  /* 1083659c mov ecx, dword ptr [0x1085fa88] */
  ECX = (r32((uint32_t)(0x1085fa88)));
  /* 108365a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108365a5 mov dword ptr [0x1085fa88], ecx */
  w32((uint32_t)(0x1085fa88), (ECX));
  /* 108365ab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108365af jne 0x10836607 */
  if (!C.zf) goto L_10836607;
  /* 108365b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108365b4 mov eax, dword ptr [0x108615d4] */
  EAX = (r32((uint32_t)(0x108615d4)));
  /* 108365b9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108365bc mov dword ptr [0x108615d4], eax */
  w32((uint32_t)(0x108615d4), (EAX));
  /* 108365c1 mov ecx, dword ptr [0x108615d4] */
  ECX = (r32((uint32_t)(0x108615d4)));
  /* 108365c7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108365ca mov dword ptr [0x108615d4], ecx */
  w32((uint32_t)(0x108615d4), (ECX));
  /* 108365d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108365d3 mov eax, dword ptr [0x108615dc] */
  EAX = (r32((uint32_t)(0x108615dc)));
  /* 108365d8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108365db mov dword ptr [0x108615dc], eax */
  w32((uint32_t)(0x108615dc), (EAX));
  /* 108365e0 mov ecx, dword ptr [0x108615dc] */
  ECX = (r32((uint32_t)(0x108615dc)));
  /* 108365e6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108365e9 mov dword ptr [0x108615dc], ecx */
  w32((uint32_t)(0x108615dc), (ECX));
  /* 108365ef mov edx, dword ptr [0x108615dc] */
  EDX = (r32((uint32_t)(0x108615dc)));
  /* 108365f5 cmp edx, dword ptr [0x108615e0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x108615e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108365fb jbe 0x10836607 */
  if ((C.cf||C.zf)) goto L_10836607;
  /* 108365fd mov eax, dword ptr [0x108615dc] */
  EAX = (r32((uint32_t)(0x108615dc)));
  /* 10836602 mov dword ptr [0x108615e0], eax */
  w32((uint32_t)(0x108615e0), (EAX));
L_10836607:;
  /* 10836607 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083660a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083660d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10836610 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836616 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836619 jbe 0x1083663f */
  if ((C.cf||C.zf)) goto L_1083663f;
  /* 1083661b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083661e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836621 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836624 push edx */
  push32((uint32_t)(EDX));
  /* 10836625 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836627 mov al, byte ptr [0x1085fa92] */
  AL = (r8((uint32_t)(0x1085fa92)));
  /* 1083662c push eax */
  push32((uint32_t)(EAX));
  /* 1083662d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836630 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836633 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836636 push edx */
  push32((uint32_t)(EDX));
  /* 10836637 call 0x10839b50 */
  push32(0x1083663cu); f_10839b50();
  /* 1083663c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083663f:;
  /* 1083663f push 4 */
  push32((uint32_t)(0x4u));
  /* 10836641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836643 mov al, byte ptr [0x1085fa90] */
  AL = (r8((uint32_t)(0x1085fa90)));
  /* 10836648 push eax */
  push32((uint32_t)(EAX));
  /* 10836649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083664c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083664f push ecx */
  push32((uint32_t)(ECX));
  /* 10836650 call 0x10839b50 */
  push32(0x10836655u); f_10839b50();
  /* 10836655 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836658 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083665c jne 0x10836679 */
  if (!C.zf) goto L_10836679;
  /* 1083665e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836661 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10836664 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10836667 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083666a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083666d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10836670 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836673 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10836676 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10836679:;
  /* 10836679 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083667c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083667f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10836682:;
  /* 10836682 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836686 jne 0x108366b7 */
  if (!C.zf) goto L_108366b7;
  /* 10836688 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083668c jne 0x10836696 */
  if (!C.zf) goto L_10836696;
  /* 1083668e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836691 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836694 je 0x108366b7 */
  if (C.zf) goto L_108366b7;
L_10836696:;
  /* 10836696 push 0x1085c7f8 */
  push32((uint32_t)(0x1085c7f8u));
  /* 1083669b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083669d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 108366a2 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 108366a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108366a9 call 0x10834ea0 */
  push32(0x108366aeu); f_10834ea0();
  /* 108366ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108366b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108366b4 jne 0x108366b7 */
  if (!C.zf) goto L_108366b7;
  /* 108366b6 int3  */
  x86_unimpl("int3 @ 0x108366b6");
L_108366b7:;
  /* 108366b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108366b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108366bb jne 0x10836682 */
  if (!C.zf) goto L_10836682;
  /* 108366bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108366c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108366c3 je 0x108366cb */
  if (C.zf) goto L_108366cb;
  /* 108366c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108366c9 je 0x108366d3 */
  if (C.zf) goto L_108366d3;
L_108366cb:;
  /* 108366cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108366ce jmp 0x108367ba */
  goto L_108367ba;
L_108366d3:;
  /* 108366d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108366d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108366d9 je 0x108366eb */
  if (C.zf) goto L_108366eb;
  /* 108366db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108366de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108366e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108366e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108366e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 108366e9 jmp 0x10836727 */
  goto L_10836727;
L_108366eb:;
  /* 108366eb mov eax, dword ptr [0x108615d0] */
  EAX = (r32((uint32_t)(0x108615d0)));
  /* 108366f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108366f3 je 0x10836716 */
  if (C.zf) goto L_10836716;
  /* 108366f5 push 0x1085c7dc */
  push32((uint32_t)(0x1085c7dcu));
  /* 108366fa push 0 */
  push32((uint32_t)(0x0u));
  /* 108366fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10836701 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836706 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836708 call 0x10834ea0 */
  push32(0x1083670du); f_10834ea0();
  /* 1083670d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836710 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836713 jne 0x10836716 */
  if (!C.zf) goto L_10836716;
  /* 10836715 int3  */
  x86_unimpl("int3 @ 0x10836715");
L_10836716:;
  /* 10836716 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836718 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083671a jne 0x108366eb */
  if (!C.zf) goto L_108366eb;
  /* 1083671c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083671f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10836722 mov dword ptr [0x108615d0], eax */
  w32((uint32_t)(0x108615d0), (EAX));
L_10836727:;
  /* 10836727 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083672a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083672e je 0x1083673f */
  if (C.zf) goto L_1083673f;
  /* 10836730 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836733 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10836736 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836739 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083673b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083673d jmp 0x1083677a */
  goto L_1083677a;
L_1083673f:;
  /* 1083673f mov eax, dword ptr [0x108615d8] */
  EAX = (r32((uint32_t)(0x108615d8)));
  /* 10836744 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836747 je 0x1083676a */
  if (C.zf) goto L_1083676a;
  /* 10836749 push 0x1085c7c0 */
  push32((uint32_t)(0x1085c7c0u));
  /* 1083674e push 0 */
  push32((uint32_t)(0x0u));
  /* 10836750 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10836755 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 1083675a push 2 */
  push32((uint32_t)(0x2u));
  /* 1083675c call 0x10834ea0 */
  push32(0x10836761u); f_10834ea0();
  /* 10836761 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836767 jne 0x1083676a */
  if (!C.zf) goto L_1083676a;
  /* 10836769 int3  */
  x86_unimpl("int3 @ 0x10836769");
L_1083676a:;
  /* 1083676a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083676c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083676e jne 0x1083673f */
  if (!C.zf) goto L_1083673f;
  /* 10836770 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836773 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10836775 mov dword ptr [0x108615d8], eax */
  w32((uint32_t)(0x108615d8), (EAX));
L_1083677a:;
  /* 1083677a cmp dword ptr [0x108615d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836781 je 0x10836791 */
  if (C.zf) goto L_10836791;
  /* 10836783 mov ecx, dword ptr [0x108615d8] */
  ECX = (r32((uint32_t)(0x108615d8)));
  /* 10836789 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083678c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1083678f jmp 0x10836799 */
  goto L_10836799;
L_10836791:;
  /* 10836791 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836794 mov dword ptr [0x108615d0], eax */
  w32((uint32_t)(0x108615d0), (EAX));
L_10836799:;
  /* 10836799 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083679c mov edx, dword ptr [0x108615d8] */
  EDX = (r32((uint32_t)(0x108615d8)));
  /* 108367a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108367a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108367a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 108367ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108367b1 mov dword ptr [0x108615d8], ecx */
  w32((uint32_t)(0x108615d8), (ECX));
  /* 108367b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108367ba:;
  /* 108367ba pop edi */
  EDI = (pop32());
  /* 108367bb pop esi */
  ESI = (pop32());
  /* 108367bc pop ebx */
  EBX = (pop32());
  /* 108367bd mov esp, ebp */
  ESP = (EBP);
  /* 108367bf pop ebp */
  EBP = (pop32());
  /* 108367c0 ret  */
  ESPCHK(0x108362b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067d0 @ 0x108367d0 (27 bytes, 13 insns) */
void f_108367d0(void) {
  FTRACE(0x108367d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108367d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108367d1 mov ebp, esp */
  EBP = (ESP);
  /* 108367d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108367d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108367d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 108367d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108367dc push eax */
  push32((uint32_t)(EAX));
  /* 108367dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108367e0 push ecx */
  push32((uint32_t)(ECX));
  /* 108367e1 call 0x108367f0 */
  push32(0x108367e6u); f_108367f0();
  /* 108367e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108367e9 pop ebp */
  EBP = (pop32());
  /* 108367ea ret  */
  ESPCHK(0x108367d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x108367f0 (64 bytes, 27 insns) */
void f_108367f0(void) {
  FTRACE(0x108367f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108367f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108367f1 mov ebp, esp */
  EBP = (ESP);
  /* 108367f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108367f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 108367f6 call 0x108397e0 */
  push32(0x108367fbu); f_108397e0();
  /* 108367fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108367fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10836800 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10836803 push eax */
  push32((uint32_t)(EAX));
  /* 10836804 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10836807 push ecx */
  push32((uint32_t)(ECX));
  /* 10836808 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083680b push edx */
  push32((uint32_t)(EDX));
  /* 1083680c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083680f push eax */
  push32((uint32_t)(EAX));
  /* 10836810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836813 push ecx */
  push32((uint32_t)(ECX));
  /* 10836814 call 0x108362b0 */
  push32(0x10836819u); f_108362b0();
  /* 10836819 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083681c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083681f push 9 */
  push32((uint32_t)(0x9u));
  /* 10836821 call 0x10839880 */
  push32(0x10836826u); f_10839880();
  /* 10836826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083682c mov esp, ebp */
  ESP = (EBP);
  /* 1083682e pop ebp */
  EBP = (pop32());
  /* 1083682f ret  */
  ESPCHK(0x108367f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x10836830 (19 bytes, 9 insns) */
void f_10836830(void) {
  FTRACE(0x10836830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836830 push ebp */
  push32((uint32_t)(EBP));
  /* 10836831 mov ebp, esp */
  EBP = (ESP);
  /* 10836833 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836835 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836838 push eax */
  push32((uint32_t)(EAX));
  /* 10836839 call 0x10836870 */
  push32(0x1083683eu); f_10836870();
  /* 1083683e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836841 pop ebp */
  EBP = (pop32());
  /* 10836842 ret  */
  ESPCHK(0x10836830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x10836850 (19 bytes, 9 insns) */
void f_10836850(void) {
  FTRACE(0x10836850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836850 push ebp */
  push32((uint32_t)(EBP));
  /* 10836851 mov ebp, esp */
  EBP = (ESP);
  /* 10836853 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836858 push eax */
  push32((uint32_t)(EAX));
  /* 10836859 call 0x108368a0 */
  push32(0x1083685eu); f_108368a0();
  /* 1083685e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836861 pop ebp */
  EBP = (pop32());
  /* 10836862 ret  */
  ESPCHK(0x10836850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006870 @ 0x10836870 (41 bytes, 16 insns) */
void f_10836870(void) {
  FTRACE(0x10836870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836870 push ebp */
  push32((uint32_t)(EBP));
  /* 10836871 mov ebp, esp */
  EBP = (ESP);
  /* 10836873 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836875 call 0x108397e0 */
  push32(0x1083687au); f_108397e0();
  /* 1083687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083687d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836880 push eax */
  push32((uint32_t)(EAX));
  /* 10836881 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836884 push ecx */
  push32((uint32_t)(ECX));
  /* 10836885 call 0x108368a0 */
  push32(0x1083688au); f_108368a0();
  /* 1083688a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083688d push 9 */
  push32((uint32_t)(0x9u));
  /* 1083688f call 0x10839880 */
  push32(0x10836894u); f_10839880();
  /* 10836894 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836897 pop ebp */
  EBP = (pop32());
  /* 10836898 ret  */
  ESPCHK(0x10836870u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x108368a0 (1004 bytes, 342 insns) */
void f_108368a0(void) {
  FTRACE(0x108368a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108368a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108368a1 mov ebp, esp */
  EBP = (ESP);
  /* 108368a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108368a4 push ebx */
  push32((uint32_t)(EBX));
  /* 108368a5 push esi */
  push32((uint32_t)(ESI));
  /* 108368a6 push edi */
  push32((uint32_t)(EDI));
  /* 108368a7 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 108368ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108368af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108368b1 je 0x108368e3 */
  if (C.zf) goto L_108368e3;
L_108368b3:;
  /* 108368b3 call 0x10836f80 */
  push32(0x108368b8u); f_10836f80();
  /* 108368b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108368ba jne 0x108368dd */
  if (!C.zf) goto L_108368dd;
  /* 108368bc push 0x1085c7ac */
  push32((uint32_t)(0x1085c7acu));
  /* 108368c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108368c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 108368c8 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 108368cd push 2 */
  push32((uint32_t)(0x2u));
  /* 108368cf call 0x10834ea0 */
  push32(0x108368d4u); f_10834ea0();
  /* 108368d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108368d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108368da jne 0x108368dd */
  if (!C.zf) goto L_108368dd;
  /* 108368dc int3  */
  x86_unimpl("int3 @ 0x108368dc");
L_108368dd:;
  /* 108368dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108368df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108368e1 jne 0x108368b3 */
  if (!C.zf) goto L_108368b3;
L_108368e3:;
  /* 108368e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108368e7 jne 0x108368ee */
  if (!C.zf) goto L_108368ee;
  /* 108368e9 jmp 0x10836c85 */
  goto L_10836c85;
L_108368ee:;
  /* 108368ee push 0 */
  push32((uint32_t)(0x0u));
  /* 108368f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108368f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108368f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108368f7 push edx */
  push32((uint32_t)(EDX));
  /* 108368f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 108368fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108368fd push eax */
  push32((uint32_t)(EAX));
  /* 108368fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10836900 call dword ptr [0x1085fc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1085fc90))), 0x10836906u);
  /* 10836906 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836909 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083690b jne 0x10836938 */
  if (!C.zf) goto L_10836938;
L_1083690d:;
  /* 1083690d push 0x1085ca70 */
  push32((uint32_t)(0x1085ca70u));
  /* 10836912 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10836917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836919 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083691b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083691d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083691f call 0x10834ea0 */
  push32(0x10836924u); f_10834ea0();
  /* 10836924 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836927 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083692a jne 0x1083692d */
  if (!C.zf) goto L_1083692d;
  /* 1083692c int3  */
  x86_unimpl("int3 @ 0x1083692c");
L_1083692d:;
  /* 1083692d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083692f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836931 jne 0x1083690d */
  if (!C.zf) goto L_1083690d;
  /* 10836933 jmp 0x10836c85 */
  goto L_10836c85;
L_10836938:;
  /* 10836938 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083693b push edx */
  push32((uint32_t)(EDX));
  /* 1083693c call 0x108373e0 */
  push32(0x10836941u); f_108373e0();
  /* 10836941 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836946 jne 0x10836969 */
  if (!C.zf) goto L_10836969;
  /* 10836948 push 0x1085c8b0 */
  push32((uint32_t)(0x1085c8b0u));
  /* 1083694d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083694f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10836954 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836959 push 2 */
  push32((uint32_t)(0x2u));
  /* 1083695b call 0x10834ea0 */
  push32(0x10836960u); f_10834ea0();
  /* 10836960 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836963 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836966 jne 0x10836969 */
  if (!C.zf) goto L_10836969;
  /* 10836968 int3  */
  x86_unimpl("int3 @ 0x10836968");
L_10836969:;
  /* 10836969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083696b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083696d jne 0x10836938 */
  if (!C.zf) goto L_10836938;
  /* 1083696f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836972 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836975 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10836978:;
  /* 10836978 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083697b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1083697e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836983 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836986 je 0x108369cb */
  if (C.zf) goto L_108369cb;
  /* 10836988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083698b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083698f je 0x108369cb */
  if (C.zf) goto L_108369cb;
  /* 10836991 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836994 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836997 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083699c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083699f je 0x108369cb */
  if (C.zf) goto L_108369cb;
  /* 108369a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108369a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108369a8 je 0x108369cb */
  if (C.zf) goto L_108369cb;
  /* 108369aa push 0x1085ca48 */
  push32((uint32_t)(0x1085ca48u));
  /* 108369af push 0 */
  push32((uint32_t)(0x0u));
  /* 108369b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 108369b6 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 108369bb push 2 */
  push32((uint32_t)(0x2u));
  /* 108369bd call 0x10834ea0 */
  push32(0x108369c2u); f_10834ea0();
  /* 108369c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108369c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108369c8 jne 0x108369cb */
  if (!C.zf) goto L_108369cb;
  /* 108369ca int3  */
  x86_unimpl("int3 @ 0x108369ca");
L_108369cb:;
  /* 108369cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108369cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108369cf jne 0x10836978 */
  if (!C.zf) goto L_10836978;
  /* 108369d1 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 108369d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 108369d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108369db jne 0x10836aa6 */
  if (!C.zf) goto L_10836aa6;
  /* 108369e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 108369e3 mov cl, byte ptr [0x1085fa90] */
  CL = (r8((uint32_t)(0x1085fa90)));
  /* 108369e9 push ecx */
  push32((uint32_t)(ECX));
  /* 108369ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108369ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108369f0 push edx */
  push32((uint32_t)(EDX));
  /* 108369f1 call 0x10836ef0 */
  push32(0x108369f6u); f_10836ef0();
  /* 108369f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108369f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108369fb jne 0x10836a40 */
  if (!C.zf) goto L_10836a40;
L_108369fd:;
  /* 108369fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a00 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836a03 push eax */
  push32((uint32_t)(EAX));
  /* 10836a04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a07 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10836a0a push edx */
  push32((uint32_t)(EDX));
  /* 10836a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a0e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10836a11 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10836a17 mov edx, dword ptr [ecx*4 + 0x1085fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa94)));
  /* 10836a1e push edx */
  push32((uint32_t)(EDX));
  /* 10836a1f push 0x1085ca1c */
  push32((uint32_t)(0x1085ca1cu));
  /* 10836a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10836a2c call 0x10834ea0 */
  push32(0x10836a31u); f_10834ea0();
  /* 10836a31 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836a34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836a37 jne 0x10836a3a */
  if (!C.zf) goto L_10836a3a;
  /* 10836a39 int3  */
  x86_unimpl("int3 @ 0x10836a39");
L_10836a3a:;
  /* 10836a3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836a3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836a3e jne 0x108369fd */
  if (!C.zf) goto L_108369fd;
L_10836a40:;
  /* 10836a40 push 4 */
  push32((uint32_t)(0x4u));
  /* 10836a42 mov cl, byte ptr [0x1085fa90] */
  CL = (r8((uint32_t)(0x1085fa90)));
  /* 10836a48 push ecx */
  push32((uint32_t)(ECX));
  /* 10836a49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a4c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10836a4f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a52 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10836a56 push edx */
  push32((uint32_t)(EDX));
  /* 10836a57 call 0x10836ef0 */
  push32(0x10836a5cu); f_10836ef0();
  /* 10836a5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836a5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836a61 jne 0x10836aa6 */
  if (!C.zf) goto L_10836aa6;
L_10836a63:;
  /* 10836a63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a66 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836a69 push eax */
  push32((uint32_t)(EAX));
  /* 10836a6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a6d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10836a70 push edx */
  push32((uint32_t)(EDX));
  /* 10836a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836a74 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10836a77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10836a7d mov edx, dword ptr [ecx*4 + 0x1085fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa94)));
  /* 10836a84 push edx */
  push32((uint32_t)(EDX));
  /* 10836a85 push 0x1085c9f0 */
  push32((uint32_t)(0x1085c9f0u));
  /* 10836a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a8e push 0 */
  push32((uint32_t)(0x0u));
  /* 10836a90 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836a92 call 0x10834ea0 */
  push32(0x10836a97u); f_10834ea0();
  /* 10836a97 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836a9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836a9d jne 0x10836aa0 */
  if (!C.zf) goto L_10836aa0;
  /* 10836a9f int3  */
  x86_unimpl("int3 @ 0x10836a9f");
L_10836aa0:;
  /* 10836aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836aa4 jne 0x10836a63 */
  if (!C.zf) goto L_10836a63;
L_10836aa6:;
  /* 10836aa6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836aa9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836aad jne 0x10836b1b */
  if (!C.zf) goto L_10836b1b;
L_10836aaf:;
  /* 10836aaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836ab2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836ab9 jne 0x10836ac4 */
  if (!C.zf) goto L_10836ac4;
  /* 10836abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836abe cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836ac2 je 0x10836ae5 */
  if (C.zf) goto L_10836ae5;
L_10836ac4:;
  /* 10836ac4 push 0x1085c9b0 */
  push32((uint32_t)(0x1085c9b0u));
  /* 10836ac9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836acb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10836ad0 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836ad7 call 0x10834ea0 */
  push32(0x10836adcu); f_10834ea0();
  /* 10836adc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836adf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836ae2 jne 0x10836ae5 */
  if (!C.zf) goto L_10836ae5;
  /* 10836ae4 int3  */
  x86_unimpl("int3 @ 0x10836ae4");
L_10836ae5:;
  /* 10836ae5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836ae7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836ae9 jne 0x10836aaf */
  if (!C.zf) goto L_10836aaf;
  /* 10836aeb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836aee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10836af1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836af4 push eax */
  push32((uint32_t)(EAX));
  /* 10836af5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836af7 mov cl, byte ptr [0x1085fa91] */
  CL = (r8((uint32_t)(0x1085fa91)));
  /* 10836afd push ecx */
  push32((uint32_t)(ECX));
  /* 10836afe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b01 push edx */
  push32((uint32_t)(EDX));
  /* 10836b02 call 0x10839b50 */
  push32(0x10836b07u); f_10839b50();
  /* 10836b07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836b0a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b0d push eax */
  push32((uint32_t)(EAX));
  /* 10836b0e call 0x10839f50 */
  push32(0x10836b13u); f_10839f50();
  /* 10836b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836b16 jmp 0x10836c85 */
  goto L_10836c85;
L_10836b1b:;
  /* 10836b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b1e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836b22 jne 0x10836b31 */
  if (!C.zf) goto L_10836b31;
  /* 10836b24 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836b28 jne 0x10836b31 */
  if (!C.zf) goto L_10836b31;
  /* 10836b2a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10836b31:;
  /* 10836b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b34 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836b37 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836b3a je 0x10836b5d */
  if (C.zf) goto L_10836b5d;
  /* 10836b3c push 0x1085c990 */
  push32((uint32_t)(0x1085c990u));
  /* 10836b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836b43 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10836b48 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10836b4f call 0x10834ea0 */
  push32(0x10836b54u); f_10834ea0();
  /* 10836b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836b5a jne 0x10836b5d */
  if (!C.zf) goto L_10836b5d;
  /* 10836b5c int3  */
  x86_unimpl("int3 @ 0x10836b5c");
L_10836b5d:;
  /* 10836b5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836b5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836b61 jne 0x10836b31 */
  if (!C.zf) goto L_10836b31;
  /* 10836b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b66 mov eax, dword ptr [0x108615dc] */
  EAX = (r32((uint32_t)(0x108615dc)));
  /* 10836b6b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836b6e mov dword ptr [0x108615dc], eax */
  w32((uint32_t)(0x108615dc), (EAX));
  /* 10836b73 mov ecx, dword ptr [0x1085fa84] */
  ECX = (r32((uint32_t)(0x1085fa84)));
  /* 10836b79 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10836b7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836b7e jne 0x10836c5c */
  if (!C.zf) goto L_10836c5c;
  /* 10836b84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b87 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836b8a je 0x10836b9c */
  if (C.zf) goto L_10836b9c;
  /* 10836b8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10836b91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836b94 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10836b97 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10836b9a jmp 0x10836bda */
  goto L_10836bda;
L_10836b9c:;
  /* 10836b9c mov ecx, dword ptr [0x108615d0] */
  ECX = (r32((uint32_t)(0x108615d0)));
  /* 10836ba2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836ba5 je 0x10836bc8 */
  if (C.zf) goto L_10836bc8;
  /* 10836ba7 push 0x1085c978 */
  push32((uint32_t)(0x1085c978u));
  /* 10836bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10836bae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10836bb3 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836bb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836bba call 0x10834ea0 */
  push32(0x10836bbfu); f_10834ea0();
  /* 10836bbf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836bc2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836bc5 jne 0x10836bc8 */
  if (!C.zf) goto L_10836bc8;
  /* 10836bc7 int3  */
  x86_unimpl("int3 @ 0x10836bc7");
L_10836bc8:;
  /* 10836bc8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836bca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10836bcc jne 0x10836b9c */
  if (!C.zf) goto L_10836b9c;
  /* 10836bce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836bd1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10836bd4 mov dword ptr [0x108615d0], ecx */
  w32((uint32_t)(0x108615d0), (ECX));
L_10836bda:;
  /* 10836bda mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836bdd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836be1 je 0x10836bf2 */
  if (C.zf) goto L_10836bf2;
  /* 10836be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836be6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10836be9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836bec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10836bee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10836bf0 jmp 0x10836c2f */
  goto L_10836c2f;
L_10836bf2:;
  /* 10836bf2 mov ecx, dword ptr [0x108615d8] */
  ECX = (r32((uint32_t)(0x108615d8)));
  /* 10836bf8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836bfb je 0x10836c1e */
  if (C.zf) goto L_10836c1e;
  /* 10836bfd push 0x1085c960 */
  push32((uint32_t)(0x1085c960u));
  /* 10836c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836c04 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10836c09 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836c0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10836c10 call 0x10834ea0 */
  push32(0x10836c15u); f_10834ea0();
  /* 10836c15 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836c18 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836c1b jne 0x10836c1e */
  if (!C.zf) goto L_10836c1e;
  /* 10836c1d int3  */
  x86_unimpl("int3 @ 0x10836c1d");
L_10836c1e:;
  /* 10836c1e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836c20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10836c22 jne 0x10836bf2 */
  if (!C.zf) goto L_10836bf2;
  /* 10836c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10836c29 mov dword ptr [0x108615d8], ecx */
  w32((uint32_t)(0x108615d8), (ECX));
L_10836c2f:;
  /* 10836c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c32 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10836c35 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836c38 push eax */
  push32((uint32_t)(EAX));
  /* 10836c39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836c3b mov cl, byte ptr [0x1085fa91] */
  CL = (r8((uint32_t)(0x1085fa91)));
  /* 10836c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10836c42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c45 push edx */
  push32((uint32_t)(EDX));
  /* 10836c46 call 0x10839b50 */
  push32(0x10836c4bu); f_10839b50();
  /* 10836c4b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c51 push eax */
  push32((uint32_t)(EAX));
  /* 10836c52 call 0x10839f50 */
  push32(0x10836c57u); f_10839f50();
  /* 10836c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836c5a jmp 0x10836c85 */
  goto L_10836c85;
L_10836c5c:;
  /* 10836c5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c5f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10836c66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c69 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10836c6c push eax */
  push32((uint32_t)(EAX));
  /* 10836c6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836c6f mov cl, byte ptr [0x1085fa91] */
  CL = (r8((uint32_t)(0x1085fa91)));
  /* 10836c75 push ecx */
  push32((uint32_t)(ECX));
  /* 10836c76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836c79 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836c7c push edx */
  push32((uint32_t)(EDX));
  /* 10836c7d call 0x10839b50 */
  push32(0x10836c82u); f_10839b50();
  /* 10836c82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10836c85:;
  /* 10836c85 pop edi */
  EDI = (pop32());
  /* 10836c86 pop esi */
  ESI = (pop32());
  /* 10836c87 pop ebx */
  EBX = (pop32());
  /* 10836c88 mov esp, ebp */
  ESP = (EBP);
  /* 10836c8a pop ebp */
  EBP = (pop32());
  /* 10836c8b ret  */
  ESPCHK(0x108368a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x10836c90 (19 bytes, 9 insns) */
void f_10836c90(void) {
  FTRACE(0x10836c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10836c91 mov ebp, esp */
  EBP = (ESP);
  /* 10836c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 10836c95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836c98 push eax */
  push32((uint32_t)(EAX));
  /* 10836c99 call 0x10836cb0 */
  push32(0x10836c9eu); f_10836cb0();
  /* 10836c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836ca1 pop ebp */
  EBP = (pop32());
  /* 10836ca2 ret  */
  ESPCHK(0x10836c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x10836cb0 (342 bytes, 119 insns) */
void f_10836cb0(void) {
  FTRACE(0x10836cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10836cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10836cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10836cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10836cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10836cb9 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 10836cbe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10836cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836cc3 je 0x10836cf5 */
  if (C.zf) goto L_10836cf5;
L_10836cc5:;
  /* 10836cc5 call 0x10836f80 */
  push32(0x10836ccau); f_10836f80();
  /* 10836cca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836ccc jne 0x10836cef */
  if (!C.zf) goto L_10836cef;
  /* 10836cce push 0x1085c7ac */
  push32((uint32_t)(0x1085c7acu));
  /* 10836cd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836cd5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10836cda push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836cdf push 2 */
  push32((uint32_t)(0x2u));
  /* 10836ce1 call 0x10834ea0 */
  push32(0x10836ce6u); f_10834ea0();
  /* 10836ce6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836ce9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836cec jne 0x10836cef */
  if (!C.zf) goto L_10836cef;
  /* 10836cee int3  */
  x86_unimpl("int3 @ 0x10836cee");
L_10836cef:;
  /* 10836cef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836cf1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836cf3 jne 0x10836cc5 */
  if (!C.zf) goto L_10836cc5;
L_10836cf5:;
  /* 10836cf5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836cf7 call 0x108397e0 */
  push32(0x10836cfcu); f_108397e0();
  /* 10836cfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10836cff:;
  /* 10836cff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836d02 push edx */
  push32((uint32_t)(EDX));
  /* 10836d03 call 0x108373e0 */
  push32(0x10836d08u); f_108373e0();
  /* 10836d08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836d0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836d0d jne 0x10836d30 */
  if (!C.zf) goto L_10836d30;
  /* 10836d0f push 0x1085c8b0 */
  push32((uint32_t)(0x1085c8b0u));
  /* 10836d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836d16 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10836d1b push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836d20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836d22 call 0x10834ea0 */
  push32(0x10836d27u); f_10834ea0();
  /* 10836d27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836d2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d2d jne 0x10836d30 */
  if (!C.zf) goto L_10836d30;
  /* 10836d2f int3  */
  x86_unimpl("int3 @ 0x10836d2f");
L_10836d30:;
  /* 10836d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836d34 jne 0x10836cff */
  if (!C.zf) goto L_10836cff;
  /* 10836d36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836d39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836d3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10836d3f:;
  /* 10836d3f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836d42 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836d45 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836d4a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d4d je 0x10836d92 */
  if (C.zf) goto L_10836d92;
  /* 10836d4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836d52 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d56 je 0x10836d92 */
  if (C.zf) goto L_10836d92;
  /* 10836d58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836d5b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836d5e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836d63 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d66 je 0x10836d92 */
  if (C.zf) goto L_10836d92;
  /* 10836d68 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836d6b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d6f je 0x10836d92 */
  if (C.zf) goto L_10836d92;
  /* 10836d71 push 0x1085ca48 */
  push32((uint32_t)(0x1085ca48u));
  /* 10836d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836d78 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10836d7d push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836d82 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836d84 call 0x10834ea0 */
  push32(0x10836d89u); f_10834ea0();
  /* 10836d89 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836d8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d8f jne 0x10836d92 */
  if (!C.zf) goto L_10836d92;
  /* 10836d91 int3  */
  x86_unimpl("int3 @ 0x10836d91");
L_10836d92:;
  /* 10836d92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836d94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10836d96 jne 0x10836d3f */
  if (!C.zf) goto L_10836d3f;
  /* 10836d98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836d9b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836d9f jne 0x10836dae */
  if (!C.zf) goto L_10836dae;
  /* 10836da1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836da5 jne 0x10836dae */
  if (!C.zf) goto L_10836dae;
  /* 10836da7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10836dae:;
  /* 10836dae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836db1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836db5 je 0x10836de9 */
  if (C.zf) goto L_10836de9;
L_10836db7:;
  /* 10836db7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836dba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836dbd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836dc0 je 0x10836de3 */
  if (C.zf) goto L_10836de3;
  /* 10836dc2 push 0x1085c990 */
  push32((uint32_t)(0x1085c990u));
  /* 10836dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836dc9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10836dce push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836dd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10836dd5 call 0x10834ea0 */
  push32(0x10836ddau); f_10834ea0();
  /* 10836dda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836ddd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836de0 jne 0x10836de3 */
  if (!C.zf) goto L_10836de3;
  /* 10836de2 int3  */
  x86_unimpl("int3 @ 0x10836de2");
L_10836de3:;
  /* 10836de3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836de5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836de7 jne 0x10836db7 */
  if (!C.zf) goto L_10836db7;
L_10836de9:;
  /* 10836de9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10836dec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10836def mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10836df2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836df4 call 0x10839880 */
  push32(0x10836df9u); f_10839880();
  /* 10836df9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836dfc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836dff pop edi */
  EDI = (pop32());
  /* 10836e00 pop esi */
  ESI = (pop32());
  /* 10836e01 pop ebx */
  EBX = (pop32());
  /* 10836e02 mov esp, ebp */
  ESP = (EBP);
  /* 10836e04 pop ebp */
  EBP = (pop32());
  /* 10836e05 ret  */
  ESPCHK(0x10836cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x10836e10 (28 bytes, 11 insns) */
void f_10836e10(void) {
  FTRACE(0x10836e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836e10 push ebp */
  push32((uint32_t)(EBP));
  /* 10836e11 mov ebp, esp */
  EBP = (ESP);
  /* 10836e13 push ecx */
  push32((uint32_t)(ECX));
  /* 10836e14 mov eax, dword ptr [0x1085fa8c] */
  EAX = (r32((uint32_t)(0x1085fa8c)));
  /* 10836e19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10836e1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836e1f mov dword ptr [0x1085fa8c], ecx */
  w32((uint32_t)(0x1085fa8c), (ECX));
  /* 10836e25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836e28 mov esp, ebp */
  ESP = (EBP);
  /* 10836e2a pop ebp */
  EBP = (pop32());
  /* 10836e2b ret  */
  ESPCHK(0x10836e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e30 @ 0x10836e30 (157 bytes, 59 insns) */
void f_10836e30(void) {
  FTRACE(0x10836e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836e30 push ebp */
  push32((uint32_t)(EBP));
  /* 10836e31 mov ebp, esp */
  EBP = (ESP);
  /* 10836e33 push ecx */
  push32((uint32_t)(ECX));
  /* 10836e34 push ebx */
  push32((uint32_t)(EBX));
  /* 10836e35 push esi */
  push32((uint32_t)(ESI));
  /* 10836e36 push edi */
  push32((uint32_t)(EDI));
  /* 10836e37 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836e39 call 0x108397e0 */
  push32(0x10836e3eu); f_108397e0();
  /* 10836e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836e41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836e44 push eax */
  push32((uint32_t)(EAX));
  /* 10836e45 call 0x108373e0 */
  push32(0x10836e4au); f_108373e0();
  /* 10836e4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836e4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836e4f je 0x10836ebc */
  if (C.zf) goto L_10836ebc;
  /* 10836e51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836e54 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836e57 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10836e5a:;
  /* 10836e5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836e5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836e60 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836e65 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836e68 je 0x10836ead */
  if (C.zf) goto L_10836ead;
  /* 10836e6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836e6d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836e71 je 0x10836ead */
  if (C.zf) goto L_10836ead;
  /* 10836e73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836e76 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10836e79 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836e7e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836e81 je 0x10836ead */
  if (C.zf) goto L_10836ead;
  /* 10836e83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836e86 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836e8a je 0x10836ead */
  if (C.zf) goto L_10836ead;
  /* 10836e8c push 0x1085ca48 */
  push32((uint32_t)(0x1085ca48u));
  /* 10836e91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836e93 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10836e98 push 0x1085c7a0 */
  push32((uint32_t)(0x1085c7a0u));
  /* 10836e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10836e9f call 0x10834ea0 */
  push32(0x10836ea4u); f_10834ea0();
  /* 10836ea4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836ea7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836eaa jne 0x10836ead */
  if (!C.zf) goto L_10836ead;
  /* 10836eac int3  */
  x86_unimpl("int3 @ 0x10836eac");
L_10836ead:;
  /* 10836ead xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836eaf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10836eb1 jne 0x10836e5a */
  if (!C.zf) goto L_10836e5a;
  /* 10836eb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836eb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836eb9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10836ebc:;
  /* 10836ebc push 9 */
  push32((uint32_t)(0x9u));
  /* 10836ebe call 0x10839880 */
  push32(0x10836ec3u); f_10839880();
  /* 10836ec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836ec6 pop edi */
  EDI = (pop32());
  /* 10836ec7 pop esi */
  ESI = (pop32());
  /* 10836ec8 pop ebx */
  EBX = (pop32());
  /* 10836ec9 mov esp, ebp */
  ESP = (EBP);
  /* 10836ecb pop ebp */
  EBP = (pop32());
  /* 10836ecc ret  */
  ESPCHK(0x10836e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x10836ed0 (28 bytes, 11 insns) */
void f_10836ed0(void) {
  FTRACE(0x10836ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10836ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10836ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10836ed4 mov eax, dword ptr [0x1085fc90] */
  EAX = (r32((uint32_t)(0x1085fc90)));
  /* 10836ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10836edc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836edf mov dword ptr [0x1085fc90], ecx */
  w32((uint32_t)(0x1085fc90), (ECX));
  /* 10836ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836ee8 mov esp, ebp */
  ESP = (EBP);
  /* 10836eea pop ebp */
  EBP = (pop32());
  /* 10836eeb ret  */
  ESPCHK(0x10836ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ef0 @ 0x10836ef0 (136 bytes, 55 insns) */
void f_10836ef0(void) {
  FTRACE(0x10836ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10836ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10836ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10836ef4 push ebx */
  push32((uint32_t)(EBX));
  /* 10836ef5 push esi */
  push32((uint32_t)(ESI));
  /* 10836ef6 push edi */
  push32((uint32_t)(EDI));
  /* 10836ef7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10836efe:;
  /* 10836efe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836f01 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10836f04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836f07 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10836f0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836f0c je 0x10836f6e */
  if (C.zf) goto L_10836f6e;
  /* 10836f0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836f11 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10836f13 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10836f15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836f18 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10836f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836f21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836f24 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10836f27 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836f29 je 0x10836f6c */
  if (C.zf) goto L_10836f6c;
L_10836f2b:;
  /* 10836f2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10836f2e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10836f33 push eax */
  push32((uint32_t)(EAX));
  /* 10836f34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836f37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10836f39 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10836f3c push edx */
  push32((uint32_t)(EDX));
  /* 10836f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10836f40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836f43 push eax */
  push32((uint32_t)(EAX));
  /* 10836f44 push 0x1085ca8c */
  push32((uint32_t)(0x1085ca8cu));
  /* 10836f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10836f4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10836f4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10836f51 call 0x10834ea0 */
  push32(0x10836f56u); f_10834ea0();
  /* 10836f56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836f59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836f5c jne 0x10836f5f */
  if (!C.zf) goto L_10836f5f;
  /* 10836f5e int3  */
  x86_unimpl("int3 @ 0x10836f5e");
L_10836f5f:;
  /* 10836f5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10836f61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10836f63 jne 0x10836f2b */
  if (!C.zf) goto L_10836f2b;
  /* 10836f65 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10836f6c:;
  /* 10836f6c jmp 0x10836efe */
  goto L_10836efe;
L_10836f6e:;
  /* 10836f6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10836f71 pop edi */
  EDI = (pop32());
  /* 10836f72 pop esi */
  ESI = (pop32());
  /* 10836f73 pop ebx */
  EBX = (pop32());
  /* 10836f74 mov esp, ebp */
  ESP = (EBP);
  /* 10836f76 pop ebp */
  EBP = (pop32());
  /* 10836f77 ret  */
  ESPCHK(0x10836ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x10836f80 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10836f80(void) {
  FTRACE(0x10836f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10836f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10836f81 mov ebp, esp */
  EBP = (ESP);
  /* 10836f83 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10836f86 push ebx */
  push32((uint32_t)(EBX));
  /* 10836f87 push esi */
  push32((uint32_t)(ESI));
  /* 10836f88 push edi */
  push32((uint32_t)(EDI));
  /* 10836f89 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10836f90 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 10836f95 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10836f98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10836f9a jne 0x10836fa6 */
  if (!C.zf) goto L_10836fa6;
  /* 10836f9c mov eax, 1 */
  EAX = (0x1u);
  /* 10836fa1 jmp 0x108372d8 */
  goto L_108372d8;
L_10836fa6:;
  /* 10836fa6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10836fa8 call 0x108397e0 */
  push32(0x10836fadu); f_108397e0();
  /* 10836fad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10836fb0 call 0x10839fc0 */
  push32(0x10836fb5u); f_10839fc0();
  /* 10836fb5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10836fb8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836fbc je 0x108370c9 */
  if (C.zf) goto L_108370c9;
  /* 10836fc2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836fc6 je 0x108370c9 */
  if (C.zf) goto L_108370c9;
  /* 10836fcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10836fcf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10836fd2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10836fd5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10836fd8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10836fdb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10836fdf ja 0x10837092 */
  if ((!C.cf&&!C.zf)) goto L_10837092;
  /* 10836fe5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10836fe8 jmp dword ptr [eax*4 + 0x108372df] */
  switch (EAX) {
    case 0: goto L_1083706a;
    case 1: goto L_10837042;
    case 2: goto L_1083701a;
    case 3: goto L_10836fef;
    default: x86_unimpl("switch@0x10836fe8 out of table"); return;
  }
L_10836fef:;
  /* 10836fef push 0x1085cbe0 */
  push32((uint32_t)(0x1085cbe0u));
  /* 10836ff4 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10836ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10836ffb push 0 */
  push32((uint32_t)(0x0u));
  /* 10836ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 10836fff push 0 */
  push32((uint32_t)(0x0u));
  /* 10837001 call 0x10834ea0 */
  push32(0x10837006u); f_10834ea0();
  /* 10837006 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837009 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083700c jne 0x1083700f */
  if (!C.zf) goto L_1083700f;
  /* 1083700e int3  */
  x86_unimpl("int3 @ 0x1083700e");
L_1083700f:;
  /* 1083700f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10837011 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10837013 jne 0x10836fef */
  if (!C.zf) goto L_10836fef;
  /* 10837015 jmp 0x108370b8 */
  goto L_108370b8;
L_1083701a:;
  /* 1083701a push 0x1085cbbc */
  push32((uint32_t)(0x1085cbbcu));
  /* 1083701f push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837024 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837026 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083702a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083702c call 0x10834ea0 */
  push32(0x10837031u); f_10834ea0();
  /* 10837031 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837037 jne 0x1083703a */
  if (!C.zf) goto L_1083703a;
  /* 10837039 int3  */
  x86_unimpl("int3 @ 0x10837039");
L_1083703a:;
  /* 1083703a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083703c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1083703e jne 0x1083701a */
  if (!C.zf) goto L_1083701a;
  /* 10837040 jmp 0x108370b8 */
  goto L_108370b8;
L_10837042:;
  /* 10837042 push 0x1085cb98 */
  push32((uint32_t)(0x1085cb98u));
  /* 10837047 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 1083704c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083704e push 0 */
  push32((uint32_t)(0x0u));
  /* 10837050 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837052 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837054 call 0x10834ea0 */
  push32(0x10837059u); f_10834ea0();
  /* 10837059 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083705c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083705f jne 0x10837062 */
  if (!C.zf) goto L_10837062;
  /* 10837061 int3  */
  x86_unimpl("int3 @ 0x10837061");
L_10837062:;
  /* 10837062 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837064 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837066 jne 0x10837042 */
  if (!C.zf) goto L_10837042;
  /* 10837068 jmp 0x108370b8 */
  goto L_108370b8;
L_1083706a:;
  /* 1083706a push 0x1085cb74 */
  push32((uint32_t)(0x1085cb74u));
  /* 1083706f push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837074 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837076 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837078 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083707a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083707c call 0x10834ea0 */
  push32(0x10837081u); f_10834ea0();
  /* 10837081 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837084 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837087 jne 0x1083708a */
  if (!C.zf) goto L_1083708a;
  /* 10837089 int3  */
  x86_unimpl("int3 @ 0x10837089");
L_1083708a:;
  /* 1083708a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083708c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083708e jne 0x1083706a */
  if (!C.zf) goto L_1083706a;
  /* 10837090 jmp 0x108370b8 */
  goto L_108370b8;
L_10837092:;
  /* 10837092 push 0x1085cb48 */
  push32((uint32_t)(0x1085cb48u));
  /* 10837097 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 1083709c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083709e push 0 */
  push32((uint32_t)(0x0u));
  /* 108370a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108370a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108370a4 call 0x10834ea0 */
  push32(0x108370a9u); f_10834ea0();
  /* 108370a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108370ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108370af jne 0x108370b2 */
  if (!C.zf) goto L_108370b2;
  /* 108370b1 int3  */
  x86_unimpl("int3 @ 0x108370b1");
L_108370b2:;
  /* 108370b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108370b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108370b6 jne 0x10837092 */
  if (!C.zf) goto L_10837092;
L_108370b8:;
  /* 108370b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 108370ba call 0x10839880 */
  push32(0x108370bfu); f_10839880();
  /* 108370bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108370c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108370c4 jmp 0x108372d8 */
  goto L_108372d8;
L_108370c9:;
  /* 108370c9 mov eax, dword ptr [0x108615d8] */
  EAX = (r32((uint32_t)(0x108615d8)));
  /* 108370ce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108370d1 jmp 0x108370db */
  goto L_108370db;
L_108370d3:;
  /* 108370d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108370d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108370d8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_108370db:;
  /* 108370db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108370df je 0x108372cb */
  if (C.zf) goto L_108372cb;
  /* 108370e5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 108370ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108370ef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108370f2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108370f8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108370fb je 0x10837120 */
  if (C.zf) goto L_10837120;
  /* 108370fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837100 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837104 je 0x10837120 */
  if (C.zf) goto L_10837120;
  /* 10837106 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837109 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1083710c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10837112 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837115 je 0x10837120 */
  if (C.zf) goto L_10837120;
  /* 10837117 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083711a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083711e jne 0x10837138 */
  if (!C.zf) goto L_10837138;
L_10837120:;
  /* 10837120 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837123 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10837126 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083712c mov edx, dword ptr [ecx*4 + 0x1085fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa94)));
  /* 10837133 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10837136 jmp 0x1083713f */
  goto L_1083713f;
L_10837138:;
  /* 10837138 mov dword ptr [ebp - 0x14], 0x1085cb40 */
  w32((uint32_t)(EBP + -0x14), (0x1085cb40u));
L_1083713f:;
  /* 1083713f push 4 */
  push32((uint32_t)(0x4u));
  /* 10837141 mov al, byte ptr [0x1085fa90] */
  AL = (r8((uint32_t)(0x1085fa90)));
  /* 10837146 push eax */
  push32((uint32_t)(EAX));
  /* 10837147 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083714a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083714d push ecx */
  push32((uint32_t)(ECX));
  /* 1083714e call 0x10836ef0 */
  push32(0x10837153u); f_10836ef0();
  /* 10837153 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837158 jne 0x10837194 */
  if (!C.zf) goto L_10837194;
L_1083715a:;
  /* 1083715a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083715d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837160 push edx */
  push32((uint32_t)(EDX));
  /* 10837161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837164 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10837167 push ecx */
  push32((uint32_t)(ECX));
  /* 10837168 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083716b push edx */
  push32((uint32_t)(EDX));
  /* 1083716c push 0x1085ca1c */
  push32((uint32_t)(0x1085ca1cu));
  /* 10837171 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837173 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837175 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837179 call 0x10834ea0 */
  push32(0x1083717eu); f_10834ea0();
  /* 1083717e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837181 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837184 jne 0x10837187 */
  if (!C.zf) goto L_10837187;
  /* 10837186 int3  */
  x86_unimpl("int3 @ 0x10837186");
L_10837187:;
  /* 10837187 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083718b jne 0x1083715a */
  if (!C.zf) goto L_1083715a;
  /* 1083718d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10837194:;
  /* 10837194 push 4 */
  push32((uint32_t)(0x4u));
  /* 10837196 mov cl, byte ptr [0x1085fa90] */
  CL = (r8((uint32_t)(0x1085fa90)));
  /* 1083719c push ecx */
  push32((uint32_t)(ECX));
  /* 1083719d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371a0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 108371a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371a6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 108371aa push edx */
  push32((uint32_t)(EDX));
  /* 108371ab call 0x10836ef0 */
  push32(0x108371b0u); f_10836ef0();
  /* 108371b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108371b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108371b5 jne 0x108371f1 */
  if (!C.zf) goto L_108371f1;
L_108371b7:;
  /* 108371b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371ba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108371bd push eax */
  push32((uint32_t)(EAX));
  /* 108371be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371c1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 108371c4 push edx */
  push32((uint32_t)(EDX));
  /* 108371c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108371c8 push eax */
  push32((uint32_t)(EAX));
  /* 108371c9 push 0x1085c9f0 */
  push32((uint32_t)(0x1085c9f0u));
  /* 108371ce push 0 */
  push32((uint32_t)(0x0u));
  /* 108371d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108371d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108371d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108371d6 call 0x10834ea0 */
  push32(0x108371dbu); f_10834ea0();
  /* 108371db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108371de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108371e1 jne 0x108371e4 */
  if (!C.zf) goto L_108371e4;
  /* 108371e3 int3  */
  x86_unimpl("int3 @ 0x108371e3");
L_108371e4:;
  /* 108371e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108371e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108371e8 jne 0x108371b7 */
  if (!C.zf) goto L_108371b7;
  /* 108371ea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108371f1:;
  /* 108371f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371f4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108371f8 jne 0x1083724a */
  if (!C.zf) goto L_1083724a;
  /* 108371fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108371fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10837200 push ecx */
  push32((uint32_t)(ECX));
  /* 10837201 mov dl, byte ptr [0x1085fa91] */
  DL = (r8((uint32_t)(0x1085fa91)));
  /* 10837207 push edx */
  push32((uint32_t)(EDX));
  /* 10837208 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083720b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083720e push eax */
  push32((uint32_t)(EAX));
  /* 1083720f call 0x10836ef0 */
  push32(0x10837214u); f_10836ef0();
  /* 10837214 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837219 jne 0x1083724a */
  if (!C.zf) goto L_1083724a;
L_1083721b:;
  /* 1083721b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083721e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837221 push ecx */
  push32((uint32_t)(ECX));
  /* 10837222 push 0x1085cb14 */
  push32((uint32_t)(0x1085cb14u));
  /* 10837227 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837229 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083722b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083722d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083722f call 0x10834ea0 */
  push32(0x10837234u); f_10834ea0();
  /* 10837234 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837237 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083723a jne 0x1083723d */
  if (!C.zf) goto L_1083723d;
  /* 1083723c int3  */
  x86_unimpl("int3 @ 0x1083723c");
L_1083723d:;
  /* 1083723d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083723f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837241 jne 0x1083721b */
  if (!C.zf) goto L_1083721b;
  /* 10837243 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1083724a:;
  /* 1083724a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083724e jne 0x108372c6 */
  if (!C.zf) goto L_108372c6;
  /* 10837250 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837253 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837257 je 0x1083728c */
  if (C.zf) goto L_1083728c;
L_10837259:;
  /* 10837259 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083725c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1083725f push edx */
  push32((uint32_t)(EDX));
  /* 10837260 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837263 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10837266 push ecx */
  push32((uint32_t)(ECX));
  /* 10837267 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083726a push edx */
  push32((uint32_t)(EDX));
  /* 1083726b push 0x1085caf4 */
  push32((uint32_t)(0x1085caf4u));
  /* 10837270 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837272 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837274 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837278 call 0x10834ea0 */
  push32(0x1083727du); f_10834ea0();
  /* 1083727d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837280 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837283 jne 0x10837286 */
  if (!C.zf) goto L_10837286;
  /* 10837285 int3  */
  x86_unimpl("int3 @ 0x10837285");
L_10837286:;
  /* 10837286 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083728a jne 0x10837259 */
  if (!C.zf) goto L_10837259;
L_1083728c:;
  /* 1083728c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083728f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10837292 push edx */
  push32((uint32_t)(EDX));
  /* 10837293 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837296 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837299 push eax */
  push32((uint32_t)(EAX));
  /* 1083729a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083729d push ecx */
  push32((uint32_t)(ECX));
  /* 1083729e push 0x1085cac8 */
  push32((uint32_t)(0x1085cac8u));
  /* 108372a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108372a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108372a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108372a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108372ab call 0x10834ea0 */
  push32(0x108372b0u); f_10834ea0();
  /* 108372b0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108372b3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108372b6 jne 0x108372b9 */
  if (!C.zf) goto L_108372b9;
  /* 108372b8 int3  */
  x86_unimpl("int3 @ 0x108372b8");
L_108372b9:;
  /* 108372b9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108372bb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108372bd jne 0x1083728c */
  if (!C.zf) goto L_1083728c;
  /* 108372bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108372c6:;
  /* 108372c6 jmp 0x108370d3 */
  goto L_108370d3;
L_108372cb:;
  /* 108372cb push 9 */
  push32((uint32_t)(0x9u));
  /* 108372cd call 0x10839880 */
  push32(0x108372d2u); f_10839880();
  /* 108372d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108372d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_108372d8:;
  /* 108372d8 pop edi */
  EDI = (pop32());
  /* 108372d9 pop esi */
  ESI = (pop32());
  /* 108372da pop ebx */
  EBX = (pop32());
  /* 108372db mov esp, ebp */
  ESP = (EBP);
  /* 108372dd pop ebp */
  EBP = (pop32());
  /* 108372de ret  */
  ESPCHK(0x10836f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x108372f0 (34 bytes, 13 insns) */
void f_108372f0(void) {
  FTRACE(0x108372f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108372f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108372f1 mov ebp, esp */
  EBP = (ESP);
  /* 108372f3 push ecx */
  push32((uint32_t)(ECX));
  /* 108372f4 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 108372f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108372fc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837300 je 0x1083730b */
  if (C.zf) goto L_1083730b;
  /* 10837302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837305 mov dword ptr [0x1085fa84], ecx */
  w32((uint32_t)(0x1085fa84), (ECX));
L_1083730b:;
  /* 1083730b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083730e mov esp, ebp */
  ESP = (EBP);
  /* 10837310 pop ebp */
  EBP = (pop32());
  /* 10837311 ret  */
  ESPCHK(0x108372f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007320 @ 0x10837320 (103 bytes, 38 insns) */
void f_10837320(void) {
  FTRACE(0x10837320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837320 push ebp */
  push32((uint32_t)(EBP));
  /* 10837321 mov ebp, esp */
  EBP = (ESP);
  /* 10837323 push ecx */
  push32((uint32_t)(ECX));
  /* 10837324 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 10837329 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1083732c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083732e jne 0x10837332 */
  if (!C.zf) goto L_10837332;
  /* 10837330 jmp 0x10837383 */
  goto L_10837383;
L_10837332:;
  /* 10837332 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837334 call 0x108397e0 */
  push32(0x10837339u); f_108397e0();
  /* 10837339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083733c mov ecx, dword ptr [0x108615d8] */
  ECX = (r32((uint32_t)(0x108615d8)));
  /* 10837342 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10837345 jmp 0x1083734f */
  goto L_1083734f;
L_10837347:;
  /* 10837347 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083734a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083734c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1083734f:;
  /* 1083734f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837353 je 0x10837379 */
  if (C.zf) goto L_10837379;
  /* 10837355 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837358 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1083735b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837361 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837364 jne 0x10837377 */
  if (!C.zf) goto L_10837377;
  /* 10837366 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10837369 push eax */
  push32((uint32_t)(EAX));
  /* 1083736a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083736d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837370 push ecx */
  push32((uint32_t)(ECX));
  /* 10837371 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10837374u);
  /* 10837374 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837377:;
  /* 10837377 jmp 0x10837347 */
  goto L_10837347;
L_10837379:;
  /* 10837379 push 9 */
  push32((uint32_t)(0x9u));
  /* 1083737b call 0x10839880 */
  push32(0x10837380u); f_10839880();
  /* 10837380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837383:;
  /* 10837383 mov esp, ebp */
  ESP = (EBP);
  /* 10837385 pop ebp */
  EBP = (pop32());
  /* 10837386 ret  */
  ESPCHK(0x10837320u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10837390 (75 bytes, 28 insns) */
void f_10837390(void) {
  FTRACE(0x10837390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837390 push ebp */
  push32((uint32_t)(EBP));
  /* 10837391 mov ebp, esp */
  EBP = (ESP);
  /* 10837393 push ecx */
  push32((uint32_t)(ECX));
  /* 10837394 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837398 je 0x108373cd */
  if (C.zf) goto L_108373cd;
  /* 1083739a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083739d push eax */
  push32((uint32_t)(EAX));
  /* 1083739e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108373a1 push ecx */
  push32((uint32_t)(ECX));
  /* 108373a2 call dword ptr [0x108643bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643bc))), 0x108373a8u);
  /* 108373a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108373aa jne 0x108373cd */
  if (!C.zf) goto L_108373cd;
  /* 108373ac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108373b0 je 0x108373c4 */
  if (C.zf) goto L_108373c4;
  /* 108373b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108373b5 push edx */
  push32((uint32_t)(EDX));
  /* 108373b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108373b9 push eax */
  push32((uint32_t)(EAX));
  /* 108373ba call dword ptr [0x10864384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864384))), 0x108373c0u);
  /* 108373c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108373c2 jne 0x108373cd */
  if (!C.zf) goto L_108373cd;
L_108373c4:;
  /* 108373c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 108373cb jmp 0x108373d4 */
  goto L_108373d4;
L_108373cd:;
  /* 108373cd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_108373d4:;
  /* 108373d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108373d7 mov esp, ebp */
  ESP = (EBP);
  /* 108373d9 pop ebp */
  EBP = (pop32());
  /* 108373da ret  */
  ESPCHK(0x10837390u, _esp0);
  ESP += 4; return;
}

/* FUN_100073e0 @ 0x108373e0 (134 bytes, 50 insns) */
void f_108373e0(void) {
  FTRACE(0x108373e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108373e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108373e1 mov ebp, esp */
  EBP = (ESP);
  /* 108373e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108373e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108373e8 jne 0x108373ee */
  if (!C.zf) goto L_108373ee;
  /* 108373ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108373ec jmp 0x10837462 */
  goto L_10837462;
L_108373ee:;
  /* 108373ee push 1 */
  push32((uint32_t)(0x1u));
  /* 108373f0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 108373f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108373f5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108373f8 push eax */
  push32((uint32_t)(EAX));
  /* 108373f9 call 0x10837390 */
  push32(0x108373feu); f_10837390();
  /* 108373fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837401 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837403 jne 0x10837409 */
  if (!C.zf) goto L_10837409;
  /* 10837405 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837407 jmp 0x10837462 */
  goto L_10837462;
L_10837409:;
  /* 10837409 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083740c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083740f push ecx */
  push32((uint32_t)(ECX));
  /* 10837410 call 0x1083a0e0 */
  push32(0x10837415u); f_1083a0e0();
  /* 10837415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837418 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083741b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083741f je 0x10837436 */
  if (C.zf) goto L_10837436;
  /* 10837421 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837424 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837427 push edx */
  push32((uint32_t)(EDX));
  /* 10837428 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083742b push eax */
  push32((uint32_t)(EAX));
  /* 1083742c call 0x1083a140 */
  push32(0x10837431u); f_1083a140();
  /* 10837431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837434 jmp 0x10837462 */
  goto L_10837462;
L_10837436:;
  /* 10837436 mov ecx, dword ptr [0x1086158c] */
  ECX = (r32((uint32_t)(0x1086158c)));
  /* 1083743c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10837442 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10837444 je 0x1083744d */
  if (C.zf) goto L_1083744d;
  /* 10837446 mov eax, 1 */
  EAX = (0x1u);
  /* 1083744b jmp 0x10837462 */
  goto L_10837462;
L_1083744d:;
  /* 1083744d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837450 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837453 push edx */
  push32((uint32_t)(EDX));
  /* 10837454 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837456 mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 1083745b push eax */
  push32((uint32_t)(EAX));
  /* 1083745c call dword ptr [0x1086437c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086437c))), 0x10837462u);
L_10837462:;
  /* 10837462 mov esp, ebp */
  ESP = (EBP);
  /* 10837464 pop ebp */
  EBP = (pop32());
  /* 10837465 ret  */
  ESPCHK(0x108373e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x10837470 (227 bytes, 80 insns) */
void f_10837470(void) {
  FTRACE(0x10837470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837470 push ebp */
  push32((uint32_t)(EBP));
  /* 10837471 mov ebp, esp */
  EBP = (ESP);
  /* 10837473 push ecx */
  push32((uint32_t)(ECX));
  /* 10837474 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837477 push eax */
  push32((uint32_t)(EAX));
  /* 10837478 call 0x108373e0 */
  push32(0x1083747du); f_108373e0();
  /* 1083747d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837482 jne 0x1083748b */
  if (!C.zf) goto L_1083748b;
  /* 10837484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837486 jmp 0x1083754f */
  goto L_1083754f;
L_1083748b:;
  /* 1083748b push 9 */
  push32((uint32_t)(0x9u));
  /* 1083748d call 0x108397e0 */
  push32(0x10837492u); f_108397e0();
  /* 10837492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837495 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837498 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083749b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1083749e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108374a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108374a9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374ac je 0x108374d0 */
  if (C.zf) goto L_108374d0;
  /* 108374ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374b1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374b5 je 0x108374d0 */
  if (C.zf) goto L_108374d0;
  /* 108374b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108374bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108374c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374c5 je 0x108374d0 */
  if (C.zf) goto L_108374d0;
  /* 108374c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374ca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374ce jne 0x10837543 */
  if (!C.zf) goto L_10837543;
L_108374d0:;
  /* 108374d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 108374d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108374d5 push edx */
  push32((uint32_t)(EDX));
  /* 108374d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108374d9 push eax */
  push32((uint32_t)(EAX));
  /* 108374da call 0x10837390 */
  push32(0x108374dfu); f_10837390();
  /* 108374df add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108374e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108374e4 je 0x10837543 */
  if (C.zf) goto L_10837543;
  /* 108374e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 108374ec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374ef jne 0x10837543 */
  if (!C.zf) goto L_10837543;
  /* 108374f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108374f4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 108374f7 cmp ecx, dword ptr [0x1085fa88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1085fa88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108374fd jg 0x10837543 */
  if ((!C.zf&&C.sf==C.of)) goto L_10837543;
  /* 108374ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837503 je 0x10837510 */
  if (C.zf) goto L_10837510;
  /* 10837505 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10837508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083750b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1083750e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10837510:;
  /* 10837510 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837514 je 0x10837521 */
  if (C.zf) goto L_10837521;
  /* 10837516 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10837519 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083751c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1083751f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10837521:;
  /* 10837521 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837525 je 0x10837532 */
  if (C.zf) goto L_10837532;
  /* 10837527 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083752a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083752d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10837530 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10837532:;
  /* 10837532 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837534 call 0x10839880 */
  push32(0x10837539u); f_10839880();
  /* 10837539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083753c mov eax, 1 */
  EAX = (0x1u);
  /* 10837541 jmp 0x1083754f */
  goto L_1083754f;
L_10837543:;
  /* 10837543 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837545 call 0x10839880 */
  push32(0x1083754au); f_10839880();
  /* 1083754a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083754d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083754f:;
  /* 1083754f mov esp, ebp */
  ESP = (EBP);
  /* 10837551 pop ebp */
  EBP = (pop32());
  /* 10837552 ret  */
  ESPCHK(0x10837470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x10837560 (28 bytes, 11 insns) */
void f_10837560(void) {
  FTRACE(0x10837560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837560 push ebp */
  push32((uint32_t)(EBP));
  /* 10837561 mov ebp, esp */
  EBP = (ESP);
  /* 10837563 push ecx */
  push32((uint32_t)(ECX));
  /* 10837564 mov eax, dword ptr [0x10862f38] */
  EAX = (r32((uint32_t)(0x10862f38)));
  /* 10837569 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083756c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083756f mov dword ptr [0x10862f38], ecx */
  w32((uint32_t)(0x10862f38), (ECX));
  /* 10837575 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837578 mov esp, ebp */
  ESP = (EBP);
  /* 1083757a pop ebp */
  EBP = (pop32());
  /* 1083757b ret  */
  ESPCHK(0x10837560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007580 @ 0x10837580 (362 bytes, 116 insns) */
void f_10837580(void) {
  FTRACE(0x10837580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837580 push ebp */
  push32((uint32_t)(EBP));
  /* 10837581 mov ebp, esp */
  EBP = (ESP);
  /* 10837583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837586 push ebx */
  push32((uint32_t)(EBX));
  /* 10837587 push esi */
  push32((uint32_t)(ESI));
  /* 10837588 push edi */
  push32((uint32_t)(EDI));
  /* 10837589 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083758d jne 0x108375ba */
  if (!C.zf) goto L_108375ba;
L_1083758f:;
  /* 1083758f push 0x1085cc28 */
  push32((uint32_t)(0x1085cc28u));
  /* 10837594 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837599 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083759b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083759d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083759f push 0 */
  push32((uint32_t)(0x0u));
  /* 108375a1 call 0x10834ea0 */
  push32(0x108375a6u); f_10834ea0();
  /* 108375a6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108375a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108375ac jne 0x108375af */
  if (!C.zf) goto L_108375af;
  /* 108375ae int3  */
  x86_unimpl("int3 @ 0x108375ae");
L_108375af:;
  /* 108375af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108375b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108375b3 jne 0x1083758f */
  if (!C.zf) goto L_1083758f;
  /* 108375b5 jmp 0x108376e3 */
  goto L_108376e3;
L_108375ba:;
  /* 108375ba push 9 */
  push32((uint32_t)(0x9u));
  /* 108375bc call 0x108397e0 */
  push32(0x108375c1u); f_108397e0();
  /* 108375c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108375c4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108375c7 mov edx, dword ptr [0x108615d8] */
  EDX = (r32((uint32_t)(0x108615d8)));
  /* 108375cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 108375cf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108375d6 jmp 0x108375e1 */
  goto L_108375e1;
L_108375d8:;
  /* 108375d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108375db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108375de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108375e1:;
  /* 108375e1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108375e5 jge 0x10837605 */
  if ((C.sf==C.of)) goto L_10837605;
  /* 108375e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108375ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108375ed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 108375f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108375f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108375fb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10837603 jmp 0x108375d8 */
  goto L_108375d8;
L_10837605:;
  /* 10837605 mov edx, dword ptr [0x108615d8] */
  EDX = (r32((uint32_t)(0x108615d8)));
  /* 1083760b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1083760e jmp 0x10837618 */
  goto L_10837618;
L_10837610:;
  /* 10837610 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837613 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10837615 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10837618:;
  /* 10837618 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083761c je 0x108376c1 */
  if (C.zf) goto L_108376c1;
  /* 10837622 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837625 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10837628 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083762d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083762f jl 0x10837697 */
  if ((C.sf!=C.of)) goto L_10837697;
  /* 10837631 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837634 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10837637 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1083763d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837640 jge 0x10837697 */
  if ((C.sf==C.of)) goto L_10837697;
  /* 10837642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837645 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10837648 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083764e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837651 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10837655 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837658 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083765b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1083765e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837664 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837667 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1083766b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083766e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10837671 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10837676 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837679 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1083767d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837680 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837683 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837686 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10837689 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083768e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837691 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10837695 jmp 0x108376bc */
  goto L_108376bc;
L_10837697:;
  /* 10837697 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083769a push edx */
  push32((uint32_t)(EDX));
  /* 1083769b push 0x1085cc04 */
  push32((uint32_t)(0x1085cc04u));
  /* 108376a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 108376a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108376a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 108376a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 108376a8 call 0x10834ea0 */
  push32(0x108376adu); f_10834ea0();
  /* 108376ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108376b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108376b3 jne 0x108376b6 */
  if (!C.zf) goto L_108376b6;
  /* 108376b5 int3  */
  x86_unimpl("int3 @ 0x108376b5");
L_108376b6:;
  /* 108376b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108376b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108376ba jne 0x10837697 */
  if (!C.zf) goto L_10837697;
L_108376bc:;
  /* 108376bc jmp 0x10837610 */
  goto L_10837610;
L_108376c1:;
  /* 108376c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108376c4 mov edx, dword ptr [0x108615e0] */
  EDX = (r32((uint32_t)(0x108615e0)));
  /* 108376ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 108376cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108376d0 mov ecx, dword ptr [0x108615d4] */
  ECX = (r32((uint32_t)(0x108615d4)));
  /* 108376d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 108376d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 108376db call 0x10839880 */
  push32(0x108376e0u); f_10839880();
  /* 108376e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108376e3:;
  /* 108376e3 pop edi */
  EDI = (pop32());
  /* 108376e4 pop esi */
  ESI = (pop32());
  /* 108376e5 pop ebx */
  EBX = (pop32());
  /* 108376e6 mov esp, ebp */
  ESP = (EBP);
  /* 108376e8 pop ebp */
  EBP = (pop32());
  /* 108376e9 ret  */
  ESPCHK(0x10837580u, _esp0);
  ESP += 4; return;
}

/* FUN_100076f0 @ 0x108376f0 (291 bytes, 95 insns) */
void f_108376f0(void) {
  FTRACE(0x108376f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108376f0 push ebp */
  push32((uint32_t)(EBP));
  /* 108376f1 mov ebp, esp */
  EBP = (ESP);
  /* 108376f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108376f6 push ebx */
  push32((uint32_t)(EBX));
  /* 108376f7 push esi */
  push32((uint32_t)(ESI));
  /* 108376f8 push edi */
  push32((uint32_t)(EDI));
  /* 108376f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10837700 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837704 je 0x10837712 */
  if (C.zf) goto L_10837712;
  /* 10837706 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083770a je 0x10837712 */
  if (C.zf) goto L_10837712;
  /* 1083770c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837710 jne 0x10837740 */
  if (!C.zf) goto L_10837740;
L_10837712:;
  /* 10837712 push 0x1085cc50 */
  push32((uint32_t)(0x1085cc50u));
  /* 10837717 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 1083771c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083771e push 0 */
  push32((uint32_t)(0x0u));
  /* 10837720 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837722 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837724 call 0x10834ea0 */
  push32(0x10837729u); f_10834ea0();
  /* 10837729 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083772c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083772f jne 0x10837732 */
  if (!C.zf) goto L_10837732;
  /* 10837731 int3  */
  x86_unimpl("int3 @ 0x10837731");
L_10837732:;
  /* 10837732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837736 jne 0x10837712 */
  if (!C.zf) goto L_10837712;
  /* 10837738 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083773b jmp 0x1083780c */
  goto L_1083780c;
L_10837740:;
  /* 10837740 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10837747 jmp 0x10837752 */
  goto L_10837752;
L_10837749:;
  /* 10837749 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083774c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083774f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10837752:;
  /* 10837752 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837756 jge 0x108377dc */
  if ((C.sf==C.of)) goto L_108377dc;
  /* 1083775c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083775f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10837762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837765 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10837768 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1083776c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837773 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837776 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1083777a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083777d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10837780 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837783 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10837786 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1083778a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083778e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837791 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837794 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10837798 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083779b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083779e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108377a3 jne 0x108377b2 */
  if (!C.zf) goto L_108377b2;
  /* 108377a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108377a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108377ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108377b0 je 0x108377d7 */
  if (C.zf) goto L_108377d7;
L_108377b2:;
  /* 108377b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108377b6 je 0x108377d7 */
  if (C.zf) goto L_108377d7;
  /* 108377b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108377bc jne 0x108377d0 */
  if (!C.zf) goto L_108377d0;
  /* 108377be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108377c2 jne 0x108377d7 */
  if (!C.zf) goto L_108377d7;
  /* 108377c4 mov eax, dword ptr [0x1085fa84] */
  EAX = (r32((uint32_t)(0x1085fa84)));
  /* 108377c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 108377cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108377ce je 0x108377d7 */
  if (C.zf) goto L_108377d7;
L_108377d0:;
  /* 108377d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_108377d7:;
  /* 108377d7 jmp 0x10837749 */
  goto L_10837749;
L_108377dc:;
  /* 108377dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108377df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108377e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 108377e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108377e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 108377eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 108377ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108377f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108377f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 108377f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108377fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108377fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10837800 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837803 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10837809 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1083780c:;
  /* 1083780c pop edi */
  EDI = (pop32());
  /* 1083780d pop esi */
  ESI = (pop32());
  /* 1083780e pop ebx */
  EBX = (pop32());
  /* 1083780f mov esp, ebp */
  ESP = (EBP);
  /* 10837811 pop ebp */
  EBP = (pop32());
  /* 10837812 ret  */
  ESPCHK(0x108376f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007820 @ 0x10837820 (697 bytes, 253 insns) */
void f_10837820(void) {
  FTRACE(0x10837820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837820 push ebp */
  push32((uint32_t)(EBP));
  /* 10837821 mov ebp, esp */
  EBP = (ESP);
  /* 10837823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837826 push ebx */
  push32((uint32_t)(EBX));
  /* 10837827 push esi */
  push32((uint32_t)(ESI));
  /* 10837828 push edi */
  push32((uint32_t)(EDI));
  /* 10837829 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10837830 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837832 call 0x108397e0 */
  push32(0x10837837u); f_108397e0();
  /* 10837837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083783a:;
  /* 1083783a push 0x1085cd48 */
  push32((uint32_t)(0x1085cd48u));
  /* 1083783f push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837844 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837846 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837848 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083784a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083784c call 0x10834ea0 */
  push32(0x10837851u); f_10834ea0();
  /* 10837851 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837854 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837857 jne 0x1083785a */
  if (!C.zf) goto L_1083785a;
  /* 10837859 int3  */
  x86_unimpl("int3 @ 0x10837859");
L_1083785a:;
  /* 1083785a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083785c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083785e jne 0x1083783a */
  if (!C.zf) goto L_1083783a;
  /* 10837860 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837864 je 0x1083786e */
  if (C.zf) goto L_1083786e;
  /* 10837866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083786b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1083786e:;
  /* 1083786e mov eax, dword ptr [0x108615d8] */
  EAX = (r32((uint32_t)(0x108615d8)));
  /* 10837873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10837876 jmp 0x10837880 */
  goto L_10837880;
L_10837878:;
  /* 10837878 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083787b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1083787d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10837880:;
  /* 10837880 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837884 je 0x10837aa2 */
  if (C.zf) goto L_10837aa2;
  /* 1083788a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083788d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837890 je 0x10837aa2 */
  if (C.zf) goto L_10837aa2;
  /* 10837896 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837899 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1083789c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108378a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108378a5 je 0x108378d4 */
  if (C.zf) goto L_108378d4;
  /* 108378a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108378aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 108378ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 108378b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108378b5 je 0x108378d4 */
  if (C.zf) goto L_108378d4;
  /* 108378b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108378ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 108378bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108378c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108378c5 jne 0x108378d9 */
  if (!C.zf) goto L_108378d9;
  /* 108378c7 mov ecx, dword ptr [0x1085fa84] */
  ECX = (r32((uint32_t)(0x1085fa84)));
  /* 108378cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 108378d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108378d2 jne 0x108378d9 */
  if (!C.zf) goto L_108378d9;
L_108378d4:;
  /* 108378d4 jmp 0x10837a9d */
  goto L_10837a9d;
L_108378d9:;
  /* 108378d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108378dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108378e0 je 0x10837952 */
  if (C.zf) goto L_10837952;
  /* 108378e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 108378e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 108378e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108378e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 108378ec push ecx */
  push32((uint32_t)(ECX));
  /* 108378ed call 0x10837390 */
  push32(0x108378f2u); f_10837390();
  /* 108378f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108378f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108378f7 jne 0x10837923 */
  if (!C.zf) goto L_10837923;
L_108378f9:;
  /* 108378f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108378fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 108378ff push eax */
  push32((uint32_t)(EAX));
  /* 10837900 push 0x1085cd34 */
  push32((uint32_t)(0x1085cd34u));
  /* 10837905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083790b push 0 */
  push32((uint32_t)(0x0u));
  /* 1083790d call 0x10834ea0 */
  push32(0x10837912u); f_10834ea0();
  /* 10837912 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837915 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837918 jne 0x1083791b */
  if (!C.zf) goto L_1083791b;
  /* 1083791a int3  */
  x86_unimpl("int3 @ 0x1083791a");
L_1083791b:;
  /* 1083791b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1083791d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1083791f jne 0x108378f9 */
  if (!C.zf) goto L_108378f9;
  /* 10837921 jmp 0x10837952 */
  goto L_10837952;
L_10837923:;
  /* 10837923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837926 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10837929 push eax */
  push32((uint32_t)(EAX));
  /* 1083792a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083792d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10837930 push edx */
  push32((uint32_t)(EDX));
  /* 10837931 push 0x1085cd28 */
  push32((uint32_t)(0x1085cd28u));
  /* 10837936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837938 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083793a push 0 */
  push32((uint32_t)(0x0u));
  /* 1083793c push 0 */
  push32((uint32_t)(0x0u));
  /* 1083793e call 0x10834ea0 */
  push32(0x10837943u); f_10834ea0();
  /* 10837943 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837946 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837949 jne 0x1083794c */
  if (!C.zf) goto L_1083794c;
  /* 1083794b int3  */
  x86_unimpl("int3 @ 0x1083794b");
L_1083794c:;
  /* 1083794c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083794e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837950 jne 0x10837923 */
  if (!C.zf) goto L_10837923;
L_10837952:;
  /* 10837952 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837955 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10837958 push edx */
  push32((uint32_t)(EDX));
  /* 10837959 push 0x1085cd20 */
  push32((uint32_t)(0x1085cd20u));
  /* 1083795e push 0 */
  push32((uint32_t)(0x0u));
  /* 10837960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837962 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837964 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837966 call 0x10834ea0 */
  push32(0x1083796bu); f_10834ea0();
  /* 1083796b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083796e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837971 jne 0x10837974 */
  if (!C.zf) goto L_10837974;
  /* 10837973 int3  */
  x86_unimpl("int3 @ 0x10837973");
L_10837974:;
  /* 10837974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837976 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837978 jne 0x10837952 */
  if (!C.zf) goto L_10837952;
  /* 1083797a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083797d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10837980 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837986 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837989 jne 0x108379fc */
  if (!C.zf) goto L_108379fc;
L_1083798b:;
  /* 1083798b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083798e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10837991 push ecx */
  push32((uint32_t)(ECX));
  /* 10837992 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837995 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10837998 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1083799b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 108379a0 push eax */
  push32((uint32_t)(EAX));
  /* 108379a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108379a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108379a7 push ecx */
  push32((uint32_t)(ECX));
  /* 108379a8 push 0x1085ccec */
  push32((uint32_t)(0x1085ccecu));
  /* 108379ad push 0 */
  push32((uint32_t)(0x0u));
  /* 108379af push 0 */
  push32((uint32_t)(0x0u));
  /* 108379b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108379b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108379b5 call 0x10834ea0 */
  push32(0x108379bau); f_10834ea0();
  /* 108379ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108379bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108379c0 jne 0x108379c3 */
  if (!C.zf) goto L_108379c3;
  /* 108379c2 int3  */
  x86_unimpl("int3 @ 0x108379c2");
L_108379c3:;
  /* 108379c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108379c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108379c7 jne 0x1083798b */
  if (!C.zf) goto L_1083798b;
  /* 108379c9 cmp dword ptr [0x10862f38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862f38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108379d0 je 0x108379eb */
  if (C.zf) goto L_108379eb;
  /* 108379d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108379d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 108379d8 push ecx */
  push32((uint32_t)(ECX));
  /* 108379d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108379dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108379df push edx */
  push32((uint32_t)(EDX));
  /* 108379e0 call dword ptr [0x10862f38] */
  call_ind((uint32_t)(r32((uint32_t)(0x10862f38))), 0x108379e6u);
  /* 108379e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108379e9 jmp 0x108379f7 */
  goto L_108379f7;
L_108379eb:;
  /* 108379eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108379ee push eax */
  push32((uint32_t)(EAX));
  /* 108379ef call 0x10837ae0 */
  push32(0x108379f4u); f_10837ae0();
  /* 108379f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108379f7:;
  /* 108379f7 jmp 0x10837a9d */
  goto L_10837a9d;
L_108379fc:;
  /* 108379fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108379ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837a03 jne 0x10837a42 */
  if (!C.zf) goto L_10837a42;
L_10837a05:;
  /* 10837a05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a08 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10837a0b push eax */
  push32((uint32_t)(EAX));
  /* 10837a0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a0f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837a12 push ecx */
  push32((uint32_t)(ECX));
  /* 10837a13 push 0x1085ccc4 */
  push32((uint32_t)(0x1085ccc4u));
  /* 10837a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a20 call 0x10834ea0 */
  push32(0x10837a25u); f_10834ea0();
  /* 10837a25 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837a28 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837a2b jne 0x10837a2e */
  if (!C.zf) goto L_10837a2e;
  /* 10837a2d int3  */
  x86_unimpl("int3 @ 0x10837a2d");
L_10837a2e:;
  /* 10837a2e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10837a30 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837a32 jne 0x10837a05 */
  if (!C.zf) goto L_10837a05;
  /* 10837a34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a37 push eax */
  push32((uint32_t)(EAX));
  /* 10837a38 call 0x10837ae0 */
  push32(0x10837a3du); f_10837ae0();
  /* 10837a3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837a40 jmp 0x10837a9d */
  goto L_10837a9d;
L_10837a42:;
  /* 10837a42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a45 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10837a48 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837a4e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837a51 jne 0x10837a9d */
  if (!C.zf) goto L_10837a9d;
L_10837a53:;
  /* 10837a53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a56 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10837a59 push ecx */
  push32((uint32_t)(ECX));
  /* 10837a5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a5d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10837a60 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10837a63 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10837a68 push eax */
  push32((uint32_t)(EAX));
  /* 10837a69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a6c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837a6f push ecx */
  push32((uint32_t)(ECX));
  /* 10837a70 push 0x1085cc90 */
  push32((uint32_t)(0x1085cc90u));
  /* 10837a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10837a7d call 0x10834ea0 */
  push32(0x10837a82u); f_10834ea0();
  /* 10837a82 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837a85 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837a88 jne 0x10837a8b */
  if (!C.zf) goto L_10837a8b;
  /* 10837a8a int3  */
  x86_unimpl("int3 @ 0x10837a8a");
L_10837a8b:;
  /* 10837a8b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10837a8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837a8f jne 0x10837a53 */
  if (!C.zf) goto L_10837a53;
  /* 10837a91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837a94 push eax */
  push32((uint32_t)(EAX));
  /* 10837a95 call 0x10837ae0 */
  push32(0x10837a9au); f_10837ae0();
  /* 10837a9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837a9d:;
  /* 10837a9d jmp 0x10837878 */
  goto L_10837878;
L_10837aa2:;
  /* 10837aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837aa4 call 0x10839880 */
  push32(0x10837aa9u); f_10839880();
  /* 10837aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837aac:;
  /* 10837aac push 0x1085cc78 */
  push32((uint32_t)(0x1085cc78u));
  /* 10837ab1 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837ab6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837ab8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837aba push 0 */
  push32((uint32_t)(0x0u));
  /* 10837abc push 0 */
  push32((uint32_t)(0x0u));
  /* 10837abe call 0x10834ea0 */
  push32(0x10837ac3u); f_10834ea0();
  /* 10837ac3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837ac6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837ac9 jne 0x10837acc */
  if (!C.zf) goto L_10837acc;
  /* 10837acb int3  */
  x86_unimpl("int3 @ 0x10837acb");
L_10837acc:;
  /* 10837acc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10837ace test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10837ad0 jne 0x10837aac */
  if (!C.zf) goto L_10837aac;
  /* 10837ad2 pop edi */
  EDI = (pop32());
  /* 10837ad3 pop esi */
  ESI = (pop32());
  /* 10837ad4 pop ebx */
  EBX = (pop32());
  /* 10837ad5 mov esp, ebp */
  ESP = (EBP);
  /* 10837ad7 pop ebp */
  EBP = (pop32());
  /* 10837ad8 ret  */
  ESPCHK(0x10837820u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ae0 @ 0x10837ae0 (276 bytes, 89 insns) */
void f_10837ae0(void) {
  FTRACE(0x10837ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10837ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10837ae3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10837ae7 push esi */
  push32((uint32_t)(ESI));
  /* 10837ae8 push edi */
  push32((uint32_t)(EDI));
  /* 10837ae9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10837af0 jmp 0x10837afb */
  goto L_10837afb;
L_10837af2:;
  /* 10837af2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10837af5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837af8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10837afb:;
  /* 10837afb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837afe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837b02 jge 0x10837b0f */
  if ((C.sf==C.of)) goto L_10837b0f;
  /* 10837b04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837b07 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10837b0a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10837b0d jmp 0x10837b16 */
  goto L_10837b16;
L_10837b0f:;
  /* 10837b0f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10837b16:;
  /* 10837b16 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10837b19 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837b1c jge 0x10837bbc */
  if ((C.sf==C.of)) goto L_10837bbc;
  /* 10837b22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837b25 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837b28 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10837b2b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10837b2e cmp dword ptr [0x1085fea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1085fea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837b35 jle 0x10837b53 */
  if ((C.zf||C.sf!=C.of)) goto L_10837b53;
  /* 10837b37 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10837b3c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10837b3f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10837b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10837b46 call 0x1083bdf0 */
  push32(0x10837b4bu); f_1083bdf0();
  /* 10837b4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837b4e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10837b51 jmp 0x10837b70 */
  goto L_10837b70;
L_10837b53:;
  /* 10837b53 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10837b56 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837b5c mov eax, dword ptr [0x1085fc98] */
  EAX = (r32((uint32_t)(0x1085fc98)));
  /* 10837b61 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10837b63 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10837b67 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10837b6d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10837b70:;
  /* 10837b70 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837b74 je 0x10837b84 */
  if (C.zf) goto L_10837b84;
  /* 10837b76 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10837b79 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837b7f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10837b82 jmp 0x10837b8b */
  goto L_10837b8b;
L_10837b84:;
  /* 10837b84 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10837b8b:;
  /* 10837b8b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10837b8e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10837b91 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10837b95 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10837b98 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10837b9e push edx */
  push32((uint32_t)(EDX));
  /* 10837b9f push 0x1085cd6c */
  push32((uint32_t)(0x1085cd6cu));
  /* 10837ba4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10837ba7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10837baa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10837bae push ecx */
  push32((uint32_t)(ECX));
  /* 10837baf call 0x1083bcf0 */
  push32(0x10837bb4u); f_1083bcf0();
  /* 10837bb4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837bb7 jmp 0x10837af2 */
  goto L_10837af2;
L_10837bbc:;
  /* 10837bbc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10837bbf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10837bc4:;
  /* 10837bc4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10837bc7 push eax */
  push32((uint32_t)(EAX));
  /* 10837bc8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10837bcb push ecx */
  push32((uint32_t)(ECX));
  /* 10837bcc push 0x1085cd5c */
  push32((uint32_t)(0x1085cd5cu));
  /* 10837bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837bd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837bd9 call 0x10834ea0 */
  push32(0x10837bdeu); f_10834ea0();
  /* 10837bde add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837be1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837be4 jne 0x10837be7 */
  if (!C.zf) goto L_10837be7;
  /* 10837be6 int3  */
  x86_unimpl("int3 @ 0x10837be6");
L_10837be7:;
  /* 10837be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10837be9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837beb jne 0x10837bc4 */
  if (!C.zf) goto L_10837bc4;
  /* 10837bed pop edi */
  EDI = (pop32());
  /* 10837bee pop esi */
  ESI = (pop32());
  /* 10837bef pop ebx */
  EBX = (pop32());
  /* 10837bf0 mov esp, ebp */
  ESP = (EBP);
  /* 10837bf2 pop ebp */
  EBP = (pop32());
  /* 10837bf3 ret  */
  ESPCHK(0x10837ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x10837c00 (116 bytes, 46 insns) */
void f_10837c00(void) {
  FTRACE(0x10837c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10837c01 mov ebp, esp */
  EBP = (ESP);
  /* 10837c03 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837c06 push ebx */
  push32((uint32_t)(EBX));
  /* 10837c07 push esi */
  push32((uint32_t)(ESI));
  /* 10837c08 push edi */
  push32((uint32_t)(EDI));
  /* 10837c09 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10837c0c push eax */
  push32((uint32_t)(EAX));
  /* 10837c0d call 0x10837580 */
  push32(0x10837c12u); f_10837580();
  /* 10837c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837c15 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837c19 jne 0x10837c34 */
  if (!C.zf) goto L_10837c34;
  /* 10837c1b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837c1f jne 0x10837c34 */
  if (!C.zf) goto L_10837c34;
  /* 10837c21 mov ecx, dword ptr [0x1085fa84] */
  ECX = (r32((uint32_t)(0x1085fa84)));
  /* 10837c27 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10837c2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10837c2c je 0x10837c6b */
  if (C.zf) goto L_10837c6b;
  /* 10837c2e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837c32 je 0x10837c6b */
  if (C.zf) goto L_10837c6b;
L_10837c34:;
  /* 10837c34 push 0x1085cd74 */
  push32((uint32_t)(0x1085cd74u));
  /* 10837c39 push 0x1085c740 */
  push32((uint32_t)(0x1085c740u));
  /* 10837c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10837c40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837c44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837c46 call 0x10834ea0 */
  push32(0x10837c4bu); f_10834ea0();
  /* 10837c4b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837c4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837c51 jne 0x10837c54 */
  if (!C.zf) goto L_10837c54;
  /* 10837c53 int3  */
  x86_unimpl("int3 @ 0x10837c53");
L_10837c54:;
  /* 10837c54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10837c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837c58 jne 0x10837c34 */
  if (!C.zf) goto L_10837c34;
  /* 10837c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10837c5c call 0x10837820 */
  push32(0x10837c61u); f_10837820();
  /* 10837c61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837c64 mov eax, 1 */
  EAX = (0x1u);
  /* 10837c69 jmp 0x10837c6d */
  goto L_10837c6d;
L_10837c6b:;
  /* 10837c6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10837c6d:;
  /* 10837c6d pop edi */
  EDI = (pop32());
  /* 10837c6e pop esi */
  ESI = (pop32());
  /* 10837c6f pop ebx */
  EBX = (pop32());
  /* 10837c70 mov esp, ebp */
  ESP = (EBP);
  /* 10837c72 pop ebp */
  EBP = (pop32());
  /* 10837c73 ret  */
  ESPCHK(0x10837c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c80 @ 0x10837c80 (197 bytes, 79 insns) */
void f_10837c80(void) {
  FTRACE(0x10837c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10837c81 mov ebp, esp */
  EBP = (ESP);
  /* 10837c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10837c84 push ebx */
  push32((uint32_t)(EBX));
  /* 10837c85 push esi */
  push32((uint32_t)(ESI));
  /* 10837c86 push edi */
  push32((uint32_t)(EDI));
  /* 10837c87 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837c8b jne 0x10837c92 */
  if (!C.zf) goto L_10837c92;
  /* 10837c8d jmp 0x10837d3e */
  goto L_10837d3e;
L_10837c92:;
  /* 10837c92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10837c99 jmp 0x10837ca4 */
  goto L_10837ca4;
L_10837c9b:;
  /* 10837c9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837c9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837ca1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10837ca4:;
  /* 10837ca4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837ca8 jge 0x10837cee */
  if ((C.sf==C.of)) goto L_10837cee;
L_10837caa:;
  /* 10837caa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837cad mov edx, dword ptr [ecx*4 + 0x1085fa94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fa94)));
  /* 10837cb4 push edx */
  push32((uint32_t)(EDX));
  /* 10837cb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837cb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837cbb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10837cbf push edx */
  push32((uint32_t)(EDX));
  /* 10837cc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837cc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837cc6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10837cca push edx */
  push32((uint32_t)(EDX));
  /* 10837ccb push 0x1085cdd0 */
  push32((uint32_t)(0x1085cdd0u));
  /* 10837cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cd8 call 0x10834ea0 */
  push32(0x10837cddu); f_10834ea0();
  /* 10837cdd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837ce0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837ce3 jne 0x10837ce6 */
  if (!C.zf) goto L_10837ce6;
  /* 10837ce5 int3  */
  x86_unimpl("int3 @ 0x10837ce5");
L_10837ce6:;
  /* 10837ce6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837ce8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837cea jne 0x10837caa */
  if (!C.zf) goto L_10837caa;
  /* 10837cec jmp 0x10837c9b */
  goto L_10837c9b;
L_10837cee:;
  /* 10837cee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837cf1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10837cf4 push edx */
  push32((uint32_t)(EDX));
  /* 10837cf5 push 0x1085cdac */
  push32((uint32_t)(0x1085cdacu));
  /* 10837cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10837cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d02 call 0x10834ea0 */
  push32(0x10837d07u); f_10834ea0();
  /* 10837d07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837d0a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837d0d jne 0x10837d10 */
  if (!C.zf) goto L_10837d10;
  /* 10837d0f int3  */
  x86_unimpl("int3 @ 0x10837d0f");
L_10837d10:;
  /* 10837d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837d12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837d14 jne 0x10837cee */
  if (!C.zf) goto L_10837cee;
L_10837d16:;
  /* 10837d16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837d19 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10837d1c push edx */
  push32((uint32_t)(EDX));
  /* 10837d1d push 0x1085cd8c */
  push32((uint32_t)(0x1085cd8cu));
  /* 10837d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10837d2a call 0x10834ea0 */
  push32(0x10837d2fu); f_10834ea0();
  /* 10837d2f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837d32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837d35 jne 0x10837d38 */
  if (!C.zf) goto L_10837d38;
  /* 10837d37 int3  */
  x86_unimpl("int3 @ 0x10837d37");
L_10837d38:;
  /* 10837d38 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837d3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837d3c jne 0x10837d16 */
  if (!C.zf) goto L_10837d16;
L_10837d3e:;
  /* 10837d3e pop edi */
  EDI = (pop32());
  /* 10837d3f pop esi */
  ESI = (pop32());
  /* 10837d40 pop ebx */
  EBX = (pop32());
  /* 10837d41 mov esp, ebp */
  ESP = (EBP);
  /* 10837d43 pop ebp */
  EBP = (pop32());
  /* 10837d44 ret  */
  ESPCHK(0x10837c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d50 @ 0x10837d50 (329 bytes, 102 insns) */
void f_10837d50(void) {
  FTRACE(0x10837d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837d50 push ebp */
  push32((uint32_t)(EBP));
  /* 10837d51 mov ebp, esp */
  EBP = (ESP);
  /* 10837d53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837d56 cmp dword ptr [0x108630b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837d5d jne 0x10837d64 */
  if (!C.zf) goto L_10837d64;
  /* 10837d5f call 0x1083c690 */
  push32(0x10837d64u); f_1083c690();
L_10837d64:;
  /* 10837d64 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10837d6b mov eax, dword ptr [0x10861574] */
  EAX = (r32((uint32_t)(0x10861574)));
  /* 10837d70 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10837d73:;
  /* 10837d73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837d76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10837d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10837d7b je 0x10837da9 */
  if (C.zf) goto L_10837da9;
  /* 10837d7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837d80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10837d83 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837d86 je 0x10837d91 */
  if (C.zf) goto L_10837d91;
  /* 10837d88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837d8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837d8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10837d91:;
  /* 10837d91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837d94 push eax */
  push32((uint32_t)(EAX));
  /* 10837d95 call 0x10838c10 */
  push32(0x10837d9au); f_10838c10();
  /* 10837d9a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837da0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10837da4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10837da7 jmp 0x10837d73 */
  goto L_10837d73;
L_10837da9:;
  /* 10837da9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10837dab push 0x1085cdf0 */
  push32((uint32_t)(0x1085cdf0u));
  /* 10837db0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10837db2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837db5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10837dbc push ecx */
  push32((uint32_t)(ECX));
  /* 10837dbd call 0x10835de0 */
  push32(0x10837dc2u); f_10835de0();
  /* 10837dc2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837dc5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10837dc8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837dcb mov dword ptr [0x108615a8], edx */
  w32((uint32_t)(0x108615a8), (EDX));
  /* 10837dd1 cmp dword ptr [0x108615a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108615a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837dd8 jne 0x10837de4 */
  if (!C.zf) goto L_10837de4;
  /* 10837dda push 9 */
  push32((uint32_t)(0x9u));
  /* 10837ddc call 0x10834d50 */
  push32(0x10837de1u); f_10834d50();
  /* 10837de1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837de4:;
  /* 10837de4 mov eax, dword ptr [0x10861574] */
  EAX = (r32((uint32_t)(0x10861574)));
  /* 10837de9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10837dec jmp 0x10837df7 */
  goto L_10837df7;
L_10837dee:;
  /* 10837dee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837df1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837df4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10837df7:;
  /* 10837df7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837dfa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10837dfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837dff je 0x10837e67 */
  if (C.zf) goto L_10837e67;
  /* 10837e01 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837e04 push ecx */
  push32((uint32_t)(ECX));
  /* 10837e05 call 0x10838c10 */
  push32(0x10837e0au); f_10838c10();
  /* 10837e0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10837e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10837e19 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837e1c je 0x10837e65 */
  if (C.zf) goto L_10837e65;
  /* 10837e1e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10837e20 push 0x1085cdf0 */
  push32((uint32_t)(0x1085cdf0u));
  /* 10837e25 push 2 */
  push32((uint32_t)(0x2u));
  /* 10837e27 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10837e2a push ecx */
  push32((uint32_t)(ECX));
  /* 10837e2b call 0x10835de0 */
  push32(0x10837e30u); f_10835de0();
  /* 10837e30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e33 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837e36 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10837e38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837e3b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837e3e jne 0x10837e4a */
  if (!C.zf) goto L_10837e4a;
  /* 10837e40 push 9 */
  push32((uint32_t)(0x9u));
  /* 10837e42 call 0x10834d50 */
  push32(0x10837e47u); f_10834d50();
  /* 10837e47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837e4a:;
  /* 10837e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837e4d push ecx */
  push32((uint32_t)(ECX));
  /* 10837e4e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837e51 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10837e53 push eax */
  push32((uint32_t)(EAX));
  /* 10837e54 call 0x10838d90 */
  push32(0x10837e59u); f_10838d90();
  /* 10837e59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e5c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837e5f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e62 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10837e65:;
  /* 10837e65 jmp 0x10837dee */
  goto L_10837dee;
L_10837e67:;
  /* 10837e67 push 2 */
  push32((uint32_t)(0x2u));
  /* 10837e69 mov edx, dword ptr [0x10861574] */
  EDX = (r32((uint32_t)(0x10861574)));
  /* 10837e6f push edx */
  push32((uint32_t)(EDX));
  /* 10837e70 call 0x10836870 */
  push32(0x10837e75u); f_10836870();
  /* 10837e75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837e78 mov dword ptr [0x10861574], 0 */
  w32((uint32_t)(0x10861574), (0x0u));
  /* 10837e82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837e85 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10837e8b mov dword ptr [0x108630a0], 1 */
  w32((uint32_t)(0x108630a0), (0x1u));
  /* 10837e95 mov esp, ebp */
  ESP = (EBP);
  /* 10837e97 pop ebp */
  EBP = (pop32());
  /* 10837e98 ret  */
  ESPCHK(0x10837d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ea0 @ 0x10837ea0 (216 bytes, 69 insns) */
void f_10837ea0(void) {
  FTRACE(0x10837ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10837ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10837ea3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837ea6 cmp dword ptr [0x108630b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108630b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837ead jne 0x10837eb4 */
  if (!C.zf) goto L_10837eb4;
  /* 10837eaf call 0x1083c690 */
  push32(0x10837eb4u); f_1083c690();
L_10837eb4:;
  /* 10837eb4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10837eb9 push 0x108615e4 */
  push32((uint32_t)(0x108615e4u));
  /* 10837ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 10837ec0 call dword ptr [0x108643b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b0))), 0x10837ec6u);
  /* 10837ec6 mov dword ptr [0x108615b8], 0x108615e4 */
  w32((uint32_t)(0x108615b8), (0x108615e4u));
  /* 10837ed0 mov eax, dword ptr [0x108630cc] */
  EAX = (r32((uint32_t)(0x108630cc)));
  /* 10837ed5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10837ed8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10837eda jne 0x10837ee7 */
  if (!C.zf) goto L_10837ee7;
  /* 10837edc mov edx, dword ptr [0x108615b8] */
  EDX = (r32((uint32_t)(0x108615b8)));
  /* 10837ee2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10837ee5 jmp 0x10837eef */
  goto L_10837eef;
L_10837ee7:;
  /* 10837ee7 mov eax, dword ptr [0x108630cc] */
  EAX = (r32((uint32_t)(0x108630cc)));
  /* 10837eec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10837eef:;
  /* 10837eef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10837ef2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10837ef5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10837ef8 push edx */
  push32((uint32_t)(EDX));
  /* 10837ef9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10837efc push eax */
  push32((uint32_t)(EAX));
  /* 10837efd push 0 */
  push32((uint32_t)(0x0u));
  /* 10837eff push 0 */
  push32((uint32_t)(0x0u));
  /* 10837f01 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10837f04 push ecx */
  push32((uint32_t)(ECX));
  /* 10837f05 call 0x10837f80 */
  push32(0x10837f0au); f_10837f80();
  /* 10837f0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837f0d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10837f12 push 0x1085cdfc */
  push32((uint32_t)(0x1085cdfcu));
  /* 10837f17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10837f19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837f1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837f1f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10837f22 push ecx */
  push32((uint32_t)(ECX));
  /* 10837f23 call 0x10835de0 */
  push32(0x10837f28u); f_10835de0();
  /* 10837f28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10837f2e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837f32 jne 0x10837f3e */
  if (!C.zf) goto L_10837f3e;
  /* 10837f34 push 8 */
  push32((uint32_t)(0x8u));
  /* 10837f36 call 0x10834d50 */
  push32(0x10837f3bu); f_10834d50();
  /* 10837f3b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10837f3e:;
  /* 10837f3e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10837f41 push edx */
  push32((uint32_t)(EDX));
  /* 10837f42 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10837f45 push eax */
  push32((uint32_t)(EAX));
  /* 10837f46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837f49 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837f4c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10837f4f push eax */
  push32((uint32_t)(EAX));
  /* 10837f50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10837f54 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10837f57 push edx */
  push32((uint32_t)(EDX));
  /* 10837f58 call 0x10837f80 */
  push32(0x10837f5du); f_10837f80();
  /* 10837f5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10837f60 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10837f63 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837f66 mov dword ptr [0x1086159c], eax */
  w32((uint32_t)(0x1086159c), (EAX));
  /* 10837f6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10837f6e mov dword ptr [0x108615a0], ecx */
  w32((uint32_t)(0x108615a0), (ECX));
  /* 10837f74 mov esp, ebp */
  ESP = (EBP);
  /* 10837f76 pop ebp */
  EBP = (pop32());
  /* 10837f77 ret  */
  ESPCHK(0x10837ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x10837f80 (1060 bytes, 360 insns) */
void f_10837f80(void) {
  FTRACE(0x10837f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10837f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10837f81 mov ebp, esp */
  EBP = (ESP);
  /* 10837f83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10837f86 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10837f89 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10837f8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10837f92 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10837f98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10837f9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10837f9e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837fa2 je 0x10837fb5 */
  if (C.zf) goto L_10837fb5;
  /* 10837fa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10837fa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10837faa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10837fac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10837faf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837fb2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10837fb5:;
  /* 10837fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837fb8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10837fbb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837fbe jne 0x1083808d */
  if (!C.zf) goto L_1083808d;
L_10837fc4:;
  /* 10837fc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837fc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10837fca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10837fcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837fd0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10837fd3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10837fd6 je 0x10838052 */
  if (C.zf) goto L_10838052;
  /* 10837fd8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837fdb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10837fde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837fe0 je 0x10838052 */
  if (C.zf) goto L_10838052;
  /* 10837fe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10837fe5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10837fe7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10837fe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10837feb mov al, byte ptr [edx + 0x10862e01] */
  AL = (r8((uint32_t)(EDX + 0x10862e01)));
  /* 10837ff1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10837ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10837ff6 je 0x10838027 */
  if (C.zf) goto L_10838027;
  /* 10837ff8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10837ffb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10837ffd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838000 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838003 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10838005 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838009 je 0x10838027 */
  if (C.zf) goto L_10838027;
  /* 1083800b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083800e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838011 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10838013 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10838015 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838018 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083801b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1083801e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838021 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838024 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10838027:;
  /* 10838027 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083802a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083802c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083802f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838032 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10838034 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838038 je 0x1083804d */
  if (C.zf) goto L_1083804d;
  /* 1083803a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083803d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838040 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10838042 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10838044 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838047 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083804a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1083804d:;
  /* 1083804d jmp 0x10837fc4 */
  goto L_10837fc4;
L_10838052:;
  /* 10838052 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838055 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10838057 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083805a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083805d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1083805f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838063 je 0x10838074 */
  if (C.zf) goto L_10838074;
  /* 10838065 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838068 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1083806b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083806e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838071 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10838074:;
  /* 10838074 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838077 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083807a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083807d jne 0x10838088 */
  if (!C.zf) goto L_10838088;
  /* 1083807f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838082 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838085 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10838088:;
  /* 10838088 jmp 0x1083815c */
  goto L_1083815c;
L_1083808d:;
  /* 1083808d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838090 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10838092 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838095 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838098 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1083809a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083809e je 0x108380b3 */
  if (C.zf) goto L_108380b3;
  /* 108380a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108380a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108380a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108380a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108380aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108380ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108380b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_108380b3:;
  /* 108380b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108380b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108380b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 108380bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108380be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108380c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108380c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 108380c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 108380cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108380cf mov dl, byte ptr [ecx + 0x10862e01] */
  DL = (r8((uint32_t)(ECX + 0x10862e01)));
  /* 108380d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 108380d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 108380da je 0x1083810b */
  if (C.zf) goto L_1083810b;
  /* 108380dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108380df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 108380e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108380e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 108380e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 108380e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108380ed je 0x10838102 */
  if (C.zf) goto L_10838102;
  /* 108380ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108380f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108380f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108380f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108380f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108380fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108380ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10838102:;
  /* 10838102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838105 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838108 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1083810b:;
  /* 1083810b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083810e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10838114 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838117 je 0x10838137 */
  if (C.zf) goto L_10838137;
  /* 10838119 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083811c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10838121 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10838123 je 0x10838137 */
  if (C.zf) goto L_10838137;
  /* 10838125 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838128 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1083812e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838131 jne 0x1083808d */
  if (!C.zf) goto L_1083808d;
L_10838137:;
  /* 10838137 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083813a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10838140 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838142 jne 0x1083814f */
  if (!C.zf) goto L_1083814f;
  /* 10838144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838147 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083814a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083814d jmp 0x1083815c */
  goto L_1083815c;
L_1083814f:;
  /* 1083814f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838153 je 0x1083815c */
  if (C.zf) goto L_1083815c;
  /* 10838155 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838158 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1083815c:;
  /* 1083815c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10838163:;
  /* 10838163 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838166 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10838169 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1083816b je 0x1083818e */
  if (C.zf) goto L_1083818e;
L_1083816d:;
  /* 1083816d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838170 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10838173 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838176 je 0x10838183 */
  if (C.zf) goto L_10838183;
  /* 10838178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083817b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083817e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838181 jne 0x1083818e */
  if (!C.zf) goto L_1083818e;
L_10838183:;
  /* 10838183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838186 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838189 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083818c jmp 0x1083816d */
  goto L_1083816d;
L_1083818e:;
  /* 1083818e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838191 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10838194 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10838196 jne 0x1083819d */
  if (!C.zf) goto L_1083819d;
  /* 10838198 jmp 0x1083837b */
  goto L_1083837b;
L_1083819d:;
  /* 1083819d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108381a1 je 0x108381b4 */
  if (C.zf) goto L_108381b4;
  /* 108381a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108381a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 108381a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 108381ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108381ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108381b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_108381b4:;
  /* 108381b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 108381b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 108381b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108381bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 108381bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_108381c1:;
  /* 108381c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 108381c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_108381cf:;
  /* 108381cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108381d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 108381d5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108381d8 jne 0x108381ee */
  if (!C.zf) goto L_108381ee;
  /* 108381da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108381dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108381e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108381e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108381e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108381e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 108381ec jmp 0x108381cf */
  goto L_108381cf;
L_108381ee:;
  /* 108381ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108381f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 108381f4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108381f7 jne 0x1083824a */
  if (!C.zf) goto L_1083824a;
  /* 108381f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108381fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108381fe mov ecx, 2 */
  ECX = (0x2u);
  /* 10838203 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10838205 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838207 jne 0x10838242 */
  if (!C.zf) goto L_10838242;
  /* 10838209 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083820d je 0x1083822f */
  if (C.zf) goto L_1083822f;
  /* 1083820f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838212 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10838216 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838219 jne 0x10838226 */
  if (!C.zf) goto L_10838226;
  /* 1083821b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083821e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838221 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10838224 jmp 0x1083822d */
  goto L_1083822d;
L_10838226:;
  /* 10838226 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1083822d:;
  /* 1083822d jmp 0x10838236 */
  goto L_10838236;
L_1083822f:;
  /* 1083822f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10838236:;
  /* 10838236 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838238 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083823c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 1083823f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10838242:;
  /* 10838242 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10838245 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10838247 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1083824a:;
  /* 1083824a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083824d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10838250 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838253 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10838256 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10838258 je 0x1083827e */
  if (C.zf) goto L_1083827e;
  /* 1083825a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083825e je 0x1083826f */
  if (C.zf) goto L_1083826f;
  /* 10838260 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838263 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10838266 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838269 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083826c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1083826f:;
  /* 1083826f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838272 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10838274 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838277 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083827a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1083827c jmp 0x1083824a */
  goto L_1083824a;
L_1083827e:;
  /* 1083827e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838281 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10838284 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10838286 je 0x108382a4 */
  if (C.zf) goto L_108382a4;
  /* 10838288 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083828c jne 0x108382a9 */
  if (!C.zf) goto L_108382a9;
  /* 1083828e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838291 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10838294 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838297 je 0x108382a4 */
  if (C.zf) goto L_108382a4;
  /* 10838299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083829c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1083829f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108382a2 jne 0x108382a9 */
  if (!C.zf) goto L_108382a9;
L_108382a4:;
  /* 108382a4 jmp 0x10838354 */
  goto L_10838354;
L_108382a9:;
  /* 108382a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108382ad je 0x10838346 */
  if (C.zf) goto L_10838346;
  /* 108382b3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108382b7 je 0x1083830d */
  if (C.zf) goto L_1083830d;
  /* 108382b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108382bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108382be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 108382c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 108382c2 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 108382c8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 108382cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 108382cd je 0x108382f8 */
  if (C.zf) goto L_108382f8;
  /* 108382cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108382d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108382d5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 108382d7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 108382d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 108382dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108382df mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 108382e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108382e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108382e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108382eb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 108382ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108382f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108382f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 108382f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_108382f8:;
  /* 108382f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108382fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108382fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10838300 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10838302 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838308 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1083830b jmp 0x10838339 */
  goto L_10838339;
L_1083830d:;
  /* 1083830d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838310 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10838312 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10838314 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10838316 mov cl, byte ptr [eax + 0x10862e01] */
  CL = (r8((uint32_t)(EAX + 0x10862e01)));
  /* 1083831c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1083831f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10838321 je 0x10838339 */
  if (C.zf) goto L_10838339;
  /* 10838323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838326 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838329 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1083832c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083832f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10838331 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838334 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838337 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10838339:;
  /* 10838339 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083833c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083833e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838341 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838344 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10838346:;
  /* 10838346 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838349 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083834c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083834f jmp 0x108381c1 */
  goto L_108381c1;
L_10838354:;
  /* 10838354 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838358 je 0x10838369 */
  if (C.zf) goto L_10838369;
  /* 1083835a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083835d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10838360 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838363 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838366 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10838369:;
  /* 10838369 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1083836c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1083836e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838371 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10838374 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10838376 jmp 0x10838163 */
  goto L_10838163;
L_1083837b:;
  /* 1083837b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083837f je 0x10838393 */
  if (C.zf) goto L_10838393;
  /* 10838381 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838384 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1083838a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083838d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838390 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10838393:;
  /* 10838393 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838396 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10838398 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083839b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1083839e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 108383a0 mov esp, ebp */
  ESP = (EBP);
  /* 108383a2 pop ebp */
  EBP = (pop32());
  /* 108383a3 ret  */
  ESPCHK(0x10837f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100083b0 @ 0x108383b0 (537 bytes, 173 insns) */
void f_108383b0(void) {
  FTRACE(0x108383b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108383b0 push ebp */
  push32((uint32_t)(EBP));
  /* 108383b1 mov ebp, esp */
  EBP = (ESP);
  /* 108383b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108383b6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 108383bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 108383c4 cmp dword ptr [0x108616e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108616e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108383cb jne 0x1083840a */
  if (!C.zf) goto L_1083840a;
  /* 108383cd call dword ptr [0x10864374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864374))), 0x108383d3u);
  /* 108383d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 108383d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108383da je 0x108383e8 */
  if (C.zf) goto L_108383e8;
  /* 108383dc mov dword ptr [0x108616e8], 1 */
  w32((uint32_t)(0x108616e8), (0x1u));
  /* 108383e6 jmp 0x1083840a */
  goto L_1083840a;
L_108383e8:;
  /* 108383e8 call dword ptr [0x1086436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086436c))), 0x108383eeu);
  /* 108383ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108383f1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108383f5 je 0x10838403 */
  if (C.zf) goto L_10838403;
  /* 108383f7 mov dword ptr [0x108616e8], 2 */
  w32((uint32_t)(0x108616e8), (0x2u));
  /* 10838401 jmp 0x1083840a */
  goto L_1083840a;
L_10838403:;
  /* 10838403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10838405 jmp 0x108385c5 */
  goto L_108385c5;
L_1083840a:;
  /* 1083840a cmp dword ptr [0x108616e8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x108616e8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838411 jne 0x1083850e */
  if (!C.zf) goto L_1083850e;
  /* 10838417 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083841b jne 0x10838433 */
  if (!C.zf) goto L_10838433;
  /* 1083841d call dword ptr [0x10864374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864374))), 0x10838423u);
  /* 10838423 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10838426 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083842a jne 0x10838433 */
  if (!C.zf) goto L_10838433;
  /* 1083842c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083842e jmp 0x108385c5 */
  goto L_108385c5;
L_10838433:;
  /* 10838433 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10838436 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10838439:;
  /* 10838439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083843c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1083843e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10838441 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838443 je 0x10838465 */
  if (C.zf) goto L_10838465;
  /* 10838445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838448 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083844b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083844e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838451 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838453 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10838456 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838458 jne 0x10838463 */
  if (!C.zf) goto L_10838463;
  /* 1083845a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083845d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838460 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10838463:;
  /* 10838463 jmp 0x10838439 */
  goto L_10838439;
L_10838465:;
  /* 10838465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838468 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083846b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1083846d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838470 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10838473 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838475 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838479 push 0 */
  push32((uint32_t)(0x0u));
  /* 1083847b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083847e push edx */
  push32((uint32_t)(EDX));
  /* 1083847f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10838482 push eax */
  push32((uint32_t)(EAX));
  /* 10838483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838487 call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x1083848du);
  /* 1083848d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10838490 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838494 je 0x108384b4 */
  if (C.zf) goto L_108384b4;
  /* 10838496 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10838498 push 0x1085ce08 */
  push32((uint32_t)(0x1085ce08u));
  /* 1083849d push 2 */
  push32((uint32_t)(0x2u));
  /* 1083849f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108384a2 push ecx */
  push32((uint32_t)(ECX));
  /* 108384a3 call 0x10835de0 */
  push32(0x108384a8u); f_10835de0();
  /* 108384a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108384ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 108384ae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108384b2 jne 0x108384c5 */
  if (!C.zf) goto L_108384c5;
L_108384b4:;
  /* 108384b4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108384b7 push edx */
  push32((uint32_t)(EDX));
  /* 108384b8 call dword ptr [0x10864380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864380))), 0x108384beu);
  /* 108384be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108384c0 jmp 0x108385c5 */
  goto L_108385c5;
L_108384c5:;
  /* 108384c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 108384c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108384c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108384cc push eax */
  push32((uint32_t)(EAX));
  /* 108384cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108384d0 push ecx */
  push32((uint32_t)(ECX));
  /* 108384d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108384d4 push edx */
  push32((uint32_t)(EDX));
  /* 108384d5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 108384d8 push eax */
  push32((uint32_t)(EAX));
  /* 108384d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 108384db push 0 */
  push32((uint32_t)(0x0u));
  /* 108384dd call dword ptr [0x10864370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864370))), 0x108384e3u);
  /* 108384e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108384e5 jne 0x108384fc */
  if (!C.zf) goto L_108384fc;
  /* 108384e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 108384e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108384ec push ecx */
  push32((uint32_t)(ECX));
  /* 108384ed call 0x10836870 */
  push32(0x108384f2u); f_10836870();
  /* 108384f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108384f5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_108384fc:;
  /* 108384fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 108384ff push edx */
  push32((uint32_t)(EDX));
  /* 10838500 call dword ptr [0x10864380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864380))), 0x10838506u);
  /* 10838506 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10838509 jmp 0x108385c5 */
  goto L_108385c5;
L_1083850e:;
  /* 1083850e cmp dword ptr [0x108616e8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x108616e8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838515 jne 0x108385c3 */
  if (!C.zf) goto L_108385c3;
  /* 1083851b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083851f jne 0x10838537 */
  if (!C.zf) goto L_10838537;
  /* 10838521 call dword ptr [0x1086436c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086436c))), 0x10838527u);
  /* 10838527 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1083852a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083852e jne 0x10838537 */
  if (!C.zf) goto L_10838537;
  /* 10838530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10838532 jmp 0x108385c5 */
  goto L_108385c5;
L_10838537:;
  /* 10838537 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1083853a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1083853d:;
  /* 1083853d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838540 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10838543 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838545 je 0x10838565 */
  if (C.zf) goto L_10838565;
  /* 10838547 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083854a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083854d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10838550 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838553 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10838556 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838558 jne 0x10838563 */
  if (!C.zf) goto L_10838563;
  /* 1083855a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083855d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838560 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10838563:;
  /* 10838563 jmp 0x1083853d */
  goto L_1083853d;
L_10838565:;
  /* 10838565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838568 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083856b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083856e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10838571 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10838576 push 0x1085ce08 */
  push32((uint32_t)(0x1085ce08u));
  /* 1083857b push 2 */
  push32((uint32_t)(0x2u));
  /* 1083857d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10838580 push edx */
  push32((uint32_t)(EDX));
  /* 10838581 call 0x10835de0 */
  push32(0x10838586u); f_10835de0();
  /* 10838586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838589 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083858c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838590 jne 0x108385a0 */
  if (!C.zf) goto L_108385a0;
  /* 10838592 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10838595 push eax */
  push32((uint32_t)(EAX));
  /* 10838596 call dword ptr [0x10864378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864378))), 0x1083859cu);
  /* 1083859c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083859e jmp 0x108385c5 */
  goto L_108385c5;
L_108385a0:;
  /* 108385a0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108385a3 push ecx */
  push32((uint32_t)(ECX));
  /* 108385a4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 108385a7 push edx */
  push32((uint32_t)(EDX));
  /* 108385a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108385ab push eax */
  push32((uint32_t)(EAX));
  /* 108385ac call 0x1083c6c0 */
  push32(0x108385b1u); f_1083c6c0();
  /* 108385b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108385b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108385b7 push ecx */
  push32((uint32_t)(ECX));
  /* 108385b8 call dword ptr [0x10864378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864378))), 0x108385beu);
  /* 108385be mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108385c1 jmp 0x108385c5 */
  goto L_108385c5;
L_108385c3:;
  /* 108385c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108385c5:;
  /* 108385c5 mov esp, ebp */
  ESP = (EBP);
  /* 108385c7 pop ebp */
  EBP = (pop32());
  /* 108385c8 ret  */
  ESPCHK(0x108383b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x108385d0 (77 bytes, 25 insns) */
void f_108385d0(void) {
  FTRACE(0x108385d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108385d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108385d1 mov ebp, esp */
  EBP = (ESP);
  /* 108385d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 108385d5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 108385da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108385dc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108385e0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 108385e3 push eax */
  push32((uint32_t)(EAX));
  /* 108385e4 call dword ptr [0x10864360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864360))), 0x108385eau);
  /* 108385ea mov dword ptr [0x10862f2c], eax */
  w32((uint32_t)(0x10862f2c), (EAX));
  /* 108385ef cmp dword ptr [0x10862f2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10862f2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108385f6 jne 0x108385fc */
  if (!C.zf) goto L_108385fc;
  /* 108385f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108385fa jmp 0x1083861b */
  goto L_1083861b;
L_108385fc:;
  /* 108385fc call 0x1083a080 */
  push32(0x10838601u); f_1083a080();
  /* 10838601 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10838603 jne 0x10838616 */
  if (!C.zf) goto L_10838616;
  /* 10838605 mov ecx, dword ptr [0x10862f2c] */
  ECX = (r32((uint32_t)(0x10862f2c)));
  /* 1083860b push ecx */
  push32((uint32_t)(ECX));
  /* 1083860c call dword ptr [0x10864364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864364))), 0x10838612u);
  /* 10838612 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10838614 jmp 0x1083861b */
  goto L_1083861b;
L_10838616:;
  /* 10838616 mov eax, 1 */
  EAX = (0x1u);
L_1083861b:;
  /* 1083861b pop ebp */
  EBP = (pop32());
  /* 1083861c ret  */
  ESPCHK(0x108385d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008620 @ 0x10838620 (156 bytes, 48 insns) */
void f_10838620(void) {
  FTRACE(0x10838620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838620 push ebp */
  push32((uint32_t)(EBP));
  /* 10838621 mov ebp, esp */
  EBP = (ESP);
  /* 10838623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838626 mov eax, dword ptr [0x10862f28] */
  EAX = (r32((uint32_t)(0x10862f28)));
  /* 1083862b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083862e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10838635 jmp 0x10838640 */
  goto L_10838640;
L_10838637:;
  /* 10838637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083863a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083863d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10838640:;
  /* 10838640 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838643 cmp edx, dword ptr [0x10862f24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10862f24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838649 jge 0x10838696 */
  if ((C.sf==C.of)) goto L_10838696;
  /* 1083864b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10838650 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10838655 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838658 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1083865b push ecx */
  push32((uint32_t)(ECX));
  /* 1083865c call dword ptr [0x10864358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864358))), 0x10838662u);
  /* 10838662 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10838667 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838669 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083866c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1083866f push eax */
  push32((uint32_t)(EAX));
  /* 10838670 call dword ptr [0x10864358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864358))), 0x10838676u);
  /* 10838676 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838679 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1083867c push edx */
  push32((uint32_t)(EDX));
  /* 1083867d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083867f mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 10838684 push eax */
  push32((uint32_t)(EAX));
  /* 10838685 call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x1083868bu);
  /* 1083868b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083868e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838691 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10838694 jmp 0x10838637 */
  goto L_10838637;
L_10838696:;
  /* 10838696 mov edx, dword ptr [0x10862f28] */
  EDX = (r32((uint32_t)(0x10862f28)));
  /* 1083869c push edx */
  push32((uint32_t)(EDX));
  /* 1083869d push 0 */
  push32((uint32_t)(0x0u));
  /* 1083869f mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 108386a4 push eax */
  push32((uint32_t)(EAX));
  /* 108386a5 call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x108386abu);
  /* 108386ab mov ecx, dword ptr [0x10862f2c] */
  ECX = (r32((uint32_t)(0x10862f2c)));
  /* 108386b1 push ecx */
  push32((uint32_t)(ECX));
  /* 108386b2 call dword ptr [0x10864364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864364))), 0x108386b8u);
  /* 108386b8 mov esp, ebp */
  ESP = (EBP);
  /* 108386ba pop ebp */
  EBP = (pop32());
  /* 108386bb ret  */
  ESPCHK(0x10838620u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x108386c0 (73 bytes, 19 insns) */
void f_108386c0(void) {
  FTRACE(0x108386c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108386c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108386c1 mov ebp, esp */
  EBP = (ESP);
  /* 108386c3 cmp dword ptr [0x1086157c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108386ca je 0x108386de */
  if (C.zf) goto L_108386de;
  /* 108386cc cmp dword ptr [0x1086157c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108386d3 jne 0x10838707 */
  if (!C.zf) goto L_10838707;
  /* 108386d5 cmp dword ptr [0x10861580], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861580))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108386dc jne 0x10838707 */
  if (!C.zf) goto L_10838707;
L_108386de:;
  /* 108386de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 108386e3 call 0x10838710 */
  push32(0x108386e8u); f_10838710();
  /* 108386e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108386eb cmp dword ptr [0x108616ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x108616ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108386f2 je 0x108386fa */
  if (C.zf) goto L_108386fa;
  /* 108386f4 call dword ptr [0x108616ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x108616ec))), 0x108386fau);
L_108386fa:;
  /* 108386fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 108386ff call 0x10838710 */
  push32(0x10838704u); f_10838710();
  /* 10838704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10838707:;
  /* 10838707 pop ebp */
  EBP = (pop32());
  /* 10838708 ret  */
  ESPCHK(0x108386c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x10838710 (447 bytes, 131 insns) */
void f_10838710(void) {
  FTRACE(0x10838710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838710 push ebp */
  push32((uint32_t)(EBP));
  /* 10838711 mov ebp, esp */
  EBP = (ESP);
  /* 10838713 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838719 push ebx */
  push32((uint32_t)(EBX));
  /* 1083871a push esi */
  push32((uint32_t)(ESI));
  /* 1083871b push edi */
  push32((uint32_t)(EDI));
  /* 1083871c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10838723 jmp 0x1083872e */
  goto L_1083872e;
L_10838725:;
  /* 10838725 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838728 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083872b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1083872e:;
  /* 1083872e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838732 jae 0x10838747 */
  if (!C.cf) goto L_10838747;
  /* 10838734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838737 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083873a cmp edx, dword ptr [ecx*8 + 0x1085fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1085fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838741 jne 0x10838745 */
  if (!C.zf) goto L_10838745;
  /* 10838743 jmp 0x10838747 */
  goto L_10838747;
L_10838745:;
  /* 10838745 jmp 0x10838725 */
  goto L_10838725;
L_10838747:;
  /* 10838747 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083874a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083874d cmp ecx, dword ptr [eax*8 + 0x1085fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1085fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838754 jne 0x108388c8 */
  if (!C.zf) goto L_108388c8;
  /* 1083875a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838761 je 0x10838784 */
  if (C.zf) goto L_10838784;
  /* 10838763 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838766 mov eax, dword ptr [edx*8 + 0x1085fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1085fab4)));
  /* 1083876d push eax */
  push32((uint32_t)(EAX));
  /* 1083876e push 0 */
  push32((uint32_t)(0x0u));
  /* 10838770 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838774 push 1 */
  push32((uint32_t)(0x1u));
  /* 10838776 call 0x10834ea0 */
  push32(0x1083877bu); f_10834ea0();
  /* 1083877b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083877e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838781 jne 0x10838784 */
  if (!C.zf) goto L_10838784;
  /* 10838783 int3  */
  x86_unimpl("int3 @ 0x10838783");
L_10838784:;
  /* 10838784 cmp dword ptr [0x1086157c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083878b je 0x1083879f */
  if (C.zf) goto L_1083879f;
  /* 1083878d cmp dword ptr [0x1086157c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086157c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838794 jne 0x108387d8 */
  if (!C.zf) goto L_108387d8;
  /* 10838796 cmp dword ptr [0x10861580], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10861580))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083879d jne 0x108387d8 */
  if (!C.zf) goto L_108387d8;
L_1083879f:;
  /* 1083879f push 0 */
  push32((uint32_t)(0x0u));
  /* 108387a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 108387a4 push ecx */
  push32((uint32_t)(ECX));
  /* 108387a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108387a8 mov eax, dword ptr [edx*8 + 0x1085fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1085fab4)));
  /* 108387af push eax */
  push32((uint32_t)(EAX));
  /* 108387b0 call 0x10838c10 */
  push32(0x108387b5u); f_10838c10();
  /* 108387b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108387b8 push eax */
  push32((uint32_t)(EAX));
  /* 108387b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108387bc mov edx, dword ptr [ecx*8 + 0x1085fab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1085fab4)));
  /* 108387c3 push edx */
  push32((uint32_t)(EDX));
  /* 108387c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 108387c6 call dword ptr [0x10864394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864394))), 0x108387ccu);
  /* 108387cc push eax */
  push32((uint32_t)(EAX));
  /* 108387cd call dword ptr [0x10864398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864398))), 0x108387d3u);
  /* 108387d3 jmp 0x108388c8 */
  goto L_108388c8;
L_108387d8:;
  /* 108387d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108387df je 0x108388c8 */
  if (C.zf) goto L_108388c8;
  /* 108387e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 108387ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 108387f0 push eax */
  push32((uint32_t)(EAX));
  /* 108387f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 108387f3 call dword ptr [0x108643b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b0))), 0x108387f9u);
  /* 108387f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 108387fb jne 0x10838811 */
  if (!C.zf) goto L_10838811;
  /* 108387fd push 0x1085c670 */
  push32((uint32_t)(0x1085c670u));
  /* 10838802 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10838808 push ecx */
  push32((uint32_t)(ECX));
  /* 10838809 call 0x10838d90 */
  push32(0x1083880eu); f_10838d90();
  /* 1083880e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10838811:;
  /* 10838811 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10838817 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1083881a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083881d push eax */
  push32((uint32_t)(EAX));
  /* 1083881e call 0x10838c10 */
  push32(0x10838823u); f_10838c10();
  /* 10838823 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838826 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838829 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083882c jbe 0x1083885a */
  if ((C.cf||C.zf)) goto L_1083885a;
  /* 1083882e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10838834 push ecx */
  push32((uint32_t)(ECX));
  /* 10838835 call 0x10838c10 */
  push32(0x1083883au); f_10838c10();
  /* 1083883a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083883d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838840 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10838844 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10838847 push 3 */
  push32((uint32_t)(0x3u));
  /* 10838849 push 0x1085c66c */
  push32((uint32_t)(0x1085c66cu));
  /* 1083884e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838851 push ecx */
  push32((uint32_t)(ECX));
  /* 10838852 call 0x10839600 */
  push32(0x10838857u); f_10839600();
  /* 10838857 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083885a:;
  /* 1083885a push 0x1085d0c4 */
  push32((uint32_t)(0x1085d0c4u));
  /* 1083885f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10838865 push edx */
  push32((uint32_t)(EDX));
  /* 10838866 call 0x10838d90 */
  push32(0x1083886bu); f_10838d90();
  /* 1083886b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083886e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838871 push eax */
  push32((uint32_t)(EAX));
  /* 10838872 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10838878 push ecx */
  push32((uint32_t)(ECX));
  /* 10838879 call 0x10838da0 */
  push32(0x1083887eu); f_10838da0();
  /* 1083887e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838881 push 0x1085c5e4 */
  push32((uint32_t)(0x1085c5e4u));
  /* 10838886 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1083888c push edx */
  push32((uint32_t)(EDX));
  /* 1083888d call 0x10838da0 */
  push32(0x10838892u); f_10838da0();
  /* 10838892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838895 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838898 mov ecx, dword ptr [eax*8 + 0x1085fab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1085fab4)));
  /* 1083889f push ecx */
  push32((uint32_t)(ECX));
  /* 108388a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 108388a6 push edx */
  push32((uint32_t)(EDX));
  /* 108388a7 call 0x10838da0 */
  push32(0x108388acu); f_10838da0();
  /* 108388ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108388af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 108388b4 push 0x1085d09c */
  push32((uint32_t)(0x1085d09cu));
  /* 108388b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 108388bf push eax */
  push32((uint32_t)(EAX));
  /* 108388c0 call 0x10839540 */
  push32(0x108388c5u); f_10839540();
  /* 108388c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108388c8:;
  /* 108388c8 pop edi */
  EDI = (pop32());
  /* 108388c9 pop esi */
  ESI = (pop32());
  /* 108388ca pop ebx */
  EBX = (pop32());
  /* 108388cb mov esp, ebp */
  ESP = (EBP);
  /* 108388cd pop ebp */
  EBP = (pop32());
  /* 108388ce ret  */
  ESPCHK(0x10838710u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x108388d0 (80 bytes, 27 insns) */
void f_108388d0(void) {
  FTRACE(0x108388d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108388d0 push ebp */
  push32((uint32_t)(EBP));
  /* 108388d1 mov ebp, esp */
  EBP = (ESP);
  /* 108388d3 push ecx */
  push32((uint32_t)(ECX));
  /* 108388d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 108388db jmp 0x108388e6 */
  goto L_108388e6;
L_108388dd:;
  /* 108388dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108388e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108388e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108388e6:;
  /* 108388e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108388ea jae 0x108388ff */
  if (!C.cf) goto L_108388ff;
  /* 108388ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108388ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108388f2 cmp edx, dword ptr [ecx*8 + 0x1085fab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1085fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108388f9 jne 0x108388fd */
  if (!C.zf) goto L_108388fd;
  /* 108388fb jmp 0x108388ff */
  goto L_108388ff;
L_108388fd:;
  /* 108388fd jmp 0x108388dd */
  goto L_108388dd;
L_108388ff:;
  /* 108388ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838902 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838905 cmp ecx, dword ptr [eax*8 + 0x1085fab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1085fab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083890c jne 0x1083891a */
  if (!C.zf) goto L_1083891a;
  /* 1083890e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838911 mov eax, dword ptr [edx*8 + 0x1085fab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1085fab4)));
  /* 10838918 jmp 0x1083891c */
  goto L_1083891c;
L_1083891a:;
  /* 1083891a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1083891c:;
  /* 1083891c mov esp, ebp */
  ESP = (EBP);
  /* 1083891e pop ebp */
  EBP = (pop32());
  /* 1083891f ret  */
  ESPCHK(0x108388d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10838920 (66 bytes, 28 insns) */
void f_10838920(void) {
  FTRACE(0x10838920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838920 push ebp */
  push32((uint32_t)(EBP));
  /* 10838921 mov ebp, esp */
  EBP = (ESP);
  /* 10838923 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838927 jne 0x10838947 */
  if (!C.zf) goto L_10838947;
  /* 10838929 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083892d jge 0x10838947 */
  if ((C.sf==C.of)) goto L_10838947;
  /* 1083892f push 1 */
  push32((uint32_t)(0x1u));
  /* 10838931 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838934 push eax */
  push32((uint32_t)(EAX));
  /* 10838935 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838938 push ecx */
  push32((uint32_t)(ECX));
  /* 10838939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083893c push edx */
  push32((uint32_t)(EDX));
  /* 1083893d call 0x10838970 */
  push32(0x10838942u); f_10838970();
  /* 10838942 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838945 jmp 0x1083895d */
  goto L_1083895d;
L_10838947:;
  /* 10838947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838949 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1083894c push eax */
  push32((uint32_t)(EAX));
  /* 1083894d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838950 push ecx */
  push32((uint32_t)(ECX));
  /* 10838951 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838954 push edx */
  push32((uint32_t)(EDX));
  /* 10838955 call 0x10838970 */
  push32(0x1083895au); f_10838970();
  /* 1083895a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083895d:;
  /* 1083895d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838960 pop ebp */
  EBP = (pop32());
  /* 10838961 ret  */
  ESPCHK(0x10838920u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10838970 (194 bytes, 71 insns) */
void f_10838970(void) {
  FTRACE(0x10838970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838970 push ebp */
  push32((uint32_t)(EBP));
  /* 10838971 mov ebp, esp */
  EBP = (ESP);
  /* 10838973 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838976 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838979 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083897c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838980 je 0x10838999 */
  if (C.zf) goto L_10838999;
  /* 10838982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838985 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10838988 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083898b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083898e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10838991 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838994 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10838996 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10838999:;
  /* 10838999 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083899c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1083899f:;
  /* 1083899f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108389a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108389a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108389a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 108389aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108389ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108389af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 108389b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 108389b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108389b9 jbe 0x108389d1 */
  if ((C.cf||C.zf)) goto L_108389d1;
  /* 108389bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108389be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108389c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108389c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108389cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 108389cf jmp 0x108389e5 */
  goto L_108389e5;
L_108389d1:;
  /* 108389d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 108389d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108389d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 108389dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108389e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_108389e5:;
  /* 108389e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108389e9 ja 0x1083899f */
  if ((!C.cf&&!C.zf)) goto L_1083899f;
  /* 108389eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 108389f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 108389f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108389fa:;
  /* 108389fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108389fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 108389ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10838a02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838a05 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838a08 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10838a0a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10838a0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838a0f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10838a12 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10838a14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838a17 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838a1a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10838a1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838a20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838a23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10838a26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838a29 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838a2c jb 0x108389fa */
  if (C.cf) goto L_108389fa;
  /* 10838a2e mov esp, ebp */
  ESP = (EBP);
  /* 10838a30 pop ebp */
  EBP = (pop32());
  /* 10838a31 ret  */
  ESPCHK(0x10838970u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10838a40 (63 bytes, 24 insns) */
void f_10838a40(void) {
  FTRACE(0x10838a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10838a41 mov ebp, esp */
  EBP = (ESP);
  /* 10838a43 push ecx */
  push32((uint32_t)(ECX));
  /* 10838a44 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838a48 jne 0x10838a59 */
  if (!C.zf) goto L_10838a59;
  /* 10838a4a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838a4e jge 0x10838a59 */
  if ((C.sf==C.of)) goto L_10838a59;
  /* 10838a50 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10838a57 jmp 0x10838a60 */
  goto L_10838a60;
L_10838a59:;
  /* 10838a59 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10838a60:;
  /* 10838a60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838a63 push eax */
  push32((uint32_t)(EAX));
  /* 10838a64 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10838a68 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838a6b push edx */
  push32((uint32_t)(EDX));
  /* 10838a6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838a6f push eax */
  push32((uint32_t)(EAX));
  /* 10838a70 call 0x10838970 */
  push32(0x10838a75u); f_10838970();
  /* 10838a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838a78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838a7b mov esp, ebp */
  ESP = (EBP);
  /* 10838a7d pop ebp */
  EBP = (pop32());
  /* 10838a7e ret  */
  ESPCHK(0x10838a40u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10838a80 (30 bytes, 14 insns) */
void f_10838a80(void) {
  FTRACE(0x10838a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10838a81 mov ebp, esp */
  EBP = (ESP);
  /* 10838a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838a85 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838a88 push eax */
  push32((uint32_t)(EAX));
  /* 10838a89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838a8c push ecx */
  push32((uint32_t)(ECX));
  /* 10838a8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838a90 push edx */
  push32((uint32_t)(EDX));
  /* 10838a91 call 0x10838970 */
  push32(0x10838a96u); f_10838970();
  /* 10838a96 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838a9c pop ebp */
  EBP = (pop32());
  /* 10838a9d ret  */
  ESPCHK(0x10838a80u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10838aa0 (72 bytes, 28 insns) */
void f_10838aa0(void) {
  FTRACE(0x10838aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10838aa1 mov ebp, esp */
  EBP = (ESP);
  /* 10838aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10838aa4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838aa8 jne 0x10838ac1 */
  if (!C.zf) goto L_10838ac1;
  /* 10838aaa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838aae jg 0x10838ac1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10838ac1;
  /* 10838ab0 jl 0x10838ab8 */
  if ((C.sf!=C.of)) goto L_10838ab8;
  /* 10838ab2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838ab6 jae 0x10838ac1 */
  if (!C.cf) goto L_10838ac1;
L_10838ab8:;
  /* 10838ab8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10838abf jmp 0x10838ac8 */
  goto L_10838ac8;
L_10838ac1:;
  /* 10838ac1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10838ac8:;
  /* 10838ac8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838acb push eax */
  push32((uint32_t)(EAX));
  /* 10838acc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838acf push ecx */
  push32((uint32_t)(ECX));
  /* 10838ad0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838ad3 push edx */
  push32((uint32_t)(EDX));
  /* 10838ad4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838ad7 push eax */
  push32((uint32_t)(EAX));
  /* 10838ad8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838adb push ecx */
  push32((uint32_t)(ECX));
  /* 10838adc call 0x10838af0 */
  push32(0x10838ae1u); f_10838af0();
  /* 10838ae1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838ae4 mov esp, ebp */
  ESP = (EBP);
  /* 10838ae6 pop ebp */
  EBP = (pop32());
  /* 10838ae7 ret  */
  ESPCHK(0x10838aa0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10838af0 (242 bytes, 91 insns) */
void f_10838af0(void) {
  FTRACE(0x10838af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10838af1 mov ebp, esp */
  EBP = (ESP);
  /* 10838af3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10838afc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838b00 je 0x10838b24 */
  if (C.zf) goto L_10838b24;
  /* 10838b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b05 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10838b08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10838b11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838b14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10838b16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838b19 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10838b1e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10838b21 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10838b24:;
  /* 10838b24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b27 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10838b2a:;
  /* 10838b2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838b2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10838b2f push ecx */
  push32((uint32_t)(ECX));
  /* 10838b30 push eax */
  push32((uint32_t)(EAX));
  /* 10838b31 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838b34 push edx */
  push32((uint32_t)(EDX));
  /* 10838b35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838b38 push eax */
  push32((uint32_t)(EAX));
  /* 10838b39 call 0x1083ca70 */
  push32(0x10838b3eu); f_1083ca70();
  /* 10838b3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10838b41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838b44 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838b46 push edx */
  push32((uint32_t)(EDX));
  /* 10838b47 push ecx */
  push32((uint32_t)(ECX));
  /* 10838b48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838b4b push eax */
  push32((uint32_t)(EAX));
  /* 10838b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838b4f push ecx */
  push32((uint32_t)(ECX));
  /* 10838b50 call 0x1083ca00 */
  push32(0x10838b55u); f_1083ca00();
  /* 10838b55 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10838b58 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10838b5b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838b5f jbe 0x10838b77 */
  if ((C.cf||C.zf)) goto L_10838b77;
  /* 10838b61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838b64 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b6a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10838b6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10838b75 jmp 0x10838b8b */
  goto L_10838b8b;
L_10838b77:;
  /* 10838b77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10838b7a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b80 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10838b82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838b88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10838b8b:;
  /* 10838b8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838b8f ja 0x10838b2a */
  if ((!C.cf&&!C.zf)) goto L_10838b2a;
  /* 10838b91 jb 0x10838b99 */
  if (C.cf) goto L_10838b99;
  /* 10838b93 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838b97 ja 0x10838b2a */
  if ((!C.cf&&!C.zf)) goto L_10838b2a;
L_10838b99:;
  /* 10838b99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838b9c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10838b9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838ba2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838ba5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10838ba8:;
  /* 10838ba8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838bab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10838bad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10838bb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838bb6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10838bb8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10838bba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838bbd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10838bc0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10838bc2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10838bc5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838bc8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10838bcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838bce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838bd1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10838bd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10838bd7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838bda jb 0x10838ba8 */
  if (C.cf) goto L_10838ba8;
  /* 10838bdc mov esp, ebp */
  ESP = (EBP);
  /* 10838bde pop ebp */
  EBP = (pop32());
  /* 10838bdf ret 0x14 */
  ESPCHK(0x10838af0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10838bf0 (31 bytes, 15 insns) */
void f_10838bf0(void) {
  FTRACE(0x10838bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10838bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10838bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838bf5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838bf8 push eax */
  push32((uint32_t)(EAX));
  /* 10838bf9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838bfc push ecx */
  push32((uint32_t)(ECX));
  /* 10838bfd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838c00 push edx */
  push32((uint32_t)(EDX));
  /* 10838c01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838c04 push eax */
  push32((uint32_t)(EAX));
  /* 10838c05 call 0x10838af0 */
  push32(0x10838c0au); f_10838af0();
  /* 10838c0a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838c0d pop ebp */
  EBP = (pop32());
  /* 10838c0e ret  */
  ESPCHK(0x10838bf0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10838c10 (123 bytes, 44 insns) */
void f_10838c10(void) {
  FTRACE(0x10838c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838c10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838c14 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838c1a je 0x10838c30 */
  if (C.zf) goto L_10838c30;
L_10838c1c:;
  /* 10838c1c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10838c1e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10838c1f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10838c21 je 0x10838c63 */
  if (C.zf) goto L_10838c63;
  /* 10838c23 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838c29 jne 0x10838c1c */
  if (!C.zf) goto L_10838c1c;
  /* 10838c2b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10838c30:;
  /* 10838c30 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10838c32 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10838c37 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838c39 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10838c3c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10838c3e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838c41 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10838c46 je 0x10838c30 */
  if (C.zf) goto L_10838c30;
  /* 10838c48 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10838c4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10838c4d je 0x10838c81 */
  if (C.zf) goto L_10838c81;
  /* 10838c4f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10838c51 je 0x10838c77 */
  if (C.zf) goto L_10838c77;
  /* 10838c53 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10838c58 je 0x10838c6d */
  if (C.zf) goto L_10838c6d;
  /* 10838c5a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10838c5f je 0x10838c63 */
  if (C.zf) goto L_10838c63;
  /* 10838c61 jmp 0x10838c30 */
  goto L_10838c30;
L_10838c63:;
  /* 10838c63 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10838c66 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838c6a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838c6c ret  */
  ESPCHK(0x10838c10u, _esp0);
  ESP += 4; return;
L_10838c6d:;
  /* 10838c6d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10838c70 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838c74 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838c76 ret  */
  ESPCHK(0x10838c10u, _esp0);
  ESP += 4; return;
L_10838c77:;
  /* 10838c77 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10838c7a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838c7e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838c80 ret  */
  ESPCHK(0x10838c10u, _esp0);
  ESP += 4; return;
L_10838c81:;
  /* 10838c81 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10838c84 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838c88 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838c8a ret  */
  ESPCHK(0x10838c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c90 @ 0x10838c90 (249 bytes, 93 insns) */
void f_10838c90(void) {
  FTRACE(0x10838c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10838c91 mov ebp, esp */
  EBP = (ESP);
  /* 10838c93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838c96 push ebx */
  push32((uint32_t)(EBX));
  /* 10838c97 push esi */
  push32((uint32_t)(ESI));
  /* 10838c98 push edi */
  push32((uint32_t)(EDI));
  /* 10838c99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10838c9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10838c9f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10838ca2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10838ca5:;
  /* 10838ca5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838ca9 jne 0x10838cc9 */
  if (!C.zf) goto L_10838cc9;
  /* 10838cab push 0x1085d0fc */
  push32((uint32_t)(0x1085d0fcu));
  /* 10838cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838cb2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10838cb4 push 0x1085d0f0 */
  push32((uint32_t)(0x1085d0f0u));
  /* 10838cb9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10838cbb call 0x10834ea0 */
  push32(0x10838cc0u); f_10834ea0();
  /* 10838cc0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838cc3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838cc6 jne 0x10838cc9 */
  if (!C.zf) goto L_10838cc9;
  /* 10838cc8 int3  */
  x86_unimpl("int3 @ 0x10838cc8");
L_10838cc9:;
  /* 10838cc9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838ccb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838ccd jne 0x10838ca5 */
  if (!C.zf) goto L_10838ca5;
L_10838ccf:;
  /* 10838ccf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838cd3 jne 0x10838cf3 */
  if (!C.zf) goto L_10838cf3;
  /* 10838cd5 push 0x1085d0e0 */
  push32((uint32_t)(0x1085d0e0u));
  /* 10838cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10838cdc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10838cde push 0x1085d0f0 */
  push32((uint32_t)(0x1085d0f0u));
  /* 10838ce3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10838ce5 call 0x10834ea0 */
  push32(0x10838ceau); f_10834ea0();
  /* 10838cea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838ced cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838cf0 jne 0x10838cf3 */
  if (!C.zf) goto L_10838cf3;
  /* 10838cf2 int3  */
  x86_unimpl("int3 @ 0x10838cf2");
L_10838cf3:;
  /* 10838cf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10838cf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10838cf7 jne 0x10838ccf */
  if (!C.zf) goto L_10838ccf;
  /* 10838cf9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838cfc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10838d03 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838d09 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10838d0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838d12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10838d14 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838d1a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10838d1d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10838d20 push edx */
  push32((uint32_t)(EDX));
  /* 10838d21 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838d24 push eax */
  push32((uint32_t)(EAX));
  /* 10838d25 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d28 push ecx */
  push32((uint32_t)(ECX));
  /* 10838d29 call 0x1083cd70 */
  push32(0x10838d2eu); f_1083cd70();
  /* 10838d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838d31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10838d34 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d37 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10838d3a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838d3d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d40 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10838d43 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d46 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838d4a jl 0x10838d6e */
  if ((C.sf!=C.of)) goto L_10838d6e;
  /* 10838d4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10838d51 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10838d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838d56 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10838d5c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10838d5f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d62 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10838d64 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838d67 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d6a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10838d6c jmp 0x10838d7f */
  goto L_10838d7f;
L_10838d6e:;
  /* 10838d6e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838d71 push eax */
  push32((uint32_t)(EAX));
  /* 10838d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838d74 call 0x1083caf0 */
  push32(0x10838d79u); f_1083caf0();
  /* 10838d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838d7c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10838d7f:;
  /* 10838d7f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10838d82 pop edi */
  EDI = (pop32());
  /* 10838d83 pop esi */
  ESI = (pop32());
  /* 10838d84 pop ebx */
  EBX = (pop32());
  /* 10838d85 mov esp, ebp */
  ESP = (EBP);
  /* 10838d87 pop ebp */
  EBP = (pop32());
  /* 10838d88 ret  */
  ESPCHK(0x10838c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d90 @ 0x10838d90 (7 bytes, 3 insns) */
void f_10838d90(void) {
  FTRACE(0x10838d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838d90 push edi */
  push32((uint32_t)(EDI));
  /* 10838d91 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10838d95 jmp 0x10838e01 */
  jmp_ind(0x10838e01u); return;
}

/* FUN_10008da0 @ 0x10838da0 (224 bytes, 84 insns) */
void f_10838da0(void) {
  FTRACE(0x10838da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838da0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10838da4 push edi */
  push32((uint32_t)(EDI));
  /* 10838da5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838dab je 0x10838dbc */
  if (C.zf) goto L_10838dbc;
L_10838dad:;
  /* 10838dad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10838daf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10838db0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10838db2 je 0x10838def */
  if (C.zf) goto L_10838def;
  /* 10838db4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838dba jne 0x10838dad */
  if (!C.zf) goto L_10838dad;
L_10838dbc:;
  /* 10838dbc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10838dbe mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10838dc3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838dc5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10838dc8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10838dca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838dcd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10838dd2 je 0x10838dbc */
  if (C.zf) goto L_10838dbc;
  /* 10838dd4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10838dd7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10838dd9 je 0x10838dfe */
  if (C.zf) goto L_10838dfe;
  /* 10838ddb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10838ddd je 0x10838df9 */
  if (C.zf) goto L_10838df9;
  /* 10838ddf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10838de4 je 0x10838df4 */
  if (C.zf) goto L_10838df4;
  /* 10838de6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10838deb je 0x10838def */
  if (C.zf) goto L_10838def;
  /* 10838ded jmp 0x10838dbc */
  goto L_10838dbc;
L_10838def:;
  /* 10838def lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10838df2 jmp 0x10838e01 */
  goto L_10838e01;
L_10838df4:;
  /* 10838df4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10838df7 jmp 0x10838e01 */
  goto L_10838e01;
L_10838df9:;
  /* 10838df9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10838dfc jmp 0x10838e01 */
  goto L_10838e01;
L_10838dfe:;
  /* 10838dfe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10838e01:;
  /* 10838e01 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10838e05 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838e0b je 0x10838e26 */
  if (C.zf) goto L_10838e26;
L_10838e0d:;
  /* 10838e0d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10838e0f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10838e10 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10838e12 je 0x10838e78 */
  if (C.zf) goto L_10838e78;
  /* 10838e14 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10838e16 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10838e17 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10838e1d jne 0x10838e0d */
  if (!C.zf) goto L_10838e0d;
  /* 10838e1f jmp 0x10838e26 */
  goto L_10838e26;
L_10838e21:;
  /* 10838e21 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10838e23 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10838e26:;
  /* 10838e26 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10838e2b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10838e2d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838e2f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10838e32 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10838e34 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10838e36 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838e39 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10838e3e je 0x10838e21 */
  if (C.zf) goto L_10838e21;
  /* 10838e40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10838e42 je 0x10838e78 */
  if (C.zf) goto L_10838e78;
  /* 10838e44 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10838e46 je 0x10838e6f */
  if (C.zf) goto L_10838e6f;
  /* 10838e48 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10838e4e je 0x10838e62 */
  if (C.zf) goto L_10838e62;
  /* 10838e50 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10838e56 je 0x10838e5a */
  if (C.zf) goto L_10838e5a;
  /* 10838e58 jmp 0x10838e21 */
  goto L_10838e21;
L_10838e5a:;
  /* 10838e5a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10838e5c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10838e60 pop edi */
  EDI = (pop32());
  /* 10838e61 ret  */
  ESPCHK(0x10838da0u, _esp0);
  ESP += 4; return;
L_10838e62:;
  /* 10838e62 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10838e65 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10838e69 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10838e6d pop edi */
  EDI = (pop32());
  /* 10838e6e ret  */
  ESPCHK(0x10838da0u, _esp0);
  ESP += 4; return;
L_10838e6f:;
  /* 10838e6f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10838e72 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10838e76 pop edi */
  EDI = (pop32());
  /* 10838e77 ret  */
  ESPCHK(0x10838da0u, _esp0);
  ESP += 4; return;
L_10838e78:;
  /* 10838e78 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10838e7a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10838e7e pop edi */
  EDI = (pop32());
  /* 10838e7f ret  */
  ESPCHK(0x10838da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e80 @ 0x10838e80 (243 bytes, 91 insns) */
void f_10838e80(void) {
  FTRACE(0x10838e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10838e81 mov ebp, esp */
  EBP = (ESP);
  /* 10838e83 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838e86 push ebx */
  push32((uint32_t)(EBX));
  /* 10838e87 push esi */
  push32((uint32_t)(ESI));
  /* 10838e88 push edi */
  push32((uint32_t)(EDI));
  /* 10838e89 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10838e8c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10838e8f:;
  /* 10838e8f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838e93 jne 0x10838eb3 */
  if (!C.zf) goto L_10838eb3;
  /* 10838e95 push 0x1085d0fc */
  push32((uint32_t)(0x1085d0fcu));
  /* 10838e9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10838e9c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10838e9e push 0x1085d10c */
  push32((uint32_t)(0x1085d10cu));
  /* 10838ea3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10838ea5 call 0x10834ea0 */
  push32(0x10838eaau); f_10834ea0();
  /* 10838eaa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838ead cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838eb0 jne 0x10838eb3 */
  if (!C.zf) goto L_10838eb3;
  /* 10838eb2 int3  */
  x86_unimpl("int3 @ 0x10838eb2");
L_10838eb3:;
  /* 10838eb3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10838eb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10838eb7 jne 0x10838e8f */
  if (!C.zf) goto L_10838e8f;
L_10838eb9:;
  /* 10838eb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838ebd jne 0x10838edd */
  if (!C.zf) goto L_10838edd;
  /* 10838ebf push 0x1085d0e0 */
  push32((uint32_t)(0x1085d0e0u));
  /* 10838ec4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10838ec6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10838ec8 push 0x1085d10c */
  push32((uint32_t)(0x1085d10cu));
  /* 10838ecd push 2 */
  push32((uint32_t)(0x2u));
  /* 10838ecf call 0x10834ea0 */
  push32(0x10838ed4u); f_10834ea0();
  /* 10838ed4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838ed7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838eda jne 0x10838edd */
  if (!C.zf) goto L_10838edd;
  /* 10838edc int3  */
  x86_unimpl("int3 @ 0x10838edc");
L_10838edd:;
  /* 10838edd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10838edf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10838ee1 jne 0x10838eb9 */
  if (!C.zf) goto L_10838eb9;
  /* 10838ee3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838ee6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10838eed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838ef0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838ef3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10838ef6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838ef9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10838efc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10838efe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10838f04 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10838f07 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10838f0a push ecx */
  push32((uint32_t)(ECX));
  /* 10838f0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10838f0e push edx */
  push32((uint32_t)(EDX));
  /* 10838f0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f12 push eax */
  push32((uint32_t)(EAX));
  /* 10838f13 call 0x1083cd70 */
  push32(0x10838f18u); f_1083cd70();
  /* 10838f18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838f1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10838f1e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f21 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10838f24 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838f27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10838f2d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f30 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838f34 jl 0x10838f58 */
  if ((C.sf!=C.of)) goto L_10838f58;
  /* 10838f36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f39 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10838f3b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10838f3e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10838f40 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10838f46 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10838f49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10838f4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10838f51 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f54 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10838f56 jmp 0x10838f69 */
  goto L_10838f69;
L_10838f58:;
  /* 10838f58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10838f5b push edx */
  push32((uint32_t)(EDX));
  /* 10838f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10838f5e call 0x1083caf0 */
  push32(0x10838f63u); f_1083caf0();
  /* 10838f63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838f66 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10838f69:;
  /* 10838f69 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10838f6c pop edi */
  EDI = (pop32());
  /* 10838f6d pop esi */
  ESI = (pop32());
  /* 10838f6e pop ebx */
  EBX = (pop32());
  /* 10838f6f mov esp, ebp */
  ESP = (EBP);
  /* 10838f71 pop ebp */
  EBP = (pop32());
  /* 10838f72 ret  */
  ESPCHK(0x10838e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008f80 @ 0x10838f80 (47 bytes, 17 insns) */
void f_10838f80(void) {
  FTRACE(0x10838f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838f80 push ecx */
  push32((uint32_t)(ECX));
  /* 10838f81 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838f86 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10838f8a jb 0x10838fa0 */
  if (C.cf) goto L_10838fa0;
L_10838f8c:;
  /* 10838f8c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838f92 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838f97 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10838f99 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838f9e jae 0x10838f8c */
  if (!C.cf) goto L_10838f8c;
L_10838fa0:;
  /* 10838fa0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838fa2 mov eax, esp */
  EAX = (ESP);
  /* 10838fa4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10838fa6 mov esp, ecx */
  ESP = (ECX);
  /* 10838fa8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10838faa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10838fad push eax */
  push32((uint32_t)(EAX));
  /* 10838fae ret  */
  ESPCHK(0x10838f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008fb0 @ 0x10838fb0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10838fb0(void) {
  FTRACE(0x10838fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10838fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10838fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10838fb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10838fb6 push esi */
  push32((uint32_t)(ESI));
  /* 10838fb7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fbb je 0x10838fc3 */
  if (C.zf) goto L_10838fc3;
  /* 10838fbd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fc1 jne 0x10838fc8 */
  if (!C.zf) goto L_10838fc8;
L_10838fc3:;
  /* 10838fc3 jmp 0x10839198 */
  goto L_10839198;
L_10838fc8:;
  /* 10838fc8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fcc je 0x10838fe4 */
  if (C.zf) goto L_10838fe4;
  /* 10838fce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fd2 je 0x10838fe4 */
  if (C.zf) goto L_10838fe4;
  /* 10838fd4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fd8 je 0x10838fe4 */
  if (C.zf) goto L_10838fe4;
  /* 10838fda cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838fde jne 0x108390c1 */
  if (!C.zf) goto L_108390c1;
L_10838fe4:;
  /* 10838fe4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10838fe6 call 0x108397e0 */
  push32(0x10838febu); f_108397e0();
  /* 10838feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10838fee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838ff2 je 0x10838ffa */
  if (C.zf) goto L_10838ffa;
  /* 10838ff4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10838ff8 jne 0x1083903f */
  if (!C.zf) goto L_1083903f;
L_10838ffa:;
  /* 10838ffa cmp dword ptr [0x10861700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839001 jne 0x1083903f */
  if (!C.zf) goto L_1083903f;
  /* 10839003 push 1 */
  push32((uint32_t)(0x1u));
  /* 10839005 push 0x108391e0 */
  push32((uint32_t)(0x108391e0u));
  /* 1083900a call dword ptr [0x10864354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864354))), 0x10839010u);
  /* 10839010 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839013 jne 0x10839021 */
  if (!C.zf) goto L_10839021;
  /* 10839015 mov dword ptr [0x10861700], 1 */
  w32((uint32_t)(0x10861700), (0x1u));
  /* 1083901f jmp 0x1083903f */
  goto L_1083903f;
L_10839021:;
  /* 10839021 call dword ptr [0x108643d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643d8))), 0x10839027u);
  /* 10839027 mov esi, eax */
  ESI = (EAX);
  /* 10839029 call 0x1083dcc0 */
  push32(0x1083902eu); f_1083dcc0();
  /* 1083902e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10839030 push 1 */
  push32((uint32_t)(0x1u));
  /* 10839032 call 0x10839880 */
  push32(0x10839037u); f_10839880();
  /* 10839037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083903a jmp 0x10839198 */
  goto L_10839198;
L_1083903f:;
  /* 1083903f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839042 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10839045 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839048 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1083904b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1083904e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839052 ja 0x108390b2 */
  if ((!C.cf&&!C.zf)) goto L_108390b2;
  /* 10839054 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839057 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10839059 mov dl, byte ptr [eax + 0x108391bf] */
  DL = (r8((uint32_t)(EAX + 0x108391bf)));
  /* 1083905f jmp dword ptr [edx*4 + 0x108391ab] */
  switch (EDX) {
    case 0: goto L_10839066;
    case 1: goto L_108390a0;
    case 2: goto L_1083907a;
    case 3: goto L_1083908d;
    case 4: goto L_108390b2;
    default: x86_unimpl("switch@0x1083905f out of table"); return;
  }
L_10839066:;
  /* 10839066 mov ecx, dword ptr [0x108616f0] */
  ECX = (r32((uint32_t)(0x108616f0)));
  /* 1083906c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083906f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839072 mov dword ptr [0x108616f0], edx */
  w32((uint32_t)(0x108616f0), (EDX));
  /* 10839078 jmp 0x108390b2 */
  goto L_108390b2;
L_1083907a:;
  /* 1083907a mov eax, dword ptr [0x108616f4] */
  EAX = (r32((uint32_t)(0x108616f4)));
  /* 1083907f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10839082 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839085 mov dword ptr [0x108616f4], ecx */
  w32((uint32_t)(0x108616f4), (ECX));
  /* 1083908b jmp 0x108390b2 */
  goto L_108390b2;
L_1083908d:;
  /* 1083908d mov edx, dword ptr [0x108616f8] */
  EDX = (r32((uint32_t)(0x108616f8)));
  /* 10839093 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10839096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839099 mov dword ptr [0x108616f8], eax */
  w32((uint32_t)(0x108616f8), (EAX));
  /* 1083909e jmp 0x108390b2 */
  goto L_108390b2;
L_108390a0:;
  /* 108390a0 mov ecx, dword ptr [0x108616fc] */
  ECX = (r32((uint32_t)(0x108616fc)));
  /* 108390a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 108390a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108390ac mov dword ptr [0x108616fc], edx */
  w32((uint32_t)(0x108616fc), (EDX));
L_108390b2:;
  /* 108390b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 108390b4 call 0x10839880 */
  push32(0x108390b9u); f_10839880();
  /* 108390b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108390bc jmp 0x10839193 */
  goto L_10839193;
L_108390c1:;
  /* 108390c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108390c5 je 0x108390d8 */
  if (C.zf) goto L_108390d8;
  /* 108390c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108390cb je 0x108390d8 */
  if (C.zf) goto L_108390d8;
  /* 108390cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108390d1 je 0x108390d8 */
  if (C.zf) goto L_108390d8;
  /* 108390d3 jmp 0x10839198 */
  goto L_10839198;
L_108390d8:;
  /* 108390d8 call 0x10835820 */
  push32(0x108390ddu); f_10835820();
  /* 108390dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108390e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108390e3 cmp dword ptr [eax + 0x50], 0x1085fc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1085fc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108390ea jne 0x10839135 */
  if (!C.zf) goto L_10839135;
  /* 108390ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 108390f1 push 0x1085d118 */
  push32((uint32_t)(0x1085d118u));
  /* 108390f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 108390f8 mov ecx, dword ptr [0x1085fc80] */
  ECX = (r32((uint32_t)(0x1085fc80)));
  /* 108390fe push ecx */
  push32((uint32_t)(ECX));
  /* 108390ff call 0x10835de0 */
  push32(0x10839104u); f_10835de0();
  /* 10839104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839107 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083910a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1083910d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839110 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839114 je 0x10839133 */
  if (C.zf) goto L_10839133;
  /* 10839116 mov ecx, dword ptr [0x1085fc80] */
  ECX = (r32((uint32_t)(0x1085fc80)));
  /* 1083911c push ecx */
  push32((uint32_t)(ECX));
  /* 1083911d push 0x1085fc00 */
  push32((uint32_t)(0x1085fc00u));
  /* 10839122 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839125 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10839128 push eax */
  push32((uint32_t)(EAX));
  /* 10839129 call 0x1083c6c0 */
  push32(0x1083912eu); f_1083c6c0();
  /* 1083912e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839131 jmp 0x10839135 */
  goto L_10839135;
L_10839133:;
  /* 10839133 jmp 0x10839198 */
  goto L_10839198;
L_10839135:;
  /* 10839135 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839138 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1083913b push edx */
  push32((uint32_t)(EDX));
  /* 1083913c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083913f push eax */
  push32((uint32_t)(EAX));
  /* 10839140 call 0x108394c0 */
  push32(0x10839145u); f_108394c0();
  /* 10839145 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839148 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1083914b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083914f jne 0x10839153 */
  if (!C.zf) goto L_10839153;
  /* 10839151 jmp 0x10839198 */
  goto L_10839198;
L_10839153:;
  /* 10839153 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839156 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10839159 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1083915c:;
  /* 1083915c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083915f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10839162 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839165 jne 0x10839193 */
  if (!C.zf) goto L_10839193;
  /* 10839167 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083916a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1083916d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10839170 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839173 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839176 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10839179 mov edx, dword ptr [0x1085fc84] */
  EDX = (r32((uint32_t)(0x1085fc84)));
  /* 1083917f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10839182 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839185 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10839188 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083918a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083918d jb 0x10839191 */
  if (C.cf) goto L_10839191;
  /* 1083918f jmp 0x10839193 */
  goto L_10839193;
L_10839191:;
  /* 10839191 jmp 0x1083915c */
  goto L_1083915c;
L_10839193:;
  /* 10839193 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839196 jmp 0x108391a6 */
  goto L_108391a6;
L_10839198:;
  /* 10839198 call 0x1083dcb0 */
  push32(0x1083919du); f_1083dcb0();
  /* 1083919d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 108391a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_108391a6:;
  /* 108391a6 pop esi */
  ESI = (pop32());
  /* 108391a7 mov esp, ebp */
  ESP = (EBP);
  /* 108391a9 pop ebp */
  EBP = (pop32());
  /* 108391aa ret  */
  ESPCHK(0x10838fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091e0 @ 0x108391e0 (146 bytes, 45 insns) */
void f_108391e0(void) {
  FTRACE(0x108391e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108391e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108391e1 mov ebp, esp */
  EBP = (ESP);
  /* 108391e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108391e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 108391e8 call 0x108397e0 */
  push32(0x108391edu); f_108397e0();
  /* 108391ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108391f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108391f4 jne 0x1083920e */
  if (!C.zf) goto L_1083920e;
  /* 108391f6 mov dword ptr [ebp - 8], 0x108616f0 */
  w32((uint32_t)(EBP + -0x8), (0x108616f0u));
  /* 108391fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839200 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10839202 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10839205 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1083920c jmp 0x10839224 */
  goto L_10839224;
L_1083920e:;
  /* 1083920e mov dword ptr [ebp - 8], 0x108616f4 */
  w32((uint32_t)(EBP + -0x8), (0x108616f4u));
  /* 10839215 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839218 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1083921a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1083921d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10839224:;
  /* 10839224 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839228 jne 0x10839238 */
  if (!C.zf) goto L_10839238;
  /* 1083922a push 1 */
  push32((uint32_t)(0x1u));
  /* 1083922c call 0x10839880 */
  push32(0x10839231u); f_10839880();
  /* 10839231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839236 jmp 0x1083926c */
  goto L_1083926c;
L_10839238:;
  /* 10839238 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083923c je 0x1083925d */
  if (C.zf) goto L_1083925d;
  /* 1083923e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839241 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10839247 push 1 */
  push32((uint32_t)(0x1u));
  /* 10839249 call 0x10839880 */
  push32(0x1083924eu); f_10839880();
  /* 1083924e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839251 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839254 push edx */
  push32((uint32_t)(EDX));
  /* 10839255 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10839258u);
  /* 10839258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083925b jmp 0x10839267 */
  goto L_10839267;
L_1083925d:;
  /* 1083925d push 1 */
  push32((uint32_t)(0x1u));
  /* 1083925f call 0x10839880 */
  push32(0x10839264u); f_10839880();
  /* 10839264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839267:;
  /* 10839267 mov eax, 1 */
  EAX = (0x1u);
L_1083926c:;
  /* 1083926c mov esp, ebp */
  ESP = (EBP);
  /* 1083926e pop ebp */
  EBP = (pop32());
  /* 1083926f ret 4 */
  ESPCHK(0x108391e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10009280 @ 0x10839280 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10839280(void) {
  FTRACE(0x10839280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839280 push ebp */
  push32((uint32_t)(EBP));
  /* 10839281 mov ebp, esp */
  EBP = (ESP);
  /* 10839283 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839286 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1083928d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839290 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10839293 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10839296 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839299 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1083929c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108392a0 ja 0x1083934e */
  if ((!C.cf&&!C.zf)) goto L_1083934e;
  /* 108392a6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 108392a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108392ab mov dl, byte ptr [eax + 0x108394a2] */
  DL = (r8((uint32_t)(EAX + 0x108394a2)));
  /* 108392b1 jmp dword ptr [edx*4 + 0x1083948a] */
  switch (EDX) {
    case 0: goto L_108392b8;
    case 1: goto L_10839323;
    case 2: goto L_10839309;
    case 3: goto L_108392d5;
    case 4: goto L_108392ef;
    case 5: goto L_1083934e;
    default: x86_unimpl("switch@0x108392b1 out of table"); return;
  }
L_108392b8:;
  /* 108392b8 mov dword ptr [ebp - 0x18], 0x108616f0 */
  w32((uint32_t)(EBP + -0x18), (0x108616f0u));
  /* 108392bf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108392c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108392c4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108392c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108392ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108392cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108392d0 jmp 0x10839356 */
  goto L_10839356;
L_108392d5:;
  /* 108392d5 mov dword ptr [ebp - 0x18], 0x108616f4 */
  w32((uint32_t)(EBP + -0x18), (0x108616f4u));
  /* 108392dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108392df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108392e1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108392e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 108392e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108392ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 108392ed jmp 0x10839356 */
  goto L_10839356;
L_108392ef:;
  /* 108392ef mov dword ptr [ebp - 0x18], 0x108616f8 */
  w32((uint32_t)(EBP + -0x18), (0x108616f8u));
  /* 108392f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 108392f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 108392fb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 108392fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839301 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839304 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10839307 jmp 0x10839356 */
  goto L_10839356;
L_10839309:;
  /* 10839309 mov dword ptr [ebp - 0x18], 0x108616fc */
  w32((uint32_t)(EBP + -0x18), (0x108616fcu));
  /* 10839310 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10839313 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10839315 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10839318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1083931b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083931e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10839321 jmp 0x10839356 */
  goto L_10839356;
L_10839323:;
  /* 10839323 call 0x10835820 */
  push32(0x10839328u); f_10835820();
  /* 10839328 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083932b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083932e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10839331 push edx */
  push32((uint32_t)(EDX));
  /* 10839332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839335 push eax */
  push32((uint32_t)(EAX));
  /* 10839336 call 0x108394c0 */
  push32(0x1083933bu); f_108394c0();
  /* 1083933b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083933e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839341 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10839344 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10839347 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10839349 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1083934c jmp 0x10839356 */
  goto L_10839356;
L_1083934e:;
  /* 1083934e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10839351 jmp 0x10839486 */
  goto L_10839486;
L_10839356:;
  /* 10839356 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083935a je 0x10839366 */
  if (C.zf) goto L_10839366;
  /* 1083935c push 1 */
  push32((uint32_t)(0x1u));
  /* 1083935e call 0x108397e0 */
  push32(0x10839363u); f_108397e0();
  /* 10839363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839366:;
  /* 10839366 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083936a jne 0x10839383 */
  if (!C.zf) goto L_10839383;
  /* 1083936c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839370 je 0x1083937c */
  if (C.zf) goto L_1083937c;
  /* 10839372 push 1 */
  push32((uint32_t)(0x1u));
  /* 10839374 call 0x10839880 */
  push32(0x10839379u); f_10839880();
  /* 10839379 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083937c:;
  /* 1083937c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1083937e jmp 0x10839486 */
  goto L_10839486;
L_10839383:;
  /* 10839383 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839387 jne 0x108393a0 */
  if (!C.zf) goto L_108393a0;
  /* 10839389 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083938d je 0x10839399 */
  if (C.zf) goto L_10839399;
  /* 1083938f push 1 */
  push32((uint32_t)(0x1u));
  /* 10839391 call 0x10839880 */
  push32(0x10839396u); f_10839880();
  /* 10839396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839399:;
  /* 10839399 push 3 */
  push32((uint32_t)(0x3u));
  /* 1083939b call 0x108355a0 */
  push32(0x108393a0u); f_108355a0();
L_108393a0:;
  /* 108393a0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108393a4 je 0x108393b2 */
  if (C.zf) goto L_108393b2;
  /* 108393a6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108393aa je 0x108393b2 */
  if (C.zf) goto L_108393b2;
  /* 108393ac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108393b0 jne 0x108393de */
  if (!C.zf) goto L_108393de;
L_108393b2:;
  /* 108393b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108393b5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 108393b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 108393bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108393be mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 108393c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108393c9 jne 0x108393de */
  if (!C.zf) goto L_108393de;
  /* 108393cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108393ce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 108393d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 108393d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 108393d7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_108393de:;
  /* 108393de cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108393e2 jne 0x10839420 */
  if (!C.zf) goto L_10839420;
  /* 108393e4 mov eax, dword ptr [0x1085fc78] */
  EAX = (r32((uint32_t)(0x1085fc78)));
  /* 108393e9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108393ec jmp 0x108393f7 */
  goto L_108393f7;
L_108393ee:;
  /* 108393ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108393f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 108393f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_108393f7:;
  /* 108393f7 mov edx, dword ptr [0x1085fc78] */
  EDX = (r32((uint32_t)(0x1085fc78)));
  /* 108393fd add edx, dword ptr [0x1085fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1085fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839403 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839406 jge 0x1083941e */
  if ((C.sf==C.of)) goto L_1083941e;
  /* 10839408 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083940b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1083940e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839411 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10839414 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1083941c jmp 0x108393ee */
  goto L_108393ee;
L_1083941e:;
  /* 1083941e jmp 0x10839429 */
  goto L_10839429;
L_10839420:;
  /* 10839420 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10839423 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10839429:;
  /* 10839429 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083942d je 0x10839439 */
  if (C.zf) goto L_10839439;
  /* 1083942f push 1 */
  push32((uint32_t)(0x1u));
  /* 10839431 call 0x10839880 */
  push32(0x10839436u); f_10839880();
  /* 10839436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839439:;
  /* 10839439 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083943d jne 0x10839450 */
  if (!C.zf) goto L_10839450;
  /* 1083943f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839442 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10839445 push edx */
  push32((uint32_t)(EDX));
  /* 10839446 push 8 */
  push32((uint32_t)(0x8u));
  /* 10839448 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x1083944bu);
  /* 1083944b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1083944e jmp 0x1083945a */
  goto L_1083945a;
L_10839450:;
  /* 10839450 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839453 push eax */
  push32((uint32_t)(EAX));
  /* 10839454 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10839457u);
  /* 10839457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083945a:;
  /* 1083945a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083945e je 0x1083946c */
  if (C.zf) goto L_1083946c;
  /* 10839460 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839464 je 0x1083946c */
  if (C.zf) goto L_1083946c;
  /* 10839466 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083946a jne 0x10839484 */
  if (!C.zf) goto L_10839484;
L_1083946c:;
  /* 1083946c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083946f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10839472 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10839475 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839479 jne 0x10839484 */
  if (!C.zf) goto L_10839484;
  /* 1083947b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083947e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839481 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10839484:;
  /* 10839484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10839486:;
  /* 10839486 mov esp, ebp */
  ESP = (EBP);
  /* 10839488 pop ebp */
  EBP = (pop32());
  /* 10839489 ret  */
  ESPCHK(0x10839280u, _esp0);
  ESP += 4; return;
}

/* FUN_100094c0 @ 0x108394c0 (91 bytes, 35 insns) */
void f_108394c0(void) {
  FTRACE(0x108394c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108394c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108394c1 mov ebp, esp */
  EBP = (ESP);
  /* 108394c3 push ecx */
  push32((uint32_t)(ECX));
  /* 108394c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 108394c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108394ca:;
  /* 108394ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108394cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 108394d0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108394d3 je 0x108394f3 */
  if (C.zf) goto L_108394f3;
  /* 108394d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108394d8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 108394db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 108394de mov ecx, dword ptr [0x1085fc84] */
  ECX = (r32((uint32_t)(0x1085fc84)));
  /* 108394e4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108394e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108394ea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 108394ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108394ef jae 0x108394f3 */
  if (!C.cf) goto L_108394f3;
  /* 108394f1 jmp 0x108394ca */
  goto L_108394ca;
L_108394f3:;
  /* 108394f3 mov eax, dword ptr [0x1085fc84] */
  EAX = (r32((uint32_t)(0x1085fc84)));
  /* 108394f8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 108394fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108394fe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839500 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839503 jae 0x10839515 */
  if (!C.cf) goto L_10839515;
  /* 10839505 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839508 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1083950b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083950e jne 0x10839515 */
  if (!C.zf) goto L_10839515;
  /* 10839510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839513 jmp 0x10839517 */
  goto L_10839517;
L_10839515:;
  /* 10839515 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10839517:;
  /* 10839517 mov esp, ebp */
  ESP = (EBP);
  /* 10839519 pop ebp */
  EBP = (pop32());
  /* 1083951a ret  */
  ESPCHK(0x108394c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x10839520 (13 bytes, 6 insns) */
void f_10839520(void) {
  FTRACE(0x10839520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839520 push ebp */
  push32((uint32_t)(EBP));
  /* 10839521 mov ebp, esp */
  EBP = (ESP);
  /* 10839523 call 0x10835820 */
  push32(0x10839528u); f_10835820();
  /* 10839528 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083952b pop ebp */
  EBP = (pop32());
  /* 1083952c ret  */
  ESPCHK(0x10839520u, _esp0);
  ESP += 4; return;
}

/* FUN_10009530 @ 0x10839530 (13 bytes, 6 insns) */
void f_10839530(void) {
  FTRACE(0x10839530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839530 push ebp */
  push32((uint32_t)(EBP));
  /* 10839531 mov ebp, esp */
  EBP = (ESP);
  /* 10839533 call 0x10835820 */
  push32(0x10839538u); f_10835820();
  /* 10839538 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083953b pop ebp */
  EBP = (pop32());
  /* 1083953c ret  */
  ESPCHK(0x10839530u, _esp0);
  ESP += 4; return;
}

/* FUN_10009540 @ 0x10839540 (187 bytes, 54 insns) */
void f_10839540(void) {
  FTRACE(0x10839540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839540 push ebp */
  push32((uint32_t)(EBP));
  /* 10839541 mov ebp, esp */
  EBP = (ESP);
  /* 10839543 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839546 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083954d cmp dword ptr [0x10861704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839554 jne 0x108395b3 */
  if (!C.zf) goto L_108395b3;
  /* 10839556 push 0x1085c544 */
  push32((uint32_t)(0x1085c544u));
  /* 1083955b call dword ptr [0x108643a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a8))), 0x10839561u);
  /* 10839561 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10839564 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839568 je 0x10839587 */
  if (C.zf) goto L_10839587;
  /* 1083956a push 0x1085d148 */
  push32((uint32_t)(0x1085d148u));
  /* 1083956f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839572 push eax */
  push32((uint32_t)(EAX));
  /* 10839573 call dword ptr [0x108643a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a4))), 0x10839579u);
  /* 10839579 mov dword ptr [0x10861704], eax */
  w32((uint32_t)(0x10861704), (EAX));
  /* 1083957e cmp dword ptr [0x10861704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839585 jne 0x1083958b */
  if (!C.zf) goto L_1083958b;
L_10839587:;
  /* 10839587 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839589 jmp 0x108395f7 */
  goto L_108395f7;
L_1083958b:;
  /* 1083958b push 0x1085d138 */
  push32((uint32_t)(0x1085d138u));
  /* 10839590 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839593 push ecx */
  push32((uint32_t)(ECX));
  /* 10839594 call dword ptr [0x108643a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a4))), 0x1083959au);
  /* 1083959a mov dword ptr [0x10861708], eax */
  w32((uint32_t)(0x10861708), (EAX));
  /* 1083959f push 0x1085d124 */
  push32((uint32_t)(0x1085d124u));
  /* 108395a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108395a7 push edx */
  push32((uint32_t)(EDX));
  /* 108395a8 call dword ptr [0x108643a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643a4))), 0x108395aeu);
  /* 108395ae mov dword ptr [0x1086170c], eax */
  w32((uint32_t)(0x1086170c), (EAX));
L_108395b3:;
  /* 108395b3 cmp dword ptr [0x10861708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108395ba je 0x108395c5 */
  if (C.zf) goto L_108395c5;
  /* 108395bc call dword ptr [0x10861708] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861708))), 0x108395c2u);
  /* 108395c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108395c5:;
  /* 108395c5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108395c9 je 0x108395e1 */
  if (C.zf) goto L_108395e1;
  /* 108395cb cmp dword ptr [0x1086170c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1086170c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108395d2 je 0x108395e1 */
  if (C.zf) goto L_108395e1;
  /* 108395d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 108395d7 push eax */
  push32((uint32_t)(EAX));
  /* 108395d8 call dword ptr [0x1086170c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086170c))), 0x108395deu);
  /* 108395de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_108395e1:;
  /* 108395e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 108395e4 push ecx */
  push32((uint32_t)(ECX));
  /* 108395e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 108395e8 push edx */
  push32((uint32_t)(EDX));
  /* 108395e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108395ec push eax */
  push32((uint32_t)(EAX));
  /* 108395ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 108395f0 push ecx */
  push32((uint32_t)(ECX));
  /* 108395f1 call dword ptr [0x10861704] */
  call_ind((uint32_t)(r32((uint32_t)(0x10861704))), 0x108395f7u);
L_108395f7:;
  /* 108395f7 mov esp, ebp */
  ESP = (EBP);
  /* 108395f9 pop ebp */
  EBP = (pop32());
  /* 108395fa ret  */
  ESPCHK(0x10839540u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10839600 (254 bytes, 109 insns) */
void f_10839600(void) {
  FTRACE(0x10839600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839600 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10839604 push edi */
  push32((uint32_t)(EDI));
  /* 10839605 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10839607 je 0x10839683 */
  if (C.zf) goto L_10839683;
  /* 10839609 push esi */
  push32((uint32_t)(ESI));
  /* 1083960a push ebx */
  push32((uint32_t)(EBX));
  /* 1083960b mov ebx, ecx */
  EBX = (ECX);
  /* 1083960d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10839611 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10839617 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1083961b jne 0x10839624 */
  if (!C.zf) goto L_10839624;
  /* 1083961d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10839620 jne 0x10839691 */
  if (!C.zf) goto L_10839691;
  /* 10839622 jmp 0x10839645 */
  goto L_10839645;
L_10839624:;
  /* 10839624 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10839626 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10839627 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10839629 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1083962a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1083962b je 0x10839652 */
  if (C.zf) goto L_10839652;
  /* 1083962d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1083962f je 0x1083965a */
  if (C.zf) goto L_1083965a;
  /* 10839631 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10839637 jne 0x10839624 */
  if (!C.zf) goto L_10839624;
  /* 10839639 mov ebx, ecx */
  EBX = (ECX);
  /* 1083963b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1083963e jne 0x10839691 */
  if (!C.zf) goto L_10839691;
L_10839640:;
  /* 10839640 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10839643 je 0x10839652 */
  if (C.zf) goto L_10839652;
L_10839645:;
  /* 10839645 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10839647 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10839648 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083964a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1083964b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1083964d je 0x1083967e */
  if (C.zf) goto L_1083967e;
  /* 1083964f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10839650 jne 0x10839645 */
  if (!C.zf) goto L_10839645;
L_10839652:;
  /* 10839652 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10839656 pop ebx */
  EBX = (pop32());
  /* 10839657 pop esi */
  ESI = (pop32());
  /* 10839658 pop edi */
  EDI = (pop32());
  /* 10839659 ret  */
  ESPCHK(0x10839600u, _esp0);
  ESP += 4; return;
L_1083965a:;
  /* 1083965a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10839660 je 0x10839674 */
  if (C.zf) goto L_10839674;
L_10839662:;
  /* 10839662 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10839664 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10839665 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10839666 je 0x108396f6 */
  if (C.zf) goto L_108396f6;
  /* 1083966c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10839672 jne 0x10839662 */
  if (!C.zf) goto L_10839662;
L_10839674:;
  /* 10839674 mov ebx, ecx */
  EBX = (ECX);
  /* 10839676 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10839679 jne 0x108396e7 */
  if (!C.zf) goto L_108396e7;
L_1083967b:;
  /* 1083967b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1083967d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1083967e:;
  /* 1083967e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1083967f jne 0x1083967b */
  if (!C.zf) goto L_1083967b;
  /* 10839681 pop ebx */
  EBX = (pop32());
  /* 10839682 pop esi */
  ESI = (pop32());
L_10839683:;
  /* 10839683 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10839687 pop edi */
  EDI = (pop32());
  /* 10839688 ret  */
  ESPCHK(0x10839600u, _esp0);
  ESP += 4; return;
L_10839689:;
  /* 10839689 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1083968b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1083968e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1083968f je 0x10839640 */
  if (C.zf) goto L_10839640;
L_10839691:;
  /* 10839691 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10839696 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10839698 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1083969a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083969d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1083969f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 108396a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 108396a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 108396a9 je 0x10839689 */
  if (C.zf) goto L_10839689;
  /* 108396ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 108396ad je 0x108396db */
  if (C.zf) goto L_108396db;
  /* 108396af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 108396b1 je 0x108396d1 */
  if (C.zf) goto L_108396d1;
  /* 108396b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 108396b9 je 0x108396c7 */
  if (C.zf) goto L_108396c7;
  /* 108396bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 108396c1 jne 0x10839689 */
  if (!C.zf) goto L_10839689;
  /* 108396c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108396c5 jmp 0x108396df */
  goto L_108396df;
L_108396c7:;
  /* 108396c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 108396cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108396cf jmp 0x108396df */
  goto L_108396df;
L_108396d1:;
  /* 108396d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 108396d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 108396d9 jmp 0x108396df */
  goto L_108396df;
L_108396db:;
  /* 108396db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 108396dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_108396df:;
  /* 108396df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108396e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 108396e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108396e5 je 0x108396f1 */
  if (C.zf) goto L_108396f1;
L_108396e7:;
  /* 108396e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_108396e9:;
  /* 108396e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 108396eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 108396ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 108396ef jne 0x108396e9 */
  if (!C.zf) goto L_108396e9;
L_108396f1:;
  /* 108396f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 108396f4 jne 0x1083967b */
  if (!C.zf) goto L_1083967b;
L_108396f6:;
  /* 108396f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 108396fa pop ebx */
  EBX = (pop32());
  /* 108396fb pop esi */
  ESI = (pop32());
  /* 108396fc pop edi */
  EDI = (pop32());
  /* 108396fd ret  */
  ESPCHK(0x10839600u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x10839700 (55 bytes, 16 insns) */
void f_10839700(void) {
  FTRACE(0x10839700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839700 push ebp */
  push32((uint32_t)(EBP));
  /* 10839701 mov ebp, esp */
  EBP = (ESP);
  /* 10839703 mov eax, dword ptr [0x1085fb84] */
  EAX = (r32((uint32_t)(0x1085fb84)));
  /* 10839708 push eax */
  push32((uint32_t)(EAX));
  /* 10839709 call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x1083970fu);
  /* 1083970f mov ecx, dword ptr [0x1085fb74] */
  ECX = (r32((uint32_t)(0x1085fb74)));
  /* 10839715 push ecx */
  push32((uint32_t)(ECX));
  /* 10839716 call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x1083971cu);
  /* 1083971c mov edx, dword ptr [0x1085fb64] */
  EDX = (r32((uint32_t)(0x1085fb64)));
  /* 10839722 push edx */
  push32((uint32_t)(EDX));
  /* 10839723 call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x10839729u);
  /* 10839729 mov eax, dword ptr [0x1085fb44] */
  EAX = (r32((uint32_t)(0x1085fb44)));
  /* 1083972e push eax */
  push32((uint32_t)(EAX));
  /* 1083972f call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x10839735u);
  /* 10839735 pop ebp */
  EBP = (pop32());
  /* 10839736 ret  */
  ESPCHK(0x10839700u, _esp0);
  ESP += 4; return;
}

/* FUN_10009740 @ 0x10839740 (159 bytes, 47 insns) */
void f_10839740(void) {
  FTRACE(0x10839740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839740 push ebp */
  push32((uint32_t)(EBP));
  /* 10839741 mov ebp, esp */
  EBP = (ESP);
  /* 10839743 push ecx */
  push32((uint32_t)(ECX));
  /* 10839744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1083974b jmp 0x10839756 */
  goto L_10839756;
L_1083974d:;
  /* 1083974d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839753 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10839756:;
  /* 10839756 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083975a jge 0x108397a9 */
  if ((C.sf==C.of)) goto L_108397a9;
  /* 1083975c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083975f cmp dword ptr [ecx*4 + 0x1085fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1085fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839767 je 0x108397a7 */
  if (C.zf) goto L_108397a7;
  /* 10839769 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083976d je 0x108397a7 */
  if (C.zf) goto L_108397a7;
  /* 1083976f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839773 je 0x108397a7 */
  if (C.zf) goto L_108397a7;
  /* 10839775 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839779 je 0x108397a7 */
  if (C.zf) goto L_108397a7;
  /* 1083977b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083977f je 0x108397a7 */
  if (C.zf) goto L_108397a7;
  /* 10839781 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839784 mov eax, dword ptr [edx*4 + 0x1085fb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1085fb40)));
  /* 1083978b push eax */
  push32((uint32_t)(EAX));
  /* 1083978c call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x10839792u);
  /* 10839792 push 2 */
  push32((uint32_t)(0x2u));
  /* 10839794 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839797 mov edx, dword ptr [ecx*4 + 0x1085fb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1085fb40)));
  /* 1083979e push edx */
  push32((uint32_t)(EDX));
  /* 1083979f call 0x10836870 */
  push32(0x108397a4u); f_10836870();
  /* 108397a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_108397a7:;
  /* 108397a7 jmp 0x1083974d */
  goto L_1083974d;
L_108397a9:;
  /* 108397a9 mov eax, dword ptr [0x1085fb64] */
  EAX = (r32((uint32_t)(0x1085fb64)));
  /* 108397ae push eax */
  push32((uint32_t)(EAX));
  /* 108397af call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x108397b5u);
  /* 108397b5 mov ecx, dword ptr [0x1085fb74] */
  ECX = (r32((uint32_t)(0x1085fb74)));
  /* 108397bb push ecx */
  push32((uint32_t)(ECX));
  /* 108397bc call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x108397c2u);
  /* 108397c2 mov edx, dword ptr [0x1085fb84] */
  EDX = (r32((uint32_t)(0x1085fb84)));
  /* 108397c8 push edx */
  push32((uint32_t)(EDX));
  /* 108397c9 call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x108397cfu);
  /* 108397cf mov eax, dword ptr [0x1085fb44] */
  EAX = (r32((uint32_t)(0x1085fb44)));
  /* 108397d4 push eax */
  push32((uint32_t)(EAX));
  /* 108397d5 call dword ptr [0x108643b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b8))), 0x108397dbu);
  /* 108397db mov esp, ebp */
  ESP = (EBP);
  /* 108397dd pop ebp */
  EBP = (pop32());
  /* 108397de ret  */
  ESPCHK(0x10839740u, _esp0);
  ESP += 4; return;
}

/* FUN_100097e0 @ 0x108397e0 (151 bytes, 46 insns) */
void f_108397e0(void) {
  FTRACE(0x108397e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108397e0 push ebp */
  push32((uint32_t)(EBP));
  /* 108397e1 mov ebp, esp */
  EBP = (ESP);
  /* 108397e3 push ecx */
  push32((uint32_t)(ECX));
  /* 108397e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108397e7 cmp dword ptr [eax*4 + 0x1085fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1085fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108397ef jne 0x10839862 */
  if (!C.zf) goto L_10839862;
  /* 108397f1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 108397f6 push 0x1085d154 */
  push32((uint32_t)(0x1085d154u));
  /* 108397fb push 2 */
  push32((uint32_t)(0x2u));
  /* 108397fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 108397ff call 0x10835de0 */
  push32(0x10839804u); f_10835de0();
  /* 10839804 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839807 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1083980a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083980e jne 0x1083981a */
  if (!C.zf) goto L_1083981a;
  /* 10839810 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10839812 call 0x10834d50 */
  push32(0x10839817u); f_10834d50();
  /* 10839817 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1083981a:;
  /* 1083981a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083981c call 0x108397e0 */
  push32(0x10839821u); f_108397e0();
  /* 10839821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839824 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839827 cmp dword ptr [ecx*4 + 0x1085fb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1085fb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083982f jne 0x1083984a */
  if (!C.zf) goto L_1083984a;
  /* 10839831 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839834 push edx */
  push32((uint32_t)(EDX));
  /* 10839835 call dword ptr [0x1086435c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086435c))), 0x1083983bu);
  /* 1083983b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1083983e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839841 mov dword ptr [eax*4 + 0x1085fb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1085fb40), (ECX));
  /* 10839848 jmp 0x10839858 */
  goto L_10839858;
L_1083984a:;
  /* 1083984a push 2 */
  push32((uint32_t)(0x2u));
  /* 1083984c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1083984f push edx */
  push32((uint32_t)(EDX));
  /* 10839850 call 0x10836870 */
  push32(0x10839855u); f_10836870();
  /* 10839855 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839858:;
  /* 10839858 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1083985a call 0x10839880 */
  push32(0x1083985fu); f_10839880();
  /* 1083985f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839862:;
  /* 10839862 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839865 mov ecx, dword ptr [eax*4 + 0x1085fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1085fb40)));
  /* 1083986c push ecx */
  push32((uint32_t)(ECX));
  /* 1083986d call dword ptr [0x1086434c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086434c))), 0x10839873u);
  /* 10839873 mov esp, ebp */
  ESP = (EBP);
  /* 10839875 pop ebp */
  EBP = (pop32());
  /* 10839876 ret  */
  ESPCHK(0x108397e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009880 @ 0x10839880 (22 bytes, 8 insns) */
void f_10839880(void) {
  FTRACE(0x10839880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839880 push ebp */
  push32((uint32_t)(EBP));
  /* 10839881 mov ebp, esp */
  EBP = (ESP);
  /* 10839883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839886 mov ecx, dword ptr [eax*4 + 0x1085fb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1085fb40)));
  /* 1083988d push ecx */
  push32((uint32_t)(ECX));
  /* 1083988e call dword ptr [0x10864348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864348))), 0x10839894u);
  /* 10839894 pop ebp */
  EBP = (pop32());
  /* 10839895 ret  */
  ESPCHK(0x10839880u, _esp0);
  ESP += 4; return;
}

/* FUN_100098a0 @ 0x108398a0 (26 bytes, 10 insns) */
void f_108398a0(void) {
  FTRACE(0x108398a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108398a0 push ebp */
  push32((uint32_t)(EBP));
  /* 108398a1 mov ebp, esp */
  EBP = (ESP);
  /* 108398a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 108398a6 push eax */
  push32((uint32_t)(EAX));
  /* 108398a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 108398a9 call dword ptr [0x10864350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864350))), 0x108398afu);
  /* 108398af push 0xff */
  push32((uint32_t)(0xffu));
  /* 108398b4 call dword ptr [0x108643b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x108643b4))), 0x108398bau);
  /* 108398ba pop ebp */
  EBP = (pop32());
  /* 108398bb ret  */
  ESPCHK(0x108398a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x108398c0 (446 bytes, 130 insns) */
void f_108398c0(void) {
  FTRACE(0x108398c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 108398c0 push ebp */
  push32((uint32_t)(EBP));
  /* 108398c1 mov ebp, esp */
  EBP = (ESP);
  /* 108398c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 108398c6 call 0x10835820 */
  push32(0x108398cbu); f_10835820();
  /* 108398cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 108398ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108398d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 108398d4 push ecx */
  push32((uint32_t)(ECX));
  /* 108398d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 108398d8 push edx */
  push32((uint32_t)(EDX));
  /* 108398d9 call 0x10839a80 */
  push32(0x108398deu); f_10839a80();
  /* 108398de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 108398e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 108398e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108398e8 je 0x108398f3 */
  if (C.zf) goto L_108398f3;
  /* 108398ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108398ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108398f1 jne 0x10839902 */
  if (!C.zf) goto L_10839902;
L_108398f3:;
  /* 108398f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 108398f6 push ecx */
  push32((uint32_t)(ECX));
  /* 108398f7 call dword ptr [0x10864340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864340))), 0x108398fdu);
  /* 108398fd jmp 0x10839a7a */
  goto L_10839a7a;
L_10839902:;
  /* 10839902 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839905 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839909 jne 0x1083991f */
  if (!C.zf) goto L_1083991f;
  /* 1083990b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083990e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10839915 mov eax, 1 */
  EAX = (0x1u);
  /* 1083991a jmp 0x10839a7a */
  goto L_10839a7a;
L_1083991f:;
  /* 1083991f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839922 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839926 jne 0x10839930 */
  if (!C.zf) goto L_10839930;
  /* 10839928 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1083992b jmp 0x10839a7a */
  goto L_10839a7a;
L_10839930:;
  /* 10839930 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839933 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10839936 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839939 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1083993c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1083993f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10839942 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839945 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839948 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1083994b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083994e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839952 jne 0x10839a57 */
  if (!C.zf) goto L_10839a57;
  /* 10839958 mov eax, dword ptr [0x1085fc78] */
  EAX = (r32((uint32_t)(0x1085fc78)));
  /* 1083995d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10839960 jmp 0x1083996b */
  goto L_1083996b;
L_10839962:;
  /* 10839962 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10839965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839968 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1083996b:;
  /* 1083996b mov edx, dword ptr [0x1085fc78] */
  EDX = (r32((uint32_t)(0x1085fc78)));
  /* 10839971 add edx, dword ptr [0x1085fc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1085fc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839977 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1083997a jge 0x10839992 */
  if ((C.sf==C.of)) goto L_10839992;
  /* 1083997c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1083997f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10839982 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839985 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10839988 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10839990 jmp 0x10839962 */
  goto L_10839962;
L_10839992:;
  /* 10839992 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839995 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10839998 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1083999b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1083999e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108399a4 jne 0x108399b5 */
  if (!C.zf) goto L_108399b5;
  /* 108399a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108399a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 108399b0 jmp 0x10839a3d */
  goto L_10839a3d;
L_108399b5:;
  /* 108399b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108399b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108399be jne 0x108399cc */
  if (!C.zf) goto L_108399cc;
  /* 108399c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 108399c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 108399ca jmp 0x10839a3d */
  goto L_10839a3d;
L_108399cc:;
  /* 108399cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 108399cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108399d5 jne 0x108399e3 */
  if (!C.zf) goto L_108399e3;
  /* 108399d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 108399da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 108399e1 jmp 0x10839a3d */
  goto L_10839a3d;
L_108399e3:;
  /* 108399e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 108399e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 108399ec jne 0x108399fa */
  if (!C.zf) goto L_108399fa;
  /* 108399ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 108399f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 108399f8 jmp 0x10839a3d */
  goto L_10839a3d;
L_108399fa:;
  /* 108399fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 108399fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839a03 jne 0x10839a11 */
  if (!C.zf) goto L_10839a11;
  /* 10839a05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a08 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10839a0f jmp 0x10839a3d */
  goto L_10839a3d;
L_10839a11:;
  /* 10839a11 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839a14 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839a1a jne 0x10839a28 */
  if (!C.zf) goto L_10839a28;
  /* 10839a1c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a1f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10839a26 jmp 0x10839a3d */
  goto L_10839a3d;
L_10839a28:;
  /* 10839a28 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839a2b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839a31 jne 0x10839a3d */
  if (!C.zf) goto L_10839a3d;
  /* 10839a33 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a36 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10839a3d:;
  /* 10839a3d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a40 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10839a43 push edx */
  push32((uint32_t)(EDX));
  /* 10839a44 push 8 */
  push32((uint32_t)(0x8u));
  /* 10839a46 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10839a49u);
  /* 10839a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839a4c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a4f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839a52 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10839a55 jmp 0x10839a6e */
  goto L_10839a6e;
L_10839a57:;
  /* 10839a57 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839a5a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10839a61 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839a64 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10839a67 push ecx */
  push32((uint32_t)(ECX));
  /* 10839a68 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10839a6bu);
  /* 10839a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839a6e:;
  /* 10839a6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839a71 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10839a74 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10839a77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10839a7a:;
  /* 10839a7a mov esp, ebp */
  ESP = (EBP);
  /* 10839a7c pop ebp */
  EBP = (pop32());
  /* 10839a7d ret  */
  ESPCHK(0x108398c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x10839a80 (89 bytes, 35 insns) */
void f_10839a80(void) {
  FTRACE(0x10839a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10839a81 mov ebp, esp */
  EBP = (ESP);
  /* 10839a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10839a84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839a87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10839a8a:;
  /* 10839a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839a8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10839a8f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839a92 je 0x10839ab2 */
  if (C.zf) goto L_10839ab2;
  /* 10839a94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839a97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839a9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839a9d mov ecx, dword ptr [0x1085fc84] */
  ECX = (r32((uint32_t)(0x1085fc84)));
  /* 10839aa3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10839aa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839aa9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839aab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839aae jae 0x10839ab2 */
  if (!C.cf) goto L_10839ab2;
  /* 10839ab0 jmp 0x10839a8a */
  goto L_10839a8a;
L_10839ab2:;
  /* 10839ab2 mov eax, dword ptr [0x1085fc84] */
  EAX = (r32((uint32_t)(0x1085fc84)));
  /* 10839ab7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10839aba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839abd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839abf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839ac2 jae 0x10839ace */
  if (!C.cf) goto L_10839ace;
  /* 10839ac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839ac7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10839ac9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839acc je 0x10839ad2 */
  if (C.zf) goto L_10839ad2;
L_10839ace:;
  /* 10839ace xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839ad0 jmp 0x10839ad5 */
  goto L_10839ad5;
L_10839ad2:;
  /* 10839ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10839ad5:;
  /* 10839ad5 mov esp, ebp */
  ESP = (EBP);
  /* 10839ad7 pop ebp */
  EBP = (pop32());
  /* 10839ad8 ret  */
  ESPCHK(0x10839a80u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10839ae0 (48 bytes, 17 insns) */
void f_10839ae0(void) {
  FTRACE(0x10839ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10839ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10839ae4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839ae6 call 0x108397e0 */
  push32(0x10839aebu); f_108397e0();
  /* 10839aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839aee mov eax, dword ptr [0x10861774] */
  EAX = (r32((uint32_t)(0x10861774)));
  /* 10839af3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839af6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839af9 mov dword ptr [0x10861774], ecx */
  w32((uint32_t)(0x10861774), (ECX));
  /* 10839aff push 9 */
  push32((uint32_t)(0x9u));
  /* 10839b01 call 0x10839880 */
  push32(0x10839b06u); f_10839880();
  /* 10839b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839b09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839b0c mov esp, ebp */
  ESP = (EBP);
  /* 10839b0e pop ebp */
  EBP = (pop32());
  /* 10839b0f ret  */
  ESPCHK(0x10839ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x10839b10 (10 bytes, 5 insns) */
void f_10839b10(void) {
  FTRACE(0x10839b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10839b11 mov ebp, esp */
  EBP = (ESP);
  /* 10839b13 mov eax, dword ptr [0x10861774] */
  EAX = (r32((uint32_t)(0x10861774)));
  /* 10839b18 pop ebp */
  EBP = (pop32());
  /* 10839b19 ret  */
  ESPCHK(0x10839b10u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10839b20 (45 bytes, 19 insns) */
void f_10839b20(void) {
  FTRACE(0x10839b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10839b21 mov ebp, esp */
  EBP = (ESP);
  /* 10839b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10839b24 mov eax, dword ptr [0x10861774] */
  EAX = (r32((uint32_t)(0x10861774)));
  /* 10839b29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839b2c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839b30 je 0x10839b40 */
  if (C.zf) goto L_10839b40;
  /* 10839b32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839b35 push ecx */
  push32((uint32_t)(ECX));
  /* 10839b36 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10839b39u);
  /* 10839b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839b3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839b3e jne 0x10839b44 */
  if (!C.zf) goto L_10839b44;
L_10839b40:;
  /* 10839b40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839b42 jmp 0x10839b49 */
  goto L_10839b49;
L_10839b44:;
  /* 10839b44 mov eax, 1 */
  EAX = (0x1u);
L_10839b49:;
  /* 10839b49 mov esp, ebp */
  ESP = (EBP);
  /* 10839b4b pop ebp */
  EBP = (pop32());
  /* 10839b4c ret  */
  ESPCHK(0x10839b20u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10839b50 (88 bytes, 40 insns) */
void f_10839b50(void) {
  FTRACE(0x10839b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839b50 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10839b54 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10839b58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10839b5a je 0x10839ba3 */
  if (C.zf) goto L_10839ba3;
  /* 10839b5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839b5e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10839b62 push edi */
  push32((uint32_t)(EDI));
  /* 10839b63 mov edi, ecx */
  EDI = (ECX);
  /* 10839b65 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839b68 jb 0x10839b97 */
  if (C.cf) goto L_10839b97;
  /* 10839b6a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10839b6c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10839b6f je 0x10839b79 */
  if (C.zf) goto L_10839b79;
  /* 10839b71 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10839b73:;
  /* 10839b73 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10839b75 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10839b76 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10839b77 jne 0x10839b73 */
  if (!C.zf) goto L_10839b73;
L_10839b79:;
  /* 10839b79 mov ecx, eax */
  ECX = (EAX);
  /* 10839b7b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10839b7e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839b80 mov ecx, eax */
  ECX = (EAX);
  /* 10839b82 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10839b85 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839b87 mov ecx, edx */
  ECX = (EDX);
  /* 10839b89 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10839b8c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10839b8f je 0x10839b97 */
  if (C.zf) goto L_10839b97;
  /* 10839b91 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10839b93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10839b95 je 0x10839b9d */
  if (C.zf) goto L_10839b9d;
L_10839b97:;
  /* 10839b97 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10839b99 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10839b9a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10839b9b jne 0x10839b97 */
  if (!C.zf) goto L_10839b97;
L_10839b9d:;
  /* 10839b9d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10839ba1 pop edi */
  EDI = (pop32());
  /* 10839ba2 ret  */
  ESPCHK(0x10839b50u, _esp0);
  ESP += 4; return;
L_10839ba3:;
  /* 10839ba3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10839ba7 ret  */
  ESPCHK(0x10839b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bb0 @ 0x10839bb0 (23 bytes, 10 insns) */
void f_10839bb0(void) {
  FTRACE(0x10839bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10839bb3 mov eax, dword ptr [0x10861770] */
  EAX = (r32((uint32_t)(0x10861770)));
  /* 10839bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10839bb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839bbc push ecx */
  push32((uint32_t)(ECX));
  /* 10839bbd call 0x10839bd0 */
  push32(0x10839bc2u); f_10839bd0();
  /* 10839bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839bc5 pop ebp */
  EBP = (pop32());
  /* 10839bc6 ret  */
  ESPCHK(0x10839bb0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10839bd0 (87 bytes, 34 insns) */
void f_10839bd0(void) {
  FTRACE(0x10839bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10839bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10839bd4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839bd8 jbe 0x10839bde */
  if ((C.cf||C.zf)) goto L_10839bde;
  /* 10839bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839bdc jmp 0x10839c23 */
  goto L_10839c23;
L_10839bde:;
  /* 10839bde cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839be2 ja 0x10839bf5 */
  if ((!C.cf&&!C.zf)) goto L_10839bf5;
  /* 10839be4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839be7 push eax */
  push32((uint32_t)(EAX));
  /* 10839be8 call 0x10839c30 */
  push32(0x10839bedu); f_10839c30();
  /* 10839bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839bf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839bf3 jmp 0x10839bfc */
  goto L_10839bfc;
L_10839bf5:;
  /* 10839bf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10839bfc:;
  /* 10839bfc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839c00 jne 0x10839c08 */
  if (!C.zf) goto L_10839c08;
  /* 10839c02 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839c06 jne 0x10839c0d */
  if (!C.zf) goto L_10839c0d;
L_10839c08:;
  /* 10839c08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839c0b jmp 0x10839c23 */
  goto L_10839c23;
L_10839c0d:;
  /* 10839c0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839c10 push ecx */
  push32((uint32_t)(ECX));
  /* 10839c11 call 0x10839b20 */
  push32(0x10839c16u); f_10839b20();
  /* 10839c16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839c1b jne 0x10839c21 */
  if (!C.zf) goto L_10839c21;
  /* 10839c1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839c1f jmp 0x10839c23 */
  goto L_10839c23;
L_10839c21:;
  /* 10839c21 jmp 0x10839bde */
  goto L_10839bde;
L_10839c23:;
  /* 10839c23 mov esp, ebp */
  ESP = (EBP);
  /* 10839c25 pop ebp */
  EBP = (pop32());
  /* 10839c26 ret  */
  ESPCHK(0x10839bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c30 @ 0x10839c30 (109 bytes, 37 insns) */
void f_10839c30(void) {
  FTRACE(0x10839c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10839c31 mov ebp, esp */
  EBP = (ESP);
  /* 10839c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10839c34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839c37 cmp eax, dword ptr [0x1085fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1085fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839c3d ja 0x10839c6d */
  if ((!C.cf&&!C.zf)) goto L_10839c6d;
  /* 10839c3f push 9 */
  push32((uint32_t)(0x9u));
  /* 10839c41 call 0x108397e0 */
  push32(0x10839c46u); f_108397e0();
  /* 10839c46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839c49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839c4c push ecx */
  push32((uint32_t)(ECX));
  /* 10839c4d call 0x1083a770 */
  push32(0x10839c52u); f_1083a770();
  /* 10839c52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839c55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839c58 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839c5a call 0x10839880 */
  push32(0x10839c5fu); f_10839880();
  /* 10839c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839c62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839c66 je 0x10839c6d */
  if (C.zf) goto L_10839c6d;
  /* 10839c68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839c6b jmp 0x10839c99 */
  goto L_10839c99;
L_10839c6d:;
  /* 10839c6d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839c71 jne 0x10839c7a */
  if (!C.zf) goto L_10839c7a;
  /* 10839c73 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10839c7a:;
  /* 10839c7a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839c7d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839c80 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10839c83 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10839c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839c89 push eax */
  push32((uint32_t)(EAX));
  /* 10839c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10839c8c mov ecx, dword ptr [0x10862f2c] */
  ECX = (r32((uint32_t)(0x10862f2c)));
  /* 10839c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10839c93 call dword ptr [0x1086433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086433c))), 0x10839c99u);
L_10839c99:;
  /* 10839c99 mov esp, ebp */
  ESP = (EBP);
  /* 10839c9b pop ebp */
  EBP = (pop32());
  /* 10839c9c ret  */
  ESPCHK(0x10839c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ca0 @ 0x10839ca0 (10 bytes, 5 insns) */
void f_10839ca0(void) {
  FTRACE(0x10839ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10839ca3 mov eax, 1 */
  EAX = (0x1u);
  /* 10839ca8 pop ebp */
  EBP = (pop32());
  /* 10839ca9 ret  */
  ESPCHK(0x10839ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x10839cb0 (173 bytes, 59 insns) */
void f_10839cb0(void) {
  FTRACE(0x10839cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10839cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10839cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839cb6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839cba jbe 0x10839cc3 */
  if ((C.cf||C.zf)) goto L_10839cc3;
  /* 10839cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839cbe jmp 0x10839d59 */
  goto L_10839d59;
L_10839cc3:;
  /* 10839cc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839cc5 call 0x108397e0 */
  push32(0x10839ccau); f_108397e0();
  /* 10839cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839cd0 push eax */
  push32((uint32_t)(EAX));
  /* 10839cd1 call 0x1083a0e0 */
  push32(0x10839cd6u); f_1083a0e0();
  /* 10839cd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839cd9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10839cdc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839ce0 je 0x10839d21 */
  if (C.zf) goto L_10839d21;
  /* 10839ce2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10839ce9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839cec cmp ecx, dword ptr [0x1085fc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1085fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839cf2 ja 0x10839d12 */
  if ((!C.cf&&!C.zf)) goto L_10839d12;
  /* 10839cf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839cf7 push edx */
  push32((uint32_t)(EDX));
  /* 10839cf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839cfb push eax */
  push32((uint32_t)(EAX));
  /* 10839cfc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839cff push ecx */
  push32((uint32_t)(ECX));
  /* 10839d00 call 0x1083afb0 */
  push32(0x10839d05u); f_1083afb0();
  /* 10839d05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839d0a je 0x10839d12 */
  if (C.zf) goto L_10839d12;
  /* 10839d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839d0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10839d12:;
  /* 10839d12 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839d14 call 0x10839880 */
  push32(0x10839d19u); f_10839880();
  /* 10839d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839d1f jmp 0x10839d59 */
  goto L_10839d59;
L_10839d21:;
  /* 10839d21 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839d23 call 0x10839880 */
  push32(0x10839d28u); f_10839880();
  /* 10839d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d2b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839d2f jne 0x10839d38 */
  if (!C.zf) goto L_10839d38;
  /* 10839d31 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10839d38:;
  /* 10839d38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839d3b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d3e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10839d40 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10839d43 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839d46 push ecx */
  push32((uint32_t)(ECX));
  /* 10839d47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839d4a push edx */
  push32((uint32_t)(EDX));
  /* 10839d4b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10839d4d mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 10839d52 push eax */
  push32((uint32_t)(EAX));
  /* 10839d53 call dword ptr [0x10864344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864344))), 0x10839d59u);
L_10839d59:;
  /* 10839d59 mov esp, ebp */
  ESP = (EBP);
  /* 10839d5b pop ebp */
  EBP = (pop32());
  /* 10839d5c ret  */
  ESPCHK(0x10839cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x10839d60 (490 bytes, 165 insns) */
void f_10839d60(void) {
  FTRACE(0x10839d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839d60 push ebp */
  push32((uint32_t)(EBP));
  /* 10839d61 mov ebp, esp */
  EBP = (ESP);
  /* 10839d63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839d66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839d6a jne 0x10839d7d */
  if (!C.zf) goto L_10839d7d;
  /* 10839d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839d6f push eax */
  push32((uint32_t)(EAX));
  /* 10839d70 call 0x10839bb0 */
  push32(0x10839d75u); f_10839bb0();
  /* 10839d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d78 jmp 0x10839f46 */
  goto L_10839f46;
L_10839d7d:;
  /* 10839d7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839d81 jne 0x10839d96 */
  if (!C.zf) goto L_10839d96;
  /* 10839d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839d86 push ecx */
  push32((uint32_t)(ECX));
  /* 10839d87 call 0x10839f50 */
  push32(0x10839d8cu); f_10839f50();
  /* 10839d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839d91 jmp 0x10839f46 */
  goto L_10839f46;
L_10839d96:;
  /* 10839d96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10839d9d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839da1 ja 0x10839f19 */
  if ((!C.cf&&!C.zf)) goto L_10839f19;
  /* 10839da7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839da9 call 0x108397e0 */
  push32(0x10839daeu); f_108397e0();
  /* 10839dae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839db1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839db4 push edx */
  push32((uint32_t)(EDX));
  /* 10839db5 call 0x1083a0e0 */
  push32(0x10839dbau); f_1083a0e0();
  /* 10839dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839dbd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10839dc0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839dc4 je 0x10839edc */
  if (C.zf) goto L_10839edc;
  /* 10839dca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839dcd cmp eax, dword ptr [0x1085fc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1085fc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839dd3 ja 0x10839e50 */
  if ((!C.cf&&!C.zf)) goto L_10839e50;
  /* 10839dd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10839dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839ddc push edx */
  push32((uint32_t)(EDX));
  /* 10839ddd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839de0 push eax */
  push32((uint32_t)(EAX));
  /* 10839de1 call 0x1083afb0 */
  push32(0x10839de6u); f_1083afb0();
  /* 10839de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839deb je 0x10839df5 */
  if (C.zf) goto L_10839df5;
  /* 10839ded mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839df0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10839df3 jmp 0x10839e50 */
  goto L_10839e50;
L_10839df5:;
  /* 10839df5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839df8 push edx */
  push32((uint32_t)(EDX));
  /* 10839df9 call 0x1083a770 */
  push32(0x10839dfeu); f_1083a770();
  /* 10839dfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839e01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10839e04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e08 je 0x10839e50 */
  if (C.zf) goto L_10839e50;
  /* 10839e0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839e0d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10839e10 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839e13 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10839e16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839e19 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e1c jae 0x10839e26 */
  if (!C.cf) goto L_10839e26;
  /* 10839e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839e21 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10839e24 jmp 0x10839e2c */
  goto L_10839e2c;
L_10839e26:;
  /* 10839e26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839e29 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10839e2c:;
  /* 10839e2c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10839e2f push edx */
  push32((uint32_t)(EDX));
  /* 10839e30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839e33 push eax */
  push32((uint32_t)(EAX));
  /* 10839e34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10839e38 call 0x1083c6c0 */
  push32(0x10839e3du); f_1083c6c0();
  /* 10839e3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839e40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839e43 push edx */
  push32((uint32_t)(EDX));
  /* 10839e44 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839e47 push eax */
  push32((uint32_t)(EAX));
  /* 10839e48 call 0x1083a1a0 */
  push32(0x10839e4du); f_1083a1a0();
  /* 10839e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839e50:;
  /* 10839e50 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e54 jne 0x10839ed0 */
  if (!C.zf) goto L_10839ed0;
  /* 10839e56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e5a jne 0x10839e63 */
  if (!C.zf) goto L_10839e63;
  /* 10839e5c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10839e63:;
  /* 10839e63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839e66 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839e69 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10839e6c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10839e6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839e72 push edx */
  push32((uint32_t)(EDX));
  /* 10839e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10839e75 mov eax, dword ptr [0x10862f2c] */
  EAX = (r32((uint32_t)(0x10862f2c)));
  /* 10839e7a push eax */
  push32((uint32_t)(EAX));
  /* 10839e7b call dword ptr [0x1086433c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1086433c))), 0x10839e81u);
  /* 10839e81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10839e84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e88 je 0x10839ed0 */
  if (C.zf) goto L_10839ed0;
  /* 10839e8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839e8d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10839e90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10839e93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10839e96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839e99 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839e9c jae 0x10839ea6 */
  if (!C.cf) goto L_10839ea6;
  /* 10839e9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839ea1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10839ea4 jmp 0x10839eac */
  goto L_10839eac;
L_10839ea6:;
  /* 10839ea6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839ea9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10839eac:;
  /* 10839eac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10839eaf push eax */
  push32((uint32_t)(EAX));
  /* 10839eb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10839eb4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10839eb8 call 0x1083c6c0 */
  push32(0x10839ebdu); f_1083c6c0();
  /* 10839ebd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839ec0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839ec3 push eax */
  push32((uint32_t)(EAX));
  /* 10839ec4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10839ec7 push ecx */
  push32((uint32_t)(ECX));
  /* 10839ec8 call 0x1083a1a0 */
  push32(0x10839ecdu); f_1083a1a0();
  /* 10839ecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10839ed0:;
  /* 10839ed0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839ed2 call 0x10839880 */
  push32(0x10839ed7u); f_10839880();
  /* 10839ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839eda jmp 0x10839f19 */
  goto L_10839f19;
L_10839edc:;
  /* 10839edc push 9 */
  push32((uint32_t)(0x9u));
  /* 10839ede call 0x10839880 */
  push32(0x10839ee3u); f_10839880();
  /* 10839ee3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839ee6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839eea jne 0x10839ef3 */
  if (!C.zf) goto L_10839ef3;
  /* 10839eec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10839ef3:;
  /* 10839ef3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839ef6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10839ef9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10839efc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10839eff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839f02 push eax */
  push32((uint32_t)(EAX));
  /* 10839f03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839f06 push ecx */
  push32((uint32_t)(ECX));
  /* 10839f07 push 0 */
  push32((uint32_t)(0x0u));
  /* 10839f09 mov edx, dword ptr [0x10862f2c] */
  EDX = (r32((uint32_t)(0x10862f2c)));
  /* 10839f0f push edx */
  push32((uint32_t)(EDX));
  /* 10839f10 call dword ptr [0x10864344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864344))), 0x10839f16u);
  /* 10839f16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10839f19:;
  /* 10839f19 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839f1d jne 0x10839f28 */
  if (!C.zf) goto L_10839f28;
  /* 10839f1f cmp dword ptr [0x10861770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10861770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839f26 jne 0x10839f2d */
  if (!C.zf) goto L_10839f2d;
L_10839f28:;
  /* 10839f28 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10839f2b jmp 0x10839f46 */
  goto L_10839f46;
L_10839f2d:;
  /* 10839f2d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10839f30 push eax */
  push32((uint32_t)(EAX));
  /* 10839f31 call 0x10839b20 */
  push32(0x10839f36u); f_10839b20();
  /* 10839f36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839f39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10839f3b jne 0x10839f41 */
  if (!C.zf) goto L_10839f41;
  /* 10839f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10839f3f jmp 0x10839f46 */
  goto L_10839f46;
L_10839f41:;
  /* 10839f41 jmp 0x10839d96 */
  goto L_10839d96;
L_10839f46:;
  /* 10839f46 mov esp, ebp */
  ESP = (EBP);
  /* 10839f48 pop ebp */
  EBP = (pop32());
  /* 10839f49 ret  */
  ESPCHK(0x10839d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x10839f50 (104 bytes, 38 insns) */
void f_10839f50(void) {
  FTRACE(0x10839f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10839f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10839f51 mov ebp, esp */
  EBP = (ESP);
  /* 10839f53 push ecx */
  push32((uint32_t)(ECX));
  /* 10839f54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839f58 jne 0x10839f5c */
  if (!C.zf) goto L_10839f5c;
  /* 10839f5a jmp 0x10839fb4 */
  goto L_10839fb4;
L_10839f5c:;
  /* 10839f5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10839f5e call 0x108397e0 */
  push32(0x10839f63u); f_108397e0();
  /* 10839f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839f66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839f69 push eax */
  push32((uint32_t)(EAX));
  /* 10839f6a call 0x1083a0e0 */
  push32(0x10839f6fu); f_1083a0e0();
  /* 10839f6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839f72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10839f75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10839f79 je 0x10839f97 */
  if (C.zf) goto L_10839f97;
  /* 10839f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839f7e push ecx */
  push32((uint32_t)(ECX));
  /* 10839f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10839f82 push edx */
  push32((uint32_t)(EDX));
  /* 10839f83 call 0x1083a1a0 */
  push32(0x10839f88u); f_1083a1a0();
  /* 10839f88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839f8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10839f8d call 0x10839880 */
  push32(0x10839f92u); f_10839880();
  /* 10839f92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839f95 jmp 0x10839fb4 */
  goto L_10839fb4;
L_10839f97:;
  /* 10839f97 push 9 */
  push32((uint32_t)(0x9u));
  /* 10839f99 call 0x10839880 */
  push32(0x10839f9eu); f_10839880();
  /* 10839f9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10839fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10839fa4 push eax */
  push32((uint32_t)(EAX));
  /* 10839fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10839fa7 mov ecx, dword ptr [0x10862f2c] */
  ECX = (r32((uint32_t)(0x10862f2c)));
  /* 10839fad push ecx */
  push32((uint32_t)(ECX));
  /* 10839fae call dword ptr [0x10864368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10864368))), 0x10839fb4u);
L_10839fb4:;
  /* 10839fb4 mov esp, ebp */
  ESP = (EBP);
  /* 10839fb6 pop ebp */
  EBP = (pop32());
  /* 10839fb7 ret  */
  ESPCHK(0x10839f50u, _esp0);
  ESP += 4; return;
}

