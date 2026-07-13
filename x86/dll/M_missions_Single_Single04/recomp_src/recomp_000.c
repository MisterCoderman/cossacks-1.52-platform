#include "recomp.h"

/* OnInit @ 0x10c91005 (5 bytes, 1 insns) */
void f_10c91005(void) {
  FTRACE(0x10c91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91005 jmp 0x10c91090 */
  f_10c91090(); return;
}

/* thunk_FUN_10001030 @ 0x10c9100a (5 bytes, 1 insns) */
void f_10c9100a(void) {
  FTRACE(0x10c9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9100a jmp 0x10c91030 */
  f_10c91030(); return;
}

/* ProcessScenary @ 0x10c9100f (5 bytes, 1 insns) */
void f_10c9100f(void) {
  FTRACE(0x10c9100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c9100f jmp 0x10c91170 */
  f_10c91170(); return;
}

/* FUN_10001030 @ 0x10c91030 (67 bytes, 26 insns) */
void f_10c91030(void) {
  FTRACE(0x10c91030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91030 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91031 mov ebp, esp */
  EBP = (ESP);
  /* 10c91033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c91036 push ebx */
  push32((uint32_t)(EBX));
  /* 10c91037 push esi */
  push32((uint32_t)(ESI));
  /* 10c91038 push edi */
  push32((uint32_t)(EDI));
  /* 10c91039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10c9103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10c91041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c91046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c91048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91052 je 0x10c91056 */
  if (C.zf) goto L_10c91056;
  /* 10c91054 jmp 0x10c9105b */
  goto L_10c9105b;
L_10c91056:;
  /* 10c91056 call 0x10c91005 */
  push32(0x10c9105bu); f_10c91005();
L_10c9105b:;
  /* 10c9105b mov eax, 1 */
  EAX = (0x1u);
  /* 10c91060 pop edi */
  EDI = (pop32());
  /* 10c91061 pop esi */
  ESI = (pop32());
  /* 10c91062 pop ebx */
  EBX = (pop32());
  /* 10c91063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91068 call 0x10c914d0 */
  push32(0x10c9106du); f_10c914d0();
  /* 10c9106d mov esp, ebp */
  ESP = (EBP);
  /* 10c9106f pop ebp */
  EBP = (pop32());
  /* 10c91070 ret 0xc */
  ESPCHK(0x10c91030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10c91090 (172 bytes, 58 insns) */
void f_10c91090(void) {
  FTRACE(0x10c91090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91090 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91091 mov ebp, esp */
  EBP = (ESP);
  /* 10c91093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c91096 push ebx */
  push32((uint32_t)(EBX));
  /* 10c91097 push esi */
  push32((uint32_t)(ESI));
  /* 10c91098 push edi */
  push32((uint32_t)(EDI));
  /* 10c91099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c9109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c910a8 mov esi, esp */
  ESI = (ESP);
  /* 10c910aa call dword ptr [0x10cc03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a4))), 0x10c910b0u);
  /* 10c910b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c910b2 call 0x10c914d0 */
  push32(0x10c910b7u); f_10c914d0();
  /* 10c910b7 mov esi, esp */
  ESI = (ESP);
  /* 10c910b9 push 0x10cb9024 */
  push32((uint32_t)(0x10cb9024u));
  /* 10c910be push 1 */
  push32((uint32_t)(0x1u));
  /* 10c910c0 call dword ptr [0x10cc03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a8))), 0x10c910c6u);
  /* 10c910c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c910c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c910cb call 0x10c914d0 */
  push32(0x10c910d0u); f_10c914d0();
  /* 10c910d0 mov esi, esp */
  ESI = (ESP);
  /* 10c910d2 push 0x10cb901c */
  push32((uint32_t)(0x10cb901cu));
  /* 10c910d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c910d9 call dword ptr [0x10cc03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a8))), 0x10c910dfu);
  /* 10c910df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c910e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c910e4 call 0x10c914d0 */
  push32(0x10c910e9u); f_10c914d0();
  /* 10c910e9 mov esi, esp */
  ESI = (ESP);
  /* 10c910eb push 6 */
  push32((uint32_t)(0x6u));
  /* 10c910ed push 1 */
  push32((uint32_t)(0x1u));
  /* 10c910ef call dword ptr [0x10cc03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a0))), 0x10c910f5u);
  /* 10c910f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c910f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c910fa call 0x10c914d0 */
  push32(0x10c910ffu); f_10c914d0();
  /* 10c910ff mov esi, esp */
  ESI = (ESP);
  /* 10c91101 push 6 */
  push32((uint32_t)(0x6u));
  /* 10c91103 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91105 call dword ptr [0x10cc03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a0))), 0x10c9110bu);
  /* 10c9110b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9110e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91110 call 0x10c914d0 */
  push32(0x10c91115u); f_10c914d0();
  /* 10c91115 mov esi, esp */
  ESI = (ESP);
  /* 10c91117 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c91119 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9111b call dword ptr [0x10cc03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc03a0))), 0x10c91121u);
  /* 10c91121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91126 call 0x10c914d0 */
  push32(0x10c9112bu); f_10c914d0();
  /* 10c9112b pop edi */
  EDI = (pop32());
  /* 10c9112c pop esi */
  ESI = (pop32());
  /* 10c9112d pop ebx */
  EBX = (pop32());
  /* 10c9112e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91131 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91133 call 0x10c914d0 */
  push32(0x10c91138u); f_10c914d0();
  /* 10c91138 mov esp, ebp */
  ESP = (EBP);
  /* 10c9113a pop ebp */
  EBP = (pop32());
  /* 10c9113b ret  */
  ESPCHK(0x10c91090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001170 @ 0x10c91170 (648 bytes, 201 insns) */
void f_10c91170(void) {
  FTRACE(0x10c91170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91170 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91171 mov ebp, esp */
  EBP = (ESP);
  /* 10c91173 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c91176 push ebx */
  push32((uint32_t)(EBX));
  /* 10c91177 push esi */
  push32((uint32_t)(ESI));
  /* 10c91178 push edi */
  push32((uint32_t)(EDI));
  /* 10c91179 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10c9117c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10c91181 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10c91186 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c91188 mov esi, esp */
  ESI = (ESP);
  /* 10c9118a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9118c call dword ptr [0x10cc0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0390))), 0x10c91192u);
  /* 10c91192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91195 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91197 call 0x10c914d0 */
  push32(0x10c9119cu); f_10c914d0();
  /* 10c9119c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c911a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c911a3 je 0x10c913e7 */
  if (C.zf) goto L_10c913e7;
  /* 10c911a9 mov esi, esp */
  ESI = (ESP);
  /* 10c911ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10c911ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10c911af call dword ptr [0x10cc0398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0398))), 0x10c911b5u);
  /* 10c911b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c911b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c911ba call 0x10c914d0 */
  push32(0x10c911bfu); f_10c914d0();
  /* 10c911bf mov esi, esp */
  ESI = (ESP);
  /* 10c911c1 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c911c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c911c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c911ca call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c911d0u);
  /* 10c911d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c911d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c911d5 call 0x10c914d0 */
  push32(0x10c911dau); f_10c914d0();
  /* 10c911da mov esi, esp */
  ESI = (ESP);
  /* 10c911dc push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c911e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c911e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c911e5 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c911ebu);
  /* 10c911eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c911ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c911f0 call 0x10c914d0 */
  push32(0x10c911f5u); f_10c914d0();
  /* 10c911f5 mov esi, esp */
  ESI = (ESP);
  /* 10c911f7 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c911fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c911fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91200 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91206u);
  /* 10c91206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9120b call 0x10c914d0 */
  push32(0x10c91210u); f_10c914d0();
  /* 10c91210 mov esi, esp */
  ESI = (ESP);
  /* 10c91212 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91217 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91219 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9121b call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91221u);
  /* 10c91221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91226 call 0x10c914d0 */
  push32(0x10c9122bu); f_10c914d0();
  /* 10c9122b mov esi, esp */
  ESI = (ESP);
  /* 10c9122d push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91232 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c91234 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91236 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c9123cu);
  /* 10c9123c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9123f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91241 call 0x10c914d0 */
  push32(0x10c91246u); f_10c914d0();
  /* 10c91246 mov esi, esp */
  ESI = (ESP);
  /* 10c91248 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c9124d push 4 */
  push32((uint32_t)(0x4u));
  /* 10c9124f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91251 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91257u);
  /* 10c91257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9125a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9125c call 0x10c914d0 */
  push32(0x10c91261u); f_10c914d0();
  /* 10c91261 mov esi, esp */
  ESI = (ESP);
  /* 10c91263 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91268 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c9126a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9126c call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91272u);
  /* 10c91272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91277 call 0x10c914d0 */
  push32(0x10c9127cu); f_10c914d0();
  /* 10c9127c mov esi, esp */
  ESI = (ESP);
  /* 10c9127e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91283 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91285 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91287 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c9128du);
  /* 10c9128d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91292 call 0x10c914d0 */
  push32(0x10c91297u); f_10c914d0();
  /* 10c91297 mov esi, esp */
  ESI = (ESP);
  /* 10c91299 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c9129e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c912a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c912a2 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c912a8u);
  /* 10c912a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c912ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c912ad call 0x10c914d0 */
  push32(0x10c912b2u); f_10c914d0();
  /* 10c912b2 mov esi, esp */
  ESI = (ESP);
  /* 10c912b4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c912b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c912bb push 1 */
  push32((uint32_t)(0x1u));
  /* 10c912bd call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c912c3u);
  /* 10c912c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c912c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c912c8 call 0x10c914d0 */
  push32(0x10c912cdu); f_10c914d0();
  /* 10c912cd mov esi, esp */
  ESI = (ESP);
  /* 10c912cf push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c912d4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c912d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c912d8 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c912deu);
  /* 10c912de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c912e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c912e3 call 0x10c914d0 */
  push32(0x10c912e8u); f_10c914d0();
  /* 10c912e8 mov esi, esp */
  ESI = (ESP);
  /* 10c912ea push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c912ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10c912f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c912f3 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c912f9u);
  /* 10c912f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c912fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c912fe call 0x10c914d0 */
  push32(0x10c91303u); f_10c914d0();
  /* 10c91303 mov esi, esp */
  ESI = (ESP);
  /* 10c91305 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c9130a push 3 */
  push32((uint32_t)(0x3u));
  /* 10c9130c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9130e call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91314u);
  /* 10c91314 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91317 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91319 call 0x10c914d0 */
  push32(0x10c9131eu); f_10c914d0();
  /* 10c9131e mov esi, esp */
  ESI = (ESP);
  /* 10c91320 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91325 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91327 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91329 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c9132fu);
  /* 10c9132f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91334 call 0x10c914d0 */
  push32(0x10c91339u); f_10c914d0();
  /* 10c91339 mov esi, esp */
  ESI = (ESP);
  /* 10c9133b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91342 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91344 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c9134au);
  /* 10c9134a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9134d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9134f call 0x10c914d0 */
  push32(0x10c91354u); f_10c914d0();
  /* 10c91354 mov esi, esp */
  ESI = (ESP);
  /* 10c91356 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c9135b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9135d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9135f call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91365u);
  /* 10c91365 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91368 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9136a call 0x10c914d0 */
  push32(0x10c9136fu); f_10c914d0();
  /* 10c9136f mov esi, esp */
  ESI = (ESP);
  /* 10c91371 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91376 push 5 */
  push32((uint32_t)(0x5u));
  /* 10c91378 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9137a call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c91380u);
  /* 10c91380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91385 call 0x10c914d0 */
  push32(0x10c9138au); f_10c914d0();
  /* 10c9138a mov esi, esp */
  ESI = (ESP);
  /* 10c9138c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10c91391 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c91393 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91395 call dword ptr [0x10cc039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc039c))), 0x10c9139bu);
  /* 10c9139b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9139e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c913a0 call 0x10c914d0 */
  push32(0x10c913a5u); f_10c914d0();
  /* 10c913a5 mov esi, esp */
  ESI = (ESP);
  /* 10c913a7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c913a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c913ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10c913ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10c913af push 0x10cb9038 */
  push32((uint32_t)(0x10cb9038u));
  /* 10c913b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c913b6 call dword ptr [0x10cc0394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0394))), 0x10c913bcu);
  /* 10c913bc add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c913bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c913c1 call 0x10c914d0 */
  push32(0x10c913c6u); f_10c914d0();
  /* 10c913c6 mov esi, esp */
  ESI = (ESP);
  /* 10c913c8 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c913ca push 1 */
  push32((uint32_t)(0x1u));
  /* 10c913cc push 1 */
  push32((uint32_t)(0x1u));
  /* 10c913ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c913d0 push 0x10cb902c */
  push32((uint32_t)(0x10cb902cu));
  /* 10c913d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c913d7 call dword ptr [0x10cc0394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0394))), 0x10c913ddu);
  /* 10c913dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c913e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c913e2 call 0x10c914d0 */
  push32(0x10c913e7u); f_10c914d0();
L_10c913e7:;
  /* 10c913e7 pop edi */
  EDI = (pop32());
  /* 10c913e8 pop esi */
  ESI = (pop32());
  /* 10c913e9 pop ebx */
  EBX = (pop32());
  /* 10c913ea add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c913ed cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c913ef call 0x10c914d0 */
  push32(0x10c913f4u); f_10c914d0();
  /* 10c913f4 mov esp, ebp */
  ESP = (EBP);
  /* 10c913f6 pop ebp */
  EBP = (pop32());
  /* 10c913f7 ret  */
  ESPCHK(0x10c91170u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10c914d0 (56 bytes, 28 insns) */
void f_10c914d0(void) {
  FTRACE(0x10c914d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c914d0 jne 0x10c914d3 */
  if (!C.zf) goto L_10c914d3;
  /* 10c914d2 ret  */
  ESPCHK(0x10c914d0u, _esp0);
  ESP += 4; return;
L_10c914d3:;
  /* 10c914d3 push ebp */
  push32((uint32_t)(EBP));
  /* 10c914d4 mov ebp, esp */
  EBP = (ESP);
  /* 10c914d6 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c914d9 push eax */
  push32((uint32_t)(EAX));
  /* 10c914da push edx */
  push32((uint32_t)(EDX));
  /* 10c914db push ebx */
  push32((uint32_t)(EBX));
  /* 10c914dc push esi */
  push32((uint32_t)(ESI));
  /* 10c914dd push edi */
  push32((uint32_t)(EDI));
  /* 10c914de push 0x10cb9058 */
  push32((uint32_t)(0x10cb9058u));
  /* 10c914e3 push 0x10cb9054 */
  push32((uint32_t)(0x10cb9054u));
  /* 10c914e8 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10c914ea push 0x10cb9044 */
  push32((uint32_t)(0x10cb9044u));
  /* 10c914ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10c914f1 call 0x10c918a0 */
  push32(0x10c914f6u); f_10c918a0();
  /* 10c914f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c914f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c914fc jne 0x10c914ff */
  if (!C.zf) goto L_10c914ff;
  /* 10c914fe int3  */
  x86_unimpl("int3 @ 0x10c914fe");
L_10c914ff:;
  /* 10c914ff pop edi */
  EDI = (pop32());
  /* 10c91500 pop esi */
  ESI = (pop32());
  /* 10c91501 pop ebx */
  EBX = (pop32());
  /* 10c91502 pop edx */
  EDX = (pop32());
  /* 10c91503 pop eax */
  EAX = (pop32());
  /* 10c91504 mov esp, ebp */
  ESP = (EBP);
  /* 10c91506 pop ebp */
  EBP = (pop32());
  /* 10c91507 ret  */
  ESPCHK(0x10c914d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001510 @ 0x10c91510 (313 bytes, 78 insns) */
void f_10c91510(void) {
  FTRACE(0x10c91510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91510 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91511 mov ebp, esp */
  EBP = (ESP);
  /* 10c91513 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91517 jne 0x10c915d7 */
  if (!C.zf) goto L_10c915d7;
  /* 10c9151d call dword ptr [0x10cc022c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc022c))), 0x10c91523u);
  /* 10c91523 mov dword ptr [0x10cbe400], eax */
  w32((uint32_t)(0x10cbe400), (EAX));
  /* 10c91528 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9152a call 0x10c94fd0 */
  push32(0x10c9152fu); f_10c94fd0();
  /* 10c9152f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91532 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91534 jne 0x10c9153d */
  if (!C.zf) goto L_10c9153d;
  /* 10c91536 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c91538 jmp 0x10c91645 */
  goto L_10c91645;
L_10c9153d:;
  /* 10c9153d mov eax, dword ptr [0x10cbe400] */
  EAX = (r32((uint32_t)(0x10cbe400)));
  /* 10c91542 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c91545 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9154a mov dword ptr [0x10cbe40c], eax */
  w32((uint32_t)(0x10cbe40c), (EAX));
  /* 10c9154f mov ecx, dword ptr [0x10cbe400] */
  ECX = (r32((uint32_t)(0x10cbe400)));
  /* 10c91555 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9155b mov dword ptr [0x10cbe408], ecx */
  w32((uint32_t)(0x10cbe408), (ECX));
  /* 10c91561 mov edx, dword ptr [0x10cbe408] */
  EDX = (r32((uint32_t)(0x10cbe408)));
  /* 10c91567 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10c9156a add edx, dword ptr [0x10cbe40c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbe40c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91570 mov dword ptr [0x10cbe404], edx */
  w32((uint32_t)(0x10cbe404), (EDX));
  /* 10c91576 mov eax, dword ptr [0x10cbe400] */
  EAX = (r32((uint32_t)(0x10cbe400)));
  /* 10c9157b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c9157e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c91583 mov dword ptr [0x10cbe400], eax */
  w32((uint32_t)(0x10cbe400), (EAX));
  /* 10c91588 call 0x10c92140 */
  push32(0x10c9158du); f_10c92140();
  /* 10c9158d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9158f jne 0x10c9159d */
  if (!C.zf) goto L_10c9159d;
  /* 10c91591 call 0x10c95020 */
  push32(0x10c91596u); f_10c95020();
  /* 10c91596 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c91598 jmp 0x10c91645 */
  goto L_10c91645;
L_10c9159d:;
  /* 10c9159d call dword ptr [0x10cc0228] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0228))), 0x10c915a3u);
  /* 10c915a3 mov dword ptr [0x10cbff4c], eax */
  w32((uint32_t)(0x10cbff4c), (EAX));
  /* 10c915a8 call 0x10c94db0 */
  push32(0x10c915adu); f_10c94db0();
  /* 10c915ad mov dword ptr [0x10cbe3e8], eax */
  w32((uint32_t)(0x10cbe3e8), (EAX));
  /* 10c915b2 call 0x10c923f0 */
  push32(0x10c915b7u); f_10c923f0();
  /* 10c915b7 call 0x10c948a0 */
  push32(0x10c915bcu); f_10c948a0();
  /* 10c915bc call 0x10c94750 */
  push32(0x10c915c1u); f_10c94750();
  /* 10c915c1 call 0x10c91f40 */
  push32(0x10c915c6u); f_10c91f40();
  /* 10c915c6 mov ecx, dword ptr [0x10cbe3e4] */
  ECX = (r32((uint32_t)(0x10cbe3e4)));
  /* 10c915cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c915cf mov dword ptr [0x10cbe3e4], ecx */
  w32((uint32_t)(0x10cbe3e4), (ECX));
  /* 10c915d5 jmp 0x10c91640 */
  goto L_10c91640;
L_10c915d7:;
  /* 10c915d7 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c915db jne 0x10c91630 */
  if (!C.zf) goto L_10c91630;
  /* 10c915dd cmp dword ptr [0x10cbe3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c915e4 jle 0x10c9162a */
  if ((C.zf||C.sf!=C.of)) goto L_10c9162a;
  /* 10c915e6 mov edx, dword ptr [0x10cbe3e4] */
  EDX = (r32((uint32_t)(0x10cbe3e4)));
  /* 10c915ec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c915ef mov dword ptr [0x10cbe3e4], edx */
  w32((uint32_t)(0x10cbe3e4), (EDX));
  /* 10c915f5 cmp dword ptr [0x10cbe438], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe438))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c915fc jne 0x10c91603 */
  if (!C.zf) goto L_10c91603;
  /* 10c915fe call 0x10c91fc0 */
  push32(0x10c91603u); f_10c91fc0();
L_10c91603:;
  /* 10c91603 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c91605 call 0x10c93cf0 */
  push32(0x10c9160au); f_10c93cf0();
  /* 10c9160a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9160d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c91610 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91612 je 0x10c91619 */
  if (C.zf) goto L_10c91619;
  /* 10c91614 call 0x10c94600 */
  push32(0x10c91619u); f_10c94600();
L_10c91619:;
  /* 10c91619 call 0x10c92720 */
  push32(0x10c9161eu); f_10c92720();
  /* 10c9161e call 0x10c921d0 */
  push32(0x10c91623u); f_10c921d0();
  /* 10c91623 call 0x10c95020 */
  push32(0x10c91628u); f_10c95020();
  /* 10c91628 jmp 0x10c9162e */
  goto L_10c9162e;
L_10c9162a:;
  /* 10c9162a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9162c jmp 0x10c91645 */
  goto L_10c91645;
L_10c9162e:;
  /* 10c9162e jmp 0x10c91640 */
  goto L_10c91640;
L_10c91630:;
  /* 10c91630 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91634 jne 0x10c91640 */
  if (!C.zf) goto L_10c91640;
  /* 10c91636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91638 call 0x10c922c0 */
  push32(0x10c9163du); f_10c922c0();
  /* 10c9163d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91640:;
  /* 10c91640 mov eax, 1 */
  EAX = (0x1u);
L_10c91645:;
  /* 10c91645 pop ebp */
  EBP = (pop32());
  /* 10c91646 ret 0xc */
  ESPCHK(0x10c91510u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10c91650 (243 bytes, 86 insns) */
void f_10c91650(void) {
  FTRACE(0x10c91650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91650 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91651 mov ebp, esp */
  EBP = (ESP);
  /* 10c91653 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91654 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c9165b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9165f jne 0x10c91671 */
  if (!C.zf) goto L_10c91671;
  /* 10c91661 cmp dword ptr [0x10cbe3e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91668 jne 0x10c91671 */
  if (!C.zf) goto L_10c91671;
  /* 10c9166a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9166c jmp 0x10c9173d */
  goto L_10c9173d;
L_10c91671:;
  /* 10c91671 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91675 je 0x10c9167d */
  if (C.zf) goto L_10c9167d;
  /* 10c91677 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9167b jne 0x10c916bf */
  if (!C.zf) goto L_10c916bf;
L_10c9167d:;
  /* 10c9167d cmp dword ptr [0x10cbff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91684 je 0x10c9169b */
  if (C.zf) goto L_10c9169b;
  /* 10c91686 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91689 push eax */
  push32((uint32_t)(EAX));
  /* 10c9168a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9168d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9168e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91691 push edx */
  push32((uint32_t)(EDX));
  /* 10c91692 call dword ptr [0x10cbff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbff5c))), 0x10c91698u);
  /* 10c91698 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9169b:;
  /* 10c9169b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9169f je 0x10c916b5 */
  if (C.zf) goto L_10c916b5;
  /* 10c916a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c916a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c916a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c916a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c916a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c916ac push edx */
  push32((uint32_t)(EDX));
  /* 10c916ad call 0x10c91510 */
  push32(0x10c916b2u); f_10c91510();
  /* 10c916b2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c916b5:;
  /* 10c916b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c916b9 jne 0x10c916bf */
  if (!C.zf) goto L_10c916bf;
  /* 10c916bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c916bd jmp 0x10c9173d */
  goto L_10c9173d;
L_10c916bf:;
  /* 10c916bf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c916c2 push eax */
  push32((uint32_t)(EAX));
  /* 10c916c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c916c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c916c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c916ca push edx */
  push32((uint32_t)(EDX));
  /* 10c916cb call 0x10c9100a */
  push32(0x10c916d0u); f_10c9100a();
  /* 10c916d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c916d3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c916d7 jne 0x10c916ee */
  if (!C.zf) goto L_10c916ee;
  /* 10c916d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c916dd jne 0x10c916ee */
  if (!C.zf) goto L_10c916ee;
  /* 10c916df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c916e2 push eax */
  push32((uint32_t)(EAX));
  /* 10c916e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c916e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c916e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c916e9 call 0x10c91510 */
  push32(0x10c916eeu); f_10c91510();
L_10c916ee:;
  /* 10c916ee cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c916f2 je 0x10c916fa */
  if (C.zf) goto L_10c916fa;
  /* 10c916f4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c916f8 jne 0x10c9173a */
  if (!C.zf) goto L_10c9173a;
L_10c916fa:;
  /* 10c916fa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c916fd push edx */
  push32((uint32_t)(EDX));
  /* 10c916fe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91701 push eax */
  push32((uint32_t)(EAX));
  /* 10c91702 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91705 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91706 call 0x10c91510 */
  push32(0x10c9170bu); f_10c91510();
  /* 10c9170b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9170d jne 0x10c91716 */
  if (!C.zf) goto L_10c91716;
  /* 10c9170f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c91716:;
  /* 10c91716 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9171a je 0x10c9173a */
  if (C.zf) goto L_10c9173a;
  /* 10c9171c cmp dword ptr [0x10cbff5c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff5c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91723 je 0x10c9173a */
  if (C.zf) goto L_10c9173a;
  /* 10c91725 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91728 push edx */
  push32((uint32_t)(EDX));
  /* 10c91729 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9172c push eax */
  push32((uint32_t)(EAX));
  /* 10c9172d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91730 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91731 call dword ptr [0x10cbff5c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbff5c))), 0x10c91737u);
  /* 10c91737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9173a:;
  /* 10c9173a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9173d:;
  /* 10c9173d mov esp, ebp */
  ESP = (EBP);
  /* 10c9173f pop ebp */
  EBP = (pop32());
  /* 10c91740 ret 0xc */
  ESPCHK(0x10c91650u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10c91750 (58 bytes, 18 insns) */
void f_10c91750(void) {
  FTRACE(0x10c91750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91751 mov ebp, esp */
  EBP = (ESP);
  /* 10c91753 cmp dword ptr [0x10cbe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9175a je 0x10c9176e */
  if (C.zf) goto L_10c9176e;
  /* 10c9175c cmp dword ptr [0x10cbe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91763 jne 0x10c91773 */
  if (!C.zf) goto L_10c91773;
  /* 10c91765 cmp dword ptr [0x10cbe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9176c jne 0x10c91773 */
  if (!C.zf) goto L_10c91773;
L_10c9176e:;
  /* 10c9176e call 0x10c950c0 */
  push32(0x10c91773u); f_10c950c0();
L_10c91773:;
  /* 10c91773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91776 push eax */
  push32((uint32_t)(EAX));
  /* 10c91777 call 0x10c95110 */
  push32(0x10c9177cu); f_10c95110();
  /* 10c9177c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9177f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c91784 call dword ptr [0x10cbca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbca30))), 0x10c9178au);
  /* 10c9178a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9178d pop ebp */
  EBP = (pop32());
  /* 10c9178e ret  */
  ESPCHK(0x10c91750u, _esp0);
  ESP += 4; return;
}

/* FUN_10001790 @ 0x10c91790 (11 bytes, 5 insns) */
void f_10c91790(void) {
  FTRACE(0x10c91790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91790 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91791 mov ebp, esp */
  EBP = (ESP);
  /* 10c91793 call dword ptr [0x10cc0230] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0230))), 0x10c91799u);
  /* 10c91799 pop ebp */
  EBP = (pop32());
  /* 10c9179a ret  */
  ESPCHK(0x10c91790u, _esp0);
  ESP += 4; return;
}

/* FUN_100017a0 @ 0x10c917a0 (87 bytes, 30 insns) */
void f_10c917a0(void) {
  FTRACE(0x10c917a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c917a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c917a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c917a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c917a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c917a8 jl 0x10c917b0 */
  if ((C.sf!=C.of)) goto L_10c917b0;
  /* 10c917aa cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c917ae jl 0x10c917b5 */
  if ((C.sf!=C.of)) goto L_10c917b5;
L_10c917b0:;
  /* 10c917b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c917b3 jmp 0x10c917f3 */
  goto L_10c917f3;
L_10c917b5:;
  /* 10c917b5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c917b9 jne 0x10c917c7 */
  if (!C.zf) goto L_10c917c7;
  /* 10c917bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c917be mov eax, dword ptr [eax*4 + 0x10cbca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cbca38)));
  /* 10c917c5 jmp 0x10c917f3 */
  goto L_10c917f3;
L_10c917c7:;
  /* 10c917c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c917ca and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10c917cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c917cf je 0x10c917d6 */
  if (C.zf) goto L_10c917d6;
  /* 10c917d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c917d4 jmp 0x10c917f3 */
  goto L_10c917f3;
L_10c917d6:;
  /* 10c917d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c917d9 mov eax, dword ptr [edx*4 + 0x10cbca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbca38)));
  /* 10c917e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c917e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c917e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c917e9 mov dword ptr [ecx*4 + 0x10cbca38], edx */
  w32((uint32_t)(ECX*4 + 0x10cbca38), (EDX));
  /* 10c917f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c917f3:;
  /* 10c917f3 mov esp, ebp */
  ESP = (EBP);
  /* 10c917f5 pop ebp */
  EBP = (pop32());
  /* 10c917f6 ret  */
  ESPCHK(0x10c917a0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10c91800 (126 bytes, 38 insns) */
void f_10c91800(void) {
  FTRACE(0x10c91800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91800 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91801 mov ebp, esp */
  EBP = (ESP);
  /* 10c91803 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91804 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91808 jl 0x10c91810 */
  if ((C.sf!=C.of)) goto L_10c91810;
  /* 10c9180a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9180e jl 0x10c91817 */
  if ((C.sf!=C.of)) goto L_10c91817;
L_10c91810:;
  /* 10c91810 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10c91815 jmp 0x10c9187a */
  goto L_10c9187a;
L_10c91817:;
  /* 10c91817 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9181b jne 0x10c91829 */
  if (!C.zf) goto L_10c91829;
  /* 10c9181d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91820 mov eax, dword ptr [eax*4 + 0x10cbca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10cbca44)));
  /* 10c91827 jmp 0x10c9187a */
  goto L_10c9187a;
L_10c91829:;
  /* 10c91829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9182c mov edx, dword ptr [ecx*4 + 0x10cbca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca44)));
  /* 10c91833 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c91836 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9183a jne 0x10c91850 */
  if (!C.zf) goto L_10c91850;
  /* 10c9183c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10c9183e call dword ptr [0x10cc0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0234))), 0x10c91844u);
  /* 10c91844 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91847 mov dword ptr [ecx*4 + 0x10cbca44], eax */
  w32((uint32_t)(ECX*4 + 0x10cbca44), (EAX));
  /* 10c9184e jmp 0x10c91877 */
  goto L_10c91877;
L_10c91850:;
  /* 10c91850 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91854 jne 0x10c9186a */
  if (!C.zf) goto L_10c9186a;
  /* 10c91856 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c91858 call dword ptr [0x10cc0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0234))), 0x10c9185eu);
  /* 10c9185e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91861 mov dword ptr [edx*4 + 0x10cbca44], eax */
  w32((uint32_t)(EDX*4 + 0x10cbca44), (EAX));
  /* 10c91868 jmp 0x10c91877 */
  goto L_10c91877;
L_10c9186a:;
  /* 10c9186a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9186d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91870 mov dword ptr [eax*4 + 0x10cbca44], ecx */
  w32((uint32_t)(EAX*4 + 0x10cbca44), (ECX));
L_10c91877:;
  /* 10c91877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c9187a:;
  /* 10c9187a mov esp, ebp */
  ESP = (EBP);
  /* 10c9187c pop ebp */
  EBP = (pop32());
  /* 10c9187d ret  */
  ESPCHK(0x10c91800u, _esp0);
  ESP += 4; return;
}

/* FUN_10001880 @ 0x10c91880 (28 bytes, 11 insns) */
void f_10c91880(void) {
  FTRACE(0x10c91880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91880 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91881 mov ebp, esp */
  EBP = (ESP);
  /* 10c91883 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91884 mov eax, dword ptr [0x10cbff40] */
  EAX = (r32((uint32_t)(0x10cbff40)));
  /* 10c91889 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9188c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9188f mov dword ptr [0x10cbff40], ecx */
  w32((uint32_t)(0x10cbff40), (ECX));
  /* 10c91895 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91898 mov esp, ebp */
  ESP = (EBP);
  /* 10c9189a pop ebp */
  EBP = (pop32());
  /* 10c9189b ret  */
  ESPCHK(0x10c91880u, _esp0);
  ESP += 4; return;
}

/* FUN_100018a0 @ 0x10c918a0 (912 bytes, 248 insns) */
void f_10c918a0(void) {
  FTRACE(0x10c918a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c918a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c918a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c918a3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10c918a8 call 0x10c95980 */
  push32(0x10c918adu); f_10c95980();
  /* 10c918ad push edi */
  push32((uint32_t)(EDI));
  /* 10c918ae mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10c918b5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c918ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c918bc lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10c918c2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c918c4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c918c6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c918c7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10c918ce mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c918d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c918d5 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10c918db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c918dd stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c918df stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c918e0 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10c918e7 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10c918ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c918ee lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10c918f4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c918f6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10c918f8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10c918f9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10c918fc mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10c91902 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91906 jl 0x10c9190e */
  if ((C.sf!=C.of)) goto L_10c9190e;
  /* 10c91908 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9190c jl 0x10c91916 */
  if ((C.sf!=C.of)) goto L_10c91916;
L_10c9190e:;
  /* 10c9190e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c91911 jmp 0x10c91c2b */
  goto L_10c91c2b;
L_10c91916:;
  /* 10c91916 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9191a jne 0x10c919c0 */
  if (!C.zf) goto L_10c919c0;
  /* 10c91920 push 0x10cbca34 */
  push32((uint32_t)(0x10cbca34u));
  /* 10c91925 call dword ptr [0x10cc024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc024c))), 0x10c9192bu);
  /* 10c9192b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9192d jle 0x10c919c0 */
  if ((C.zf||C.sf!=C.of)) goto L_10c919c0;
  /* 10c91933 cmp dword ptr [0x10cbe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9193a jne 0x10c9197e */
  if (!C.zf) goto L_10c9197e;
  /* 10c9193c push 0x10cb9200 */
  push32((uint32_t)(0x10cb9200u));
  /* 10c91941 call dword ptr [0x10cc0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0248))), 0x10c91947u);
  /* 10c91947 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10c9194d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91954 je 0x10c91976 */
  if (C.zf) goto L_10c91976;
  /* 10c91956 push 0x10cb91f4 */
  push32((uint32_t)(0x10cb91f4u));
  /* 10c9195b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10c91961 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91962 call dword ptr [0x10cc0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0244))), 0x10c91968u);
  /* 10c91968 mov dword ptr [0x10cbe3f8], eax */
  w32((uint32_t)(0x10cbe3f8), (EAX));
  /* 10c9196d cmp dword ptr [0x10cbe3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91974 jne 0x10c9197e */
  if (!C.zf) goto L_10c9197e;
L_10c91976:;
  /* 10c91976 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c91979 jmp 0x10c91c2b */
  goto L_10c91c2b;
L_10c9197e:;
  /* 10c9197e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91981 push edx */
  push32((uint32_t)(EDX));
  /* 10c91982 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91985 push eax */
  push32((uint32_t)(EAX));
  /* 10c91986 push 0x10cb91c0 */
  push32((uint32_t)(0x10cb91c0u));
  /* 10c9198b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c91991 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91992 call dword ptr [0x10cbe3f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe3f8))), 0x10c91998u);
  /* 10c91998 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9199b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c919a1 push edx */
  push32((uint32_t)(EDX));
  /* 10c919a2 call dword ptr [0x10cc0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0240))), 0x10c919a8u);
  /* 10c919a8 push 0x10cbca34 */
  push32((uint32_t)(0x10cbca34u));
  /* 10c919ad call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c919b3u);
  /* 10c919b3 call 0x10c91790 */
  push32(0x10c919b8u); f_10c91790();
  /* 10c919b8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c919bb jmp 0x10c91c2b */
  goto L_10c91c2b;
L_10c919c0:;
  /* 10c919c0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c919c4 je 0x10c919fd */
  if (C.zf) goto L_10c919fd;
  /* 10c919c6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10c919cc push eax */
  push32((uint32_t)(EAX));
  /* 10c919cd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c919d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c919d1 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10c919d6 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10c919dc push edx */
  push32((uint32_t)(EDX));
  /* 10c919dd call 0x10c95880 */
  push32(0x10c919e2u); f_10c95880();
  /* 10c919e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c919e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c919e7 jge 0x10c919fd */
  if ((C.sf==C.of)) goto L_10c919fd;
  /* 10c919e9 push 0x10cb9194 */
  push32((uint32_t)(0x10cb9194u));
  /* 10c919ee lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c919f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c919f5 call 0x10c95790 */
  push32(0x10c919fau); f_10c95790();
  /* 10c919fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c919fd:;
  /* 10c919fd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91a01 jne 0x10c91a35 */
  if (!C.zf) goto L_10c91a35;
  /* 10c91a03 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91a07 je 0x10c91a15 */
  if (C.zf) goto L_10c91a15;
  /* 10c91a09 mov dword ptr [ebp - 0x3028], 0x10cb9180 */
  w32((uint32_t)(EBP + -0x3028), (0x10cb9180u));
  /* 10c91a13 jmp 0x10c91a1f */
  goto L_10c91a1f;
L_10c91a15:;
  /* 10c91a15 mov dword ptr [ebp - 0x3028], 0x10cb916c */
  w32((uint32_t)(EBP + -0x3028), (0x10cb916cu));
L_10c91a1f:;
  /* 10c91a1f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10c91a25 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91a26 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c91a2c push edx */
  push32((uint32_t)(EDX));
  /* 10c91a2d call 0x10c95790 */
  push32(0x10c91a32u); f_10c95790();
  /* 10c91a32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91a35:;
  /* 10c91a35 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10c91a3b push eax */
  push32((uint32_t)(EAX));
  /* 10c91a3c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c91a42 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91a43 call 0x10c957a0 */
  push32(0x10c91a48u); f_10c957a0();
  /* 10c91a48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91a4b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91a4f jne 0x10c91a8a */
  if (!C.zf) goto L_10c91a8a;
  /* 10c91a51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91a54 mov eax, dword ptr [edx*4 + 0x10cbca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbca38)));
  /* 10c91a5b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c91a5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91a60 je 0x10c91a76 */
  if (C.zf) goto L_10c91a76;
  /* 10c91a62 push 0x10cb9168 */
  push32((uint32_t)(0x10cb9168u));
  /* 10c91a67 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10c91a6d push ecx */
  push32((uint32_t)(ECX));
  /* 10c91a6e call 0x10c957a0 */
  push32(0x10c91a73u); f_10c957a0();
  /* 10c91a73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91a76:;
  /* 10c91a76 push 0x10cb9164 */
  push32((uint32_t)(0x10cb9164u));
  /* 10c91a7b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c91a81 push edx */
  push32((uint32_t)(EDX));
  /* 10c91a82 call 0x10c957a0 */
  push32(0x10c91a87u); f_10c957a0();
  /* 10c91a87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91a8a:;
  /* 10c91a8a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91a8e je 0x10c91ad2 */
  if (C.zf) goto L_10c91ad2;
  /* 10c91a90 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10c91a96 push eax */
  push32((uint32_t)(EAX));
  /* 10c91a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10c91a9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91a9e push edx */
  push32((uint32_t)(EDX));
  /* 10c91a9f push 0x10cb9158 */
  push32((uint32_t)(0x10cb9158u));
  /* 10c91aa4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c91aa9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c91aaf push eax */
  push32((uint32_t)(EAX));
  /* 10c91ab0 call 0x10c95690 */
  push32(0x10c91ab5u); f_10c95690();
  /* 10c91ab5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91ab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91aba jge 0x10c91ad0 */
  if ((C.sf==C.of)) goto L_10c91ad0;
  /* 10c91abc push 0x10cb9194 */
  push32((uint32_t)(0x10cb9194u));
  /* 10c91ac1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10c91ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91ac8 call 0x10c95790 */
  push32(0x10c91acdu); f_10c95790();
  /* 10c91acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91ad0:;
  /* 10c91ad0 jmp 0x10c91ae8 */
  goto L_10c91ae8;
L_10c91ad2:;
  /* 10c91ad2 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10c91ad8 push edx */
  push32((uint32_t)(EDX));
  /* 10c91ad9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c91adf push eax */
  push32((uint32_t)(EAX));
  /* 10c91ae0 call 0x10c95790 */
  push32(0x10c91ae5u); f_10c95790();
  /* 10c91ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91ae8:;
  /* 10c91ae8 cmp dword ptr [0x10cbff40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91aef je 0x10c91b2c */
  if (C.zf) goto L_10c91b2c;
  /* 10c91af1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10c91af7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91af8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c91afe push edx */
  push32((uint32_t)(EDX));
  /* 10c91aff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b02 push eax */
  push32((uint32_t)(EAX));
  /* 10c91b03 call dword ptr [0x10cbff40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbff40))), 0x10c91b09u);
  /* 10c91b09 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91b0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91b0e je 0x10c91b2c */
  if (C.zf) goto L_10c91b2c;
  /* 10c91b10 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91b14 jne 0x10c91b21 */
  if (!C.zf) goto L_10c91b21;
  /* 10c91b16 push 0x10cbca34 */
  push32((uint32_t)(0x10cbca34u));
  /* 10c91b1b call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c91b21u);
L_10c91b21:;
  /* 10c91b21 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c91b27 jmp 0x10c91c2b */
  goto L_10c91c2b;
L_10c91b2c:;
  /* 10c91b2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b2f mov edx, dword ptr [ecx*4 + 0x10cbca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca38)));
  /* 10c91b36 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c91b39 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c91b3b je 0x10c91b7b */
  if (C.zf) goto L_10c91b7b;
  /* 10c91b3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b40 cmp dword ptr [eax*4 + 0x10cbca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10cbca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91b48 je 0x10c91b7b */
  if (C.zf) goto L_10c91b7b;
  /* 10c91b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91b4c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10c91b52 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91b53 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c91b59 push edx */
  push32((uint32_t)(EDX));
  /* 10c91b5a call 0x10c95610 */
  push32(0x10c91b5fu); f_10c95610();
  /* 10c91b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91b62 push eax */
  push32((uint32_t)(EAX));
  /* 10c91b63 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10c91b69 push eax */
  push32((uint32_t)(EAX));
  /* 10c91b6a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b6d mov edx, dword ptr [ecx*4 + 0x10cbca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca44)));
  /* 10c91b74 push edx */
  push32((uint32_t)(EDX));
  /* 10c91b75 call dword ptr [0x10cc0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0238))), 0x10c91b7bu);
L_10c91b7b:;
  /* 10c91b7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b7e mov ecx, dword ptr [eax*4 + 0x10cbca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbca38)));
  /* 10c91b85 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c91b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c91b8a je 0x10c91b99 */
  if (C.zf) goto L_10c91b99;
  /* 10c91b8c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10c91b92 push edx */
  push32((uint32_t)(EDX));
  /* 10c91b93 call dword ptr [0x10cc0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0240))), 0x10c91b99u);
L_10c91b99:;
  /* 10c91b99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91b9c mov ecx, dword ptr [eax*4 + 0x10cbca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbca38)));
  /* 10c91ba3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c91ba6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c91ba8 je 0x10c91c18 */
  if (C.zf) goto L_10c91c18;
  /* 10c91baa cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91bae je 0x10c91bcd */
  if (C.zf) goto L_10c91bcd;
  /* 10c91bb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10c91bb2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10c91bb8 push edx */
  push32((uint32_t)(EDX));
  /* 10c91bb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91bbc push eax */
  push32((uint32_t)(EAX));
  /* 10c91bbd call 0x10c95320 */
  push32(0x10c91bc2u); f_10c95320();
  /* 10c91bc2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91bc5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10c91bcb jmp 0x10c91bd7 */
  goto L_10c91bd7;
L_10c91bcd:;
  /* 10c91bcd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10c91bd7:;
  /* 10c91bd7 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10c91bdd push ecx */
  push32((uint32_t)(ECX));
  /* 10c91bde mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c91be1 push edx */
  push32((uint32_t)(EDX));
  /* 10c91be2 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10c91be8 push eax */
  push32((uint32_t)(EAX));
  /* 10c91be9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91bec push ecx */
  push32((uint32_t)(ECX));
  /* 10c91bed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91bf0 push edx */
  push32((uint32_t)(EDX));
  /* 10c91bf1 call 0x10c91c30 */
  push32(0x10c91bf6u); f_10c91c30();
  /* 10c91bf6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91bf9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10c91bff cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91c03 jne 0x10c91c10 */
  if (!C.zf) goto L_10c91c10;
  /* 10c91c05 push 0x10cbca34 */
  push32((uint32_t)(0x10cbca34u));
  /* 10c91c0a call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c91c10u);
L_10c91c10:;
  /* 10c91c10 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10c91c16 jmp 0x10c91c2b */
  goto L_10c91c2b;
L_10c91c18:;
  /* 10c91c18 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91c1c jne 0x10c91c29 */
  if (!C.zf) goto L_10c91c29;
  /* 10c91c1e push 0x10cbca34 */
  push32((uint32_t)(0x10cbca34u));
  /* 10c91c23 call dword ptr [0x10cc023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc023c))), 0x10c91c29u);
L_10c91c29:;
  /* 10c91c29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c91c2b:;
  /* 10c91c2b pop edi */
  EDI = (pop32());
  /* 10c91c2c mov esp, ebp */
  ESP = (EBP);
  /* 10c91c2e pop ebp */
  EBP = (pop32());
  /* 10c91c2f ret  */
  ESPCHK(0x10c918a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001c30 @ 0x10c91c30 (780 bytes, 197 insns) */
void f_10c91c30(void) {
  FTRACE(0x10c91c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91c31 mov ebp, esp */
  EBP = (ESP);
  /* 10c91c33 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10c91c38 call 0x10c95980 */
  push32(0x10c91c3du); f_10c95980();
L_10c91c3d:;
  /* 10c91c3d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91c41 jne 0x10c91c68 */
  if (!C.zf) goto L_10c91c68;
  /* 10c91c43 push 0x10cb9350 */
  push32((uint32_t)(0x10cb9350u));
  /* 10c91c48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91c4a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10c91c4f push 0x10cb9344 */
  push32((uint32_t)(0x10cb9344u));
  /* 10c91c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c91c56 call 0x10c918a0 */
  push32(0x10c91c5bu); f_10c918a0();
  /* 10c91c5b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91c5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91c61 jne 0x10c91c68 */
  if (!C.zf) goto L_10c91c68;
  /* 10c91c63 call 0x10c91790 */
  push32(0x10c91c68u); f_10c91790();
L_10c91c68:;
  /* 10c91c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c91c6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91c6c jne 0x10c91c3d */
  if (!C.zf) goto L_10c91c3d;
  /* 10c91c6e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c91c73 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10c91c79 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91c7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91c7c call dword ptr [0x10cc0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0250))), 0x10c91c82u);
  /* 10c91c82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91c84 jne 0x10c91c9a */
  if (!C.zf) goto L_10c91c9a;
  /* 10c91c86 push 0x10cb932c */
  push32((uint32_t)(0x10cb932cu));
  /* 10c91c8b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10c91c91 push edx */
  push32((uint32_t)(EDX));
  /* 10c91c92 call 0x10c95790 */
  push32(0x10c91c97u); f_10c95790();
  /* 10c91c97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91c9a:;
  /* 10c91c9a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10c91ca0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c91ca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91ca6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91ca7 call 0x10c95610 */
  push32(0x10c91cacu); f_10c95610();
  /* 10c91cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91caf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91cb2 jbe 0x10c91cdd */
  if ((C.cf||C.zf)) goto L_10c91cdd;
  /* 10c91cb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91cb7 push edx */
  push32((uint32_t)(EDX));
  /* 10c91cb8 call 0x10c95610 */
  push32(0x10c91cbdu); f_10c95610();
  /* 10c91cbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91cc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91cc3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c91cc7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c91cca push 3 */
  push32((uint32_t)(0x3u));
  /* 10c91ccc push 0x10cb9328 */
  push32((uint32_t)(0x10cb9328u));
  /* 10c91cd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91cd4 push eax */
  push32((uint32_t)(EAX));
  /* 10c91cd5 call 0x10c96000 */
  push32(0x10c91cdau); f_10c96000();
  /* 10c91cda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91cdd:;
  /* 10c91cdd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c91ce0 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10c91ce6 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91ced je 0x10c91d38 */
  if (C.zf) goto L_10c91d38;
  /* 10c91cef mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c91cf5 push edx */
  push32((uint32_t)(EDX));
  /* 10c91cf6 call 0x10c95610 */
  push32(0x10c91cfbu); f_10c95610();
  /* 10c91cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91cfe cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91d01 jbe 0x10c91d38 */
  if ((C.cf||C.zf)) goto L_10c91d38;
  /* 10c91d03 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c91d09 push eax */
  push32((uint32_t)(EAX));
  /* 10c91d0a call 0x10c95610 */
  push32(0x10c91d0fu); f_10c95610();
  /* 10c91d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91d12 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c91d18 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10c91d1c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10c91d22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c91d24 push 0x10cb9328 */
  push32((uint32_t)(0x10cb9328u));
  /* 10c91d29 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c91d2f push eax */
  push32((uint32_t)(EAX));
  /* 10c91d30 call 0x10c96000 */
  push32(0x10c91d35u); f_10c96000();
  /* 10c91d35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91d38:;
  /* 10c91d38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91d3c jne 0x10c91d4a */
  if (!C.zf) goto L_10c91d4a;
  /* 10c91d3e mov dword ptr [ebp - 0x1114], 0x10cb92b4 */
  w32((uint32_t)(EBP + -0x1114), (0x10cb92b4u));
  /* 10c91d48 jmp 0x10c91d54 */
  goto L_10c91d54;
L_10c91d4a:;
  /* 10c91d4a mov dword ptr [ebp - 0x1114], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1114), (0x10cb9054u));
L_10c91d54:;
  /* 10c91d54 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c91d57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c91d5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c91d5c je 0x10c91d69 */
  if (C.zf) goto L_10c91d69;
  /* 10c91d5e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c91d61 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10c91d67 jmp 0x10c91d73 */
  goto L_10c91d73;
L_10c91d69:;
  /* 10c91d69 mov dword ptr [ebp - 0x1118], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1118), (0x10cb9054u));
L_10c91d73:;
  /* 10c91d73 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c91d76 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c91d79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c91d7b je 0x10c91d8f */
  if (C.zf) goto L_10c91d8f;
  /* 10c91d7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91d81 jne 0x10c91d8f */
  if (!C.zf) goto L_10c91d8f;
  /* 10c91d83 mov dword ptr [ebp - 0x111c], 0x10cb92a4 */
  w32((uint32_t)(EBP + -0x111c), (0x10cb92a4u));
  /* 10c91d8d jmp 0x10c91d99 */
  goto L_10c91d99;
L_10c91d8f:;
  /* 10c91d8f mov dword ptr [ebp - 0x111c], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x111c), (0x10cb9054u));
L_10c91d99:;
  /* 10c91d99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c91d9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c91d9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c91da1 je 0x10c91daf */
  if (C.zf) goto L_10c91daf;
  /* 10c91da3 mov dword ptr [ebp - 0x1120], 0x10cb92a0 */
  w32((uint32_t)(EBP + -0x1120), (0x10cb92a0u));
  /* 10c91dad jmp 0x10c91db9 */
  goto L_10c91db9;
L_10c91daf:;
  /* 10c91daf mov dword ptr [ebp - 0x1120], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1120), (0x10cb9054u));
L_10c91db9:;
  /* 10c91db9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91dbd je 0x10c91dca */
  if (C.zf) goto L_10c91dca;
  /* 10c91dbf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c91dc2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10c91dc8 jmp 0x10c91dd4 */
  goto L_10c91dd4;
L_10c91dca:;
  /* 10c91dca mov dword ptr [ebp - 0x1124], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1124), (0x10cb9054u));
L_10c91dd4:;
  /* 10c91dd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91dd8 je 0x10c91de6 */
  if (C.zf) goto L_10c91de6;
  /* 10c91dda mov dword ptr [ebp - 0x1128], 0x10cb9298 */
  w32((uint32_t)(EBP + -0x1128), (0x10cb9298u));
  /* 10c91de4 jmp 0x10c91df0 */
  goto L_10c91df0;
L_10c91de6:;
  /* 10c91de6 mov dword ptr [ebp - 0x1128], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1128), (0x10cb9054u));
L_10c91df0:;
  /* 10c91df0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91df4 je 0x10c91e01 */
  if (C.zf) goto L_10c91e01;
  /* 10c91df6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c91df9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10c91dff jmp 0x10c91e0b */
  goto L_10c91e0b;
L_10c91e01:;
  /* 10c91e01 mov dword ptr [ebp - 0x112c], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x112c), (0x10cb9054u));
L_10c91e0b:;
  /* 10c91e0b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91e0f je 0x10c91e1d */
  if (C.zf) goto L_10c91e1d;
  /* 10c91e11 mov dword ptr [ebp - 0x1130], 0x10cb9290 */
  w32((uint32_t)(EBP + -0x1130), (0x10cb9290u));
  /* 10c91e1b jmp 0x10c91e27 */
  goto L_10c91e27;
L_10c91e1d:;
  /* 10c91e1d mov dword ptr [ebp - 0x1130], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1130), (0x10cb9054u));
L_10c91e27:;
  /* 10c91e27 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91e2e je 0x10c91e3e */
  if (C.zf) goto L_10c91e3e;
  /* 10c91e30 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10c91e36 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10c91e3c jmp 0x10c91e48 */
  goto L_10c91e48;
L_10c91e3e:;
  /* 10c91e3e mov dword ptr [ebp - 0x1134], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1134), (0x10cb9054u));
L_10c91e48:;
  /* 10c91e48 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91e4f je 0x10c91e5d */
  if (C.zf) goto L_10c91e5d;
  /* 10c91e51 mov dword ptr [ebp - 0x1138], 0x10cb9284 */
  w32((uint32_t)(EBP + -0x1138), (0x10cb9284u));
  /* 10c91e5b jmp 0x10c91e67 */
  goto L_10c91e67;
L_10c91e5d:;
  /* 10c91e5d mov dword ptr [ebp - 0x1138], 0x10cb9054 */
  w32((uint32_t)(EBP + -0x1138), (0x10cb9054u));
L_10c91e67:;
  /* 10c91e67 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10c91e6d push edx */
  push32((uint32_t)(EDX));
  /* 10c91e6e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10c91e74 push eax */
  push32((uint32_t)(EAX));
  /* 10c91e75 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10c91e7b push ecx */
  push32((uint32_t)(ECX));
  /* 10c91e7c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10c91e82 push edx */
  push32((uint32_t)(EDX));
  /* 10c91e83 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10c91e89 push eax */
  push32((uint32_t)(EAX));
  /* 10c91e8a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10c91e90 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91e91 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10c91e97 push edx */
  push32((uint32_t)(EDX));
  /* 10c91e98 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10c91e9e push eax */
  push32((uint32_t)(EAX));
  /* 10c91e9f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10c91ea5 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91ea6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10c91eac push edx */
  push32((uint32_t)(EDX));
  /* 10c91ead mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c91eb0 push eax */
  push32((uint32_t)(EAX));
  /* 10c91eb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91eb4 mov edx, dword ptr [ecx*4 + 0x10cbca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca50)));
  /* 10c91ebb push edx */
  push32((uint32_t)(EDX));
  /* 10c91ebc push 0x10cb9230 */
  push32((uint32_t)(0x10cb9230u));
  /* 10c91ec1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c91ec6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10c91ecc push eax */
  push32((uint32_t)(EAX));
  /* 10c91ecd call 0x10c95690 */
  push32(0x10c91ed2u); f_10c95690();
  /* 10c91ed2 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91ed5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c91ed7 jge 0x10c91eed */
  if ((C.sf==C.of)) goto L_10c91eed;
  /* 10c91ed9 push 0x10cb9194 */
  push32((uint32_t)(0x10cb9194u));
  /* 10c91ede lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10c91ee4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c91ee5 call 0x10c95790 */
  push32(0x10c91eeau); f_10c95790();
  /* 10c91eea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c91eed:;
  /* 10c91eed push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10c91ef2 push 0x10cb920c */
  push32((uint32_t)(0x10cb920cu));
  /* 10c91ef7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10c91efd push edx */
  push32((uint32_t)(EDX));
  /* 10c91efe call 0x10c95f40 */
  push32(0x10c91f03u); f_10c95f40();
  /* 10c91f03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91f06 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10c91f0c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91f13 jne 0x10c91f26 */
  if (!C.zf) goto L_10c91f26;
  /* 10c91f15 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10c91f17 call 0x10c95c80 */
  push32(0x10c91f1cu); f_10c95c80();
  /* 10c91f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91f1f push 3 */
  push32((uint32_t)(0x3u));
  /* 10c91f21 call 0x10c91fa0 */
  push32(0x10c91f26u); f_10c91fa0();
L_10c91f26:;
  /* 10c91f26 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91f2d jne 0x10c91f36 */
  if (!C.zf) goto L_10c91f36;
  /* 10c91f2f mov eax, 1 */
  EAX = (0x1u);
  /* 10c91f34 jmp 0x10c91f38 */
  goto L_10c91f38;
L_10c91f36:;
  /* 10c91f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c91f38:;
  /* 10c91f38 mov esp, ebp */
  ESP = (EBP);
  /* 10c91f3a pop ebp */
  EBP = (pop32());
  /* 10c91f3b ret  */
  ESPCHK(0x10c91c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f40 @ 0x10c91f40 (56 bytes, 15 insns) */
void f_10c91f40(void) {
  FTRACE(0x10c91f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91f41 mov ebp, esp */
  EBP = (ESP);
  /* 10c91f43 cmp dword ptr [0x10cbff3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c91f4a je 0x10c91f52 */
  if (C.zf) goto L_10c91f52;
  /* 10c91f4c call dword ptr [0x10cbff3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbff3c))), 0x10c91f52u);
L_10c91f52:;
  /* 10c91f52 push 0x10cbc418 */
  push32((uint32_t)(0x10cbc418u));
  /* 10c91f57 push 0x10cbc208 */
  push32((uint32_t)(0x10cbc208u));
  /* 10c91f5c call 0x10c92110 */
  push32(0x10c91f61u); f_10c92110();
  /* 10c91f61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91f64 push 0x10cbc104 */
  push32((uint32_t)(0x10cbc104u));
  /* 10c91f69 push 0x10cbc000 */
  push32((uint32_t)(0x10cbc000u));
  /* 10c91f6e call 0x10c92110 */
  push32(0x10c91f73u); f_10c92110();
  /* 10c91f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91f76 pop ebp */
  EBP = (pop32());
  /* 10c91f77 ret  */
  ESPCHK(0x10c91f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f80 @ 0x10c91f80 (21 bytes, 10 insns) */
void f_10c91f80(void) {
  FTRACE(0x10c91f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91f81 mov ebp, esp */
  EBP = (ESP);
  /* 10c91f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91f87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91f8a push eax */
  push32((uint32_t)(EAX));
  /* 10c91f8b call 0x10c92000 */
  push32(0x10c91f90u); f_10c92000();
  /* 10c91f90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91f93 pop ebp */
  EBP = (pop32());
  /* 10c91f94 ret  */
  ESPCHK(0x10c91f80u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10c91fa0 (21 bytes, 10 insns) */
void f_10c91fa0(void) {
  FTRACE(0x10c91fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10c91fa3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91fa5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c91faa push eax */
  push32((uint32_t)(EAX));
  /* 10c91fab call 0x10c92000 */
  push32(0x10c91fb0u); f_10c92000();
  /* 10c91fb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91fb3 pop ebp */
  EBP = (pop32());
  /* 10c91fb4 ret  */
  ESPCHK(0x10c91fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fc0 @ 0x10c91fc0 (19 bytes, 9 insns) */
void f_10c91fc0(void) {
  FTRACE(0x10c91fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10c91fc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91fc9 call 0x10c92000 */
  push32(0x10c91fceu); f_10c92000();
  /* 10c91fce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91fd1 pop ebp */
  EBP = (pop32());
  /* 10c91fd2 ret  */
  ESPCHK(0x10c91fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10001fe0 @ 0x10c91fe0 (19 bytes, 9 insns) */
void f_10c91fe0(void) {
  FTRACE(0x10c91fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c91fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c91fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10c91fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91fe5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c91fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c91fe9 call 0x10c92000 */
  push32(0x10c91feeu); f_10c92000();
  /* 10c91fee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c91ff1 pop ebp */
  EBP = (pop32());
  /* 10c91ff2 ret  */
  ESPCHK(0x10c91fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002000 @ 0x10c92000 (227 bytes, 61 insns) */
void f_10c92000(void) {
  FTRACE(0x10c92000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92000 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92001 mov ebp, esp */
  EBP = (ESP);
  /* 10c92003 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92004 call 0x10c920f0 */
  push32(0x10c92009u); f_10c920f0();
  /* 10c92009 cmp dword ptr [0x10cbe43c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe43c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92010 jne 0x10c92023 */
  if (!C.zf) goto L_10c92023;
  /* 10c92012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92015 push eax */
  push32((uint32_t)(EAX));
  /* 10c92016 call dword ptr [0x10cc025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc025c))), 0x10c9201cu);
  /* 10c9201c push eax */
  push32((uint32_t)(EAX));
  /* 10c9201d call dword ptr [0x10cc0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0258))), 0x10c92023u);
L_10c92023:;
  /* 10c92023 mov dword ptr [0x10cbe438], 1 */
  w32((uint32_t)(0x10cbe438), (0x1u));
  /* 10c9202d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10c92030 mov byte ptr [0x10cbe434], cl */
  w8((uint32_t)(0x10cbe434), (CL));
  /* 10c92036 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9203a jne 0x10c92083 */
  if (!C.zf) goto L_10c92083;
  /* 10c9203c cmp dword ptr [0x10cbff38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92043 je 0x10c92071 */
  if (C.zf) goto L_10c92071;
  /* 10c92045 mov edx, dword ptr [0x10cbff34] */
  EDX = (r32((uint32_t)(0x10cbff34)));
  /* 10c9204b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c9204e:;
  /* 10c9204e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92051 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92054 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9205a cmp ecx, dword ptr [0x10cbff38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbff38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92060 jb 0x10c92071 */
  if (C.cf) goto L_10c92071;
  /* 10c92062 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92065 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92068 je 0x10c9206f */
  if (C.zf) goto L_10c9206f;
  /* 10c9206a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9206d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10c9206fu);
L_10c9206f:;
  /* 10c9206f jmp 0x10c9204e */
  goto L_10c9204e;
L_10c92071:;
  /* 10c92071 push 0x10cbc724 */
  push32((uint32_t)(0x10cbc724u));
  /* 10c92076 push 0x10cbc51c */
  push32((uint32_t)(0x10cbc51cu));
  /* 10c9207b call 0x10c92110 */
  push32(0x10c92080u); f_10c92110();
  /* 10c92080 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92083:;
  /* 10c92083 push 0x10cbc92c */
  push32((uint32_t)(0x10cbc92cu));
  /* 10c92088 push 0x10cbc828 */
  push32((uint32_t)(0x10cbc828u));
  /* 10c9208d call 0x10c92110 */
  push32(0x10c92092u); f_10c92110();
  /* 10c92092 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92095 cmp dword ptr [0x10cbe440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9209c jne 0x10c920be */
  if (!C.zf) goto L_10c920be;
  /* 10c9209e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10c920a0 call 0x10c93cf0 */
  push32(0x10c920a5u); f_10c93cf0();
  /* 10c920a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c920a8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10c920ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c920ad je 0x10c920be */
  if (C.zf) goto L_10c920be;
  /* 10c920af mov dword ptr [0x10cbe440], 1 */
  w32((uint32_t)(0x10cbe440), (0x1u));
  /* 10c920b9 call 0x10c94600 */
  push32(0x10c920beu); f_10c94600();
L_10c920be:;
  /* 10c920be cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c920c2 je 0x10c920cb */
  if (C.zf) goto L_10c920cb;
  /* 10c920c4 call 0x10c92100 */
  push32(0x10c920c9u); f_10c92100();
  /* 10c920c9 jmp 0x10c920df */
  goto L_10c920df;
L_10c920cb:;
  /* 10c920cb mov dword ptr [0x10cbe43c], 1 */
  w32((uint32_t)(0x10cbe43c), (0x1u));
  /* 10c920d5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c920d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c920d9 call dword ptr [0x10cc0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0254))), 0x10c920dfu);
L_10c920df:;
  /* 10c920df mov esp, ebp */
  ESP = (EBP);
  /* 10c920e1 pop ebp */
  EBP = (pop32());
  /* 10c920e2 ret  */
  ESPCHK(0x10c92000u, _esp0);
  ESP += 4; return;
}

/* FUN_100020f0 @ 0x10c920f0 (15 bytes, 7 insns) */
void f_10c920f0(void) {
  FTRACE(0x10c920f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c920f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c920f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c920f3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c920f5 call 0x10c961e0 */
  push32(0x10c920fau); f_10c961e0();
  /* 10c920fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c920fd pop ebp */
  EBP = (pop32());
  /* 10c920fe ret  */
  ESPCHK(0x10c920f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002100 @ 0x10c92100 (15 bytes, 7 insns) */
void f_10c92100(void) {
  FTRACE(0x10c92100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92100 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92101 mov ebp, esp */
  EBP = (ESP);
  /* 10c92103 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10c92105 call 0x10c96280 */
  push32(0x10c9210au); f_10c96280();
  /* 10c9210a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9210d pop ebp */
  EBP = (pop32());
  /* 10c9210e ret  */
  ESPCHK(0x10c92100u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10c92110 (37 bytes, 16 insns) */
void f_10c92110(void) {
  FTRACE(0x10c92110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92110 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92111 mov ebp, esp */
  EBP = (ESP);
L_10c92113:;
  /* 10c92113 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92116 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92119 jae 0x10c92133 */
  if (!C.cf) goto L_10c92133;
  /* 10c9211b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9211e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92121 je 0x10c92128 */
  if (C.zf) goto L_10c92128;
  /* 10c92123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92126 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10c92128u);
L_10c92128:;
  /* 10c92128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9212b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9212e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c92131 jmp 0x10c92113 */
  goto L_10c92113;
L_10c92133:;
  /* 10c92133 pop ebp */
  EBP = (pop32());
  /* 10c92134 ret  */
  ESPCHK(0x10c92110u, _esp0);
  ESP += 4; return;
}

/* FUN_10002140 @ 0x10c92140 (130 bytes, 42 insns) */
void f_10c92140(void) {
  FTRACE(0x10c92140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92140 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92141 mov ebp, esp */
  EBP = (ESP);
  /* 10c92143 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92144 call 0x10c96100 */
  push32(0x10c92149u); f_10c96100();
  /* 10c92149 call dword ptr [0x10cc0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0268))), 0x10c9214fu);
  /* 10c9214f mov dword ptr [0x10cbca5c], eax */
  w32((uint32_t)(0x10cbca5c), (EAX));
  /* 10c92154 cmp dword ptr [0x10cbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9215b jne 0x10c92161 */
  if (!C.zf) goto L_10c92161;
  /* 10c9215d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9215f jmp 0x10c921be */
  goto L_10c921be;
L_10c92161:;
  /* 10c92161 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10c92163 push 0x10cb9368 */
  push32((uint32_t)(0x10cb9368u));
  /* 10c92168 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9216a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c9216c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9216e call 0x10c92bf0 */
  push32(0x10c92173u); f_10c92bf0();
  /* 10c92173 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92176 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92179 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9217d je 0x10c92194 */
  if (C.zf) goto L_10c92194;
  /* 10c9217f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92182 push eax */
  push32((uint32_t)(EAX));
  /* 10c92183 mov ecx, dword ptr [0x10cbca5c] */
  ECX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c92189 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9218a call dword ptr [0x10cc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0264))), 0x10c92190u);
  /* 10c92190 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92192 jne 0x10c92198 */
  if (!C.zf) goto L_10c92198;
L_10c92194:;
  /* 10c92194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92196 jmp 0x10c921be */
  goto L_10c921be;
L_10c92198:;
  /* 10c92198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9219b push edx */
  push32((uint32_t)(EDX));
  /* 10c9219c call 0x10c92200 */
  push32(0x10c921a1u); f_10c92200();
  /* 10c921a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c921a4 call dword ptr [0x10cc0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0260))), 0x10c921aau);
  /* 10c921aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c921ad mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c921af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c921b2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c921b9 mov eax, 1 */
  EAX = (0x1u);
L_10c921be:;
  /* 10c921be mov esp, ebp */
  ESP = (EBP);
  /* 10c921c0 pop ebp */
  EBP = (pop32());
  /* 10c921c1 ret  */
  ESPCHK(0x10c92140u, _esp0);
  ESP += 4; return;
}

/* FUN_100021d0 @ 0x10c921d0 (41 bytes, 11 insns) */
void f_10c921d0(void) {
  FTRACE(0x10c921d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c921d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c921d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c921d3 call 0x10c96140 */
  push32(0x10c921d8u); f_10c96140();
  /* 10c921d8 cmp dword ptr [0x10cbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c921df je 0x10c921f7 */
  if (C.zf) goto L_10c921f7;
  /* 10c921e1 mov eax, dword ptr [0x10cbca5c] */
  EAX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c921e6 push eax */
  push32((uint32_t)(EAX));
  /* 10c921e7 call dword ptr [0x10cc026c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc026c))), 0x10c921edu);
  /* 10c921ed mov dword ptr [0x10cbca5c], 0xffffffff */
  w32((uint32_t)(0x10cbca5c), (0xffffffffu));
L_10c921f7:;
  /* 10c921f7 pop ebp */
  EBP = (pop32());
  /* 10c921f8 ret  */
  ESPCHK(0x10c921d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002200 @ 0x10c92200 (25 bytes, 8 insns) */
void f_10c92200(void) {
  FTRACE(0x10c92200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92200 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92201 mov ebp, esp */
  EBP = (ESP);
  /* 10c92203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92206 mov dword ptr [eax + 0x50], 0x10cbcc00 */
  w32((uint32_t)(EAX + 0x50), (0x10cbcc00u));
  /* 10c9220d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92210 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10c92217 pop ebp */
  EBP = (pop32());
  /* 10c92218 ret  */
  ESPCHK(0x10c92200u, _esp0);
  ESP += 4; return;
}

/* FUN_10002220 @ 0x10c92220 (152 bytes, 48 insns) */
void f_10c92220(void) {
  FTRACE(0x10c92220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92220 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92221 mov ebp, esp */
  EBP = (ESP);
  /* 10c92223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92226 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c9222cu);
  /* 10c9222c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9222f mov eax, dword ptr [0x10cbca5c] */
  EAX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c92234 push eax */
  push32((uint32_t)(EAX));
  /* 10c92235 call dword ptr [0x10cc0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0274))), 0x10c9223bu);
  /* 10c9223b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9223e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92242 jne 0x10c922a7 */
  if (!C.zf) goto L_10c922a7;
  /* 10c92244 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10c92249 push 0x10cb9368 */
  push32((uint32_t)(0x10cb9368u));
  /* 10c9224e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92250 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10c92252 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92254 call 0x10c92bf0 */
  push32(0x10c92259u); f_10c92bf0();
  /* 10c92259 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9225c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9225f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92263 je 0x10c9229d */
  if (C.zf) goto L_10c9229d;
  /* 10c92265 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92268 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92269 mov edx, dword ptr [0x10cbca5c] */
  EDX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c9226f push edx */
  push32((uint32_t)(EDX));
  /* 10c92270 call dword ptr [0x10cc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0264))), 0x10c92276u);
  /* 10c92276 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92278 je 0x10c9229d */
  if (C.zf) goto L_10c9229d;
  /* 10c9227a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9227d push eax */
  push32((uint32_t)(EAX));
  /* 10c9227e call 0x10c92200 */
  push32(0x10c92283u); f_10c92200();
  /* 10c92283 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92286 call dword ptr [0x10cc0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0260))), 0x10c9228cu);
  /* 10c9228c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9228f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c92291 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92294 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10c9229b jmp 0x10c922a7 */
  goto L_10c922a7;
L_10c9229d:;
  /* 10c9229d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c9229f call 0x10c91750 */
  push32(0x10c922a4u); f_10c91750();
  /* 10c922a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c922a7:;
  /* 10c922a7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c922aa push eax */
  push32((uint32_t)(EAX));
  /* 10c922ab call dword ptr [0x10cc0270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0270))), 0x10c922b1u);
  /* 10c922b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c922b4 mov esp, ebp */
  ESP = (EBP);
  /* 10c922b6 pop ebp */
  EBP = (pop32());
  /* 10c922b7 ret  */
  ESPCHK(0x10c92220u, _esp0);
  ESP += 4; return;
}

/* FUN_100022c0 @ 0x10c922c0 (263 bytes, 86 insns) */
void f_10c922c0(void) {
  FTRACE(0x10c922c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c922c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c922c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c922c3 cmp dword ptr [0x10cbca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c922ca je 0x10c923c5 */
  if (C.zf) goto L_10c923c5;
  /* 10c922d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c922d4 jne 0x10c922e5 */
  if (!C.zf) goto L_10c922e5;
  /* 10c922d6 mov eax, dword ptr [0x10cbca5c] */
  EAX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c922db push eax */
  push32((uint32_t)(EAX));
  /* 10c922dc call dword ptr [0x10cc0274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0274))), 0x10c922e2u);
  /* 10c922e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c922e5:;
  /* 10c922e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c922e9 je 0x10c923b6 */
  if (C.zf) goto L_10c923b6;
  /* 10c922ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c922f2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c922f6 je 0x10c92309 */
  if (C.zf) goto L_10c92309;
  /* 10c922f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c922fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c922fd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10c92300 push eax */
  push32((uint32_t)(EAX));
  /* 10c92301 call 0x10c93270 */
  push32(0x10c92306u); f_10c93270();
  /* 10c92306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92309:;
  /* 10c92309 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9230c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92310 je 0x10c92323 */
  if (C.zf) goto L_10c92323;
  /* 10c92312 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92314 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92317 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10c9231a push eax */
  push32((uint32_t)(EAX));
  /* 10c9231b call 0x10c93270 */
  push32(0x10c92320u); f_10c93270();
  /* 10c92320 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92323:;
  /* 10c92323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92326 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9232a je 0x10c9233d */
  if (C.zf) goto L_10c9233d;
  /* 10c9232c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9232e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92331 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c92334 push eax */
  push32((uint32_t)(EAX));
  /* 10c92335 call 0x10c93270 */
  push32(0x10c9233au); f_10c93270();
  /* 10c9233a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9233d:;
  /* 10c9233d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92340 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92344 je 0x10c92357 */
  if (C.zf) goto L_10c92357;
  /* 10c92346 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9234b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10c9234e push eax */
  push32((uint32_t)(EAX));
  /* 10c9234f call 0x10c93270 */
  push32(0x10c92354u); f_10c93270();
  /* 10c92354 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92357:;
  /* 10c92357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9235a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9235e je 0x10c92371 */
  if (C.zf) goto L_10c92371;
  /* 10c92360 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92362 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92365 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10c92368 push eax */
  push32((uint32_t)(EAX));
  /* 10c92369 call 0x10c93270 */
  push32(0x10c9236eu); f_10c93270();
  /* 10c9236e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92371:;
  /* 10c92371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92374 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92378 je 0x10c9238b */
  if (C.zf) goto L_10c9238b;
  /* 10c9237a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9237c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9237f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10c92382 push eax */
  push32((uint32_t)(EAX));
  /* 10c92383 call 0x10c93270 */
  push32(0x10c92388u); f_10c93270();
  /* 10c92388 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9238b:;
  /* 10c9238b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9238e cmp dword ptr [ecx + 0x50], 0x10cbcc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10cbcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92395 je 0x10c923a8 */
  if (C.zf) goto L_10c923a8;
  /* 10c92397 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92399 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9239c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c9239f push eax */
  push32((uint32_t)(EAX));
  /* 10c923a0 call 0x10c93270 */
  push32(0x10c923a5u); f_10c93270();
  /* 10c923a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c923a8:;
  /* 10c923a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c923aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c923ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c923ae call 0x10c93270 */
  push32(0x10c923b3u); f_10c93270();
  /* 10c923b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c923b6:;
  /* 10c923b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c923b8 mov edx, dword ptr [0x10cbca5c] */
  EDX = (r32((uint32_t)(0x10cbca5c)));
  /* 10c923be push edx */
  push32((uint32_t)(EDX));
  /* 10c923bf call dword ptr [0x10cc0264] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0264))), 0x10c923c5u);
L_10c923c5:;
  /* 10c923c5 pop ebp */
  EBP = (pop32());
  /* 10c923c6 ret  */
  ESPCHK(0x10c922c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023d0 @ 0x10c923d0 (11 bytes, 5 insns) */
void f_10c923d0(void) {
  FTRACE(0x10c923d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c923d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c923d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c923d3 call dword ptr [0x10cc0260] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0260))), 0x10c923d9u);
  /* 10c923d9 pop ebp */
  EBP = (pop32());
  /* 10c923da ret  */
  ESPCHK(0x10c923d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023e0 @ 0x10c923e0 (11 bytes, 5 insns) */
void f_10c923e0(void) {
  FTRACE(0x10c923e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c923e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c923e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c923e3 call dword ptr [0x10cc027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc027c))), 0x10c923e9u);
  /* 10c923e9 pop ebp */
  EBP = (pop32());
  /* 10c923ea ret  */
  ESPCHK(0x10c923e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100023f0 @ 0x10c923f0 (804 bytes, 236 insns) */
void f_10c923f0(void) {
  FTRACE(0x10c923f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c923f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c923f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c923f3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c923f6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10c923fb push 0x10cb9374 */
  push32((uint32_t)(0x10cb9374u));
  /* 10c92400 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92402 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c92407 call 0x10c927e0 */
  push32(0x10c9240cu); f_10c927e0();
  /* 10c9240c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9240f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c92412 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92416 jne 0x10c92422 */
  if (!C.zf) goto L_10c92422;
  /* 10c92418 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10c9241a call 0x10c91750 */
  push32(0x10c9241fu); f_10c91750();
  /* 10c9241f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c92422:;
  /* 10c92422 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92425 mov dword ptr [0x10cbfde0], eax */
  w32((uint32_t)(0x10cbfde0), (EAX));
  /* 10c9242a mov dword ptr [0x10cbff1c], 0x20 */
  w32((uint32_t)(0x10cbff1c), (0x20u));
  /* 10c92434 jmp 0x10c9243f */
  goto L_10c9243f;
L_10c92436:;
  /* 10c92436 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92439 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9243c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10c9243f:;
  /* 10c9243f mov edx, dword ptr [0x10cbfde0] */
  EDX = (r32((uint32_t)(0x10cbfde0)));
  /* 10c92445 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9244b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9244e jae 0x10c92473 */
  if (!C.cf) goto L_10c92473;
  /* 10c92450 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92453 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c92457 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9245a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c92460 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92463 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c92467 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9246a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c92471 jmp 0x10c92436 */
  goto L_10c92436;
L_10c92473:;
  /* 10c92473 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c92476 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92477 call dword ptr [0x10cc0288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0288))), 0x10c9247du);
  /* 10c9247d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10c92480 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c92486 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c92488 je 0x10c92615 */
  if (C.zf) goto L_10c92615;
  /* 10c9248e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92492 je 0x10c92615 */
  if (C.zf) goto L_10c92615;
  /* 10c92498 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9249b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c9249d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10c924a0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c924a3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c924a6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c924a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c924ac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c924af mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10c924b2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c924b9 jge 0x10c924c3 */
  if ((C.sf==C.of)) goto L_10c924c3;
  /* 10c924bb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10c924be mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10c924c1 jmp 0x10c924ca */
  goto L_10c924ca;
L_10c924c3:;
  /* 10c924c3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10c924ca:;
  /* 10c924ca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10c924cd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c924d0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10c924d7 jmp 0x10c924e2 */
  goto L_10c924e2;
L_10c924d9:;
  /* 10c924d9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c924dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c924df mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10c924e2:;
  /* 10c924e2 mov ecx, dword ptr [0x10cbff1c] */
  ECX = (r32((uint32_t)(0x10cbff1c)));
  /* 10c924e8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c924eb jge 0x10c92582 */
  if ((C.sf==C.of)) goto L_10c92582;
  /* 10c924f1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10c924f6 push 0x10cb9374 */
  push32((uint32_t)(0x10cb9374u));
  /* 10c924fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c924fd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10c92502 call 0x10c927e0 */
  push32(0x10c92507u); f_10c927e0();
  /* 10c92507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9250a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10c9250d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92511 jne 0x10c9251e */
  if (!C.zf) goto L_10c9251e;
  /* 10c92513 mov edx, dword ptr [0x10cbff1c] */
  EDX = (r32((uint32_t)(0x10cbff1c)));
  /* 10c92519 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10c9251c jmp 0x10c92582 */
  goto L_10c92582;
L_10c9251e:;
  /* 10c9251e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c92521 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92524 mov dword ptr [eax*4 + 0x10cbfde0], ecx */
  w32((uint32_t)(EAX*4 + 0x10cbfde0), (ECX));
  /* 10c9252b mov edx, dword ptr [0x10cbff1c] */
  EDX = (r32((uint32_t)(0x10cbff1c)));
  /* 10c92531 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92534 mov dword ptr [0x10cbff1c], edx */
  w32((uint32_t)(0x10cbff1c), (EDX));
  /* 10c9253a jmp 0x10c92545 */
  goto L_10c92545;
L_10c9253c:;
  /* 10c9253c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9253f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92542 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10c92545:;
  /* 10c92545 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10c92548 mov edx, dword ptr [ecx*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbfde0)));
  /* 10c9254f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92555 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92558 jae 0x10c9257d */
  if (!C.cf) goto L_10c9257d;
  /* 10c9255a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9255d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c92561 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92564 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10c9256a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9256d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10c92571 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92574 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c9257b jmp 0x10c9253c */
  goto L_10c9253c;
L_10c9257d:;
  /* 10c9257d jmp 0x10c924d9 */
  goto L_10c924d9;
L_10c92582:;
  /* 10c92582 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c92589 jmp 0x10c925a6 */
  goto L_10c925a6;
L_10c9258b:;
  /* 10c9258b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c9258e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92591 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10c92594 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92597 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9259a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9259d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c925a0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c925a3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10c925a6:;
  /* 10c925a6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c925a9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c925ac jge 0x10c92615 */
  if ((C.sf==C.of)) goto L_10c92615;
  /* 10c925ae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c925b1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c925b4 je 0x10c92610 */
  if (C.zf) goto L_10c92610;
  /* 10c925b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c925b9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c925bc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10c925bf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c925c1 je 0x10c92610 */
  if (C.zf) goto L_10c92610;
  /* 10c925c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c925c6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c925c9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10c925cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c925ce jne 0x10c925e0 */
  if (!C.zf) goto L_10c925e0;
  /* 10c925d0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c925d3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c925d5 push edx */
  push32((uint32_t)(EDX));
  /* 10c925d6 call dword ptr [0x10cc0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0284))), 0x10c925dcu);
  /* 10c925dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c925de je 0x10c92610 */
  if (C.zf) goto L_10c92610;
L_10c925e0:;
  /* 10c925e0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c925e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10c925e6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c925e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10c925ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c925ef mov edx, dword ptr [eax*4 + 0x10cbfde0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c925f6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c925f8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c925fb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c925fe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10c92601 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c92603 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c92605 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92608 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9260b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9260d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10c92610:;
  /* 10c92610 jmp 0x10c9258b */
  goto L_10c9258b;
L_10c92615:;
  /* 10c92615 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10c9261c jmp 0x10c92627 */
  goto L_10c92627;
L_10c9261e:;
  /* 10c9261e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c92621 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92624 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10c92627:;
  /* 10c92627 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9262b jge 0x10c92704 */
  if ((C.sf==C.of)) goto L_10c92704;
  /* 10c92631 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c92634 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c92637 mov edx, dword ptr [0x10cbfde0] */
  EDX = (r32((uint32_t)(0x10cbfde0)));
  /* 10c9263d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9263f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10c92642 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92645 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92648 jne 0x10c926f0 */
  if (!C.zf) goto L_10c926f0;
  /* 10c9264e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c92651 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10c92655 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92659 jne 0x10c92664 */
  if (!C.zf) goto L_10c92664;
  /* 10c9265b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10c92662 jmp 0x10c92674 */
  goto L_10c92674;
L_10c92664:;
  /* 10c92664 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10c92667 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9266a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9266c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9266e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92671 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10c92674:;
  /* 10c92674 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10c92677 push eax */
  push32((uint32_t)(EAX));
  /* 10c92678 call dword ptr [0x10cc0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0234))), 0x10c9267eu);
  /* 10c9267e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10c92681 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92685 je 0x10c926df */
  if (C.zf) goto L_10c926df;
  /* 10c92687 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c9268a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9268b call dword ptr [0x10cc0284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0284))), 0x10c92691u);
  /* 10c92691 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c92694 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92698 je 0x10c926df */
  if (C.zf) goto L_10c926df;
  /* 10c9269a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9269d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c926a0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c926a2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c926a5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c926ab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c926ae jne 0x10c926c0 */
  if (!C.zf) goto L_10c926c0;
  /* 10c926b0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926b3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10c926b6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10c926b8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926bb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10c926be jmp 0x10c926dd */
  goto L_10c926dd;
L_10c926c0:;
  /* 10c926c0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10c926c3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c926c9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c926cc jne 0x10c926dd */
  if (!C.zf) goto L_10c926dd;
  /* 10c926ce mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926d1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c926d4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10c926d7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926da mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c926dd:;
  /* 10c926dd jmp 0x10c926ee */
  goto L_10c926ee;
L_10c926df:;
  /* 10c926df mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926e2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c926e5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10c926e8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926eb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c926ee:;
  /* 10c926ee jmp 0x10c926ff */
  goto L_10c926ff;
L_10c926f0:;
  /* 10c926f0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926f3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10c926f6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10c926f9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c926fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10c926ff:;
  /* 10c926ff jmp 0x10c9261e */
  goto L_10c9261e;
L_10c92704:;
  /* 10c92704 mov eax, dword ptr [0x10cbff1c] */
  EAX = (r32((uint32_t)(0x10cbff1c)));
  /* 10c92709 push eax */
  push32((uint32_t)(EAX));
  /* 10c9270a call dword ptr [0x10cc0280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0280))), 0x10c92710u);
  /* 10c92710 mov esp, ebp */
  ESP = (EBP);
  /* 10c92712 pop ebp */
  EBP = (pop32());
  /* 10c92713 ret  */
  ESPCHK(0x10c923f0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10c92720 (155 bytes, 45 insns) */
void f_10c92720(void) {
  FTRACE(0x10c92720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92720 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92721 mov ebp, esp */
  EBP = (ESP);
  /* 10c92723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92726 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9272d jmp 0x10c92738 */
  goto L_10c92738;
L_10c9272f:;
  /* 10c9272f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92732 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92735 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c92738:;
  /* 10c92738 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9273c jge 0x10c927b7 */
  if ((C.sf==C.of)) goto L_10c927b7;
  /* 10c9273e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92741 cmp dword ptr [ecx*4 + 0x10cbfde0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cbfde0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92749 je 0x10c927b2 */
  if (C.zf) goto L_10c927b2;
  /* 10c9274b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9274e mov eax, dword ptr [edx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c92755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92758 jmp 0x10c92763 */
  goto L_10c92763;
L_10c9275a:;
  /* 10c9275a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9275d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92760 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c92763:;
  /* 10c92763 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92766 mov eax, dword ptr [edx*4 + 0x10cbfde0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbfde0)));
  /* 10c9276d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92772 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92775 jae 0x10c9278f */
  if (!C.cf) goto L_10c9278f;
  /* 10c92777 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9277a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9277e je 0x10c9278d */
  if (C.zf) goto L_10c9278d;
  /* 10c92780 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92783 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92786 push edx */
  push32((uint32_t)(EDX));
  /* 10c92787 call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c9278du);
L_10c9278d:;
  /* 10c9278d jmp 0x10c9275a */
  goto L_10c9275a;
L_10c9278f:;
  /* 10c9278f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92791 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92794 mov ecx, dword ptr [eax*4 + 0x10cbfde0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbfde0)));
  /* 10c9279b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9279c call 0x10c93270 */
  push32(0x10c927a1u); f_10c93270();
  /* 10c927a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c927a4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c927a7 mov dword ptr [edx*4 + 0x10cbfde0], 0 */
  w32((uint32_t)(EDX*4 + 0x10cbfde0), (0x0u));
L_10c927b2:;
  /* 10c927b2 jmp 0x10c9272f */
  goto L_10c9272f;
L_10c927b7:;
  /* 10c927b7 mov esp, ebp */
  ESP = (EBP);
  /* 10c927b9 pop ebp */
  EBP = (pop32());
  /* 10c927ba ret  */
  ESPCHK(0x10c92720u, _esp0);
  ESP += 4; return;
}

/* FUN_100027c0 @ 0x10c927c0 (29 bytes, 13 insns) */
void f_10c927c0(void) {
  FTRACE(0x10c927c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c927c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c927c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c927c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c927c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c927c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c927c9 mov eax, dword ptr [0x10cbe5e8] */
  EAX = (r32((uint32_t)(0x10cbe5e8)));
  /* 10c927ce push eax */
  push32((uint32_t)(EAX));
  /* 10c927cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c927d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c927d3 call 0x10c92830 */
  push32(0x10c927d8u); f_10c92830();
  /* 10c927d8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c927db pop ebp */
  EBP = (pop32());
  /* 10c927dc ret  */
  ESPCHK(0x10c927c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100027e0 @ 0x10c927e0 (35 bytes, 16 insns) */
void f_10c927e0(void) {
  FTRACE(0x10c927e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c927e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c927e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c927e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c927e6 push eax */
  push32((uint32_t)(EAX));
  /* 10c927e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c927ea push ecx */
  push32((uint32_t)(ECX));
  /* 10c927eb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c927ee push edx */
  push32((uint32_t)(EDX));
  /* 10c927ef mov eax, dword ptr [0x10cbe5e8] */
  EAX = (r32((uint32_t)(0x10cbe5e8)));
  /* 10c927f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c927f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c927f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c927f9 call 0x10c92830 */
  push32(0x10c927feu); f_10c92830();
  /* 10c927fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92801 pop ebp */
  EBP = (pop32());
  /* 10c92802 ret  */
  ESPCHK(0x10c927e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002810 @ 0x10c92810 (27 bytes, 13 insns) */
void f_10c92810(void) {
  FTRACE(0x10c92810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92811 mov ebp, esp */
  EBP = (ESP);
  /* 10c92813 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92815 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92817 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92819 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9281c push eax */
  push32((uint32_t)(EAX));
  /* 10c9281d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92820 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92821 call 0x10c92830 */
  push32(0x10c92826u); f_10c92830();
  /* 10c92826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92829 pop ebp */
  EBP = (pop32());
  /* 10c9282a ret  */
  ESPCHK(0x10c92810u, _esp0);
  ESP += 4; return;
}

/* FUN_10002830 @ 0x10c92830 (94 bytes, 38 insns) */
void f_10c92830(void) {
  FTRACE(0x10c92830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92830 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92831 mov ebp, esp */
  EBP = (ESP);
  /* 10c92833 push ecx */
  push32((uint32_t)(ECX));
L_10c92834:;
  /* 10c92834 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c92836 call 0x10c961e0 */
  push32(0x10c9283bu); f_10c961e0();
  /* 10c9283b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9283e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92841 push eax */
  push32((uint32_t)(EAX));
  /* 10c92842 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92845 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92846 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92849 push edx */
  push32((uint32_t)(EDX));
  /* 10c9284a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9284d push eax */
  push32((uint32_t)(EAX));
  /* 10c9284e call 0x10c928b0 */
  push32(0x10c92853u); f_10c928b0();
  /* 10c92853 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92859 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c9285b call 0x10c96280 */
  push32(0x10c92860u); f_10c96280();
  /* 10c92860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92863 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92867 jne 0x10c9286f */
  if (!C.zf) goto L_10c9286f;
  /* 10c92869 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9286d jne 0x10c92874 */
  if (!C.zf) goto L_10c92874;
L_10c9286f:;
  /* 10c9286f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92872 jmp 0x10c9288a */
  goto L_10c9288a;
L_10c92874:;
  /* 10c92874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92877 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92878 call 0x10c96520 */
  push32(0x10c9287du); f_10c96520();
  /* 10c9287d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92880 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92882 jne 0x10c92888 */
  if (!C.zf) goto L_10c92888;
  /* 10c92884 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92886 jmp 0x10c9288a */
  goto L_10c9288a;
L_10c92888:;
  /* 10c92888 jmp 0x10c92834 */
  goto L_10c92834;
L_10c9288a:;
  /* 10c9288a mov esp, ebp */
  ESP = (EBP);
  /* 10c9288c pop ebp */
  EBP = (pop32());
  /* 10c9288d ret  */
  ESPCHK(0x10c92830u, _esp0);
  ESP += 4; return;
}

/* FUN_10002890 @ 0x10c92890 (23 bytes, 11 insns) */
void f_10c92890(void) {
  FTRACE(0x10c92890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92890 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92891 mov ebp, esp */
  EBP = (ESP);
  /* 10c92893 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92895 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92897 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9289c push eax */
  push32((uint32_t)(EAX));
  /* 10c9289d call 0x10c928b0 */
  push32(0x10c928a2u); f_10c928b0();
  /* 10c928a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c928a5 pop ebp */
  EBP = (pop32());
  /* 10c928a6 ret  */
  ESPCHK(0x10c92890u, _esp0);
  ESP += 4; return;
}

/* FUN_100028b0 @ 0x10c928b0 (787 bytes, 254 insns) */
void f_10c928b0(void) {
  FTRACE(0x10c928b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c928b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c928b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c928b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c928b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c928b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c928b8 push edi */
  push32((uint32_t)(EDI));
  /* 10c928b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c928c0 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c928c5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c928c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c928ca je 0x10c928fc */
  if (C.zf) goto L_10c928fc;
L_10c928cc:;
  /* 10c928cc call 0x10c93980 */
  push32(0x10c928d1u); f_10c93980();
  /* 10c928d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c928d3 jne 0x10c928f6 */
  if (!C.zf) goto L_10c928f6;
  /* 10c928d5 push 0x10cb9468 */
  push32((uint32_t)(0x10cb9468u));
  /* 10c928da push 0 */
  push32((uint32_t)(0x0u));
  /* 10c928dc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10c928e1 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c928e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c928e8 call 0x10c918a0 */
  push32(0x10c928edu); f_10c918a0();
  /* 10c928ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c928f0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c928f3 jne 0x10c928f6 */
  if (!C.zf) goto L_10c928f6;
  /* 10c928f5 int3  */
  x86_unimpl("int3 @ 0x10c928f5");
L_10c928f6:;
  /* 10c928f6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c928f8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c928fa jne 0x10c928cc */
  if (!C.zf) goto L_10c928cc;
L_10c928fc:;
  /* 10c928fc mov edx, dword ptr [0x10cbca88] */
  EDX = (r32((uint32_t)(0x10cbca88)));
  /* 10c92902 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c92905 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92908 cmp eax, dword ptr [0x10cbca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9290e jne 0x10c92911 */
  if (!C.zf) goto L_10c92911;
  /* 10c92910 int3  */
  x86_unimpl("int3 @ 0x10c92910");
L_10c92911:;
  /* 10c92911 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92914 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92915 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92918 push edx */
  push32((uint32_t)(EDX));
  /* 10c92919 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9291c push eax */
  push32((uint32_t)(EAX));
  /* 10c9291d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92920 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92921 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92924 push edx */
  push32((uint32_t)(EDX));
  /* 10c92925 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92927 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92929 call dword ptr [0x10cbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbcc90))), 0x10c9292fu);
  /* 10c9292f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92932 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92934 jne 0x10c92994 */
  if (!C.zf) goto L_10c92994;
  /* 10c92936 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9293a je 0x10c92967 */
  if (C.zf) goto L_10c92967;
L_10c9293c:;
  /* 10c9293c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9293f push eax */
  push32((uint32_t)(EAX));
  /* 10c92940 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92943 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92944 push 0x10cb9424 */
  push32((uint32_t)(0x10cb9424u));
  /* 10c92949 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9294b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9294d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9294f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92951 call 0x10c918a0 */
  push32(0x10c92956u); f_10c918a0();
  /* 10c92956 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9295c jne 0x10c9295f */
  if (!C.zf) goto L_10c9295f;
  /* 10c9295e int3  */
  x86_unimpl("int3 @ 0x10c9295e");
L_10c9295f:;
  /* 10c9295f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c92961 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c92963 jne 0x10c9293c */
  if (!C.zf) goto L_10c9293c;
  /* 10c92965 jmp 0x10c9298d */
  goto L_10c9298d;
L_10c92967:;
  /* 10c92967 push 0x10cb9400 */
  push32((uint32_t)(0x10cb9400u));
  /* 10c9296c push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c92971 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92973 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92975 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92977 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92979 call 0x10c918a0 */
  push32(0x10c9297eu); f_10c918a0();
  /* 10c9297e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92981 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92984 jne 0x10c92987 */
  if (!C.zf) goto L_10c92987;
  /* 10c92986 int3  */
  x86_unimpl("int3 @ 0x10c92986");
L_10c92987:;
  /* 10c92987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9298b jne 0x10c92967 */
  if (!C.zf) goto L_10c92967;
L_10c9298d:;
  /* 10c9298d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9298f jmp 0x10c92bbc */
  goto L_10c92bbc;
L_10c92994:;
  /* 10c92994 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92997 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9299d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c929a0 je 0x10c929b6 */
  if (C.zf) goto L_10c929b6;
  /* 10c929a2 mov edx, dword ptr [0x10cbca84] */
  EDX = (r32((uint32_t)(0x10cbca84)));
  /* 10c929a8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10c929ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c929ad jne 0x10c929b6 */
  if (!C.zf) goto L_10c929b6;
  /* 10c929af mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10c929b6:;
  /* 10c929b6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c929ba ja 0x10c929c7 */
  if ((!C.cf&&!C.zf)) goto L_10c929c7;
  /* 10c929bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c929bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c929c2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c929c5 jbe 0x10c929f3 */
  if ((C.cf||C.zf)) goto L_10c929f3;
L_10c929c7:;
  /* 10c929c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c929ca push ecx */
  push32((uint32_t)(ECX));
  /* 10c929cb push 0x10cb93d8 */
  push32((uint32_t)(0x10cb93d8u));
  /* 10c929d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c929d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c929d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c929d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c929d8 call 0x10c918a0 */
  push32(0x10c929ddu); f_10c918a0();
  /* 10c929dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c929e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c929e3 jne 0x10c929e6 */
  if (!C.zf) goto L_10c929e6;
  /* 10c929e5 int3  */
  x86_unimpl("int3 @ 0x10c929e5");
L_10c929e6:;
  /* 10c929e6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c929e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c929ea jne 0x10c929c7 */
  if (!C.zf) goto L_10c929c7;
  /* 10c929ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c929ee jmp 0x10c92bbc */
  goto L_10c92bbc;
L_10c929f3:;
  /* 10c929f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c929f6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c929fb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c929fe je 0x10c92a40 */
  if (C.zf) goto L_10c92a40;
  /* 10c92a00 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a04 je 0x10c92a40 */
  if (C.zf) goto L_10c92a40;
  /* 10c92a06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92a09 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c92a0f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a12 je 0x10c92a40 */
  if (C.zf) goto L_10c92a40;
  /* 10c92a14 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a18 je 0x10c92a40 */
  if (C.zf) goto L_10c92a40;
L_10c92a1a:;
  /* 10c92a1a push 0x10cb93a4 */
  push32((uint32_t)(0x10cb93a4u));
  /* 10c92a1f push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c92a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92a2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92a2c call 0x10c918a0 */
  push32(0x10c92a31u); f_10c918a0();
  /* 10c92a31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92a34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a37 jne 0x10c92a3a */
  if (!C.zf) goto L_10c92a3a;
  /* 10c92a39 int3  */
  x86_unimpl("int3 @ 0x10c92a39");
L_10c92a3a:;
  /* 10c92a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c92a3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c92a3e jne 0x10c92a1a */
  if (!C.zf) goto L_10c92a1a;
L_10c92a40:;
  /* 10c92a40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92a43 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92a46 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c92a49 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c92a4c push ecx */
  push32((uint32_t)(ECX));
  /* 10c92a4d call 0x10c96630 */
  push32(0x10c92a52u); f_10c96630();
  /* 10c92a52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92a55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92a58 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a5c jne 0x10c92a65 */
  if (!C.zf) goto L_10c92a65;
  /* 10c92a5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92a60 jmp 0x10c92bbc */
  goto L_10c92bbc;
L_10c92a65:;
  /* 10c92a65 mov edx, dword ptr [0x10cbca88] */
  EDX = (r32((uint32_t)(0x10cbca88)));
  /* 10c92a6b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92a6e mov dword ptr [0x10cbca88], edx */
  w32((uint32_t)(0x10cbca88), (EDX));
  /* 10c92a74 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92a78 je 0x10c92ac3 */
  if (C.zf) goto L_10c92ac3;
  /* 10c92a7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92a7d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c92a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92a86 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10c92a8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92a90 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c92a97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92a9a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10c92aa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92aa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92aa7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c92aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92aad mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10c92ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92ab7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10c92abe jmp 0x10c92b63 */
  goto L_10c92b63;
L_10c92ac3:;
  /* 10c92ac3 mov edx, dword ptr [0x10cbe448] */
  EDX = (r32((uint32_t)(0x10cbe448)));
  /* 10c92ac9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92acc mov dword ptr [0x10cbe448], edx */
  w32((uint32_t)(0x10cbe448), (EDX));
  /* 10c92ad2 mov eax, dword ptr [0x10cbe450] */
  EAX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92ad7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92ada mov dword ptr [0x10cbe450], eax */
  w32((uint32_t)(0x10cbe450), (EAX));
  /* 10c92adf mov ecx, dword ptr [0x10cbe450] */
  ECX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92ae5 cmp ecx, dword ptr [0x10cbe454] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbe454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92aeb jbe 0x10c92af9 */
  if ((C.cf||C.zf)) goto L_10c92af9;
  /* 10c92aed mov edx, dword ptr [0x10cbe450] */
  EDX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92af3 mov dword ptr [0x10cbe454], edx */
  w32((uint32_t)(0x10cbe454), (EDX));
L_10c92af9:;
  /* 10c92af9 cmp dword ptr [0x10cbe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92b00 je 0x10c92b0f */
  if (C.zf) goto L_10c92b0f;
  /* 10c92b02 mov eax, dword ptr [0x10cbe44c] */
  EAX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c92b07 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b0a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c92b0d jmp 0x10c92b18 */
  goto L_10c92b18;
L_10c92b0f:;
  /* 10c92b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b12 mov dword ptr [0x10cbe444], edx */
  w32((uint32_t)(0x10cbe444), (EDX));
L_10c92b18:;
  /* 10c92b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b1b mov ecx, dword ptr [0x10cbe44c] */
  ECX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c92b21 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c92b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b26 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10c92b2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92b33 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10c92b36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b39 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92b3c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10c92b3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92b45 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10c92b48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b4b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92b4e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10c92b51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92b57 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10c92b5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b5d mov dword ptr [0x10cbe44c], ecx */
  w32((uint32_t)(0x10cbe44c), (ECX));
L_10c92b63:;
  /* 10c92b63 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c92b65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c92b67 mov dl, byte ptr [0x10cbca90] */
  DL = (r8((uint32_t)(0x10cbca90)));
  /* 10c92b6d push edx */
  push32((uint32_t)(EDX));
  /* 10c92b6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b71 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92b74 push eax */
  push32((uint32_t)(EAX));
  /* 10c92b75 call 0x10c96550 */
  push32(0x10c92b7au); f_10c96550();
  /* 10c92b7a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92b7d push 4 */
  push32((uint32_t)(0x4u));
  /* 10c92b7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c92b81 mov cl, byte ptr [0x10cbca90] */
  CL = (r8((uint32_t)(0x10cbca90)));
  /* 10c92b87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92b88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92b8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92b8e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10c92b92 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92b93 call 0x10c96550 */
  push32(0x10c92b98u); f_10c96550();
  /* 10c92b98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92b9e push edx */
  push32((uint32_t)(EDX));
  /* 10c92b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92ba1 mov al, byte ptr [0x10cbca92] */
  AL = (r8((uint32_t)(0x10cbca92)));
  /* 10c92ba6 push eax */
  push32((uint32_t)(EAX));
  /* 10c92ba7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92baa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92bad push ecx */
  push32((uint32_t)(ECX));
  /* 10c92bae call 0x10c96550 */
  push32(0x10c92bb3u); f_10c96550();
  /* 10c92bb3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92bb9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c92bbc:;
  /* 10c92bbc pop edi */
  EDI = (pop32());
  /* 10c92bbd pop esi */
  ESI = (pop32());
  /* 10c92bbe pop ebx */
  EBX = (pop32());
  /* 10c92bbf mov esp, ebp */
  ESP = (EBP);
  /* 10c92bc1 pop ebp */
  EBP = (pop32());
  /* 10c92bc2 ret  */
  ESPCHK(0x10c928b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002bd0 @ 0x10c92bd0 (27 bytes, 13 insns) */
void f_10c92bd0(void) {
  FTRACE(0x10c92bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c92bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92bd9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92bdc push eax */
  push32((uint32_t)(EAX));
  /* 10c92bdd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92be0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92be1 call 0x10c92bf0 */
  push32(0x10c92be6u); f_10c92bf0();
  /* 10c92be6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92be9 pop ebp */
  EBP = (pop32());
  /* 10c92bea ret  */
  ESPCHK(0x10c92bd0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10c92bf0 (96 bytes, 37 insns) */
void f_10c92bf0(void) {
  FTRACE(0x10c92bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c92bf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92bf9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c92bfd mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c92c00 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c04 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92c07 push edx */
  push32((uint32_t)(EDX));
  /* 10c92c08 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92c0b push eax */
  push32((uint32_t)(EAX));
  /* 10c92c0c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92c0f push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c10 call 0x10c927e0 */
  push32(0x10c92c15u); f_10c927e0();
  /* 10c92c15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c92c1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92c1f je 0x10c92c49 */
  if (C.zf) goto L_10c92c49;
  /* 10c92c21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92c24 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c92c27 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92c2a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c2d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c92c30:;
  /* 10c92c30 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92c33 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92c36 jae 0x10c92c49 */
  if (!C.cf) goto L_10c92c49;
  /* 10c92c38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92c3b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c92c3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92c41 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c92c47 jmp 0x10c92c30 */
  goto L_10c92c30;
L_10c92c49:;
  /* 10c92c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92c4c mov esp, ebp */
  ESP = (EBP);
  /* 10c92c4e pop ebp */
  EBP = (pop32());
  /* 10c92c4f ret  */
  ESPCHK(0x10c92bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c50 @ 0x10c92c50 (27 bytes, 13 insns) */
void f_10c92c50(void) {
  FTRACE(0x10c92c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92c50 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92c51 mov ebp, esp */
  EBP = (ESP);
  /* 10c92c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92c59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92c5c push eax */
  push32((uint32_t)(EAX));
  /* 10c92c5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92c60 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c61 call 0x10c92c70 */
  push32(0x10c92c66u); f_10c92c70();
  /* 10c92c66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c69 pop ebp */
  EBP = (pop32());
  /* 10c92c6a ret  */
  ESPCHK(0x10c92c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10002c70 @ 0x10c92c70 (64 bytes, 27 insns) */
void f_10c92c70(void) {
  FTRACE(0x10c92c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92c71 mov ebp, esp */
  EBP = (ESP);
  /* 10c92c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c74 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c92c76 call 0x10c961e0 */
  push32(0x10c92c7bu); f_10c961e0();
  /* 10c92c7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92c80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92c83 push eax */
  push32((uint32_t)(EAX));
  /* 10c92c84 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92c87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c88 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92c8b push edx */
  push32((uint32_t)(EDX));
  /* 10c92c8c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92c8f push eax */
  push32((uint32_t)(EAX));
  /* 10c92c90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92c93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92c94 call 0x10c92cb0 */
  push32(0x10c92c99u); f_10c92cb0();
  /* 10c92c99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92c9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c92c9f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c92ca1 call 0x10c96280 */
  push32(0x10c92ca6u); f_10c96280();
  /* 10c92ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c92cac mov esp, ebp */
  ESP = (EBP);
  /* 10c92cae pop ebp */
  EBP = (pop32());
  /* 10c92caf ret  */
  ESPCHK(0x10c92c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10002cb0 @ 0x10c92cb0 (1297 bytes, 431 insns) */
void f_10c92cb0(void) {
  FTRACE(0x10c92cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c92cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c92cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10c92cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c92cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10c92cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10c92cb9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c92cc0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92cc4 jne 0x10c92ce3 */
  if (!C.zf) goto L_10c92ce3;
  /* 10c92cc6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92cc9 push eax */
  push32((uint32_t)(EAX));
  /* 10c92cca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92ccd push ecx */
  push32((uint32_t)(ECX));
  /* 10c92cce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92cd1 push edx */
  push32((uint32_t)(EDX));
  /* 10c92cd2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92cd5 push eax */
  push32((uint32_t)(EAX));
  /* 10c92cd6 call 0x10c927e0 */
  push32(0x10c92cdbu); f_10c927e0();
  /* 10c92cdb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92cde jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92ce3:;
  /* 10c92ce3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92ce7 je 0x10c92d06 */
  if (C.zf) goto L_10c92d06;
  /* 10c92ce9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92ced jne 0x10c92d06 */
  if (!C.zf) goto L_10c92d06;
  /* 10c92cef mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92cf3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92cf6 push edx */
  push32((uint32_t)(EDX));
  /* 10c92cf7 call 0x10c93270 */
  push32(0x10c92cfcu); f_10c93270();
  /* 10c92cfc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92cff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92d01 jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92d06:;
  /* 10c92d06 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c92d0b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c92d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92d10 je 0x10c92d42 */
  if (C.zf) goto L_10c92d42;
L_10c92d12:;
  /* 10c92d12 call 0x10c93980 */
  push32(0x10c92d17u); f_10c93980();
  /* 10c92d17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92d19 jne 0x10c92d3c */
  if (!C.zf) goto L_10c92d3c;
  /* 10c92d1b push 0x10cb9468 */
  push32((uint32_t)(0x10cb9468u));
  /* 10c92d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92d22 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10c92d27 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c92d2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92d2e call 0x10c918a0 */
  push32(0x10c92d33u); f_10c918a0();
  /* 10c92d33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92d36 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92d39 jne 0x10c92d3c */
  if (!C.zf) goto L_10c92d3c;
  /* 10c92d3b int3  */
  x86_unimpl("int3 @ 0x10c92d3b");
L_10c92d3c:;
  /* 10c92d3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c92d3e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c92d40 jne 0x10c92d12 */
  if (!C.zf) goto L_10c92d12;
L_10c92d42:;
  /* 10c92d42 mov edx, dword ptr [0x10cbca88] */
  EDX = (r32((uint32_t)(0x10cbca88)));
  /* 10c92d48 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c92d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c92d4e cmp eax, dword ptr [0x10cbca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92d54 jne 0x10c92d57 */
  if (!C.zf) goto L_10c92d57;
  /* 10c92d56 int3  */
  x86_unimpl("int3 @ 0x10c92d56");
L_10c92d57:;
  /* 10c92d57 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92d5a push ecx */
  push32((uint32_t)(ECX));
  /* 10c92d5b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92d5e push edx */
  push32((uint32_t)(EDX));
  /* 10c92d5f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c92d62 push eax */
  push32((uint32_t)(EAX));
  /* 10c92d63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92d66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92d67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92d6a push edx */
  push32((uint32_t)(EDX));
  /* 10c92d6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92d6e push eax */
  push32((uint32_t)(EAX));
  /* 10c92d6f push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92d71 call dword ptr [0x10cbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbcc90))), 0x10c92d77u);
  /* 10c92d77 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92d7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92d7c jne 0x10c92ddc */
  if (!C.zf) goto L_10c92ddc;
  /* 10c92d7e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92d82 je 0x10c92daf */
  if (C.zf) goto L_10c92daf;
L_10c92d84:;
  /* 10c92d84 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c92d87 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92d88 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c92d8b push edx */
  push32((uint32_t)(EDX));
  /* 10c92d8c push 0x10cb95e4 */
  push32((uint32_t)(0x10cb95e4u));
  /* 10c92d91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92d93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92d95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92d97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92d99 call 0x10c918a0 */
  push32(0x10c92d9eu); f_10c918a0();
  /* 10c92d9e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92da1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92da4 jne 0x10c92da7 */
  if (!C.zf) goto L_10c92da7;
  /* 10c92da6 int3  */
  x86_unimpl("int3 @ 0x10c92da6");
L_10c92da7:;
  /* 10c92da7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92da9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92dab jne 0x10c92d84 */
  if (!C.zf) goto L_10c92d84;
  /* 10c92dad jmp 0x10c92dd5 */
  goto L_10c92dd5;
L_10c92daf:;
  /* 10c92daf push 0x10cb95c0 */
  push32((uint32_t)(0x10cb95c0u));
  /* 10c92db4 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c92db9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92dbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92dbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92dbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92dc1 call 0x10c918a0 */
  push32(0x10c92dc6u); f_10c918a0();
  /* 10c92dc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92dc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92dcc jne 0x10c92dcf */
  if (!C.zf) goto L_10c92dcf;
  /* 10c92dce int3  */
  x86_unimpl("int3 @ 0x10c92dce");
L_10c92dcf:;
  /* 10c92dcf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c92dd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c92dd3 jne 0x10c92daf */
  if (!C.zf) goto L_10c92daf;
L_10c92dd5:;
  /* 10c92dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92dd7 jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92ddc:;
  /* 10c92ddc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92de0 jbe 0x10c92e0e */
  if ((C.cf||C.zf)) goto L_10c92e0e;
L_10c92de2:;
  /* 10c92de2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92de5 push edx */
  push32((uint32_t)(EDX));
  /* 10c92de6 push 0x10cb9590 */
  push32((uint32_t)(0x10cb9590u));
  /* 10c92deb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92ded push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92def push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92df3 call 0x10c918a0 */
  push32(0x10c92df8u); f_10c918a0();
  /* 10c92df8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92dfb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92dfe jne 0x10c92e01 */
  if (!C.zf) goto L_10c92e01;
  /* 10c92e00 int3  */
  x86_unimpl("int3 @ 0x10c92e00");
L_10c92e01:;
  /* 10c92e01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92e05 jne 0x10c92de2 */
  if (!C.zf) goto L_10c92de2;
  /* 10c92e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92e09 jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92e0e:;
  /* 10c92e0e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e12 je 0x10c92e56 */
  if (C.zf) goto L_10c92e56;
  /* 10c92e14 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92e17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c92e1d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e20 je 0x10c92e56 */
  if (C.zf) goto L_10c92e56;
  /* 10c92e22 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92e25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c92e2b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e2e je 0x10c92e56 */
  if (C.zf) goto L_10c92e56;
L_10c92e30:;
  /* 10c92e30 push 0x10cb93a4 */
  push32((uint32_t)(0x10cb93a4u));
  /* 10c92e35 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c92e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92e3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92e40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c92e42 call 0x10c918a0 */
  push32(0x10c92e47u); f_10c918a0();
  /* 10c92e47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92e4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e4d jne 0x10c92e50 */
  if (!C.zf) goto L_10c92e50;
  /* 10c92e4f int3  */
  x86_unimpl("int3 @ 0x10c92e4f");
L_10c92e50:;
  /* 10c92e50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92e54 jne 0x10c92e30 */
  if (!C.zf) goto L_10c92e30;
L_10c92e56:;
  /* 10c92e56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92e59 push ecx */
  push32((uint32_t)(ECX));
  /* 10c92e5a call 0x10c93de0 */
  push32(0x10c92e5fu); f_10c93de0();
  /* 10c92e5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92e62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c92e64 jne 0x10c92e87 */
  if (!C.zf) goto L_10c92e87;
  /* 10c92e66 push 0x10cb956c */
  push32((uint32_t)(0x10cb956cu));
  /* 10c92e6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92e6d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10c92e72 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c92e77 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92e79 call 0x10c918a0 */
  push32(0x10c92e7eu); f_10c918a0();
  /* 10c92e7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92e81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e84 jne 0x10c92e87 */
  if (!C.zf) goto L_10c92e87;
  /* 10c92e86 int3  */
  x86_unimpl("int3 @ 0x10c92e86");
L_10c92e87:;
  /* 10c92e87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c92e89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c92e8b jne 0x10c92e56 */
  if (!C.zf) goto L_10c92e56;
  /* 10c92e8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c92e90 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92e93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c92e96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92e99 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92e9d jne 0x10c92ea6 */
  if (!C.zf) goto L_10c92ea6;
  /* 10c92e9f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10c92ea6:;
  /* 10c92ea6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92eaa je 0x10c92eea */
  if (C.zf) goto L_10c92eea;
L_10c92eac:;
  /* 10c92eac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92eaf cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92eb6 jne 0x10c92ec1 */
  if (!C.zf) goto L_10c92ec1;
  /* 10c92eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92ebb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92ebf je 0x10c92ee2 */
  if (C.zf) goto L_10c92ee2;
L_10c92ec1:;
  /* 10c92ec1 push 0x10cb9524 */
  push32((uint32_t)(0x10cb9524u));
  /* 10c92ec6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92ec8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10c92ecd push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c92ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92ed4 call 0x10c918a0 */
  push32(0x10c92ed9u); f_10c918a0();
  /* 10c92ed9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92edc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92edf jne 0x10c92ee2 */
  if (!C.zf) goto L_10c92ee2;
  /* 10c92ee1 int3  */
  x86_unimpl("int3 @ 0x10c92ee1");
L_10c92ee2:;
  /* 10c92ee2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c92ee4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c92ee6 jne 0x10c92eac */
  if (!C.zf) goto L_10c92eac;
  /* 10c92ee8 jmp 0x10c92f4e */
  goto L_10c92f4e;
L_10c92eea:;
  /* 10c92eea mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92eed mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c92ef0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c92ef5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92ef8 jne 0x10c92f0f */
  if (!C.zf) goto L_10c92f0f;
  /* 10c92efa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92efd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c92f03 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f06 jne 0x10c92f0f */
  if (!C.zf) goto L_10c92f0f;
  /* 10c92f08 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10c92f0f:;
  /* 10c92f0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92f12 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c92f15 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c92f1a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c92f1d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c92f23 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f25 je 0x10c92f48 */
  if (C.zf) goto L_10c92f48;
  /* 10c92f27 push 0x10cb94e8 */
  push32((uint32_t)(0x10cb94e8u));
  /* 10c92f2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c92f2e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10c92f33 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c92f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c92f3a call 0x10c918a0 */
  push32(0x10c92f3fu); f_10c918a0();
  /* 10c92f3f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92f42 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f45 jne 0x10c92f48 */
  if (!C.zf) goto L_10c92f48;
  /* 10c92f47 int3  */
  x86_unimpl("int3 @ 0x10c92f47");
L_10c92f48:;
  /* 10c92f48 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c92f4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c92f4c jne 0x10c92f0f */
  if (!C.zf) goto L_10c92f0f;
L_10c92f4e:;
  /* 10c92f4e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f52 je 0x10c92f79 */
  if (C.zf) goto L_10c92f79;
  /* 10c92f54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92f57 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92f5a push eax */
  push32((uint32_t)(EAX));
  /* 10c92f5b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92f5e push ecx */
  push32((uint32_t)(ECX));
  /* 10c92f5f call 0x10c96760 */
  push32(0x10c92f64u); f_10c96760();
  /* 10c92f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92f67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c92f6a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f6e jne 0x10c92f77 */
  if (!C.zf) goto L_10c92f77;
  /* 10c92f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92f72 jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92f77:;
  /* 10c92f77 jmp 0x10c92f9c */
  goto L_10c92f9c;
L_10c92f79:;
  /* 10c92f79 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c92f7c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92f7f push edx */
  push32((uint32_t)(EDX));
  /* 10c92f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c92f83 push eax */
  push32((uint32_t)(EAX));
  /* 10c92f84 call 0x10c966b0 */
  push32(0x10c92f89u); f_10c966b0();
  /* 10c92f89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92f8c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c92f8f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92f93 jne 0x10c92f9c */
  if (!C.zf) goto L_10c92f9c;
  /* 10c92f95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c92f97 jmp 0x10c931ba */
  goto L_10c931ba;
L_10c92f9c:;
  /* 10c92f9c mov ecx, dword ptr [0x10cbca88] */
  ECX = (r32((uint32_t)(0x10cbca88)));
  /* 10c92fa2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92fa5 mov dword ptr [0x10cbca88], ecx */
  w32((uint32_t)(0x10cbca88), (ECX));
  /* 10c92fab cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92faf jne 0x10c93007 */
  if (!C.zf) goto L_10c93007;
  /* 10c92fb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92fb4 mov eax, dword ptr [0x10cbe448] */
  EAX = (r32((uint32_t)(0x10cbe448)));
  /* 10c92fb9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92fbc mov dword ptr [0x10cbe448], eax */
  w32((uint32_t)(0x10cbe448), (EAX));
  /* 10c92fc1 mov ecx, dword ptr [0x10cbe448] */
  ECX = (r32((uint32_t)(0x10cbe448)));
  /* 10c92fc7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92fca mov dword ptr [0x10cbe448], ecx */
  w32((uint32_t)(0x10cbe448), (ECX));
  /* 10c92fd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c92fd3 mov eax, dword ptr [0x10cbe450] */
  EAX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92fd8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c92fdb mov dword ptr [0x10cbe450], eax */
  w32((uint32_t)(0x10cbe450), (EAX));
  /* 10c92fe0 mov ecx, dword ptr [0x10cbe450] */
  ECX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92fe6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c92fe9 mov dword ptr [0x10cbe450], ecx */
  w32((uint32_t)(0x10cbe450), (ECX));
  /* 10c92fef mov edx, dword ptr [0x10cbe450] */
  EDX = (r32((uint32_t)(0x10cbe450)));
  /* 10c92ff5 cmp edx, dword ptr [0x10cbe454] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbe454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c92ffb jbe 0x10c93007 */
  if ((C.cf||C.zf)) goto L_10c93007;
  /* 10c92ffd mov eax, dword ptr [0x10cbe450] */
  EAX = (r32((uint32_t)(0x10cbe450)));
  /* 10c93002 mov dword ptr [0x10cbe454], eax */
  w32((uint32_t)(0x10cbe454), (EAX));
L_10c93007:;
  /* 10c93007 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9300a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9300d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c93010 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93013 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93016 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93019 jbe 0x10c9303f */
  if ((C.cf||C.zf)) goto L_10c9303f;
  /* 10c9301b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9301e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93021 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93024 push edx */
  push32((uint32_t)(EDX));
  /* 10c93025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93027 mov al, byte ptr [0x10cbca92] */
  AL = (r8((uint32_t)(0x10cbca92)));
  /* 10c9302c push eax */
  push32((uint32_t)(EAX));
  /* 10c9302d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93030 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93033 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93036 push edx */
  push32((uint32_t)(EDX));
  /* 10c93037 call 0x10c96550 */
  push32(0x10c9303cu); f_10c96550();
  /* 10c9303c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9303f:;
  /* 10c9303f push 4 */
  push32((uint32_t)(0x4u));
  /* 10c93041 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93043 mov al, byte ptr [0x10cbca90] */
  AL = (r8((uint32_t)(0x10cbca90)));
  /* 10c93048 push eax */
  push32((uint32_t)(EAX));
  /* 10c93049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9304c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9304f push ecx */
  push32((uint32_t)(ECX));
  /* 10c93050 call 0x10c96550 */
  push32(0x10c93055u); f_10c96550();
  /* 10c93055 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93058 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9305c jne 0x10c93079 */
  if (!C.zf) goto L_10c93079;
  /* 10c9305e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93061 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c93064 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c93067 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9306a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c9306d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10c93070 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93073 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c93076 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10c93079:;
  /* 10c93079 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9307c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9307f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10c93082:;
  /* 10c93082 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93086 jne 0x10c930b7 */
  if (!C.zf) goto L_10c930b7;
  /* 10c93088 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9308c jne 0x10c93096 */
  if (!C.zf) goto L_10c93096;
  /* 10c9308e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93091 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93094 je 0x10c930b7 */
  if (C.zf) goto L_10c930b7;
L_10c93096:;
  /* 10c93096 push 0x10cb94b4 */
  push32((uint32_t)(0x10cb94b4u));
  /* 10c9309b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9309d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10c930a2 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c930a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c930a9 call 0x10c918a0 */
  push32(0x10c930aeu); f_10c918a0();
  /* 10c930ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c930b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c930b4 jne 0x10c930b7 */
  if (!C.zf) goto L_10c930b7;
  /* 10c930b6 int3  */
  x86_unimpl("int3 @ 0x10c930b6");
L_10c930b7:;
  /* 10c930b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c930b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c930bb jne 0x10c93082 */
  if (!C.zf) goto L_10c93082;
  /* 10c930bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c930c0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c930c3 je 0x10c930cb */
  if (C.zf) goto L_10c930cb;
  /* 10c930c5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c930c9 je 0x10c930d3 */
  if (C.zf) goto L_10c930d3;
L_10c930cb:;
  /* 10c930cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c930ce jmp 0x10c931ba */
  goto L_10c931ba;
L_10c930d3:;
  /* 10c930d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c930d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c930d9 je 0x10c930eb */
  if (C.zf) goto L_10c930eb;
  /* 10c930db mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c930de mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c930e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c930e3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c930e6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c930e9 jmp 0x10c93127 */
  goto L_10c93127;
L_10c930eb:;
  /* 10c930eb mov eax, dword ptr [0x10cbe444] */
  EAX = (r32((uint32_t)(0x10cbe444)));
  /* 10c930f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c930f3 je 0x10c93116 */
  if (C.zf) goto L_10c93116;
  /* 10c930f5 push 0x10cb9498 */
  push32((uint32_t)(0x10cb9498u));
  /* 10c930fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c930fc push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10c93101 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c93106 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c93108 call 0x10c918a0 */
  push32(0x10c9310du); f_10c918a0();
  /* 10c9310d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93110 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93113 jne 0x10c93116 */
  if (!C.zf) goto L_10c93116;
  /* 10c93115 int3  */
  x86_unimpl("int3 @ 0x10c93115");
L_10c93116:;
  /* 10c93116 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c93118 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9311a jne 0x10c930eb */
  if (!C.zf) goto L_10c930eb;
  /* 10c9311c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9311f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c93122 mov dword ptr [0x10cbe444], eax */
  w32((uint32_t)(0x10cbe444), (EAX));
L_10c93127:;
  /* 10c93127 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9312a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9312e je 0x10c9313f */
  if (C.zf) goto L_10c9313f;
  /* 10c93130 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93133 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c93136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93139 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9313b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c9313d jmp 0x10c9317a */
  goto L_10c9317a;
L_10c9313f:;
  /* 10c9313f mov eax, dword ptr [0x10cbe44c] */
  EAX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c93144 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93147 je 0x10c9316a */
  if (C.zf) goto L_10c9316a;
  /* 10c93149 push 0x10cb947c */
  push32((uint32_t)(0x10cb947cu));
  /* 10c9314e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93150 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10c93155 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c9315a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9315c call 0x10c918a0 */
  push32(0x10c93161u); f_10c918a0();
  /* 10c93161 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93167 jne 0x10c9316a */
  if (!C.zf) goto L_10c9316a;
  /* 10c93169 int3  */
  x86_unimpl("int3 @ 0x10c93169");
L_10c9316a:;
  /* 10c9316a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9316c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9316e jne 0x10c9313f */
  if (!C.zf) goto L_10c9313f;
  /* 10c93170 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93173 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c93175 mov dword ptr [0x10cbe44c], eax */
  w32((uint32_t)(0x10cbe44c), (EAX));
L_10c9317a:;
  /* 10c9317a cmp dword ptr [0x10cbe44c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe44c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93181 je 0x10c93191 */
  if (C.zf) goto L_10c93191;
  /* 10c93183 mov ecx, dword ptr [0x10cbe44c] */
  ECX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c93189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9318c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10c9318f jmp 0x10c93199 */
  goto L_10c93199;
L_10c93191:;
  /* 10c93191 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c93194 mov dword ptr [0x10cbe444], eax */
  w32((uint32_t)(0x10cbe444), (EAX));
L_10c93199:;
  /* 10c93199 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9319c mov edx, dword ptr [0x10cbe44c] */
  EDX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c931a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c931a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c931a7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10c931ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c931b1 mov dword ptr [0x10cbe44c], ecx */
  w32((uint32_t)(0x10cbe44c), (ECX));
  /* 10c931b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c931ba:;
  /* 10c931ba pop edi */
  EDI = (pop32());
  /* 10c931bb pop esi */
  ESI = (pop32());
  /* 10c931bc pop ebx */
  EBX = (pop32());
  /* 10c931bd mov esp, ebp */
  ESP = (EBP);
  /* 10c931bf pop ebp */
  EBP = (pop32());
  /* 10c931c0 ret  */
  ESPCHK(0x10c92cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031d0 @ 0x10c931d0 (27 bytes, 13 insns) */
void f_10c931d0(void) {
  FTRACE(0x10c931d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c931d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c931d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c931d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c931d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c931d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c931d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c931dc push eax */
  push32((uint32_t)(EAX));
  /* 10c931dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c931e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c931e1 call 0x10c931f0 */
  push32(0x10c931e6u); f_10c931f0();
  /* 10c931e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c931e9 pop ebp */
  EBP = (pop32());
  /* 10c931ea ret  */
  ESPCHK(0x10c931d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100031f0 @ 0x10c931f0 (64 bytes, 27 insns) */
void f_10c931f0(void) {
  FTRACE(0x10c931f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c931f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c931f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c931f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c931f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c931f6 call 0x10c961e0 */
  push32(0x10c931fbu); f_10c961e0();
  /* 10c931fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c931fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93200 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c93203 push eax */
  push32((uint32_t)(EAX));
  /* 10c93204 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c93207 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93208 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9320b push edx */
  push32((uint32_t)(EDX));
  /* 10c9320c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9320f push eax */
  push32((uint32_t)(EAX));
  /* 10c93210 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93213 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93214 call 0x10c92cb0 */
  push32(0x10c93219u); f_10c92cb0();
  /* 10c93219 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9321c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9321f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93221 call 0x10c96280 */
  push32(0x10c93226u); f_10c96280();
  /* 10c93226 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93229 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9322c mov esp, ebp */
  ESP = (EBP);
  /* 10c9322e pop ebp */
  EBP = (pop32());
  /* 10c9322f ret  */
  ESPCHK(0x10c931f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003230 @ 0x10c93230 (19 bytes, 9 insns) */
void f_10c93230(void) {
  FTRACE(0x10c93230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93230 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93231 mov ebp, esp */
  EBP = (ESP);
  /* 10c93233 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93235 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93238 push eax */
  push32((uint32_t)(EAX));
  /* 10c93239 call 0x10c93270 */
  push32(0x10c9323eu); f_10c93270();
  /* 10c9323e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93241 pop ebp */
  EBP = (pop32());
  /* 10c93242 ret  */
  ESPCHK(0x10c93230u, _esp0);
  ESP += 4; return;
}

/* FUN_10003250 @ 0x10c93250 (19 bytes, 9 insns) */
void f_10c93250(void) {
  FTRACE(0x10c93250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93250 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93251 mov ebp, esp */
  EBP = (ESP);
  /* 10c93253 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93255 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93258 push eax */
  push32((uint32_t)(EAX));
  /* 10c93259 call 0x10c932a0 */
  push32(0x10c9325eu); f_10c932a0();
  /* 10c9325e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93261 pop ebp */
  EBP = (pop32());
  /* 10c93262 ret  */
  ESPCHK(0x10c93250u, _esp0);
  ESP += 4; return;
}

/* FUN_10003270 @ 0x10c93270 (41 bytes, 16 insns) */
void f_10c93270(void) {
  FTRACE(0x10c93270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93270 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93271 mov ebp, esp */
  EBP = (ESP);
  /* 10c93273 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93275 call 0x10c961e0 */
  push32(0x10c9327au); f_10c961e0();
  /* 10c9327a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9327d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93280 push eax */
  push32((uint32_t)(EAX));
  /* 10c93281 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93284 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93285 call 0x10c932a0 */
  push32(0x10c9328au); f_10c932a0();
  /* 10c9328a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9328d push 9 */
  push32((uint32_t)(0x9u));
  /* 10c9328f call 0x10c96280 */
  push32(0x10c93294u); f_10c96280();
  /* 10c93294 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93297 pop ebp */
  EBP = (pop32());
  /* 10c93298 ret  */
  ESPCHK(0x10c93270u, _esp0);
  ESP += 4; return;
}

/* FUN_100032a0 @ 0x10c932a0 (1004 bytes, 342 insns) */
void f_10c932a0(void) {
  FTRACE(0x10c932a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c932a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c932a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c932a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c932a4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c932a5 push esi */
  push32((uint32_t)(ESI));
  /* 10c932a6 push edi */
  push32((uint32_t)(EDI));
  /* 10c932a7 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c932ac and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c932af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c932b1 je 0x10c932e3 */
  if (C.zf) goto L_10c932e3;
L_10c932b3:;
  /* 10c932b3 call 0x10c93980 */
  push32(0x10c932b8u); f_10c93980();
  /* 10c932b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c932ba jne 0x10c932dd */
  if (!C.zf) goto L_10c932dd;
  /* 10c932bc push 0x10cb9468 */
  push32((uint32_t)(0x10cb9468u));
  /* 10c932c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c932c3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10c932c8 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c932cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c932cf call 0x10c918a0 */
  push32(0x10c932d4u); f_10c918a0();
  /* 10c932d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c932d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c932da jne 0x10c932dd */
  if (!C.zf) goto L_10c932dd;
  /* 10c932dc int3  */
  x86_unimpl("int3 @ 0x10c932dc");
L_10c932dd:;
  /* 10c932dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c932df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c932e1 jne 0x10c932b3 */
  if (!C.zf) goto L_10c932b3;
L_10c932e3:;
  /* 10c932e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c932e7 jne 0x10c932ee */
  if (!C.zf) goto L_10c932ee;
  /* 10c932e9 jmp 0x10c93685 */
  goto L_10c93685;
L_10c932ee:;
  /* 10c932ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10c932f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c932f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c932f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c932f7 push edx */
  push32((uint32_t)(EDX));
  /* 10c932f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c932fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c932fd push eax */
  push32((uint32_t)(EAX));
  /* 10c932fe push 3 */
  push32((uint32_t)(0x3u));
  /* 10c93300 call dword ptr [0x10cbcc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbcc90))), 0x10c93306u);
  /* 10c93306 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93309 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9330b jne 0x10c93338 */
  if (!C.zf) goto L_10c93338;
L_10c9330d:;
  /* 10c9330d push 0x10cb972c */
  push32((uint32_t)(0x10cb972cu));
  /* 10c93312 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93319 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9331b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9331d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9331f call 0x10c918a0 */
  push32(0x10c93324u); f_10c918a0();
  /* 10c93324 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93327 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9332a jne 0x10c9332d */
  if (!C.zf) goto L_10c9332d;
  /* 10c9332c int3  */
  x86_unimpl("int3 @ 0x10c9332c");
L_10c9332d:;
  /* 10c9332d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9332f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93331 jne 0x10c9330d */
  if (!C.zf) goto L_10c9330d;
  /* 10c93333 jmp 0x10c93685 */
  goto L_10c93685;
L_10c93338:;
  /* 10c93338 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9333b push edx */
  push32((uint32_t)(EDX));
  /* 10c9333c call 0x10c93de0 */
  push32(0x10c93341u); f_10c93de0();
  /* 10c93341 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93346 jne 0x10c93369 */
  if (!C.zf) goto L_10c93369;
  /* 10c93348 push 0x10cb956c */
  push32((uint32_t)(0x10cb956cu));
  /* 10c9334d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9334f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10c93354 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c93359 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9335b call 0x10c918a0 */
  push32(0x10c93360u); f_10c918a0();
  /* 10c93360 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93363 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93366 jne 0x10c93369 */
  if (!C.zf) goto L_10c93369;
  /* 10c93368 int3  */
  x86_unimpl("int3 @ 0x10c93368");
L_10c93369:;
  /* 10c93369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9336b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9336d jne 0x10c93338 */
  if (!C.zf) goto L_10c93338;
  /* 10c9336f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93372 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93375 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c93378:;
  /* 10c93378 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9337b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c9337e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93383 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93386 je 0x10c933cb */
  if (C.zf) goto L_10c933cb;
  /* 10c93388 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9338b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9338f je 0x10c933cb */
  if (C.zf) goto L_10c933cb;
  /* 10c93391 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93394 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93397 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9339c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9339f je 0x10c933cb */
  if (C.zf) goto L_10c933cb;
  /* 10c933a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c933a4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c933a8 je 0x10c933cb */
  if (C.zf) goto L_10c933cb;
  /* 10c933aa push 0x10cb9704 */
  push32((uint32_t)(0x10cb9704u));
  /* 10c933af push 0 */
  push32((uint32_t)(0x0u));
  /* 10c933b1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10c933b6 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c933bb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c933bd call 0x10c918a0 */
  push32(0x10c933c2u); f_10c918a0();
  /* 10c933c2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c933c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c933c8 jne 0x10c933cb */
  if (!C.zf) goto L_10c933cb;
  /* 10c933ca int3  */
  x86_unimpl("int3 @ 0x10c933ca");
L_10c933cb:;
  /* 10c933cb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c933cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c933cf jne 0x10c93378 */
  if (!C.zf) goto L_10c93378;
  /* 10c933d1 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c933d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c933d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c933db jne 0x10c934a6 */
  if (!C.zf) goto L_10c934a6;
  /* 10c933e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c933e3 mov cl, byte ptr [0x10cbca90] */
  CL = (r8((uint32_t)(0x10cbca90)));
  /* 10c933e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10c933ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c933ed add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c933f0 push edx */
  push32((uint32_t)(EDX));
  /* 10c933f1 call 0x10c938f0 */
  push32(0x10c933f6u); f_10c938f0();
  /* 10c933f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c933f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c933fb jne 0x10c93440 */
  if (!C.zf) goto L_10c93440;
L_10c933fd:;
  /* 10c933fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93400 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93403 push eax */
  push32((uint32_t)(EAX));
  /* 10c93404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93407 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c9340a push edx */
  push32((uint32_t)(EDX));
  /* 10c9340b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9340e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c93411 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c93417 mov edx, dword ptr [ecx*4 + 0x10cbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca94)));
  /* 10c9341e push edx */
  push32((uint32_t)(EDX));
  /* 10c9341f push 0x10cb96d8 */
  push32((uint32_t)(0x10cb96d8u));
  /* 10c93424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93426 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93428 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9342a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c9342c call 0x10c918a0 */
  push32(0x10c93431u); f_10c918a0();
  /* 10c93431 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93434 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93437 jne 0x10c9343a */
  if (!C.zf) goto L_10c9343a;
  /* 10c93439 int3  */
  x86_unimpl("int3 @ 0x10c93439");
L_10c9343a:;
  /* 10c9343a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9343c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9343e jne 0x10c933fd */
  if (!C.zf) goto L_10c933fd;
L_10c93440:;
  /* 10c93440 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c93442 mov cl, byte ptr [0x10cbca90] */
  CL = (r8((uint32_t)(0x10cbca90)));
  /* 10c93448 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93449 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9344c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9344f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93452 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c93456 push edx */
  push32((uint32_t)(EDX));
  /* 10c93457 call 0x10c938f0 */
  push32(0x10c9345cu); f_10c938f0();
  /* 10c9345c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9345f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93461 jne 0x10c934a6 */
  if (!C.zf) goto L_10c934a6;
L_10c93463:;
  /* 10c93463 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93466 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93469 push eax */
  push32((uint32_t)(EAX));
  /* 10c9346a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9346d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c93470 push edx */
  push32((uint32_t)(EDX));
  /* 10c93471 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93474 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c93477 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9347d mov edx, dword ptr [ecx*4 + 0x10cbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca94)));
  /* 10c93484 push edx */
  push32((uint32_t)(EDX));
  /* 10c93485 push 0x10cb96ac */
  push32((uint32_t)(0x10cb96acu));
  /* 10c9348a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9348c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9348e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93490 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93492 call 0x10c918a0 */
  push32(0x10c93497u); f_10c918a0();
  /* 10c93497 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9349a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9349d jne 0x10c934a0 */
  if (!C.zf) goto L_10c934a0;
  /* 10c9349f int3  */
  x86_unimpl("int3 @ 0x10c9349f");
L_10c934a0:;
  /* 10c934a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c934a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c934a4 jne 0x10c93463 */
  if (!C.zf) goto L_10c93463;
L_10c934a6:;
  /* 10c934a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c934a9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c934ad jne 0x10c9351b */
  if (!C.zf) goto L_10c9351b;
L_10c934af:;
  /* 10c934af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c934b2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c934b9 jne 0x10c934c4 */
  if (!C.zf) goto L_10c934c4;
  /* 10c934bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c934be cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c934c2 je 0x10c934e5 */
  if (C.zf) goto L_10c934e5;
L_10c934c4:;
  /* 10c934c4 push 0x10cb966c */
  push32((uint32_t)(0x10cb966cu));
  /* 10c934c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c934cb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10c934d0 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c934d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c934d7 call 0x10c918a0 */
  push32(0x10c934dcu); f_10c918a0();
  /* 10c934dc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c934df cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c934e2 jne 0x10c934e5 */
  if (!C.zf) goto L_10c934e5;
  /* 10c934e4 int3  */
  x86_unimpl("int3 @ 0x10c934e4");
L_10c934e5:;
  /* 10c934e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c934e7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c934e9 jne 0x10c934af */
  if (!C.zf) goto L_10c934af;
  /* 10c934eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c934ee mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c934f1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c934f4 push eax */
  push32((uint32_t)(EAX));
  /* 10c934f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c934f7 mov cl, byte ptr [0x10cbca91] */
  CL = (r8((uint32_t)(0x10cbca91)));
  /* 10c934fd push ecx */
  push32((uint32_t)(ECX));
  /* 10c934fe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93501 push edx */
  push32((uint32_t)(EDX));
  /* 10c93502 call 0x10c96550 */
  push32(0x10c93507u); f_10c96550();
  /* 10c93507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9350a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9350d push eax */
  push32((uint32_t)(EAX));
  /* 10c9350e call 0x10c96950 */
  push32(0x10c93513u); f_10c96950();
  /* 10c93513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93516 jmp 0x10c93685 */
  goto L_10c93685;
L_10c9351b:;
  /* 10c9351b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9351e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93522 jne 0x10c93531 */
  if (!C.zf) goto L_10c93531;
  /* 10c93524 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93528 jne 0x10c93531 */
  if (!C.zf) goto L_10c93531;
  /* 10c9352a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c93531:;
  /* 10c93531 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93534 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93537 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9353a je 0x10c9355d */
  if (C.zf) goto L_10c9355d;
  /* 10c9353c push 0x10cb964c */
  push32((uint32_t)(0x10cb964cu));
  /* 10c93541 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93543 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10c93548 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c9354d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9354f call 0x10c918a0 */
  push32(0x10c93554u); f_10c918a0();
  /* 10c93554 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93557 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9355a jne 0x10c9355d */
  if (!C.zf) goto L_10c9355d;
  /* 10c9355c int3  */
  x86_unimpl("int3 @ 0x10c9355c");
L_10c9355d:;
  /* 10c9355d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9355f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93561 jne 0x10c93531 */
  if (!C.zf) goto L_10c93531;
  /* 10c93563 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93566 mov eax, dword ptr [0x10cbe450] */
  EAX = (r32((uint32_t)(0x10cbe450)));
  /* 10c9356b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9356e mov dword ptr [0x10cbe450], eax */
  w32((uint32_t)(0x10cbe450), (EAX));
  /* 10c93573 mov ecx, dword ptr [0x10cbca84] */
  ECX = (r32((uint32_t)(0x10cbca84)));
  /* 10c93579 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9357c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9357e jne 0x10c9365c */
  if (!C.zf) goto L_10c9365c;
  /* 10c93584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93587 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9358a je 0x10c9359c */
  if (C.zf) goto L_10c9359c;
  /* 10c9358c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9358f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c93591 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93594 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c93597 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c9359a jmp 0x10c935da */
  goto L_10c935da;
L_10c9359c:;
  /* 10c9359c mov ecx, dword ptr [0x10cbe444] */
  ECX = (r32((uint32_t)(0x10cbe444)));
  /* 10c935a2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c935a5 je 0x10c935c8 */
  if (C.zf) goto L_10c935c8;
  /* 10c935a7 push 0x10cb9634 */
  push32((uint32_t)(0x10cb9634u));
  /* 10c935ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10c935ae push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10c935b3 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c935b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c935ba call 0x10c918a0 */
  push32(0x10c935bfu); f_10c918a0();
  /* 10c935bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c935c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c935c5 jne 0x10c935c8 */
  if (!C.zf) goto L_10c935c8;
  /* 10c935c7 int3  */
  x86_unimpl("int3 @ 0x10c935c7");
L_10c935c8:;
  /* 10c935c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c935ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c935cc jne 0x10c9359c */
  if (!C.zf) goto L_10c9359c;
  /* 10c935ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c935d1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c935d4 mov dword ptr [0x10cbe444], ecx */
  w32((uint32_t)(0x10cbe444), (ECX));
L_10c935da:;
  /* 10c935da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c935dd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c935e1 je 0x10c935f2 */
  if (C.zf) goto L_10c935f2;
  /* 10c935e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c935e6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c935e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c935ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c935ee mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c935f0 jmp 0x10c9362f */
  goto L_10c9362f;
L_10c935f2:;
  /* 10c935f2 mov ecx, dword ptr [0x10cbe44c] */
  ECX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c935f8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c935fb je 0x10c9361e */
  if (C.zf) goto L_10c9361e;
  /* 10c935fd push 0x10cb961c */
  push32((uint32_t)(0x10cb961cu));
  /* 10c93602 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93604 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10c93609 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c9360e push 2 */
  push32((uint32_t)(0x2u));
  /* 10c93610 call 0x10c918a0 */
  push32(0x10c93615u); f_10c918a0();
  /* 10c93615 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93618 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9361b jne 0x10c9361e */
  if (!C.zf) goto L_10c9361e;
  /* 10c9361d int3  */
  x86_unimpl("int3 @ 0x10c9361d");
L_10c9361e:;
  /* 10c9361e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93620 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93622 jne 0x10c935f2 */
  if (!C.zf) goto L_10c935f2;
  /* 10c93624 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93627 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c93629 mov dword ptr [0x10cbe44c], ecx */
  w32((uint32_t)(0x10cbe44c), (ECX));
L_10c9362f:;
  /* 10c9362f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93632 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c93635 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93638 push eax */
  push32((uint32_t)(EAX));
  /* 10c93639 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9363b mov cl, byte ptr [0x10cbca91] */
  CL = (r8((uint32_t)(0x10cbca91)));
  /* 10c93641 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93645 push edx */
  push32((uint32_t)(EDX));
  /* 10c93646 call 0x10c96550 */
  push32(0x10c9364bu); f_10c96550();
  /* 10c9364b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9364e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93651 push eax */
  push32((uint32_t)(EAX));
  /* 10c93652 call 0x10c96950 */
  push32(0x10c93657u); f_10c96950();
  /* 10c93657 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9365a jmp 0x10c93685 */
  goto L_10c93685;
L_10c9365c:;
  /* 10c9365c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9365f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10c93666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93669 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9366c push eax */
  push32((uint32_t)(EAX));
  /* 10c9366d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9366f mov cl, byte ptr [0x10cbca91] */
  CL = (r8((uint32_t)(0x10cbca91)));
  /* 10c93675 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93676 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93679 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9367c push edx */
  push32((uint32_t)(EDX));
  /* 10c9367d call 0x10c96550 */
  push32(0x10c93682u); f_10c96550();
  /* 10c93682 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c93685:;
  /* 10c93685 pop edi */
  EDI = (pop32());
  /* 10c93686 pop esi */
  ESI = (pop32());
  /* 10c93687 pop ebx */
  EBX = (pop32());
  /* 10c93688 mov esp, ebp */
  ESP = (EBP);
  /* 10c9368a pop ebp */
  EBP = (pop32());
  /* 10c9368b ret  */
  ESPCHK(0x10c932a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003690 @ 0x10c93690 (19 bytes, 9 insns) */
void f_10c93690(void) {
  FTRACE(0x10c93690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93691 mov ebp, esp */
  EBP = (ESP);
  /* 10c93693 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93695 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93698 push eax */
  push32((uint32_t)(EAX));
  /* 10c93699 call 0x10c936b0 */
  push32(0x10c9369eu); f_10c936b0();
  /* 10c9369e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c936a1 pop ebp */
  EBP = (pop32());
  /* 10c936a2 ret  */
  ESPCHK(0x10c93690u, _esp0);
  ESP += 4; return;
}

/* FUN_100036b0 @ 0x10c936b0 (342 bytes, 119 insns) */
void f_10c936b0(void) {
  FTRACE(0x10c936b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c936b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c936b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c936b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c936b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c936b7 push esi */
  push32((uint32_t)(ESI));
  /* 10c936b8 push edi */
  push32((uint32_t)(EDI));
  /* 10c936b9 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c936be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c936c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c936c3 je 0x10c936f5 */
  if (C.zf) goto L_10c936f5;
L_10c936c5:;
  /* 10c936c5 call 0x10c93980 */
  push32(0x10c936cau); f_10c93980();
  /* 10c936ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c936cc jne 0x10c936ef */
  if (!C.zf) goto L_10c936ef;
  /* 10c936ce push 0x10cb9468 */
  push32((uint32_t)(0x10cb9468u));
  /* 10c936d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c936d5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10c936da push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c936df push 2 */
  push32((uint32_t)(0x2u));
  /* 10c936e1 call 0x10c918a0 */
  push32(0x10c936e6u); f_10c918a0();
  /* 10c936e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c936e9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c936ec jne 0x10c936ef */
  if (!C.zf) goto L_10c936ef;
  /* 10c936ee int3  */
  x86_unimpl("int3 @ 0x10c936ee");
L_10c936ef:;
  /* 10c936ef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c936f1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c936f3 jne 0x10c936c5 */
  if (!C.zf) goto L_10c936c5;
L_10c936f5:;
  /* 10c936f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c936f7 call 0x10c961e0 */
  push32(0x10c936fcu); f_10c961e0();
  /* 10c936fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c936ff:;
  /* 10c936ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93702 push edx */
  push32((uint32_t)(EDX));
  /* 10c93703 call 0x10c93de0 */
  push32(0x10c93708u); f_10c93de0();
  /* 10c93708 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9370b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9370d jne 0x10c93730 */
  if (!C.zf) goto L_10c93730;
  /* 10c9370f push 0x10cb956c */
  push32((uint32_t)(0x10cb956cu));
  /* 10c93714 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93716 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10c9371b push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c93720 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c93722 call 0x10c918a0 */
  push32(0x10c93727u); f_10c918a0();
  /* 10c93727 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9372a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9372d jne 0x10c93730 */
  if (!C.zf) goto L_10c93730;
  /* 10c9372f int3  */
  x86_unimpl("int3 @ 0x10c9372f");
L_10c93730:;
  /* 10c93730 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93732 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93734 jne 0x10c936ff */
  if (!C.zf) goto L_10c936ff;
  /* 10c93736 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93739 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9373c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c9373f:;
  /* 10c9373f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93742 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93745 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9374a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9374d je 0x10c93792 */
  if (C.zf) goto L_10c93792;
  /* 10c9374f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93752 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93756 je 0x10c93792 */
  if (C.zf) goto L_10c93792;
  /* 10c93758 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9375b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c9375e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93763 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93766 je 0x10c93792 */
  if (C.zf) goto L_10c93792;
  /* 10c93768 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9376b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9376f je 0x10c93792 */
  if (C.zf) goto L_10c93792;
  /* 10c93771 push 0x10cb9704 */
  push32((uint32_t)(0x10cb9704u));
  /* 10c93776 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93778 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10c9377d push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c93782 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c93784 call 0x10c918a0 */
  push32(0x10c93789u); f_10c918a0();
  /* 10c93789 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9378c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9378f jne 0x10c93792 */
  if (!C.zf) goto L_10c93792;
  /* 10c93791 int3  */
  x86_unimpl("int3 @ 0x10c93791");
L_10c93792:;
  /* 10c93792 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93794 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93796 jne 0x10c9373f */
  if (!C.zf) goto L_10c9373f;
  /* 10c93798 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9379b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9379f jne 0x10c937ae */
  if (!C.zf) goto L_10c937ae;
  /* 10c937a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c937a5 jne 0x10c937ae */
  if (!C.zf) goto L_10c937ae;
  /* 10c937a7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10c937ae:;
  /* 10c937ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c937b1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c937b5 je 0x10c937e9 */
  if (C.zf) goto L_10c937e9;
L_10c937b7:;
  /* 10c937b7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c937ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c937bd cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c937c0 je 0x10c937e3 */
  if (C.zf) goto L_10c937e3;
  /* 10c937c2 push 0x10cb964c */
  push32((uint32_t)(0x10cb964cu));
  /* 10c937c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c937c9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10c937ce push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c937d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c937d5 call 0x10c918a0 */
  push32(0x10c937dau); f_10c918a0();
  /* 10c937da add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c937dd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c937e0 jne 0x10c937e3 */
  if (!C.zf) goto L_10c937e3;
  /* 10c937e2 int3  */
  x86_unimpl("int3 @ 0x10c937e2");
L_10c937e3:;
  /* 10c937e3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c937e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c937e7 jne 0x10c937b7 */
  if (!C.zf) goto L_10c937b7;
L_10c937e9:;
  /* 10c937e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c937ec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c937ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c937f2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c937f4 call 0x10c96280 */
  push32(0x10c937f9u); f_10c96280();
  /* 10c937f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c937fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c937ff pop edi */
  EDI = (pop32());
  /* 10c93800 pop esi */
  ESI = (pop32());
  /* 10c93801 pop ebx */
  EBX = (pop32());
  /* 10c93802 mov esp, ebp */
  ESP = (EBP);
  /* 10c93804 pop ebp */
  EBP = (pop32());
  /* 10c93805 ret  */
  ESPCHK(0x10c936b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003810 @ 0x10c93810 (28 bytes, 11 insns) */
void f_10c93810(void) {
  FTRACE(0x10c93810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93810 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93811 mov ebp, esp */
  EBP = (ESP);
  /* 10c93813 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93814 mov eax, dword ptr [0x10cbca8c] */
  EAX = (r32((uint32_t)(0x10cbca8c)));
  /* 10c93819 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9381c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9381f mov dword ptr [0x10cbca8c], ecx */
  w32((uint32_t)(0x10cbca8c), (ECX));
  /* 10c93825 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93828 mov esp, ebp */
  ESP = (EBP);
  /* 10c9382a pop ebp */
  EBP = (pop32());
  /* 10c9382b ret  */
  ESPCHK(0x10c93810u, _esp0);
  ESP += 4; return;
}

/* FUN_10003830 @ 0x10c93830 (157 bytes, 59 insns) */
void f_10c93830(void) {
  FTRACE(0x10c93830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93830 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93831 mov ebp, esp */
  EBP = (ESP);
  /* 10c93833 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93834 push ebx */
  push32((uint32_t)(EBX));
  /* 10c93835 push esi */
  push32((uint32_t)(ESI));
  /* 10c93836 push edi */
  push32((uint32_t)(EDI));
  /* 10c93837 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93839 call 0x10c961e0 */
  push32(0x10c9383eu); f_10c961e0();
  /* 10c9383e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93844 push eax */
  push32((uint32_t)(EAX));
  /* 10c93845 call 0x10c93de0 */
  push32(0x10c9384au); f_10c93de0();
  /* 10c9384a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9384d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9384f je 0x10c938bc */
  if (C.zf) goto L_10c938bc;
  /* 10c93851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93854 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93857 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9385a:;
  /* 10c9385a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9385d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93860 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93865 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93868 je 0x10c938ad */
  if (C.zf) goto L_10c938ad;
  /* 10c9386a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9386d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93871 je 0x10c938ad */
  if (C.zf) goto L_10c938ad;
  /* 10c93873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93876 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93879 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9387e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93881 je 0x10c938ad */
  if (C.zf) goto L_10c938ad;
  /* 10c93883 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93886 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9388a je 0x10c938ad */
  if (C.zf) goto L_10c938ad;
  /* 10c9388c push 0x10cb9704 */
  push32((uint32_t)(0x10cb9704u));
  /* 10c93891 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93893 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10c93898 push 0x10cb945c */
  push32((uint32_t)(0x10cb945cu));
  /* 10c9389d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9389f call 0x10c918a0 */
  push32(0x10c938a4u); f_10c918a0();
  /* 10c938a4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c938a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c938aa jne 0x10c938ad */
  if (!C.zf) goto L_10c938ad;
  /* 10c938ac int3  */
  x86_unimpl("int3 @ 0x10c938ac");
L_10c938ad:;
  /* 10c938ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c938af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c938b1 jne 0x10c9385a */
  if (!C.zf) goto L_10c9385a;
  /* 10c938b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c938b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c938b9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10c938bc:;
  /* 10c938bc push 9 */
  push32((uint32_t)(0x9u));
  /* 10c938be call 0x10c96280 */
  push32(0x10c938c3u); f_10c96280();
  /* 10c938c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c938c6 pop edi */
  EDI = (pop32());
  /* 10c938c7 pop esi */
  ESI = (pop32());
  /* 10c938c8 pop ebx */
  EBX = (pop32());
  /* 10c938c9 mov esp, ebp */
  ESP = (EBP);
  /* 10c938cb pop ebp */
  EBP = (pop32());
  /* 10c938cc ret  */
  ESPCHK(0x10c93830u, _esp0);
  ESP += 4; return;
}

/* FUN_100038d0 @ 0x10c938d0 (28 bytes, 11 insns) */
void f_10c938d0(void) {
  FTRACE(0x10c938d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c938d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c938d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c938d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c938d4 mov eax, dword ptr [0x10cbcc90] */
  EAX = (r32((uint32_t)(0x10cbcc90)));
  /* 10c938d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c938dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c938df mov dword ptr [0x10cbcc90], ecx */
  w32((uint32_t)(0x10cbcc90), (ECX));
  /* 10c938e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c938e8 mov esp, ebp */
  ESP = (EBP);
  /* 10c938ea pop ebp */
  EBP = (pop32());
  /* 10c938eb ret  */
  ESPCHK(0x10c938d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100038f0 @ 0x10c938f0 (136 bytes, 55 insns) */
void f_10c938f0(void) {
  FTRACE(0x10c938f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c938f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c938f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c938f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c938f4 push ebx */
  push32((uint32_t)(EBX));
  /* 10c938f5 push esi */
  push32((uint32_t)(ESI));
  /* 10c938f6 push edi */
  push32((uint32_t)(EDI));
  /* 10c938f7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10c938fe:;
  /* 10c938fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c93901 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c93904 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93907 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c9390a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9390c je 0x10c9396e */
  if (C.zf) goto L_10c9396e;
  /* 10c9390e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93911 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93913 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c93915 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93918 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9391e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93921 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93924 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c93927 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93929 je 0x10c9396c */
  if (C.zf) goto L_10c9396c;
L_10c9392b:;
  /* 10c9392b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9392e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93933 push eax */
  push32((uint32_t)(EAX));
  /* 10c93934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93937 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93939 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10c9393c push edx */
  push32((uint32_t)(EDX));
  /* 10c9393d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93940 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93943 push eax */
  push32((uint32_t)(EAX));
  /* 10c93944 push 0x10cb9748 */
  push32((uint32_t)(0x10cb9748u));
  /* 10c93949 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9394b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9394d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9394f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93951 call 0x10c918a0 */
  push32(0x10c93956u); f_10c918a0();
  /* 10c93956 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93959 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9395c jne 0x10c9395f */
  if (!C.zf) goto L_10c9395f;
  /* 10c9395e int3  */
  x86_unimpl("int3 @ 0x10c9395e");
L_10c9395f:;
  /* 10c9395f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c93961 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93963 jne 0x10c9392b */
  if (!C.zf) goto L_10c9392b;
  /* 10c93965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c9396c:;
  /* 10c9396c jmp 0x10c938fe */
  goto L_10c938fe;
L_10c9396e:;
  /* 10c9396e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93971 pop edi */
  EDI = (pop32());
  /* 10c93972 pop esi */
  ESI = (pop32());
  /* 10c93973 pop ebx */
  EBX = (pop32());
  /* 10c93974 mov esp, ebp */
  ESP = (EBP);
  /* 10c93976 pop ebp */
  EBP = (pop32());
  /* 10c93977 ret  */
  ESPCHK(0x10c938f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003980 @ 0x10c93980 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10c93980(void) {
  FTRACE(0x10c93980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93980 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93981 mov ebp, esp */
  EBP = (ESP);
  /* 10c93983 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93986 push ebx */
  push32((uint32_t)(EBX));
  /* 10c93987 push esi */
  push32((uint32_t)(ESI));
  /* 10c93988 push edi */
  push32((uint32_t)(EDI));
  /* 10c93989 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c93990 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c93995 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c93998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9399a jne 0x10c939a6 */
  if (!C.zf) goto L_10c939a6;
  /* 10c9399c mov eax, 1 */
  EAX = (0x1u);
  /* 10c939a1 jmp 0x10c93cd8 */
  goto L_10c93cd8;
L_10c939a6:;
  /* 10c939a6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c939a8 call 0x10c961e0 */
  push32(0x10c939adu); f_10c961e0();
  /* 10c939ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c939b0 call 0x10c969c0 */
  push32(0x10c939b5u); f_10c969c0();
  /* 10c939b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c939b8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c939bc je 0x10c93ac9 */
  if (C.zf) goto L_10c93ac9;
  /* 10c939c2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c939c6 je 0x10c93ac9 */
  if (C.zf) goto L_10c93ac9;
  /* 10c939cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c939cf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10c939d2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c939d5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c939d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c939db cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c939df ja 0x10c93a92 */
  if ((!C.cf&&!C.zf)) goto L_10c93a92;
  /* 10c939e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c939e8 jmp dword ptr [eax*4 + 0x10c93cdf] */
  switch (EAX) {
    case 0: goto L_10c93a6a;
    case 1: goto L_10c93a42;
    case 2: goto L_10c93a1a;
    case 3: goto L_10c939ef;
    default: x86_unimpl("switch@0x10c939e8 out of table"); return;
  }
L_10c939ef:;
  /* 10c939ef push 0x10cb989c */
  push32((uint32_t)(0x10cb989cu));
  /* 10c939f4 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c939f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c939fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c939fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c939ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a01 call 0x10c918a0 */
  push32(0x10c93a06u); f_10c918a0();
  /* 10c93a06 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93a09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93a0c jne 0x10c93a0f */
  if (!C.zf) goto L_10c93a0f;
  /* 10c93a0e int3  */
  x86_unimpl("int3 @ 0x10c93a0e");
L_10c93a0f:;
  /* 10c93a0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c93a11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93a13 jne 0x10c939ef */
  if (!C.zf) goto L_10c939ef;
  /* 10c93a15 jmp 0x10c93ab8 */
  goto L_10c93ab8;
L_10c93a1a:;
  /* 10c93a1a push 0x10cb9878 */
  push32((uint32_t)(0x10cb9878u));
  /* 10c93a1f push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93a24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a2c call 0x10c918a0 */
  push32(0x10c93a31u); f_10c918a0();
  /* 10c93a31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93a34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93a37 jne 0x10c93a3a */
  if (!C.zf) goto L_10c93a3a;
  /* 10c93a39 int3  */
  x86_unimpl("int3 @ 0x10c93a39");
L_10c93a3a:;
  /* 10c93a3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93a3c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93a3e jne 0x10c93a1a */
  if (!C.zf) goto L_10c93a1a;
  /* 10c93a40 jmp 0x10c93ab8 */
  goto L_10c93ab8;
L_10c93a42:;
  /* 10c93a42 push 0x10cb9854 */
  push32((uint32_t)(0x10cb9854u));
  /* 10c93a47 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a54 call 0x10c918a0 */
  push32(0x10c93a59u); f_10c918a0();
  /* 10c93a59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93a5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93a5f jne 0x10c93a62 */
  if (!C.zf) goto L_10c93a62;
  /* 10c93a61 int3  */
  x86_unimpl("int3 @ 0x10c93a61");
L_10c93a62:;
  /* 10c93a62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93a64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93a66 jne 0x10c93a42 */
  if (!C.zf) goto L_10c93a42;
  /* 10c93a68 jmp 0x10c93ab8 */
  goto L_10c93ab8;
L_10c93a6a:;
  /* 10c93a6a push 0x10cb9830 */
  push32((uint32_t)(0x10cb9830u));
  /* 10c93a6f push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93a74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a7c call 0x10c918a0 */
  push32(0x10c93a81u); f_10c918a0();
  /* 10c93a81 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93a84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93a87 jne 0x10c93a8a */
  if (!C.zf) goto L_10c93a8a;
  /* 10c93a89 int3  */
  x86_unimpl("int3 @ 0x10c93a89");
L_10c93a8a:;
  /* 10c93a8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c93a8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93a8e jne 0x10c93a6a */
  if (!C.zf) goto L_10c93a6a;
  /* 10c93a90 jmp 0x10c93ab8 */
  goto L_10c93ab8;
L_10c93a92:;
  /* 10c93a92 push 0x10cb9804 */
  push32((uint32_t)(0x10cb9804u));
  /* 10c93a97 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93a9e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93aa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93aa4 call 0x10c918a0 */
  push32(0x10c93aa9u); f_10c918a0();
  /* 10c93aa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93aac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93aaf jne 0x10c93ab2 */
  if (!C.zf) goto L_10c93ab2;
  /* 10c93ab1 int3  */
  x86_unimpl("int3 @ 0x10c93ab1");
L_10c93ab2:;
  /* 10c93ab2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93ab4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93ab6 jne 0x10c93a92 */
  if (!C.zf) goto L_10c93a92;
L_10c93ab8:;
  /* 10c93ab8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93aba call 0x10c96280 */
  push32(0x10c93abfu); f_10c96280();
  /* 10c93abf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93ac2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93ac4 jmp 0x10c93cd8 */
  goto L_10c93cd8;
L_10c93ac9:;
  /* 10c93ac9 mov eax, dword ptr [0x10cbe44c] */
  EAX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c93ace mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c93ad1 jmp 0x10c93adb */
  goto L_10c93adb;
L_10c93ad3:;
  /* 10c93ad3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93ad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c93ad8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c93adb:;
  /* 10c93adb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93adf je 0x10c93ccb */
  if (C.zf) goto L_10c93ccb;
  /* 10c93ae5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10c93aec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93aef mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c93af2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c93af8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93afb je 0x10c93b20 */
  if (C.zf) goto L_10c93b20;
  /* 10c93afd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b00 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93b04 je 0x10c93b20 */
  if (C.zf) goto L_10c93b20;
  /* 10c93b06 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b09 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c93b0c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c93b12 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93b15 je 0x10c93b20 */
  if (C.zf) goto L_10c93b20;
  /* 10c93b17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b1a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93b1e jne 0x10c93b38 */
  if (!C.zf) goto L_10c93b38;
L_10c93b20:;
  /* 10c93b20 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b23 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c93b26 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c93b2c mov edx, dword ptr [ecx*4 + 0x10cbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca94)));
  /* 10c93b33 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c93b36 jmp 0x10c93b3f */
  goto L_10c93b3f;
L_10c93b38:;
  /* 10c93b38 mov dword ptr [ebp - 0x14], 0x10cb97fc */
  w32((uint32_t)(EBP + -0x14), (0x10cb97fcu));
L_10c93b3f:;
  /* 10c93b3f push 4 */
  push32((uint32_t)(0x4u));
  /* 10c93b41 mov al, byte ptr [0x10cbca90] */
  AL = (r8((uint32_t)(0x10cbca90)));
  /* 10c93b46 push eax */
  push32((uint32_t)(EAX));
  /* 10c93b47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b4a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93b4d push ecx */
  push32((uint32_t)(ECX));
  /* 10c93b4e call 0x10c938f0 */
  push32(0x10c93b53u); f_10c938f0();
  /* 10c93b53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93b56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93b58 jne 0x10c93b94 */
  if (!C.zf) goto L_10c93b94;
L_10c93b5a:;
  /* 10c93b5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b5d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93b60 push edx */
  push32((uint32_t)(EDX));
  /* 10c93b61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93b64 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c93b67 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93b68 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c93b6b push edx */
  push32((uint32_t)(EDX));
  /* 10c93b6c push 0x10cb96d8 */
  push32((uint32_t)(0x10cb96d8u));
  /* 10c93b71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93b73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93b79 call 0x10c918a0 */
  push32(0x10c93b7eu); f_10c918a0();
  /* 10c93b7e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93b81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93b84 jne 0x10c93b87 */
  if (!C.zf) goto L_10c93b87;
  /* 10c93b86 int3  */
  x86_unimpl("int3 @ 0x10c93b86");
L_10c93b87:;
  /* 10c93b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93b8b jne 0x10c93b5a */
  if (!C.zf) goto L_10c93b5a;
  /* 10c93b8d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c93b94:;
  /* 10c93b94 push 4 */
  push32((uint32_t)(0x4u));
  /* 10c93b96 mov cl, byte ptr [0x10cbca90] */
  CL = (r8((uint32_t)(0x10cbca90)));
  /* 10c93b9c push ecx */
  push32((uint32_t)(ECX));
  /* 10c93b9d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93ba0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c93ba3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93ba6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10c93baa push edx */
  push32((uint32_t)(EDX));
  /* 10c93bab call 0x10c938f0 */
  push32(0x10c93bb0u); f_10c938f0();
  /* 10c93bb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93bb3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93bb5 jne 0x10c93bf1 */
  if (!C.zf) goto L_10c93bf1;
L_10c93bb7:;
  /* 10c93bb7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93bba add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93bbd push eax */
  push32((uint32_t)(EAX));
  /* 10c93bbe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93bc1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c93bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10c93bc5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c93bc8 push eax */
  push32((uint32_t)(EAX));
  /* 10c93bc9 push 0x10cb96ac */
  push32((uint32_t)(0x10cb96acu));
  /* 10c93bce push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93bd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93bd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93bd6 call 0x10c918a0 */
  push32(0x10c93bdbu); f_10c918a0();
  /* 10c93bdb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93bde cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93be1 jne 0x10c93be4 */
  if (!C.zf) goto L_10c93be4;
  /* 10c93be3 int3  */
  x86_unimpl("int3 @ 0x10c93be3");
L_10c93be4:;
  /* 10c93be4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c93be6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93be8 jne 0x10c93bb7 */
  if (!C.zf) goto L_10c93bb7;
  /* 10c93bea mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c93bf1:;
  /* 10c93bf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93bf4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93bf8 jne 0x10c93c4a */
  if (!C.zf) goto L_10c93c4a;
  /* 10c93bfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93bfd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c93c00 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93c01 mov dl, byte ptr [0x10cbca91] */
  DL = (r8((uint32_t)(0x10cbca91)));
  /* 10c93c07 push edx */
  push32((uint32_t)(EDX));
  /* 10c93c08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c0b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c0e push eax */
  push32((uint32_t)(EAX));
  /* 10c93c0f call 0x10c938f0 */
  push32(0x10c93c14u); f_10c938f0();
  /* 10c93c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93c19 jne 0x10c93c4a */
  if (!C.zf) goto L_10c93c4a;
L_10c93c1b:;
  /* 10c93c1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c1e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c21 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93c22 push 0x10cb97d0 */
  push32((uint32_t)(0x10cb97d0u));
  /* 10c93c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c2f call 0x10c918a0 */
  push32(0x10c93c34u); f_10c918a0();
  /* 10c93c34 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c37 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93c3a jne 0x10c93c3d */
  if (!C.zf) goto L_10c93c3d;
  /* 10c93c3c int3  */
  x86_unimpl("int3 @ 0x10c93c3c");
L_10c93c3d:;
  /* 10c93c3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93c3f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93c41 jne 0x10c93c1b */
  if (!C.zf) goto L_10c93c1b;
  /* 10c93c43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c93c4a:;
  /* 10c93c4a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93c4e jne 0x10c93cc6 */
  if (!C.zf) goto L_10c93cc6;
  /* 10c93c50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c53 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93c57 je 0x10c93c8c */
  if (C.zf) goto L_10c93c8c;
L_10c93c59:;
  /* 10c93c59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c5c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10c93c5f push edx */
  push32((uint32_t)(EDX));
  /* 10c93c60 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c93c66 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93c67 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c93c6a push edx */
  push32((uint32_t)(EDX));
  /* 10c93c6b push 0x10cb97b0 */
  push32((uint32_t)(0x10cb97b0u));
  /* 10c93c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93c78 call 0x10c918a0 */
  push32(0x10c93c7du); f_10c918a0();
  /* 10c93c7d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93c83 jne 0x10c93c86 */
  if (!C.zf) goto L_10c93c86;
  /* 10c93c85 int3  */
  x86_unimpl("int3 @ 0x10c93c85");
L_10c93c86:;
  /* 10c93c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93c8a jne 0x10c93c59 */
  if (!C.zf) goto L_10c93c59;
L_10c93c8c:;
  /* 10c93c8c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c8f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c93c92 push edx */
  push32((uint32_t)(EDX));
  /* 10c93c93 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c93c96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93c99 push eax */
  push32((uint32_t)(EAX));
  /* 10c93c9a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c93c9d push ecx */
  push32((uint32_t)(ECX));
  /* 10c93c9e push 0x10cb9784 */
  push32((uint32_t)(0x10cb9784u));
  /* 10c93ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93cab call 0x10c918a0 */
  push32(0x10c93cb0u); f_10c918a0();
  /* 10c93cb0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93cb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93cb6 jne 0x10c93cb9 */
  if (!C.zf) goto L_10c93cb9;
  /* 10c93cb8 int3  */
  x86_unimpl("int3 @ 0x10c93cb8");
L_10c93cb9:;
  /* 10c93cb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c93cbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c93cbd jne 0x10c93c8c */
  if (!C.zf) goto L_10c93c8c;
  /* 10c93cbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c93cc6:;
  /* 10c93cc6 jmp 0x10c93ad3 */
  goto L_10c93ad3;
L_10c93ccb:;
  /* 10c93ccb push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93ccd call 0x10c96280 */
  push32(0x10c93cd2u); f_10c96280();
  /* 10c93cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93cd5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c93cd8:;
  /* 10c93cd8 pop edi */
  EDI = (pop32());
  /* 10c93cd9 pop esi */
  ESI = (pop32());
  /* 10c93cda pop ebx */
  EBX = (pop32());
  /* 10c93cdb mov esp, ebp */
  ESP = (EBP);
  /* 10c93cdd pop ebp */
  EBP = (pop32());
  /* 10c93cde ret  */
  ESPCHK(0x10c93980u, _esp0);
  ESP += 4; return;
}

/* FUN_10003cf0 @ 0x10c93cf0 (34 bytes, 13 insns) */
void f_10c93cf0(void) {
  FTRACE(0x10c93cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10c93cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93cf4 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c93cf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c93cfc cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93d00 je 0x10c93d0b */
  if (C.zf) goto L_10c93d0b;
  /* 10c93d02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93d05 mov dword ptr [0x10cbca84], ecx */
  w32((uint32_t)(0x10cbca84), (ECX));
L_10c93d0b:;
  /* 10c93d0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93d0e mov esp, ebp */
  ESP = (EBP);
  /* 10c93d10 pop ebp */
  EBP = (pop32());
  /* 10c93d11 ret  */
  ESPCHK(0x10c93cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003d20 @ 0x10c93d20 (103 bytes, 38 insns) */
void f_10c93d20(void) {
  FTRACE(0x10c93d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93d21 mov ebp, esp */
  EBP = (ESP);
  /* 10c93d23 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93d24 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c93d29 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10c93d2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93d2e jne 0x10c93d32 */
  if (!C.zf) goto L_10c93d32;
  /* 10c93d30 jmp 0x10c93d83 */
  goto L_10c93d83;
L_10c93d32:;
  /* 10c93d32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93d34 call 0x10c961e0 */
  push32(0x10c93d39u); f_10c961e0();
  /* 10c93d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93d3c mov ecx, dword ptr [0x10cbe44c] */
  ECX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c93d42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c93d45 jmp 0x10c93d4f */
  goto L_10c93d4f;
L_10c93d47:;
  /* 10c93d47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93d4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c93d4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c93d4f:;
  /* 10c93d4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93d53 je 0x10c93d79 */
  if (C.zf) goto L_10c93d79;
  /* 10c93d55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93d58 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c93d5b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c93d61 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93d64 jne 0x10c93d77 */
  if (!C.zf) goto L_10c93d77;
  /* 10c93d66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93d69 push eax */
  push32((uint32_t)(EAX));
  /* 10c93d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93d6d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93d70 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93d71 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10c93d74u);
  /* 10c93d74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c93d77:;
  /* 10c93d77 jmp 0x10c93d47 */
  goto L_10c93d47;
L_10c93d79:;
  /* 10c93d79 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93d7b call 0x10c96280 */
  push32(0x10c93d80u); f_10c96280();
  /* 10c93d80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c93d83:;
  /* 10c93d83 mov esp, ebp */
  ESP = (EBP);
  /* 10c93d85 pop ebp */
  EBP = (pop32());
  /* 10c93d86 ret  */
  ESPCHK(0x10c93d20u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10c93d90 (75 bytes, 28 insns) */
void f_10c93d90(void) {
  FTRACE(0x10c93d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93d90 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93d91 mov ebp, esp */
  EBP = (ESP);
  /* 10c93d93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93d94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93d98 je 0x10c93dcd */
  if (C.zf) goto L_10c93dcd;
  /* 10c93d9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93d9d push eax */
  push32((uint32_t)(EAX));
  /* 10c93d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93da1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93da2 call dword ptr [0x10cc0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0294))), 0x10c93da8u);
  /* 10c93da8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93daa jne 0x10c93dcd */
  if (!C.zf) goto L_10c93dcd;
  /* 10c93dac cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93db0 je 0x10c93dc4 */
  if (C.zf) goto L_10c93dc4;
  /* 10c93db2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93db5 push edx */
  push32((uint32_t)(EDX));
  /* 10c93db6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93db9 push eax */
  push32((uint32_t)(EAX));
  /* 10c93dba call dword ptr [0x10cc0290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0290))), 0x10c93dc0u);
  /* 10c93dc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93dc2 jne 0x10c93dcd */
  if (!C.zf) goto L_10c93dcd;
L_10c93dc4:;
  /* 10c93dc4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c93dcb jmp 0x10c93dd4 */
  goto L_10c93dd4;
L_10c93dcd:;
  /* 10c93dcd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c93dd4:;
  /* 10c93dd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93dd7 mov esp, ebp */
  ESP = (EBP);
  /* 10c93dd9 pop ebp */
  EBP = (pop32());
  /* 10c93dda ret  */
  ESPCHK(0x10c93d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10003de0 @ 0x10c93de0 (134 bytes, 50 insns) */
void f_10c93de0(void) {
  FTRACE(0x10c93de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93de1 mov ebp, esp */
  EBP = (ESP);
  /* 10c93de3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93de4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93de8 jne 0x10c93dee */
  if (!C.zf) goto L_10c93dee;
  /* 10c93dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93dec jmp 0x10c93e62 */
  goto L_10c93e62;
L_10c93dee:;
  /* 10c93dee push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93df0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10c93df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93df5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93df8 push eax */
  push32((uint32_t)(EAX));
  /* 10c93df9 call 0x10c93d90 */
  push32(0x10c93dfeu); f_10c93d90();
  /* 10c93dfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93e03 jne 0x10c93e09 */
  if (!C.zf) goto L_10c93e09;
  /* 10c93e05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93e07 jmp 0x10c93e62 */
  goto L_10c93e62;
L_10c93e09:;
  /* 10c93e09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93e0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93e0f push ecx */
  push32((uint32_t)(ECX));
  /* 10c93e10 call 0x10c96ae0 */
  push32(0x10c93e15u); f_10c96ae0();
  /* 10c93e15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93e18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c93e1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93e1f je 0x10c93e36 */
  if (C.zf) goto L_10c93e36;
  /* 10c93e21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93e24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93e27 push edx */
  push32((uint32_t)(EDX));
  /* 10c93e28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93e2b push eax */
  push32((uint32_t)(EAX));
  /* 10c93e2c call 0x10c96b40 */
  push32(0x10c93e31u); f_10c96b40();
  /* 10c93e31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93e34 jmp 0x10c93e62 */
  goto L_10c93e62;
L_10c93e36:;
  /* 10c93e36 mov ecx, dword ptr [0x10cbe400] */
  ECX = (r32((uint32_t)(0x10cbe400)));
  /* 10c93e3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10c93e42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c93e44 je 0x10c93e4d */
  if (C.zf) goto L_10c93e4d;
  /* 10c93e46 mov eax, 1 */
  EAX = (0x1u);
  /* 10c93e4b jmp 0x10c93e62 */
  goto L_10c93e62;
L_10c93e4d:;
  /* 10c93e4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93e50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93e53 push edx */
  push32((uint32_t)(EDX));
  /* 10c93e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93e56 mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c93e5b push eax */
  push32((uint32_t)(EAX));
  /* 10c93e5c call dword ptr [0x10cc0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0298))), 0x10c93e62u);
L_10c93e62:;
  /* 10c93e62 mov esp, ebp */
  ESP = (EBP);
  /* 10c93e64 pop ebp */
  EBP = (pop32());
  /* 10c93e65 ret  */
  ESPCHK(0x10c93de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003e70 @ 0x10c93e70 (227 bytes, 80 insns) */
void f_10c93e70(void) {
  FTRACE(0x10c93e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93e71 mov ebp, esp */
  EBP = (ESP);
  /* 10c93e73 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93e74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93e77 push eax */
  push32((uint32_t)(EAX));
  /* 10c93e78 call 0x10c93de0 */
  push32(0x10c93e7du); f_10c93de0();
  /* 10c93e7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93e80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93e82 jne 0x10c93e8b */
  if (!C.zf) goto L_10c93e8b;
  /* 10c93e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93e86 jmp 0x10c93f4f */
  goto L_10c93f4f;
L_10c93e8b:;
  /* 10c93e8b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93e8d call 0x10c961e0 */
  push32(0x10c93e92u); f_10c961e0();
  /* 10c93e92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93e95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93e98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93e9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c93e9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93ea1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93ea4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93ea9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93eac je 0x10c93ed0 */
  if (C.zf) goto L_10c93ed0;
  /* 10c93eae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93eb1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93eb5 je 0x10c93ed0 */
  if (C.zf) goto L_10c93ed0;
  /* 10c93eb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93eba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c93ebd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c93ec2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93ec5 je 0x10c93ed0 */
  if (C.zf) goto L_10c93ed0;
  /* 10c93ec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93eca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93ece jne 0x10c93f43 */
  if (!C.zf) goto L_10c93f43;
L_10c93ed0:;
  /* 10c93ed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c93ed2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c93ed5 push edx */
  push32((uint32_t)(EDX));
  /* 10c93ed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10c93eda call 0x10c93d90 */
  push32(0x10c93edfu); f_10c93d90();
  /* 10c93edf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93ee4 je 0x10c93f43 */
  if (C.zf) goto L_10c93f43;
  /* 10c93ee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93ee9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c93eec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93eef jne 0x10c93f43 */
  if (!C.zf) goto L_10c93f43;
  /* 10c93ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93ef4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c93ef7 cmp ecx, dword ptr [0x10cbca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93efd jg 0x10c93f43 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c93f43;
  /* 10c93eff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93f03 je 0x10c93f10 */
  if (C.zf) goto L_10c93f10;
  /* 10c93f05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c93f08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93f0b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10c93f0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c93f10:;
  /* 10c93f10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93f14 je 0x10c93f21 */
  if (C.zf) goto L_10c93f21;
  /* 10c93f16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c93f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93f1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c93f1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c93f21:;
  /* 10c93f21 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93f25 je 0x10c93f32 */
  if (C.zf) goto L_10c93f32;
  /* 10c93f27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c93f2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93f2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c93f30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c93f32:;
  /* 10c93f32 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93f34 call 0x10c96280 */
  push32(0x10c93f39u); f_10c96280();
  /* 10c93f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93f3c mov eax, 1 */
  EAX = (0x1u);
  /* 10c93f41 jmp 0x10c93f4f */
  goto L_10c93f4f;
L_10c93f43:;
  /* 10c93f43 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93f45 call 0x10c96280 */
  push32(0x10c93f4au); f_10c96280();
  /* 10c93f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c93f4f:;
  /* 10c93f4f mov esp, ebp */
  ESP = (EBP);
  /* 10c93f51 pop ebp */
  EBP = (pop32());
  /* 10c93f52 ret  */
  ESPCHK(0x10c93e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f60 @ 0x10c93f60 (28 bytes, 11 insns) */
void f_10c93f60(void) {
  FTRACE(0x10c93f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93f61 mov ebp, esp */
  EBP = (ESP);
  /* 10c93f63 push ecx */
  push32((uint32_t)(ECX));
  /* 10c93f64 mov eax, dword ptr [0x10cbfdb8] */
  EAX = (r32((uint32_t)(0x10cbfdb8)));
  /* 10c93f69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c93f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93f6f mov dword ptr [0x10cbfdb8], ecx */
  w32((uint32_t)(0x10cbfdb8), (ECX));
  /* 10c93f75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93f78 mov esp, ebp */
  ESP = (EBP);
  /* 10c93f7a pop ebp */
  EBP = (pop32());
  /* 10c93f7b ret  */
  ESPCHK(0x10c93f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10003f80 @ 0x10c93f80 (362 bytes, 116 insns) */
void f_10c93f80(void) {
  FTRACE(0x10c93f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c93f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c93f81 mov ebp, esp */
  EBP = (ESP);
  /* 10c93f83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c93f86 push ebx */
  push32((uint32_t)(EBX));
  /* 10c93f87 push esi */
  push32((uint32_t)(ESI));
  /* 10c93f88 push edi */
  push32((uint32_t)(EDI));
  /* 10c93f89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93f8d jne 0x10c93fba */
  if (!C.zf) goto L_10c93fba;
L_10c93f8f:;
  /* 10c93f8f push 0x10cb98e4 */
  push32((uint32_t)(0x10cb98e4u));
  /* 10c93f94 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c93f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c93fa1 call 0x10c918a0 */
  push32(0x10c93fa6u); f_10c918a0();
  /* 10c93fa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93fa9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93fac jne 0x10c93faf */
  if (!C.zf) goto L_10c93faf;
  /* 10c93fae int3  */
  x86_unimpl("int3 @ 0x10c93fae");
L_10c93faf:;
  /* 10c93faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c93fb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c93fb3 jne 0x10c93f8f */
  if (!C.zf) goto L_10c93f8f;
  /* 10c93fb5 jmp 0x10c940e3 */
  goto L_10c940e3;
L_10c93fba:;
  /* 10c93fba push 9 */
  push32((uint32_t)(0x9u));
  /* 10c93fbc call 0x10c961e0 */
  push32(0x10c93fc1u); f_10c961e0();
  /* 10c93fc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93fc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93fc7 mov edx, dword ptr [0x10cbe44c] */
  EDX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c93fcd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c93fcf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c93fd6 jmp 0x10c93fe1 */
  goto L_10c93fe1;
L_10c93fd8:;
  /* 10c93fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93fdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c93fde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c93fe1:;
  /* 10c93fe1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c93fe5 jge 0x10c94005 */
  if ((C.sf==C.of)) goto L_10c94005;
  /* 10c93fe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93fea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93fed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10c93ff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c93ff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c93ffb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10c94003 jmp 0x10c93fd8 */
  goto L_10c93fd8;
L_10c94005:;
  /* 10c94005 mov edx, dword ptr [0x10cbe44c] */
  EDX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c9400b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10c9400e jmp 0x10c94018 */
  goto L_10c94018;
L_10c94010:;
  /* 10c94010 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94013 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94015 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c94018:;
  /* 10c94018 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9401c je 0x10c940c1 */
  if (C.zf) goto L_10c940c1;
  /* 10c94022 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94025 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c94028 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9402d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9402f jl 0x10c94097 */
  if ((C.sf!=C.of)) goto L_10c94097;
  /* 10c94031 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94034 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c94037 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9403d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94040 jge 0x10c94097 */
  if ((C.sf==C.of)) goto L_10c94097;
  /* 10c94042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94045 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c94048 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c9404e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94051 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10c94055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94058 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9405b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c9405e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c94064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94067 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10c9406b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9406e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c94071 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c94076 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94079 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c9407d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94080 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94083 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94086 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c94089 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9408e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94091 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c94095 jmp 0x10c940bc */
  goto L_10c940bc;
L_10c94097:;
  /* 10c94097 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9409a push edx */
  push32((uint32_t)(EDX));
  /* 10c9409b push 0x10cb98c0 */
  push32((uint32_t)(0x10cb98c0u));
  /* 10c940a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c940a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c940a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c940a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c940a8 call 0x10c918a0 */
  push32(0x10c940adu); f_10c918a0();
  /* 10c940ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c940b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c940b3 jne 0x10c940b6 */
  if (!C.zf) goto L_10c940b6;
  /* 10c940b5 int3  */
  x86_unimpl("int3 @ 0x10c940b5");
L_10c940b6:;
  /* 10c940b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c940b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c940ba jne 0x10c94097 */
  if (!C.zf) goto L_10c94097;
L_10c940bc:;
  /* 10c940bc jmp 0x10c94010 */
  goto L_10c94010;
L_10c940c1:;
  /* 10c940c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c940c4 mov edx, dword ptr [0x10cbe454] */
  EDX = (r32((uint32_t)(0x10cbe454)));
  /* 10c940ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10c940cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c940d0 mov ecx, dword ptr [0x10cbe448] */
  ECX = (r32((uint32_t)(0x10cbe448)));
  /* 10c940d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10c940d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c940db call 0x10c96280 */
  push32(0x10c940e0u); f_10c96280();
  /* 10c940e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c940e3:;
  /* 10c940e3 pop edi */
  EDI = (pop32());
  /* 10c940e4 pop esi */
  ESI = (pop32());
  /* 10c940e5 pop ebx */
  EBX = (pop32());
  /* 10c940e6 mov esp, ebp */
  ESP = (EBP);
  /* 10c940e8 pop ebp */
  EBP = (pop32());
  /* 10c940e9 ret  */
  ESPCHK(0x10c93f80u, _esp0);
  ESP += 4; return;
}

/* FUN_100040f0 @ 0x10c940f0 (291 bytes, 95 insns) */
void f_10c940f0(void) {
  FTRACE(0x10c940f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c940f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c940f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c940f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c940f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c940f7 push esi */
  push32((uint32_t)(ESI));
  /* 10c940f8 push edi */
  push32((uint32_t)(EDI));
  /* 10c940f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c94100 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94104 je 0x10c94112 */
  if (C.zf) goto L_10c94112;
  /* 10c94106 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9410a je 0x10c94112 */
  if (C.zf) goto L_10c94112;
  /* 10c9410c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94110 jne 0x10c94140 */
  if (!C.zf) goto L_10c94140;
L_10c94112:;
  /* 10c94112 push 0x10cb990c */
  push32((uint32_t)(0x10cb990cu));
  /* 10c94117 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c9411c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9411e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94120 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94122 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94124 call 0x10c918a0 */
  push32(0x10c94129u); f_10c918a0();
  /* 10c94129 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9412c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9412f jne 0x10c94132 */
  if (!C.zf) goto L_10c94132;
  /* 10c94131 int3  */
  x86_unimpl("int3 @ 0x10c94131");
L_10c94132:;
  /* 10c94132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94136 jne 0x10c94112 */
  if (!C.zf) goto L_10c94112;
  /* 10c94138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9413b jmp 0x10c9420c */
  goto L_10c9420c;
L_10c94140:;
  /* 10c94140 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c94147 jmp 0x10c94152 */
  goto L_10c94152;
L_10c94149:;
  /* 10c94149 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9414c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9414f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c94152:;
  /* 10c94152 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94156 jge 0x10c941dc */
  if ((C.sf==C.of)) goto L_10c941dc;
  /* 10c9415c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9415f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94165 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94168 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10c9416c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94173 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94176 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10c9417a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9417d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94180 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94183 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94186 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10c9418a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9418e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94194 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10c94198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9419b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9419e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c941a3 jne 0x10c941b2 */
  if (!C.zf) goto L_10c941b2;
  /* 10c941a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c941a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c941ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c941b0 je 0x10c941d7 */
  if (C.zf) goto L_10c941d7;
L_10c941b2:;
  /* 10c941b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c941b6 je 0x10c941d7 */
  if (C.zf) goto L_10c941d7;
  /* 10c941b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c941bc jne 0x10c941d0 */
  if (!C.zf) goto L_10c941d0;
  /* 10c941be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c941c2 jne 0x10c941d7 */
  if (!C.zf) goto L_10c941d7;
  /* 10c941c4 mov eax, dword ptr [0x10cbca84] */
  EAX = (r32((uint32_t)(0x10cbca84)));
  /* 10c941c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10c941cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c941ce je 0x10c941d7 */
  if (C.zf) goto L_10c941d7;
L_10c941d0:;
  /* 10c941d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10c941d7:;
  /* 10c941d7 jmp 0x10c94149 */
  goto L_10c94149;
L_10c941dc:;
  /* 10c941dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c941df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c941e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c941e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c941e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c941eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10c941ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c941f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c941f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10c941f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c941fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c941fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10c94200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94203 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c94209 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10c9420c:;
  /* 10c9420c pop edi */
  EDI = (pop32());
  /* 10c9420d pop esi */
  ESI = (pop32());
  /* 10c9420e pop ebx */
  EBX = (pop32());
  /* 10c9420f mov esp, ebp */
  ESP = (EBP);
  /* 10c94211 pop ebp */
  EBP = (pop32());
  /* 10c94212 ret  */
  ESPCHK(0x10c940f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004220 @ 0x10c94220 (697 bytes, 253 insns) */
void f_10c94220(void) {
  FTRACE(0x10c94220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94220 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94221 mov ebp, esp */
  EBP = (ESP);
  /* 10c94223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94226 push ebx */
  push32((uint32_t)(EBX));
  /* 10c94227 push esi */
  push32((uint32_t)(ESI));
  /* 10c94228 push edi */
  push32((uint32_t)(EDI));
  /* 10c94229 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c94230 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c94232 call 0x10c961e0 */
  push32(0x10c94237u); f_10c961e0();
  /* 10c94237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9423a:;
  /* 10c9423a push 0x10cb9a04 */
  push32((uint32_t)(0x10cb9a04u));
  /* 10c9423f push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c94244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94248 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9424a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9424c call 0x10c918a0 */
  push32(0x10c94251u); f_10c918a0();
  /* 10c94251 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94257 jne 0x10c9425a */
  if (!C.zf) goto L_10c9425a;
  /* 10c94259 int3  */
  x86_unimpl("int3 @ 0x10c94259");
L_10c9425a:;
  /* 10c9425a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9425c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9425e jne 0x10c9423a */
  if (!C.zf) goto L_10c9423a;
  /* 10c94260 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94264 je 0x10c9426e */
  if (C.zf) goto L_10c9426e;
  /* 10c94266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94269 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9426b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c9426e:;
  /* 10c9426e mov eax, dword ptr [0x10cbe44c] */
  EAX = (r32((uint32_t)(0x10cbe44c)));
  /* 10c94273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c94276 jmp 0x10c94280 */
  goto L_10c94280;
L_10c94278:;
  /* 10c94278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9427b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9427d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c94280:;
  /* 10c94280 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94284 je 0x10c944a2 */
  if (C.zf) goto L_10c944a2;
  /* 10c9428a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9428d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94290 je 0x10c944a2 */
  if (C.zf) goto L_10c944a2;
  /* 10c94296 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94299 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c9429c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c942a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c942a5 je 0x10c942d4 */
  if (C.zf) goto L_10c942d4;
  /* 10c942a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c942aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10c942ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c942b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c942b5 je 0x10c942d4 */
  if (C.zf) goto L_10c942d4;
  /* 10c942b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c942ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c942bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c942c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c942c5 jne 0x10c942d9 */
  if (!C.zf) goto L_10c942d9;
  /* 10c942c7 mov ecx, dword ptr [0x10cbca84] */
  ECX = (r32((uint32_t)(0x10cbca84)));
  /* 10c942cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c942d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c942d2 jne 0x10c942d9 */
  if (!C.zf) goto L_10c942d9;
L_10c942d4:;
  /* 10c942d4 jmp 0x10c9449d */
  goto L_10c9449d;
L_10c942d9:;
  /* 10c942d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c942dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c942e0 je 0x10c94352 */
  if (C.zf) goto L_10c94352;
  /* 10c942e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c942e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c942e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c942e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10c942ec push ecx */
  push32((uint32_t)(ECX));
  /* 10c942ed call 0x10c93d90 */
  push32(0x10c942f2u); f_10c93d90();
  /* 10c942f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c942f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c942f7 jne 0x10c94323 */
  if (!C.zf) goto L_10c94323;
L_10c942f9:;
  /* 10c942f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c942fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c942ff push eax */
  push32((uint32_t)(EAX));
  /* 10c94300 push 0x10cb99f0 */
  push32((uint32_t)(0x10cb99f0u));
  /* 10c94305 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94307 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94309 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9430b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9430d call 0x10c918a0 */
  push32(0x10c94312u); f_10c918a0();
  /* 10c94312 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94318 jne 0x10c9431b */
  if (!C.zf) goto L_10c9431b;
  /* 10c9431a int3  */
  x86_unimpl("int3 @ 0x10c9431a");
L_10c9431b:;
  /* 10c9431b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9431d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9431f jne 0x10c942f9 */
  if (!C.zf) goto L_10c942f9;
  /* 10c94321 jmp 0x10c94352 */
  goto L_10c94352;
L_10c94323:;
  /* 10c94323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94326 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c94329 push eax */
  push32((uint32_t)(EAX));
  /* 10c9432a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9432d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c94330 push edx */
  push32((uint32_t)(EDX));
  /* 10c94331 push 0x10cb99e4 */
  push32((uint32_t)(0x10cb99e4u));
  /* 10c94336 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94338 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9433a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9433c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9433e call 0x10c918a0 */
  push32(0x10c94343u); f_10c918a0();
  /* 10c94343 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94346 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94349 jne 0x10c9434c */
  if (!C.zf) goto L_10c9434c;
  /* 10c9434b int3  */
  x86_unimpl("int3 @ 0x10c9434b");
L_10c9434c:;
  /* 10c9434c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9434e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94350 jne 0x10c94323 */
  if (!C.zf) goto L_10c94323;
L_10c94352:;
  /* 10c94352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94355 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10c94358 push edx */
  push32((uint32_t)(EDX));
  /* 10c94359 push 0x10cb99dc */
  push32((uint32_t)(0x10cb99dcu));
  /* 10c9435e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94360 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94362 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94364 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94366 call 0x10c918a0 */
  push32(0x10c9436bu); f_10c918a0();
  /* 10c9436b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9436e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94371 jne 0x10c94374 */
  if (!C.zf) goto L_10c94374;
  /* 10c94373 int3  */
  x86_unimpl("int3 @ 0x10c94373");
L_10c94374:;
  /* 10c94374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94378 jne 0x10c94352 */
  if (!C.zf) goto L_10c94352;
  /* 10c9437a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9437d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c94380 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c94386 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94389 jne 0x10c943fc */
  if (!C.zf) goto L_10c943fc;
L_10c9438b:;
  /* 10c9438b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9438e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c94391 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c94398 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c9439b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c943a0 push eax */
  push32((uint32_t)(EAX));
  /* 10c943a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c943a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c943a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c943a8 push 0x10cb99a8 */
  push32((uint32_t)(0x10cb99a8u));
  /* 10c943ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10c943af push 0 */
  push32((uint32_t)(0x0u));
  /* 10c943b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c943b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c943b5 call 0x10c918a0 */
  push32(0x10c943bau); f_10c918a0();
  /* 10c943ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c943bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c943c0 jne 0x10c943c3 */
  if (!C.zf) goto L_10c943c3;
  /* 10c943c2 int3  */
  x86_unimpl("int3 @ 0x10c943c2");
L_10c943c3:;
  /* 10c943c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c943c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c943c7 jne 0x10c9438b */
  if (!C.zf) goto L_10c9438b;
  /* 10c943c9 cmp dword ptr [0x10cbfdb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfdb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c943d0 je 0x10c943eb */
  if (C.zf) goto L_10c943eb;
  /* 10c943d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c943d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c943d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c943d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c943dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c943df push edx */
  push32((uint32_t)(EDX));
  /* 10c943e0 call dword ptr [0x10cbfdb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbfdb8))), 0x10c943e6u);
  /* 10c943e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c943e9 jmp 0x10c943f7 */
  goto L_10c943f7;
L_10c943eb:;
  /* 10c943eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c943ee push eax */
  push32((uint32_t)(EAX));
  /* 10c943ef call 0x10c944e0 */
  push32(0x10c943f4u); f_10c944e0();
  /* 10c943f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c943f7:;
  /* 10c943f7 jmp 0x10c9449d */
  goto L_10c9449d;
L_10c943fc:;
  /* 10c943fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c943ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94403 jne 0x10c94442 */
  if (!C.zf) goto L_10c94442;
L_10c94405:;
  /* 10c94405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94408 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9440b push eax */
  push32((uint32_t)(EAX));
  /* 10c9440c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9440f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94412 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94413 push 0x10cb9980 */
  push32((uint32_t)(0x10cb9980u));
  /* 10c94418 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9441a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9441c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9441e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94420 call 0x10c918a0 */
  push32(0x10c94425u); f_10c918a0();
  /* 10c94425 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94428 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9442b jne 0x10c9442e */
  if (!C.zf) goto L_10c9442e;
  /* 10c9442d int3  */
  x86_unimpl("int3 @ 0x10c9442d");
L_10c9442e:;
  /* 10c9442e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94432 jne 0x10c94405 */
  if (!C.zf) goto L_10c94405;
  /* 10c94434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94437 push eax */
  push32((uint32_t)(EAX));
  /* 10c94438 call 0x10c944e0 */
  push32(0x10c9443du); f_10c944e0();
  /* 10c9443d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94440 jmp 0x10c9449d */
  goto L_10c9449d;
L_10c94442:;
  /* 10c94442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94445 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10c94448 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9444e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94451 jne 0x10c9449d */
  if (!C.zf) goto L_10c9449d;
L_10c94453:;
  /* 10c94453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94456 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10c94459 push ecx */
  push32((uint32_t)(ECX));
  /* 10c9445a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9445d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10c94460 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c94463 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c94468 push eax */
  push32((uint32_t)(EAX));
  /* 10c94469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9446c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9446f push ecx */
  push32((uint32_t)(ECX));
  /* 10c94470 push 0x10cb994c */
  push32((uint32_t)(0x10cb994cu));
  /* 10c94475 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94477 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94479 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9447b push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9447d call 0x10c918a0 */
  push32(0x10c94482u); f_10c918a0();
  /* 10c94482 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94488 jne 0x10c9448b */
  if (!C.zf) goto L_10c9448b;
  /* 10c9448a int3  */
  x86_unimpl("int3 @ 0x10c9448a");
L_10c9448b:;
  /* 10c9448b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c9448d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9448f jne 0x10c94453 */
  if (!C.zf) goto L_10c94453;
  /* 10c94491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94494 push eax */
  push32((uint32_t)(EAX));
  /* 10c94495 call 0x10c944e0 */
  push32(0x10c9449au); f_10c944e0();
  /* 10c9449a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9449d:;
  /* 10c9449d jmp 0x10c94278 */
  goto L_10c94278;
L_10c944a2:;
  /* 10c944a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c944a4 call 0x10c96280 */
  push32(0x10c944a9u); f_10c96280();
  /* 10c944a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c944ac:;
  /* 10c944ac push 0x10cb9934 */
  push32((uint32_t)(0x10cb9934u));
  /* 10c944b1 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c944b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c944b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c944ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10c944bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c944be call 0x10c918a0 */
  push32(0x10c944c3u); f_10c918a0();
  /* 10c944c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c944c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c944c9 jne 0x10c944cc */
  if (!C.zf) goto L_10c944cc;
  /* 10c944cb int3  */
  x86_unimpl("int3 @ 0x10c944cb");
L_10c944cc:;
  /* 10c944cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c944ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c944d0 jne 0x10c944ac */
  if (!C.zf) goto L_10c944ac;
  /* 10c944d2 pop edi */
  EDI = (pop32());
  /* 10c944d3 pop esi */
  ESI = (pop32());
  /* 10c944d4 pop ebx */
  EBX = (pop32());
  /* 10c944d5 mov esp, ebp */
  ESP = (EBP);
  /* 10c944d7 pop ebp */
  EBP = (pop32());
  /* 10c944d8 ret  */
  ESPCHK(0x10c94220u, _esp0);
  ESP += 4; return;
}

/* FUN_100044e0 @ 0x10c944e0 (276 bytes, 89 insns) */
void f_10c944e0(void) {
  FTRACE(0x10c944e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c944e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c944e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c944e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c944e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10c944e7 push esi */
  push32((uint32_t)(ESI));
  /* 10c944e8 push edi */
  push32((uint32_t)(EDI));
  /* 10c944e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10c944f0 jmp 0x10c944fb */
  goto L_10c944fb;
L_10c944f2:;
  /* 10c944f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c944f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c944f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10c944fb:;
  /* 10c944fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c944fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94502 jge 0x10c9450f */
  if ((C.sf==C.of)) goto L_10c9450f;
  /* 10c94504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94507 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10c9450a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10c9450d jmp 0x10c94516 */
  goto L_10c94516;
L_10c9450f:;
  /* 10c9450f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10c94516:;
  /* 10c94516 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c94519 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9451c jge 0x10c945bc */
  if ((C.sf==C.of)) goto L_10c945bc;
  /* 10c94522 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94525 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94528 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10c9452b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10c9452e cmp dword ptr [0x10cbcea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbcea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94535 jle 0x10c94553 */
  if ((C.zf||C.sf!=C.of)) goto L_10c94553;
  /* 10c94537 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10c9453c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c9453f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c94545 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94546 call 0x10c987f0 */
  push32(0x10c9454bu); f_10c987f0();
  /* 10c9454b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9454e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10c94551 jmp 0x10c94570 */
  goto L_10c94570;
L_10c94553:;
  /* 10c94553 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c94556 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9455c mov eax, dword ptr [0x10cbcc98] */
  EAX = (r32((uint32_t)(0x10cbcc98)));
  /* 10c94561 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c94563 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10c94567 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9456d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10c94570:;
  /* 10c94570 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94574 je 0x10c94584 */
  if (C.zf) goto L_10c94584;
  /* 10c94576 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c94579 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9457f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10c94582 jmp 0x10c9458b */
  goto L_10c9458b;
L_10c94584:;
  /* 10c94584 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10c9458b:;
  /* 10c9458b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c9458e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10c94591 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10c94595 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10c94598 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9459e push edx */
  push32((uint32_t)(EDX));
  /* 10c9459f push 0x10cb9a28 */
  push32((uint32_t)(0x10cb9a28u));
  /* 10c945a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c945a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c945aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10c945ae push ecx */
  push32((uint32_t)(ECX));
  /* 10c945af call 0x10c986f0 */
  push32(0x10c945b4u); f_10c986f0();
  /* 10c945b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c945b7 jmp 0x10c944f2 */
  goto L_10c944f2;
L_10c945bc:;
  /* 10c945bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10c945bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10c945c4:;
  /* 10c945c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c945c7 push eax */
  push32((uint32_t)(EAX));
  /* 10c945c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10c945cb push ecx */
  push32((uint32_t)(ECX));
  /* 10c945cc push 0x10cb9a18 */
  push32((uint32_t)(0x10cb9a18u));
  /* 10c945d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c945d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c945d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c945d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c945d9 call 0x10c918a0 */
  push32(0x10c945deu); f_10c918a0();
  /* 10c945de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c945e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c945e4 jne 0x10c945e7 */
  if (!C.zf) goto L_10c945e7;
  /* 10c945e6 int3  */
  x86_unimpl("int3 @ 0x10c945e6");
L_10c945e7:;
  /* 10c945e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c945e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c945eb jne 0x10c945c4 */
  if (!C.zf) goto L_10c945c4;
  /* 10c945ed pop edi */
  EDI = (pop32());
  /* 10c945ee pop esi */
  ESI = (pop32());
  /* 10c945ef pop ebx */
  EBX = (pop32());
  /* 10c945f0 mov esp, ebp */
  ESP = (EBP);
  /* 10c945f2 pop ebp */
  EBP = (pop32());
  /* 10c945f3 ret  */
  ESPCHK(0x10c944e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004600 @ 0x10c94600 (116 bytes, 46 insns) */
void f_10c94600(void) {
  FTRACE(0x10c94600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94600 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94601 mov ebp, esp */
  EBP = (ESP);
  /* 10c94603 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94606 push ebx */
  push32((uint32_t)(EBX));
  /* 10c94607 push esi */
  push32((uint32_t)(ESI));
  /* 10c94608 push edi */
  push32((uint32_t)(EDI));
  /* 10c94609 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10c9460c push eax */
  push32((uint32_t)(EAX));
  /* 10c9460d call 0x10c93f80 */
  push32(0x10c94612u); f_10c93f80();
  /* 10c94612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94615 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94619 jne 0x10c94634 */
  if (!C.zf) goto L_10c94634;
  /* 10c9461b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9461f jne 0x10c94634 */
  if (!C.zf) goto L_10c94634;
  /* 10c94621 mov ecx, dword ptr [0x10cbca84] */
  ECX = (r32((uint32_t)(0x10cbca84)));
  /* 10c94627 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9462a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c9462c je 0x10c9466b */
  if (C.zf) goto L_10c9466b;
  /* 10c9462e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94632 je 0x10c9466b */
  if (C.zf) goto L_10c9466b;
L_10c94634:;
  /* 10c94634 push 0x10cb9a30 */
  push32((uint32_t)(0x10cb9a30u));
  /* 10c94639 push 0x10cb93fc */
  push32((uint32_t)(0x10cb93fcu));
  /* 10c9463e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94640 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94642 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94644 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94646 call 0x10c918a0 */
  push32(0x10c9464bu); f_10c918a0();
  /* 10c9464b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9464e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94651 jne 0x10c94654 */
  if (!C.zf) goto L_10c94654;
  /* 10c94653 int3  */
  x86_unimpl("int3 @ 0x10c94653");
L_10c94654:;
  /* 10c94654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94656 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94658 jne 0x10c94634 */
  if (!C.zf) goto L_10c94634;
  /* 10c9465a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9465c call 0x10c94220 */
  push32(0x10c94661u); f_10c94220();
  /* 10c94661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94664 mov eax, 1 */
  EAX = (0x1u);
  /* 10c94669 jmp 0x10c9466d */
  goto L_10c9466d;
L_10c9466b:;
  /* 10c9466b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9466d:;
  /* 10c9466d pop edi */
  EDI = (pop32());
  /* 10c9466e pop esi */
  ESI = (pop32());
  /* 10c9466f pop ebx */
  EBX = (pop32());
  /* 10c94670 mov esp, ebp */
  ESP = (EBP);
  /* 10c94672 pop ebp */
  EBP = (pop32());
  /* 10c94673 ret  */
  ESPCHK(0x10c94600u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x10c94680 (197 bytes, 79 insns) */
void f_10c94680(void) {
  FTRACE(0x10c94680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94680 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94681 mov ebp, esp */
  EBP = (ESP);
  /* 10c94683 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94684 push ebx */
  push32((uint32_t)(EBX));
  /* 10c94685 push esi */
  push32((uint32_t)(ESI));
  /* 10c94686 push edi */
  push32((uint32_t)(EDI));
  /* 10c94687 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9468b jne 0x10c94692 */
  if (!C.zf) goto L_10c94692;
  /* 10c9468d jmp 0x10c9473e */
  goto L_10c9473e;
L_10c94692:;
  /* 10c94692 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c94699 jmp 0x10c946a4 */
  goto L_10c946a4;
L_10c9469b:;
  /* 10c9469b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9469e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c946a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c946a4:;
  /* 10c946a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c946a8 jge 0x10c946ee */
  if ((C.sf==C.of)) goto L_10c946ee;
L_10c946aa:;
  /* 10c946aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c946ad mov edx, dword ptr [ecx*4 + 0x10cbca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbca94)));
  /* 10c946b4 push edx */
  push32((uint32_t)(EDX));
  /* 10c946b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c946b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c946bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10c946bf push edx */
  push32((uint32_t)(EDX));
  /* 10c946c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c946c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c946c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10c946ca push edx */
  push32((uint32_t)(EDX));
  /* 10c946cb push 0x10cb9a8c */
  push32((uint32_t)(0x10cb9a8cu));
  /* 10c946d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946d8 call 0x10c918a0 */
  push32(0x10c946ddu); f_10c918a0();
  /* 10c946dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c946e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c946e3 jne 0x10c946e6 */
  if (!C.zf) goto L_10c946e6;
  /* 10c946e5 int3  */
  x86_unimpl("int3 @ 0x10c946e5");
L_10c946e6:;
  /* 10c946e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c946e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c946ea jne 0x10c946aa */
  if (!C.zf) goto L_10c946aa;
  /* 10c946ec jmp 0x10c9469b */
  goto L_10c9469b;
L_10c946ee:;
  /* 10c946ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c946f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10c946f4 push edx */
  push32((uint32_t)(EDX));
  /* 10c946f5 push 0x10cb9a68 */
  push32((uint32_t)(0x10cb9a68u));
  /* 10c946fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10c946fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94700 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94702 call 0x10c918a0 */
  push32(0x10c94707u); f_10c918a0();
  /* 10c94707 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9470a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9470d jne 0x10c94710 */
  if (!C.zf) goto L_10c94710;
  /* 10c9470f int3  */
  x86_unimpl("int3 @ 0x10c9470f");
L_10c94710:;
  /* 10c94710 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94714 jne 0x10c946ee */
  if (!C.zf) goto L_10c946ee;
L_10c94716:;
  /* 10c94716 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c94719 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10c9471c push edx */
  push32((uint32_t)(EDX));
  /* 10c9471d push 0x10cb9a48 */
  push32((uint32_t)(0x10cb9a48u));
  /* 10c94722 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94728 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9472a call 0x10c918a0 */
  push32(0x10c9472fu); f_10c918a0();
  /* 10c9472f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94732 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94735 jne 0x10c94738 */
  if (!C.zf) goto L_10c94738;
  /* 10c94737 int3  */
  x86_unimpl("int3 @ 0x10c94737");
L_10c94738:;
  /* 10c94738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9473a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9473c jne 0x10c94716 */
  if (!C.zf) goto L_10c94716;
L_10c9473e:;
  /* 10c9473e pop edi */
  EDI = (pop32());
  /* 10c9473f pop esi */
  ESI = (pop32());
  /* 10c94740 pop ebx */
  EBX = (pop32());
  /* 10c94741 mov esp, ebp */
  ESP = (EBP);
  /* 10c94743 pop ebp */
  EBP = (pop32());
  /* 10c94744 ret  */
  ESPCHK(0x10c94680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x10c94750 (329 bytes, 102 insns) */
void f_10c94750(void) {
  FTRACE(0x10c94750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94750 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94751 mov ebp, esp */
  EBP = (ESP);
  /* 10c94753 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94756 cmp dword ptr [0x10cbff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9475d jne 0x10c94764 */
  if (!C.zf) goto L_10c94764;
  /* 10c9475f call 0x10c99090 */
  push32(0x10c94764u); f_10c99090();
L_10c94764:;
  /* 10c94764 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9476b mov eax, dword ptr [0x10cbe3e8] */
  EAX = (r32((uint32_t)(0x10cbe3e8)));
  /* 10c94770 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c94773:;
  /* 10c94773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94776 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c94779 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9477b je 0x10c947a9 */
  if (C.zf) goto L_10c947a9;
  /* 10c9477d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94780 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94783 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94786 je 0x10c94791 */
  if (C.zf) goto L_10c94791;
  /* 10c94788 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9478b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9478e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c94791:;
  /* 10c94791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94794 push eax */
  push32((uint32_t)(EAX));
  /* 10c94795 call 0x10c95610 */
  push32(0x10c9479au); f_10c95610();
  /* 10c9479a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9479d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c947a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10c947a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c947a7 jmp 0x10c94773 */
  goto L_10c94773;
L_10c947a9:;
  /* 10c947a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10c947ab push 0x10cb9aac */
  push32((uint32_t)(0x10cb9aacu));
  /* 10c947b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c947b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c947b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10c947bc push ecx */
  push32((uint32_t)(ECX));
  /* 10c947bd call 0x10c927e0 */
  push32(0x10c947c2u); f_10c927e0();
  /* 10c947c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c947c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c947c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c947cb mov dword ptr [0x10cbe41c], edx */
  w32((uint32_t)(0x10cbe41c), (EDX));
  /* 10c947d1 cmp dword ptr [0x10cbe41c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe41c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c947d8 jne 0x10c947e4 */
  if (!C.zf) goto L_10c947e4;
  /* 10c947da push 9 */
  push32((uint32_t)(0x9u));
  /* 10c947dc call 0x10c91750 */
  push32(0x10c947e1u); f_10c91750();
  /* 10c947e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c947e4:;
  /* 10c947e4 mov eax, dword ptr [0x10cbe3e8] */
  EAX = (r32((uint32_t)(0x10cbe3e8)));
  /* 10c947e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c947ec jmp 0x10c947f7 */
  goto L_10c947f7;
L_10c947ee:;
  /* 10c947ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c947f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c947f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c947f7:;
  /* 10c947f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c947fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c947fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c947ff je 0x10c94867 */
  if (C.zf) goto L_10c94867;
  /* 10c94801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94804 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94805 call 0x10c95610 */
  push32(0x10c9480au); f_10c95610();
  /* 10c9480a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9480d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94810 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c94813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94816 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c94819 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9481c je 0x10c94865 */
  if (C.zf) goto L_10c94865;
  /* 10c9481e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10c94820 push 0x10cb9aac */
  push32((uint32_t)(0x10cb9aacu));
  /* 10c94825 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94827 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9482a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9482b call 0x10c927e0 */
  push32(0x10c94830u); f_10c927e0();
  /* 10c94830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94833 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94836 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c94838 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9483b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9483e jne 0x10c9484a */
  if (!C.zf) goto L_10c9484a;
  /* 10c94840 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c94842 call 0x10c91750 */
  push32(0x10c94847u); f_10c91750();
  /* 10c94847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9484a:;
  /* 10c9484a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9484d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9484e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94851 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c94853 push eax */
  push32((uint32_t)(EAX));
  /* 10c94854 call 0x10c95790 */
  push32(0x10c94859u); f_10c95790();
  /* 10c94859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9485c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9485f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94862 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10c94865:;
  /* 10c94865 jmp 0x10c947ee */
  goto L_10c947ee;
L_10c94867:;
  /* 10c94867 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94869 mov edx, dword ptr [0x10cbe3e8] */
  EDX = (r32((uint32_t)(0x10cbe3e8)));
  /* 10c9486f push edx */
  push32((uint32_t)(EDX));
  /* 10c94870 call 0x10c93270 */
  push32(0x10c94875u); f_10c93270();
  /* 10c94875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94878 mov dword ptr [0x10cbe3e8], 0 */
  w32((uint32_t)(0x10cbe3e8), (0x0u));
  /* 10c94882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94885 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9488b mov dword ptr [0x10cbff20], 1 */
  w32((uint32_t)(0x10cbff20), (0x1u));
  /* 10c94895 mov esp, ebp */
  ESP = (EBP);
  /* 10c94897 pop ebp */
  EBP = (pop32());
  /* 10c94898 ret  */
  ESPCHK(0x10c94750u, _esp0);
  ESP += 4; return;
}

/* FUN_100048a0 @ 0x10c948a0 (216 bytes, 69 insns) */
void f_10c948a0(void) {
  FTRACE(0x10c948a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c948a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c948a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c948a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c948a6 cmp dword ptr [0x10cbff30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbff30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c948ad jne 0x10c948b4 */
  if (!C.zf) goto L_10c948b4;
  /* 10c948af call 0x10c99090 */
  push32(0x10c948b4u); f_10c99090();
L_10c948b4:;
  /* 10c948b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c948b9 push 0x10cbe458 */
  push32((uint32_t)(0x10cbe458u));
  /* 10c948be push 0 */
  push32((uint32_t)(0x0u));
  /* 10c948c0 call dword ptr [0x10cc0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0250))), 0x10c948c6u);
  /* 10c948c6 mov dword ptr [0x10cbe42c], 0x10cbe458 */
  w32((uint32_t)(0x10cbe42c), (0x10cbe458u));
  /* 10c948d0 mov eax, dword ptr [0x10cbff4c] */
  EAX = (r32((uint32_t)(0x10cbff4c)));
  /* 10c948d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c948d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c948da jne 0x10c948e7 */
  if (!C.zf) goto L_10c948e7;
  /* 10c948dc mov edx, dword ptr [0x10cbe42c] */
  EDX = (r32((uint32_t)(0x10cbe42c)));
  /* 10c948e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10c948e5 jmp 0x10c948ef */
  goto L_10c948ef;
L_10c948e7:;
  /* 10c948e7 mov eax, dword ptr [0x10cbff4c] */
  EAX = (r32((uint32_t)(0x10cbff4c)));
  /* 10c948ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10c948ef:;
  /* 10c948ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c948f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c948f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c948f8 push edx */
  push32((uint32_t)(EDX));
  /* 10c948f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c948fc push eax */
  push32((uint32_t)(EAX));
  /* 10c948fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10c948ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94901 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94904 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94905 call 0x10c94980 */
  push32(0x10c9490au); f_10c94980();
  /* 10c9490a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9490d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10c94912 push 0x10cb9ab8 */
  push32((uint32_t)(0x10cb9ab8u));
  /* 10c94917 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9491c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9491f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10c94922 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94923 call 0x10c927e0 */
  push32(0x10c94928u); f_10c927e0();
  /* 10c94928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9492b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9492e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94932 jne 0x10c9493e */
  if (!C.zf) goto L_10c9493e;
  /* 10c94934 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c94936 call 0x10c91750 */
  push32(0x10c9493bu); f_10c91750();
  /* 10c9493b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9493e:;
  /* 10c9493e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10c94941 push edx */
  push32((uint32_t)(EDX));
  /* 10c94942 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10c94945 push eax */
  push32((uint32_t)(EAX));
  /* 10c94946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94949 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9494c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10c9494f push eax */
  push32((uint32_t)(EAX));
  /* 10c94950 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94953 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94954 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94957 push edx */
  push32((uint32_t)(EDX));
  /* 10c94958 call 0x10c94980 */
  push32(0x10c9495du); f_10c94980();
  /* 10c9495d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94960 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94963 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94966 mov dword ptr [0x10cbe410], eax */
  w32((uint32_t)(0x10cbe410), (EAX));
  /* 10c9496b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9496e mov dword ptr [0x10cbe414], ecx */
  w32((uint32_t)(0x10cbe414), (ECX));
  /* 10c94974 mov esp, ebp */
  ESP = (EBP);
  /* 10c94976 pop ebp */
  EBP = (pop32());
  /* 10c94977 ret  */
  ESPCHK(0x10c948a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004980 @ 0x10c94980 (1060 bytes, 360 insns) */
void f_10c94980(void) {
  FTRACE(0x10c94980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94980 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94981 mov ebp, esp */
  EBP = (ESP);
  /* 10c94983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94986 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94989 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c9498f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c94992 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10c94998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9499b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9499e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c949a2 je 0x10c949b5 */
  if (C.zf) goto L_10c949b5;
  /* 10c949a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c949a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c949aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c949ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c949af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c949b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10c949b5:;
  /* 10c949b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c949b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c949bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c949be jne 0x10c94a8d */
  if (!C.zf) goto L_10c94a8d;
L_10c949c4:;
  /* 10c949c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c949c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c949ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c949cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c949d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c949d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c949d6 je 0x10c94a52 */
  if (C.zf) goto L_10c94a52;
  /* 10c949d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c949db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c949de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c949e0 je 0x10c94a52 */
  if (C.zf) goto L_10c94a52;
  /* 10c949e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c949e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c949e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c949e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c949eb mov al, byte ptr [edx + 0x10cbfc81] */
  AL = (r8((uint32_t)(EDX + 0x10cbfc81)));
  /* 10c949f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10c949f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c949f6 je 0x10c94a27 */
  if (C.zf) goto L_10c94a27;
  /* 10c949f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c949fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c949fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c94a05 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94a09 je 0x10c94a27 */
  if (C.zf) goto L_10c94a27;
  /* 10c94a0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94a11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c94a13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c94a15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c94a1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94a21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c94a27:;
  /* 10c94a27 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94a2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c94a34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94a38 je 0x10c94a4d */
  if (C.zf) goto L_10c94a4d;
  /* 10c94a3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94a40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c94a42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c94a44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a4a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c94a4d:;
  /* 10c94a4d jmp 0x10c949c4 */
  goto L_10c949c4;
L_10c94a52:;
  /* 10c94a52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c94a57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a5a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a5d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10c94a5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94a63 je 0x10c94a74 */
  if (C.zf) goto L_10c94a74;
  /* 10c94a65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a68 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c94a6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94a6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a71 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c94a74:;
  /* 10c94a74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94a77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94a7a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94a7d jne 0x10c94a88 */
  if (!C.zf) goto L_10c94a88;
  /* 10c94a7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94a82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c94a88:;
  /* 10c94a88 jmp 0x10c94b5c */
  goto L_10c94b5c;
L_10c94a8d:;
  /* 10c94a8d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94a95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94a98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c94a9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94a9e je 0x10c94ab3 */
  if (C.zf) goto L_10c94ab3;
  /* 10c94aa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94aa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c94aa8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c94aaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94aad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94ab0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c94ab3:;
  /* 10c94ab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94ab6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c94ab8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10c94abb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94abe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94ac1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c94ac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94ac7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c94acd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94acf mov dl, byte ptr [ecx + 0x10cbfc81] */
  DL = (r8((uint32_t)(ECX + 0x10cbfc81)));
  /* 10c94ad5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10c94ad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94ada je 0x10c94b0b */
  if (C.zf) goto L_10c94b0b;
  /* 10c94adc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94adf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94ae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94ae4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94ae7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c94ae9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94aed je 0x10c94b02 */
  if (C.zf) goto L_10c94b02;
  /* 10c94aef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94af2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94af5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c94af7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c94af9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94afc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94aff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10c94b02:;
  /* 10c94b02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94b08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c94b0b:;
  /* 10c94b0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94b0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c94b14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94b17 je 0x10c94b37 */
  if (C.zf) goto L_10c94b37;
  /* 10c94b19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94b1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c94b21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94b23 je 0x10c94b37 */
  if (C.zf) goto L_10c94b37;
  /* 10c94b25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94b28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c94b2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94b31 jne 0x10c94a8d */
  if (!C.zf) goto L_10c94a8d;
L_10c94b37:;
  /* 10c94b37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94b3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c94b40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94b42 jne 0x10c94b4f */
  if (!C.zf) goto L_10c94b4f;
  /* 10c94b44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94b4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c94b4d jmp 0x10c94b5c */
  goto L_10c94b5c;
L_10c94b4f:;
  /* 10c94b4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94b53 je 0x10c94b5c */
  if (C.zf) goto L_10c94b5c;
  /* 10c94b55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94b58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10c94b5c:;
  /* 10c94b5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10c94b63:;
  /* 10c94b63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c94b69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94b6b je 0x10c94b8e */
  if (C.zf) goto L_10c94b8e;
L_10c94b6d:;
  /* 10c94b6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c94b73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94b76 je 0x10c94b83 */
  if (C.zf) goto L_10c94b83;
  /* 10c94b78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94b7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94b81 jne 0x10c94b8e */
  if (!C.zf) goto L_10c94b8e;
L_10c94b83:;
  /* 10c94b83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94b89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c94b8c jmp 0x10c94b6d */
  goto L_10c94b6d;
L_10c94b8e:;
  /* 10c94b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94b91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94b94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c94b96 jne 0x10c94b9d */
  if (!C.zf) goto L_10c94b9d;
  /* 10c94b98 jmp 0x10c94d7b */
  goto L_10c94d7b;
L_10c94b9d:;
  /* 10c94b9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94ba1 je 0x10c94bb4 */
  if (C.zf) goto L_10c94bb4;
  /* 10c94ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94ba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94ba9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10c94bab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94bae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94bb1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c94bb4:;
  /* 10c94bb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c94bb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c94bb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94bbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c94bbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10c94bc1:;
  /* 10c94bc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10c94bc8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10c94bcf:;
  /* 10c94bcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94bd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c94bd5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94bd8 jne 0x10c94bee */
  if (!C.zf) goto L_10c94bee;
  /* 10c94bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94bdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94be0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c94be3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94be6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94be9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c94bec jmp 0x10c94bcf */
  goto L_10c94bcf;
L_10c94bee:;
  /* 10c94bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94bf1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94bf4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94bf7 jne 0x10c94c4a */
  if (!C.zf) goto L_10c94c4a;
  /* 10c94bf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94bfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94bfe mov ecx, 2 */
  ECX = (0x2u);
  /* 10c94c03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c94c05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94c07 jne 0x10c94c42 */
  if (!C.zf) goto L_10c94c42;
  /* 10c94c09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c0d je 0x10c94c2f */
  if (C.zf) goto L_10c94c2f;
  /* 10c94c0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94c12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10c94c16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c19 jne 0x10c94c26 */
  if (!C.zf) goto L_10c94c26;
  /* 10c94c1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94c1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94c21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c94c24 jmp 0x10c94c2d */
  goto L_10c94c2d;
L_10c94c26:;
  /* 10c94c26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c94c2d:;
  /* 10c94c2d jmp 0x10c94c36 */
  goto L_10c94c36;
L_10c94c2f:;
  /* 10c94c2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10c94c36:;
  /* 10c94c36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94c38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10c94c3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c94c42:;
  /* 10c94c42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94c45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10c94c47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10c94c4a:;
  /* 10c94c4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94c4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94c50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94c53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10c94c56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c94c58 je 0x10c94c7e */
  if (C.zf) goto L_10c94c7e;
  /* 10c94c5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c5e je 0x10c94c6f */
  if (C.zf) goto L_10c94c6f;
  /* 10c94c60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94c63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10c94c66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94c69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94c6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10c94c6f:;
  /* 10c94c6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94c72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c94c74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94c77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94c7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c94c7c jmp 0x10c94c4a */
  goto L_10c94c4a;
L_10c94c7e:;
  /* 10c94c7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94c81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10c94c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94c86 je 0x10c94ca4 */
  if (C.zf) goto L_10c94ca4;
  /* 10c94c88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c8c jne 0x10c94ca9 */
  if (!C.zf) goto L_10c94ca9;
  /* 10c94c8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94c91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c94c94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94c97 je 0x10c94ca4 */
  if (C.zf) goto L_10c94ca4;
  /* 10c94c99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94c9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10c94c9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94ca2 jne 0x10c94ca9 */
  if (!C.zf) goto L_10c94ca9;
L_10c94ca4:;
  /* 10c94ca4 jmp 0x10c94d54 */
  goto L_10c94d54;
L_10c94ca9:;
  /* 10c94ca9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94cad je 0x10c94d46 */
  if (C.zf) goto L_10c94d46;
  /* 10c94cb3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94cb7 je 0x10c94d0d */
  if (C.zf) goto L_10c94d0d;
  /* 10c94cb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94cbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c94cc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c94cc2 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c94cc8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c94ccb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c94ccd je 0x10c94cf8 */
  if (C.zf) goto L_10c94cf8;
  /* 10c94ccf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94cd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94cd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10c94cd7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10c94cd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94cdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94cdf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10c94ce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94ce5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94ce8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c94ceb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94cee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c94cf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94cf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94cf6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10c94cf8:;
  /* 10c94cf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94cfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94cfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c94d00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10c94d02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10c94d0b jmp 0x10c94d39 */
  goto L_10c94d39;
L_10c94d0d:;
  /* 10c94d0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94d10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94d12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10c94d14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c94d16 mov cl, byte ptr [eax + 0x10cbfc81] */
  CL = (r8((uint32_t)(EAX + 0x10cbfc81)));
  /* 10c94d1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10c94d1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c94d21 je 0x10c94d39 */
  if (C.zf) goto L_10c94d39;
  /* 10c94d23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94d26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c94d2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94d31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c94d39:;
  /* 10c94d39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94d3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10c94d46:;
  /* 10c94d46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94d49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c94d4f jmp 0x10c94bc1 */
  goto L_10c94bc1;
L_10c94d54:;
  /* 10c94d54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94d58 je 0x10c94d69 */
  if (C.zf) goto L_10c94d69;
  /* 10c94d5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94d5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c94d60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c94d63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10c94d69:;
  /* 10c94d69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c94d6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10c94d74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c94d76 jmp 0x10c94b63 */
  goto L_10c94b63;
L_10c94d7b:;
  /* 10c94d7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94d7f je 0x10c94d93 */
  if (C.zf) goto L_10c94d93;
  /* 10c94d81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94d84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10c94d8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c94d8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c94d93:;
  /* 10c94d93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c94d96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c94d98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94d9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c94d9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c94da0 mov esp, ebp */
  ESP = (EBP);
  /* 10c94da2 pop ebp */
  EBP = (pop32());
  /* 10c94da3 ret  */
  ESPCHK(0x10c94980u, _esp0);
  ESP += 4; return;
}

/* FUN_10004db0 @ 0x10c94db0 (537 bytes, 173 insns) */
void f_10c94db0(void) {
  FTRACE(0x10c94db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94db1 mov ebp, esp */
  EBP = (ESP);
  /* 10c94db3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94db6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10c94dbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10c94dc4 cmp dword ptr [0x10cbe55c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe55c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94dcb jne 0x10c94e0a */
  if (!C.zf) goto L_10c94e0a;
  /* 10c94dcd call dword ptr [0x10cc0210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0210))), 0x10c94dd3u);
  /* 10c94dd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c94dd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94dda je 0x10c94de8 */
  if (C.zf) goto L_10c94de8;
  /* 10c94ddc mov dword ptr [0x10cbe55c], 1 */
  w32((uint32_t)(0x10cbe55c), (0x1u));
  /* 10c94de6 jmp 0x10c94e0a */
  goto L_10c94e0a;
L_10c94de8:;
  /* 10c94de8 call dword ptr [0x10cc020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc020c))), 0x10c94deeu);
  /* 10c94dee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c94df1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94df5 je 0x10c94e03 */
  if (C.zf) goto L_10c94e03;
  /* 10c94df7 mov dword ptr [0x10cbe55c], 2 */
  w32((uint32_t)(0x10cbe55c), (0x2u));
  /* 10c94e01 jmp 0x10c94e0a */
  goto L_10c94e0a;
L_10c94e03:;
  /* 10c94e03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94e05 jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94e0a:;
  /* 10c94e0a cmp dword ptr [0x10cbe55c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe55c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94e11 jne 0x10c94f0e */
  if (!C.zf) goto L_10c94f0e;
  /* 10c94e17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94e1b jne 0x10c94e33 */
  if (!C.zf) goto L_10c94e33;
  /* 10c94e1d call dword ptr [0x10cc0210] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0210))), 0x10c94e23u);
  /* 10c94e23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c94e26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94e2a jne 0x10c94e33 */
  if (!C.zf) goto L_10c94e33;
  /* 10c94e2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94e2e jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94e33:;
  /* 10c94e33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c94e36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c94e39:;
  /* 10c94e39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94e3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94e3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c94e41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94e43 je 0x10c94e65 */
  if (C.zf) goto L_10c94e65;
  /* 10c94e45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94e48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94e4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c94e4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94e51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c94e53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10c94e56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94e58 jne 0x10c94e63 */
  if (!C.zf) goto L_10c94e63;
  /* 10c94e5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94e5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94e60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c94e63:;
  /* 10c94e63 jmp 0x10c94e39 */
  goto L_10c94e39;
L_10c94e65:;
  /* 10c94e65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c94e68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94e6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10c94e6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94e70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c94e73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94e7e push edx */
  push32((uint32_t)(EDX));
  /* 10c94e7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c94e82 push eax */
  push32((uint32_t)(EAX));
  /* 10c94e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94e87 call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10c94e8du);
  /* 10c94e8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c94e90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94e94 je 0x10c94eb4 */
  if (C.zf) goto L_10c94eb4;
  /* 10c94e96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10c94e98 push 0x10cb9ac4 */
  push32((uint32_t)(0x10cb9ac4u));
  /* 10c94e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94e9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94ea2 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94ea3 call 0x10c927e0 */
  push32(0x10c94ea8u); f_10c927e0();
  /* 10c94ea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94eab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c94eae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94eb2 jne 0x10c94ec5 */
  if (!C.zf) goto L_10c94ec5;
L_10c94eb4:;
  /* 10c94eb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c94eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10c94eb8 call dword ptr [0x10cc02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a0))), 0x10c94ebeu);
  /* 10c94ebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94ec0 jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94ec5:;
  /* 10c94ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94ec9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94ecc push eax */
  push32((uint32_t)(EAX));
  /* 10c94ecd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94ed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c94ed4 push edx */
  push32((uint32_t)(EDX));
  /* 10c94ed5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c94ed8 push eax */
  push32((uint32_t)(EAX));
  /* 10c94ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94edb push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94edd call dword ptr [0x10cc02a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a4))), 0x10c94ee3u);
  /* 10c94ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c94ee5 jne 0x10c94efc */
  if (!C.zf) goto L_10c94efc;
  /* 10c94ee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94ee9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94eec push ecx */
  push32((uint32_t)(ECX));
  /* 10c94eed call 0x10c93270 */
  push32(0x10c94ef2u); f_10c93270();
  /* 10c94ef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94ef5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10c94efc:;
  /* 10c94efc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c94eff push edx */
  push32((uint32_t)(EDX));
  /* 10c94f00 call dword ptr [0x10cc02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02a0))), 0x10c94f06u);
  /* 10c94f06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94f09 jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94f0e:;
  /* 10c94f0e cmp dword ptr [0x10cbe55c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe55c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94f15 jne 0x10c94fc3 */
  if (!C.zf) goto L_10c94fc3;
  /* 10c94f1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94f1f jne 0x10c94f37 */
  if (!C.zf) goto L_10c94f37;
  /* 10c94f21 call dword ptr [0x10cc020c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc020c))), 0x10c94f27u);
  /* 10c94f27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c94f2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94f2e jne 0x10c94f37 */
  if (!C.zf) goto L_10c94f37;
  /* 10c94f30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94f32 jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94f37:;
  /* 10c94f37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94f3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c94f3d:;
  /* 10c94f3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94f40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c94f43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94f45 je 0x10c94f65 */
  if (C.zf) goto L_10c94f65;
  /* 10c94f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94f4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94f4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c94f50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94f53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10c94f56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c94f58 jne 0x10c94f63 */
  if (!C.zf) goto L_10c94f63;
  /* 10c94f5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94f5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94f60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10c94f63:;
  /* 10c94f63 jmp 0x10c94f3d */
  goto L_10c94f3d;
L_10c94f65:;
  /* 10c94f65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94f68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c94f6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94f6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c94f71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10c94f76 push 0x10cb9ac4 */
  push32((uint32_t)(0x10cb9ac4u));
  /* 10c94f7b push 2 */
  push32((uint32_t)(0x2u));
  /* 10c94f7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94f80 push edx */
  push32((uint32_t)(EDX));
  /* 10c94f81 call 0x10c927e0 */
  push32(0x10c94f86u); f_10c927e0();
  /* 10c94f86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94f89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c94f8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94f90 jne 0x10c94fa0 */
  if (!C.zf) goto L_10c94fa0;
  /* 10c94f92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94f95 push eax */
  push32((uint32_t)(EAX));
  /* 10c94f96 call dword ptr [0x10cc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc029c))), 0x10c94f9cu);
  /* 10c94f9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94f9e jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94fa0:;
  /* 10c94fa0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c94fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94fa4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94fa7 push edx */
  push32((uint32_t)(EDX));
  /* 10c94fa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94fab push eax */
  push32((uint32_t)(EAX));
  /* 10c94fac call 0x10c990c0 */
  push32(0x10c94fb1u); f_10c990c0();
  /* 10c94fb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c94fb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c94fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c94fb8 call dword ptr [0x10cc029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc029c))), 0x10c94fbeu);
  /* 10c94fbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c94fc1 jmp 0x10c94fc5 */
  goto L_10c94fc5;
L_10c94fc3:;
  /* 10c94fc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c94fc5:;
  /* 10c94fc5 mov esp, ebp */
  ESP = (EBP);
  /* 10c94fc7 pop ebp */
  EBP = (pop32());
  /* 10c94fc8 ret  */
  ESPCHK(0x10c94db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x10c94fd0 (77 bytes, 25 insns) */
void f_10c94fd0(void) {
  FTRACE(0x10c94fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c94fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c94fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10c94fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c94fd5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10c94fda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94fdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94fe0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10c94fe3 push eax */
  push32((uint32_t)(EAX));
  /* 10c94fe4 call dword ptr [0x10cc02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b4))), 0x10c94feau);
  /* 10c94fea mov dword ptr [0x10cbfdac], eax */
  w32((uint32_t)(0x10cbfdac), (EAX));
  /* 10c94fef cmp dword ptr [0x10cbfdac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbfdac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c94ff6 jne 0x10c94ffc */
  if (!C.zf) goto L_10c94ffc;
  /* 10c94ff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c94ffa jmp 0x10c9501b */
  goto L_10c9501b;
L_10c94ffc:;
  /* 10c94ffc call 0x10c96a80 */
  push32(0x10c95001u); f_10c96a80();
  /* 10c95001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c95003 jne 0x10c95016 */
  if (!C.zf) goto L_10c95016;
  /* 10c95005 mov ecx, dword ptr [0x10cbfdac] */
  ECX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c9500b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9500c call dword ptr [0x10cc02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b0))), 0x10c95012u);
  /* 10c95012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c95014 jmp 0x10c9501b */
  goto L_10c9501b;
L_10c95016:;
  /* 10c95016 mov eax, 1 */
  EAX = (0x1u);
L_10c9501b:;
  /* 10c9501b pop ebp */
  EBP = (pop32());
  /* 10c9501c ret  */
  ESPCHK(0x10c94fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005020 @ 0x10c95020 (156 bytes, 48 insns) */
void f_10c95020(void) {
  FTRACE(0x10c95020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95020 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95021 mov ebp, esp */
  EBP = (ESP);
  /* 10c95023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95026 mov eax, dword ptr [0x10cbfda8] */
  EAX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c9502b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c9502e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c95035 jmp 0x10c95040 */
  goto L_10c95040;
L_10c95037:;
  /* 10c95037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9503a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9503d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c95040:;
  /* 10c95040 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95043 cmp edx, dword ptr [0x10cbfda4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbfda4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95049 jge 0x10c95096 */
  if ((C.sf==C.of)) goto L_10c95096;
  /* 10c9504b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10c95050 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10c95055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95058 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10c9505b push ecx */
  push32((uint32_t)(ECX));
  /* 10c9505c call dword ptr [0x10cc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02bc))), 0x10c95062u);
  /* 10c95062 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10c95067 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95069 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9506c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10c9506f push eax */
  push32((uint32_t)(EAX));
  /* 10c95070 call dword ptr [0x10cc02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02bc))), 0x10c95076u);
  /* 10c95076 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95079 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10c9507c push edx */
  push32((uint32_t)(EDX));
  /* 10c9507d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9507f mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c95084 push eax */
  push32((uint32_t)(EAX));
  /* 10c95085 call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c9508bu);
  /* 10c9508b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9508e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95091 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c95094 jmp 0x10c95037 */
  goto L_10c95037;
L_10c95096:;
  /* 10c95096 mov edx, dword ptr [0x10cbfda8] */
  EDX = (r32((uint32_t)(0x10cbfda8)));
  /* 10c9509c push edx */
  push32((uint32_t)(EDX));
  /* 10c9509d push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9509f mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c950a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c950a5 call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c950abu);
  /* 10c950ab mov ecx, dword ptr [0x10cbfdac] */
  ECX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c950b1 push ecx */
  push32((uint32_t)(ECX));
  /* 10c950b2 call dword ptr [0x10cc02b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b0))), 0x10c950b8u);
  /* 10c950b8 mov esp, ebp */
  ESP = (EBP);
  /* 10c950ba pop ebp */
  EBP = (pop32());
  /* 10c950bb ret  */
  ESPCHK(0x10c95020u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10c950c0 (73 bytes, 19 insns) */
void f_10c950c0(void) {
  FTRACE(0x10c950c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c950c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c950c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c950c3 cmp dword ptr [0x10cbe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c950ca je 0x10c950de */
  if (C.zf) goto L_10c950de;
  /* 10c950cc cmp dword ptr [0x10cbe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c950d3 jne 0x10c95107 */
  if (!C.zf) goto L_10c95107;
  /* 10c950d5 cmp dword ptr [0x10cbe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c950dc jne 0x10c95107 */
  if (!C.zf) goto L_10c95107;
L_10c950de:;
  /* 10c950de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10c950e3 call 0x10c95110 */
  push32(0x10c950e8u); f_10c95110();
  /* 10c950e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c950eb cmp dword ptr [0x10cbe560], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe560))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c950f2 je 0x10c950fa */
  if (C.zf) goto L_10c950fa;
  /* 10c950f4 call dword ptr [0x10cbe560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe560))), 0x10c950fau);
L_10c950fa:;
  /* 10c950fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c950ff call 0x10c95110 */
  push32(0x10c95104u); f_10c95110();
  /* 10c95104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95107:;
  /* 10c95107 pop ebp */
  EBP = (pop32());
  /* 10c95108 ret  */
  ESPCHK(0x10c950c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005110 @ 0x10c95110 (447 bytes, 131 insns) */
void f_10c95110(void) {
  FTRACE(0x10c95110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95110 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95111 mov ebp, esp */
  EBP = (ESP);
  /* 10c95113 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95119 push ebx */
  push32((uint32_t)(EBX));
  /* 10c9511a push esi */
  push32((uint32_t)(ESI));
  /* 10c9511b push edi */
  push32((uint32_t)(EDI));
  /* 10c9511c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c95123 jmp 0x10c9512e */
  goto L_10c9512e;
L_10c95125:;
  /* 10c95125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95128 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9512b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c9512e:;
  /* 10c9512e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95132 jae 0x10c95147 */
  if (!C.cf) goto L_10c95147;
  /* 10c95134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95137 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9513a cmp edx, dword ptr [ecx*8 + 0x10cbcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10cbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95141 jne 0x10c95145 */
  if (!C.zf) goto L_10c95145;
  /* 10c95143 jmp 0x10c95147 */
  goto L_10c95147;
L_10c95145:;
  /* 10c95145 jmp 0x10c95125 */
  goto L_10c95125;
L_10c95147:;
  /* 10c95147 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9514a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9514d cmp ecx, dword ptr [eax*8 + 0x10cbcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95154 jne 0x10c952c8 */
  if (!C.zf) goto L_10c952c8;
  /* 10c9515a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95161 je 0x10c95184 */
  if (C.zf) goto L_10c95184;
  /* 10c95163 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95166 mov eax, dword ptr [edx*8 + 0x10cbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cbcab4)));
  /* 10c9516d push eax */
  push32((uint32_t)(EAX));
  /* 10c9516e push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95170 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95172 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95174 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95176 call 0x10c918a0 */
  push32(0x10c9517bu); f_10c918a0();
  /* 10c9517b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9517e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95181 jne 0x10c95184 */
  if (!C.zf) goto L_10c95184;
  /* 10c95183 int3  */
  x86_unimpl("int3 @ 0x10c95183");
L_10c95184:;
  /* 10c95184 cmp dword ptr [0x10cbe3f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9518b je 0x10c9519f */
  if (C.zf) goto L_10c9519f;
  /* 10c9518d cmp dword ptr [0x10cbe3f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95194 jne 0x10c951d8 */
  if (!C.zf) goto L_10c951d8;
  /* 10c95196 cmp dword ptr [0x10cbe3f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe3f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9519d jne 0x10c951d8 */
  if (!C.zf) goto L_10c951d8;
L_10c9519f:;
  /* 10c9519f push 0 */
  push32((uint32_t)(0x0u));
  /* 10c951a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10c951a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c951a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c951a8 mov eax, dword ptr [edx*8 + 0x10cbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cbcab4)));
  /* 10c951af push eax */
  push32((uint32_t)(EAX));
  /* 10c951b0 call 0x10c95610 */
  push32(0x10c951b5u); f_10c95610();
  /* 10c951b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c951b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c951b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c951bc mov edx, dword ptr [ecx*8 + 0x10cbcab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10cbcab4)));
  /* 10c951c3 push edx */
  push32((uint32_t)(EDX));
  /* 10c951c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10c951c6 call dword ptr [0x10cc0234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0234))), 0x10c951ccu);
  /* 10c951cc push eax */
  push32((uint32_t)(EAX));
  /* 10c951cd call dword ptr [0x10cc0238] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0238))), 0x10c951d3u);
  /* 10c951d3 jmp 0x10c952c8 */
  goto L_10c952c8;
L_10c951d8:;
  /* 10c951d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c951df je 0x10c952c8 */
  if (C.zf) goto L_10c952c8;
  /* 10c951e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10c951ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10c951f0 push eax */
  push32((uint32_t)(EAX));
  /* 10c951f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c951f3 call dword ptr [0x10cc0250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0250))), 0x10c951f9u);
  /* 10c951f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c951fb jne 0x10c95211 */
  if (!C.zf) goto L_10c95211;
  /* 10c951fd push 0x10cb932c */
  push32((uint32_t)(0x10cb932cu));
  /* 10c95202 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c95208 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95209 call 0x10c95790 */
  push32(0x10c9520eu); f_10c95790();
  /* 10c9520e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95211:;
  /* 10c95211 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10c95217 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c9521a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9521d push eax */
  push32((uint32_t)(EAX));
  /* 10c9521e call 0x10c95610 */
  push32(0x10c95223u); f_10c95610();
  /* 10c95223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95226 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95229 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9522c jbe 0x10c9525a */
  if ((C.cf||C.zf)) goto L_10c9525a;
  /* 10c9522e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10c95234 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95235 call 0x10c95610 */
  push32(0x10c9523au); f_10c95610();
  /* 10c9523a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9523d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95240 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10c95244 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95247 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c95249 push 0x10cb9328 */
  push32((uint32_t)(0x10cb9328u));
  /* 10c9524e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95251 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95252 call 0x10c96000 */
  push32(0x10c95257u); f_10c96000();
  /* 10c95257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9525a:;
  /* 10c9525a push 0x10cb9d80 */
  push32((uint32_t)(0x10cb9d80u));
  /* 10c9525f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c95265 push edx */
  push32((uint32_t)(EDX));
  /* 10c95266 call 0x10c95790 */
  push32(0x10c9526bu); f_10c95790();
  /* 10c9526b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9526e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95271 push eax */
  push32((uint32_t)(EAX));
  /* 10c95272 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10c95278 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95279 call 0x10c957a0 */
  push32(0x10c9527eu); f_10c957a0();
  /* 10c9527e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95281 push 0x10cb92a0 */
  push32((uint32_t)(0x10cb92a0u));
  /* 10c95286 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c9528c push edx */
  push32((uint32_t)(EDX));
  /* 10c9528d call 0x10c957a0 */
  push32(0x10c95292u); f_10c957a0();
  /* 10c95292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95295 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95298 mov ecx, dword ptr [eax*8 + 0x10cbcab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10cbcab4)));
  /* 10c9529f push ecx */
  push32((uint32_t)(ECX));
  /* 10c952a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10c952a6 push edx */
  push32((uint32_t)(EDX));
  /* 10c952a7 call 0x10c957a0 */
  push32(0x10c952acu); f_10c957a0();
  /* 10c952ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c952af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10c952b4 push 0x10cb9d58 */
  push32((uint32_t)(0x10cb9d58u));
  /* 10c952b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10c952bf push eax */
  push32((uint32_t)(EAX));
  /* 10c952c0 call 0x10c95f40 */
  push32(0x10c952c5u); f_10c95f40();
  /* 10c952c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c952c8:;
  /* 10c952c8 pop edi */
  EDI = (pop32());
  /* 10c952c9 pop esi */
  ESI = (pop32());
  /* 10c952ca pop ebx */
  EBX = (pop32());
  /* 10c952cb mov esp, ebp */
  ESP = (EBP);
  /* 10c952cd pop ebp */
  EBP = (pop32());
  /* 10c952ce ret  */
  ESPCHK(0x10c95110u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10c952d0 (80 bytes, 27 insns) */
void f_10c952d0(void) {
  FTRACE(0x10c952d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c952d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c952d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c952d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c952d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c952db jmp 0x10c952e6 */
  goto L_10c952e6;
L_10c952dd:;
  /* 10c952dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c952e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c952e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c952e6:;
  /* 10c952e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c952ea jae 0x10c952ff */
  if (!C.cf) goto L_10c952ff;
  /* 10c952ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c952ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c952f2 cmp edx, dword ptr [ecx*8 + 0x10cbcab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10cbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c952f9 jne 0x10c952fd */
  if (!C.zf) goto L_10c952fd;
  /* 10c952fb jmp 0x10c952ff */
  goto L_10c952ff;
L_10c952fd:;
  /* 10c952fd jmp 0x10c952dd */
  goto L_10c952dd;
L_10c952ff:;
  /* 10c952ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95305 cmp ecx, dword ptr [eax*8 + 0x10cbcab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10cbcab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9530c jne 0x10c9531a */
  if (!C.zf) goto L_10c9531a;
  /* 10c9530e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95311 mov eax, dword ptr [edx*8 + 0x10cbcab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10cbcab4)));
  /* 10c95318 jmp 0x10c9531c */
  goto L_10c9531c;
L_10c9531a:;
  /* 10c9531a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c9531c:;
  /* 10c9531c mov esp, ebp */
  ESP = (EBP);
  /* 10c9531e pop ebp */
  EBP = (pop32());
  /* 10c9531f ret  */
  ESPCHK(0x10c952d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10c95320 (66 bytes, 28 insns) */
void f_10c95320(void) {
  FTRACE(0x10c95320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95320 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95321 mov ebp, esp */
  EBP = (ESP);
  /* 10c95323 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95327 jne 0x10c95347 */
  if (!C.zf) goto L_10c95347;
  /* 10c95329 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9532d jge 0x10c95347 */
  if ((C.sf==C.of)) goto L_10c95347;
  /* 10c9532f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95331 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c95334 push eax */
  push32((uint32_t)(EAX));
  /* 10c95335 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95338 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9533c push edx */
  push32((uint32_t)(EDX));
  /* 10c9533d call 0x10c95370 */
  push32(0x10c95342u); f_10c95370();
  /* 10c95342 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95345 jmp 0x10c9535d */
  goto L_10c9535d;
L_10c95347:;
  /* 10c95347 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95349 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9534c push eax */
  push32((uint32_t)(EAX));
  /* 10c9534d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95350 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95354 push edx */
  push32((uint32_t)(EDX));
  /* 10c95355 call 0x10c95370 */
  push32(0x10c9535au); f_10c95370();
  /* 10c9535a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9535d:;
  /* 10c9535d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95360 pop ebp */
  EBP = (pop32());
  /* 10c95361 ret  */
  ESPCHK(0x10c95320u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10c95370 (194 bytes, 71 insns) */
void f_10c95370(void) {
  FTRACE(0x10c95370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95370 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95371 mov ebp, esp */
  EBP = (ESP);
  /* 10c95373 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9537c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95380 je 0x10c95399 */
  if (C.zf) goto L_10c95399;
  /* 10c95382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95385 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c95388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9538b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9538e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c95391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95394 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c95396 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10c95399:;
  /* 10c95399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9539c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10c9539f:;
  /* 10c9539f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c953a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c953a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c953a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c953aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c953ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c953af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10c953b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c953b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c953b9 jbe 0x10c953d1 */
  if ((C.cf||C.zf)) goto L_10c953d1;
  /* 10c953bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c953be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c953c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c953c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c953cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c953cf jmp 0x10c953e5 */
  goto L_10c953e5;
L_10c953d1:;
  /* 10c953d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c953d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c953d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c953dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c953e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c953e5:;
  /* 10c953e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c953e9 ja 0x10c9539f */
  if ((!C.cf&&!C.zf)) goto L_10c9539f;
  /* 10c953eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c953f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c953f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c953fa:;
  /* 10c953fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c953fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c953ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c95402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95408 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9540a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c9540c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9540f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c95412 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c95414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95417 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9541a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c9541d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95423 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c95426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95429 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9542c jb 0x10c953fa */
  if (C.cf) goto L_10c953fa;
  /* 10c9542e mov esp, ebp */
  ESP = (EBP);
  /* 10c95430 pop ebp */
  EBP = (pop32());
  /* 10c95431 ret  */
  ESPCHK(0x10c95370u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10c95440 (63 bytes, 24 insns) */
void f_10c95440(void) {
  FTRACE(0x10c95440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95440 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95441 mov ebp, esp */
  EBP = (ESP);
  /* 10c95443 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95444 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95448 jne 0x10c95459 */
  if (!C.zf) goto L_10c95459;
  /* 10c9544a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9544e jge 0x10c95459 */
  if ((C.sf==C.of)) goto L_10c95459;
  /* 10c95450 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c95457 jmp 0x10c95460 */
  goto L_10c95460;
L_10c95459:;
  /* 10c95459 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c95460:;
  /* 10c95460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95463 push eax */
  push32((uint32_t)(EAX));
  /* 10c95464 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c95467 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95468 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9546b push edx */
  push32((uint32_t)(EDX));
  /* 10c9546c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9546f push eax */
  push32((uint32_t)(EAX));
  /* 10c95470 call 0x10c95370 */
  push32(0x10c95475u); f_10c95370();
  /* 10c95475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9547b mov esp, ebp */
  ESP = (EBP);
  /* 10c9547d pop ebp */
  EBP = (pop32());
  /* 10c9547e ret  */
  ESPCHK(0x10c95440u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10c95480 (30 bytes, 14 insns) */
void f_10c95480(void) {
  FTRACE(0x10c95480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95480 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95481 mov ebp, esp */
  EBP = (ESP);
  /* 10c95483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95485 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c95488 push eax */
  push32((uint32_t)(EAX));
  /* 10c95489 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9548c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9548d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95490 push edx */
  push32((uint32_t)(EDX));
  /* 10c95491 call 0x10c95370 */
  push32(0x10c95496u); f_10c95370();
  /* 10c95496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9549c pop ebp */
  EBP = (pop32());
  /* 10c9549d ret  */
  ESPCHK(0x10c95480u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10c954a0 (72 bytes, 28 insns) */
void f_10c954a0(void) {
  FTRACE(0x10c954a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c954a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c954a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c954a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c954a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c954a8 jne 0x10c954c1 */
  if (!C.zf) goto L_10c954c1;
  /* 10c954aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c954ae jg 0x10c954c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10c954c1;
  /* 10c954b0 jl 0x10c954b8 */
  if ((C.sf!=C.of)) goto L_10c954b8;
  /* 10c954b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c954b6 jae 0x10c954c1 */
  if (!C.cf) goto L_10c954c1;
L_10c954b8:;
  /* 10c954b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10c954bf jmp 0x10c954c8 */
  goto L_10c954c8;
L_10c954c1:;
  /* 10c954c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c954c8:;
  /* 10c954c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c954cb push eax */
  push32((uint32_t)(EAX));
  /* 10c954cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c954cf push ecx */
  push32((uint32_t)(ECX));
  /* 10c954d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c954d3 push edx */
  push32((uint32_t)(EDX));
  /* 10c954d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c954d7 push eax */
  push32((uint32_t)(EAX));
  /* 10c954d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c954db push ecx */
  push32((uint32_t)(ECX));
  /* 10c954dc call 0x10c954f0 */
  push32(0x10c954e1u); f_10c954f0();
  /* 10c954e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c954e4 mov esp, ebp */
  ESP = (EBP);
  /* 10c954e6 pop ebp */
  EBP = (pop32());
  /* 10c954e7 ret  */
  ESPCHK(0x10c954a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10c954f0 (242 bytes, 91 insns) */
void f_10c954f0(void) {
  FTRACE(0x10c954f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c954f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c954f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c954f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c954f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c954f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c954fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95500 je 0x10c95524 */
  if (C.zf) goto L_10c95524;
  /* 10c95502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95505 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10c95508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9550b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9550e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c95511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95514 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c95516 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95519 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9551c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9551e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c95521 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10c95524:;
  /* 10c95524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95527 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10c9552a:;
  /* 10c9552a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9552d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c9552f push ecx */
  push32((uint32_t)(ECX));
  /* 10c95530 push eax */
  push32((uint32_t)(EAX));
  /* 10c95531 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95534 push edx */
  push32((uint32_t)(EDX));
  /* 10c95535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95538 push eax */
  push32((uint32_t)(EAX));
  /* 10c95539 call 0x10c99470 */
  push32(0x10c9553eu); f_10c99470();
  /* 10c9553e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95541 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c95544 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c95546 push edx */
  push32((uint32_t)(EDX));
  /* 10c95547 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95548 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9554b push eax */
  push32((uint32_t)(EAX));
  /* 10c9554c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9554f push ecx */
  push32((uint32_t)(ECX));
  /* 10c95550 call 0x10c99400 */
  push32(0x10c95555u); f_10c99400();
  /* 10c95555 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10c95558 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c9555b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9555f jbe 0x10c95577 */
  if ((C.cf||C.zf)) goto L_10c95577;
  /* 10c95561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95564 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9556a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c9556c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9556f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95572 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c95575 jmp 0x10c9558b */
  goto L_10c9558b;
L_10c95577:;
  /* 10c95577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c9557a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9557d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95580 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c95582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95588 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10c9558b:;
  /* 10c9558b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9558f ja 0x10c9552a */
  if ((!C.cf&&!C.zf)) goto L_10c9552a;
  /* 10c95591 jb 0x10c95599 */
  if (C.cf) goto L_10c95599;
  /* 10c95593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95597 ja 0x10c9552a */
  if ((!C.cf&&!C.zf)) goto L_10c9552a;
L_10c95599:;
  /* 10c95599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9559c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10c9559f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c955a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c955a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c955a8:;
  /* 10c955a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c955ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c955ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10c955b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c955b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c955b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c955b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10c955ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c955bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10c955c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10c955c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c955c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c955c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c955cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c955ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c955d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c955d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c955d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c955da jb 0x10c955a8 */
  if (C.cf) goto L_10c955a8;
  /* 10c955dc mov esp, ebp */
  ESP = (EBP);
  /* 10c955de pop ebp */
  EBP = (pop32());
  /* 10c955df ret 0x14 */
  ESPCHK(0x10c954f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10c955f0 (31 bytes, 15 insns) */
void f_10c955f0(void) {
  FTRACE(0x10c955f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c955f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c955f1 mov ebp, esp */
  EBP = (ESP);
  /* 10c955f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c955f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c955f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c955f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c955fc push ecx */
  push32((uint32_t)(ECX));
  /* 10c955fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95600 push edx */
  push32((uint32_t)(EDX));
  /* 10c95601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95604 push eax */
  push32((uint32_t)(EAX));
  /* 10c95605 call 0x10c954f0 */
  push32(0x10c9560au); f_10c954f0();
  /* 10c9560a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9560d pop ebp */
  EBP = (pop32());
  /* 10c9560e ret  */
  ESPCHK(0x10c955f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10c95610 (123 bytes, 44 insns) */
void f_10c95610(void) {
  FTRACE(0x10c95610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95610 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c95614 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c9561a je 0x10c95630 */
  if (C.zf) goto L_10c95630;
L_10c9561c:;
  /* 10c9561c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c9561e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c9561f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c95621 je 0x10c95663 */
  if (C.zf) goto L_10c95663;
  /* 10c95623 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c95629 jne 0x10c9561c */
  if (!C.zf) goto L_10c9561c;
  /* 10c9562b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10c95630:;
  /* 10c95630 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c95632 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c95637 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95639 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9563c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9563e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95641 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c95646 je 0x10c95630 */
  if (C.zf) goto L_10c95630;
  /* 10c95648 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c9564b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c9564d je 0x10c95681 */
  if (C.zf) goto L_10c95681;
  /* 10c9564f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c95651 je 0x10c95677 */
  if (C.zf) goto L_10c95677;
  /* 10c95653 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c95658 je 0x10c9566d */
  if (C.zf) goto L_10c9566d;
  /* 10c9565a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c9565f je 0x10c95663 */
  if (C.zf) goto L_10c95663;
  /* 10c95661 jmp 0x10c95630 */
  goto L_10c95630;
L_10c95663:;
  /* 10c95663 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10c95666 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c9566a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9566c ret  */
  ESPCHK(0x10c95610u, _esp0);
  ESP += 4; return;
L_10c9566d:;
  /* 10c9566d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10c95670 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c95674 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95676 ret  */
  ESPCHK(0x10c95610u, _esp0);
  ESP += 4; return;
L_10c95677:;
  /* 10c95677 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10c9567a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c9567e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95680 ret  */
  ESPCHK(0x10c95610u, _esp0);
  ESP += 4; return;
L_10c95681:;
  /* 10c95681 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10c95684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c95688 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9568a ret  */
  ESPCHK(0x10c95610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005690 @ 0x10c95690 (249 bytes, 93 insns) */
void f_10c95690(void) {
  FTRACE(0x10c95690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95690 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95691 mov ebp, esp */
  EBP = (ESP);
  /* 10c95693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95696 push ebx */
  push32((uint32_t)(EBX));
  /* 10c95697 push esi */
  push32((uint32_t)(ESI));
  /* 10c95698 push edi */
  push32((uint32_t)(EDI));
  /* 10c95699 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c9569c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10c9569f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10c956a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10c956a5:;
  /* 10c956a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c956a9 jne 0x10c956c9 */
  if (!C.zf) goto L_10c956c9;
  /* 10c956ab push 0x10cb9db8 */
  push32((uint32_t)(0x10cb9db8u));
  /* 10c956b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c956b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10c956b4 push 0x10cb9dac */
  push32((uint32_t)(0x10cb9dacu));
  /* 10c956b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c956bb call 0x10c918a0 */
  push32(0x10c956c0u); f_10c918a0();
  /* 10c956c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c956c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c956c6 jne 0x10c956c9 */
  if (!C.zf) goto L_10c956c9;
  /* 10c956c8 int3  */
  x86_unimpl("int3 @ 0x10c956c8");
L_10c956c9:;
  /* 10c956c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c956cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c956cd jne 0x10c956a5 */
  if (!C.zf) goto L_10c956a5;
L_10c956cf:;
  /* 10c956cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c956d3 jne 0x10c956f3 */
  if (!C.zf) goto L_10c956f3;
  /* 10c956d5 push 0x10cb9d9c */
  push32((uint32_t)(0x10cb9d9cu));
  /* 10c956da push 0 */
  push32((uint32_t)(0x0u));
  /* 10c956dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10c956de push 0x10cb9dac */
  push32((uint32_t)(0x10cb9dacu));
  /* 10c956e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c956e5 call 0x10c918a0 */
  push32(0x10c956eau); f_10c918a0();
  /* 10c956ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c956ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c956f0 jne 0x10c956f3 */
  if (!C.zf) goto L_10c956f3;
  /* 10c956f2 int3  */
  x86_unimpl("int3 @ 0x10c956f2");
L_10c956f3:;
  /* 10c956f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c956f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c956f7 jne 0x10c956cf */
  if (!C.zf) goto L_10c956cf;
  /* 10c956f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c956fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10c95703 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95709 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c9570c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9570f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95712 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10c95714 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95717 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9571a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10c9571d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10c95720 push edx */
  push32((uint32_t)(EDX));
  /* 10c95721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c95724 push eax */
  push32((uint32_t)(EAX));
  /* 10c95725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95728 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95729 call 0x10c99770 */
  push32(0x10c9572eu); f_10c99770();
  /* 10c9572e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95731 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c95734 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95737 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c9573a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c9573d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95740 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10c95743 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95746 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9574a jl 0x10c9576e */
  if ((C.sf!=C.of)) goto L_10c9576e;
  /* 10c9574c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9574f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c95751 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10c95754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c95756 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c9575c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10c9575f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95762 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c95764 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95767 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9576a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10c9576c jmp 0x10c9577f */
  goto L_10c9577f;
L_10c9576e:;
  /* 10c9576e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95771 push eax */
  push32((uint32_t)(EAX));
  /* 10c95772 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c95774 call 0x10c994f0 */
  push32(0x10c95779u); f_10c994f0();
  /* 10c95779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9577c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10c9577f:;
  /* 10c9577f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c95782 pop edi */
  EDI = (pop32());
  /* 10c95783 pop esi */
  ESI = (pop32());
  /* 10c95784 pop ebx */
  EBX = (pop32());
  /* 10c95785 mov esp, ebp */
  ESP = (EBP);
  /* 10c95787 pop ebp */
  EBP = (pop32());
  /* 10c95788 ret  */
  ESPCHK(0x10c95690u, _esp0);
  ESP += 4; return;
}

/* FUN_10005790 @ 0x10c95790 (7 bytes, 3 insns) */
void f_10c95790(void) {
  FTRACE(0x10c95790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95790 push edi */
  push32((uint32_t)(EDI));
  /* 10c95791 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10c95795 jmp 0x10c95801 */
  jmp_ind(0x10c95801u); return;
}

/* FUN_100057a0 @ 0x10c957a0 (224 bytes, 84 insns) */
void f_10c957a0(void) {
  FTRACE(0x10c957a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c957a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c957a4 push edi */
  push32((uint32_t)(EDI));
  /* 10c957a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c957ab je 0x10c957bc */
  if (C.zf) goto L_10c957bc;
L_10c957ad:;
  /* 10c957ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10c957af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c957b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c957b2 je 0x10c957ef */
  if (C.zf) goto L_10c957ef;
  /* 10c957b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c957ba jne 0x10c957ad */
  if (!C.zf) goto L_10c957ad;
L_10c957bc:;
  /* 10c957bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c957be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c957c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c957c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c957c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c957ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c957cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c957d2 je 0x10c957bc */
  if (C.zf) goto L_10c957bc;
  /* 10c957d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c957d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c957d9 je 0x10c957fe */
  if (C.zf) goto L_10c957fe;
  /* 10c957db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10c957dd je 0x10c957f9 */
  if (C.zf) goto L_10c957f9;
  /* 10c957df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c957e4 je 0x10c957f4 */
  if (C.zf) goto L_10c957f4;
  /* 10c957e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c957eb je 0x10c957ef */
  if (C.zf) goto L_10c957ef;
  /* 10c957ed jmp 0x10c957bc */
  goto L_10c957bc;
L_10c957ef:;
  /* 10c957ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10c957f2 jmp 0x10c95801 */
  goto L_10c95801;
L_10c957f4:;
  /* 10c957f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10c957f7 jmp 0x10c95801 */
  goto L_10c95801;
L_10c957f9:;
  /* 10c957f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10c957fc jmp 0x10c95801 */
  goto L_10c95801;
L_10c957fe:;
  /* 10c957fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10c95801:;
  /* 10c95801 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c95805 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c9580b je 0x10c95826 */
  if (C.zf) goto L_10c95826;
L_10c9580d:;
  /* 10c9580d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10c9580f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10c95810 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c95812 je 0x10c95878 */
  if (C.zf) goto L_10c95878;
  /* 10c95814 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c95816 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c95817 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10c9581d jne 0x10c9580d */
  if (!C.zf) goto L_10c9580d;
  /* 10c9581f jmp 0x10c95826 */
  goto L_10c95826;
L_10c95821:;
  /* 10c95821 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c95823 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10c95826:;
  /* 10c95826 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c9582b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10c9582d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9582f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c95832 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c95834 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95836 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95839 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c9583e je 0x10c95821 */
  if (C.zf) goto L_10c95821;
  /* 10c95840 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c95842 je 0x10c95878 */
  if (C.zf) goto L_10c95878;
  /* 10c95844 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c95846 je 0x10c9586f */
  if (C.zf) goto L_10c9586f;
  /* 10c95848 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c9584e je 0x10c95862 */
  if (C.zf) goto L_10c95862;
  /* 10c95850 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c95856 je 0x10c9585a */
  if (C.zf) goto L_10c9585a;
  /* 10c95858 jmp 0x10c95821 */
  goto L_10c95821;
L_10c9585a:;
  /* 10c9585a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c9585c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c95860 pop edi */
  EDI = (pop32());
  /* 10c95861 ret  */
  ESPCHK(0x10c957a0u, _esp0);
  ESP += 4; return;
L_10c95862:;
  /* 10c95862 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c95865 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c95869 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10c9586d pop edi */
  EDI = (pop32());
  /* 10c9586e ret  */
  ESPCHK(0x10c957a0u, _esp0);
  ESP += 4; return;
L_10c9586f:;
  /* 10c9586f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10c95872 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c95876 pop edi */
  EDI = (pop32());
  /* 10c95877 ret  */
  ESPCHK(0x10c957a0u, _esp0);
  ESP += 4; return;
L_10c95878:;
  /* 10c95878 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10c9587a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c9587e pop edi */
  EDI = (pop32());
  /* 10c9587f ret  */
  ESPCHK(0x10c957a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005880 @ 0x10c95880 (243 bytes, 91 insns) */
void f_10c95880(void) {
  FTRACE(0x10c95880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95880 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95881 mov ebp, esp */
  EBP = (ESP);
  /* 10c95883 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95886 push ebx */
  push32((uint32_t)(EBX));
  /* 10c95887 push esi */
  push32((uint32_t)(ESI));
  /* 10c95888 push edi */
  push32((uint32_t)(EDI));
  /* 10c95889 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10c9588c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10c9588f:;
  /* 10c9588f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95893 jne 0x10c958b3 */
  if (!C.zf) goto L_10c958b3;
  /* 10c95895 push 0x10cb9db8 */
  push32((uint32_t)(0x10cb9db8u));
  /* 10c9589a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9589c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10c9589e push 0x10cb9dc8 */
  push32((uint32_t)(0x10cb9dc8u));
  /* 10c958a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c958a5 call 0x10c918a0 */
  push32(0x10c958aau); f_10c918a0();
  /* 10c958aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c958ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c958b0 jne 0x10c958b3 */
  if (!C.zf) goto L_10c958b3;
  /* 10c958b2 int3  */
  x86_unimpl("int3 @ 0x10c958b2");
L_10c958b3:;
  /* 10c958b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c958b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c958b7 jne 0x10c9588f */
  if (!C.zf) goto L_10c9588f;
L_10c958b9:;
  /* 10c958b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c958bd jne 0x10c958dd */
  if (!C.zf) goto L_10c958dd;
  /* 10c958bf push 0x10cb9d9c */
  push32((uint32_t)(0x10cb9d9cu));
  /* 10c958c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c958c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10c958c8 push 0x10cb9dc8 */
  push32((uint32_t)(0x10cb9dc8u));
  /* 10c958cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10c958cf call 0x10c918a0 */
  push32(0x10c958d4u); f_10c918a0();
  /* 10c958d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c958d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c958da jne 0x10c958dd */
  if (!C.zf) goto L_10c958dd;
  /* 10c958dc int3  */
  x86_unimpl("int3 @ 0x10c958dc");
L_10c958dd:;
  /* 10c958dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c958df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c958e1 jne 0x10c958b9 */
  if (!C.zf) goto L_10c958b9;
  /* 10c958e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c958e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10c958ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c958f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c958f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10c958f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c958f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c958fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10c958fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95901 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95904 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10c95907 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10c9590a push ecx */
  push32((uint32_t)(ECX));
  /* 10c9590b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c9590e push edx */
  push32((uint32_t)(EDX));
  /* 10c9590f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95912 push eax */
  push32((uint32_t)(EAX));
  /* 10c95913 call 0x10c99770 */
  push32(0x10c95918u); f_10c99770();
  /* 10c95918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9591b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10c9591e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95921 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c95924 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95927 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9592a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10c9592d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95930 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95934 jl 0x10c95958 */
  if ((C.sf!=C.of)) goto L_10c95958;
  /* 10c95936 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95939 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9593b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10c9593e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10c95940 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10c95946 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10c95949 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9594c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c9594e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95951 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c95954 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10c95956 jmp 0x10c95969 */
  goto L_10c95969;
L_10c95958:;
  /* 10c95958 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10c9595b push edx */
  push32((uint32_t)(EDX));
  /* 10c9595c push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9595e call 0x10c994f0 */
  push32(0x10c95963u); f_10c994f0();
  /* 10c95963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95966 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10c95969:;
  /* 10c95969 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10c9596c pop edi */
  EDI = (pop32());
  /* 10c9596d pop esi */
  ESI = (pop32());
  /* 10c9596e pop ebx */
  EBX = (pop32());
  /* 10c9596f mov esp, ebp */
  ESP = (EBP);
  /* 10c95971 pop ebp */
  EBP = (pop32());
  /* 10c95972 ret  */
  ESPCHK(0x10c95880u, _esp0);
  ESP += 4; return;
}

/* FUN_10005980 @ 0x10c95980 (47 bytes, 17 insns) */
void f_10c95980(void) {
  FTRACE(0x10c95980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95980 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95981 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95986 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10c9598a jb 0x10c959a0 */
  if (C.cf) goto L_10c959a0;
L_10c9598c:;
  /* 10c9598c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95992 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95997 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c95999 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9599e jae 0x10c9598c */
  if (!C.cf) goto L_10c9598c;
L_10c959a0:;
  /* 10c959a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c959a2 mov eax, esp */
  EAX = (ESP);
  /* 10c959a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10c959a6 mov esp, ecx */
  ESP = (ECX);
  /* 10c959a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c959aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c959ad push eax */
  push32((uint32_t)(EAX));
  /* 10c959ae ret  */
  ESPCHK(0x10c95980u, _esp0);
  ESP += 4; return;
}

/* FUN_100059b0 @ 0x10c959b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10c959b0(void) {
  FTRACE(0x10c959b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c959b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c959b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c959b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c959b6 push esi */
  push32((uint32_t)(ESI));
  /* 10c959b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959bb je 0x10c959c3 */
  if (C.zf) goto L_10c959c3;
  /* 10c959bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959c1 jne 0x10c959c8 */
  if (!C.zf) goto L_10c959c8;
L_10c959c3:;
  /* 10c959c3 jmp 0x10c95b98 */
  goto L_10c95b98;
L_10c959c8:;
  /* 10c959c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959cc je 0x10c959e4 */
  if (C.zf) goto L_10c959e4;
  /* 10c959ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959d2 je 0x10c959e4 */
  if (C.zf) goto L_10c959e4;
  /* 10c959d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959d8 je 0x10c959e4 */
  if (C.zf) goto L_10c959e4;
  /* 10c959da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959de jne 0x10c95ac1 */
  if (!C.zf) goto L_10c95ac1;
L_10c959e4:;
  /* 10c959e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c959e6 call 0x10c961e0 */
  push32(0x10c959ebu); f_10c961e0();
  /* 10c959eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c959ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959f2 je 0x10c959fa */
  if (C.zf) goto L_10c959fa;
  /* 10c959f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c959f8 jne 0x10c95a3f */
  if (!C.zf) goto L_10c95a3f;
L_10c959fa:;
  /* 10c959fa cmp dword ptr [0x10cbe574], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe574))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95a01 jne 0x10c95a3f */
  if (!C.zf) goto L_10c95a3f;
  /* 10c95a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95a05 push 0x10c95be0 */
  push32((uint32_t)(0x10c95be0u));
  /* 10c95a0a call dword ptr [0x10cc02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c0))), 0x10c95a10u);
  /* 10c95a10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95a13 jne 0x10c95a21 */
  if (!C.zf) goto L_10c95a21;
  /* 10c95a15 mov dword ptr [0x10cbe574], 1 */
  w32((uint32_t)(0x10cbe574), (0x1u));
  /* 10c95a1f jmp 0x10c95a3f */
  goto L_10c95a3f;
L_10c95a21:;
  /* 10c95a21 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c95a27u);
  /* 10c95a27 mov esi, eax */
  ESI = (EAX);
  /* 10c95a29 call 0x10c9a6c0 */
  push32(0x10c95a2eu); f_10c9a6c0();
  /* 10c95a2e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10c95a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95a32 call 0x10c96280 */
  push32(0x10c95a37u); f_10c96280();
  /* 10c95a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95a3a jmp 0x10c95b98 */
  goto L_10c95b98;
L_10c95a3f:;
  /* 10c95a3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95a42 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c95a45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c95a48 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95a4b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10c95a4e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95a52 ja 0x10c95ab2 */
  if ((!C.cf&&!C.zf)) goto L_10c95ab2;
  /* 10c95a54 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c95a57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c95a59 mov dl, byte ptr [eax + 0x10c95bbf] */
  DL = (r8((uint32_t)(EAX + 0x10c95bbf)));
  /* 10c95a5f jmp dword ptr [edx*4 + 0x10c95bab] */
  switch (EDX) {
    case 0: goto L_10c95a66;
    case 1: goto L_10c95aa0;
    case 2: goto L_10c95a7a;
    case 3: goto L_10c95a8d;
    case 4: goto L_10c95ab2;
    default: x86_unimpl("switch@0x10c95a5f out of table"); return;
  }
L_10c95a66:;
  /* 10c95a66 mov ecx, dword ptr [0x10cbe564] */
  ECX = (r32((uint32_t)(0x10cbe564)));
  /* 10c95a6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c95a6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95a72 mov dword ptr [0x10cbe564], edx */
  w32((uint32_t)(0x10cbe564), (EDX));
  /* 10c95a78 jmp 0x10c95ab2 */
  goto L_10c95ab2;
L_10c95a7a:;
  /* 10c95a7a mov eax, dword ptr [0x10cbe568] */
  EAX = (r32((uint32_t)(0x10cbe568)));
  /* 10c95a7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95a82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95a85 mov dword ptr [0x10cbe568], ecx */
  w32((uint32_t)(0x10cbe568), (ECX));
  /* 10c95a8b jmp 0x10c95ab2 */
  goto L_10c95ab2;
L_10c95a8d:;
  /* 10c95a8d mov edx, dword ptr [0x10cbe56c] */
  EDX = (r32((uint32_t)(0x10cbe56c)));
  /* 10c95a93 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10c95a96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95a99 mov dword ptr [0x10cbe56c], eax */
  w32((uint32_t)(0x10cbe56c), (EAX));
  /* 10c95a9e jmp 0x10c95ab2 */
  goto L_10c95ab2;
L_10c95aa0:;
  /* 10c95aa0 mov ecx, dword ptr [0x10cbe570] */
  ECX = (r32((uint32_t)(0x10cbe570)));
  /* 10c95aa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c95aa9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95aac mov dword ptr [0x10cbe570], edx */
  w32((uint32_t)(0x10cbe570), (EDX));
L_10c95ab2:;
  /* 10c95ab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95ab4 call 0x10c96280 */
  push32(0x10c95ab9u); f_10c96280();
  /* 10c95ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95abc jmp 0x10c95b93 */
  goto L_10c95b93;
L_10c95ac1:;
  /* 10c95ac1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95ac5 je 0x10c95ad8 */
  if (C.zf) goto L_10c95ad8;
  /* 10c95ac7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95acb je 0x10c95ad8 */
  if (C.zf) goto L_10c95ad8;
  /* 10c95acd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95ad1 je 0x10c95ad8 */
  if (C.zf) goto L_10c95ad8;
  /* 10c95ad3 jmp 0x10c95b98 */
  goto L_10c95b98;
L_10c95ad8:;
  /* 10c95ad8 call 0x10c92220 */
  push32(0x10c95addu); f_10c92220();
  /* 10c95add mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c95ae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95ae3 cmp dword ptr [eax + 0x50], 0x10cbcc00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10cbcc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95aea jne 0x10c95b35 */
  if (!C.zf) goto L_10c95b35;
  /* 10c95aec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10c95af1 push 0x10cb9dd4 */
  push32((uint32_t)(0x10cb9dd4u));
  /* 10c95af6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c95af8 mov ecx, dword ptr [0x10cbcc80] */
  ECX = (r32((uint32_t)(0x10cbcc80)));
  /* 10c95afe push ecx */
  push32((uint32_t)(ECX));
  /* 10c95aff call 0x10c927e0 */
  push32(0x10c95b04u); f_10c927e0();
  /* 10c95b04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95b07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95b0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10c95b0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95b10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95b14 je 0x10c95b33 */
  if (C.zf) goto L_10c95b33;
  /* 10c95b16 mov ecx, dword ptr [0x10cbcc80] */
  ECX = (r32((uint32_t)(0x10cbcc80)));
  /* 10c95b1c push ecx */
  push32((uint32_t)(ECX));
  /* 10c95b1d push 0x10cbcc00 */
  push32((uint32_t)(0x10cbcc00u));
  /* 10c95b22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95b25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10c95b28 push eax */
  push32((uint32_t)(EAX));
  /* 10c95b29 call 0x10c990c0 */
  push32(0x10c95b2eu); f_10c990c0();
  /* 10c95b2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95b31 jmp 0x10c95b35 */
  goto L_10c95b35;
L_10c95b33:;
  /* 10c95b33 jmp 0x10c95b98 */
  goto L_10c95b98;
L_10c95b35:;
  /* 10c95b35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95b38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c95b3b push edx */
  push32((uint32_t)(EDX));
  /* 10c95b3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95b3f push eax */
  push32((uint32_t)(EAX));
  /* 10c95b40 call 0x10c95ec0 */
  push32(0x10c95b45u); f_10c95ec0();
  /* 10c95b45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95b48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c95b4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95b4f jne 0x10c95b53 */
  if (!C.zf) goto L_10c95b53;
  /* 10c95b51 jmp 0x10c95b98 */
  goto L_10c95b98;
L_10c95b53:;
  /* 10c95b53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95b56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10c95b59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10c95b5c:;
  /* 10c95b5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95b5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c95b62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95b65 jne 0x10c95b93 */
  if (!C.zf) goto L_10c95b93;
  /* 10c95b67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95b6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95b6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10c95b70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95b73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95b76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c95b79 mov edx, dword ptr [0x10cbcc84] */
  EDX = (r32((uint32_t)(0x10cbcc84)));
  /* 10c95b7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c95b82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95b85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c95b88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95b8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95b8d jb 0x10c95b91 */
  if (C.cf) goto L_10c95b91;
  /* 10c95b8f jmp 0x10c95b93 */
  goto L_10c95b93;
L_10c95b91:;
  /* 10c95b91 jmp 0x10c95b5c */
  goto L_10c95b5c;
L_10c95b93:;
  /* 10c95b93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95b96 jmp 0x10c95ba6 */
  goto L_10c95ba6;
L_10c95b98:;
  /* 10c95b98 call 0x10c9a6b0 */
  push32(0x10c95b9du); f_10c9a6b0();
  /* 10c95b9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10c95ba3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c95ba6:;
  /* 10c95ba6 pop esi */
  ESI = (pop32());
  /* 10c95ba7 mov esp, ebp */
  ESP = (EBP);
  /* 10c95ba9 pop ebp */
  EBP = (pop32());
  /* 10c95baa ret  */
  ESPCHK(0x10c959b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005be0 @ 0x10c95be0 (146 bytes, 45 insns) */
void f_10c95be0(void) {
  FTRACE(0x10c95be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95be1 mov ebp, esp */
  EBP = (ESP);
  /* 10c95be3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95be6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95be8 call 0x10c961e0 */
  push32(0x10c95bedu); f_10c961e0();
  /* 10c95bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95bf0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95bf4 jne 0x10c95c0e */
  if (!C.zf) goto L_10c95c0e;
  /* 10c95bf6 mov dword ptr [ebp - 8], 0x10cbe564 */
  w32((uint32_t)(EBP + -0x8), (0x10cbe564u));
  /* 10c95bfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95c00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10c95c02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c95c05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10c95c0c jmp 0x10c95c24 */
  goto L_10c95c24;
L_10c95c0e:;
  /* 10c95c0e mov dword ptr [ebp - 8], 0x10cbe568 */
  w32((uint32_t)(EBP + -0x8), (0x10cbe568u));
  /* 10c95c15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95c18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c95c1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95c1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10c95c24:;
  /* 10c95c24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95c28 jne 0x10c95c38 */
  if (!C.zf) goto L_10c95c38;
  /* 10c95c2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95c2c call 0x10c96280 */
  push32(0x10c95c31u); f_10c96280();
  /* 10c95c31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95c34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c95c36 jmp 0x10c95c6c */
  goto L_10c95c6c;
L_10c95c38:;
  /* 10c95c38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95c3c je 0x10c95c5d */
  if (C.zf) goto L_10c95c5d;
  /* 10c95c3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95c41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10c95c47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95c49 call 0x10c96280 */
  push32(0x10c95c4eu); f_10c96280();
  /* 10c95c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95c54 push edx */
  push32((uint32_t)(EDX));
  /* 10c95c55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10c95c58u);
  /* 10c95c58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95c5b jmp 0x10c95c67 */
  goto L_10c95c67;
L_10c95c5d:;
  /* 10c95c5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95c5f call 0x10c96280 */
  push32(0x10c95c64u); f_10c96280();
  /* 10c95c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95c67:;
  /* 10c95c67 mov eax, 1 */
  EAX = (0x1u);
L_10c95c6c:;
  /* 10c95c6c mov esp, ebp */
  ESP = (EBP);
  /* 10c95c6e pop ebp */
  EBP = (pop32());
  /* 10c95c6f ret 4 */
  ESPCHK(0x10c95be0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005c80 @ 0x10c95c80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10c95c80(void) {
  FTRACE(0x10c95c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95c81 mov ebp, esp */
  EBP = (ESP);
  /* 10c95c83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95c86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10c95c8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95c90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10c95c93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c95c96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95c99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10c95c9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95ca0 ja 0x10c95d4e */
  if ((!C.cf&&!C.zf)) goto L_10c95d4e;
  /* 10c95ca6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10c95ca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c95cab mov dl, byte ptr [eax + 0x10c95ea2] */
  DL = (r8((uint32_t)(EAX + 0x10c95ea2)));
  /* 10c95cb1 jmp dword ptr [edx*4 + 0x10c95e8a] */
  switch (EDX) {
    case 0: goto L_10c95cb8;
    case 1: goto L_10c95d23;
    case 2: goto L_10c95d09;
    case 3: goto L_10c95cd5;
    case 4: goto L_10c95cef;
    case 5: goto L_10c95d4e;
    default: x86_unimpl("switch@0x10c95cb1 out of table"); return;
  }
L_10c95cb8:;
  /* 10c95cb8 mov dword ptr [ebp - 0x18], 0x10cbe564 */
  w32((uint32_t)(EBP + -0x18), (0x10cbe564u));
  /* 10c95cbf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95cc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95cc4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c95cc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95cca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95ccd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95cd0 jmp 0x10c95d56 */
  goto L_10c95d56;
L_10c95cd5:;
  /* 10c95cd5 mov dword ptr [ebp - 0x18], 0x10cbe568 */
  w32((uint32_t)(EBP + -0x18), (0x10cbe568u));
  /* 10c95cdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95cdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95ce1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c95ce4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95ce7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95cea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95ced jmp 0x10c95d56 */
  goto L_10c95d56;
L_10c95cef:;
  /* 10c95cef mov dword ptr [ebp - 0x18], 0x10cbe56c */
  w32((uint32_t)(EBP + -0x18), (0x10cbe56cu));
  /* 10c95cf6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95cf9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95cfb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c95cfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95d01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95d04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95d07 jmp 0x10c95d56 */
  goto L_10c95d56;
L_10c95d09:;
  /* 10c95d09 mov dword ptr [ebp - 0x18], 0x10cbe570 */
  w32((uint32_t)(EBP + -0x18), (0x10cbe570u));
  /* 10c95d10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95d13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95d15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c95d18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c95d1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95d1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c95d21 jmp 0x10c95d56 */
  goto L_10c95d56;
L_10c95d23:;
  /* 10c95d23 call 0x10c92220 */
  push32(0x10c95d28u); f_10c92220();
  /* 10c95d28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c95d2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95d2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c95d31 push edx */
  push32((uint32_t)(EDX));
  /* 10c95d32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95d35 push eax */
  push32((uint32_t)(EAX));
  /* 10c95d36 call 0x10c95ec0 */
  push32(0x10c95d3bu); f_10c95ec0();
  /* 10c95d3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95d3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95d41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10c95d44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95d47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c95d49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10c95d4c jmp 0x10c95d56 */
  goto L_10c95d56;
L_10c95d4e:;
  /* 10c95d4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c95d51 jmp 0x10c95e86 */
  goto L_10c95e86;
L_10c95d56:;
  /* 10c95d56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95d5a je 0x10c95d66 */
  if (C.zf) goto L_10c95d66;
  /* 10c95d5c push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95d5e call 0x10c961e0 */
  push32(0x10c95d63u); f_10c961e0();
  /* 10c95d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95d66:;
  /* 10c95d66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95d6a jne 0x10c95d83 */
  if (!C.zf) goto L_10c95d83;
  /* 10c95d6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95d70 je 0x10c95d7c */
  if (C.zf) goto L_10c95d7c;
  /* 10c95d72 push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95d74 call 0x10c96280 */
  push32(0x10c95d79u); f_10c96280();
  /* 10c95d79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95d7c:;
  /* 10c95d7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c95d7e jmp 0x10c95e86 */
  goto L_10c95e86;
L_10c95d83:;
  /* 10c95d83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95d87 jne 0x10c95da0 */
  if (!C.zf) goto L_10c95da0;
  /* 10c95d89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95d8d je 0x10c95d99 */
  if (C.zf) goto L_10c95d99;
  /* 10c95d8f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95d91 call 0x10c96280 */
  push32(0x10c95d96u); f_10c96280();
  /* 10c95d96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95d99:;
  /* 10c95d99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10c95d9b call 0x10c91fa0 */
  push32(0x10c95da0u); f_10c91fa0();
L_10c95da0:;
  /* 10c95da0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95da4 je 0x10c95db2 */
  if (C.zf) goto L_10c95db2;
  /* 10c95da6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95daa je 0x10c95db2 */
  if (C.zf) goto L_10c95db2;
  /* 10c95dac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95db0 jne 0x10c95dde */
  if (!C.zf) goto L_10c95dde;
L_10c95db2:;
  /* 10c95db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95db5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10c95db8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c95dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95dbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10c95dc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95dc9 jne 0x10c95dde */
  if (!C.zf) goto L_10c95dde;
  /* 10c95dcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95dce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c95dd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c95dd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95dd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10c95dde:;
  /* 10c95dde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95de2 jne 0x10c95e20 */
  if (!C.zf) goto L_10c95e20;
  /* 10c95de4 mov eax, dword ptr [0x10cbcc78] */
  EAX = (r32((uint32_t)(0x10cbcc78)));
  /* 10c95de9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c95dec jmp 0x10c95df7 */
  goto L_10c95df7;
L_10c95dee:;
  /* 10c95dee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c95df1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95df4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c95df7:;
  /* 10c95df7 mov edx, dword ptr [0x10cbcc78] */
  EDX = (r32((uint32_t)(0x10cbcc78)));
  /* 10c95dfd add edx, dword ptr [0x10cbcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95e03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e06 jge 0x10c95e1e */
  if ((C.sf==C.of)) goto L_10c95e1e;
  /* 10c95e08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c95e0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c95e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95e11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c95e14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c95e1c jmp 0x10c95dee */
  goto L_10c95dee;
L_10c95e1e:;
  /* 10c95e1e jmp 0x10c95e29 */
  goto L_10c95e29;
L_10c95e20:;
  /* 10c95e20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c95e23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10c95e29:;
  /* 10c95e29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e2d je 0x10c95e39 */
  if (C.zf) goto L_10c95e39;
  /* 10c95e2f push 1 */
  push32((uint32_t)(0x1u));
  /* 10c95e31 call 0x10c96280 */
  push32(0x10c95e36u); f_10c96280();
  /* 10c95e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95e39:;
  /* 10c95e39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e3d jne 0x10c95e50 */
  if (!C.zf) goto L_10c95e50;
  /* 10c95e3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95e42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c95e45 push edx */
  push32((uint32_t)(EDX));
  /* 10c95e46 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c95e48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c95e4bu);
  /* 10c95e4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95e4e jmp 0x10c95e5a */
  goto L_10c95e5a;
L_10c95e50:;
  /* 10c95e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95e53 push eax */
  push32((uint32_t)(EAX));
  /* 10c95e54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10c95e57u);
  /* 10c95e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c95e5a:;
  /* 10c95e5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e5e je 0x10c95e6c */
  if (C.zf) goto L_10c95e6c;
  /* 10c95e60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e64 je 0x10c95e6c */
  if (C.zf) goto L_10c95e6c;
  /* 10c95e66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e6a jne 0x10c95e84 */
  if (!C.zf) goto L_10c95e84;
L_10c95e6c:;
  /* 10c95e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95e6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c95e72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10c95e75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95e79 jne 0x10c95e84 */
  if (!C.zf) goto L_10c95e84;
  /* 10c95e7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95e7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95e81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10c95e84:;
  /* 10c95e84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c95e86:;
  /* 10c95e86 mov esp, ebp */
  ESP = (EBP);
  /* 10c95e88 pop ebp */
  EBP = (pop32());
  /* 10c95e89 ret  */
  ESPCHK(0x10c95c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ec0 @ 0x10c95ec0 (91 bytes, 35 insns) */
void f_10c95ec0(void) {
  FTRACE(0x10c95ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10c95ec3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95ec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95ec7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c95eca:;
  /* 10c95eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95ecd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10c95ed0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95ed3 je 0x10c95ef3 */
  if (C.zf) goto L_10c95ef3;
  /* 10c95ed5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95ed8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95edb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c95ede mov ecx, dword ptr [0x10cbcc84] */
  ECX = (r32((uint32_t)(0x10cbcc84)));
  /* 10c95ee4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c95ee7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95eea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95eec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95eef jae 0x10c95ef3 */
  if (!C.cf) goto L_10c95ef3;
  /* 10c95ef1 jmp 0x10c95eca */
  goto L_10c95eca;
L_10c95ef3:;
  /* 10c95ef3 mov eax, dword ptr [0x10cbcc84] */
  EAX = (r32((uint32_t)(0x10cbcc84)));
  /* 10c95ef8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c95efb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95efe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95f00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95f03 jae 0x10c95f15 */
  if (!C.cf) goto L_10c95f15;
  /* 10c95f05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95f08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10c95f0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95f0e jne 0x10c95f15 */
  if (!C.zf) goto L_10c95f15;
  /* 10c95f10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95f13 jmp 0x10c95f17 */
  goto L_10c95f17;
L_10c95f15:;
  /* 10c95f15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c95f17:;
  /* 10c95f17 mov esp, ebp */
  ESP = (EBP);
  /* 10c95f19 pop ebp */
  EBP = (pop32());
  /* 10c95f1a ret  */
  ESPCHK(0x10c95ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f20 @ 0x10c95f20 (13 bytes, 6 insns) */
void f_10c95f20(void) {
  FTRACE(0x10c95f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95f21 mov ebp, esp */
  EBP = (ESP);
  /* 10c95f23 call 0x10c92220 */
  push32(0x10c95f28u); f_10c92220();
  /* 10c95f28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95f2b pop ebp */
  EBP = (pop32());
  /* 10c95f2c ret  */
  ESPCHK(0x10c95f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f30 @ 0x10c95f30 (13 bytes, 6 insns) */
void f_10c95f30(void) {
  FTRACE(0x10c95f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95f31 mov ebp, esp */
  EBP = (ESP);
  /* 10c95f33 call 0x10c92220 */
  push32(0x10c95f38u); f_10c92220();
  /* 10c95f38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c95f3b pop ebp */
  EBP = (pop32());
  /* 10c95f3c ret  */
  ESPCHK(0x10c95f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f40 @ 0x10c95f40 (187 bytes, 54 insns) */
void f_10c95f40(void) {
  FTRACE(0x10c95f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c95f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c95f41 mov ebp, esp */
  EBP = (ESP);
  /* 10c95f43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c95f46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c95f4d cmp dword ptr [0x10cbe578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95f54 jne 0x10c95fb3 */
  if (!C.zf) goto L_10c95fb3;
  /* 10c95f56 push 0x10cb9200 */
  push32((uint32_t)(0x10cb9200u));
  /* 10c95f5b call dword ptr [0x10cc0248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0248))), 0x10c95f61u);
  /* 10c95f61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c95f64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95f68 je 0x10c95f87 */
  if (C.zf) goto L_10c95f87;
  /* 10c95f6a push 0x10cb9e04 */
  push32((uint32_t)(0x10cb9e04u));
  /* 10c95f6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95f72 push eax */
  push32((uint32_t)(EAX));
  /* 10c95f73 call dword ptr [0x10cc0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0244))), 0x10c95f79u);
  /* 10c95f79 mov dword ptr [0x10cbe578], eax */
  w32((uint32_t)(0x10cbe578), (EAX));
  /* 10c95f7e cmp dword ptr [0x10cbe578], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe578))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95f85 jne 0x10c95f8b */
  if (!C.zf) goto L_10c95f8b;
L_10c95f87:;
  /* 10c95f87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c95f89 jmp 0x10c95ff7 */
  goto L_10c95ff7;
L_10c95f8b:;
  /* 10c95f8b push 0x10cb9df4 */
  push32((uint32_t)(0x10cb9df4u));
  /* 10c95f90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95f94 call dword ptr [0x10cc0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0244))), 0x10c95f9au);
  /* 10c95f9a mov dword ptr [0x10cbe57c], eax */
  w32((uint32_t)(0x10cbe57c), (EAX));
  /* 10c95f9f push 0x10cb9de0 */
  push32((uint32_t)(0x10cb9de0u));
  /* 10c95fa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c95fa7 push edx */
  push32((uint32_t)(EDX));
  /* 10c95fa8 call dword ptr [0x10cc0244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0244))), 0x10c95faeu);
  /* 10c95fae mov dword ptr [0x10cbe580], eax */
  w32((uint32_t)(0x10cbe580), (EAX));
L_10c95fb3:;
  /* 10c95fb3 cmp dword ptr [0x10cbe57c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe57c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95fba je 0x10c95fc5 */
  if (C.zf) goto L_10c95fc5;
  /* 10c95fbc call dword ptr [0x10cbe57c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe57c))), 0x10c95fc2u);
  /* 10c95fc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c95fc5:;
  /* 10c95fc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95fc9 je 0x10c95fe1 */
  if (C.zf) goto L_10c95fe1;
  /* 10c95fcb cmp dword ptr [0x10cbe580], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe580))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c95fd2 je 0x10c95fe1 */
  if (C.zf) goto L_10c95fe1;
  /* 10c95fd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95fd7 push eax */
  push32((uint32_t)(EAX));
  /* 10c95fd8 call dword ptr [0x10cbe580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe580))), 0x10c95fdeu);
  /* 10c95fde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c95fe1:;
  /* 10c95fe1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10c95fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95fe5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c95fe8 push edx */
  push32((uint32_t)(EDX));
  /* 10c95fe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c95fec push eax */
  push32((uint32_t)(EAX));
  /* 10c95fed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c95ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10c95ff1 call dword ptr [0x10cbe578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cbe578))), 0x10c95ff7u);
L_10c95ff7:;
  /* 10c95ff7 mov esp, ebp */
  ESP = (EBP);
  /* 10c95ff9 pop ebp */
  EBP = (pop32());
  /* 10c95ffa ret  */
  ESPCHK(0x10c95f40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10c96000 (254 bytes, 109 insns) */
void f_10c96000(void) {
  FTRACE(0x10c96000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96000 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c96004 push edi */
  push32((uint32_t)(EDI));
  /* 10c96005 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10c96007 je 0x10c96083 */
  if (C.zf) goto L_10c96083;
  /* 10c96009 push esi */
  push32((uint32_t)(ESI));
  /* 10c9600a push ebx */
  push32((uint32_t)(EBX));
  /* 10c9600b mov ebx, ecx */
  EBX = (ECX);
  /* 10c9600d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10c96011 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c96017 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10c9601b jne 0x10c96024 */
  if (!C.zf) goto L_10c96024;
  /* 10c9601d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c96020 jne 0x10c96091 */
  if (!C.zf) goto L_10c96091;
  /* 10c96022 jmp 0x10c96045 */
  goto L_10c96045;
L_10c96024:;
  /* 10c96024 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c96026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c96027 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c96029 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c9602a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c9602b je 0x10c96052 */
  if (C.zf) goto L_10c96052;
  /* 10c9602d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c9602f je 0x10c9605a */
  if (C.zf) goto L_10c9605a;
  /* 10c96031 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10c96037 jne 0x10c96024 */
  if (!C.zf) goto L_10c96024;
  /* 10c96039 mov ebx, ecx */
  EBX = (ECX);
  /* 10c9603b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9603e jne 0x10c96091 */
  if (!C.zf) goto L_10c96091;
L_10c96040:;
  /* 10c96040 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c96043 je 0x10c96052 */
  if (C.zf) goto L_10c96052;
L_10c96045:;
  /* 10c96045 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10c96047 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10c96048 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9604a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c9604b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10c9604d je 0x10c9607e */
  if (C.zf) goto L_10c9607e;
  /* 10c9604f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c96050 jne 0x10c96045 */
  if (!C.zf) goto L_10c96045;
L_10c96052:;
  /* 10c96052 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c96056 pop ebx */
  EBX = (pop32());
  /* 10c96057 pop esi */
  ESI = (pop32());
  /* 10c96058 pop edi */
  EDI = (pop32());
  /* 10c96059 ret  */
  ESPCHK(0x10c96000u, _esp0);
  ESP += 4; return;
L_10c9605a:;
  /* 10c9605a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c96060 je 0x10c96074 */
  if (C.zf) goto L_10c96074;
L_10c96062:;
  /* 10c96062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c96064 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c96065 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c96066 je 0x10c960f6 */
  if (C.zf) goto L_10c960f6;
  /* 10c9606c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10c96072 jne 0x10c96062 */
  if (!C.zf) goto L_10c96062;
L_10c96074:;
  /* 10c96074 mov ebx, ecx */
  EBX = (ECX);
  /* 10c96076 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c96079 jne 0x10c960e7 */
  if (!C.zf) goto L_10c960e7;
L_10c9607b:;
  /* 10c9607b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c9607d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10c9607e:;
  /* 10c9607e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10c9607f jne 0x10c9607b */
  if (!C.zf) goto L_10c9607b;
  /* 10c96081 pop ebx */
  EBX = (pop32());
  /* 10c96082 pop esi */
  ESI = (pop32());
L_10c96083:;
  /* 10c96083 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c96087 pop edi */
  EDI = (pop32());
  /* 10c96088 ret  */
  ESPCHK(0x10c96000u, _esp0);
  ESP += 4; return;
L_10c96089:;
  /* 10c96089 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c9608b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9608e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c9608f je 0x10c96040 */
  if (C.zf) goto L_10c96040;
L_10c96091:;
  /* 10c96091 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10c96096 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10c96098 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9609a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9609d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9609f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10c960a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c960a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10c960a9 je 0x10c96089 */
  if (C.zf) goto L_10c96089;
  /* 10c960ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10c960ad je 0x10c960db */
  if (C.zf) goto L_10c960db;
  /* 10c960af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10c960b1 je 0x10c960d1 */
  if (C.zf) goto L_10c960d1;
  /* 10c960b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10c960b9 je 0x10c960c7 */
  if (C.zf) goto L_10c960c7;
  /* 10c960bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10c960c1 jne 0x10c96089 */
  if (!C.zf) goto L_10c96089;
  /* 10c960c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c960c5 jmp 0x10c960df */
  goto L_10c960df;
L_10c960c7:;
  /* 10c960c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c960cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c960cf jmp 0x10c960df */
  goto L_10c960df;
L_10c960d1:;
  /* 10c960d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10c960d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10c960d9 jmp 0x10c960df */
  goto L_10c960df;
L_10c960db:;
  /* 10c960db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10c960dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10c960df:;
  /* 10c960df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c960e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c960e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c960e5 je 0x10c960f1 */
  if (C.zf) goto L_10c960f1;
L_10c960e7:;
  /* 10c960e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10c960e9:;
  /* 10c960e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10c960eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10c960ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c960ef jne 0x10c960e9 */
  if (!C.zf) goto L_10c960e9;
L_10c960f1:;
  /* 10c960f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10c960f4 jne 0x10c9607b */
  if (!C.zf) goto L_10c9607b;
L_10c960f6:;
  /* 10c960f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10c960fa pop ebx */
  EBX = (pop32());
  /* 10c960fb pop esi */
  ESI = (pop32());
  /* 10c960fc pop edi */
  EDI = (pop32());
  /* 10c960fd ret  */
  ESPCHK(0x10c96000u, _esp0);
  ESP += 4; return;
}

/* FUN_10006100 @ 0x10c96100 (55 bytes, 16 insns) */
void f_10c96100(void) {
  FTRACE(0x10c96100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96100 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96101 mov ebp, esp */
  EBP = (ESP);
  /* 10c96103 mov eax, dword ptr [0x10cbcb84] */
  EAX = (r32((uint32_t)(0x10cbcb84)));
  /* 10c96108 push eax */
  push32((uint32_t)(EAX));
  /* 10c96109 call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c9610fu);
  /* 10c9610f mov ecx, dword ptr [0x10cbcb74] */
  ECX = (r32((uint32_t)(0x10cbcb74)));
  /* 10c96115 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96116 call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c9611cu);
  /* 10c9611c mov edx, dword ptr [0x10cbcb64] */
  EDX = (r32((uint32_t)(0x10cbcb64)));
  /* 10c96122 push edx */
  push32((uint32_t)(EDX));
  /* 10c96123 call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c96129u);
  /* 10c96129 mov eax, dword ptr [0x10cbcb44] */
  EAX = (r32((uint32_t)(0x10cbcb44)));
  /* 10c9612e push eax */
  push32((uint32_t)(EAX));
  /* 10c9612f call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c96135u);
  /* 10c96135 pop ebp */
  EBP = (pop32());
  /* 10c96136 ret  */
  ESPCHK(0x10c96100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006140 @ 0x10c96140 (159 bytes, 47 insns) */
void f_10c96140(void) {
  FTRACE(0x10c96140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96140 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96141 mov ebp, esp */
  EBP = (ESP);
  /* 10c96143 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96144 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c9614b jmp 0x10c96156 */
  goto L_10c96156;
L_10c9614d:;
  /* 10c9614d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96150 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96153 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c96156:;
  /* 10c96156 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9615a jge 0x10c961a9 */
  if ((C.sf==C.of)) goto L_10c961a9;
  /* 10c9615c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9615f cmp dword ptr [ecx*4 + 0x10cbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96167 je 0x10c961a7 */
  if (C.zf) goto L_10c961a7;
  /* 10c96169 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9616d je 0x10c961a7 */
  if (C.zf) goto L_10c961a7;
  /* 10c9616f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96173 je 0x10c961a7 */
  if (C.zf) goto L_10c961a7;
  /* 10c96175 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96179 je 0x10c961a7 */
  if (C.zf) goto L_10c961a7;
  /* 10c9617b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9617f je 0x10c961a7 */
  if (C.zf) goto L_10c961a7;
  /* 10c96181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96184 mov eax, dword ptr [edx*4 + 0x10cbcb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10cbcb40)));
  /* 10c9618b push eax */
  push32((uint32_t)(EAX));
  /* 10c9618c call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c96192u);
  /* 10c96192 push 2 */
  push32((uint32_t)(0x2u));
  /* 10c96194 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96197 mov edx, dword ptr [ecx*4 + 0x10cbcb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10cbcb40)));
  /* 10c9619e push edx */
  push32((uint32_t)(EDX));
  /* 10c9619f call 0x10c93270 */
  push32(0x10c961a4u); f_10c93270();
  /* 10c961a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c961a7:;
  /* 10c961a7 jmp 0x10c9614d */
  goto L_10c9614d;
L_10c961a9:;
  /* 10c961a9 mov eax, dword ptr [0x10cbcb64] */
  EAX = (r32((uint32_t)(0x10cbcb64)));
  /* 10c961ae push eax */
  push32((uint32_t)(EAX));
  /* 10c961af call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c961b5u);
  /* 10c961b5 mov ecx, dword ptr [0x10cbcb74] */
  ECX = (r32((uint32_t)(0x10cbcb74)));
  /* 10c961bb push ecx */
  push32((uint32_t)(ECX));
  /* 10c961bc call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c961c2u);
  /* 10c961c2 mov edx, dword ptr [0x10cbcb84] */
  EDX = (r32((uint32_t)(0x10cbcb84)));
  /* 10c961c8 push edx */
  push32((uint32_t)(EDX));
  /* 10c961c9 call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c961cfu);
  /* 10c961cf mov eax, dword ptr [0x10cbcb44] */
  EAX = (r32((uint32_t)(0x10cbcb44)));
  /* 10c961d4 push eax */
  push32((uint32_t)(EAX));
  /* 10c961d5 call dword ptr [0x10cc028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc028c))), 0x10c961dbu);
  /* 10c961db mov esp, ebp */
  ESP = (EBP);
  /* 10c961dd pop ebp */
  EBP = (pop32());
  /* 10c961de ret  */
  ESPCHK(0x10c96140u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x10c961e0 (151 bytes, 46 insns) */
void f_10c961e0(void) {
  FTRACE(0x10c961e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c961e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c961e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c961e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c961e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c961e7 cmp dword ptr [eax*4 + 0x10cbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10cbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c961ef jne 0x10c96262 */
  if (!C.zf) goto L_10c96262;
  /* 10c961f1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10c961f6 push 0x10cb9e10 */
  push32((uint32_t)(0x10cb9e10u));
  /* 10c961fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10c961fd push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10c961ff call 0x10c927e0 */
  push32(0x10c96204u); f_10c927e0();
  /* 10c96204 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96207 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9620a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9620e jne 0x10c9621a */
  if (!C.zf) goto L_10c9621a;
  /* 10c96210 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c96212 call 0x10c91750 */
  push32(0x10c96217u); f_10c91750();
  /* 10c96217 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9621a:;
  /* 10c9621a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9621c call 0x10c961e0 */
  push32(0x10c96221u); f_10c961e0();
  /* 10c96221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96224 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96227 cmp dword ptr [ecx*4 + 0x10cbcb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10cbcb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9622f jne 0x10c9624a */
  if (!C.zf) goto L_10c9624a;
  /* 10c96231 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96234 push edx */
  push32((uint32_t)(EDX));
  /* 10c96235 call dword ptr [0x10cc02c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c4))), 0x10c9623bu);
  /* 10c9623b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9623e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96241 mov dword ptr [eax*4 + 0x10cbcb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10cbcb40), (ECX));
  /* 10c96248 jmp 0x10c96258 */
  goto L_10c96258;
L_10c9624a:;
  /* 10c9624a push 2 */
  push32((uint32_t)(0x2u));
  /* 10c9624c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9624f push edx */
  push32((uint32_t)(EDX));
  /* 10c96250 call 0x10c93270 */
  push32(0x10c96255u); f_10c93270();
  /* 10c96255 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c96258:;
  /* 10c96258 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10c9625a call 0x10c96280 */
  push32(0x10c9625fu); f_10c96280();
  /* 10c9625f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c96262:;
  /* 10c96262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96265 mov ecx, dword ptr [eax*4 + 0x10cbcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbcb40)));
  /* 10c9626c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9626d call dword ptr [0x10cc02c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02c8))), 0x10c96273u);
  /* 10c96273 mov esp, ebp */
  ESP = (EBP);
  /* 10c96275 pop ebp */
  EBP = (pop32());
  /* 10c96276 ret  */
  ESPCHK(0x10c961e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006280 @ 0x10c96280 (22 bytes, 8 insns) */
void f_10c96280(void) {
  FTRACE(0x10c96280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96280 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96281 mov ebp, esp */
  EBP = (ESP);
  /* 10c96283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96286 mov ecx, dword ptr [eax*4 + 0x10cbcb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10cbcb40)));
  /* 10c9628d push ecx */
  push32((uint32_t)(ECX));
  /* 10c9628e call dword ptr [0x10cc02cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02cc))), 0x10c96294u);
  /* 10c96294 pop ebp */
  EBP = (pop32());
  /* 10c96295 ret  */
  ESPCHK(0x10c96280u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x10c962a0 (26 bytes, 10 insns) */
void f_10c962a0(void) {
  FTRACE(0x10c962a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c962a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c962a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c962a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c962a6 push eax */
  push32((uint32_t)(EAX));
  /* 10c962a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c962a9 call dword ptr [0x10cc02d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d0))), 0x10c962afu);
  /* 10c962af push 0xff */
  push32((uint32_t)(0xffu));
  /* 10c962b4 call dword ptr [0x10cc0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0254))), 0x10c962bau);
  /* 10c962ba pop ebp */
  EBP = (pop32());
  /* 10c962bb ret  */
  ESPCHK(0x10c962a0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10c962c0 (446 bytes, 130 insns) */
void f_10c962c0(void) {
  FTRACE(0x10c962c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c962c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c962c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c962c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c962c6 call 0x10c92220 */
  push32(0x10c962cbu); f_10c92220();
  /* 10c962cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c962ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c962d1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10c962d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10c962d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c962d8 push edx */
  push32((uint32_t)(EDX));
  /* 10c962d9 call 0x10c96480 */
  push32(0x10c962deu); f_10c96480();
  /* 10c962de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c962e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c962e4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c962e8 je 0x10c962f3 */
  if (C.zf) goto L_10c962f3;
  /* 10c962ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c962ed cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c962f1 jne 0x10c96302 */
  if (!C.zf) goto L_10c96302;
L_10c962f3:;
  /* 10c962f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c962f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10c962f7 call dword ptr [0x10cc02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d4))), 0x10c962fdu);
  /* 10c962fd jmp 0x10c9647a */
  goto L_10c9647a;
L_10c96302:;
  /* 10c96302 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96305 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96309 jne 0x10c9631f */
  if (!C.zf) goto L_10c9631f;
  /* 10c9630b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9630e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10c96315 mov eax, 1 */
  EAX = (0x1u);
  /* 10c9631a jmp 0x10c9647a */
  goto L_10c9647a;
L_10c9631f:;
  /* 10c9631f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96322 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96326 jne 0x10c96330 */
  if (!C.zf) goto L_10c96330;
  /* 10c96328 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10c9632b jmp 0x10c9647a */
  goto L_10c9647a;
L_10c96330:;
  /* 10c96330 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96333 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10c96336 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c96339 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9633c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10c9633f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10c96342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96345 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96348 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10c9634b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9634e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96352 jne 0x10c96457 */
  if (!C.zf) goto L_10c96457;
  /* 10c96358 mov eax, dword ptr [0x10cbcc78] */
  EAX = (r32((uint32_t)(0x10cbcc78)));
  /* 10c9635d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10c96360 jmp 0x10c9636b */
  goto L_10c9636b;
L_10c96362:;
  /* 10c96362 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c96365 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96368 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10c9636b:;
  /* 10c9636b mov edx, dword ptr [0x10cbcc78] */
  EDX = (r32((uint32_t)(0x10cbcc78)));
  /* 10c96371 add edx, dword ptr [0x10cbcc7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10cbcc7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96377 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9637a jge 0x10c96392 */
  if ((C.sf==C.of)) goto L_10c96392;
  /* 10c9637c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c9637f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c96382 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96385 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10c96388 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10c96390 jmp 0x10c96362 */
  goto L_10c96362;
L_10c96392:;
  /* 10c96392 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96395 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10c96398 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10c9639b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9639e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c963a4 jne 0x10c963b5 */
  if (!C.zf) goto L_10c963b5;
  /* 10c963a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c963a9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10c963b0 jmp 0x10c9643d */
  goto L_10c9643d;
L_10c963b5:;
  /* 10c963b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c963b8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c963be jne 0x10c963cc */
  if (!C.zf) goto L_10c963cc;
  /* 10c963c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c963c3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10c963ca jmp 0x10c9643d */
  goto L_10c9643d;
L_10c963cc:;
  /* 10c963cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c963cf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c963d5 jne 0x10c963e3 */
  if (!C.zf) goto L_10c963e3;
  /* 10c963d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c963da mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10c963e1 jmp 0x10c9643d */
  goto L_10c9643d;
L_10c963e3:;
  /* 10c963e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c963e6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c963ec jne 0x10c963fa */
  if (!C.zf) goto L_10c963fa;
  /* 10c963ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c963f1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10c963f8 jmp 0x10c9643d */
  goto L_10c9643d;
L_10c963fa:;
  /* 10c963fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c963fd cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96403 jne 0x10c96411 */
  if (!C.zf) goto L_10c96411;
  /* 10c96405 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96408 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10c9640f jmp 0x10c9643d */
  goto L_10c9643d;
L_10c96411:;
  /* 10c96411 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96414 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9641a jne 0x10c96428 */
  if (!C.zf) goto L_10c96428;
  /* 10c9641c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9641f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10c96426 jmp 0x10c9643d */
  goto L_10c9643d;
L_10c96428:;
  /* 10c96428 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9642b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96431 jne 0x10c9643d */
  if (!C.zf) goto L_10c9643d;
  /* 10c96433 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96436 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10c9643d:;
  /* 10c9643d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96440 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10c96443 push edx */
  push32((uint32_t)(EDX));
  /* 10c96444 push 8 */
  push32((uint32_t)(0x8u));
  /* 10c96446 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c96449u);
  /* 10c96449 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9644c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9644f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96452 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10c96455 jmp 0x10c9646e */
  goto L_10c9646e;
L_10c96457:;
  /* 10c96457 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9645a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10c96461 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c96464 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10c96467 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96468 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c9646bu);
  /* 10c9646b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c9646e:;
  /* 10c9646e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96471 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10c96474 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10c96477 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10c9647a:;
  /* 10c9647a mov esp, ebp */
  ESP = (EBP);
  /* 10c9647c pop ebp */
  EBP = (pop32());
  /* 10c9647d ret  */
  ESPCHK(0x10c962c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006480 @ 0x10c96480 (89 bytes, 35 insns) */
void f_10c96480(void) {
  FTRACE(0x10c96480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96480 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96481 mov ebp, esp */
  EBP = (ESP);
  /* 10c96483 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96484 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96487 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10c9648a:;
  /* 10c9648a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9648d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10c9648f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96492 je 0x10c964b2 */
  if (C.zf) goto L_10c964b2;
  /* 10c96494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96497 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9649a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9649d mov ecx, dword ptr [0x10cbcc84] */
  ECX = (r32((uint32_t)(0x10cbcc84)));
  /* 10c964a3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c964a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c964a9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c964ab cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c964ae jae 0x10c964b2 */
  if (!C.cf) goto L_10c964b2;
  /* 10c964b0 jmp 0x10c9648a */
  goto L_10c9648a;
L_10c964b2:;
  /* 10c964b2 mov eax, dword ptr [0x10cbcc84] */
  EAX = (r32((uint32_t)(0x10cbcc84)));
  /* 10c964b7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10c964ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c964bd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c964bf cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c964c2 jae 0x10c964ce */
  if (!C.cf) goto L_10c964ce;
  /* 10c964c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c964c7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10c964c9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c964cc je 0x10c964d2 */
  if (C.zf) goto L_10c964d2;
L_10c964ce:;
  /* 10c964ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c964d0 jmp 0x10c964d5 */
  goto L_10c964d5;
L_10c964d2:;
  /* 10c964d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10c964d5:;
  /* 10c964d5 mov esp, ebp */
  ESP = (EBP);
  /* 10c964d7 pop ebp */
  EBP = (pop32());
  /* 10c964d8 ret  */
  ESPCHK(0x10c96480u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10c964e0 (48 bytes, 17 insns) */
void f_10c964e0(void) {
  FTRACE(0x10c964e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c964e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c964e1 mov ebp, esp */
  EBP = (ESP);
  /* 10c964e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c964e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c964e6 call 0x10c961e0 */
  push32(0x10c964ebu); f_10c961e0();
  /* 10c964eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c964ee mov eax, dword ptr [0x10cbe5ec] */
  EAX = (r32((uint32_t)(0x10cbe5ec)));
  /* 10c964f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c964f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c964f9 mov dword ptr [0x10cbe5ec], ecx */
  w32((uint32_t)(0x10cbe5ec), (ECX));
  /* 10c964ff push 9 */
  push32((uint32_t)(0x9u));
  /* 10c96501 call 0x10c96280 */
  push32(0x10c96506u); f_10c96280();
  /* 10c96506 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9650c mov esp, ebp */
  ESP = (EBP);
  /* 10c9650e pop ebp */
  EBP = (pop32());
  /* 10c9650f ret  */
  ESPCHK(0x10c964e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006510 @ 0x10c96510 (10 bytes, 5 insns) */
void f_10c96510(void) {
  FTRACE(0x10c96510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96510 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96511 mov ebp, esp */
  EBP = (ESP);
  /* 10c96513 mov eax, dword ptr [0x10cbe5ec] */
  EAX = (r32((uint32_t)(0x10cbe5ec)));
  /* 10c96518 pop ebp */
  EBP = (pop32());
  /* 10c96519 ret  */
  ESPCHK(0x10c96510u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10c96520 (45 bytes, 19 insns) */
void f_10c96520(void) {
  FTRACE(0x10c96520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96520 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96521 mov ebp, esp */
  EBP = (ESP);
  /* 10c96523 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96524 mov eax, dword ptr [0x10cbe5ec] */
  EAX = (r32((uint32_t)(0x10cbe5ec)));
  /* 10c96529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c9652c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96530 je 0x10c96540 */
  if (C.zf) goto L_10c96540;
  /* 10c96532 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96535 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96536 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10c96539u);
  /* 10c96539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9653c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9653e jne 0x10c96544 */
  if (!C.zf) goto L_10c96544;
L_10c96540:;
  /* 10c96540 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96542 jmp 0x10c96549 */
  goto L_10c96549;
L_10c96544:;
  /* 10c96544 mov eax, 1 */
  EAX = (0x1u);
L_10c96549:;
  /* 10c96549 mov esp, ebp */
  ESP = (EBP);
  /* 10c9654b pop ebp */
  EBP = (pop32());
  /* 10c9654c ret  */
  ESPCHK(0x10c96520u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10c96550 (88 bytes, 40 insns) */
void f_10c96550(void) {
  FTRACE(0x10c96550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96550 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10c96554 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c96558 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c9655a je 0x10c965a3 */
  if (C.zf) goto L_10c965a3;
  /* 10c9655c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9655e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10c96562 push edi */
  push32((uint32_t)(EDI));
  /* 10c96563 mov edi, ecx */
  EDI = (ECX);
  /* 10c96565 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96568 jb 0x10c96597 */
  if (C.cf) goto L_10c96597;
  /* 10c9656a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10c9656c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9656f je 0x10c96579 */
  if (C.zf) goto L_10c96579;
  /* 10c96571 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10c96573:;
  /* 10c96573 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c96575 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c96576 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10c96577 jne 0x10c96573 */
  if (!C.zf) goto L_10c96573;
L_10c96579:;
  /* 10c96579 mov ecx, eax */
  ECX = (EAX);
  /* 10c9657b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10c9657e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96580 mov ecx, eax */
  ECX = (EAX);
  /* 10c96582 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10c96585 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96587 mov ecx, edx */
  ECX = (EDX);
  /* 10c96589 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10c9658c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10c9658f je 0x10c96597 */
  if (C.zf) goto L_10c96597;
  /* 10c96591 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10c96593 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10c96595 je 0x10c9659d */
  if (C.zf) goto L_10c9659d;
L_10c96597:;
  /* 10c96597 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10c96599 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10c9659a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10c9659b jne 0x10c96597 */
  if (!C.zf) goto L_10c96597;
L_10c9659d:;
  /* 10c9659d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10c965a1 pop edi */
  EDI = (pop32());
  /* 10c965a2 ret  */
  ESPCHK(0x10c96550u, _esp0);
  ESP += 4; return;
L_10c965a3:;
  /* 10c965a3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10c965a7 ret  */
  ESPCHK(0x10c96550u, _esp0);
  ESP += 4; return;
}

/* FUN_100065b0 @ 0x10c965b0 (23 bytes, 10 insns) */
void f_10c965b0(void) {
  FTRACE(0x10c965b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c965b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c965b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c965b3 mov eax, dword ptr [0x10cbe5e8] */
  EAX = (r32((uint32_t)(0x10cbe5e8)));
  /* 10c965b8 push eax */
  push32((uint32_t)(EAX));
  /* 10c965b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c965bc push ecx */
  push32((uint32_t)(ECX));
  /* 10c965bd call 0x10c965d0 */
  push32(0x10c965c2u); f_10c965d0();
  /* 10c965c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c965c5 pop ebp */
  EBP = (pop32());
  /* 10c965c6 ret  */
  ESPCHK(0x10c965b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10c965d0 (87 bytes, 34 insns) */
void f_10c965d0(void) {
  FTRACE(0x10c965d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c965d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c965d1 mov ebp, esp */
  EBP = (ESP);
  /* 10c965d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c965d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c965d8 jbe 0x10c965de */
  if ((C.cf||C.zf)) goto L_10c965de;
  /* 10c965da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c965dc jmp 0x10c96623 */
  goto L_10c96623;
L_10c965de:;
  /* 10c965de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c965e2 ja 0x10c965f5 */
  if ((!C.cf&&!C.zf)) goto L_10c965f5;
  /* 10c965e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c965e7 push eax */
  push32((uint32_t)(EAX));
  /* 10c965e8 call 0x10c96630 */
  push32(0x10c965edu); f_10c96630();
  /* 10c965ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c965f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c965f3 jmp 0x10c965fc */
  goto L_10c965fc;
L_10c965f5:;
  /* 10c965f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10c965fc:;
  /* 10c965fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96600 jne 0x10c96608 */
  if (!C.zf) goto L_10c96608;
  /* 10c96602 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96606 jne 0x10c9660d */
  if (!C.zf) goto L_10c9660d;
L_10c96608:;
  /* 10c96608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9660b jmp 0x10c96623 */
  goto L_10c96623;
L_10c9660d:;
  /* 10c9660d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96610 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96611 call 0x10c96520 */
  push32(0x10c96616u); f_10c96520();
  /* 10c96616 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9661b jne 0x10c96621 */
  if (!C.zf) goto L_10c96621;
  /* 10c9661d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9661f jmp 0x10c96623 */
  goto L_10c96623;
L_10c96621:;
  /* 10c96621 jmp 0x10c965de */
  goto L_10c965de;
L_10c96623:;
  /* 10c96623 mov esp, ebp */
  ESP = (EBP);
  /* 10c96625 pop ebp */
  EBP = (pop32());
  /* 10c96626 ret  */
  ESPCHK(0x10c965d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x10c96630 (109 bytes, 37 insns) */
void f_10c96630(void) {
  FTRACE(0x10c96630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96630 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96631 mov ebp, esp */
  EBP = (ESP);
  /* 10c96633 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96634 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96637 cmp eax, dword ptr [0x10cbcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9663d ja 0x10c9666d */
  if ((!C.cf&&!C.zf)) goto L_10c9666d;
  /* 10c9663f push 9 */
  push32((uint32_t)(0x9u));
  /* 10c96641 call 0x10c961e0 */
  push32(0x10c96646u); f_10c961e0();
  /* 10c96646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9664c push ecx */
  push32((uint32_t)(ECX));
  /* 10c9664d call 0x10c97170 */
  push32(0x10c96652u); f_10c97170();
  /* 10c96652 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96655 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c96658 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c9665a call 0x10c96280 */
  push32(0x10c9665fu); f_10c96280();
  /* 10c9665f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96662 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96666 je 0x10c9666d */
  if (C.zf) goto L_10c9666d;
  /* 10c96668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9666b jmp 0x10c96699 */
  goto L_10c96699;
L_10c9666d:;
  /* 10c9666d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96671 jne 0x10c9667a */
  if (!C.zf) goto L_10c9667a;
  /* 10c96673 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10c9667a:;
  /* 10c9667a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9667d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96680 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c96683 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10c96686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96689 push eax */
  push32((uint32_t)(EAX));
  /* 10c9668a push 0 */
  push32((uint32_t)(0x0u));
  /* 10c9668c mov ecx, dword ptr [0x10cbfdac] */
  ECX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c96692 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96693 call dword ptr [0x10cc02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d8))), 0x10c96699u);
L_10c96699:;
  /* 10c96699 mov esp, ebp */
  ESP = (EBP);
  /* 10c9669b pop ebp */
  EBP = (pop32());
  /* 10c9669c ret  */
  ESPCHK(0x10c96630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066a0 @ 0x10c966a0 (10 bytes, 5 insns) */
void f_10c966a0(void) {
  FTRACE(0x10c966a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c966a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c966a1 mov ebp, esp */
  EBP = (ESP);
  /* 10c966a3 mov eax, 1 */
  EAX = (0x1u);
  /* 10c966a8 pop ebp */
  EBP = (pop32());
  /* 10c966a9 ret  */
  ESPCHK(0x10c966a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100066b0 @ 0x10c966b0 (173 bytes, 59 insns) */
void f_10c966b0(void) {
  FTRACE(0x10c966b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c966b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c966b1 mov ebp, esp */
  EBP = (ESP);
  /* 10c966b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c966b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c966ba jbe 0x10c966c3 */
  if ((C.cf||C.zf)) goto L_10c966c3;
  /* 10c966bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c966be jmp 0x10c96759 */
  goto L_10c96759;
L_10c966c3:;
  /* 10c966c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c966c5 call 0x10c961e0 */
  push32(0x10c966cau); f_10c961e0();
  /* 10c966ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c966cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c966d0 push eax */
  push32((uint32_t)(EAX));
  /* 10c966d1 call 0x10c96ae0 */
  push32(0x10c966d6u); f_10c96ae0();
  /* 10c966d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c966d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c966dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c966e0 je 0x10c96721 */
  if (C.zf) goto L_10c96721;
  /* 10c966e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10c966e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c966ec cmp ecx, dword ptr [0x10cbcc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10cbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c966f2 ja 0x10c96712 */
  if ((!C.cf&&!C.zf)) goto L_10c96712;
  /* 10c966f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c966f7 push edx */
  push32((uint32_t)(EDX));
  /* 10c966f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c966fb push eax */
  push32((uint32_t)(EAX));
  /* 10c966fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c966ff push ecx */
  push32((uint32_t)(ECX));
  /* 10c96700 call 0x10c979b0 */
  push32(0x10c96705u); f_10c979b0();
  /* 10c96705 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96708 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9670a je 0x10c96712 */
  if (C.zf) goto L_10c96712;
  /* 10c9670c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9670f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10c96712:;
  /* 10c96712 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c96714 call 0x10c96280 */
  push32(0x10c96719u); f_10c96280();
  /* 10c96719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9671c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c9671f jmp 0x10c96759 */
  goto L_10c96759;
L_10c96721:;
  /* 10c96721 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c96723 call 0x10c96280 */
  push32(0x10c96728u); f_10c96280();
  /* 10c96728 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9672b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9672f jne 0x10c96738 */
  if (!C.zf) goto L_10c96738;
  /* 10c96731 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c96738:;
  /* 10c96738 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9673b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9673e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10c96740 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10c96743 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96746 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96747 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9674a push edx */
  push32((uint32_t)(EDX));
  /* 10c9674b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10c9674d mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c96752 push eax */
  push32((uint32_t)(EAX));
  /* 10c96753 call dword ptr [0x10cc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02dc))), 0x10c96759u);
L_10c96759:;
  /* 10c96759 mov esp, ebp */
  ESP = (EBP);
  /* 10c9675b pop ebp */
  EBP = (pop32());
  /* 10c9675c ret  */
  ESPCHK(0x10c966b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10c96760 (490 bytes, 165 insns) */
void f_10c96760(void) {
  FTRACE(0x10c96760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96760 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96761 mov ebp, esp */
  EBP = (ESP);
  /* 10c96763 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96766 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9676a jne 0x10c9677d */
  if (!C.zf) goto L_10c9677d;
  /* 10c9676c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c9676f push eax */
  push32((uint32_t)(EAX));
  /* 10c96770 call 0x10c965b0 */
  push32(0x10c96775u); f_10c965b0();
  /* 10c96775 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96778 jmp 0x10c96946 */
  goto L_10c96946;
L_10c9677d:;
  /* 10c9677d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96781 jne 0x10c96796 */
  if (!C.zf) goto L_10c96796;
  /* 10c96783 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96786 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96787 call 0x10c96950 */
  push32(0x10c9678cu); f_10c96950();
  /* 10c9678c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9678f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c96791 jmp 0x10c96946 */
  goto L_10c96946;
L_10c96796:;
  /* 10c96796 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10c9679d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c967a1 ja 0x10c96919 */
  if ((!C.cf&&!C.zf)) goto L_10c96919;
  /* 10c967a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c967a9 call 0x10c961e0 */
  push32(0x10c967aeu); f_10c961e0();
  /* 10c967ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c967b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c967b4 push edx */
  push32((uint32_t)(EDX));
  /* 10c967b5 call 0x10c96ae0 */
  push32(0x10c967bau); f_10c96ae0();
  /* 10c967ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c967bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10c967c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c967c4 je 0x10c968dc */
  if (C.zf) goto L_10c968dc;
  /* 10c967ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c967cd cmp eax, dword ptr [0x10cbcc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10cbcc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c967d3 ja 0x10c96850 */
  if ((!C.cf&&!C.zf)) goto L_10c96850;
  /* 10c967d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c967d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10c967d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c967dc push edx */
  push32((uint32_t)(EDX));
  /* 10c967dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c967e0 push eax */
  push32((uint32_t)(EAX));
  /* 10c967e1 call 0x10c979b0 */
  push32(0x10c967e6u); f_10c979b0();
  /* 10c967e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c967e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c967eb je 0x10c967f5 */
  if (C.zf) goto L_10c967f5;
  /* 10c967ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c967f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10c967f3 jmp 0x10c96850 */
  goto L_10c96850;
L_10c967f5:;
  /* 10c967f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c967f8 push edx */
  push32((uint32_t)(EDX));
  /* 10c967f9 call 0x10c97170 */
  push32(0x10c967feu); f_10c97170();
  /* 10c967fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96801 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c96804 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96808 je 0x10c96850 */
  if (C.zf) goto L_10c96850;
  /* 10c9680a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9680d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10c96810 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96813 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10c96816 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96819 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9681c jae 0x10c96826 */
  if (!C.cf) goto L_10c96826;
  /* 10c9681e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96821 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10c96824 jmp 0x10c9682c */
  goto L_10c9682c;
L_10c96826:;
  /* 10c96826 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96829 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10c9682c:;
  /* 10c9682c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10c9682f push edx */
  push32((uint32_t)(EDX));
  /* 10c96830 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96833 push eax */
  push32((uint32_t)(EAX));
  /* 10c96834 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c96837 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96838 call 0x10c990c0 */
  push32(0x10c9683du); f_10c990c0();
  /* 10c9683d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96840 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96843 push edx */
  push32((uint32_t)(EDX));
  /* 10c96844 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c96847 push eax */
  push32((uint32_t)(EAX));
  /* 10c96848 call 0x10c96ba0 */
  push32(0x10c9684du); f_10c96ba0();
  /* 10c9684d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c96850:;
  /* 10c96850 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96854 jne 0x10c968d0 */
  if (!C.zf) goto L_10c968d0;
  /* 10c96856 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9685a jne 0x10c96863 */
  if (!C.zf) goto L_10c96863;
  /* 10c9685c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c96863:;
  /* 10c96863 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96866 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96869 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10c9686c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10c9686f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96872 push edx */
  push32((uint32_t)(EDX));
  /* 10c96873 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c96875 mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c9687a push eax */
  push32((uint32_t)(EAX));
  /* 10c9687b call dword ptr [0x10cc02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02d8))), 0x10c96881u);
  /* 10c96881 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10c96884 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96888 je 0x10c968d0 */
  if (C.zf) goto L_10c968d0;
  /* 10c9688a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9688d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10c96890 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10c96893 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10c96896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96899 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9689c jae 0x10c968a6 */
  if (!C.cf) goto L_10c968a6;
  /* 10c9689e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c968a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10c968a4 jmp 0x10c968ac */
  goto L_10c968ac;
L_10c968a6:;
  /* 10c968a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c968a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10c968ac:;
  /* 10c968ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10c968af push eax */
  push32((uint32_t)(EAX));
  /* 10c968b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c968b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c968b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c968b7 push edx */
  push32((uint32_t)(EDX));
  /* 10c968b8 call 0x10c990c0 */
  push32(0x10c968bdu); f_10c990c0();
  /* 10c968bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c968c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c968c3 push eax */
  push32((uint32_t)(EAX));
  /* 10c968c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10c968c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10c968c8 call 0x10c96ba0 */
  push32(0x10c968cdu); f_10c96ba0();
  /* 10c968cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10c968d0:;
  /* 10c968d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c968d2 call 0x10c96280 */
  push32(0x10c968d7u); f_10c96280();
  /* 10c968d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c968da jmp 0x10c96919 */
  goto L_10c96919;
L_10c968dc:;
  /* 10c968dc push 9 */
  push32((uint32_t)(0x9u));
  /* 10c968de call 0x10c96280 */
  push32(0x10c968e3u); f_10c96280();
  /* 10c968e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c968e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c968ea jne 0x10c968f3 */
  if (!C.zf) goto L_10c968f3;
  /* 10c968ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10c968f3:;
  /* 10c968f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c968f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10c968f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10c968fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10c968ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96902 push eax */
  push32((uint32_t)(EAX));
  /* 10c96903 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96906 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c96909 mov edx, dword ptr [0x10cbfdac] */
  EDX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c9690f push edx */
  push32((uint32_t)(EDX));
  /* 10c96910 call dword ptr [0x10cc02dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02dc))), 0x10c96916u);
  /* 10c96916 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10c96919:;
  /* 10c96919 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c9691d jne 0x10c96928 */
  if (!C.zf) goto L_10c96928;
  /* 10c9691f cmp dword ptr [0x10cbe5e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10cbe5e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96926 jne 0x10c9692d */
  if (!C.zf) goto L_10c9692d;
L_10c96928:;
  /* 10c96928 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10c9692b jmp 0x10c96946 */
  goto L_10c96946;
L_10c9692d:;
  /* 10c9692d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10c96930 push eax */
  push32((uint32_t)(EAX));
  /* 10c96931 call 0x10c96520 */
  push32(0x10c96936u); f_10c96520();
  /* 10c96936 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96939 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c9693b jne 0x10c96941 */
  if (!C.zf) goto L_10c96941;
  /* 10c9693d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10c9693f jmp 0x10c96946 */
  goto L_10c96946;
L_10c96941:;
  /* 10c96941 jmp 0x10c96796 */
  goto L_10c96796;
L_10c96946:;
  /* 10c96946 mov esp, ebp */
  ESP = (EBP);
  /* 10c96948 pop ebp */
  EBP = (pop32());
  /* 10c96949 ret  */
  ESPCHK(0x10c96760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006950 @ 0x10c96950 (104 bytes, 38 insns) */
void f_10c96950(void) {
  FTRACE(0x10c96950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96950 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96951 mov ebp, esp */
  EBP = (ESP);
  /* 10c96953 push ecx */
  push32((uint32_t)(ECX));
  /* 10c96954 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96958 jne 0x10c9695c */
  if (!C.zf) goto L_10c9695c;
  /* 10c9695a jmp 0x10c969b4 */
  goto L_10c969b4;
L_10c9695c:;
  /* 10c9695c push 9 */
  push32((uint32_t)(0x9u));
  /* 10c9695e call 0x10c961e0 */
  push32(0x10c96963u); f_10c961e0();
  /* 10c96963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96966 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c96969 push eax */
  push32((uint32_t)(EAX));
  /* 10c9696a call 0x10c96ae0 */
  push32(0x10c9696fu); f_10c96ae0();
  /* 10c9696f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96972 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10c96975 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96979 je 0x10c96997 */
  if (C.zf) goto L_10c96997;
  /* 10c9697b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c9697e push ecx */
  push32((uint32_t)(ECX));
  /* 10c9697f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96982 push edx */
  push32((uint32_t)(EDX));
  /* 10c96983 call 0x10c96ba0 */
  push32(0x10c96988u); f_10c96ba0();
  /* 10c96988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c9698b push 9 */
  push32((uint32_t)(0x9u));
  /* 10c9698d call 0x10c96280 */
  push32(0x10c96992u); f_10c96280();
  /* 10c96992 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c96995 jmp 0x10c969b4 */
  goto L_10c969b4;
L_10c96997:;
  /* 10c96997 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c96999 call 0x10c96280 */
  push32(0x10c9699eu); f_10c96280();
  /* 10c9699e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c969a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10c969a4 push eax */
  push32((uint32_t)(EAX));
  /* 10c969a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c969a7 mov ecx, dword ptr [0x10cbfdac] */
  ECX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c969ad push ecx */
  push32((uint32_t)(ECX));
  /* 10c969ae call dword ptr [0x10cc02b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc02b8))), 0x10c969b4u);
L_10c969b4:;
  /* 10c969b4 mov esp, ebp */
  ESP = (EBP);
  /* 10c969b6 pop ebp */
  EBP = (pop32());
  /* 10c969b7 ret  */
  ESPCHK(0x10c96950u, _esp0);
  ESP += 4; return;
}

/* FUN_100069c0 @ 0x10c969c0 (116 bytes, 34 insns) */
void f_10c969c0(void) {
  FTRACE(0x10c969c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c969c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10c969c1 mov ebp, esp */
  EBP = (ESP);
  /* 10c969c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10c969c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10c969cb push 9 */
  push32((uint32_t)(0x9u));
  /* 10c969cd call 0x10c961e0 */
  push32(0x10c969d2u); f_10c961e0();
  /* 10c969d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c969d5 call 0x10c980d0 */
  push32(0x10c969dau); f_10c980d0();
  /* 10c969da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c969dc jge 0x10c969e5 */
  if ((C.sf==C.of)) goto L_10c969e5;
  /* 10c969de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c969e5:;
  /* 10c969e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10c969e7 call 0x10c96280 */
  push32(0x10c969ecu); f_10c96280();
  /* 10c969ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10c969ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10c969f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10c969f3 mov eax, dword ptr [0x10cbfdac] */
  EAX = (r32((uint32_t)(0x10cbfdac)));
  /* 10c969f8 push eax */
  push32((uint32_t)(EAX));
  /* 10c969f9 call dword ptr [0x10cc0298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0298))), 0x10c969ffu);
  /* 10c969ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10c96a01 jne 0x10c96a2d */
  if (!C.zf) goto L_10c96a2d;
  /* 10c96a03 call dword ptr [0x10cc0278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10cc0278))), 0x10c96a09u);
  /* 10c96a09 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10c96a0c jne 0x10c96a26 */
  if (!C.zf) goto L_10c96a26;
  /* 10c96a0e call 0x10c9a6c0 */
  push32(0x10c96a13u); f_10c9a6c0();
  /* 10c96a13 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10c96a19 call 0x10c9a6b0 */
  push32(0x10c96a1eu); f_10c9a6b0();
  /* 10c96a1e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10c96a24 jmp 0x10c96a2d */
  goto L_10c96a2d;
L_10c96a26:;
  /* 10c96a26 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10c96a2d:;
  /* 10c96a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10c96a30 mov esp, ebp */
  ESP = (EBP);
  /* 10c96a32 pop ebp */
  EBP = (pop32());
  /* 10c96a33 ret  */
  ESPCHK(0x10c969c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x10c96a40 (10 bytes, 5 insns) */
void f_10c96a40(void) {
  FTRACE(0x10c96a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10c96a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10c96a41 mov ebp, esp */
  EBP = (ESP);
  /* 10c96a43 call 0x10c969c0 */
  push32(0x10c96a48u); f_10c969c0();
  /* 10c96a48 pop ebp */
  EBP = (pop32());
  /* 10c96a49 ret  */
  ESPCHK(0x10c96a40u, _esp0);
  ESP += 4; return;
}

