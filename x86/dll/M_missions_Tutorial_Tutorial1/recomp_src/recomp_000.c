#include "recomp.h"

/* OnInit @ 0x12391005 (5 bytes, 1 insns) */
void f_12391005(void) {
  FTRACE(0x12391005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12391005 jmp 0x12391090 */
  f_12391090(); return;
}

/* thunk_FUN_10001030 @ 0x1239100a (5 bytes, 1 insns) */
void f_1239100a(void) {
  FTRACE(0x1239100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239100a jmp 0x12391030 */
  f_12391030(); return;
}

/* ProcessScenary @ 0x1239100f (5 bytes, 1 insns) */
void f_1239100f(void) {
  FTRACE(0x1239100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1239100f jmp 0x123914a0 */
  f_123914a0(); return;
}

/* FUN_10001030 @ 0x12391030 (67 bytes, 26 insns) */
void f_12391030(void) {
  FTRACE(0x12391030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12391030 push ebp */
  push32((uint32_t)(EBP));
  /* 12391031 mov ebp, esp */
  EBP = (ESP);
  /* 12391033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12391036 push ebx */
  push32((uint32_t)(EBX));
  /* 12391037 push esi */
  push32((uint32_t)(ESI));
  /* 12391038 push edi */
  push32((uint32_t)(EDI));
  /* 12391039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1239103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12391041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12391046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12391048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391052 je 0x12391056 */
  if (C.zf) goto L_12391056;
  /* 12391054 jmp 0x1239105b */
  goto L_1239105b;
L_12391056:;
  /* 12391056 call 0x12391005 */
  push32(0x1239105bu); f_12391005();
L_1239105b:;
  /* 1239105b mov eax, 1 */
  EAX = (0x1u);
  /* 12391060 pop edi */
  EDI = (pop32());
  /* 12391061 pop esi */
  ESI = (pop32());
  /* 12391062 pop ebx */
  EBX = (pop32());
  /* 12391063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391068 call 0x123935b0 */
  push32(0x1239106du); f_123935b0();
  /* 1239106d mov esp, ebp */
  ESP = (EBP);
  /* 1239106f pop ebp */
  EBP = (pop32());
  /* 12391070 ret 0xc */
  ESPCHK(0x12391030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12391090 (824 bytes, 221 insns) */
void f_12391090(void) {
  FTRACE(0x12391090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12391090 push ebp */
  push32((uint32_t)(EBP));
  /* 12391091 mov ebp, esp */
  EBP = (ESP);
  /* 12391093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12391096 push ebx */
  push32((uint32_t)(EBX));
  /* 12391097 push esi */
  push32((uint32_t)(ESI));
  /* 12391098 push edi */
  push32((uint32_t)(EDI));
  /* 12391099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1239109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123910a8 mov esi, esp */
  ESI = (ESP);
  /* 123910aa push 4 */
  push32((uint32_t)(0x4u));
  /* 123910ac push 0x123c03e8 */
  push32((uint32_t)(0x123c03e8u));
  /* 123910b1 call dword ptr [0x123c343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c343c))), 0x123910b7u);
  /* 123910b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123910ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123910bc call 0x123935b0 */
  push32(0x123910c1u); f_123935b0();
  /* 123910c1 mov esi, esp */
  ESI = (ESP);
  /* 123910c3 push 4 */
  push32((uint32_t)(0x4u));
  /* 123910c5 push 0x123c03e4 */
  push32((uint32_t)(0x123c03e4u));
  /* 123910ca call dword ptr [0x123c343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c343c))), 0x123910d0u);
  /* 123910d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123910d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123910d5 call 0x123935b0 */
  push32(0x123910dau); f_123935b0();
  /* 123910da mov esi, esp */
  ESI = (ESP);
  /* 123910dc push 4 */
  push32((uint32_t)(0x4u));
  /* 123910de push 0x123c03e0 */
  push32((uint32_t)(0x123c03e0u));
  /* 123910e3 call dword ptr [0x123c343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c343c))), 0x123910e9u);
  /* 123910e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123910ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123910ee call 0x123935b0 */
  push32(0x123910f3u); f_123935b0();
  /* 123910f3 mov esi, esp */
  ESI = (ESP);
  /* 123910f5 push 0x123bb160 */
  push32((uint32_t)(0x123bb160u));
  /* 123910fa push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 123910ff call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391105u);
  /* 12391105 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391108 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239110a call 0x123935b0 */
  push32(0x1239110fu); f_123935b0();
  /* 1239110f mov esi, esp */
  ESI = (ESP);
  /* 12391111 push 0x123bb14c */
  push32((uint32_t)(0x123bb14cu));
  /* 12391116 push 0x123c0438 */
  push32((uint32_t)(0x123c0438u));
  /* 1239111b call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391121u);
  /* 12391121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391126 call 0x123935b0 */
  push32(0x1239112bu); f_123935b0();
  /* 1239112b mov esi, esp */
  ESI = (ESP);
  /* 1239112d push 0x123bb138 */
  push32((uint32_t)(0x123bb138u));
  /* 12391132 push 0x123c0448 */
  push32((uint32_t)(0x123c0448u));
  /* 12391137 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x1239113du);
  /* 1239113d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391140 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391142 call 0x123935b0 */
  push32(0x12391147u); f_123935b0();
  /* 12391147 mov esi, esp */
  ESI = (ESP);
  /* 12391149 push 0x123bb128 */
  push32((uint32_t)(0x123bb128u));
  /* 1239114e push 0x123c0458 */
  push32((uint32_t)(0x123c0458u));
  /* 12391153 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391159u);
  /* 12391159 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239115c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239115e call 0x123935b0 */
  push32(0x12391163u); f_123935b0();
  /* 12391163 mov esi, esp */
  ESI = (ESP);
  /* 12391165 push 0x123bb118 */
  push32((uint32_t)(0x123bb118u));
  /* 1239116a push 0x123c0460 */
  push32((uint32_t)(0x123c0460u));
  /* 1239116f call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391175u);
  /* 12391175 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391178 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239117a call 0x123935b0 */
  push32(0x1239117fu); f_123935b0();
  /* 1239117f mov esi, esp */
  ESI = (ESP);
  /* 12391181 push 0x123bb108 */
  push32((uint32_t)(0x123bb108u));
  /* 12391186 push 0x123c0468 */
  push32((uint32_t)(0x123c0468u));
  /* 1239118b call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391191u);
  /* 12391191 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391194 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391196 call 0x123935b0 */
  push32(0x1239119bu); f_123935b0();
  /* 1239119b mov esi, esp */
  ESI = (ESP);
  /* 1239119d push 0x123bb0f8 */
  push32((uint32_t)(0x123bb0f8u));
  /* 123911a2 push 0x123c0470 */
  push32((uint32_t)(0x123c0470u));
  /* 123911a7 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123911adu);
  /* 123911ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123911b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123911b2 call 0x123935b0 */
  push32(0x123911b7u); f_123935b0();
  /* 123911b7 mov esi, esp */
  ESI = (ESP);
  /* 123911b9 push 0x123bb0e8 */
  push32((uint32_t)(0x123bb0e8u));
  /* 123911be push 0x123c0478 */
  push32((uint32_t)(0x123c0478u));
  /* 123911c3 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123911c9u);
  /* 123911c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123911cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123911ce call 0x123935b0 */
  push32(0x123911d3u); f_123935b0();
  /* 123911d3 mov esi, esp */
  ESI = (ESP);
  /* 123911d5 push 0x123bb0d4 */
  push32((uint32_t)(0x123bb0d4u));
  /* 123911da push 0x123c0488 */
  push32((uint32_t)(0x123c0488u));
  /* 123911df call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123911e5u);
  /* 123911e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123911e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123911ea call 0x123935b0 */
  push32(0x123911efu); f_123935b0();
  /* 123911ef mov esi, esp */
  ESI = (ESP);
  /* 123911f1 push 0x123bb0bc */
  push32((uint32_t)(0x123bb0bcu));
  /* 123911f6 push 0x123c03f0 */
  push32((uint32_t)(0x123c03f0u));
  /* 123911fb call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391201u);
  /* 12391201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391204 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391206 call 0x123935b0 */
  push32(0x1239120bu); f_123935b0();
  /* 1239120b mov esi, esp */
  ESI = (ESP);
  /* 1239120d push 0x123bb0a4 */
  push32((uint32_t)(0x123bb0a4u));
  /* 12391212 push 0x123c03f8 */
  push32((uint32_t)(0x123c03f8u));
  /* 12391217 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x1239121du);
  /* 1239121d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391220 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391222 call 0x123935b0 */
  push32(0x12391227u); f_123935b0();
  /* 12391227 mov esi, esp */
  ESI = (ESP);
  /* 12391229 push 0x123bb094 */
  push32((uint32_t)(0x123bb094u));
  /* 1239122e push 0x123c0400 */
  push32((uint32_t)(0x123c0400u));
  /* 12391233 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391239u);
  /* 12391239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239123c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239123e call 0x123935b0 */
  push32(0x12391243u); f_123935b0();
  /* 12391243 mov esi, esp */
  ESI = (ESP);
  /* 12391245 push 0x123bb07c */
  push32((uint32_t)(0x123bb07cu));
  /* 1239124a push 0x123c0408 */
  push32((uint32_t)(0x123c0408u));
  /* 1239124f call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391255u);
  /* 12391255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239125a call 0x123935b0 */
  push32(0x1239125fu); f_123935b0();
  /* 1239125f mov esi, esp */
  ESI = (ESP);
  /* 12391261 push 0x123bb070 */
  push32((uint32_t)(0x123bb070u));
  /* 12391266 push 0x123c0410 */
  push32((uint32_t)(0x123c0410u));
  /* 1239126b call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x12391271u);
  /* 12391271 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391274 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391276 call 0x123935b0 */
  push32(0x1239127bu); f_123935b0();
  /* 1239127b mov esi, esp */
  ESI = (ESP);
  /* 1239127d push 0x123bb064 */
  push32((uint32_t)(0x123bb064u));
  /* 12391282 push 0x123c0418 */
  push32((uint32_t)(0x123c0418u));
  /* 12391287 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x1239128du);
  /* 1239128d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391292 call 0x123935b0 */
  push32(0x12391297u); f_123935b0();
  /* 12391297 mov esi, esp */
  ESI = (ESP);
  /* 12391299 push 0x123bb054 */
  push32((uint32_t)(0x123bb054u));
  /* 1239129e push 0x123c0420 */
  push32((uint32_t)(0x123c0420u));
  /* 123912a3 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123912a9u);
  /* 123912a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123912ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123912ae call 0x123935b0 */
  push32(0x123912b3u); f_123935b0();
  /* 123912b3 mov esi, esp */
  ESI = (ESP);
  /* 123912b5 push 0x123bb044 */
  push32((uint32_t)(0x123bb044u));
  /* 123912ba push 0x123c0430 */
  push32((uint32_t)(0x123c0430u));
  /* 123912bf call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123912c5u);
  /* 123912c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123912c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123912ca call 0x123935b0 */
  push32(0x123912cfu); f_123935b0();
  /* 123912cf mov esi, esp */
  ESI = (ESP);
  /* 123912d1 push 0x123bb034 */
  push32((uint32_t)(0x123bb034u));
  /* 123912d6 push 0x123c0440 */
  push32((uint32_t)(0x123c0440u));
  /* 123912db call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123912e1u);
  /* 123912e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123912e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123912e6 call 0x123935b0 */
  push32(0x123912ebu); f_123935b0();
  /* 123912eb mov esi, esp */
  ESI = (ESP);
  /* 123912ed push 0x123bb024 */
  push32((uint32_t)(0x123bb024u));
  /* 123912f2 push 0x123c0450 */
  push32((uint32_t)(0x123c0450u));
  /* 123912f7 call dword ptr [0x123c3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3434))), 0x123912fdu);
  /* 123912fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391302 call 0x123935b0 */
  push32(0x12391307u); f_123935b0();
  /* 12391307 mov esi, esp */
  ESI = (ESP);
  /* 12391309 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 1239130e call dword ptr [0x123c3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3444))), 0x12391314u);
  /* 12391314 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391319 call 0x123935b0 */
  push32(0x1239131eu); f_123935b0();
  /* 1239131e mov esi, esp */
  ESI = (ESP);
  /* 12391320 push 8 */
  push32((uint32_t)(0x8u));
  /* 12391322 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391327 call dword ptr [0x123c343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c343c))), 0x1239132du);
  /* 1239132d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391330 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391332 call 0x123935b0 */
  push32(0x12391337u); f_123935b0();
  /* 12391337 mov esi, esp */
  ESI = (ESP);
  /* 12391339 push 0x123bb01c */
  push32((uint32_t)(0x123bb01cu));
  /* 1239133e push 0x123c0490 */
  push32((uint32_t)(0x123c0490u));
  /* 12391343 call dword ptr [0x123c3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3448))), 0x12391349u);
  /* 12391349 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239134c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239134e call 0x123935b0 */
  push32(0x12391353u); f_123935b0();
  /* 12391353 mov esi, esp */
  ESI = (ESP);
  /* 12391355 push 0x123bb01c */
  push32((uint32_t)(0x123bb01cu));
  /* 1239135a push 0x123c0498 */
  push32((uint32_t)(0x123c0498u));
  /* 1239135f call dword ptr [0x123c3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3448))), 0x12391365u);
  /* 12391365 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239136a call 0x123935b0 */
  push32(0x1239136fu); f_123935b0();
  /* 1239136f mov esi, esp */
  ESI = (ESP);
  /* 12391371 push 7 */
  push32((uint32_t)(0x7u));
  /* 12391373 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391375 call dword ptr [0x123c3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3440))), 0x1239137bu);
  /* 1239137b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239137e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391380 call 0x123935b0 */
  push32(0x12391385u); f_123935b0();
  /* 12391385 mov esi, esp */
  ESI = (ESP);
  /* 12391387 push 0xff */
  push32((uint32_t)(0xffu));
  /* 1239138c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239138e call dword ptr [0x123c3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3440))), 0x12391394u);
  /* 12391394 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391397 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391399 call 0x123935b0 */
  push32(0x1239139eu); f_123935b0();
  /* 1239139e mov esi, esp */
  ESI = (ESP);
  /* 123913a0 push 0xff */
  push32((uint32_t)(0xffu));
  /* 123913a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123913a7 call dword ptr [0x123c3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3440))), 0x123913adu);
  /* 123913ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123913b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123913b2 call 0x123935b0 */
  push32(0x123913b7u); f_123935b0();
  /* 123913b7 pop edi */
  EDI = (pop32());
  /* 123913b8 pop esi */
  ESI = (pop32());
  /* 123913b9 pop ebx */
  EBX = (pop32());
  /* 123913ba add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123913bd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123913bf call 0x123935b0 */
  push32(0x123913c4u); f_123935b0();
  /* 123913c4 mov esp, ebp */
  ESP = (EBP);
  /* 123913c6 pop ebp */
  EBP = (pop32());
  /* 123913c7 ret  */
  ESPCHK(0x12391090u, _esp0);
  ESP += 4; return;
}

/* FUN_100014a0 @ 0x123914a0 (6644 bytes, 1971 insns) */
void f_123914a0(void) {
  FTRACE(0x123914a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123914a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123914a1 mov ebp, esp */
  EBP = (ESP);
  /* 123914a3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123914a6 push ebx */
  push32((uint32_t)(EBX));
  /* 123914a7 push esi */
  push32((uint32_t)(ESI));
  /* 123914a8 push edi */
  push32((uint32_t)(EDI));
  /* 123914a9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 123914ac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 123914b1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 123914b6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123914b8 mov esi, esp */
  ESI = (ESP);
  /* 123914ba push 1 */
  push32((uint32_t)(0x1u));
  /* 123914bc call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123914c2u);
  /* 123914c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123914c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123914c7 call 0x123935b0 */
  push32(0x123914ccu); f_123935b0();
  /* 123914cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123914d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123914d3 je 0x12391ade */
  if (C.zf) goto L_12391ade;
  /* 123914d9 mov esi, esp */
  ESI = (ESP);
  /* 123914db push 0 */
  push32((uint32_t)(0x0u));
  /* 123914dd push 1 */
  push32((uint32_t)(0x1u));
  /* 123914df call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123914e5u);
  /* 123914e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123914e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123914ea call 0x123935b0 */
  push32(0x123914efu); f_123935b0();
  /* 123914ef mov esi, esp */
  ESI = (ESP);
  /* 123914f1 push 0x123c0490 */
  push32((uint32_t)(0x123c0490u));
  /* 123914f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123914f8 call dword ptr [0x123c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f4))), 0x123914feu);
  /* 123914fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391503 call 0x123935b0 */
  push32(0x12391508u); f_123935b0();
  /* 12391508 mov esi, esp */
  ESI = (ESP);
  /* 1239150a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239150c push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 12391511 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391513 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391519u);
  /* 12391519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239151c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239151e call 0x123935b0 */
  push32(0x12391523u); f_123935b0();
  /* 12391523 mov esi, esp */
  ESI = (ESP);
  /* 12391525 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391527 push 0x123c0438 */
  push32((uint32_t)(0x123c0438u));
  /* 1239152c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239152e call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391534u);
  /* 12391534 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391537 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391539 call 0x123935b0 */
  push32(0x1239153eu); f_123935b0();
  /* 1239153e mov esi, esp */
  ESI = (ESP);
  /* 12391540 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391542 push 0x123c0448 */
  push32((uint32_t)(0x123c0448u));
  /* 12391547 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391549 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x1239154fu);
  /* 1239154f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391554 call 0x123935b0 */
  push32(0x12391559u); f_123935b0();
  /* 12391559 mov esi, esp */
  ESI = (ESP);
  /* 1239155b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239155d push 0x123c0458 */
  push32((uint32_t)(0x123c0458u));
  /* 12391562 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391564 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x1239156au);
  /* 1239156a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239156d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239156f call 0x123935b0 */
  push32(0x12391574u); f_123935b0();
  /* 12391574 mov esi, esp */
  ESI = (ESP);
  /* 12391576 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391578 push 0x123c0460 */
  push32((uint32_t)(0x123c0460u));
  /* 1239157d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239157f call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391585u);
  /* 12391585 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239158a call 0x123935b0 */
  push32(0x1239158fu); f_123935b0();
  /* 1239158f mov esi, esp */
  ESI = (ESP);
  /* 12391591 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391593 push 0x123c0468 */
  push32((uint32_t)(0x123c0468u));
  /* 12391598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239159a call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123915a0u);
  /* 123915a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123915a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123915a5 call 0x123935b0 */
  push32(0x123915aau); f_123935b0();
  /* 123915aa mov esi, esp */
  ESI = (ESP);
  /* 123915ac push 0 */
  push32((uint32_t)(0x0u));
  /* 123915ae push 0x123c0470 */
  push32((uint32_t)(0x123c0470u));
  /* 123915b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123915b5 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123915bbu);
  /* 123915bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123915be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123915c0 call 0x123935b0 */
  push32(0x123915c5u); f_123935b0();
  /* 123915c5 mov esi, esp */
  ESI = (ESP);
  /* 123915c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123915c9 push 0x123c0478 */
  push32((uint32_t)(0x123c0478u));
  /* 123915ce push 0 */
  push32((uint32_t)(0x0u));
  /* 123915d0 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123915d6u);
  /* 123915d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123915d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123915db call 0x123935b0 */
  push32(0x123915e0u); f_123935b0();
  /* 123915e0 mov esi, esp */
  ESI = (ESP);
  /* 123915e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123915e4 push 0x123c0488 */
  push32((uint32_t)(0x123c0488u));
  /* 123915e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123915eb call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123915f1u);
  /* 123915f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123915f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123915f6 call 0x123935b0 */
  push32(0x123915fbu); f_123935b0();
  /* 123915fb mov esi, esp */
  ESI = (ESP);
  /* 123915fd push 0 */
  push32((uint32_t)(0x0u));
  /* 123915ff push 0x123c03f0 */
  push32((uint32_t)(0x123c03f0u));
  /* 12391604 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391606 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x1239160cu);
  /* 1239160c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239160f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391611 call 0x123935b0 */
  push32(0x12391616u); f_123935b0();
  /* 12391616 mov esi, esp */
  ESI = (ESP);
  /* 12391618 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239161a push 0x123c03f8 */
  push32((uint32_t)(0x123c03f8u));
  /* 1239161f push 0 */
  push32((uint32_t)(0x0u));
  /* 12391621 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391627u);
  /* 12391627 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239162a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239162c call 0x123935b0 */
  push32(0x12391631u); f_123935b0();
  /* 12391631 mov esi, esp */
  ESI = (ESP);
  /* 12391633 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391635 push 0x123c0400 */
  push32((uint32_t)(0x123c0400u));
  /* 1239163a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239163c call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391642u);
  /* 12391642 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391645 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391647 call 0x123935b0 */
  push32(0x1239164cu); f_123935b0();
  /* 1239164c mov esi, esp */
  ESI = (ESP);
  /* 1239164e push 0 */
  push32((uint32_t)(0x0u));
  /* 12391650 push 0x123c0408 */
  push32((uint32_t)(0x123c0408u));
  /* 12391655 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391657 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x1239165du);
  /* 1239165d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391662 call 0x123935b0 */
  push32(0x12391667u); f_123935b0();
  /* 12391667 mov esi, esp */
  ESI = (ESP);
  /* 12391669 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239166b push 0x123c0410 */
  push32((uint32_t)(0x123c0410u));
  /* 12391670 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391672 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391678u);
  /* 12391678 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239167b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239167d call 0x123935b0 */
  push32(0x12391682u); f_123935b0();
  /* 12391682 mov esi, esp */
  ESI = (ESP);
  /* 12391684 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391686 push 0x123c0418 */
  push32((uint32_t)(0x123c0418u));
  /* 1239168b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239168d call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391693u);
  /* 12391693 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391696 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391698 call 0x123935b0 */
  push32(0x1239169du); f_123935b0();
  /* 1239169d mov esi, esp */
  ESI = (ESP);
  /* 1239169f push 0 */
  push32((uint32_t)(0x0u));
  /* 123916a1 push 0x123c0430 */
  push32((uint32_t)(0x123c0430u));
  /* 123916a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123916a8 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123916aeu);
  /* 123916ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123916b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123916b3 call 0x123935b0 */
  push32(0x123916b8u); f_123935b0();
  /* 123916b8 mov esi, esp */
  ESI = (ESP);
  /* 123916ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123916bc push 0x123c0440 */
  push32((uint32_t)(0x123c0440u));
  /* 123916c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123916c3 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123916c9u);
  /* 123916c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123916cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123916ce call 0x123935b0 */
  push32(0x123916d3u); f_123935b0();
  /* 123916d3 mov esi, esp */
  ESI = (ESP);
  /* 123916d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123916d7 push 0x123c0450 */
  push32((uint32_t)(0x123c0450u));
  /* 123916dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123916de call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123916e4u);
  /* 123916e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123916e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123916e9 call 0x123935b0 */
  push32(0x123916eeu); f_123935b0();
  /* 123916ee mov esi, esp */
  ESI = (ESP);
  /* 123916f0 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 123916f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 123916f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123916f9 call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x123916ffu);
  /* 123916ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391704 call 0x123935b0 */
  push32(0x12391709u); f_123935b0();
  /* 12391709 mov esi, esp */
  ESI = (ESP);
  /* 1239170b push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 12391710 push 1 */
  push32((uint32_t)(0x1u));
  /* 12391712 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391714 call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x1239171au);
  /* 1239171a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239171d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239171f call 0x123935b0 */
  push32(0x12391724u); f_123935b0();
  /* 12391724 mov esi, esp */
  ESI = (ESP);
  /* 12391726 push 0xa */
  push32((uint32_t)(0xau));
  /* 12391728 push 4 */
  push32((uint32_t)(0x4u));
  /* 1239172a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239172c call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x12391732u);
  /* 12391732 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391737 call 0x123935b0 */
  push32(0x1239173cu); f_123935b0();
  /* 1239173c mov esi, esp */
  ESI = (ESP);
  /* 1239173e push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12391743 push 2 */
  push32((uint32_t)(0x2u));
  /* 12391745 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391747 call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x1239174du);
  /* 1239174d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391750 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391752 call 0x123935b0 */
  push32(0x12391757u); f_123935b0();
  /* 12391757 mov esi, esp */
  ESI = (ESP);
  /* 12391759 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 1239175e push 0 */
  push32((uint32_t)(0x0u));
  /* 12391760 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391762 call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x12391768u);
  /* 12391768 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239176b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239176d call 0x123935b0 */
  push32(0x12391772u); f_123935b0();
  /* 12391772 mov esi, esp */
  ESI = (ESP);
  /* 12391774 push 0xa */
  push32((uint32_t)(0xau));
  /* 12391776 push 5 */
  push32((uint32_t)(0x5u));
  /* 12391778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239177a call dword ptr [0x123c33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33fc))), 0x12391780u);
  /* 12391780 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391783 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391785 call 0x123935b0 */
  push32(0x1239178au); f_123935b0();
  /* 1239178a mov esi, esp */
  ESI = (ESP);
  /* 1239178c push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1239178e call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391794u);
  /* 12391794 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391797 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391799 call 0x123935b0 */
  push32(0x1239179eu); f_123935b0();
  /* 1239179e mov esi, esp */
  ESI = (ESP);
  /* 123917a0 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 123917a2 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123917a8u);
  /* 123917a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123917ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123917ad call 0x123935b0 */
  push32(0x123917b2u); f_123935b0();
  /* 123917b2 mov esi, esp */
  ESI = (ESP);
  /* 123917b4 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 123917b6 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123917bcu);
  /* 123917bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123917bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123917c1 call 0x123935b0 */
  push32(0x123917c6u); f_123935b0();
  /* 123917c6 mov esi, esp */
  ESI = (ESP);
  /* 123917c8 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 123917ca call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123917d0u);
  /* 123917d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123917d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123917d5 call 0x123935b0 */
  push32(0x123917dau); f_123935b0();
  /* 123917da mov esi, esp */
  ESI = (ESP);
  /* 123917dc push 0x46 */
  push32((uint32_t)(0x46u));
  /* 123917de call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123917e4u);
  /* 123917e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123917e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123917e9 call 0x123935b0 */
  push32(0x123917eeu); f_123935b0();
  /* 123917ee mov esi, esp */
  ESI = (ESP);
  /* 123917f0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 123917f2 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123917f8u);
  /* 123917f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123917fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123917fd call 0x123935b0 */
  push32(0x12391802u); f_123935b0();
  /* 12391802 mov esi, esp */
  ESI = (ESP);
  /* 12391804 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12391806 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x1239180cu);
  /* 1239180c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239180f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391811 call 0x123935b0 */
  push32(0x12391816u); f_123935b0();
  /* 12391816 mov esi, esp */
  ESI = (ESP);
  /* 12391818 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1239181a call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391820u);
  /* 12391820 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391823 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391825 call 0x123935b0 */
  push32(0x1239182au); f_123935b0();
  /* 1239182a mov esi, esp */
  ESI = (ESP);
  /* 1239182c push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1239182e call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391834u);
  /* 12391834 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391837 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391839 call 0x123935b0 */
  push32(0x1239183eu); f_123935b0();
  /* 1239183e mov esi, esp */
  ESI = (ESP);
  /* 12391840 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12391842 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391848u);
  /* 12391848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239184b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239184d call 0x123935b0 */
  push32(0x12391852u); f_123935b0();
  /* 12391852 mov esi, esp */
  ESI = (ESP);
  /* 12391854 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12391856 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x1239185cu);
  /* 1239185c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239185f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391861 call 0x123935b0 */
  push32(0x12391866u); f_123935b0();
  /* 12391866 mov esi, esp */
  ESI = (ESP);
  /* 12391868 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1239186a call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391870u);
  /* 12391870 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391875 call 0x123935b0 */
  push32(0x1239187au); f_123935b0();
  /* 1239187a mov esi, esp */
  ESI = (ESP);
  /* 1239187c push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1239187e call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391884u);
  /* 12391884 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391887 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391889 call 0x123935b0 */
  push32(0x1239188eu); f_123935b0();
  /* 1239188e mov esi, esp */
  ESI = (ESP);
  /* 12391890 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12391892 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391898u);
  /* 12391898 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239189b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239189d call 0x123935b0 */
  push32(0x123918a2u); f_123935b0();
  /* 123918a2 mov esi, esp */
  ESI = (ESP);
  /* 123918a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123918a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123918a8 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123918aeu);
  /* 123918ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123918b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123918b3 call 0x123935b0 */
  push32(0x123918b8u); f_123935b0();
  /* 123918b8 mov esi, esp */
  ESI = (ESP);
  /* 123918ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123918bc push 5 */
  push32((uint32_t)(0x5u));
  /* 123918be call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123918c4u);
  /* 123918c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123918c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123918c9 call 0x123935b0 */
  push32(0x123918ceu); f_123935b0();
  /* 123918ce mov esi, esp */
  ESI = (ESP);
  /* 123918d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123918d2 push 6 */
  push32((uint32_t)(0x6u));
  /* 123918d4 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123918dau);
  /* 123918da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123918dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123918df call 0x123935b0 */
  push32(0x123918e4u); f_123935b0();
  /* 123918e4 mov esi, esp */
  ESI = (ESP);
  /* 123918e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123918e8 push 7 */
  push32((uint32_t)(0x7u));
  /* 123918ea call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123918f0u);
  /* 123918f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123918f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123918f5 call 0x123935b0 */
  push32(0x123918fau); f_123935b0();
  /* 123918fa mov esi, esp */
  ESI = (ESP);
  /* 123918fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123918fe push 8 */
  push32((uint32_t)(0x8u));
  /* 12391900 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391906u);
  /* 12391906 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391909 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239190b call 0x123935b0 */
  push32(0x12391910u); f_123935b0();
  /* 12391910 mov esi, esp */
  ESI = (ESP);
  /* 12391912 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391914 push 9 */
  push32((uint32_t)(0x9u));
  /* 12391916 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239191cu);
  /* 1239191c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239191f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391921 call 0x123935b0 */
  push32(0x12391926u); f_123935b0();
  /* 12391926 mov esi, esp */
  ESI = (ESP);
  /* 12391928 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239192a push 0xa */
  push32((uint32_t)(0xau));
  /* 1239192c call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391932u);
  /* 12391932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391935 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391937 call 0x123935b0 */
  push32(0x1239193cu); f_123935b0();
  /* 1239193c mov esi, esp */
  ESI = (ESP);
  /* 1239193e push 0 */
  push32((uint32_t)(0x0u));
  /* 12391940 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12391942 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391948u);
  /* 12391948 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239194b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239194d call 0x123935b0 */
  push32(0x12391952u); f_123935b0();
  /* 12391952 mov esi, esp */
  ESI = (ESP);
  /* 12391954 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391956 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12391958 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239195eu);
  /* 1239195e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391963 call 0x123935b0 */
  push32(0x12391968u); f_123935b0();
  /* 12391968 mov esi, esp */
  ESI = (ESP);
  /* 1239196a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239196c push 0xd */
  push32((uint32_t)(0xdu));
  /* 1239196e call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391974u);
  /* 12391974 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391977 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391979 call 0x123935b0 */
  push32(0x1239197eu); f_123935b0();
  /* 1239197e mov esi, esp */
  ESI = (ESP);
  /* 12391980 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391982 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12391984 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239198au);
  /* 1239198a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239198d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239198f call 0x123935b0 */
  push32(0x12391994u); f_123935b0();
  /* 12391994 mov esi, esp */
  ESI = (ESP);
  /* 12391996 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391998 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1239199a call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123919a0u);
  /* 123919a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123919a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123919a5 call 0x123935b0 */
  push32(0x123919aau); f_123935b0();
  /* 123919aa mov esi, esp */
  ESI = (ESP);
  /* 123919ac push 0 */
  push32((uint32_t)(0x0u));
  /* 123919ae push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123919b0 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123919b6u);
  /* 123919b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123919b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123919bb call 0x123935b0 */
  push32(0x123919c0u); f_123935b0();
  /* 123919c0 mov esi, esp */
  ESI = (ESP);
  /* 123919c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123919c4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123919c6 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123919ccu);
  /* 123919cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123919cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123919d1 call 0x123935b0 */
  push32(0x123919d6u); f_123935b0();
  /* 123919d6 mov esi, esp */
  ESI = (ESP);
  /* 123919d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123919da push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123919dc call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123919e2u);
  /* 123919e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123919e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123919e7 call 0x123935b0 */
  push32(0x123919ecu); f_123935b0();
  /* 123919ec mov esi, esp */
  ESI = (ESP);
  /* 123919ee push 0 */
  push32((uint32_t)(0x0u));
  /* 123919f0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123919f2 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123919f8u);
  /* 123919f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123919fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123919fd call 0x123935b0 */
  push32(0x12391a02u); f_123935b0();
  /* 12391a02 mov esi, esp */
  ESI = (ESP);
  /* 12391a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a06 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12391a08 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a0eu);
  /* 12391a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a13 call 0x123935b0 */
  push32(0x12391a18u); f_123935b0();
  /* 12391a18 mov esi, esp */
  ESI = (ESP);
  /* 12391a1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a1c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12391a1e call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a24u);
  /* 12391a24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a29 call 0x123935b0 */
  push32(0x12391a2eu); f_123935b0();
  /* 12391a2e mov esi, esp */
  ESI = (ESP);
  /* 12391a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a32 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12391a34 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a3au);
  /* 12391a3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a3f call 0x123935b0 */
  push32(0x12391a44u); f_123935b0();
  /* 12391a44 mov esi, esp */
  ESI = (ESP);
  /* 12391a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a48 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12391a4a call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a50u);
  /* 12391a50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a55 call 0x123935b0 */
  push32(0x12391a5au); f_123935b0();
  /* 12391a5a mov esi, esp */
  ESI = (ESP);
  /* 12391a5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a5e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12391a60 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a66u);
  /* 12391a66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a69 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a6b call 0x123935b0 */
  push32(0x12391a70u); f_123935b0();
  /* 12391a70 mov esi, esp */
  ESI = (ESP);
  /* 12391a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12391a76 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a7cu);
  /* 12391a7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a81 call 0x123935b0 */
  push32(0x12391a86u); f_123935b0();
  /* 12391a86 mov esi, esp */
  ESI = (ESP);
  /* 12391a88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391a8a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12391a8c call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391a92u);
  /* 12391a92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391a95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391a97 call 0x123935b0 */
  push32(0x12391a9cu); f_123935b0();
  /* 12391a9c mov esi, esp */
  ESI = (ESP);
  /* 12391a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12391aa0 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12391aa2 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391aa8u);
  /* 12391aa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391aad call 0x123935b0 */
  push32(0x12391ab2u); f_123935b0();
  /* 12391ab2 mov esi, esp */
  ESI = (ESP);
  /* 12391ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391ab6 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12391ab8 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391abeu);
  /* 12391abe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ac3 call 0x123935b0 */
  push32(0x12391ac8u); f_123935b0();
  /* 12391ac8 mov esi, esp */
  ESI = (ESP);
  /* 12391aca push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12391acc push 1 */
  push32((uint32_t)(0x1u));
  /* 12391ace call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12391ad4u);
  /* 12391ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ad9 call 0x123935b0 */
  push32(0x12391adeu); f_123935b0();
L_12391ade:;
  /* 12391ade mov esi, esp */
  ESI = (ESP);
  /* 12391ae0 push 4 */
  push32((uint32_t)(0x4u));
  /* 12391ae2 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391ae8u);
  /* 12391ae8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391aeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391aed call 0x123935b0 */
  push32(0x12391af2u); f_123935b0();
  /* 12391af2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391af7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391af9 je 0x12391ba7 */
  if (C.zf) goto L_12391ba7;
  /* 12391aff mov esi, esp */
  ESI = (ESP);
  /* 12391b01 push 1 */
  push32((uint32_t)(0x1u));
  /* 12391b03 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12391b09u);
  /* 12391b09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b0e call 0x123935b0 */
  push32(0x12391b13u); f_123935b0();
  /* 12391b13 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391b18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391b1a je 0x12391ba7 */
  if (C.zf) goto L_12391ba7;
  /* 12391b20 mov esi, esp */
  ESI = (ESP);
  /* 12391b22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391b24 push 4 */
  push32((uint32_t)(0x4u));
  /* 12391b26 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391b2cu);
  /* 12391b2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b31 call 0x123935b0 */
  push32(0x12391b36u); f_123935b0();
  /* 12391b36 mov esi, esp */
  ESI = (ESP);
  /* 12391b38 push 0x123bb2b4 */
  push32((uint32_t)(0x123bb2b4u));
  /* 12391b3d call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391b43u);
  /* 12391b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b48 call 0x123935b0 */
  push32(0x12391b4du); f_123935b0();
  /* 12391b4d mov esi, esp */
  ESI = (ESP);
  /* 12391b4f push 0x123bb2ac */
  push32((uint32_t)(0x123bb2acu));
  /* 12391b54 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391b5au);
  /* 12391b5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b5f call 0x123935b0 */
  push32(0x12391b64u); f_123935b0();
  /* 12391b64 mov esi, esp */
  ESI = (ESP);
  /* 12391b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391b68 call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x12391b6eu);
  /* 12391b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b73 call 0x123935b0 */
  push32(0x12391b78u); f_123935b0();
  /* 12391b78 mov esi, esp */
  ESI = (ESP);
  /* 12391b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 12391b7c push 2 */
  push32((uint32_t)(0x2u));
  /* 12391b7e call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391b84u);
  /* 12391b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391b89 call 0x123935b0 */
  push32(0x12391b8eu); f_123935b0();
  /* 12391b8e mov esi, esp */
  ESI = (ESP);
  /* 12391b90 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12391b95 push 4 */
  push32((uint32_t)(0x4u));
  /* 12391b97 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12391b9du);
  /* 12391b9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ba2 call 0x123935b0 */
  push32(0x12391ba7u); f_123935b0();
L_12391ba7:;
  /* 12391ba7 mov esi, esp */
  ESI = (ESP);
  /* 12391ba9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12391bab call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391bb1u);
  /* 12391bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391bb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391bb6 call 0x123935b0 */
  push32(0x12391bbbu); f_123935b0();
  /* 12391bbb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391bc2 je 0x12391bdf */
  if (C.zf) goto L_12391bdf;
  /* 12391bc4 mov esi, esp */
  ESI = (ESP);
  /* 12391bc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391bc8 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 12391bcf call dword ptr [0x123c3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3414))), 0x12391bd5u);
  /* 12391bd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391bda call 0x123935b0 */
  push32(0x12391bdfu); f_123935b0();
L_12391bdf:;
  /* 12391bdf mov esi, esp */
  ESI = (ESP);
  /* 12391be1 push 3 */
  push32((uint32_t)(0x3u));
  /* 12391be3 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391be9u);
  /* 12391be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391bec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391bee call 0x123935b0 */
  push32(0x12391bf3u); f_123935b0();
  /* 12391bf3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391bfa je 0x12391cde */
  if (C.zf) goto L_12391cde;
  /* 12391c00 mov esi, esp */
  ESI = (ESP);
  /* 12391c02 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391c07 call dword ptr [0x123c3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3418))), 0x12391c0du);
  /* 12391c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c12 call 0x123935b0 */
  push32(0x12391c17u); f_123935b0();
  /* 12391c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391c19 jle 0x12391cde */
  if ((C.zf||C.sf!=C.of)) goto L_12391cde;
  /* 12391c1f mov esi, esp */
  ESI = (ESP);
  /* 12391c21 push 4 */
  push32((uint32_t)(0x4u));
  /* 12391c23 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12391c29u);
  /* 12391c29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c2e call 0x123935b0 */
  push32(0x12391c33u); f_123935b0();
  /* 12391c33 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391c3a je 0x12391cde */
  if (C.zf) goto L_12391cde;
  /* 12391c40 mov esi, esp */
  ESI = (ESP);
  /* 12391c42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391c44 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391c4b call dword ptr [0x123c3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3410))), 0x12391c51u);
  /* 12391c51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c56 call 0x123935b0 */
  push32(0x12391c5bu); f_123935b0();
  /* 12391c5b mov esi, esp */
  ESI = (ESP);
  /* 12391c5d push 0 */
  push32((uint32_t)(0x0u));
  /* 12391c5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12391c61 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391c67u);
  /* 12391c67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c6c call 0x123935b0 */
  push32(0x12391c71u); f_123935b0();
  /* 12391c71 mov esi, esp */
  ESI = (ESP);
  /* 12391c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391c75 push 3 */
  push32((uint32_t)(0x3u));
  /* 12391c77 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391c7du);
  /* 12391c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c82 call 0x123935b0 */
  push32(0x12391c87u); f_123935b0();
  /* 12391c87 mov esi, esp */
  ESI = (ESP);
  /* 12391c89 push 1 */
  push32((uint32_t)(0x1u));
  /* 12391c8b push 5 */
  push32((uint32_t)(0x5u));
  /* 12391c8d call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391c93u);
  /* 12391c93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391c96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391c98 call 0x123935b0 */
  push32(0x12391c9du); f_123935b0();
  /* 12391c9d mov esi, esp */
  ESI = (ESP);
  /* 12391c9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12391ca1 push 6 */
  push32((uint32_t)(0x6u));
  /* 12391ca3 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391ca9u);
  /* 12391ca9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391cae call 0x123935b0 */
  push32(0x12391cb3u); f_123935b0();
  /* 12391cb3 mov esi, esp */
  ESI = (ESP);
  /* 12391cb5 push 0x123bb2a4 */
  push32((uint32_t)(0x123bb2a4u));
  /* 12391cba call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391cc0u);
  /* 12391cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391cc5 call 0x123935b0 */
  push32(0x12391ccau); f_123935b0();
  /* 12391cca mov esi, esp */
  ESI = (ESP);
  /* 12391ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 12391cce call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x12391cd4u);
  /* 12391cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391cd9 call 0x123935b0 */
  push32(0x12391cdeu); f_123935b0();
L_12391cde:;
  /* 12391cde mov esi, esp */
  ESI = (ESP);
  /* 12391ce0 push 5 */
  push32((uint32_t)(0x5u));
  /* 12391ce2 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391ce8u);
  /* 12391ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ceb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ced call 0x123935b0 */
  push32(0x12391cf2u); f_123935b0();
  /* 12391cf2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391cf9 je 0x12391d16 */
  if (C.zf) goto L_12391d16;
  /* 12391cfb mov esi, esp */
  ESI = (ESP);
  /* 12391cfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12391cff push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391d06 call dword ptr [0x123c3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3414))), 0x12391d0cu);
  /* 12391d0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d11 call 0x123935b0 */
  push32(0x12391d16u); f_123935b0();
L_12391d16:;
  /* 12391d16 mov esi, esp */
  ESI = (ESP);
  /* 12391d18 push 6 */
  push32((uint32_t)(0x6u));
  /* 12391d1a call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391d20u);
  /* 12391d20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d25 call 0x123935b0 */
  push32(0x12391d2au); f_123935b0();
  /* 12391d2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391d2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391d31 je 0x12391df1 */
  if (C.zf) goto L_12391df1;
  /* 12391d37 mov esi, esp */
  ESI = (ESP);
  /* 12391d39 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 12391d3e call dword ptr [0x123c3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3418))), 0x12391d44u);
  /* 12391d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d49 call 0x123935b0 */
  push32(0x12391d4eu); f_123935b0();
  /* 12391d4e cmp eax, 9 */
  { uint32_t _a=(EAX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d51 jle 0x12391df1 */
  if ((C.zf||C.sf!=C.of)) goto L_12391df1;
  /* 12391d57 mov esi, esp */
  ESI = (ESP);
  /* 12391d59 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12391d5b call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391d61u);
  /* 12391d61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d66 call 0x123935b0 */
  push32(0x12391d6bu); f_123935b0();
  /* 12391d6b mov esi, esp */
  ESI = (ESP);
  /* 12391d6d push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12391d6f call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12391d75u);
  /* 12391d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d7a call 0x123935b0 */
  push32(0x12391d7fu); f_123935b0();
  /* 12391d7f mov esi, esp */
  ESI = (ESP);
  /* 12391d81 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391d83 push 6 */
  push32((uint32_t)(0x6u));
  /* 12391d85 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391d8bu);
  /* 12391d8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391d8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391d90 call 0x123935b0 */
  push32(0x12391d95u); f_123935b0();
  /* 12391d95 mov esi, esp */
  ESI = (ESP);
  /* 12391d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391d99 push 5 */
  push32((uint32_t)(0x5u));
  /* 12391d9b call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391da1u);
  /* 12391da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391da6 call 0x123935b0 */
  push32(0x12391dabu); f_123935b0();
  /* 12391dab mov esi, esp */
  ESI = (ESP);
  /* 12391dad push 0x123bb29c */
  push32((uint32_t)(0x123bb29cu));
  /* 12391db2 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391db8u);
  /* 12391db8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391dbd call 0x123935b0 */
  push32(0x12391dc2u); f_123935b0();
  /* 12391dc2 mov esi, esp */
  ESI = (ESP);
  /* 12391dc4 push 0x15e */
  push32((uint32_t)(0x15eu));
  /* 12391dc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12391dcb call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12391dd1u);
  /* 12391dd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391dd4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391dd6 call 0x123935b0 */
  push32(0x12391ddbu); f_123935b0();
  /* 12391ddb mov esi, esp */
  ESI = (ESP);
  /* 12391ddd push 1 */
  push32((uint32_t)(0x1u));
  /* 12391ddf push 7 */
  push32((uint32_t)(0x7u));
  /* 12391de1 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391de7u);
  /* 12391de7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391dea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391dec call 0x123935b0 */
  push32(0x12391df1u); f_123935b0();
L_12391df1:;
  /* 12391df1 mov esi, esp */
  ESI = (ESP);
  /* 12391df3 push 7 */
  push32((uint32_t)(0x7u));
  /* 12391df5 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391dfbu);
  /* 12391dfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391dfe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e00 call 0x123935b0 */
  push32(0x12391e05u); f_123935b0();
  /* 12391e05 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391e0a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391e0c je 0x12391ebc */
  if (C.zf) goto L_12391ebc;
  /* 12391e12 mov esi, esp */
  ESI = (ESP);
  /* 12391e14 push 2 */
  push32((uint32_t)(0x2u));
  /* 12391e16 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12391e1cu);
  /* 12391e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e21 call 0x123935b0 */
  push32(0x12391e26u); f_123935b0();
  /* 12391e26 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391e2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391e2d je 0x12391ebc */
  if (C.zf) goto L_12391ebc;
  /* 12391e33 mov esi, esp */
  ESI = (ESP);
  /* 12391e35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391e37 push 7 */
  push32((uint32_t)(0x7u));
  /* 12391e39 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391e3fu);
  /* 12391e3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e44 call 0x123935b0 */
  push32(0x12391e49u); f_123935b0();
  /* 12391e49 mov esi, esp */
  ESI = (ESP);
  /* 12391e4b push 0x123bb294 */
  push32((uint32_t)(0x123bb294u));
  /* 12391e50 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391e56u);
  /* 12391e56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e5b call 0x123935b0 */
  push32(0x12391e60u); f_123935b0();
  /* 12391e60 mov esi, esp */
  ESI = (ESP);
  /* 12391e62 push 0x123bb28c */
  push32((uint32_t)(0x123bb28cu));
  /* 12391e67 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391e6du);
  /* 12391e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e72 call 0x123935b0 */
  push32(0x12391e77u); f_123935b0();
  /* 12391e77 mov esi, esp */
  ESI = (ESP);
  /* 12391e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391e7b call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x12391e81u);
  /* 12391e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391e86 call 0x123935b0 */
  push32(0x12391e8bu); f_123935b0();
  /* 12391e8b mov esi, esp */
  ESI = (ESP);
  /* 12391e8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12391e8f push 0x123c0448 */
  push32((uint32_t)(0x123c0448u));
  /* 12391e94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391e96 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12391e9cu);
  /* 12391e9c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391e9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ea1 call 0x123935b0 */
  push32(0x12391ea6u); f_123935b0();
  /* 12391ea6 mov esi, esp */
  ESI = (ESP);
  /* 12391ea8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12391eaa push 8 */
  push32((uint32_t)(0x8u));
  /* 12391eac call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391eb2u);
  /* 12391eb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391eb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391eb7 call 0x123935b0 */
  push32(0x12391ebcu); f_123935b0();
L_12391ebc:;
  /* 12391ebc mov esi, esp */
  ESI = (ESP);
  /* 12391ebe push 8 */
  push32((uint32_t)(0x8u));
  /* 12391ec0 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391ec6u);
  /* 12391ec6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ec9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ecb call 0x123935b0 */
  push32(0x12391ed0u); f_123935b0();
  /* 12391ed0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391ed7 je 0x12391f39 */
  if (C.zf) goto L_12391f39;
  /* 12391ed9 mov esi, esp */
  ESI = (ESP);
  /* 12391edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12391edd push 0x123c0448 */
  push32((uint32_t)(0x123c0448u));
  /* 12391ee2 call dword ptr [0x123c3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3424))), 0x12391ee8u);
  /* 12391ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391eed call 0x123935b0 */
  push32(0x12391ef2u); f_123935b0();
  /* 12391ef2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391ef4 jle 0x12391f39 */
  if ((C.zf||C.sf!=C.of)) goto L_12391f39;
  /* 12391ef6 mov esi, esp */
  ESI = (ESP);
  /* 12391ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12391efa push 8 */
  push32((uint32_t)(0x8u));
  /* 12391efc call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391f02u);
  /* 12391f02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f07 call 0x123935b0 */
  push32(0x12391f0cu); f_123935b0();
  /* 12391f0c mov esi, esp */
  ESI = (ESP);
  /* 12391f0e push 0x123bb284 */
  push32((uint32_t)(0x123bb284u));
  /* 12391f13 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391f19u);
  /* 12391f19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f1e call 0x123935b0 */
  push32(0x12391f23u); f_123935b0();
  /* 12391f23 mov esi, esp */
  ESI = (ESP);
  /* 12391f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 12391f27 push 9 */
  push32((uint32_t)(0x9u));
  /* 12391f29 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391f2fu);
  /* 12391f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f34 call 0x123935b0 */
  push32(0x12391f39u); f_123935b0();
L_12391f39:;
  /* 12391f39 mov esi, esp */
  ESI = (ESP);
  /* 12391f3b push 9 */
  push32((uint32_t)(0x9u));
  /* 12391f3d call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12391f43u);
  /* 12391f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f48 call 0x123935b0 */
  push32(0x12391f4du); f_123935b0();
  /* 12391f4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12391f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391f54 je 0x12392013 */
  if (C.zf) goto L_12392013;
  /* 12391f5a mov esi, esp */
  ESI = (ESP);
  /* 12391f5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12391f5e push 0x123c0448 */
  push32((uint32_t)(0x123c0448u));
  /* 12391f63 call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x12391f69u);
  /* 12391f69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f6e call 0x123935b0 */
  push32(0x12391f73u); f_123935b0();
  /* 12391f73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12391f75 jle 0x12392013 */
  if ((C.zf||C.sf!=C.of)) goto L_12392013;
  /* 12391f7b mov esi, esp */
  ESI = (ESP);
  /* 12391f7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12391f7f push 9 */
  push32((uint32_t)(0x9u));
  /* 12391f81 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12391f87u);
  /* 12391f87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391f8c call 0x123935b0 */
  push32(0x12391f91u); f_123935b0();
  /* 12391f91 mov esi, esp */
  ESI = (ESP);
  /* 12391f93 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12391f95 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12391f9bu);
  /* 12391f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391f9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391fa0 call 0x123935b0 */
  push32(0x12391fa5u); f_123935b0();
  /* 12391fa5 mov esi, esp */
  ESI = (ESP);
  /* 12391fa7 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12391fa9 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12391fafu);
  /* 12391faf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391fb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391fb4 call 0x123935b0 */
  push32(0x12391fb9u); f_123935b0();
  /* 12391fb9 mov esi, esp */
  ESI = (ESP);
  /* 12391fbb push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12391fbd call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12391fc3u);
  /* 12391fc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391fc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391fc8 call 0x123935b0 */
  push32(0x12391fcdu); f_123935b0();
  /* 12391fcd mov esi, esp */
  ESI = (ESP);
  /* 12391fcf push 0x123bb27c */
  push32((uint32_t)(0x123bb27cu));
  /* 12391fd4 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12391fdau);
  /* 12391fda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391fdd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391fdf call 0x123935b0 */
  push32(0x12391fe4u); f_123935b0();
  /* 12391fe4 mov esi, esp */
  ESI = (ESP);
  /* 12391fe6 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12391feb push 3 */
  push32((uint32_t)(0x3u));
  /* 12391fed call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12391ff3u);
  /* 12391ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12391ff6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12391ff8 call 0x123935b0 */
  push32(0x12391ffdu); f_123935b0();
  /* 12391ffd mov esi, esp */
  ESI = (ESP);
  /* 12391fff push 1 */
  push32((uint32_t)(0x1u));
  /* 12392001 push 0xa */
  push32((uint32_t)(0xau));
  /* 12392003 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392009u);
  /* 12392009 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239200c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239200e call 0x123935b0 */
  push32(0x12392013u); f_123935b0();
L_12392013:;
  /* 12392013 mov esi, esp */
  ESI = (ESP);
  /* 12392015 push 0xa */
  push32((uint32_t)(0xau));
  /* 12392017 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x1239201du);
  /* 1239201d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392020 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392022 call 0x123935b0 */
  push32(0x12392027u); f_123935b0();
  /* 12392027 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239202c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239202e je 0x123920c6 */
  if (C.zf) goto L_123920c6;
  /* 12392034 mov esi, esp */
  ESI = (ESP);
  /* 12392036 push 3 */
  push32((uint32_t)(0x3u));
  /* 12392038 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x1239203eu);
  /* 1239203e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392041 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392043 call 0x123935b0 */
  push32(0x12392048u); f_123935b0();
  /* 12392048 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239204d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239204f je 0x123920c6 */
  if (C.zf) goto L_123920c6;
  /* 12392051 mov esi, esp */
  ESI = (ESP);
  /* 12392053 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392055 push 0xa */
  push32((uint32_t)(0xau));
  /* 12392057 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239205du);
  /* 1239205d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392060 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392062 call 0x123935b0 */
  push32(0x12392067u); f_123935b0();
  /* 12392067 mov esi, esp */
  ESI = (ESP);
  /* 12392069 push 0x123bb274 */
  push32((uint32_t)(0x123bb274u));
  /* 1239206e call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392074u);
  /* 12392074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392077 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392079 call 0x123935b0 */
  push32(0x1239207eu); f_123935b0();
  /* 1239207e mov esi, esp */
  ESI = (ESP);
  /* 12392080 push 0x123c0498 */
  push32((uint32_t)(0x123c0498u));
  /* 12392085 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392087 call dword ptr [0x123c33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f4))), 0x1239208du);
  /* 1239208d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392092 call 0x123935b0 */
  push32(0x12392097u); f_123935b0();
  /* 12392097 mov esi, esp */
  ESI = (ESP);
  /* 12392099 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1239209e push 5 */
  push32((uint32_t)(0x5u));
  /* 123920a0 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x123920a6u);
  /* 123920a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123920a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123920ab call 0x123935b0 */
  push32(0x123920b0u); f_123935b0();
  /* 123920b0 mov esi, esp */
  ESI = (ESP);
  /* 123920b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 123920b4 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123920b6 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123920bcu);
  /* 123920bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123920bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123920c1 call 0x123935b0 */
  push32(0x123920c6u); f_123935b0();
L_123920c6:;
  /* 123920c6 mov esi, esp */
  ESI = (ESP);
  /* 123920c8 push 0xb */
  push32((uint32_t)(0xbu));
  /* 123920ca call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123920d0u);
  /* 123920d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123920d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123920d5 call 0x123935b0 */
  push32(0x123920dau); f_123935b0();
  /* 123920da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123920df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123920e1 je 0x12392191 */
  if (C.zf) goto L_12392191;
  /* 123920e7 mov esi, esp */
  ESI = (ESP);
  /* 123920e9 push 5 */
  push32((uint32_t)(0x5u));
  /* 123920eb call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x123920f1u);
  /* 123920f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123920f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123920f6 call 0x123935b0 */
  push32(0x123920fbu); f_123935b0();
  /* 123920fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392102 je 0x12392191 */
  if (C.zf) goto L_12392191;
  /* 12392108 mov esi, esp */
  ESI = (ESP);
  /* 1239210a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239210c push 0xb */
  push32((uint32_t)(0xbu));
  /* 1239210e call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392114u);
  /* 12392114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392119 call 0x123935b0 */
  push32(0x1239211eu); f_123935b0();
  /* 1239211e mov esi, esp */
  ESI = (ESP);
  /* 12392120 push 0x123bb268 */
  push32((uint32_t)(0x123bb268u));
  /* 12392125 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x1239212bu);
  /* 1239212b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239212e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392130 call 0x123935b0 */
  push32(0x12392135u); f_123935b0();
  /* 12392135 mov esi, esp */
  ESI = (ESP);
  /* 12392137 push 0x123bb25c */
  push32((uint32_t)(0x123bb25cu));
  /* 1239213c call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392142u);
  /* 12392142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392145 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392147 call 0x123935b0 */
  push32(0x1239214cu); f_123935b0();
  /* 1239214c mov esi, esp */
  ESI = (ESP);
  /* 1239214e push 0 */
  push32((uint32_t)(0x0u));
  /* 12392150 call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x12392156u);
  /* 12392156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392159 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239215b call 0x123935b0 */
  push32(0x12392160u); f_123935b0();
  /* 12392160 mov esi, esp */
  ESI = (ESP);
  /* 12392162 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392164 push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 12392169 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239216b call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12392171u);
  /* 12392171 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392174 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392176 call 0x123935b0 */
  push32(0x1239217bu); f_123935b0();
  /* 1239217b mov esi, esp */
  ESI = (ESP);
  /* 1239217d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239217f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12392181 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392187u);
  /* 12392187 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239218a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239218c call 0x123935b0 */
  push32(0x12392191u); f_123935b0();
L_12392191:;
  /* 12392191 mov esi, esp */
  ESI = (ESP);
  /* 12392193 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12392195 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x1239219bu);
  /* 1239219b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239219e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123921a0 call 0x123935b0 */
  push32(0x123921a5u); f_123935b0();
  /* 123921a5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123921aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123921ac je 0x12392286 */
  if (C.zf) goto L_12392286;
  /* 123921b2 mov esi, esp */
  ESI = (ESP);
  /* 123921b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123921b6 push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 123921bb call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x123921c1u);
  /* 123921c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123921c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123921c6 call 0x123935b0 */
  push32(0x123921cbu); f_123935b0();
  /* 123921cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123921cd jle 0x12392286 */
  if ((C.zf||C.sf!=C.of)) goto L_12392286;
  /* 123921d3 mov esi, esp */
  ESI = (ESP);
  /* 123921d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123921d7 push 0xc */
  push32((uint32_t)(0xcu));
  /* 123921d9 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123921dfu);
  /* 123921df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123921e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123921e4 call 0x123935b0 */
  push32(0x123921e9u); f_123935b0();
  /* 123921e9 mov esi, esp */
  ESI = (ESP);
  /* 123921eb push 0x123bb250 */
  push32((uint32_t)(0x123bb250u));
  /* 123921f0 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x123921f6u);
  /* 123921f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123921f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123921fb call 0x123935b0 */
  push32(0x12392200u); f_123935b0();
  /* 12392200 mov esi, esp */
  ESI = (ESP);
  /* 12392202 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12392204 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x1239220au);
  /* 1239220a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239220d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239220f call 0x123935b0 */
  push32(0x12392214u); f_123935b0();
  /* 12392214 mov esi, esp */
  ESI = (ESP);
  /* 12392216 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12392218 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x1239221eu);
  /* 1239221e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392221 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392223 call 0x123935b0 */
  push32(0x12392228u); f_123935b0();
  /* 12392228 mov esi, esp */
  ESI = (ESP);
  /* 1239222a push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1239222c call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392232u);
  /* 12392232 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392235 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392237 call 0x123935b0 */
  push32(0x1239223cu); f_123935b0();
  /* 1239223c mov esi, esp */
  ESI = (ESP);
  /* 1239223e push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12392243 push 6 */
  push32((uint32_t)(0x6u));
  /* 12392245 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x1239224bu);
  /* 1239224b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239224e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392250 call 0x123935b0 */
  push32(0x12392255u); f_123935b0();
  /* 12392255 mov esi, esp */
  ESI = (ESP);
  /* 12392257 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392259 push 0x123c0458 */
  push32((uint32_t)(0x123c0458u));
  /* 1239225e push 0 */
  push32((uint32_t)(0x0u));
  /* 12392260 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12392266u);
  /* 12392266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392269 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239226b call 0x123935b0 */
  push32(0x12392270u); f_123935b0();
  /* 12392270 mov esi, esp */
  ESI = (ESP);
  /* 12392272 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392274 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12392276 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239227cu);
  /* 1239227c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239227f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392281 call 0x123935b0 */
  push32(0x12392286u); f_123935b0();
L_12392286:;
  /* 12392286 mov esi, esp */
  ESI = (ESP);
  /* 12392288 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1239228a call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392290u);
  /* 12392290 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392293 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392295 call 0x123935b0 */
  push32(0x1239229au); f_123935b0();
  /* 1239229a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239229f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123922a1 je 0x12392303 */
  if (C.zf) goto L_12392303;
  /* 123922a3 mov esi, esp */
  ESI = (ESP);
  /* 123922a5 push 6 */
  push32((uint32_t)(0x6u));
  /* 123922a7 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x123922adu);
  /* 123922ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123922b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123922b2 call 0x123935b0 */
  push32(0x123922b7u); f_123935b0();
  /* 123922b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123922bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123922be je 0x12392303 */
  if (C.zf) goto L_12392303;
  /* 123922c0 mov esi, esp */
  ESI = (ESP);
  /* 123922c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123922c4 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123922c6 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123922ccu);
  /* 123922cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123922cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123922d1 call 0x123935b0 */
  push32(0x123922d6u); f_123935b0();
  /* 123922d6 mov esi, esp */
  ESI = (ESP);
  /* 123922d8 push 0x123bb244 */
  push32((uint32_t)(0x123bb244u));
  /* 123922dd call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x123922e3u);
  /* 123922e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123922e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123922e8 call 0x123935b0 */
  push32(0x123922edu); f_123935b0();
  /* 123922ed mov esi, esp */
  ESI = (ESP);
  /* 123922ef push 1 */
  push32((uint32_t)(0x1u));
  /* 123922f1 push 0xe */
  push32((uint32_t)(0xeu));
  /* 123922f3 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123922f9u);
  /* 123922f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123922fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123922fe call 0x123935b0 */
  push32(0x12392303u); f_123935b0();
L_12392303:;
  /* 12392303 mov esi, esp */
  ESI = (ESP);
  /* 12392305 push 0xe */
  push32((uint32_t)(0xeu));
  /* 12392307 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x1239230du);
  /* 1239230d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392310 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392312 call 0x123935b0 */
  push32(0x12392317u); f_123935b0();
  /* 12392317 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239231c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239231e je 0x123923dd */
  if (C.zf) goto L_123923dd;
  /* 12392324 mov esi, esp */
  ESI = (ESP);
  /* 12392326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392328 push 0x123c0458 */
  push32((uint32_t)(0x123c0458u));
  /* 1239232d call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x12392333u);
  /* 12392333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392338 call 0x123935b0 */
  push32(0x1239233du); f_123935b0();
  /* 1239233d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239233f jle 0x123923dd */
  if ((C.zf||C.sf!=C.of)) goto L_123923dd;
  /* 12392345 mov esi, esp */
  ESI = (ESP);
  /* 12392347 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392349 push 0xe */
  push32((uint32_t)(0xeu));
  /* 1239234b call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392351u);
  /* 12392351 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392354 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392356 call 0x123935b0 */
  push32(0x1239235bu); f_123935b0();
  /* 1239235b mov esi, esp */
  ESI = (ESP);
  /* 1239235d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239235f push 0xf */
  push32((uint32_t)(0xfu));
  /* 12392361 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392367u);
  /* 12392367 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239236a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239236c call 0x123935b0 */
  push32(0x12392371u); f_123935b0();
  /* 12392371 mov esi, esp */
  ESI = (ESP);
  /* 12392373 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12392375 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x1239237bu);
  /* 1239237b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239237e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392380 call 0x123935b0 */
  push32(0x12392385u); f_123935b0();
  /* 12392385 mov esi, esp */
  ESI = (ESP);
  /* 12392387 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12392389 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x1239238fu);
  /* 1239238f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392392 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392394 call 0x123935b0 */
  push32(0x12392399u); f_123935b0();
  /* 12392399 mov esi, esp */
  ESI = (ESP);
  /* 1239239b push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1239239d call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x123923a3u);
  /* 123923a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123923a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123923a8 call 0x123935b0 */
  push32(0x123923adu); f_123935b0();
  /* 123923ad mov esi, esp */
  ESI = (ESP);
  /* 123923af push 0x123bb238 */
  push32((uint32_t)(0x123bb238u));
  /* 123923b4 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x123923bau);
  /* 123923ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123923bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123923bf call 0x123935b0 */
  push32(0x123923c4u); f_123935b0();
  /* 123923c4 mov esi, esp */
  ESI = (ESP);
  /* 123923c6 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 123923cb push 7 */
  push32((uint32_t)(0x7u));
  /* 123923cd call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x123923d3u);
  /* 123923d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123923d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123923d8 call 0x123935b0 */
  push32(0x123923ddu); f_123935b0();
L_123923dd:;
  /* 123923dd mov esi, esp */
  ESI = (ESP);
  /* 123923df push 0xf */
  push32((uint32_t)(0xfu));
  /* 123923e1 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123923e7u);
  /* 123923e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123923ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123923ec call 0x123935b0 */
  push32(0x123923f1u); f_123935b0();
  /* 123923f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123923f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123923f8 je 0x123924b3 */
  if (C.zf) goto L_123924b3;
  /* 123923fe mov esi, esp */
  ESI = (ESP);
  /* 12392400 push 7 */
  push32((uint32_t)(0x7u));
  /* 12392402 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12392408u);
  /* 12392408 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239240b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239240d call 0x123935b0 */
  push32(0x12392412u); f_123935b0();
  /* 12392412 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392417 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392419 je 0x123924b3 */
  if (C.zf) goto L_123924b3;
  /* 1239241f mov esi, esp */
  ESI = (ESP);
  /* 12392421 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392423 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12392425 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239242bu);
  /* 1239242b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239242e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392430 call 0x123935b0 */
  push32(0x12392435u); f_123935b0();
  /* 12392435 mov esi, esp */
  ESI = (ESP);
  /* 12392437 push 0x123bb22c */
  push32((uint32_t)(0x123bb22cu));
  /* 1239243c call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392442u);
  /* 12392442 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392445 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392447 call 0x123935b0 */
  push32(0x1239244cu); f_123935b0();
  /* 1239244c mov esi, esp */
  ESI = (ESP);
  /* 1239244e push 0 */
  push32((uint32_t)(0x0u));
  /* 12392450 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392452 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x12392458u);
  /* 12392458 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239245b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239245d call 0x123935b0 */
  push32(0x12392462u); f_123935b0();
  /* 12392462 mov dword ptr [0x123c03e8], eax */
  w32((uint32_t)(0x123c03e8), (EAX));
  /* 12392467 mov esi, esp */
  ESI = (ESP);
  /* 12392469 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239246b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239246d call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x12392473u);
  /* 12392473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392476 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392478 call 0x123935b0 */
  push32(0x1239247du); f_123935b0();
  /* 1239247d mov dword ptr [0x123c03e4], eax */
  w32((uint32_t)(0x123c03e4), (EAX));
  /* 12392482 mov esi, esp */
  ESI = (ESP);
  /* 12392484 push 3 */
  push32((uint32_t)(0x3u));
  /* 12392486 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392488 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x1239248eu);
  /* 1239248e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392493 call 0x123935b0 */
  push32(0x12392498u); f_123935b0();
  /* 12392498 mov dword ptr [0x123c03e0], eax */
  w32((uint32_t)(0x123c03e0), (EAX));
  /* 1239249d mov esi, esp */
  ESI = (ESP);
  /* 1239249f push 1 */
  push32((uint32_t)(0x1u));
  /* 123924a1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123924a3 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123924a9u);
  /* 123924a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123924ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123924ae call 0x123935b0 */
  push32(0x123924b3u); f_123935b0();
L_123924b3:;
  /* 123924b3 mov esi, esp */
  ESI = (ESP);
  /* 123924b5 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 123924b7 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123924bdu);
  /* 123924bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123924c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123924c2 call 0x123935b0 */
  push32(0x123924c7u); f_123935b0();
  /* 123924c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123924cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123924ce je 0x1239258a */
  if (C.zf) goto L_1239258a;
  /* 123924d4 mov esi, esp */
  ESI = (ESP);
  /* 123924d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123924d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123924da call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x123924e0u);
  /* 123924e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123924e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123924e5 call 0x123935b0 */
  push32(0x123924eau); f_123935b0();
  /* 123924ea cmp eax, dword ptr [0x123c03e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c03e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123924f0 jg 0x1239252e */
  if ((!C.zf&&C.sf==C.of)) goto L_1239252e;
  /* 123924f2 mov esi, esp */
  ESI = (ESP);
  /* 123924f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 123924f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123924f8 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x123924feu);
  /* 123924fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392503 call 0x123935b0 */
  push32(0x12392508u); f_123935b0();
  /* 12392508 cmp eax, dword ptr [0x123c03e4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c03e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239250e jg 0x1239252e */
  if ((!C.zf&&C.sf==C.of)) goto L_1239252e;
  /* 12392510 mov esi, esp */
  ESI = (ESP);
  /* 12392512 push 3 */
  push32((uint32_t)(0x3u));
  /* 12392514 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392516 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x1239251cu);
  /* 1239251c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239251f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392521 call 0x123935b0 */
  push32(0x12392526u); f_123935b0();
  /* 12392526 cmp eax, dword ptr [0x123c03e0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123c03e0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239252c jle 0x1239258a */
  if ((C.zf||C.sf!=C.of)) goto L_1239258a;
L_1239252e:;
  /* 1239252e mov esi, esp */
  ESI = (ESP);
  /* 12392530 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392532 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12392534 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239253au);
  /* 1239253a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239253d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239253f call 0x123935b0 */
  push32(0x12392544u); f_123935b0();
  /* 12392544 mov esi, esp */
  ESI = (ESP);
  /* 12392546 push 0x123bb220 */
  push32((uint32_t)(0x123bb220u));
  /* 1239254b call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392551u);
  /* 12392551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392554 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392556 call 0x123935b0 */
  push32(0x1239255bu); f_123935b0();
  /* 1239255b mov esi, esp */
  ESI = (ESP);
  /* 1239255d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12392562 push 8 */
  push32((uint32_t)(0x8u));
  /* 12392564 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x1239256au);
  /* 1239256a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239256d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239256f call 0x123935b0 */
  push32(0x12392574u); f_123935b0();
  /* 12392574 mov esi, esp */
  ESI = (ESP);
  /* 12392576 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392578 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239257a call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392580u);
  /* 12392580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392585 call 0x123935b0 */
  push32(0x1239258au); f_123935b0();
L_1239258a:;
  /* 1239258a mov esi, esp */
  ESI = (ESP);
  /* 1239258c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239258e call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392594u);
  /* 12392594 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392597 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392599 call 0x123935b0 */
  push32(0x1239259eu); f_123935b0();
  /* 1239259e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123925a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123925a5 je 0x12392645 */
  if (C.zf) goto L_12392645;
  /* 123925ab mov esi, esp */
  ESI = (ESP);
  /* 123925ad push 8 */
  push32((uint32_t)(0x8u));
  /* 123925af call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x123925b5u);
  /* 123925b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123925b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123925ba call 0x123935b0 */
  push32(0x123925bfu); f_123935b0();
  /* 123925bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123925c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123925c6 je 0x12392645 */
  if (C.zf) goto L_12392645;
  /* 123925c8 mov esi, esp */
  ESI = (ESP);
  /* 123925ca push 0 */
  push32((uint32_t)(0x0u));
  /* 123925cc push 0 */
  push32((uint32_t)(0x0u));
  /* 123925ce call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x123925d4u);
  /* 123925d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123925d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123925d9 call 0x123935b0 */
  push32(0x123925deu); f_123935b0();
  /* 123925de cmp eax, 0x7f8 */
  { uint32_t _a=(EAX),_b=(0x7f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123925e3 jl 0x12392602 */
  if ((C.sf!=C.of)) goto L_12392602;
  /* 123925e5 mov esi, esp */
  ESI = (ESP);
  /* 123925e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123925e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123925eb call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x123925f1u);
  /* 123925f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123925f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123925f6 call 0x123935b0 */
  push32(0x123925fbu); f_123935b0();
  /* 123925fb cmp eax, 0x834 */
  { uint32_t _a=(EAX),_b=(0x834u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392600 jge 0x12392645 */
  if ((C.sf==C.of)) goto L_12392645;
L_12392602:;
  /* 12392602 mov esi, esp */
  ESI = (ESP);
  /* 12392604 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392606 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12392608 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239260eu);
  /* 1239260e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392611 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392613 call 0x123935b0 */
  push32(0x12392618u); f_123935b0();
  /* 12392618 mov esi, esp */
  ESI = (ESP);
  /* 1239261a push 0x123bb214 */
  push32((uint32_t)(0x123bb214u));
  /* 1239261f call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392625u);
  /* 12392625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239262a call 0x123935b0 */
  push32(0x1239262fu); f_123935b0();
  /* 1239262f mov esi, esp */
  ESI = (ESP);
  /* 12392631 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392633 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12392635 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239263bu);
  /* 1239263b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239263e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392640 call 0x123935b0 */
  push32(0x12392645u); f_123935b0();
L_12392645:;
  /* 12392645 mov esi, esp */
  ESI = (ESP);
  /* 12392647 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12392649 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x1239264fu);
  /* 1239264f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392654 call 0x123935b0 */
  push32(0x12392659u); f_123935b0();
  /* 12392659 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239265e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392660 je 0x123926df */
  if (C.zf) goto L_123926df;
  /* 12392662 mov esi, esp */
  ESI = (ESP);
  /* 12392664 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392666 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392668 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x1239266eu);
  /* 1239266e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392673 call 0x123935b0 */
  push32(0x12392678u); f_123935b0();
  /* 12392678 cmp eax, 0x7f8 */
  { uint32_t _a=(EAX),_b=(0x7f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239267d jle 0x123926df */
  if ((C.zf||C.sf!=C.of)) goto L_123926df;
  /* 1239267f mov esi, esp */
  ESI = (ESP);
  /* 12392681 push 2 */
  push32((uint32_t)(0x2u));
  /* 12392683 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392685 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x1239268bu);
  /* 1239268b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239268e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392690 call 0x123935b0 */
  push32(0x12392695u); f_123935b0();
  /* 12392695 cmp eax, 0x834 */
  { uint32_t _a=(EAX),_b=(0x834u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239269a jle 0x123926df */
  if ((C.zf||C.sf!=C.of)) goto L_123926df;
  /* 1239269c mov esi, esp */
  ESI = (ESP);
  /* 1239269e push 0 */
  push32((uint32_t)(0x0u));
  /* 123926a0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 123926a2 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123926a8u);
  /* 123926a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123926ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123926ad call 0x123935b0 */
  push32(0x123926b2u); f_123935b0();
  /* 123926b2 mov esi, esp */
  ESI = (ESP);
  /* 123926b4 push 0x123bb208 */
  push32((uint32_t)(0x123bb208u));
  /* 123926b9 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x123926bfu);
  /* 123926bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123926c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123926c4 call 0x123935b0 */
  push32(0x123926c9u); f_123935b0();
  /* 123926c9 mov esi, esp */
  ESI = (ESP);
  /* 123926cb push 1 */
  push32((uint32_t)(0x1u));
  /* 123926cd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123926cf call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123926d5u);
  /* 123926d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123926d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123926da call 0x123935b0 */
  push32(0x123926dfu); f_123935b0();
L_123926df:;
  /* 123926df mov esi, esp */
  ESI = (ESP);
  /* 123926e1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 123926e3 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123926e9u);
  /* 123926e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123926ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123926ee call 0x123935b0 */
  push32(0x123926f3u); f_123935b0();
  /* 123926f3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123926f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123926fa je 0x123927b7 */
  if (C.zf) goto L_123927b7;
  /* 12392700 mov esi, esp */
  ESI = (ESP);
  /* 12392702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392704 push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 12392709 call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x1239270fu);
  /* 1239270f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392712 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392714 call 0x123935b0 */
  push32(0x12392719u); f_123935b0();
  /* 12392719 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239271c jle 0x123927b7 */
  if ((C.zf||C.sf!=C.of)) goto L_123927b7;
  /* 12392722 mov esi, esp */
  ESI = (ESP);
  /* 12392724 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392726 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12392728 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239272eu);
  /* 1239272e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392733 call 0x123935b0 */
  push32(0x12392738u); f_123935b0();
  /* 12392738 mov esi, esp */
  ESI = (ESP);
  /* 1239273a push 0x123bb1fc */
  push32((uint32_t)(0x123bb1fcu));
  /* 1239273f call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392745u);
  /* 12392745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239274a call 0x123935b0 */
  push32(0x1239274fu); f_123935b0();
  /* 1239274f mov esi, esp */
  ESI = (ESP);
  /* 12392751 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12392753 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392759u);
  /* 12392759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239275c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239275e call 0x123935b0 */
  push32(0x12392763u); f_123935b0();
  /* 12392763 mov esi, esp */
  ESI = (ESP);
  /* 12392765 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12392767 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x1239276du);
  /* 1239276d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392770 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392772 call 0x123935b0 */
  push32(0x12392777u); f_123935b0();
  /* 12392777 mov esi, esp */
  ESI = (ESP);
  /* 12392779 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1239277b call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392781u);
  /* 12392781 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392786 call 0x123935b0 */
  push32(0x1239278bu); f_123935b0();
  /* 1239278b mov esi, esp */
  ESI = (ESP);
  /* 1239278d push 1 */
  push32((uint32_t)(0x1u));
  /* 1239278f push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12392791 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392797u);
  /* 12392797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239279a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239279c call 0x123935b0 */
  push32(0x123927a1u); f_123935b0();
  /* 123927a1 mov esi, esp */
  ESI = (ESP);
  /* 123927a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123927a5 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123927a7 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123927adu);
  /* 123927ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123927b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123927b2 call 0x123935b0 */
  push32(0x123927b7u); f_123935b0();
L_123927b7:;
  /* 123927b7 mov esi, esp */
  ESI = (ESP);
  /* 123927b9 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 123927bb call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123927c1u);
  /* 123927c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123927c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123927c6 call 0x123935b0 */
  push32(0x123927cbu); f_123935b0();
  /* 123927cb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123927d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123927d2 je 0x123927ef */
  if (C.zf) goto L_123927ef;
  /* 123927d4 mov esi, esp */
  ESI = (ESP);
  /* 123927d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123927d8 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 123927dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123927df call dword ptr [0x123c3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3414))), 0x123927e5u);
  /* 123927e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123927e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123927ea call 0x123935b0 */
  push32(0x123927efu); f_123935b0();
L_123927ef:;
  /* 123927ef mov esi, esp */
  ESI = (ESP);
  /* 123927f1 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 123927f3 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123927f9u);
  /* 123927f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123927fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123927fe call 0x123935b0 */
  push32(0x12392803u); f_123935b0();
  /* 12392803 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392808 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239280a je 0x123928ba */
  if (C.zf) goto L_123928ba;
  /* 12392810 mov esi, esp */
  ESI = (ESP);
  /* 12392812 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392814 push 0x123c0428 */
  push32((uint32_t)(0x123c0428u));
  /* 12392819 push 0x123c0480 */
  push32((uint32_t)(0x123c0480u));
  /* 1239281e call dword ptr [0x123c3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3430))), 0x12392824u);
  /* 12392824 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392827 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392829 call 0x123935b0 */
  push32(0x1239282eu); f_123935b0();
  /* 1239282e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392830 jle 0x123928ba */
  if ((C.zf||C.sf!=C.of)) goto L_123928ba;
  /* 12392836 mov esi, esp */
  ESI = (ESP);
  /* 12392838 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239283a push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1239283c call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392842u);
  /* 12392842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392847 call 0x123935b0 */
  push32(0x1239284cu); f_123935b0();
  /* 1239284c mov esi, esp */
  ESI = (ESP);
  /* 1239284e push 0x123bb1f0 */
  push32((uint32_t)(0x123bb1f0u));
  /* 12392853 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392859u);
  /* 12392859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239285c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239285e call 0x123935b0 */
  push32(0x12392863u); f_123935b0();
  /* 12392863 mov esi, esp */
  ESI = (ESP);
  /* 12392865 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392867 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12392869 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239286fu);
  /* 1239286f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392872 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392874 call 0x123935b0 */
  push32(0x12392879u); f_123935b0();
  /* 12392879 mov esi, esp */
  ESI = (ESP);
  /* 1239287b push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1239287d call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392883u);
  /* 12392883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392886 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392888 call 0x123935b0 */
  push32(0x1239288du); f_123935b0();
  /* 1239288d mov esi, esp */
  ESI = (ESP);
  /* 1239288f push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12392891 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392897u);
  /* 12392897 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239289a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239289c call 0x123935b0 */
  push32(0x123928a1u); f_123935b0();
  /* 123928a1 mov esi, esp */
  ESI = (ESP);
  /* 123928a3 push 0x96 */
  push32((uint32_t)(0x96u));
  /* 123928a8 push 9 */
  push32((uint32_t)(0x9u));
  /* 123928aa call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x123928b0u);
  /* 123928b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123928b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123928b5 call 0x123935b0 */
  push32(0x123928bau); f_123935b0();
L_123928ba:;
  /* 123928ba mov esi, esp */
  ESI = (ESP);
  /* 123928bc push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123928be call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x123928c4u);
  /* 123928c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123928c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123928c9 call 0x123935b0 */
  push32(0x123928ceu); f_123935b0();
  /* 123928ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123928d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123928d5 je 0x12392950 */
  if (C.zf) goto L_12392950;
  /* 123928d7 mov esi, esp */
  ESI = (ESP);
  /* 123928d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 123928db call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x123928e1u);
  /* 123928e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123928e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123928e6 call 0x123935b0 */
  push32(0x123928ebu); f_123935b0();
  /* 123928eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 123928f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123928f2 je 0x12392950 */
  if (C.zf) goto L_12392950;
  /* 123928f4 mov esi, esp */
  ESI = (ESP);
  /* 123928f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123928f8 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 123928fa call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392900u);
  /* 12392900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392903 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392905 call 0x123935b0 */
  push32(0x1239290au); f_123935b0();
  /* 1239290a mov esi, esp */
  ESI = (ESP);
  /* 1239290c push 0x123bb1e4 */
  push32((uint32_t)(0x123bb1e4u));
  /* 12392911 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392917u);
  /* 12392917 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239291a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239291c call 0x123935b0 */
  push32(0x12392921u); f_123935b0();
  /* 12392921 mov esi, esp */
  ESI = (ESP);
  /* 12392923 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392925 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12392927 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x1239292du);
  /* 1239292d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392930 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392932 call 0x123935b0 */
  push32(0x12392937u); f_123935b0();
  /* 12392937 mov esi, esp */
  ESI = (ESP);
  /* 12392939 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 1239293e push 0xa */
  push32((uint32_t)(0xau));
  /* 12392940 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12392946u);
  /* 12392946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392949 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239294b call 0x123935b0 */
  push32(0x12392950u); f_123935b0();
L_12392950:;
  /* 12392950 mov esi, esp */
  ESI = (ESP);
  /* 12392952 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12392954 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x1239295au);
  /* 1239295a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239295d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239295f call 0x123935b0 */
  push32(0x12392964u); f_123935b0();
  /* 12392964 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239296b je 0x12392a61 */
  if (C.zf) goto L_12392a61;
  /* 12392971 mov esi, esp */
  ESI = (ESP);
  /* 12392973 push 0xa */
  push32((uint32_t)(0xau));
  /* 12392975 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x1239297bu);
  /* 1239297b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239297e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392980 call 0x123935b0 */
  push32(0x12392985u); f_123935b0();
  /* 12392985 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239298a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239298c je 0x12392a61 */
  if (C.zf) goto L_12392a61;
  /* 12392992 mov esi, esp */
  ESI = (ESP);
  /* 12392994 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392996 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392998 call dword ptr [0x123c342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c342c))), 0x1239299eu);
  /* 1239299e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123929a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123929a3 call 0x123935b0 */
  push32(0x123929a8u); f_123935b0();
  /* 123929a8 cmp eax, 0x1c2 */
  { uint32_t _a=(EAX),_b=(0x1c2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123929ad jle 0x12392a61 */
  if ((C.zf||C.sf!=C.of)) goto L_12392a61;
  /* 123929b3 mov esi, esp */
  ESI = (ESP);
  /* 123929b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123929b7 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 123929b9 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x123929bfu);
  /* 123929bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123929c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123929c4 call 0x123935b0 */
  push32(0x123929c9u); f_123935b0();
  /* 123929c9 mov esi, esp */
  ESI = (ESP);
  /* 123929cb push 0 */
  push32((uint32_t)(0x0u));
  /* 123929cd call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x123929d3u);
  /* 123929d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123929d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123929d8 call 0x123935b0 */
  push32(0x123929ddu); f_123935b0();
  /* 123929dd mov esi, esp */
  ESI = (ESP);
  /* 123929df push 1 */
  push32((uint32_t)(0x1u));
  /* 123929e1 push 0x123c0410 */
  push32((uint32_t)(0x123c0410u));
  /* 123929e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123929e8 call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x123929eeu);
  /* 123929ee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123929f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123929f3 call 0x123935b0 */
  push32(0x123929f8u); f_123935b0();
  /* 123929f8 mov esi, esp */
  ESI = (ESP);
  /* 123929fa push 0x47 */
  push32((uint32_t)(0x47u));
  /* 123929fc call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392a02u);
  /* 12392a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a07 call 0x123935b0 */
  push32(0x12392a0cu); f_123935b0();
  /* 12392a0c mov esi, esp */
  ESI = (ESP);
  /* 12392a0e push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12392a10 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392a16u);
  /* 12392a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a19 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a1b call 0x123935b0 */
  push32(0x12392a20u); f_123935b0();
  /* 12392a20 mov esi, esp */
  ESI = (ESP);
  /* 12392a22 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12392a24 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392a2au);
  /* 12392a2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a2f call 0x123935b0 */
  push32(0x12392a34u); f_123935b0();
  /* 12392a34 mov esi, esp */
  ESI = (ESP);
  /* 12392a36 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392a38 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12392a3a call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392a40u);
  /* 12392a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a45 call 0x123935b0 */
  push32(0x12392a4au); f_123935b0();
  /* 12392a4a mov esi, esp */
  ESI = (ESP);
  /* 12392a4c push 0x123bb1d8 */
  push32((uint32_t)(0x123bb1d8u));
  /* 12392a51 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392a57u);
  /* 12392a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a5c call 0x123935b0 */
  push32(0x12392a61u); f_123935b0();
L_12392a61:;
  /* 12392a61 mov esi, esp */
  ESI = (ESP);
  /* 12392a63 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12392a65 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392a6bu);
  /* 12392a6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a70 call 0x123935b0 */
  push32(0x12392a75u); f_123935b0();
  /* 12392a75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392a7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392a7c je 0x12392af7 */
  if (C.zf) goto L_12392af7;
  /* 12392a7e mov esi, esp */
  ESI = (ESP);
  /* 12392a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392a82 push 0x123c0410 */
  push32((uint32_t)(0x123c0410u));
  /* 12392a87 call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x12392a8du);
  /* 12392a8d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392a90 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392a92 call 0x123935b0 */
  push32(0x12392a97u); f_123935b0();
  /* 12392a97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392a99 jle 0x12392af7 */
  if ((C.zf||C.sf!=C.of)) goto L_12392af7;
  /* 12392a9b mov esi, esp */
  ESI = (ESP);
  /* 12392a9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12392a9f push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 12392aa1 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392aa7u);
  /* 12392aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392aac call 0x123935b0 */
  push32(0x12392ab1u); f_123935b0();
  /* 12392ab1 mov esi, esp */
  ESI = (ESP);
  /* 12392ab3 push 0x123bb1cc */
  push32((uint32_t)(0x123bb1ccu));
  /* 12392ab8 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392abeu);
  /* 12392abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392ac1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392ac3 call 0x123935b0 */
  push32(0x12392ac8u); f_123935b0();
  /* 12392ac8 mov esi, esp */
  ESI = (ESP);
  /* 12392aca push 1 */
  push32((uint32_t)(0x1u));
  /* 12392acc push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12392ace call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392ad4u);
  /* 12392ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392ad7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392ad9 call 0x123935b0 */
  push32(0x12392adeu); f_123935b0();
  /* 12392ade mov esi, esp */
  ESI = (ESP);
  /* 12392ae0 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12392ae5 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12392ae7 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12392aedu);
  /* 12392aed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392af0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392af2 call 0x123935b0 */
  push32(0x12392af7u); f_123935b0();
L_12392af7:;
  /* 12392af7 mov esi, esp */
  ESI = (ESP);
  /* 12392af9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12392afb call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392b01u);
  /* 12392b01 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b06 call 0x123935b0 */
  push32(0x12392b0bu); f_123935b0();
  /* 12392b0b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392b10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392b12 je 0x12392b8d */
  if (C.zf) goto L_12392b8d;
  /* 12392b14 mov esi, esp */
  ESI = (ESP);
  /* 12392b16 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12392b18 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12392b1eu);
  /* 12392b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b23 call 0x123935b0 */
  push32(0x12392b28u); f_123935b0();
  /* 12392b28 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392b2f je 0x12392b8d */
  if (C.zf) goto L_12392b8d;
  /* 12392b31 mov esi, esp */
  ESI = (ESP);
  /* 12392b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392b35 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12392b37 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392b3du);
  /* 12392b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b42 call 0x123935b0 */
  push32(0x12392b47u); f_123935b0();
  /* 12392b47 mov esi, esp */
  ESI = (ESP);
  /* 12392b49 push 0x123bb1c0 */
  push32((uint32_t)(0x123bb1c0u));
  /* 12392b4e call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392b54u);
  /* 12392b54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b59 call 0x123935b0 */
  push32(0x12392b5eu); f_123935b0();
  /* 12392b5e mov esi, esp */
  ESI = (ESP);
  /* 12392b60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392b62 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12392b64 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392b6au);
  /* 12392b6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b6f call 0x123935b0 */
  push32(0x12392b74u); f_123935b0();
  /* 12392b74 mov esi, esp */
  ESI = (ESP);
  /* 12392b76 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 12392b7b push 0xc */
  push32((uint32_t)(0xcu));
  /* 12392b7d call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12392b83u);
  /* 12392b83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b88 call 0x123935b0 */
  push32(0x12392b8du); f_123935b0();
L_12392b8d:;
  /* 12392b8d mov esi, esp */
  ESI = (ESP);
  /* 12392b8f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12392b91 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392b97u);
  /* 12392b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392b9c call 0x123935b0 */
  push32(0x12392ba1u); f_123935b0();
  /* 12392ba1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392ba6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392ba8 je 0x12392c69 */
  if (C.zf) goto L_12392c69;
  /* 12392bae mov esi, esp */
  ESI = (ESP);
  /* 12392bb0 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12392bb2 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12392bb8u);
  /* 12392bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392bbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392bbd call 0x123935b0 */
  push32(0x12392bc2u); f_123935b0();
  /* 12392bc2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392bc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392bc9 je 0x12392c69 */
  if (C.zf) goto L_12392c69;
  /* 12392bcf mov esi, esp */
  ESI = (ESP);
  /* 12392bd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392bd3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12392bd5 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392bdbu);
  /* 12392bdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392be0 call 0x123935b0 */
  push32(0x12392be5u); f_123935b0();
  /* 12392be5 mov esi, esp */
  ESI = (ESP);
  /* 12392be7 push 0x123bb1b4 */
  push32((uint32_t)(0x123bb1b4u));
  /* 12392bec call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392bf2u);
  /* 12392bf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392bf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392bf7 call 0x123935b0 */
  push32(0x12392bfcu); f_123935b0();
  /* 12392bfc mov esi, esp */
  ESI = (ESP);
  /* 12392bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12392c00 call dword ptr [0x123c3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3404))), 0x12392c06u);
  /* 12392c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c09 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c0b call 0x123935b0 */
  push32(0x12392c10u); f_123935b0();
  /* 12392c10 mov esi, esp */
  ESI = (ESP);
  /* 12392c12 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392c14 push 0x123c0460 */
  push32((uint32_t)(0x123c0460u));
  /* 12392c19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392c1b call dword ptr [0x123c33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33ec))), 0x12392c21u);
  /* 12392c21 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c26 call 0x123935b0 */
  push32(0x12392c2bu); f_123935b0();
  /* 12392c2b mov esi, esp */
  ESI = (ESP);
  /* 12392c2d push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12392c2f call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392c35u);
  /* 12392c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c3a call 0x123935b0 */
  push32(0x12392c3fu); f_123935b0();
  /* 12392c3f mov esi, esp */
  ESI = (ESP);
  /* 12392c41 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12392c43 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392c49u);
  /* 12392c49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c4e call 0x123935b0 */
  push32(0x12392c53u); f_123935b0();
  /* 12392c53 mov esi, esp */
  ESI = (ESP);
  /* 12392c55 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392c57 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12392c59 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392c5fu);
  /* 12392c5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c64 call 0x123935b0 */
  push32(0x12392c69u); f_123935b0();
L_12392c69:;
  /* 12392c69 mov esi, esp */
  ESI = (ESP);
  /* 12392c6b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12392c6d call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392c73u);
  /* 12392c73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c78 call 0x123935b0 */
  push32(0x12392c7du); f_123935b0();
  /* 12392c7d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392c84 je 0x12392d46 */
  if (C.zf) goto L_12392d46;
  /* 12392c8a mov esi, esp */
  ESI = (ESP);
  /* 12392c8c push 0 */
  push32((uint32_t)(0x0u));
  /* 12392c8e push 0x123c0460 */
  push32((uint32_t)(0x123c0460u));
  /* 12392c93 call dword ptr [0x123c341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c341c))), 0x12392c99u);
  /* 12392c99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392c9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392c9e call 0x123935b0 */
  push32(0x12392ca3u); f_123935b0();
  /* 12392ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392ca5 jle 0x12392d46 */
  if ((C.zf||C.sf!=C.of)) goto L_12392d46;
  /* 12392cab mov esi, esp */
  ESI = (ESP);
  /* 12392cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12392caf push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12392cb1 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392cb7u);
  /* 12392cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392cba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392cbc call 0x123935b0 */
  push32(0x12392cc1u); f_123935b0();
  /* 12392cc1 mov esi, esp */
  ESI = (ESP);
  /* 12392cc3 push 0x123bb1a8 */
  push32((uint32_t)(0x123bb1a8u));
  /* 12392cc8 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392cceu);
  /* 12392cce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392cd1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392cd3 call 0x123935b0 */
  push32(0x12392cd8u); f_123935b0();
  /* 12392cd8 mov esi, esp */
  ESI = (ESP);
  /* 12392cda push 0x123bb19c */
  push32((uint32_t)(0x123bb19cu));
  /* 12392cdf call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392ce5u);
  /* 12392ce5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392ce8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392cea call 0x123935b0 */
  push32(0x12392cefu); f_123935b0();
  /* 12392cef mov esi, esp */
  ESI = (ESP);
  /* 12392cf1 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12392cf3 call dword ptr [0x123c3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3420))), 0x12392cf9u);
  /* 12392cf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392cfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392cfe call 0x123935b0 */
  push32(0x12392d03u); f_123935b0();
  /* 12392d03 mov esi, esp */
  ESI = (ESP);
  /* 12392d05 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12392d07 call dword ptr [0x123c3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3400))), 0x12392d0du);
  /* 12392d0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d12 call 0x123935b0 */
  push32(0x12392d17u); f_123935b0();
  /* 12392d17 mov esi, esp */
  ESI = (ESP);
  /* 12392d19 push 1 */
  push32((uint32_t)(0x1u));
  /* 12392d1b push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12392d1d call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392d23u);
  /* 12392d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d28 call 0x123935b0 */
  push32(0x12392d2du); f_123935b0();
  /* 12392d2d mov esi, esp */
  ESI = (ESP);
  /* 12392d2f push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 12392d34 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12392d36 call dword ptr [0x123c33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f8))), 0x12392d3cu);
  /* 12392d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d41 call 0x123935b0 */
  push32(0x12392d46u); f_123935b0();
L_12392d46:;
  /* 12392d46 mov esi, esp */
  ESI = (ESP);
  /* 12392d48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12392d4a call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392d50u);
  /* 12392d50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d55 call 0x123935b0 */
  push32(0x12392d5au); f_123935b0();
  /* 12392d5a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392d5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392d61 je 0x12392dc3 */
  if (C.zf) goto L_12392dc3;
  /* 12392d63 mov esi, esp */
  ESI = (ESP);
  /* 12392d65 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12392d67 call dword ptr [0x123c3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3408))), 0x12392d6du);
  /* 12392d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d72 call 0x123935b0 */
  push32(0x12392d77u); f_123935b0();
  /* 12392d77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392d7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392d7e je 0x12392dc3 */
  if (C.zf) goto L_12392dc3;
  /* 12392d80 mov esi, esp */
  ESI = (ESP);
  /* 12392d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392d84 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 12392d86 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392d8cu);
  /* 12392d8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392d91 call 0x123935b0 */
  push32(0x12392d96u); f_123935b0();
  /* 12392d96 mov esi, esp */
  ESI = (ESP);
  /* 12392d98 push 0x123bb190 */
  push32((uint32_t)(0x123bb190u));
  /* 12392d9d call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392da3u);
  /* 12392da3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392da6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392da8 call 0x123935b0 */
  push32(0x12392dadu); f_123935b0();
  /* 12392dad mov esi, esp */
  ESI = (ESP);
  /* 12392daf push 0 */
  push32((uint32_t)(0x0u));
  /* 12392db1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12392db3 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392db9u);
  /* 12392db9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392dbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392dbe call 0x123935b0 */
  push32(0x12392dc3u); f_123935b0();
L_12392dc3:;
  /* 12392dc3 mov esi, esp */
  ESI = (ESP);
  /* 12392dc5 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12392dc7 call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392dcdu);
  /* 12392dcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392dd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392dd2 call 0x123935b0 */
  push32(0x12392dd7u); f_123935b0();
  /* 12392dd7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392ddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392dde je 0x12392e2a */
  if (C.zf) goto L_12392e2a;
  /* 12392de0 mov esi, esp */
  ESI = (ESP);
  /* 12392de2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392de4 call dword ptr [0x123c3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3428))), 0x12392deau);
  /* 12392dea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392ded cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392def call 0x123935b0 */
  push32(0x12392df4u); f_123935b0();
  /* 12392df4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392dfb je 0x12392e2a */
  if (C.zf) goto L_12392e2a;
  /* 12392dfd mov esi, esp */
  ESI = (ESP);
  /* 12392dff push 0 */
  push32((uint32_t)(0x0u));
  /* 12392e01 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12392e03 call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392e09u);
  /* 12392e09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e0e call 0x123935b0 */
  push32(0x12392e13u); f_123935b0();
  /* 12392e13 mov esi, esp */
  ESI = (ESP);
  /* 12392e15 push 0x123bb184 */
  push32((uint32_t)(0x123bb184u));
  /* 12392e1a call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392e20u);
  /* 12392e20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e25 call 0x123935b0 */
  push32(0x12392e2au); f_123935b0();
L_12392e2a:;
  /* 12392e2a mov esi, esp */
  ESI = (ESP);
  /* 12392e2c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12392e2e call dword ptr [0x123c33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33e8))), 0x12392e34u);
  /* 12392e34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e39 call 0x123935b0 */
  push32(0x12392e3eu); f_123935b0();
  /* 12392e3e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12392e43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12392e45 jne 0x12392e83 */
  if (!C.zf) goto L_12392e83;
  /* 12392e47 mov esi, esp */
  ESI = (ESP);
  /* 12392e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12392e4b push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12392e4d call dword ptr [0x123c33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c33f0))), 0x12392e53u);
  /* 12392e53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e58 call 0x123935b0 */
  push32(0x12392e5du); f_123935b0();
  /* 12392e5d mov esi, esp */
  ESI = (ESP);
  /* 12392e5f push 0x123bb178 */
  push32((uint32_t)(0x123bb178u));
  /* 12392e64 call dword ptr [0x123c340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c340c))), 0x12392e6au);
  /* 12392e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e6f call 0x123935b0 */
  push32(0x12392e74u); f_123935b0();
  /* 12392e74 mov esi, esp */
  ESI = (ESP);
  /* 12392e76 call dword ptr [0x123c3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3438))), 0x12392e7cu);
  /* 12392e7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e7e call 0x123935b0 */
  push32(0x12392e83u); f_123935b0();
L_12392e83:;
  /* 12392e83 pop edi */
  EDI = (pop32());
  /* 12392e84 pop esi */
  ESI = (pop32());
  /* 12392e85 pop ebx */
  EBX = (pop32());
  /* 12392e86 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12392e89 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12392e8b call 0x123935b0 */
  push32(0x12392e90u); f_123935b0();
  /* 12392e90 mov esp, ebp */
  ESP = (EBP);
  /* 12392e92 pop ebp */
  EBP = (pop32());
  /* 12392e93 ret  */
  ESPCHK(0x123914a0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x123935b0 (56 bytes, 28 insns) */
void f_123935b0(void) {
  FTRACE(0x123935b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123935b0 jne 0x123935b3 */
  if (!C.zf) goto L_123935b3;
  /* 123935b2 ret  */
  ESPCHK(0x123935b0u, _esp0);
  ESP += 4; return;
L_123935b3:;
  /* 123935b3 push ebp */
  push32((uint32_t)(EBP));
  /* 123935b4 mov ebp, esp */
  EBP = (ESP);
  /* 123935b6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123935b9 push eax */
  push32((uint32_t)(EAX));
  /* 123935ba push edx */
  push32((uint32_t)(EDX));
  /* 123935bb push ebx */
  push32((uint32_t)(EBX));
  /* 123935bc push esi */
  push32((uint32_t)(ESI));
  /* 123935bd push edi */
  push32((uint32_t)(EDI));
  /* 123935be push 0x123bb2d0 */
  push32((uint32_t)(0x123bb2d0u));
  /* 123935c3 push 0x123bb2cc */
  push32((uint32_t)(0x123bb2ccu));
  /* 123935c8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 123935ca push 0x123bb2bc */
  push32((uint32_t)(0x123bb2bcu));
  /* 123935cf push 1 */
  push32((uint32_t)(0x1u));
  /* 123935d1 call 0x12393980 */
  push32(0x123935d6u); f_12393980();
  /* 123935d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123935d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123935dc jne 0x123935df */
  if (!C.zf) goto L_123935df;
  /* 123935de int3  */
  x86_unimpl("int3 @ 0x123935de");
L_123935df:;
  /* 123935df pop edi */
  EDI = (pop32());
  /* 123935e0 pop esi */
  ESI = (pop32());
  /* 123935e1 pop ebx */
  EBX = (pop32());
  /* 123935e2 pop edx */
  EDX = (pop32());
  /* 123935e3 pop eax */
  EAX = (pop32());
  /* 123935e4 mov esp, ebp */
  ESP = (EBP);
  /* 123935e6 pop ebp */
  EBP = (pop32());
  /* 123935e7 ret  */
  ESPCHK(0x123935b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035f0 @ 0x123935f0 (313 bytes, 78 insns) */
void f_123935f0(void) {
  FTRACE(0x123935f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123935f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123935f1 mov ebp, esp */
  EBP = (ESP);
  /* 123935f3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123935f7 jne 0x123936b7 */
  if (!C.zf) goto L_123936b7;
  /* 123935fd call dword ptr [0x123c32cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32cc))), 0x12393603u);
  /* 12393603 mov dword ptr [0x123c04e8], eax */
  w32((uint32_t)(0x123c04e8), (EAX));
  /* 12393608 push 1 */
  push32((uint32_t)(0x1u));
  /* 1239360a call 0x123970b0 */
  push32(0x1239360fu); f_123970b0();
  /* 1239360f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393614 jne 0x1239361d */
  if (!C.zf) goto L_1239361d;
  /* 12393616 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12393618 jmp 0x12393725 */
  goto L_12393725;
L_1239361d:;
  /* 1239361d mov eax, dword ptr [0x123c04e8] */
  EAX = (r32((uint32_t)(0x123c04e8)));
  /* 12393622 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12393625 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239362a mov dword ptr [0x123c04f4], eax */
  w32((uint32_t)(0x123c04f4), (EAX));
  /* 1239362f mov ecx, dword ptr [0x123c04e8] */
  ECX = (r32((uint32_t)(0x123c04e8)));
  /* 12393635 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239363b mov dword ptr [0x123c04f0], ecx */
  w32((uint32_t)(0x123c04f0), (ECX));
  /* 12393641 mov edx, dword ptr [0x123c04f0] */
  EDX = (r32((uint32_t)(0x123c04f0)));
  /* 12393647 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1239364a add edx, dword ptr [0x123c04f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123c04f4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12393650 mov dword ptr [0x123c04ec], edx */
  w32((uint32_t)(0x123c04ec), (EDX));
  /* 12393656 mov eax, dword ptr [0x123c04e8] */
  EAX = (r32((uint32_t)(0x123c04e8)));
  /* 1239365b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1239365e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12393663 mov dword ptr [0x123c04e8], eax */
  w32((uint32_t)(0x123c04e8), (EAX));
  /* 12393668 call 0x12394220 */
  push32(0x1239366du); f_12394220();
  /* 1239366d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239366f jne 0x1239367d */
  if (!C.zf) goto L_1239367d;
  /* 12393671 call 0x12397100 */
  push32(0x12393676u); f_12397100();
  /* 12393676 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12393678 jmp 0x12393725 */
  goto L_12393725;
L_1239367d:;
  /* 1239367d call dword ptr [0x123c32c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32c8))), 0x12393683u);
  /* 12393683 mov dword ptr [0x123c202c], eax */
  w32((uint32_t)(0x123c202c), (EAX));
  /* 12393688 call 0x12396e90 */
  push32(0x1239368du); f_12396e90();
  /* 1239368d mov dword ptr [0x123c04d0], eax */
  w32((uint32_t)(0x123c04d0), (EAX));
  /* 12393692 call 0x123944d0 */
  push32(0x12393697u); f_123944d0();
  /* 12393697 call 0x12396980 */
  push32(0x1239369cu); f_12396980();
  /* 1239369c call 0x12396830 */
  push32(0x123936a1u); f_12396830();
  /* 123936a1 call 0x12394020 */
  push32(0x123936a6u); f_12394020();
  /* 123936a6 mov ecx, dword ptr [0x123c04cc] */
  ECX = (r32((uint32_t)(0x123c04cc)));
  /* 123936ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123936af mov dword ptr [0x123c04cc], ecx */
  w32((uint32_t)(0x123c04cc), (ECX));
  /* 123936b5 jmp 0x12393720 */
  goto L_12393720;
L_123936b7:;
  /* 123936b7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123936bb jne 0x12393710 */
  if (!C.zf) goto L_12393710;
  /* 123936bd cmp dword ptr [0x123c04cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123936c4 jle 0x1239370a */
  if ((C.zf||C.sf!=C.of)) goto L_1239370a;
  /* 123936c6 mov edx, dword ptr [0x123c04cc] */
  EDX = (r32((uint32_t)(0x123c04cc)));
  /* 123936cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123936cf mov dword ptr [0x123c04cc], edx */
  w32((uint32_t)(0x123c04cc), (EDX));
  /* 123936d5 cmp dword ptr [0x123c0520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123936dc jne 0x123936e3 */
  if (!C.zf) goto L_123936e3;
  /* 123936de call 0x123940a0 */
  push32(0x123936e3u); f_123940a0();
L_123936e3:;
  /* 123936e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 123936e5 call 0x12395dd0 */
  push32(0x123936eau); f_12395dd0();
  /* 123936ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123936ed and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 123936f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123936f2 je 0x123936f9 */
  if (C.zf) goto L_123936f9;
  /* 123936f4 call 0x123966e0 */
  push32(0x123936f9u); f_123966e0();
L_123936f9:;
  /* 123936f9 call 0x12394800 */
  push32(0x123936feu); f_12394800();
  /* 123936fe call 0x123942b0 */
  push32(0x12393703u); f_123942b0();
  /* 12393703 call 0x12397100 */
  push32(0x12393708u); f_12397100();
  /* 12393708 jmp 0x1239370e */
  goto L_1239370e;
L_1239370a:;
  /* 1239370a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239370c jmp 0x12393725 */
  goto L_12393725;
L_1239370e:;
  /* 1239370e jmp 0x12393720 */
  goto L_12393720;
L_12393710:;
  /* 12393710 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393714 jne 0x12393720 */
  if (!C.zf) goto L_12393720;
  /* 12393716 push 0 */
  push32((uint32_t)(0x0u));
  /* 12393718 call 0x123943a0 */
  push32(0x1239371du); f_123943a0();
  /* 1239371d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393720:;
  /* 12393720 mov eax, 1 */
  EAX = (0x1u);
L_12393725:;
  /* 12393725 pop ebp */
  EBP = (pop32());
  /* 12393726 ret 0xc */
  ESPCHK(0x123935f0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12393730 (243 bytes, 86 insns) */
void f_12393730(void) {
  FTRACE(0x12393730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393730 push ebp */
  push32((uint32_t)(EBP));
  /* 12393731 mov ebp, esp */
  EBP = (ESP);
  /* 12393733 push ecx */
  push32((uint32_t)(ECX));
  /* 12393734 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239373b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239373f jne 0x12393751 */
  if (!C.zf) goto L_12393751;
  /* 12393741 cmp dword ptr [0x123c04cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393748 jne 0x12393751 */
  if (!C.zf) goto L_12393751;
  /* 1239374a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239374c jmp 0x1239381d */
  goto L_1239381d;
L_12393751:;
  /* 12393751 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393755 je 0x1239375d */
  if (C.zf) goto L_1239375d;
  /* 12393757 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239375b jne 0x1239379f */
  if (!C.zf) goto L_1239379f;
L_1239375d:;
  /* 1239375d cmp dword ptr [0x123c203c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c203c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393764 je 0x1239377b */
  if (C.zf) goto L_1239377b;
  /* 12393766 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393769 push eax */
  push32((uint32_t)(EAX));
  /* 1239376a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239376d push ecx */
  push32((uint32_t)(ECX));
  /* 1239376e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393771 push edx */
  push32((uint32_t)(EDX));
  /* 12393772 call dword ptr [0x123c203c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c203c))), 0x12393778u);
  /* 12393778 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239377b:;
  /* 1239377b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239377f je 0x12393795 */
  if (C.zf) goto L_12393795;
  /* 12393781 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393784 push eax */
  push32((uint32_t)(EAX));
  /* 12393785 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393788 push ecx */
  push32((uint32_t)(ECX));
  /* 12393789 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239378c push edx */
  push32((uint32_t)(EDX));
  /* 1239378d call 0x123935f0 */
  push32(0x12393792u); f_123935f0();
  /* 12393792 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12393795:;
  /* 12393795 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393799 jne 0x1239379f */
  if (!C.zf) goto L_1239379f;
  /* 1239379b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239379d jmp 0x1239381d */
  goto L_1239381d;
L_1239379f:;
  /* 1239379f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123937a2 push eax */
  push32((uint32_t)(EAX));
  /* 123937a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123937a6 push ecx */
  push32((uint32_t)(ECX));
  /* 123937a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123937aa push edx */
  push32((uint32_t)(EDX));
  /* 123937ab call 0x1239100a */
  push32(0x123937b0u); f_1239100a();
  /* 123937b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123937b3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123937b7 jne 0x123937ce */
  if (!C.zf) goto L_123937ce;
  /* 123937b9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123937bd jne 0x123937ce */
  if (!C.zf) goto L_123937ce;
  /* 123937bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123937c2 push eax */
  push32((uint32_t)(EAX));
  /* 123937c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123937c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123937c8 push ecx */
  push32((uint32_t)(ECX));
  /* 123937c9 call 0x123935f0 */
  push32(0x123937ceu); f_123935f0();
L_123937ce:;
  /* 123937ce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123937d2 je 0x123937da */
  if (C.zf) goto L_123937da;
  /* 123937d4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123937d8 jne 0x1239381a */
  if (!C.zf) goto L_1239381a;
L_123937da:;
  /* 123937da mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123937dd push edx */
  push32((uint32_t)(EDX));
  /* 123937de mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123937e1 push eax */
  push32((uint32_t)(EAX));
  /* 123937e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123937e5 push ecx */
  push32((uint32_t)(ECX));
  /* 123937e6 call 0x123935f0 */
  push32(0x123937ebu); f_123935f0();
  /* 123937eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123937ed jne 0x123937f6 */
  if (!C.zf) goto L_123937f6;
  /* 123937ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123937f6:;
  /* 123937f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123937fa je 0x1239381a */
  if (C.zf) goto L_1239381a;
  /* 123937fc cmp dword ptr [0x123c203c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c203c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393803 je 0x1239381a */
  if (C.zf) goto L_1239381a;
  /* 12393805 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393808 push edx */
  push32((uint32_t)(EDX));
  /* 12393809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239380c push eax */
  push32((uint32_t)(EAX));
  /* 1239380d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393810 push ecx */
  push32((uint32_t)(ECX));
  /* 12393811 call dword ptr [0x123c203c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c203c))), 0x12393817u);
  /* 12393817 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239381a:;
  /* 1239381a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239381d:;
  /* 1239381d mov esp, ebp */
  ESP = (EBP);
  /* 1239381f pop ebp */
  EBP = (pop32());
  /* 12393820 ret 0xc */
  ESPCHK(0x12393730u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12393830 (58 bytes, 18 insns) */
void f_12393830(void) {
  FTRACE(0x12393830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393830 push ebp */
  push32((uint32_t)(EBP));
  /* 12393831 mov ebp, esp */
  EBP = (ESP);
  /* 12393833 cmp dword ptr [0x123c04d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239383a je 0x1239384e */
  if (C.zf) goto L_1239384e;
  /* 1239383c cmp dword ptr [0x123c04d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393843 jne 0x12393853 */
  if (!C.zf) goto L_12393853;
  /* 12393845 cmp dword ptr [0x123c04dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239384c jne 0x12393853 */
  if (!C.zf) goto L_12393853;
L_1239384e:;
  /* 1239384e call 0x123971a0 */
  push32(0x12393853u); f_123971a0();
L_12393853:;
  /* 12393853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393856 push eax */
  push32((uint32_t)(EAX));
  /* 12393857 call 0x123971f0 */
  push32(0x1239385cu); f_123971f0();
  /* 1239385c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239385f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12393864 call dword ptr [0x123bea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bea30))), 0x1239386au);
  /* 1239386a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239386d pop ebp */
  EBP = (pop32());
  /* 1239386e ret  */
  ESPCHK(0x12393830u, _esp0);
  ESP += 4; return;
}

/* FUN_10003870 @ 0x12393870 (11 bytes, 5 insns) */
void f_12393870(void) {
  FTRACE(0x12393870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393870 push ebp */
  push32((uint32_t)(EBP));
  /* 12393871 mov ebp, esp */
  EBP = (ESP);
  /* 12393873 call dword ptr [0x123c32d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d0))), 0x12393879u);
  /* 12393879 pop ebp */
  EBP = (pop32());
  /* 1239387a ret  */
  ESPCHK(0x12393870u, _esp0);
  ESP += 4; return;
}

/* FUN_10003880 @ 0x12393880 (87 bytes, 30 insns) */
void f_12393880(void) {
  FTRACE(0x12393880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393880 push ebp */
  push32((uint32_t)(EBP));
  /* 12393881 mov ebp, esp */
  EBP = (ESP);
  /* 12393883 push ecx */
  push32((uint32_t)(ECX));
  /* 12393884 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393888 jl 0x12393890 */
  if ((C.sf!=C.of)) goto L_12393890;
  /* 1239388a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239388e jl 0x12393895 */
  if ((C.sf!=C.of)) goto L_12393895;
L_12393890:;
  /* 12393890 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12393893 jmp 0x123938d3 */
  goto L_123938d3;
L_12393895:;
  /* 12393895 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393899 jne 0x123938a7 */
  if (!C.zf) goto L_123938a7;
  /* 1239389b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239389e mov eax, dword ptr [eax*4 + 0x123bea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x123bea38)));
  /* 123938a5 jmp 0x123938d3 */
  goto L_123938d3;
L_123938a7:;
  /* 123938a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123938aa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 123938ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123938af je 0x123938b6 */
  if (C.zf) goto L_123938b6;
  /* 123938b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123938b4 jmp 0x123938d3 */
  goto L_123938d3;
L_123938b6:;
  /* 123938b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123938b9 mov eax, dword ptr [edx*4 + 0x123bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123bea38)));
  /* 123938c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123938c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123938c6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123938c9 mov dword ptr [ecx*4 + 0x123bea38], edx */
  w32((uint32_t)(ECX*4 + 0x123bea38), (EDX));
  /* 123938d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123938d3:;
  /* 123938d3 mov esp, ebp */
  ESP = (EBP);
  /* 123938d5 pop ebp */
  EBP = (pop32());
  /* 123938d6 ret  */
  ESPCHK(0x12393880u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x123938e0 (126 bytes, 38 insns) */
void f_123938e0(void) {
  FTRACE(0x123938e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123938e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123938e1 mov ebp, esp */
  EBP = (ESP);
  /* 123938e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123938e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123938e8 jl 0x123938f0 */
  if ((C.sf!=C.of)) goto L_123938f0;
  /* 123938ea cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123938ee jl 0x123938f7 */
  if ((C.sf!=C.of)) goto L_123938f7;
L_123938f0:;
  /* 123938f0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 123938f5 jmp 0x1239395a */
  goto L_1239395a;
L_123938f7:;
  /* 123938f7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123938fb jne 0x12393909 */
  if (!C.zf) goto L_12393909;
  /* 123938fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393900 mov eax, dword ptr [eax*4 + 0x123bea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x123bea44)));
  /* 12393907 jmp 0x1239395a */
  goto L_1239395a;
L_12393909:;
  /* 12393909 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239390c mov edx, dword ptr [ecx*4 + 0x123bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea44)));
  /* 12393913 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12393916 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239391a jne 0x12393930 */
  if (!C.zf) goto L_12393930;
  /* 1239391c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1239391e call dword ptr [0x123c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d4))), 0x12393924u);
  /* 12393924 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393927 mov dword ptr [ecx*4 + 0x123bea44], eax */
  w32((uint32_t)(ECX*4 + 0x123bea44), (EAX));
  /* 1239392e jmp 0x12393957 */
  goto L_12393957;
L_12393930:;
  /* 12393930 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393934 jne 0x1239394a */
  if (!C.zf) goto L_1239394a;
  /* 12393936 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12393938 call dword ptr [0x123c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d4))), 0x1239393eu);
  /* 1239393e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393941 mov dword ptr [edx*4 + 0x123bea44], eax */
  w32((uint32_t)(EDX*4 + 0x123bea44), (EAX));
  /* 12393948 jmp 0x12393957 */
  goto L_12393957;
L_1239394a:;
  /* 1239394a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239394d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393950 mov dword ptr [eax*4 + 0x123bea44], ecx */
  w32((uint32_t)(EAX*4 + 0x123bea44), (ECX));
L_12393957:;
  /* 12393957 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239395a:;
  /* 1239395a mov esp, ebp */
  ESP = (EBP);
  /* 1239395c pop ebp */
  EBP = (pop32());
  /* 1239395d ret  */
  ESPCHK(0x123938e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003960 @ 0x12393960 (28 bytes, 11 insns) */
void f_12393960(void) {
  FTRACE(0x12393960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393960 push ebp */
  push32((uint32_t)(EBP));
  /* 12393961 mov ebp, esp */
  EBP = (ESP);
  /* 12393963 push ecx */
  push32((uint32_t)(ECX));
  /* 12393964 mov eax, dword ptr [0x123c2020] */
  EAX = (r32((uint32_t)(0x123c2020)));
  /* 12393969 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239396c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239396f mov dword ptr [0x123c2020], ecx */
  w32((uint32_t)(0x123c2020), (ECX));
  /* 12393975 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393978 mov esp, ebp */
  ESP = (EBP);
  /* 1239397a pop ebp */
  EBP = (pop32());
  /* 1239397b ret  */
  ESPCHK(0x12393960u, _esp0);
  ESP += 4; return;
}

/* FUN_10003980 @ 0x12393980 (912 bytes, 248 insns) */
void f_12393980(void) {
  FTRACE(0x12393980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393980 push ebp */
  push32((uint32_t)(EBP));
  /* 12393981 mov ebp, esp */
  EBP = (ESP);
  /* 12393983 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12393988 call 0x12397a60 */
  push32(0x1239398du); f_12397a60();
  /* 1239398d push edi */
  push32((uint32_t)(EDI));
  /* 1239398e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12393995 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1239399a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239399c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 123939a2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123939a4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123939a6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123939a7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 123939ae mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123939b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123939b5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 123939bb rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123939bd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123939bf stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123939c0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 123939c7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 123939cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123939ce lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 123939d4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 123939d6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 123939d8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 123939d9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 123939dc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 123939e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123939e6 jl 0x123939ee */
  if ((C.sf!=C.of)) goto L_123939ee;
  /* 123939e8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123939ec jl 0x123939f6 */
  if ((C.sf!=C.of)) goto L_123939f6;
L_123939ee:;
  /* 123939ee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123939f1 jmp 0x12393d0b */
  goto L_12393d0b;
L_123939f6:;
  /* 123939f6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123939fa jne 0x12393aa0 */
  if (!C.zf) goto L_12393aa0;
  /* 12393a00 push 0x123bea34 */
  push32((uint32_t)(0x123bea34u));
  /* 12393a05 call dword ptr [0x123c32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32ec))), 0x12393a0bu);
  /* 12393a0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393a0d jle 0x12393aa0 */
  if ((C.zf||C.sf!=C.of)) goto L_12393aa0;
  /* 12393a13 cmp dword ptr [0x123c04e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393a1a jne 0x12393a5e */
  if (!C.zf) goto L_12393a5e;
  /* 12393a1c push 0x123bb478 */
  push32((uint32_t)(0x123bb478u));
  /* 12393a21 call dword ptr [0x123c32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e8))), 0x12393a27u);
  /* 12393a27 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12393a2d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393a34 je 0x12393a56 */
  if (C.zf) goto L_12393a56;
  /* 12393a36 push 0x123bb46c */
  push32((uint32_t)(0x123bb46cu));
  /* 12393a3b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12393a41 push ecx */
  push32((uint32_t)(ECX));
  /* 12393a42 call dword ptr [0x123c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e4))), 0x12393a48u);
  /* 12393a48 mov dword ptr [0x123c04e0], eax */
  w32((uint32_t)(0x123c04e0), (EAX));
  /* 12393a4d cmp dword ptr [0x123c04e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393a54 jne 0x12393a5e */
  if (!C.zf) goto L_12393a5e;
L_12393a56:;
  /* 12393a56 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12393a59 jmp 0x12393d0b */
  goto L_12393d0b;
L_12393a5e:;
  /* 12393a5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393a61 push edx */
  push32((uint32_t)(EDX));
  /* 12393a62 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393a65 push eax */
  push32((uint32_t)(EAX));
  /* 12393a66 push 0x123bb438 */
  push32((uint32_t)(0x123bb438u));
  /* 12393a6b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12393a71 push ecx */
  push32((uint32_t)(ECX));
  /* 12393a72 call dword ptr [0x123c04e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c04e0))), 0x12393a78u);
  /* 12393a78 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393a7b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12393a81 push edx */
  push32((uint32_t)(EDX));
  /* 12393a82 call dword ptr [0x123c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e0))), 0x12393a88u);
  /* 12393a88 push 0x123bea34 */
  push32((uint32_t)(0x123bea34u));
  /* 12393a8d call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x12393a93u);
  /* 12393a93 call 0x12393870 */
  push32(0x12393a98u); f_12393870();
  /* 12393a98 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12393a9b jmp 0x12393d0b */
  goto L_12393d0b;
L_12393aa0:;
  /* 12393aa0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393aa4 je 0x12393add */
  if (C.zf) goto L_12393add;
  /* 12393aa6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12393aac push eax */
  push32((uint32_t)(EAX));
  /* 12393aad mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12393ab0 push ecx */
  push32((uint32_t)(ECX));
  /* 12393ab1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12393ab6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12393abc push edx */
  push32((uint32_t)(EDX));
  /* 12393abd call 0x12397960 */
  push32(0x12393ac2u); f_12397960();
  /* 12393ac2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393ac5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393ac7 jge 0x12393add */
  if ((C.sf==C.of)) goto L_12393add;
  /* 12393ac9 push 0x123bb40c */
  push32((uint32_t)(0x123bb40cu));
  /* 12393ace lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12393ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12393ad5 call 0x12397870 */
  push32(0x12393adau); f_12397870();
  /* 12393ada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393add:;
  /* 12393add cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393ae1 jne 0x12393b15 */
  if (!C.zf) goto L_12393b15;
  /* 12393ae3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393ae7 je 0x12393af5 */
  if (C.zf) goto L_12393af5;
  /* 12393ae9 mov dword ptr [ebp - 0x3028], 0x123bb3f8 */
  w32((uint32_t)(EBP + -0x3028), (0x123bb3f8u));
  /* 12393af3 jmp 0x12393aff */
  goto L_12393aff;
L_12393af5:;
  /* 12393af5 mov dword ptr [ebp - 0x3028], 0x123bb3e4 */
  w32((uint32_t)(EBP + -0x3028), (0x123bb3e4u));
L_12393aff:;
  /* 12393aff mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12393b05 push ecx */
  push32((uint32_t)(ECX));
  /* 12393b06 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12393b0c push edx */
  push32((uint32_t)(EDX));
  /* 12393b0d call 0x12397870 */
  push32(0x12393b12u); f_12397870();
  /* 12393b12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393b15:;
  /* 12393b15 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12393b1b push eax */
  push32((uint32_t)(EAX));
  /* 12393b1c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12393b22 push ecx */
  push32((uint32_t)(ECX));
  /* 12393b23 call 0x12397880 */
  push32(0x12393b28u); f_12397880();
  /* 12393b28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393b2b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393b2f jne 0x12393b6a */
  if (!C.zf) goto L_12393b6a;
  /* 12393b31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393b34 mov eax, dword ptr [edx*4 + 0x123bea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123bea38)));
  /* 12393b3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12393b3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393b40 je 0x12393b56 */
  if (C.zf) goto L_12393b56;
  /* 12393b42 push 0x123bb3e0 */
  push32((uint32_t)(0x123bb3e0u));
  /* 12393b47 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12393b4d push ecx */
  push32((uint32_t)(ECX));
  /* 12393b4e call 0x12397880 */
  push32(0x12393b53u); f_12397880();
  /* 12393b53 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393b56:;
  /* 12393b56 push 0x123bb3dc */
  push32((uint32_t)(0x123bb3dcu));
  /* 12393b5b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12393b61 push edx */
  push32((uint32_t)(EDX));
  /* 12393b62 call 0x12397880 */
  push32(0x12393b67u); f_12397880();
  /* 12393b67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393b6a:;
  /* 12393b6a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393b6e je 0x12393bb2 */
  if (C.zf) goto L_12393bb2;
  /* 12393b70 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12393b76 push eax */
  push32((uint32_t)(EAX));
  /* 12393b77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393b7a push ecx */
  push32((uint32_t)(ECX));
  /* 12393b7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393b7e push edx */
  push32((uint32_t)(EDX));
  /* 12393b7f push 0x123bb3d0 */
  push32((uint32_t)(0x123bb3d0u));
  /* 12393b84 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12393b89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12393b8f push eax */
  push32((uint32_t)(EAX));
  /* 12393b90 call 0x12397770 */
  push32(0x12393b95u); f_12397770();
  /* 12393b95 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393b98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393b9a jge 0x12393bb0 */
  if ((C.sf==C.of)) goto L_12393bb0;
  /* 12393b9c push 0x123bb40c */
  push32((uint32_t)(0x123bb40cu));
  /* 12393ba1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12393ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 12393ba8 call 0x12397870 */
  push32(0x12393badu); f_12397870();
  /* 12393bad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393bb0:;
  /* 12393bb0 jmp 0x12393bc8 */
  goto L_12393bc8;
L_12393bb2:;
  /* 12393bb2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12393bb8 push edx */
  push32((uint32_t)(EDX));
  /* 12393bb9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12393bbf push eax */
  push32((uint32_t)(EAX));
  /* 12393bc0 call 0x12397870 */
  push32(0x12393bc5u); f_12397870();
  /* 12393bc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393bc8:;
  /* 12393bc8 cmp dword ptr [0x123c2020], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2020))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393bcf je 0x12393c0c */
  if (C.zf) goto L_12393c0c;
  /* 12393bd1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12393bd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12393bd8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12393bde push edx */
  push32((uint32_t)(EDX));
  /* 12393bdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393be2 push eax */
  push32((uint32_t)(EAX));
  /* 12393be3 call dword ptr [0x123c2020] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c2020))), 0x12393be9u);
  /* 12393be9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393bee je 0x12393c0c */
  if (C.zf) goto L_12393c0c;
  /* 12393bf0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393bf4 jne 0x12393c01 */
  if (!C.zf) goto L_12393c01;
  /* 12393bf6 push 0x123bea34 */
  push32((uint32_t)(0x123bea34u));
  /* 12393bfb call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x12393c01u);
L_12393c01:;
  /* 12393c01 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12393c07 jmp 0x12393d0b */
  goto L_12393d0b;
L_12393c0c:;
  /* 12393c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393c0f mov edx, dword ptr [ecx*4 + 0x123bea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea38)));
  /* 12393c16 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12393c19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12393c1b je 0x12393c5b */
  if (C.zf) goto L_12393c5b;
  /* 12393c1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393c20 cmp dword ptr [eax*4 + 0x123bea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x123bea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393c28 je 0x12393c5b */
  if (C.zf) goto L_12393c5b;
  /* 12393c2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12393c2c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12393c32 push ecx */
  push32((uint32_t)(ECX));
  /* 12393c33 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12393c39 push edx */
  push32((uint32_t)(EDX));
  /* 12393c3a call 0x123976f0 */
  push32(0x12393c3fu); f_123976f0();
  /* 12393c3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393c42 push eax */
  push32((uint32_t)(EAX));
  /* 12393c43 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12393c49 push eax */
  push32((uint32_t)(EAX));
  /* 12393c4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393c4d mov edx, dword ptr [ecx*4 + 0x123bea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea44)));
  /* 12393c54 push edx */
  push32((uint32_t)(EDX));
  /* 12393c55 call dword ptr [0x123c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d8))), 0x12393c5bu);
L_12393c5b:;
  /* 12393c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393c5e mov ecx, dword ptr [eax*4 + 0x123bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123bea38)));
  /* 12393c65 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12393c68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12393c6a je 0x12393c79 */
  if (C.zf) goto L_12393c79;
  /* 12393c6c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12393c72 push edx */
  push32((uint32_t)(EDX));
  /* 12393c73 call dword ptr [0x123c32e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e0))), 0x12393c79u);
L_12393c79:;
  /* 12393c79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393c7c mov ecx, dword ptr [eax*4 + 0x123bea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123bea38)));
  /* 12393c83 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12393c86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12393c88 je 0x12393cf8 */
  if (C.zf) goto L_12393cf8;
  /* 12393c8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393c8e je 0x12393cad */
  if (C.zf) goto L_12393cad;
  /* 12393c90 push 0xa */
  push32((uint32_t)(0xau));
  /* 12393c92 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12393c98 push edx */
  push32((uint32_t)(EDX));
  /* 12393c99 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393c9c push eax */
  push32((uint32_t)(EAX));
  /* 12393c9d call 0x12397400 */
  push32(0x12393ca2u); f_12397400();
  /* 12393ca2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393ca5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12393cab jmp 0x12393cb7 */
  goto L_12393cb7;
L_12393cad:;
  /* 12393cad mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12393cb7:;
  /* 12393cb7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12393cbd push ecx */
  push32((uint32_t)(ECX));
  /* 12393cbe mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12393cc1 push edx */
  push32((uint32_t)(EDX));
  /* 12393cc2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12393cc8 push eax */
  push32((uint32_t)(EAX));
  /* 12393cc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393ccc push ecx */
  push32((uint32_t)(ECX));
  /* 12393ccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393cd0 push edx */
  push32((uint32_t)(EDX));
  /* 12393cd1 call 0x12393d10 */
  push32(0x12393cd6u); f_12393d10();
  /* 12393cd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393cd9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12393cdf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393ce3 jne 0x12393cf0 */
  if (!C.zf) goto L_12393cf0;
  /* 12393ce5 push 0x123bea34 */
  push32((uint32_t)(0x123bea34u));
  /* 12393cea call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x12393cf0u);
L_12393cf0:;
  /* 12393cf0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12393cf6 jmp 0x12393d0b */
  goto L_12393d0b;
L_12393cf8:;
  /* 12393cf8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393cfc jne 0x12393d09 */
  if (!C.zf) goto L_12393d09;
  /* 12393cfe push 0x123bea34 */
  push32((uint32_t)(0x123bea34u));
  /* 12393d03 call dword ptr [0x123c32dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32dc))), 0x12393d09u);
L_12393d09:;
  /* 12393d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12393d0b:;
  /* 12393d0b pop edi */
  EDI = (pop32());
  /* 12393d0c mov esp, ebp */
  ESP = (EBP);
  /* 12393d0e pop ebp */
  EBP = (pop32());
  /* 12393d0f ret  */
  ESPCHK(0x12393980u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d10 @ 0x12393d10 (780 bytes, 197 insns) */
void f_12393d10(void) {
  FTRACE(0x12393d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12393d10 push ebp */
  push32((uint32_t)(EBP));
  /* 12393d11 mov ebp, esp */
  EBP = (ESP);
  /* 12393d13 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12393d18 call 0x12397a60 */
  push32(0x12393d1du); f_12397a60();
L_12393d1d:;
  /* 12393d1d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393d21 jne 0x12393d48 */
  if (!C.zf) goto L_12393d48;
  /* 12393d23 push 0x123bb5c8 */
  push32((uint32_t)(0x123bb5c8u));
  /* 12393d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12393d2a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12393d2f push 0x123bb5bc */
  push32((uint32_t)(0x123bb5bcu));
  /* 12393d34 push 2 */
  push32((uint32_t)(0x2u));
  /* 12393d36 call 0x12393980 */
  push32(0x12393d3bu); f_12393980();
  /* 12393d3b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393d3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393d41 jne 0x12393d48 */
  if (!C.zf) goto L_12393d48;
  /* 12393d43 call 0x12393870 */
  push32(0x12393d48u); f_12393870();
L_12393d48:;
  /* 12393d48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12393d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393d4c jne 0x12393d1d */
  if (!C.zf) goto L_12393d1d;
  /* 12393d4e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12393d53 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12393d59 push ecx */
  push32((uint32_t)(ECX));
  /* 12393d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12393d5c call dword ptr [0x123c32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f0))), 0x12393d62u);
  /* 12393d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393d64 jne 0x12393d7a */
  if (!C.zf) goto L_12393d7a;
  /* 12393d66 push 0x123bb5a4 */
  push32((uint32_t)(0x123bb5a4u));
  /* 12393d6b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12393d71 push edx */
  push32((uint32_t)(EDX));
  /* 12393d72 call 0x12397870 */
  push32(0x12393d77u); f_12397870();
  /* 12393d77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393d7a:;
  /* 12393d7a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12393d80 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12393d83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393d86 push ecx */
  push32((uint32_t)(ECX));
  /* 12393d87 call 0x123976f0 */
  push32(0x12393d8cu); f_123976f0();
  /* 12393d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393d8f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393d92 jbe 0x12393dbd */
  if ((C.cf||C.zf)) goto L_12393dbd;
  /* 12393d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393d97 push edx */
  push32((uint32_t)(EDX));
  /* 12393d98 call 0x123976f0 */
  push32(0x12393d9du); f_123976f0();
  /* 12393d9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393da0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393da3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12393da7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12393daa push 3 */
  push32((uint32_t)(0x3u));
  /* 12393dac push 0x123bb5a0 */
  push32((uint32_t)(0x123bb5a0u));
  /* 12393db1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393db4 push eax */
  push32((uint32_t)(EAX));
  /* 12393db5 call 0x123980e0 */
  push32(0x12393dbau); f_123980e0();
  /* 12393dba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393dbd:;
  /* 12393dbd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12393dc0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12393dc6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393dcd je 0x12393e18 */
  if (C.zf) goto L_12393e18;
  /* 12393dcf mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12393dd5 push edx */
  push32((uint32_t)(EDX));
  /* 12393dd6 call 0x123976f0 */
  push32(0x12393ddbu); f_123976f0();
  /* 12393ddb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393dde cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393de1 jbe 0x12393e18 */
  if ((C.cf||C.zf)) goto L_12393e18;
  /* 12393de3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12393de9 push eax */
  push32((uint32_t)(EAX));
  /* 12393dea call 0x123976f0 */
  push32(0x12393defu); f_123976f0();
  /* 12393def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393df2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12393df8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12393dfc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12393e02 push 3 */
  push32((uint32_t)(0x3u));
  /* 12393e04 push 0x123bb5a0 */
  push32((uint32_t)(0x123bb5a0u));
  /* 12393e09 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12393e0f push eax */
  push32((uint32_t)(EAX));
  /* 12393e10 call 0x123980e0 */
  push32(0x12393e15u); f_123980e0();
  /* 12393e15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393e18:;
  /* 12393e18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393e1c jne 0x12393e2a */
  if (!C.zf) goto L_12393e2a;
  /* 12393e1e mov dword ptr [ebp - 0x1114], 0x123bb52c */
  w32((uint32_t)(EBP + -0x1114), (0x123bb52cu));
  /* 12393e28 jmp 0x12393e34 */
  goto L_12393e34;
L_12393e2a:;
  /* 12393e2a mov dword ptr [ebp - 0x1114], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1114), (0x123bb2ccu));
L_12393e34:;
  /* 12393e34 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12393e37 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12393e3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12393e3c je 0x12393e49 */
  if (C.zf) goto L_12393e49;
  /* 12393e3e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12393e41 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12393e47 jmp 0x12393e53 */
  goto L_12393e53;
L_12393e49:;
  /* 12393e49 mov dword ptr [ebp - 0x1118], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1118), (0x123bb2ccu));
L_12393e53:;
  /* 12393e53 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12393e56 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12393e59 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12393e5b je 0x12393e6f */
  if (C.zf) goto L_12393e6f;
  /* 12393e5d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393e61 jne 0x12393e6f */
  if (!C.zf) goto L_12393e6f;
  /* 12393e63 mov dword ptr [ebp - 0x111c], 0x123bb51c */
  w32((uint32_t)(EBP + -0x111c), (0x123bb51cu));
  /* 12393e6d jmp 0x12393e79 */
  goto L_12393e79;
L_12393e6f:;
  /* 12393e6f mov dword ptr [ebp - 0x111c], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x111c), (0x123bb2ccu));
L_12393e79:;
  /* 12393e79 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12393e7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12393e7f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12393e81 je 0x12393e8f */
  if (C.zf) goto L_12393e8f;
  /* 12393e83 mov dword ptr [ebp - 0x1120], 0x123bb518 */
  w32((uint32_t)(EBP + -0x1120), (0x123bb518u));
  /* 12393e8d jmp 0x12393e99 */
  goto L_12393e99;
L_12393e8f:;
  /* 12393e8f mov dword ptr [ebp - 0x1120], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1120), (0x123bb2ccu));
L_12393e99:;
  /* 12393e99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393e9d je 0x12393eaa */
  if (C.zf) goto L_12393eaa;
  /* 12393e9f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12393ea2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12393ea8 jmp 0x12393eb4 */
  goto L_12393eb4;
L_12393eaa:;
  /* 12393eaa mov dword ptr [ebp - 0x1124], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1124), (0x123bb2ccu));
L_12393eb4:;
  /* 12393eb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393eb8 je 0x12393ec6 */
  if (C.zf) goto L_12393ec6;
  /* 12393eba mov dword ptr [ebp - 0x1128], 0x123bb510 */
  w32((uint32_t)(EBP + -0x1128), (0x123bb510u));
  /* 12393ec4 jmp 0x12393ed0 */
  goto L_12393ed0;
L_12393ec6:;
  /* 12393ec6 mov dword ptr [ebp - 0x1128], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1128), (0x123bb2ccu));
L_12393ed0:;
  /* 12393ed0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393ed4 je 0x12393ee1 */
  if (C.zf) goto L_12393ee1;
  /* 12393ed6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12393ed9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12393edf jmp 0x12393eeb */
  goto L_12393eeb;
L_12393ee1:;
  /* 12393ee1 mov dword ptr [ebp - 0x112c], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x112c), (0x123bb2ccu));
L_12393eeb:;
  /* 12393eeb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393eef je 0x12393efd */
  if (C.zf) goto L_12393efd;
  /* 12393ef1 mov dword ptr [ebp - 0x1130], 0x123bb508 */
  w32((uint32_t)(EBP + -0x1130), (0x123bb508u));
  /* 12393efb jmp 0x12393f07 */
  goto L_12393f07;
L_12393efd:;
  /* 12393efd mov dword ptr [ebp - 0x1130], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1130), (0x123bb2ccu));
L_12393f07:;
  /* 12393f07 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393f0e je 0x12393f1e */
  if (C.zf) goto L_12393f1e;
  /* 12393f10 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12393f16 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12393f1c jmp 0x12393f28 */
  goto L_12393f28;
L_12393f1e:;
  /* 12393f1e mov dword ptr [ebp - 0x1134], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1134), (0x123bb2ccu));
L_12393f28:;
  /* 12393f28 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393f2f je 0x12393f3d */
  if (C.zf) goto L_12393f3d;
  /* 12393f31 mov dword ptr [ebp - 0x1138], 0x123bb4fc */
  w32((uint32_t)(EBP + -0x1138), (0x123bb4fcu));
  /* 12393f3b jmp 0x12393f47 */
  goto L_12393f47;
L_12393f3d:;
  /* 12393f3d mov dword ptr [ebp - 0x1138], 0x123bb2cc */
  w32((uint32_t)(EBP + -0x1138), (0x123bb2ccu));
L_12393f47:;
  /* 12393f47 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12393f4d push edx */
  push32((uint32_t)(EDX));
  /* 12393f4e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12393f54 push eax */
  push32((uint32_t)(EAX));
  /* 12393f55 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12393f5b push ecx */
  push32((uint32_t)(ECX));
  /* 12393f5c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12393f62 push edx */
  push32((uint32_t)(EDX));
  /* 12393f63 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12393f69 push eax */
  push32((uint32_t)(EAX));
  /* 12393f6a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12393f70 push ecx */
  push32((uint32_t)(ECX));
  /* 12393f71 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12393f77 push edx */
  push32((uint32_t)(EDX));
  /* 12393f78 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12393f7e push eax */
  push32((uint32_t)(EAX));
  /* 12393f7f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12393f85 push ecx */
  push32((uint32_t)(ECX));
  /* 12393f86 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12393f8c push edx */
  push32((uint32_t)(EDX));
  /* 12393f8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12393f90 push eax */
  push32((uint32_t)(EAX));
  /* 12393f91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12393f94 mov edx, dword ptr [ecx*4 + 0x123bea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea50)));
  /* 12393f9b push edx */
  push32((uint32_t)(EDX));
  /* 12393f9c push 0x123bb4a8 */
  push32((uint32_t)(0x123bb4a8u));
  /* 12393fa1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12393fa6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12393fac push eax */
  push32((uint32_t)(EAX));
  /* 12393fad call 0x12397770 */
  push32(0x12393fb2u); f_12397770();
  /* 12393fb2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393fb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12393fb7 jge 0x12393fcd */
  if ((C.sf==C.of)) goto L_12393fcd;
  /* 12393fb9 push 0x123bb40c */
  push32((uint32_t)(0x123bb40cu));
  /* 12393fbe lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12393fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12393fc5 call 0x12397870 */
  push32(0x12393fcau); f_12397870();
  /* 12393fca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12393fcd:;
  /* 12393fcd push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12393fd2 push 0x123bb484 */
  push32((uint32_t)(0x123bb484u));
  /* 12393fd7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12393fdd push edx */
  push32((uint32_t)(EDX));
  /* 12393fde call 0x12398020 */
  push32(0x12393fe3u); f_12398020();
  /* 12393fe3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393fe6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12393fec cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12393ff3 jne 0x12394006 */
  if (!C.zf) goto L_12394006;
  /* 12393ff5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12393ff7 call 0x12397d60 */
  push32(0x12393ffcu); f_12397d60();
  /* 12393ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12393fff push 3 */
  push32((uint32_t)(0x3u));
  /* 12394001 call 0x12394080 */
  push32(0x12394006u); f_12394080();
L_12394006:;
  /* 12394006 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239400d jne 0x12394016 */
  if (!C.zf) goto L_12394016;
  /* 1239400f mov eax, 1 */
  EAX = (0x1u);
  /* 12394014 jmp 0x12394018 */
  goto L_12394018;
L_12394016:;
  /* 12394016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12394018:;
  /* 12394018 mov esp, ebp */
  ESP = (EBP);
  /* 1239401a pop ebp */
  EBP = (pop32());
  /* 1239401b ret  */
  ESPCHK(0x12393d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004020 @ 0x12394020 (56 bytes, 15 insns) */
void f_12394020(void) {
  FTRACE(0x12394020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394020 push ebp */
  push32((uint32_t)(EBP));
  /* 12394021 mov ebp, esp */
  EBP = (ESP);
  /* 12394023 cmp dword ptr [0x123c201c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c201c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239402a je 0x12394032 */
  if (C.zf) goto L_12394032;
  /* 1239402c call dword ptr [0x123c201c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c201c))), 0x12394032u);
L_12394032:;
  /* 12394032 push 0x123be418 */
  push32((uint32_t)(0x123be418u));
  /* 12394037 push 0x123be208 */
  push32((uint32_t)(0x123be208u));
  /* 1239403c call 0x123941f0 */
  push32(0x12394041u); f_123941f0();
  /* 12394041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394044 push 0x123be104 */
  push32((uint32_t)(0x123be104u));
  /* 12394049 push 0x123be000 */
  push32((uint32_t)(0x123be000u));
  /* 1239404e call 0x123941f0 */
  push32(0x12394053u); f_123941f0();
  /* 12394053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394056 pop ebp */
  EBP = (pop32());
  /* 12394057 ret  */
  ESPCHK(0x12394020u, _esp0);
  ESP += 4; return;
}

/* FUN_10004060 @ 0x12394060 (21 bytes, 10 insns) */
void f_12394060(void) {
  FTRACE(0x12394060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394060 push ebp */
  push32((uint32_t)(EBP));
  /* 12394061 mov ebp, esp */
  EBP = (ESP);
  /* 12394063 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394065 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394067 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239406a push eax */
  push32((uint32_t)(EAX));
  /* 1239406b call 0x123940e0 */
  push32(0x12394070u); f_123940e0();
  /* 12394070 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394073 pop ebp */
  EBP = (pop32());
  /* 12394074 ret  */
  ESPCHK(0x12394060u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12394080 (21 bytes, 10 insns) */
void f_12394080(void) {
  FTRACE(0x12394080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394080 push ebp */
  push32((uint32_t)(EBP));
  /* 12394081 mov ebp, esp */
  EBP = (ESP);
  /* 12394083 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394085 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394087 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239408a push eax */
  push32((uint32_t)(EAX));
  /* 1239408b call 0x123940e0 */
  push32(0x12394090u); f_123940e0();
  /* 12394090 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394093 pop ebp */
  EBP = (pop32());
  /* 12394094 ret  */
  ESPCHK(0x12394080u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x123940a0 (19 bytes, 9 insns) */
void f_123940a0(void) {
  FTRACE(0x123940a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123940a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123940a1 mov ebp, esp */
  EBP = (ESP);
  /* 123940a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123940a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123940a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123940a9 call 0x123940e0 */
  push32(0x123940aeu); f_123940e0();
  /* 123940ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123940b1 pop ebp */
  EBP = (pop32());
  /* 123940b2 ret  */
  ESPCHK(0x123940a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040c0 @ 0x123940c0 (19 bytes, 9 insns) */
void f_123940c0(void) {
  FTRACE(0x123940c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123940c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123940c1 mov ebp, esp */
  EBP = (ESP);
  /* 123940c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 123940c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 123940c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123940c9 call 0x123940e0 */
  push32(0x123940ceu); f_123940e0();
  /* 123940ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123940d1 pop ebp */
  EBP = (pop32());
  /* 123940d2 ret  */
  ESPCHK(0x123940c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100040e0 @ 0x123940e0 (227 bytes, 61 insns) */
void f_123940e0(void) {
  FTRACE(0x123940e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123940e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123940e1 mov ebp, esp */
  EBP = (ESP);
  /* 123940e3 push ecx */
  push32((uint32_t)(ECX));
  /* 123940e4 call 0x123941d0 */
  push32(0x123940e9u); f_123941d0();
  /* 123940e9 cmp dword ptr [0x123c0524], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0524))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123940f0 jne 0x12394103 */
  if (!C.zf) goto L_12394103;
  /* 123940f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123940f5 push eax */
  push32((uint32_t)(EAX));
  /* 123940f6 call dword ptr [0x123c32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32fc))), 0x123940fcu);
  /* 123940fc push eax */
  push32((uint32_t)(EAX));
  /* 123940fd call dword ptr [0x123c32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f8))), 0x12394103u);
L_12394103:;
  /* 12394103 mov dword ptr [0x123c0520], 1 */
  w32((uint32_t)(0x123c0520), (0x1u));
  /* 1239410d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12394110 mov byte ptr [0x123c051c], cl */
  w8((uint32_t)(0x123c051c), (CL));
  /* 12394116 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239411a jne 0x12394163 */
  if (!C.zf) goto L_12394163;
  /* 1239411c cmp dword ptr [0x123c2018], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2018))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394123 je 0x12394151 */
  if (C.zf) goto L_12394151;
  /* 12394125 mov edx, dword ptr [0x123c2014] */
  EDX = (r32((uint32_t)(0x123c2014)));
  /* 1239412b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1239412e:;
  /* 1239412e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394131 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394134 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394137 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239413a cmp ecx, dword ptr [0x123c2018] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c2018))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394140 jb 0x12394151 */
  if (C.cf) goto L_12394151;
  /* 12394142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394145 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394148 je 0x1239414f */
  if (C.zf) goto L_1239414f;
  /* 1239414a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239414d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1239414fu);
L_1239414f:;
  /* 1239414f jmp 0x1239412e */
  goto L_1239412e;
L_12394151:;
  /* 12394151 push 0x123be724 */
  push32((uint32_t)(0x123be724u));
  /* 12394156 push 0x123be51c */
  push32((uint32_t)(0x123be51cu));
  /* 1239415b call 0x123941f0 */
  push32(0x12394160u); f_123941f0();
  /* 12394160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394163:;
  /* 12394163 push 0x123be92c */
  push32((uint32_t)(0x123be92cu));
  /* 12394168 push 0x123be828 */
  push32((uint32_t)(0x123be828u));
  /* 1239416d call 0x123941f0 */
  push32(0x12394172u); f_123941f0();
  /* 12394172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394175 cmp dword ptr [0x123c0528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239417c jne 0x1239419e */
  if (!C.zf) goto L_1239419e;
  /* 1239417e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12394180 call 0x12395dd0 */
  push32(0x12394185u); f_12395dd0();
  /* 12394185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394188 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1239418b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239418d je 0x1239419e */
  if (C.zf) goto L_1239419e;
  /* 1239418f mov dword ptr [0x123c0528], 1 */
  w32((uint32_t)(0x123c0528), (0x1u));
  /* 12394199 call 0x123966e0 */
  push32(0x1239419eu); f_123966e0();
L_1239419e:;
  /* 1239419e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123941a2 je 0x123941ab */
  if (C.zf) goto L_123941ab;
  /* 123941a4 call 0x123941e0 */
  push32(0x123941a9u); f_123941e0();
  /* 123941a9 jmp 0x123941bf */
  goto L_123941bf;
L_123941ab:;
  /* 123941ab mov dword ptr [0x123c0524], 1 */
  w32((uint32_t)(0x123c0524), (0x1u));
  /* 123941b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123941b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123941b9 call dword ptr [0x123c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f4))), 0x123941bfu);
L_123941bf:;
  /* 123941bf mov esp, ebp */
  ESP = (EBP);
  /* 123941c1 pop ebp */
  EBP = (pop32());
  /* 123941c2 ret  */
  ESPCHK(0x123940e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041d0 @ 0x123941d0 (15 bytes, 7 insns) */
void f_123941d0(void) {
  FTRACE(0x123941d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123941d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123941d1 mov ebp, esp */
  EBP = (ESP);
  /* 123941d3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123941d5 call 0x123982c0 */
  push32(0x123941dau); f_123982c0();
  /* 123941da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123941dd pop ebp */
  EBP = (pop32());
  /* 123941de ret  */
  ESPCHK(0x123941d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041e0 @ 0x123941e0 (15 bytes, 7 insns) */
void f_123941e0(void) {
  FTRACE(0x123941e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123941e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123941e1 mov ebp, esp */
  EBP = (ESP);
  /* 123941e3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 123941e5 call 0x12398360 */
  push32(0x123941eau); f_12398360();
  /* 123941ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123941ed pop ebp */
  EBP = (pop32());
  /* 123941ee ret  */
  ESPCHK(0x123941e0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x123941f0 (37 bytes, 16 insns) */
void f_123941f0(void) {
  FTRACE(0x123941f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123941f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123941f1 mov ebp, esp */
  EBP = (ESP);
L_123941f3:;
  /* 123941f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123941f6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123941f9 jae 0x12394213 */
  if (!C.cf) goto L_12394213;
  /* 123941fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123941fe cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394201 je 0x12394208 */
  if (C.zf) goto L_12394208;
  /* 12394203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394206 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12394208u);
L_12394208:;
  /* 12394208 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239420b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239420e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12394211 jmp 0x123941f3 */
  goto L_123941f3;
L_12394213:;
  /* 12394213 pop ebp */
  EBP = (pop32());
  /* 12394214 ret  */
  ESPCHK(0x123941f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x12394220 (130 bytes, 42 insns) */
void f_12394220(void) {
  FTRACE(0x12394220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394220 push ebp */
  push32((uint32_t)(EBP));
  /* 12394221 mov ebp, esp */
  EBP = (ESP);
  /* 12394223 push ecx */
  push32((uint32_t)(ECX));
  /* 12394224 call 0x123981e0 */
  push32(0x12394229u); f_123981e0();
  /* 12394229 call dword ptr [0x123c3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3308))), 0x1239422fu);
  /* 1239422f mov dword ptr [0x123bea5c], eax */
  w32((uint32_t)(0x123bea5c), (EAX));
  /* 12394234 cmp dword ptr [0x123bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x123bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239423b jne 0x12394241 */
  if (!C.zf) goto L_12394241;
  /* 1239423d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239423f jmp 0x1239429e */
  goto L_1239429e;
L_12394241:;
  /* 12394241 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12394243 push 0x123bb5e0 */
  push32((uint32_t)(0x123bb5e0u));
  /* 12394248 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239424a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1239424c push 1 */
  push32((uint32_t)(0x1u));
  /* 1239424e call 0x12394cd0 */
  push32(0x12394253u); f_12394cd0();
  /* 12394253 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394256 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394259 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239425d je 0x12394274 */
  if (C.zf) goto L_12394274;
  /* 1239425f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394262 push eax */
  push32((uint32_t)(EAX));
  /* 12394263 mov ecx, dword ptr [0x123bea5c] */
  ECX = (r32((uint32_t)(0x123bea5c)));
  /* 12394269 push ecx */
  push32((uint32_t)(ECX));
  /* 1239426a call dword ptr [0x123c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3304))), 0x12394270u);
  /* 12394270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394272 jne 0x12394278 */
  if (!C.zf) goto L_12394278;
L_12394274:;
  /* 12394274 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394276 jmp 0x1239429e */
  goto L_1239429e;
L_12394278:;
  /* 12394278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239427b push edx */
  push32((uint32_t)(EDX));
  /* 1239427c call 0x123942e0 */
  push32(0x12394281u); f_123942e0();
  /* 12394281 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394284 call dword ptr [0x123c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3300))), 0x1239428au);
  /* 1239428a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239428d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1239428f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394292 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12394299 mov eax, 1 */
  EAX = (0x1u);
L_1239429e:;
  /* 1239429e mov esp, ebp */
  ESP = (EBP);
  /* 123942a0 pop ebp */
  EBP = (pop32());
  /* 123942a1 ret  */
  ESPCHK(0x12394220u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x123942b0 (41 bytes, 11 insns) */
void f_123942b0(void) {
  FTRACE(0x123942b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123942b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123942b1 mov ebp, esp */
  EBP = (ESP);
  /* 123942b3 call 0x12398220 */
  push32(0x123942b8u); f_12398220();
  /* 123942b8 cmp dword ptr [0x123bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x123bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123942bf je 0x123942d7 */
  if (C.zf) goto L_123942d7;
  /* 123942c1 mov eax, dword ptr [0x123bea5c] */
  EAX = (r32((uint32_t)(0x123bea5c)));
  /* 123942c6 push eax */
  push32((uint32_t)(EAX));
  /* 123942c7 call dword ptr [0x123c330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c330c))), 0x123942cdu);
  /* 123942cd mov dword ptr [0x123bea5c], 0xffffffff */
  w32((uint32_t)(0x123bea5c), (0xffffffffu));
L_123942d7:;
  /* 123942d7 pop ebp */
  EBP = (pop32());
  /* 123942d8 ret  */
  ESPCHK(0x123942b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042e0 @ 0x123942e0 (25 bytes, 8 insns) */
void f_123942e0(void) {
  FTRACE(0x123942e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123942e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123942e1 mov ebp, esp */
  EBP = (ESP);
  /* 123942e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123942e6 mov dword ptr [eax + 0x50], 0x123bec00 */
  w32((uint32_t)(EAX + 0x50), (0x123bec00u));
  /* 123942ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123942f0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 123942f7 pop ebp */
  EBP = (pop32());
  /* 123942f8 ret  */
  ESPCHK(0x123942e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004300 @ 0x12394300 (152 bytes, 48 insns) */
void f_12394300(void) {
  FTRACE(0x12394300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394300 push ebp */
  push32((uint32_t)(EBP));
  /* 12394301 mov ebp, esp */
  EBP = (ESP);
  /* 12394303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394306 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x1239430cu);
  /* 1239430c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239430f mov eax, dword ptr [0x123bea5c] */
  EAX = (r32((uint32_t)(0x123bea5c)));
  /* 12394314 push eax */
  push32((uint32_t)(EAX));
  /* 12394315 call dword ptr [0x123c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3314))), 0x1239431bu);
  /* 1239431b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239431e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394322 jne 0x12394387 */
  if (!C.zf) goto L_12394387;
  /* 12394324 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12394329 push 0x123bb5e0 */
  push32((uint32_t)(0x123bb5e0u));
  /* 1239432e push 2 */
  push32((uint32_t)(0x2u));
  /* 12394330 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12394332 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394334 call 0x12394cd0 */
  push32(0x12394339u); f_12394cd0();
  /* 12394339 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239433c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239433f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394343 je 0x1239437d */
  if (C.zf) goto L_1239437d;
  /* 12394345 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394348 push ecx */
  push32((uint32_t)(ECX));
  /* 12394349 mov edx, dword ptr [0x123bea5c] */
  EDX = (r32((uint32_t)(0x123bea5c)));
  /* 1239434f push edx */
  push32((uint32_t)(EDX));
  /* 12394350 call dword ptr [0x123c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3304))), 0x12394356u);
  /* 12394356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394358 je 0x1239437d */
  if (C.zf) goto L_1239437d;
  /* 1239435a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239435d push eax */
  push32((uint32_t)(EAX));
  /* 1239435e call 0x123942e0 */
  push32(0x12394363u); f_123942e0();
  /* 12394363 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394366 call dword ptr [0x123c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3300))), 0x1239436cu);
  /* 1239436c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239436f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12394371 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394374 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1239437b jmp 0x12394387 */
  goto L_12394387;
L_1239437d:;
  /* 1239437d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1239437f call 0x12393830 */
  push32(0x12394384u); f_12393830();
  /* 12394384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394387:;
  /* 12394387 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239438a push eax */
  push32((uint32_t)(EAX));
  /* 1239438b call dword ptr [0x123c3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3310))), 0x12394391u);
  /* 12394391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394394 mov esp, ebp */
  ESP = (EBP);
  /* 12394396 pop ebp */
  EBP = (pop32());
  /* 12394397 ret  */
  ESPCHK(0x12394300u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x123943a0 (263 bytes, 86 insns) */
void f_123943a0(void) {
  FTRACE(0x123943a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123943a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123943a1 mov ebp, esp */
  EBP = (ESP);
  /* 123943a3 cmp dword ptr [0x123bea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x123bea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123943aa je 0x123944a5 */
  if (C.zf) goto L_123944a5;
  /* 123943b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123943b4 jne 0x123943c5 */
  if (!C.zf) goto L_123943c5;
  /* 123943b6 mov eax, dword ptr [0x123bea5c] */
  EAX = (r32((uint32_t)(0x123bea5c)));
  /* 123943bb push eax */
  push32((uint32_t)(EAX));
  /* 123943bc call dword ptr [0x123c3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3314))), 0x123943c2u);
  /* 123943c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_123943c5:;
  /* 123943c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123943c9 je 0x12394496 */
  if (C.zf) goto L_12394496;
  /* 123943cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123943d2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123943d6 je 0x123943e9 */
  if (C.zf) goto L_123943e9;
  /* 123943d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 123943da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123943dd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 123943e0 push eax */
  push32((uint32_t)(EAX));
  /* 123943e1 call 0x12395350 */
  push32(0x123943e6u); f_12395350();
  /* 123943e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123943e9:;
  /* 123943e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123943ec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123943f0 je 0x12394403 */
  if (C.zf) goto L_12394403;
  /* 123943f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 123943f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123943f7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 123943fa push eax */
  push32((uint32_t)(EAX));
  /* 123943fb call 0x12395350 */
  push32(0x12394400u); f_12395350();
  /* 12394400 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394403:;
  /* 12394403 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394406 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239440a je 0x1239441d */
  if (C.zf) goto L_1239441d;
  /* 1239440c push 2 */
  push32((uint32_t)(0x2u));
  /* 1239440e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394411 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12394414 push eax */
  push32((uint32_t)(EAX));
  /* 12394415 call 0x12395350 */
  push32(0x1239441au); f_12395350();
  /* 1239441a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239441d:;
  /* 1239441d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394420 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394424 je 0x12394437 */
  if (C.zf) goto L_12394437;
  /* 12394426 push 2 */
  push32((uint32_t)(0x2u));
  /* 12394428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239442b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1239442e push eax */
  push32((uint32_t)(EAX));
  /* 1239442f call 0x12395350 */
  push32(0x12394434u); f_12395350();
  /* 12394434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394437:;
  /* 12394437 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239443a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239443e je 0x12394451 */
  if (C.zf) goto L_12394451;
  /* 12394440 push 2 */
  push32((uint32_t)(0x2u));
  /* 12394442 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394445 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12394448 push eax */
  push32((uint32_t)(EAX));
  /* 12394449 call 0x12395350 */
  push32(0x1239444eu); f_12395350();
  /* 1239444e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394451:;
  /* 12394451 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394454 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394458 je 0x1239446b */
  if (C.zf) goto L_1239446b;
  /* 1239445a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239445c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239445f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12394462 push eax */
  push32((uint32_t)(EAX));
  /* 12394463 call 0x12395350 */
  push32(0x12394468u); f_12395350();
  /* 12394468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239446b:;
  /* 1239446b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239446e cmp dword ptr [ecx + 0x50], 0x123bec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x123bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394475 je 0x12394488 */
  if (C.zf) goto L_12394488;
  /* 12394477 push 2 */
  push32((uint32_t)(0x2u));
  /* 12394479 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239447c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1239447f push eax */
  push32((uint32_t)(EAX));
  /* 12394480 call 0x12395350 */
  push32(0x12394485u); f_12395350();
  /* 12394485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394488:;
  /* 12394488 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239448a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239448d push ecx */
  push32((uint32_t)(ECX));
  /* 1239448e call 0x12395350 */
  push32(0x12394493u); f_12395350();
  /* 12394493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394496:;
  /* 12394496 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394498 mov edx, dword ptr [0x123bea5c] */
  EDX = (r32((uint32_t)(0x123bea5c)));
  /* 1239449e push edx */
  push32((uint32_t)(EDX));
  /* 1239449f call dword ptr [0x123c3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3304))), 0x123944a5u);
L_123944a5:;
  /* 123944a5 pop ebp */
  EBP = (pop32());
  /* 123944a6 ret  */
  ESPCHK(0x123943a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x123944b0 (11 bytes, 5 insns) */
void f_123944b0(void) {
  FTRACE(0x123944b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123944b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123944b1 mov ebp, esp */
  EBP = (ESP);
  /* 123944b3 call dword ptr [0x123c3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3300))), 0x123944b9u);
  /* 123944b9 pop ebp */
  EBP = (pop32());
  /* 123944ba ret  */
  ESPCHK(0x123944b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044c0 @ 0x123944c0 (11 bytes, 5 insns) */
void f_123944c0(void) {
  FTRACE(0x123944c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123944c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123944c1 mov ebp, esp */
  EBP = (ESP);
  /* 123944c3 call dword ptr [0x123c331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c331c))), 0x123944c9u);
  /* 123944c9 pop ebp */
  EBP = (pop32());
  /* 123944ca ret  */
  ESPCHK(0x123944c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x123944d0 (804 bytes, 236 insns) */
void f_123944d0(void) {
  FTRACE(0x123944d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123944d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123944d1 mov ebp, esp */
  EBP = (ESP);
  /* 123944d3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123944d6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 123944db push 0x123bb5ec */
  push32((uint32_t)(0x123bb5ecu));
  /* 123944e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 123944e2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123944e7 call 0x123948c0 */
  push32(0x123944ecu); f_123948c0();
  /* 123944ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123944ef mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 123944f2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123944f6 jne 0x12394502 */
  if (!C.zf) goto L_12394502;
  /* 123944f8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 123944fa call 0x12393830 */
  push32(0x123944ffu); f_12393830();
  /* 123944ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12394502:;
  /* 12394502 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394505 mov dword ptr [0x123c1ec0], eax */
  w32((uint32_t)(0x123c1ec0), (EAX));
  /* 1239450a mov dword ptr [0x123c1ffc], 0x20 */
  w32((uint32_t)(0x123c1ffc), (0x20u));
  /* 12394514 jmp 0x1239451f */
  goto L_1239451f;
L_12394516:;
  /* 12394516 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394519 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239451c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1239451f:;
  /* 1239451f mov edx, dword ptr [0x123c1ec0] */
  EDX = (r32((uint32_t)(0x123c1ec0)));
  /* 12394525 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239452b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239452e jae 0x12394553 */
  if (!C.cf) goto L_12394553;
  /* 12394530 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394533 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12394537 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239453a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12394540 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394543 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12394547 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239454a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12394551 jmp 0x12394516 */
  goto L_12394516;
L_12394553:;
  /* 12394553 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12394556 push ecx */
  push32((uint32_t)(ECX));
  /* 12394557 call dword ptr [0x123c3268] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3268))), 0x1239455du);
  /* 1239455d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12394560 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12394566 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394568 je 0x123946f5 */
  if (C.zf) goto L_123946f5;
  /* 1239456e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394572 je 0x123946f5 */
  if (C.zf) goto L_123946f5;
  /* 12394578 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239457b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1239457d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12394580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12394583 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394586 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12394589 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239458c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239458f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12394592 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394599 jge 0x123945a3 */
  if ((C.sf==C.of)) goto L_123945a3;
  /* 1239459b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1239459e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 123945a1 jmp 0x123945aa */
  goto L_123945aa;
L_123945a3:;
  /* 123945a3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_123945aa:;
  /* 123945aa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 123945ad mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123945b0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 123945b7 jmp 0x123945c2 */
  goto L_123945c2;
L_123945b9:;
  /* 123945b9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 123945bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123945bf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_123945c2:;
  /* 123945c2 mov ecx, dword ptr [0x123c1ffc] */
  ECX = (r32((uint32_t)(0x123c1ffc)));
  /* 123945c8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123945cb jge 0x12394662 */
  if ((C.sf==C.of)) goto L_12394662;
  /* 123945d1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 123945d6 push 0x123bb5ec */
  push32((uint32_t)(0x123bb5ecu));
  /* 123945db push 2 */
  push32((uint32_t)(0x2u));
  /* 123945dd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 123945e2 call 0x123948c0 */
  push32(0x123945e7u); f_123948c0();
  /* 123945e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123945ea mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 123945ed cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123945f1 jne 0x123945fe */
  if (!C.zf) goto L_123945fe;
  /* 123945f3 mov edx, dword ptr [0x123c1ffc] */
  EDX = (r32((uint32_t)(0x123c1ffc)));
  /* 123945f9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 123945fc jmp 0x12394662 */
  goto L_12394662;
L_123945fe:;
  /* 123945fe mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12394601 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394604 mov dword ptr [eax*4 + 0x123c1ec0], ecx */
  w32((uint32_t)(EAX*4 + 0x123c1ec0), (ECX));
  /* 1239460b mov edx, dword ptr [0x123c1ffc] */
  EDX = (r32((uint32_t)(0x123c1ffc)));
  /* 12394611 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394614 mov dword ptr [0x123c1ffc], edx */
  w32((uint32_t)(0x123c1ffc), (EDX));
  /* 1239461a jmp 0x12394625 */
  goto L_12394625;
L_1239461c:;
  /* 1239461c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239461f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394622 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12394625:;
  /* 12394625 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12394628 mov edx, dword ptr [ecx*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123c1ec0)));
  /* 1239462f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394635 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394638 jae 0x1239465d */
  if (!C.cf) goto L_1239465d;
  /* 1239463a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239463d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12394641 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394644 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1239464a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239464d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12394651 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394654 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1239465b jmp 0x1239461c */
  goto L_1239461c;
L_1239465d:;
  /* 1239465d jmp 0x123945b9 */
  goto L_123945b9;
L_12394662:;
  /* 12394662 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12394669 jmp 0x12394686 */
  goto L_12394686;
L_1239466b:;
  /* 1239466b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1239466e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394671 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12394674 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394677 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239467a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1239467d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12394680 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394683 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12394686:;
  /* 12394686 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12394689 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239468c jge 0x123946f5 */
  if ((C.sf==C.of)) goto L_123946f5;
  /* 1239468e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12394691 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394694 je 0x123946f0 */
  if (C.zf) goto L_123946f0;
  /* 12394696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394699 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1239469c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1239469f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123946a1 je 0x123946f0 */
  if (C.zf) goto L_123946f0;
  /* 123946a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123946a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123946a9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 123946ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123946ae jne 0x123946c0 */
  if (!C.zf) goto L_123946c0;
  /* 123946b0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123946b3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123946b5 push edx */
  push32((uint32_t)(EDX));
  /* 123946b6 call dword ptr [0x123c3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3264))), 0x123946bcu);
  /* 123946bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123946be je 0x123946f0 */
  if (C.zf) goto L_123946f0;
L_123946c0:;
  /* 123946c0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 123946c3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 123946c6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 123946c9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 123946cc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 123946cf mov edx, dword ptr [eax*4 + 0x123c1ec0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 123946d6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123946d8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 123946db mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123946de mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 123946e1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 123946e3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 123946e5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123946e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123946eb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123946ed mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_123946f0:;
  /* 123946f0 jmp 0x1239466b */
  goto L_1239466b;
L_123946f5:;
  /* 123946f5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 123946fc jmp 0x12394707 */
  goto L_12394707;
L_123946fe:;
  /* 123946fe mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12394701 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394704 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12394707:;
  /* 12394707 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239470b jge 0x123947e4 */
  if ((C.sf==C.of)) goto L_123947e4;
  /* 12394711 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12394714 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12394717 mov edx, dword ptr [0x123c1ec0] */
  EDX = (r32((uint32_t)(0x123c1ec0)));
  /* 1239471d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239471f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12394722 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394725 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394728 jne 0x123947d0 */
  if (!C.zf) goto L_123947d0;
  /* 1239472e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394731 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12394735 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394739 jne 0x12394744 */
  if (!C.zf) goto L_12394744;
  /* 1239473b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12394742 jmp 0x12394754 */
  goto L_12394754;
L_12394744:;
  /* 12394744 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12394747 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239474a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239474c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239474e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394751 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12394754:;
  /* 12394754 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12394757 push eax */
  push32((uint32_t)(EAX));
  /* 12394758 call dword ptr [0x123c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d4))), 0x1239475eu);
  /* 1239475e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12394761 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394765 je 0x123947bf */
  if (C.zf) goto L_123947bf;
  /* 12394767 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1239476a push ecx */
  push32((uint32_t)(ECX));
  /* 1239476b call dword ptr [0x123c3264] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3264))), 0x12394771u);
  /* 12394771 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12394774 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394778 je 0x123947bf */
  if (C.zf) goto L_123947bf;
  /* 1239477a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239477d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12394780 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12394782 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12394785 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239478b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239478e jne 0x123947a0 */
  if (!C.zf) goto L_123947a0;
  /* 12394790 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12394793 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12394796 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12394798 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239479b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1239479e jmp 0x123947bd */
  goto L_123947bd;
L_123947a0:;
  /* 123947a0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 123947a3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123947a9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123947ac jne 0x123947bd */
  if (!C.zf) goto L_123947bd;
  /* 123947ae mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947b1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123947b4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 123947b7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947ba mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123947bd:;
  /* 123947bd jmp 0x123947ce */
  goto L_123947ce;
L_123947bf:;
  /* 123947bf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947c2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123947c5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 123947c8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947cb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123947ce:;
  /* 123947ce jmp 0x123947df */
  goto L_123947df;
L_123947d0:;
  /* 123947d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947d3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 123947d6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 123947d9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 123947dc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_123947df:;
  /* 123947df jmp 0x123946fe */
  goto L_123946fe;
L_123947e4:;
  /* 123947e4 mov eax, dword ptr [0x123c1ffc] */
  EAX = (r32((uint32_t)(0x123c1ffc)));
  /* 123947e9 push eax */
  push32((uint32_t)(EAX));
  /* 123947ea call dword ptr [0x123c3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3320))), 0x123947f0u);
  /* 123947f0 mov esp, ebp */
  ESP = (EBP);
  /* 123947f2 pop ebp */
  EBP = (pop32());
  /* 123947f3 ret  */
  ESPCHK(0x123944d0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12394800 (155 bytes, 45 insns) */
void f_12394800(void) {
  FTRACE(0x12394800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394800 push ebp */
  push32((uint32_t)(EBP));
  /* 12394801 mov ebp, esp */
  EBP = (ESP);
  /* 12394803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239480d jmp 0x12394818 */
  goto L_12394818;
L_1239480f:;
  /* 1239480f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394812 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394815 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12394818:;
  /* 12394818 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239481c jge 0x12394897 */
  if ((C.sf==C.of)) goto L_12394897;
  /* 1239481e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394821 cmp dword ptr [ecx*4 + 0x123c1ec0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x123c1ec0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394829 je 0x12394892 */
  if (C.zf) goto L_12394892;
  /* 1239482b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239482e mov eax, dword ptr [edx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 12394835 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394838 jmp 0x12394843 */
  goto L_12394843;
L_1239483a:;
  /* 1239483a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239483d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12394843:;
  /* 12394843 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394846 mov eax, dword ptr [edx*4 + 0x123c1ec0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123c1ec0)));
  /* 1239484d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394852 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394855 jae 0x1239486f */
  if (!C.cf) goto L_1239486f;
  /* 12394857 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239485a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239485e je 0x1239486d */
  if (C.zf) goto L_1239486d;
  /* 12394860 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394863 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394866 push edx */
  push32((uint32_t)(EDX));
  /* 12394867 call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x1239486du);
L_1239486d:;
  /* 1239486d jmp 0x1239483a */
  goto L_1239483a;
L_1239486f:;
  /* 1239486f push 2 */
  push32((uint32_t)(0x2u));
  /* 12394871 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394874 mov ecx, dword ptr [eax*4 + 0x123c1ec0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123c1ec0)));
  /* 1239487b push ecx */
  push32((uint32_t)(ECX));
  /* 1239487c call 0x12395350 */
  push32(0x12394881u); f_12395350();
  /* 12394881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394884 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394887 mov dword ptr [edx*4 + 0x123c1ec0], 0 */
  w32((uint32_t)(EDX*4 + 0x123c1ec0), (0x0u));
L_12394892:;
  /* 12394892 jmp 0x1239480f */
  goto L_1239480f;
L_12394897:;
  /* 12394897 mov esp, ebp */
  ESP = (EBP);
  /* 12394899 pop ebp */
  EBP = (pop32());
  /* 1239489a ret  */
  ESPCHK(0x12394800u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a0 @ 0x123948a0 (29 bytes, 13 insns) */
void f_123948a0(void) {
  FTRACE(0x123948a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123948a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123948a1 mov ebp, esp */
  EBP = (ESP);
  /* 123948a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123948a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123948a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123948a9 mov eax, dword ptr [0x123c06d0] */
  EAX = (r32((uint32_t)(0x123c06d0)));
  /* 123948ae push eax */
  push32((uint32_t)(EAX));
  /* 123948af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123948b2 push ecx */
  push32((uint32_t)(ECX));
  /* 123948b3 call 0x12394910 */
  push32(0x123948b8u); f_12394910();
  /* 123948b8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123948bb pop ebp */
  EBP = (pop32());
  /* 123948bc ret  */
  ESPCHK(0x123948a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048c0 @ 0x123948c0 (35 bytes, 16 insns) */
void f_123948c0(void) {
  FTRACE(0x123948c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123948c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123948c1 mov ebp, esp */
  EBP = (ESP);
  /* 123948c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123948c6 push eax */
  push32((uint32_t)(EAX));
  /* 123948c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123948ca push ecx */
  push32((uint32_t)(ECX));
  /* 123948cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123948ce push edx */
  push32((uint32_t)(EDX));
  /* 123948cf mov eax, dword ptr [0x123c06d0] */
  EAX = (r32((uint32_t)(0x123c06d0)));
  /* 123948d4 push eax */
  push32((uint32_t)(EAX));
  /* 123948d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123948d8 push ecx */
  push32((uint32_t)(ECX));
  /* 123948d9 call 0x12394910 */
  push32(0x123948deu); f_12394910();
  /* 123948de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123948e1 pop ebp */
  EBP = (pop32());
  /* 123948e2 ret  */
  ESPCHK(0x123948c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100048f0 @ 0x123948f0 (27 bytes, 13 insns) */
void f_123948f0(void) {
  FTRACE(0x123948f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123948f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123948f1 mov ebp, esp */
  EBP = (ESP);
  /* 123948f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123948f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123948f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123948f9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123948fc push eax */
  push32((uint32_t)(EAX));
  /* 123948fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394900 push ecx */
  push32((uint32_t)(ECX));
  /* 12394901 call 0x12394910 */
  push32(0x12394906u); f_12394910();
  /* 12394906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394909 pop ebp */
  EBP = (pop32());
  /* 1239490a ret  */
  ESPCHK(0x123948f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004910 @ 0x12394910 (94 bytes, 38 insns) */
void f_12394910(void) {
  FTRACE(0x12394910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394910 push ebp */
  push32((uint32_t)(EBP));
  /* 12394911 mov ebp, esp */
  EBP = (ESP);
  /* 12394913 push ecx */
  push32((uint32_t)(ECX));
L_12394914:;
  /* 12394914 push 9 */
  push32((uint32_t)(0x9u));
  /* 12394916 call 0x123982c0 */
  push32(0x1239491bu); f_123982c0();
  /* 1239491b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239491e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394921 push eax */
  push32((uint32_t)(EAX));
  /* 12394922 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394925 push ecx */
  push32((uint32_t)(ECX));
  /* 12394926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394929 push edx */
  push32((uint32_t)(EDX));
  /* 1239492a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239492d push eax */
  push32((uint32_t)(EAX));
  /* 1239492e call 0x12394990 */
  push32(0x12394933u); f_12394990();
  /* 12394933 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394936 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394939 push 9 */
  push32((uint32_t)(0x9u));
  /* 1239493b call 0x12398360 */
  push32(0x12394940u); f_12398360();
  /* 12394940 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394943 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394947 jne 0x1239494f */
  if (!C.zf) goto L_1239494f;
  /* 12394949 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239494d jne 0x12394954 */
  if (!C.zf) goto L_12394954;
L_1239494f:;
  /* 1239494f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394952 jmp 0x1239496a */
  goto L_1239496a;
L_12394954:;
  /* 12394954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394957 push ecx */
  push32((uint32_t)(ECX));
  /* 12394958 call 0x12398600 */
  push32(0x1239495du); f_12398600();
  /* 1239495d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394962 jne 0x12394968 */
  if (!C.zf) goto L_12394968;
  /* 12394964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394966 jmp 0x1239496a */
  goto L_1239496a;
L_12394968:;
  /* 12394968 jmp 0x12394914 */
  goto L_12394914;
L_1239496a:;
  /* 1239496a mov esp, ebp */
  ESP = (EBP);
  /* 1239496c pop ebp */
  EBP = (pop32());
  /* 1239496d ret  */
  ESPCHK(0x12394910u, _esp0);
  ESP += 4; return;
}

/* FUN_10004970 @ 0x12394970 (23 bytes, 11 insns) */
void f_12394970(void) {
  FTRACE(0x12394970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394970 push ebp */
  push32((uint32_t)(EBP));
  /* 12394971 mov ebp, esp */
  EBP = (ESP);
  /* 12394973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394975 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394977 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394979 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239497c push eax */
  push32((uint32_t)(EAX));
  /* 1239497d call 0x12394990 */
  push32(0x12394982u); f_12394990();
  /* 12394982 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394985 pop ebp */
  EBP = (pop32());
  /* 12394986 ret  */
  ESPCHK(0x12394970u, _esp0);
  ESP += 4; return;
}

/* FUN_10004990 @ 0x12394990 (787 bytes, 254 insns) */
void f_12394990(void) {
  FTRACE(0x12394990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394990 push ebp */
  push32((uint32_t)(EBP));
  /* 12394991 mov ebp, esp */
  EBP = (ESP);
  /* 12394993 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394996 push ebx */
  push32((uint32_t)(EBX));
  /* 12394997 push esi */
  push32((uint32_t)(ESI));
  /* 12394998 push edi */
  push32((uint32_t)(EDI));
  /* 12394999 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 123949a0 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 123949a5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123949a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123949aa je 0x123949dc */
  if (C.zf) goto L_123949dc;
L_123949ac:;
  /* 123949ac call 0x12395a60 */
  push32(0x123949b1u); f_12395a60();
  /* 123949b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123949b3 jne 0x123949d6 */
  if (!C.zf) goto L_123949d6;
  /* 123949b5 push 0x123bb6e0 */
  push32((uint32_t)(0x123bb6e0u));
  /* 123949ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123949bc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 123949c1 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123949c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123949c8 call 0x12393980 */
  push32(0x123949cdu); f_12393980();
  /* 123949cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123949d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123949d3 jne 0x123949d6 */
  if (!C.zf) goto L_123949d6;
  /* 123949d5 int3  */
  x86_unimpl("int3 @ 0x123949d5");
L_123949d6:;
  /* 123949d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123949d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123949da jne 0x123949ac */
  if (!C.zf) goto L_123949ac;
L_123949dc:;
  /* 123949dc mov edx, dword ptr [0x123bea88] */
  EDX = (r32((uint32_t)(0x123bea88)));
  /* 123949e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123949e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123949e8 cmp eax, dword ptr [0x123bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123949ee jne 0x123949f1 */
  if (!C.zf) goto L_123949f1;
  /* 123949f0 int3  */
  x86_unimpl("int3 @ 0x123949f0");
L_123949f1:;
  /* 123949f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123949f4 push ecx */
  push32((uint32_t)(ECX));
  /* 123949f5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123949f8 push edx */
  push32((uint32_t)(EDX));
  /* 123949f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123949fc push eax */
  push32((uint32_t)(EAX));
  /* 123949fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12394a01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394a04 push edx */
  push32((uint32_t)(EDX));
  /* 12394a05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394a09 call dword ptr [0x123bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bec90))), 0x12394a0fu);
  /* 12394a0f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394a14 jne 0x12394a74 */
  if (!C.zf) goto L_12394a74;
  /* 12394a16 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394a1a je 0x12394a47 */
  if (C.zf) goto L_12394a47;
L_12394a1c:;
  /* 12394a1c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394a1f push eax */
  push32((uint32_t)(EAX));
  /* 12394a20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12394a24 push 0x123bb69c */
  push32((uint32_t)(0x123bb69cu));
  /* 12394a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a31 call 0x12393980 */
  push32(0x12394a36u); f_12393980();
  /* 12394a36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394a3c jne 0x12394a3f */
  if (!C.zf) goto L_12394a3f;
  /* 12394a3e int3  */
  x86_unimpl("int3 @ 0x12394a3e");
L_12394a3f:;
  /* 12394a3f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12394a41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394a43 jne 0x12394a1c */
  if (!C.zf) goto L_12394a1c;
  /* 12394a45 jmp 0x12394a6d */
  goto L_12394a6d;
L_12394a47:;
  /* 12394a47 push 0x123bb678 */
  push32((uint32_t)(0x123bb678u));
  /* 12394a4c push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12394a51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394a59 call 0x12393980 */
  push32(0x12394a5eu); f_12393980();
  /* 12394a5e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394a61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394a64 jne 0x12394a67 */
  if (!C.zf) goto L_12394a67;
  /* 12394a66 int3  */
  x86_unimpl("int3 @ 0x12394a66");
L_12394a67:;
  /* 12394a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394a6b jne 0x12394a47 */
  if (!C.zf) goto L_12394a47;
L_12394a6d:;
  /* 12394a6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394a6f jmp 0x12394c9c */
  goto L_12394c9c;
L_12394a74:;
  /* 12394a74 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394a77 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12394a7d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394a80 je 0x12394a96 */
  if (C.zf) goto L_12394a96;
  /* 12394a82 mov edx, dword ptr [0x123bea84] */
  EDX = (r32((uint32_t)(0x123bea84)));
  /* 12394a88 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12394a8b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394a8d jne 0x12394a96 */
  if (!C.zf) goto L_12394a96;
  /* 12394a8f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12394a96:;
  /* 12394a96 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394a9a ja 0x12394aa7 */
  if ((!C.cf&&!C.zf)) goto L_12394aa7;
  /* 12394a9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394a9f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394aa2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394aa5 jbe 0x12394ad3 */
  if ((C.cf||C.zf)) goto L_12394ad3;
L_12394aa7:;
  /* 12394aa7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394aaa push ecx */
  push32((uint32_t)(ECX));
  /* 12394aab push 0x123bb650 */
  push32((uint32_t)(0x123bb650u));
  /* 12394ab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ab2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ab6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394ab8 call 0x12393980 */
  push32(0x12394abdu); f_12393980();
  /* 12394abd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394ac0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ac3 jne 0x12394ac6 */
  if (!C.zf) goto L_12394ac6;
  /* 12394ac5 int3  */
  x86_unimpl("int3 @ 0x12394ac5");
L_12394ac6:;
  /* 12394ac6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12394ac8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394aca jne 0x12394aa7 */
  if (!C.zf) goto L_12394aa7;
  /* 12394acc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394ace jmp 0x12394c9c */
  goto L_12394c9c;
L_12394ad3:;
  /* 12394ad3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394ad6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12394adb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ade je 0x12394b20 */
  if (C.zf) goto L_12394b20;
  /* 12394ae0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ae4 je 0x12394b20 */
  if (C.zf) goto L_12394b20;
  /* 12394ae6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394ae9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12394aef cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394af2 je 0x12394b20 */
  if (C.zf) goto L_12394b20;
  /* 12394af4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394af8 je 0x12394b20 */
  if (C.zf) goto L_12394b20;
L_12394afa:;
  /* 12394afa push 0x123bb61c */
  push32((uint32_t)(0x123bb61cu));
  /* 12394aff push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12394b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394b0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12394b0c call 0x12393980 */
  push32(0x12394b11u); f_12393980();
  /* 12394b11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394b14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394b17 jne 0x12394b1a */
  if (!C.zf) goto L_12394b1a;
  /* 12394b19 int3  */
  x86_unimpl("int3 @ 0x12394b19");
L_12394b1a:;
  /* 12394b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12394b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394b1e jne 0x12394afa */
  if (!C.zf) goto L_12394afa;
L_12394b20:;
  /* 12394b20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394b23 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394b26 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12394b29 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12394b2c push ecx */
  push32((uint32_t)(ECX));
  /* 12394b2d call 0x12398710 */
  push32(0x12394b32u); f_12398710();
  /* 12394b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394b35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394b38 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394b3c jne 0x12394b45 */
  if (!C.zf) goto L_12394b45;
  /* 12394b3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394b40 jmp 0x12394c9c */
  goto L_12394c9c;
L_12394b45:;
  /* 12394b45 mov edx, dword ptr [0x123bea88] */
  EDX = (r32((uint32_t)(0x123bea88)));
  /* 12394b4b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394b4e mov dword ptr [0x123bea88], edx */
  w32((uint32_t)(0x123bea88), (EDX));
  /* 12394b54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394b58 je 0x12394ba3 */
  if (C.zf) goto L_12394ba3;
  /* 12394b5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b5d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12394b63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b66 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12394b6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b70 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12394b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b7a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12394b81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394b87 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12394b8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b8d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12394b94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394b97 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12394b9e jmp 0x12394c43 */
  goto L_12394c43;
L_12394ba3:;
  /* 12394ba3 mov edx, dword ptr [0x123c0530] */
  EDX = (r32((uint32_t)(0x123c0530)));
  /* 12394ba9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394bac mov dword ptr [0x123c0530], edx */
  w32((uint32_t)(0x123c0530), (EDX));
  /* 12394bb2 mov eax, dword ptr [0x123c0538] */
  EAX = (r32((uint32_t)(0x123c0538)));
  /* 12394bb7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394bba mov dword ptr [0x123c0538], eax */
  w32((uint32_t)(0x123c0538), (EAX));
  /* 12394bbf mov ecx, dword ptr [0x123c0538] */
  ECX = (r32((uint32_t)(0x123c0538)));
  /* 12394bc5 cmp ecx, dword ptr [0x123c053c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123c053c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394bcb jbe 0x12394bd9 */
  if ((C.cf||C.zf)) goto L_12394bd9;
  /* 12394bcd mov edx, dword ptr [0x123c0538] */
  EDX = (r32((uint32_t)(0x123c0538)));
  /* 12394bd3 mov dword ptr [0x123c053c], edx */
  w32((uint32_t)(0x123c053c), (EDX));
L_12394bd9:;
  /* 12394bd9 cmp dword ptr [0x123c0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394be0 je 0x12394bef */
  if (C.zf) goto L_12394bef;
  /* 12394be2 mov eax, dword ptr [0x123c0534] */
  EAX = (r32((uint32_t)(0x123c0534)));
  /* 12394be7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394bea mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12394bed jmp 0x12394bf8 */
  goto L_12394bf8;
L_12394bef:;
  /* 12394bef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394bf2 mov dword ptr [0x123c052c], edx */
  w32((uint32_t)(0x123c052c), (EDX));
L_12394bf8:;
  /* 12394bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394bfb mov ecx, dword ptr [0x123c0534] */
  ECX = (r32((uint32_t)(0x123c0534)));
  /* 12394c01 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12394c03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c06 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12394c0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c10 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394c13 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12394c16 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c19 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394c1c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12394c1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394c25 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12394c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394c2e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12394c31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394c37 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12394c3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c3d mov dword ptr [0x123c0534], ecx */
  w32((uint32_t)(0x123c0534), (ECX));
L_12394c43:;
  /* 12394c43 push 4 */
  push32((uint32_t)(0x4u));
  /* 12394c45 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12394c47 mov dl, byte ptr [0x123bea90] */
  DL = (r8((uint32_t)(0x123bea90)));
  /* 12394c4d push edx */
  push32((uint32_t)(EDX));
  /* 12394c4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c51 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394c54 push eax */
  push32((uint32_t)(EAX));
  /* 12394c55 call 0x12398630 */
  push32(0x12394c5au); f_12398630();
  /* 12394c5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394c5d push 4 */
  push32((uint32_t)(0x4u));
  /* 12394c5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12394c61 mov cl, byte ptr [0x123bea90] */
  CL = (r8((uint32_t)(0x123bea90)));
  /* 12394c67 push ecx */
  push32((uint32_t)(ECX));
  /* 12394c68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394c6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c6e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12394c72 push ecx */
  push32((uint32_t)(ECX));
  /* 12394c73 call 0x12398630 */
  push32(0x12394c78u); f_12398630();
  /* 12394c78 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394c7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394c7e push edx */
  push32((uint32_t)(EDX));
  /* 12394c7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394c81 mov al, byte ptr [0x123bea92] */
  AL = (r8((uint32_t)(0x123bea92)));
  /* 12394c86 push eax */
  push32((uint32_t)(EAX));
  /* 12394c87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c8a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394c8d push ecx */
  push32((uint32_t)(ECX));
  /* 12394c8e call 0x12398630 */
  push32(0x12394c93u); f_12398630();
  /* 12394c93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394c96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394c99 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12394c9c:;
  /* 12394c9c pop edi */
  EDI = (pop32());
  /* 12394c9d pop esi */
  ESI = (pop32());
  /* 12394c9e pop ebx */
  EBX = (pop32());
  /* 12394c9f mov esp, ebp */
  ESP = (EBP);
  /* 12394ca1 pop ebp */
  EBP = (pop32());
  /* 12394ca2 ret  */
  ESPCHK(0x12394990u, _esp0);
  ESP += 4; return;
}

/* FUN_10004cb0 @ 0x12394cb0 (27 bytes, 13 insns) */
void f_12394cb0(void) {
  FTRACE(0x12394cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12394cb1 mov ebp, esp */
  EBP = (ESP);
  /* 12394cb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394cb5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394cb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394cb9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394cbc push eax */
  push32((uint32_t)(EAX));
  /* 12394cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12394cc1 call 0x12394cd0 */
  push32(0x12394cc6u); f_12394cd0();
  /* 12394cc6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394cc9 pop ebp */
  EBP = (pop32());
  /* 12394cca ret  */
  ESPCHK(0x12394cb0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12394cd0 (96 bytes, 37 insns) */
void f_12394cd0(void) {
  FTRACE(0x12394cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12394cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12394cd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394cd6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394cd9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12394cdd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12394ce0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 12394ce4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12394ce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394ceb push eax */
  push32((uint32_t)(EAX));
  /* 12394cec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394cef push ecx */
  push32((uint32_t)(ECX));
  /* 12394cf0 call 0x123948c0 */
  push32(0x12394cf5u); f_123948c0();
  /* 12394cf5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394cf8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12394cfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394cff je 0x12394d29 */
  if (C.zf) goto L_12394d29;
  /* 12394d01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394d04 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12394d07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12394d0a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12394d10:;
  /* 12394d10 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12394d13 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394d16 jae 0x12394d29 */
  if (!C.cf) goto L_12394d29;
  /* 12394d18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12394d1b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12394d1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12394d21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12394d27 jmp 0x12394d10 */
  goto L_12394d10;
L_12394d29:;
  /* 12394d29 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394d2c mov esp, ebp */
  ESP = (EBP);
  /* 12394d2e pop ebp */
  EBP = (pop32());
  /* 12394d2f ret  */
  ESPCHK(0x12394cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d30 @ 0x12394d30 (27 bytes, 13 insns) */
void f_12394d30(void) {
  FTRACE(0x12394d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12394d31 mov ebp, esp */
  EBP = (ESP);
  /* 12394d33 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394d37 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394d39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394d3c push eax */
  push32((uint32_t)(EAX));
  /* 12394d3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394d40 push ecx */
  push32((uint32_t)(ECX));
  /* 12394d41 call 0x12394d50 */
  push32(0x12394d46u); f_12394d50();
  /* 12394d46 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d49 pop ebp */
  EBP = (pop32());
  /* 12394d4a ret  */
  ESPCHK(0x12394d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d50 @ 0x12394d50 (64 bytes, 27 insns) */
void f_12394d50(void) {
  FTRACE(0x12394d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394d50 push ebp */
  push32((uint32_t)(EBP));
  /* 12394d51 mov ebp, esp */
  EBP = (ESP);
  /* 12394d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12394d54 push 9 */
  push32((uint32_t)(0x9u));
  /* 12394d56 call 0x123982c0 */
  push32(0x12394d5bu); f_123982c0();
  /* 12394d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d5e push 1 */
  push32((uint32_t)(0x1u));
  /* 12394d60 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394d63 push eax */
  push32((uint32_t)(EAX));
  /* 12394d64 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394d67 push ecx */
  push32((uint32_t)(ECX));
  /* 12394d68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394d6b push edx */
  push32((uint32_t)(EDX));
  /* 12394d6c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394d6f push eax */
  push32((uint32_t)(EAX));
  /* 12394d70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12394d74 call 0x12394d90 */
  push32(0x12394d79u); f_12394d90();
  /* 12394d79 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12394d7f push 9 */
  push32((uint32_t)(0x9u));
  /* 12394d81 call 0x12398360 */
  push32(0x12394d86u); f_12398360();
  /* 12394d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394d89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12394d8c mov esp, ebp */
  ESP = (EBP);
  /* 12394d8e pop ebp */
  EBP = (pop32());
  /* 12394d8f ret  */
  ESPCHK(0x12394d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d90 @ 0x12394d90 (1297 bytes, 431 insns) */
void f_12394d90(void) {
  FTRACE(0x12394d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12394d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12394d91 mov ebp, esp */
  EBP = (ESP);
  /* 12394d93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394d96 push ebx */
  push32((uint32_t)(EBX));
  /* 12394d97 push esi */
  push32((uint32_t)(ESI));
  /* 12394d98 push edi */
  push32((uint32_t)(EDI));
  /* 12394d99 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12394da0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394da4 jne 0x12394dc3 */
  if (!C.zf) goto L_12394dc3;
  /* 12394da6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394da9 push eax */
  push32((uint32_t)(EAX));
  /* 12394daa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394dad push ecx */
  push32((uint32_t)(ECX));
  /* 12394dae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394db1 push edx */
  push32((uint32_t)(EDX));
  /* 12394db2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394db5 push eax */
  push32((uint32_t)(EAX));
  /* 12394db6 call 0x123948c0 */
  push32(0x12394dbbu); f_123948c0();
  /* 12394dbb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394dbe jmp 0x1239529a */
  goto L_1239529a;
L_12394dc3:;
  /* 12394dc3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394dc7 je 0x12394de6 */
  if (C.zf) goto L_12394de6;
  /* 12394dc9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394dcd jne 0x12394de6 */
  if (!C.zf) goto L_12394de6;
  /* 12394dcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12394dd3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394dd6 push edx */
  push32((uint32_t)(EDX));
  /* 12394dd7 call 0x12395350 */
  push32(0x12394ddcu); f_12395350();
  /* 12394ddc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394ddf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394de1 jmp 0x1239529a */
  goto L_1239529a;
L_12394de6:;
  /* 12394de6 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 12394deb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12394dee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394df0 je 0x12394e22 */
  if (C.zf) goto L_12394e22;
L_12394df2:;
  /* 12394df2 call 0x12395a60 */
  push32(0x12394df7u); f_12395a60();
  /* 12394df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394df9 jne 0x12394e1c */
  if (!C.zf) goto L_12394e1c;
  /* 12394dfb push 0x123bb6e0 */
  push32((uint32_t)(0x123bb6e0u));
  /* 12394e00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e02 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12394e07 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12394e0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12394e0e call 0x12393980 */
  push32(0x12394e13u); f_12393980();
  /* 12394e13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394e16 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394e19 jne 0x12394e1c */
  if (!C.zf) goto L_12394e1c;
  /* 12394e1b int3  */
  x86_unimpl("int3 @ 0x12394e1b");
L_12394e1c:;
  /* 12394e1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12394e1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12394e20 jne 0x12394df2 */
  if (!C.zf) goto L_12394df2;
L_12394e22:;
  /* 12394e22 mov edx, dword ptr [0x123bea88] */
  EDX = (r32((uint32_t)(0x123bea88)));
  /* 12394e28 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12394e2b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12394e2e cmp eax, dword ptr [0x123bea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394e34 jne 0x12394e37 */
  if (!C.zf) goto L_12394e37;
  /* 12394e36 int3  */
  x86_unimpl("int3 @ 0x12394e36");
L_12394e37:;
  /* 12394e37 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394e3a push ecx */
  push32((uint32_t)(ECX));
  /* 12394e3b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394e3e push edx */
  push32((uint32_t)(EDX));
  /* 12394e3f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12394e42 push eax */
  push32((uint32_t)(EAX));
  /* 12394e43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12394e47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394e4a push edx */
  push32((uint32_t)(EDX));
  /* 12394e4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394e4e push eax */
  push32((uint32_t)(EAX));
  /* 12394e4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12394e51 call dword ptr [0x123bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bec90))), 0x12394e57u);
  /* 12394e57 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394e5c jne 0x12394ebc */
  if (!C.zf) goto L_12394ebc;
  /* 12394e5e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394e62 je 0x12394e8f */
  if (C.zf) goto L_12394e8f;
L_12394e64:;
  /* 12394e64 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12394e67 push ecx */
  push32((uint32_t)(ECX));
  /* 12394e68 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12394e6b push edx */
  push32((uint32_t)(EDX));
  /* 12394e6c push 0x123bb85c */
  push32((uint32_t)(0x123bb85cu));
  /* 12394e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e79 call 0x12393980 */
  push32(0x12394e7eu); f_12393980();
  /* 12394e7e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394e84 jne 0x12394e87 */
  if (!C.zf) goto L_12394e87;
  /* 12394e86 int3  */
  x86_unimpl("int3 @ 0x12394e86");
L_12394e87:;
  /* 12394e87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394e89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394e8b jne 0x12394e64 */
  if (!C.zf) goto L_12394e64;
  /* 12394e8d jmp 0x12394eb5 */
  goto L_12394eb5;
L_12394e8f:;
  /* 12394e8f push 0x123bb838 */
  push32((uint32_t)(0x123bb838u));
  /* 12394e94 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12394e99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12394e9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ea1 call 0x12393980 */
  push32(0x12394ea6u); f_12393980();
  /* 12394ea6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394ea9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394eac jne 0x12394eaf */
  if (!C.zf) goto L_12394eaf;
  /* 12394eae int3  */
  x86_unimpl("int3 @ 0x12394eae");
L_12394eaf:;
  /* 12394eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12394eb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12394eb3 jne 0x12394e8f */
  if (!C.zf) goto L_12394e8f;
L_12394eb5:;
  /* 12394eb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394eb7 jmp 0x1239529a */
  goto L_1239529a;
L_12394ebc:;
  /* 12394ebc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ec0 jbe 0x12394eee */
  if ((C.cf||C.zf)) goto L_12394eee;
L_12394ec2:;
  /* 12394ec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12394ec5 push edx */
  push32((uint32_t)(EDX));
  /* 12394ec6 push 0x123bb808 */
  push32((uint32_t)(0x123bb808u));
  /* 12394ecb push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ecd push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ecf push 0 */
  push32((uint32_t)(0x0u));
  /* 12394ed1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394ed3 call 0x12393980 */
  push32(0x12394ed8u); f_12393980();
  /* 12394ed8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394edb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ede jne 0x12394ee1 */
  if (!C.zf) goto L_12394ee1;
  /* 12394ee0 int3  */
  x86_unimpl("int3 @ 0x12394ee0");
L_12394ee1:;
  /* 12394ee1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394ee5 jne 0x12394ec2 */
  if (!C.zf) goto L_12394ec2;
  /* 12394ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394ee9 jmp 0x1239529a */
  goto L_1239529a;
L_12394eee:;
  /* 12394eee cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394ef2 je 0x12394f36 */
  if (C.zf) goto L_12394f36;
  /* 12394ef4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394ef7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12394efd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f00 je 0x12394f36 */
  if (C.zf) goto L_12394f36;
  /* 12394f02 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394f05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12394f0b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f0e je 0x12394f36 */
  if (C.zf) goto L_12394f36;
L_12394f10:;
  /* 12394f10 push 0x123bb61c */
  push32((uint32_t)(0x123bb61cu));
  /* 12394f15 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12394f1a push 0 */
  push32((uint32_t)(0x0u));
  /* 12394f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12394f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12394f20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12394f22 call 0x12393980 */
  push32(0x12394f27u); f_12393980();
  /* 12394f27 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394f2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f2d jne 0x12394f30 */
  if (!C.zf) goto L_12394f30;
  /* 12394f2f int3  */
  x86_unimpl("int3 @ 0x12394f2f");
L_12394f30:;
  /* 12394f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12394f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394f34 jne 0x12394f10 */
  if (!C.zf) goto L_12394f10;
L_12394f36:;
  /* 12394f36 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394f39 push ecx */
  push32((uint32_t)(ECX));
  /* 12394f3a call 0x12395ec0 */
  push32(0x12394f3fu); f_12395ec0();
  /* 12394f3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394f42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12394f44 jne 0x12394f67 */
  if (!C.zf) goto L_12394f67;
  /* 12394f46 push 0x123bb7e4 */
  push32((uint32_t)(0x123bb7e4u));
  /* 12394f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12394f4d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12394f52 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12394f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 12394f59 call 0x12393980 */
  push32(0x12394f5eu); f_12393980();
  /* 12394f5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394f61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f64 jne 0x12394f67 */
  if (!C.zf) goto L_12394f67;
  /* 12394f66 int3  */
  x86_unimpl("int3 @ 0x12394f66");
L_12394f67:;
  /* 12394f67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12394f69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12394f6b jne 0x12394f36 */
  if (!C.zf) goto L_12394f36;
  /* 12394f6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12394f70 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12394f73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12394f76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394f79 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f7d jne 0x12394f86 */
  if (!C.zf) goto L_12394f86;
  /* 12394f7f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12394f86:;
  /* 12394f86 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f8a je 0x12394fca */
  if (C.zf) goto L_12394fca;
L_12394f8c:;
  /* 12394f8c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394f8f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f96 jne 0x12394fa1 */
  if (!C.zf) goto L_12394fa1;
  /* 12394f98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394f9b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394f9f je 0x12394fc2 */
  if (C.zf) goto L_12394fc2;
L_12394fa1:;
  /* 12394fa1 push 0x123bb79c */
  push32((uint32_t)(0x123bb79cu));
  /* 12394fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12394fa8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12394fad push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12394fb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12394fb4 call 0x12393980 */
  push32(0x12394fb9u); f_12393980();
  /* 12394fb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12394fbc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394fbf jne 0x12394fc2 */
  if (!C.zf) goto L_12394fc2;
  /* 12394fc1 int3  */
  x86_unimpl("int3 @ 0x12394fc1");
L_12394fc2:;
  /* 12394fc2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12394fc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12394fc6 jne 0x12394f8c */
  if (!C.zf) goto L_12394f8c;
  /* 12394fc8 jmp 0x1239502e */
  goto L_1239502e;
L_12394fca:;
  /* 12394fca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394fcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12394fd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12394fd5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394fd8 jne 0x12394fef */
  if (!C.zf) goto L_12394fef;
  /* 12394fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394fdd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12394fe3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12394fe6 jne 0x12394fef */
  if (!C.zf) goto L_12394fef;
  /* 12394fe8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12394fef:;
  /* 12394fef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12394ff2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12394ff5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12394ffa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12394ffd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12395003 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395005 je 0x12395028 */
  if (C.zf) goto L_12395028;
  /* 12395007 push 0x123bb760 */
  push32((uint32_t)(0x123bb760u));
  /* 1239500c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239500e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12395013 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395018 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239501a call 0x12393980 */
  push32(0x1239501fu); f_12393980();
  /* 1239501f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395022 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395025 jne 0x12395028 */
  if (!C.zf) goto L_12395028;
  /* 12395027 int3  */
  x86_unimpl("int3 @ 0x12395027");
L_12395028:;
  /* 12395028 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239502a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239502c jne 0x12394fef */
  if (!C.zf) goto L_12394fef;
L_1239502e:;
  /* 1239502e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395032 je 0x12395059 */
  if (C.zf) goto L_12395059;
  /* 12395034 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395037 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239503a push eax */
  push32((uint32_t)(EAX));
  /* 1239503b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239503e push ecx */
  push32((uint32_t)(ECX));
  /* 1239503f call 0x12398840 */
  push32(0x12395044u); f_12398840();
  /* 12395044 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395047 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239504a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239504e jne 0x12395057 */
  if (!C.zf) goto L_12395057;
  /* 12395050 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395052 jmp 0x1239529a */
  goto L_1239529a;
L_12395057:;
  /* 12395057 jmp 0x1239507c */
  goto L_1239507c;
L_12395059:;
  /* 12395059 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239505c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239505f push edx */
  push32((uint32_t)(EDX));
  /* 12395060 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395063 push eax */
  push32((uint32_t)(EAX));
  /* 12395064 call 0x12398790 */
  push32(0x12395069u); f_12398790();
  /* 12395069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239506c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239506f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395073 jne 0x1239507c */
  if (!C.zf) goto L_1239507c;
  /* 12395075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395077 jmp 0x1239529a */
  goto L_1239529a;
L_1239507c:;
  /* 1239507c mov ecx, dword ptr [0x123bea88] */
  ECX = (r32((uint32_t)(0x123bea88)));
  /* 12395082 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395085 mov dword ptr [0x123bea88], ecx */
  w32((uint32_t)(0x123bea88), (ECX));
  /* 1239508b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239508f jne 0x123950e7 */
  if (!C.zf) goto L_123950e7;
  /* 12395091 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395094 mov eax, dword ptr [0x123c0530] */
  EAX = (r32((uint32_t)(0x123c0530)));
  /* 12395099 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239509c mov dword ptr [0x123c0530], eax */
  w32((uint32_t)(0x123c0530), (EAX));
  /* 123950a1 mov ecx, dword ptr [0x123c0530] */
  ECX = (r32((uint32_t)(0x123c0530)));
  /* 123950a7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123950aa mov dword ptr [0x123c0530], ecx */
  w32((uint32_t)(0x123c0530), (ECX));
  /* 123950b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123950b3 mov eax, dword ptr [0x123c0538] */
  EAX = (r32((uint32_t)(0x123c0538)));
  /* 123950b8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123950bb mov dword ptr [0x123c0538], eax */
  w32((uint32_t)(0x123c0538), (EAX));
  /* 123950c0 mov ecx, dword ptr [0x123c0538] */
  ECX = (r32((uint32_t)(0x123c0538)));
  /* 123950c6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123950c9 mov dword ptr [0x123c0538], ecx */
  w32((uint32_t)(0x123c0538), (ECX));
  /* 123950cf mov edx, dword ptr [0x123c0538] */
  EDX = (r32((uint32_t)(0x123c0538)));
  /* 123950d5 cmp edx, dword ptr [0x123c053c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123c053c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123950db jbe 0x123950e7 */
  if ((C.cf||C.zf)) goto L_123950e7;
  /* 123950dd mov eax, dword ptr [0x123c0538] */
  EAX = (r32((uint32_t)(0x123c0538)));
  /* 123950e2 mov dword ptr [0x123c053c], eax */
  w32((uint32_t)(0x123c053c), (EAX));
L_123950e7:;
  /* 123950e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123950ea add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123950ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123950f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123950f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123950f6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123950f9 jbe 0x1239511f */
  if ((C.cf||C.zf)) goto L_1239511f;
  /* 123950fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123950fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395101 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395104 push edx */
  push32((uint32_t)(EDX));
  /* 12395105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395107 mov al, byte ptr [0x123bea92] */
  AL = (r8((uint32_t)(0x123bea92)));
  /* 1239510c push eax */
  push32((uint32_t)(EAX));
  /* 1239510d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395110 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395113 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395116 push edx */
  push32((uint32_t)(EDX));
  /* 12395117 call 0x12398630 */
  push32(0x1239511cu); f_12398630();
  /* 1239511c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239511f:;
  /* 1239511f push 4 */
  push32((uint32_t)(0x4u));
  /* 12395121 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395123 mov al, byte ptr [0x123bea90] */
  AL = (r8((uint32_t)(0x123bea90)));
  /* 12395128 push eax */
  push32((uint32_t)(EAX));
  /* 12395129 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239512c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239512f push ecx */
  push32((uint32_t)(ECX));
  /* 12395130 call 0x12398630 */
  push32(0x12395135u); f_12398630();
  /* 12395135 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395138 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239513c jne 0x12395159 */
  if (!C.zf) goto L_12395159;
  /* 1239513e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395141 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12395144 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12395147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239514a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239514d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12395150 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395153 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12395156 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12395159:;
  /* 12395159 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239515c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239515f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12395162:;
  /* 12395162 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395166 jne 0x12395197 */
  if (!C.zf) goto L_12395197;
  /* 12395168 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239516c jne 0x12395176 */
  if (!C.zf) goto L_12395176;
  /* 1239516e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395171 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395174 je 0x12395197 */
  if (C.zf) goto L_12395197;
L_12395176:;
  /* 12395176 push 0x123bb72c */
  push32((uint32_t)(0x123bb72cu));
  /* 1239517b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239517d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12395182 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395187 push 2 */
  push32((uint32_t)(0x2u));
  /* 12395189 call 0x12393980 */
  push32(0x1239518eu); f_12393980();
  /* 1239518e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395191 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395194 jne 0x12395197 */
  if (!C.zf) goto L_12395197;
  /* 12395196 int3  */
  x86_unimpl("int3 @ 0x12395196");
L_12395197:;
  /* 12395197 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395199 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239519b jne 0x12395162 */
  if (!C.zf) goto L_12395162;
  /* 1239519d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123951a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123951a3 je 0x123951ab */
  if (C.zf) goto L_123951ab;
  /* 123951a5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123951a9 je 0x123951b3 */
  if (C.zf) goto L_123951b3;
L_123951ab:;
  /* 123951ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123951ae jmp 0x1239529a */
  goto L_1239529a;
L_123951b3:;
  /* 123951b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123951b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123951b9 je 0x123951cb */
  if (C.zf) goto L_123951cb;
  /* 123951bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123951be mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123951c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123951c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 123951c6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 123951c9 jmp 0x12395207 */
  goto L_12395207;
L_123951cb:;
  /* 123951cb mov eax, dword ptr [0x123c052c] */
  EAX = (r32((uint32_t)(0x123c052c)));
  /* 123951d0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123951d3 je 0x123951f6 */
  if (C.zf) goto L_123951f6;
  /* 123951d5 push 0x123bb710 */
  push32((uint32_t)(0x123bb710u));
  /* 123951da push 0 */
  push32((uint32_t)(0x0u));
  /* 123951dc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 123951e1 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123951e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 123951e8 call 0x12393980 */
  push32(0x123951edu); f_12393980();
  /* 123951ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123951f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123951f3 jne 0x123951f6 */
  if (!C.zf) goto L_123951f6;
  /* 123951f5 int3  */
  x86_unimpl("int3 @ 0x123951f5");
L_123951f6:;
  /* 123951f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123951f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123951fa jne 0x123951cb */
  if (!C.zf) goto L_123951cb;
  /* 123951fc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123951ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12395202 mov dword ptr [0x123c052c], eax */
  w32((uint32_t)(0x123c052c), (EAX));
L_12395207:;
  /* 12395207 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239520a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239520e je 0x1239521f */
  if (C.zf) goto L_1239521f;
  /* 12395210 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395213 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12395216 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395219 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239521b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1239521d jmp 0x1239525a */
  goto L_1239525a;
L_1239521f:;
  /* 1239521f mov eax, dword ptr [0x123c0534] */
  EAX = (r32((uint32_t)(0x123c0534)));
  /* 12395224 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395227 je 0x1239524a */
  if (C.zf) goto L_1239524a;
  /* 12395229 push 0x123bb6f4 */
  push32((uint32_t)(0x123bb6f4u));
  /* 1239522e push 0 */
  push32((uint32_t)(0x0u));
  /* 12395230 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12395235 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 1239523a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239523c call 0x12393980 */
  push32(0x12395241u); f_12393980();
  /* 12395241 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395244 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395247 jne 0x1239524a */
  if (!C.zf) goto L_1239524a;
  /* 12395249 int3  */
  x86_unimpl("int3 @ 0x12395249");
L_1239524a:;
  /* 1239524a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239524c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239524e jne 0x1239521f */
  if (!C.zf) goto L_1239521f;
  /* 12395250 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395253 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12395255 mov dword ptr [0x123c0534], eax */
  w32((uint32_t)(0x123c0534), (EAX));
L_1239525a:;
  /* 1239525a cmp dword ptr [0x123c0534], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0534))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395261 je 0x12395271 */
  if (C.zf) goto L_12395271;
  /* 12395263 mov ecx, dword ptr [0x123c0534] */
  ECX = (r32((uint32_t)(0x123c0534)));
  /* 12395269 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239526c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1239526f jmp 0x12395279 */
  goto L_12395279;
L_12395271:;
  /* 12395271 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395274 mov dword ptr [0x123c052c], eax */
  w32((uint32_t)(0x123c052c), (EAX));
L_12395279:;
  /* 12395279 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239527c mov edx, dword ptr [0x123c0534] */
  EDX = (r32((uint32_t)(0x123c0534)));
  /* 12395282 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12395284 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395287 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1239528e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395291 mov dword ptr [0x123c0534], ecx */
  w32((uint32_t)(0x123c0534), (ECX));
  /* 12395297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1239529a:;
  /* 1239529a pop edi */
  EDI = (pop32());
  /* 1239529b pop esi */
  ESI = (pop32());
  /* 1239529c pop ebx */
  EBX = (pop32());
  /* 1239529d mov esp, ebp */
  ESP = (EBP);
  /* 1239529f pop ebp */
  EBP = (pop32());
  /* 123952a0 ret  */
  ESPCHK(0x12394d90u, _esp0);
  ESP += 4; return;
}

/* FUN_100052b0 @ 0x123952b0 (27 bytes, 13 insns) */
void f_123952b0(void) {
  FTRACE(0x123952b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123952b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123952b1 mov ebp, esp */
  EBP = (ESP);
  /* 123952b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123952b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123952b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 123952b9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123952bc push eax */
  push32((uint32_t)(EAX));
  /* 123952bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123952c0 push ecx */
  push32((uint32_t)(ECX));
  /* 123952c1 call 0x123952d0 */
  push32(0x123952c6u); f_123952d0();
  /* 123952c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123952c9 pop ebp */
  EBP = (pop32());
  /* 123952ca ret  */
  ESPCHK(0x123952b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100052d0 @ 0x123952d0 (64 bytes, 27 insns) */
void f_123952d0(void) {
  FTRACE(0x123952d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123952d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123952d1 mov ebp, esp */
  EBP = (ESP);
  /* 123952d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123952d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 123952d6 call 0x123982c0 */
  push32(0x123952dbu); f_123982c0();
  /* 123952db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123952de push 0 */
  push32((uint32_t)(0x0u));
  /* 123952e0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 123952e3 push eax */
  push32((uint32_t)(EAX));
  /* 123952e4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123952e7 push ecx */
  push32((uint32_t)(ECX));
  /* 123952e8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123952eb push edx */
  push32((uint32_t)(EDX));
  /* 123952ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123952ef push eax */
  push32((uint32_t)(EAX));
  /* 123952f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123952f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123952f4 call 0x12394d90 */
  push32(0x123952f9u); f_12394d90();
  /* 123952f9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123952fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123952ff push 9 */
  push32((uint32_t)(0x9u));
  /* 12395301 call 0x12398360 */
  push32(0x12395306u); f_12398360();
  /* 12395306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239530c mov esp, ebp */
  ESP = (EBP);
  /* 1239530e pop ebp */
  EBP = (pop32());
  /* 1239530f ret  */
  ESPCHK(0x123952d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005310 @ 0x12395310 (19 bytes, 9 insns) */
void f_12395310(void) {
  FTRACE(0x12395310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395310 push ebp */
  push32((uint32_t)(EBP));
  /* 12395311 mov ebp, esp */
  EBP = (ESP);
  /* 12395313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12395315 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395318 push eax */
  push32((uint32_t)(EAX));
  /* 12395319 call 0x12395350 */
  push32(0x1239531eu); f_12395350();
  /* 1239531e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395321 pop ebp */
  EBP = (pop32());
  /* 12395322 ret  */
  ESPCHK(0x12395310u, _esp0);
  ESP += 4; return;
}

/* FUN_10005330 @ 0x12395330 (19 bytes, 9 insns) */
void f_12395330(void) {
  FTRACE(0x12395330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395330 push ebp */
  push32((uint32_t)(EBP));
  /* 12395331 mov ebp, esp */
  EBP = (ESP);
  /* 12395333 push 1 */
  push32((uint32_t)(0x1u));
  /* 12395335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395338 push eax */
  push32((uint32_t)(EAX));
  /* 12395339 call 0x12395380 */
  push32(0x1239533eu); f_12395380();
  /* 1239533e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395341 pop ebp */
  EBP = (pop32());
  /* 12395342 ret  */
  ESPCHK(0x12395330u, _esp0);
  ESP += 4; return;
}

/* FUN_10005350 @ 0x12395350 (41 bytes, 16 insns) */
void f_12395350(void) {
  FTRACE(0x12395350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395350 push ebp */
  push32((uint32_t)(EBP));
  /* 12395351 mov ebp, esp */
  EBP = (ESP);
  /* 12395353 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395355 call 0x123982c0 */
  push32(0x1239535au); f_123982c0();
  /* 1239535a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239535d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395360 push eax */
  push32((uint32_t)(EAX));
  /* 12395361 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395364 push ecx */
  push32((uint32_t)(ECX));
  /* 12395365 call 0x12395380 */
  push32(0x1239536au); f_12395380();
  /* 1239536a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239536d push 9 */
  push32((uint32_t)(0x9u));
  /* 1239536f call 0x12398360 */
  push32(0x12395374u); f_12398360();
  /* 12395374 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395377 pop ebp */
  EBP = (pop32());
  /* 12395378 ret  */
  ESPCHK(0x12395350u, _esp0);
  ESP += 4; return;
}

/* FUN_10005380 @ 0x12395380 (1004 bytes, 342 insns) */
void f_12395380(void) {
  FTRACE(0x12395380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395380 push ebp */
  push32((uint32_t)(EBP));
  /* 12395381 mov ebp, esp */
  EBP = (ESP);
  /* 12395383 push ecx */
  push32((uint32_t)(ECX));
  /* 12395384 push ebx */
  push32((uint32_t)(EBX));
  /* 12395385 push esi */
  push32((uint32_t)(ESI));
  /* 12395386 push edi */
  push32((uint32_t)(EDI));
  /* 12395387 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 1239538c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1239538f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395391 je 0x123953c3 */
  if (C.zf) goto L_123953c3;
L_12395393:;
  /* 12395393 call 0x12395a60 */
  push32(0x12395398u); f_12395a60();
  /* 12395398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239539a jne 0x123953bd */
  if (!C.zf) goto L_123953bd;
  /* 1239539c push 0x123bb6e0 */
  push32((uint32_t)(0x123bb6e0u));
  /* 123953a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953a3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 123953a8 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123953ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123953af call 0x12393980 */
  push32(0x123953b4u); f_12393980();
  /* 123953b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123953b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123953ba jne 0x123953bd */
  if (!C.zf) goto L_123953bd;
  /* 123953bc int3  */
  x86_unimpl("int3 @ 0x123953bc");
L_123953bd:;
  /* 123953bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123953bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123953c1 jne 0x12395393 */
  if (!C.zf) goto L_12395393;
L_123953c3:;
  /* 123953c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123953c7 jne 0x123953ce */
  if (!C.zf) goto L_123953ce;
  /* 123953c9 jmp 0x12395765 */
  goto L_12395765;
L_123953ce:;
  /* 123953ce push 0 */
  push32((uint32_t)(0x0u));
  /* 123953d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123953d7 push edx */
  push32((uint32_t)(EDX));
  /* 123953d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123953dd push eax */
  push32((uint32_t)(EAX));
  /* 123953de push 3 */
  push32((uint32_t)(0x3u));
  /* 123953e0 call dword ptr [0x123bec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x123bec90))), 0x123953e6u);
  /* 123953e6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123953e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123953eb jne 0x12395418 */
  if (!C.zf) goto L_12395418;
L_123953ed:;
  /* 123953ed push 0x123bb9a4 */
  push32((uint32_t)(0x123bb9a4u));
  /* 123953f2 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 123953f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123953fb push 0 */
  push32((uint32_t)(0x0u));
  /* 123953fd push 0 */
  push32((uint32_t)(0x0u));
  /* 123953ff call 0x12393980 */
  push32(0x12395404u); f_12393980();
  /* 12395404 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395407 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239540a jne 0x1239540d */
  if (!C.zf) goto L_1239540d;
  /* 1239540c int3  */
  x86_unimpl("int3 @ 0x1239540c");
L_1239540d:;
  /* 1239540d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239540f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395411 jne 0x123953ed */
  if (!C.zf) goto L_123953ed;
  /* 12395413 jmp 0x12395765 */
  goto L_12395765;
L_12395418:;
  /* 12395418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239541b push edx */
  push32((uint32_t)(EDX));
  /* 1239541c call 0x12395ec0 */
  push32(0x12395421u); f_12395ec0();
  /* 12395421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395424 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395426 jne 0x12395449 */
  if (!C.zf) goto L_12395449;
  /* 12395428 push 0x123bb7e4 */
  push32((uint32_t)(0x123bb7e4u));
  /* 1239542d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239542f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12395434 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395439 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239543b call 0x12393980 */
  push32(0x12395440u); f_12393980();
  /* 12395440 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395443 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395446 jne 0x12395449 */
  if (!C.zf) goto L_12395449;
  /* 12395448 int3  */
  x86_unimpl("int3 @ 0x12395448");
L_12395449:;
  /* 12395449 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239544b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239544d jne 0x12395418 */
  if (!C.zf) goto L_12395418;
  /* 1239544f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395452 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395455 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12395458:;
  /* 12395458 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239545b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1239545e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395463 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395466 je 0x123954ab */
  if (C.zf) goto L_123954ab;
  /* 12395468 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239546b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239546f je 0x123954ab */
  if (C.zf) goto L_123954ab;
  /* 12395471 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395474 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395477 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239547c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239547f je 0x123954ab */
  if (C.zf) goto L_123954ab;
  /* 12395481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395484 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395488 je 0x123954ab */
  if (C.zf) goto L_123954ab;
  /* 1239548a push 0x123bb97c */
  push32((uint32_t)(0x123bb97cu));
  /* 1239548f push 0 */
  push32((uint32_t)(0x0u));
  /* 12395491 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12395496 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 1239549b push 2 */
  push32((uint32_t)(0x2u));
  /* 1239549d call 0x12393980 */
  push32(0x123954a2u); f_12393980();
  /* 123954a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123954a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123954a8 jne 0x123954ab */
  if (!C.zf) goto L_123954ab;
  /* 123954aa int3  */
  x86_unimpl("int3 @ 0x123954aa");
L_123954ab:;
  /* 123954ab xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123954ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123954af jne 0x12395458 */
  if (!C.zf) goto L_12395458;
  /* 123954b1 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 123954b6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123954b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123954bb jne 0x12395586 */
  if (!C.zf) goto L_12395586;
  /* 123954c1 push 4 */
  push32((uint32_t)(0x4u));
  /* 123954c3 mov cl, byte ptr [0x123bea90] */
  CL = (r8((uint32_t)(0x123bea90)));
  /* 123954c9 push ecx */
  push32((uint32_t)(ECX));
  /* 123954ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123954cd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123954d0 push edx */
  push32((uint32_t)(EDX));
  /* 123954d1 call 0x123959d0 */
  push32(0x123954d6u); f_123959d0();
  /* 123954d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123954d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123954db jne 0x12395520 */
  if (!C.zf) goto L_12395520;
L_123954dd:;
  /* 123954dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123954e0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123954e3 push eax */
  push32((uint32_t)(EAX));
  /* 123954e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123954e7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 123954ea push edx */
  push32((uint32_t)(EDX));
  /* 123954eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123954ee mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 123954f1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 123954f7 mov edx, dword ptr [ecx*4 + 0x123bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea94)));
  /* 123954fe push edx */
  push32((uint32_t)(EDX));
  /* 123954ff push 0x123bb950 */
  push32((uint32_t)(0x123bb950u));
  /* 12395504 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395506 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239550a push 1 */
  push32((uint32_t)(0x1u));
  /* 1239550c call 0x12393980 */
  push32(0x12395511u); f_12393980();
  /* 12395511 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395514 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395517 jne 0x1239551a */
  if (!C.zf) goto L_1239551a;
  /* 12395519 int3  */
  x86_unimpl("int3 @ 0x12395519");
L_1239551a:;
  /* 1239551a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239551c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239551e jne 0x123954dd */
  if (!C.zf) goto L_123954dd;
L_12395520:;
  /* 12395520 push 4 */
  push32((uint32_t)(0x4u));
  /* 12395522 mov cl, byte ptr [0x123bea90] */
  CL = (r8((uint32_t)(0x123bea90)));
  /* 12395528 push ecx */
  push32((uint32_t)(ECX));
  /* 12395529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239552c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239552f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395532 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12395536 push edx */
  push32((uint32_t)(EDX));
  /* 12395537 call 0x123959d0 */
  push32(0x1239553cu); f_123959d0();
  /* 1239553c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239553f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395541 jne 0x12395586 */
  if (!C.zf) goto L_12395586;
L_12395543:;
  /* 12395543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395546 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395549 push eax */
  push32((uint32_t)(EAX));
  /* 1239554a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239554d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12395550 push edx */
  push32((uint32_t)(EDX));
  /* 12395551 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395554 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12395557 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239555d mov edx, dword ptr [ecx*4 + 0x123bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea94)));
  /* 12395564 push edx */
  push32((uint32_t)(EDX));
  /* 12395565 push 0x123bb924 */
  push32((uint32_t)(0x123bb924u));
  /* 1239556a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239556c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239556e push 0 */
  push32((uint32_t)(0x0u));
  /* 12395570 push 1 */
  push32((uint32_t)(0x1u));
  /* 12395572 call 0x12393980 */
  push32(0x12395577u); f_12393980();
  /* 12395577 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239557a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239557d jne 0x12395580 */
  if (!C.zf) goto L_12395580;
  /* 1239557f int3  */
  x86_unimpl("int3 @ 0x1239557f");
L_12395580:;
  /* 12395580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395584 jne 0x12395543 */
  if (!C.zf) goto L_12395543;
L_12395586:;
  /* 12395586 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395589 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239558d jne 0x123955fb */
  if (!C.zf) goto L_123955fb;
L_1239558f:;
  /* 1239558f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395592 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395599 jne 0x123955a4 */
  if (!C.zf) goto L_123955a4;
  /* 1239559b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239559e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123955a2 je 0x123955c5 */
  if (C.zf) goto L_123955c5;
L_123955a4:;
  /* 123955a4 push 0x123bb8e4 */
  push32((uint32_t)(0x123bb8e4u));
  /* 123955a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123955ab push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 123955b0 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123955b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 123955b7 call 0x12393980 */
  push32(0x123955bcu); f_12393980();
  /* 123955bc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123955bf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123955c2 jne 0x123955c5 */
  if (!C.zf) goto L_123955c5;
  /* 123955c4 int3  */
  x86_unimpl("int3 @ 0x123955c4");
L_123955c5:;
  /* 123955c5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123955c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123955c9 jne 0x1239558f */
  if (!C.zf) goto L_1239558f;
  /* 123955cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123955ce mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123955d1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123955d4 push eax */
  push32((uint32_t)(EAX));
  /* 123955d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123955d7 mov cl, byte ptr [0x123bea91] */
  CL = (r8((uint32_t)(0x123bea91)));
  /* 123955dd push ecx */
  push32((uint32_t)(ECX));
  /* 123955de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123955e1 push edx */
  push32((uint32_t)(EDX));
  /* 123955e2 call 0x12398630 */
  push32(0x123955e7u); f_12398630();
  /* 123955e7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123955ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123955ed push eax */
  push32((uint32_t)(EAX));
  /* 123955ee call 0x12398a30 */
  push32(0x123955f3u); f_12398a30();
  /* 123955f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123955f6 jmp 0x12395765 */
  goto L_12395765;
L_123955fb:;
  /* 123955fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123955fe cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395602 jne 0x12395611 */
  if (!C.zf) goto L_12395611;
  /* 12395604 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395608 jne 0x12395611 */
  if (!C.zf) goto L_12395611;
  /* 1239560a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12395611:;
  /* 12395611 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395614 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395617 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239561a je 0x1239563d */
  if (C.zf) goto L_1239563d;
  /* 1239561c push 0x123bb8c4 */
  push32((uint32_t)(0x123bb8c4u));
  /* 12395621 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395623 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12395628 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 1239562d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239562f call 0x12393980 */
  push32(0x12395634u); f_12393980();
  /* 12395634 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395637 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239563a jne 0x1239563d */
  if (!C.zf) goto L_1239563d;
  /* 1239563c int3  */
  x86_unimpl("int3 @ 0x1239563c");
L_1239563d:;
  /* 1239563d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239563f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395641 jne 0x12395611 */
  if (!C.zf) goto L_12395611;
  /* 12395643 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395646 mov eax, dword ptr [0x123c0538] */
  EAX = (r32((uint32_t)(0x123c0538)));
  /* 1239564b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239564e mov dword ptr [0x123c0538], eax */
  w32((uint32_t)(0x123c0538), (EAX));
  /* 12395653 mov ecx, dword ptr [0x123bea84] */
  ECX = (r32((uint32_t)(0x123bea84)));
  /* 12395659 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1239565c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239565e jne 0x1239573c */
  if (!C.zf) goto L_1239573c;
  /* 12395664 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395667 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239566a je 0x1239567c */
  if (C.zf) goto L_1239567c;
  /* 1239566c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239566f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12395671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395674 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12395677 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1239567a jmp 0x123956ba */
  goto L_123956ba;
L_1239567c:;
  /* 1239567c mov ecx, dword ptr [0x123c052c] */
  ECX = (r32((uint32_t)(0x123c052c)));
  /* 12395682 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395685 je 0x123956a8 */
  if (C.zf) goto L_123956a8;
  /* 12395687 push 0x123bb8ac */
  push32((uint32_t)(0x123bb8acu));
  /* 1239568c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239568e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12395693 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395698 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239569a call 0x12393980 */
  push32(0x1239569fu); f_12393980();
  /* 1239569f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123956a2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123956a5 jne 0x123956a8 */
  if (!C.zf) goto L_123956a8;
  /* 123956a7 int3  */
  x86_unimpl("int3 @ 0x123956a7");
L_123956a8:;
  /* 123956a8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123956aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123956ac jne 0x1239567c */
  if (!C.zf) goto L_1239567c;
  /* 123956ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123956b1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123956b4 mov dword ptr [0x123c052c], ecx */
  w32((uint32_t)(0x123c052c), (ECX));
L_123956ba:;
  /* 123956ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123956bd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123956c1 je 0x123956d2 */
  if (C.zf) goto L_123956d2;
  /* 123956c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123956c6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 123956c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123956cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123956ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 123956d0 jmp 0x1239570f */
  goto L_1239570f;
L_123956d2:;
  /* 123956d2 mov ecx, dword ptr [0x123c0534] */
  ECX = (r32((uint32_t)(0x123c0534)));
  /* 123956d8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123956db je 0x123956fe */
  if (C.zf) goto L_123956fe;
  /* 123956dd push 0x123bb894 */
  push32((uint32_t)(0x123bb894u));
  /* 123956e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123956e4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 123956e9 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123956ee push 2 */
  push32((uint32_t)(0x2u));
  /* 123956f0 call 0x12393980 */
  push32(0x123956f5u); f_12393980();
  /* 123956f5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123956f8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123956fb jne 0x123956fe */
  if (!C.zf) goto L_123956fe;
  /* 123956fd int3  */
  x86_unimpl("int3 @ 0x123956fd");
L_123956fe:;
  /* 123956fe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395700 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395702 jne 0x123956d2 */
  if (!C.zf) goto L_123956d2;
  /* 12395704 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395707 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12395709 mov dword ptr [0x123c0534], ecx */
  w32((uint32_t)(0x123c0534), (ECX));
L_1239570f:;
  /* 1239570f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395712 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12395715 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395718 push eax */
  push32((uint32_t)(EAX));
  /* 12395719 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239571b mov cl, byte ptr [0x123bea91] */
  CL = (r8((uint32_t)(0x123bea91)));
  /* 12395721 push ecx */
  push32((uint32_t)(ECX));
  /* 12395722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395725 push edx */
  push32((uint32_t)(EDX));
  /* 12395726 call 0x12398630 */
  push32(0x1239572bu); f_12398630();
  /* 1239572b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239572e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395731 push eax */
  push32((uint32_t)(EAX));
  /* 12395732 call 0x12398a30 */
  push32(0x12395737u); f_12398a30();
  /* 12395737 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239573a jmp 0x12395765 */
  goto L_12395765;
L_1239573c:;
  /* 1239573c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239573f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12395746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395749 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1239574c push eax */
  push32((uint32_t)(EAX));
  /* 1239574d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239574f mov cl, byte ptr [0x123bea91] */
  CL = (r8((uint32_t)(0x123bea91)));
  /* 12395755 push ecx */
  push32((uint32_t)(ECX));
  /* 12395756 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395759 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239575c push edx */
  push32((uint32_t)(EDX));
  /* 1239575d call 0x12398630 */
  push32(0x12395762u); f_12398630();
  /* 12395762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12395765:;
  /* 12395765 pop edi */
  EDI = (pop32());
  /* 12395766 pop esi */
  ESI = (pop32());
  /* 12395767 pop ebx */
  EBX = (pop32());
  /* 12395768 mov esp, ebp */
  ESP = (EBP);
  /* 1239576a pop ebp */
  EBP = (pop32());
  /* 1239576b ret  */
  ESPCHK(0x12395380u, _esp0);
  ESP += 4; return;
}

/* FUN_10005770 @ 0x12395770 (19 bytes, 9 insns) */
void f_12395770(void) {
  FTRACE(0x12395770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395770 push ebp */
  push32((uint32_t)(EBP));
  /* 12395771 mov ebp, esp */
  EBP = (ESP);
  /* 12395773 push 1 */
  push32((uint32_t)(0x1u));
  /* 12395775 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395778 push eax */
  push32((uint32_t)(EAX));
  /* 12395779 call 0x12395790 */
  push32(0x1239577eu); f_12395790();
  /* 1239577e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395781 pop ebp */
  EBP = (pop32());
  /* 12395782 ret  */
  ESPCHK(0x12395770u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x12395790 (342 bytes, 119 insns) */
void f_12395790(void) {
  FTRACE(0x12395790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395790 push ebp */
  push32((uint32_t)(EBP));
  /* 12395791 mov ebp, esp */
  EBP = (ESP);
  /* 12395793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395796 push ebx */
  push32((uint32_t)(EBX));
  /* 12395797 push esi */
  push32((uint32_t)(ESI));
  /* 12395798 push edi */
  push32((uint32_t)(EDI));
  /* 12395799 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 1239579e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 123957a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123957a3 je 0x123957d5 */
  if (C.zf) goto L_123957d5;
L_123957a5:;
  /* 123957a5 call 0x12395a60 */
  push32(0x123957aau); f_12395a60();
  /* 123957aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123957ac jne 0x123957cf */
  if (!C.zf) goto L_123957cf;
  /* 123957ae push 0x123bb6e0 */
  push32((uint32_t)(0x123bb6e0u));
  /* 123957b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123957b5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 123957ba push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123957bf push 2 */
  push32((uint32_t)(0x2u));
  /* 123957c1 call 0x12393980 */
  push32(0x123957c6u); f_12393980();
  /* 123957c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123957c9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123957cc jne 0x123957cf */
  if (!C.zf) goto L_123957cf;
  /* 123957ce int3  */
  x86_unimpl("int3 @ 0x123957ce");
L_123957cf:;
  /* 123957cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123957d1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123957d3 jne 0x123957a5 */
  if (!C.zf) goto L_123957a5;
L_123957d5:;
  /* 123957d5 push 9 */
  push32((uint32_t)(0x9u));
  /* 123957d7 call 0x123982c0 */
  push32(0x123957dcu); f_123982c0();
  /* 123957dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123957df:;
  /* 123957df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123957e2 push edx */
  push32((uint32_t)(EDX));
  /* 123957e3 call 0x12395ec0 */
  push32(0x123957e8u); f_12395ec0();
  /* 123957e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123957eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123957ed jne 0x12395810 */
  if (!C.zf) goto L_12395810;
  /* 123957ef push 0x123bb7e4 */
  push32((uint32_t)(0x123bb7e4u));
  /* 123957f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123957f6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 123957fb push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395800 push 2 */
  push32((uint32_t)(0x2u));
  /* 12395802 call 0x12393980 */
  push32(0x12395807u); f_12393980();
  /* 12395807 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239580a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239580d jne 0x12395810 */
  if (!C.zf) goto L_12395810;
  /* 1239580f int3  */
  x86_unimpl("int3 @ 0x1239580f");
L_12395810:;
  /* 12395810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395814 jne 0x123957df */
  if (!C.zf) goto L_123957df;
  /* 12395816 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395819 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239581c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1239581f:;
  /* 1239581f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395822 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395825 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239582a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239582d je 0x12395872 */
  if (C.zf) goto L_12395872;
  /* 1239582f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395832 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395836 je 0x12395872 */
  if (C.zf) goto L_12395872;
  /* 12395838 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239583b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1239583e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395843 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395846 je 0x12395872 */
  if (C.zf) goto L_12395872;
  /* 12395848 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239584b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239584f je 0x12395872 */
  if (C.zf) goto L_12395872;
  /* 12395851 push 0x123bb97c */
  push32((uint32_t)(0x123bb97cu));
  /* 12395856 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395858 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1239585d push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 12395862 push 2 */
  push32((uint32_t)(0x2u));
  /* 12395864 call 0x12393980 */
  push32(0x12395869u); f_12393980();
  /* 12395869 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239586c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239586f jne 0x12395872 */
  if (!C.zf) goto L_12395872;
  /* 12395871 int3  */
  x86_unimpl("int3 @ 0x12395871");
L_12395872:;
  /* 12395872 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395874 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395876 jne 0x1239581f */
  if (!C.zf) goto L_1239581f;
  /* 12395878 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239587b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239587f jne 0x1239588e */
  if (!C.zf) goto L_1239588e;
  /* 12395881 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395885 jne 0x1239588e */
  if (!C.zf) goto L_1239588e;
  /* 12395887 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1239588e:;
  /* 1239588e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395891 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395895 je 0x123958c9 */
  if (C.zf) goto L_123958c9;
L_12395897:;
  /* 12395897 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239589a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1239589d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123958a0 je 0x123958c3 */
  if (C.zf) goto L_123958c3;
  /* 123958a2 push 0x123bb8c4 */
  push32((uint32_t)(0x123bb8c4u));
  /* 123958a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123958a9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 123958ae push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 123958b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123958b5 call 0x12393980 */
  push32(0x123958bau); f_12393980();
  /* 123958ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123958bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123958c0 jne 0x123958c3 */
  if (!C.zf) goto L_123958c3;
  /* 123958c2 int3  */
  x86_unimpl("int3 @ 0x123958c2");
L_123958c3:;
  /* 123958c3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123958c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123958c7 jne 0x12395897 */
  if (!C.zf) goto L_12395897;
L_123958c9:;
  /* 123958c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123958cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123958cf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123958d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123958d4 call 0x12398360 */
  push32(0x123958d9u); f_12398360();
  /* 123958d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123958dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123958df pop edi */
  EDI = (pop32());
  /* 123958e0 pop esi */
  ESI = (pop32());
  /* 123958e1 pop ebx */
  EBX = (pop32());
  /* 123958e2 mov esp, ebp */
  ESP = (EBP);
  /* 123958e4 pop ebp */
  EBP = (pop32());
  /* 123958e5 ret  */
  ESPCHK(0x12395790u, _esp0);
  ESP += 4; return;
}

/* FUN_100058f0 @ 0x123958f0 (28 bytes, 11 insns) */
void f_123958f0(void) {
  FTRACE(0x123958f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123958f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123958f1 mov ebp, esp */
  EBP = (ESP);
  /* 123958f3 push ecx */
  push32((uint32_t)(ECX));
  /* 123958f4 mov eax, dword ptr [0x123bea8c] */
  EAX = (r32((uint32_t)(0x123bea8c)));
  /* 123958f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123958fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123958ff mov dword ptr [0x123bea8c], ecx */
  w32((uint32_t)(0x123bea8c), (ECX));
  /* 12395905 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395908 mov esp, ebp */
  ESP = (EBP);
  /* 1239590a pop ebp */
  EBP = (pop32());
  /* 1239590b ret  */
  ESPCHK(0x123958f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005910 @ 0x12395910 (157 bytes, 59 insns) */
void f_12395910(void) {
  FTRACE(0x12395910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395910 push ebp */
  push32((uint32_t)(EBP));
  /* 12395911 mov ebp, esp */
  EBP = (ESP);
  /* 12395913 push ecx */
  push32((uint32_t)(ECX));
  /* 12395914 push ebx */
  push32((uint32_t)(EBX));
  /* 12395915 push esi */
  push32((uint32_t)(ESI));
  /* 12395916 push edi */
  push32((uint32_t)(EDI));
  /* 12395917 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395919 call 0x123982c0 */
  push32(0x1239591eu); f_123982c0();
  /* 1239591e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395921 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395924 push eax */
  push32((uint32_t)(EAX));
  /* 12395925 call 0x12395ec0 */
  push32(0x1239592au); f_12395ec0();
  /* 1239592a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239592d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239592f je 0x1239599c */
  if (C.zf) goto L_1239599c;
  /* 12395931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395934 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395937 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239593a:;
  /* 1239593a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239593d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395940 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395945 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395948 je 0x1239598d */
  if (C.zf) goto L_1239598d;
  /* 1239594a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239594d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395951 je 0x1239598d */
  if (C.zf) goto L_1239598d;
  /* 12395953 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395956 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395959 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239595e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395961 je 0x1239598d */
  if (C.zf) goto L_1239598d;
  /* 12395963 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395966 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239596a je 0x1239598d */
  if (C.zf) goto L_1239598d;
  /* 1239596c push 0x123bb97c */
  push32((uint32_t)(0x123bb97cu));
  /* 12395971 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395973 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12395978 push 0x123bb6d4 */
  push32((uint32_t)(0x123bb6d4u));
  /* 1239597d push 2 */
  push32((uint32_t)(0x2u));
  /* 1239597f call 0x12393980 */
  push32(0x12395984u); f_12393980();
  /* 12395984 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395987 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239598a jne 0x1239598d */
  if (!C.zf) goto L_1239598d;
  /* 1239598c int3  */
  x86_unimpl("int3 @ 0x1239598c");
L_1239598d:;
  /* 1239598d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239598f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395991 jne 0x1239593a */
  if (!C.zf) goto L_1239593a;
  /* 12395993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395996 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395999 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1239599c:;
  /* 1239599c push 9 */
  push32((uint32_t)(0x9u));
  /* 1239599e call 0x12398360 */
  push32(0x123959a3u); f_12398360();
  /* 123959a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123959a6 pop edi */
  EDI = (pop32());
  /* 123959a7 pop esi */
  ESI = (pop32());
  /* 123959a8 pop ebx */
  EBX = (pop32());
  /* 123959a9 mov esp, ebp */
  ESP = (EBP);
  /* 123959ab pop ebp */
  EBP = (pop32());
  /* 123959ac ret  */
  ESPCHK(0x12395910u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x123959b0 (28 bytes, 11 insns) */
void f_123959b0(void) {
  FTRACE(0x123959b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123959b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123959b1 mov ebp, esp */
  EBP = (ESP);
  /* 123959b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123959b4 mov eax, dword ptr [0x123bec90] */
  EAX = (r32((uint32_t)(0x123bec90)));
  /* 123959b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123959bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123959bf mov dword ptr [0x123bec90], ecx */
  w32((uint32_t)(0x123bec90), (ECX));
  /* 123959c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123959c8 mov esp, ebp */
  ESP = (EBP);
  /* 123959ca pop ebp */
  EBP = (pop32());
  /* 123959cb ret  */
  ESPCHK(0x123959b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100059d0 @ 0x123959d0 (136 bytes, 55 insns) */
void f_123959d0(void) {
  FTRACE(0x123959d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123959d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123959d1 mov ebp, esp */
  EBP = (ESP);
  /* 123959d3 push ecx */
  push32((uint32_t)(ECX));
  /* 123959d4 push ebx */
  push32((uint32_t)(EBX));
  /* 123959d5 push esi */
  push32((uint32_t)(ESI));
  /* 123959d6 push edi */
  push32((uint32_t)(EDI));
  /* 123959d7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_123959de:;
  /* 123959de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123959e1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123959e4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123959e7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 123959ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123959ec je 0x12395a4e */
  if (C.zf) goto L_12395a4e;
  /* 123959ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123959f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123959f3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 123959f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123959f8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 123959fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395a01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395a04 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12395a07 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395a09 je 0x12395a4c */
  if (C.zf) goto L_12395a4c;
L_12395a0b:;
  /* 12395a0b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395a0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395a13 push eax */
  push32((uint32_t)(EAX));
  /* 12395a14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395a17 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395a19 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12395a1c push edx */
  push32((uint32_t)(EDX));
  /* 12395a1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395a20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395a23 push eax */
  push32((uint32_t)(EAX));
  /* 12395a24 push 0x123bb9c0 */
  push32((uint32_t)(0x123bb9c0u));
  /* 12395a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12395a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12395a2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12395a31 call 0x12393980 */
  push32(0x12395a36u); f_12393980();
  /* 12395a36 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395a39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395a3c jne 0x12395a3f */
  if (!C.zf) goto L_12395a3f;
  /* 12395a3e int3  */
  x86_unimpl("int3 @ 0x12395a3e");
L_12395a3f:;
  /* 12395a3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12395a41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395a43 jne 0x12395a0b */
  if (!C.zf) goto L_12395a0b;
  /* 12395a45 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12395a4c:;
  /* 12395a4c jmp 0x123959de */
  goto L_123959de;
L_12395a4e:;
  /* 12395a4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395a51 pop edi */
  EDI = (pop32());
  /* 12395a52 pop esi */
  ESI = (pop32());
  /* 12395a53 pop ebx */
  EBX = (pop32());
  /* 12395a54 mov esp, ebp */
  ESP = (EBP);
  /* 12395a56 pop ebp */
  EBP = (pop32());
  /* 12395a57 ret  */
  ESPCHK(0x123959d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a60 @ 0x12395a60 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12395a60(void) {
  FTRACE(0x12395a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12395a61 mov ebp, esp */
  EBP = (ESP);
  /* 12395a63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395a66 push ebx */
  push32((uint32_t)(EBX));
  /* 12395a67 push esi */
  push32((uint32_t)(ESI));
  /* 12395a68 push edi */
  push32((uint32_t)(EDI));
  /* 12395a69 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12395a70 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 12395a75 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12395a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395a7a jne 0x12395a86 */
  if (!C.zf) goto L_12395a86;
  /* 12395a7c mov eax, 1 */
  EAX = (0x1u);
  /* 12395a81 jmp 0x12395db8 */
  goto L_12395db8;
L_12395a86:;
  /* 12395a86 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395a88 call 0x123982c0 */
  push32(0x12395a8du); f_123982c0();
  /* 12395a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395a90 call 0x12398aa0 */
  push32(0x12395a95u); f_12398aa0();
  /* 12395a95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12395a98 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395a9c je 0x12395ba9 */
  if (C.zf) goto L_12395ba9;
  /* 12395aa2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395aa6 je 0x12395ba9 */
  if (C.zf) goto L_12395ba9;
  /* 12395aac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12395aaf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12395ab2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12395ab5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395ab8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12395abb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395abf ja 0x12395b72 */
  if ((!C.cf&&!C.zf)) goto L_12395b72;
  /* 12395ac5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12395ac8 jmp dword ptr [eax*4 + 0x12395dbf] */
  switch (EAX) {
    case 0: goto L_12395b4a;
    case 1: goto L_12395b22;
    case 2: goto L_12395afa;
    case 3: goto L_12395acf;
    default: x86_unimpl("switch@0x12395ac8 out of table"); return;
  }
L_12395acf:;
  /* 12395acf push 0x123bbb14 */
  push32((uint32_t)(0x123bbb14u));
  /* 12395ad4 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12395ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395adb push 0 */
  push32((uint32_t)(0x0u));
  /* 12395add push 0 */
  push32((uint32_t)(0x0u));
  /* 12395adf push 0 */
  push32((uint32_t)(0x0u));
  /* 12395ae1 call 0x12393980 */
  push32(0x12395ae6u); f_12393980();
  /* 12395ae6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395ae9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395aec jne 0x12395aef */
  if (!C.zf) goto L_12395aef;
  /* 12395aee int3  */
  x86_unimpl("int3 @ 0x12395aee");
L_12395aef:;
  /* 12395aef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12395af1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395af3 jne 0x12395acf */
  if (!C.zf) goto L_12395acf;
  /* 12395af5 jmp 0x12395b98 */
  goto L_12395b98;
L_12395afa:;
  /* 12395afa push 0x123bbaf0 */
  push32((uint32_t)(0x123bbaf0u));
  /* 12395aff push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12395b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b06 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b0c call 0x12393980 */
  push32(0x12395b11u); f_12393980();
  /* 12395b11 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395b14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395b17 jne 0x12395b1a */
  if (!C.zf) goto L_12395b1a;
  /* 12395b19 int3  */
  x86_unimpl("int3 @ 0x12395b19");
L_12395b1a:;
  /* 12395b1a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395b1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395b1e jne 0x12395afa */
  if (!C.zf) goto L_12395afa;
  /* 12395b20 jmp 0x12395b98 */
  goto L_12395b98;
L_12395b22:;
  /* 12395b22 push 0x123bbacc */
  push32((uint32_t)(0x123bbaccu));
  /* 12395b27 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12395b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b32 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b34 call 0x12393980 */
  push32(0x12395b39u); f_12393980();
  /* 12395b39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395b3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395b3f jne 0x12395b42 */
  if (!C.zf) goto L_12395b42;
  /* 12395b41 int3  */
  x86_unimpl("int3 @ 0x12395b41");
L_12395b42:;
  /* 12395b42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395b44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395b46 jne 0x12395b22 */
  if (!C.zf) goto L_12395b22;
  /* 12395b48 jmp 0x12395b98 */
  goto L_12395b98;
L_12395b4a:;
  /* 12395b4a push 0x123bbaa8 */
  push32((uint32_t)(0x123bbaa8u));
  /* 12395b4f push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12395b54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b5c call 0x12393980 */
  push32(0x12395b61u); f_12393980();
  /* 12395b61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395b64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395b67 jne 0x12395b6a */
  if (!C.zf) goto L_12395b6a;
  /* 12395b69 int3  */
  x86_unimpl("int3 @ 0x12395b69");
L_12395b6a:;
  /* 12395b6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12395b6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395b6e jne 0x12395b4a */
  if (!C.zf) goto L_12395b4a;
  /* 12395b70 jmp 0x12395b98 */
  goto L_12395b98;
L_12395b72:;
  /* 12395b72 push 0x123bba7c */
  push32((uint32_t)(0x123bba7cu));
  /* 12395b77 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12395b7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395b84 call 0x12393980 */
  push32(0x12395b89u); f_12393980();
  /* 12395b89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395b8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395b8f jne 0x12395b92 */
  if (!C.zf) goto L_12395b92;
  /* 12395b91 int3  */
  x86_unimpl("int3 @ 0x12395b91");
L_12395b92:;
  /* 12395b92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395b94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395b96 jne 0x12395b72 */
  if (!C.zf) goto L_12395b72;
L_12395b98:;
  /* 12395b98 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395b9a call 0x12398360 */
  push32(0x12395b9fu); f_12398360();
  /* 12395b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395ba2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395ba4 jmp 0x12395db8 */
  goto L_12395db8;
L_12395ba9:;
  /* 12395ba9 mov eax, dword ptr [0x123c0534] */
  EAX = (r32((uint32_t)(0x123c0534)));
  /* 12395bae mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12395bb1 jmp 0x12395bbb */
  goto L_12395bbb;
L_12395bb3:;
  /* 12395bb3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395bb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12395bb8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12395bbb:;
  /* 12395bbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395bbf je 0x12395dab */
  if (C.zf) goto L_12395dab;
  /* 12395bc5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12395bcc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395bcf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12395bd2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12395bd8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395bdb je 0x12395c00 */
  if (C.zf) goto L_12395c00;
  /* 12395bdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395be0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395be4 je 0x12395c00 */
  if (C.zf) goto L_12395c00;
  /* 12395be6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395be9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12395bec and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12395bf2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395bf5 je 0x12395c00 */
  if (C.zf) goto L_12395c00;
  /* 12395bf7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395bfa cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395bfe jne 0x12395c18 */
  if (!C.zf) goto L_12395c18;
L_12395c00:;
  /* 12395c00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c03 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12395c06 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12395c0c mov edx, dword ptr [ecx*4 + 0x123bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea94)));
  /* 12395c13 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12395c16 jmp 0x12395c1f */
  goto L_12395c1f;
L_12395c18:;
  /* 12395c18 mov dword ptr [ebp - 0x14], 0x123bba74 */
  w32((uint32_t)(EBP + -0x14), (0x123bba74u));
L_12395c1f:;
  /* 12395c1f push 4 */
  push32((uint32_t)(0x4u));
  /* 12395c21 mov al, byte ptr [0x123bea90] */
  AL = (r8((uint32_t)(0x123bea90)));
  /* 12395c26 push eax */
  push32((uint32_t)(EAX));
  /* 12395c27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c2a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c2d push ecx */
  push32((uint32_t)(ECX));
  /* 12395c2e call 0x123959d0 */
  push32(0x12395c33u); f_123959d0();
  /* 12395c33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395c38 jne 0x12395c74 */
  if (!C.zf) goto L_12395c74;
L_12395c3a:;
  /* 12395c3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c3d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c40 push edx */
  push32((uint32_t)(EDX));
  /* 12395c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c44 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12395c47 push ecx */
  push32((uint32_t)(ECX));
  /* 12395c48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12395c4b push edx */
  push32((uint32_t)(EDX));
  /* 12395c4c push 0x123bb950 */
  push32((uint32_t)(0x123bb950u));
  /* 12395c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395c57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395c59 call 0x12393980 */
  push32(0x12395c5eu); f_12393980();
  /* 12395c5e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395c64 jne 0x12395c67 */
  if (!C.zf) goto L_12395c67;
  /* 12395c66 int3  */
  x86_unimpl("int3 @ 0x12395c66");
L_12395c67:;
  /* 12395c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395c6b jne 0x12395c3a */
  if (!C.zf) goto L_12395c3a;
  /* 12395c6d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12395c74:;
  /* 12395c74 push 4 */
  push32((uint32_t)(0x4u));
  /* 12395c76 mov cl, byte ptr [0x123bea90] */
  CL = (r8((uint32_t)(0x123bea90)));
  /* 12395c7c push ecx */
  push32((uint32_t)(ECX));
  /* 12395c7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c80 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12395c83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c86 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12395c8a push edx */
  push32((uint32_t)(EDX));
  /* 12395c8b call 0x123959d0 */
  push32(0x12395c90u); f_123959d0();
  /* 12395c90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395c95 jne 0x12395cd1 */
  if (!C.zf) goto L_12395cd1;
L_12395c97:;
  /* 12395c97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395c9a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395c9d push eax */
  push32((uint32_t)(EAX));
  /* 12395c9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395ca1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12395ca4 push edx */
  push32((uint32_t)(EDX));
  /* 12395ca5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12395ca8 push eax */
  push32((uint32_t)(EAX));
  /* 12395ca9 push 0x123bb924 */
  push32((uint32_t)(0x123bb924u));
  /* 12395cae push 0 */
  push32((uint32_t)(0x0u));
  /* 12395cb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395cb2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395cb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395cb6 call 0x12393980 */
  push32(0x12395cbbu); f_12393980();
  /* 12395cbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395cbe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395cc1 jne 0x12395cc4 */
  if (!C.zf) goto L_12395cc4;
  /* 12395cc3 int3  */
  x86_unimpl("int3 @ 0x12395cc3");
L_12395cc4:;
  /* 12395cc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12395cc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395cc8 jne 0x12395c97 */
  if (!C.zf) goto L_12395c97;
  /* 12395cca mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12395cd1:;
  /* 12395cd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395cd4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395cd8 jne 0x12395d2a */
  if (!C.zf) goto L_12395d2a;
  /* 12395cda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395cdd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12395ce0 push ecx */
  push32((uint32_t)(ECX));
  /* 12395ce1 mov dl, byte ptr [0x123bea91] */
  DL = (r8((uint32_t)(0x123bea91)));
  /* 12395ce7 push edx */
  push32((uint32_t)(EDX));
  /* 12395ce8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395ceb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395cee push eax */
  push32((uint32_t)(EAX));
  /* 12395cef call 0x123959d0 */
  push32(0x12395cf4u); f_123959d0();
  /* 12395cf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395cf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395cf9 jne 0x12395d2a */
  if (!C.zf) goto L_12395d2a;
L_12395cfb:;
  /* 12395cfb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395cfe add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395d01 push ecx */
  push32((uint32_t)(ECX));
  /* 12395d02 push 0x123bba48 */
  push32((uint32_t)(0x123bba48u));
  /* 12395d07 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d0d push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d0f call 0x12393980 */
  push32(0x12395d14u); f_12393980();
  /* 12395d14 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395d17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395d1a jne 0x12395d1d */
  if (!C.zf) goto L_12395d1d;
  /* 12395d1c int3  */
  x86_unimpl("int3 @ 0x12395d1c");
L_12395d1d:;
  /* 12395d1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395d21 jne 0x12395cfb */
  if (!C.zf) goto L_12395cfb;
  /* 12395d23 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12395d2a:;
  /* 12395d2a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395d2e jne 0x12395da6 */
  if (!C.zf) goto L_12395da6;
  /* 12395d30 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395d33 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395d37 je 0x12395d6c */
  if (C.zf) goto L_12395d6c;
L_12395d39:;
  /* 12395d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395d3c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12395d3f push edx */
  push32((uint32_t)(EDX));
  /* 12395d40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395d43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12395d46 push ecx */
  push32((uint32_t)(ECX));
  /* 12395d47 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12395d4a push edx */
  push32((uint32_t)(EDX));
  /* 12395d4b push 0x123bba28 */
  push32((uint32_t)(0x123bba28u));
  /* 12395d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d58 call 0x12393980 */
  push32(0x12395d5du); f_12393980();
  /* 12395d5d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395d60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395d63 jne 0x12395d66 */
  if (!C.zf) goto L_12395d66;
  /* 12395d65 int3  */
  x86_unimpl("int3 @ 0x12395d65");
L_12395d66:;
  /* 12395d66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395d6a jne 0x12395d39 */
  if (!C.zf) goto L_12395d39;
L_12395d6c:;
  /* 12395d6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395d6f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12395d72 push edx */
  push32((uint32_t)(EDX));
  /* 12395d73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12395d76 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395d79 push eax */
  push32((uint32_t)(EAX));
  /* 12395d7a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12395d7d push ecx */
  push32((uint32_t)(ECX));
  /* 12395d7e push 0x123bb9fc */
  push32((uint32_t)(0x123bb9fcu));
  /* 12395d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395d8b call 0x12393980 */
  push32(0x12395d90u); f_12393980();
  /* 12395d90 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395d93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395d96 jne 0x12395d99 */
  if (!C.zf) goto L_12395d99;
  /* 12395d98 int3  */
  x86_unimpl("int3 @ 0x12395d98");
L_12395d99:;
  /* 12395d99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12395d9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12395d9d jne 0x12395d6c */
  if (!C.zf) goto L_12395d6c;
  /* 12395d9f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12395da6:;
  /* 12395da6 jmp 0x12395bb3 */
  goto L_12395bb3;
L_12395dab:;
  /* 12395dab push 9 */
  push32((uint32_t)(0x9u));
  /* 12395dad call 0x12398360 */
  push32(0x12395db2u); f_12398360();
  /* 12395db2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12395db8:;
  /* 12395db8 pop edi */
  EDI = (pop32());
  /* 12395db9 pop esi */
  ESI = (pop32());
  /* 12395dba pop ebx */
  EBX = (pop32());
  /* 12395dbb mov esp, ebp */
  ESP = (EBP);
  /* 12395dbd pop ebp */
  EBP = (pop32());
  /* 12395dbe ret  */
  ESPCHK(0x12395a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x12395dd0 (34 bytes, 13 insns) */
void f_12395dd0(void) {
  FTRACE(0x12395dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12395dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12395dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12395dd4 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 12395dd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12395ddc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395de0 je 0x12395deb */
  if (C.zf) goto L_12395deb;
  /* 12395de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395de5 mov dword ptr [0x123bea84], ecx */
  w32((uint32_t)(0x123bea84), (ECX));
L_12395deb:;
  /* 12395deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395dee mov esp, ebp */
  ESP = (EBP);
  /* 12395df0 pop ebp */
  EBP = (pop32());
  /* 12395df1 ret  */
  ESPCHK(0x12395dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e00 @ 0x12395e00 (103 bytes, 38 insns) */
void f_12395e00(void) {
  FTRACE(0x12395e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12395e01 mov ebp, esp */
  EBP = (ESP);
  /* 12395e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12395e04 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 12395e09 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12395e0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395e0e jne 0x12395e12 */
  if (!C.zf) goto L_12395e12;
  /* 12395e10 jmp 0x12395e63 */
  goto L_12395e63;
L_12395e12:;
  /* 12395e12 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395e14 call 0x123982c0 */
  push32(0x12395e19u); f_123982c0();
  /* 12395e19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395e1c mov ecx, dword ptr [0x123c0534] */
  ECX = (r32((uint32_t)(0x123c0534)));
  /* 12395e22 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12395e25 jmp 0x12395e2f */
  goto L_12395e2f;
L_12395e27:;
  /* 12395e27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395e2a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12395e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12395e2f:;
  /* 12395e2f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395e33 je 0x12395e59 */
  if (C.zf) goto L_12395e59;
  /* 12395e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395e38 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12395e3b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12395e41 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395e44 jne 0x12395e57 */
  if (!C.zf) goto L_12395e57;
  /* 12395e46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395e49 push eax */
  push32((uint32_t)(EAX));
  /* 12395e4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395e4d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12395e50 push ecx */
  push32((uint32_t)(ECX));
  /* 12395e51 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12395e54u);
  /* 12395e54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12395e57:;
  /* 12395e57 jmp 0x12395e27 */
  goto L_12395e27;
L_12395e59:;
  /* 12395e59 push 9 */
  push32((uint32_t)(0x9u));
  /* 12395e5b call 0x12398360 */
  push32(0x12395e60u); f_12398360();
  /* 12395e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12395e63:;
  /* 12395e63 mov esp, ebp */
  ESP = (EBP);
  /* 12395e65 pop ebp */
  EBP = (pop32());
  /* 12395e66 ret  */
  ESPCHK(0x12395e00u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12395e70 (75 bytes, 28 insns) */
void f_12395e70(void) {
  FTRACE(0x12395e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395e70 push ebp */
  push32((uint32_t)(EBP));
  /* 12395e71 mov ebp, esp */
  EBP = (ESP);
  /* 12395e73 push ecx */
  push32((uint32_t)(ECX));
  /* 12395e74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395e78 je 0x12395ead */
  if (C.zf) goto L_12395ead;
  /* 12395e7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395e7d push eax */
  push32((uint32_t)(EAX));
  /* 12395e7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395e81 push ecx */
  push32((uint32_t)(ECX));
  /* 12395e82 call dword ptr [0x123c3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3334))), 0x12395e88u);
  /* 12395e88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395e8a jne 0x12395ead */
  if (!C.zf) goto L_12395ead;
  /* 12395e8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395e90 je 0x12395ea4 */
  if (C.zf) goto L_12395ea4;
  /* 12395e92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395e95 push edx */
  push32((uint32_t)(EDX));
  /* 12395e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395e99 push eax */
  push32((uint32_t)(EAX));
  /* 12395e9a call dword ptr [0x123c3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3330))), 0x12395ea0u);
  /* 12395ea0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395ea2 jne 0x12395ead */
  if (!C.zf) goto L_12395ead;
L_12395ea4:;
  /* 12395ea4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12395eab jmp 0x12395eb4 */
  goto L_12395eb4;
L_12395ead:;
  /* 12395ead mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12395eb4:;
  /* 12395eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395eb7 mov esp, ebp */
  ESP = (EBP);
  /* 12395eb9 pop ebp */
  EBP = (pop32());
  /* 12395eba ret  */
  ESPCHK(0x12395e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x12395ec0 (134 bytes, 50 insns) */
void f_12395ec0(void) {
  FTRACE(0x12395ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12395ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12395ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12395ec4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395ec8 jne 0x12395ece */
  if (!C.zf) goto L_12395ece;
  /* 12395eca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395ecc jmp 0x12395f42 */
  goto L_12395f42;
L_12395ece:;
  /* 12395ece push 1 */
  push32((uint32_t)(0x1u));
  /* 12395ed0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12395ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395ed5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395ed8 push eax */
  push32((uint32_t)(EAX));
  /* 12395ed9 call 0x12395e70 */
  push32(0x12395edeu); f_12395e70();
  /* 12395ede add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395ee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395ee3 jne 0x12395ee9 */
  if (!C.zf) goto L_12395ee9;
  /* 12395ee5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395ee7 jmp 0x12395f42 */
  goto L_12395f42;
L_12395ee9:;
  /* 12395ee9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395eec sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395eef push ecx */
  push32((uint32_t)(ECX));
  /* 12395ef0 call 0x12398bc0 */
  push32(0x12395ef5u); f_12398bc0();
  /* 12395ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395ef8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12395efb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395eff je 0x12395f16 */
  if (C.zf) goto L_12395f16;
  /* 12395f01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395f04 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395f07 push edx */
  push32((uint32_t)(EDX));
  /* 12395f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395f0b push eax */
  push32((uint32_t)(EAX));
  /* 12395f0c call 0x12398c20 */
  push32(0x12395f11u); f_12398c20();
  /* 12395f11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395f14 jmp 0x12395f42 */
  goto L_12395f42;
L_12395f16:;
  /* 12395f16 mov ecx, dword ptr [0x123c04e8] */
  ECX = (r32((uint32_t)(0x123c04e8)));
  /* 12395f1c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12395f22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12395f24 je 0x12395f2d */
  if (C.zf) goto L_12395f2d;
  /* 12395f26 mov eax, 1 */
  EAX = (0x1u);
  /* 12395f2b jmp 0x12395f42 */
  goto L_12395f42;
L_12395f2d:;
  /* 12395f2d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395f30 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395f33 push edx */
  push32((uint32_t)(EDX));
  /* 12395f34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12395f36 mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12395f3b push eax */
  push32((uint32_t)(EAX));
  /* 12395f3c call dword ptr [0x123c3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3338))), 0x12395f42u);
L_12395f42:;
  /* 12395f42 mov esp, ebp */
  ESP = (EBP);
  /* 12395f44 pop ebp */
  EBP = (pop32());
  /* 12395f45 ret  */
  ESPCHK(0x12395ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f50 @ 0x12395f50 (227 bytes, 80 insns) */
void f_12395f50(void) {
  FTRACE(0x12395f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12395f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12395f51 mov ebp, esp */
  EBP = (ESP);
  /* 12395f53 push ecx */
  push32((uint32_t)(ECX));
  /* 12395f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395f57 push eax */
  push32((uint32_t)(EAX));
  /* 12395f58 call 0x12395ec0 */
  push32(0x12395f5du); f_12395ec0();
  /* 12395f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395f60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395f62 jne 0x12395f6b */
  if (!C.zf) goto L_12395f6b;
  /* 12395f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12395f66 jmp 0x1239602f */
  goto L_1239602f;
L_12395f6b:;
  /* 12395f6b push 9 */
  push32((uint32_t)(0x9u));
  /* 12395f6d call 0x123982c0 */
  push32(0x12395f72u); f_123982c0();
  /* 12395f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395f75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395f78 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12395f7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12395f7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395f81 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395f84 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395f89 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395f8c je 0x12395fb0 */
  if (C.zf) goto L_12395fb0;
  /* 12395f8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395f91 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395f95 je 0x12395fb0 */
  if (C.zf) goto L_12395fb0;
  /* 12395f97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395f9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12395f9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12395fa2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395fa5 je 0x12395fb0 */
  if (C.zf) goto L_12395fb0;
  /* 12395fa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395faa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395fae jne 0x12396023 */
  if (!C.zf) goto L_12396023;
L_12395fb0:;
  /* 12395fb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12395fb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12395fb5 push edx */
  push32((uint32_t)(EDX));
  /* 12395fb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12395fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12395fba call 0x12395e70 */
  push32(0x12395fbfu); f_12395e70();
  /* 12395fbf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12395fc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12395fc4 je 0x12396023 */
  if (C.zf) goto L_12396023;
  /* 12395fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395fc9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12395fcc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395fcf jne 0x12396023 */
  if (!C.zf) goto L_12396023;
  /* 12395fd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395fd4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12395fd7 cmp ecx, dword ptr [0x123bea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395fdd jg 0x12396023 */
  if ((!C.zf&&C.sf==C.of)) goto L_12396023;
  /* 12395fdf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395fe3 je 0x12395ff0 */
  if (C.zf) goto L_12395ff0;
  /* 12395fe5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12395fe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395feb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12395fee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12395ff0:;
  /* 12395ff0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12395ff4 je 0x12396001 */
  if (C.zf) goto L_12396001;
  /* 12395ff6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12395ff9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12395ffc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12395fff mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12396001:;
  /* 12396001 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396005 je 0x12396012 */
  if (C.zf) goto L_12396012;
  /* 12396007 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1239600a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239600d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12396010 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12396012:;
  /* 12396012 push 9 */
  push32((uint32_t)(0x9u));
  /* 12396014 call 0x12398360 */
  push32(0x12396019u); f_12398360();
  /* 12396019 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239601c mov eax, 1 */
  EAX = (0x1u);
  /* 12396021 jmp 0x1239602f */
  goto L_1239602f;
L_12396023:;
  /* 12396023 push 9 */
  push32((uint32_t)(0x9u));
  /* 12396025 call 0x12398360 */
  push32(0x1239602au); f_12398360();
  /* 1239602a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239602d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239602f:;
  /* 1239602f mov esp, ebp */
  ESP = (EBP);
  /* 12396031 pop ebp */
  EBP = (pop32());
  /* 12396032 ret  */
  ESPCHK(0x12395f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006040 @ 0x12396040 (28 bytes, 11 insns) */
void f_12396040(void) {
  FTRACE(0x12396040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396040 push ebp */
  push32((uint32_t)(EBP));
  /* 12396041 mov ebp, esp */
  EBP = (ESP);
  /* 12396043 push ecx */
  push32((uint32_t)(ECX));
  /* 12396044 mov eax, dword ptr [0x123c1e98] */
  EAX = (r32((uint32_t)(0x123c1e98)));
  /* 12396049 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239604c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239604f mov dword ptr [0x123c1e98], ecx */
  w32((uint32_t)(0x123c1e98), (ECX));
  /* 12396055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396058 mov esp, ebp */
  ESP = (EBP);
  /* 1239605a pop ebp */
  EBP = (pop32());
  /* 1239605b ret  */
  ESPCHK(0x12396040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x12396060 (362 bytes, 116 insns) */
void f_12396060(void) {
  FTRACE(0x12396060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396060 push ebp */
  push32((uint32_t)(EBP));
  /* 12396061 mov ebp, esp */
  EBP = (ESP);
  /* 12396063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396066 push ebx */
  push32((uint32_t)(EBX));
  /* 12396067 push esi */
  push32((uint32_t)(ESI));
  /* 12396068 push edi */
  push32((uint32_t)(EDI));
  /* 12396069 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239606d jne 0x1239609a */
  if (!C.zf) goto L_1239609a;
L_1239606f:;
  /* 1239606f push 0x123bbb5c */
  push32((uint32_t)(0x123bbb5cu));
  /* 12396074 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12396079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239607b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239607d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239607f push 0 */
  push32((uint32_t)(0x0u));
  /* 12396081 call 0x12393980 */
  push32(0x12396086u); f_12393980();
  /* 12396086 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239608c jne 0x1239608f */
  if (!C.zf) goto L_1239608f;
  /* 1239608e int3  */
  x86_unimpl("int3 @ 0x1239608e");
L_1239608f:;
  /* 1239608f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396091 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396093 jne 0x1239606f */
  if (!C.zf) goto L_1239606f;
  /* 12396095 jmp 0x123961c3 */
  goto L_123961c3;
L_1239609a:;
  /* 1239609a push 9 */
  push32((uint32_t)(0x9u));
  /* 1239609c call 0x123982c0 */
  push32(0x123960a1u); f_123982c0();
  /* 123960a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123960a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123960a7 mov edx, dword ptr [0x123c0534] */
  EDX = (r32((uint32_t)(0x123c0534)));
  /* 123960ad mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123960af mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123960b6 jmp 0x123960c1 */
  goto L_123960c1;
L_123960b8:;
  /* 123960b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123960bb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123960be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123960c1:;
  /* 123960c1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123960c5 jge 0x123960e5 */
  if ((C.sf==C.of)) goto L_123960e5;
  /* 123960c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123960ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123960cd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 123960d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123960d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123960db mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 123960e3 jmp 0x123960b8 */
  goto L_123960b8;
L_123960e5:;
  /* 123960e5 mov edx, dword ptr [0x123c0534] */
  EDX = (r32((uint32_t)(0x123c0534)));
  /* 123960eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 123960ee jmp 0x123960f8 */
  goto L_123960f8;
L_123960f0:;
  /* 123960f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123960f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 123960f5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_123960f8:;
  /* 123960f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123960fc je 0x123961a1 */
  if (C.zf) goto L_123961a1;
  /* 12396102 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396105 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12396108 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239610d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239610f jl 0x12396177 */
  if ((C.sf!=C.of)) goto L_12396177;
  /* 12396111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396114 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12396117 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239611d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396120 jge 0x12396177 */
  if ((C.sf==C.of)) goto L_12396177;
  /* 12396122 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396125 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12396128 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1239612e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396131 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12396135 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396138 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239613b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1239613e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12396144 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396147 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1239614b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239614e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12396151 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12396156 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396159 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1239615d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396160 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396163 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396166 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12396169 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239616e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396171 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12396175 jmp 0x1239619c */
  goto L_1239619c;
L_12396177:;
  /* 12396177 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239617a push edx */
  push32((uint32_t)(EDX));
  /* 1239617b push 0x123bbb38 */
  push32((uint32_t)(0x123bbb38u));
  /* 12396180 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396182 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396184 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396186 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396188 call 0x12393980 */
  push32(0x1239618du); f_12393980();
  /* 1239618d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396190 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396193 jne 0x12396196 */
  if (!C.zf) goto L_12396196;
  /* 12396195 int3  */
  x86_unimpl("int3 @ 0x12396195");
L_12396196:;
  /* 12396196 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396198 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239619a jne 0x12396177 */
  if (!C.zf) goto L_12396177;
L_1239619c:;
  /* 1239619c jmp 0x123960f0 */
  goto L_123960f0;
L_123961a1:;
  /* 123961a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123961a4 mov edx, dword ptr [0x123c053c] */
  EDX = (r32((uint32_t)(0x123c053c)));
  /* 123961aa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 123961ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123961b0 mov ecx, dword ptr [0x123c0530] */
  ECX = (r32((uint32_t)(0x123c0530)));
  /* 123961b6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 123961b9 push 9 */
  push32((uint32_t)(0x9u));
  /* 123961bb call 0x12398360 */
  push32(0x123961c0u); f_12398360();
  /* 123961c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123961c3:;
  /* 123961c3 pop edi */
  EDI = (pop32());
  /* 123961c4 pop esi */
  ESI = (pop32());
  /* 123961c5 pop ebx */
  EBX = (pop32());
  /* 123961c6 mov esp, ebp */
  ESP = (EBP);
  /* 123961c8 pop ebp */
  EBP = (pop32());
  /* 123961c9 ret  */
  ESPCHK(0x12396060u, _esp0);
  ESP += 4; return;
}

/* FUN_100061d0 @ 0x123961d0 (291 bytes, 95 insns) */
void f_123961d0(void) {
  FTRACE(0x123961d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123961d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123961d1 mov ebp, esp */
  EBP = (ESP);
  /* 123961d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123961d6 push ebx */
  push32((uint32_t)(EBX));
  /* 123961d7 push esi */
  push32((uint32_t)(ESI));
  /* 123961d8 push edi */
  push32((uint32_t)(EDI));
  /* 123961d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 123961e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123961e4 je 0x123961f2 */
  if (C.zf) goto L_123961f2;
  /* 123961e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123961ea je 0x123961f2 */
  if (C.zf) goto L_123961f2;
  /* 123961ec cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123961f0 jne 0x12396220 */
  if (!C.zf) goto L_12396220;
L_123961f2:;
  /* 123961f2 push 0x123bbb84 */
  push32((uint32_t)(0x123bbb84u));
  /* 123961f7 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 123961fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123961fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12396200 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396202 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396204 call 0x12393980 */
  push32(0x12396209u); f_12393980();
  /* 12396209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239620c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239620f jne 0x12396212 */
  if (!C.zf) goto L_12396212;
  /* 12396211 int3  */
  x86_unimpl("int3 @ 0x12396211");
L_12396212:;
  /* 12396212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396214 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396216 jne 0x123961f2 */
  if (!C.zf) goto L_123961f2;
  /* 12396218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239621b jmp 0x123962ec */
  goto L_123962ec;
L_12396220:;
  /* 12396220 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12396227 jmp 0x12396232 */
  goto L_12396232;
L_12396229:;
  /* 12396229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239622c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239622f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12396232:;
  /* 12396232 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396236 jge 0x123962bc */
  if ((C.sf==C.of)) goto L_123962bc;
  /* 1239623c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239623f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396245 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12396248 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1239624c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396250 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396253 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396256 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1239625a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239625d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396260 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396263 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12396266 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1239626a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239626e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396274 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12396278 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239627b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239627e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396283 jne 0x12396292 */
  if (!C.zf) goto L_12396292;
  /* 12396285 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239628b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396290 je 0x123962b7 */
  if (C.zf) goto L_123962b7;
L_12396292:;
  /* 12396292 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396296 je 0x123962b7 */
  if (C.zf) goto L_123962b7;
  /* 12396298 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239629c jne 0x123962b0 */
  if (!C.zf) goto L_123962b0;
  /* 1239629e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123962a2 jne 0x123962b7 */
  if (!C.zf) goto L_123962b7;
  /* 123962a4 mov eax, dword ptr [0x123bea84] */
  EAX = (r32((uint32_t)(0x123bea84)));
  /* 123962a9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 123962ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123962ae je 0x123962b7 */
  if (C.zf) goto L_123962b7;
L_123962b0:;
  /* 123962b0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_123962b7:;
  /* 123962b7 jmp 0x12396229 */
  goto L_12396229;
L_123962bc:;
  /* 123962bc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123962bf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123962c2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 123962c5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123962c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123962cb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 123962ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123962d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123962d4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 123962d7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123962da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123962dd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 123962e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123962e3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 123962e9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_123962ec:;
  /* 123962ec pop edi */
  EDI = (pop32());
  /* 123962ed pop esi */
  ESI = (pop32());
  /* 123962ee pop ebx */
  EBX = (pop32());
  /* 123962ef mov esp, ebp */
  ESP = (EBP);
  /* 123962f1 pop ebp */
  EBP = (pop32());
  /* 123962f2 ret  */
  ESPCHK(0x123961d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006300 @ 0x12396300 (697 bytes, 253 insns) */
void f_12396300(void) {
  FTRACE(0x12396300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396300 push ebp */
  push32((uint32_t)(EBP));
  /* 12396301 mov ebp, esp */
  EBP = (ESP);
  /* 12396303 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396306 push ebx */
  push32((uint32_t)(EBX));
  /* 12396307 push esi */
  push32((uint32_t)(ESI));
  /* 12396308 push edi */
  push32((uint32_t)(EDI));
  /* 12396309 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12396310 push 9 */
  push32((uint32_t)(0x9u));
  /* 12396312 call 0x123982c0 */
  push32(0x12396317u); f_123982c0();
  /* 12396317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239631a:;
  /* 1239631a push 0x123bbc7c */
  push32((uint32_t)(0x123bbc7cu));
  /* 1239631f push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12396324 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396326 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239632a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239632c call 0x12393980 */
  push32(0x12396331u); f_12393980();
  /* 12396331 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396334 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396337 jne 0x1239633a */
  if (!C.zf) goto L_1239633a;
  /* 12396339 int3  */
  x86_unimpl("int3 @ 0x12396339");
L_1239633a:;
  /* 1239633a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239633c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239633e jne 0x1239631a */
  if (!C.zf) goto L_1239631a;
  /* 12396340 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396344 je 0x1239634e */
  if (C.zf) goto L_1239634e;
  /* 12396346 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396349 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239634b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1239634e:;
  /* 1239634e mov eax, dword ptr [0x123c0534] */
  EAX = (r32((uint32_t)(0x123c0534)));
  /* 12396353 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12396356 jmp 0x12396360 */
  goto L_12396360;
L_12396358:;
  /* 12396358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239635b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239635d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12396360:;
  /* 12396360 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396364 je 0x12396582 */
  if (C.zf) goto L_12396582;
  /* 1239636a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239636d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396370 je 0x12396582 */
  if (C.zf) goto L_12396582;
  /* 12396376 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396379 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1239637c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12396382 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396385 je 0x123963b4 */
  if (C.zf) goto L_123963b4;
  /* 12396387 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239638a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1239638d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12396393 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12396395 je 0x123963b4 */
  if (C.zf) goto L_123963b4;
  /* 12396397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239639a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1239639d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123963a2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123963a5 jne 0x123963b9 */
  if (!C.zf) goto L_123963b9;
  /* 123963a7 mov ecx, dword ptr [0x123bea84] */
  ECX = (r32((uint32_t)(0x123bea84)));
  /* 123963ad and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 123963b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123963b2 jne 0x123963b9 */
  if (!C.zf) goto L_123963b9;
L_123963b4:;
  /* 123963b4 jmp 0x1239657d */
  goto L_1239657d;
L_123963b9:;
  /* 123963b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123963bc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123963c0 je 0x12396432 */
  if (C.zf) goto L_12396432;
  /* 123963c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123963c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 123963c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123963c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 123963cc push ecx */
  push32((uint32_t)(ECX));
  /* 123963cd call 0x12395e70 */
  push32(0x123963d2u); f_12395e70();
  /* 123963d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123963d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123963d7 jne 0x12396403 */
  if (!C.zf) goto L_12396403;
L_123963d9:;
  /* 123963d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123963dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 123963df push eax */
  push32((uint32_t)(EAX));
  /* 123963e0 push 0x123bbc68 */
  push32((uint32_t)(0x123bbc68u));
  /* 123963e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123963e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123963e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 123963eb push 0 */
  push32((uint32_t)(0x0u));
  /* 123963ed call 0x12393980 */
  push32(0x123963f2u); f_12393980();
  /* 123963f2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123963f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123963f8 jne 0x123963fb */
  if (!C.zf) goto L_123963fb;
  /* 123963fa int3  */
  x86_unimpl("int3 @ 0x123963fa");
L_123963fb:;
  /* 123963fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123963fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123963ff jne 0x123963d9 */
  if (!C.zf) goto L_123963d9;
  /* 12396401 jmp 0x12396432 */
  goto L_12396432;
L_12396403:;
  /* 12396403 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396406 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12396409 push eax */
  push32((uint32_t)(EAX));
  /* 1239640a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239640d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12396410 push edx */
  push32((uint32_t)(EDX));
  /* 12396411 push 0x123bbc5c */
  push32((uint32_t)(0x123bbc5cu));
  /* 12396416 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396418 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239641a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239641c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239641e call 0x12393980 */
  push32(0x12396423u); f_12393980();
  /* 12396423 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396426 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396429 jne 0x1239642c */
  if (!C.zf) goto L_1239642c;
  /* 1239642b int3  */
  x86_unimpl("int3 @ 0x1239642b");
L_1239642c:;
  /* 1239642c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239642e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396430 jne 0x12396403 */
  if (!C.zf) goto L_12396403;
L_12396432:;
  /* 12396432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396435 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12396438 push edx */
  push32((uint32_t)(EDX));
  /* 12396439 push 0x123bbc54 */
  push32((uint32_t)(0x123bbc54u));
  /* 1239643e push 0 */
  push32((uint32_t)(0x0u));
  /* 12396440 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396442 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396446 call 0x12393980 */
  push32(0x1239644bu); f_12393980();
  /* 1239644b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239644e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396451 jne 0x12396454 */
  if (!C.zf) goto L_12396454;
  /* 12396453 int3  */
  x86_unimpl("int3 @ 0x12396453");
L_12396454:;
  /* 12396454 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396458 jne 0x12396432 */
  if (!C.zf) goto L_12396432;
  /* 1239645a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239645d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12396460 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12396466 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396469 jne 0x123964dc */
  if (!C.zf) goto L_123964dc;
L_1239646b:;
  /* 1239646b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239646e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12396471 push ecx */
  push32((uint32_t)(ECX));
  /* 12396472 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396475 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12396478 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1239647b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12396480 push eax */
  push32((uint32_t)(EAX));
  /* 12396481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396484 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396487 push ecx */
  push32((uint32_t)(ECX));
  /* 12396488 push 0x123bbc20 */
  push32((uint32_t)(0x123bbc20u));
  /* 1239648d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239648f push 0 */
  push32((uint32_t)(0x0u));
  /* 12396491 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396493 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396495 call 0x12393980 */
  push32(0x1239649au); f_12393980();
  /* 1239649a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239649d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123964a0 jne 0x123964a3 */
  if (!C.zf) goto L_123964a3;
  /* 123964a2 int3  */
  x86_unimpl("int3 @ 0x123964a2");
L_123964a3:;
  /* 123964a3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123964a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123964a7 jne 0x1239646b */
  if (!C.zf) goto L_1239646b;
  /* 123964a9 cmp dword ptr [0x123c1e98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123964b0 je 0x123964cb */
  if (C.zf) goto L_123964cb;
  /* 123964b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964b5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 123964b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123964b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964bc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123964bf push edx */
  push32((uint32_t)(EDX));
  /* 123964c0 call dword ptr [0x123c1e98] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c1e98))), 0x123964c6u);
  /* 123964c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123964c9 jmp 0x123964d7 */
  goto L_123964d7;
L_123964cb:;
  /* 123964cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964ce push eax */
  push32((uint32_t)(EAX));
  /* 123964cf call 0x123965c0 */
  push32(0x123964d4u); f_123965c0();
  /* 123964d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123964d7:;
  /* 123964d7 jmp 0x1239657d */
  goto L_1239657d;
L_123964dc:;
  /* 123964dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964df cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123964e3 jne 0x12396522 */
  if (!C.zf) goto L_12396522;
L_123964e5:;
  /* 123964e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964e8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123964eb push eax */
  push32((uint32_t)(EAX));
  /* 123964ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123964ef add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123964f2 push ecx */
  push32((uint32_t)(ECX));
  /* 123964f3 push 0x123bbbf8 */
  push32((uint32_t)(0x123bbbf8u));
  /* 123964f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 123964fa push 0 */
  push32((uint32_t)(0x0u));
  /* 123964fc push 0 */
  push32((uint32_t)(0x0u));
  /* 123964fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12396500 call 0x12393980 */
  push32(0x12396505u); f_12393980();
  /* 12396505 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396508 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239650b jne 0x1239650e */
  if (!C.zf) goto L_1239650e;
  /* 1239650d int3  */
  x86_unimpl("int3 @ 0x1239650d");
L_1239650e:;
  /* 1239650e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396510 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396512 jne 0x123964e5 */
  if (!C.zf) goto L_123964e5;
  /* 12396514 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396517 push eax */
  push32((uint32_t)(EAX));
  /* 12396518 call 0x123965c0 */
  push32(0x1239651du); f_123965c0();
  /* 1239651d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396520 jmp 0x1239657d */
  goto L_1239657d;
L_12396522:;
  /* 12396522 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396525 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12396528 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239652e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396531 jne 0x1239657d */
  if (!C.zf) goto L_1239657d;
L_12396533:;
  /* 12396533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396536 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12396539 push ecx */
  push32((uint32_t)(ECX));
  /* 1239653a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239653d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12396540 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12396543 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12396548 push eax */
  push32((uint32_t)(EAX));
  /* 12396549 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239654c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239654f push ecx */
  push32((uint32_t)(ECX));
  /* 12396550 push 0x123bbbc4 */
  push32((uint32_t)(0x123bbbc4u));
  /* 12396555 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396559 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239655b push 0 */
  push32((uint32_t)(0x0u));
  /* 1239655d call 0x12393980 */
  push32(0x12396562u); f_12393980();
  /* 12396562 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396565 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396568 jne 0x1239656b */
  if (!C.zf) goto L_1239656b;
  /* 1239656a int3  */
  x86_unimpl("int3 @ 0x1239656a");
L_1239656b:;
  /* 1239656b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239656d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239656f jne 0x12396533 */
  if (!C.zf) goto L_12396533;
  /* 12396571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396574 push eax */
  push32((uint32_t)(EAX));
  /* 12396575 call 0x123965c0 */
  push32(0x1239657au); f_123965c0();
  /* 1239657a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239657d:;
  /* 1239657d jmp 0x12396358 */
  goto L_12396358;
L_12396582:;
  /* 12396582 push 9 */
  push32((uint32_t)(0x9u));
  /* 12396584 call 0x12398360 */
  push32(0x12396589u); f_12398360();
  /* 12396589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239658c:;
  /* 1239658c push 0x123bbbac */
  push32((uint32_t)(0x123bbbacu));
  /* 12396591 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 12396596 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396598 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239659a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239659c push 0 */
  push32((uint32_t)(0x0u));
  /* 1239659e call 0x12393980 */
  push32(0x123965a3u); f_12393980();
  /* 123965a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123965a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123965a9 jne 0x123965ac */
  if (!C.zf) goto L_123965ac;
  /* 123965ab int3  */
  x86_unimpl("int3 @ 0x123965ab");
L_123965ac:;
  /* 123965ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 123965ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123965b0 jne 0x1239658c */
  if (!C.zf) goto L_1239658c;
  /* 123965b2 pop edi */
  EDI = (pop32());
  /* 123965b3 pop esi */
  ESI = (pop32());
  /* 123965b4 pop ebx */
  EBX = (pop32());
  /* 123965b5 mov esp, ebp */
  ESP = (EBP);
  /* 123965b7 pop ebp */
  EBP = (pop32());
  /* 123965b8 ret  */
  ESPCHK(0x12396300u, _esp0);
  ESP += 4; return;
}

/* FUN_100065c0 @ 0x123965c0 (276 bytes, 89 insns) */
void f_123965c0(void) {
  FTRACE(0x123965c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123965c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123965c1 mov ebp, esp */
  EBP = (ESP);
  /* 123965c3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123965c6 push ebx */
  push32((uint32_t)(EBX));
  /* 123965c7 push esi */
  push32((uint32_t)(ESI));
  /* 123965c8 push edi */
  push32((uint32_t)(EDI));
  /* 123965c9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 123965d0 jmp 0x123965db */
  goto L_123965db;
L_123965d2:;
  /* 123965d2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123965d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123965d8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_123965db:;
  /* 123965db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123965de cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123965e2 jge 0x123965ef */
  if ((C.sf==C.of)) goto L_123965ef;
  /* 123965e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123965e7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 123965ea mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 123965ed jmp 0x123965f6 */
  goto L_123965f6;
L_123965ef:;
  /* 123965ef mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_123965f6:;
  /* 123965f6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 123965f9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123965fc jge 0x1239669c */
  if ((C.sf==C.of)) goto L_1239669c;
  /* 12396602 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396605 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396608 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1239660b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1239660e cmp dword ptr [0x123beea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123beea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396615 jle 0x12396633 */
  if ((C.zf||C.sf!=C.of)) goto L_12396633;
  /* 12396617 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1239661c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1239661f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12396625 push ecx */
  push32((uint32_t)(ECX));
  /* 12396626 call 0x1239a8d0 */
  push32(0x1239662bu); f_1239a8d0();
  /* 1239662b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239662e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12396631 jmp 0x12396650 */
  goto L_12396650;
L_12396633:;
  /* 12396633 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12396636 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239663c mov eax, dword ptr [0x123bec98] */
  EAX = (r32((uint32_t)(0x123bec98)));
  /* 12396641 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12396643 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12396647 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1239664d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12396650:;
  /* 12396650 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396654 je 0x12396664 */
  if (C.zf) goto L_12396664;
  /* 12396656 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12396659 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239665f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12396662 jmp 0x1239666b */
  goto L_1239666b;
L_12396664:;
  /* 12396664 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1239666b:;
  /* 1239666b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1239666e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12396671 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12396675 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12396678 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239667e push edx */
  push32((uint32_t)(EDX));
  /* 1239667f push 0x123bbca0 */
  push32((uint32_t)(0x123bbca0u));
  /* 12396684 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12396687 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239668a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1239668e push ecx */
  push32((uint32_t)(ECX));
  /* 1239668f call 0x1239a7d0 */
  push32(0x12396694u); f_1239a7d0();
  /* 12396694 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396697 jmp 0x123965d2 */
  goto L_123965d2;
L_1239669c:;
  /* 1239669c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1239669f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_123966a4:;
  /* 123966a4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123966a7 push eax */
  push32((uint32_t)(EAX));
  /* 123966a8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 123966ab push ecx */
  push32((uint32_t)(ECX));
  /* 123966ac push 0x123bbc90 */
  push32((uint32_t)(0x123bbc90u));
  /* 123966b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123966b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123966b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 123966b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123966b9 call 0x12393980 */
  push32(0x123966beu); f_12393980();
  /* 123966be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123966c1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123966c4 jne 0x123966c7 */
  if (!C.zf) goto L_123966c7;
  /* 123966c6 int3  */
  x86_unimpl("int3 @ 0x123966c6");
L_123966c7:;
  /* 123966c7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123966c9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123966cb jne 0x123966a4 */
  if (!C.zf) goto L_123966a4;
  /* 123966cd pop edi */
  EDI = (pop32());
  /* 123966ce pop esi */
  ESI = (pop32());
  /* 123966cf pop ebx */
  EBX = (pop32());
  /* 123966d0 mov esp, ebp */
  ESP = (EBP);
  /* 123966d2 pop ebp */
  EBP = (pop32());
  /* 123966d3 ret  */
  ESPCHK(0x123965c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x123966e0 (116 bytes, 46 insns) */
void f_123966e0(void) {
  FTRACE(0x123966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123966e1 mov ebp, esp */
  EBP = (ESP);
  /* 123966e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123966e6 push ebx */
  push32((uint32_t)(EBX));
  /* 123966e7 push esi */
  push32((uint32_t)(ESI));
  /* 123966e8 push edi */
  push32((uint32_t)(EDI));
  /* 123966e9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 123966ec push eax */
  push32((uint32_t)(EAX));
  /* 123966ed call 0x12396060 */
  push32(0x123966f2u); f_12396060();
  /* 123966f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123966f5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123966f9 jne 0x12396714 */
  if (!C.zf) goto L_12396714;
  /* 123966fb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123966ff jne 0x12396714 */
  if (!C.zf) goto L_12396714;
  /* 12396701 mov ecx, dword ptr [0x123bea84] */
  ECX = (r32((uint32_t)(0x123bea84)));
  /* 12396707 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1239670a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1239670c je 0x1239674b */
  if (C.zf) goto L_1239674b;
  /* 1239670e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396712 je 0x1239674b */
  if (C.zf) goto L_1239674b;
L_12396714:;
  /* 12396714 push 0x123bbca8 */
  push32((uint32_t)(0x123bbca8u));
  /* 12396719 push 0x123bb674 */
  push32((uint32_t)(0x123bb674u));
  /* 1239671e push 0 */
  push32((uint32_t)(0x0u));
  /* 12396720 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396722 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396724 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396726 call 0x12393980 */
  push32(0x1239672bu); f_12393980();
  /* 1239672b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239672e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396731 jne 0x12396734 */
  if (!C.zf) goto L_12396734;
  /* 12396733 int3  */
  x86_unimpl("int3 @ 0x12396733");
L_12396734:;
  /* 12396734 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396738 jne 0x12396714 */
  if (!C.zf) goto L_12396714;
  /* 1239673a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239673c call 0x12396300 */
  push32(0x12396741u); f_12396300();
  /* 12396741 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396744 mov eax, 1 */
  EAX = (0x1u);
  /* 12396749 jmp 0x1239674d */
  goto L_1239674d;
L_1239674b:;
  /* 1239674b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1239674d:;
  /* 1239674d pop edi */
  EDI = (pop32());
  /* 1239674e pop esi */
  ESI = (pop32());
  /* 1239674f pop ebx */
  EBX = (pop32());
  /* 12396750 mov esp, ebp */
  ESP = (EBP);
  /* 12396752 pop ebp */
  EBP = (pop32());
  /* 12396753 ret  */
  ESPCHK(0x123966e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x12396760 (197 bytes, 79 insns) */
void f_12396760(void) {
  FTRACE(0x12396760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396760 push ebp */
  push32((uint32_t)(EBP));
  /* 12396761 mov ebp, esp */
  EBP = (ESP);
  /* 12396763 push ecx */
  push32((uint32_t)(ECX));
  /* 12396764 push ebx */
  push32((uint32_t)(EBX));
  /* 12396765 push esi */
  push32((uint32_t)(ESI));
  /* 12396766 push edi */
  push32((uint32_t)(EDI));
  /* 12396767 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239676b jne 0x12396772 */
  if (!C.zf) goto L_12396772;
  /* 1239676d jmp 0x1239681e */
  goto L_1239681e;
L_12396772:;
  /* 12396772 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12396779 jmp 0x12396784 */
  goto L_12396784;
L_1239677b:;
  /* 1239677b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239677e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396781 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12396784:;
  /* 12396784 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396788 jge 0x123967ce */
  if ((C.sf==C.of)) goto L_123967ce;
L_1239678a:;
  /* 1239678a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239678d mov edx, dword ptr [ecx*4 + 0x123bea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123bea94)));
  /* 12396794 push edx */
  push32((uint32_t)(EDX));
  /* 12396795 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396798 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239679b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1239679f push edx */
  push32((uint32_t)(EDX));
  /* 123967a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123967a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123967a6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 123967aa push edx */
  push32((uint32_t)(EDX));
  /* 123967ab push 0x123bbd04 */
  push32((uint32_t)(0x123bbd04u));
  /* 123967b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123967b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 123967b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123967b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 123967b8 call 0x12393980 */
  push32(0x123967bdu); f_12393980();
  /* 123967bd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123967c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123967c3 jne 0x123967c6 */
  if (!C.zf) goto L_123967c6;
  /* 123967c5 int3  */
  x86_unimpl("int3 @ 0x123967c5");
L_123967c6:;
  /* 123967c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123967c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123967ca jne 0x1239678a */
  if (!C.zf) goto L_1239678a;
  /* 123967cc jmp 0x1239677b */
  goto L_1239677b;
L_123967ce:;
  /* 123967ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123967d1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 123967d4 push edx */
  push32((uint32_t)(EDX));
  /* 123967d5 push 0x123bbce0 */
  push32((uint32_t)(0x123bbce0u));
  /* 123967da push 0 */
  push32((uint32_t)(0x0u));
  /* 123967dc push 0 */
  push32((uint32_t)(0x0u));
  /* 123967de push 0 */
  push32((uint32_t)(0x0u));
  /* 123967e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 123967e2 call 0x12393980 */
  push32(0x123967e7u); f_12393980();
  /* 123967e7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123967ea cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123967ed jne 0x123967f0 */
  if (!C.zf) goto L_123967f0;
  /* 123967ef int3  */
  x86_unimpl("int3 @ 0x123967ef");
L_123967f0:;
  /* 123967f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123967f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123967f4 jne 0x123967ce */
  if (!C.zf) goto L_123967ce;
L_123967f6:;
  /* 123967f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123967f9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 123967fc push edx */
  push32((uint32_t)(EDX));
  /* 123967fd push 0x123bbcc0 */
  push32((uint32_t)(0x123bbcc0u));
  /* 12396802 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396804 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396806 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396808 push 0 */
  push32((uint32_t)(0x0u));
  /* 1239680a call 0x12393980 */
  push32(0x1239680fu); f_12393980();
  /* 1239680f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396812 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396815 jne 0x12396818 */
  if (!C.zf) goto L_12396818;
  /* 12396817 int3  */
  x86_unimpl("int3 @ 0x12396817");
L_12396818:;
  /* 12396818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239681a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239681c jne 0x123967f6 */
  if (!C.zf) goto L_123967f6;
L_1239681e:;
  /* 1239681e pop edi */
  EDI = (pop32());
  /* 1239681f pop esi */
  ESI = (pop32());
  /* 12396820 pop ebx */
  EBX = (pop32());
  /* 12396821 mov esp, ebp */
  ESP = (EBP);
  /* 12396823 pop ebp */
  EBP = (pop32());
  /* 12396824 ret  */
  ESPCHK(0x12396760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x12396830 (329 bytes, 102 insns) */
void f_12396830(void) {
  FTRACE(0x12396830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396830 push ebp */
  push32((uint32_t)(EBP));
  /* 12396831 mov ebp, esp */
  EBP = (ESP);
  /* 12396833 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396836 cmp dword ptr [0x123c2010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239683d jne 0x12396844 */
  if (!C.zf) goto L_12396844;
  /* 1239683f call 0x1239b170 */
  push32(0x12396844u); f_1239b170();
L_12396844:;
  /* 12396844 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239684b mov eax, dword ptr [0x123c04d0] */
  EAX = (r32((uint32_t)(0x123c04d0)));
  /* 12396850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12396853:;
  /* 12396853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396856 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12396859 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239685b je 0x12396889 */
  if (C.zf) goto L_12396889;
  /* 1239685d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396860 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396863 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396866 je 0x12396871 */
  if (C.zf) goto L_12396871;
  /* 12396868 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239686b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239686e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12396871:;
  /* 12396871 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396874 push eax */
  push32((uint32_t)(EAX));
  /* 12396875 call 0x123976f0 */
  push32(0x1239687au); f_123976f0();
  /* 1239687a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239687d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396880 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12396884 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12396887 jmp 0x12396853 */
  goto L_12396853;
L_12396889:;
  /* 12396889 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1239688b push 0x123bbd24 */
  push32((uint32_t)(0x123bbd24u));
  /* 12396890 push 2 */
  push32((uint32_t)(0x2u));
  /* 12396892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396895 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1239689c push ecx */
  push32((uint32_t)(ECX));
  /* 1239689d call 0x123948c0 */
  push32(0x123968a2u); f_123948c0();
  /* 123968a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123968a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123968a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123968ab mov dword ptr [0x123c0504], edx */
  w32((uint32_t)(0x123c0504), (EDX));
  /* 123968b1 cmp dword ptr [0x123c0504], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0504))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123968b8 jne 0x123968c4 */
  if (!C.zf) goto L_123968c4;
  /* 123968ba push 9 */
  push32((uint32_t)(0x9u));
  /* 123968bc call 0x12393830 */
  push32(0x123968c1u); f_12393830();
  /* 123968c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123968c4:;
  /* 123968c4 mov eax, dword ptr [0x123c04d0] */
  EAX = (r32((uint32_t)(0x123c04d0)));
  /* 123968c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123968cc jmp 0x123968d7 */
  goto L_123968d7;
L_123968ce:;
  /* 123968ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123968d1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123968d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123968d7:;
  /* 123968d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123968da movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123968dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123968df je 0x12396947 */
  if (C.zf) goto L_12396947;
  /* 123968e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123968e4 push ecx */
  push32((uint32_t)(ECX));
  /* 123968e5 call 0x123976f0 */
  push32(0x123968eau); f_123976f0();
  /* 123968ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123968ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123968f0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123968f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123968f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 123968f9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123968fc je 0x12396945 */
  if (C.zf) goto L_12396945;
  /* 123968fe push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12396900 push 0x123bbd24 */
  push32((uint32_t)(0x123bbd24u));
  /* 12396905 push 2 */
  push32((uint32_t)(0x2u));
  /* 12396907 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239690a push ecx */
  push32((uint32_t)(ECX));
  /* 1239690b call 0x123948c0 */
  push32(0x12396910u); f_123948c0();
  /* 12396910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396913 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396916 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12396918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239691b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239691e jne 0x1239692a */
  if (!C.zf) goto L_1239692a;
  /* 12396920 push 9 */
  push32((uint32_t)(0x9u));
  /* 12396922 call 0x12393830 */
  push32(0x12396927u); f_12393830();
  /* 12396927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239692a:;
  /* 1239692a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239692d push ecx */
  push32((uint32_t)(ECX));
  /* 1239692e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396931 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12396933 push eax */
  push32((uint32_t)(EAX));
  /* 12396934 call 0x12397870 */
  push32(0x12396939u); f_12397870();
  /* 12396939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239693c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239693f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396942 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12396945:;
  /* 12396945 jmp 0x123968ce */
  goto L_123968ce;
L_12396947:;
  /* 12396947 push 2 */
  push32((uint32_t)(0x2u));
  /* 12396949 mov edx, dword ptr [0x123c04d0] */
  EDX = (r32((uint32_t)(0x123c04d0)));
  /* 1239694f push edx */
  push32((uint32_t)(EDX));
  /* 12396950 call 0x12395350 */
  push32(0x12396955u); f_12395350();
  /* 12396955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396958 mov dword ptr [0x123c04d0], 0 */
  w32((uint32_t)(0x123c04d0), (0x0u));
  /* 12396962 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396965 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1239696b mov dword ptr [0x123c2000], 1 */
  w32((uint32_t)(0x123c2000), (0x1u));
  /* 12396975 mov esp, ebp */
  ESP = (EBP);
  /* 12396977 pop ebp */
  EBP = (pop32());
  /* 12396978 ret  */
  ESPCHK(0x12396830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006980 @ 0x12396980 (216 bytes, 69 insns) */
void f_12396980(void) {
  FTRACE(0x12396980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396980 push ebp */
  push32((uint32_t)(EBP));
  /* 12396981 mov ebp, esp */
  EBP = (ESP);
  /* 12396983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396986 cmp dword ptr [0x123c2010], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c2010))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239698d jne 0x12396994 */
  if (!C.zf) goto L_12396994;
  /* 1239698f call 0x1239b170 */
  push32(0x12396994u); f_1239b170();
L_12396994:;
  /* 12396994 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12396999 push 0x123c0540 */
  push32((uint32_t)(0x123c0540u));
  /* 1239699e push 0 */
  push32((uint32_t)(0x0u));
  /* 123969a0 call dword ptr [0x123c32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f0))), 0x123969a6u);
  /* 123969a6 mov dword ptr [0x123c0514], 0x123c0540 */
  w32((uint32_t)(0x123c0514), (0x123c0540u));
  /* 123969b0 mov eax, dword ptr [0x123c202c] */
  EAX = (r32((uint32_t)(0x123c202c)));
  /* 123969b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 123969b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123969ba jne 0x123969c7 */
  if (!C.zf) goto L_123969c7;
  /* 123969bc mov edx, dword ptr [0x123c0514] */
  EDX = (r32((uint32_t)(0x123c0514)));
  /* 123969c2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 123969c5 jmp 0x123969cf */
  goto L_123969cf;
L_123969c7:;
  /* 123969c7 mov eax, dword ptr [0x123c202c] */
  EAX = (r32((uint32_t)(0x123c202c)));
  /* 123969cc mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_123969cf:;
  /* 123969cf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 123969d2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 123969d5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 123969d8 push edx */
  push32((uint32_t)(EDX));
  /* 123969d9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 123969dc push eax */
  push32((uint32_t)(EAX));
  /* 123969dd push 0 */
  push32((uint32_t)(0x0u));
  /* 123969df push 0 */
  push32((uint32_t)(0x0u));
  /* 123969e1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123969e4 push ecx */
  push32((uint32_t)(ECX));
  /* 123969e5 call 0x12396a60 */
  push32(0x123969eau); f_12396a60();
  /* 123969ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123969ed push 0x80 */
  push32((uint32_t)(0x80u));
  /* 123969f2 push 0x123bbd30 */
  push32((uint32_t)(0x123bbd30u));
  /* 123969f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 123969f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123969fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123969ff lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12396a02 push ecx */
  push32((uint32_t)(ECX));
  /* 12396a03 call 0x123948c0 */
  push32(0x12396a08u); f_123948c0();
  /* 12396a08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396a0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12396a0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396a12 jne 0x12396a1e */
  if (!C.zf) goto L_12396a1e;
  /* 12396a14 push 8 */
  push32((uint32_t)(0x8u));
  /* 12396a16 call 0x12393830 */
  push32(0x12396a1bu); f_12393830();
  /* 12396a1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12396a1e:;
  /* 12396a1e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12396a21 push edx */
  push32((uint32_t)(EDX));
  /* 12396a22 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12396a25 push eax */
  push32((uint32_t)(EAX));
  /* 12396a26 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396a29 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396a2c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12396a2f push eax */
  push32((uint32_t)(EAX));
  /* 12396a30 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12396a34 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396a37 push edx */
  push32((uint32_t)(EDX));
  /* 12396a38 call 0x12396a60 */
  push32(0x12396a3du); f_12396a60();
  /* 12396a3d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396a40 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396a43 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396a46 mov dword ptr [0x123c04f8], eax */
  w32((uint32_t)(0x123c04f8), (EAX));
  /* 12396a4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396a4e mov dword ptr [0x123c04fc], ecx */
  w32((uint32_t)(0x123c04fc), (ECX));
  /* 12396a54 mov esp, ebp */
  ESP = (EBP);
  /* 12396a56 pop ebp */
  EBP = (pop32());
  /* 12396a57 ret  */
  ESPCHK(0x12396980u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a60 @ 0x12396a60 (1060 bytes, 360 insns) */
void f_12396a60(void) {
  FTRACE(0x12396a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396a60 push ebp */
  push32((uint32_t)(EBP));
  /* 12396a61 mov ebp, esp */
  EBP = (ESP);
  /* 12396a63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396a66 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396a69 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12396a6f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12396a72 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12396a78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12396a7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12396a7e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396a82 je 0x12396a95 */
  if (C.zf) goto L_12396a95;
  /* 12396a84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396a87 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396a8a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12396a8c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396a8f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396a92 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12396a95:;
  /* 12396a95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396a98 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396a9b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396a9e jne 0x12396b6d */
  if (!C.zf) goto L_12396b6d;
L_12396aa4:;
  /* 12396aa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396aa7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396aaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12396aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396ab0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396ab3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ab6 je 0x12396b32 */
  if (C.zf) goto L_12396b32;
  /* 12396ab8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396abb movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12396abe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396ac0 je 0x12396b32 */
  if (C.zf) goto L_12396b32;
  /* 12396ac2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396ac5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396ac7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12396ac9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396acb mov al, byte ptr [edx + 0x123c1d61] */
  AL = (r8((uint32_t)(EDX + 0x123c1d61)));
  /* 12396ad1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12396ad4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396ad6 je 0x12396b07 */
  if (C.zf) goto L_12396b07;
  /* 12396ad8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396adb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12396add add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396ae0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396ae3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12396ae5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ae9 je 0x12396b07 */
  if (C.zf) goto L_12396b07;
  /* 12396aeb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396aee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396af1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12396af3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12396af5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396af8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396afb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12396afe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b01 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b04 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12396b07:;
  /* 12396b07 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396b0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b0f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b12 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12396b14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396b18 je 0x12396b2d */
  if (C.zf) goto L_12396b2d;
  /* 12396b1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b20 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12396b22 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12396b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b27 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b2a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12396b2d:;
  /* 12396b2d jmp 0x12396aa4 */
  goto L_12396aa4;
L_12396b32:;
  /* 12396b32 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b35 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12396b37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b3a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b3d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12396b3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396b43 je 0x12396b54 */
  if (C.zf) goto L_12396b54;
  /* 12396b45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b48 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12396b4b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b4e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b51 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12396b54:;
  /* 12396b54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b57 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396b5a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396b5d jne 0x12396b68 */
  if (!C.zf) goto L_12396b68;
  /* 12396b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b62 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b65 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12396b68:;
  /* 12396b68 jmp 0x12396c3c */
  goto L_12396c3c;
L_12396b6d:;
  /* 12396b6d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396b72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b75 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396b78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12396b7a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396b7e je 0x12396b93 */
  if (C.zf) goto L_12396b93;
  /* 12396b80 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12396b88 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12396b8a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396b8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396b90 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12396b93:;
  /* 12396b93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12396b98 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12396b9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396b9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396ba1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12396ba4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396ba7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12396bad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396baf mov dl, byte ptr [ecx + 0x123c1d61] */
  DL = (r8((uint32_t)(ECX + 0x123c1d61)));
  /* 12396bb5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12396bb8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396bba je 0x12396beb */
  if (C.zf) goto L_12396beb;
  /* 12396bbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396bbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396bc1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396bc4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396bc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12396bc9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396bcd je 0x12396be2 */
  if (C.zf) goto L_12396be2;
  /* 12396bcf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396bd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396bd5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12396bd7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12396bd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396bdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396bdf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12396be2:;
  /* 12396be2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396be8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12396beb:;
  /* 12396beb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396bee and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12396bf4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396bf7 je 0x12396c17 */
  if (C.zf) goto L_12396c17;
  /* 12396bf9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396bfc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12396c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396c03 je 0x12396c17 */
  if (C.zf) goto L_12396c17;
  /* 12396c05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396c08 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12396c0e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396c11 jne 0x12396b6d */
  if (!C.zf) goto L_12396b6d;
L_12396c17:;
  /* 12396c17 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12396c1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12396c20 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396c22 jne 0x12396c2f */
  if (!C.zf) goto L_12396c2f;
  /* 12396c24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c27 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396c2a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12396c2d jmp 0x12396c3c */
  goto L_12396c3c;
L_12396c2f:;
  /* 12396c2f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396c33 je 0x12396c3c */
  if (C.zf) goto L_12396c3c;
  /* 12396c35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396c38 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12396c3c:;
  /* 12396c3c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12396c43:;
  /* 12396c43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12396c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396c4b je 0x12396c6e */
  if (C.zf) goto L_12396c6e;
L_12396c4d:;
  /* 12396c4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c50 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12396c53 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396c56 je 0x12396c63 */
  if (C.zf) goto L_12396c63;
  /* 12396c58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c5b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396c5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396c61 jne 0x12396c6e */
  if (!C.zf) goto L_12396c6e;
L_12396c63:;
  /* 12396c63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396c69 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12396c6c jmp 0x12396c4d */
  goto L_12396c4d;
L_12396c6e:;
  /* 12396c6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396c71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396c74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12396c76 jne 0x12396c7d */
  if (!C.zf) goto L_12396c7d;
  /* 12396c78 jmp 0x12396e5b */
  goto L_12396e5b;
L_12396c7d:;
  /* 12396c7d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396c81 je 0x12396c94 */
  if (C.zf) goto L_12396c94;
  /* 12396c83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396c86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396c89 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12396c8b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396c8e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396c91 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12396c94:;
  /* 12396c94 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12396c97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12396c99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396c9c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12396c9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12396ca1:;
  /* 12396ca1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12396ca8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12396caf:;
  /* 12396caf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396cb2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12396cb5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396cb8 jne 0x12396cce */
  if (!C.zf) goto L_12396cce;
  /* 12396cba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396cbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396cc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12396cc3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396cc6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396cc9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12396ccc jmp 0x12396caf */
  goto L_12396caf;
L_12396cce:;
  /* 12396cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396cd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396cd4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396cd7 jne 0x12396d2a */
  if (!C.zf) goto L_12396d2a;
  /* 12396cd9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396cdc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396cde mov ecx, 2 */
  ECX = (0x2u);
  /* 12396ce3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12396ce5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396ce7 jne 0x12396d22 */
  if (!C.zf) goto L_12396d22;
  /* 12396ce9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ced je 0x12396d0f */
  if (C.zf) goto L_12396d0f;
  /* 12396cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396cf2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12396cf6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396cf9 jne 0x12396d06 */
  if (!C.zf) goto L_12396d06;
  /* 12396cfb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396cfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396d01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12396d04 jmp 0x12396d0d */
  goto L_12396d0d;
L_12396d06:;
  /* 12396d06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12396d0d:;
  /* 12396d0d jmp 0x12396d16 */
  goto L_12396d16;
L_12396d0f:;
  /* 12396d0f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12396d16:;
  /* 12396d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396d18 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d1c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12396d1f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12396d22:;
  /* 12396d22 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396d25 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12396d27 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12396d2a:;
  /* 12396d2a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396d2d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396d30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396d33 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12396d36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12396d38 je 0x12396d5e */
  if (C.zf) goto L_12396d5e;
  /* 12396d3a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d3e je 0x12396d4f */
  if (C.zf) goto L_12396d4f;
  /* 12396d40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396d43 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12396d46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396d49 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396d4c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12396d4f:;
  /* 12396d4f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396d52 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12396d54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396d57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396d5a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12396d5c jmp 0x12396d2a */
  goto L_12396d2a;
L_12396d5e:;
  /* 12396d5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396d61 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12396d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396d66 je 0x12396d84 */
  if (C.zf) goto L_12396d84;
  /* 12396d68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d6c jne 0x12396d89 */
  if (!C.zf) goto L_12396d89;
  /* 12396d6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396d71 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12396d74 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d77 je 0x12396d84 */
  if (C.zf) goto L_12396d84;
  /* 12396d79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396d7c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12396d7f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d82 jne 0x12396d89 */
  if (!C.zf) goto L_12396d89;
L_12396d84:;
  /* 12396d84 jmp 0x12396e34 */
  goto L_12396e34;
L_12396d89:;
  /* 12396d89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d8d je 0x12396e26 */
  if (C.zf) goto L_12396e26;
  /* 12396d93 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396d97 je 0x12396ded */
  if (C.zf) goto L_12396ded;
  /* 12396d99 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396d9e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12396da0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12396da2 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 12396da8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12396dab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12396dad je 0x12396dd8 */
  if (C.zf) goto L_12396dd8;
  /* 12396daf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396db5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12396db7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12396db9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396dbc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396dbf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12396dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396dc5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396dc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12396dcb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396dce mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12396dd0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396dd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396dd6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12396dd8:;
  /* 12396dd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396ddb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396dde mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12396de0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12396de2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396de5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396de8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12396deb jmp 0x12396e19 */
  goto L_12396e19;
L_12396ded:;
  /* 12396ded mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396df0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396df2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12396df4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12396df6 mov cl, byte ptr [eax + 0x123c1d61] */
  CL = (r8((uint32_t)(EAX + 0x123c1d61)));
  /* 12396dfc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12396dff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12396e01 je 0x12396e19 */
  if (C.zf) goto L_12396e19;
  /* 12396e03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396e06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12396e0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396e11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12396e19:;
  /* 12396e19 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e21 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12396e26:;
  /* 12396e26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396e29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12396e2f jmp 0x12396ca1 */
  goto L_12396ca1;
L_12396e34:;
  /* 12396e34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396e38 je 0x12396e49 */
  if (C.zf) goto L_12396e49;
  /* 12396e3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396e3d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12396e40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12396e43 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e46 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12396e49:;
  /* 12396e49 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12396e4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e51 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12396e54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12396e56 jmp 0x12396c43 */
  goto L_12396c43;
L_12396e5b:;
  /* 12396e5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396e5f je 0x12396e73 */
  if (C.zf) goto L_12396e73;
  /* 12396e61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396e64 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12396e6a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12396e6d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e70 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12396e73:;
  /* 12396e73 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12396e76 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12396e78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396e7b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12396e7e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12396e80 mov esp, ebp */
  ESP = (EBP);
  /* 12396e82 pop ebp */
  EBP = (pop32());
  /* 12396e83 ret  */
  ESPCHK(0x12396a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e90 @ 0x12396e90 (537 bytes, 173 insns) */
void f_12396e90(void) {
  FTRACE(0x12396e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12396e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12396e91 mov ebp, esp */
  EBP = (ESP);
  /* 12396e93 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396e96 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12396e9d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12396ea4 cmp dword ptr [0x123c0644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396eab jne 0x12396eea */
  if (!C.zf) goto L_12396eea;
  /* 12396ead call dword ptr [0x123c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c334c))), 0x12396eb3u);
  /* 12396eb3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12396eb6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396eba je 0x12396ec8 */
  if (C.zf) goto L_12396ec8;
  /* 12396ebc mov dword ptr [0x123c0644], 1 */
  w32((uint32_t)(0x123c0644), (0x1u));
  /* 12396ec6 jmp 0x12396eea */
  goto L_12396eea;
L_12396ec8:;
  /* 12396ec8 call dword ptr [0x123c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3348))), 0x12396eceu);
  /* 12396ece mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12396ed1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ed5 je 0x12396ee3 */
  if (C.zf) goto L_12396ee3;
  /* 12396ed7 mov dword ptr [0x123c0644], 2 */
  w32((uint32_t)(0x123c0644), (0x2u));
  /* 12396ee1 jmp 0x12396eea */
  goto L_12396eea;
L_12396ee3:;
  /* 12396ee3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396ee5 jmp 0x123970a5 */
  goto L_123970a5;
L_12396eea:;
  /* 12396eea cmp dword ptr [0x123c0644], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c0644))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ef1 jne 0x12396fee */
  if (!C.zf) goto L_12396fee;
  /* 12396ef7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396efb jne 0x12396f13 */
  if (!C.zf) goto L_12396f13;
  /* 12396efd call dword ptr [0x123c334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c334c))), 0x12396f03u);
  /* 12396f03 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12396f06 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396f0a jne 0x12396f13 */
  if (!C.zf) goto L_12396f13;
  /* 12396f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396f0e jmp 0x123970a5 */
  goto L_123970a5;
L_12396f13:;
  /* 12396f13 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12396f16 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12396f19:;
  /* 12396f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396f1c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396f1e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12396f21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396f23 je 0x12396f45 */
  if (C.zf) goto L_12396f45;
  /* 12396f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396f28 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12396f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396f31 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12396f33 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12396f36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12396f38 jne 0x12396f43 */
  if (!C.zf) goto L_12396f43;
  /* 12396f3a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396f3d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396f40 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12396f43:;
  /* 12396f43 jmp 0x12396f19 */
  goto L_12396f19;
L_12396f45:;
  /* 12396f45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12396f48 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12396f4b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12396f4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12396f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12396f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396f5e push edx */
  push32((uint32_t)(EDX));
  /* 12396f5f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12396f62 push eax */
  push32((uint32_t)(EAX));
  /* 12396f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f65 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396f67 call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x12396f6du);
  /* 12396f6d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12396f70 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396f74 je 0x12396f94 */
  if (C.zf) goto L_12396f94;
  /* 12396f76 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12396f78 push 0x123bbd3c */
  push32((uint32_t)(0x123bbd3cu));
  /* 12396f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12396f7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396f82 push ecx */
  push32((uint32_t)(ECX));
  /* 12396f83 call 0x123948c0 */
  push32(0x12396f88u); f_123948c0();
  /* 12396f88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396f8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12396f8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396f92 jne 0x12396fa5 */
  if (!C.zf) goto L_12396fa5;
L_12396f94:;
  /* 12396f94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12396f97 push edx */
  push32((uint32_t)(EDX));
  /* 12396f98 call dword ptr [0x123c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3340))), 0x12396f9eu);
  /* 12396f9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12396fa0 jmp 0x123970a5 */
  goto L_123970a5;
L_12396fa5:;
  /* 12396fa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396fa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396fa9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12396fac push eax */
  push32((uint32_t)(EAX));
  /* 12396fad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12396fb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12396fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12396fb4 push edx */
  push32((uint32_t)(EDX));
  /* 12396fb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12396fb8 push eax */
  push32((uint32_t)(EAX));
  /* 12396fb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12396fbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12396fbd call dword ptr [0x123c3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3344))), 0x12396fc3u);
  /* 12396fc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12396fc5 jne 0x12396fdc */
  if (!C.zf) goto L_12396fdc;
  /* 12396fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12396fc9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12396fcc push ecx */
  push32((uint32_t)(ECX));
  /* 12396fcd call 0x12395350 */
  push32(0x12396fd2u); f_12395350();
  /* 12396fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12396fd5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12396fdc:;
  /* 12396fdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12396fdf push edx */
  push32((uint32_t)(EDX));
  /* 12396fe0 call dword ptr [0x123c3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3340))), 0x12396fe6u);
  /* 12396fe6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12396fe9 jmp 0x123970a5 */
  goto L_123970a5;
L_12396fee:;
  /* 12396fee cmp dword ptr [0x123c0644], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123c0644))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396ff5 jne 0x123970a3 */
  if (!C.zf) goto L_123970a3;
  /* 12396ffb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12396fff jne 0x12397017 */
  if (!C.zf) goto L_12397017;
  /* 12397001 call dword ptr [0x123c3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3348))), 0x12397007u);
  /* 12397007 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1239700a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239700e jne 0x12397017 */
  if (!C.zf) goto L_12397017;
  /* 12397010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12397012 jmp 0x123970a5 */
  goto L_123970a5;
L_12397017:;
  /* 12397017 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1239701a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1239701d:;
  /* 1239701d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397020 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12397023 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12397025 je 0x12397045 */
  if (C.zf) goto L_12397045;
  /* 12397027 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239702a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239702d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397030 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397033 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12397036 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12397038 jne 0x12397043 */
  if (!C.zf) goto L_12397043;
  /* 1239703a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239703d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397040 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12397043:;
  /* 12397043 jmp 0x1239701d */
  goto L_1239701d;
L_12397045:;
  /* 12397045 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397048 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239704b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239704e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12397051 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12397056 push 0x123bbd3c */
  push32((uint32_t)(0x123bbd3cu));
  /* 1239705b push 2 */
  push32((uint32_t)(0x2u));
  /* 1239705d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397060 push edx */
  push32((uint32_t)(EDX));
  /* 12397061 call 0x123948c0 */
  push32(0x12397066u); f_123948c0();
  /* 12397066 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397069 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1239706c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397070 jne 0x12397080 */
  if (!C.zf) goto L_12397080;
  /* 12397072 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397075 push eax */
  push32((uint32_t)(EAX));
  /* 12397076 call dword ptr [0x123c333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c333c))), 0x1239707cu);
  /* 1239707c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239707e jmp 0x123970a5 */
  goto L_123970a5;
L_12397080:;
  /* 12397080 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397083 push ecx */
  push32((uint32_t)(ECX));
  /* 12397084 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397087 push edx */
  push32((uint32_t)(EDX));
  /* 12397088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239708b push eax */
  push32((uint32_t)(EAX));
  /* 1239708c call 0x1239b1a0 */
  push32(0x12397091u); f_1239b1a0();
  /* 12397091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397094 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397097 push ecx */
  push32((uint32_t)(ECX));
  /* 12397098 call dword ptr [0x123c333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c333c))), 0x1239709eu);
  /* 1239709e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123970a1 jmp 0x123970a5 */
  goto L_123970a5;
L_123970a3:;
  /* 123970a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123970a5:;
  /* 123970a5 mov esp, ebp */
  ESP = (EBP);
  /* 123970a7 pop ebp */
  EBP = (pop32());
  /* 123970a8 ret  */
  ESPCHK(0x12396e90u, _esp0);
  ESP += 4; return;
}

/* FUN_100070b0 @ 0x123970b0 (77 bytes, 25 insns) */
void f_123970b0(void) {
  FTRACE(0x123970b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123970b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123970b1 mov ebp, esp */
  EBP = (ESP);
  /* 123970b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123970b5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 123970ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123970bc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123970c0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 123970c3 push eax */
  push32((uint32_t)(EAX));
  /* 123970c4 call dword ptr [0x123c3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3328))), 0x123970cau);
  /* 123970ca mov dword ptr [0x123c1e8c], eax */
  w32((uint32_t)(0x123c1e8c), (EAX));
  /* 123970cf cmp dword ptr [0x123c1e8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c1e8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123970d6 jne 0x123970dc */
  if (!C.zf) goto L_123970dc;
  /* 123970d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123970da jmp 0x123970fb */
  goto L_123970fb;
L_123970dc:;
  /* 123970dc call 0x12398b60 */
  push32(0x123970e1u); f_12398b60();
  /* 123970e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123970e3 jne 0x123970f6 */
  if (!C.zf) goto L_123970f6;
  /* 123970e5 mov ecx, dword ptr [0x123c1e8c] */
  ECX = (r32((uint32_t)(0x123c1e8c)));
  /* 123970eb push ecx */
  push32((uint32_t)(ECX));
  /* 123970ec call dword ptr [0x123c3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3350))), 0x123970f2u);
  /* 123970f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123970f4 jmp 0x123970fb */
  goto L_123970fb;
L_123970f6:;
  /* 123970f6 mov eax, 1 */
  EAX = (0x1u);
L_123970fb:;
  /* 123970fb pop ebp */
  EBP = (pop32());
  /* 123970fc ret  */
  ESPCHK(0x123970b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007100 @ 0x12397100 (156 bytes, 48 insns) */
void f_12397100(void) {
  FTRACE(0x12397100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397100 push ebp */
  push32((uint32_t)(EBP));
  /* 12397101 mov ebp, esp */
  EBP = (ESP);
  /* 12397103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397106 mov eax, dword ptr [0x123c1e88] */
  EAX = (r32((uint32_t)(0x123c1e88)));
  /* 1239710b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1239710e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12397115 jmp 0x12397120 */
  goto L_12397120;
L_12397117:;
  /* 12397117 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239711a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239711d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12397120:;
  /* 12397120 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397123 cmp edx, dword ptr [0x123c1e84] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123c1e84))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397129 jge 0x12397176 */
  if ((C.sf==C.of)) goto L_12397176;
  /* 1239712b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12397130 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12397135 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397138 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1239713b push ecx */
  push32((uint32_t)(ECX));
  /* 1239713c call dword ptr [0x123c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c335c))), 0x12397142u);
  /* 12397142 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12397147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397149 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239714c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1239714f push eax */
  push32((uint32_t)(EAX));
  /* 12397150 call dword ptr [0x123c335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c335c))), 0x12397156u);
  /* 12397156 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397159 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1239715c push edx */
  push32((uint32_t)(EDX));
  /* 1239715d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239715f mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12397164 push eax */
  push32((uint32_t)(EAX));
  /* 12397165 call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x1239716bu);
  /* 1239716b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239716e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397171 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12397174 jmp 0x12397117 */
  goto L_12397117;
L_12397176:;
  /* 12397176 mov edx, dword ptr [0x123c1e88] */
  EDX = (r32((uint32_t)(0x123c1e88)));
  /* 1239717c push edx */
  push32((uint32_t)(EDX));
  /* 1239717d push 0 */
  push32((uint32_t)(0x0u));
  /* 1239717f mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12397184 push eax */
  push32((uint32_t)(EAX));
  /* 12397185 call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x1239718bu);
  /* 1239718b mov ecx, dword ptr [0x123c1e8c] */
  ECX = (r32((uint32_t)(0x123c1e8c)));
  /* 12397191 push ecx */
  push32((uint32_t)(ECX));
  /* 12397192 call dword ptr [0x123c3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3350))), 0x12397198u);
  /* 12397198 mov esp, ebp */
  ESP = (EBP);
  /* 1239719a pop ebp */
  EBP = (pop32());
  /* 1239719b ret  */
  ESPCHK(0x12397100u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x123971a0 (73 bytes, 19 insns) */
void f_123971a0(void) {
  FTRACE(0x123971a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123971a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123971a1 mov ebp, esp */
  EBP = (ESP);
  /* 123971a3 cmp dword ptr [0x123c04d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123971aa je 0x123971be */
  if (C.zf) goto L_123971be;
  /* 123971ac cmp dword ptr [0x123c04d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123971b3 jne 0x123971e7 */
  if (!C.zf) goto L_123971e7;
  /* 123971b5 cmp dword ptr [0x123c04dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123971bc jne 0x123971e7 */
  if (!C.zf) goto L_123971e7;
L_123971be:;
  /* 123971be push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 123971c3 call 0x123971f0 */
  push32(0x123971c8u); f_123971f0();
  /* 123971c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123971cb cmp dword ptr [0x123c0648], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0648))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123971d2 je 0x123971da */
  if (C.zf) goto L_123971da;
  /* 123971d4 call dword ptr [0x123c0648] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0648))), 0x123971dau);
L_123971da:;
  /* 123971da push 0xff */
  push32((uint32_t)(0xffu));
  /* 123971df call 0x123971f0 */
  push32(0x123971e4u); f_123971f0();
  /* 123971e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123971e7:;
  /* 123971e7 pop ebp */
  EBP = (pop32());
  /* 123971e8 ret  */
  ESPCHK(0x123971a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100071f0 @ 0x123971f0 (447 bytes, 131 insns) */
void f_123971f0(void) {
  FTRACE(0x123971f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123971f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123971f1 mov ebp, esp */
  EBP = (ESP);
  /* 123971f3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123971f9 push ebx */
  push32((uint32_t)(EBX));
  /* 123971fa push esi */
  push32((uint32_t)(ESI));
  /* 123971fb push edi */
  push32((uint32_t)(EDI));
  /* 123971fc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12397203 jmp 0x1239720e */
  goto L_1239720e;
L_12397205:;
  /* 12397205 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397208 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239720b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1239720e:;
  /* 1239720e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397212 jae 0x12397227 */
  if (!C.cf) goto L_12397227;
  /* 12397214 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397217 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239721a cmp edx, dword ptr [ecx*8 + 0x123beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x123beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397221 jne 0x12397225 */
  if (!C.zf) goto L_12397225;
  /* 12397223 jmp 0x12397227 */
  goto L_12397227;
L_12397225:;
  /* 12397225 jmp 0x12397205 */
  goto L_12397205;
L_12397227:;
  /* 12397227 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239722a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239722d cmp ecx, dword ptr [eax*8 + 0x123beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x123beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397234 jne 0x123973a8 */
  if (!C.zf) goto L_123973a8;
  /* 1239723a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397241 je 0x12397264 */
  if (C.zf) goto L_12397264;
  /* 12397243 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397246 mov eax, dword ptr [edx*8 + 0x123beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x123beab4)));
  /* 1239724d push eax */
  push32((uint32_t)(EAX));
  /* 1239724e push 0 */
  push32((uint32_t)(0x0u));
  /* 12397250 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397252 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397254 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397256 call 0x12393980 */
  push32(0x1239725bu); f_12393980();
  /* 1239725b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239725e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397261 jne 0x12397264 */
  if (!C.zf) goto L_12397264;
  /* 12397263 int3  */
  x86_unimpl("int3 @ 0x12397263");
L_12397264:;
  /* 12397264 cmp dword ptr [0x123c04d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239726b je 0x1239727f */
  if (C.zf) goto L_1239727f;
  /* 1239726d cmp dword ptr [0x123c04d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c04d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397274 jne 0x123972b8 */
  if (!C.zf) goto L_123972b8;
  /* 12397276 cmp dword ptr [0x123c04dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123c04dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239727d jne 0x123972b8 */
  if (!C.zf) goto L_123972b8;
L_1239727f:;
  /* 1239727f push 0 */
  push32((uint32_t)(0x0u));
  /* 12397281 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12397284 push ecx */
  push32((uint32_t)(ECX));
  /* 12397285 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397288 mov eax, dword ptr [edx*8 + 0x123beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x123beab4)));
  /* 1239728f push eax */
  push32((uint32_t)(EAX));
  /* 12397290 call 0x123976f0 */
  push32(0x12397295u); f_123976f0();
  /* 12397295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397298 push eax */
  push32((uint32_t)(EAX));
  /* 12397299 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239729c mov edx, dword ptr [ecx*8 + 0x123beab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x123beab4)));
  /* 123972a3 push edx */
  push32((uint32_t)(EDX));
  /* 123972a4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 123972a6 call dword ptr [0x123c32d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d4))), 0x123972acu);
  /* 123972ac push eax */
  push32((uint32_t)(EAX));
  /* 123972ad call dword ptr [0x123c32d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32d8))), 0x123972b3u);
  /* 123972b3 jmp 0x123973a8 */
  goto L_123973a8;
L_123972b8:;
  /* 123972b8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123972bf je 0x123973a8 */
  if (C.zf) goto L_123973a8;
  /* 123972c5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 123972ca lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 123972d0 push eax */
  push32((uint32_t)(EAX));
  /* 123972d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 123972d3 call dword ptr [0x123c32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f0))), 0x123972d9u);
  /* 123972d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123972db jne 0x123972f1 */
  if (!C.zf) goto L_123972f1;
  /* 123972dd push 0x123bb5a4 */
  push32((uint32_t)(0x123bb5a4u));
  /* 123972e2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 123972e8 push ecx */
  push32((uint32_t)(ECX));
  /* 123972e9 call 0x12397870 */
  push32(0x123972eeu); f_12397870();
  /* 123972ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123972f1:;
  /* 123972f1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 123972f7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 123972fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123972fd push eax */
  push32((uint32_t)(EAX));
  /* 123972fe call 0x123976f0 */
  push32(0x12397303u); f_123976f0();
  /* 12397303 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397306 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397309 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239730c jbe 0x1239733a */
  if ((C.cf||C.zf)) goto L_1239733a;
  /* 1239730e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12397314 push ecx */
  push32((uint32_t)(ECX));
  /* 12397315 call 0x123976f0 */
  push32(0x1239731au); f_123976f0();
  /* 1239731a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239731d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397320 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12397324 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397327 push 3 */
  push32((uint32_t)(0x3u));
  /* 12397329 push 0x123bb5a0 */
  push32((uint32_t)(0x123bb5a0u));
  /* 1239732e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397331 push ecx */
  push32((uint32_t)(ECX));
  /* 12397332 call 0x123980e0 */
  push32(0x12397337u); f_123980e0();
  /* 12397337 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239733a:;
  /* 1239733a push 0x123bbff8 */
  push32((uint32_t)(0x123bbff8u));
  /* 1239733f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12397345 push edx */
  push32((uint32_t)(EDX));
  /* 12397346 call 0x12397870 */
  push32(0x1239734bu); f_12397870();
  /* 1239734b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239734e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397351 push eax */
  push32((uint32_t)(EAX));
  /* 12397352 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12397358 push ecx */
  push32((uint32_t)(ECX));
  /* 12397359 call 0x12397880 */
  push32(0x1239735eu); f_12397880();
  /* 1239735e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397361 push 0x123bb518 */
  push32((uint32_t)(0x123bb518u));
  /* 12397366 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1239736c push edx */
  push32((uint32_t)(EDX));
  /* 1239736d call 0x12397880 */
  push32(0x12397372u); f_12397880();
  /* 12397372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397375 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397378 mov ecx, dword ptr [eax*8 + 0x123beab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x123beab4)));
  /* 1239737f push ecx */
  push32((uint32_t)(ECX));
  /* 12397380 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12397386 push edx */
  push32((uint32_t)(EDX));
  /* 12397387 call 0x12397880 */
  push32(0x1239738cu); f_12397880();
  /* 1239738c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239738f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12397394 push 0x123bbfd0 */
  push32((uint32_t)(0x123bbfd0u));
  /* 12397399 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1239739f push eax */
  push32((uint32_t)(EAX));
  /* 123973a0 call 0x12398020 */
  push32(0x123973a5u); f_12398020();
  /* 123973a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123973a8:;
  /* 123973a8 pop edi */
  EDI = (pop32());
  /* 123973a9 pop esi */
  ESI = (pop32());
  /* 123973aa pop ebx */
  EBX = (pop32());
  /* 123973ab mov esp, ebp */
  ESP = (EBP);
  /* 123973ad pop ebp */
  EBP = (pop32());
  /* 123973ae ret  */
  ESPCHK(0x123971f0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x123973b0 (80 bytes, 27 insns) */
void f_123973b0(void) {
  FTRACE(0x123973b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123973b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123973b1 mov ebp, esp */
  EBP = (ESP);
  /* 123973b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123973b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123973bb jmp 0x123973c6 */
  goto L_123973c6;
L_123973bd:;
  /* 123973bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123973c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123973c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123973c6:;
  /* 123973c6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123973ca jae 0x123973df */
  if (!C.cf) goto L_123973df;
  /* 123973cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123973cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123973d2 cmp edx, dword ptr [ecx*8 + 0x123beab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x123beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123973d9 jne 0x123973dd */
  if (!C.zf) goto L_123973dd;
  /* 123973db jmp 0x123973df */
  goto L_123973df;
L_123973dd:;
  /* 123973dd jmp 0x123973bd */
  goto L_123973bd;
L_123973df:;
  /* 123973df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123973e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123973e5 cmp ecx, dword ptr [eax*8 + 0x123beab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x123beab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123973ec jne 0x123973fa */
  if (!C.zf) goto L_123973fa;
  /* 123973ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123973f1 mov eax, dword ptr [edx*8 + 0x123beab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x123beab4)));
  /* 123973f8 jmp 0x123973fc */
  goto L_123973fc;
L_123973fa:;
  /* 123973fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123973fc:;
  /* 123973fc mov esp, ebp */
  ESP = (EBP);
  /* 123973fe pop ebp */
  EBP = (pop32());
  /* 123973ff ret  */
  ESPCHK(0x123973b0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12397400 (66 bytes, 28 insns) */
void f_12397400(void) {
  FTRACE(0x12397400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397400 push ebp */
  push32((uint32_t)(EBP));
  /* 12397401 mov ebp, esp */
  EBP = (ESP);
  /* 12397403 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397407 jne 0x12397427 */
  if (!C.zf) goto L_12397427;
  /* 12397409 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239740d jge 0x12397427 */
  if ((C.sf==C.of)) goto L_12397427;
  /* 1239740f push 1 */
  push32((uint32_t)(0x1u));
  /* 12397411 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12397414 push eax */
  push32((uint32_t)(EAX));
  /* 12397415 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397418 push ecx */
  push32((uint32_t)(ECX));
  /* 12397419 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239741c push edx */
  push32((uint32_t)(EDX));
  /* 1239741d call 0x12397450 */
  push32(0x12397422u); f_12397450();
  /* 12397422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397425 jmp 0x1239743d */
  goto L_1239743d;
L_12397427:;
  /* 12397427 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397429 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1239742c push eax */
  push32((uint32_t)(EAX));
  /* 1239742d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397430 push ecx */
  push32((uint32_t)(ECX));
  /* 12397431 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397434 push edx */
  push32((uint32_t)(EDX));
  /* 12397435 call 0x12397450 */
  push32(0x1239743au); f_12397450();
  /* 1239743a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239743d:;
  /* 1239743d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397440 pop ebp */
  EBP = (pop32());
  /* 12397441 ret  */
  ESPCHK(0x12397400u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12397450 (194 bytes, 71 insns) */
void f_12397450(void) {
  FTRACE(0x12397450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397450 push ebp */
  push32((uint32_t)(EBP));
  /* 12397451 mov ebp, esp */
  EBP = (ESP);
  /* 12397453 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397459 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239745c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397460 je 0x12397479 */
  if (C.zf) goto L_12397479;
  /* 12397462 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397465 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12397468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239746b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239746e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12397471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397474 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12397476 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12397479:;
  /* 12397479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239747c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1239747f:;
  /* 1239747f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397482 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12397484 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12397487 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1239748a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239748d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1239748f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12397492 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12397495 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397499 jbe 0x123974b1 */
  if ((C.cf||C.zf)) goto L_123974b1;
  /* 1239749b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239749e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123974a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974a4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123974a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123974ac mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123974af jmp 0x123974c5 */
  goto L_123974c5;
L_123974b1:;
  /* 123974b1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 123974b4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123974b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123974bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123974c2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_123974c5:;
  /* 123974c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123974c9 ja 0x1239747f */
  if ((!C.cf&&!C.zf)) goto L_1239747f;
  /* 123974cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974ce mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 123974d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974d4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123974d7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123974da:;
  /* 123974da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974dd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123974df mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 123974e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123974e8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123974ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 123974ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123974ef mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123974f2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123974f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123974f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123974fa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123974fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397500 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397503 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12397506 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397509 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239750c jb 0x123974da */
  if (C.cf) goto L_123974da;
  /* 1239750e mov esp, ebp */
  ESP = (EBP);
  /* 12397510 pop ebp */
  EBP = (pop32());
  /* 12397511 ret  */
  ESPCHK(0x12397450u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12397520 (63 bytes, 24 insns) */
void f_12397520(void) {
  FTRACE(0x12397520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397520 push ebp */
  push32((uint32_t)(EBP));
  /* 12397521 mov ebp, esp */
  EBP = (ESP);
  /* 12397523 push ecx */
  push32((uint32_t)(ECX));
  /* 12397524 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397528 jne 0x12397539 */
  if (!C.zf) goto L_12397539;
  /* 1239752a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239752e jge 0x12397539 */
  if ((C.sf==C.of)) goto L_12397539;
  /* 12397530 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12397537 jmp 0x12397540 */
  goto L_12397540;
L_12397539:;
  /* 12397539 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12397540:;
  /* 12397540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397543 push eax */
  push32((uint32_t)(EAX));
  /* 12397544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12397547 push ecx */
  push32((uint32_t)(ECX));
  /* 12397548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239754b push edx */
  push32((uint32_t)(EDX));
  /* 1239754c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239754f push eax */
  push32((uint32_t)(EAX));
  /* 12397550 call 0x12397450 */
  push32(0x12397555u); f_12397450();
  /* 12397555 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397558 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239755b mov esp, ebp */
  ESP = (EBP);
  /* 1239755d pop ebp */
  EBP = (pop32());
  /* 1239755e ret  */
  ESPCHK(0x12397520u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12397560 (30 bytes, 14 insns) */
void f_12397560(void) {
  FTRACE(0x12397560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397560 push ebp */
  push32((uint32_t)(EBP));
  /* 12397561 mov ebp, esp */
  EBP = (ESP);
  /* 12397563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12397568 push eax */
  push32((uint32_t)(EAX));
  /* 12397569 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239756c push ecx */
  push32((uint32_t)(ECX));
  /* 1239756d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397570 push edx */
  push32((uint32_t)(EDX));
  /* 12397571 call 0x12397450 */
  push32(0x12397576u); f_12397450();
  /* 12397576 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397579 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239757c pop ebp */
  EBP = (pop32());
  /* 1239757d ret  */
  ESPCHK(0x12397560u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12397580 (72 bytes, 28 insns) */
void f_12397580(void) {
  FTRACE(0x12397580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397580 push ebp */
  push32((uint32_t)(EBP));
  /* 12397581 mov ebp, esp */
  EBP = (ESP);
  /* 12397583 push ecx */
  push32((uint32_t)(ECX));
  /* 12397584 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397588 jne 0x123975a1 */
  if (!C.zf) goto L_123975a1;
  /* 1239758a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239758e jg 0x123975a1 */
  if ((!C.zf&&C.sf==C.of)) goto L_123975a1;
  /* 12397590 jl 0x12397598 */
  if ((C.sf!=C.of)) goto L_12397598;
  /* 12397592 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397596 jae 0x123975a1 */
  if (!C.cf) goto L_123975a1;
L_12397598:;
  /* 12397598 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1239759f jmp 0x123975a8 */
  goto L_123975a8;
L_123975a1:;
  /* 123975a1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123975a8:;
  /* 123975a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123975ab push eax */
  push32((uint32_t)(EAX));
  /* 123975ac mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123975af push ecx */
  push32((uint32_t)(ECX));
  /* 123975b0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123975b3 push edx */
  push32((uint32_t)(EDX));
  /* 123975b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123975b7 push eax */
  push32((uint32_t)(EAX));
  /* 123975b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123975bb push ecx */
  push32((uint32_t)(ECX));
  /* 123975bc call 0x123975d0 */
  push32(0x123975c1u); f_123975d0();
  /* 123975c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123975c4 mov esp, ebp */
  ESP = (EBP);
  /* 123975c6 pop ebp */
  EBP = (pop32());
  /* 123975c7 ret  */
  ESPCHK(0x12397580u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x123975d0 (242 bytes, 91 insns) */
void f_123975d0(void) {
  FTRACE(0x123975d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123975d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123975d1 mov ebp, esp */
  EBP = (ESP);
  /* 123975d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123975d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123975d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123975dc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123975e0 je 0x12397604 */
  if (C.zf) goto L_12397604;
  /* 123975e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123975e5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 123975e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123975eb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123975ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123975f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123975f4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 123975f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123975f9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123975fc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 123975fe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12397601 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12397604:;
  /* 12397604 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397607 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1239760a:;
  /* 1239760a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1239760d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1239760f push ecx */
  push32((uint32_t)(ECX));
  /* 12397610 push eax */
  push32((uint32_t)(EAX));
  /* 12397611 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397614 push edx */
  push32((uint32_t)(EDX));
  /* 12397615 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397618 push eax */
  push32((uint32_t)(EAX));
  /* 12397619 call 0x1239b550 */
  push32(0x1239761eu); f_1239b550();
  /* 1239761e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397621 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12397624 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12397626 push edx */
  push32((uint32_t)(EDX));
  /* 12397627 push ecx */
  push32((uint32_t)(ECX));
  /* 12397628 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239762b push eax */
  push32((uint32_t)(EAX));
  /* 1239762c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239762f push ecx */
  push32((uint32_t)(ECX));
  /* 12397630 call 0x1239b4e0 */
  push32(0x12397635u); f_1239b4e0();
  /* 12397635 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12397638 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1239763b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239763f jbe 0x12397657 */
  if ((C.cf||C.zf)) goto L_12397657;
  /* 12397641 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397644 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239764a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1239764c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239764f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397652 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12397655 jmp 0x1239766b */
  goto L_1239766b;
L_12397657:;
  /* 12397657 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1239765a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239765d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397660 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12397662 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397665 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397668 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1239766b:;
  /* 1239766b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239766f ja 0x1239760a */
  if ((!C.cf&&!C.zf)) goto L_1239760a;
  /* 12397671 jb 0x12397679 */
  if (C.cf) goto L_12397679;
  /* 12397673 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397677 ja 0x1239760a */
  if ((!C.cf&&!C.zf)) goto L_1239760a;
L_12397679:;
  /* 12397679 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239767c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1239767f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397682 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397685 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12397688:;
  /* 12397688 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239768b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1239768d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12397690 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397693 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12397698 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1239769a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239769d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 123976a0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 123976a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123976a5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123976a8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 123976ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123976ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 123976b1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123976b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123976b7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123976ba jb 0x12397688 */
  if (C.cf) goto L_12397688;
  /* 123976bc mov esp, ebp */
  ESP = (EBP);
  /* 123976be pop ebp */
  EBP = (pop32());
  /* 123976bf ret 0x14 */
  ESPCHK(0x123975d0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x123976d0 (31 bytes, 15 insns) */
void f_123976d0(void) {
  FTRACE(0x123976d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123976d0 push ebp */
  push32((uint32_t)(EBP));
  /* 123976d1 mov ebp, esp */
  EBP = (ESP);
  /* 123976d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 123976d5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 123976d8 push eax */
  push32((uint32_t)(EAX));
  /* 123976d9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123976dc push ecx */
  push32((uint32_t)(ECX));
  /* 123976dd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123976e0 push edx */
  push32((uint32_t)(EDX));
  /* 123976e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123976e4 push eax */
  push32((uint32_t)(EAX));
  /* 123976e5 call 0x123975d0 */
  push32(0x123976eau); f_123975d0();
  /* 123976ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 123976ed pop ebp */
  EBP = (pop32());
  /* 123976ee ret  */
  ESPCHK(0x123976d0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x123976f0 (123 bytes, 44 insns) */
void f_123976f0(void) {
  FTRACE(0x123976f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123976f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 123976f4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123976fa je 0x12397710 */
  if (C.zf) goto L_12397710;
L_123976fc:;
  /* 123976fc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 123976fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123976ff test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12397701 je 0x12397743 */
  if (C.zf) goto L_12397743;
  /* 12397703 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12397709 jne 0x123976fc */
  if (!C.zf) goto L_123976fc;
  /* 1239770b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12397710:;
  /* 12397710 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12397712 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12397717 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397719 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239771c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239771e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397721 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12397726 je 0x12397710 */
  if (C.zf) goto L_12397710;
  /* 12397728 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1239772b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1239772d je 0x12397761 */
  if (C.zf) goto L_12397761;
  /* 1239772f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12397731 je 0x12397757 */
  if (C.zf) goto L_12397757;
  /* 12397733 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12397738 je 0x1239774d */
  if (C.zf) goto L_1239774d;
  /* 1239773a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1239773f je 0x12397743 */
  if (C.zf) goto L_12397743;
  /* 12397741 jmp 0x12397710 */
  goto L_12397710;
L_12397743:;
  /* 12397743 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12397746 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1239774a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239774c ret  */
  ESPCHK(0x123976f0u, _esp0);
  ESP += 4; return;
L_1239774d:;
  /* 1239774d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12397750 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12397754 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397756 ret  */
  ESPCHK(0x123976f0u, _esp0);
  ESP += 4; return;
L_12397757:;
  /* 12397757 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1239775a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1239775e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397760 ret  */
  ESPCHK(0x123976f0u, _esp0);
  ESP += 4; return;
L_12397761:;
  /* 12397761 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12397764 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12397768 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239776a ret  */
  ESPCHK(0x123976f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007770 @ 0x12397770 (249 bytes, 93 insns) */
void f_12397770(void) {
  FTRACE(0x12397770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397770 push ebp */
  push32((uint32_t)(EBP));
  /* 12397771 mov ebp, esp */
  EBP = (ESP);
  /* 12397773 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397776 push ebx */
  push32((uint32_t)(EBX));
  /* 12397777 push esi */
  push32((uint32_t)(ESI));
  /* 12397778 push edi */
  push32((uint32_t)(EDI));
  /* 12397779 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1239777c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1239777f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12397782 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12397785:;
  /* 12397785 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397789 jne 0x123977a9 */
  if (!C.zf) goto L_123977a9;
  /* 1239778b push 0x123bc030 */
  push32((uint32_t)(0x123bc030u));
  /* 12397790 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397792 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12397794 push 0x123bc024 */
  push32((uint32_t)(0x123bc024u));
  /* 12397799 push 2 */
  push32((uint32_t)(0x2u));
  /* 1239779b call 0x12393980 */
  push32(0x123977a0u); f_12393980();
  /* 123977a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123977a3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123977a6 jne 0x123977a9 */
  if (!C.zf) goto L_123977a9;
  /* 123977a8 int3  */
  x86_unimpl("int3 @ 0x123977a8");
L_123977a9:;
  /* 123977a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123977ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123977ad jne 0x12397785 */
  if (!C.zf) goto L_12397785;
L_123977af:;
  /* 123977af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123977b3 jne 0x123977d3 */
  if (!C.zf) goto L_123977d3;
  /* 123977b5 push 0x123bc014 */
  push32((uint32_t)(0x123bc014u));
  /* 123977ba push 0 */
  push32((uint32_t)(0x0u));
  /* 123977bc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 123977be push 0x123bc024 */
  push32((uint32_t)(0x123bc024u));
  /* 123977c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 123977c5 call 0x12393980 */
  push32(0x123977cau); f_12393980();
  /* 123977ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123977cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123977d0 jne 0x123977d3 */
  if (!C.zf) goto L_123977d3;
  /* 123977d2 int3  */
  x86_unimpl("int3 @ 0x123977d2");
L_123977d3:;
  /* 123977d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123977d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123977d7 jne 0x123977af */
  if (!C.zf) goto L_123977af;
  /* 123977d9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123977dc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 123977e3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123977e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123977e9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 123977ec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123977ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123977f2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 123977f4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123977f7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123977fa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 123977fd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12397800 push edx */
  push32((uint32_t)(EDX));
  /* 12397801 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12397804 push eax */
  push32((uint32_t)(EAX));
  /* 12397805 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397808 push ecx */
  push32((uint32_t)(ECX));
  /* 12397809 call 0x1239b850 */
  push32(0x1239780eu); f_1239b850();
  /* 1239780e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397811 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12397814 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397817 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1239781a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1239781d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397820 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12397823 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397826 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239782a jl 0x1239784e */
  if ((C.sf!=C.of)) goto L_1239784e;
  /* 1239782c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239782f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12397831 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12397834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12397836 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1239783c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1239783f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397842 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12397844 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397847 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1239784a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1239784c jmp 0x1239785f */
  goto L_1239785f;
L_1239784e:;
  /* 1239784e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397851 push eax */
  push32((uint32_t)(EAX));
  /* 12397852 push 0 */
  push32((uint32_t)(0x0u));
  /* 12397854 call 0x1239b5d0 */
  push32(0x12397859u); f_1239b5d0();
  /* 12397859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239785c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1239785f:;
  /* 1239785f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12397862 pop edi */
  EDI = (pop32());
  /* 12397863 pop esi */
  ESI = (pop32());
  /* 12397864 pop ebx */
  EBX = (pop32());
  /* 12397865 mov esp, ebp */
  ESP = (EBP);
  /* 12397867 pop ebp */
  EBP = (pop32());
  /* 12397868 ret  */
  ESPCHK(0x12397770u, _esp0);
  ESP += 4; return;
}

/* FUN_10007870 @ 0x12397870 (7 bytes, 3 insns) */
void f_12397870(void) {
  FTRACE(0x12397870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397870 push edi */
  push32((uint32_t)(EDI));
  /* 12397871 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12397875 jmp 0x123978e1 */
  jmp_ind(0x123978e1u); return;
}

/* FUN_10007880 @ 0x12397880 (224 bytes, 84 insns) */
void f_12397880(void) {
  FTRACE(0x12397880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397880 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12397884 push edi */
  push32((uint32_t)(EDI));
  /* 12397885 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1239788b je 0x1239789c */
  if (C.zf) goto L_1239789c;
L_1239788d:;
  /* 1239788d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1239788f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12397890 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12397892 je 0x123978cf */
  if (C.zf) goto L_123978cf;
  /* 12397894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1239789a jne 0x1239788d */
  if (!C.zf) goto L_1239788d;
L_1239789c:;
  /* 1239789c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1239789e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 123978a3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123978a5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 123978a8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 123978aa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 123978ad test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 123978b2 je 0x1239789c */
  if (C.zf) goto L_1239789c;
  /* 123978b4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 123978b7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 123978b9 je 0x123978de */
  if (C.zf) goto L_123978de;
  /* 123978bb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 123978bd je 0x123978d9 */
  if (C.zf) goto L_123978d9;
  /* 123978bf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 123978c4 je 0x123978d4 */
  if (C.zf) goto L_123978d4;
  /* 123978c6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 123978cb je 0x123978cf */
  if (C.zf) goto L_123978cf;
  /* 123978cd jmp 0x1239789c */
  goto L_1239789c;
L_123978cf:;
  /* 123978cf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 123978d2 jmp 0x123978e1 */
  goto L_123978e1;
L_123978d4:;
  /* 123978d4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 123978d7 jmp 0x123978e1 */
  goto L_123978e1;
L_123978d9:;
  /* 123978d9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 123978dc jmp 0x123978e1 */
  goto L_123978e1;
L_123978de:;
  /* 123978de lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_123978e1:;
  /* 123978e1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123978e5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123978eb je 0x12397906 */
  if (C.zf) goto L_12397906;
L_123978ed:;
  /* 123978ed mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 123978ef inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 123978f0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 123978f2 je 0x12397958 */
  if (C.zf) goto L_12397958;
  /* 123978f4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 123978f6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 123978f7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 123978fd jne 0x123978ed */
  if (!C.zf) goto L_123978ed;
  /* 123978ff jmp 0x12397906 */
  goto L_12397906;
L_12397901:;
  /* 12397901 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12397903 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12397906:;
  /* 12397906 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1239790b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1239790d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239790f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12397912 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12397914 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397916 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397919 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1239791e je 0x12397901 */
  if (C.zf) goto L_12397901;
  /* 12397920 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12397922 je 0x12397958 */
  if (C.zf) goto L_12397958;
  /* 12397924 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12397926 je 0x1239794f */
  if (C.zf) goto L_1239794f;
  /* 12397928 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1239792e je 0x12397942 */
  if (C.zf) goto L_12397942;
  /* 12397930 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12397936 je 0x1239793a */
  if (C.zf) goto L_1239793a;
  /* 12397938 jmp 0x12397901 */
  goto L_12397901;
L_1239793a:;
  /* 1239793a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1239793c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12397940 pop edi */
  EDI = (pop32());
  /* 12397941 ret  */
  ESPCHK(0x12397880u, _esp0);
  ESP += 4; return;
L_12397942:;
  /* 12397942 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12397945 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12397949 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1239794d pop edi */
  EDI = (pop32());
  /* 1239794e ret  */
  ESPCHK(0x12397880u, _esp0);
  ESP += 4; return;
L_1239794f:;
  /* 1239794f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12397952 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12397956 pop edi */
  EDI = (pop32());
  /* 12397957 ret  */
  ESPCHK(0x12397880u, _esp0);
  ESP += 4; return;
L_12397958:;
  /* 12397958 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1239795a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1239795e pop edi */
  EDI = (pop32());
  /* 1239795f ret  */
  ESPCHK(0x12397880u, _esp0);
  ESP += 4; return;
}

/* FUN_10007960 @ 0x12397960 (243 bytes, 91 insns) */
void f_12397960(void) {
  FTRACE(0x12397960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397960 push ebp */
  push32((uint32_t)(EBP));
  /* 12397961 mov ebp, esp */
  EBP = (ESP);
  /* 12397963 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397966 push ebx */
  push32((uint32_t)(EBX));
  /* 12397967 push esi */
  push32((uint32_t)(ESI));
  /* 12397968 push edi */
  push32((uint32_t)(EDI));
  /* 12397969 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1239796c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1239796f:;
  /* 1239796f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397973 jne 0x12397993 */
  if (!C.zf) goto L_12397993;
  /* 12397975 push 0x123bc030 */
  push32((uint32_t)(0x123bc030u));
  /* 1239797a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239797c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1239797e push 0x123bc040 */
  push32((uint32_t)(0x123bc040u));
  /* 12397983 push 2 */
  push32((uint32_t)(0x2u));
  /* 12397985 call 0x12393980 */
  push32(0x1239798au); f_12393980();
  /* 1239798a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239798d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397990 jne 0x12397993 */
  if (!C.zf) goto L_12397993;
  /* 12397992 int3  */
  x86_unimpl("int3 @ 0x12397992");
L_12397993:;
  /* 12397993 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12397995 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12397997 jne 0x1239796f */
  if (!C.zf) goto L_1239796f;
L_12397999:;
  /* 12397999 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239799d jne 0x123979bd */
  if (!C.zf) goto L_123979bd;
  /* 1239799f push 0x123bc014 */
  push32((uint32_t)(0x123bc014u));
  /* 123979a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 123979a6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 123979a8 push 0x123bc040 */
  push32((uint32_t)(0x123bc040u));
  /* 123979ad push 2 */
  push32((uint32_t)(0x2u));
  /* 123979af call 0x12393980 */
  push32(0x123979b4u); f_12393980();
  /* 123979b4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123979b7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123979ba jne 0x123979bd */
  if (!C.zf) goto L_123979bd;
  /* 123979bc int3  */
  x86_unimpl("int3 @ 0x123979bc");
L_123979bd:;
  /* 123979bd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123979bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 123979c1 jne 0x12397999 */
  if (!C.zf) goto L_12397999;
  /* 123979c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123979c6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 123979cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 123979d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123979d3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 123979d6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123979d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123979dc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 123979de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 123979e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123979e4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 123979e7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 123979ea push ecx */
  push32((uint32_t)(ECX));
  /* 123979eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 123979ee push edx */
  push32((uint32_t)(EDX));
  /* 123979ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 123979f2 push eax */
  push32((uint32_t)(EAX));
  /* 123979f3 call 0x1239b850 */
  push32(0x123979f8u); f_1239b850();
  /* 123979f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123979fb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 123979fe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a01 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12397a04 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397a07 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12397a0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a10 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397a14 jl 0x12397a38 */
  if ((C.sf!=C.of)) goto L_12397a38;
  /* 12397a16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a19 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12397a1b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12397a1e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12397a20 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12397a26 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12397a29 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a2c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12397a2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397a31 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a34 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12397a36 jmp 0x12397a49 */
  goto L_12397a49;
L_12397a38:;
  /* 12397a38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12397a3b push edx */
  push32((uint32_t)(EDX));
  /* 12397a3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12397a3e call 0x1239b5d0 */
  push32(0x12397a43u); f_1239b5d0();
  /* 12397a43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397a46 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12397a49:;
  /* 12397a49 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12397a4c pop edi */
  EDI = (pop32());
  /* 12397a4d pop esi */
  ESI = (pop32());
  /* 12397a4e pop ebx */
  EBX = (pop32());
  /* 12397a4f mov esp, ebp */
  ESP = (EBP);
  /* 12397a51 pop ebp */
  EBP = (pop32());
  /* 12397a52 ret  */
  ESPCHK(0x12397960u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x12397a60 (47 bytes, 17 insns) */
void f_12397a60(void) {
  FTRACE(0x12397a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12397a61 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397a66 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12397a6a jb 0x12397a80 */
  if (C.cf) goto L_12397a80;
L_12397a6c:;
  /* 12397a6c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397a72 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397a77 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12397a79 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397a7e jae 0x12397a6c */
  if (!C.cf) goto L_12397a6c;
L_12397a80:;
  /* 12397a80 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397a82 mov eax, esp */
  EAX = (ESP);
  /* 12397a84 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12397a86 mov esp, ecx */
  ESP = (ECX);
  /* 12397a88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12397a8a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12397a8d push eax */
  push32((uint32_t)(EAX));
  /* 12397a8e ret  */
  ESPCHK(0x12397a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a90 @ 0x12397a90 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12397a90(void) {
  FTRACE(0x12397a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12397a91 mov ebp, esp */
  EBP = (ESP);
  /* 12397a93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397a96 push esi */
  push32((uint32_t)(ESI));
  /* 12397a97 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397a9b je 0x12397aa3 */
  if (C.zf) goto L_12397aa3;
  /* 12397a9d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397aa1 jne 0x12397aa8 */
  if (!C.zf) goto L_12397aa8;
L_12397aa3:;
  /* 12397aa3 jmp 0x12397c78 */
  goto L_12397c78;
L_12397aa8:;
  /* 12397aa8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397aac je 0x12397ac4 */
  if (C.zf) goto L_12397ac4;
  /* 12397aae cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ab2 je 0x12397ac4 */
  if (C.zf) goto L_12397ac4;
  /* 12397ab4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ab8 je 0x12397ac4 */
  if (C.zf) goto L_12397ac4;
  /* 12397aba cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397abe jne 0x12397ba1 */
  if (!C.zf) goto L_12397ba1;
L_12397ac4:;
  /* 12397ac4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397ac6 call 0x123982c0 */
  push32(0x12397acbu); f_123982c0();
  /* 12397acb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397ace cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ad2 je 0x12397ada */
  if (C.zf) goto L_12397ada;
  /* 12397ad4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ad8 jne 0x12397b1f */
  if (!C.zf) goto L_12397b1f;
L_12397ada:;
  /* 12397ada cmp dword ptr [0x123c065c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c065c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ae1 jne 0x12397b1f */
  if (!C.zf) goto L_12397b1f;
  /* 12397ae3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397ae5 push 0x12397cc0 */
  push32((uint32_t)(0x12397cc0u));
  /* 12397aea call dword ptr [0x123c3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3360))), 0x12397af0u);
  /* 12397af0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397af3 jne 0x12397b01 */
  if (!C.zf) goto L_12397b01;
  /* 12397af5 mov dword ptr [0x123c065c], 1 */
  w32((uint32_t)(0x123c065c), (0x1u));
  /* 12397aff jmp 0x12397b1f */
  goto L_12397b1f;
L_12397b01:;
  /* 12397b01 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x12397b07u);
  /* 12397b07 mov esi, eax */
  ESI = (EAX);
  /* 12397b09 call 0x1239c7a0 */
  push32(0x12397b0eu); f_1239c7a0();
  /* 12397b0e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12397b10 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397b12 call 0x12398360 */
  push32(0x12397b17u); f_12398360();
  /* 12397b17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397b1a jmp 0x12397c78 */
  goto L_12397c78;
L_12397b1f:;
  /* 12397b1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397b22 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12397b25 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397b28 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397b2b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12397b2e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397b32 ja 0x12397b92 */
  if ((!C.cf&&!C.zf)) goto L_12397b92;
  /* 12397b34 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397b37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12397b39 mov dl, byte ptr [eax + 0x12397c9f] */
  DL = (r8((uint32_t)(EAX + 0x12397c9f)));
  /* 12397b3f jmp dword ptr [edx*4 + 0x12397c8b] */
  switch (EDX) {
    case 0: goto L_12397b46;
    case 1: goto L_12397b80;
    case 2: goto L_12397b5a;
    case 3: goto L_12397b6d;
    case 4: goto L_12397b92;
    default: x86_unimpl("switch@0x12397b3f out of table"); return;
  }
L_12397b46:;
  /* 12397b46 mov ecx, dword ptr [0x123c064c] */
  ECX = (r32((uint32_t)(0x123c064c)));
  /* 12397b4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12397b4f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397b52 mov dword ptr [0x123c064c], edx */
  w32((uint32_t)(0x123c064c), (EDX));
  /* 12397b58 jmp 0x12397b92 */
  goto L_12397b92;
L_12397b5a:;
  /* 12397b5a mov eax, dword ptr [0x123c0650] */
  EAX = (r32((uint32_t)(0x123c0650)));
  /* 12397b5f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397b62 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397b65 mov dword ptr [0x123c0650], ecx */
  w32((uint32_t)(0x123c0650), (ECX));
  /* 12397b6b jmp 0x12397b92 */
  goto L_12397b92;
L_12397b6d:;
  /* 12397b6d mov edx, dword ptr [0x123c0654] */
  EDX = (r32((uint32_t)(0x123c0654)));
  /* 12397b73 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12397b76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397b79 mov dword ptr [0x123c0654], eax */
  w32((uint32_t)(0x123c0654), (EAX));
  /* 12397b7e jmp 0x12397b92 */
  goto L_12397b92;
L_12397b80:;
  /* 12397b80 mov ecx, dword ptr [0x123c0658] */
  ECX = (r32((uint32_t)(0x123c0658)));
  /* 12397b86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12397b89 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397b8c mov dword ptr [0x123c0658], edx */
  w32((uint32_t)(0x123c0658), (EDX));
L_12397b92:;
  /* 12397b92 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397b94 call 0x12398360 */
  push32(0x12397b99u); f_12398360();
  /* 12397b99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397b9c jmp 0x12397c73 */
  goto L_12397c73;
L_12397ba1:;
  /* 12397ba1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ba5 je 0x12397bb8 */
  if (C.zf) goto L_12397bb8;
  /* 12397ba7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397bab je 0x12397bb8 */
  if (C.zf) goto L_12397bb8;
  /* 12397bad cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397bb1 je 0x12397bb8 */
  if (C.zf) goto L_12397bb8;
  /* 12397bb3 jmp 0x12397c78 */
  goto L_12397c78;
L_12397bb8:;
  /* 12397bb8 call 0x12394300 */
  push32(0x12397bbdu); f_12394300();
  /* 12397bbd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12397bc0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397bc3 cmp dword ptr [eax + 0x50], 0x123bec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x123bec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397bca jne 0x12397c15 */
  if (!C.zf) goto L_12397c15;
  /* 12397bcc push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12397bd1 push 0x123bc04c */
  push32((uint32_t)(0x123bc04cu));
  /* 12397bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12397bd8 mov ecx, dword ptr [0x123bec80] */
  ECX = (r32((uint32_t)(0x123bec80)));
  /* 12397bde push ecx */
  push32((uint32_t)(ECX));
  /* 12397bdf call 0x123948c0 */
  push32(0x12397be4u); f_123948c0();
  /* 12397be4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397be7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397bea mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12397bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397bf0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397bf4 je 0x12397c13 */
  if (C.zf) goto L_12397c13;
  /* 12397bf6 mov ecx, dword ptr [0x123bec80] */
  ECX = (r32((uint32_t)(0x123bec80)));
  /* 12397bfc push ecx */
  push32((uint32_t)(ECX));
  /* 12397bfd push 0x123bec00 */
  push32((uint32_t)(0x123bec00u));
  /* 12397c02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397c05 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12397c08 push eax */
  push32((uint32_t)(EAX));
  /* 12397c09 call 0x1239b1a0 */
  push32(0x12397c0eu); f_1239b1a0();
  /* 12397c0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397c11 jmp 0x12397c15 */
  goto L_12397c15;
L_12397c13:;
  /* 12397c13 jmp 0x12397c78 */
  goto L_12397c78;
L_12397c15:;
  /* 12397c15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397c18 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12397c1b push edx */
  push32((uint32_t)(EDX));
  /* 12397c1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397c1f push eax */
  push32((uint32_t)(EAX));
  /* 12397c20 call 0x12397fa0 */
  push32(0x12397c25u); f_12397fa0();
  /* 12397c25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397c28 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12397c2b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397c2f jne 0x12397c33 */
  if (!C.zf) goto L_12397c33;
  /* 12397c31 jmp 0x12397c78 */
  goto L_12397c78;
L_12397c33:;
  /* 12397c33 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397c36 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12397c39 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12397c3c:;
  /* 12397c3c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397c3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12397c42 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397c45 jne 0x12397c73 */
  if (!C.zf) goto L_12397c73;
  /* 12397c47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397c4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397c4d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12397c50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397c53 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397c56 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12397c59 mov edx, dword ptr [0x123bec84] */
  EDX = (r32((uint32_t)(0x123bec84)));
  /* 12397c5f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12397c62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397c65 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12397c68 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397c6a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397c6d jb 0x12397c71 */
  if (C.cf) goto L_12397c71;
  /* 12397c6f jmp 0x12397c73 */
  goto L_12397c73;
L_12397c71:;
  /* 12397c71 jmp 0x12397c3c */
  goto L_12397c3c;
L_12397c73:;
  /* 12397c73 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397c76 jmp 0x12397c86 */
  goto L_12397c86;
L_12397c78:;
  /* 12397c78 call 0x1239c790 */
  push32(0x12397c7du); f_1239c790();
  /* 12397c7d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12397c83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12397c86:;
  /* 12397c86 pop esi */
  ESI = (pop32());
  /* 12397c87 mov esp, ebp */
  ESP = (EBP);
  /* 12397c89 pop ebp */
  EBP = (pop32());
  /* 12397c8a ret  */
  ESPCHK(0x12397a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x12397cc0 (146 bytes, 45 insns) */
void f_12397cc0(void) {
  FTRACE(0x12397cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12397cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12397cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397cc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397cc8 call 0x123982c0 */
  push32(0x12397ccdu); f_123982c0();
  /* 12397ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397cd0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397cd4 jne 0x12397cee */
  if (!C.zf) goto L_12397cee;
  /* 12397cd6 mov dword ptr [ebp - 8], 0x123c064c */
  w32((uint32_t)(EBP + -0x8), (0x123c064cu));
  /* 12397cdd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397ce0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12397ce2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12397ce5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12397cec jmp 0x12397d04 */
  goto L_12397d04;
L_12397cee:;
  /* 12397cee mov dword ptr [ebp - 8], 0x123c0650 */
  w32((uint32_t)(EBP + -0x8), (0x123c0650u));
  /* 12397cf5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397cf8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12397cfa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397cfd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12397d04:;
  /* 12397d04 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397d08 jne 0x12397d18 */
  if (!C.zf) goto L_12397d18;
  /* 12397d0a push 1 */
  push32((uint32_t)(0x1u));
  /* 12397d0c call 0x12398360 */
  push32(0x12397d11u); f_12398360();
  /* 12397d11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12397d16 jmp 0x12397d4c */
  goto L_12397d4c;
L_12397d18:;
  /* 12397d18 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397d1c je 0x12397d3d */
  if (C.zf) goto L_12397d3d;
  /* 12397d1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397d21 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12397d27 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397d29 call 0x12398360 */
  push32(0x12397d2eu); f_12398360();
  /* 12397d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397d31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397d34 push edx */
  push32((uint32_t)(EDX));
  /* 12397d35 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12397d38u);
  /* 12397d38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397d3b jmp 0x12397d47 */
  goto L_12397d47;
L_12397d3d:;
  /* 12397d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 12397d3f call 0x12398360 */
  push32(0x12397d44u); f_12398360();
  /* 12397d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397d47:;
  /* 12397d47 mov eax, 1 */
  EAX = (0x1u);
L_12397d4c:;
  /* 12397d4c mov esp, ebp */
  ESP = (EBP);
  /* 12397d4e pop ebp */
  EBP = (pop32());
  /* 12397d4f ret 4 */
  ESPCHK(0x12397cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007d60 @ 0x12397d60 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12397d60(void) {
  FTRACE(0x12397d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12397d61 mov ebp, esp */
  EBP = (ESP);
  /* 12397d63 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397d66 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12397d6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397d70 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12397d73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12397d76 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12397d79 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12397d7c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397d80 ja 0x12397e2e */
  if ((!C.cf&&!C.zf)) goto L_12397e2e;
  /* 12397d86 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12397d89 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12397d8b mov dl, byte ptr [eax + 0x12397f82] */
  DL = (r8((uint32_t)(EAX + 0x12397f82)));
  /* 12397d91 jmp dword ptr [edx*4 + 0x12397f6a] */
  switch (EDX) {
    case 0: goto L_12397d98;
    case 1: goto L_12397e03;
    case 2: goto L_12397de9;
    case 3: goto L_12397db5;
    case 4: goto L_12397dcf;
    case 5: goto L_12397e2e;
    default: x86_unimpl("switch@0x12397d91 out of table"); return;
  }
L_12397d98:;
  /* 12397d98 mov dword ptr [ebp - 0x18], 0x123c064c */
  w32((uint32_t)(EBP + -0x18), (0x123c064cu));
  /* 12397d9f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397da2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397da4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12397da7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397daa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397dad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397db0 jmp 0x12397e36 */
  goto L_12397e36;
L_12397db5:;
  /* 12397db5 mov dword ptr [ebp - 0x18], 0x123c0650 */
  w32((uint32_t)(EBP + -0x18), (0x123c0650u));
  /* 12397dbc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397dbf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397dc1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12397dc4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397dc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397dca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397dcd jmp 0x12397e36 */
  goto L_12397e36;
L_12397dcf:;
  /* 12397dcf mov dword ptr [ebp - 0x18], 0x123c0654 */
  w32((uint32_t)(EBP + -0x18), (0x123c0654u));
  /* 12397dd6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397dd9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397ddb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12397dde mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397de1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397de4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397de7 jmp 0x12397e36 */
  goto L_12397e36;
L_12397de9:;
  /* 12397de9 mov dword ptr [ebp - 0x18], 0x123c0658 */
  w32((uint32_t)(EBP + -0x18), (0x123c0658u));
  /* 12397df0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397df3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397df5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12397df8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12397dfb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397dfe mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12397e01 jmp 0x12397e36 */
  goto L_12397e36;
L_12397e03:;
  /* 12397e03 call 0x12394300 */
  push32(0x12397e08u); f_12394300();
  /* 12397e08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12397e0b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397e0e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12397e11 push edx */
  push32((uint32_t)(EDX));
  /* 12397e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397e15 push eax */
  push32((uint32_t)(EAX));
  /* 12397e16 call 0x12397fa0 */
  push32(0x12397e1bu); f_12397fa0();
  /* 12397e1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397e1e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397e21 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12397e24 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397e27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12397e29 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12397e2c jmp 0x12397e36 */
  goto L_12397e36;
L_12397e2e:;
  /* 12397e2e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12397e31 jmp 0x12397f66 */
  goto L_12397f66;
L_12397e36:;
  /* 12397e36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e3a je 0x12397e46 */
  if (C.zf) goto L_12397e46;
  /* 12397e3c push 1 */
  push32((uint32_t)(0x1u));
  /* 12397e3e call 0x123982c0 */
  push32(0x12397e43u); f_123982c0();
  /* 12397e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397e46:;
  /* 12397e46 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e4a jne 0x12397e63 */
  if (!C.zf) goto L_12397e63;
  /* 12397e4c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e50 je 0x12397e5c */
  if (C.zf) goto L_12397e5c;
  /* 12397e52 push 1 */
  push32((uint32_t)(0x1u));
  /* 12397e54 call 0x12398360 */
  push32(0x12397e59u); f_12398360();
  /* 12397e59 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397e5c:;
  /* 12397e5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12397e5e jmp 0x12397f66 */
  goto L_12397f66;
L_12397e63:;
  /* 12397e63 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e67 jne 0x12397e80 */
  if (!C.zf) goto L_12397e80;
  /* 12397e69 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e6d je 0x12397e79 */
  if (C.zf) goto L_12397e79;
  /* 12397e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12397e71 call 0x12398360 */
  push32(0x12397e76u); f_12398360();
  /* 12397e76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397e79:;
  /* 12397e79 push 3 */
  push32((uint32_t)(0x3u));
  /* 12397e7b call 0x12394080 */
  push32(0x12397e80u); f_12394080();
L_12397e80:;
  /* 12397e80 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e84 je 0x12397e92 */
  if (C.zf) goto L_12397e92;
  /* 12397e86 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e8a je 0x12397e92 */
  if (C.zf) goto L_12397e92;
  /* 12397e8c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397e90 jne 0x12397ebe */
  if (!C.zf) goto L_12397ebe;
L_12397e92:;
  /* 12397e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397e95 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12397e98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12397e9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397e9e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12397ea5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ea9 jne 0x12397ebe */
  if (!C.zf) goto L_12397ebe;
  /* 12397eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397eae mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12397eb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12397eb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397eb7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12397ebe:;
  /* 12397ebe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ec2 jne 0x12397f00 */
  if (!C.zf) goto L_12397f00;
  /* 12397ec4 mov eax, dword ptr [0x123bec78] */
  EAX = (r32((uint32_t)(0x123bec78)));
  /* 12397ec9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12397ecc jmp 0x12397ed7 */
  goto L_12397ed7;
L_12397ece:;
  /* 12397ece mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397ed1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397ed4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12397ed7:;
  /* 12397ed7 mov edx, dword ptr [0x123bec78] */
  EDX = (r32((uint32_t)(0x123bec78)));
  /* 12397edd add edx, dword ptr [0x123bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397ee3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397ee6 jge 0x12397efe */
  if ((C.sf==C.of)) goto L_12397efe;
  /* 12397ee8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12397eeb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12397eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397ef1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12397ef4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12397efc jmp 0x12397ece */
  goto L_12397ece;
L_12397efe:;
  /* 12397efe jmp 0x12397f09 */
  goto L_12397f09;
L_12397f00:;
  /* 12397f00 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12397f03 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12397f09:;
  /* 12397f09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f0d je 0x12397f19 */
  if (C.zf) goto L_12397f19;
  /* 12397f0f push 1 */
  push32((uint32_t)(0x1u));
  /* 12397f11 call 0x12398360 */
  push32(0x12397f16u); f_12398360();
  /* 12397f16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397f19:;
  /* 12397f19 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f1d jne 0x12397f30 */
  if (!C.zf) goto L_12397f30;
  /* 12397f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397f22 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12397f25 push edx */
  push32((uint32_t)(EDX));
  /* 12397f26 push 8 */
  push32((uint32_t)(0x8u));
  /* 12397f28 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12397f2bu);
  /* 12397f2b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12397f2e jmp 0x12397f3a */
  goto L_12397f3a;
L_12397f30:;
  /* 12397f30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12397f33 push eax */
  push32((uint32_t)(EAX));
  /* 12397f34 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12397f37u);
  /* 12397f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12397f3a:;
  /* 12397f3a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f3e je 0x12397f4c */
  if (C.zf) goto L_12397f4c;
  /* 12397f40 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f44 je 0x12397f4c */
  if (C.zf) goto L_12397f4c;
  /* 12397f46 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f4a jne 0x12397f64 */
  if (!C.zf) goto L_12397f64;
L_12397f4c:;
  /* 12397f4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397f4f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12397f52 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12397f55 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397f59 jne 0x12397f64 */
  if (!C.zf) goto L_12397f64;
  /* 12397f5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397f5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12397f61 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12397f64:;
  /* 12397f64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12397f66:;
  /* 12397f66 mov esp, ebp */
  ESP = (EBP);
  /* 12397f68 pop ebp */
  EBP = (pop32());
  /* 12397f69 ret  */
  ESPCHK(0x12397d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x12397fa0 (91 bytes, 35 insns) */
void f_12397fa0(void) {
  FTRACE(0x12397fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12397fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12397fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12397fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12397fa4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397fa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12397faa:;
  /* 12397faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397fad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12397fb0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397fb3 je 0x12397fd3 */
  if (C.zf) goto L_12397fd3;
  /* 12397fb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397fb8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397fbb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12397fbe mov ecx, dword ptr [0x123bec84] */
  ECX = (r32((uint32_t)(0x123bec84)));
  /* 12397fc4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12397fc7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397fca add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397fcc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397fcf jae 0x12397fd3 */
  if (!C.cf) goto L_12397fd3;
  /* 12397fd1 jmp 0x12397faa */
  goto L_12397faa;
L_12397fd3:;
  /* 12397fd3 mov eax, dword ptr [0x123bec84] */
  EAX = (r32((uint32_t)(0x123bec84)));
  /* 12397fd8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12397fdb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12397fde add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12397fe0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397fe3 jae 0x12397ff5 */
  if (!C.cf) goto L_12397ff5;
  /* 12397fe5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397fe8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12397feb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12397fee jne 0x12397ff5 */
  if (!C.zf) goto L_12397ff5;
  /* 12397ff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12397ff3 jmp 0x12397ff7 */
  goto L_12397ff7;
L_12397ff5:;
  /* 12397ff5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12397ff7:;
  /* 12397ff7 mov esp, ebp */
  ESP = (EBP);
  /* 12397ff9 pop ebp */
  EBP = (pop32());
  /* 12397ffa ret  */
  ESPCHK(0x12397fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008000 @ 0x12398000 (13 bytes, 6 insns) */
void f_12398000(void) {
  FTRACE(0x12398000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398000 push ebp */
  push32((uint32_t)(EBP));
  /* 12398001 mov ebp, esp */
  EBP = (ESP);
  /* 12398003 call 0x12394300 */
  push32(0x12398008u); f_12394300();
  /* 12398008 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239800b pop ebp */
  EBP = (pop32());
  /* 1239800c ret  */
  ESPCHK(0x12398000u, _esp0);
  ESP += 4; return;
}

/* FUN_10008010 @ 0x12398010 (13 bytes, 6 insns) */
void f_12398010(void) {
  FTRACE(0x12398010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398010 push ebp */
  push32((uint32_t)(EBP));
  /* 12398011 mov ebp, esp */
  EBP = (ESP);
  /* 12398013 call 0x12394300 */
  push32(0x12398018u); f_12394300();
  /* 12398018 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239801b pop ebp */
  EBP = (pop32());
  /* 1239801c ret  */
  ESPCHK(0x12398010u, _esp0);
  ESP += 4; return;
}

/* FUN_10008020 @ 0x12398020 (187 bytes, 54 insns) */
void f_12398020(void) {
  FTRACE(0x12398020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398020 push ebp */
  push32((uint32_t)(EBP));
  /* 12398021 mov ebp, esp */
  EBP = (ESP);
  /* 12398023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398026 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239802d cmp dword ptr [0x123c0660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398034 jne 0x12398093 */
  if (!C.zf) goto L_12398093;
  /* 12398036 push 0x123bb478 */
  push32((uint32_t)(0x123bb478u));
  /* 1239803b call dword ptr [0x123c32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e8))), 0x12398041u);
  /* 12398041 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12398044 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398048 je 0x12398067 */
  if (C.zf) goto L_12398067;
  /* 1239804a push 0x123bc07c */
  push32((uint32_t)(0x123bc07cu));
  /* 1239804f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398052 push eax */
  push32((uint32_t)(EAX));
  /* 12398053 call dword ptr [0x123c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e4))), 0x12398059u);
  /* 12398059 mov dword ptr [0x123c0660], eax */
  w32((uint32_t)(0x123c0660), (EAX));
  /* 1239805e cmp dword ptr [0x123c0660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398065 jne 0x1239806b */
  if (!C.zf) goto L_1239806b;
L_12398067:;
  /* 12398067 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398069 jmp 0x123980d7 */
  goto L_123980d7;
L_1239806b:;
  /* 1239806b push 0x123bc06c */
  push32((uint32_t)(0x123bc06cu));
  /* 12398070 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398073 push ecx */
  push32((uint32_t)(ECX));
  /* 12398074 call dword ptr [0x123c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e4))), 0x1239807au);
  /* 1239807a mov dword ptr [0x123c0664], eax */
  w32((uint32_t)(0x123c0664), (EAX));
  /* 1239807f push 0x123bc058 */
  push32((uint32_t)(0x123bc058u));
  /* 12398084 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398087 push edx */
  push32((uint32_t)(EDX));
  /* 12398088 call dword ptr [0x123c32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32e4))), 0x1239808eu);
  /* 1239808e mov dword ptr [0x123c0668], eax */
  w32((uint32_t)(0x123c0668), (EAX));
L_12398093:;
  /* 12398093 cmp dword ptr [0x123c0664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239809a je 0x123980a5 */
  if (C.zf) goto L_123980a5;
  /* 1239809c call dword ptr [0x123c0664] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0664))), 0x123980a2u);
  /* 123980a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123980a5:;
  /* 123980a5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123980a9 je 0x123980c1 */
  if (C.zf) goto L_123980c1;
  /* 123980ab cmp dword ptr [0x123c0668], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c0668))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123980b2 je 0x123980c1 */
  if (C.zf) goto L_123980c1;
  /* 123980b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123980b7 push eax */
  push32((uint32_t)(EAX));
  /* 123980b8 call dword ptr [0x123c0668] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0668))), 0x123980beu);
  /* 123980be mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_123980c1:;
  /* 123980c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 123980c4 push ecx */
  push32((uint32_t)(ECX));
  /* 123980c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123980c8 push edx */
  push32((uint32_t)(EDX));
  /* 123980c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123980cc push eax */
  push32((uint32_t)(EAX));
  /* 123980cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 123980d0 push ecx */
  push32((uint32_t)(ECX));
  /* 123980d1 call dword ptr [0x123c0660] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c0660))), 0x123980d7u);
L_123980d7:;
  /* 123980d7 mov esp, ebp */
  ESP = (EBP);
  /* 123980d9 pop ebp */
  EBP = (pop32());
  /* 123980da ret  */
  ESPCHK(0x12398020u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x123980e0 (254 bytes, 109 insns) */
void f_123980e0(void) {
  FTRACE(0x123980e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123980e0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 123980e4 push edi */
  push32((uint32_t)(EDI));
  /* 123980e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 123980e7 je 0x12398163 */
  if (C.zf) goto L_12398163;
  /* 123980e9 push esi */
  push32((uint32_t)(ESI));
  /* 123980ea push ebx */
  push32((uint32_t)(EBX));
  /* 123980eb mov ebx, ecx */
  EBX = (ECX);
  /* 123980ed mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 123980f1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 123980f7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 123980fb jne 0x12398104 */
  if (!C.zf) goto L_12398104;
  /* 123980fd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12398100 jne 0x12398171 */
  if (!C.zf) goto L_12398171;
  /* 12398102 jmp 0x12398125 */
  goto L_12398125;
L_12398104:;
  /* 12398104 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12398106 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12398107 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12398109 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1239810a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1239810b je 0x12398132 */
  if (C.zf) goto L_12398132;
  /* 1239810d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1239810f je 0x1239813a */
  if (C.zf) goto L_1239813a;
  /* 12398111 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12398117 jne 0x12398104 */
  if (!C.zf) goto L_12398104;
  /* 12398119 mov ebx, ecx */
  EBX = (ECX);
  /* 1239811b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239811e jne 0x12398171 */
  if (!C.zf) goto L_12398171;
L_12398120:;
  /* 12398120 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12398123 je 0x12398132 */
  if (C.zf) goto L_12398132;
L_12398125:;
  /* 12398125 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12398127 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12398128 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239812a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1239812b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1239812d je 0x1239815e */
  if (C.zf) goto L_1239815e;
  /* 1239812f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12398130 jne 0x12398125 */
  if (!C.zf) goto L_12398125;
L_12398132:;
  /* 12398132 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12398136 pop ebx */
  EBX = (pop32());
  /* 12398137 pop esi */
  ESI = (pop32());
  /* 12398138 pop edi */
  EDI = (pop32());
  /* 12398139 ret  */
  ESPCHK(0x123980e0u, _esp0);
  ESP += 4; return;
L_1239813a:;
  /* 1239813a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12398140 je 0x12398154 */
  if (C.zf) goto L_12398154;
L_12398142:;
  /* 12398142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12398144 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12398145 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12398146 je 0x123981d6 */
  if (C.zf) goto L_123981d6;
  /* 1239814c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12398152 jne 0x12398142 */
  if (!C.zf) goto L_12398142;
L_12398154:;
  /* 12398154 mov ebx, ecx */
  EBX = (ECX);
  /* 12398156 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12398159 jne 0x123981c7 */
  if (!C.zf) goto L_123981c7;
L_1239815b:;
  /* 1239815b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1239815d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1239815e:;
  /* 1239815e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1239815f jne 0x1239815b */
  if (!C.zf) goto L_1239815b;
  /* 12398161 pop ebx */
  EBX = (pop32());
  /* 12398162 pop esi */
  ESI = (pop32());
L_12398163:;
  /* 12398163 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12398167 pop edi */
  EDI = (pop32());
  /* 12398168 ret  */
  ESPCHK(0x123980e0u, _esp0);
  ESP += 4; return;
L_12398169:;
  /* 12398169 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1239816b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1239816e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1239816f je 0x12398120 */
  if (C.zf) goto L_12398120;
L_12398171:;
  /* 12398171 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12398176 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12398178 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239817a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239817d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1239817f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12398181 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12398184 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12398189 je 0x12398169 */
  if (C.zf) goto L_12398169;
  /* 1239818b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1239818d je 0x123981bb */
  if (C.zf) goto L_123981bb;
  /* 1239818f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12398191 je 0x123981b1 */
  if (C.zf) goto L_123981b1;
  /* 12398193 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12398199 je 0x123981a7 */
  if (C.zf) goto L_123981a7;
  /* 1239819b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 123981a1 jne 0x12398169 */
  if (!C.zf) goto L_12398169;
  /* 123981a3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123981a5 jmp 0x123981bf */
  goto L_123981bf;
L_123981a7:;
  /* 123981a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 123981ad mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123981af jmp 0x123981bf */
  goto L_123981bf;
L_123981b1:;
  /* 123981b1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 123981b7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 123981b9 jmp 0x123981bf */
  goto L_123981bf;
L_123981bb:;
  /* 123981bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 123981bd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_123981bf:;
  /* 123981bf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123981c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123981c4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123981c5 je 0x123981d1 */
  if (C.zf) goto L_123981d1;
L_123981c7:;
  /* 123981c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_123981c9:;
  /* 123981c9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 123981cb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 123981ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 123981cf jne 0x123981c9 */
  if (!C.zf) goto L_123981c9;
L_123981d1:;
  /* 123981d1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 123981d4 jne 0x1239815b */
  if (!C.zf) goto L_1239815b;
L_123981d6:;
  /* 123981d6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 123981da pop ebx */
  EBX = (pop32());
  /* 123981db pop esi */
  ESI = (pop32());
  /* 123981dc pop edi */
  EDI = (pop32());
  /* 123981dd ret  */
  ESPCHK(0x123980e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x123981e0 (55 bytes, 16 insns) */
void f_123981e0(void) {
  FTRACE(0x123981e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123981e0 push ebp */
  push32((uint32_t)(EBP));
  /* 123981e1 mov ebp, esp */
  EBP = (ESP);
  /* 123981e3 mov eax, dword ptr [0x123beb84] */
  EAX = (r32((uint32_t)(0x123beb84)));
  /* 123981e8 push eax */
  push32((uint32_t)(EAX));
  /* 123981e9 call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x123981efu);
  /* 123981ef mov ecx, dword ptr [0x123beb74] */
  ECX = (r32((uint32_t)(0x123beb74)));
  /* 123981f5 push ecx */
  push32((uint32_t)(ECX));
  /* 123981f6 call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x123981fcu);
  /* 123981fc mov edx, dword ptr [0x123beb64] */
  EDX = (r32((uint32_t)(0x123beb64)));
  /* 12398202 push edx */
  push32((uint32_t)(EDX));
  /* 12398203 call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x12398209u);
  /* 12398209 mov eax, dword ptr [0x123beb44] */
  EAX = (r32((uint32_t)(0x123beb44)));
  /* 1239820e push eax */
  push32((uint32_t)(EAX));
  /* 1239820f call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x12398215u);
  /* 12398215 pop ebp */
  EBP = (pop32());
  /* 12398216 ret  */
  ESPCHK(0x123981e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x12398220 (159 bytes, 47 insns) */
void f_12398220(void) {
  FTRACE(0x12398220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398220 push ebp */
  push32((uint32_t)(EBP));
  /* 12398221 mov ebp, esp */
  EBP = (ESP);
  /* 12398223 push ecx */
  push32((uint32_t)(ECX));
  /* 12398224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1239822b jmp 0x12398236 */
  goto L_12398236;
L_1239822d:;
  /* 1239822d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398230 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398233 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12398236:;
  /* 12398236 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239823a jge 0x12398289 */
  if ((C.sf==C.of)) goto L_12398289;
  /* 1239823c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239823f cmp dword ptr [ecx*4 + 0x123beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x123beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398247 je 0x12398287 */
  if (C.zf) goto L_12398287;
  /* 12398249 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239824d je 0x12398287 */
  if (C.zf) goto L_12398287;
  /* 1239824f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398253 je 0x12398287 */
  if (C.zf) goto L_12398287;
  /* 12398255 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398259 je 0x12398287 */
  if (C.zf) goto L_12398287;
  /* 1239825b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239825f je 0x12398287 */
  if (C.zf) goto L_12398287;
  /* 12398261 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398264 mov eax, dword ptr [edx*4 + 0x123beb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x123beb40)));
  /* 1239826b push eax */
  push32((uint32_t)(EAX));
  /* 1239826c call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x12398272u);
  /* 12398272 push 2 */
  push32((uint32_t)(0x2u));
  /* 12398274 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398277 mov edx, dword ptr [ecx*4 + 0x123beb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x123beb40)));
  /* 1239827e push edx */
  push32((uint32_t)(EDX));
  /* 1239827f call 0x12395350 */
  push32(0x12398284u); f_12395350();
  /* 12398284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12398287:;
  /* 12398287 jmp 0x1239822d */
  goto L_1239822d;
L_12398289:;
  /* 12398289 mov eax, dword ptr [0x123beb64] */
  EAX = (r32((uint32_t)(0x123beb64)));
  /* 1239828e push eax */
  push32((uint32_t)(EAX));
  /* 1239828f call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x12398295u);
  /* 12398295 mov ecx, dword ptr [0x123beb74] */
  ECX = (r32((uint32_t)(0x123beb74)));
  /* 1239829b push ecx */
  push32((uint32_t)(ECX));
  /* 1239829c call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x123982a2u);
  /* 123982a2 mov edx, dword ptr [0x123beb84] */
  EDX = (r32((uint32_t)(0x123beb84)));
  /* 123982a8 push edx */
  push32((uint32_t)(EDX));
  /* 123982a9 call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x123982afu);
  /* 123982af mov eax, dword ptr [0x123beb44] */
  EAX = (r32((uint32_t)(0x123beb44)));
  /* 123982b4 push eax */
  push32((uint32_t)(EAX));
  /* 123982b5 call dword ptr [0x123c332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c332c))), 0x123982bbu);
  /* 123982bb mov esp, ebp */
  ESP = (EBP);
  /* 123982bd pop ebp */
  EBP = (pop32());
  /* 123982be ret  */
  ESPCHK(0x12398220u, _esp0);
  ESP += 4; return;
}

/* FUN_100082c0 @ 0x123982c0 (151 bytes, 46 insns) */
void f_123982c0(void) {
  FTRACE(0x123982c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123982c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123982c1 mov ebp, esp */
  EBP = (ESP);
  /* 123982c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123982c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123982c7 cmp dword ptr [eax*4 + 0x123beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x123beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123982cf jne 0x12398342 */
  if (!C.zf) goto L_12398342;
  /* 123982d1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 123982d6 push 0x123bc088 */
  push32((uint32_t)(0x123bc088u));
  /* 123982db push 2 */
  push32((uint32_t)(0x2u));
  /* 123982dd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 123982df call 0x123948c0 */
  push32(0x123982e4u); f_123948c0();
  /* 123982e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123982e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123982ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123982ee jne 0x123982fa */
  if (!C.zf) goto L_123982fa;
  /* 123982f0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123982f2 call 0x12393830 */
  push32(0x123982f7u); f_12393830();
  /* 123982f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123982fa:;
  /* 123982fa push 0x11 */
  push32((uint32_t)(0x11u));
  /* 123982fc call 0x123982c0 */
  push32(0x12398301u); f_123982c0();
  /* 12398301 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398304 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398307 cmp dword ptr [ecx*4 + 0x123beb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x123beb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239830f jne 0x1239832a */
  if (!C.zf) goto L_1239832a;
  /* 12398311 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398314 push edx */
  push32((uint32_t)(EDX));
  /* 12398315 call dword ptr [0x123c3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3364))), 0x1239831bu);
  /* 1239831b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239831e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398321 mov dword ptr [eax*4 + 0x123beb40], ecx */
  w32((uint32_t)(EAX*4 + 0x123beb40), (ECX));
  /* 12398328 jmp 0x12398338 */
  goto L_12398338;
L_1239832a:;
  /* 1239832a push 2 */
  push32((uint32_t)(0x2u));
  /* 1239832c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239832f push edx */
  push32((uint32_t)(EDX));
  /* 12398330 call 0x12395350 */
  push32(0x12398335u); f_12395350();
  /* 12398335 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12398338:;
  /* 12398338 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1239833a call 0x12398360 */
  push32(0x1239833fu); f_12398360();
  /* 1239833f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12398342:;
  /* 12398342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398345 mov ecx, dword ptr [eax*4 + 0x123beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123beb40)));
  /* 1239834c push ecx */
  push32((uint32_t)(ECX));
  /* 1239834d call dword ptr [0x123c3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3368))), 0x12398353u);
  /* 12398353 mov esp, ebp */
  ESP = (EBP);
  /* 12398355 pop ebp */
  EBP = (pop32());
  /* 12398356 ret  */
  ESPCHK(0x123982c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x12398360 (22 bytes, 8 insns) */
void f_12398360(void) {
  FTRACE(0x12398360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398360 push ebp */
  push32((uint32_t)(EBP));
  /* 12398361 mov ebp, esp */
  EBP = (ESP);
  /* 12398363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398366 mov ecx, dword ptr [eax*4 + 0x123beb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x123beb40)));
  /* 1239836d push ecx */
  push32((uint32_t)(ECX));
  /* 1239836e call dword ptr [0x123c336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c336c))), 0x12398374u);
  /* 12398374 pop ebp */
  EBP = (pop32());
  /* 12398375 ret  */
  ESPCHK(0x12398360u, _esp0);
  ESP += 4; return;
}

/* FUN_10008380 @ 0x12398380 (26 bytes, 10 insns) */
void f_12398380(void) {
  FTRACE(0x12398380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398380 push ebp */
  push32((uint32_t)(EBP));
  /* 12398381 mov ebp, esp */
  EBP = (ESP);
  /* 12398383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398386 push eax */
  push32((uint32_t)(EAX));
  /* 12398387 push 0 */
  push32((uint32_t)(0x0u));
  /* 12398389 call dword ptr [0x123c3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3370))), 0x1239838fu);
  /* 1239838f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12398394 call dword ptr [0x123c32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c32f4))), 0x1239839au);
  /* 1239839a pop ebp */
  EBP = (pop32());
  /* 1239839b ret  */
  ESPCHK(0x12398380u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x123983a0 (446 bytes, 130 insns) */
void f_123983a0(void) {
  FTRACE(0x123983a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123983a0 push ebp */
  push32((uint32_t)(EBP));
  /* 123983a1 mov ebp, esp */
  EBP = (ESP);
  /* 123983a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 123983a6 call 0x12394300 */
  push32(0x123983abu); f_12394300();
  /* 123983ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123983ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123983b1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 123983b4 push ecx */
  push32((uint32_t)(ECX));
  /* 123983b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123983b8 push edx */
  push32((uint32_t)(EDX));
  /* 123983b9 call 0x12398560 */
  push32(0x123983beu); f_12398560();
  /* 123983be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123983c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 123983c4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123983c8 je 0x123983d3 */
  if (C.zf) goto L_123983d3;
  /* 123983ca mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123983cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123983d1 jne 0x123983e2 */
  if (!C.zf) goto L_123983e2;
L_123983d3:;
  /* 123983d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123983d6 push ecx */
  push32((uint32_t)(ECX));
  /* 123983d7 call dword ptr [0x123c3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3374))), 0x123983ddu);
  /* 123983dd jmp 0x1239855a */
  goto L_1239855a;
L_123983e2:;
  /* 123983e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123983e5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123983e9 jne 0x123983ff */
  if (!C.zf) goto L_123983ff;
  /* 123983eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123983ee mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 123983f5 mov eax, 1 */
  EAX = (0x1u);
  /* 123983fa jmp 0x1239855a */
  goto L_1239855a;
L_123983ff:;
  /* 123983ff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12398402 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398406 jne 0x12398410 */
  if (!C.zf) goto L_12398410;
  /* 12398408 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1239840b jmp 0x1239855a */
  goto L_1239855a;
L_12398410:;
  /* 12398410 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12398413 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12398416 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12398419 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239841c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1239841f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12398422 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398425 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398428 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1239842b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239842e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398432 jne 0x12398537 */
  if (!C.zf) goto L_12398537;
  /* 12398438 mov eax, dword ptr [0x123bec78] */
  EAX = (r32((uint32_t)(0x123bec78)));
  /* 1239843d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12398440 jmp 0x1239844b */
  goto L_1239844b;
L_12398442:;
  /* 12398442 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12398445 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398448 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1239844b:;
  /* 1239844b mov edx, dword ptr [0x123bec78] */
  EDX = (r32((uint32_t)(0x123bec78)));
  /* 12398451 add edx, dword ptr [0x123bec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x123bec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398457 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239845a jge 0x12398472 */
  if ((C.sf==C.of)) goto L_12398472;
  /* 1239845c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239845f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12398462 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398465 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12398468 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12398470 jmp 0x12398442 */
  goto L_12398442;
L_12398472:;
  /* 12398472 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398475 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12398478 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1239847b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239847e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398484 jne 0x12398495 */
  if (!C.zf) goto L_12398495;
  /* 12398486 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398489 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12398490 jmp 0x1239851d */
  goto L_1239851d;
L_12398495:;
  /* 12398495 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12398498 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239849e jne 0x123984ac */
  if (!C.zf) goto L_123984ac;
  /* 123984a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123984a3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 123984aa jmp 0x1239851d */
  goto L_1239851d;
L_123984ac:;
  /* 123984ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123984af cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123984b5 jne 0x123984c3 */
  if (!C.zf) goto L_123984c3;
  /* 123984b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123984ba mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 123984c1 jmp 0x1239851d */
  goto L_1239851d;
L_123984c3:;
  /* 123984c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 123984c6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123984cc jne 0x123984da */
  if (!C.zf) goto L_123984da;
  /* 123984ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 123984d1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 123984d8 jmp 0x1239851d */
  goto L_1239851d;
L_123984da:;
  /* 123984da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 123984dd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123984e3 jne 0x123984f1 */
  if (!C.zf) goto L_123984f1;
  /* 123984e5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 123984e8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 123984ef jmp 0x1239851d */
  goto L_1239851d;
L_123984f1:;
  /* 123984f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 123984f4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123984fa jne 0x12398508 */
  if (!C.zf) goto L_12398508;
  /* 123984fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123984ff mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12398506 jmp 0x1239851d */
  goto L_1239851d;
L_12398508:;
  /* 12398508 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239850b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398511 jne 0x1239851d */
  if (!C.zf) goto L_1239851d;
  /* 12398513 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398516 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1239851d:;
  /* 1239851d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398520 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12398523 push edx */
  push32((uint32_t)(EDX));
  /* 12398524 push 8 */
  push32((uint32_t)(0x8u));
  /* 12398526 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12398529u);
  /* 12398529 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239852c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1239852f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398532 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12398535 jmp 0x1239854e */
  goto L_1239854e;
L_12398537:;
  /* 12398537 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239853a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12398541 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12398544 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12398547 push ecx */
  push32((uint32_t)(ECX));
  /* 12398548 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1239854bu);
  /* 1239854b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1239854e:;
  /* 1239854e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398551 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12398554 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12398557 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1239855a:;
  /* 1239855a mov esp, ebp */
  ESP = (EBP);
  /* 1239855c pop ebp */
  EBP = (pop32());
  /* 1239855d ret  */
  ESPCHK(0x123983a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x12398560 (89 bytes, 35 insns) */
void f_12398560(void) {
  FTRACE(0x12398560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398560 push ebp */
  push32((uint32_t)(EBP));
  /* 12398561 mov ebp, esp */
  EBP = (ESP);
  /* 12398563 push ecx */
  push32((uint32_t)(ECX));
  /* 12398564 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398567 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1239856a:;
  /* 1239856a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239856d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1239856f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398572 je 0x12398592 */
  if (C.zf) goto L_12398592;
  /* 12398574 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398577 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239857a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239857d mov ecx, dword ptr [0x123bec84] */
  ECX = (r32((uint32_t)(0x123bec84)));
  /* 12398583 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12398586 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398589 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239858b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239858e jae 0x12398592 */
  if (!C.cf) goto L_12398592;
  /* 12398590 jmp 0x1239856a */
  goto L_1239856a;
L_12398592:;
  /* 12398592 mov eax, dword ptr [0x123bec84] */
  EAX = (r32((uint32_t)(0x123bec84)));
  /* 12398597 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1239859a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239859d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239859f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123985a2 jae 0x123985ae */
  if (!C.cf) goto L_123985ae;
  /* 123985a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123985a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 123985a9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123985ac je 0x123985b2 */
  if (C.zf) goto L_123985b2;
L_123985ae:;
  /* 123985ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123985b0 jmp 0x123985b5 */
  goto L_123985b5;
L_123985b2:;
  /* 123985b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_123985b5:;
  /* 123985b5 mov esp, ebp */
  ESP = (EBP);
  /* 123985b7 pop ebp */
  EBP = (pop32());
  /* 123985b8 ret  */
  ESPCHK(0x12398560u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x123985c0 (48 bytes, 17 insns) */
void f_123985c0(void) {
  FTRACE(0x123985c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123985c0 push ebp */
  push32((uint32_t)(EBP));
  /* 123985c1 mov ebp, esp */
  EBP = (ESP);
  /* 123985c3 push ecx */
  push32((uint32_t)(ECX));
  /* 123985c4 push 9 */
  push32((uint32_t)(0x9u));
  /* 123985c6 call 0x123982c0 */
  push32(0x123985cbu); f_123982c0();
  /* 123985cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123985ce mov eax, dword ptr [0x123c06d4] */
  EAX = (r32((uint32_t)(0x123c06d4)));
  /* 123985d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123985d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123985d9 mov dword ptr [0x123c06d4], ecx */
  w32((uint32_t)(0x123c06d4), (ECX));
  /* 123985df push 9 */
  push32((uint32_t)(0x9u));
  /* 123985e1 call 0x12398360 */
  push32(0x123985e6u); f_12398360();
  /* 123985e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123985e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123985ec mov esp, ebp */
  ESP = (EBP);
  /* 123985ee pop ebp */
  EBP = (pop32());
  /* 123985ef ret  */
  ESPCHK(0x123985c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x123985f0 (10 bytes, 5 insns) */
void f_123985f0(void) {
  FTRACE(0x123985f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123985f0 push ebp */
  push32((uint32_t)(EBP));
  /* 123985f1 mov ebp, esp */
  EBP = (ESP);
  /* 123985f3 mov eax, dword ptr [0x123c06d4] */
  EAX = (r32((uint32_t)(0x123c06d4)));
  /* 123985f8 pop ebp */
  EBP = (pop32());
  /* 123985f9 ret  */
  ESPCHK(0x123985f0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12398600 (45 bytes, 19 insns) */
void f_12398600(void) {
  FTRACE(0x12398600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398600 push ebp */
  push32((uint32_t)(EBP));
  /* 12398601 mov ebp, esp */
  EBP = (ESP);
  /* 12398603 push ecx */
  push32((uint32_t)(ECX));
  /* 12398604 mov eax, dword ptr [0x123c06d4] */
  EAX = (r32((uint32_t)(0x123c06d4)));
  /* 12398609 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1239860c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398610 je 0x12398620 */
  if (C.zf) goto L_12398620;
  /* 12398612 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398615 push ecx */
  push32((uint32_t)(ECX));
  /* 12398616 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12398619u);
  /* 12398619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239861c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1239861e jne 0x12398624 */
  if (!C.zf) goto L_12398624;
L_12398620:;
  /* 12398620 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398622 jmp 0x12398629 */
  goto L_12398629;
L_12398624:;
  /* 12398624 mov eax, 1 */
  EAX = (0x1u);
L_12398629:;
  /* 12398629 mov esp, ebp */
  ESP = (EBP);
  /* 1239862b pop ebp */
  EBP = (pop32());
  /* 1239862c ret  */
  ESPCHK(0x12398600u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12398630 (88 bytes, 40 insns) */
void f_12398630(void) {
  FTRACE(0x12398630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398630 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12398634 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12398638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1239863a je 0x12398683 */
  if (C.zf) goto L_12398683;
  /* 1239863c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239863e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12398642 push edi */
  push32((uint32_t)(EDI));
  /* 12398643 mov edi, ecx */
  EDI = (ECX);
  /* 12398645 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398648 jb 0x12398677 */
  if (C.cf) goto L_12398677;
  /* 1239864a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1239864c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1239864f je 0x12398659 */
  if (C.zf) goto L_12398659;
  /* 12398651 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12398653:;
  /* 12398653 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12398655 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12398656 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12398657 jne 0x12398653 */
  if (!C.zf) goto L_12398653;
L_12398659:;
  /* 12398659 mov ecx, eax */
  ECX = (EAX);
  /* 1239865b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1239865e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398660 mov ecx, eax */
  ECX = (EAX);
  /* 12398662 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12398665 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398667 mov ecx, edx */
  ECX = (EDX);
  /* 12398669 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1239866c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1239866f je 0x12398677 */
  if (C.zf) goto L_12398677;
  /* 12398671 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12398673 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12398675 je 0x1239867d */
  if (C.zf) goto L_1239867d;
L_12398677:;
  /* 12398677 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12398679 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1239867a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1239867b jne 0x12398677 */
  if (!C.zf) goto L_12398677;
L_1239867d:;
  /* 1239867d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12398681 pop edi */
  EDI = (pop32());
  /* 12398682 ret  */
  ESPCHK(0x12398630u, _esp0);
  ESP += 4; return;
L_12398683:;
  /* 12398683 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12398687 ret  */
  ESPCHK(0x12398630u, _esp0);
  ESP += 4; return;
}

/* FUN_10008690 @ 0x12398690 (23 bytes, 10 insns) */
void f_12398690(void) {
  FTRACE(0x12398690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398690 push ebp */
  push32((uint32_t)(EBP));
  /* 12398691 mov ebp, esp */
  EBP = (ESP);
  /* 12398693 mov eax, dword ptr [0x123c06d0] */
  EAX = (r32((uint32_t)(0x123c06d0)));
  /* 12398698 push eax */
  push32((uint32_t)(EAX));
  /* 12398699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239869c push ecx */
  push32((uint32_t)(ECX));
  /* 1239869d call 0x123986b0 */
  push32(0x123986a2u); f_123986b0();
  /* 123986a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123986a5 pop ebp */
  EBP = (pop32());
  /* 123986a6 ret  */
  ESPCHK(0x12398690u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x123986b0 (87 bytes, 34 insns) */
void f_123986b0(void) {
  FTRACE(0x123986b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 123986b0 push ebp */
  push32((uint32_t)(EBP));
  /* 123986b1 mov ebp, esp */
  EBP = (ESP);
  /* 123986b3 push ecx */
  push32((uint32_t)(ECX));
  /* 123986b4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123986b8 jbe 0x123986be */
  if ((C.cf||C.zf)) goto L_123986be;
  /* 123986ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123986bc jmp 0x12398703 */
  goto L_12398703;
L_123986be:;
  /* 123986be cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123986c2 ja 0x123986d5 */
  if ((!C.cf&&!C.zf)) goto L_123986d5;
  /* 123986c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123986c7 push eax */
  push32((uint32_t)(EAX));
  /* 123986c8 call 0x12398710 */
  push32(0x123986cdu); f_12398710();
  /* 123986cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123986d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 123986d3 jmp 0x123986dc */
  goto L_123986dc;
L_123986d5:;
  /* 123986d5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_123986dc:;
  /* 123986dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123986e0 jne 0x123986e8 */
  if (!C.zf) goto L_123986e8;
  /* 123986e2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123986e6 jne 0x123986ed */
  if (!C.zf) goto L_123986ed;
L_123986e8:;
  /* 123986e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123986eb jmp 0x12398703 */
  goto L_12398703;
L_123986ed:;
  /* 123986ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123986f0 push ecx */
  push32((uint32_t)(ECX));
  /* 123986f1 call 0x12398600 */
  push32(0x123986f6u); f_12398600();
  /* 123986f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123986f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123986fb jne 0x12398701 */
  if (!C.zf) goto L_12398701;
  /* 123986fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 123986ff jmp 0x12398703 */
  goto L_12398703;
L_12398701:;
  /* 12398701 jmp 0x123986be */
  goto L_123986be;
L_12398703:;
  /* 12398703 mov esp, ebp */
  ESP = (EBP);
  /* 12398705 pop ebp */
  EBP = (pop32());
  /* 12398706 ret  */
  ESPCHK(0x123986b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008710 @ 0x12398710 (109 bytes, 37 insns) */
void f_12398710(void) {
  FTRACE(0x12398710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398710 push ebp */
  push32((uint32_t)(EBP));
  /* 12398711 mov ebp, esp */
  EBP = (ESP);
  /* 12398713 push ecx */
  push32((uint32_t)(ECX));
  /* 12398714 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398717 cmp eax, dword ptr [0x123bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239871d ja 0x1239874d */
  if ((!C.cf&&!C.zf)) goto L_1239874d;
  /* 1239871f push 9 */
  push32((uint32_t)(0x9u));
  /* 12398721 call 0x123982c0 */
  push32(0x12398726u); f_123982c0();
  /* 12398726 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398729 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239872c push ecx */
  push32((uint32_t)(ECX));
  /* 1239872d call 0x12399250 */
  push32(0x12398732u); f_12399250();
  /* 12398732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398735 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12398738 push 9 */
  push32((uint32_t)(0x9u));
  /* 1239873a call 0x12398360 */
  push32(0x1239873fu); f_12398360();
  /* 1239873f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398742 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398746 je 0x1239874d */
  if (C.zf) goto L_1239874d;
  /* 12398748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1239874b jmp 0x12398779 */
  goto L_12398779;
L_1239874d:;
  /* 1239874d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398751 jne 0x1239875a */
  if (!C.zf) goto L_1239875a;
  /* 12398753 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1239875a:;
  /* 1239875a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239875d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398760 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12398763 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12398766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398769 push eax */
  push32((uint32_t)(EAX));
  /* 1239876a push 0 */
  push32((uint32_t)(0x0u));
  /* 1239876c mov ecx, dword ptr [0x123c1e8c] */
  ECX = (r32((uint32_t)(0x123c1e8c)));
  /* 12398772 push ecx */
  push32((uint32_t)(ECX));
  /* 12398773 call dword ptr [0x123c3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3378))), 0x12398779u);
L_12398779:;
  /* 12398779 mov esp, ebp */
  ESP = (EBP);
  /* 1239877b pop ebp */
  EBP = (pop32());
  /* 1239877c ret  */
  ESPCHK(0x12398710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008780 @ 0x12398780 (10 bytes, 5 insns) */
void f_12398780(void) {
  FTRACE(0x12398780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398780 push ebp */
  push32((uint32_t)(EBP));
  /* 12398781 mov ebp, esp */
  EBP = (ESP);
  /* 12398783 mov eax, 1 */
  EAX = (0x1u);
  /* 12398788 pop ebp */
  EBP = (pop32());
  /* 12398789 ret  */
  ESPCHK(0x12398780u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x12398790 (173 bytes, 59 insns) */
void f_12398790(void) {
  FTRACE(0x12398790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398790 push ebp */
  push32((uint32_t)(EBP));
  /* 12398791 mov ebp, esp */
  EBP = (ESP);
  /* 12398793 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398796 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239879a jbe 0x123987a3 */
  if ((C.cf||C.zf)) goto L_123987a3;
  /* 1239879c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1239879e jmp 0x12398839 */
  goto L_12398839;
L_123987a3:;
  /* 123987a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 123987a5 call 0x123982c0 */
  push32(0x123987aau); f_123982c0();
  /* 123987aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123987ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123987b0 push eax */
  push32((uint32_t)(EAX));
  /* 123987b1 call 0x12398bc0 */
  push32(0x123987b6u); f_12398bc0();
  /* 123987b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123987b9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123987bc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123987c0 je 0x12398801 */
  if (C.zf) goto L_12398801;
  /* 123987c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 123987c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123987cc cmp ecx, dword ptr [0x123bec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x123bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123987d2 ja 0x123987f2 */
  if ((!C.cf&&!C.zf)) goto L_123987f2;
  /* 123987d4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123987d7 push edx */
  push32((uint32_t)(EDX));
  /* 123987d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123987db push eax */
  push32((uint32_t)(EAX));
  /* 123987dc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 123987df push ecx */
  push32((uint32_t)(ECX));
  /* 123987e0 call 0x12399a90 */
  push32(0x123987e5u); f_12399a90();
  /* 123987e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123987e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123987ea je 0x123987f2 */
  if (C.zf) goto L_123987f2;
  /* 123987ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123987ef mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_123987f2:;
  /* 123987f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 123987f4 call 0x12398360 */
  push32(0x123987f9u); f_12398360();
  /* 123987f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123987fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 123987ff jmp 0x12398839 */
  goto L_12398839;
L_12398801:;
  /* 12398801 push 9 */
  push32((uint32_t)(0x9u));
  /* 12398803 call 0x12398360 */
  push32(0x12398808u); f_12398360();
  /* 12398808 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239880b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239880f jne 0x12398818 */
  if (!C.zf) goto L_12398818;
  /* 12398811 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12398818:;
  /* 12398818 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239881b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1239881e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12398820 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12398823 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398826 push ecx */
  push32((uint32_t)(ECX));
  /* 12398827 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239882a push edx */
  push32((uint32_t)(EDX));
  /* 1239882b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1239882d mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12398832 push eax */
  push32((uint32_t)(EAX));
  /* 12398833 call dword ptr [0x123c337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c337c))), 0x12398839u);
L_12398839:;
  /* 12398839 mov esp, ebp */
  ESP = (EBP);
  /* 1239883b pop ebp */
  EBP = (pop32());
  /* 1239883c ret  */
  ESPCHK(0x12398790u, _esp0);
  ESP += 4; return;
}

/* FUN_10008840 @ 0x12398840 (490 bytes, 165 insns) */
void f_12398840(void) {
  FTRACE(0x12398840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398840 push ebp */
  push32((uint32_t)(EBP));
  /* 12398841 mov ebp, esp */
  EBP = (ESP);
  /* 12398843 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398846 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239884a jne 0x1239885d */
  if (!C.zf) goto L_1239885d;
  /* 1239884c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1239884f push eax */
  push32((uint32_t)(EAX));
  /* 12398850 call 0x12398690 */
  push32(0x12398855u); f_12398690();
  /* 12398855 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398858 jmp 0x12398a26 */
  goto L_12398a26;
L_1239885d:;
  /* 1239885d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398861 jne 0x12398876 */
  if (!C.zf) goto L_12398876;
  /* 12398863 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398866 push ecx */
  push32((uint32_t)(ECX));
  /* 12398867 call 0x12398a30 */
  push32(0x1239886cu); f_12398a30();
  /* 1239886c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239886f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398871 jmp 0x12398a26 */
  goto L_12398a26;
L_12398876:;
  /* 12398876 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1239887d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398881 ja 0x123989f9 */
  if ((!C.cf&&!C.zf)) goto L_123989f9;
  /* 12398887 push 9 */
  push32((uint32_t)(0x9u));
  /* 12398889 call 0x123982c0 */
  push32(0x1239888eu); f_123982c0();
  /* 1239888e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398894 push edx */
  push32((uint32_t)(EDX));
  /* 12398895 call 0x12398bc0 */
  push32(0x1239889au); f_12398bc0();
  /* 1239889a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1239889d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 123988a0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123988a4 je 0x123989bc */
  if (C.zf) goto L_123989bc;
  /* 123988aa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123988ad cmp eax, dword ptr [0x123bec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123bec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123988b3 ja 0x12398930 */
  if ((!C.cf&&!C.zf)) goto L_12398930;
  /* 123988b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 123988b8 push ecx */
  push32((uint32_t)(ECX));
  /* 123988b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 123988bc push edx */
  push32((uint32_t)(EDX));
  /* 123988bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 123988c0 push eax */
  push32((uint32_t)(EAX));
  /* 123988c1 call 0x12399a90 */
  push32(0x123988c6u); f_12399a90();
  /* 123988c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123988c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 123988cb je 0x123988d5 */
  if (C.zf) goto L_123988d5;
  /* 123988cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123988d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 123988d3 jmp 0x12398930 */
  goto L_12398930;
L_123988d5:;
  /* 123988d5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123988d8 push edx */
  push32((uint32_t)(EDX));
  /* 123988d9 call 0x12399250 */
  push32(0x123988deu); f_12399250();
  /* 123988de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123988e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 123988e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123988e8 je 0x12398930 */
  if (C.zf) goto L_12398930;
  /* 123988ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123988ed mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 123988f0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 123988f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 123988f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 123988f9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123988fc jae 0x12398906 */
  if (!C.cf) goto L_12398906;
  /* 123988fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398901 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12398904 jmp 0x1239890c */
  goto L_1239890c;
L_12398906:;
  /* 12398906 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398909 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1239890c:;
  /* 1239890c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1239890f push edx */
  push32((uint32_t)(EDX));
  /* 12398910 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398913 push eax */
  push32((uint32_t)(EAX));
  /* 12398914 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398917 push ecx */
  push32((uint32_t)(ECX));
  /* 12398918 call 0x1239b1a0 */
  push32(0x1239891du); f_1239b1a0();
  /* 1239891d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398920 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398923 push edx */
  push32((uint32_t)(EDX));
  /* 12398924 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12398927 push eax */
  push32((uint32_t)(EAX));
  /* 12398928 call 0x12398c80 */
  push32(0x1239892du); f_12398c80();
  /* 1239892d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12398930:;
  /* 12398930 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398934 jne 0x123989b0 */
  if (!C.zf) goto L_123989b0;
  /* 12398936 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239893a jne 0x12398943 */
  if (!C.zf) goto L_12398943;
  /* 1239893c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12398943:;
  /* 12398943 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398946 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12398949 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1239894c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1239894f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398952 push edx */
  push32((uint32_t)(EDX));
  /* 12398953 push 0 */
  push32((uint32_t)(0x0u));
  /* 12398955 mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 1239895a push eax */
  push32((uint32_t)(EAX));
  /* 1239895b call dword ptr [0x123c3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3378))), 0x12398961u);
  /* 12398961 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12398964 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398968 je 0x123989b0 */
  if (C.zf) goto L_123989b0;
  /* 1239896a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1239896d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12398970 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12398973 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12398976 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398979 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1239897c jae 0x12398986 */
  if (!C.cf) goto L_12398986;
  /* 1239897e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398981 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12398984 jmp 0x1239898c */
  goto L_1239898c;
L_12398986:;
  /* 12398986 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398989 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1239898c:;
  /* 1239898c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1239898f push eax */
  push32((uint32_t)(EAX));
  /* 12398990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398993 push ecx */
  push32((uint32_t)(ECX));
  /* 12398994 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398997 push edx */
  push32((uint32_t)(EDX));
  /* 12398998 call 0x1239b1a0 */
  push32(0x1239899du); f_1239b1a0();
  /* 1239899d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123989a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 123989a3 push eax */
  push32((uint32_t)(EAX));
  /* 123989a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 123989a7 push ecx */
  push32((uint32_t)(ECX));
  /* 123989a8 call 0x12398c80 */
  push32(0x123989adu); f_12398c80();
  /* 123989ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_123989b0:;
  /* 123989b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 123989b2 call 0x12398360 */
  push32(0x123989b7u); f_12398360();
  /* 123989b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123989ba jmp 0x123989f9 */
  goto L_123989f9;
L_123989bc:;
  /* 123989bc push 9 */
  push32((uint32_t)(0x9u));
  /* 123989be call 0x12398360 */
  push32(0x123989c3u); f_12398360();
  /* 123989c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 123989c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123989ca jne 0x123989d3 */
  if (!C.zf) goto L_123989d3;
  /* 123989cc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_123989d3:;
  /* 123989d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 123989d6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 123989d9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 123989dc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 123989df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 123989e2 push eax */
  push32((uint32_t)(EAX));
  /* 123989e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 123989e6 push ecx */
  push32((uint32_t)(ECX));
  /* 123989e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 123989e9 mov edx, dword ptr [0x123c1e8c] */
  EDX = (r32((uint32_t)(0x123c1e8c)));
  /* 123989ef push edx */
  push32((uint32_t)(EDX));
  /* 123989f0 call dword ptr [0x123c337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c337c))), 0x123989f6u);
  /* 123989f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_123989f9:;
  /* 123989f9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 123989fd jne 0x12398a08 */
  if (!C.zf) goto L_12398a08;
  /* 123989ff cmp dword ptr [0x123c06d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123c06d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398a06 jne 0x12398a0d */
  if (!C.zf) goto L_12398a0d;
L_12398a08:;
  /* 12398a08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12398a0b jmp 0x12398a26 */
  goto L_12398a26;
L_12398a0d:;
  /* 12398a0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12398a10 push eax */
  push32((uint32_t)(EAX));
  /* 12398a11 call 0x12398600 */
  push32(0x12398a16u); f_12398600();
  /* 12398a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12398a1b jne 0x12398a21 */
  if (!C.zf) goto L_12398a21;
  /* 12398a1d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12398a1f jmp 0x12398a26 */
  goto L_12398a26;
L_12398a21:;
  /* 12398a21 jmp 0x12398876 */
  goto L_12398876;
L_12398a26:;
  /* 12398a26 mov esp, ebp */
  ESP = (EBP);
  /* 12398a28 pop ebp */
  EBP = (pop32());
  /* 12398a29 ret  */
  ESPCHK(0x12398840u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a30 @ 0x12398a30 (104 bytes, 38 insns) */
void f_12398a30(void) {
  FTRACE(0x12398a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12398a31 mov ebp, esp */
  EBP = (ESP);
  /* 12398a33 push ecx */
  push32((uint32_t)(ECX));
  /* 12398a34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398a38 jne 0x12398a3c */
  if (!C.zf) goto L_12398a3c;
  /* 12398a3a jmp 0x12398a94 */
  goto L_12398a94;
L_12398a3c:;
  /* 12398a3c push 9 */
  push32((uint32_t)(0x9u));
  /* 12398a3e call 0x123982c0 */
  push32(0x12398a43u); f_123982c0();
  /* 12398a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398a49 push eax */
  push32((uint32_t)(EAX));
  /* 12398a4a call 0x12398bc0 */
  push32(0x12398a4fu); f_12398bc0();
  /* 12398a4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12398a55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398a59 je 0x12398a77 */
  if (C.zf) goto L_12398a77;
  /* 12398a5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398a5e push ecx */
  push32((uint32_t)(ECX));
  /* 12398a5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398a62 push edx */
  push32((uint32_t)(EDX));
  /* 12398a63 call 0x12398c80 */
  push32(0x12398a68u); f_12398c80();
  /* 12398a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a6b push 9 */
  push32((uint32_t)(0x9u));
  /* 12398a6d call 0x12398360 */
  push32(0x12398a72u); f_12398360();
  /* 12398a72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a75 jmp 0x12398a94 */
  goto L_12398a94;
L_12398a77:;
  /* 12398a77 push 9 */
  push32((uint32_t)(0x9u));
  /* 12398a79 call 0x12398360 */
  push32(0x12398a7eu); f_12398360();
  /* 12398a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398a81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12398a84 push eax */
  push32((uint32_t)(EAX));
  /* 12398a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12398a87 mov ecx, dword ptr [0x123c1e8c] */
  ECX = (r32((uint32_t)(0x123c1e8c)));
  /* 12398a8d push ecx */
  push32((uint32_t)(ECX));
  /* 12398a8e call dword ptr [0x123c3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3324))), 0x12398a94u);
L_12398a94:;
  /* 12398a94 mov esp, ebp */
  ESP = (EBP);
  /* 12398a96 pop ebp */
  EBP = (pop32());
  /* 12398a97 ret  */
  ESPCHK(0x12398a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008aa0 @ 0x12398aa0 (116 bytes, 34 insns) */
void f_12398aa0(void) {
  FTRACE(0x12398aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12398aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12398aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12398aa4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12398aab push 9 */
  push32((uint32_t)(0x9u));
  /* 12398aad call 0x123982c0 */
  push32(0x12398ab2u); f_123982c0();
  /* 12398ab2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398ab5 call 0x1239a1b0 */
  push32(0x12398abau); f_1239a1b0();
  /* 12398aba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12398abc jge 0x12398ac5 */
  if ((C.sf==C.of)) goto L_12398ac5;
  /* 12398abe mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12398ac5:;
  /* 12398ac5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12398ac7 call 0x12398360 */
  push32(0x12398accu); f_12398360();
  /* 12398acc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12398acf push 0 */
  push32((uint32_t)(0x0u));
  /* 12398ad1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12398ad3 mov eax, dword ptr [0x123c1e8c] */
  EAX = (r32((uint32_t)(0x123c1e8c)));
  /* 12398ad8 push eax */
  push32((uint32_t)(EAX));
  /* 12398ad9 call dword ptr [0x123c3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3338))), 0x12398adfu);
  /* 12398adf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12398ae1 jne 0x12398b0d */
  if (!C.zf) goto L_12398b0d;
  /* 12398ae3 call dword ptr [0x123c3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x123c3318))), 0x12398ae9u);
  /* 12398ae9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12398aec jne 0x12398b06 */
  if (!C.zf) goto L_12398b06;
  /* 12398aee call 0x1239c7a0 */
  push32(0x12398af3u); f_1239c7a0();
  /* 12398af3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12398af9 call 0x1239c790 */
  push32(0x12398afeu); f_1239c790();
  /* 12398afe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12398b04 jmp 0x12398b0d */
  goto L_12398b0d;
L_12398b06:;
  /* 12398b06 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12398b0d:;
  /* 12398b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12398b10 mov esp, ebp */
  ESP = (EBP);
  /* 12398b12 pop ebp */
  EBP = (pop32());
  /* 12398b13 ret  */
  ESPCHK(0x12398aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b20 @ 0x12398b20 (10 bytes, 5 insns) */
void f_12398b20(void) {
  FTRACE(0x12398b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12398b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12398b21 mov ebp, esp */
  EBP = (ESP);
  /* 12398b23 call 0x12398aa0 */
  push32(0x12398b28u); f_12398aa0();
  /* 12398b28 pop ebp */
  EBP = (pop32());
  /* 12398b29 ret  */
  ESPCHK(0x12398b20u, _esp0);
  ESP += 4; return;
}

