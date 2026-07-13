#include "recomp.h"

/* OnInit @ 0x12621005 (5 bytes, 1 insns) */
void f_12621005(void) {
  FTRACE(0x12621005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12621005 jmp 0x12621090 */
  f_12621090(); return;
}

/* thunk_FUN_10001030 @ 0x1262100a (5 bytes, 1 insns) */
void f_1262100a(void) {
  FTRACE(0x1262100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262100a jmp 0x12621030 */
  f_12621030(); return;
}

/* ProcessScenary @ 0x1262100f (5 bytes, 1 insns) */
void f_1262100f(void) {
  FTRACE(0x1262100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1262100f jmp 0x12621510 */
  f_12621510(); return;
}

/* FUN_10001030 @ 0x12621030 (67 bytes, 26 insns) */
void f_12621030(void) {
  FTRACE(0x12621030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12621030 push ebp */
  push32((uint32_t)(EBP));
  /* 12621031 mov ebp, esp */
  EBP = (ESP);
  /* 12621033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12621036 push ebx */
  push32((uint32_t)(EBX));
  /* 12621037 push esi */
  push32((uint32_t)(ESI));
  /* 12621038 push edi */
  push32((uint32_t)(EDI));
  /* 12621039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1262103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12621041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12621046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12621048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621052 je 0x12621056 */
  if (C.zf) goto L_12621056;
  /* 12621054 jmp 0x1262105b */
  goto L_1262105b;
L_12621056:;
  /* 12621056 call 0x12621005 */
  push32(0x1262105bu); f_12621005();
L_1262105b:;
  /* 1262105b mov eax, 1 */
  EAX = (0x1u);
  /* 12621060 pop edi */
  EDI = (pop32());
  /* 12621061 pop esi */
  ESI = (pop32());
  /* 12621062 pop ebx */
  EBX = (pop32());
  /* 12621063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621068 call 0x126222d0 */
  push32(0x1262106du); f_126222d0();
  /* 1262106d mov esp, ebp */
  ESP = (EBP);
  /* 1262106f pop ebp */
  EBP = (pop32());
  /* 12621070 ret 0xc */
  ESPCHK(0x12621030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12621090 (915 bytes, 240 insns) */
void f_12621090(void) {
  FTRACE(0x12621090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12621090 push ebp */
  push32((uint32_t)(EBP));
  /* 12621091 mov ebp, esp */
  EBP = (ESP);
  /* 12621093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12621096 push ebx */
  push32((uint32_t)(EBX));
  /* 12621097 push esi */
  push32((uint32_t)(ESI));
  /* 12621098 push edi */
  push32((uint32_t)(EDI));
  /* 12621099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1262109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 126210a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 126210a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126210a8 mov esi, esp */
  ESI = (ESP);
  /* 126210aa push 0x1264a150 */
  push32((uint32_t)(0x1264a150u));
  /* 126210af push 0x1264f428 */
  push32((uint32_t)(0x1264f428u));
  /* 126210b4 call dword ptr [0x1265240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265240c))), 0x126210bau);
  /* 126210ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126210bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126210bf call 0x126222d0 */
  push32(0x126210c4u); f_126222d0();
  /* 126210c4 mov esi, esp */
  ESI = (ESP);
  /* 126210c6 push 0x1264a148 */
  push32((uint32_t)(0x1264a148u));
  /* 126210cb push 0x1264f430 */
  push32((uint32_t)(0x1264f430u));
  /* 126210d0 call dword ptr [0x1265240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265240c))), 0x126210d6u);
  /* 126210d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126210d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126210db call 0x126222d0 */
  push32(0x126210e0u); f_126222d0();
  /* 126210e0 mov esi, esp */
  ESI = (ESP);
  /* 126210e2 push 0x1264a140 */
  push32((uint32_t)(0x1264a140u));
  /* 126210e7 push 0x1264f438 */
  push32((uint32_t)(0x1264f438u));
  /* 126210ec call dword ptr [0x1265240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265240c))), 0x126210f2u);
  /* 126210f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126210f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126210f7 call 0x126222d0 */
  push32(0x126210fcu); f_126222d0();
  /* 126210fc mov esi, esp */
  ESI = (ESP);
  /* 126210fe push 0x1264a138 */
  push32((uint32_t)(0x1264a138u));
  /* 12621103 push 0x1264f440 */
  push32((uint32_t)(0x1264f440u));
  /* 12621108 call dword ptr [0x1265240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265240c))), 0x1262110eu);
  /* 1262110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621113 call 0x126222d0 */
  push32(0x12621118u); f_126222d0();
  /* 12621118 mov esi, esp */
  ESI = (ESP);
  /* 1262111a push 0x1264a130 */
  push32((uint32_t)(0x1264a130u));
  /* 1262111f push 0x1264f448 */
  push32((uint32_t)(0x1264f448u));
  /* 12621124 call dword ptr [0x1265240c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265240c))), 0x1262112au);
  /* 1262112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262112f call 0x126222d0 */
  push32(0x12621134u); f_126222d0();
  /* 12621134 mov esi, esp */
  ESI = (ESP);
  /* 12621136 push 0x1264a128 */
  push32((uint32_t)(0x1264a128u));
  /* 1262113b push 0x1264f3e0 */
  push32((uint32_t)(0x1264f3e0u));
  /* 12621140 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621146u);
  /* 12621146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262114b call 0x126222d0 */
  push32(0x12621150u); f_126222d0();
  /* 12621150 mov esi, esp */
  ESI = (ESP);
  /* 12621152 push 0x1264a120 */
  push32((uint32_t)(0x1264a120u));
  /* 12621157 push 0x1264f3f0 */
  push32((uint32_t)(0x1264f3f0u));
  /* 1262115c call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621162u);
  /* 12621162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621167 call 0x126222d0 */
  push32(0x1262116cu); f_126222d0();
  /* 1262116c mov esi, esp */
  ESI = (ESP);
  /* 1262116e push 0x1264a118 */
  push32((uint32_t)(0x1264a118u));
  /* 12621173 push 0x1264f3e8 */
  push32((uint32_t)(0x1264f3e8u));
  /* 12621178 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262117eu);
  /* 1262117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621183 call 0x126222d0 */
  push32(0x12621188u); f_126222d0();
  /* 12621188 mov esi, esp */
  ESI = (ESP);
  /* 1262118a push 0x1264a110 */
  push32((uint32_t)(0x1264a110u));
  /* 1262118f push 0x1264f400 */
  push32((uint32_t)(0x1264f400u));
  /* 12621194 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262119au);
  /* 1262119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262119f call 0x126222d0 */
  push32(0x126211a4u); f_126222d0();
  /* 126211a4 mov esi, esp */
  ESI = (ESP);
  /* 126211a6 push 0x1264a108 */
  push32((uint32_t)(0x1264a108u));
  /* 126211ab push 0x1264f3f8 */
  push32((uint32_t)(0x1264f3f8u));
  /* 126211b0 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126211b6u);
  /* 126211b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126211b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126211bb call 0x126222d0 */
  push32(0x126211c0u); f_126222d0();
  /* 126211c0 mov esi, esp */
  ESI = (ESP);
  /* 126211c2 push 0x1264a100 */
  push32((uint32_t)(0x1264a100u));
  /* 126211c7 push 0x1264f410 */
  push32((uint32_t)(0x1264f410u));
  /* 126211cc call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126211d2u);
  /* 126211d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126211d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126211d7 call 0x126222d0 */
  push32(0x126211dcu); f_126222d0();
  /* 126211dc mov esi, esp */
  ESI = (ESP);
  /* 126211de push 0x1264a0f8 */
  push32((uint32_t)(0x1264a0f8u));
  /* 126211e3 push 0x1264f408 */
  push32((uint32_t)(0x1264f408u));
  /* 126211e8 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126211eeu);
  /* 126211ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126211f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126211f3 call 0x126222d0 */
  push32(0x126211f8u); f_126222d0();
  /* 126211f8 mov esi, esp */
  ESI = (ESP);
  /* 126211fa push 0x1264a0f0 */
  push32((uint32_t)(0x1264a0f0u));
  /* 126211ff push 0x1264f420 */
  push32((uint32_t)(0x1264f420u));
  /* 12621204 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262120au);
  /* 1262120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262120f call 0x126222d0 */
  push32(0x12621214u); f_126222d0();
  /* 12621214 mov esi, esp */
  ESI = (ESP);
  /* 12621216 push 0x1264a0e8 */
  push32((uint32_t)(0x1264a0e8u));
  /* 1262121b push 0x1264f418 */
  push32((uint32_t)(0x1264f418u));
  /* 12621220 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621226u);
  /* 12621226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262122b call 0x126222d0 */
  push32(0x12621230u); f_126222d0();
  /* 12621230 mov esi, esp */
  ESI = (ESP);
  /* 12621232 push 0x1264a0dc */
  push32((uint32_t)(0x1264a0dcu));
  /* 12621237 push 0x1264f460 */
  push32((uint32_t)(0x1264f460u));
  /* 1262123c call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621242u);
  /* 12621242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621247 call 0x126222d0 */
  push32(0x1262124cu); f_126222d0();
  /* 1262124c mov esi, esp */
  ESI = (ESP);
  /* 1262124e push 0x1264a0d0 */
  push32((uint32_t)(0x1264a0d0u));
  /* 12621253 push 0x1264f4a8 */
  push32((uint32_t)(0x1264f4a8u));
  /* 12621258 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262125eu);
  /* 1262125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621263 call 0x126222d0 */
  push32(0x12621268u); f_126222d0();
  /* 12621268 mov esi, esp */
  ESI = (ESP);
  /* 1262126a push 0x1264a0c4 */
  push32((uint32_t)(0x1264a0c4u));
  /* 1262126f push 0x1264f4b0 */
  push32((uint32_t)(0x1264f4b0u));
  /* 12621274 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262127au);
  /* 1262127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262127f call 0x126222d0 */
  push32(0x12621284u); f_126222d0();
  /* 12621284 mov esi, esp */
  ESI = (ESP);
  /* 12621286 push 0x1264a0b8 */
  push32((uint32_t)(0x1264a0b8u));
  /* 1262128b push 0x1264f490 */
  push32((uint32_t)(0x1264f490u));
  /* 12621290 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621296u);
  /* 12621296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262129b call 0x126222d0 */
  push32(0x126212a0u); f_126222d0();
  /* 126212a0 mov esi, esp */
  ESI = (ESP);
  /* 126212a2 push 0x1264a0ac */
  push32((uint32_t)(0x1264a0acu));
  /* 126212a7 push 0x1264f4a0 */
  push32((uint32_t)(0x1264f4a0u));
  /* 126212ac call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126212b2u);
  /* 126212b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126212b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126212b7 call 0x126222d0 */
  push32(0x126212bcu); f_126222d0();
  /* 126212bc mov esi, esp */
  ESI = (ESP);
  /* 126212be push 0x1264a0a0 */
  push32((uint32_t)(0x1264a0a0u));
  /* 126212c3 push 0x1264f480 */
  push32((uint32_t)(0x1264f480u));
  /* 126212c8 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126212ceu);
  /* 126212ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126212d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126212d3 call 0x126222d0 */
  push32(0x126212d8u); f_126222d0();
  /* 126212d8 mov esi, esp */
  ESI = (ESP);
  /* 126212da push 0x1264a094 */
  push32((uint32_t)(0x1264a094u));
  /* 126212df push 0x1264f488 */
  push32((uint32_t)(0x1264f488u));
  /* 126212e4 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x126212eau);
  /* 126212ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126212ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126212ef call 0x126222d0 */
  push32(0x126212f4u); f_126222d0();
  /* 126212f4 mov esi, esp */
  ESI = (ESP);
  /* 126212f6 push 0x1264a088 */
  push32((uint32_t)(0x1264a088u));
  /* 126212fb push 0x1264f468 */
  push32((uint32_t)(0x1264f468u));
  /* 12621300 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621306u);
  /* 12621306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262130b call 0x126222d0 */
  push32(0x12621310u); f_126222d0();
  /* 12621310 mov esi, esp */
  ESI = (ESP);
  /* 12621312 push 0x1264a07c */
  push32((uint32_t)(0x1264a07cu));
  /* 12621317 push 0x1264f470 */
  push32((uint32_t)(0x1264f470u));
  /* 1262131c call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621322u);
  /* 12621322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621327 call 0x126222d0 */
  push32(0x1262132cu); f_126222d0();
  /* 1262132c mov esi, esp */
  ESI = (ESP);
  /* 1262132e push 0x1264a070 */
  push32((uint32_t)(0x1264a070u));
  /* 12621333 push 0x1264f4b8 */
  push32((uint32_t)(0x1264f4b8u));
  /* 12621338 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262133eu);
  /* 1262133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621343 call 0x126222d0 */
  push32(0x12621348u); f_126222d0();
  /* 12621348 mov esi, esp */
  ESI = (ESP);
  /* 1262134a push 0x1264a064 */
  push32((uint32_t)(0x1264a064u));
  /* 1262134f push 0x1264f498 */
  push32((uint32_t)(0x1264f498u));
  /* 12621354 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x1262135au);
  /* 1262135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262135f call 0x126222d0 */
  push32(0x12621364u); f_126222d0();
  /* 12621364 mov esi, esp */
  ESI = (ESP);
  /* 12621366 push 0x1264a058 */
  push32((uint32_t)(0x1264a058u));
  /* 1262136b push 0x1264f478 */
  push32((uint32_t)(0x1264f478u));
  /* 12621370 call dword ptr [0x12652410] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652410))), 0x12621376u);
  /* 12621376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262137b call 0x126222d0 */
  push32(0x12621380u); f_126222d0();
  /* 12621380 mov esi, esp */
  ESI = (ESP);
  /* 12621382 push 0x1264a04c */
  push32((uint32_t)(0x1264a04cu));
  /* 12621387 push 0x1264f450 */
  push32((uint32_t)(0x1264f450u));
  /* 1262138c call dword ptr [0x12652414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652414))), 0x12621392u);
  /* 12621392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621397 call 0x126222d0 */
  push32(0x1262139cu); f_126222d0();
  /* 1262139c mov esi, esp */
  ESI = (ESP);
  /* 1262139e push 0x1264a040 */
  push32((uint32_t)(0x1264a040u));
  /* 126213a3 push 0x1264f458 */
  push32((uint32_t)(0x1264f458u));
  /* 126213a8 call dword ptr [0x12652414] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652414))), 0x126213aeu);
  /* 126213ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126213b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126213b3 call 0x126222d0 */
  push32(0x126213b8u); f_126222d0();
  /* 126213b8 mov esi, esp */
  ESI = (ESP);
  /* 126213ba call dword ptr [0x12652418] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652418))), 0x126213c0u);
  /* 126213c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126213c2 call 0x126222d0 */
  push32(0x126213c7u); f_126222d0();
  /* 126213c7 mov esi, esp */
  ESI = (ESP);
  /* 126213c9 push 0x1264a034 */
  push32((uint32_t)(0x1264a034u));
  /* 126213ce push 1 */
  push32((uint32_t)(0x1u));
  /* 126213d0 call dword ptr [0x1265241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265241c))), 0x126213d6u);
  /* 126213d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126213d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126213db call 0x126222d0 */
  push32(0x126213e0u); f_126222d0();
  /* 126213e0 mov esi, esp */
  ESI = (ESP);
  /* 126213e2 push 0x1264a028 */
  push32((uint32_t)(0x1264a028u));
  /* 126213e7 push 5 */
  push32((uint32_t)(0x5u));
  /* 126213e9 call dword ptr [0x1265241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265241c))), 0x126213efu);
  /* 126213ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126213f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126213f4 call 0x126222d0 */
  push32(0x126213f9u); f_126222d0();
  /* 126213f9 mov esi, esp */
  ESI = (ESP);
  /* 126213fb push 0x1264a01c */
  push32((uint32_t)(0x1264a01cu));
  /* 12621400 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621402 call dword ptr [0x1265241c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265241c))), 0x12621408u);
  /* 12621408 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262140b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262140d call 0x126222d0 */
  push32(0x12621412u); f_126222d0();
  /* 12621412 pop edi */
  EDI = (pop32());
  /* 12621413 pop esi */
  ESI = (pop32());
  /* 12621414 pop ebx */
  EBX = (pop32());
  /* 12621415 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621418 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262141a call 0x126222d0 */
  push32(0x1262141fu); f_126222d0();
  /* 1262141f mov esp, ebp */
  ESP = (EBP);
  /* 12621421 pop ebp */
  EBP = (pop32());
  /* 12621422 ret  */
  ESPCHK(0x12621090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x12621510 (2717 bytes, 812 insns) */
void f_12621510(void) {
  FTRACE(0x12621510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12621510 push ebp */
  push32((uint32_t)(EBP));
  /* 12621511 mov ebp, esp */
  EBP = (ESP);
  /* 12621513 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12621516 push ebx */
  push32((uint32_t)(EBX));
  /* 12621517 push esi */
  push32((uint32_t)(ESI));
  /* 12621518 push edi */
  push32((uint32_t)(EDI));
  /* 12621519 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1262151c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 12621521 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12621526 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12621528 mov esi, esp */
  ESI = (ESP);
  /* 1262152a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1262152c call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621532u);
  /* 12621532 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621537 call 0x126222d0 */
  push32(0x1262153cu); f_126222d0();
  /* 1262153c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621541 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621543 je 0x1262193a */
  if (C.zf) goto L_1262193a;
  /* 12621549 mov esi, esp */
  ESI = (ESP);
  /* 1262154b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262154d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 1262154f call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621555u);
  /* 12621555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262155a call 0x126222d0 */
  push32(0x1262155fu); f_126222d0();
  /* 1262155f mov esi, esp */
  ESI = (ESP);
  /* 12621561 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621563 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621565 call dword ptr [0x126523d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d8))), 0x1262156bu);
  /* 1262156b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262156e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621570 call 0x126222d0 */
  push32(0x12621575u); f_126222d0();
  /* 12621575 mov esi, esp */
  ESI = (ESP);
  /* 12621577 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12621579 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262157b call dword ptr [0x126523d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d8))), 0x12621581u);
  /* 12621581 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621584 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621586 call 0x126222d0 */
  push32(0x1262158bu); f_126222d0();
  /* 1262158b mov esi, esp */
  ESI = (ESP);
  /* 1262158d push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1262158f push 5 */
  push32((uint32_t)(0x5u));
  /* 12621591 call dword ptr [0x126523d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d8))), 0x12621597u);
  /* 12621597 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262159a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262159c call 0x126222d0 */
  push32(0x126215a1u); f_126222d0();
  /* 126215a1 mov esi, esp */
  ESI = (ESP);
  /* 126215a3 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 126215a5 push 6 */
  push32((uint32_t)(0x6u));
  /* 126215a7 call dword ptr [0x126523d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d8))), 0x126215adu);
  /* 126215ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126215b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126215b2 call 0x126222d0 */
  push32(0x126215b7u); f_126222d0();
  /* 126215b7 mov esi, esp */
  ESI = (ESP);
  /* 126215b9 push 0x1d4c */
  push32((uint32_t)(0x1d4cu));
  /* 126215be push 3 */
  push32((uint32_t)(0x3u));
  /* 126215c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126215c2 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126215c8u);
  /* 126215c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126215cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126215cd call 0x126222d0 */
  push32(0x126215d2u); f_126222d0();
  /* 126215d2 mov esi, esp */
  ESI = (ESP);
  /* 126215d4 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 126215d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 126215db push 0 */
  push32((uint32_t)(0x0u));
  /* 126215dd call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126215e3u);
  /* 126215e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126215e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126215e8 call 0x126222d0 */
  push32(0x126215edu); f_126222d0();
  /* 126215ed mov esi, esp */
  ESI = (ESP);
  /* 126215ef push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 126215f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126215f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126215f8 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126215feu);
  /* 126215fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621601 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621603 call 0x126222d0 */
  push32(0x12621608u); f_126222d0();
  /* 12621608 mov esi, esp */
  ESI = (ESP);
  /* 1262160a push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 1262160f push 2 */
  push32((uint32_t)(0x2u));
  /* 12621611 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621613 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621619u);
  /* 12621619 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262161c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262161e call 0x126222d0 */
  push32(0x12621623u); f_126222d0();
  /* 12621623 mov esi, esp */
  ESI = (ESP);
  /* 12621625 push 0x1d4c */
  push32((uint32_t)(0x1d4cu));
  /* 1262162a push 5 */
  push32((uint32_t)(0x5u));
  /* 1262162c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262162e call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621634u);
  /* 12621634 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621639 call 0x126222d0 */
  push32(0x1262163eu); f_126222d0();
  /* 1262163e mov esi, esp */
  ESI = (ESP);
  /* 12621640 push 0x1d4c */
  push32((uint32_t)(0x1d4cu));
  /* 12621645 push 4 */
  push32((uint32_t)(0x4u));
  /* 12621647 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621649 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x1262164fu);
  /* 1262164f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621652 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621654 call 0x126222d0 */
  push32(0x12621659u); f_126222d0();
  /* 12621659 mov esi, esp */
  ESI = (ESP);
  /* 1262165b push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12621660 push 3 */
  push32((uint32_t)(0x3u));
  /* 12621662 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621664 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x1262166au);
  /* 1262166a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262166d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262166f call 0x126222d0 */
  push32(0x12621674u); f_126222d0();
  /* 12621674 mov esi, esp */
  ESI = (ESP);
  /* 12621676 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 1262167b push 1 */
  push32((uint32_t)(0x1u));
  /* 1262167d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262167f call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621685u);
  /* 12621685 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621688 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262168a call 0x126222d0 */
  push32(0x1262168fu); f_126222d0();
  /* 1262168f mov esi, esp */
  ESI = (ESP);
  /* 12621691 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 12621696 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621698 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262169a call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126216a0u);
  /* 126216a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126216a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126216a5 call 0x126222d0 */
  push32(0x126216aau); f_126222d0();
  /* 126216aa mov esi, esp */
  ESI = (ESP);
  /* 126216ac push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 126216b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 126216b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126216b5 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126216bbu);
  /* 126216bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126216be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126216c0 call 0x126222d0 */
  push32(0x126216c5u); f_126222d0();
  /* 126216c5 mov esi, esp */
  ESI = (ESP);
  /* 126216c7 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 126216cc push 5 */
  push32((uint32_t)(0x5u));
  /* 126216ce push 1 */
  push32((uint32_t)(0x1u));
  /* 126216d0 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126216d6u);
  /* 126216d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126216d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126216db call 0x126222d0 */
  push32(0x126216e0u); f_126222d0();
  /* 126216e0 mov esi, esp */
  ESI = (ESP);
  /* 126216e2 push 0x7530 */
  push32((uint32_t)(0x7530u));
  /* 126216e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 126216e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 126216eb call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x126216f1u);
  /* 126216f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126216f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126216f6 call 0x126222d0 */
  push32(0x126216fbu); f_126222d0();
  /* 126216fb mov esi, esp */
  ESI = (ESP);
  /* 126216fd push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12621702 push 3 */
  push32((uint32_t)(0x3u));
  /* 12621704 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621706 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x1262170cu);
  /* 1262170c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262170f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621711 call 0x126222d0 */
  push32(0x12621716u); f_126222d0();
  /* 12621716 mov esi, esp */
  ESI = (ESP);
  /* 12621718 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1262171d push 1 */
  push32((uint32_t)(0x1u));
  /* 1262171f push 6 */
  push32((uint32_t)(0x6u));
  /* 12621721 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621727u);
  /* 12621727 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262172a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262172c call 0x126222d0 */
  push32(0x12621731u); f_126222d0();
  /* 12621731 mov esi, esp */
  ESI = (ESP);
  /* 12621733 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12621738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262173a push 6 */
  push32((uint32_t)(0x6u));
  /* 1262173c call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621742u);
  /* 12621742 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621745 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621747 call 0x126222d0 */
  push32(0x1262174cu); f_126222d0();
  /* 1262174c mov esi, esp */
  ESI = (ESP);
  /* 1262174e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12621753 push 2 */
  push32((uint32_t)(0x2u));
  /* 12621755 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621757 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x1262175du);
  /* 1262175d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621760 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621762 call 0x126222d0 */
  push32(0x12621767u); f_126222d0();
  /* 12621767 mov esi, esp */
  ESI = (ESP);
  /* 12621769 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 1262176e push 5 */
  push32((uint32_t)(0x5u));
  /* 12621770 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621772 call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621778u);
  /* 12621778 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262177b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262177d call 0x126222d0 */
  push32(0x12621782u); f_126222d0();
  /* 12621782 mov esi, esp */
  ESI = (ESP);
  /* 12621784 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12621789 push 4 */
  push32((uint32_t)(0x4u));
  /* 1262178b push 6 */
  push32((uint32_t)(0x6u));
  /* 1262178d call dword ptr [0x126523dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523dc))), 0x12621793u);
  /* 12621793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621796 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621798 call 0x126222d0 */
  push32(0x1262179du); f_126222d0();
  /* 1262179d mov esi, esp */
  ESI = (ESP);
  /* 1262179f push 0 */
  push32((uint32_t)(0x0u));
  /* 126217a1 push 0x1264f3e0 */
  push32((uint32_t)(0x1264f3e0u));
  /* 126217a6 push 5 */
  push32((uint32_t)(0x5u));
  /* 126217a8 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126217aeu);
  /* 126217ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126217b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126217b3 call 0x126222d0 */
  push32(0x126217b8u); f_126222d0();
  /* 126217b8 mov esi, esp */
  ESI = (ESP);
  /* 126217ba push 1 */
  push32((uint32_t)(0x1u));
  /* 126217bc push 0x1264f3e8 */
  push32((uint32_t)(0x1264f3e8u));
  /* 126217c1 push 5 */
  push32((uint32_t)(0x5u));
  /* 126217c3 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126217c9u);
  /* 126217c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126217cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126217ce call 0x126222d0 */
  push32(0x126217d3u); f_126222d0();
  /* 126217d3 mov esi, esp */
  ESI = (ESP);
  /* 126217d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 126217d7 push 0x1264f400 */
  push32((uint32_t)(0x1264f400u));
  /* 126217dc push 5 */
  push32((uint32_t)(0x5u));
  /* 126217de call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126217e4u);
  /* 126217e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126217e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126217e9 call 0x126222d0 */
  push32(0x126217eeu); f_126222d0();
  /* 126217ee mov esi, esp */
  ESI = (ESP);
  /* 126217f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 126217f2 push 0x1264f410 */
  push32((uint32_t)(0x1264f410u));
  /* 126217f7 push 5 */
  push32((uint32_t)(0x5u));
  /* 126217f9 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126217ffu);
  /* 126217ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621802 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621804 call 0x126222d0 */
  push32(0x12621809u); f_126222d0();
  /* 12621809 mov esi, esp */
  ESI = (ESP);
  /* 1262180b push 1 */
  push32((uint32_t)(0x1u));
  /* 1262180d push 0x1264f418 */
  push32((uint32_t)(0x1264f418u));
  /* 12621812 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621814 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x1262181au);
  /* 1262181a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262181d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262181f call 0x126222d0 */
  push32(0x12621824u); f_126222d0();
  /* 12621824 mov esi, esp */
  ESI = (ESP);
  /* 12621826 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621828 push 0x1264f4a8 */
  push32((uint32_t)(0x1264f4a8u));
  /* 1262182d push 5 */
  push32((uint32_t)(0x5u));
  /* 1262182f call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621835u);
  /* 12621835 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621838 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262183a call 0x126222d0 */
  push32(0x1262183fu); f_126222d0();
  /* 1262183f mov esi, esp */
  ESI = (ESP);
  /* 12621841 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621843 push 0x1264f490 */
  push32((uint32_t)(0x1264f490u));
  /* 12621848 push 5 */
  push32((uint32_t)(0x5u));
  /* 1262184a call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621850u);
  /* 12621850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621853 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621855 call 0x126222d0 */
  push32(0x1262185au); f_126222d0();
  /* 1262185a mov esi, esp */
  ESI = (ESP);
  /* 1262185c push 1 */
  push32((uint32_t)(0x1u));
  /* 1262185e push 0x1264f4a0 */
  push32((uint32_t)(0x1264f4a0u));
  /* 12621863 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621865 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x1262186bu);
  /* 1262186b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262186e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621870 call 0x126222d0 */
  push32(0x12621875u); f_126222d0();
  /* 12621875 mov esi, esp */
  ESI = (ESP);
  /* 12621877 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621879 push 5 */
  push32((uint32_t)(0x5u));
  /* 1262187b call dword ptr [0x126523e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e4))), 0x12621881u);
  /* 12621881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621886 call 0x126222d0 */
  push32(0x1262188bu); f_126222d0();
  /* 1262188b mov esi, esp */
  ESI = (ESP);
  /* 1262188d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262188f push 0x1264f480 */
  push32((uint32_t)(0x1264f480u));
  /* 12621894 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621896 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x1262189cu);
  /* 1262189c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262189f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126218a1 call 0x126222d0 */
  push32(0x126218a6u); f_126222d0();
  /* 126218a6 mov esi, esp */
  ESI = (ESP);
  /* 126218a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 126218aa push 0x1264f460 */
  push32((uint32_t)(0x1264f460u));
  /* 126218af push 5 */
  push32((uint32_t)(0x5u));
  /* 126218b1 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126218b7u);
  /* 126218b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126218ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126218bc call 0x126222d0 */
  push32(0x126218c1u); f_126222d0();
  /* 126218c1 mov esi, esp */
  ESI = (ESP);
  /* 126218c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 126218c5 push 0x1264f3f0 */
  push32((uint32_t)(0x1264f3f0u));
  /* 126218ca push 5 */
  push32((uint32_t)(0x5u));
  /* 126218cc call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126218d2u);
  /* 126218d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126218d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126218d7 call 0x126222d0 */
  push32(0x126218dcu); f_126222d0();
  /* 126218dc mov esi, esp */
  ESI = (ESP);
  /* 126218de push 1 */
  push32((uint32_t)(0x1u));
  /* 126218e0 push 0x1264f3f8 */
  push32((uint32_t)(0x1264f3f8u));
  /* 126218e5 push 5 */
  push32((uint32_t)(0x5u));
  /* 126218e7 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126218edu);
  /* 126218ed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126218f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126218f2 call 0x126222d0 */
  push32(0x126218f7u); f_126222d0();
  /* 126218f7 mov esi, esp */
  ESI = (ESP);
  /* 126218f9 push 5 */
  push32((uint32_t)(0x5u));
  /* 126218fb call dword ptr [0x126523e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e8))), 0x12621901u);
  /* 12621901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621904 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621906 call 0x126222d0 */
  push32(0x1262190bu); f_126222d0();
  /* 1262190b mov esi, esp */
  ESI = (ESP);
  /* 1262190d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262190f push 0x1264f470 */
  push32((uint32_t)(0x1264f470u));
  /* 12621914 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621916 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x1262191cu);
  /* 1262191c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262191f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621921 call 0x126222d0 */
  push32(0x12621926u); f_126222d0();
  /* 12621926 mov esi, esp */
  ESI = (ESP);
  /* 12621928 push 6 */
  push32((uint32_t)(0x6u));
  /* 1262192a call dword ptr [0x126523ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523ec))), 0x12621930u);
  /* 12621930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621935 call 0x126222d0 */
  push32(0x1262193au); f_126222d0();
L_1262193a:;
  /* 1262193a mov esi, esp */
  ESI = (ESP);
  /* 1262193c push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1262193e call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621944u);
  /* 12621944 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621949 call 0x126222d0 */
  push32(0x1262194eu); f_126222d0();
  /* 1262194e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621953 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621955 je 0x12621b16 */
  if (C.zf) goto L_12621b16;
  /* 1262195b mov esi, esp */
  ESI = (ESP);
  /* 1262195d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262195f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12621961 call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621967u);
  /* 12621967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262196a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262196c call 0x126222d0 */
  push32(0x12621971u); f_126222d0();
  /* 12621971 mov esi, esp */
  ESI = (ESP);
  /* 12621973 push 0x1264a174 */
  push32((uint32_t)(0x1264a174u));
  /* 12621978 call dword ptr [0x126523f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f0))), 0x1262197eu);
  /* 1262197e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621981 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621983 call 0x126222d0 */
  push32(0x12621988u); f_126222d0();
  /* 12621988 mov esi, esp */
  ESI = (ESP);
  /* 1262198a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262198c push 0x1264f3e0 */
  push32((uint32_t)(0x1264f3e0u));
  /* 12621991 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621993 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621999u);
  /* 12621999 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262199c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262199e call 0x126222d0 */
  push32(0x126219a3u); f_126222d0();
  /* 126219a3 mov esi, esp */
  ESI = (ESP);
  /* 126219a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 126219a7 push 0x1264f3e8 */
  push32((uint32_t)(0x1264f3e8u));
  /* 126219ac push 1 */
  push32((uint32_t)(0x1u));
  /* 126219ae call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126219b4u);
  /* 126219b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126219b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126219b9 call 0x126222d0 */
  push32(0x126219beu); f_126222d0();
  /* 126219be mov esi, esp */
  ESI = (ESP);
  /* 126219c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 126219c2 push 0x1264f400 */
  push32((uint32_t)(0x1264f400u));
  /* 126219c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126219c9 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126219cfu);
  /* 126219cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126219d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126219d4 call 0x126222d0 */
  push32(0x126219d9u); f_126222d0();
  /* 126219d9 mov esi, esp */
  ESI = (ESP);
  /* 126219db push 1 */
  push32((uint32_t)(0x1u));
  /* 126219dd push 0x1264f410 */
  push32((uint32_t)(0x1264f410u));
  /* 126219e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 126219e4 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x126219eau);
  /* 126219ea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126219ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126219ef call 0x126222d0 */
  push32(0x126219f4u); f_126222d0();
  /* 126219f4 mov esi, esp */
  ESI = (ESP);
  /* 126219f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 126219f8 push 0x1264f418 */
  push32((uint32_t)(0x1264f418u));
  /* 126219fd push 1 */
  push32((uint32_t)(0x1u));
  /* 126219ff call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a05u);
  /* 12621a05 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a0a call 0x126222d0 */
  push32(0x12621a0fu); f_126222d0();
  /* 12621a0f mov esi, esp */
  ESI = (ESP);
  /* 12621a11 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a13 push 0x1264f4a8 */
  push32((uint32_t)(0x1264f4a8u));
  /* 12621a18 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a1a call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a20u);
  /* 12621a20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a25 call 0x126222d0 */
  push32(0x12621a2au); f_126222d0();
  /* 12621a2a mov esi, esp */
  ESI = (ESP);
  /* 12621a2c push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a2e push 0x1264f490 */
  push32((uint32_t)(0x1264f490u));
  /* 12621a33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a35 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a3bu);
  /* 12621a3b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a40 call 0x126222d0 */
  push32(0x12621a45u); f_126222d0();
  /* 12621a45 mov esi, esp */
  ESI = (ESP);
  /* 12621a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a49 push 0x1264f4a0 */
  push32((uint32_t)(0x1264f4a0u));
  /* 12621a4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a50 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a56u);
  /* 12621a56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a5b call 0x126222d0 */
  push32(0x12621a60u); f_126222d0();
  /* 12621a60 mov esi, esp */
  ESI = (ESP);
  /* 12621a62 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a64 push 0x1264f4b8 */
  push32((uint32_t)(0x1264f4b8u));
  /* 12621a69 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a6b call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a71u);
  /* 12621a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a76 call 0x126222d0 */
  push32(0x12621a7bu); f_126222d0();
  /* 12621a7b mov esi, esp */
  ESI = (ESP);
  /* 12621a7d push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a7f push 0x1264f498 */
  push32((uint32_t)(0x1264f498u));
  /* 12621a84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a86 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621a8cu);
  /* 12621a8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621a8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621a91 call 0x126222d0 */
  push32(0x12621a96u); f_126222d0();
  /* 12621a96 mov esi, esp */
  ESI = (ESP);
  /* 12621a98 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621a9a push 0x1264f478 */
  push32((uint32_t)(0x1264f478u));
  /* 12621a9f push 1 */
  push32((uint32_t)(0x1u));
  /* 12621aa1 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621aa7u);
  /* 12621aa7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621aaa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621aac call 0x126222d0 */
  push32(0x12621ab1u); f_126222d0();
  /* 12621ab1 mov esi, esp */
  ESI = (ESP);
  /* 12621ab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621ab5 call dword ptr [0x126523ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523ec))), 0x12621abbu);
  /* 12621abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621abe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621ac0 call 0x126222d0 */
  push32(0x12621ac5u); f_126222d0();
  /* 12621ac5 mov esi, esp */
  ESI = (ESP);
  /* 12621ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621ac9 push 0x1264f450 */
  push32((uint32_t)(0x1264f450u));
  /* 12621ace push 0 */
  push32((uint32_t)(0x0u));
  /* 12621ad0 call dword ptr [0x126523f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f4))), 0x12621ad6u);
  /* 12621ad6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621ad9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621adb call 0x126222d0 */
  push32(0x12621ae0u); f_126222d0();
  /* 12621ae0 mov esi, esp */
  ESI = (ESP);
  /* 12621ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621ae4 push 0x1264f450 */
  push32((uint32_t)(0x1264f450u));
  /* 12621ae9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621aeb call dword ptr [0x126523f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f4))), 0x12621af1u);
  /* 12621af1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621af4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621af6 call 0x126222d0 */
  push32(0x12621afbu); f_126222d0();
  /* 12621afb mov esi, esp */
  ESI = (ESP);
  /* 12621afd push 0 */
  push32((uint32_t)(0x0u));
  /* 12621aff push 0x1264f450 */
  push32((uint32_t)(0x1264f450u));
  /* 12621b04 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621b06 call dword ptr [0x126523f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f4))), 0x12621b0cu);
  /* 12621b0c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b11 call 0x126222d0 */
  push32(0x12621b16u); f_126222d0();
L_12621b16:;
  /* 12621b16 mov esi, esp */
  ESI = (ESP);
  /* 12621b18 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12621b1a call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621b20u);
  /* 12621b20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b25 call 0x126222d0 */
  push32(0x12621b2au); f_126222d0();
  /* 12621b2a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621b31 je 0x12621b85 */
  if (C.zf) goto L_12621b85;
  /* 12621b33 mov esi, esp */
  ESI = (ESP);
  /* 12621b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621b37 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12621b39 call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621b3fu);
  /* 12621b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b44 call 0x126222d0 */
  push32(0x12621b49u); f_126222d0();
  /* 12621b49 mov esi, esp */
  ESI = (ESP);
  /* 12621b4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12621b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12621b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 12621b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621b53 push 0x1264a168 */
  push32((uint32_t)(0x1264a168u));
  /* 12621b58 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621b5a call dword ptr [0x126523f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f8))), 0x12621b60u);
  /* 12621b60 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b65 call 0x126222d0 */
  push32(0x12621b6au); f_126222d0();
  /* 12621b6a mov esi, esp */
  ESI = (ESP);
  /* 12621b6c push 0 */
  push32((uint32_t)(0x0u));
  /* 12621b6e push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12621b73 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621b75 call dword ptr [0x126523fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523fc))), 0x12621b7bu);
  /* 12621b7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b80 call 0x126222d0 */
  push32(0x12621b85u); f_126222d0();
L_12621b85:;
  /* 12621b85 mov esi, esp */
  ESI = (ESP);
  /* 12621b87 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12621b89 call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621b8fu);
  /* 12621b8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621b92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621b94 call 0x126222d0 */
  push32(0x12621b99u); f_126222d0();
  /* 12621b99 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621b9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621ba0 je 0x12621bf4 */
  if (C.zf) goto L_12621bf4;
  /* 12621ba2 mov esi, esp */
  ESI = (ESP);
  /* 12621ba4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621ba6 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12621ba8 call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621baeu);
  /* 12621bae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621bb1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621bb3 call 0x126222d0 */
  push32(0x12621bb8u); f_126222d0();
  /* 12621bb8 mov esi, esp */
  ESI = (ESP);
  /* 12621bba push 0 */
  push32((uint32_t)(0x0u));
  /* 12621bbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12621bbe push 1 */
  push32((uint32_t)(0x1u));
  /* 12621bc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621bc2 push 0x1264a168 */
  push32((uint32_t)(0x1264a168u));
  /* 12621bc7 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621bc9 call dword ptr [0x126523f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f8))), 0x12621bcfu);
  /* 12621bcf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621bd4 call 0x126222d0 */
  push32(0x12621bd9u); f_126222d0();
  /* 12621bd9 mov esi, esp */
  ESI = (ESP);
  /* 12621bdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12621bdd push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12621be2 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621be4 call dword ptr [0x126523fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523fc))), 0x12621beau);
  /* 12621bea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621bed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621bef call 0x126222d0 */
  push32(0x12621bf4u); f_126222d0();
L_12621bf4:;
  /* 12621bf4 mov esi, esp */
  ESI = (ESP);
  /* 12621bf6 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12621bf8 call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621bfeu);
  /* 12621bfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c03 call 0x126222d0 */
  push32(0x12621c08u); f_126222d0();
  /* 12621c08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621c0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621c0f je 0x12621ce5 */
  if (C.zf) goto L_12621ce5;
  /* 12621c15 mov esi, esp */
  ESI = (ESP);
  /* 12621c17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621c19 push 0x1264f438 */
  push32((uint32_t)(0x1264f438u));
  /* 12621c1e call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621c24u);
  /* 12621c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c29 call 0x126222d0 */
  push32(0x12621c2eu); f_126222d0();
  /* 12621c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621c30 jg 0x12621c6c */
  if ((!C.zf&&C.sf==C.of)) goto L_12621c6c;
  /* 12621c32 mov esi, esp */
  ESI = (ESP);
  /* 12621c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621c36 push 0x1264f440 */
  push32((uint32_t)(0x1264f440u));
  /* 12621c3b call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621c41u);
  /* 12621c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c46 call 0x126222d0 */
  push32(0x12621c4bu); f_126222d0();
  /* 12621c4b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621c4d jg 0x12621c6c */
  if ((!C.zf&&C.sf==C.of)) goto L_12621c6c;
  /* 12621c4f mov esi, esp */
  ESI = (ESP);
  /* 12621c51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621c53 push 0x1264f448 */
  push32((uint32_t)(0x1264f448u));
  /* 12621c58 call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621c5eu);
  /* 12621c5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c63 call 0x126222d0 */
  push32(0x12621c68u); f_126222d0();
  /* 12621c68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621c6a jle 0x12621ce5 */
  if ((C.zf||C.sf!=C.of)) goto L_12621ce5;
L_12621c6c:;
  /* 12621c6c mov esi, esp */
  ESI = (ESP);
  /* 12621c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12621c70 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12621c72 call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621c78u);
  /* 12621c78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c7d call 0x126222d0 */
  push32(0x12621c82u); f_126222d0();
  /* 12621c82 mov esi, esp */
  ESI = (ESP);
  /* 12621c84 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12621c86 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621c88 call dword ptr [0x126523d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d8))), 0x12621c8eu);
  /* 12621c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621c93 call 0x126222d0 */
  push32(0x12621c98u); f_126222d0();
  /* 12621c98 mov esi, esp */
  ESI = (ESP);
  /* 12621c9a push 0x1264a160 */
  push32((uint32_t)(0x1264a160u));
  /* 12621c9f call dword ptr [0x126523f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f0))), 0x12621ca5u);
  /* 12621ca5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621ca8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621caa call 0x126222d0 */
  push32(0x12621cafu); f_126222d0();
  /* 12621caf mov esi, esp */
  ESI = (ESP);
  /* 12621cb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621cb5 push 0x1264f428 */
  push32((uint32_t)(0x1264f428u));
  /* 12621cba call dword ptr [0x12652404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652404))), 0x12621cc0u);
  /* 12621cc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621cc5 call 0x126222d0 */
  push32(0x12621ccau); f_126222d0();
  /* 12621cca mov esi, esp */
  ESI = (ESP);
  /* 12621ccc push 2 */
  push32((uint32_t)(0x2u));
  /* 12621cce push 1 */
  push32((uint32_t)(0x1u));
  /* 12621cd0 push 0x1264f430 */
  push32((uint32_t)(0x1264f430u));
  /* 12621cd5 call dword ptr [0x12652404] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652404))), 0x12621cdbu);
  /* 12621cdb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621cde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621ce0 call 0x126222d0 */
  push32(0x12621ce5u); f_126222d0();
L_12621ce5:;
  /* 12621ce5 mov esi, esp */
  ESI = (ESP);
  /* 12621ce7 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12621ce9 call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621cefu);
  /* 12621cef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621cf4 call 0x126222d0 */
  push32(0x12621cf9u); f_126222d0();
  /* 12621cf9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621d00 je 0x12621e33 */
  if (C.zf) goto L_12621e33;
  /* 12621d06 mov esi, esp */
  ESI = (ESP);
  /* 12621d08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621d0a push 0x1264f428 */
  push32((uint32_t)(0x1264f428u));
  /* 12621d0f call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621d15u);
  /* 12621d15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621d18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621d1a call 0x126222d0 */
  push32(0x12621d1fu); f_126222d0();
  /* 12621d1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621d21 jle 0x12621e33 */
  if ((C.zf||C.sf!=C.of)) goto L_12621e33;
  /* 12621d27 mov esi, esp */
  ESI = (ESP);
  /* 12621d29 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621d2b push 0x1264f428 */
  push32((uint32_t)(0x1264f428u));
  /* 12621d30 call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621d36u);
  /* 12621d36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621d39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621d3b call 0x126222d0 */
  push32(0x12621d40u); f_126222d0();
  /* 12621d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621d42 jne 0x12621e33 */
  if (!C.zf) goto L_12621e33;
  /* 12621d48 mov esi, esp */
  ESI = (ESP);
  /* 12621d4a push 6 */
  push32((uint32_t)(0x6u));
  /* 12621d4c push 0x1264f428 */
  push32((uint32_t)(0x1264f428u));
  /* 12621d51 call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621d57u);
  /* 12621d57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621d5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621d5c call 0x126222d0 */
  push32(0x12621d61u); f_126222d0();
  /* 12621d61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621d63 jne 0x12621e33 */
  if (!C.zf) goto L_12621e33;
  /* 12621d69 mov esi, esp */
  ESI = (ESP);
  /* 12621d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12621d6d push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 12621d6f call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621d75u);
  /* 12621d75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621d78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621d7a call 0x126222d0 */
  push32(0x12621d7fu); f_126222d0();
  /* 12621d7f mov esi, esp */
  ESI = (ESP);
  /* 12621d81 push 0x1264a158 */
  push32((uint32_t)(0x1264a158u));
  /* 12621d86 call dword ptr [0x126523f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f0))), 0x12621d8cu);
  /* 12621d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621d8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621d91 call 0x126222d0 */
  push32(0x12621d96u); f_126222d0();
  /* 12621d96 mov esi, esp */
  ESI = (ESP);
  /* 12621d98 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621d9d push 1 */
  push32((uint32_t)(0x1u));
  /* 12621d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12621da1 call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621da7u);
  /* 12621da7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621dac call 0x126222d0 */
  push32(0x12621db1u); f_126222d0();
  /* 12621db1 mov esi, esp */
  ESI = (ESP);
  /* 12621db3 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621db8 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621dba push 0 */
  push32((uint32_t)(0x0u));
  /* 12621dbc call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621dc2u);
  /* 12621dc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621dc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621dc7 call 0x126222d0 */
  push32(0x12621dccu); f_126222d0();
  /* 12621dcc mov esi, esp */
  ESI = (ESP);
  /* 12621dce push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621dd3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12621dd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621dd7 call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621dddu);
  /* 12621ddd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621de0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621de2 call 0x126222d0 */
  push32(0x12621de7u); f_126222d0();
  /* 12621de7 mov esi, esp */
  ESI = (ESP);
  /* 12621de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621deb push 0x1264f408 */
  push32((uint32_t)(0x1264f408u));
  /* 12621df0 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621df2 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621df8u);
  /* 12621df8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621dfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621dfd call 0x126222d0 */
  push32(0x12621e02u); f_126222d0();
  /* 12621e02 mov esi, esp */
  ESI = (ESP);
  /* 12621e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621e06 push 0x1264f420 */
  push32((uint32_t)(0x1264f420u));
  /* 12621e0b push 5 */
  push32((uint32_t)(0x5u));
  /* 12621e0d call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621e13u);
  /* 12621e13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621e16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621e18 call 0x126222d0 */
  push32(0x12621e1du); f_126222d0();
  /* 12621e1d mov esi, esp */
  ESI = (ESP);
  /* 12621e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 12621e21 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621e23 call dword ptr [0x126523e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e4))), 0x12621e29u);
  /* 12621e29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621e2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621e2e call 0x126222d0 */
  push32(0x12621e33u); f_126222d0();
L_12621e33:;
  /* 12621e33 mov esi, esp */
  ESI = (ESP);
  /* 12621e35 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12621e37 call dword ptr [0x126523d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d0))), 0x12621e3du);
  /* 12621e3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621e40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621e42 call 0x126222d0 */
  push32(0x12621e47u); f_126222d0();
  /* 12621e47 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12621e4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621e4e je 0x12621f9c */
  if (C.zf) goto L_12621f9c;
  /* 12621e54 mov esi, esp */
  ESI = (ESP);
  /* 12621e56 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621e58 push 0x1264f430 */
  push32((uint32_t)(0x1264f430u));
  /* 12621e5d call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621e63u);
  /* 12621e63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621e66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621e68 call 0x126222d0 */
  push32(0x12621e6du); f_126222d0();
  /* 12621e6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621e6f jle 0x12621f9c */
  if ((C.zf||C.sf!=C.of)) goto L_12621f9c;
  /* 12621e75 mov esi, esp */
  ESI = (ESP);
  /* 12621e77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621e79 push 0x1264f430 */
  push32((uint32_t)(0x1264f430u));
  /* 12621e7e call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621e84u);
  /* 12621e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621e87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621e89 call 0x126222d0 */
  push32(0x12621e8eu); f_126222d0();
  /* 12621e8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621e90 jne 0x12621f9c */
  if (!C.zf) goto L_12621f9c;
  /* 12621e96 mov esi, esp */
  ESI = (ESP);
  /* 12621e98 push 6 */
  push32((uint32_t)(0x6u));
  /* 12621e9a push 0x1264f430 */
  push32((uint32_t)(0x1264f430u));
  /* 12621e9f call dword ptr [0x12652400] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652400))), 0x12621ea5u);
  /* 12621ea5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621ea8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621eaa call 0x126222d0 */
  push32(0x12621eafu); f_126222d0();
  /* 12621eaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12621eb1 jne 0x12621f9c */
  if (!C.zf) goto L_12621f9c;
  /* 12621eb7 mov esi, esp */
  ESI = (ESP);
  /* 12621eb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621ebb push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12621ebd call dword ptr [0x126523d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523d4))), 0x12621ec3u);
  /* 12621ec3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621ec6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621ec8 call 0x126222d0 */
  push32(0x12621ecdu); f_126222d0();
  /* 12621ecd mov esi, esp */
  ESI = (ESP);
  /* 12621ecf push 0x1264a158 */
  push32((uint32_t)(0x1264a158u));
  /* 12621ed4 call dword ptr [0x126523f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523f0))), 0x12621edau);
  /* 12621eda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621edf call 0x126222d0 */
  push32(0x12621ee4u); f_126222d0();
  /* 12621ee4 mov esi, esp */
  ESI = (ESP);
  /* 12621ee6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 12621eed push 0 */
  push32((uint32_t)(0x0u));
  /* 12621eef call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621ef5u);
  /* 12621ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621efa call 0x126222d0 */
  push32(0x12621effu); f_126222d0();
  /* 12621eff mov esi, esp */
  ESI = (ESP);
  /* 12621f01 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621f06 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621f0a call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621f10u);
  /* 12621f10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f15 call 0x126222d0 */
  push32(0x12621f1au); f_126222d0();
  /* 12621f1a mov esi, esp */
  ESI = (ESP);
  /* 12621f1c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 12621f21 push 4 */
  push32((uint32_t)(0x4u));
  /* 12621f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621f25 call dword ptr [0x12652408] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652408))), 0x12621f2bu);
  /* 12621f2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f30 call 0x126222d0 */
  push32(0x12621f35u); f_126222d0();
  /* 12621f35 mov esi, esp */
  ESI = (ESP);
  /* 12621f37 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621f39 push 0x1264f468 */
  push32((uint32_t)(0x1264f468u));
  /* 12621f3e push 5 */
  push32((uint32_t)(0x5u));
  /* 12621f40 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621f46u);
  /* 12621f46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f4b call 0x126222d0 */
  push32(0x12621f50u); f_126222d0();
  /* 12621f50 mov esi, esp */
  ESI = (ESP);
  /* 12621f52 push 1 */
  push32((uint32_t)(0x1u));
  /* 12621f54 push 0x1264f488 */
  push32((uint32_t)(0x1264f488u));
  /* 12621f59 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621f5b call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621f61u);
  /* 12621f61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f66 call 0x126222d0 */
  push32(0x12621f6bu); f_126222d0();
  /* 12621f6b mov esi, esp */
  ESI = (ESP);
  /* 12621f6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12621f6f push 0x1264f4b0 */
  push32((uint32_t)(0x1264f4b0u));
  /* 12621f74 push 5 */
  push32((uint32_t)(0x5u));
  /* 12621f76 call dword ptr [0x126523e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e0))), 0x12621f7cu);
  /* 12621f7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f81 call 0x126222d0 */
  push32(0x12621f86u); f_126222d0();
  /* 12621f86 mov esi, esp */
  ESI = (ESP);
  /* 12621f88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12621f8a push 5 */
  push32((uint32_t)(0x5u));
  /* 12621f8c call dword ptr [0x126523e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126523e4))), 0x12621f92u);
  /* 12621f92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621f95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621f97 call 0x126222d0 */
  push32(0x12621f9cu); f_126222d0();
L_12621f9c:;
  /* 12621f9c pop edi */
  EDI = (pop32());
  /* 12621f9d pop esi */
  ESI = (pop32());
  /* 12621f9e pop ebx */
  EBX = (pop32());
  /* 12621f9f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12621fa2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12621fa4 call 0x126222d0 */
  push32(0x12621fa9u); f_126222d0();
  /* 12621fa9 mov esp, ebp */
  ESP = (EBP);
  /* 12621fab pop ebp */
  EBP = (pop32());
  /* 12621fac ret  */
  ESPCHK(0x12621510u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x126222d0 (56 bytes, 28 insns) */
void f_126222d0(void) {
  FTRACE(0x126222d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126222d0 jne 0x126222d3 */
  if (!C.zf) goto L_126222d3;
  /* 126222d2 ret  */
  ESPCHK(0x126222d0u, _esp0);
  ESP += 4; return;
L_126222d3:;
  /* 126222d3 push ebp */
  push32((uint32_t)(EBP));
  /* 126222d4 mov ebp, esp */
  EBP = (ESP);
  /* 126222d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126222d9 push eax */
  push32((uint32_t)(EAX));
  /* 126222da push edx */
  push32((uint32_t)(EDX));
  /* 126222db push ebx */
  push32((uint32_t)(EBX));
  /* 126222dc push esi */
  push32((uint32_t)(ESI));
  /* 126222dd push edi */
  push32((uint32_t)(EDI));
  /* 126222de push 0x1264a190 */
  push32((uint32_t)(0x1264a190u));
  /* 126222e3 push 0x1264a18c */
  push32((uint32_t)(0x1264a18cu));
  /* 126222e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 126222ea push 0x1264a17c */
  push32((uint32_t)(0x1264a17cu));
  /* 126222ef push 1 */
  push32((uint32_t)(0x1u));
  /* 126222f1 call 0x126226a0 */
  push32(0x126222f6u); f_126226a0();
  /* 126222f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126222f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126222fc jne 0x126222ff */
  if (!C.zf) goto L_126222ff;
  /* 126222fe int3  */
  x86_unimpl("int3 @ 0x126222fe");
L_126222ff:;
  /* 126222ff pop edi */
  EDI = (pop32());
  /* 12622300 pop esi */
  ESI = (pop32());
  /* 12622301 pop ebx */
  EBX = (pop32());
  /* 12622302 pop edx */
  EDX = (pop32());
  /* 12622303 pop eax */
  EAX = (pop32());
  /* 12622304 mov esp, ebp */
  ESP = (EBP);
  /* 12622306 pop ebp */
  EBP = (pop32());
  /* 12622307 ret  */
  ESPCHK(0x126222d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002310 @ 0x12622310 (313 bytes, 78 insns) */
void f_12622310(void) {
  FTRACE(0x12622310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622310 push ebp */
  push32((uint32_t)(EBP));
  /* 12622311 mov ebp, esp */
  EBP = (ESP);
  /* 12622313 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622317 jne 0x126223d7 */
  if (!C.zf) goto L_126223d7;
  /* 1262231d call dword ptr [0x126522a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a0))), 0x12622323u);
  /* 12622323 mov dword ptr [0x1264f510], eax */
  w32((uint32_t)(0x1264f510), (EAX));
  /* 12622328 push 1 */
  push32((uint32_t)(0x1u));
  /* 1262232a call 0x12625dd0 */
  push32(0x1262232fu); f_12625dd0();
  /* 1262232f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622332 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622334 jne 0x1262233d */
  if (!C.zf) goto L_1262233d;
  /* 12622336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12622338 jmp 0x12622445 */
  goto L_12622445;
L_1262233d:;
  /* 1262233d mov eax, dword ptr [0x1264f510] */
  EAX = (r32((uint32_t)(0x1264f510)));
  /* 12622342 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12622345 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262234a mov dword ptr [0x1264f51c], eax */
  w32((uint32_t)(0x1264f51c), (EAX));
  /* 1262234f mov ecx, dword ptr [0x1264f510] */
  ECX = (r32((uint32_t)(0x1264f510)));
  /* 12622355 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262235b mov dword ptr [0x1264f518], ecx */
  w32((uint32_t)(0x1264f518), (ECX));
  /* 12622361 mov edx, dword ptr [0x1264f518] */
  EDX = (r32((uint32_t)(0x1264f518)));
  /* 12622367 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1262236a add edx, dword ptr [0x1264f51c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264f51c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12622370 mov dword ptr [0x1264f514], edx */
  w32((uint32_t)(0x1264f514), (EDX));
  /* 12622376 mov eax, dword ptr [0x1264f510] */
  EAX = (r32((uint32_t)(0x1264f510)));
  /* 1262237b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1262237e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12622383 mov dword ptr [0x1264f510], eax */
  w32((uint32_t)(0x1264f510), (EAX));
  /* 12622388 call 0x12622f40 */
  push32(0x1262238du); f_12622f40();
  /* 1262238d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262238f jne 0x1262239d */
  if (!C.zf) goto L_1262239d;
  /* 12622391 call 0x12625e20 */
  push32(0x12622396u); f_12625e20();
  /* 12622396 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12622398 jmp 0x12622445 */
  goto L_12622445;
L_1262239d:;
  /* 1262239d call dword ptr [0x1265229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265229c))), 0x126223a3u);
  /* 126223a3 mov dword ptr [0x1265104c], eax */
  w32((uint32_t)(0x1265104c), (EAX));
  /* 126223a8 call 0x12625bb0 */
  push32(0x126223adu); f_12625bb0();
  /* 126223ad mov dword ptr [0x1264f4f8], eax */
  w32((uint32_t)(0x1264f4f8), (EAX));
  /* 126223b2 call 0x126231f0 */
  push32(0x126223b7u); f_126231f0();
  /* 126223b7 call 0x126256a0 */
  push32(0x126223bcu); f_126256a0();
  /* 126223bc call 0x12625550 */
  push32(0x126223c1u); f_12625550();
  /* 126223c1 call 0x12622d40 */
  push32(0x126223c6u); f_12622d40();
  /* 126223c6 mov ecx, dword ptr [0x1264f4f4] */
  ECX = (r32((uint32_t)(0x1264f4f4)));
  /* 126223cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126223cf mov dword ptr [0x1264f4f4], ecx */
  w32((uint32_t)(0x1264f4f4), (ECX));
  /* 126223d5 jmp 0x12622440 */
  goto L_12622440;
L_126223d7:;
  /* 126223d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126223db jne 0x12622430 */
  if (!C.zf) goto L_12622430;
  /* 126223dd cmp dword ptr [0x1264f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126223e4 jle 0x1262242a */
  if ((C.zf||C.sf!=C.of)) goto L_1262242a;
  /* 126223e6 mov edx, dword ptr [0x1264f4f4] */
  EDX = (r32((uint32_t)(0x1264f4f4)));
  /* 126223ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126223ef mov dword ptr [0x1264f4f4], edx */
  w32((uint32_t)(0x1264f4f4), (EDX));
  /* 126223f5 cmp dword ptr [0x1264f548], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f548))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126223fc jne 0x12622403 */
  if (!C.zf) goto L_12622403;
  /* 126223fe call 0x12622dc0 */
  push32(0x12622403u); f_12622dc0();
L_12622403:;
  /* 12622403 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12622405 call 0x12624af0 */
  push32(0x1262240au); f_12624af0();
  /* 1262240a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262240d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12622410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622412 je 0x12622419 */
  if (C.zf) goto L_12622419;
  /* 12622414 call 0x12625400 */
  push32(0x12622419u); f_12625400();
L_12622419:;
  /* 12622419 call 0x12623520 */
  push32(0x1262241eu); f_12623520();
  /* 1262241e call 0x12622fd0 */
  push32(0x12622423u); f_12622fd0();
  /* 12622423 call 0x12625e20 */
  push32(0x12622428u); f_12625e20();
  /* 12622428 jmp 0x1262242e */
  goto L_1262242e;
L_1262242a:;
  /* 1262242a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262242c jmp 0x12622445 */
  goto L_12622445;
L_1262242e:;
  /* 1262242e jmp 0x12622440 */
  goto L_12622440;
L_12622430:;
  /* 12622430 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622434 jne 0x12622440 */
  if (!C.zf) goto L_12622440;
  /* 12622436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622438 call 0x126230c0 */
  push32(0x1262243du); f_126230c0();
  /* 1262243d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622440:;
  /* 12622440 mov eax, 1 */
  EAX = (0x1u);
L_12622445:;
  /* 12622445 pop ebp */
  EBP = (pop32());
  /* 12622446 ret 0xc */
  ESPCHK(0x12622310u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12622450 (243 bytes, 86 insns) */
void f_12622450(void) {
  FTRACE(0x12622450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622450 push ebp */
  push32((uint32_t)(EBP));
  /* 12622451 mov ebp, esp */
  EBP = (ESP);
  /* 12622453 push ecx */
  push32((uint32_t)(ECX));
  /* 12622454 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1262245b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262245f jne 0x12622471 */
  if (!C.zf) goto L_12622471;
  /* 12622461 cmp dword ptr [0x1264f4f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f4f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622468 jne 0x12622471 */
  if (!C.zf) goto L_12622471;
  /* 1262246a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262246c jmp 0x1262253d */
  goto L_1262253d;
L_12622471:;
  /* 12622471 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622475 je 0x1262247d */
  if (C.zf) goto L_1262247d;
  /* 12622477 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262247b jne 0x126224bf */
  if (!C.zf) goto L_126224bf;
L_1262247d:;
  /* 1262247d cmp dword ptr [0x1265105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1265105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622484 je 0x1262249b */
  if (C.zf) goto L_1262249b;
  /* 12622486 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12622489 push eax */
  push32((uint32_t)(EAX));
  /* 1262248a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262248d push ecx */
  push32((uint32_t)(ECX));
  /* 1262248e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622491 push edx */
  push32((uint32_t)(EDX));
  /* 12622492 call dword ptr [0x1265105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265105c))), 0x12622498u);
  /* 12622498 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262249b:;
  /* 1262249b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262249f je 0x126224b5 */
  if (C.zf) goto L_126224b5;
  /* 126224a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126224a4 push eax */
  push32((uint32_t)(EAX));
  /* 126224a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126224a8 push ecx */
  push32((uint32_t)(ECX));
  /* 126224a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126224ac push edx */
  push32((uint32_t)(EDX));
  /* 126224ad call 0x12622310 */
  push32(0x126224b2u); f_12622310();
  /* 126224b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126224b5:;
  /* 126224b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126224b9 jne 0x126224bf */
  if (!C.zf) goto L_126224bf;
  /* 126224bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126224bd jmp 0x1262253d */
  goto L_1262253d;
L_126224bf:;
  /* 126224bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126224c2 push eax */
  push32((uint32_t)(EAX));
  /* 126224c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126224c6 push ecx */
  push32((uint32_t)(ECX));
  /* 126224c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126224ca push edx */
  push32((uint32_t)(EDX));
  /* 126224cb call 0x1262100a */
  push32(0x126224d0u); f_1262100a();
  /* 126224d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126224d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126224d7 jne 0x126224ee */
  if (!C.zf) goto L_126224ee;
  /* 126224d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126224dd jne 0x126224ee */
  if (!C.zf) goto L_126224ee;
  /* 126224df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126224e2 push eax */
  push32((uint32_t)(EAX));
  /* 126224e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126224e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126224e8 push ecx */
  push32((uint32_t)(ECX));
  /* 126224e9 call 0x12622310 */
  push32(0x126224eeu); f_12622310();
L_126224ee:;
  /* 126224ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126224f2 je 0x126224fa */
  if (C.zf) goto L_126224fa;
  /* 126224f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126224f8 jne 0x1262253a */
  if (!C.zf) goto L_1262253a;
L_126224fa:;
  /* 126224fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126224fd push edx */
  push32((uint32_t)(EDX));
  /* 126224fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12622501 push eax */
  push32((uint32_t)(EAX));
  /* 12622502 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622505 push ecx */
  push32((uint32_t)(ECX));
  /* 12622506 call 0x12622310 */
  push32(0x1262250bu); f_12622310();
  /* 1262250b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262250d jne 0x12622516 */
  if (!C.zf) goto L_12622516;
  /* 1262250f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12622516:;
  /* 12622516 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262251a je 0x1262253a */
  if (C.zf) goto L_1262253a;
  /* 1262251c cmp dword ptr [0x1265105c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1265105c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622523 je 0x1262253a */
  if (C.zf) goto L_1262253a;
  /* 12622525 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12622528 push edx */
  push32((uint32_t)(EDX));
  /* 12622529 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262252c push eax */
  push32((uint32_t)(EAX));
  /* 1262252d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622530 push ecx */
  push32((uint32_t)(ECX));
  /* 12622531 call dword ptr [0x1265105c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265105c))), 0x12622537u);
  /* 12622537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262253a:;
  /* 1262253a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262253d:;
  /* 1262253d mov esp, ebp */
  ESP = (EBP);
  /* 1262253f pop ebp */
  EBP = (pop32());
  /* 12622540 ret 0xc */
  ESPCHK(0x12622450u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12622550 (58 bytes, 18 insns) */
void f_12622550(void) {
  FTRACE(0x12622550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622550 push ebp */
  push32((uint32_t)(EBP));
  /* 12622551 mov ebp, esp */
  EBP = (ESP);
  /* 12622553 cmp dword ptr [0x1264f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262255a je 0x1262256e */
  if (C.zf) goto L_1262256e;
  /* 1262255c cmp dword ptr [0x1264f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622563 jne 0x12622573 */
  if (!C.zf) goto L_12622573;
  /* 12622565 cmp dword ptr [0x1264f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262256c jne 0x12622573 */
  if (!C.zf) goto L_12622573;
L_1262256e:;
  /* 1262256e call 0x12625ec0 */
  push32(0x12622573u); f_12625ec0();
L_12622573:;
  /* 12622573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622576 push eax */
  push32((uint32_t)(EAX));
  /* 12622577 call 0x12625f10 */
  push32(0x1262257cu); f_12625f10();
  /* 1262257c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262257f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12622584 call dword ptr [0x1264da30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264da30))), 0x1262258au);
  /* 1262258a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262258d pop ebp */
  EBP = (pop32());
  /* 1262258e ret  */
  ESPCHK(0x12622550u, _esp0);
  ESP += 4; return;
}

/* FUN_10002590 @ 0x12622590 (11 bytes, 5 insns) */
void f_12622590(void) {
  FTRACE(0x12622590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622590 push ebp */
  push32((uint32_t)(EBP));
  /* 12622591 mov ebp, esp */
  EBP = (ESP);
  /* 12622593 call dword ptr [0x126522a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a4))), 0x12622599u);
  /* 12622599 pop ebp */
  EBP = (pop32());
  /* 1262259a ret  */
  ESPCHK(0x12622590u, _esp0);
  ESP += 4; return;
}

/* FUN_100025a0 @ 0x126225a0 (87 bytes, 30 insns) */
void f_126225a0(void) {
  FTRACE(0x126225a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126225a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126225a1 mov ebp, esp */
  EBP = (ESP);
  /* 126225a3 push ecx */
  push32((uint32_t)(ECX));
  /* 126225a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126225a8 jl 0x126225b0 */
  if ((C.sf!=C.of)) goto L_126225b0;
  /* 126225aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126225ae jl 0x126225b5 */
  if ((C.sf!=C.of)) goto L_126225b5;
L_126225b0:;
  /* 126225b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126225b3 jmp 0x126225f3 */
  goto L_126225f3;
L_126225b5:;
  /* 126225b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126225b9 jne 0x126225c7 */
  if (!C.zf) goto L_126225c7;
  /* 126225bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126225be mov eax, dword ptr [eax*4 + 0x1264da38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1264da38)));
  /* 126225c5 jmp 0x126225f3 */
  goto L_126225f3;
L_126225c7:;
  /* 126225c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126225ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 126225cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126225cf je 0x126225d6 */
  if (C.zf) goto L_126225d6;
  /* 126225d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126225d4 jmp 0x126225f3 */
  goto L_126225f3;
L_126225d6:;
  /* 126225d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126225d9 mov eax, dword ptr [edx*4 + 0x1264da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264da38)));
  /* 126225e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126225e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126225e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126225e9 mov dword ptr [ecx*4 + 0x1264da38], edx */
  w32((uint32_t)(ECX*4 + 0x1264da38), (EDX));
  /* 126225f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_126225f3:;
  /* 126225f3 mov esp, ebp */
  ESP = (EBP);
  /* 126225f5 pop ebp */
  EBP = (pop32());
  /* 126225f6 ret  */
  ESPCHK(0x126225a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12622600 (126 bytes, 38 insns) */
void f_12622600(void) {
  FTRACE(0x12622600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622600 push ebp */
  push32((uint32_t)(EBP));
  /* 12622601 mov ebp, esp */
  EBP = (ESP);
  /* 12622603 push ecx */
  push32((uint32_t)(ECX));
  /* 12622604 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622608 jl 0x12622610 */
  if ((C.sf!=C.of)) goto L_12622610;
  /* 1262260a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262260e jl 0x12622617 */
  if ((C.sf!=C.of)) goto L_12622617;
L_12622610:;
  /* 12622610 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12622615 jmp 0x1262267a */
  goto L_1262267a;
L_12622617:;
  /* 12622617 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262261b jne 0x12622629 */
  if (!C.zf) goto L_12622629;
  /* 1262261d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622620 mov eax, dword ptr [eax*4 + 0x1264da44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1264da44)));
  /* 12622627 jmp 0x1262267a */
  goto L_1262267a;
L_12622629:;
  /* 12622629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262262c mov edx, dword ptr [ecx*4 + 0x1264da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da44)));
  /* 12622633 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12622636 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262263a jne 0x12622650 */
  if (!C.zf) goto L_12622650;
  /* 1262263c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1262263e call dword ptr [0x126522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a8))), 0x12622644u);
  /* 12622644 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622647 mov dword ptr [ecx*4 + 0x1264da44], eax */
  w32((uint32_t)(ECX*4 + 0x1264da44), (EAX));
  /* 1262264e jmp 0x12622677 */
  goto L_12622677;
L_12622650:;
  /* 12622650 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622654 jne 0x1262266a */
  if (!C.zf) goto L_1262266a;
  /* 12622656 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12622658 call dword ptr [0x126522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a8))), 0x1262265eu);
  /* 1262265e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622661 mov dword ptr [edx*4 + 0x1264da44], eax */
  w32((uint32_t)(EDX*4 + 0x1264da44), (EAX));
  /* 12622668 jmp 0x12622677 */
  goto L_12622677;
L_1262266a:;
  /* 1262266a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262266d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12622670 mov dword ptr [eax*4 + 0x1264da44], ecx */
  w32((uint32_t)(EAX*4 + 0x1264da44), (ECX));
L_12622677:;
  /* 12622677 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1262267a:;
  /* 1262267a mov esp, ebp */
  ESP = (EBP);
  /* 1262267c pop ebp */
  EBP = (pop32());
  /* 1262267d ret  */
  ESPCHK(0x12622600u, _esp0);
  ESP += 4; return;
}

/* FUN_10002680 @ 0x12622680 (28 bytes, 11 insns) */
void f_12622680(void) {
  FTRACE(0x12622680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622680 push ebp */
  push32((uint32_t)(EBP));
  /* 12622681 mov ebp, esp */
  EBP = (ESP);
  /* 12622683 push ecx */
  push32((uint32_t)(ECX));
  /* 12622684 mov eax, dword ptr [0x12651040] */
  EAX = (r32((uint32_t)(0x12651040)));
  /* 12622689 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262268c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262268f mov dword ptr [0x12651040], ecx */
  w32((uint32_t)(0x12651040), (ECX));
  /* 12622695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622698 mov esp, ebp */
  ESP = (EBP);
  /* 1262269a pop ebp */
  EBP = (pop32());
  /* 1262269b ret  */
  ESPCHK(0x12622680u, _esp0);
  ESP += 4; return;
}

/* FUN_100026a0 @ 0x126226a0 (912 bytes, 248 insns) */
void f_126226a0(void) {
  FTRACE(0x126226a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126226a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126226a1 mov ebp, esp */
  EBP = (ESP);
  /* 126226a3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 126226a8 call 0x12626780 */
  push32(0x126226adu); f_12626780();
  /* 126226ad push edi */
  push32((uint32_t)(EDI));
  /* 126226ae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 126226b5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 126226ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126226bc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 126226c2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126226c4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 126226c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 126226c7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 126226ce mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 126226d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126226d5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 126226db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126226dd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 126226df stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 126226e0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 126226e7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 126226ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126226ee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 126226f4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 126226f6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 126226f8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 126226f9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 126226fc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12622702 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622706 jl 0x1262270e */
  if ((C.sf!=C.of)) goto L_1262270e;
  /* 12622708 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262270c jl 0x12622716 */
  if ((C.sf!=C.of)) goto L_12622716;
L_1262270e:;
  /* 1262270e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12622711 jmp 0x12622a2b */
  goto L_12622a2b;
L_12622716:;
  /* 12622716 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262271a jne 0x126227c0 */
  if (!C.zf) goto L_126227c0;
  /* 12622720 push 0x1264da34 */
  push32((uint32_t)(0x1264da34u));
  /* 12622725 call dword ptr [0x126522c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c0))), 0x1262272bu);
  /* 1262272b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262272d jle 0x126227c0 */
  if ((C.zf||C.sf!=C.of)) goto L_126227c0;
  /* 12622733 cmp dword ptr [0x1264f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262273a jne 0x1262277e */
  if (!C.zf) goto L_1262277e;
  /* 1262273c push 0x1264a338 */
  push32((uint32_t)(0x1264a338u));
  /* 12622741 call dword ptr [0x126522bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522bc))), 0x12622747u);
  /* 12622747 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1262274d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622754 je 0x12622776 */
  if (C.zf) goto L_12622776;
  /* 12622756 push 0x1264a32c */
  push32((uint32_t)(0x1264a32cu));
  /* 1262275b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12622761 push ecx */
  push32((uint32_t)(ECX));
  /* 12622762 call dword ptr [0x126522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b8))), 0x12622768u);
  /* 12622768 mov dword ptr [0x1264f508], eax */
  w32((uint32_t)(0x1264f508), (EAX));
  /* 1262276d cmp dword ptr [0x1264f508], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f508))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622774 jne 0x1262277e */
  if (!C.zf) goto L_1262277e;
L_12622776:;
  /* 12622776 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12622779 jmp 0x12622a2b */
  goto L_12622a2b;
L_1262277e:;
  /* 1262277e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12622781 push edx */
  push32((uint32_t)(EDX));
  /* 12622782 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12622785 push eax */
  push32((uint32_t)(EAX));
  /* 12622786 push 0x1264a2f8 */
  push32((uint32_t)(0x1264a2f8u));
  /* 1262278b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12622791 push ecx */
  push32((uint32_t)(ECX));
  /* 12622792 call dword ptr [0x1264f508] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f508))), 0x12622798u);
  /* 12622798 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262279b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 126227a1 push edx */
  push32((uint32_t)(EDX));
  /* 126227a2 call dword ptr [0x126522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b4))), 0x126227a8u);
  /* 126227a8 push 0x1264da34 */
  push32((uint32_t)(0x1264da34u));
  /* 126227ad call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x126227b3u);
  /* 126227b3 call 0x12622590 */
  push32(0x126227b8u); f_12622590();
  /* 126227b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126227bb jmp 0x12622a2b */
  goto L_12622a2b;
L_126227c0:;
  /* 126227c0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126227c4 je 0x126227fd */
  if (C.zf) goto L_126227fd;
  /* 126227c6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 126227cc push eax */
  push32((uint32_t)(EAX));
  /* 126227cd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 126227d0 push ecx */
  push32((uint32_t)(ECX));
  /* 126227d1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 126227d6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 126227dc push edx */
  push32((uint32_t)(EDX));
  /* 126227dd call 0x12626680 */
  push32(0x126227e2u); f_12626680();
  /* 126227e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126227e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126227e7 jge 0x126227fd */
  if ((C.sf==C.of)) goto L_126227fd;
  /* 126227e9 push 0x1264a2cc */
  push32((uint32_t)(0x1264a2ccu));
  /* 126227ee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 126227f4 push eax */
  push32((uint32_t)(EAX));
  /* 126227f5 call 0x12626590 */
  push32(0x126227fau); f_12626590();
  /* 126227fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126227fd:;
  /* 126227fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622801 jne 0x12622835 */
  if (!C.zf) goto L_12622835;
  /* 12622803 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622807 je 0x12622815 */
  if (C.zf) goto L_12622815;
  /* 12622809 mov dword ptr [ebp - 0x3028], 0x1264a2b8 */
  w32((uint32_t)(EBP + -0x3028), (0x1264a2b8u));
  /* 12622813 jmp 0x1262281f */
  goto L_1262281f;
L_12622815:;
  /* 12622815 mov dword ptr [ebp - 0x3028], 0x1264a2a4 */
  w32((uint32_t)(EBP + -0x3028), (0x1264a2a4u));
L_1262281f:;
  /* 1262281f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12622825 push ecx */
  push32((uint32_t)(ECX));
  /* 12622826 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1262282c push edx */
  push32((uint32_t)(EDX));
  /* 1262282d call 0x12626590 */
  push32(0x12622832u); f_12626590();
  /* 12622832 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622835:;
  /* 12622835 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1262283b push eax */
  push32((uint32_t)(EAX));
  /* 1262283c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12622842 push ecx */
  push32((uint32_t)(ECX));
  /* 12622843 call 0x126265a0 */
  push32(0x12622848u); f_126265a0();
  /* 12622848 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262284b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262284f jne 0x1262288a */
  if (!C.zf) goto L_1262288a;
  /* 12622851 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622854 mov eax, dword ptr [edx*4 + 0x1264da38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264da38)));
  /* 1262285b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1262285e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622860 je 0x12622876 */
  if (C.zf) goto L_12622876;
  /* 12622862 push 0x1264a2a0 */
  push32((uint32_t)(0x1264a2a0u));
  /* 12622867 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1262286d push ecx */
  push32((uint32_t)(ECX));
  /* 1262286e call 0x126265a0 */
  push32(0x12622873u); f_126265a0();
  /* 12622873 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622876:;
  /* 12622876 push 0x1264a29c */
  push32((uint32_t)(0x1264a29cu));
  /* 1262287b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12622881 push edx */
  push32((uint32_t)(EDX));
  /* 12622882 call 0x126265a0 */
  push32(0x12622887u); f_126265a0();
  /* 12622887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262288a:;
  /* 1262288a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262288e je 0x126228d2 */
  if (C.zf) goto L_126228d2;
  /* 12622890 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12622896 push eax */
  push32((uint32_t)(EAX));
  /* 12622897 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262289a push ecx */
  push32((uint32_t)(ECX));
  /* 1262289b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262289e push edx */
  push32((uint32_t)(EDX));
  /* 1262289f push 0x1264a290 */
  push32((uint32_t)(0x1264a290u));
  /* 126228a4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 126228a9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 126228af push eax */
  push32((uint32_t)(EAX));
  /* 126228b0 call 0x12626490 */
  push32(0x126228b5u); f_12626490();
  /* 126228b5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126228b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126228ba jge 0x126228d0 */
  if ((C.sf==C.of)) goto L_126228d0;
  /* 126228bc push 0x1264a2cc */
  push32((uint32_t)(0x1264a2ccu));
  /* 126228c1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 126228c7 push ecx */
  push32((uint32_t)(ECX));
  /* 126228c8 call 0x12626590 */
  push32(0x126228cdu); f_12626590();
  /* 126228cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126228d0:;
  /* 126228d0 jmp 0x126228e8 */
  goto L_126228e8;
L_126228d2:;
  /* 126228d2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 126228d8 push edx */
  push32((uint32_t)(EDX));
  /* 126228d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 126228df push eax */
  push32((uint32_t)(EAX));
  /* 126228e0 call 0x12626590 */
  push32(0x126228e5u); f_12626590();
  /* 126228e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126228e8:;
  /* 126228e8 cmp dword ptr [0x12651040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126228ef je 0x1262292c */
  if (C.zf) goto L_1262292c;
  /* 126228f1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 126228f7 push ecx */
  push32((uint32_t)(ECX));
  /* 126228f8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 126228fe push edx */
  push32((uint32_t)(EDX));
  /* 126228ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622902 push eax */
  push32((uint32_t)(EAX));
  /* 12622903 call dword ptr [0x12651040] */
  call_ind((uint32_t)(r32((uint32_t)(0x12651040))), 0x12622909u);
  /* 12622909 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262290c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262290e je 0x1262292c */
  if (C.zf) goto L_1262292c;
  /* 12622910 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622914 jne 0x12622921 */
  if (!C.zf) goto L_12622921;
  /* 12622916 push 0x1264da34 */
  push32((uint32_t)(0x1264da34u));
  /* 1262291b call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12622921u);
L_12622921:;
  /* 12622921 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12622927 jmp 0x12622a2b */
  goto L_12622a2b;
L_1262292c:;
  /* 1262292c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262292f mov edx, dword ptr [ecx*4 + 0x1264da38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da38)));
  /* 12622936 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12622939 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262293b je 0x1262297b */
  if (C.zf) goto L_1262297b;
  /* 1262293d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622940 cmp dword ptr [eax*4 + 0x1264da44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1264da44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622948 je 0x1262297b */
  if (C.zf) goto L_1262297b;
  /* 1262294a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262294c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12622952 push ecx */
  push32((uint32_t)(ECX));
  /* 12622953 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12622959 push edx */
  push32((uint32_t)(EDX));
  /* 1262295a call 0x12626410 */
  push32(0x1262295fu); f_12626410();
  /* 1262295f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622962 push eax */
  push32((uint32_t)(EAX));
  /* 12622963 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12622969 push eax */
  push32((uint32_t)(EAX));
  /* 1262296a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262296d mov edx, dword ptr [ecx*4 + 0x1264da44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da44)));
  /* 12622974 push edx */
  push32((uint32_t)(EDX));
  /* 12622975 call dword ptr [0x126522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ac))), 0x1262297bu);
L_1262297b:;
  /* 1262297b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262297e mov ecx, dword ptr [eax*4 + 0x1264da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264da38)));
  /* 12622985 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12622988 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262298a je 0x12622999 */
  if (C.zf) goto L_12622999;
  /* 1262298c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12622992 push edx */
  push32((uint32_t)(EDX));
  /* 12622993 call dword ptr [0x126522b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b4))), 0x12622999u);
L_12622999:;
  /* 12622999 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262299c mov ecx, dword ptr [eax*4 + 0x1264da38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264da38)));
  /* 126229a3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 126229a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126229a8 je 0x12622a18 */
  if (C.zf) goto L_12622a18;
  /* 126229aa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126229ae je 0x126229cd */
  if (C.zf) goto L_126229cd;
  /* 126229b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 126229b2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 126229b8 push edx */
  push32((uint32_t)(EDX));
  /* 126229b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126229bc push eax */
  push32((uint32_t)(EAX));
  /* 126229bd call 0x12626120 */
  push32(0x126229c2u); f_12626120();
  /* 126229c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126229c5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 126229cb jmp 0x126229d7 */
  goto L_126229d7;
L_126229cd:;
  /* 126229cd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_126229d7:;
  /* 126229d7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 126229dd push ecx */
  push32((uint32_t)(ECX));
  /* 126229de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126229e1 push edx */
  push32((uint32_t)(EDX));
  /* 126229e2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 126229e8 push eax */
  push32((uint32_t)(EAX));
  /* 126229e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126229ec push ecx */
  push32((uint32_t)(ECX));
  /* 126229ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126229f0 push edx */
  push32((uint32_t)(EDX));
  /* 126229f1 call 0x12622a30 */
  push32(0x126229f6u); f_12622a30();
  /* 126229f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126229f9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 126229ff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622a03 jne 0x12622a10 */
  if (!C.zf) goto L_12622a10;
  /* 12622a05 push 0x1264da34 */
  push32((uint32_t)(0x1264da34u));
  /* 12622a0a call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12622a10u);
L_12622a10:;
  /* 12622a10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12622a16 jmp 0x12622a2b */
  goto L_12622a2b;
L_12622a18:;
  /* 12622a18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622a1c jne 0x12622a29 */
  if (!C.zf) goto L_12622a29;
  /* 12622a1e push 0x1264da34 */
  push32((uint32_t)(0x1264da34u));
  /* 12622a23 call dword ptr [0x126522b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b0))), 0x12622a29u);
L_12622a29:;
  /* 12622a29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12622a2b:;
  /* 12622a2b pop edi */
  EDI = (pop32());
  /* 12622a2c mov esp, ebp */
  ESP = (EBP);
  /* 12622a2e pop ebp */
  EBP = (pop32());
  /* 12622a2f ret  */
  ESPCHK(0x126226a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002a30 @ 0x12622a30 (780 bytes, 197 insns) */
void f_12622a30(void) {
  FTRACE(0x12622a30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622a30 push ebp */
  push32((uint32_t)(EBP));
  /* 12622a31 mov ebp, esp */
  EBP = (ESP);
  /* 12622a33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12622a38 call 0x12626780 */
  push32(0x12622a3du); f_12626780();
L_12622a3d:;
  /* 12622a3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622a41 jne 0x12622a68 */
  if (!C.zf) goto L_12622a68;
  /* 12622a43 push 0x1264a488 */
  push32((uint32_t)(0x1264a488u));
  /* 12622a48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622a4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12622a4f push 0x1264a47c */
  push32((uint32_t)(0x1264a47cu));
  /* 12622a54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12622a56 call 0x126226a0 */
  push32(0x12622a5bu); f_126226a0();
  /* 12622a5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622a5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622a61 jne 0x12622a68 */
  if (!C.zf) goto L_12622a68;
  /* 12622a63 call 0x12622590 */
  push32(0x12622a68u); f_12622590();
L_12622a68:;
  /* 12622a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12622a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622a6c jne 0x12622a3d */
  if (!C.zf) goto L_12622a3d;
  /* 12622a6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12622a73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12622a79 push ecx */
  push32((uint32_t)(ECX));
  /* 12622a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 12622a7c call dword ptr [0x126522c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c4))), 0x12622a82u);
  /* 12622a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622a84 jne 0x12622a9a */
  if (!C.zf) goto L_12622a9a;
  /* 12622a86 push 0x1264a464 */
  push32((uint32_t)(0x1264a464u));
  /* 12622a8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12622a91 push edx */
  push32((uint32_t)(EDX));
  /* 12622a92 call 0x12626590 */
  push32(0x12622a97u); f_12626590();
  /* 12622a97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622a9a:;
  /* 12622a9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12622aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12622aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622aa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12622aa7 call 0x12626410 */
  push32(0x12622aacu); f_12626410();
  /* 12622aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622aaf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622ab2 jbe 0x12622add */
  if ((C.cf||C.zf)) goto L_12622add;
  /* 12622ab4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622ab7 push edx */
  push32((uint32_t)(EDX));
  /* 12622ab8 call 0x12626410 */
  push32(0x12622abdu); f_12626410();
  /* 12622abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622ac0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622ac3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12622ac7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12622aca push 3 */
  push32((uint32_t)(0x3u));
  /* 12622acc push 0x1264a460 */
  push32((uint32_t)(0x1264a460u));
  /* 12622ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622ad4 push eax */
  push32((uint32_t)(EAX));
  /* 12622ad5 call 0x12626e00 */
  push32(0x12622adau); f_12626e00();
  /* 12622ada add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622add:;
  /* 12622add mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12622ae0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12622ae6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622aed je 0x12622b38 */
  if (C.zf) goto L_12622b38;
  /* 12622aef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12622af5 push edx */
  push32((uint32_t)(EDX));
  /* 12622af6 call 0x12626410 */
  push32(0x12622afbu); f_12626410();
  /* 12622afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622afe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622b01 jbe 0x12622b38 */
  if ((C.cf||C.zf)) goto L_12622b38;
  /* 12622b03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12622b09 push eax */
  push32((uint32_t)(EAX));
  /* 12622b0a call 0x12626410 */
  push32(0x12622b0fu); f_12626410();
  /* 12622b0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622b12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12622b18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12622b1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12622b22 push 3 */
  push32((uint32_t)(0x3u));
  /* 12622b24 push 0x1264a460 */
  push32((uint32_t)(0x1264a460u));
  /* 12622b29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12622b2f push eax */
  push32((uint32_t)(EAX));
  /* 12622b30 call 0x12626e00 */
  push32(0x12622b35u); f_12626e00();
  /* 12622b35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622b38:;
  /* 12622b38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622b3c jne 0x12622b4a */
  if (!C.zf) goto L_12622b4a;
  /* 12622b3e mov dword ptr [ebp - 0x1114], 0x1264a3ec */
  w32((uint32_t)(EBP + -0x1114), (0x1264a3ecu));
  /* 12622b48 jmp 0x12622b54 */
  goto L_12622b54;
L_12622b4a:;
  /* 12622b4a mov dword ptr [ebp - 0x1114], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1114), (0x1264a18cu));
L_12622b54:;
  /* 12622b54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12622b57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12622b5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12622b5c je 0x12622b69 */
  if (C.zf) goto L_12622b69;
  /* 12622b5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12622b61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12622b67 jmp 0x12622b73 */
  goto L_12622b73;
L_12622b69:;
  /* 12622b69 mov dword ptr [ebp - 0x1118], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1118), (0x1264a18cu));
L_12622b73:;
  /* 12622b73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12622b76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12622b79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12622b7b je 0x12622b8f */
  if (C.zf) goto L_12622b8f;
  /* 12622b7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622b81 jne 0x12622b8f */
  if (!C.zf) goto L_12622b8f;
  /* 12622b83 mov dword ptr [ebp - 0x111c], 0x1264a3dc */
  w32((uint32_t)(EBP + -0x111c), (0x1264a3dcu));
  /* 12622b8d jmp 0x12622b99 */
  goto L_12622b99;
L_12622b8f:;
  /* 12622b8f mov dword ptr [ebp - 0x111c], 0x1264a18c */
  w32((uint32_t)(EBP + -0x111c), (0x1264a18cu));
L_12622b99:;
  /* 12622b99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12622b9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12622b9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12622ba1 je 0x12622baf */
  if (C.zf) goto L_12622baf;
  /* 12622ba3 mov dword ptr [ebp - 0x1120], 0x1264a3d8 */
  w32((uint32_t)(EBP + -0x1120), (0x1264a3d8u));
  /* 12622bad jmp 0x12622bb9 */
  goto L_12622bb9;
L_12622baf:;
  /* 12622baf mov dword ptr [ebp - 0x1120], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1120), (0x1264a18cu));
L_12622bb9:;
  /* 12622bb9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622bbd je 0x12622bca */
  if (C.zf) goto L_12622bca;
  /* 12622bbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12622bc2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12622bc8 jmp 0x12622bd4 */
  goto L_12622bd4;
L_12622bca:;
  /* 12622bca mov dword ptr [ebp - 0x1124], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1124), (0x1264a18cu));
L_12622bd4:;
  /* 12622bd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622bd8 je 0x12622be6 */
  if (C.zf) goto L_12622be6;
  /* 12622bda mov dword ptr [ebp - 0x1128], 0x1264a3d0 */
  w32((uint32_t)(EBP + -0x1128), (0x1264a3d0u));
  /* 12622be4 jmp 0x12622bf0 */
  goto L_12622bf0;
L_12622be6:;
  /* 12622be6 mov dword ptr [ebp - 0x1128], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1128), (0x1264a18cu));
L_12622bf0:;
  /* 12622bf0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622bf4 je 0x12622c01 */
  if (C.zf) goto L_12622c01;
  /* 12622bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12622bf9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 12622bff jmp 0x12622c0b */
  goto L_12622c0b;
L_12622c01:;
  /* 12622c01 mov dword ptr [ebp - 0x112c], 0x1264a18c */
  w32((uint32_t)(EBP + -0x112c), (0x1264a18cu));
L_12622c0b:;
  /* 12622c0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622c0f je 0x12622c1d */
  if (C.zf) goto L_12622c1d;
  /* 12622c11 mov dword ptr [ebp - 0x1130], 0x1264a3c8 */
  w32((uint32_t)(EBP + -0x1130), (0x1264a3c8u));
  /* 12622c1b jmp 0x12622c27 */
  goto L_12622c27;
L_12622c1d:;
  /* 12622c1d mov dword ptr [ebp - 0x1130], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1130), (0x1264a18cu));
L_12622c27:;
  /* 12622c27 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622c2e je 0x12622c3e */
  if (C.zf) goto L_12622c3e;
  /* 12622c30 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12622c36 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 12622c3c jmp 0x12622c48 */
  goto L_12622c48;
L_12622c3e:;
  /* 12622c3e mov dword ptr [ebp - 0x1134], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1134), (0x1264a18cu));
L_12622c48:;
  /* 12622c48 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622c4f je 0x12622c5d */
  if (C.zf) goto L_12622c5d;
  /* 12622c51 mov dword ptr [ebp - 0x1138], 0x1264a3bc */
  w32((uint32_t)(EBP + -0x1138), (0x1264a3bcu));
  /* 12622c5b jmp 0x12622c67 */
  goto L_12622c67;
L_12622c5d:;
  /* 12622c5d mov dword ptr [ebp - 0x1138], 0x1264a18c */
  w32((uint32_t)(EBP + -0x1138), (0x1264a18cu));
L_12622c67:;
  /* 12622c67 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 12622c6d push edx */
  push32((uint32_t)(EDX));
  /* 12622c6e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12622c74 push eax */
  push32((uint32_t)(EAX));
  /* 12622c75 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 12622c7b push ecx */
  push32((uint32_t)(ECX));
  /* 12622c7c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12622c82 push edx */
  push32((uint32_t)(EDX));
  /* 12622c83 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12622c89 push eax */
  push32((uint32_t)(EAX));
  /* 12622c8a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12622c90 push ecx */
  push32((uint32_t)(ECX));
  /* 12622c91 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12622c97 push edx */
  push32((uint32_t)(EDX));
  /* 12622c98 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 12622c9e push eax */
  push32((uint32_t)(EAX));
  /* 12622c9f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12622ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 12622ca6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 12622cac push edx */
  push32((uint32_t)(EDX));
  /* 12622cad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622cb0 push eax */
  push32((uint32_t)(EAX));
  /* 12622cb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622cb4 mov edx, dword ptr [ecx*4 + 0x1264da50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da50)));
  /* 12622cbb push edx */
  push32((uint32_t)(EDX));
  /* 12622cbc push 0x1264a368 */
  push32((uint32_t)(0x1264a368u));
  /* 12622cc1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12622cc6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 12622ccc push eax */
  push32((uint32_t)(EAX));
  /* 12622ccd call 0x12626490 */
  push32(0x12622cd2u); f_12626490();
  /* 12622cd2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622cd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622cd7 jge 0x12622ced */
  if ((C.sf==C.of)) goto L_12622ced;
  /* 12622cd9 push 0x1264a2cc */
  push32((uint32_t)(0x1264a2ccu));
  /* 12622cde lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12622ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 12622ce5 call 0x12626590 */
  push32(0x12622ceau); f_12626590();
  /* 12622cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622ced:;
  /* 12622ced push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 12622cf2 push 0x1264a344 */
  push32((uint32_t)(0x1264a344u));
  /* 12622cf7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 12622cfd push edx */
  push32((uint32_t)(EDX));
  /* 12622cfe call 0x12626d40 */
  push32(0x12622d03u); f_12626d40();
  /* 12622d03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622d06 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 12622d0c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622d13 jne 0x12622d26 */
  if (!C.zf) goto L_12622d26;
  /* 12622d15 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12622d17 call 0x12626a80 */
  push32(0x12622d1cu); f_12626a80();
  /* 12622d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622d1f push 3 */
  push32((uint32_t)(0x3u));
  /* 12622d21 call 0x12622da0 */
  push32(0x12622d26u); f_12622da0();
L_12622d26:;
  /* 12622d26 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622d2d jne 0x12622d36 */
  if (!C.zf) goto L_12622d36;
  /* 12622d2f mov eax, 1 */
  EAX = (0x1u);
  /* 12622d34 jmp 0x12622d38 */
  goto L_12622d38;
L_12622d36:;
  /* 12622d36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12622d38:;
  /* 12622d38 mov esp, ebp */
  ESP = (EBP);
  /* 12622d3a pop ebp */
  EBP = (pop32());
  /* 12622d3b ret  */
  ESPCHK(0x12622a30u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d40 @ 0x12622d40 (56 bytes, 15 insns) */
void f_12622d40(void) {
  FTRACE(0x12622d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12622d41 mov ebp, esp */
  EBP = (ESP);
  /* 12622d43 cmp dword ptr [0x1265103c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1265103c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622d4a je 0x12622d52 */
  if (C.zf) goto L_12622d52;
  /* 12622d4c call dword ptr [0x1265103c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265103c))), 0x12622d52u);
L_12622d52:;
  /* 12622d52 push 0x1264d418 */
  push32((uint32_t)(0x1264d418u));
  /* 12622d57 push 0x1264d208 */
  push32((uint32_t)(0x1264d208u));
  /* 12622d5c call 0x12622f10 */
  push32(0x12622d61u); f_12622f10();
  /* 12622d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622d64 push 0x1264d104 */
  push32((uint32_t)(0x1264d104u));
  /* 12622d69 push 0x1264d000 */
  push32((uint32_t)(0x1264d000u));
  /* 12622d6e call 0x12622f10 */
  push32(0x12622d73u); f_12622f10();
  /* 12622d73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622d76 pop ebp */
  EBP = (pop32());
  /* 12622d77 ret  */
  ESPCHK(0x12622d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002d80 @ 0x12622d80 (21 bytes, 10 insns) */
void f_12622d80(void) {
  FTRACE(0x12622d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12622d81 mov ebp, esp */
  EBP = (ESP);
  /* 12622d83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622d87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622d8a push eax */
  push32((uint32_t)(EAX));
  /* 12622d8b call 0x12622e00 */
  push32(0x12622d90u); f_12622e00();
  /* 12622d90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622d93 pop ebp */
  EBP = (pop32());
  /* 12622d94 ret  */
  ESPCHK(0x12622d80u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12622da0 (21 bytes, 10 insns) */
void f_12622da0(void) {
  FTRACE(0x12622da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12622da1 mov ebp, esp */
  EBP = (ESP);
  /* 12622da3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622da5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12622da7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622daa push eax */
  push32((uint32_t)(EAX));
  /* 12622dab call 0x12622e00 */
  push32(0x12622db0u); f_12622e00();
  /* 12622db0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622db3 pop ebp */
  EBP = (pop32());
  /* 12622db4 ret  */
  ESPCHK(0x12622da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002dc0 @ 0x12622dc0 (19 bytes, 9 insns) */
void f_12622dc0(void) {
  FTRACE(0x12622dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12622dc1 mov ebp, esp */
  EBP = (ESP);
  /* 12622dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12622dc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622dc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622dc9 call 0x12622e00 */
  push32(0x12622dceu); f_12622e00();
  /* 12622dce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622dd1 pop ebp */
  EBP = (pop32());
  /* 12622dd2 ret  */
  ESPCHK(0x12622dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002de0 @ 0x12622de0 (19 bytes, 9 insns) */
void f_12622de0(void) {
  FTRACE(0x12622de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622de0 push ebp */
  push32((uint32_t)(EBP));
  /* 12622de1 mov ebp, esp */
  EBP = (ESP);
  /* 12622de3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12622de5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12622de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12622de9 call 0x12622e00 */
  push32(0x12622deeu); f_12622e00();
  /* 12622dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622df1 pop ebp */
  EBP = (pop32());
  /* 12622df2 ret  */
  ESPCHK(0x12622de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002e00 @ 0x12622e00 (227 bytes, 61 insns) */
void f_12622e00(void) {
  FTRACE(0x12622e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622e00 push ebp */
  push32((uint32_t)(EBP));
  /* 12622e01 mov ebp, esp */
  EBP = (ESP);
  /* 12622e03 push ecx */
  push32((uint32_t)(ECX));
  /* 12622e04 call 0x12622ef0 */
  push32(0x12622e09u); f_12622ef0();
  /* 12622e09 cmp dword ptr [0x1264f54c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f54c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e10 jne 0x12622e23 */
  if (!C.zf) goto L_12622e23;
  /* 12622e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622e15 push eax */
  push32((uint32_t)(EAX));
  /* 12622e16 call dword ptr [0x126522d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d0))), 0x12622e1cu);
  /* 12622e1c push eax */
  push32((uint32_t)(EAX));
  /* 12622e1d call dword ptr [0x126522cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522cc))), 0x12622e23u);
L_12622e23:;
  /* 12622e23 mov dword ptr [0x1264f548], 1 */
  w32((uint32_t)(0x1264f548), (0x1u));
  /* 12622e2d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 12622e30 mov byte ptr [0x1264f544], cl */
  w8((uint32_t)(0x1264f544), (CL));
  /* 12622e36 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e3a jne 0x12622e83 */
  if (!C.zf) goto L_12622e83;
  /* 12622e3c cmp dword ptr [0x12651038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e43 je 0x12622e71 */
  if (C.zf) goto L_12622e71;
  /* 12622e45 mov edx, dword ptr [0x12651034] */
  EDX = (r32((uint32_t)(0x12651034)));
  /* 12622e4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12622e4e:;
  /* 12622e4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622e51 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12622e54 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12622e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622e5a cmp ecx, dword ptr [0x12651038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12651038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e60 jb 0x12622e71 */
  if (C.cf) goto L_12622e71;
  /* 12622e62 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622e65 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e68 je 0x12622e6f */
  if (C.zf) goto L_12622e6f;
  /* 12622e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622e6d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x12622e6fu);
L_12622e6f:;
  /* 12622e6f jmp 0x12622e4e */
  goto L_12622e4e;
L_12622e71:;
  /* 12622e71 push 0x1264d724 */
  push32((uint32_t)(0x1264d724u));
  /* 12622e76 push 0x1264d51c */
  push32((uint32_t)(0x1264d51cu));
  /* 12622e7b call 0x12622f10 */
  push32(0x12622e80u); f_12622f10();
  /* 12622e80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12622e83:;
  /* 12622e83 push 0x1264d92c */
  push32((uint32_t)(0x1264d92cu));
  /* 12622e88 push 0x1264d828 */
  push32((uint32_t)(0x1264d828u));
  /* 12622e8d call 0x12622f10 */
  push32(0x12622e92u); f_12622f10();
  /* 12622e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622e95 cmp dword ptr [0x1264f550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622e9c jne 0x12622ebe */
  if (!C.zf) goto L_12622ebe;
  /* 12622e9e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12622ea0 call 0x12624af0 */
  push32(0x12622ea5u); f_12624af0();
  /* 12622ea5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622ea8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12622eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622ead je 0x12622ebe */
  if (C.zf) goto L_12622ebe;
  /* 12622eaf mov dword ptr [0x1264f550], 1 */
  w32((uint32_t)(0x1264f550), (0x1u));
  /* 12622eb9 call 0x12625400 */
  push32(0x12622ebeu); f_12625400();
L_12622ebe:;
  /* 12622ebe cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622ec2 je 0x12622ecb */
  if (C.zf) goto L_12622ecb;
  /* 12622ec4 call 0x12622f00 */
  push32(0x12622ec9u); f_12622f00();
  /* 12622ec9 jmp 0x12622edf */
  goto L_12622edf;
L_12622ecb:;
  /* 12622ecb mov dword ptr [0x1264f54c], 1 */
  w32((uint32_t)(0x1264f54c), (0x1u));
  /* 12622ed5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622ed8 push ecx */
  push32((uint32_t)(ECX));
  /* 12622ed9 call dword ptr [0x126522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c8))), 0x12622edfu);
L_12622edf:;
  /* 12622edf mov esp, ebp */
  ESP = (EBP);
  /* 12622ee1 pop ebp */
  EBP = (pop32());
  /* 12622ee2 ret  */
  ESPCHK(0x12622e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10002ef0 @ 0x12622ef0 (15 bytes, 7 insns) */
void f_12622ef0(void) {
  FTRACE(0x12622ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12622ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12622ef3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12622ef5 call 0x12626fe0 */
  push32(0x12622efau); f_12626fe0();
  /* 12622efa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622efd pop ebp */
  EBP = (pop32());
  /* 12622efe ret  */
  ESPCHK(0x12622ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f00 @ 0x12622f00 (15 bytes, 7 insns) */
void f_12622f00(void) {
  FTRACE(0x12622f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12622f01 mov ebp, esp */
  EBP = (ESP);
  /* 12622f03 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12622f05 call 0x12627080 */
  push32(0x12622f0au); f_12627080();
  /* 12622f0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622f0d pop ebp */
  EBP = (pop32());
  /* 12622f0e ret  */
  ESPCHK(0x12622f00u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x12622f10 (37 bytes, 16 insns) */
void f_12622f10(void) {
  FTRACE(0x12622f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12622f11 mov ebp, esp */
  EBP = (ESP);
L_12622f13:;
  /* 12622f13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622f16 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622f19 jae 0x12622f33 */
  if (!C.cf) goto L_12622f33;
  /* 12622f1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622f1e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622f21 je 0x12622f28 */
  if (C.zf) goto L_12622f28;
  /* 12622f23 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622f26 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x12622f28u);
L_12622f28:;
  /* 12622f28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12622f2b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12622f2e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12622f31 jmp 0x12622f13 */
  goto L_12622f13;
L_12622f33:;
  /* 12622f33 pop ebp */
  EBP = (pop32());
  /* 12622f34 ret  */
  ESPCHK(0x12622f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10002f40 @ 0x12622f40 (130 bytes, 42 insns) */
void f_12622f40(void) {
  FTRACE(0x12622f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12622f41 mov ebp, esp */
  EBP = (ESP);
  /* 12622f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12622f44 call 0x12626f00 */
  push32(0x12622f49u); f_12626f00();
  /* 12622f49 call dword ptr [0x126522dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522dc))), 0x12622f4fu);
  /* 12622f4f mov dword ptr [0x1264da5c], eax */
  w32((uint32_t)(0x1264da5c), (EAX));
  /* 12622f54 cmp dword ptr [0x1264da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1264da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622f5b jne 0x12622f61 */
  if (!C.zf) goto L_12622f61;
  /* 12622f5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12622f5f jmp 0x12622fbe */
  goto L_12622fbe;
L_12622f61:;
  /* 12622f61 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12622f63 push 0x1264a4a0 */
  push32((uint32_t)(0x1264a4a0u));
  /* 12622f68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12622f6a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12622f6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12622f6e call 0x126239f0 */
  push32(0x12622f73u); f_126239f0();
  /* 12622f73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622f76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12622f79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622f7d je 0x12622f94 */
  if (C.zf) goto L_12622f94;
  /* 12622f7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622f82 push eax */
  push32((uint32_t)(EAX));
  /* 12622f83 mov ecx, dword ptr [0x1264da5c] */
  ECX = (r32((uint32_t)(0x1264da5c)));
  /* 12622f89 push ecx */
  push32((uint32_t)(ECX));
  /* 12622f8a call dword ptr [0x126522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d8))), 0x12622f90u);
  /* 12622f90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12622f92 jne 0x12622f98 */
  if (!C.zf) goto L_12622f98;
L_12622f94:;
  /* 12622f94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12622f96 jmp 0x12622fbe */
  goto L_12622fbe;
L_12622f98:;
  /* 12622f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622f9b push edx */
  push32((uint32_t)(EDX));
  /* 12622f9c call 0x12623000 */
  push32(0x12622fa1u); f_12623000();
  /* 12622fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12622fa4 call dword ptr [0x126522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d4))), 0x12622faau);
  /* 12622faa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622fad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12622faf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12622fb2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12622fb9 mov eax, 1 */
  EAX = (0x1u);
L_12622fbe:;
  /* 12622fbe mov esp, ebp */
  ESP = (EBP);
  /* 12622fc0 pop ebp */
  EBP = (pop32());
  /* 12622fc1 ret  */
  ESPCHK(0x12622f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10002fd0 @ 0x12622fd0 (41 bytes, 11 insns) */
void f_12622fd0(void) {
  FTRACE(0x12622fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12622fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12622fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12622fd3 call 0x12626f40 */
  push32(0x12622fd8u); f_12626f40();
  /* 12622fd8 cmp dword ptr [0x1264da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1264da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12622fdf je 0x12622ff7 */
  if (C.zf) goto L_12622ff7;
  /* 12622fe1 mov eax, dword ptr [0x1264da5c] */
  EAX = (r32((uint32_t)(0x1264da5c)));
  /* 12622fe6 push eax */
  push32((uint32_t)(EAX));
  /* 12622fe7 call dword ptr [0x126522e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522e0))), 0x12622fedu);
  /* 12622fed mov dword ptr [0x1264da5c], 0xffffffff */
  w32((uint32_t)(0x1264da5c), (0xffffffffu));
L_12622ff7:;
  /* 12622ff7 pop ebp */
  EBP = (pop32());
  /* 12622ff8 ret  */
  ESPCHK(0x12622fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003000 @ 0x12623000 (25 bytes, 8 insns) */
void f_12623000(void) {
  FTRACE(0x12623000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623000 push ebp */
  push32((uint32_t)(EBP));
  /* 12623001 mov ebp, esp */
  EBP = (ESP);
  /* 12623003 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623006 mov dword ptr [eax + 0x50], 0x1264dc00 */
  w32((uint32_t)(EAX + 0x50), (0x1264dc00u));
  /* 1262300d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623010 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 12623017 pop ebp */
  EBP = (pop32());
  /* 12623018 ret  */
  ESPCHK(0x12623000u, _esp0);
  ESP += 4; return;
}

/* FUN_10003020 @ 0x12623020 (152 bytes, 48 insns) */
void f_12623020(void) {
  FTRACE(0x12623020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623020 push ebp */
  push32((uint32_t)(EBP));
  /* 12623021 mov ebp, esp */
  EBP = (ESP);
  /* 12623023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623026 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x1262302cu);
  /* 1262302c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262302f mov eax, dword ptr [0x1264da5c] */
  EAX = (r32((uint32_t)(0x1264da5c)));
  /* 12623034 push eax */
  push32((uint32_t)(EAX));
  /* 12623035 call dword ptr [0x126522e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522e8))), 0x1262303bu);
  /* 1262303b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262303e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623042 jne 0x126230a7 */
  if (!C.zf) goto L_126230a7;
  /* 12623044 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 12623049 push 0x1264a4a0 */
  push32((uint32_t)(0x1264a4a0u));
  /* 1262304e push 2 */
  push32((uint32_t)(0x2u));
  /* 12623050 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12623052 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623054 call 0x126239f0 */
  push32(0x12623059u); f_126239f0();
  /* 12623059 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262305c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262305f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623063 je 0x1262309d */
  if (C.zf) goto L_1262309d;
  /* 12623065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623068 push ecx */
  push32((uint32_t)(ECX));
  /* 12623069 mov edx, dword ptr [0x1264da5c] */
  EDX = (r32((uint32_t)(0x1264da5c)));
  /* 1262306f push edx */
  push32((uint32_t)(EDX));
  /* 12623070 call dword ptr [0x126522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d8))), 0x12623076u);
  /* 12623076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623078 je 0x1262309d */
  if (C.zf) goto L_1262309d;
  /* 1262307a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262307d push eax */
  push32((uint32_t)(EAX));
  /* 1262307e call 0x12623000 */
  push32(0x12623083u); f_12623000();
  /* 12623083 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623086 call dword ptr [0x126522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d4))), 0x1262308cu);
  /* 1262308c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262308f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12623091 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623094 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1262309b jmp 0x126230a7 */
  goto L_126230a7;
L_1262309d:;
  /* 1262309d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1262309f call 0x12622550 */
  push32(0x126230a4u); f_12622550();
  /* 126230a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126230a7:;
  /* 126230a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126230aa push eax */
  push32((uint32_t)(EAX));
  /* 126230ab call dword ptr [0x126522e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522e4))), 0x126230b1u);
  /* 126230b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126230b4 mov esp, ebp */
  ESP = (EBP);
  /* 126230b6 pop ebp */
  EBP = (pop32());
  /* 126230b7 ret  */
  ESPCHK(0x12623020u, _esp0);
  ESP += 4; return;
}

/* FUN_100030c0 @ 0x126230c0 (263 bytes, 86 insns) */
void f_126230c0(void) {
  FTRACE(0x126230c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126230c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126230c1 mov ebp, esp */
  EBP = (ESP);
  /* 126230c3 cmp dword ptr [0x1264da5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1264da5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126230ca je 0x126231c5 */
  if (C.zf) goto L_126231c5;
  /* 126230d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126230d4 jne 0x126230e5 */
  if (!C.zf) goto L_126230e5;
  /* 126230d6 mov eax, dword ptr [0x1264da5c] */
  EAX = (r32((uint32_t)(0x1264da5c)));
  /* 126230db push eax */
  push32((uint32_t)(EAX));
  /* 126230dc call dword ptr [0x126522e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522e8))), 0x126230e2u);
  /* 126230e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_126230e5:;
  /* 126230e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126230e9 je 0x126231b6 */
  if (C.zf) goto L_126231b6;
  /* 126230ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126230f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126230f6 je 0x12623109 */
  if (C.zf) goto L_12623109;
  /* 126230f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 126230fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126230fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 12623100 push eax */
  push32((uint32_t)(EAX));
  /* 12623101 call 0x12624070 */
  push32(0x12623106u); f_12624070();
  /* 12623106 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623109:;
  /* 12623109 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262310c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623110 je 0x12623123 */
  if (C.zf) goto L_12623123;
  /* 12623112 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623117 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1262311a push eax */
  push32((uint32_t)(EAX));
  /* 1262311b call 0x12624070 */
  push32(0x12623120u); f_12624070();
  /* 12623120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623123:;
  /* 12623123 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623126 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262312a je 0x1262313d */
  if (C.zf) goto L_1262313d;
  /* 1262312c push 2 */
  push32((uint32_t)(0x2u));
  /* 1262312e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623131 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 12623134 push eax */
  push32((uint32_t)(EAX));
  /* 12623135 call 0x12624070 */
  push32(0x1262313au); f_12624070();
  /* 1262313a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262313d:;
  /* 1262313d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623140 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623144 je 0x12623157 */
  if (C.zf) goto L_12623157;
  /* 12623146 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262314b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1262314e push eax */
  push32((uint32_t)(EAX));
  /* 1262314f call 0x12624070 */
  push32(0x12623154u); f_12624070();
  /* 12623154 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623157:;
  /* 12623157 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262315a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262315e je 0x12623171 */
  if (C.zf) goto L_12623171;
  /* 12623160 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623162 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623165 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12623168 push eax */
  push32((uint32_t)(EAX));
  /* 12623169 call 0x12624070 */
  push32(0x1262316eu); f_12624070();
  /* 1262316e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623171:;
  /* 12623171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623174 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623178 je 0x1262318b */
  if (C.zf) goto L_1262318b;
  /* 1262317a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262317c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262317f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12623182 push eax */
  push32((uint32_t)(EAX));
  /* 12623183 call 0x12624070 */
  push32(0x12623188u); f_12624070();
  /* 12623188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262318b:;
  /* 1262318b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262318e cmp dword ptr [ecx + 0x50], 0x1264dc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1264dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623195 je 0x126231a8 */
  if (C.zf) goto L_126231a8;
  /* 12623197 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623199 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262319c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1262319f push eax */
  push32((uint32_t)(EAX));
  /* 126231a0 call 0x12624070 */
  push32(0x126231a5u); f_12624070();
  /* 126231a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126231a8:;
  /* 126231a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 126231aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126231ad push ecx */
  push32((uint32_t)(ECX));
  /* 126231ae call 0x12624070 */
  push32(0x126231b3u); f_12624070();
  /* 126231b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126231b6:;
  /* 126231b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126231b8 mov edx, dword ptr [0x1264da5c] */
  EDX = (r32((uint32_t)(0x1264da5c)));
  /* 126231be push edx */
  push32((uint32_t)(EDX));
  /* 126231bf call dword ptr [0x126522d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d8))), 0x126231c5u);
L_126231c5:;
  /* 126231c5 pop ebp */
  EBP = (pop32());
  /* 126231c6 ret  */
  ESPCHK(0x126230c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031d0 @ 0x126231d0 (11 bytes, 5 insns) */
void f_126231d0(void) {
  FTRACE(0x126231d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126231d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126231d1 mov ebp, esp */
  EBP = (ESP);
  /* 126231d3 call dword ptr [0x126522d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522d4))), 0x126231d9u);
  /* 126231d9 pop ebp */
  EBP = (pop32());
  /* 126231da ret  */
  ESPCHK(0x126231d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031e0 @ 0x126231e0 (11 bytes, 5 insns) */
void f_126231e0(void) {
  FTRACE(0x126231e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126231e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126231e1 mov ebp, esp */
  EBP = (ESP);
  /* 126231e3 call dword ptr [0x126522f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522f0))), 0x126231e9u);
  /* 126231e9 pop ebp */
  EBP = (pop32());
  /* 126231ea ret  */
  ESPCHK(0x126231e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f0 @ 0x126231f0 (804 bytes, 236 insns) */
void f_126231f0(void) {
  FTRACE(0x126231f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126231f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126231f1 mov ebp, esp */
  EBP = (ESP);
  /* 126231f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126231f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 126231fb push 0x1264a4ac */
  push32((uint32_t)(0x1264a4acu));
  /* 12623200 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623202 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12623207 call 0x126235e0 */
  push32(0x1262320cu); f_126235e0();
  /* 1262320c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262320f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 12623212 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623216 jne 0x12623222 */
  if (!C.zf) goto L_12623222;
  /* 12623218 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1262321a call 0x12622550 */
  push32(0x1262321fu); f_12622550();
  /* 1262321f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623222:;
  /* 12623222 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623225 mov dword ptr [0x12650ee0], eax */
  w32((uint32_t)(0x12650ee0), (EAX));
  /* 1262322a mov dword ptr [0x1265101c], 0x20 */
  w32((uint32_t)(0x1265101c), (0x20u));
  /* 12623234 jmp 0x1262323f */
  goto L_1262323f;
L_12623236:;
  /* 12623236 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623239 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262323c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1262323f:;
  /* 1262323f mov edx, dword ptr [0x12650ee0] */
  EDX = (r32((uint32_t)(0x12650ee0)));
  /* 12623245 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262324b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262324e jae 0x12623273 */
  if (!C.cf) goto L_12623273;
  /* 12623250 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623253 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12623257 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262325a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12623260 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623263 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12623267 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262326a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12623271 jmp 0x12623236 */
  goto L_12623236;
L_12623273:;
  /* 12623273 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12623276 push ecx */
  push32((uint32_t)(ECX));
  /* 12623277 call dword ptr [0x126522fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522fc))), 0x1262327du);
  /* 1262327d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12623280 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12623286 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12623288 je 0x12623415 */
  if (C.zf) goto L_12623415;
  /* 1262328e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623292 je 0x12623415 */
  if (C.zf) goto L_12623415;
  /* 12623298 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262329b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262329d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 126232a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 126232a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126232a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126232a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126232ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126232af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 126232b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126232b9 jge 0x126232c3 */
  if ((C.sf==C.of)) goto L_126232c3;
  /* 126232bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 126232be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 126232c1 jmp 0x126232ca */
  goto L_126232ca;
L_126232c3:;
  /* 126232c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_126232ca:;
  /* 126232ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 126232cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 126232d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 126232d7 jmp 0x126232e2 */
  goto L_126232e2;
L_126232d9:;
  /* 126232d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 126232dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126232df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_126232e2:;
  /* 126232e2 mov ecx, dword ptr [0x1265101c] */
  ECX = (r32((uint32_t)(0x1265101c)));
  /* 126232e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126232eb jge 0x12623382 */
  if ((C.sf==C.of)) goto L_12623382;
  /* 126232f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 126232f6 push 0x1264a4ac */
  push32((uint32_t)(0x1264a4acu));
  /* 126232fb push 2 */
  push32((uint32_t)(0x2u));
  /* 126232fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12623302 call 0x126235e0 */
  push32(0x12623307u); f_126235e0();
  /* 12623307 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262330a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1262330d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623311 jne 0x1262331e */
  if (!C.zf) goto L_1262331e;
  /* 12623313 mov edx, dword ptr [0x1265101c] */
  EDX = (r32((uint32_t)(0x1265101c)));
  /* 12623319 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1262331c jmp 0x12623382 */
  goto L_12623382;
L_1262331e:;
  /* 1262331e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12623321 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623324 mov dword ptr [eax*4 + 0x12650ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x12650ee0), (ECX));
  /* 1262332b mov edx, dword ptr [0x1265101c] */
  EDX = (r32((uint32_t)(0x1265101c)));
  /* 12623331 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623334 mov dword ptr [0x1265101c], edx */
  w32((uint32_t)(0x1265101c), (EDX));
  /* 1262333a jmp 0x12623345 */
  goto L_12623345;
L_1262333c:;
  /* 1262333c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262333f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623342 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_12623345:;
  /* 12623345 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 12623348 mov edx, dword ptr [ecx*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12650ee0)));
  /* 1262334f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623355 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623358 jae 0x1262337d */
  if (!C.cf) goto L_1262337d;
  /* 1262335a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262335d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12623361 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623364 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1262336a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262336d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12623371 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623374 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1262337b jmp 0x1262333c */
  goto L_1262333c;
L_1262337d:;
  /* 1262337d jmp 0x126232d9 */
  goto L_126232d9;
L_12623382:;
  /* 12623382 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12623389 jmp 0x126233a6 */
  goto L_126233a6;
L_1262338b:;
  /* 1262338b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1262338e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623391 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12623394 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623397 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262339a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262339d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 126233a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126233a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_126233a6:;
  /* 126233a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 126233a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126233ac jge 0x12623415 */
  if ((C.sf==C.of)) goto L_12623415;
  /* 126233ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 126233b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126233b4 je 0x12623410 */
  if (C.zf) goto L_12623410;
  /* 126233b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126233b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126233bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 126233bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126233c1 je 0x12623410 */
  if (C.zf) goto L_12623410;
  /* 126233c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126233c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126233c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 126233cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126233ce jne 0x126233e0 */
  if (!C.zf) goto L_126233e0;
  /* 126233d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 126233d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126233d5 push edx */
  push32((uint32_t)(EDX));
  /* 126233d6 call dword ptr [0x126522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522f8))), 0x126233dcu);
  /* 126233dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126233de je 0x12623410 */
  if (C.zf) goto L_12623410;
L_126233e0:;
  /* 126233e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 126233e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 126233e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 126233e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 126233ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126233ef mov edx, dword ptr [eax*4 + 0x12650ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 126233f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126233f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 126233fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126233fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12623401 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12623403 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12623405 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623408 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262340b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1262340d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_12623410:;
  /* 12623410 jmp 0x1262338b */
  goto L_1262338b;
L_12623415:;
  /* 12623415 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1262341c jmp 0x12623427 */
  goto L_12623427;
L_1262341e:;
  /* 1262341e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12623421 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623424 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_12623427:;
  /* 12623427 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262342b jge 0x12623504 */
  if ((C.sf==C.of)) goto L_12623504;
  /* 12623431 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12623434 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12623437 mov edx, dword ptr [0x12650ee0] */
  EDX = (r32((uint32_t)(0x12650ee0)));
  /* 1262343d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262343f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 12623442 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623445 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623448 jne 0x126234f0 */
  if (!C.zf) goto L_126234f0;
  /* 1262344e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12623451 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12623455 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623459 jne 0x12623464 */
  if (!C.zf) goto L_12623464;
  /* 1262345b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12623462 jmp 0x12623474 */
  goto L_12623474;
L_12623464:;
  /* 12623464 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12623467 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262346a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262346c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262346e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623471 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12623474:;
  /* 12623474 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12623477 push eax */
  push32((uint32_t)(EAX));
  /* 12623478 call dword ptr [0x126522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a8))), 0x1262347eu);
  /* 1262347e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12623481 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623485 je 0x126234df */
  if (C.zf) goto L_126234df;
  /* 12623487 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1262348a push ecx */
  push32((uint32_t)(ECX));
  /* 1262348b call dword ptr [0x126522f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522f8))), 0x12623491u);
  /* 12623491 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12623494 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623498 je 0x126234df */
  if (C.zf) goto L_126234df;
  /* 1262349a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262349d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 126234a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126234a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 126234a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126234ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126234ae jne 0x126234c0 */
  if (!C.zf) goto L_126234c0;
  /* 126234b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 126234b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 126234b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 126234be jmp 0x126234dd */
  goto L_126234dd;
L_126234c0:;
  /* 126234c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 126234c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 126234c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126234cc jne 0x126234dd */
  if (!C.zf) goto L_126234dd;
  /* 126234ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 126234d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 126234d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_126234dd:;
  /* 126234dd jmp 0x126234ee */
  goto L_126234ee;
L_126234df:;
  /* 126234df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 126234e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 126234e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_126234ee:;
  /* 126234ee jmp 0x126234ff */
  goto L_126234ff;
L_126234f0:;
  /* 126234f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 126234f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 126234f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 126234fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_126234ff:;
  /* 126234ff jmp 0x1262341e */
  goto L_1262341e;
L_12623504:;
  /* 12623504 mov eax, dword ptr [0x1265101c] */
  EAX = (r32((uint32_t)(0x1265101c)));
  /* 12623509 push eax */
  push32((uint32_t)(EAX));
  /* 1262350a call dword ptr [0x126522f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522f4))), 0x12623510u);
  /* 12623510 mov esp, ebp */
  ESP = (EBP);
  /* 12623512 pop ebp */
  EBP = (pop32());
  /* 12623513 ret  */
  ESPCHK(0x126231f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x12623520 (155 bytes, 45 insns) */
void f_12623520(void) {
  FTRACE(0x12623520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623520 push ebp */
  push32((uint32_t)(EBP));
  /* 12623521 mov ebp, esp */
  EBP = (ESP);
  /* 12623523 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623526 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262352d jmp 0x12623538 */
  goto L_12623538;
L_1262352f:;
  /* 1262352f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623532 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623535 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12623538:;
  /* 12623538 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262353c jge 0x126235b7 */
  if ((C.sf==C.of)) goto L_126235b7;
  /* 1262353e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623541 cmp dword ptr [ecx*4 + 0x12650ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12650ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623549 je 0x126235b2 */
  if (C.zf) goto L_126235b2;
  /* 1262354b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262354e mov eax, dword ptr [edx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 12623555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12623558 jmp 0x12623563 */
  goto L_12623563;
L_1262355a:;
  /* 1262355a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262355d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623560 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12623563:;
  /* 12623563 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623566 mov eax, dword ptr [edx*4 + 0x12650ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12650ee0)));
  /* 1262356d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623572 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623575 jae 0x1262358f */
  if (!C.cf) goto L_1262358f;
  /* 12623577 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262357a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262357e je 0x1262358d */
  if (C.zf) goto L_1262358d;
  /* 12623580 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623583 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623586 push edx */
  push32((uint32_t)(EDX));
  /* 12623587 call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x1262358du);
L_1262358d:;
  /* 1262358d jmp 0x1262355a */
  goto L_1262355a;
L_1262358f:;
  /* 1262358f push 2 */
  push32((uint32_t)(0x2u));
  /* 12623591 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623594 mov ecx, dword ptr [eax*4 + 0x12650ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12650ee0)));
  /* 1262359b push ecx */
  push32((uint32_t)(ECX));
  /* 1262359c call 0x12624070 */
  push32(0x126235a1u); f_12624070();
  /* 126235a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126235a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126235a7 mov dword ptr [edx*4 + 0x12650ee0], 0 */
  w32((uint32_t)(EDX*4 + 0x12650ee0), (0x0u));
L_126235b2:;
  /* 126235b2 jmp 0x1262352f */
  goto L_1262352f;
L_126235b7:;
  /* 126235b7 mov esp, ebp */
  ESP = (EBP);
  /* 126235b9 pop ebp */
  EBP = (pop32());
  /* 126235ba ret  */
  ESPCHK(0x12623520u, _esp0);
  ESP += 4; return;
}

/* FUN_100035c0 @ 0x126235c0 (29 bytes, 13 insns) */
void f_126235c0(void) {
  FTRACE(0x126235c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126235c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126235c1 mov ebp, esp */
  EBP = (ESP);
  /* 126235c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126235c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126235c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126235c9 mov eax, dword ptr [0x1264f6f8] */
  EAX = (r32((uint32_t)(0x1264f6f8)));
  /* 126235ce push eax */
  push32((uint32_t)(EAX));
  /* 126235cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126235d2 push ecx */
  push32((uint32_t)(ECX));
  /* 126235d3 call 0x12623630 */
  push32(0x126235d8u); f_12623630();
  /* 126235d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126235db pop ebp */
  EBP = (pop32());
  /* 126235dc ret  */
  ESPCHK(0x126235c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100035e0 @ 0x126235e0 (35 bytes, 16 insns) */
void f_126235e0(void) {
  FTRACE(0x126235e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126235e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126235e1 mov ebp, esp */
  EBP = (ESP);
  /* 126235e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126235e6 push eax */
  push32((uint32_t)(EAX));
  /* 126235e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126235ea push ecx */
  push32((uint32_t)(ECX));
  /* 126235eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126235ee push edx */
  push32((uint32_t)(EDX));
  /* 126235ef mov eax, dword ptr [0x1264f6f8] */
  EAX = (r32((uint32_t)(0x1264f6f8)));
  /* 126235f4 push eax */
  push32((uint32_t)(EAX));
  /* 126235f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126235f8 push ecx */
  push32((uint32_t)(ECX));
  /* 126235f9 call 0x12623630 */
  push32(0x126235feu); f_12623630();
  /* 126235fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623601 pop ebp */
  EBP = (pop32());
  /* 12623602 ret  */
  ESPCHK(0x126235e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003610 @ 0x12623610 (27 bytes, 13 insns) */
void f_12623610(void) {
  FTRACE(0x12623610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623610 push ebp */
  push32((uint32_t)(EBP));
  /* 12623611 mov ebp, esp */
  EBP = (ESP);
  /* 12623613 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623615 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623617 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623619 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262361c push eax */
  push32((uint32_t)(EAX));
  /* 1262361d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623620 push ecx */
  push32((uint32_t)(ECX));
  /* 12623621 call 0x12623630 */
  push32(0x12623626u); f_12623630();
  /* 12623626 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623629 pop ebp */
  EBP = (pop32());
  /* 1262362a ret  */
  ESPCHK(0x12623610u, _esp0);
  ESP += 4; return;
}

/* FUN_10003630 @ 0x12623630 (94 bytes, 38 insns) */
void f_12623630(void) {
  FTRACE(0x12623630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623630 push ebp */
  push32((uint32_t)(EBP));
  /* 12623631 mov ebp, esp */
  EBP = (ESP);
  /* 12623633 push ecx */
  push32((uint32_t)(ECX));
L_12623634:;
  /* 12623634 push 9 */
  push32((uint32_t)(0x9u));
  /* 12623636 call 0x12626fe0 */
  push32(0x1262363bu); f_12626fe0();
  /* 1262363b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262363e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623641 push eax */
  push32((uint32_t)(EAX));
  /* 12623642 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623645 push ecx */
  push32((uint32_t)(ECX));
  /* 12623646 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623649 push edx */
  push32((uint32_t)(EDX));
  /* 1262364a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262364d push eax */
  push32((uint32_t)(EAX));
  /* 1262364e call 0x126236b0 */
  push32(0x12623653u); f_126236b0();
  /* 12623653 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623656 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12623659 push 9 */
  push32((uint32_t)(0x9u));
  /* 1262365b call 0x12627080 */
  push32(0x12623660u); f_12627080();
  /* 12623660 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623663 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623667 jne 0x1262366f */
  if (!C.zf) goto L_1262366f;
  /* 12623669 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262366d jne 0x12623674 */
  if (!C.zf) goto L_12623674;
L_1262366f:;
  /* 1262366f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623672 jmp 0x1262368a */
  goto L_1262368a;
L_12623674:;
  /* 12623674 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623677 push ecx */
  push32((uint32_t)(ECX));
  /* 12623678 call 0x12627320 */
  push32(0x1262367du); f_12627320();
  /* 1262367d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623680 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623682 jne 0x12623688 */
  if (!C.zf) goto L_12623688;
  /* 12623684 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623686 jmp 0x1262368a */
  goto L_1262368a;
L_12623688:;
  /* 12623688 jmp 0x12623634 */
  goto L_12623634;
L_1262368a:;
  /* 1262368a mov esp, ebp */
  ESP = (EBP);
  /* 1262368c pop ebp */
  EBP = (pop32());
  /* 1262368d ret  */
  ESPCHK(0x12623630u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x12623690 (23 bytes, 11 insns) */
void f_12623690(void) {
  FTRACE(0x12623690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623690 push ebp */
  push32((uint32_t)(EBP));
  /* 12623691 mov ebp, esp */
  EBP = (ESP);
  /* 12623693 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623695 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623697 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623699 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262369c push eax */
  push32((uint32_t)(EAX));
  /* 1262369d call 0x126236b0 */
  push32(0x126236a2u); f_126236b0();
  /* 126236a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126236a5 pop ebp */
  EBP = (pop32());
  /* 126236a6 ret  */
  ESPCHK(0x12623690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b0 @ 0x126236b0 (787 bytes, 254 insns) */
void f_126236b0(void) {
  FTRACE(0x126236b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126236b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126236b1 mov ebp, esp */
  EBP = (ESP);
  /* 126236b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126236b6 push ebx */
  push32((uint32_t)(EBX));
  /* 126236b7 push esi */
  push32((uint32_t)(ESI));
  /* 126236b8 push edi */
  push32((uint32_t)(EDI));
  /* 126236b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 126236c0 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 126236c5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 126236c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126236ca je 0x126236fc */
  if (C.zf) goto L_126236fc;
L_126236cc:;
  /* 126236cc call 0x12624780 */
  push32(0x126236d1u); f_12624780();
  /* 126236d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126236d3 jne 0x126236f6 */
  if (!C.zf) goto L_126236f6;
  /* 126236d5 push 0x1264a5a0 */
  push32((uint32_t)(0x1264a5a0u));
  /* 126236da push 0 */
  push32((uint32_t)(0x0u));
  /* 126236dc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 126236e1 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126236e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 126236e8 call 0x126226a0 */
  push32(0x126236edu); f_126226a0();
  /* 126236ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126236f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126236f3 jne 0x126236f6 */
  if (!C.zf) goto L_126236f6;
  /* 126236f5 int3  */
  x86_unimpl("int3 @ 0x126236f5");
L_126236f6:;
  /* 126236f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126236f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126236fa jne 0x126236cc */
  if (!C.zf) goto L_126236cc;
L_126236fc:;
  /* 126236fc mov edx, dword ptr [0x1264da88] */
  EDX = (r32((uint32_t)(0x1264da88)));
  /* 12623702 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12623705 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623708 cmp eax, dword ptr [0x1264da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262370e jne 0x12623711 */
  if (!C.zf) goto L_12623711;
  /* 12623710 int3  */
  x86_unimpl("int3 @ 0x12623710");
L_12623711:;
  /* 12623711 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623714 push ecx */
  push32((uint32_t)(ECX));
  /* 12623715 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623718 push edx */
  push32((uint32_t)(EDX));
  /* 12623719 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262371c push eax */
  push32((uint32_t)(EAX));
  /* 1262371d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623720 push ecx */
  push32((uint32_t)(ECX));
  /* 12623721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623724 push edx */
  push32((uint32_t)(EDX));
  /* 12623725 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623727 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623729 call dword ptr [0x1264dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264dc90))), 0x1262372fu);
  /* 1262372f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623734 jne 0x12623794 */
  if (!C.zf) goto L_12623794;
  /* 12623736 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262373a je 0x12623767 */
  if (C.zf) goto L_12623767;
L_1262373c:;
  /* 1262373c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262373f push eax */
  push32((uint32_t)(EAX));
  /* 12623740 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623743 push ecx */
  push32((uint32_t)(ECX));
  /* 12623744 push 0x1264a55c */
  push32((uint32_t)(0x1264a55cu));
  /* 12623749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262374b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262374d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262374f push 0 */
  push32((uint32_t)(0x0u));
  /* 12623751 call 0x126226a0 */
  push32(0x12623756u); f_126226a0();
  /* 12623756 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623759 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262375c jne 0x1262375f */
  if (!C.zf) goto L_1262375f;
  /* 1262375e int3  */
  x86_unimpl("int3 @ 0x1262375e");
L_1262375f:;
  /* 1262375f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12623761 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12623763 jne 0x1262373c */
  if (!C.zf) goto L_1262373c;
  /* 12623765 jmp 0x1262378d */
  goto L_1262378d;
L_12623767:;
  /* 12623767 push 0x1264a538 */
  push32((uint32_t)(0x1264a538u));
  /* 1262376c push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12623771 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623773 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623775 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623777 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623779 call 0x126226a0 */
  push32(0x1262377eu); f_126226a0();
  /* 1262377e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623781 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623784 jne 0x12623787 */
  if (!C.zf) goto L_12623787;
  /* 12623786 int3  */
  x86_unimpl("int3 @ 0x12623786");
L_12623787:;
  /* 12623787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623789 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262378b jne 0x12623767 */
  if (!C.zf) goto L_12623767;
L_1262378d:;
  /* 1262378d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262378f jmp 0x126239bc */
  goto L_126239bc;
L_12623794:;
  /* 12623794 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623797 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262379d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126237a0 je 0x126237b6 */
  if (C.zf) goto L_126237b6;
  /* 126237a2 mov edx, dword ptr [0x1264da84] */
  EDX = (r32((uint32_t)(0x1264da84)));
  /* 126237a8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 126237ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126237ad jne 0x126237b6 */
  if (!C.zf) goto L_126237b6;
  /* 126237af mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_126237b6:;
  /* 126237b6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126237ba ja 0x126237c7 */
  if ((!C.cf&&!C.zf)) goto L_126237c7;
  /* 126237bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126237bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126237c2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126237c5 jbe 0x126237f3 */
  if ((C.cf||C.zf)) goto L_126237f3;
L_126237c7:;
  /* 126237c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126237ca push ecx */
  push32((uint32_t)(ECX));
  /* 126237cb push 0x1264a510 */
  push32((uint32_t)(0x1264a510u));
  /* 126237d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126237d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126237d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126237d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 126237d8 call 0x126226a0 */
  push32(0x126237ddu); f_126226a0();
  /* 126237dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126237e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126237e3 jne 0x126237e6 */
  if (!C.zf) goto L_126237e6;
  /* 126237e5 int3  */
  x86_unimpl("int3 @ 0x126237e5");
L_126237e6:;
  /* 126237e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126237e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126237ea jne 0x126237c7 */
  if (!C.zf) goto L_126237c7;
  /* 126237ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126237ee jmp 0x126239bc */
  goto L_126239bc;
L_126237f3:;
  /* 126237f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126237f6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126237fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126237fe je 0x12623840 */
  if (C.zf) goto L_12623840;
  /* 12623800 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623804 je 0x12623840 */
  if (C.zf) goto L_12623840;
  /* 12623806 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623809 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262380f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623812 je 0x12623840 */
  if (C.zf) goto L_12623840;
  /* 12623814 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623818 je 0x12623840 */
  if (C.zf) goto L_12623840;
L_1262381a:;
  /* 1262381a push 0x1264a4dc */
  push32((uint32_t)(0x1264a4dcu));
  /* 1262381f push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12623824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262382a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262382c call 0x126226a0 */
  push32(0x12623831u); f_126226a0();
  /* 12623831 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623834 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623837 jne 0x1262383a */
  if (!C.zf) goto L_1262383a;
  /* 12623839 int3  */
  x86_unimpl("int3 @ 0x12623839");
L_1262383a:;
  /* 1262383a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262383c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262383e jne 0x1262381a */
  if (!C.zf) goto L_1262381a;
L_12623840:;
  /* 12623840 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623843 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623846 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12623849 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262384c push ecx */
  push32((uint32_t)(ECX));
  /* 1262384d call 0x12627430 */
  push32(0x12623852u); f_12627430();
  /* 12623852 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12623858 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262385c jne 0x12623865 */
  if (!C.zf) goto L_12623865;
  /* 1262385e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623860 jmp 0x126239bc */
  goto L_126239bc;
L_12623865:;
  /* 12623865 mov edx, dword ptr [0x1264da88] */
  EDX = (r32((uint32_t)(0x1264da88)));
  /* 1262386b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262386e mov dword ptr [0x1264da88], edx */
  w32((uint32_t)(0x1264da88), (EDX));
  /* 12623874 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623878 je 0x126238c3 */
  if (C.zf) goto L_126238c3;
  /* 1262387a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262387d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12623883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623886 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1262388d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623890 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12623897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262389a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 126238a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126238a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126238a7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 126238aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126238ad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 126238b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126238b7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 126238be jmp 0x12623963 */
  goto L_12623963;
L_126238c3:;
  /* 126238c3 mov edx, dword ptr [0x1264f558] */
  EDX = (r32((uint32_t)(0x1264f558)));
  /* 126238c9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126238cc mov dword ptr [0x1264f558], edx */
  w32((uint32_t)(0x1264f558), (EDX));
  /* 126238d2 mov eax, dword ptr [0x1264f560] */
  EAX = (r32((uint32_t)(0x1264f560)));
  /* 126238d7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126238da mov dword ptr [0x1264f560], eax */
  w32((uint32_t)(0x1264f560), (EAX));
  /* 126238df mov ecx, dword ptr [0x1264f560] */
  ECX = (r32((uint32_t)(0x1264f560)));
  /* 126238e5 cmp ecx, dword ptr [0x1264f564] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264f564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126238eb jbe 0x126238f9 */
  if ((C.cf||C.zf)) goto L_126238f9;
  /* 126238ed mov edx, dword ptr [0x1264f560] */
  EDX = (r32((uint32_t)(0x1264f560)));
  /* 126238f3 mov dword ptr [0x1264f564], edx */
  w32((uint32_t)(0x1264f564), (EDX));
L_126238f9:;
  /* 126238f9 cmp dword ptr [0x1264f55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623900 je 0x1262390f */
  if (C.zf) goto L_1262390f;
  /* 12623902 mov eax, dword ptr [0x1264f55c] */
  EAX = (r32((uint32_t)(0x1264f55c)));
  /* 12623907 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262390a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1262390d jmp 0x12623918 */
  goto L_12623918;
L_1262390f:;
  /* 1262390f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623912 mov dword ptr [0x1264f554], edx */
  w32((uint32_t)(0x1264f554), (EDX));
L_12623918:;
  /* 12623918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262391b mov ecx, dword ptr [0x1264f55c] */
  ECX = (r32((uint32_t)(0x1264f55c)));
  /* 12623921 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12623923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623926 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1262392d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623933 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12623936 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623939 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262393c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1262393f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623942 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623945 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12623948 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262394b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262394e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12623951 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623954 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623957 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1262395a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262395d mov dword ptr [0x1264f55c], ecx */
  w32((uint32_t)(0x1264f55c), (ECX));
L_12623963:;
  /* 12623963 push 4 */
  push32((uint32_t)(0x4u));
  /* 12623965 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12623967 mov dl, byte ptr [0x1264da90] */
  DL = (r8((uint32_t)(0x1264da90)));
  /* 1262396d push edx */
  push32((uint32_t)(EDX));
  /* 1262396e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623971 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623974 push eax */
  push32((uint32_t)(EAX));
  /* 12623975 call 0x12627350 */
  push32(0x1262397au); f_12627350();
  /* 1262397a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262397d push 4 */
  push32((uint32_t)(0x4u));
  /* 1262397f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623981 mov cl, byte ptr [0x1264da90] */
  CL = (r8((uint32_t)(0x1264da90)));
  /* 12623987 push ecx */
  push32((uint32_t)(ECX));
  /* 12623988 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262398b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262398e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12623992 push ecx */
  push32((uint32_t)(ECX));
  /* 12623993 call 0x12627350 */
  push32(0x12623998u); f_12627350();
  /* 12623998 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262399b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262399e push edx */
  push32((uint32_t)(EDX));
  /* 1262399f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126239a1 mov al, byte ptr [0x1264da92] */
  AL = (r8((uint32_t)(0x1264da92)));
  /* 126239a6 push eax */
  push32((uint32_t)(EAX));
  /* 126239a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126239aa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126239ad push ecx */
  push32((uint32_t)(ECX));
  /* 126239ae call 0x12627350 */
  push32(0x126239b3u); f_12627350();
  /* 126239b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126239b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126239b9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_126239bc:;
  /* 126239bc pop edi */
  EDI = (pop32());
  /* 126239bd pop esi */
  ESI = (pop32());
  /* 126239be pop ebx */
  EBX = (pop32());
  /* 126239bf mov esp, ebp */
  ESP = (EBP);
  /* 126239c1 pop ebp */
  EBP = (pop32());
  /* 126239c2 ret  */
  ESPCHK(0x126236b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100039d0 @ 0x126239d0 (27 bytes, 13 insns) */
void f_126239d0(void) {
  FTRACE(0x126239d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126239d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126239d1 mov ebp, esp */
  EBP = (ESP);
  /* 126239d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126239d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126239d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 126239d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126239dc push eax */
  push32((uint32_t)(EAX));
  /* 126239dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126239e0 push ecx */
  push32((uint32_t)(ECX));
  /* 126239e1 call 0x126239f0 */
  push32(0x126239e6u); f_126239f0();
  /* 126239e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126239e9 pop ebp */
  EBP = (pop32());
  /* 126239ea ret  */
  ESPCHK(0x126239d0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x126239f0 (96 bytes, 37 insns) */
void f_126239f0(void) {
  FTRACE(0x126239f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126239f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126239f1 mov ebp, esp */
  EBP = (ESP);
  /* 126239f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126239f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126239f9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126239fd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12623a00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623a03 push ecx */
  push32((uint32_t)(ECX));
  /* 12623a04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623a07 push edx */
  push32((uint32_t)(EDX));
  /* 12623a08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623a0b push eax */
  push32((uint32_t)(EAX));
  /* 12623a0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623a0f push ecx */
  push32((uint32_t)(ECX));
  /* 12623a10 call 0x126235e0 */
  push32(0x12623a15u); f_126235e0();
  /* 12623a15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12623a1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623a1f je 0x12623a49 */
  if (C.zf) goto L_12623a49;
  /* 12623a21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623a24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12623a27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623a2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12623a30:;
  /* 12623a30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623a33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623a36 jae 0x12623a49 */
  if (!C.cf) goto L_12623a49;
  /* 12623a38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623a3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12623a3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623a41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12623a47 jmp 0x12623a30 */
  goto L_12623a30;
L_12623a49:;
  /* 12623a49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623a4c mov esp, ebp */
  ESP = (EBP);
  /* 12623a4e pop ebp */
  EBP = (pop32());
  /* 12623a4f ret  */
  ESPCHK(0x126239f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x12623a50 (27 bytes, 13 insns) */
void f_12623a50(void) {
  FTRACE(0x12623a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12623a51 mov ebp, esp */
  EBP = (ESP);
  /* 12623a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623a57 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623a5c push eax */
  push32((uint32_t)(EAX));
  /* 12623a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623a60 push ecx */
  push32((uint32_t)(ECX));
  /* 12623a61 call 0x12623a70 */
  push32(0x12623a66u); f_12623a70();
  /* 12623a66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a69 pop ebp */
  EBP = (pop32());
  /* 12623a6a ret  */
  ESPCHK(0x12623a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a70 @ 0x12623a70 (64 bytes, 27 insns) */
void f_12623a70(void) {
  FTRACE(0x12623a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12623a71 mov ebp, esp */
  EBP = (ESP);
  /* 12623a73 push ecx */
  push32((uint32_t)(ECX));
  /* 12623a74 push 9 */
  push32((uint32_t)(0x9u));
  /* 12623a76 call 0x12626fe0 */
  push32(0x12623a7bu); f_12626fe0();
  /* 12623a7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a7e push 1 */
  push32((uint32_t)(0x1u));
  /* 12623a80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623a83 push eax */
  push32((uint32_t)(EAX));
  /* 12623a84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623a87 push ecx */
  push32((uint32_t)(ECX));
  /* 12623a88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623a8b push edx */
  push32((uint32_t)(EDX));
  /* 12623a8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623a8f push eax */
  push32((uint32_t)(EAX));
  /* 12623a90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12623a94 call 0x12623ab0 */
  push32(0x12623a99u); f_12623ab0();
  /* 12623a99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623a9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12623a9f push 9 */
  push32((uint32_t)(0x9u));
  /* 12623aa1 call 0x12627080 */
  push32(0x12623aa6u); f_12627080();
  /* 12623aa6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623aac mov esp, ebp */
  ESP = (EBP);
  /* 12623aae pop ebp */
  EBP = (pop32());
  /* 12623aaf ret  */
  ESPCHK(0x12623a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ab0 @ 0x12623ab0 (1297 bytes, 431 insns) */
void f_12623ab0(void) {
  FTRACE(0x12623ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12623ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12623ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 12623ab7 push esi */
  push32((uint32_t)(ESI));
  /* 12623ab8 push edi */
  push32((uint32_t)(EDI));
  /* 12623ab9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12623ac0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ac4 jne 0x12623ae3 */
  if (!C.zf) goto L_12623ae3;
  /* 12623ac6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623ac9 push eax */
  push32((uint32_t)(EAX));
  /* 12623aca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623acd push ecx */
  push32((uint32_t)(ECX));
  /* 12623ace mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623ad1 push edx */
  push32((uint32_t)(EDX));
  /* 12623ad2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623ad5 push eax */
  push32((uint32_t)(EAX));
  /* 12623ad6 call 0x126235e0 */
  push32(0x12623adbu); f_126235e0();
  /* 12623adb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623ade jmp 0x12623fba */
  goto L_12623fba;
L_12623ae3:;
  /* 12623ae3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ae7 je 0x12623b06 */
  if (C.zf) goto L_12623b06;
  /* 12623ae9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623aed jne 0x12623b06 */
  if (!C.zf) goto L_12623b06;
  /* 12623aef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623af2 push ecx */
  push32((uint32_t)(ECX));
  /* 12623af3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623af6 push edx */
  push32((uint32_t)(EDX));
  /* 12623af7 call 0x12624070 */
  push32(0x12623afcu); f_12624070();
  /* 12623afc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623b01 jmp 0x12623fba */
  goto L_12623fba;
L_12623b06:;
  /* 12623b06 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 12623b0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12623b0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623b10 je 0x12623b42 */
  if (C.zf) goto L_12623b42;
L_12623b12:;
  /* 12623b12 call 0x12624780 */
  push32(0x12623b17u); f_12624780();
  /* 12623b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623b19 jne 0x12623b3c */
  if (!C.zf) goto L_12623b3c;
  /* 12623b1b push 0x1264a5a0 */
  push32((uint32_t)(0x1264a5a0u));
  /* 12623b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623b22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12623b27 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623b2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12623b2e call 0x126226a0 */
  push32(0x12623b33u); f_126226a0();
  /* 12623b33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623b36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623b39 jne 0x12623b3c */
  if (!C.zf) goto L_12623b3c;
  /* 12623b3b int3  */
  x86_unimpl("int3 @ 0x12623b3b");
L_12623b3c:;
  /* 12623b3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623b3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12623b40 jne 0x12623b12 */
  if (!C.zf) goto L_12623b12;
L_12623b42:;
  /* 12623b42 mov edx, dword ptr [0x1264da88] */
  EDX = (r32((uint32_t)(0x1264da88)));
  /* 12623b48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12623b4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12623b4e cmp eax, dword ptr [0x1264da8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264da8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623b54 jne 0x12623b57 */
  if (!C.zf) goto L_12623b57;
  /* 12623b56 int3  */
  x86_unimpl("int3 @ 0x12623b56");
L_12623b57:;
  /* 12623b57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623b5a push ecx */
  push32((uint32_t)(ECX));
  /* 12623b5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623b5e push edx */
  push32((uint32_t)(EDX));
  /* 12623b5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12623b62 push eax */
  push32((uint32_t)(EAX));
  /* 12623b63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623b66 push ecx */
  push32((uint32_t)(ECX));
  /* 12623b67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623b6a push edx */
  push32((uint32_t)(EDX));
  /* 12623b6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623b6e push eax */
  push32((uint32_t)(EAX));
  /* 12623b6f push 2 */
  push32((uint32_t)(0x2u));
  /* 12623b71 call dword ptr [0x1264dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264dc90))), 0x12623b77u);
  /* 12623b77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623b7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623b7c jne 0x12623bdc */
  if (!C.zf) goto L_12623bdc;
  /* 12623b7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623b82 je 0x12623baf */
  if (C.zf) goto L_12623baf;
L_12623b84:;
  /* 12623b84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623b87 push ecx */
  push32((uint32_t)(ECX));
  /* 12623b88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623b8b push edx */
  push32((uint32_t)(EDX));
  /* 12623b8c push 0x1264a71c */
  push32((uint32_t)(0x1264a71cu));
  /* 12623b91 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623b93 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623b97 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623b99 call 0x126226a0 */
  push32(0x12623b9eu); f_126226a0();
  /* 12623b9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623ba1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ba4 jne 0x12623ba7 */
  if (!C.zf) goto L_12623ba7;
  /* 12623ba6 int3  */
  x86_unimpl("int3 @ 0x12623ba6");
L_12623ba7:;
  /* 12623ba7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623ba9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623bab jne 0x12623b84 */
  if (!C.zf) goto L_12623b84;
  /* 12623bad jmp 0x12623bd5 */
  goto L_12623bd5;
L_12623baf:;
  /* 12623baf push 0x1264a6f8 */
  push32((uint32_t)(0x1264a6f8u));
  /* 12623bb4 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12623bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bbb push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bbd push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bbf push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bc1 call 0x126226a0 */
  push32(0x12623bc6u); f_126226a0();
  /* 12623bc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623bc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623bcc jne 0x12623bcf */
  if (!C.zf) goto L_12623bcf;
  /* 12623bce int3  */
  x86_unimpl("int3 @ 0x12623bce");
L_12623bcf:;
  /* 12623bcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623bd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12623bd3 jne 0x12623baf */
  if (!C.zf) goto L_12623baf;
L_12623bd5:;
  /* 12623bd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623bd7 jmp 0x12623fba */
  goto L_12623fba;
L_12623bdc:;
  /* 12623bdc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623be0 jbe 0x12623c0e */
  if ((C.cf||C.zf)) goto L_12623c0e;
L_12623be2:;
  /* 12623be2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623be5 push edx */
  push32((uint32_t)(EDX));
  /* 12623be6 push 0x1264a6c8 */
  push32((uint32_t)(0x1264a6c8u));
  /* 12623beb push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bed push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bef push 0 */
  push32((uint32_t)(0x0u));
  /* 12623bf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623bf3 call 0x126226a0 */
  push32(0x12623bf8u); f_126226a0();
  /* 12623bf8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623bfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623bfe jne 0x12623c01 */
  if (!C.zf) goto L_12623c01;
  /* 12623c00 int3  */
  x86_unimpl("int3 @ 0x12623c00");
L_12623c01:;
  /* 12623c01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623c05 jne 0x12623be2 */
  if (!C.zf) goto L_12623be2;
  /* 12623c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623c09 jmp 0x12623fba */
  goto L_12623fba;
L_12623c0e:;
  /* 12623c0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c12 je 0x12623c56 */
  if (C.zf) goto L_12623c56;
  /* 12623c14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623c17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12623c1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c20 je 0x12623c56 */
  if (C.zf) goto L_12623c56;
  /* 12623c22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623c25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12623c2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c2e je 0x12623c56 */
  if (C.zf) goto L_12623c56;
L_12623c30:;
  /* 12623c30 push 0x1264a4dc */
  push32((uint32_t)(0x1264a4dcu));
  /* 12623c35 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12623c3a push 0 */
  push32((uint32_t)(0x0u));
  /* 12623c3c push 0 */
  push32((uint32_t)(0x0u));
  /* 12623c3e push 0 */
  push32((uint32_t)(0x0u));
  /* 12623c40 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623c42 call 0x126226a0 */
  push32(0x12623c47u); f_126226a0();
  /* 12623c47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623c4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c4d jne 0x12623c50 */
  if (!C.zf) goto L_12623c50;
  /* 12623c4f int3  */
  x86_unimpl("int3 @ 0x12623c4f");
L_12623c50:;
  /* 12623c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623c52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623c54 jne 0x12623c30 */
  if (!C.zf) goto L_12623c30;
L_12623c56:;
  /* 12623c56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623c59 push ecx */
  push32((uint32_t)(ECX));
  /* 12623c5a call 0x12624be0 */
  push32(0x12623c5fu); f_12624be0();
  /* 12623c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12623c64 jne 0x12623c87 */
  if (!C.zf) goto L_12623c87;
  /* 12623c66 push 0x1264a6a4 */
  push32((uint32_t)(0x1264a6a4u));
  /* 12623c6b push 0 */
  push32((uint32_t)(0x0u));
  /* 12623c6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12623c72 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623c77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623c79 call 0x126226a0 */
  push32(0x12623c7eu); f_126226a0();
  /* 12623c7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623c81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c84 jne 0x12623c87 */
  if (!C.zf) goto L_12623c87;
  /* 12623c86 int3  */
  x86_unimpl("int3 @ 0x12623c86");
L_12623c87:;
  /* 12623c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12623c89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12623c8b jne 0x12623c56 */
  if (!C.zf) goto L_12623c56;
  /* 12623c8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623c90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623c93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12623c96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623c99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623c9d jne 0x12623ca6 */
  if (!C.zf) goto L_12623ca6;
  /* 12623c9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12623ca6:;
  /* 12623ca6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623caa je 0x12623cea */
  if (C.zf) goto L_12623cea;
L_12623cac:;
  /* 12623cac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623caf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623cb6 jne 0x12623cc1 */
  if (!C.zf) goto L_12623cc1;
  /* 12623cb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623cbb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623cbf je 0x12623ce2 */
  if (C.zf) goto L_12623ce2;
L_12623cc1:;
  /* 12623cc1 push 0x1264a65c */
  push32((uint32_t)(0x1264a65cu));
  /* 12623cc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623cc8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 12623ccd push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623cd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623cd4 call 0x126226a0 */
  push32(0x12623cd9u); f_126226a0();
  /* 12623cd9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623cdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623cdf jne 0x12623ce2 */
  if (!C.zf) goto L_12623ce2;
  /* 12623ce1 int3  */
  x86_unimpl("int3 @ 0x12623ce1");
L_12623ce2:;
  /* 12623ce2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623ce4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12623ce6 jne 0x12623cac */
  if (!C.zf) goto L_12623cac;
  /* 12623ce8 jmp 0x12623d4e */
  goto L_12623d4e;
L_12623cea:;
  /* 12623cea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623ced mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12623cf0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12623cf5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623cf8 jne 0x12623d0f */
  if (!C.zf) goto L_12623d0f;
  /* 12623cfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623cfd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12623d03 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d06 jne 0x12623d0f */
  if (!C.zf) goto L_12623d0f;
  /* 12623d08 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_12623d0f:;
  /* 12623d0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623d12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12623d15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12623d1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12623d1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12623d23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d25 je 0x12623d48 */
  if (C.zf) goto L_12623d48;
  /* 12623d27 push 0x1264a620 */
  push32((uint32_t)(0x1264a620u));
  /* 12623d2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12623d2e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 12623d33 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623d38 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623d3a call 0x126226a0 */
  push32(0x12623d3fu); f_126226a0();
  /* 12623d3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623d42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d45 jne 0x12623d48 */
  if (!C.zf) goto L_12623d48;
  /* 12623d47 int3  */
  x86_unimpl("int3 @ 0x12623d47");
L_12623d48:;
  /* 12623d48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12623d4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12623d4c jne 0x12623d0f */
  if (!C.zf) goto L_12623d0f;
L_12623d4e:;
  /* 12623d4e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d52 je 0x12623d79 */
  if (C.zf) goto L_12623d79;
  /* 12623d54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623d57 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623d5a push eax */
  push32((uint32_t)(EAX));
  /* 12623d5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623d5e push ecx */
  push32((uint32_t)(ECX));
  /* 12623d5f call 0x12627560 */
  push32(0x12623d64u); f_12627560();
  /* 12623d64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623d67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12623d6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d6e jne 0x12623d77 */
  if (!C.zf) goto L_12623d77;
  /* 12623d70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623d72 jmp 0x12623fba */
  goto L_12623fba;
L_12623d77:;
  /* 12623d77 jmp 0x12623d9c */
  goto L_12623d9c;
L_12623d79:;
  /* 12623d79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623d7c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623d7f push edx */
  push32((uint32_t)(EDX));
  /* 12623d80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12623d83 push eax */
  push32((uint32_t)(EAX));
  /* 12623d84 call 0x126274b0 */
  push32(0x12623d89u); f_126274b0();
  /* 12623d89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623d8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12623d8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623d93 jne 0x12623d9c */
  if (!C.zf) goto L_12623d9c;
  /* 12623d95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623d97 jmp 0x12623fba */
  goto L_12623fba;
L_12623d9c:;
  /* 12623d9c mov ecx, dword ptr [0x1264da88] */
  ECX = (r32((uint32_t)(0x1264da88)));
  /* 12623da2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623da5 mov dword ptr [0x1264da88], ecx */
  w32((uint32_t)(0x1264da88), (ECX));
  /* 12623dab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623daf jne 0x12623e07 */
  if (!C.zf) goto L_12623e07;
  /* 12623db1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623db4 mov eax, dword ptr [0x1264f558] */
  EAX = (r32((uint32_t)(0x1264f558)));
  /* 12623db9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623dbc mov dword ptr [0x1264f558], eax */
  w32((uint32_t)(0x1264f558), (EAX));
  /* 12623dc1 mov ecx, dword ptr [0x1264f558] */
  ECX = (r32((uint32_t)(0x1264f558)));
  /* 12623dc7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623dca mov dword ptr [0x1264f558], ecx */
  w32((uint32_t)(0x1264f558), (ECX));
  /* 12623dd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623dd3 mov eax, dword ptr [0x1264f560] */
  EAX = (r32((uint32_t)(0x1264f560)));
  /* 12623dd8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623ddb mov dword ptr [0x1264f560], eax */
  w32((uint32_t)(0x1264f560), (EAX));
  /* 12623de0 mov ecx, dword ptr [0x1264f560] */
  ECX = (r32((uint32_t)(0x1264f560)));
  /* 12623de6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623de9 mov dword ptr [0x1264f560], ecx */
  w32((uint32_t)(0x1264f560), (ECX));
  /* 12623def mov edx, dword ptr [0x1264f560] */
  EDX = (r32((uint32_t)(0x1264f560)));
  /* 12623df5 cmp edx, dword ptr [0x1264f564] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264f564))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623dfb jbe 0x12623e07 */
  if ((C.cf||C.zf)) goto L_12623e07;
  /* 12623dfd mov eax, dword ptr [0x1264f560] */
  EAX = (r32((uint32_t)(0x1264f560)));
  /* 12623e02 mov dword ptr [0x1264f564], eax */
  w32((uint32_t)(0x1264f564), (EAX));
L_12623e07:;
  /* 12623e07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e0a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623e0d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12623e10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623e16 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623e19 jbe 0x12623e3f */
  if ((C.cf||C.zf)) goto L_12623e3f;
  /* 12623e1b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623e21 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12623e24 push edx */
  push32((uint32_t)(EDX));
  /* 12623e25 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623e27 mov al, byte ptr [0x1264da92] */
  AL = (r8((uint32_t)(0x1264da92)));
  /* 12623e2c push eax */
  push32((uint32_t)(EAX));
  /* 12623e2d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623e33 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623e36 push edx */
  push32((uint32_t)(EDX));
  /* 12623e37 call 0x12627350 */
  push32(0x12623e3cu); f_12627350();
  /* 12623e3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12623e3f:;
  /* 12623e3f push 4 */
  push32((uint32_t)(0x4u));
  /* 12623e41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12623e43 mov al, byte ptr [0x1264da90] */
  AL = (r8((uint32_t)(0x1264da90)));
  /* 12623e48 push eax */
  push32((uint32_t)(EAX));
  /* 12623e49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623e4c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12623e4f push ecx */
  push32((uint32_t)(ECX));
  /* 12623e50 call 0x12627350 */
  push32(0x12623e55u); f_12627350();
  /* 12623e55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623e58 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623e5c jne 0x12623e79 */
  if (!C.zf) goto L_12623e79;
  /* 12623e5e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e61 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12623e64 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12623e67 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12623e6d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12623e70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e73 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12623e76 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12623e79:;
  /* 12623e79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623e7f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12623e82:;
  /* 12623e82 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623e86 jne 0x12623eb7 */
  if (!C.zf) goto L_12623eb7;
  /* 12623e88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623e8c jne 0x12623e96 */
  if (!C.zf) goto L_12623e96;
  /* 12623e8e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623e91 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623e94 je 0x12623eb7 */
  if (C.zf) goto L_12623eb7;
L_12623e96:;
  /* 12623e96 push 0x1264a5ec */
  push32((uint32_t)(0x1264a5ecu));
  /* 12623e9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12623e9d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12623ea2 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623ea7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623ea9 call 0x126226a0 */
  push32(0x12623eaeu); f_126226a0();
  /* 12623eae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623eb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623eb4 jne 0x12623eb7 */
  if (!C.zf) goto L_12623eb7;
  /* 12623eb6 int3  */
  x86_unimpl("int3 @ 0x12623eb6");
L_12623eb7:;
  /* 12623eb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12623eb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12623ebb jne 0x12623e82 */
  if (!C.zf) goto L_12623e82;
  /* 12623ebd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623ec0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ec3 je 0x12623ecb */
  if (C.zf) goto L_12623ecb;
  /* 12623ec5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ec9 je 0x12623ed3 */
  if (C.zf) goto L_12623ed3;
L_12623ecb:;
  /* 12623ecb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12623ece jmp 0x12623fba */
  goto L_12623fba;
L_12623ed3:;
  /* 12623ed3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623ed6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ed9 je 0x12623eeb */
  if (C.zf) goto L_12623eeb;
  /* 12623edb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623ede mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12623ee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623ee3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12623ee6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12623ee9 jmp 0x12623f27 */
  goto L_12623f27;
L_12623eeb:;
  /* 12623eeb mov eax, dword ptr [0x1264f554] */
  EAX = (r32((uint32_t)(0x1264f554)));
  /* 12623ef0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623ef3 je 0x12623f16 */
  if (C.zf) goto L_12623f16;
  /* 12623ef5 push 0x1264a5d0 */
  push32((uint32_t)(0x1264a5d0u));
  /* 12623efa push 0 */
  push32((uint32_t)(0x0u));
  /* 12623efc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 12623f01 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623f06 push 2 */
  push32((uint32_t)(0x2u));
  /* 12623f08 call 0x126226a0 */
  push32(0x12623f0du); f_126226a0();
  /* 12623f0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623f10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623f13 jne 0x12623f16 */
  if (!C.zf) goto L_12623f16;
  /* 12623f15 int3  */
  x86_unimpl("int3 @ 0x12623f15");
L_12623f16:;
  /* 12623f16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623f18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12623f1a jne 0x12623eeb */
  if (!C.zf) goto L_12623eeb;
  /* 12623f1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12623f22 mov dword ptr [0x1264f554], eax */
  w32((uint32_t)(0x1264f554), (EAX));
L_12623f27:;
  /* 12623f27 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f2a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623f2e je 0x12623f3f */
  if (C.zf) goto L_12623f3f;
  /* 12623f30 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12623f36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f39 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12623f3b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12623f3d jmp 0x12623f7a */
  goto L_12623f7a;
L_12623f3f:;
  /* 12623f3f mov eax, dword ptr [0x1264f55c] */
  EAX = (r32((uint32_t)(0x1264f55c)));
  /* 12623f44 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623f47 je 0x12623f6a */
  if (C.zf) goto L_12623f6a;
  /* 12623f49 push 0x1264a5b4 */
  push32((uint32_t)(0x1264a5b4u));
  /* 12623f4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12623f50 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12623f55 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12623f5a push 2 */
  push32((uint32_t)(0x2u));
  /* 12623f5c call 0x126226a0 */
  push32(0x12623f61u); f_126226a0();
  /* 12623f61 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623f64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623f67 jne 0x12623f6a */
  if (!C.zf) goto L_12623f6a;
  /* 12623f69 int3  */
  x86_unimpl("int3 @ 0x12623f69");
L_12623f6a:;
  /* 12623f6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12623f6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12623f6e jne 0x12623f3f */
  if (!C.zf) goto L_12623f3f;
  /* 12623f70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12623f75 mov dword ptr [0x1264f55c], eax */
  w32((uint32_t)(0x1264f55c), (EAX));
L_12623f7a:;
  /* 12623f7a cmp dword ptr [0x1264f55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12623f81 je 0x12623f91 */
  if (C.zf) goto L_12623f91;
  /* 12623f83 mov ecx, dword ptr [0x1264f55c] */
  ECX = (r32((uint32_t)(0x1264f55c)));
  /* 12623f89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f8c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12623f8f jmp 0x12623f99 */
  goto L_12623f99;
L_12623f91:;
  /* 12623f91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f94 mov dword ptr [0x1264f554], eax */
  w32((uint32_t)(0x1264f554), (EAX));
L_12623f99:;
  /* 12623f99 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623f9c mov edx, dword ptr [0x1264f55c] */
  EDX = (r32((uint32_t)(0x1264f55c)));
  /* 12623fa2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12623fa4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623fa7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12623fae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12623fb1 mov dword ptr [0x1264f55c], ecx */
  w32((uint32_t)(0x1264f55c), (ECX));
  /* 12623fb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12623fba:;
  /* 12623fba pop edi */
  EDI = (pop32());
  /* 12623fbb pop esi */
  ESI = (pop32());
  /* 12623fbc pop ebx */
  EBX = (pop32());
  /* 12623fbd mov esp, ebp */
  ESP = (EBP);
  /* 12623fbf pop ebp */
  EBP = (pop32());
  /* 12623fc0 ret  */
  ESPCHK(0x12623ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fd0 @ 0x12623fd0 (27 bytes, 13 insns) */
void f_12623fd0(void) {
  FTRACE(0x12623fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12623fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12623fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12623fd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12623fd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12623fdc push eax */
  push32((uint32_t)(EAX));
  /* 12623fdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12623fe0 push ecx */
  push32((uint32_t)(ECX));
  /* 12623fe1 call 0x12623ff0 */
  push32(0x12623fe6u); f_12623ff0();
  /* 12623fe6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623fe9 pop ebp */
  EBP = (pop32());
  /* 12623fea ret  */
  ESPCHK(0x12623fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ff0 @ 0x12623ff0 (64 bytes, 27 insns) */
void f_12623ff0(void) {
  FTRACE(0x12623ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12623ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 12623ff1 mov ebp, esp */
  EBP = (ESP);
  /* 12623ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 12623ff4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12623ff6 call 0x12626fe0 */
  push32(0x12623ffbu); f_12626fe0();
  /* 12623ffb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12623ffe push 0 */
  push32((uint32_t)(0x0u));
  /* 12624000 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12624003 push eax */
  push32((uint32_t)(EAX));
  /* 12624004 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12624007 push ecx */
  push32((uint32_t)(ECX));
  /* 12624008 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262400b push edx */
  push32((uint32_t)(EDX));
  /* 1262400c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262400f push eax */
  push32((uint32_t)(EAX));
  /* 12624010 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624013 push ecx */
  push32((uint32_t)(ECX));
  /* 12624014 call 0x12623ab0 */
  push32(0x12624019u); f_12623ab0();
  /* 12624019 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262401c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262401f push 9 */
  push32((uint32_t)(0x9u));
  /* 12624021 call 0x12627080 */
  push32(0x12624026u); f_12627080();
  /* 12624026 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624029 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262402c mov esp, ebp */
  ESP = (EBP);
  /* 1262402e pop ebp */
  EBP = (pop32());
  /* 1262402f ret  */
  ESPCHK(0x12623ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004030 @ 0x12624030 (19 bytes, 9 insns) */
void f_12624030(void) {
  FTRACE(0x12624030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624030 push ebp */
  push32((uint32_t)(EBP));
  /* 12624031 mov ebp, esp */
  EBP = (ESP);
  /* 12624033 push 1 */
  push32((uint32_t)(0x1u));
  /* 12624035 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624038 push eax */
  push32((uint32_t)(EAX));
  /* 12624039 call 0x12624070 */
  push32(0x1262403eu); f_12624070();
  /* 1262403e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624041 pop ebp */
  EBP = (pop32());
  /* 12624042 ret  */
  ESPCHK(0x12624030u, _esp0);
  ESP += 4; return;
}

/* FUN_10004050 @ 0x12624050 (19 bytes, 9 insns) */
void f_12624050(void) {
  FTRACE(0x12624050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624050 push ebp */
  push32((uint32_t)(EBP));
  /* 12624051 mov ebp, esp */
  EBP = (ESP);
  /* 12624053 push 1 */
  push32((uint32_t)(0x1u));
  /* 12624055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624058 push eax */
  push32((uint32_t)(EAX));
  /* 12624059 call 0x126240a0 */
  push32(0x1262405eu); f_126240a0();
  /* 1262405e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624061 pop ebp */
  EBP = (pop32());
  /* 12624062 ret  */
  ESPCHK(0x12624050u, _esp0);
  ESP += 4; return;
}

/* FUN_10004070 @ 0x12624070 (41 bytes, 16 insns) */
void f_12624070(void) {
  FTRACE(0x12624070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624070 push ebp */
  push32((uint32_t)(EBP));
  /* 12624071 mov ebp, esp */
  EBP = (ESP);
  /* 12624073 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624075 call 0x12626fe0 */
  push32(0x1262407au); f_12626fe0();
  /* 1262407a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262407d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624080 push eax */
  push32((uint32_t)(EAX));
  /* 12624081 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624084 push ecx */
  push32((uint32_t)(ECX));
  /* 12624085 call 0x126240a0 */
  push32(0x1262408au); f_126240a0();
  /* 1262408a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262408d push 9 */
  push32((uint32_t)(0x9u));
  /* 1262408f call 0x12627080 */
  push32(0x12624094u); f_12627080();
  /* 12624094 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624097 pop ebp */
  EBP = (pop32());
  /* 12624098 ret  */
  ESPCHK(0x12624070u, _esp0);
  ESP += 4; return;
}

/* FUN_100040a0 @ 0x126240a0 (1004 bytes, 342 insns) */
void f_126240a0(void) {
  FTRACE(0x126240a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126240a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126240a1 mov ebp, esp */
  EBP = (ESP);
  /* 126240a3 push ecx */
  push32((uint32_t)(ECX));
  /* 126240a4 push ebx */
  push32((uint32_t)(EBX));
  /* 126240a5 push esi */
  push32((uint32_t)(ESI));
  /* 126240a6 push edi */
  push32((uint32_t)(EDI));
  /* 126240a7 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 126240ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 126240af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126240b1 je 0x126240e3 */
  if (C.zf) goto L_126240e3;
L_126240b3:;
  /* 126240b3 call 0x12624780 */
  push32(0x126240b8u); f_12624780();
  /* 126240b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126240ba jne 0x126240dd */
  if (!C.zf) goto L_126240dd;
  /* 126240bc push 0x1264a5a0 */
  push32((uint32_t)(0x1264a5a0u));
  /* 126240c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126240c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 126240c8 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126240cd push 2 */
  push32((uint32_t)(0x2u));
  /* 126240cf call 0x126226a0 */
  push32(0x126240d4u); f_126226a0();
  /* 126240d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126240d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126240da jne 0x126240dd */
  if (!C.zf) goto L_126240dd;
  /* 126240dc int3  */
  x86_unimpl("int3 @ 0x126240dc");
L_126240dd:;
  /* 126240dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126240df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126240e1 jne 0x126240b3 */
  if (!C.zf) goto L_126240b3;
L_126240e3:;
  /* 126240e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126240e7 jne 0x126240ee */
  if (!C.zf) goto L_126240ee;
  /* 126240e9 jmp 0x12624485 */
  goto L_12624485;
L_126240ee:;
  /* 126240ee push 0 */
  push32((uint32_t)(0x0u));
  /* 126240f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126240f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126240f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126240f7 push edx */
  push32((uint32_t)(EDX));
  /* 126240f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126240fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126240fd push eax */
  push32((uint32_t)(EAX));
  /* 126240fe push 3 */
  push32((uint32_t)(0x3u));
  /* 12624100 call dword ptr [0x1264dc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264dc90))), 0x12624106u);
  /* 12624106 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624109 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262410b jne 0x12624138 */
  if (!C.zf) goto L_12624138;
L_1262410d:;
  /* 1262410d push 0x1264a864 */
  push32((uint32_t)(0x1264a864u));
  /* 12624112 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12624117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624119 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262411b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262411d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262411f call 0x126226a0 */
  push32(0x12624124u); f_126226a0();
  /* 12624124 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624127 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262412a jne 0x1262412d */
  if (!C.zf) goto L_1262412d;
  /* 1262412c int3  */
  x86_unimpl("int3 @ 0x1262412c");
L_1262412d:;
  /* 1262412d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262412f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12624131 jne 0x1262410d */
  if (!C.zf) goto L_1262410d;
  /* 12624133 jmp 0x12624485 */
  goto L_12624485;
L_12624138:;
  /* 12624138 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262413b push edx */
  push32((uint32_t)(EDX));
  /* 1262413c call 0x12624be0 */
  push32(0x12624141u); f_12624be0();
  /* 12624141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624144 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624146 jne 0x12624169 */
  if (!C.zf) goto L_12624169;
  /* 12624148 push 0x1264a6a4 */
  push32((uint32_t)(0x1264a6a4u));
  /* 1262414d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262414f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12624154 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12624159 push 2 */
  push32((uint32_t)(0x2u));
  /* 1262415b call 0x126226a0 */
  push32(0x12624160u); f_126226a0();
  /* 12624160 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624163 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624166 jne 0x12624169 */
  if (!C.zf) goto L_12624169;
  /* 12624168 int3  */
  x86_unimpl("int3 @ 0x12624168");
L_12624169:;
  /* 12624169 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262416b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262416d jne 0x12624138 */
  if (!C.zf) goto L_12624138;
  /* 1262416f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624172 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624175 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12624178:;
  /* 12624178 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262417b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1262417e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624183 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624186 je 0x126241cb */
  if (C.zf) goto L_126241cb;
  /* 12624188 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262418b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262418f je 0x126241cb */
  if (C.zf) goto L_126241cb;
  /* 12624191 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624194 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624197 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262419c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262419f je 0x126241cb */
  if (C.zf) goto L_126241cb;
  /* 126241a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126241a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126241a8 je 0x126241cb */
  if (C.zf) goto L_126241cb;
  /* 126241aa push 0x1264a83c */
  push32((uint32_t)(0x1264a83cu));
  /* 126241af push 0 */
  push32((uint32_t)(0x0u));
  /* 126241b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 126241b6 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126241bb push 2 */
  push32((uint32_t)(0x2u));
  /* 126241bd call 0x126226a0 */
  push32(0x126241c2u); f_126226a0();
  /* 126241c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126241c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126241c8 jne 0x126241cb */
  if (!C.zf) goto L_126241cb;
  /* 126241ca int3  */
  x86_unimpl("int3 @ 0x126241ca");
L_126241cb:;
  /* 126241cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126241cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126241cf jne 0x12624178 */
  if (!C.zf) goto L_12624178;
  /* 126241d1 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 126241d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 126241d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126241db jne 0x126242a6 */
  if (!C.zf) goto L_126242a6;
  /* 126241e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 126241e3 mov cl, byte ptr [0x1264da90] */
  CL = (r8((uint32_t)(0x1264da90)));
  /* 126241e9 push ecx */
  push32((uint32_t)(ECX));
  /* 126241ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126241ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126241f0 push edx */
  push32((uint32_t)(EDX));
  /* 126241f1 call 0x126246f0 */
  push32(0x126241f6u); f_126246f0();
  /* 126241f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126241f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126241fb jne 0x12624240 */
  if (!C.zf) goto L_12624240;
L_126241fd:;
  /* 126241fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624200 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624203 push eax */
  push32((uint32_t)(EAX));
  /* 12624204 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624207 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1262420a push edx */
  push32((uint32_t)(EDX));
  /* 1262420b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262420e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12624211 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12624217 mov edx, dword ptr [ecx*4 + 0x1264da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da94)));
  /* 1262421e push edx */
  push32((uint32_t)(EDX));
  /* 1262421f push 0x1264a810 */
  push32((uint32_t)(0x1264a810u));
  /* 12624224 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624226 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624228 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262422a push 1 */
  push32((uint32_t)(0x1u));
  /* 1262422c call 0x126226a0 */
  push32(0x12624231u); f_126226a0();
  /* 12624231 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624234 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624237 jne 0x1262423a */
  if (!C.zf) goto L_1262423a;
  /* 12624239 int3  */
  x86_unimpl("int3 @ 0x12624239");
L_1262423a:;
  /* 1262423a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262423c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262423e jne 0x126241fd */
  if (!C.zf) goto L_126241fd;
L_12624240:;
  /* 12624240 push 4 */
  push32((uint32_t)(0x4u));
  /* 12624242 mov cl, byte ptr [0x1264da90] */
  CL = (r8((uint32_t)(0x1264da90)));
  /* 12624248 push ecx */
  push32((uint32_t)(ECX));
  /* 12624249 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262424c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262424f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624252 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12624256 push edx */
  push32((uint32_t)(EDX));
  /* 12624257 call 0x126246f0 */
  push32(0x1262425cu); f_126246f0();
  /* 1262425c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262425f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624261 jne 0x126242a6 */
  if (!C.zf) goto L_126242a6;
L_12624263:;
  /* 12624263 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624266 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624269 push eax */
  push32((uint32_t)(EAX));
  /* 1262426a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262426d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12624270 push edx */
  push32((uint32_t)(EDX));
  /* 12624271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624274 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12624277 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262427d mov edx, dword ptr [ecx*4 + 0x1264da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da94)));
  /* 12624284 push edx */
  push32((uint32_t)(EDX));
  /* 12624285 push 0x1264a7e4 */
  push32((uint32_t)(0x1264a7e4u));
  /* 1262428a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262428c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262428e push 0 */
  push32((uint32_t)(0x0u));
  /* 12624290 push 1 */
  push32((uint32_t)(0x1u));
  /* 12624292 call 0x126226a0 */
  push32(0x12624297u); f_126226a0();
  /* 12624297 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262429a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262429d jne 0x126242a0 */
  if (!C.zf) goto L_126242a0;
  /* 1262429f int3  */
  x86_unimpl("int3 @ 0x1262429f");
L_126242a0:;
  /* 126242a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126242a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126242a4 jne 0x12624263 */
  if (!C.zf) goto L_12624263;
L_126242a6:;
  /* 126242a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126242a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126242ad jne 0x1262431b */
  if (!C.zf) goto L_1262431b;
L_126242af:;
  /* 126242af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126242b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126242b9 jne 0x126242c4 */
  if (!C.zf) goto L_126242c4;
  /* 126242bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126242be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126242c2 je 0x126242e5 */
  if (C.zf) goto L_126242e5;
L_126242c4:;
  /* 126242c4 push 0x1264a7a4 */
  push32((uint32_t)(0x1264a7a4u));
  /* 126242c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126242cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 126242d0 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126242d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 126242d7 call 0x126226a0 */
  push32(0x126242dcu); f_126226a0();
  /* 126242dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126242df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126242e2 jne 0x126242e5 */
  if (!C.zf) goto L_126242e5;
  /* 126242e4 int3  */
  x86_unimpl("int3 @ 0x126242e4");
L_126242e5:;
  /* 126242e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126242e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126242e9 jne 0x126242af */
  if (!C.zf) goto L_126242af;
  /* 126242eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126242ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126242f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126242f4 push eax */
  push32((uint32_t)(EAX));
  /* 126242f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126242f7 mov cl, byte ptr [0x1264da91] */
  CL = (r8((uint32_t)(0x1264da91)));
  /* 126242fd push ecx */
  push32((uint32_t)(ECX));
  /* 126242fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624301 push edx */
  push32((uint32_t)(EDX));
  /* 12624302 call 0x12627350 */
  push32(0x12624307u); f_12627350();
  /* 12624307 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262430a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262430d push eax */
  push32((uint32_t)(EAX));
  /* 1262430e call 0x12627750 */
  push32(0x12624313u); f_12627750();
  /* 12624313 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624316 jmp 0x12624485 */
  goto L_12624485;
L_1262431b:;
  /* 1262431b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262431e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624322 jne 0x12624331 */
  if (!C.zf) goto L_12624331;
  /* 12624324 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624328 jne 0x12624331 */
  if (!C.zf) goto L_12624331;
  /* 1262432a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12624331:;
  /* 12624331 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624334 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624337 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262433a je 0x1262435d */
  if (C.zf) goto L_1262435d;
  /* 1262433c push 0x1264a784 */
  push32((uint32_t)(0x1264a784u));
  /* 12624341 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624343 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 12624348 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 1262434d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262434f call 0x126226a0 */
  push32(0x12624354u); f_126226a0();
  /* 12624354 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624357 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262435a jne 0x1262435d */
  if (!C.zf) goto L_1262435d;
  /* 1262435c int3  */
  x86_unimpl("int3 @ 0x1262435c");
L_1262435d:;
  /* 1262435d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262435f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12624361 jne 0x12624331 */
  if (!C.zf) goto L_12624331;
  /* 12624363 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624366 mov eax, dword ptr [0x1264f560] */
  EAX = (r32((uint32_t)(0x1264f560)));
  /* 1262436b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262436e mov dword ptr [0x1264f560], eax */
  w32((uint32_t)(0x1264f560), (EAX));
  /* 12624373 mov ecx, dword ptr [0x1264da84] */
  ECX = (r32((uint32_t)(0x1264da84)));
  /* 12624379 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1262437c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262437e jne 0x1262445c */
  if (!C.zf) goto L_1262445c;
  /* 12624384 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624387 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262438a je 0x1262439c */
  if (C.zf) goto L_1262439c;
  /* 1262438c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262438f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12624391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624394 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12624397 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1262439a jmp 0x126243da */
  goto L_126243da;
L_1262439c:;
  /* 1262439c mov ecx, dword ptr [0x1264f554] */
  ECX = (r32((uint32_t)(0x1264f554)));
  /* 126243a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126243a5 je 0x126243c8 */
  if (C.zf) goto L_126243c8;
  /* 126243a7 push 0x1264a76c */
  push32((uint32_t)(0x1264a76cu));
  /* 126243ac push 0 */
  push32((uint32_t)(0x0u));
  /* 126243ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 126243b3 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126243b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 126243ba call 0x126226a0 */
  push32(0x126243bfu); f_126226a0();
  /* 126243bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126243c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126243c5 jne 0x126243c8 */
  if (!C.zf) goto L_126243c8;
  /* 126243c7 int3  */
  x86_unimpl("int3 @ 0x126243c7");
L_126243c8:;
  /* 126243c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126243ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126243cc jne 0x1262439c */
  if (!C.zf) goto L_1262439c;
  /* 126243ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126243d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126243d4 mov dword ptr [0x1264f554], ecx */
  w32((uint32_t)(0x1264f554), (ECX));
L_126243da:;
  /* 126243da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126243dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126243e1 je 0x126243f2 */
  if (C.zf) goto L_126243f2;
  /* 126243e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126243e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 126243e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126243ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126243ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 126243f0 jmp 0x1262442f */
  goto L_1262442f;
L_126243f2:;
  /* 126243f2 mov ecx, dword ptr [0x1264f55c] */
  ECX = (r32((uint32_t)(0x1264f55c)));
  /* 126243f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126243fb je 0x1262441e */
  if (C.zf) goto L_1262441e;
  /* 126243fd push 0x1264a754 */
  push32((uint32_t)(0x1264a754u));
  /* 12624402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624404 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 12624409 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 1262440e push 2 */
  push32((uint32_t)(0x2u));
  /* 12624410 call 0x126226a0 */
  push32(0x12624415u); f_126226a0();
  /* 12624415 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624418 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262441b jne 0x1262441e */
  if (!C.zf) goto L_1262441e;
  /* 1262441d int3  */
  x86_unimpl("int3 @ 0x1262441d");
L_1262441e:;
  /* 1262441e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12624420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12624422 jne 0x126243f2 */
  if (!C.zf) goto L_126243f2;
  /* 12624424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624427 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12624429 mov dword ptr [0x1264f55c], ecx */
  w32((uint32_t)(0x1264f55c), (ECX));
L_1262442f:;
  /* 1262442f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624432 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12624435 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624438 push eax */
  push32((uint32_t)(EAX));
  /* 12624439 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262443b mov cl, byte ptr [0x1264da91] */
  CL = (r8((uint32_t)(0x1264da91)));
  /* 12624441 push ecx */
  push32((uint32_t)(ECX));
  /* 12624442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624445 push edx */
  push32((uint32_t)(EDX));
  /* 12624446 call 0x12627350 */
  push32(0x1262444bu); f_12627350();
  /* 1262444b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262444e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624451 push eax */
  push32((uint32_t)(EAX));
  /* 12624452 call 0x12627750 */
  push32(0x12624457u); f_12627750();
  /* 12624457 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262445a jmp 0x12624485 */
  goto L_12624485;
L_1262445c:;
  /* 1262445c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262445f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12624466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624469 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262446c push eax */
  push32((uint32_t)(EAX));
  /* 1262446d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262446f mov cl, byte ptr [0x1264da91] */
  CL = (r8((uint32_t)(0x1264da91)));
  /* 12624475 push ecx */
  push32((uint32_t)(ECX));
  /* 12624476 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624479 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262447c push edx */
  push32((uint32_t)(EDX));
  /* 1262447d call 0x12627350 */
  push32(0x12624482u); f_12627350();
  /* 12624482 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12624485:;
  /* 12624485 pop edi */
  EDI = (pop32());
  /* 12624486 pop esi */
  ESI = (pop32());
  /* 12624487 pop ebx */
  EBX = (pop32());
  /* 12624488 mov esp, ebp */
  ESP = (EBP);
  /* 1262448a pop ebp */
  EBP = (pop32());
  /* 1262448b ret  */
  ESPCHK(0x126240a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004490 @ 0x12624490 (19 bytes, 9 insns) */
void f_12624490(void) {
  FTRACE(0x12624490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624490 push ebp */
  push32((uint32_t)(EBP));
  /* 12624491 mov ebp, esp */
  EBP = (ESP);
  /* 12624493 push 1 */
  push32((uint32_t)(0x1u));
  /* 12624495 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624498 push eax */
  push32((uint32_t)(EAX));
  /* 12624499 call 0x126244b0 */
  push32(0x1262449eu); f_126244b0();
  /* 1262449e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126244a1 pop ebp */
  EBP = (pop32());
  /* 126244a2 ret  */
  ESPCHK(0x12624490u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x126244b0 (342 bytes, 119 insns) */
void f_126244b0(void) {
  FTRACE(0x126244b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126244b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126244b1 mov ebp, esp */
  EBP = (ESP);
  /* 126244b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126244b6 push ebx */
  push32((uint32_t)(EBX));
  /* 126244b7 push esi */
  push32((uint32_t)(ESI));
  /* 126244b8 push edi */
  push32((uint32_t)(EDI));
  /* 126244b9 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 126244be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 126244c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126244c3 je 0x126244f5 */
  if (C.zf) goto L_126244f5;
L_126244c5:;
  /* 126244c5 call 0x12624780 */
  push32(0x126244cau); f_12624780();
  /* 126244ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126244cc jne 0x126244ef */
  if (!C.zf) goto L_126244ef;
  /* 126244ce push 0x1264a5a0 */
  push32((uint32_t)(0x1264a5a0u));
  /* 126244d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126244d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 126244da push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126244df push 2 */
  push32((uint32_t)(0x2u));
  /* 126244e1 call 0x126226a0 */
  push32(0x126244e6u); f_126226a0();
  /* 126244e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126244e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126244ec jne 0x126244ef */
  if (!C.zf) goto L_126244ef;
  /* 126244ee int3  */
  x86_unimpl("int3 @ 0x126244ee");
L_126244ef:;
  /* 126244ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126244f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126244f3 jne 0x126244c5 */
  if (!C.zf) goto L_126244c5;
L_126244f5:;
  /* 126244f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 126244f7 call 0x12626fe0 */
  push32(0x126244fcu); f_12626fe0();
  /* 126244fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126244ff:;
  /* 126244ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624502 push edx */
  push32((uint32_t)(EDX));
  /* 12624503 call 0x12624be0 */
  push32(0x12624508u); f_12624be0();
  /* 12624508 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262450b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262450d jne 0x12624530 */
  if (!C.zf) goto L_12624530;
  /* 1262450f push 0x1264a6a4 */
  push32((uint32_t)(0x1264a6a4u));
  /* 12624514 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624516 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1262451b push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12624520 push 2 */
  push32((uint32_t)(0x2u));
  /* 12624522 call 0x126226a0 */
  push32(0x12624527u); f_126226a0();
  /* 12624527 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262452a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262452d jne 0x12624530 */
  if (!C.zf) goto L_12624530;
  /* 1262452f int3  */
  x86_unimpl("int3 @ 0x1262452f");
L_12624530:;
  /* 12624530 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624534 jne 0x126244ff */
  if (!C.zf) goto L_126244ff;
  /* 12624536 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624539 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262453c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1262453f:;
  /* 1262453f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624542 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624545 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262454a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262454d je 0x12624592 */
  if (C.zf) goto L_12624592;
  /* 1262454f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624552 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624556 je 0x12624592 */
  if (C.zf) goto L_12624592;
  /* 12624558 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262455b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1262455e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624563 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624566 je 0x12624592 */
  if (C.zf) goto L_12624592;
  /* 12624568 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262456b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262456f je 0x12624592 */
  if (C.zf) goto L_12624592;
  /* 12624571 push 0x1264a83c */
  push32((uint32_t)(0x1264a83cu));
  /* 12624576 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624578 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1262457d push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 12624582 push 2 */
  push32((uint32_t)(0x2u));
  /* 12624584 call 0x126226a0 */
  push32(0x12624589u); f_126226a0();
  /* 12624589 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262458c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262458f jne 0x12624592 */
  if (!C.zf) goto L_12624592;
  /* 12624591 int3  */
  x86_unimpl("int3 @ 0x12624591");
L_12624592:;
  /* 12624592 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12624594 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12624596 jne 0x1262453f */
  if (!C.zf) goto L_1262453f;
  /* 12624598 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262459b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262459f jne 0x126245ae */
  if (!C.zf) goto L_126245ae;
  /* 126245a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126245a5 jne 0x126245ae */
  if (!C.zf) goto L_126245ae;
  /* 126245a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_126245ae:;
  /* 126245ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126245b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126245b5 je 0x126245e9 */
  if (C.zf) goto L_126245e9;
L_126245b7:;
  /* 126245b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126245ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126245bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126245c0 je 0x126245e3 */
  if (C.zf) goto L_126245e3;
  /* 126245c2 push 0x1264a784 */
  push32((uint32_t)(0x1264a784u));
  /* 126245c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126245c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 126245ce push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 126245d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 126245d5 call 0x126226a0 */
  push32(0x126245dau); f_126226a0();
  /* 126245da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126245dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126245e0 jne 0x126245e3 */
  if (!C.zf) goto L_126245e3;
  /* 126245e2 int3  */
  x86_unimpl("int3 @ 0x126245e2");
L_126245e3:;
  /* 126245e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126245e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126245e7 jne 0x126245b7 */
  if (!C.zf) goto L_126245b7;
L_126245e9:;
  /* 126245e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126245ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126245ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126245f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 126245f4 call 0x12627080 */
  push32(0x126245f9u); f_12627080();
  /* 126245f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126245fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126245ff pop edi */
  EDI = (pop32());
  /* 12624600 pop esi */
  ESI = (pop32());
  /* 12624601 pop ebx */
  EBX = (pop32());
  /* 12624602 mov esp, ebp */
  ESP = (EBP);
  /* 12624604 pop ebp */
  EBP = (pop32());
  /* 12624605 ret  */
  ESPCHK(0x126244b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004610 @ 0x12624610 (28 bytes, 11 insns) */
void f_12624610(void) {
  FTRACE(0x12624610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624610 push ebp */
  push32((uint32_t)(EBP));
  /* 12624611 mov ebp, esp */
  EBP = (ESP);
  /* 12624613 push ecx */
  push32((uint32_t)(ECX));
  /* 12624614 mov eax, dword ptr [0x1264da8c] */
  EAX = (r32((uint32_t)(0x1264da8c)));
  /* 12624619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262461c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262461f mov dword ptr [0x1264da8c], ecx */
  w32((uint32_t)(0x1264da8c), (ECX));
  /* 12624625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624628 mov esp, ebp */
  ESP = (EBP);
  /* 1262462a pop ebp */
  EBP = (pop32());
  /* 1262462b ret  */
  ESPCHK(0x12624610u, _esp0);
  ESP += 4; return;
}

/* FUN_10004630 @ 0x12624630 (157 bytes, 59 insns) */
void f_12624630(void) {
  FTRACE(0x12624630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624630 push ebp */
  push32((uint32_t)(EBP));
  /* 12624631 mov ebp, esp */
  EBP = (ESP);
  /* 12624633 push ecx */
  push32((uint32_t)(ECX));
  /* 12624634 push ebx */
  push32((uint32_t)(EBX));
  /* 12624635 push esi */
  push32((uint32_t)(ESI));
  /* 12624636 push edi */
  push32((uint32_t)(EDI));
  /* 12624637 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624639 call 0x12626fe0 */
  push32(0x1262463eu); f_12626fe0();
  /* 1262463e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624644 push eax */
  push32((uint32_t)(EAX));
  /* 12624645 call 0x12624be0 */
  push32(0x1262464au); f_12624be0();
  /* 1262464a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262464d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262464f je 0x126246bc */
  if (C.zf) goto L_126246bc;
  /* 12624651 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624654 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624657 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262465a:;
  /* 1262465a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262465d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624660 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624665 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624668 je 0x126246ad */
  if (C.zf) goto L_126246ad;
  /* 1262466a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262466d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624671 je 0x126246ad */
  if (C.zf) goto L_126246ad;
  /* 12624673 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624676 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624679 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262467e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624681 je 0x126246ad */
  if (C.zf) goto L_126246ad;
  /* 12624683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624686 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262468a je 0x126246ad */
  if (C.zf) goto L_126246ad;
  /* 1262468c push 0x1264a83c */
  push32((uint32_t)(0x1264a83cu));
  /* 12624691 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624693 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12624698 push 0x1264a594 */
  push32((uint32_t)(0x1264a594u));
  /* 1262469d push 2 */
  push32((uint32_t)(0x2u));
  /* 1262469f call 0x126226a0 */
  push32(0x126246a4u); f_126226a0();
  /* 126246a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126246a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126246aa jne 0x126246ad */
  if (!C.zf) goto L_126246ad;
  /* 126246ac int3  */
  x86_unimpl("int3 @ 0x126246ac");
L_126246ad:;
  /* 126246ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126246af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126246b1 jne 0x1262465a */
  if (!C.zf) goto L_1262465a;
  /* 126246b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126246b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126246b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_126246bc:;
  /* 126246bc push 9 */
  push32((uint32_t)(0x9u));
  /* 126246be call 0x12627080 */
  push32(0x126246c3u); f_12627080();
  /* 126246c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126246c6 pop edi */
  EDI = (pop32());
  /* 126246c7 pop esi */
  ESI = (pop32());
  /* 126246c8 pop ebx */
  EBX = (pop32());
  /* 126246c9 mov esp, ebp */
  ESP = (EBP);
  /* 126246cb pop ebp */
  EBP = (pop32());
  /* 126246cc ret  */
  ESPCHK(0x12624630u, _esp0);
  ESP += 4; return;
}

/* FUN_100046d0 @ 0x126246d0 (28 bytes, 11 insns) */
void f_126246d0(void) {
  FTRACE(0x126246d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126246d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126246d1 mov ebp, esp */
  EBP = (ESP);
  /* 126246d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126246d4 mov eax, dword ptr [0x1264dc90] */
  EAX = (r32((uint32_t)(0x1264dc90)));
  /* 126246d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126246dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126246df mov dword ptr [0x1264dc90], ecx */
  w32((uint32_t)(0x1264dc90), (ECX));
  /* 126246e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126246e8 mov esp, ebp */
  ESP = (EBP);
  /* 126246ea pop ebp */
  EBP = (pop32());
  /* 126246eb ret  */
  ESPCHK(0x126246d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100046f0 @ 0x126246f0 (136 bytes, 55 insns) */
void f_126246f0(void) {
  FTRACE(0x126246f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126246f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126246f1 mov ebp, esp */
  EBP = (ESP);
  /* 126246f3 push ecx */
  push32((uint32_t)(ECX));
  /* 126246f4 push ebx */
  push32((uint32_t)(EBX));
  /* 126246f5 push esi */
  push32((uint32_t)(ESI));
  /* 126246f6 push edi */
  push32((uint32_t)(EDI));
  /* 126246f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_126246fe:;
  /* 126246fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624701 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624704 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624707 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1262470a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262470c je 0x1262476e */
  if (C.zf) goto L_1262476e;
  /* 1262470e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624711 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624713 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12624715 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624718 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262471e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624721 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624724 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12624727 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624729 je 0x1262476c */
  if (C.zf) goto L_1262476c;
L_1262472b:;
  /* 1262472b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262472e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624733 push eax */
  push32((uint32_t)(EAX));
  /* 12624734 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624737 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12624739 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1262473c push edx */
  push32((uint32_t)(EDX));
  /* 1262473d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624740 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624743 push eax */
  push32((uint32_t)(EAX));
  /* 12624744 push 0x1264a880 */
  push32((uint32_t)(0x1264a880u));
  /* 12624749 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262474b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262474d push 0 */
  push32((uint32_t)(0x0u));
  /* 1262474f push 0 */
  push32((uint32_t)(0x0u));
  /* 12624751 call 0x126226a0 */
  push32(0x12624756u); f_126226a0();
  /* 12624756 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624759 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262475c jne 0x1262475f */
  if (!C.zf) goto L_1262475f;
  /* 1262475e int3  */
  x86_unimpl("int3 @ 0x1262475e");
L_1262475f:;
  /* 1262475f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12624761 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12624763 jne 0x1262472b */
  if (!C.zf) goto L_1262472b;
  /* 12624765 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1262476c:;
  /* 1262476c jmp 0x126246fe */
  goto L_126246fe;
L_1262476e:;
  /* 1262476e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624771 pop edi */
  EDI = (pop32());
  /* 12624772 pop esi */
  ESI = (pop32());
  /* 12624773 pop ebx */
  EBX = (pop32());
  /* 12624774 mov esp, ebp */
  ESP = (EBP);
  /* 12624776 pop ebp */
  EBP = (pop32());
  /* 12624777 ret  */
  ESPCHK(0x126246f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004780 @ 0x12624780 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12624780(void) {
  FTRACE(0x12624780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624780 push ebp */
  push32((uint32_t)(EBP));
  /* 12624781 mov ebp, esp */
  EBP = (ESP);
  /* 12624783 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624786 push ebx */
  push32((uint32_t)(EBX));
  /* 12624787 push esi */
  push32((uint32_t)(ESI));
  /* 12624788 push edi */
  push32((uint32_t)(EDI));
  /* 12624789 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12624790 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 12624795 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12624798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262479a jne 0x126247a6 */
  if (!C.zf) goto L_126247a6;
  /* 1262479c mov eax, 1 */
  EAX = (0x1u);
  /* 126247a1 jmp 0x12624ad8 */
  goto L_12624ad8;
L_126247a6:;
  /* 126247a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 126247a8 call 0x12626fe0 */
  push32(0x126247adu); f_12626fe0();
  /* 126247ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126247b0 call 0x126277c0 */
  push32(0x126247b5u); f_126277c0();
  /* 126247b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126247b8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126247bc je 0x126248c9 */
  if (C.zf) goto L_126248c9;
  /* 126247c2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126247c6 je 0x126248c9 */
  if (C.zf) goto L_126248c9;
  /* 126247cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126247cf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 126247d2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 126247d5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126247d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 126247db cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126247df ja 0x12624892 */
  if ((!C.cf&&!C.zf)) goto L_12624892;
  /* 126247e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 126247e8 jmp dword ptr [eax*4 + 0x12624adf] */
  switch (EAX) {
    case 0: goto L_1262486a;
    case 1: goto L_12624842;
    case 2: goto L_1262481a;
    case 3: goto L_126247ef;
    default: x86_unimpl("switch@0x126247e8 out of table"); return;
  }
L_126247ef:;
  /* 126247ef push 0x1264a9d4 */
  push32((uint32_t)(0x1264a9d4u));
  /* 126247f4 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 126247f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 126247fb push 0 */
  push32((uint32_t)(0x0u));
  /* 126247fd push 0 */
  push32((uint32_t)(0x0u));
  /* 126247ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12624801 call 0x126226a0 */
  push32(0x12624806u); f_126226a0();
  /* 12624806 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624809 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262480c jne 0x1262480f */
  if (!C.zf) goto L_1262480f;
  /* 1262480e int3  */
  x86_unimpl("int3 @ 0x1262480e");
L_1262480f:;
  /* 1262480f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12624811 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12624813 jne 0x126247ef */
  if (!C.zf) goto L_126247ef;
  /* 12624815 jmp 0x126248b8 */
  goto L_126248b8;
L_1262481a:;
  /* 1262481a push 0x1264a9b0 */
  push32((uint32_t)(0x1264a9b0u));
  /* 1262481f push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12624824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624826 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262482a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262482c call 0x126226a0 */
  push32(0x12624831u); f_126226a0();
  /* 12624831 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624834 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624837 jne 0x1262483a */
  if (!C.zf) goto L_1262483a;
  /* 12624839 int3  */
  x86_unimpl("int3 @ 0x12624839");
L_1262483a:;
  /* 1262483a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262483c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262483e jne 0x1262481a */
  if (!C.zf) goto L_1262481a;
  /* 12624840 jmp 0x126248b8 */
  goto L_126248b8;
L_12624842:;
  /* 12624842 push 0x1264a98c */
  push32((uint32_t)(0x1264a98cu));
  /* 12624847 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 1262484c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262484e push 0 */
  push32((uint32_t)(0x0u));
  /* 12624850 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624852 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624854 call 0x126226a0 */
  push32(0x12624859u); f_126226a0();
  /* 12624859 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262485c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262485f jne 0x12624862 */
  if (!C.zf) goto L_12624862;
  /* 12624861 int3  */
  x86_unimpl("int3 @ 0x12624861");
L_12624862:;
  /* 12624862 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624866 jne 0x12624842 */
  if (!C.zf) goto L_12624842;
  /* 12624868 jmp 0x126248b8 */
  goto L_126248b8;
L_1262486a:;
  /* 1262486a push 0x1264a968 */
  push32((uint32_t)(0x1264a968u));
  /* 1262486f push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12624874 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624876 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624878 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262487a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262487c call 0x126226a0 */
  push32(0x12624881u); f_126226a0();
  /* 12624881 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624884 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624887 jne 0x1262488a */
  if (!C.zf) goto L_1262488a;
  /* 12624889 int3  */
  x86_unimpl("int3 @ 0x12624889");
L_1262488a:;
  /* 1262488a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262488c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262488e jne 0x1262486a */
  if (!C.zf) goto L_1262486a;
  /* 12624890 jmp 0x126248b8 */
  goto L_126248b8;
L_12624892:;
  /* 12624892 push 0x1264a93c */
  push32((uint32_t)(0x1264a93cu));
  /* 12624897 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 1262489c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262489e push 0 */
  push32((uint32_t)(0x0u));
  /* 126248a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126248a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126248a4 call 0x126226a0 */
  push32(0x126248a9u); f_126226a0();
  /* 126248a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126248ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126248af jne 0x126248b2 */
  if (!C.zf) goto L_126248b2;
  /* 126248b1 int3  */
  x86_unimpl("int3 @ 0x126248b1");
L_126248b2:;
  /* 126248b2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126248b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126248b6 jne 0x12624892 */
  if (!C.zf) goto L_12624892;
L_126248b8:;
  /* 126248b8 push 9 */
  push32((uint32_t)(0x9u));
  /* 126248ba call 0x12627080 */
  push32(0x126248bfu); f_12627080();
  /* 126248bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126248c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126248c4 jmp 0x12624ad8 */
  goto L_12624ad8;
L_126248c9:;
  /* 126248c9 mov eax, dword ptr [0x1264f55c] */
  EAX = (r32((uint32_t)(0x1264f55c)));
  /* 126248ce mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126248d1 jmp 0x126248db */
  goto L_126248db;
L_126248d3:;
  /* 126248d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126248d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126248d8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_126248db:;
  /* 126248db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126248df je 0x12624acb */
  if (C.zf) goto L_12624acb;
  /* 126248e5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 126248ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126248ef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126248f2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126248f8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126248fb je 0x12624920 */
  if (C.zf) goto L_12624920;
  /* 126248fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624900 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624904 je 0x12624920 */
  if (C.zf) goto L_12624920;
  /* 12624906 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624909 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1262490c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12624912 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624915 je 0x12624920 */
  if (C.zf) goto L_12624920;
  /* 12624917 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262491a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262491e jne 0x12624938 */
  if (!C.zf) goto L_12624938;
L_12624920:;
  /* 12624920 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624923 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12624926 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262492c mov edx, dword ptr [ecx*4 + 0x1264da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da94)));
  /* 12624933 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12624936 jmp 0x1262493f */
  goto L_1262493f;
L_12624938:;
  /* 12624938 mov dword ptr [ebp - 0x14], 0x1264a934 */
  w32((uint32_t)(EBP + -0x14), (0x1264a934u));
L_1262493f:;
  /* 1262493f push 4 */
  push32((uint32_t)(0x4u));
  /* 12624941 mov al, byte ptr [0x1264da90] */
  AL = (r8((uint32_t)(0x1264da90)));
  /* 12624946 push eax */
  push32((uint32_t)(EAX));
  /* 12624947 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262494a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262494d push ecx */
  push32((uint32_t)(ECX));
  /* 1262494e call 0x126246f0 */
  push32(0x12624953u); f_126246f0();
  /* 12624953 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624958 jne 0x12624994 */
  if (!C.zf) goto L_12624994;
L_1262495a:;
  /* 1262495a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262495d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624960 push edx */
  push32((uint32_t)(EDX));
  /* 12624961 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624964 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12624967 push ecx */
  push32((uint32_t)(ECX));
  /* 12624968 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262496b push edx */
  push32((uint32_t)(EDX));
  /* 1262496c push 0x1264a810 */
  push32((uint32_t)(0x1264a810u));
  /* 12624971 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624973 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624975 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624977 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624979 call 0x126226a0 */
  push32(0x1262497eu); f_126226a0();
  /* 1262497e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624981 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624984 jne 0x12624987 */
  if (!C.zf) goto L_12624987;
  /* 12624986 int3  */
  x86_unimpl("int3 @ 0x12624986");
L_12624987:;
  /* 12624987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262498b jne 0x1262495a */
  if (!C.zf) goto L_1262495a;
  /* 1262498d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12624994:;
  /* 12624994 push 4 */
  push32((uint32_t)(0x4u));
  /* 12624996 mov cl, byte ptr [0x1264da90] */
  CL = (r8((uint32_t)(0x1264da90)));
  /* 1262499c push ecx */
  push32((uint32_t)(ECX));
  /* 1262499d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249a0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 126249a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249a6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 126249aa push edx */
  push32((uint32_t)(EDX));
  /* 126249ab call 0x126246f0 */
  push32(0x126249b0u); f_126246f0();
  /* 126249b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126249b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126249b5 jne 0x126249f1 */
  if (!C.zf) goto L_126249f1;
L_126249b7:;
  /* 126249b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249ba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126249bd push eax */
  push32((uint32_t)(EAX));
  /* 126249be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249c1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 126249c4 push edx */
  push32((uint32_t)(EDX));
  /* 126249c5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126249c8 push eax */
  push32((uint32_t)(EAX));
  /* 126249c9 push 0x1264a7e4 */
  push32((uint32_t)(0x1264a7e4u));
  /* 126249ce push 0 */
  push32((uint32_t)(0x0u));
  /* 126249d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126249d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126249d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126249d6 call 0x126226a0 */
  push32(0x126249dbu); f_126226a0();
  /* 126249db add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126249de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126249e1 jne 0x126249e4 */
  if (!C.zf) goto L_126249e4;
  /* 126249e3 int3  */
  x86_unimpl("int3 @ 0x126249e3");
L_126249e4:;
  /* 126249e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126249e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126249e8 jne 0x126249b7 */
  if (!C.zf) goto L_126249b7;
  /* 126249ea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_126249f1:;
  /* 126249f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249f4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126249f8 jne 0x12624a4a */
  if (!C.zf) goto L_12624a4a;
  /* 126249fa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126249fd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12624a00 push ecx */
  push32((uint32_t)(ECX));
  /* 12624a01 mov dl, byte ptr [0x1264da91] */
  DL = (r8((uint32_t)(0x1264da91)));
  /* 12624a07 push edx */
  push32((uint32_t)(EDX));
  /* 12624a08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a0e push eax */
  push32((uint32_t)(EAX));
  /* 12624a0f call 0x126246f0 */
  push32(0x12624a14u); f_126246f0();
  /* 12624a14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624a19 jne 0x12624a4a */
  if (!C.zf) goto L_12624a4a;
L_12624a1b:;
  /* 12624a1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a21 push ecx */
  push32((uint32_t)(ECX));
  /* 12624a22 push 0x1264a908 */
  push32((uint32_t)(0x1264a908u));
  /* 12624a27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a2b push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a2f call 0x126226a0 */
  push32(0x12624a34u); f_126226a0();
  /* 12624a34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624a3a jne 0x12624a3d */
  if (!C.zf) goto L_12624a3d;
  /* 12624a3c int3  */
  x86_unimpl("int3 @ 0x12624a3c");
L_12624a3d:;
  /* 12624a3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12624a3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12624a41 jne 0x12624a1b */
  if (!C.zf) goto L_12624a1b;
  /* 12624a43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12624a4a:;
  /* 12624a4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624a4e jne 0x12624ac6 */
  if (!C.zf) goto L_12624ac6;
  /* 12624a50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624a57 je 0x12624a8c */
  if (C.zf) goto L_12624a8c;
L_12624a59:;
  /* 12624a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12624a5f push edx */
  push32((uint32_t)(EDX));
  /* 12624a60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12624a66 push ecx */
  push32((uint32_t)(ECX));
  /* 12624a67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12624a6a push edx */
  push32((uint32_t)(EDX));
  /* 12624a6b push 0x1264a8e8 */
  push32((uint32_t)(0x1264a8e8u));
  /* 12624a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624a78 call 0x126226a0 */
  push32(0x12624a7du); f_126226a0();
  /* 12624a7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624a83 jne 0x12624a86 */
  if (!C.zf) goto L_12624a86;
  /* 12624a85 int3  */
  x86_unimpl("int3 @ 0x12624a85");
L_12624a86:;
  /* 12624a86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624a88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624a8a jne 0x12624a59 */
  if (!C.zf) goto L_12624a59;
L_12624a8c:;
  /* 12624a8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12624a92 push edx */
  push32((uint32_t)(EDX));
  /* 12624a93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624a96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624a99 push eax */
  push32((uint32_t)(EAX));
  /* 12624a9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12624a9d push ecx */
  push32((uint32_t)(ECX));
  /* 12624a9e push 0x1264a8bc */
  push32((uint32_t)(0x1264a8bcu));
  /* 12624aa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624aa5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624aa7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624aa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624aab call 0x126226a0 */
  push32(0x12624ab0u); f_126226a0();
  /* 12624ab0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624ab3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624ab6 jne 0x12624ab9 */
  if (!C.zf) goto L_12624ab9;
  /* 12624ab8 int3  */
  x86_unimpl("int3 @ 0x12624ab8");
L_12624ab9:;
  /* 12624ab9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12624abb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12624abd jne 0x12624a8c */
  if (!C.zf) goto L_12624a8c;
  /* 12624abf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12624ac6:;
  /* 12624ac6 jmp 0x126248d3 */
  goto L_126248d3;
L_12624acb:;
  /* 12624acb push 9 */
  push32((uint32_t)(0x9u));
  /* 12624acd call 0x12627080 */
  push32(0x12624ad2u); f_12627080();
  /* 12624ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12624ad8:;
  /* 12624ad8 pop edi */
  EDI = (pop32());
  /* 12624ad9 pop esi */
  ESI = (pop32());
  /* 12624ada pop ebx */
  EBX = (pop32());
  /* 12624adb mov esp, ebp */
  ESP = (EBP);
  /* 12624add pop ebp */
  EBP = (pop32());
  /* 12624ade ret  */
  ESPCHK(0x12624780u, _esp0);
  ESP += 4; return;
}

/* FUN_10004af0 @ 0x12624af0 (34 bytes, 13 insns) */
void f_12624af0(void) {
  FTRACE(0x12624af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12624af1 mov ebp, esp */
  EBP = (ESP);
  /* 12624af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12624af4 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 12624af9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12624afc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624b00 je 0x12624b0b */
  if (C.zf) goto L_12624b0b;
  /* 12624b02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624b05 mov dword ptr [0x1264da84], ecx */
  w32((uint32_t)(0x1264da84), (ECX));
L_12624b0b:;
  /* 12624b0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624b0e mov esp, ebp */
  ESP = (EBP);
  /* 12624b10 pop ebp */
  EBP = (pop32());
  /* 12624b11 ret  */
  ESPCHK(0x12624af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b20 @ 0x12624b20 (103 bytes, 38 insns) */
void f_12624b20(void) {
  FTRACE(0x12624b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12624b21 mov ebp, esp */
  EBP = (ESP);
  /* 12624b23 push ecx */
  push32((uint32_t)(ECX));
  /* 12624b24 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 12624b29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12624b2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624b2e jne 0x12624b32 */
  if (!C.zf) goto L_12624b32;
  /* 12624b30 jmp 0x12624b83 */
  goto L_12624b83;
L_12624b32:;
  /* 12624b32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624b34 call 0x12626fe0 */
  push32(0x12624b39u); f_12626fe0();
  /* 12624b39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624b3c mov ecx, dword ptr [0x1264f55c] */
  ECX = (r32((uint32_t)(0x1264f55c)));
  /* 12624b42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12624b45 jmp 0x12624b4f */
  goto L_12624b4f;
L_12624b47:;
  /* 12624b47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624b4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12624b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12624b4f:;
  /* 12624b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624b53 je 0x12624b79 */
  if (C.zf) goto L_12624b79;
  /* 12624b55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624b58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12624b5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12624b61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624b64 jne 0x12624b77 */
  if (!C.zf) goto L_12624b77;
  /* 12624b66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624b69 push eax */
  push32((uint32_t)(EAX));
  /* 12624b6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624b6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624b70 push ecx */
  push32((uint32_t)(ECX));
  /* 12624b71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12624b74u);
  /* 12624b74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12624b77:;
  /* 12624b77 jmp 0x12624b47 */
  goto L_12624b47;
L_12624b79:;
  /* 12624b79 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624b7b call 0x12627080 */
  push32(0x12624b80u); f_12627080();
  /* 12624b80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12624b83:;
  /* 12624b83 mov esp, ebp */
  ESP = (EBP);
  /* 12624b85 pop ebp */
  EBP = (pop32());
  /* 12624b86 ret  */
  ESPCHK(0x12624b20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12624b90 (75 bytes, 28 insns) */
void f_12624b90(void) {
  FTRACE(0x12624b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12624b91 mov ebp, esp */
  EBP = (ESP);
  /* 12624b93 push ecx */
  push32((uint32_t)(ECX));
  /* 12624b94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624b98 je 0x12624bcd */
  if (C.zf) goto L_12624bcd;
  /* 12624b9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624b9d push eax */
  push32((uint32_t)(EAX));
  /* 12624b9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624ba1 push ecx */
  push32((uint32_t)(ECX));
  /* 12624ba2 call dword ptr [0x12652308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652308))), 0x12624ba8u);
  /* 12624ba8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624baa jne 0x12624bcd */
  if (!C.zf) goto L_12624bcd;
  /* 12624bac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624bb0 je 0x12624bc4 */
  if (C.zf) goto L_12624bc4;
  /* 12624bb2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624bb5 push edx */
  push32((uint32_t)(EDX));
  /* 12624bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624bb9 push eax */
  push32((uint32_t)(EAX));
  /* 12624bba call dword ptr [0x1265224c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265224c))), 0x12624bc0u);
  /* 12624bc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624bc2 jne 0x12624bcd */
  if (!C.zf) goto L_12624bcd;
L_12624bc4:;
  /* 12624bc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12624bcb jmp 0x12624bd4 */
  goto L_12624bd4;
L_12624bcd:;
  /* 12624bcd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12624bd4:;
  /* 12624bd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624bd7 mov esp, ebp */
  ESP = (EBP);
  /* 12624bd9 pop ebp */
  EBP = (pop32());
  /* 12624bda ret  */
  ESPCHK(0x12624b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004be0 @ 0x12624be0 (134 bytes, 50 insns) */
void f_12624be0(void) {
  FTRACE(0x12624be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624be0 push ebp */
  push32((uint32_t)(EBP));
  /* 12624be1 mov ebp, esp */
  EBP = (ESP);
  /* 12624be3 push ecx */
  push32((uint32_t)(ECX));
  /* 12624be4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624be8 jne 0x12624bee */
  if (!C.zf) goto L_12624bee;
  /* 12624bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624bec jmp 0x12624c62 */
  goto L_12624c62;
L_12624bee:;
  /* 12624bee push 1 */
  push32((uint32_t)(0x1u));
  /* 12624bf0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12624bf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624bf5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624bf8 push eax */
  push32((uint32_t)(EAX));
  /* 12624bf9 call 0x12624b90 */
  push32(0x12624bfeu); f_12624b90();
  /* 12624bfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624c03 jne 0x12624c09 */
  if (!C.zf) goto L_12624c09;
  /* 12624c05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624c07 jmp 0x12624c62 */
  goto L_12624c62;
L_12624c09:;
  /* 12624c09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624c0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624c0f push ecx */
  push32((uint32_t)(ECX));
  /* 12624c10 call 0x126278e0 */
  push32(0x12624c15u); f_126278e0();
  /* 12624c15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624c18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12624c1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624c1f je 0x12624c36 */
  if (C.zf) goto L_12624c36;
  /* 12624c21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624c24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624c27 push edx */
  push32((uint32_t)(EDX));
  /* 12624c28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624c2b push eax */
  push32((uint32_t)(EAX));
  /* 12624c2c call 0x12627940 */
  push32(0x12624c31u); f_12627940();
  /* 12624c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624c34 jmp 0x12624c62 */
  goto L_12624c62;
L_12624c36:;
  /* 12624c36 mov ecx, dword ptr [0x1264f510] */
  ECX = (r32((uint32_t)(0x1264f510)));
  /* 12624c3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12624c42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12624c44 je 0x12624c4d */
  if (C.zf) goto L_12624c4d;
  /* 12624c46 mov eax, 1 */
  EAX = (0x1u);
  /* 12624c4b jmp 0x12624c62 */
  goto L_12624c62;
L_12624c4d:;
  /* 12624c4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624c50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624c53 push edx */
  push32((uint32_t)(EDX));
  /* 12624c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624c56 mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 12624c5b push eax */
  push32((uint32_t)(EAX));
  /* 12624c5c call dword ptr [0x1265230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265230c))), 0x12624c62u);
L_12624c62:;
  /* 12624c62 mov esp, ebp */
  ESP = (EBP);
  /* 12624c64 pop ebp */
  EBP = (pop32());
  /* 12624c65 ret  */
  ESPCHK(0x12624be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c70 @ 0x12624c70 (227 bytes, 80 insns) */
void f_12624c70(void) {
  FTRACE(0x12624c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12624c71 mov ebp, esp */
  EBP = (ESP);
  /* 12624c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12624c74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624c77 push eax */
  push32((uint32_t)(EAX));
  /* 12624c78 call 0x12624be0 */
  push32(0x12624c7du); f_12624be0();
  /* 12624c7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624c82 jne 0x12624c8b */
  if (!C.zf) goto L_12624c8b;
  /* 12624c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624c86 jmp 0x12624d4f */
  goto L_12624d4f;
L_12624c8b:;
  /* 12624c8b push 9 */
  push32((uint32_t)(0x9u));
  /* 12624c8d call 0x12626fe0 */
  push32(0x12624c92u); f_12626fe0();
  /* 12624c92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624c95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624c98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624c9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12624c9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624ca1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624ca4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624ca9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cac je 0x12624cd0 */
  if (C.zf) goto L_12624cd0;
  /* 12624cae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624cb1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cb5 je 0x12624cd0 */
  if (C.zf) goto L_12624cd0;
  /* 12624cb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624cba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624cbd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624cc2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cc5 je 0x12624cd0 */
  if (C.zf) goto L_12624cd0;
  /* 12624cc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624cca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cce jne 0x12624d43 */
  if (!C.zf) goto L_12624d43;
L_12624cd0:;
  /* 12624cd0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12624cd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624cd5 push edx */
  push32((uint32_t)(EDX));
  /* 12624cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624cd9 push eax */
  push32((uint32_t)(EAX));
  /* 12624cda call 0x12624b90 */
  push32(0x12624cdfu); f_12624b90();
  /* 12624cdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624ce2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624ce4 je 0x12624d43 */
  if (C.zf) goto L_12624d43;
  /* 12624ce6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624ce9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12624cec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cef jne 0x12624d43 */
  if (!C.zf) goto L_12624d43;
  /* 12624cf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624cf4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12624cf7 cmp ecx, dword ptr [0x1264da88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264da88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624cfd jg 0x12624d43 */
  if ((!C.zf&&C.sf==C.of)) goto L_12624d43;
  /* 12624cff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624d03 je 0x12624d10 */
  if (C.zf) goto L_12624d10;
  /* 12624d05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624d08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624d0b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12624d0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12624d10:;
  /* 12624d10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624d14 je 0x12624d21 */
  if (C.zf) goto L_12624d21;
  /* 12624d16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12624d19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624d1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12624d1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12624d21:;
  /* 12624d21 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624d25 je 0x12624d32 */
  if (C.zf) goto L_12624d32;
  /* 12624d27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12624d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624d2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12624d30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12624d32:;
  /* 12624d32 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624d34 call 0x12627080 */
  push32(0x12624d39u); f_12627080();
  /* 12624d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624d3c mov eax, 1 */
  EAX = (0x1u);
  /* 12624d41 jmp 0x12624d4f */
  goto L_12624d4f;
L_12624d43:;
  /* 12624d43 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624d45 call 0x12627080 */
  push32(0x12624d4au); f_12627080();
  /* 12624d4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624d4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12624d4f:;
  /* 12624d4f mov esp, ebp */
  ESP = (EBP);
  /* 12624d51 pop ebp */
  EBP = (pop32());
  /* 12624d52 ret  */
  ESPCHK(0x12624c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d60 @ 0x12624d60 (28 bytes, 11 insns) */
void f_12624d60(void) {
  FTRACE(0x12624d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624d60 push ebp */
  push32((uint32_t)(EBP));
  /* 12624d61 mov ebp, esp */
  EBP = (ESP);
  /* 12624d63 push ecx */
  push32((uint32_t)(ECX));
  /* 12624d64 mov eax, dword ptr [0x12650eb8] */
  EAX = (r32((uint32_t)(0x12650eb8)));
  /* 12624d69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12624d6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624d6f mov dword ptr [0x12650eb8], ecx */
  w32((uint32_t)(0x12650eb8), (ECX));
  /* 12624d75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624d78 mov esp, ebp */
  ESP = (EBP);
  /* 12624d7a pop ebp */
  EBP = (pop32());
  /* 12624d7b ret  */
  ESPCHK(0x12624d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004d80 @ 0x12624d80 (362 bytes, 116 insns) */
void f_12624d80(void) {
  FTRACE(0x12624d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624d80 push ebp */
  push32((uint32_t)(EBP));
  /* 12624d81 mov ebp, esp */
  EBP = (ESP);
  /* 12624d83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624d86 push ebx */
  push32((uint32_t)(EBX));
  /* 12624d87 push esi */
  push32((uint32_t)(ESI));
  /* 12624d88 push edi */
  push32((uint32_t)(EDI));
  /* 12624d89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624d8d jne 0x12624dba */
  if (!C.zf) goto L_12624dba;
L_12624d8f:;
  /* 12624d8f push 0x1264aa1c */
  push32((uint32_t)(0x1264aa1cu));
  /* 12624d94 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12624d99 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624d9b push 0 */
  push32((uint32_t)(0x0u));
  /* 12624d9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12624d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12624da1 call 0x126226a0 */
  push32(0x12624da6u); f_126226a0();
  /* 12624da6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624da9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624dac jne 0x12624daf */
  if (!C.zf) goto L_12624daf;
  /* 12624dae int3  */
  x86_unimpl("int3 @ 0x12624dae");
L_12624daf:;
  /* 12624daf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624db1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624db3 jne 0x12624d8f */
  if (!C.zf) goto L_12624d8f;
  /* 12624db5 jmp 0x12624ee3 */
  goto L_12624ee3;
L_12624dba:;
  /* 12624dba push 9 */
  push32((uint32_t)(0x9u));
  /* 12624dbc call 0x12626fe0 */
  push32(0x12624dc1u); f_12626fe0();
  /* 12624dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624dc7 mov edx, dword ptr [0x1264f55c] */
  EDX = (r32((uint32_t)(0x1264f55c)));
  /* 12624dcd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12624dcf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12624dd6 jmp 0x12624de1 */
  goto L_12624de1;
L_12624dd8:;
  /* 12624dd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624ddb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12624de1:;
  /* 12624de1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624de5 jge 0x12624e05 */
  if ((C.sf==C.of)) goto L_12624e05;
  /* 12624de7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624dea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624ded mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 12624df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624df8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624dfb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 12624e03 jmp 0x12624dd8 */
  goto L_12624dd8;
L_12624e05:;
  /* 12624e05 mov edx, dword ptr [0x1264f55c] */
  EDX = (r32((uint32_t)(0x1264f55c)));
  /* 12624e0b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12624e0e jmp 0x12624e18 */
  goto L_12624e18;
L_12624e10:;
  /* 12624e10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e13 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12624e15 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12624e18:;
  /* 12624e18 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624e1c je 0x12624ec1 */
  if (C.zf) goto L_12624ec1;
  /* 12624e22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e25 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624e28 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624e2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624e2f jl 0x12624e97 */
  if ((C.sf!=C.of)) goto L_12624e97;
  /* 12624e31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e34 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12624e37 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12624e3d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624e40 jge 0x12624e97 */
  if ((C.sf==C.of)) goto L_12624e97;
  /* 12624e42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e45 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12624e48 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12624e4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624e51 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12624e55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624e58 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e5b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12624e5e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12624e64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624e67 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 12624e6b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e6e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12624e71 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624e76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624e79 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 12624e7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e80 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624e83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e86 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12624e89 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12624e8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624e91 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12624e95 jmp 0x12624ebc */
  goto L_12624ebc;
L_12624e97:;
  /* 12624e97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624e9a push edx */
  push32((uint32_t)(EDX));
  /* 12624e9b push 0x1264a9f8 */
  push32((uint32_t)(0x1264a9f8u));
  /* 12624ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624ea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624ea8 call 0x126226a0 */
  push32(0x12624eadu); f_126226a0();
  /* 12624ead add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624eb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624eb3 jne 0x12624eb6 */
  if (!C.zf) goto L_12624eb6;
  /* 12624eb5 int3  */
  x86_unimpl("int3 @ 0x12624eb5");
L_12624eb6:;
  /* 12624eb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624eb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624eba jne 0x12624e97 */
  if (!C.zf) goto L_12624e97;
L_12624ebc:;
  /* 12624ebc jmp 0x12624e10 */
  goto L_12624e10;
L_12624ec1:;
  /* 12624ec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624ec4 mov edx, dword ptr [0x1264f564] */
  EDX = (r32((uint32_t)(0x1264f564)));
  /* 12624eca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 12624ecd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624ed0 mov ecx, dword ptr [0x1264f558] */
  ECX = (r32((uint32_t)(0x1264f558)));
  /* 12624ed6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12624ed9 push 9 */
  push32((uint32_t)(0x9u));
  /* 12624edb call 0x12627080 */
  push32(0x12624ee0u); f_12627080();
  /* 12624ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12624ee3:;
  /* 12624ee3 pop edi */
  EDI = (pop32());
  /* 12624ee4 pop esi */
  ESI = (pop32());
  /* 12624ee5 pop ebx */
  EBX = (pop32());
  /* 12624ee6 mov esp, ebp */
  ESP = (EBP);
  /* 12624ee8 pop ebp */
  EBP = (pop32());
  /* 12624ee9 ret  */
  ESPCHK(0x12624d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x12624ef0 (291 bytes, 95 insns) */
void f_12624ef0(void) {
  FTRACE(0x12624ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12624ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 12624ef1 mov ebp, esp */
  EBP = (ESP);
  /* 12624ef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624ef6 push ebx */
  push32((uint32_t)(EBX));
  /* 12624ef7 push esi */
  push32((uint32_t)(ESI));
  /* 12624ef8 push edi */
  push32((uint32_t)(EDI));
  /* 12624ef9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12624f00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624f04 je 0x12624f12 */
  if (C.zf) goto L_12624f12;
  /* 12624f06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624f0a je 0x12624f12 */
  if (C.zf) goto L_12624f12;
  /* 12624f0c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624f10 jne 0x12624f40 */
  if (!C.zf) goto L_12624f40;
L_12624f12:;
  /* 12624f12 push 0x1264aa44 */
  push32((uint32_t)(0x1264aa44u));
  /* 12624f17 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12624f1c push 0 */
  push32((uint32_t)(0x0u));
  /* 12624f1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12624f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12624f24 call 0x126226a0 */
  push32(0x12624f29u); f_126226a0();
  /* 12624f29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12624f2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624f2f jne 0x12624f32 */
  if (!C.zf) goto L_12624f32;
  /* 12624f31 int3  */
  x86_unimpl("int3 @ 0x12624f31");
L_12624f32:;
  /* 12624f32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12624f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624f36 jne 0x12624f12 */
  if (!C.zf) goto L_12624f12;
  /* 12624f38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12624f3b jmp 0x1262500c */
  goto L_1262500c;
L_12624f40:;
  /* 12624f40 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12624f47 jmp 0x12624f52 */
  goto L_12624f52;
L_12624f49:;
  /* 12624f49 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12624f4f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12624f52:;
  /* 12624f52 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624f56 jge 0x12624fdc */
  if ((C.sf==C.of)) goto L_12624fdc;
  /* 12624f5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f65 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12624f68 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 12624f6c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624f70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624f76 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12624f7a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624f80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f83 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12624f86 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 12624f8a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624f8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624f94 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12624f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624f9e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624fa3 jne 0x12624fb2 */
  if (!C.zf) goto L_12624fb2;
  /* 12624fa5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12624fa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624fab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624fb0 je 0x12624fd7 */
  if (C.zf) goto L_12624fd7;
L_12624fb2:;
  /* 12624fb2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624fb6 je 0x12624fd7 */
  if (C.zf) goto L_12624fd7;
  /* 12624fb8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624fbc jne 0x12624fd0 */
  if (!C.zf) goto L_12624fd0;
  /* 12624fbe cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12624fc2 jne 0x12624fd7 */
  if (!C.zf) goto L_12624fd7;
  /* 12624fc4 mov eax, dword ptr [0x1264da84] */
  EAX = (r32((uint32_t)(0x1264da84)));
  /* 12624fc9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12624fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12624fce je 0x12624fd7 */
  if (C.zf) goto L_12624fd7;
L_12624fd0:;
  /* 12624fd0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12624fd7:;
  /* 12624fd7 jmp 0x12624f49 */
  goto L_12624f49;
L_12624fdc:;
  /* 12624fdc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624fdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624fe2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12624fe5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624fe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624feb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 12624fee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12624ff1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12624ff4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 12624ff7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12624ffa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12624ffd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 12625000 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625003 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12625009 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1262500c:;
  /* 1262500c pop edi */
  EDI = (pop32());
  /* 1262500d pop esi */
  ESI = (pop32());
  /* 1262500e pop ebx */
  EBX = (pop32());
  /* 1262500f mov esp, ebp */
  ESP = (EBP);
  /* 12625011 pop ebp */
  EBP = (pop32());
  /* 12625012 ret  */
  ESPCHK(0x12624ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005020 @ 0x12625020 (697 bytes, 253 insns) */
void f_12625020(void) {
  FTRACE(0x12625020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625020 push ebp */
  push32((uint32_t)(EBP));
  /* 12625021 mov ebp, esp */
  EBP = (ESP);
  /* 12625023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625026 push ebx */
  push32((uint32_t)(EBX));
  /* 12625027 push esi */
  push32((uint32_t)(ESI));
  /* 12625028 push edi */
  push32((uint32_t)(EDI));
  /* 12625029 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12625030 push 9 */
  push32((uint32_t)(0x9u));
  /* 12625032 call 0x12626fe0 */
  push32(0x12625037u); f_12626fe0();
  /* 12625037 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262503a:;
  /* 1262503a push 0x1264ab3c */
  push32((uint32_t)(0x1264ab3cu));
  /* 1262503f push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 12625044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625046 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625048 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262504a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262504c call 0x126226a0 */
  push32(0x12625051u); f_126226a0();
  /* 12625051 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625054 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625057 jne 0x1262505a */
  if (!C.zf) goto L_1262505a;
  /* 12625059 int3  */
  x86_unimpl("int3 @ 0x12625059");
L_1262505a:;
  /* 1262505a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262505c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262505e jne 0x1262503a */
  if (!C.zf) goto L_1262503a;
  /* 12625060 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625064 je 0x1262506e */
  if (C.zf) goto L_1262506e;
  /* 12625066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625069 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262506b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1262506e:;
  /* 1262506e mov eax, dword ptr [0x1264f55c] */
  EAX = (r32((uint32_t)(0x1264f55c)));
  /* 12625073 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12625076 jmp 0x12625080 */
  goto L_12625080;
L_12625078:;
  /* 12625078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262507b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262507d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12625080:;
  /* 12625080 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625084 je 0x126252a2 */
  if (C.zf) goto L_126252a2;
  /* 1262508a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262508d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625090 je 0x126252a2 */
  if (C.zf) goto L_126252a2;
  /* 12625096 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625099 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1262509c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 126250a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126250a5 je 0x126250d4 */
  if (C.zf) goto L_126250d4;
  /* 126250a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126250aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 126250ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 126250b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126250b5 je 0x126250d4 */
  if (C.zf) goto L_126250d4;
  /* 126250b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126250ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 126250bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126250c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126250c5 jne 0x126250d9 */
  if (!C.zf) goto L_126250d9;
  /* 126250c7 mov ecx, dword ptr [0x1264da84] */
  ECX = (r32((uint32_t)(0x1264da84)));
  /* 126250cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 126250d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126250d2 jne 0x126250d9 */
  if (!C.zf) goto L_126250d9;
L_126250d4:;
  /* 126250d4 jmp 0x1262529d */
  goto L_1262529d;
L_126250d9:;
  /* 126250d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126250dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126250e0 je 0x12625152 */
  if (C.zf) goto L_12625152;
  /* 126250e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126250e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 126250e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126250e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 126250ec push ecx */
  push32((uint32_t)(ECX));
  /* 126250ed call 0x12624b90 */
  push32(0x126250f2u); f_12624b90();
  /* 126250f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126250f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126250f7 jne 0x12625123 */
  if (!C.zf) goto L_12625123;
L_126250f9:;
  /* 126250f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126250fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 126250ff push eax */
  push32((uint32_t)(EAX));
  /* 12625100 push 0x1264ab28 */
  push32((uint32_t)(0x1264ab28u));
  /* 12625105 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625107 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625109 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262510b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262510d call 0x126226a0 */
  push32(0x12625112u); f_126226a0();
  /* 12625112 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625115 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625118 jne 0x1262511b */
  if (!C.zf) goto L_1262511b;
  /* 1262511a int3  */
  x86_unimpl("int3 @ 0x1262511a");
L_1262511b:;
  /* 1262511b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262511d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262511f jne 0x126250f9 */
  if (!C.zf) goto L_126250f9;
  /* 12625121 jmp 0x12625152 */
  goto L_12625152;
L_12625123:;
  /* 12625123 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625126 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12625129 push eax */
  push32((uint32_t)(EAX));
  /* 1262512a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262512d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12625130 push edx */
  push32((uint32_t)(EDX));
  /* 12625131 push 0x1264ab1c */
  push32((uint32_t)(0x1264ab1cu));
  /* 12625136 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625138 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262513a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262513c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262513e call 0x126226a0 */
  push32(0x12625143u); f_126226a0();
  /* 12625143 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625146 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625149 jne 0x1262514c */
  if (!C.zf) goto L_1262514c;
  /* 1262514b int3  */
  x86_unimpl("int3 @ 0x1262514b");
L_1262514c:;
  /* 1262514c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262514e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625150 jne 0x12625123 */
  if (!C.zf) goto L_12625123;
L_12625152:;
  /* 12625152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625155 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12625158 push edx */
  push32((uint32_t)(EDX));
  /* 12625159 push 0x1264ab14 */
  push32((uint32_t)(0x1264ab14u));
  /* 1262515e push 0 */
  push32((uint32_t)(0x0u));
  /* 12625160 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625162 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625164 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625166 call 0x126226a0 */
  push32(0x1262516bu); f_126226a0();
  /* 1262516b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262516e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625171 jne 0x12625174 */
  if (!C.zf) goto L_12625174;
  /* 12625173 int3  */
  x86_unimpl("int3 @ 0x12625173");
L_12625174:;
  /* 12625174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625178 jne 0x12625152 */
  if (!C.zf) goto L_12625152;
  /* 1262517a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262517d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12625180 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12625186 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625189 jne 0x126251fc */
  if (!C.zf) goto L_126251fc;
L_1262518b:;
  /* 1262518b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262518e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12625191 push ecx */
  push32((uint32_t)(ECX));
  /* 12625192 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625195 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12625198 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1262519b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126251a0 push eax */
  push32((uint32_t)(EAX));
  /* 126251a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126251a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126251a7 push ecx */
  push32((uint32_t)(ECX));
  /* 126251a8 push 0x1264aae0 */
  push32((uint32_t)(0x1264aae0u));
  /* 126251ad push 0 */
  push32((uint32_t)(0x0u));
  /* 126251af push 0 */
  push32((uint32_t)(0x0u));
  /* 126251b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126251b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126251b5 call 0x126226a0 */
  push32(0x126251bau); f_126226a0();
  /* 126251ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126251bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126251c0 jne 0x126251c3 */
  if (!C.zf) goto L_126251c3;
  /* 126251c2 int3  */
  x86_unimpl("int3 @ 0x126251c2");
L_126251c3:;
  /* 126251c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126251c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126251c7 jne 0x1262518b */
  if (!C.zf) goto L_1262518b;
  /* 126251c9 cmp dword ptr [0x12650eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126251d0 je 0x126251eb */
  if (C.zf) goto L_126251eb;
  /* 126251d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126251d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 126251d8 push ecx */
  push32((uint32_t)(ECX));
  /* 126251d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126251dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126251df push edx */
  push32((uint32_t)(EDX));
  /* 126251e0 call dword ptr [0x12650eb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12650eb8))), 0x126251e6u);
  /* 126251e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126251e9 jmp 0x126251f7 */
  goto L_126251f7;
L_126251eb:;
  /* 126251eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126251ee push eax */
  push32((uint32_t)(EAX));
  /* 126251ef call 0x126252e0 */
  push32(0x126251f4u); f_126252e0();
  /* 126251f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126251f7:;
  /* 126251f7 jmp 0x1262529d */
  goto L_1262529d;
L_126251fc:;
  /* 126251fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126251ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625203 jne 0x12625242 */
  if (!C.zf) goto L_12625242;
L_12625205:;
  /* 12625205 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625208 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262520b push eax */
  push32((uint32_t)(EAX));
  /* 1262520c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262520f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625212 push ecx */
  push32((uint32_t)(ECX));
  /* 12625213 push 0x1264aab8 */
  push32((uint32_t)(0x1264aab8u));
  /* 12625218 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262521a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262521c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262521e push 0 */
  push32((uint32_t)(0x0u));
  /* 12625220 call 0x126226a0 */
  push32(0x12625225u); f_126226a0();
  /* 12625225 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625228 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262522b jne 0x1262522e */
  if (!C.zf) goto L_1262522e;
  /* 1262522d int3  */
  x86_unimpl("int3 @ 0x1262522d");
L_1262522e:;
  /* 1262522e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12625230 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625232 jne 0x12625205 */
  if (!C.zf) goto L_12625205;
  /* 12625234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625237 push eax */
  push32((uint32_t)(EAX));
  /* 12625238 call 0x126252e0 */
  push32(0x1262523du); f_126252e0();
  /* 1262523d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625240 jmp 0x1262529d */
  goto L_1262529d;
L_12625242:;
  /* 12625242 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625245 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12625248 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262524e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625251 jne 0x1262529d */
  if (!C.zf) goto L_1262529d;
L_12625253:;
  /* 12625253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625256 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12625259 push ecx */
  push32((uint32_t)(ECX));
  /* 1262525a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262525d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12625260 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12625263 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12625268 push eax */
  push32((uint32_t)(EAX));
  /* 12625269 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262526c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262526f push ecx */
  push32((uint32_t)(ECX));
  /* 12625270 push 0x1264aa84 */
  push32((uint32_t)(0x1264aa84u));
  /* 12625275 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625277 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625279 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262527b push 0 */
  push32((uint32_t)(0x0u));
  /* 1262527d call 0x126226a0 */
  push32(0x12625282u); f_126226a0();
  /* 12625282 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625285 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625288 jne 0x1262528b */
  if (!C.zf) goto L_1262528b;
  /* 1262528a int3  */
  x86_unimpl("int3 @ 0x1262528a");
L_1262528b:;
  /* 1262528b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1262528d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262528f jne 0x12625253 */
  if (!C.zf) goto L_12625253;
  /* 12625291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625294 push eax */
  push32((uint32_t)(EAX));
  /* 12625295 call 0x126252e0 */
  push32(0x1262529au); f_126252e0();
  /* 1262529a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262529d:;
  /* 1262529d jmp 0x12625078 */
  goto L_12625078;
L_126252a2:;
  /* 126252a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 126252a4 call 0x12627080 */
  push32(0x126252a9u); f_12627080();
  /* 126252a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126252ac:;
  /* 126252ac push 0x1264aa6c */
  push32((uint32_t)(0x1264aa6cu));
  /* 126252b1 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 126252b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126252b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 126252ba push 0 */
  push32((uint32_t)(0x0u));
  /* 126252bc push 0 */
  push32((uint32_t)(0x0u));
  /* 126252be call 0x126226a0 */
  push32(0x126252c3u); f_126226a0();
  /* 126252c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126252c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126252c9 jne 0x126252cc */
  if (!C.zf) goto L_126252cc;
  /* 126252cb int3  */
  x86_unimpl("int3 @ 0x126252cb");
L_126252cc:;
  /* 126252cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126252ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126252d0 jne 0x126252ac */
  if (!C.zf) goto L_126252ac;
  /* 126252d2 pop edi */
  EDI = (pop32());
  /* 126252d3 pop esi */
  ESI = (pop32());
  /* 126252d4 pop ebx */
  EBX = (pop32());
  /* 126252d5 mov esp, ebp */
  ESP = (EBP);
  /* 126252d7 pop ebp */
  EBP = (pop32());
  /* 126252d8 ret  */
  ESPCHK(0x12625020u, _esp0);
  ESP += 4; return;
}

/* FUN_100052e0 @ 0x126252e0 (276 bytes, 89 insns) */
void f_126252e0(void) {
  FTRACE(0x126252e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126252e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126252e1 mov ebp, esp */
  EBP = (ESP);
  /* 126252e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126252e6 push ebx */
  push32((uint32_t)(EBX));
  /* 126252e7 push esi */
  push32((uint32_t)(ESI));
  /* 126252e8 push edi */
  push32((uint32_t)(EDI));
  /* 126252e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 126252f0 jmp 0x126252fb */
  goto L_126252fb;
L_126252f2:;
  /* 126252f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 126252f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126252f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_126252fb:;
  /* 126252fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126252fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625302 jge 0x1262530f */
  if ((C.sf==C.of)) goto L_1262530f;
  /* 12625304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625307 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1262530a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1262530d jmp 0x12625316 */
  goto L_12625316;
L_1262530f:;
  /* 1262530f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_12625316:;
  /* 12625316 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12625319 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262531c jge 0x126253bc */
  if ((C.sf==C.of)) goto L_126253bc;
  /* 12625322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625325 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625328 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1262532b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1262532e cmp dword ptr [0x1264dea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264dea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625335 jle 0x12625353 */
  if ((C.zf||C.sf!=C.of)) goto L_12625353;
  /* 12625337 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 1262533c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1262533f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12625345 push ecx */
  push32((uint32_t)(ECX));
  /* 12625346 call 0x126295f0 */
  push32(0x1262534bu); f_126295f0();
  /* 1262534b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262534e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12625351 jmp 0x12625370 */
  goto L_12625370;
L_12625353:;
  /* 12625353 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12625356 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262535c mov eax, dword ptr [0x1264dc98] */
  EAX = (r32((uint32_t)(0x1264dc98)));
  /* 12625361 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12625363 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12625367 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1262536d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12625370:;
  /* 12625370 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625374 je 0x12625384 */
  if (C.zf) goto L_12625384;
  /* 12625376 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12625379 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262537f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12625382 jmp 0x1262538b */
  goto L_1262538b;
L_12625384:;
  /* 12625384 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1262538b:;
  /* 1262538b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1262538e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12625391 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12625395 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12625398 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262539e push edx */
  push32((uint32_t)(EDX));
  /* 1262539f push 0x1264ab60 */
  push32((uint32_t)(0x1264ab60u));
  /* 126253a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 126253a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126253aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 126253ae push ecx */
  push32((uint32_t)(ECX));
  /* 126253af call 0x126294f0 */
  push32(0x126253b4u); f_126294f0();
  /* 126253b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126253b7 jmp 0x126252f2 */
  goto L_126252f2;
L_126253bc:;
  /* 126253bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 126253bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_126253c4:;
  /* 126253c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 126253c7 push eax */
  push32((uint32_t)(EAX));
  /* 126253c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 126253cb push ecx */
  push32((uint32_t)(ECX));
  /* 126253cc push 0x1264ab50 */
  push32((uint32_t)(0x1264ab50u));
  /* 126253d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126253d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126253d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126253d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126253d9 call 0x126226a0 */
  push32(0x126253deu); f_126226a0();
  /* 126253de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126253e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126253e4 jne 0x126253e7 */
  if (!C.zf) goto L_126253e7;
  /* 126253e6 int3  */
  x86_unimpl("int3 @ 0x126253e6");
L_126253e7:;
  /* 126253e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126253e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126253eb jne 0x126253c4 */
  if (!C.zf) goto L_126253c4;
  /* 126253ed pop edi */
  EDI = (pop32());
  /* 126253ee pop esi */
  ESI = (pop32());
  /* 126253ef pop ebx */
  EBX = (pop32());
  /* 126253f0 mov esp, ebp */
  ESP = (EBP);
  /* 126253f2 pop ebp */
  EBP = (pop32());
  /* 126253f3 ret  */
  ESPCHK(0x126252e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005400 @ 0x12625400 (116 bytes, 46 insns) */
void f_12625400(void) {
  FTRACE(0x12625400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625400 push ebp */
  push32((uint32_t)(EBP));
  /* 12625401 mov ebp, esp */
  EBP = (ESP);
  /* 12625403 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625406 push ebx */
  push32((uint32_t)(EBX));
  /* 12625407 push esi */
  push32((uint32_t)(ESI));
  /* 12625408 push edi */
  push32((uint32_t)(EDI));
  /* 12625409 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1262540c push eax */
  push32((uint32_t)(EAX));
  /* 1262540d call 0x12624d80 */
  push32(0x12625412u); f_12624d80();
  /* 12625412 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625415 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625419 jne 0x12625434 */
  if (!C.zf) goto L_12625434;
  /* 1262541b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262541f jne 0x12625434 */
  if (!C.zf) goto L_12625434;
  /* 12625421 mov ecx, dword ptr [0x1264da84] */
  ECX = (r32((uint32_t)(0x1264da84)));
  /* 12625427 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1262542a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1262542c je 0x1262546b */
  if (C.zf) goto L_1262546b;
  /* 1262542e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625432 je 0x1262546b */
  if (C.zf) goto L_1262546b;
L_12625434:;
  /* 12625434 push 0x1264ab68 */
  push32((uint32_t)(0x1264ab68u));
  /* 12625439 push 0x1264a534 */
  push32((uint32_t)(0x1264a534u));
  /* 1262543e push 0 */
  push32((uint32_t)(0x0u));
  /* 12625440 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625442 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625446 call 0x126226a0 */
  push32(0x1262544bu); f_126226a0();
  /* 1262544b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262544e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625451 jne 0x12625454 */
  if (!C.zf) goto L_12625454;
  /* 12625453 int3  */
  x86_unimpl("int3 @ 0x12625453");
L_12625454:;
  /* 12625454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12625456 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625458 jne 0x12625434 */
  if (!C.zf) goto L_12625434;
  /* 1262545a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262545c call 0x12625020 */
  push32(0x12625461u); f_12625020();
  /* 12625461 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625464 mov eax, 1 */
  EAX = (0x1u);
  /* 12625469 jmp 0x1262546d */
  goto L_1262546d;
L_1262546b:;
  /* 1262546b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262546d:;
  /* 1262546d pop edi */
  EDI = (pop32());
  /* 1262546e pop esi */
  ESI = (pop32());
  /* 1262546f pop ebx */
  EBX = (pop32());
  /* 12625470 mov esp, ebp */
  ESP = (EBP);
  /* 12625472 pop ebp */
  EBP = (pop32());
  /* 12625473 ret  */
  ESPCHK(0x12625400u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x12625480 (197 bytes, 79 insns) */
void f_12625480(void) {
  FTRACE(0x12625480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625480 push ebp */
  push32((uint32_t)(EBP));
  /* 12625481 mov ebp, esp */
  EBP = (ESP);
  /* 12625483 push ecx */
  push32((uint32_t)(ECX));
  /* 12625484 push ebx */
  push32((uint32_t)(EBX));
  /* 12625485 push esi */
  push32((uint32_t)(ESI));
  /* 12625486 push edi */
  push32((uint32_t)(EDI));
  /* 12625487 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262548b jne 0x12625492 */
  if (!C.zf) goto L_12625492;
  /* 1262548d jmp 0x1262553e */
  goto L_1262553e;
L_12625492:;
  /* 12625492 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12625499 jmp 0x126254a4 */
  goto L_126254a4;
L_1262549b:;
  /* 1262549b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262549e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126254a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126254a4:;
  /* 126254a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126254a8 jge 0x126254ee */
  if ((C.sf==C.of)) goto L_126254ee;
L_126254aa:;
  /* 126254aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126254ad mov edx, dword ptr [ecx*4 + 0x1264da94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264da94)));
  /* 126254b4 push edx */
  push32((uint32_t)(EDX));
  /* 126254b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126254b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126254bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 126254bf push edx */
  push32((uint32_t)(EDX));
  /* 126254c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126254c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126254c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 126254ca push edx */
  push32((uint32_t)(EDX));
  /* 126254cb push 0x1264abc4 */
  push32((uint32_t)(0x1264abc4u));
  /* 126254d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126254d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 126254d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126254d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 126254d8 call 0x126226a0 */
  push32(0x126254ddu); f_126226a0();
  /* 126254dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126254e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126254e3 jne 0x126254e6 */
  if (!C.zf) goto L_126254e6;
  /* 126254e5 int3  */
  x86_unimpl("int3 @ 0x126254e5");
L_126254e6:;
  /* 126254e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126254e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126254ea jne 0x126254aa */
  if (!C.zf) goto L_126254aa;
  /* 126254ec jmp 0x1262549b */
  goto L_1262549b;
L_126254ee:;
  /* 126254ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126254f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 126254f4 push edx */
  push32((uint32_t)(EDX));
  /* 126254f5 push 0x1264aba0 */
  push32((uint32_t)(0x1264aba0u));
  /* 126254fa push 0 */
  push32((uint32_t)(0x0u));
  /* 126254fc push 0 */
  push32((uint32_t)(0x0u));
  /* 126254fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12625500 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625502 call 0x126226a0 */
  push32(0x12625507u); f_126226a0();
  /* 12625507 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262550a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262550d jne 0x12625510 */
  if (!C.zf) goto L_12625510;
  /* 1262550f int3  */
  x86_unimpl("int3 @ 0x1262550f");
L_12625510:;
  /* 12625510 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625512 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625514 jne 0x126254ee */
  if (!C.zf) goto L_126254ee;
L_12625516:;
  /* 12625516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625519 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1262551c push edx */
  push32((uint32_t)(EDX));
  /* 1262551d push 0x1264ab80 */
  push32((uint32_t)(0x1264ab80u));
  /* 12625522 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625524 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625526 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625528 push 0 */
  push32((uint32_t)(0x0u));
  /* 1262552a call 0x126226a0 */
  push32(0x1262552fu); f_126226a0();
  /* 1262552f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625532 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625535 jne 0x12625538 */
  if (!C.zf) goto L_12625538;
  /* 12625537 int3  */
  x86_unimpl("int3 @ 0x12625537");
L_12625538:;
  /* 12625538 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262553a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262553c jne 0x12625516 */
  if (!C.zf) goto L_12625516;
L_1262553e:;
  /* 1262553e pop edi */
  EDI = (pop32());
  /* 1262553f pop esi */
  ESI = (pop32());
  /* 12625540 pop ebx */
  EBX = (pop32());
  /* 12625541 mov esp, ebp */
  ESP = (EBP);
  /* 12625543 pop ebp */
  EBP = (pop32());
  /* 12625544 ret  */
  ESPCHK(0x12625480u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x12625550 (329 bytes, 102 insns) */
void f_12625550(void) {
  FTRACE(0x12625550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625550 push ebp */
  push32((uint32_t)(EBP));
  /* 12625551 mov ebp, esp */
  EBP = (ESP);
  /* 12625553 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625556 cmp dword ptr [0x12651030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262555d jne 0x12625564 */
  if (!C.zf) goto L_12625564;
  /* 1262555f call 0x12629e90 */
  push32(0x12625564u); f_12629e90();
L_12625564:;
  /* 12625564 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262556b mov eax, dword ptr [0x1264f4f8] */
  EAX = (r32((uint32_t)(0x1264f4f8)));
  /* 12625570 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12625573:;
  /* 12625573 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625576 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12625579 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262557b je 0x126255a9 */
  if (C.zf) goto L_126255a9;
  /* 1262557d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625580 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12625583 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625586 je 0x12625591 */
  if (C.zf) goto L_12625591;
  /* 12625588 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262558b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262558e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12625591:;
  /* 12625591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625594 push eax */
  push32((uint32_t)(EAX));
  /* 12625595 call 0x12626410 */
  push32(0x1262559au); f_12626410();
  /* 1262559a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262559d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126255a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 126255a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126255a7 jmp 0x12625573 */
  goto L_12625573;
L_126255a9:;
  /* 126255a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 126255ab push 0x1264abe4 */
  push32((uint32_t)(0x1264abe4u));
  /* 126255b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 126255b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126255b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 126255bc push ecx */
  push32((uint32_t)(ECX));
  /* 126255bd call 0x126235e0 */
  push32(0x126255c2u); f_126235e0();
  /* 126255c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126255c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126255c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126255cb mov dword ptr [0x1264f52c], edx */
  w32((uint32_t)(0x1264f52c), (EDX));
  /* 126255d1 cmp dword ptr [0x1264f52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126255d8 jne 0x126255e4 */
  if (!C.zf) goto L_126255e4;
  /* 126255da push 9 */
  push32((uint32_t)(0x9u));
  /* 126255dc call 0x12622550 */
  push32(0x126255e1u); f_12622550();
  /* 126255e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126255e4:;
  /* 126255e4 mov eax, dword ptr [0x1264f4f8] */
  EAX = (r32((uint32_t)(0x1264f4f8)));
  /* 126255e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126255ec jmp 0x126255f7 */
  goto L_126255f7;
L_126255ee:;
  /* 126255ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126255f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126255f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126255f7:;
  /* 126255f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126255fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126255fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126255ff je 0x12625667 */
  if (C.zf) goto L_12625667;
  /* 12625601 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625604 push ecx */
  push32((uint32_t)(ECX));
  /* 12625605 call 0x12626410 */
  push32(0x1262560au); f_12626410();
  /* 1262560a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262560d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625610 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12625613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625616 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12625619 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262561c je 0x12625665 */
  if (C.zf) goto L_12625665;
  /* 1262561e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12625620 push 0x1264abe4 */
  push32((uint32_t)(0x1264abe4u));
  /* 12625625 push 2 */
  push32((uint32_t)(0x2u));
  /* 12625627 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262562a push ecx */
  push32((uint32_t)(ECX));
  /* 1262562b call 0x126235e0 */
  push32(0x12625630u); f_126235e0();
  /* 12625630 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625633 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625636 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12625638 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262563b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262563e jne 0x1262564a */
  if (!C.zf) goto L_1262564a;
  /* 12625640 push 9 */
  push32((uint32_t)(0x9u));
  /* 12625642 call 0x12622550 */
  push32(0x12625647u); f_12622550();
  /* 12625647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262564a:;
  /* 1262564a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262564d push ecx */
  push32((uint32_t)(ECX));
  /* 1262564e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625651 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12625653 push eax */
  push32((uint32_t)(EAX));
  /* 12625654 call 0x12626590 */
  push32(0x12625659u); f_12626590();
  /* 12625659 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262565c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262565f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625662 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12625665:;
  /* 12625665 jmp 0x126255ee */
  goto L_126255ee;
L_12625667:;
  /* 12625667 push 2 */
  push32((uint32_t)(0x2u));
  /* 12625669 mov edx, dword ptr [0x1264f4f8] */
  EDX = (r32((uint32_t)(0x1264f4f8)));
  /* 1262566f push edx */
  push32((uint32_t)(EDX));
  /* 12625670 call 0x12624070 */
  push32(0x12625675u); f_12624070();
  /* 12625675 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625678 mov dword ptr [0x1264f4f8], 0 */
  w32((uint32_t)(0x1264f4f8), (0x0u));
  /* 12625682 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262568b mov dword ptr [0x12651020], 1 */
  w32((uint32_t)(0x12651020), (0x1u));
  /* 12625695 mov esp, ebp */
  ESP = (EBP);
  /* 12625697 pop ebp */
  EBP = (pop32());
  /* 12625698 ret  */
  ESPCHK(0x12625550u, _esp0);
  ESP += 4; return;
}

/* FUN_100056a0 @ 0x126256a0 (216 bytes, 69 insns) */
void f_126256a0(void) {
  FTRACE(0x126256a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126256a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126256a1 mov ebp, esp */
  EBP = (ESP);
  /* 126256a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126256a6 cmp dword ptr [0x12651030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12651030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126256ad jne 0x126256b4 */
  if (!C.zf) goto L_126256b4;
  /* 126256af call 0x12629e90 */
  push32(0x126256b4u); f_12629e90();
L_126256b4:;
  /* 126256b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 126256b9 push 0x1264f568 */
  push32((uint32_t)(0x1264f568u));
  /* 126256be push 0 */
  push32((uint32_t)(0x0u));
  /* 126256c0 call dword ptr [0x126522c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c4))), 0x126256c6u);
  /* 126256c6 mov dword ptr [0x1264f53c], 0x1264f568 */
  w32((uint32_t)(0x1264f53c), (0x1264f568u));
  /* 126256d0 mov eax, dword ptr [0x1265104c] */
  EAX = (r32((uint32_t)(0x1265104c)));
  /* 126256d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126256d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126256da jne 0x126256e7 */
  if (!C.zf) goto L_126256e7;
  /* 126256dc mov edx, dword ptr [0x1264f53c] */
  EDX = (r32((uint32_t)(0x1264f53c)));
  /* 126256e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 126256e5 jmp 0x126256ef */
  goto L_126256ef;
L_126256e7:;
  /* 126256e7 mov eax, dword ptr [0x1265104c] */
  EAX = (r32((uint32_t)(0x1265104c)));
  /* 126256ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_126256ef:;
  /* 126256ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 126256f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 126256f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 126256f8 push edx */
  push32((uint32_t)(EDX));
  /* 126256f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 126256fc push eax */
  push32((uint32_t)(EAX));
  /* 126256fd push 0 */
  push32((uint32_t)(0x0u));
  /* 126256ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12625701 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625704 push ecx */
  push32((uint32_t)(ECX));
  /* 12625705 call 0x12625780 */
  push32(0x1262570au); f_12625780();
  /* 1262570a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262570d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12625712 push 0x1264abf0 */
  push32((uint32_t)(0x1264abf0u));
  /* 12625717 push 2 */
  push32((uint32_t)(0x2u));
  /* 12625719 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262571c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262571f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12625722 push ecx */
  push32((uint32_t)(ECX));
  /* 12625723 call 0x126235e0 */
  push32(0x12625728u); f_126235e0();
  /* 12625728 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262572b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262572e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625732 jne 0x1262573e */
  if (!C.zf) goto L_1262573e;
  /* 12625734 push 8 */
  push32((uint32_t)(0x8u));
  /* 12625736 call 0x12622550 */
  push32(0x1262573bu); f_12622550();
  /* 1262573b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262573e:;
  /* 1262573e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12625741 push edx */
  push32((uint32_t)(EDX));
  /* 12625742 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12625745 push eax */
  push32((uint32_t)(EAX));
  /* 12625746 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625749 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262574c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 1262574f push eax */
  push32((uint32_t)(EAX));
  /* 12625750 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625753 push ecx */
  push32((uint32_t)(ECX));
  /* 12625754 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625757 push edx */
  push32((uint32_t)(EDX));
  /* 12625758 call 0x12625780 */
  push32(0x1262575du); f_12625780();
  /* 1262575d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625760 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625763 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625766 mov dword ptr [0x1264f520], eax */
  w32((uint32_t)(0x1264f520), (EAX));
  /* 1262576b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262576e mov dword ptr [0x1264f524], ecx */
  w32((uint32_t)(0x1264f524), (ECX));
  /* 12625774 mov esp, ebp */
  ESP = (EBP);
  /* 12625776 pop ebp */
  EBP = (pop32());
  /* 12625777 ret  */
  ESPCHK(0x126256a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x12625780 (1060 bytes, 360 insns) */
void f_12625780(void) {
  FTRACE(0x12625780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625780 push ebp */
  push32((uint32_t)(EBP));
  /* 12625781 mov ebp, esp */
  EBP = (ESP);
  /* 12625783 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625786 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625789 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1262578f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12625792 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12625798 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262579b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262579e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126257a2 je 0x126257b5 */
  if (C.zf) goto L_126257b5;
  /* 126257a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126257a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126257aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 126257ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126257af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126257b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_126257b5:;
  /* 126257b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126257b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126257bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126257be jne 0x1262588d */
  if (!C.zf) goto L_1262588d;
L_126257c4:;
  /* 126257c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126257c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126257ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126257cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126257d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126257d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126257d6 je 0x12625852 */
  if (C.zf) goto L_12625852;
  /* 126257d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126257db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126257de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126257e0 je 0x12625852 */
  if (C.zf) goto L_12625852;
  /* 126257e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126257e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126257e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126257e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126257eb mov al, byte ptr [edx + 0x12650d81] */
  AL = (r8((uint32_t)(EDX + 0x12650d81)));
  /* 126257f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 126257f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126257f6 je 0x12625827 */
  if (C.zf) goto L_12625827;
  /* 126257f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 126257fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 126257fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625800 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625803 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12625805 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625809 je 0x12625827 */
  if (C.zf) goto L_12625827;
  /* 1262580b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262580e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625811 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12625813 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12625815 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625818 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262581b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1262581e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625821 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625824 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12625827:;
  /* 12625827 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262582a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1262582c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262582f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625832 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12625834 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625838 je 0x1262584d */
  if (C.zf) goto L_1262584d;
  /* 1262583a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262583d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625840 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12625842 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12625844 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625847 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262584a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1262584d:;
  /* 1262584d jmp 0x126257c4 */
  goto L_126257c4;
L_12625852:;
  /* 12625852 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625855 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12625857 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262585a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1262585d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1262585f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625863 je 0x12625874 */
  if (C.zf) goto L_12625874;
  /* 12625865 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625868 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1262586b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262586e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625871 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12625874:;
  /* 12625874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625877 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262587a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262587d jne 0x12625888 */
  if (!C.zf) goto L_12625888;
  /* 1262587f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625882 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625885 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12625888:;
  /* 12625888 jmp 0x1262595c */
  goto L_1262595c;
L_1262588d:;
  /* 1262588d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625890 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12625892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625895 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625898 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1262589a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262589e je 0x126258b3 */
  if (C.zf) goto L_126258b3;
  /* 126258a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126258a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126258a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126258a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126258aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126258ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126258b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_126258b3:;
  /* 126258b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126258b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126258b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 126258bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126258be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126258c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126258c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126258c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 126258cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126258cf mov dl, byte ptr [ecx + 0x12650d81] */
  DL = (r8((uint32_t)(ECX + 0x12650d81)));
  /* 126258d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 126258d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126258da je 0x1262590b */
  if (C.zf) goto L_1262590b;
  /* 126258dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 126258df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126258e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126258e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 126258e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 126258e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126258ed je 0x12625902 */
  if (C.zf) goto L_12625902;
  /* 126258ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126258f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126258f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126258f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126258f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126258fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126258ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12625902:;
  /* 12625902 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625908 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262590b:;
  /* 1262590b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262590e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12625914 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625917 je 0x12625937 */
  if (C.zf) goto L_12625937;
  /* 12625919 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262591c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12625921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625923 je 0x12625937 */
  if (C.zf) goto L_12625937;
  /* 12625925 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625928 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1262592e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625931 jne 0x1262588d */
  if (!C.zf) goto L_1262588d;
L_12625937:;
  /* 12625937 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262593a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12625940 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625942 jne 0x1262594f */
  if (!C.zf) goto L_1262594f;
  /* 12625944 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625947 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262594a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262594d jmp 0x1262595c */
  goto L_1262595c;
L_1262594f:;
  /* 1262594f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625953 je 0x1262595c */
  if (C.zf) goto L_1262595c;
  /* 12625955 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625958 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_1262595c:;
  /* 1262595c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12625963:;
  /* 12625963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625966 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12625969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262596b je 0x1262598e */
  if (C.zf) goto L_1262598e;
L_1262596d:;
  /* 1262596d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625970 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12625973 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625976 je 0x12625983 */
  if (C.zf) goto L_12625983;
  /* 12625978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262597b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1262597e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625981 jne 0x1262598e */
  if (!C.zf) goto L_1262598e;
L_12625983:;
  /* 12625983 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625986 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625989 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262598c jmp 0x1262596d */
  goto L_1262596d;
L_1262598e:;
  /* 1262598e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625991 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12625994 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12625996 jne 0x1262599d */
  if (!C.zf) goto L_1262599d;
  /* 12625998 jmp 0x12625b7b */
  goto L_12625b7b;
L_1262599d:;
  /* 1262599d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126259a1 je 0x126259b4 */
  if (C.zf) goto L_126259b4;
  /* 126259a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126259a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126259a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 126259ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126259ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126259b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_126259b4:;
  /* 126259b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 126259b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126259b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126259bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126259bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_126259c1:;
  /* 126259c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 126259c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_126259cf:;
  /* 126259cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126259d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 126259d5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126259d8 jne 0x126259ee */
  if (!C.zf) goto L_126259ee;
  /* 126259da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126259dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126259e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126259e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126259e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126259e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 126259ec jmp 0x126259cf */
  goto L_126259cf;
L_126259ee:;
  /* 126259ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126259f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 126259f4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126259f7 jne 0x12625a4a */
  if (!C.zf) goto L_12625a4a;
  /* 126259f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126259fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126259fe mov ecx, 2 */
  ECX = (0x2u);
  /* 12625a03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12625a05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625a07 jne 0x12625a42 */
  if (!C.zf) goto L_12625a42;
  /* 12625a09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a0d je 0x12625a2f */
  if (C.zf) goto L_12625a2f;
  /* 12625a0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625a12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12625a16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a19 jne 0x12625a26 */
  if (!C.zf) goto L_12625a26;
  /* 12625a1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625a1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625a21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12625a24 jmp 0x12625a2d */
  goto L_12625a2d;
L_12625a26:;
  /* 12625a26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12625a2d:;
  /* 12625a2d jmp 0x12625a36 */
  goto L_12625a36;
L_12625a2f:;
  /* 12625a2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12625a36:;
  /* 12625a36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12625a38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12625a3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12625a42:;
  /* 12625a42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625a45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12625a47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12625a4a:;
  /* 12625a4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625a4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625a50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625a53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12625a56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12625a58 je 0x12625a7e */
  if (C.zf) goto L_12625a7e;
  /* 12625a5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a5e je 0x12625a6f */
  if (C.zf) goto L_12625a6f;
  /* 12625a60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625a63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12625a66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625a69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625a6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12625a6f:;
  /* 12625a6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625a72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12625a74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625a77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625a7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12625a7c jmp 0x12625a4a */
  goto L_12625a4a;
L_12625a7e:;
  /* 12625a7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625a81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12625a84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625a86 je 0x12625aa4 */
  if (C.zf) goto L_12625aa4;
  /* 12625a88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a8c jne 0x12625aa9 */
  if (!C.zf) goto L_12625aa9;
  /* 12625a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625a91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12625a94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625a97 je 0x12625aa4 */
  if (C.zf) goto L_12625aa4;
  /* 12625a99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625a9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12625a9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625aa2 jne 0x12625aa9 */
  if (!C.zf) goto L_12625aa9;
L_12625aa4:;
  /* 12625aa4 jmp 0x12625b54 */
  goto L_12625b54;
L_12625aa9:;
  /* 12625aa9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625aad je 0x12625b46 */
  if (C.zf) goto L_12625b46;
  /* 12625ab3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625ab7 je 0x12625b0d */
  if (C.zf) goto L_12625b0d;
  /* 12625ab9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625abc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625abe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12625ac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12625ac2 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 12625ac8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12625acb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12625acd je 0x12625af8 */
  if (C.zf) goto L_12625af8;
  /* 12625acf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625ad2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625ad5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12625ad7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12625ad9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625adc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625adf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12625ae2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625ae5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625ae8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12625aeb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625aee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12625af0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625af3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625af6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12625af8:;
  /* 12625af8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625afb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625afe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12625b00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12625b02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12625b0b jmp 0x12625b39 */
  goto L_12625b39;
L_12625b0d:;
  /* 12625b0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625b10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625b12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12625b14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12625b16 mov cl, byte ptr [eax + 0x12650d81] */
  CL = (r8((uint32_t)(EAX + 0x12650d81)));
  /* 12625b1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12625b1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12625b21 je 0x12625b39 */
  if (C.zf) goto L_12625b39;
  /* 12625b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625b26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12625b2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12625b31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12625b39:;
  /* 12625b39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12625b3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12625b46:;
  /* 12625b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625b49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12625b4f jmp 0x126259c1 */
  goto L_126259c1;
L_12625b54:;
  /* 12625b54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625b58 je 0x12625b69 */
  if (C.zf) goto L_12625b69;
  /* 12625b5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625b5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12625b60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12625b63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12625b69:;
  /* 12625b69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12625b6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12625b74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12625b76 jmp 0x12625963 */
  goto L_12625963;
L_12625b7b:;
  /* 12625b7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625b7f je 0x12625b93 */
  if (C.zf) goto L_12625b93;
  /* 12625b81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12625b84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12625b8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12625b8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12625b93:;
  /* 12625b93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12625b96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12625b98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625b9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12625b9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12625ba0 mov esp, ebp */
  ESP = (EBP);
  /* 12625ba2 pop ebp */
  EBP = (pop32());
  /* 12625ba3 ret  */
  ESPCHK(0x12625780u, _esp0);
  ESP += 4; return;
}

/* FUN_10005bb0 @ 0x12625bb0 (537 bytes, 173 insns) */
void f_12625bb0(void) {
  FTRACE(0x12625bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12625bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12625bb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625bb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12625bbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12625bc4 cmp dword ptr [0x1264f66c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f66c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625bcb jne 0x12625c0a */
  if (!C.zf) goto L_12625c0a;
  /* 12625bcd call dword ptr [0x12652320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652320))), 0x12625bd3u);
  /* 12625bd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12625bd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625bda je 0x12625be8 */
  if (C.zf) goto L_12625be8;
  /* 12625bdc mov dword ptr [0x1264f66c], 1 */
  w32((uint32_t)(0x1264f66c), (0x1u));
  /* 12625be6 jmp 0x12625c0a */
  goto L_12625c0a;
L_12625be8:;
  /* 12625be8 call dword ptr [0x1265231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265231c))), 0x12625beeu);
  /* 12625bee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12625bf1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625bf5 je 0x12625c03 */
  if (C.zf) goto L_12625c03;
  /* 12625bf7 mov dword ptr [0x1264f66c], 2 */
  w32((uint32_t)(0x1264f66c), (0x2u));
  /* 12625c01 jmp 0x12625c0a */
  goto L_12625c0a;
L_12625c03:;
  /* 12625c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625c05 jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625c0a:;
  /* 12625c0a cmp dword ptr [0x1264f66c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f66c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625c11 jne 0x12625d0e */
  if (!C.zf) goto L_12625d0e;
  /* 12625c17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625c1b jne 0x12625c33 */
  if (!C.zf) goto L_12625c33;
  /* 12625c1d call dword ptr [0x12652320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652320))), 0x12625c23u);
  /* 12625c23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12625c26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625c2a jne 0x12625c33 */
  if (!C.zf) goto L_12625c33;
  /* 12625c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625c2e jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625c33:;
  /* 12625c33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12625c36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12625c39:;
  /* 12625c39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625c3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12625c3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12625c41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625c43 je 0x12625c65 */
  if (C.zf) goto L_12625c65;
  /* 12625c45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625c48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625c4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12625c4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625c51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12625c53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12625c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625c58 jne 0x12625c63 */
  if (!C.zf) goto L_12625c63;
  /* 12625c5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625c5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625c60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12625c63:;
  /* 12625c63 jmp 0x12625c39 */
  goto L_12625c39;
L_12625c65:;
  /* 12625c65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625c68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625c6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12625c6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625c70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12625c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625c7e push edx */
  push32((uint32_t)(EDX));
  /* 12625c7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12625c82 push eax */
  push32((uint32_t)(EAX));
  /* 12625c83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625c87 call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12625c8du);
  /* 12625c8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12625c90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625c94 je 0x12625cb4 */
  if (C.zf) goto L_12625cb4;
  /* 12625c96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12625c98 push 0x1264abfc */
  push32((uint32_t)(0x1264abfcu));
  /* 12625c9d push 2 */
  push32((uint32_t)(0x2u));
  /* 12625c9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625ca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12625ca3 call 0x126235e0 */
  push32(0x12625ca8u); f_126235e0();
  /* 12625ca8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625cab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12625cae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625cb2 jne 0x12625cc5 */
  if (!C.zf) goto L_12625cc5;
L_12625cb4:;
  /* 12625cb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12625cb7 push edx */
  push32((uint32_t)(EDX));
  /* 12625cb8 call dword ptr [0x12652314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652314))), 0x12625cbeu);
  /* 12625cbe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625cc0 jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625cc5:;
  /* 12625cc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625cc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625cc9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625ccc push eax */
  push32((uint32_t)(EAX));
  /* 12625ccd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625cd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12625cd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625cd4 push edx */
  push32((uint32_t)(EDX));
  /* 12625cd5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12625cd8 push eax */
  push32((uint32_t)(EAX));
  /* 12625cd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 12625cdd call dword ptr [0x12652318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652318))), 0x12625ce3u);
  /* 12625ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625ce5 jne 0x12625cfc */
  if (!C.zf) goto L_12625cfc;
  /* 12625ce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12625ce9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625cec push ecx */
  push32((uint32_t)(ECX));
  /* 12625ced call 0x12624070 */
  push32(0x12625cf2u); f_12624070();
  /* 12625cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625cf5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12625cfc:;
  /* 12625cfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12625cff push edx */
  push32((uint32_t)(EDX));
  /* 12625d00 call dword ptr [0x12652314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652314))), 0x12625d06u);
  /* 12625d06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625d09 jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625d0e:;
  /* 12625d0e cmp dword ptr [0x1264f66c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1264f66c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625d15 jne 0x12625dc3 */
  if (!C.zf) goto L_12625dc3;
  /* 12625d1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625d1f jne 0x12625d37 */
  if (!C.zf) goto L_12625d37;
  /* 12625d21 call dword ptr [0x1265231c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265231c))), 0x12625d27u);
  /* 12625d27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12625d2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625d2e jne 0x12625d37 */
  if (!C.zf) goto L_12625d37;
  /* 12625d30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625d32 jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625d37:;
  /* 12625d37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625d3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12625d3d:;
  /* 12625d3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625d40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12625d43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625d45 je 0x12625d65 */
  if (C.zf) goto L_12625d65;
  /* 12625d47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625d4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625d4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12625d50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625d53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12625d56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12625d58 jne 0x12625d63 */
  if (!C.zf) goto L_12625d63;
  /* 12625d5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625d60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12625d63:;
  /* 12625d63 jmp 0x12625d3d */
  goto L_12625d3d;
L_12625d65:;
  /* 12625d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625d68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625d6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625d6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12625d71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12625d76 push 0x1264abfc */
  push32((uint32_t)(0x1264abfcu));
  /* 12625d7b push 2 */
  push32((uint32_t)(0x2u));
  /* 12625d7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625d80 push edx */
  push32((uint32_t)(EDX));
  /* 12625d81 call 0x126235e0 */
  push32(0x12625d86u); f_126235e0();
  /* 12625d86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625d89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12625d8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625d90 jne 0x12625da0 */
  if (!C.zf) goto L_12625da0;
  /* 12625d92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625d95 push eax */
  push32((uint32_t)(EAX));
  /* 12625d96 call dword ptr [0x12652310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652310))), 0x12625d9cu);
  /* 12625d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625d9e jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625da0:;
  /* 12625da0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12625da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12625da4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625da7 push edx */
  push32((uint32_t)(EDX));
  /* 12625da8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625dab push eax */
  push32((uint32_t)(EAX));
  /* 12625dac call 0x12629ec0 */
  push32(0x12625db1u); f_12629ec0();
  /* 12625db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625db4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12625db7 push ecx */
  push32((uint32_t)(ECX));
  /* 12625db8 call dword ptr [0x12652310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652310))), 0x12625dbeu);
  /* 12625dbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12625dc1 jmp 0x12625dc5 */
  goto L_12625dc5;
L_12625dc3:;
  /* 12625dc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12625dc5:;
  /* 12625dc5 mov esp, ebp */
  ESP = (EBP);
  /* 12625dc7 pop ebp */
  EBP = (pop32());
  /* 12625dc8 ret  */
  ESPCHK(0x12625bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005dd0 @ 0x12625dd0 (77 bytes, 25 insns) */
void f_12625dd0(void) {
  FTRACE(0x12625dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12625dd1 mov ebp, esp */
  EBP = (ESP);
  /* 12625dd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625dd5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12625dda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625ddc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625de0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12625de3 push eax */
  push32((uint32_t)(EAX));
  /* 12625de4 call dword ptr [0x12652328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652328))), 0x12625deau);
  /* 12625dea mov dword ptr [0x12650eac], eax */
  w32((uint32_t)(0x12650eac), (EAX));
  /* 12625def cmp dword ptr [0x12650eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12650eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625df6 jne 0x12625dfc */
  if (!C.zf) goto L_12625dfc;
  /* 12625df8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625dfa jmp 0x12625e1b */
  goto L_12625e1b;
L_12625dfc:;
  /* 12625dfc call 0x12627880 */
  push32(0x12625e01u); f_12627880();
  /* 12625e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625e03 jne 0x12625e16 */
  if (!C.zf) goto L_12625e16;
  /* 12625e05 mov ecx, dword ptr [0x12650eac] */
  ECX = (r32((uint32_t)(0x12650eac)));
  /* 12625e0b push ecx */
  push32((uint32_t)(ECX));
  /* 12625e0c call dword ptr [0x12652324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652324))), 0x12625e12u);
  /* 12625e12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12625e14 jmp 0x12625e1b */
  goto L_12625e1b;
L_12625e16:;
  /* 12625e16 mov eax, 1 */
  EAX = (0x1u);
L_12625e1b:;
  /* 12625e1b pop ebp */
  EBP = (pop32());
  /* 12625e1c ret  */
  ESPCHK(0x12625dd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x12625e20 (156 bytes, 48 insns) */
void f_12625e20(void) {
  FTRACE(0x12625e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12625e21 mov ebp, esp */
  EBP = (ESP);
  /* 12625e23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625e26 mov eax, dword ptr [0x12650ea8] */
  EAX = (r32((uint32_t)(0x12650ea8)));
  /* 12625e2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12625e2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12625e35 jmp 0x12625e40 */
  goto L_12625e40;
L_12625e37:;
  /* 12625e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625e3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625e3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12625e40:;
  /* 12625e40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12625e43 cmp edx, dword ptr [0x12650ea4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12650ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625e49 jge 0x12625e96 */
  if ((C.sf==C.of)) goto L_12625e96;
  /* 12625e4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12625e50 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12625e55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625e58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12625e5b push ecx */
  push32((uint32_t)(ECX));
  /* 12625e5c call dword ptr [0x12652330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652330))), 0x12625e62u);
  /* 12625e62 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12625e67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625e69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625e6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12625e6f push eax */
  push32((uint32_t)(EAX));
  /* 12625e70 call dword ptr [0x12652330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652330))), 0x12625e76u);
  /* 12625e76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625e79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12625e7c push edx */
  push32((uint32_t)(EDX));
  /* 12625e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12625e7f mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 12625e84 push eax */
  push32((uint32_t)(EAX));
  /* 12625e85 call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x12625e8bu);
  /* 12625e8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625e8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625e91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12625e94 jmp 0x12625e37 */
  goto L_12625e37;
L_12625e96:;
  /* 12625e96 mov edx, dword ptr [0x12650ea8] */
  EDX = (r32((uint32_t)(0x12650ea8)));
  /* 12625e9c push edx */
  push32((uint32_t)(EDX));
  /* 12625e9d push 0 */
  push32((uint32_t)(0x0u));
  /* 12625e9f mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 12625ea4 push eax */
  push32((uint32_t)(EAX));
  /* 12625ea5 call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x12625eabu);
  /* 12625eab mov ecx, dword ptr [0x12650eac] */
  ECX = (r32((uint32_t)(0x12650eac)));
  /* 12625eb1 push ecx */
  push32((uint32_t)(ECX));
  /* 12625eb2 call dword ptr [0x12652324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652324))), 0x12625eb8u);
  /* 12625eb8 mov esp, ebp */
  ESP = (EBP);
  /* 12625eba pop ebp */
  EBP = (pop32());
  /* 12625ebb ret  */
  ESPCHK(0x12625e20u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12625ec0 (73 bytes, 19 insns) */
void f_12625ec0(void) {
  FTRACE(0x12625ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12625ec1 mov ebp, esp */
  EBP = (ESP);
  /* 12625ec3 cmp dword ptr [0x1264f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625eca je 0x12625ede */
  if (C.zf) goto L_12625ede;
  /* 12625ecc cmp dword ptr [0x1264f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625ed3 jne 0x12625f07 */
  if (!C.zf) goto L_12625f07;
  /* 12625ed5 cmp dword ptr [0x1264f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625edc jne 0x12625f07 */
  if (!C.zf) goto L_12625f07;
L_12625ede:;
  /* 12625ede push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12625ee3 call 0x12625f10 */
  push32(0x12625ee8u); f_12625f10();
  /* 12625ee8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625eeb cmp dword ptr [0x1264f670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625ef2 je 0x12625efa */
  if (C.zf) goto L_12625efa;
  /* 12625ef4 call dword ptr [0x1264f670] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f670))), 0x12625efau);
L_12625efa:;
  /* 12625efa push 0xff */
  push32((uint32_t)(0xffu));
  /* 12625eff call 0x12625f10 */
  push32(0x12625f04u); f_12625f10();
  /* 12625f04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12625f07:;
  /* 12625f07 pop ebp */
  EBP = (pop32());
  /* 12625f08 ret  */
  ESPCHK(0x12625ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f10 @ 0x12625f10 (447 bytes, 131 insns) */
void f_12625f10(void) {
  FTRACE(0x12625f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12625f10 push ebp */
  push32((uint32_t)(EBP));
  /* 12625f11 mov ebp, esp */
  EBP = (ESP);
  /* 12625f13 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12625f19 push ebx */
  push32((uint32_t)(EBX));
  /* 12625f1a push esi */
  push32((uint32_t)(ESI));
  /* 12625f1b push edi */
  push32((uint32_t)(EDI));
  /* 12625f1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12625f23 jmp 0x12625f2e */
  goto L_12625f2e;
L_12625f25:;
  /* 12625f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625f28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12625f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12625f2e:;
  /* 12625f2e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f32 jae 0x12625f47 */
  if (!C.cf) goto L_12625f47;
  /* 12625f34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625f3a cmp edx, dword ptr [ecx*8 + 0x1264dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1264dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f41 jne 0x12625f45 */
  if (!C.zf) goto L_12625f45;
  /* 12625f43 jmp 0x12625f47 */
  goto L_12625f47;
L_12625f45:;
  /* 12625f45 jmp 0x12625f25 */
  goto L_12625f25;
L_12625f47:;
  /* 12625f47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625f4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12625f4d cmp ecx, dword ptr [eax*8 + 0x1264dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1264dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f54 jne 0x126260c8 */
  if (!C.zf) goto L_126260c8;
  /* 12625f5a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f61 je 0x12625f84 */
  if (C.zf) goto L_12625f84;
  /* 12625f63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625f66 mov eax, dword ptr [edx*8 + 0x1264dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1264dab4)));
  /* 12625f6d push eax */
  push32((uint32_t)(EAX));
  /* 12625f6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12625f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625f72 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625f74 push 1 */
  push32((uint32_t)(0x1u));
  /* 12625f76 call 0x126226a0 */
  push32(0x12625f7bu); f_126226a0();
  /* 12625f7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625f7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f81 jne 0x12625f84 */
  if (!C.zf) goto L_12625f84;
  /* 12625f83 int3  */
  x86_unimpl("int3 @ 0x12625f83");
L_12625f84:;
  /* 12625f84 cmp dword ptr [0x1264f500], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f8b je 0x12625f9f */
  if (C.zf) goto L_12625f9f;
  /* 12625f8d cmp dword ptr [0x1264f500], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f500))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f94 jne 0x12625fd8 */
  if (!C.zf) goto L_12625fd8;
  /* 12625f96 cmp dword ptr [0x1264f504], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1264f504))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625f9d jne 0x12625fd8 */
  if (!C.zf) goto L_12625fd8;
L_12625f9f:;
  /* 12625f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12625fa1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12625fa4 push ecx */
  push32((uint32_t)(ECX));
  /* 12625fa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625fa8 mov eax, dword ptr [edx*8 + 0x1264dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1264dab4)));
  /* 12625faf push eax */
  push32((uint32_t)(EAX));
  /* 12625fb0 call 0x12626410 */
  push32(0x12625fb5u); f_12626410();
  /* 12625fb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12625fb8 push eax */
  push32((uint32_t)(EAX));
  /* 12625fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12625fbc mov edx, dword ptr [ecx*8 + 0x1264dab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1264dab4)));
  /* 12625fc3 push edx */
  push32((uint32_t)(EDX));
  /* 12625fc4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12625fc6 call dword ptr [0x126522a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522a8))), 0x12625fccu);
  /* 12625fcc push eax */
  push32((uint32_t)(EAX));
  /* 12625fcd call dword ptr [0x126522ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ac))), 0x12625fd3u);
  /* 12625fd3 jmp 0x126260c8 */
  goto L_126260c8;
L_12625fd8:;
  /* 12625fd8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12625fdf je 0x126260c8 */
  if (C.zf) goto L_126260c8;
  /* 12625fe5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12625fea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 12625ff0 push eax */
  push32((uint32_t)(EAX));
  /* 12625ff1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12625ff3 call dword ptr [0x126522c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c4))), 0x12625ff9u);
  /* 12625ff9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12625ffb jne 0x12626011 */
  if (!C.zf) goto L_12626011;
  /* 12625ffd push 0x1264a464 */
  push32((uint32_t)(0x1264a464u));
  /* 12626002 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12626008 push ecx */
  push32((uint32_t)(ECX));
  /* 12626009 call 0x12626590 */
  push32(0x1262600eu); f_12626590();
  /* 1262600e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626011:;
  /* 12626011 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 12626017 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1262601a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262601d push eax */
  push32((uint32_t)(EAX));
  /* 1262601e call 0x12626410 */
  push32(0x12626023u); f_12626410();
  /* 12626023 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626026 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626029 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262602c jbe 0x1262605a */
  if ((C.cf||C.zf)) goto L_1262605a;
  /* 1262602e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 12626034 push ecx */
  push32((uint32_t)(ECX));
  /* 12626035 call 0x12626410 */
  push32(0x1262603au); f_12626410();
  /* 1262603a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262603d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626040 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 12626044 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626047 push 3 */
  push32((uint32_t)(0x3u));
  /* 12626049 push 0x1264a460 */
  push32((uint32_t)(0x1264a460u));
  /* 1262604e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626051 push ecx */
  push32((uint32_t)(ECX));
  /* 12626052 call 0x12626e00 */
  push32(0x12626057u); f_12626e00();
  /* 12626057 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262605a:;
  /* 1262605a push 0x1264aeb8 */
  push32((uint32_t)(0x1264aeb8u));
  /* 1262605f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12626065 push edx */
  push32((uint32_t)(EDX));
  /* 12626066 call 0x12626590 */
  push32(0x1262606bu); f_12626590();
  /* 1262606b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262606e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626071 push eax */
  push32((uint32_t)(EAX));
  /* 12626072 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12626078 push ecx */
  push32((uint32_t)(ECX));
  /* 12626079 call 0x126265a0 */
  push32(0x1262607eu); f_126265a0();
  /* 1262607e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626081 push 0x1264a3d8 */
  push32((uint32_t)(0x1264a3d8u));
  /* 12626086 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1262608c push edx */
  push32((uint32_t)(EDX));
  /* 1262608d call 0x126265a0 */
  push32(0x12626092u); f_126265a0();
  /* 12626092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626098 mov ecx, dword ptr [eax*8 + 0x1264dab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1264dab4)));
  /* 1262609f push ecx */
  push32((uint32_t)(ECX));
  /* 126260a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 126260a6 push edx */
  push32((uint32_t)(EDX));
  /* 126260a7 call 0x126265a0 */
  push32(0x126260acu); f_126265a0();
  /* 126260ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126260af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 126260b4 push 0x1264ae90 */
  push32((uint32_t)(0x1264ae90u));
  /* 126260b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 126260bf push eax */
  push32((uint32_t)(EAX));
  /* 126260c0 call 0x12626d40 */
  push32(0x126260c5u); f_12626d40();
  /* 126260c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126260c8:;
  /* 126260c8 pop edi */
  EDI = (pop32());
  /* 126260c9 pop esi */
  ESI = (pop32());
  /* 126260ca pop ebx */
  EBX = (pop32());
  /* 126260cb mov esp, ebp */
  ESP = (EBP);
  /* 126260cd pop ebp */
  EBP = (pop32());
  /* 126260ce ret  */
  ESPCHK(0x12625f10u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x126260d0 (80 bytes, 27 insns) */
void f_126260d0(void) {
  FTRACE(0x126260d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126260d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126260d1 mov ebp, esp */
  EBP = (ESP);
  /* 126260d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126260d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126260db jmp 0x126260e6 */
  goto L_126260e6;
L_126260dd:;
  /* 126260dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126260e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126260e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126260e6:;
  /* 126260e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126260ea jae 0x126260ff */
  if (!C.cf) goto L_126260ff;
  /* 126260ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126260ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126260f2 cmp edx, dword ptr [ecx*8 + 0x1264dab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1264dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126260f9 jne 0x126260fd */
  if (!C.zf) goto L_126260fd;
  /* 126260fb jmp 0x126260ff */
  goto L_126260ff;
L_126260fd:;
  /* 126260fd jmp 0x126260dd */
  goto L_126260dd;
L_126260ff:;
  /* 126260ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626105 cmp ecx, dword ptr [eax*8 + 0x1264dab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1264dab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262610c jne 0x1262611a */
  if (!C.zf) goto L_1262611a;
  /* 1262610e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626111 mov eax, dword ptr [edx*8 + 0x1264dab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1264dab4)));
  /* 12626118 jmp 0x1262611c */
  goto L_1262611c;
L_1262611a:;
  /* 1262611a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1262611c:;
  /* 1262611c mov esp, ebp */
  ESP = (EBP);
  /* 1262611e pop ebp */
  EBP = (pop32());
  /* 1262611f ret  */
  ESPCHK(0x126260d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x12626120 (66 bytes, 28 insns) */
void f_12626120(void) {
  FTRACE(0x12626120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626120 push ebp */
  push32((uint32_t)(EBP));
  /* 12626121 mov ebp, esp */
  EBP = (ESP);
  /* 12626123 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626127 jne 0x12626147 */
  if (!C.zf) goto L_12626147;
  /* 12626129 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262612d jge 0x12626147 */
  if ((C.sf==C.of)) goto L_12626147;
  /* 1262612f push 1 */
  push32((uint32_t)(0x1u));
  /* 12626131 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12626134 push eax */
  push32((uint32_t)(EAX));
  /* 12626135 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626138 push ecx */
  push32((uint32_t)(ECX));
  /* 12626139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262613c push edx */
  push32((uint32_t)(EDX));
  /* 1262613d call 0x12626170 */
  push32(0x12626142u); f_12626170();
  /* 12626142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626145 jmp 0x1262615d */
  goto L_1262615d;
L_12626147:;
  /* 12626147 push 0 */
  push32((uint32_t)(0x0u));
  /* 12626149 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262614c push eax */
  push32((uint32_t)(EAX));
  /* 1262614d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626150 push ecx */
  push32((uint32_t)(ECX));
  /* 12626151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626154 push edx */
  push32((uint32_t)(EDX));
  /* 12626155 call 0x12626170 */
  push32(0x1262615au); f_12626170();
  /* 1262615a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262615d:;
  /* 1262615d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626160 pop ebp */
  EBP = (pop32());
  /* 12626161 ret  */
  ESPCHK(0x12626120u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12626170 (194 bytes, 71 insns) */
void f_12626170(void) {
  FTRACE(0x12626170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626170 push ebp */
  push32((uint32_t)(EBP));
  /* 12626171 mov ebp, esp */
  EBP = (ESP);
  /* 12626173 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626176 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626179 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262617c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626180 je 0x12626199 */
  if (C.zf) goto L_12626199;
  /* 12626182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626185 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12626188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262618b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262618e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12626191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626194 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12626196 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12626199:;
  /* 12626199 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262619c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1262619f:;
  /* 1262619f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126261a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126261a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 126261a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 126261aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126261ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126261af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 126261b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 126261b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126261b9 jbe 0x126261d1 */
  if ((C.cf||C.zf)) goto L_126261d1;
  /* 126261bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126261be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126261c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126261c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126261cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 126261cf jmp 0x126261e5 */
  goto L_126261e5;
L_126261d1:;
  /* 126261d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 126261d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126261d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126261dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126261e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_126261e5:;
  /* 126261e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126261e9 ja 0x1262619f */
  if ((!C.cf&&!C.zf)) goto L_1262619f;
  /* 126261eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 126261f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126261f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126261fa:;
  /* 126261fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126261fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126261ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12626202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626205 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626208 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1262620a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1262620c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262620f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12626212 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12626214 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626217 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262621a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1262621d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626220 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626223 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12626226 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626229 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262622c jb 0x126261fa */
  if (C.cf) goto L_126261fa;
  /* 1262622e mov esp, ebp */
  ESP = (EBP);
  /* 12626230 pop ebp */
  EBP = (pop32());
  /* 12626231 ret  */
  ESPCHK(0x12626170u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x12626240 (63 bytes, 24 insns) */
void f_12626240(void) {
  FTRACE(0x12626240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626240 push ebp */
  push32((uint32_t)(EBP));
  /* 12626241 mov ebp, esp */
  EBP = (ESP);
  /* 12626243 push ecx */
  push32((uint32_t)(ECX));
  /* 12626244 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626248 jne 0x12626259 */
  if (!C.zf) goto L_12626259;
  /* 1262624a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262624e jge 0x12626259 */
  if ((C.sf==C.of)) goto L_12626259;
  /* 12626250 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12626257 jmp 0x12626260 */
  goto L_12626260;
L_12626259:;
  /* 12626259 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12626260:;
  /* 12626260 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626263 push eax */
  push32((uint32_t)(EAX));
  /* 12626264 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12626267 push ecx */
  push32((uint32_t)(ECX));
  /* 12626268 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262626b push edx */
  push32((uint32_t)(EDX));
  /* 1262626c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262626f push eax */
  push32((uint32_t)(EAX));
  /* 12626270 call 0x12626170 */
  push32(0x12626275u); f_12626170();
  /* 12626275 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626278 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262627b mov esp, ebp */
  ESP = (EBP);
  /* 1262627d pop ebp */
  EBP = (pop32());
  /* 1262627e ret  */
  ESPCHK(0x12626240u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12626280 (30 bytes, 14 insns) */
void f_12626280(void) {
  FTRACE(0x12626280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626280 push ebp */
  push32((uint32_t)(EBP));
  /* 12626281 mov ebp, esp */
  EBP = (ESP);
  /* 12626283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12626285 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12626288 push eax */
  push32((uint32_t)(EAX));
  /* 12626289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262628c push ecx */
  push32((uint32_t)(ECX));
  /* 1262628d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626290 push edx */
  push32((uint32_t)(EDX));
  /* 12626291 call 0x12626170 */
  push32(0x12626296u); f_12626170();
  /* 12626296 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626299 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262629c pop ebp */
  EBP = (pop32());
  /* 1262629d ret  */
  ESPCHK(0x12626280u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x126262a0 (72 bytes, 28 insns) */
void f_126262a0(void) {
  FTRACE(0x126262a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126262a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126262a1 mov ebp, esp */
  EBP = (ESP);
  /* 126262a3 push ecx */
  push32((uint32_t)(ECX));
  /* 126262a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126262a8 jne 0x126262c1 */
  if (!C.zf) goto L_126262c1;
  /* 126262aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126262ae jg 0x126262c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_126262c1;
  /* 126262b0 jl 0x126262b8 */
  if ((C.sf!=C.of)) goto L_126262b8;
  /* 126262b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126262b6 jae 0x126262c1 */
  if (!C.cf) goto L_126262c1;
L_126262b8:;
  /* 126262b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 126262bf jmp 0x126262c8 */
  goto L_126262c8;
L_126262c1:;
  /* 126262c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_126262c8:;
  /* 126262c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126262cb push eax */
  push32((uint32_t)(EAX));
  /* 126262cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 126262cf push ecx */
  push32((uint32_t)(ECX));
  /* 126262d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 126262d3 push edx */
  push32((uint32_t)(EDX));
  /* 126262d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126262d7 push eax */
  push32((uint32_t)(EAX));
  /* 126262d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126262db push ecx */
  push32((uint32_t)(ECX));
  /* 126262dc call 0x126262f0 */
  push32(0x126262e1u); f_126262f0();
  /* 126262e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126262e4 mov esp, ebp */
  ESP = (EBP);
  /* 126262e6 pop ebp */
  EBP = (pop32());
  /* 126262e7 ret  */
  ESPCHK(0x126262a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x126262f0 (242 bytes, 91 insns) */
void f_126262f0(void) {
  FTRACE(0x126262f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126262f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126262f1 mov ebp, esp */
  EBP = (ESP);
  /* 126262f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126262f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 126262f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126262fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626300 je 0x12626324 */
  if (C.zf) goto L_12626324;
  /* 12626302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626305 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12626308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262630b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262630e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12626311 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626314 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12626316 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626319 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262631c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262631e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12626321 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12626324:;
  /* 12626324 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626327 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1262632a:;
  /* 1262632a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262632d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1262632f push ecx */
  push32((uint32_t)(ECX));
  /* 12626330 push eax */
  push32((uint32_t)(EAX));
  /* 12626331 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626334 push edx */
  push32((uint32_t)(EDX));
  /* 12626335 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626338 push eax */
  push32((uint32_t)(EAX));
  /* 12626339 call 0x1262a270 */
  push32(0x1262633eu); f_1262a270();
  /* 1262633e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626341 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12626344 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12626346 push edx */
  push32((uint32_t)(EDX));
  /* 12626347 push ecx */
  push32((uint32_t)(ECX));
  /* 12626348 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262634b push eax */
  push32((uint32_t)(EAX));
  /* 1262634c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262634f push ecx */
  push32((uint32_t)(ECX));
  /* 12626350 call 0x1262a200 */
  push32(0x12626355u); f_1262a200();
  /* 12626355 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12626358 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1262635b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262635f jbe 0x12626377 */
  if ((C.cf||C.zf)) goto L_12626377;
  /* 12626361 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626364 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626367 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262636a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1262636c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262636f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626372 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12626375 jmp 0x1262638b */
  goto L_1262638b;
L_12626377:;
  /* 12626377 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1262637a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262637d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626380 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12626382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626385 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626388 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1262638b:;
  /* 1262638b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262638f ja 0x1262632a */
  if ((!C.cf&&!C.zf)) goto L_1262632a;
  /* 12626391 jb 0x12626399 */
  if (C.cf) goto L_12626399;
  /* 12626393 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626397 ja 0x1262632a */
  if ((!C.cf&&!C.zf)) goto L_1262632a;
L_12626399:;
  /* 12626399 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262639c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1262639f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126263a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126263a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_126263a8:;
  /* 126263a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126263ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126263ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 126263b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126263b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126263b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 126263b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 126263ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126263bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 126263c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 126263c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126263c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126263c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 126263cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126263ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 126263d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126263d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126263d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126263da jb 0x126263a8 */
  if (C.cf) goto L_126263a8;
  /* 126263dc mov esp, ebp */
  ESP = (EBP);
  /* 126263de pop ebp */
  EBP = (pop32());
  /* 126263df ret 0x14 */
  ESPCHK(0x126262f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x126263f0 (31 bytes, 15 insns) */
void f_126263f0(void) {
  FTRACE(0x126263f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126263f0 push ebp */
  push32((uint32_t)(EBP));
  /* 126263f1 mov ebp, esp */
  EBP = (ESP);
  /* 126263f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 126263f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 126263f8 push eax */
  push32((uint32_t)(EAX));
  /* 126263f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 126263fc push ecx */
  push32((uint32_t)(ECX));
  /* 126263fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626400 push edx */
  push32((uint32_t)(EDX));
  /* 12626401 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626404 push eax */
  push32((uint32_t)(EAX));
  /* 12626405 call 0x126262f0 */
  push32(0x1262640au); f_126262f0();
  /* 1262640a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262640d pop ebp */
  EBP = (pop32());
  /* 1262640e ret  */
  ESPCHK(0x126263f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x12626410 (123 bytes, 44 insns) */
void f_12626410(void) {
  FTRACE(0x12626410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626410 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12626414 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1262641a je 0x12626430 */
  if (C.zf) goto L_12626430;
L_1262641c:;
  /* 1262641c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1262641e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1262641f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12626421 je 0x12626463 */
  if (C.zf) goto L_12626463;
  /* 12626423 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12626429 jne 0x1262641c */
  if (!C.zf) goto L_1262641c;
  /* 1262642b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12626430:;
  /* 12626430 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12626432 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12626437 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626439 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262643c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1262643e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626441 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12626446 je 0x12626430 */
  if (C.zf) goto L_12626430;
  /* 12626448 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1262644b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1262644d je 0x12626481 */
  if (C.zf) goto L_12626481;
  /* 1262644f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12626451 je 0x12626477 */
  if (C.zf) goto L_12626477;
  /* 12626453 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12626458 je 0x1262646d */
  if (C.zf) goto L_1262646d;
  /* 1262645a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1262645f je 0x12626463 */
  if (C.zf) goto L_12626463;
  /* 12626461 jmp 0x12626430 */
  goto L_12626430;
L_12626463:;
  /* 12626463 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12626466 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1262646a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262646c ret  */
  ESPCHK(0x12626410u, _esp0);
  ESP += 4; return;
L_1262646d:;
  /* 1262646d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12626470 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12626474 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626476 ret  */
  ESPCHK(0x12626410u, _esp0);
  ESP += 4; return;
L_12626477:;
  /* 12626477 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1262647a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1262647e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626480 ret  */
  ESPCHK(0x12626410u, _esp0);
  ESP += 4; return;
L_12626481:;
  /* 12626481 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12626484 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12626488 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262648a ret  */
  ESPCHK(0x12626410u, _esp0);
  ESP += 4; return;
}

/* FUN_10006490 @ 0x12626490 (249 bytes, 93 insns) */
void f_12626490(void) {
  FTRACE(0x12626490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626490 push ebp */
  push32((uint32_t)(EBP));
  /* 12626491 mov ebp, esp */
  EBP = (ESP);
  /* 12626493 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626496 push ebx */
  push32((uint32_t)(EBX));
  /* 12626497 push esi */
  push32((uint32_t)(ESI));
  /* 12626498 push edi */
  push32((uint32_t)(EDI));
  /* 12626499 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1262649c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1262649f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 126264a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_126264a5:;
  /* 126264a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126264a9 jne 0x126264c9 */
  if (!C.zf) goto L_126264c9;
  /* 126264ab push 0x1264aef0 */
  push32((uint32_t)(0x1264aef0u));
  /* 126264b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 126264b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 126264b4 push 0x1264aee4 */
  push32((uint32_t)(0x1264aee4u));
  /* 126264b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 126264bb call 0x126226a0 */
  push32(0x126264c0u); f_126226a0();
  /* 126264c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126264c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126264c6 jne 0x126264c9 */
  if (!C.zf) goto L_126264c9;
  /* 126264c8 int3  */
  x86_unimpl("int3 @ 0x126264c8");
L_126264c9:;
  /* 126264c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126264cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126264cd jne 0x126264a5 */
  if (!C.zf) goto L_126264a5;
L_126264cf:;
  /* 126264cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126264d3 jne 0x126264f3 */
  if (!C.zf) goto L_126264f3;
  /* 126264d5 push 0x1264aed4 */
  push32((uint32_t)(0x1264aed4u));
  /* 126264da push 0 */
  push32((uint32_t)(0x0u));
  /* 126264dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 126264de push 0x1264aee4 */
  push32((uint32_t)(0x1264aee4u));
  /* 126264e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 126264e5 call 0x126226a0 */
  push32(0x126264eau); f_126226a0();
  /* 126264ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126264ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126264f0 jne 0x126264f3 */
  if (!C.zf) goto L_126264f3;
  /* 126264f2 int3  */
  x86_unimpl("int3 @ 0x126264f2");
L_126264f3:;
  /* 126264f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126264f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126264f7 jne 0x126264cf */
  if (!C.zf) goto L_126264cf;
  /* 126264f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126264fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12626503 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626509 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1262650c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262650f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626512 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12626514 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626517 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262651a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1262651d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12626520 push edx */
  push32((uint32_t)(EDX));
  /* 12626521 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12626524 push eax */
  push32((uint32_t)(EAX));
  /* 12626525 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626528 push ecx */
  push32((uint32_t)(ECX));
  /* 12626529 call 0x1262a570 */
  push32(0x1262652eu); f_1262a570();
  /* 1262652e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626531 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12626534 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626537 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1262653a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262653d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626540 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12626543 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626546 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262654a jl 0x1262656e */
  if ((C.sf!=C.of)) goto L_1262656e;
  /* 1262654c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262654f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12626551 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12626554 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12626556 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1262655c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1262655f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626562 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12626564 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626567 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262656a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1262656c jmp 0x1262657f */
  goto L_1262657f;
L_1262656e:;
  /* 1262656e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626571 push eax */
  push32((uint32_t)(EAX));
  /* 12626572 push 0 */
  push32((uint32_t)(0x0u));
  /* 12626574 call 0x1262a2f0 */
  push32(0x12626579u); f_1262a2f0();
  /* 12626579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262657c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1262657f:;
  /* 1262657f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12626582 pop edi */
  EDI = (pop32());
  /* 12626583 pop esi */
  ESI = (pop32());
  /* 12626584 pop ebx */
  EBX = (pop32());
  /* 12626585 mov esp, ebp */
  ESP = (EBP);
  /* 12626587 pop ebp */
  EBP = (pop32());
  /* 12626588 ret  */
  ESPCHK(0x12626490u, _esp0);
  ESP += 4; return;
}

/* FUN_10006590 @ 0x12626590 (7 bytes, 3 insns) */
void f_12626590(void) {
  FTRACE(0x12626590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626590 push edi */
  push32((uint32_t)(EDI));
  /* 12626591 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12626595 jmp 0x12626601 */
  jmp_ind(0x12626601u); return;
}

/* FUN_100065a0 @ 0x126265a0 (224 bytes, 84 insns) */
void f_126265a0(void) {
  FTRACE(0x126265a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126265a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 126265a4 push edi */
  push32((uint32_t)(EDI));
  /* 126265a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 126265ab je 0x126265bc */
  if (C.zf) goto L_126265bc;
L_126265ad:;
  /* 126265ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 126265af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 126265b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 126265b2 je 0x126265ef */
  if (C.zf) goto L_126265ef;
  /* 126265b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 126265ba jne 0x126265ad */
  if (!C.zf) goto L_126265ad;
L_126265bc:;
  /* 126265bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 126265be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 126265c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126265c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 126265c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 126265ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126265cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 126265d2 je 0x126265bc */
  if (C.zf) goto L_126265bc;
  /* 126265d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 126265d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 126265d9 je 0x126265fe */
  if (C.zf) goto L_126265fe;
  /* 126265db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 126265dd je 0x126265f9 */
  if (C.zf) goto L_126265f9;
  /* 126265df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 126265e4 je 0x126265f4 */
  if (C.zf) goto L_126265f4;
  /* 126265e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 126265eb je 0x126265ef */
  if (C.zf) goto L_126265ef;
  /* 126265ed jmp 0x126265bc */
  goto L_126265bc;
L_126265ef:;
  /* 126265ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 126265f2 jmp 0x12626601 */
  goto L_12626601;
L_126265f4:;
  /* 126265f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 126265f7 jmp 0x12626601 */
  goto L_12626601;
L_126265f9:;
  /* 126265f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 126265fc jmp 0x12626601 */
  goto L_12626601;
L_126265fe:;
  /* 126265fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12626601:;
  /* 12626601 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12626605 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1262660b je 0x12626626 */
  if (C.zf) goto L_12626626;
L_1262660d:;
  /* 1262660d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1262660f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12626610 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12626612 je 0x12626678 */
  if (C.zf) goto L_12626678;
  /* 12626614 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12626616 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12626617 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1262661d jne 0x1262660d */
  if (!C.zf) goto L_1262660d;
  /* 1262661f jmp 0x12626626 */
  goto L_12626626;
L_12626621:;
  /* 12626621 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12626623 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12626626:;
  /* 12626626 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1262662b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1262662d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262662f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12626632 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12626634 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626636 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626639 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1262663e je 0x12626621 */
  if (C.zf) goto L_12626621;
  /* 12626640 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12626642 je 0x12626678 */
  if (C.zf) goto L_12626678;
  /* 12626644 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12626646 je 0x1262666f */
  if (C.zf) goto L_1262666f;
  /* 12626648 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1262664e je 0x12626662 */
  if (C.zf) goto L_12626662;
  /* 12626650 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12626656 je 0x1262665a */
  if (C.zf) goto L_1262665a;
  /* 12626658 jmp 0x12626621 */
  goto L_12626621;
L_1262665a:;
  /* 1262665a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1262665c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12626660 pop edi */
  EDI = (pop32());
  /* 12626661 ret  */
  ESPCHK(0x126265a0u, _esp0);
  ESP += 4; return;
L_12626662:;
  /* 12626662 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12626665 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12626669 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 1262666d pop edi */
  EDI = (pop32());
  /* 1262666e ret  */
  ESPCHK(0x126265a0u, _esp0);
  ESP += 4; return;
L_1262666f:;
  /* 1262666f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12626672 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12626676 pop edi */
  EDI = (pop32());
  /* 12626677 ret  */
  ESPCHK(0x126265a0u, _esp0);
  ESP += 4; return;
L_12626678:;
  /* 12626678 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1262667a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1262667e pop edi */
  EDI = (pop32());
  /* 1262667f ret  */
  ESPCHK(0x126265a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006680 @ 0x12626680 (243 bytes, 91 insns) */
void f_12626680(void) {
  FTRACE(0x12626680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626680 push ebp */
  push32((uint32_t)(EBP));
  /* 12626681 mov ebp, esp */
  EBP = (ESP);
  /* 12626683 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626686 push ebx */
  push32((uint32_t)(EBX));
  /* 12626687 push esi */
  push32((uint32_t)(ESI));
  /* 12626688 push edi */
  push32((uint32_t)(EDI));
  /* 12626689 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1262668c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1262668f:;
  /* 1262668f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626693 jne 0x126266b3 */
  if (!C.zf) goto L_126266b3;
  /* 12626695 push 0x1264aef0 */
  push32((uint32_t)(0x1264aef0u));
  /* 1262669a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262669c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1262669e push 0x1264af00 */
  push32((uint32_t)(0x1264af00u));
  /* 126266a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 126266a5 call 0x126226a0 */
  push32(0x126266aau); f_126226a0();
  /* 126266aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126266ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126266b0 jne 0x126266b3 */
  if (!C.zf) goto L_126266b3;
  /* 126266b2 int3  */
  x86_unimpl("int3 @ 0x126266b2");
L_126266b3:;
  /* 126266b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 126266b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 126266b7 jne 0x1262668f */
  if (!C.zf) goto L_1262668f;
L_126266b9:;
  /* 126266b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126266bd jne 0x126266dd */
  if (!C.zf) goto L_126266dd;
  /* 126266bf push 0x1264aed4 */
  push32((uint32_t)(0x1264aed4u));
  /* 126266c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 126266c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 126266c8 push 0x1264af00 */
  push32((uint32_t)(0x1264af00u));
  /* 126266cd push 2 */
  push32((uint32_t)(0x2u));
  /* 126266cf call 0x126226a0 */
  push32(0x126266d4u); f_126226a0();
  /* 126266d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126266d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126266da jne 0x126266dd */
  if (!C.zf) goto L_126266dd;
  /* 126266dc int3  */
  x86_unimpl("int3 @ 0x126266dc");
L_126266dd:;
  /* 126266dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 126266df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 126266e1 jne 0x126266b9 */
  if (!C.zf) goto L_126266b9;
  /* 126266e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126266e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 126266ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 126266f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126266f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 126266f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 126266f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126266fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 126266fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626701 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626704 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12626707 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1262670a push ecx */
  push32((uint32_t)(ECX));
  /* 1262670b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1262670e push edx */
  push32((uint32_t)(EDX));
  /* 1262670f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626712 push eax */
  push32((uint32_t)(EAX));
  /* 12626713 call 0x1262a570 */
  push32(0x12626718u); f_1262a570();
  /* 12626718 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262671b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1262671e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626721 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12626724 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626727 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262672a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1262672d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626730 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626734 jl 0x12626758 */
  if ((C.sf!=C.of)) goto L_12626758;
  /* 12626736 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626739 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262673b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1262673e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12626740 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12626746 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12626749 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262674c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1262674e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626751 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12626754 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12626756 jmp 0x12626769 */
  goto L_12626769;
L_12626758:;
  /* 12626758 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1262675b push edx */
  push32((uint32_t)(EDX));
  /* 1262675c push 0 */
  push32((uint32_t)(0x0u));
  /* 1262675e call 0x1262a2f0 */
  push32(0x12626763u); f_1262a2f0();
  /* 12626763 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626766 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12626769:;
  /* 12626769 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1262676c pop edi */
  EDI = (pop32());
  /* 1262676d pop esi */
  ESI = (pop32());
  /* 1262676e pop ebx */
  EBX = (pop32());
  /* 1262676f mov esp, ebp */
  ESP = (EBP);
  /* 12626771 pop ebp */
  EBP = (pop32());
  /* 12626772 ret  */
  ESPCHK(0x12626680u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12626780 (47 bytes, 17 insns) */
void f_12626780(void) {
  FTRACE(0x12626780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626780 push ecx */
  push32((uint32_t)(ECX));
  /* 12626781 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626786 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1262678a jb 0x126267a0 */
  if (C.cf) goto L_126267a0;
L_1262678c:;
  /* 1262678c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626792 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626797 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12626799 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262679e jae 0x1262678c */
  if (!C.cf) goto L_1262678c;
L_126267a0:;
  /* 126267a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 126267a2 mov eax, esp */
  EAX = (ESP);
  /* 126267a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 126267a6 mov esp, ecx */
  ESP = (ECX);
  /* 126267a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 126267aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 126267ad push eax */
  push32((uint32_t)(EAX));
  /* 126267ae ret  */
  ESPCHK(0x12626780u, _esp0);
  ESP += 4; return;
}

/* FUN_100067b0 @ 0x126267b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_126267b0(void) {
  FTRACE(0x126267b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126267b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126267b1 mov ebp, esp */
  EBP = (ESP);
  /* 126267b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126267b6 push esi */
  push32((uint32_t)(ESI));
  /* 126267b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267bb je 0x126267c3 */
  if (C.zf) goto L_126267c3;
  /* 126267bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267c1 jne 0x126267c8 */
  if (!C.zf) goto L_126267c8;
L_126267c3:;
  /* 126267c3 jmp 0x12626998 */
  goto L_12626998;
L_126267c8:;
  /* 126267c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267cc je 0x126267e4 */
  if (C.zf) goto L_126267e4;
  /* 126267ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267d2 je 0x126267e4 */
  if (C.zf) goto L_126267e4;
  /* 126267d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267d8 je 0x126267e4 */
  if (C.zf) goto L_126267e4;
  /* 126267da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267de jne 0x126268c1 */
  if (!C.zf) goto L_126268c1;
L_126267e4:;
  /* 126267e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 126267e6 call 0x12626fe0 */
  push32(0x126267ebu); f_12626fe0();
  /* 126267eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126267ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267f2 je 0x126267fa */
  if (C.zf) goto L_126267fa;
  /* 126267f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126267f8 jne 0x1262683f */
  if (!C.zf) goto L_1262683f;
L_126267fa:;
  /* 126267fa cmp dword ptr [0x1264f684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626801 jne 0x1262683f */
  if (!C.zf) goto L_1262683f;
  /* 12626803 push 1 */
  push32((uint32_t)(0x1u));
  /* 12626805 push 0x126269e0 */
  push32((uint32_t)(0x126269e0u));
  /* 1262680a call dword ptr [0x12652334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652334))), 0x12626810u);
  /* 12626810 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626813 jne 0x12626821 */
  if (!C.zf) goto L_12626821;
  /* 12626815 mov dword ptr [0x1264f684], 1 */
  w32((uint32_t)(0x1264f684), (0x1u));
  /* 1262681f jmp 0x1262683f */
  goto L_1262683f;
L_12626821:;
  /* 12626821 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x12626827u);
  /* 12626827 mov esi, eax */
  ESI = (EAX);
  /* 12626829 call 0x1262b4c0 */
  push32(0x1262682eu); f_1262b4c0();
  /* 1262682e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12626830 push 1 */
  push32((uint32_t)(0x1u));
  /* 12626832 call 0x12627080 */
  push32(0x12626837u); f_12627080();
  /* 12626837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262683a jmp 0x12626998 */
  goto L_12626998;
L_1262683f:;
  /* 1262683f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626842 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12626845 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12626848 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1262684b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1262684e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626852 ja 0x126268b2 */
  if ((!C.cf&&!C.zf)) goto L_126268b2;
  /* 12626854 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12626857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12626859 mov dl, byte ptr [eax + 0x126269bf] */
  DL = (r8((uint32_t)(EAX + 0x126269bf)));
  /* 1262685f jmp dword ptr [edx*4 + 0x126269ab] */
  switch (EDX) {
    case 0: goto L_12626866;
    case 1: goto L_126268a0;
    case 2: goto L_1262687a;
    case 3: goto L_1262688d;
    case 4: goto L_126268b2;
    default: x86_unimpl("switch@0x1262685f out of table"); return;
  }
L_12626866:;
  /* 12626866 mov ecx, dword ptr [0x1264f674] */
  ECX = (r32((uint32_t)(0x1264f674)));
  /* 1262686c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262686f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626872 mov dword ptr [0x1264f674], edx */
  w32((uint32_t)(0x1264f674), (EDX));
  /* 12626878 jmp 0x126268b2 */
  goto L_126268b2;
L_1262687a:;
  /* 1262687a mov eax, dword ptr [0x1264f678] */
  EAX = (r32((uint32_t)(0x1264f678)));
  /* 1262687f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626882 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626885 mov dword ptr [0x1264f678], ecx */
  w32((uint32_t)(0x1264f678), (ECX));
  /* 1262688b jmp 0x126268b2 */
  goto L_126268b2;
L_1262688d:;
  /* 1262688d mov edx, dword ptr [0x1264f67c] */
  EDX = (r32((uint32_t)(0x1264f67c)));
  /* 12626893 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12626896 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626899 mov dword ptr [0x1264f67c], eax */
  w32((uint32_t)(0x1264f67c), (EAX));
  /* 1262689e jmp 0x126268b2 */
  goto L_126268b2;
L_126268a0:;
  /* 126268a0 mov ecx, dword ptr [0x1264f680] */
  ECX = (r32((uint32_t)(0x1264f680)));
  /* 126268a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 126268a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126268ac mov dword ptr [0x1264f680], edx */
  w32((uint32_t)(0x1264f680), (EDX));
L_126268b2:;
  /* 126268b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 126268b4 call 0x12627080 */
  push32(0x126268b9u); f_12627080();
  /* 126268b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126268bc jmp 0x12626993 */
  goto L_12626993;
L_126268c1:;
  /* 126268c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126268c5 je 0x126268d8 */
  if (C.zf) goto L_126268d8;
  /* 126268c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126268cb je 0x126268d8 */
  if (C.zf) goto L_126268d8;
  /* 126268cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126268d1 je 0x126268d8 */
  if (C.zf) goto L_126268d8;
  /* 126268d3 jmp 0x12626998 */
  goto L_12626998;
L_126268d8:;
  /* 126268d8 call 0x12623020 */
  push32(0x126268ddu); f_12623020();
  /* 126268dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126268e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 126268e3 cmp dword ptr [eax + 0x50], 0x1264dc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1264dc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126268ea jne 0x12626935 */
  if (!C.zf) goto L_12626935;
  /* 126268ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 126268f1 push 0x1264af0c */
  push32((uint32_t)(0x1264af0cu));
  /* 126268f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 126268f8 mov ecx, dword ptr [0x1264dc80] */
  ECX = (r32((uint32_t)(0x1264dc80)));
  /* 126268fe push ecx */
  push32((uint32_t)(ECX));
  /* 126268ff call 0x126235e0 */
  push32(0x12626904u); f_126235e0();
  /* 12626904 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626907 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262690a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1262690d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626910 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626914 je 0x12626933 */
  if (C.zf) goto L_12626933;
  /* 12626916 mov ecx, dword ptr [0x1264dc80] */
  ECX = (r32((uint32_t)(0x1264dc80)));
  /* 1262691c push ecx */
  push32((uint32_t)(ECX));
  /* 1262691d push 0x1264dc00 */
  push32((uint32_t)(0x1264dc00u));
  /* 12626922 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626925 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12626928 push eax */
  push32((uint32_t)(EAX));
  /* 12626929 call 0x12629ec0 */
  push32(0x1262692eu); f_12629ec0();
  /* 1262692e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626931 jmp 0x12626935 */
  goto L_12626935;
L_12626933:;
  /* 12626933 jmp 0x12626998 */
  goto L_12626998;
L_12626935:;
  /* 12626935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626938 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1262693b push edx */
  push32((uint32_t)(EDX));
  /* 1262693c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262693f push eax */
  push32((uint32_t)(EAX));
  /* 12626940 call 0x12626cc0 */
  push32(0x12626945u); f_12626cc0();
  /* 12626945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626948 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1262694b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262694f jne 0x12626953 */
  if (!C.zf) goto L_12626953;
  /* 12626951 jmp 0x12626998 */
  goto L_12626998;
L_12626953:;
  /* 12626953 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626956 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12626959 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1262695c:;
  /* 1262695c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262695f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12626962 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626965 jne 0x12626993 */
  if (!C.zf) goto L_12626993;
  /* 12626967 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262696a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262696d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12626970 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626973 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626976 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12626979 mov edx, dword ptr [0x1264dc84] */
  EDX = (r32((uint32_t)(0x1264dc84)));
  /* 1262697f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12626982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626985 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12626988 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262698a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262698d jb 0x12626991 */
  if (C.cf) goto L_12626991;
  /* 1262698f jmp 0x12626993 */
  goto L_12626993;
L_12626991:;
  /* 12626991 jmp 0x1262695c */
  goto L_1262695c;
L_12626993:;
  /* 12626993 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626996 jmp 0x126269a6 */
  goto L_126269a6;
L_12626998:;
  /* 12626998 call 0x1262b4b0 */
  push32(0x1262699du); f_1262b4b0();
  /* 1262699d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 126269a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_126269a6:;
  /* 126269a6 pop esi */
  ESI = (pop32());
  /* 126269a7 mov esp, ebp */
  ESP = (EBP);
  /* 126269a9 pop ebp */
  EBP = (pop32());
  /* 126269aa ret  */
  ESPCHK(0x126267b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069e0 @ 0x126269e0 (146 bytes, 45 insns) */
void f_126269e0(void) {
  FTRACE(0x126269e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126269e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126269e1 mov ebp, esp */
  EBP = (ESP);
  /* 126269e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126269e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 126269e8 call 0x12626fe0 */
  push32(0x126269edu); f_12626fe0();
  /* 126269ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126269f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126269f4 jne 0x12626a0e */
  if (!C.zf) goto L_12626a0e;
  /* 126269f6 mov dword ptr [ebp - 8], 0x1264f674 */
  w32((uint32_t)(EBP + -0x8), (0x1264f674u));
  /* 126269fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626a00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12626a02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12626a05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12626a0c jmp 0x12626a24 */
  goto L_12626a24;
L_12626a0e:;
  /* 12626a0e mov dword ptr [ebp - 8], 0x1264f678 */
  w32((uint32_t)(EBP + -0x8), (0x1264f678u));
  /* 12626a15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626a18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12626a1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626a1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12626a24:;
  /* 12626a24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626a28 jne 0x12626a38 */
  if (!C.zf) goto L_12626a38;
  /* 12626a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12626a2c call 0x12627080 */
  push32(0x12626a31u); f_12627080();
  /* 12626a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626a34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12626a36 jmp 0x12626a6c */
  goto L_12626a6c;
L_12626a38:;
  /* 12626a38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626a3c je 0x12626a5d */
  if (C.zf) goto L_12626a5d;
  /* 12626a3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626a41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12626a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12626a49 call 0x12627080 */
  push32(0x12626a4eu); f_12627080();
  /* 12626a4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626a51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626a54 push edx */
  push32((uint32_t)(EDX));
  /* 12626a55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12626a58u);
  /* 12626a58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626a5b jmp 0x12626a67 */
  goto L_12626a67;
L_12626a5d:;
  /* 12626a5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12626a5f call 0x12627080 */
  push32(0x12626a64u); f_12627080();
  /* 12626a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626a67:;
  /* 12626a67 mov eax, 1 */
  EAX = (0x1u);
L_12626a6c:;
  /* 12626a6c mov esp, ebp */
  ESP = (EBP);
  /* 12626a6e pop ebp */
  EBP = (pop32());
  /* 12626a6f ret 4 */
  ESPCHK(0x126269e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006a80 @ 0x12626a80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12626a80(void) {
  FTRACE(0x12626a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12626a81 mov ebp, esp */
  EBP = (ESP);
  /* 12626a83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626a86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12626a8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626a90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12626a93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12626a96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626a99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12626a9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626aa0 ja 0x12626b4e */
  if ((!C.cf&&!C.zf)) goto L_12626b4e;
  /* 12626aa6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12626aa9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12626aab mov dl, byte ptr [eax + 0x12626ca2] */
  DL = (r8((uint32_t)(EAX + 0x12626ca2)));
  /* 12626ab1 jmp dword ptr [edx*4 + 0x12626c8a] */
  switch (EDX) {
    case 0: goto L_12626ab8;
    case 1: goto L_12626b23;
    case 2: goto L_12626b09;
    case 3: goto L_12626ad5;
    case 4: goto L_12626aef;
    case 5: goto L_12626b4e;
    default: x86_unimpl("switch@0x12626ab1 out of table"); return;
  }
L_12626ab8:;
  /* 12626ab8 mov dword ptr [ebp - 0x18], 0x1264f674 */
  w32((uint32_t)(EBP + -0x18), (0x1264f674u));
  /* 12626abf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626ac2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626ac4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12626ac7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626aca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626acd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626ad0 jmp 0x12626b56 */
  goto L_12626b56;
L_12626ad5:;
  /* 12626ad5 mov dword ptr [ebp - 0x18], 0x1264f678 */
  w32((uint32_t)(EBP + -0x18), (0x1264f678u));
  /* 12626adc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626adf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626ae1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12626ae4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626ae7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626aea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626aed jmp 0x12626b56 */
  goto L_12626b56;
L_12626aef:;
  /* 12626aef mov dword ptr [ebp - 0x18], 0x1264f67c */
  w32((uint32_t)(EBP + -0x18), (0x1264f67cu));
  /* 12626af6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626af9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626afb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12626afe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626b01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626b04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626b07 jmp 0x12626b56 */
  goto L_12626b56;
L_12626b09:;
  /* 12626b09 mov dword ptr [ebp - 0x18], 0x1264f680 */
  w32((uint32_t)(EBP + -0x18), (0x1264f680u));
  /* 12626b10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626b13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626b15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12626b18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12626b1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626b1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12626b21 jmp 0x12626b56 */
  goto L_12626b56;
L_12626b23:;
  /* 12626b23 call 0x12623020 */
  push32(0x12626b28u); f_12623020();
  /* 12626b28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12626b2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626b2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12626b31 push edx */
  push32((uint32_t)(EDX));
  /* 12626b32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626b35 push eax */
  push32((uint32_t)(EAX));
  /* 12626b36 call 0x12626cc0 */
  push32(0x12626b3bu); f_12626cc0();
  /* 12626b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626b3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626b41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12626b44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626b47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12626b49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12626b4c jmp 0x12626b56 */
  goto L_12626b56;
L_12626b4e:;
  /* 12626b4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12626b51 jmp 0x12626c86 */
  goto L_12626c86;
L_12626b56:;
  /* 12626b56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626b5a je 0x12626b66 */
  if (C.zf) goto L_12626b66;
  /* 12626b5c push 1 */
  push32((uint32_t)(0x1u));
  /* 12626b5e call 0x12626fe0 */
  push32(0x12626b63u); f_12626fe0();
  /* 12626b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626b66:;
  /* 12626b66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626b6a jne 0x12626b83 */
  if (!C.zf) goto L_12626b83;
  /* 12626b6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626b70 je 0x12626b7c */
  if (C.zf) goto L_12626b7c;
  /* 12626b72 push 1 */
  push32((uint32_t)(0x1u));
  /* 12626b74 call 0x12627080 */
  push32(0x12626b79u); f_12627080();
  /* 12626b79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626b7c:;
  /* 12626b7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12626b7e jmp 0x12626c86 */
  goto L_12626c86;
L_12626b83:;
  /* 12626b83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626b87 jne 0x12626ba0 */
  if (!C.zf) goto L_12626ba0;
  /* 12626b89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626b8d je 0x12626b99 */
  if (C.zf) goto L_12626b99;
  /* 12626b8f push 1 */
  push32((uint32_t)(0x1u));
  /* 12626b91 call 0x12627080 */
  push32(0x12626b96u); f_12627080();
  /* 12626b96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626b99:;
  /* 12626b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 12626b9b call 0x12622da0 */
  push32(0x12626ba0u); f_12622da0();
L_12626ba0:;
  /* 12626ba0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626ba4 je 0x12626bb2 */
  if (C.zf) goto L_12626bb2;
  /* 12626ba6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626baa je 0x12626bb2 */
  if (C.zf) goto L_12626bb2;
  /* 12626bac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626bb0 jne 0x12626bde */
  if (!C.zf) goto L_12626bde;
L_12626bb2:;
  /* 12626bb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626bb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12626bb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12626bbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626bbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12626bc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626bc9 jne 0x12626bde */
  if (!C.zf) goto L_12626bde;
  /* 12626bcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626bce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12626bd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12626bd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626bd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_12626bde:;
  /* 12626bde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626be2 jne 0x12626c20 */
  if (!C.zf) goto L_12626c20;
  /* 12626be4 mov eax, dword ptr [0x1264dc78] */
  EAX = (r32((uint32_t)(0x1264dc78)));
  /* 12626be9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12626bec jmp 0x12626bf7 */
  goto L_12626bf7;
L_12626bee:;
  /* 12626bee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12626bf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626bf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12626bf7:;
  /* 12626bf7 mov edx, dword ptr [0x1264dc78] */
  EDX = (r32((uint32_t)(0x1264dc78)));
  /* 12626bfd add edx, dword ptr [0x1264dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626c03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c06 jge 0x12626c1e */
  if ((C.sf==C.of)) goto L_12626c1e;
  /* 12626c08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12626c0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12626c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626c11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12626c14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12626c1c jmp 0x12626bee */
  goto L_12626bee;
L_12626c1e:;
  /* 12626c1e jmp 0x12626c29 */
  goto L_12626c29;
L_12626c20:;
  /* 12626c20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12626c23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12626c29:;
  /* 12626c29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c2d je 0x12626c39 */
  if (C.zf) goto L_12626c39;
  /* 12626c2f push 1 */
  push32((uint32_t)(0x1u));
  /* 12626c31 call 0x12627080 */
  push32(0x12626c36u); f_12627080();
  /* 12626c36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626c39:;
  /* 12626c39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c3d jne 0x12626c50 */
  if (!C.zf) goto L_12626c50;
  /* 12626c3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626c42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12626c45 push edx */
  push32((uint32_t)(EDX));
  /* 12626c46 push 8 */
  push32((uint32_t)(0x8u));
  /* 12626c48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12626c4bu);
  /* 12626c4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12626c4e jmp 0x12626c5a */
  goto L_12626c5a;
L_12626c50:;
  /* 12626c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626c53 push eax */
  push32((uint32_t)(EAX));
  /* 12626c54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12626c57u);
  /* 12626c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626c5a:;
  /* 12626c5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c5e je 0x12626c6c */
  if (C.zf) goto L_12626c6c;
  /* 12626c60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c64 je 0x12626c6c */
  if (C.zf) goto L_12626c6c;
  /* 12626c66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c6a jne 0x12626c84 */
  if (!C.zf) goto L_12626c84;
L_12626c6c:;
  /* 12626c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626c6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12626c72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12626c75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626c79 jne 0x12626c84 */
  if (!C.zf) goto L_12626c84;
  /* 12626c7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626c7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626c81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12626c84:;
  /* 12626c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12626c86:;
  /* 12626c86 mov esp, ebp */
  ESP = (EBP);
  /* 12626c88 pop ebp */
  EBP = (pop32());
  /* 12626c89 ret  */
  ESPCHK(0x12626a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cc0 @ 0x12626cc0 (91 bytes, 35 insns) */
void f_12626cc0(void) {
  FTRACE(0x12626cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12626cc1 mov ebp, esp */
  EBP = (ESP);
  /* 12626cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12626cc4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626cc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12626cca:;
  /* 12626cca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626ccd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12626cd0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626cd3 je 0x12626cf3 */
  if (C.zf) goto L_12626cf3;
  /* 12626cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626cd8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626cdb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12626cde mov ecx, dword ptr [0x1264dc84] */
  ECX = (r32((uint32_t)(0x1264dc84)));
  /* 12626ce4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12626ce7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626cea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626cec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626cef jae 0x12626cf3 */
  if (!C.cf) goto L_12626cf3;
  /* 12626cf1 jmp 0x12626cca */
  goto L_12626cca;
L_12626cf3:;
  /* 12626cf3 mov eax, dword ptr [0x1264dc84] */
  EAX = (r32((uint32_t)(0x1264dc84)));
  /* 12626cf8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12626cfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626cfe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626d00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626d03 jae 0x12626d15 */
  if (!C.cf) goto L_12626d15;
  /* 12626d05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626d08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12626d0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626d0e jne 0x12626d15 */
  if (!C.zf) goto L_12626d15;
  /* 12626d10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626d13 jmp 0x12626d17 */
  goto L_12626d17;
L_12626d15:;
  /* 12626d15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12626d17:;
  /* 12626d17 mov esp, ebp */
  ESP = (EBP);
  /* 12626d19 pop ebp */
  EBP = (pop32());
  /* 12626d1a ret  */
  ESPCHK(0x12626cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d20 @ 0x12626d20 (13 bytes, 6 insns) */
void f_12626d20(void) {
  FTRACE(0x12626d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626d20 push ebp */
  push32((uint32_t)(EBP));
  /* 12626d21 mov ebp, esp */
  EBP = (ESP);
  /* 12626d23 call 0x12623020 */
  push32(0x12626d28u); f_12623020();
  /* 12626d28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626d2b pop ebp */
  EBP = (pop32());
  /* 12626d2c ret  */
  ESPCHK(0x12626d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d30 @ 0x12626d30 (13 bytes, 6 insns) */
void f_12626d30(void) {
  FTRACE(0x12626d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12626d31 mov ebp, esp */
  EBP = (ESP);
  /* 12626d33 call 0x12623020 */
  push32(0x12626d38u); f_12623020();
  /* 12626d38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626d3b pop ebp */
  EBP = (pop32());
  /* 12626d3c ret  */
  ESPCHK(0x12626d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d40 @ 0x12626d40 (187 bytes, 54 insns) */
void f_12626d40(void) {
  FTRACE(0x12626d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12626d41 mov ebp, esp */
  EBP = (ESP);
  /* 12626d43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12626d46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12626d4d cmp dword ptr [0x1264f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626d54 jne 0x12626db3 */
  if (!C.zf) goto L_12626db3;
  /* 12626d56 push 0x1264a338 */
  push32((uint32_t)(0x1264a338u));
  /* 12626d5b call dword ptr [0x126522bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522bc))), 0x12626d61u);
  /* 12626d61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12626d64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626d68 je 0x12626d87 */
  if (C.zf) goto L_12626d87;
  /* 12626d6a push 0x1264af3c */
  push32((uint32_t)(0x1264af3cu));
  /* 12626d6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626d72 push eax */
  push32((uint32_t)(EAX));
  /* 12626d73 call dword ptr [0x126522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b8))), 0x12626d79u);
  /* 12626d79 mov dword ptr [0x1264f688], eax */
  w32((uint32_t)(0x1264f688), (EAX));
  /* 12626d7e cmp dword ptr [0x1264f688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626d85 jne 0x12626d8b */
  if (!C.zf) goto L_12626d8b;
L_12626d87:;
  /* 12626d87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12626d89 jmp 0x12626df7 */
  goto L_12626df7;
L_12626d8b:;
  /* 12626d8b push 0x1264af2c */
  push32((uint32_t)(0x1264af2cu));
  /* 12626d90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626d93 push ecx */
  push32((uint32_t)(ECX));
  /* 12626d94 call dword ptr [0x126522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b8))), 0x12626d9au);
  /* 12626d9a mov dword ptr [0x1264f68c], eax */
  w32((uint32_t)(0x1264f68c), (EAX));
  /* 12626d9f push 0x1264af18 */
  push32((uint32_t)(0x1264af18u));
  /* 12626da4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12626da7 push edx */
  push32((uint32_t)(EDX));
  /* 12626da8 call dword ptr [0x126522b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522b8))), 0x12626daeu);
  /* 12626dae mov dword ptr [0x1264f690], eax */
  w32((uint32_t)(0x1264f690), (EAX));
L_12626db3:;
  /* 12626db3 cmp dword ptr [0x1264f68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626dba je 0x12626dc5 */
  if (C.zf) goto L_12626dc5;
  /* 12626dbc call dword ptr [0x1264f68c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f68c))), 0x12626dc2u);
  /* 12626dc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12626dc5:;
  /* 12626dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626dc9 je 0x12626de1 */
  if (C.zf) goto L_12626de1;
  /* 12626dcb cmp dword ptr [0x1264f690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626dd2 je 0x12626de1 */
  if (C.zf) goto L_12626de1;
  /* 12626dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626dd7 push eax */
  push32((uint32_t)(EAX));
  /* 12626dd8 call dword ptr [0x1264f690] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f690))), 0x12626ddeu);
  /* 12626dde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12626de1:;
  /* 12626de1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12626de4 push ecx */
  push32((uint32_t)(ECX));
  /* 12626de5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12626de8 push edx */
  push32((uint32_t)(EDX));
  /* 12626de9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626dec push eax */
  push32((uint32_t)(EAX));
  /* 12626ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626df0 push ecx */
  push32((uint32_t)(ECX));
  /* 12626df1 call dword ptr [0x1264f688] */
  call_ind((uint32_t)(r32((uint32_t)(0x1264f688))), 0x12626df7u);
L_12626df7:;
  /* 12626df7 mov esp, ebp */
  ESP = (EBP);
  /* 12626df9 pop ebp */
  EBP = (pop32());
  /* 12626dfa ret  */
  ESPCHK(0x12626d40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x12626e00 (254 bytes, 109 insns) */
void f_12626e00(void) {
  FTRACE(0x12626e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626e00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12626e04 push edi */
  push32((uint32_t)(EDI));
  /* 12626e05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12626e07 je 0x12626e83 */
  if (C.zf) goto L_12626e83;
  /* 12626e09 push esi */
  push32((uint32_t)(ESI));
  /* 12626e0a push ebx */
  push32((uint32_t)(EBX));
  /* 12626e0b mov ebx, ecx */
  EBX = (ECX);
  /* 12626e0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 12626e11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12626e17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 12626e1b jne 0x12626e24 */
  if (!C.zf) goto L_12626e24;
  /* 12626e1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12626e20 jne 0x12626e91 */
  if (!C.zf) goto L_12626e91;
  /* 12626e22 jmp 0x12626e45 */
  goto L_12626e45;
L_12626e24:;
  /* 12626e24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12626e26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12626e27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12626e29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12626e2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12626e2b je 0x12626e52 */
  if (C.zf) goto L_12626e52;
  /* 12626e2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12626e2f je 0x12626e5a */
  if (C.zf) goto L_12626e5a;
  /* 12626e31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 12626e37 jne 0x12626e24 */
  if (!C.zf) goto L_12626e24;
  /* 12626e39 mov ebx, ecx */
  EBX = (ECX);
  /* 12626e3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12626e3e jne 0x12626e91 */
  if (!C.zf) goto L_12626e91;
L_12626e40:;
  /* 12626e40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12626e43 je 0x12626e52 */
  if (C.zf) goto L_12626e52;
L_12626e45:;
  /* 12626e45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12626e47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12626e48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12626e4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12626e4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12626e4d je 0x12626e7e */
  if (C.zf) goto L_12626e7e;
  /* 12626e4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12626e50 jne 0x12626e45 */
  if (!C.zf) goto L_12626e45;
L_12626e52:;
  /* 12626e52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12626e56 pop ebx */
  EBX = (pop32());
  /* 12626e57 pop esi */
  ESI = (pop32());
  /* 12626e58 pop edi */
  EDI = (pop32());
  /* 12626e59 ret  */
  ESPCHK(0x12626e00u, _esp0);
  ESP += 4; return;
L_12626e5a:;
  /* 12626e5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12626e60 je 0x12626e74 */
  if (C.zf) goto L_12626e74;
L_12626e62:;
  /* 12626e62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12626e64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12626e65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12626e66 je 0x12626ef6 */
  if (C.zf) goto L_12626ef6;
  /* 12626e6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12626e72 jne 0x12626e62 */
  if (!C.zf) goto L_12626e62;
L_12626e74:;
  /* 12626e74 mov ebx, ecx */
  EBX = (ECX);
  /* 12626e76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12626e79 jne 0x12626ee7 */
  if (!C.zf) goto L_12626ee7;
L_12626e7b:;
  /* 12626e7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12626e7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_12626e7e:;
  /* 12626e7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12626e7f jne 0x12626e7b */
  if (!C.zf) goto L_12626e7b;
  /* 12626e81 pop ebx */
  EBX = (pop32());
  /* 12626e82 pop esi */
  ESI = (pop32());
L_12626e83:;
  /* 12626e83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12626e87 pop edi */
  EDI = (pop32());
  /* 12626e88 ret  */
  ESPCHK(0x12626e00u, _esp0);
  ESP += 4; return;
L_12626e89:;
  /* 12626e89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12626e8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12626e8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12626e8f je 0x12626e40 */
  if (C.zf) goto L_12626e40;
L_12626e91:;
  /* 12626e91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12626e96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12626e98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626e9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12626e9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12626e9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12626ea1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12626ea4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12626ea9 je 0x12626e89 */
  if (C.zf) goto L_12626e89;
  /* 12626eab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12626ead je 0x12626edb */
  if (C.zf) goto L_12626edb;
  /* 12626eaf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12626eb1 je 0x12626ed1 */
  if (C.zf) goto L_12626ed1;
  /* 12626eb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12626eb9 je 0x12626ec7 */
  if (C.zf) goto L_12626ec7;
  /* 12626ebb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12626ec1 jne 0x12626e89 */
  if (!C.zf) goto L_12626e89;
  /* 12626ec3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12626ec5 jmp 0x12626edf */
  goto L_12626edf;
L_12626ec7:;
  /* 12626ec7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12626ecd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12626ecf jmp 0x12626edf */
  goto L_12626edf;
L_12626ed1:;
  /* 12626ed1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12626ed7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12626ed9 jmp 0x12626edf */
  goto L_12626edf;
L_12626edb:;
  /* 12626edb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12626edd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_12626edf:;
  /* 12626edf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12626ee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12626ee4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12626ee5 je 0x12626ef1 */
  if (C.zf) goto L_12626ef1;
L_12626ee7:;
  /* 12626ee7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12626ee9:;
  /* 12626ee9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 12626eeb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12626eee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12626eef jne 0x12626ee9 */
  if (!C.zf) goto L_12626ee9;
L_12626ef1:;
  /* 12626ef1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 12626ef4 jne 0x12626e7b */
  if (!C.zf) goto L_12626e7b;
L_12626ef6:;
  /* 12626ef6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12626efa pop ebx */
  EBX = (pop32());
  /* 12626efb pop esi */
  ESI = (pop32());
  /* 12626efc pop edi */
  EDI = (pop32());
  /* 12626efd ret  */
  ESPCHK(0x12626e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f00 @ 0x12626f00 (55 bytes, 16 insns) */
void f_12626f00(void) {
  FTRACE(0x12626f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12626f01 mov ebp, esp */
  EBP = (ESP);
  /* 12626f03 mov eax, dword ptr [0x1264db84] */
  EAX = (r32((uint32_t)(0x1264db84)));
  /* 12626f08 push eax */
  push32((uint32_t)(EAX));
  /* 12626f09 call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x12626f0fu);
  /* 12626f0f mov ecx, dword ptr [0x1264db74] */
  ECX = (r32((uint32_t)(0x1264db74)));
  /* 12626f15 push ecx */
  push32((uint32_t)(ECX));
  /* 12626f16 call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x12626f1cu);
  /* 12626f1c mov edx, dword ptr [0x1264db64] */
  EDX = (r32((uint32_t)(0x1264db64)));
  /* 12626f22 push edx */
  push32((uint32_t)(EDX));
  /* 12626f23 call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x12626f29u);
  /* 12626f29 mov eax, dword ptr [0x1264db44] */
  EAX = (r32((uint32_t)(0x1264db44)));
  /* 12626f2e push eax */
  push32((uint32_t)(EAX));
  /* 12626f2f call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x12626f35u);
  /* 12626f35 pop ebp */
  EBP = (pop32());
  /* 12626f36 ret  */
  ESPCHK(0x12626f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f40 @ 0x12626f40 (159 bytes, 47 insns) */
void f_12626f40(void) {
  FTRACE(0x12626f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626f40 push ebp */
  push32((uint32_t)(EBP));
  /* 12626f41 mov ebp, esp */
  EBP = (ESP);
  /* 12626f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12626f44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12626f4b jmp 0x12626f56 */
  goto L_12626f56;
L_12626f4d:;
  /* 12626f4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626f50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12626f53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12626f56:;
  /* 12626f56 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f5a jge 0x12626fa9 */
  if ((C.sf==C.of)) goto L_12626fa9;
  /* 12626f5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626f5f cmp dword ptr [ecx*4 + 0x1264db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1264db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f67 je 0x12626fa7 */
  if (C.zf) goto L_12626fa7;
  /* 12626f69 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f6d je 0x12626fa7 */
  if (C.zf) goto L_12626fa7;
  /* 12626f6f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f73 je 0x12626fa7 */
  if (C.zf) goto L_12626fa7;
  /* 12626f75 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f79 je 0x12626fa7 */
  if (C.zf) goto L_12626fa7;
  /* 12626f7b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626f7f je 0x12626fa7 */
  if (C.zf) goto L_12626fa7;
  /* 12626f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626f84 mov eax, dword ptr [edx*4 + 0x1264db40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1264db40)));
  /* 12626f8b push eax */
  push32((uint32_t)(EAX));
  /* 12626f8c call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x12626f92u);
  /* 12626f92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12626f94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12626f97 mov edx, dword ptr [ecx*4 + 0x1264db40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1264db40)));
  /* 12626f9e push edx */
  push32((uint32_t)(EDX));
  /* 12626f9f call 0x12624070 */
  push32(0x12626fa4u); f_12624070();
  /* 12626fa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12626fa7:;
  /* 12626fa7 jmp 0x12626f4d */
  goto L_12626f4d;
L_12626fa9:;
  /* 12626fa9 mov eax, dword ptr [0x1264db64] */
  EAX = (r32((uint32_t)(0x1264db64)));
  /* 12626fae push eax */
  push32((uint32_t)(EAX));
  /* 12626faf call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x12626fb5u);
  /* 12626fb5 mov ecx, dword ptr [0x1264db74] */
  ECX = (r32((uint32_t)(0x1264db74)));
  /* 12626fbb push ecx */
  push32((uint32_t)(ECX));
  /* 12626fbc call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x12626fc2u);
  /* 12626fc2 mov edx, dword ptr [0x1264db84] */
  EDX = (r32((uint32_t)(0x1264db84)));
  /* 12626fc8 push edx */
  push32((uint32_t)(EDX));
  /* 12626fc9 call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x12626fcfu);
  /* 12626fcf mov eax, dword ptr [0x1264db44] */
  EAX = (r32((uint32_t)(0x1264db44)));
  /* 12626fd4 push eax */
  push32((uint32_t)(EAX));
  /* 12626fd5 call dword ptr [0x12652250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652250))), 0x12626fdbu);
  /* 12626fdb mov esp, ebp */
  ESP = (EBP);
  /* 12626fdd pop ebp */
  EBP = (pop32());
  /* 12626fde ret  */
  ESPCHK(0x12626f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006fe0 @ 0x12626fe0 (151 bytes, 46 insns) */
void f_12626fe0(void) {
  FTRACE(0x12626fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12626fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 12626fe1 mov ebp, esp */
  EBP = (ESP);
  /* 12626fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12626fe4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12626fe7 cmp dword ptr [eax*4 + 0x1264db40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1264db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12626fef jne 0x12627062 */
  if (!C.zf) goto L_12627062;
  /* 12626ff1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 12626ff6 push 0x1264af48 */
  push32((uint32_t)(0x1264af48u));
  /* 12626ffb push 2 */
  push32((uint32_t)(0x2u));
  /* 12626ffd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12626fff call 0x126235e0 */
  push32(0x12627004u); f_126235e0();
  /* 12627004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627007 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262700a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262700e jne 0x1262701a */
  if (!C.zf) goto L_1262701a;
  /* 12627010 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12627012 call 0x12622550 */
  push32(0x12627017u); f_12622550();
  /* 12627017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262701a:;
  /* 1262701a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262701c call 0x12626fe0 */
  push32(0x12627021u); f_12626fe0();
  /* 12627021 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627024 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627027 cmp dword ptr [ecx*4 + 0x1264db40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1264db40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262702f jne 0x1262704a */
  if (!C.zf) goto L_1262704a;
  /* 12627031 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627034 push edx */
  push32((uint32_t)(EDX));
  /* 12627035 call dword ptr [0x12652304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652304))), 0x1262703bu);
  /* 1262703b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262703e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627041 mov dword ptr [eax*4 + 0x1264db40], ecx */
  w32((uint32_t)(EAX*4 + 0x1264db40), (ECX));
  /* 12627048 jmp 0x12627058 */
  goto L_12627058;
L_1262704a:;
  /* 1262704a push 2 */
  push32((uint32_t)(0x2u));
  /* 1262704c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262704f push edx */
  push32((uint32_t)(EDX));
  /* 12627050 call 0x12624070 */
  push32(0x12627055u); f_12624070();
  /* 12627055 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12627058:;
  /* 12627058 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1262705a call 0x12627080 */
  push32(0x1262705fu); f_12627080();
  /* 1262705f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12627062:;
  /* 12627062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627065 mov ecx, dword ptr [eax*4 + 0x1264db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264db40)));
  /* 1262706c push ecx */
  push32((uint32_t)(ECX));
  /* 1262706d call dword ptr [0x1265233c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265233c))), 0x12627073u);
  /* 12627073 mov esp, ebp */
  ESP = (EBP);
  /* 12627075 pop ebp */
  EBP = (pop32());
  /* 12627076 ret  */
  ESPCHK(0x12626fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007080 @ 0x12627080 (22 bytes, 8 insns) */
void f_12627080(void) {
  FTRACE(0x12627080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627080 push ebp */
  push32((uint32_t)(EBP));
  /* 12627081 mov ebp, esp */
  EBP = (ESP);
  /* 12627083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627086 mov ecx, dword ptr [eax*4 + 0x1264db40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1264db40)));
  /* 1262708d push ecx */
  push32((uint32_t)(ECX));
  /* 1262708e call dword ptr [0x12652340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652340))), 0x12627094u);
  /* 12627094 pop ebp */
  EBP = (pop32());
  /* 12627095 ret  */
  ESPCHK(0x12627080u, _esp0);
  ESP += 4; return;
}

/* FUN_100070a0 @ 0x126270a0 (26 bytes, 10 insns) */
void f_126270a0(void) {
  FTRACE(0x126270a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126270a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126270a1 mov ebp, esp */
  EBP = (ESP);
  /* 126270a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126270a6 push eax */
  push32((uint32_t)(EAX));
  /* 126270a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 126270a9 call dword ptr [0x12652344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652344))), 0x126270afu);
  /* 126270af push 0xff */
  push32((uint32_t)(0xffu));
  /* 126270b4 call dword ptr [0x126522c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522c8))), 0x126270bau);
  /* 126270ba pop ebp */
  EBP = (pop32());
  /* 126270bb ret  */
  ESPCHK(0x126270a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x126270c0 (446 bytes, 130 insns) */
void f_126270c0(void) {
  FTRACE(0x126270c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126270c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126270c1 mov ebp, esp */
  EBP = (ESP);
  /* 126270c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126270c6 call 0x12623020 */
  push32(0x126270cbu); f_12623020();
  /* 126270cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126270ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126270d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 126270d4 push ecx */
  push32((uint32_t)(ECX));
  /* 126270d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126270d8 push edx */
  push32((uint32_t)(EDX));
  /* 126270d9 call 0x12627280 */
  push32(0x126270deu); f_12627280();
  /* 126270de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126270e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 126270e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126270e8 je 0x126270f3 */
  if (C.zf) goto L_126270f3;
  /* 126270ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126270ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126270f1 jne 0x12627102 */
  if (!C.zf) goto L_12627102;
L_126270f3:;
  /* 126270f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126270f6 push ecx */
  push32((uint32_t)(ECX));
  /* 126270f7 call dword ptr [0x12652348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652348))), 0x126270fdu);
  /* 126270fd jmp 0x1262727a */
  goto L_1262727a;
L_12627102:;
  /* 12627102 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12627105 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627109 jne 0x1262711f */
  if (!C.zf) goto L_1262711f;
  /* 1262710b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262710e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12627115 mov eax, 1 */
  EAX = (0x1u);
  /* 1262711a jmp 0x1262727a */
  goto L_1262727a;
L_1262711f:;
  /* 1262711f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12627122 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627126 jne 0x12627130 */
  if (!C.zf) goto L_12627130;
  /* 12627128 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1262712b jmp 0x1262727a */
  goto L_1262727a;
L_12627130:;
  /* 12627130 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12627133 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12627136 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12627139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262713c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1262713f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12627142 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627145 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627148 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1262714b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262714e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627152 jne 0x12627257 */
  if (!C.zf) goto L_12627257;
  /* 12627158 mov eax, dword ptr [0x1264dc78] */
  EAX = (r32((uint32_t)(0x1264dc78)));
  /* 1262715d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12627160 jmp 0x1262716b */
  goto L_1262716b;
L_12627162:;
  /* 12627162 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12627165 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627168 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1262716b:;
  /* 1262716b mov edx, dword ptr [0x1264dc78] */
  EDX = (r32((uint32_t)(0x1264dc78)));
  /* 12627171 add edx, dword ptr [0x1264dc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1264dc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627177 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262717a jge 0x12627192 */
  if ((C.sf==C.of)) goto L_12627192;
  /* 1262717c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1262717f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12627182 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627185 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12627188 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12627190 jmp 0x12627162 */
  goto L_12627162;
L_12627192:;
  /* 12627192 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627195 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12627198 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1262719b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262719e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126271a4 jne 0x126271b5 */
  if (!C.zf) goto L_126271b5;
  /* 126271a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126271a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 126271b0 jmp 0x1262723d */
  goto L_1262723d;
L_126271b5:;
  /* 126271b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126271b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126271be jne 0x126271cc */
  if (!C.zf) goto L_126271cc;
  /* 126271c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126271c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 126271ca jmp 0x1262723d */
  goto L_1262723d;
L_126271cc:;
  /* 126271cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 126271cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126271d5 jne 0x126271e3 */
  if (!C.zf) goto L_126271e3;
  /* 126271d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126271da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 126271e1 jmp 0x1262723d */
  goto L_1262723d;
L_126271e3:;
  /* 126271e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 126271e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126271ec jne 0x126271fa */
  if (!C.zf) goto L_126271fa;
  /* 126271ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 126271f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 126271f8 jmp 0x1262723d */
  goto L_1262723d;
L_126271fa:;
  /* 126271fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 126271fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627203 jne 0x12627211 */
  if (!C.zf) goto L_12627211;
  /* 12627205 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627208 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1262720f jmp 0x1262723d */
  goto L_1262723d;
L_12627211:;
  /* 12627211 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12627214 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262721a jne 0x12627228 */
  if (!C.zf) goto L_12627228;
  /* 1262721c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262721f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 12627226 jmp 0x1262723d */
  goto L_1262723d;
L_12627228:;
  /* 12627228 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262722b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627231 jne 0x1262723d */
  if (!C.zf) goto L_1262723d;
  /* 12627233 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627236 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1262723d:;
  /* 1262723d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627240 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 12627243 push edx */
  push32((uint32_t)(EDX));
  /* 12627244 push 8 */
  push32((uint32_t)(0x8u));
  /* 12627246 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12627249u);
  /* 12627249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262724c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262724f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12627252 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12627255 jmp 0x1262726e */
  goto L_1262726e;
L_12627257:;
  /* 12627257 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262725a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12627261 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12627264 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12627267 push ecx */
  push32((uint32_t)(ECX));
  /* 12627268 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1262726bu);
  /* 1262726b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1262726e:;
  /* 1262726e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627271 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12627274 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12627277 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1262727a:;
  /* 1262727a mov esp, ebp */
  ESP = (EBP);
  /* 1262727c pop ebp */
  EBP = (pop32());
  /* 1262727d ret  */
  ESPCHK(0x126270c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x12627280 (89 bytes, 35 insns) */
void f_12627280(void) {
  FTRACE(0x12627280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627280 push ebp */
  push32((uint32_t)(EBP));
  /* 12627281 mov ebp, esp */
  EBP = (ESP);
  /* 12627283 push ecx */
  push32((uint32_t)(ECX));
  /* 12627284 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627287 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1262728a:;
  /* 1262728a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262728d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1262728f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627292 je 0x126272b2 */
  if (C.zf) goto L_126272b2;
  /* 12627294 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627297 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262729a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262729d mov ecx, dword ptr [0x1264dc84] */
  ECX = (r32((uint32_t)(0x1264dc84)));
  /* 126272a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126272a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126272a9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126272ab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126272ae jae 0x126272b2 */
  if (!C.cf) goto L_126272b2;
  /* 126272b0 jmp 0x1262728a */
  goto L_1262728a;
L_126272b2:;
  /* 126272b2 mov eax, dword ptr [0x1264dc84] */
  EAX = (r32((uint32_t)(0x1264dc84)));
  /* 126272b7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 126272ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126272bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 126272bf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126272c2 jae 0x126272ce */
  if (!C.cf) goto L_126272ce;
  /* 126272c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 126272c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 126272c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126272cc je 0x126272d2 */
  if (C.zf) goto L_126272d2;
L_126272ce:;
  /* 126272ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126272d0 jmp 0x126272d5 */
  goto L_126272d5;
L_126272d2:;
  /* 126272d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_126272d5:;
  /* 126272d5 mov esp, ebp */
  ESP = (EBP);
  /* 126272d7 pop ebp */
  EBP = (pop32());
  /* 126272d8 ret  */
  ESPCHK(0x12627280u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x126272e0 (48 bytes, 17 insns) */
void f_126272e0(void) {
  FTRACE(0x126272e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126272e0 push ebp */
  push32((uint32_t)(EBP));
  /* 126272e1 mov ebp, esp */
  EBP = (ESP);
  /* 126272e3 push ecx */
  push32((uint32_t)(ECX));
  /* 126272e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 126272e6 call 0x12626fe0 */
  push32(0x126272ebu); f_12626fe0();
  /* 126272eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126272ee mov eax, dword ptr [0x1264f6fc] */
  EAX = (r32((uint32_t)(0x1264f6fc)));
  /* 126272f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126272f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126272f9 mov dword ptr [0x1264f6fc], ecx */
  w32((uint32_t)(0x1264f6fc), (ECX));
  /* 126272ff push 9 */
  push32((uint32_t)(0x9u));
  /* 12627301 call 0x12627080 */
  push32(0x12627306u); f_12627080();
  /* 12627306 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627309 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262730c mov esp, ebp */
  ESP = (EBP);
  /* 1262730e pop ebp */
  EBP = (pop32());
  /* 1262730f ret  */
  ESPCHK(0x126272e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x12627310 (10 bytes, 5 insns) */
void f_12627310(void) {
  FTRACE(0x12627310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627310 push ebp */
  push32((uint32_t)(EBP));
  /* 12627311 mov ebp, esp */
  EBP = (ESP);
  /* 12627313 mov eax, dword ptr [0x1264f6fc] */
  EAX = (r32((uint32_t)(0x1264f6fc)));
  /* 12627318 pop ebp */
  EBP = (pop32());
  /* 12627319 ret  */
  ESPCHK(0x12627310u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x12627320 (45 bytes, 19 insns) */
void f_12627320(void) {
  FTRACE(0x12627320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627320 push ebp */
  push32((uint32_t)(EBP));
  /* 12627321 mov ebp, esp */
  EBP = (ESP);
  /* 12627323 push ecx */
  push32((uint32_t)(ECX));
  /* 12627324 mov eax, dword ptr [0x1264f6fc] */
  EAX = (r32((uint32_t)(0x1264f6fc)));
  /* 12627329 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1262732c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627330 je 0x12627340 */
  if (C.zf) goto L_12627340;
  /* 12627332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627335 push ecx */
  push32((uint32_t)(ECX));
  /* 12627336 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x12627339u);
  /* 12627339 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262733c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262733e jne 0x12627344 */
  if (!C.zf) goto L_12627344;
L_12627340:;
  /* 12627340 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12627342 jmp 0x12627349 */
  goto L_12627349;
L_12627344:;
  /* 12627344 mov eax, 1 */
  EAX = (0x1u);
L_12627349:;
  /* 12627349 mov esp, ebp */
  ESP = (EBP);
  /* 1262734b pop ebp */
  EBP = (pop32());
  /* 1262734c ret  */
  ESPCHK(0x12627320u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12627350 (88 bytes, 40 insns) */
void f_12627350(void) {
  FTRACE(0x12627350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627350 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12627354 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12627358 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1262735a je 0x126273a3 */
  if (C.zf) goto L_126273a3;
  /* 1262735c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262735e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12627362 push edi */
  push32((uint32_t)(EDI));
  /* 12627363 mov edi, ecx */
  EDI = (ECX);
  /* 12627365 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627368 jb 0x12627397 */
  if (C.cf) goto L_12627397;
  /* 1262736a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1262736c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1262736f je 0x12627379 */
  if (C.zf) goto L_12627379;
  /* 12627371 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12627373:;
  /* 12627373 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12627375 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12627376 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12627377 jne 0x12627373 */
  if (!C.zf) goto L_12627373;
L_12627379:;
  /* 12627379 mov ecx, eax */
  ECX = (EAX);
  /* 1262737b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1262737e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627380 mov ecx, eax */
  ECX = (EAX);
  /* 12627382 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12627385 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627387 mov ecx, edx */
  ECX = (EDX);
  /* 12627389 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1262738c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1262738f je 0x12627397 */
  if (C.zf) goto L_12627397;
  /* 12627391 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12627393 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12627395 je 0x1262739d */
  if (C.zf) goto L_1262739d;
L_12627397:;
  /* 12627397 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12627399 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1262739a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1262739b jne 0x12627397 */
  if (!C.zf) goto L_12627397;
L_1262739d:;
  /* 1262739d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 126273a1 pop edi */
  EDI = (pop32());
  /* 126273a2 ret  */
  ESPCHK(0x12627350u, _esp0);
  ESP += 4; return;
L_126273a3:;
  /* 126273a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 126273a7 ret  */
  ESPCHK(0x12627350u, _esp0);
  ESP += 4; return;
}

/* FUN_100073b0 @ 0x126273b0 (23 bytes, 10 insns) */
void f_126273b0(void) {
  FTRACE(0x126273b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126273b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126273b1 mov ebp, esp */
  EBP = (ESP);
  /* 126273b3 mov eax, dword ptr [0x1264f6f8] */
  EAX = (r32((uint32_t)(0x1264f6f8)));
  /* 126273b8 push eax */
  push32((uint32_t)(EAX));
  /* 126273b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126273bc push ecx */
  push32((uint32_t)(ECX));
  /* 126273bd call 0x126273d0 */
  push32(0x126273c2u); f_126273d0();
  /* 126273c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126273c5 pop ebp */
  EBP = (pop32());
  /* 126273c6 ret  */
  ESPCHK(0x126273b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x126273d0 (87 bytes, 34 insns) */
void f_126273d0(void) {
  FTRACE(0x126273d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126273d0 push ebp */
  push32((uint32_t)(EBP));
  /* 126273d1 mov ebp, esp */
  EBP = (ESP);
  /* 126273d3 push ecx */
  push32((uint32_t)(ECX));
  /* 126273d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126273d8 jbe 0x126273de */
  if ((C.cf||C.zf)) goto L_126273de;
  /* 126273da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126273dc jmp 0x12627423 */
  goto L_12627423;
L_126273de:;
  /* 126273de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126273e2 ja 0x126273f5 */
  if ((!C.cf&&!C.zf)) goto L_126273f5;
  /* 126273e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126273e7 push eax */
  push32((uint32_t)(EAX));
  /* 126273e8 call 0x12627430 */
  push32(0x126273edu); f_12627430();
  /* 126273ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126273f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 126273f3 jmp 0x126273fc */
  goto L_126273fc;
L_126273f5:;
  /* 126273f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_126273fc:;
  /* 126273fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627400 jne 0x12627408 */
  if (!C.zf) goto L_12627408;
  /* 12627402 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627406 jne 0x1262740d */
  if (!C.zf) goto L_1262740d;
L_12627408:;
  /* 12627408 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262740b jmp 0x12627423 */
  goto L_12627423;
L_1262740d:;
  /* 1262740d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627410 push ecx */
  push32((uint32_t)(ECX));
  /* 12627411 call 0x12627320 */
  push32(0x12627416u); f_12627320();
  /* 12627416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627419 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262741b jne 0x12627421 */
  if (!C.zf) goto L_12627421;
  /* 1262741d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262741f jmp 0x12627423 */
  goto L_12627423;
L_12627421:;
  /* 12627421 jmp 0x126273de */
  goto L_126273de;
L_12627423:;
  /* 12627423 mov esp, ebp */
  ESP = (EBP);
  /* 12627425 pop ebp */
  EBP = (pop32());
  /* 12627426 ret  */
  ESPCHK(0x126273d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x12627430 (109 bytes, 37 insns) */
void f_12627430(void) {
  FTRACE(0x12627430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627430 push ebp */
  push32((uint32_t)(EBP));
  /* 12627431 mov ebp, esp */
  EBP = (ESP);
  /* 12627433 push ecx */
  push32((uint32_t)(ECX));
  /* 12627434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627437 cmp eax, dword ptr [0x1264dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262743d ja 0x1262746d */
  if ((!C.cf&&!C.zf)) goto L_1262746d;
  /* 1262743f push 9 */
  push32((uint32_t)(0x9u));
  /* 12627441 call 0x12626fe0 */
  push32(0x12627446u); f_12626fe0();
  /* 12627446 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627449 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262744c push ecx */
  push32((uint32_t)(ECX));
  /* 1262744d call 0x12627f70 */
  push32(0x12627452u); f_12627f70();
  /* 12627452 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627455 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12627458 push 9 */
  push32((uint32_t)(0x9u));
  /* 1262745a call 0x12627080 */
  push32(0x1262745fu); f_12627080();
  /* 1262745f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627462 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627466 je 0x1262746d */
  if (C.zf) goto L_1262746d;
  /* 12627468 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262746b jmp 0x12627499 */
  goto L_12627499;
L_1262746d:;
  /* 1262746d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627471 jne 0x1262747a */
  if (!C.zf) goto L_1262747a;
  /* 12627473 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1262747a:;
  /* 1262747a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262747d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627480 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12627483 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12627486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627489 push eax */
  push32((uint32_t)(EAX));
  /* 1262748a push 0 */
  push32((uint32_t)(0x0u));
  /* 1262748c mov ecx, dword ptr [0x12650eac] */
  ECX = (r32((uint32_t)(0x12650eac)));
  /* 12627492 push ecx */
  push32((uint32_t)(ECX));
  /* 12627493 call dword ptr [0x1265234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265234c))), 0x12627499u);
L_12627499:;
  /* 12627499 mov esp, ebp */
  ESP = (EBP);
  /* 1262749b pop ebp */
  EBP = (pop32());
  /* 1262749c ret  */
  ESPCHK(0x12627430u, _esp0);
  ESP += 4; return;
}

/* FUN_100074a0 @ 0x126274a0 (10 bytes, 5 insns) */
void f_126274a0(void) {
  FTRACE(0x126274a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126274a0 push ebp */
  push32((uint32_t)(EBP));
  /* 126274a1 mov ebp, esp */
  EBP = (ESP);
  /* 126274a3 mov eax, 1 */
  EAX = (0x1u);
  /* 126274a8 pop ebp */
  EBP = (pop32());
  /* 126274a9 ret  */
  ESPCHK(0x126274a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100074b0 @ 0x126274b0 (173 bytes, 59 insns) */
void f_126274b0(void) {
  FTRACE(0x126274b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126274b0 push ebp */
  push32((uint32_t)(EBP));
  /* 126274b1 mov ebp, esp */
  EBP = (ESP);
  /* 126274b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 126274b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126274ba jbe 0x126274c3 */
  if ((C.cf||C.zf)) goto L_126274c3;
  /* 126274bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 126274be jmp 0x12627559 */
  goto L_12627559;
L_126274c3:;
  /* 126274c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 126274c5 call 0x12626fe0 */
  push32(0x126274cau); f_12626fe0();
  /* 126274ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126274cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126274d0 push eax */
  push32((uint32_t)(EAX));
  /* 126274d1 call 0x126278e0 */
  push32(0x126274d6u); f_126278e0();
  /* 126274d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126274d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 126274dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126274e0 je 0x12627521 */
  if (C.zf) goto L_12627521;
  /* 126274e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 126274e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126274ec cmp ecx, dword ptr [0x1264dc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1264dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126274f2 ja 0x12627512 */
  if ((!C.cf&&!C.zf)) goto L_12627512;
  /* 126274f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126274f7 push edx */
  push32((uint32_t)(EDX));
  /* 126274f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126274fb push eax */
  push32((uint32_t)(EAX));
  /* 126274fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 126274ff push ecx */
  push32((uint32_t)(ECX));
  /* 12627500 call 0x126287b0 */
  push32(0x12627505u); f_126287b0();
  /* 12627505 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627508 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262750a je 0x12627512 */
  if (C.zf) goto L_12627512;
  /* 1262750c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262750f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12627512:;
  /* 12627512 push 9 */
  push32((uint32_t)(0x9u));
  /* 12627514 call 0x12627080 */
  push32(0x12627519u); f_12627080();
  /* 12627519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262751c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1262751f jmp 0x12627559 */
  goto L_12627559;
L_12627521:;
  /* 12627521 push 9 */
  push32((uint32_t)(0x9u));
  /* 12627523 call 0x12627080 */
  push32(0x12627528u); f_12627080();
  /* 12627528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262752b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262752f jne 0x12627538 */
  if (!C.zf) goto L_12627538;
  /* 12627531 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12627538:;
  /* 12627538 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262753b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1262753e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12627540 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12627543 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627546 push ecx */
  push32((uint32_t)(ECX));
  /* 12627547 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262754a push edx */
  push32((uint32_t)(EDX));
  /* 1262754b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1262754d mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 12627552 push eax */
  push32((uint32_t)(EAX));
  /* 12627553 call dword ptr [0x12652350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652350))), 0x12627559u);
L_12627559:;
  /* 12627559 mov esp, ebp */
  ESP = (EBP);
  /* 1262755b pop ebp */
  EBP = (pop32());
  /* 1262755c ret  */
  ESPCHK(0x126274b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007560 @ 0x12627560 (490 bytes, 165 insns) */
void f_12627560(void) {
  FTRACE(0x12627560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627560 push ebp */
  push32((uint32_t)(EBP));
  /* 12627561 mov ebp, esp */
  EBP = (ESP);
  /* 12627563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627566 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262756a jne 0x1262757d */
  if (!C.zf) goto L_1262757d;
  /* 1262756c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1262756f push eax */
  push32((uint32_t)(EAX));
  /* 12627570 call 0x126273b0 */
  push32(0x12627575u); f_126273b0();
  /* 12627575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627578 jmp 0x12627746 */
  goto L_12627746;
L_1262757d:;
  /* 1262757d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627581 jne 0x12627596 */
  if (!C.zf) goto L_12627596;
  /* 12627583 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627586 push ecx */
  push32((uint32_t)(ECX));
  /* 12627587 call 0x12627750 */
  push32(0x1262758cu); f_12627750();
  /* 1262758c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262758f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12627591 jmp 0x12627746 */
  goto L_12627746;
L_12627596:;
  /* 12627596 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1262759d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126275a1 ja 0x12627719 */
  if ((!C.cf&&!C.zf)) goto L_12627719;
  /* 126275a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 126275a9 call 0x12626fe0 */
  push32(0x126275aeu); f_12626fe0();
  /* 126275ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126275b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126275b4 push edx */
  push32((uint32_t)(EDX));
  /* 126275b5 call 0x126278e0 */
  push32(0x126275bau); f_126278e0();
  /* 126275ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126275bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 126275c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126275c4 je 0x126276dc */
  if (C.zf) goto L_126276dc;
  /* 126275ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 126275cd cmp eax, dword ptr [0x1264dc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1264dc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126275d3 ja 0x12627650 */
  if ((!C.cf&&!C.zf)) goto L_12627650;
  /* 126275d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 126275d8 push ecx */
  push32((uint32_t)(ECX));
  /* 126275d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 126275dc push edx */
  push32((uint32_t)(EDX));
  /* 126275dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 126275e0 push eax */
  push32((uint32_t)(EAX));
  /* 126275e1 call 0x126287b0 */
  push32(0x126275e6u); f_126287b0();
  /* 126275e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126275e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126275eb je 0x126275f5 */
  if (C.zf) goto L_126275f5;
  /* 126275ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126275f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 126275f3 jmp 0x12627650 */
  goto L_12627650;
L_126275f5:;
  /* 126275f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126275f8 push edx */
  push32((uint32_t)(EDX));
  /* 126275f9 call 0x12627f70 */
  push32(0x126275feu); f_12627f70();
  /* 126275fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627601 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12627604 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627608 je 0x12627650 */
  if (C.zf) goto L_12627650;
  /* 1262760a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262760d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12627610 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627613 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12627616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627619 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262761c jae 0x12627626 */
  if (!C.cf) goto L_12627626;
  /* 1262761e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627621 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12627624 jmp 0x1262762c */
  goto L_1262762c;
L_12627626:;
  /* 12627626 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627629 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1262762c:;
  /* 1262762c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1262762f push edx */
  push32((uint32_t)(EDX));
  /* 12627630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627633 push eax */
  push32((uint32_t)(EAX));
  /* 12627634 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12627637 push ecx */
  push32((uint32_t)(ECX));
  /* 12627638 call 0x12629ec0 */
  push32(0x1262763du); f_12629ec0();
  /* 1262763d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627640 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627643 push edx */
  push32((uint32_t)(EDX));
  /* 12627644 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12627647 push eax */
  push32((uint32_t)(EAX));
  /* 12627648 call 0x126279a0 */
  push32(0x1262764du); f_126279a0();
  /* 1262764d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12627650:;
  /* 12627650 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627654 jne 0x126276d0 */
  if (!C.zf) goto L_126276d0;
  /* 12627656 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262765a jne 0x12627663 */
  if (!C.zf) goto L_12627663;
  /* 1262765c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12627663:;
  /* 12627663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627666 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12627669 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1262766c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1262766f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627672 push edx */
  push32((uint32_t)(EDX));
  /* 12627673 push 0 */
  push32((uint32_t)(0x0u));
  /* 12627675 mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 1262767a push eax */
  push32((uint32_t)(EAX));
  /* 1262767b call dword ptr [0x1265234c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265234c))), 0x12627681u);
  /* 12627681 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12627684 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627688 je 0x126276d0 */
  if (C.zf) goto L_126276d0;
  /* 1262768a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262768d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12627690 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12627693 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12627696 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627699 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262769c jae 0x126276a6 */
  if (!C.cf) goto L_126276a6;
  /* 1262769e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 126276a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 126276a4 jmp 0x126276ac */
  goto L_126276ac;
L_126276a6:;
  /* 126276a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126276a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_126276ac:;
  /* 126276ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 126276af push eax */
  push32((uint32_t)(EAX));
  /* 126276b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 126276b3 push ecx */
  push32((uint32_t)(ECX));
  /* 126276b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 126276b7 push edx */
  push32((uint32_t)(EDX));
  /* 126276b8 call 0x12629ec0 */
  push32(0x126276bdu); f_12629ec0();
  /* 126276bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126276c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126276c3 push eax */
  push32((uint32_t)(EAX));
  /* 126276c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 126276c7 push ecx */
  push32((uint32_t)(ECX));
  /* 126276c8 call 0x126279a0 */
  push32(0x126276cdu); f_126279a0();
  /* 126276cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_126276d0:;
  /* 126276d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 126276d2 call 0x12627080 */
  push32(0x126276d7u); f_12627080();
  /* 126276d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126276da jmp 0x12627719 */
  goto L_12627719;
L_126276dc:;
  /* 126276dc push 9 */
  push32((uint32_t)(0x9u));
  /* 126276de call 0x12627080 */
  push32(0x126276e3u); f_12627080();
  /* 126276e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126276e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 126276ea jne 0x126276f3 */
  if (!C.zf) goto L_126276f3;
  /* 126276ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_126276f3:;
  /* 126276f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 126276f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 126276f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 126276fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 126276ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627702 push eax */
  push32((uint32_t)(EAX));
  /* 12627703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627706 push ecx */
  push32((uint32_t)(ECX));
  /* 12627707 push 0 */
  push32((uint32_t)(0x0u));
  /* 12627709 mov edx, dword ptr [0x12650eac] */
  EDX = (r32((uint32_t)(0x12650eac)));
  /* 1262770f push edx */
  push32((uint32_t)(EDX));
  /* 12627710 call dword ptr [0x12652350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12652350))), 0x12627716u);
  /* 12627716 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12627719:;
  /* 12627719 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262771d jne 0x12627728 */
  if (!C.zf) goto L_12627728;
  /* 1262771f cmp dword ptr [0x1264f6f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1264f6f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627726 jne 0x1262772d */
  if (!C.zf) goto L_1262772d;
L_12627728:;
  /* 12627728 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1262772b jmp 0x12627746 */
  goto L_12627746;
L_1262772d:;
  /* 1262772d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12627730 push eax */
  push32((uint32_t)(EAX));
  /* 12627731 call 0x12627320 */
  push32(0x12627736u); f_12627320();
  /* 12627736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627739 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1262773b jne 0x12627741 */
  if (!C.zf) goto L_12627741;
  /* 1262773d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1262773f jmp 0x12627746 */
  goto L_12627746;
L_12627741:;
  /* 12627741 jmp 0x12627596 */
  goto L_12627596;
L_12627746:;
  /* 12627746 mov esp, ebp */
  ESP = (EBP);
  /* 12627748 pop ebp */
  EBP = (pop32());
  /* 12627749 ret  */
  ESPCHK(0x12627560u, _esp0);
  ESP += 4; return;
}

/* FUN_10007750 @ 0x12627750 (104 bytes, 38 insns) */
void f_12627750(void) {
  FTRACE(0x12627750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627750 push ebp */
  push32((uint32_t)(EBP));
  /* 12627751 mov ebp, esp */
  EBP = (ESP);
  /* 12627753 push ecx */
  push32((uint32_t)(ECX));
  /* 12627754 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627758 jne 0x1262775c */
  if (!C.zf) goto L_1262775c;
  /* 1262775a jmp 0x126277b4 */
  goto L_126277b4;
L_1262775c:;
  /* 1262775c push 9 */
  push32((uint32_t)(0x9u));
  /* 1262775e call 0x12626fe0 */
  push32(0x12627763u); f_12626fe0();
  /* 12627763 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12627769 push eax */
  push32((uint32_t)(EAX));
  /* 1262776a call 0x126278e0 */
  push32(0x1262776fu); f_126278e0();
  /* 1262776f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627772 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12627775 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12627779 je 0x12627797 */
  if (C.zf) goto L_12627797;
  /* 1262777b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1262777e push ecx */
  push32((uint32_t)(ECX));
  /* 1262777f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627782 push edx */
  push32((uint32_t)(EDX));
  /* 12627783 call 0x126279a0 */
  push32(0x12627788u); f_126279a0();
  /* 12627788 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1262778b push 9 */
  push32((uint32_t)(0x9u));
  /* 1262778d call 0x12627080 */
  push32(0x12627792u); f_12627080();
  /* 12627792 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12627795 jmp 0x126277b4 */
  goto L_126277b4;
L_12627797:;
  /* 12627797 push 9 */
  push32((uint32_t)(0x9u));
  /* 12627799 call 0x12627080 */
  push32(0x1262779eu); f_12627080();
  /* 1262779e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126277a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 126277a4 push eax */
  push32((uint32_t)(EAX));
  /* 126277a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 126277a7 mov ecx, dword ptr [0x12650eac] */
  ECX = (r32((uint32_t)(0x12650eac)));
  /* 126277ad push ecx */
  push32((uint32_t)(ECX));
  /* 126277ae call dword ptr [0x1265232c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265232c))), 0x126277b4u);
L_126277b4:;
  /* 126277b4 mov esp, ebp */
  ESP = (EBP);
  /* 126277b6 pop ebp */
  EBP = (pop32());
  /* 126277b7 ret  */
  ESPCHK(0x12627750u, _esp0);
  ESP += 4; return;
}

/* FUN_100077c0 @ 0x126277c0 (116 bytes, 34 insns) */
void f_126277c0(void) {
  FTRACE(0x126277c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 126277c0 push ebp */
  push32((uint32_t)(EBP));
  /* 126277c1 mov ebp, esp */
  EBP = (ESP);
  /* 126277c3 push ecx */
  push32((uint32_t)(ECX));
  /* 126277c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 126277cb push 9 */
  push32((uint32_t)(0x9u));
  /* 126277cd call 0x12626fe0 */
  push32(0x126277d2u); f_12626fe0();
  /* 126277d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126277d5 call 0x12628ed0 */
  push32(0x126277dau); f_12628ed0();
  /* 126277da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 126277dc jge 0x126277e5 */
  if ((C.sf==C.of)) goto L_126277e5;
  /* 126277de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_126277e5:;
  /* 126277e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 126277e7 call 0x12627080 */
  push32(0x126277ecu); f_12627080();
  /* 126277ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 126277ef push 0 */
  push32((uint32_t)(0x0u));
  /* 126277f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 126277f3 mov eax, dword ptr [0x12650eac] */
  EAX = (r32((uint32_t)(0x12650eac)));
  /* 126277f8 push eax */
  push32((uint32_t)(EAX));
  /* 126277f9 call dword ptr [0x1265230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1265230c))), 0x126277ffu);
  /* 126277ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12627801 jne 0x1262782d */
  if (!C.zf) goto L_1262782d;
  /* 12627803 call dword ptr [0x126522ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x126522ec))), 0x12627809u);
  /* 12627809 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1262780c jne 0x12627826 */
  if (!C.zf) goto L_12627826;
  /* 1262780e call 0x1262b4c0 */
  push32(0x12627813u); f_1262b4c0();
  /* 12627813 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12627819 call 0x1262b4b0 */
  push32(0x1262781eu); f_1262b4b0();
  /* 1262781e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12627824 jmp 0x1262782d */
  goto L_1262782d;
L_12627826:;
  /* 12627826 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1262782d:;
  /* 1262782d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12627830 mov esp, ebp */
  ESP = (EBP);
  /* 12627832 pop ebp */
  EBP = (pop32());
  /* 12627833 ret  */
  ESPCHK(0x126277c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x12627840 (10 bytes, 5 insns) */
void f_12627840(void) {
  FTRACE(0x12627840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12627840 push ebp */
  push32((uint32_t)(EBP));
  /* 12627841 mov ebp, esp */
  EBP = (ESP);
  /* 12627843 call 0x126277c0 */
  push32(0x12627848u); f_126277c0();
  /* 12627848 pop ebp */
  EBP = (pop32());
  /* 12627849 ret  */
  ESPCHK(0x12627840u, _esp0);
  ESP += 4; return;
}

