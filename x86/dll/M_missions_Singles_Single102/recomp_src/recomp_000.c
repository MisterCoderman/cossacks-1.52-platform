#include "recomp.h"

/* OnInit @ 0x10f51005 (5 bytes, 1 insns) */
void f_10f51005(void) {
  FTRACE(0x10f51005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f51005 jmp 0x10f51090 */
  f_10f51090(); return;
}

/* thunk_FUN_10001030 @ 0x10f5100a (5 bytes, 1 insns) */
void f_10f5100a(void) {
  FTRACE(0x10f5100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5100a jmp 0x10f51030 */
  f_10f51030(); return;
}

/* ProcessScenary @ 0x10f5100f (5 bytes, 1 insns) */
void f_10f5100f(void) {
  FTRACE(0x10f5100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f5100f jmp 0x10f519c0 */
  f_10f519c0(); return;
}

/* FUN_10001030 @ 0x10f51030 (67 bytes, 26 insns) */
void f_10f51030(void) {
  FTRACE(0x10f51030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f51030 push ebp */
  push32((uint32_t)(EBP));
  /* 10f51031 mov ebp, esp */
  EBP = (ESP);
  /* 10f51033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51036 push ebx */
  push32((uint32_t)(EBX));
  /* 10f51037 push esi */
  push32((uint32_t)(ESI));
  /* 10f51038 push edi */
  push32((uint32_t)(EDI));
  /* 10f51039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10f5103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10f51041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f51046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f51048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51052 je 0x10f51056 */
  if (C.zf) goto L_10f51056;
  /* 10f51054 jmp 0x10f5105b */
  goto L_10f5105b;
L_10f51056:;
  /* 10f51056 call 0x10f51005 */
  push32(0x10f5105bu); f_10f51005();
L_10f5105b:;
  /* 10f5105b mov eax, 1 */
  EAX = (0x1u);
  /* 10f51060 pop edi */
  EDI = (pop32());
  /* 10f51061 pop esi */
  ESI = (pop32());
  /* 10f51062 pop ebx */
  EBX = (pop32());
  /* 10f51063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51068 call 0x10f53780 */
  push32(0x10f5106du); f_10f53780();
  /* 10f5106d mov esp, ebp */
  ESP = (EBP);
  /* 10f5106f pop ebp */
  EBP = (pop32());
  /* 10f51070 ret 0xc */
  ESPCHK(0x10f51030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10f51090 (1881 bytes, 504 insns) */
void f_10f51090(void) {
  FTRACE(0x10f51090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f51090 push ebp */
  push32((uint32_t)(EBP));
  /* 10f51091 mov ebp, esp */
  EBP = (ESP);
  /* 10f51093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51096 push ebx */
  push32((uint32_t)(EBX));
  /* 10f51097 push esi */
  push32((uint32_t)(ESI));
  /* 10f51098 push edi */
  push32((uint32_t)(EDI));
  /* 10f51099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10f5109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10f510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f510a8 mov esi, esp */
  ESI = (ESP);
  /* 10f510aa push 0x10f7b184 */
  push32((uint32_t)(0x10f7b184u));
  /* 10f510af push 0x10f80440 */
  push32((uint32_t)(0x10f80440u));
  /* 10f510b4 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f510bau);
  /* 10f510ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f510bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f510bf call 0x10f53780 */
  push32(0x10f510c4u); f_10f53780();
  /* 10f510c4 mov esi, esp */
  ESI = (ESP);
  /* 10f510c6 push 0x10f7b180 */
  push32((uint32_t)(0x10f7b180u));
  /* 10f510cb push 0x10f80448 */
  push32((uint32_t)(0x10f80448u));
  /* 10f510d0 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f510d6u);
  /* 10f510d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f510d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f510db call 0x10f53780 */
  push32(0x10f510e0u); f_10f53780();
  /* 10f510e0 mov esi, esp */
  ESI = (ESP);
  /* 10f510e2 push 0x10f7b17c */
  push32((uint32_t)(0x10f7b17cu));
  /* 10f510e7 push 0x10f80450 */
  push32((uint32_t)(0x10f80450u));
  /* 10f510ec call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f510f2u);
  /* 10f510f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f510f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f510f7 call 0x10f53780 */
  push32(0x10f510fcu); f_10f53780();
  /* 10f510fc mov esi, esp */
  ESI = (ESP);
  /* 10f510fe push 0x10f7b178 */
  push32((uint32_t)(0x10f7b178u));
  /* 10f51103 push 0x10f80458 */
  push32((uint32_t)(0x10f80458u));
  /* 10f51108 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f5110eu);
  /* 10f5110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51113 call 0x10f53780 */
  push32(0x10f51118u); f_10f53780();
  /* 10f51118 mov esi, esp */
  ESI = (ESP);
  /* 10f5111a push 0x10f7b174 */
  push32((uint32_t)(0x10f7b174u));
  /* 10f5111f push 0x10f80460 */
  push32((uint32_t)(0x10f80460u));
  /* 10f51124 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f5112au);
  /* 10f5112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5112f call 0x10f53780 */
  push32(0x10f51134u); f_10f53780();
  /* 10f51134 mov esi, esp */
  ESI = (ESP);
  /* 10f51136 push 0x10f7b170 */
  push32((uint32_t)(0x10f7b170u));
  /* 10f5113b push 0x10f80468 */
  push32((uint32_t)(0x10f80468u));
  /* 10f51140 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f51146u);
  /* 10f51146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5114b call 0x10f53780 */
  push32(0x10f51150u); f_10f53780();
  /* 10f51150 mov esi, esp */
  ESI = (ESP);
  /* 10f51152 push 0x10f7b16c */
  push32((uint32_t)(0x10f7b16cu));
  /* 10f51157 push 0x10f80470 */
  push32((uint32_t)(0x10f80470u));
  /* 10f5115c call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f51162u);
  /* 10f51162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51167 call 0x10f53780 */
  push32(0x10f5116cu); f_10f53780();
  /* 10f5116c mov esi, esp */
  ESI = (ESP);
  /* 10f5116e push 0x10f7b168 */
  push32((uint32_t)(0x10f7b168u));
  /* 10f51173 push 0x10f80478 */
  push32((uint32_t)(0x10f80478u));
  /* 10f51178 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f5117eu);
  /* 10f5117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51183 call 0x10f53780 */
  push32(0x10f51188u); f_10f53780();
  /* 10f51188 mov esi, esp */
  ESI = (ESP);
  /* 10f5118a push 0x10f7b164 */
  push32((uint32_t)(0x10f7b164u));
  /* 10f5118f push 0x10f80480 */
  push32((uint32_t)(0x10f80480u));
  /* 10f51194 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f5119au);
  /* 10f5119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5119f call 0x10f53780 */
  push32(0x10f511a4u); f_10f53780();
  /* 10f511a4 mov esi, esp */
  ESI = (ESP);
  /* 10f511a6 push 0x10f7b160 */
  push32((uint32_t)(0x10f7b160u));
  /* 10f511ab push 0x10f80498 */
  push32((uint32_t)(0x10f80498u));
  /* 10f511b0 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f511b6u);
  /* 10f511b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f511b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f511bb call 0x10f53780 */
  push32(0x10f511c0u); f_10f53780();
  /* 10f511c0 mov esi, esp */
  ESI = (ESP);
  /* 10f511c2 push 0x10f7b15c */
  push32((uint32_t)(0x10f7b15cu));
  /* 10f511c7 push 0x10f804a8 */
  push32((uint32_t)(0x10f804a8u));
  /* 10f511cc call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f511d2u);
  /* 10f511d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f511d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f511d7 call 0x10f53780 */
  push32(0x10f511dcu); f_10f53780();
  /* 10f511dc mov esi, esp */
  ESI = (ESP);
  /* 10f511de push 0x10f7b158 */
  push32((uint32_t)(0x10f7b158u));
  /* 10f511e3 push 0x10f804b0 */
  push32((uint32_t)(0x10f804b0u));
  /* 10f511e8 call dword ptr [0x10f834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a8))), 0x10f511eeu);
  /* 10f511ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f511f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f511f3 call 0x10f53780 */
  push32(0x10f511f8u); f_10f53780();
  /* 10f511f8 mov esi, esp */
  ESI = (ESP);
  /* 10f511fa push 0x10f7b154 */
  push32((uint32_t)(0x10f7b154u));
  /* 10f511ff push 0x10f804c0 */
  push32((uint32_t)(0x10f804c0u));
  /* 10f51204 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f5120au);
  /* 10f5120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5120f call 0x10f53780 */
  push32(0x10f51214u); f_10f53780();
  /* 10f51214 mov esi, esp */
  ESI = (ESP);
  /* 10f51216 push 0x10f7b150 */
  push32((uint32_t)(0x10f7b150u));
  /* 10f5121b push 0x10f804c8 */
  push32((uint32_t)(0x10f804c8u));
  /* 10f51220 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f51226u);
  /* 10f51226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5122b call 0x10f53780 */
  push32(0x10f51230u); f_10f53780();
  /* 10f51230 mov esi, esp */
  ESI = (ESP);
  /* 10f51232 push 0x10f7b14c */
  push32((uint32_t)(0x10f7b14cu));
  /* 10f51237 push 0x10f804d0 */
  push32((uint32_t)(0x10f804d0u));
  /* 10f5123c call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f51242u);
  /* 10f51242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51247 call 0x10f53780 */
  push32(0x10f5124cu); f_10f53780();
  /* 10f5124c mov esi, esp */
  ESI = (ESP);
  /* 10f5124e push 0x10f7b148 */
  push32((uint32_t)(0x10f7b148u));
  /* 10f51253 push 0x10f804d8 */
  push32((uint32_t)(0x10f804d8u));
  /* 10f51258 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f5125eu);
  /* 10f5125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51263 call 0x10f53780 */
  push32(0x10f51268u); f_10f53780();
  /* 10f51268 mov esi, esp */
  ESI = (ESP);
  /* 10f5126a push 0x10f7b144 */
  push32((uint32_t)(0x10f7b144u));
  /* 10f5126f push 0x10f804e0 */
  push32((uint32_t)(0x10f804e0u));
  /* 10f51274 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f5127au);
  /* 10f5127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5127f call 0x10f53780 */
  push32(0x10f51284u); f_10f53780();
  /* 10f51284 mov esi, esp */
  ESI = (ESP);
  /* 10f51286 push 0x10f7b140 */
  push32((uint32_t)(0x10f7b140u));
  /* 10f5128b push 0x10f804e8 */
  push32((uint32_t)(0x10f804e8u));
  /* 10f51290 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f51296u);
  /* 10f51296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5129b call 0x10f53780 */
  push32(0x10f512a0u); f_10f53780();
  /* 10f512a0 mov esi, esp */
  ESI = (ESP);
  /* 10f512a2 push 0x10f7b13c */
  push32((uint32_t)(0x10f7b13cu));
  /* 10f512a7 push 0x10f80508 */
  push32((uint32_t)(0x10f80508u));
  /* 10f512ac call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f512b2u);
  /* 10f512b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f512b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f512b7 call 0x10f53780 */
  push32(0x10f512bcu); f_10f53780();
  /* 10f512bc mov esi, esp */
  ESI = (ESP);
  /* 10f512be push 0x10f7b138 */
  push32((uint32_t)(0x10f7b138u));
  /* 10f512c3 push 0x10f80510 */
  push32((uint32_t)(0x10f80510u));
  /* 10f512c8 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f512ceu);
  /* 10f512ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f512d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f512d3 call 0x10f53780 */
  push32(0x10f512d8u); f_10f53780();
  /* 10f512d8 mov esi, esp */
  ESI = (ESP);
  /* 10f512da push 0x10f7b134 */
  push32((uint32_t)(0x10f7b134u));
  /* 10f512df push 0x10f80518 */
  push32((uint32_t)(0x10f80518u));
  /* 10f512e4 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f512eau);
  /* 10f512ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f512ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f512ef call 0x10f53780 */
  push32(0x10f512f4u); f_10f53780();
  /* 10f512f4 mov esi, esp */
  ESI = (ESP);
  /* 10f512f6 push 0x10f7b130 */
  push32((uint32_t)(0x10f7b130u));
  /* 10f512fb push 0x10f804f0 */
  push32((uint32_t)(0x10f804f0u));
  /* 10f51300 call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f51306u);
  /* 10f51306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5130b call 0x10f53780 */
  push32(0x10f51310u); f_10f53780();
  /* 10f51310 mov esi, esp */
  ESI = (ESP);
  /* 10f51312 push 0x10f7b12c */
  push32((uint32_t)(0x10f7b12cu));
  /* 10f51317 push 0x10f804f8 */
  push32((uint32_t)(0x10f804f8u));
  /* 10f5131c call dword ptr [0x10f834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a0))), 0x10f51322u);
  /* 10f51322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51327 call 0x10f53780 */
  push32(0x10f5132cu); f_10f53780();
  /* 10f5132c mov esi, esp */
  ESI = (ESP);
  /* 10f5132e push 0x10f7b114 */
  push32((uint32_t)(0x10f7b114u));
  /* 10f51333 push 0x10f803f0 */
  push32((uint32_t)(0x10f803f0u));
  /* 10f51338 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f5133eu);
  /* 10f5133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51343 call 0x10f53780 */
  push32(0x10f51348u); f_10f53780();
  /* 10f51348 mov esi, esp */
  ESI = (ESP);
  /* 10f5134a push 0x10f7b100 */
  push32((uint32_t)(0x10f7b100u));
  /* 10f5134f push 0x10f803f8 */
  push32((uint32_t)(0x10f803f8u));
  /* 10f51354 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f5135au);
  /* 10f5135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5135f call 0x10f53780 */
  push32(0x10f51364u); f_10f53780();
  /* 10f51364 mov esi, esp */
  ESI = (ESP);
  /* 10f51366 push 0x10f7b0f0 */
  push32((uint32_t)(0x10f7b0f0u));
  /* 10f5136b push 0x10f80400 */
  push32((uint32_t)(0x10f80400u));
  /* 10f51370 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f51376u);
  /* 10f51376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5137b call 0x10f53780 */
  push32(0x10f51380u); f_10f53780();
  /* 10f51380 mov esi, esp */
  ESI = (ESP);
  /* 10f51382 push 0x10f7b0e0 */
  push32((uint32_t)(0x10f7b0e0u));
  /* 10f51387 push 0x10f80408 */
  push32((uint32_t)(0x10f80408u));
  /* 10f5138c call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f51392u);
  /* 10f51392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51397 call 0x10f53780 */
  push32(0x10f5139cu); f_10f53780();
  /* 10f5139c mov esi, esp */
  ESI = (ESP);
  /* 10f5139e push 0x10f7b0cc */
  push32((uint32_t)(0x10f7b0ccu));
  /* 10f513a3 push 0x10f80410 */
  push32((uint32_t)(0x10f80410u));
  /* 10f513a8 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f513aeu);
  /* 10f513ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f513b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f513b3 call 0x10f53780 */
  push32(0x10f513b8u); f_10f53780();
  /* 10f513b8 mov esi, esp */
  ESI = (ESP);
  /* 10f513ba push 0x10f7b0b4 */
  push32((uint32_t)(0x10f7b0b4u));
  /* 10f513bf push 0x10f80418 */
  push32((uint32_t)(0x10f80418u));
  /* 10f513c4 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f513cau);
  /* 10f513ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f513cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f513cf call 0x10f53780 */
  push32(0x10f513d4u); f_10f53780();
  /* 10f513d4 mov esi, esp */
  ESI = (ESP);
  /* 10f513d6 push 0x10f7b0a4 */
  push32((uint32_t)(0x10f7b0a4u));
  /* 10f513db push 0x10f80420 */
  push32((uint32_t)(0x10f80420u));
  /* 10f513e0 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f513e6u);
  /* 10f513e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f513e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f513eb call 0x10f53780 */
  push32(0x10f513f0u); f_10f53780();
  /* 10f513f0 mov esi, esp */
  ESI = (ESP);
  /* 10f513f2 push 0x10f7b08c */
  push32((uint32_t)(0x10f7b08cu));
  /* 10f513f7 push 0x10f80428 */
  push32((uint32_t)(0x10f80428u));
  /* 10f513fc call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f51402u);
  /* 10f51402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51407 call 0x10f53780 */
  push32(0x10f5140cu); f_10f53780();
  /* 10f5140c mov esi, esp */
  ESI = (ESP);
  /* 10f5140e push 0x10f7b080 */
  push32((uint32_t)(0x10f7b080u));
  /* 10f51413 push 0x10f80430 */
  push32((uint32_t)(0x10f80430u));
  /* 10f51418 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f5141eu);
  /* 10f5141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51423 call 0x10f53780 */
  push32(0x10f51428u); f_10f53780();
  /* 10f51428 mov esi, esp */
  ESI = (ESP);
  /* 10f5142a push 0x10f7b074 */
  push32((uint32_t)(0x10f7b074u));
  /* 10f5142f push 0x10f803e0 */
  push32((uint32_t)(0x10f803e0u));
  /* 10f51434 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f5143au);
  /* 10f5143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5143f call 0x10f53780 */
  push32(0x10f51444u); f_10f53780();
  /* 10f51444 mov esi, esp */
  ESI = (ESP);
  /* 10f51446 push 0x10f7b060 */
  push32((uint32_t)(0x10f7b060u));
  /* 10f5144b push 0x10f803e8 */
  push32((uint32_t)(0x10f803e8u));
  /* 10f51450 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f51456u);
  /* 10f51456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5145b call 0x10f53780 */
  push32(0x10f51460u); f_10f53780();
  /* 10f51460 mov esi, esp */
  ESI = (ESP);
  /* 10f51462 push 0x10f7b050 */
  push32((uint32_t)(0x10f7b050u));
  /* 10f51467 push 0x10f804a0 */
  push32((uint32_t)(0x10f804a0u));
  /* 10f5146c call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f51472u);
  /* 10f51472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51477 call 0x10f53780 */
  push32(0x10f5147cu); f_10f53780();
  /* 10f5147c mov esi, esp */
  ESI = (ESP);
  /* 10f5147e push 0x10f7b038 */
  push32((uint32_t)(0x10f7b038u));
  /* 10f51483 push 0x10f804b8 */
  push32((uint32_t)(0x10f804b8u));
  /* 10f51488 call dword ptr [0x10f834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b0))), 0x10f5148eu);
  /* 10f5148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51493 call 0x10f53780 */
  push32(0x10f51498u); f_10f53780();
  /* 10f51498 mov esi, esp */
  ESI = (ESP);
  /* 10f5149a push 8 */
  push32((uint32_t)(0x8u));
  /* 10f5149c push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f514a1 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f514a7u);
  /* 10f514a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f514aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f514ac call 0x10f53780 */
  push32(0x10f514b1u); f_10f53780();
  /* 10f514b1 mov esi, esp */
  ESI = (ESP);
  /* 10f514b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f514b5 push 0x10f80528 */
  push32((uint32_t)(0x10f80528u));
  /* 10f514ba call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f514c0u);
  /* 10f514c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f514c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f514c5 call 0x10f53780 */
  push32(0x10f514cau); f_10f53780();
  /* 10f514ca mov esi, esp */
  ESI = (ESP);
  /* 10f514cc push 8 */
  push32((uint32_t)(0x8u));
  /* 10f514ce push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f514d3 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f514d9u);
  /* 10f514d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f514dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f514de call 0x10f53780 */
  push32(0x10f514e3u); f_10f53780();
  /* 10f514e3 mov esi, esp */
  ESI = (ESP);
  /* 10f514e5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f514e7 push 0x10f80538 */
  push32((uint32_t)(0x10f80538u));
  /* 10f514ec call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f514f2u);
  /* 10f514f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f514f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f514f7 call 0x10f53780 */
  push32(0x10f514fcu); f_10f53780();
  /* 10f514fc mov esi, esp */
  ESI = (ESP);
  /* 10f514fe push 8 */
  push32((uint32_t)(0x8u));
  /* 10f51500 push 0x10f80540 */
  push32((uint32_t)(0x10f80540u));
  /* 10f51505 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f5150bu);
  /* 10f5150b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5150e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51510 call 0x10f53780 */
  push32(0x10f51515u); f_10f53780();
  /* 10f51515 mov esi, esp */
  ESI = (ESP);
  /* 10f51517 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f51519 push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f5151e call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f51524u);
  /* 10f51524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51529 call 0x10f53780 */
  push32(0x10f5152eu); f_10f53780();
  /* 10f5152e mov esi, esp */
  ESI = (ESP);
  /* 10f51530 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f51532 push 0x10f80550 */
  push32((uint32_t)(0x10f80550u));
  /* 10f51537 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f5153du);
  /* 10f5153d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51542 call 0x10f53780 */
  push32(0x10f51547u); f_10f53780();
  /* 10f51547 mov esi, esp */
  ESI = (ESP);
  /* 10f51549 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f5154b push 0x10f80500 */
  push32((uint32_t)(0x10f80500u));
  /* 10f51550 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f51556u);
  /* 10f51556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51559 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5155b call 0x10f53780 */
  push32(0x10f51560u); f_10f53780();
  /* 10f51560 mov esi, esp */
  ESI = (ESP);
  /* 10f51562 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f51564 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f51569 call dword ptr [0x10f834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b4))), 0x10f5156fu);
  /* 10f5156f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51574 call 0x10f53780 */
  push32(0x10f51579u); f_10f53780();
  /* 10f51579 mov esi, esp */
  ESI = (ESP);
  /* 10f5157b push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f51580 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f51586u);
  /* 10f51586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5158b call 0x10f53780 */
  push32(0x10f51590u); f_10f53780();
  /* 10f51590 mov esi, esp */
  ESI = (ESP);
  /* 10f51592 push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f51597 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f5159du);
  /* 10f5159d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f515a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f515a2 call 0x10f53780 */
  push32(0x10f515a7u); f_10f53780();
  /* 10f515a7 mov esi, esp */
  ESI = (ESP);
  /* 10f515a9 push 0x10f80528 */
  push32((uint32_t)(0x10f80528u));
  /* 10f515ae call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f515b4u);
  /* 10f515b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f515b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f515b9 call 0x10f53780 */
  push32(0x10f515beu); f_10f53780();
  /* 10f515be mov esi, esp */
  ESI = (ESP);
  /* 10f515c0 push 0x10f80538 */
  push32((uint32_t)(0x10f80538u));
  /* 10f515c5 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f515cbu);
  /* 10f515cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f515ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f515d0 call 0x10f53780 */
  push32(0x10f515d5u); f_10f53780();
  /* 10f515d5 mov esi, esp */
  ESI = (ESP);
  /* 10f515d7 push 0x10f80540 */
  push32((uint32_t)(0x10f80540u));
  /* 10f515dc call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f515e2u);
  /* 10f515e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f515e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f515e7 call 0x10f53780 */
  push32(0x10f515ecu); f_10f53780();
  /* 10f515ec mov esi, esp */
  ESI = (ESP);
  /* 10f515ee push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f515f3 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f515f9u);
  /* 10f515f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f515fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f515fe call 0x10f53780 */
  push32(0x10f51603u); f_10f53780();
  /* 10f51603 mov esi, esp */
  ESI = (ESP);
  /* 10f51605 push 0x10f80550 */
  push32((uint32_t)(0x10f80550u));
  /* 10f5160a call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f51610u);
  /* 10f51610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51615 call 0x10f53780 */
  push32(0x10f5161au); f_10f53780();
  /* 10f5161a mov esi, esp */
  ESI = (ESP);
  /* 10f5161c push 0x10f80500 */
  push32((uint32_t)(0x10f80500u));
  /* 10f51621 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f51627u);
  /* 10f51627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5162a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5162c call 0x10f53780 */
  push32(0x10f51631u); f_10f53780();
  /* 10f51631 mov esi, esp */
  ESI = (ESP);
  /* 10f51633 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f51638 call dword ptr [0x10f834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834ac))), 0x10f5163eu);
  /* 10f5163e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51643 call 0x10f53780 */
  push32(0x10f51648u); f_10f53780();
  /* 10f51648 mov esi, esp */
  ESI = (ESP);
  /* 10f5164a push 0x10f7b030 */
  push32((uint32_t)(0x10f7b030u));
  /* 10f5164f push 0x10f80490 */
  push32((uint32_t)(0x10f80490u));
  /* 10f51654 call dword ptr [0x10f834bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834bc))), 0x10f5165au);
  /* 10f5165a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5165d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5165f call 0x10f53780 */
  push32(0x10f51664u); f_10f53780();
  /* 10f51664 mov esi, esp */
  ESI = (ESP);
  /* 10f51666 push 0x10f7b028 */
  push32((uint32_t)(0x10f7b028u));
  /* 10f5166b push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5166d call dword ptr [0x10f834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834c0))), 0x10f51673u);
  /* 10f51673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51678 call 0x10f53780 */
  push32(0x10f5167du); f_10f53780();
  /* 10f5167d mov esi, esp */
  ESI = (ESP);
  /* 10f5167f push 0x10f7b028 */
  push32((uint32_t)(0x10f7b028u));
  /* 10f51684 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51686 call dword ptr [0x10f834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834c0))), 0x10f5168cu);
  /* 10f5168c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5168f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51691 call 0x10f53780 */
  push32(0x10f51696u); f_10f53780();
  /* 10f51696 mov esi, esp */
  ESI = (ESP);
  /* 10f51698 push 0x10f7b01c */
  push32((uint32_t)(0x10f7b01cu));
  /* 10f5169d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5169f call dword ptr [0x10f834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834c0))), 0x10f516a5u);
  /* 10f516a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f516a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f516aa call 0x10f53780 */
  push32(0x10f516afu); f_10f53780();
  /* 10f516af mov esi, esp */
  ESI = (ESP);
  /* 10f516b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516b3 push 0x10f803f0 */
  push32((uint32_t)(0x10f803f0u));
  /* 10f516b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516ba call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f516c0u);
  /* 10f516c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f516c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f516c5 call 0x10f53780 */
  push32(0x10f516cau); f_10f53780();
  /* 10f516ca mov esi, esp */
  ESI = (ESP);
  /* 10f516cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516ce push 0x10f803f8 */
  push32((uint32_t)(0x10f803f8u));
  /* 10f516d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516d5 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f516dbu);
  /* 10f516db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f516de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f516e0 call 0x10f53780 */
  push32(0x10f516e5u); f_10f53780();
  /* 10f516e5 mov esi, esp */
  ESI = (ESP);
  /* 10f516e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516e9 push 0x10f80400 */
  push32((uint32_t)(0x10f80400u));
  /* 10f516ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f516f0 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f516f6u);
  /* 10f516f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f516f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f516fb call 0x10f53780 */
  push32(0x10f51700u); f_10f53780();
  /* 10f51700 mov esi, esp */
  ESI = (ESP);
  /* 10f51702 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51704 push 0x10f80408 */
  push32((uint32_t)(0x10f80408u));
  /* 10f51709 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5170b call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f51711u);
  /* 10f51711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51714 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51716 call 0x10f53780 */
  push32(0x10f5171bu); f_10f53780();
  /* 10f5171b mov esi, esp */
  ESI = (ESP);
  /* 10f5171d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5171f push 0x10f80410 */
  push32((uint32_t)(0x10f80410u));
  /* 10f51724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51726 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f5172cu);
  /* 10f5172c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5172f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51731 call 0x10f53780 */
  push32(0x10f51736u); f_10f53780();
  /* 10f51736 mov esi, esp */
  ESI = (ESP);
  /* 10f51738 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5173a push 0x10f80418 */
  push32((uint32_t)(0x10f80418u));
  /* 10f5173f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51741 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f51747u);
  /* 10f51747 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5174a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5174c call 0x10f53780 */
  push32(0x10f51751u); f_10f53780();
  /* 10f51751 mov esi, esp */
  ESI = (ESP);
  /* 10f51753 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51755 push 0x10f80420 */
  push32((uint32_t)(0x10f80420u));
  /* 10f5175a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5175c call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f51762u);
  /* 10f51762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51767 call 0x10f53780 */
  push32(0x10f5176cu); f_10f53780();
  /* 10f5176c mov esi, esp */
  ESI = (ESP);
  /* 10f5176e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51770 push 0x10f80428 */
  push32((uint32_t)(0x10f80428u));
  /* 10f51775 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51777 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f5177du);
  /* 10f5177d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51780 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51782 call 0x10f53780 */
  push32(0x10f51787u); f_10f53780();
  /* 10f51787 mov esi, esp */
  ESI = (ESP);
  /* 10f51789 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5178b push 0x10f80430 */
  push32((uint32_t)(0x10f80430u));
  /* 10f51790 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51792 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f51798u);
  /* 10f51798 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5179b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5179d call 0x10f53780 */
  push32(0x10f517a2u); f_10f53780();
  /* 10f517a2 mov esi, esp */
  ESI = (ESP);
  /* 10f517a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f517a6 push 0x10f803e0 */
  push32((uint32_t)(0x10f803e0u));
  /* 10f517ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f517ad call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f517b3u);
  /* 10f517b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f517b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f517b8 call 0x10f53780 */
  push32(0x10f517bdu); f_10f53780();
  /* 10f517bd mov esi, esp */
  ESI = (ESP);
  /* 10f517bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f517c1 push 0x10f803e8 */
  push32((uint32_t)(0x10f803e8u));
  /* 10f517c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f517c8 call dword ptr [0x10f834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834b8))), 0x10f517ceu);
  /* 10f517ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f517d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f517d3 call 0x10f53780 */
  push32(0x10f517d8u); f_10f53780();
  /* 10f517d8 pop edi */
  EDI = (pop32());
  /* 10f517d9 pop esi */
  ESI = (pop32());
  /* 10f517da pop ebx */
  EBX = (pop32());
  /* 10f517db add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f517de cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f517e0 call 0x10f53780 */
  push32(0x10f517e5u); f_10f53780();
  /* 10f517e5 mov esp, ebp */
  ESP = (EBP);
  /* 10f517e7 pop ebp */
  EBP = (pop32());
  /* 10f517e8 ret  */
  ESPCHK(0x10f51090u, _esp0);
  ESP += 4; return;
}

/* FUN_100019c0 @ 0x10f519c0 (5900 bytes, 1729 insns) */
void f_10f519c0(void) {
  FTRACE(0x10f519c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f519c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f519c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f519c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f519c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f519c7 push esi */
  push32((uint32_t)(ESI));
  /* 10f519c8 push edi */
  push32((uint32_t)(EDI));
  /* 10f519c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10f519cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10f519d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f519d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f519d8 mov esi, esp */
  ESI = (ESP);
  /* 10f519da push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10f519dc call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f519e2u);
  /* 10f519e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f519e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f519e7 call 0x10f53780 */
  push32(0x10f519ecu); f_10f53780();
  /* 10f519ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f519f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f519f3 je 0x10f51a0b */
  if (C.zf) goto L_10f51a0b;
  /* 10f519f5 mov esi, esp */
  ESI = (ESP);
  /* 10f519f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f519f9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10f519fb call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f51a01u);
  /* 10f51a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a06 call 0x10f53780 */
  push32(0x10f51a0bu); f_10f53780();
L_10f51a0b:;
  /* 10f51a0b mov esi, esp */
  ESI = (ESP);
  /* 10f51a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51a0f call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f51a15u);
  /* 10f51a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a1a call 0x10f53780 */
  push32(0x10f51a1fu); f_10f53780();
  /* 10f51a1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f51a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51a26 je 0x10f51eb3 */
  if (C.zf) goto L_10f51eb3;
  /* 10f51a2c mov esi, esp */
  ESI = (ESP);
  /* 10f51a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51a32 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f51a38u);
  /* 10f51a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a3d call 0x10f53780 */
  push32(0x10f51a42u); f_10f53780();
  /* 10f51a42 mov esi, esp */
  ESI = (ESP);
  /* 10f51a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51a46 call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51a4cu);
  /* 10f51a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a51 call 0x10f53780 */
  push32(0x10f51a56u); f_10f53780();
  /* 10f51a56 imul eax, eax, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5dcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51a5c mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10f51a61 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51a63 mov esi, esp */
  ESI = (ESP);
  /* 10f51a65 push ecx */
  push32((uint32_t)(ECX));
  /* 10f51a66 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51a6a call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51a70u);
  /* 10f51a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a75 call 0x10f53780 */
  push32(0x10f51a7au); f_10f53780();
  /* 10f51a7a mov esi, esp */
  ESI = (ESP);
  /* 10f51a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51a7e call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51a84u);
  /* 10f51a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51a89 call 0x10f53780 */
  push32(0x10f51a8eu); f_10f53780();
  /* 10f51a8e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51a94 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 10f51a99 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51a9b mov esi, esp */
  ESI = (ESP);
  /* 10f51a9d push edx */
  push32((uint32_t)(EDX));
  /* 10f51a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51aa2 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51aa8u);
  /* 10f51aa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51aad call 0x10f53780 */
  push32(0x10f51ab2u); f_10f53780();
  /* 10f51ab2 mov esi, esp */
  ESI = (ESP);
  /* 10f51ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51ab6 call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51abcu);
  /* 10f51abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51ac1 call 0x10f53780 */
  push32(0x10f51ac6u); f_10f53780();
  /* 10f51ac6 imul eax, eax, 0x514 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x514u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51acc mov ecx, 0x1b58 */
  ECX = (0x1b58u);
  /* 10f51ad1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51ad3 mov esi, esp */
  ESI = (ESP);
  /* 10f51ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f51ad6 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f51ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51ada call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51ae0u);
  /* 10f51ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51ae5 call 0x10f53780 */
  push32(0x10f51aeau); f_10f53780();
  /* 10f51aea mov esi, esp */
  ESI = (ESP);
  /* 10f51aec push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51aee call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51af4u);
  /* 10f51af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51af9 call 0x10f53780 */
  push32(0x10f51afeu); f_10f53780();
  /* 10f51afe imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51b04 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 10f51b09 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51b0b mov esi, esp */
  ESI = (ESP);
  /* 10f51b0d push edx */
  push32((uint32_t)(EDX));
  /* 10f51b0e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b12 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51b18u);
  /* 10f51b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51b1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51b1d call 0x10f53780 */
  push32(0x10f51b22u); f_10f53780();
  /* 10f51b22 mov esi, esp */
  ESI = (ESP);
  /* 10f51b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b26 call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51b2cu);
  /* 10f51b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51b31 call 0x10f53780 */
  push32(0x10f51b36u); f_10f53780();
  /* 10f51b36 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51b3c mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 10f51b41 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51b43 mov esi, esp */
  ESI = (ESP);
  /* 10f51b45 push ecx */
  push32((uint32_t)(ECX));
  /* 10f51b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b4a call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51b50u);
  /* 10f51b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51b55 call 0x10f53780 */
  push32(0x10f51b5au); f_10f53780();
  /* 10f51b5a mov esi, esp */
  ESI = (ESP);
  /* 10f51b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b5e call dword ptr [0x10f83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83428))), 0x10f51b64u);
  /* 10f51b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51b69 call 0x10f53780 */
  push32(0x10f51b6eu); f_10f53780();
  /* 10f51b6e imul eax, eax, 0x514 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x514u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f51b74 mov edx, 0x1b58 */
  EDX = (0x1b58u);
  /* 10f51b79 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f51b7b mov esi, esp */
  ESI = (ESP);
  /* 10f51b7d push edx */
  push32((uint32_t)(EDX));
  /* 10f51b7e push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51b82 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51b88u);
  /* 10f51b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51b8d call 0x10f53780 */
  push32(0x10f51b92u); f_10f53780();
  /* 10f51b92 mov esi, esp */
  ESI = (ESP);
  /* 10f51b94 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51b9d call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51ba3u);
  /* 10f51ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51ba8 call 0x10f53780 */
  push32(0x10f51badu); f_10f53780();
  /* 10f51bad mov esi, esp */
  ESI = (ESP);
  /* 10f51baf push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51bb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51bb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51bb8 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51bbeu);
  /* 10f51bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51bc3 call 0x10f53780 */
  push32(0x10f51bc8u); f_10f53780();
  /* 10f51bc8 mov esi, esp */
  ESI = (ESP);
  /* 10f51bca push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51bcf push 4 */
  push32((uint32_t)(0x4u));
  /* 10f51bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51bd3 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51bd9u);
  /* 10f51bd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51bde call 0x10f53780 */
  push32(0x10f51be3u); f_10f53780();
  /* 10f51be3 mov esi, esp */
  ESI = (ESP);
  /* 10f51be5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51bea push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51bec push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51bee call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51bf4u);
  /* 10f51bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51bf9 call 0x10f53780 */
  push32(0x10f51bfeu); f_10f53780();
  /* 10f51bfe mov esi, esp */
  ESI = (ESP);
  /* 10f51c00 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51c09 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c0fu);
  /* 10f51c0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c14 call 0x10f53780 */
  push32(0x10f51c19u); f_10f53780();
  /* 10f51c19 mov esi, esp */
  ESI = (ESP);
  /* 10f51c1b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51c20 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51c24 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c2au);
  /* 10f51c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c2f call 0x10f53780 */
  push32(0x10f51c34u); f_10f53780();
  /* 10f51c34 mov esi, esp */
  ESI = (ESP);
  /* 10f51c36 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51c3b push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51c3f call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c45u);
  /* 10f51c45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c4a call 0x10f53780 */
  push32(0x10f51c4fu); f_10f53780();
  /* 10f51c4f mov esi, esp */
  ESI = (ESP);
  /* 10f51c51 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51c56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51c5a call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c60u);
  /* 10f51c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c65 call 0x10f53780 */
  push32(0x10f51c6au); f_10f53780();
  /* 10f51c6a mov esi, esp */
  ESI = (ESP);
  /* 10f51c6c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51c71 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f51c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51c75 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c7bu);
  /* 10f51c7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c80 call 0x10f53780 */
  push32(0x10f51c85u); f_10f53780();
  /* 10f51c85 mov esi, esp */
  ESI = (ESP);
  /* 10f51c87 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51c8c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51c90 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51c96u);
  /* 10f51c96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51c9b call 0x10f53780 */
  push32(0x10f51ca0u); f_10f53780();
  /* 10f51ca0 mov esi, esp */
  ESI = (ESP);
  /* 10f51ca2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51ca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51cab call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51cb1u);
  /* 10f51cb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51cb6 call 0x10f53780 */
  push32(0x10f51cbbu); f_10f53780();
  /* 10f51cbb mov esi, esp */
  ESI = (ESP);
  /* 10f51cbd push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 10f51cc2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51cc6 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51cccu);
  /* 10f51ccc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51ccf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51cd1 call 0x10f53780 */
  push32(0x10f51cd6u); f_10f53780();
  /* 10f51cd6 mov esi, esp */
  ESI = (ESP);
  /* 10f51cd8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51cdf push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51ce1 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51ce7u);
  /* 10f51ce7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51cea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51cec call 0x10f53780 */
  push32(0x10f51cf1u); f_10f53780();
  /* 10f51cf1 mov esi, esp */
  ESI = (ESP);
  /* 10f51cf3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51cf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51cfa push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51cfc call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51d02u);
  /* 10f51d02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d07 call 0x10f53780 */
  push32(0x10f51d0cu); f_10f53780();
  /* 10f51d0c mov esi, esp */
  ESI = (ESP);
  /* 10f51d0e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51d13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f51d15 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51d17 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51d1du);
  /* 10f51d1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d22 call 0x10f53780 */
  push32(0x10f51d27u); f_10f53780();
  /* 10f51d27 mov esi, esp */
  ESI = (ESP);
  /* 10f51d29 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51d2e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51d30 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51d32 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51d38u);
  /* 10f51d38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d3d call 0x10f53780 */
  push32(0x10f51d42u); f_10f53780();
  /* 10f51d42 mov esi, esp */
  ESI = (ESP);
  /* 10f51d44 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51d4b push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51d4d call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51d53u);
  /* 10f51d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d58 call 0x10f53780 */
  push32(0x10f51d5du); f_10f53780();
  /* 10f51d5d mov esi, esp */
  ESI = (ESP);
  /* 10f51d5f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f51d64 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51d66 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51d68 call dword ptr [0x10f83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83438))), 0x10f51d6eu);
  /* 10f51d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d73 call 0x10f53780 */
  push32(0x10f51d78u); f_10f53780();
  /* 10f51d78 mov esi, esp */
  ESI = (ESP);
  /* 10f51d7a push 0x10f7b21c */
  push32((uint32_t)(0x10f7b21cu));
  /* 10f51d7f call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f51d85u);
  /* 10f51d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51d8a call 0x10f53780 */
  push32(0x10f51d8fu); f_10f53780();
  /* 10f51d8f mov esi, esp */
  ESI = (ESP);
  /* 10f51d91 push 0x10f7b214 */
  push32((uint32_t)(0x10f7b214u));
  /* 10f51d96 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f51d9cu);
  /* 10f51d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51d9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51da1 call 0x10f53780 */
  push32(0x10f51da6u); f_10f53780();
  /* 10f51da6 mov esi, esp */
  ESI = (ESP);
  /* 10f51da8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51daa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51dac call dword ptr [0x10f83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83434))), 0x10f51db2u);
  /* 10f51db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51db7 call 0x10f53780 */
  push32(0x10f51dbcu); f_10f53780();
  /* 10f51dbc mov esi, esp */
  ESI = (ESP);
  /* 10f51dbe push 0xa */
  push32((uint32_t)(0xau));
  /* 10f51dc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51dc2 call dword ptr [0x10f83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83434))), 0x10f51dc8u);
  /* 10f51dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51dcd call 0x10f53780 */
  push32(0x10f51dd2u); f_10f53780();
  /* 10f51dd2 mov esi, esp */
  ESI = (ESP);
  /* 10f51dd4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51dd8 call dword ptr [0x10f83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83434))), 0x10f51ddeu);
  /* 10f51dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51de1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51de3 call 0x10f53780 */
  push32(0x10f51de8u); f_10f53780();
  /* 10f51de8 mov esi, esp */
  ESI = (ESP);
  /* 10f51dea push 0xa */
  push32((uint32_t)(0xau));
  /* 10f51dec push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51dee call dword ptr [0x10f83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83434))), 0x10f51df4u);
  /* 10f51df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51df9 call 0x10f53780 */
  push32(0x10f51dfeu); f_10f53780();
  /* 10f51dfe mov esi, esp */
  ESI = (ESP);
  /* 10f51e00 push 0x10f7b208 */
  push32((uint32_t)(0x10f7b208u));
  /* 10f51e05 push 0x10f7b158 */
  push32((uint32_t)(0x10f7b158u));
  /* 10f51e0a call dword ptr [0x10f83444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83444))), 0x10f51e10u);
  /* 10f51e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e15 call 0x10f53780 */
  push32(0x10f51e1au); f_10f53780();
  /* 10f51e1a mov esi, esp */
  ESI = (ESP);
  /* 10f51e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51e20 push 0x10f80508 */
  push32((uint32_t)(0x10f80508u));
  /* 10f51e25 call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f51e2bu);
  /* 10f51e2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e30 call 0x10f53780 */
  push32(0x10f51e35u); f_10f53780();
  /* 10f51e35 mov esi, esp */
  ESI = (ESP);
  /* 10f51e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51e3b push 0x10f80510 */
  push32((uint32_t)(0x10f80510u));
  /* 10f51e40 call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f51e46u);
  /* 10f51e46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e4b call 0x10f53780 */
  push32(0x10f51e50u); f_10f53780();
  /* 10f51e50 mov esi, esp */
  ESI = (ESP);
  /* 10f51e52 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51e56 push 0x10f80518 */
  push32((uint32_t)(0x10f80518u));
  /* 10f51e5b call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f51e61u);
  /* 10f51e61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e66 call 0x10f53780 */
  push32(0x10f51e6bu); f_10f53780();
  /* 10f51e6b mov esi, esp */
  ESI = (ESP);
  /* 10f51e6d push 5 */
  push32((uint32_t)(0x5u));
  /* 10f51e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51e71 push 0x10f804d8 */
  push32((uint32_t)(0x10f804d8u));
  /* 10f51e76 call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f51e7cu);
  /* 10f51e7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e81 call 0x10f53780 */
  push32(0x10f51e86u); f_10f53780();
  /* 10f51e86 mov esi, esp */
  ESI = (ESP);
  /* 10f51e88 push 0x10f804d8 */
  push32((uint32_t)(0x10f804d8u));
  /* 10f51e8d call dword ptr [0x10f83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83440))), 0x10f51e93u);
  /* 10f51e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51e98 call 0x10f53780 */
  push32(0x10f51e9du); f_10f53780();
  /* 10f51e9d mov esi, esp */
  ESI = (ESP);
  /* 10f51e9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f51ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51ea3 call dword ptr [0x10f83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83450))), 0x10f51ea9u);
  /* 10f51ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51eae call 0x10f53780 */
  push32(0x10f51eb3u); f_10f53780();
L_10f51eb3:;
  /* 10f51eb3 mov esi, esp */
  ESI = (ESP);
  /* 10f51eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51eb7 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f51ebdu);
  /* 10f51ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51ec2 call 0x10f53780 */
  push32(0x10f51ec7u); f_10f53780();
  /* 10f51ec7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f51ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51ece je 0x10f51f96 */
  if (C.zf) goto L_10f51f96;
  /* 10f51ed4 mov esi, esp */
  ESI = (ESP);
  /* 10f51ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51ed8 call dword ptr [0x10f83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83454))), 0x10f51edeu);
  /* 10f51ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51ee3 call 0x10f53780 */
  push32(0x10f51ee8u); f_10f53780();
  /* 10f51ee8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f51eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51eef je 0x10f51f96 */
  if (C.zf) goto L_10f51f96;
  /* 10f51ef5 mov esi, esp */
  ESI = (ESP);
  /* 10f51ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51efb call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f51f01u);
  /* 10f51f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f06 call 0x10f53780 */
  push32(0x10f51f0bu); f_10f53780();
  /* 10f51f0b mov esi, esp */
  ESI = (ESP);
  /* 10f51f0d push 0x10f804f0 */
  push32((uint32_t)(0x10f804f0u));
  /* 10f51f12 call dword ptr [0x10f83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83440))), 0x10f51f18u);
  /* 10f51f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f1d call 0x10f53780 */
  push32(0x10f51f22u); f_10f53780();
  /* 10f51f22 mov esi, esp */
  ESI = (ESP);
  /* 10f51f24 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f51f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51f2c push 0x10f7b1fc */
  push32((uint32_t)(0x10f7b1fcu));
  /* 10f51f31 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51f33 call dword ptr [0x10f8344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8344c))), 0x10f51f39u);
  /* 10f51f39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f3e call 0x10f53780 */
  push32(0x10f51f43u); f_10f53780();
  /* 10f51f43 mov esi, esp */
  ESI = (ESP);
  /* 10f51f45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f51f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f51f4b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f51f4d push 0x10f7b1fc */
  push32((uint32_t)(0x10f7b1fcu));
  /* 10f51f52 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51f54 call dword ptr [0x10f8344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8344c))), 0x10f51f5au);
  /* 10f51f5a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f5f call 0x10f53780 */
  push32(0x10f51f64u); f_10f53780();
  /* 10f51f64 mov esi, esp */
  ESI = (ESP);
  /* 10f51f66 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 10f51f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f51f6d call dword ptr [0x10f83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83450))), 0x10f51f73u);
  /* 10f51f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f78 call 0x10f53780 */
  push32(0x10f51f7du); f_10f53780();
  /* 10f51f7d mov esi, esp */
  ESI = (ESP);
  /* 10f51f7f push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10f51f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51f86 call dword ptr [0x10f83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83450))), 0x10f51f8cu);
  /* 10f51f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51f91 call 0x10f53780 */
  push32(0x10f51f96u); f_10f53780();
L_10f51f96:;
  /* 10f51f96 mov esi, esp */
  ESI = (ESP);
  /* 10f51f98 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51f9a call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f51fa0u);
  /* 10f51fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51fa5 call 0x10f53780 */
  push32(0x10f51faau); f_10f53780();
  /* 10f51faa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f51faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51fb1 je 0x10f52081 */
  if (C.zf) goto L_10f52081;
  /* 10f51fb7 mov esi, esp */
  ESI = (ESP);
  /* 10f51fb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51fbb push 0x10f80508 */
  push32((uint32_t)(0x10f80508u));
  /* 10f51fc0 call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f51fc6u);
  /* 10f51fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51fc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51fcb call 0x10f53780 */
  push32(0x10f51fd0u); f_10f53780();
  /* 10f51fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51fd2 jg 0x10f5200e */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5200e;
  /* 10f51fd4 mov esi, esp */
  ESI = (ESP);
  /* 10f51fd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51fd8 push 0x10f80510 */
  push32((uint32_t)(0x10f80510u));
  /* 10f51fdd call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f51fe3u);
  /* 10f51fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f51fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f51fe8 call 0x10f53780 */
  push32(0x10f51fedu); f_10f53780();
  /* 10f51fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f51fef jg 0x10f5200e */
  if ((!C.zf&&C.sf==C.of)) goto L_10f5200e;
  /* 10f51ff1 mov esi, esp */
  ESI = (ESP);
  /* 10f51ff3 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f51ff5 push 0x10f80518 */
  push32((uint32_t)(0x10f80518u));
  /* 10f51ffa call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f52000u);
  /* 10f52000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52003 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52005 call 0x10f53780 */
  push32(0x10f5200au); f_10f53780();
  /* 10f5200a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5200c jle 0x10f52081 */
  if ((C.zf||C.sf!=C.of)) goto L_10f52081;
L_10f5200e:;
  /* 10f5200e mov esi, esp */
  ESI = (ESP);
  /* 10f52010 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52012 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52014 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5201au);
  /* 10f5201a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5201d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5201f call 0x10f53780 */
  push32(0x10f52024u); f_10f53780();
  /* 10f52024 mov esi, esp */
  ESI = (ESP);
  /* 10f52026 push 0x10f7b1f4 */
  push32((uint32_t)(0x10f7b1f4u));
  /* 10f5202b call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52031u);
  /* 10f52031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52036 call 0x10f53780 */
  push32(0x10f5203bu); f_10f53780();
  /* 10f5203b mov esi, esp */
  ESI = (ESP);
  /* 10f5203d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5203f push 0x10f80450 */
  push32((uint32_t)(0x10f80450u));
  /* 10f52044 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f5204au);
  /* 10f5204a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5204d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5204f call 0x10f53780 */
  push32(0x10f52054u); f_10f53780();
  /* 10f52054 mov esi, esp */
  ESI = (ESP);
  /* 10f52056 push 0x10f7b1ec */
  push32((uint32_t)(0x10f7b1ecu));
  /* 10f5205b call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52061u);
  /* 10f52061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52066 call 0x10f53780 */
  push32(0x10f5206bu); f_10f53780();
  /* 10f5206b mov esi, esp */
  ESI = (ESP);
  /* 10f5206d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5206f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52071 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52077u);
  /* 10f52077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5207a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5207c call 0x10f53780 */
  push32(0x10f52081u); f_10f53780();
L_10f52081:;
  /* 10f52081 mov esi, esp */
  ESI = (ESP);
  /* 10f52083 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52085 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5208bu);
  /* 10f5208b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5208e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52090 call 0x10f53780 */
  push32(0x10f52095u); f_10f53780();
  /* 10f52095 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5209c je 0x10f52186 */
  if (C.zf) goto L_10f52186;
  /* 10f520a2 mov esi, esp */
  ESI = (ESP);
  /* 10f520a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f520a6 push 0x10f80508 */
  push32((uint32_t)(0x10f80508u));
  /* 10f520ab call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f520b1u);
  /* 10f520b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f520b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f520b6 call 0x10f53780 */
  push32(0x10f520bbu); f_10f53780();
  /* 10f520bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f520bd jg 0x10f520fd */
  if ((!C.zf&&C.sf==C.of)) goto L_10f520fd;
  /* 10f520bf mov esi, esp */
  ESI = (ESP);
  /* 10f520c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f520c3 push 0x10f80510 */
  push32((uint32_t)(0x10f80510u));
  /* 10f520c8 call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f520ceu);
  /* 10f520ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f520d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f520d3 call 0x10f53780 */
  push32(0x10f520d8u); f_10f53780();
  /* 10f520d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f520da jg 0x10f520fd */
  if ((!C.zf&&C.sf==C.of)) goto L_10f520fd;
  /* 10f520dc mov esi, esp */
  ESI = (ESP);
  /* 10f520de push 1 */
  push32((uint32_t)(0x1u));
  /* 10f520e0 push 0x10f80518 */
  push32((uint32_t)(0x10f80518u));
  /* 10f520e5 call dword ptr [0x10f8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8345c))), 0x10f520ebu);
  /* 10f520eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f520ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f520f0 call 0x10f53780 */
  push32(0x10f520f5u); f_10f53780();
  /* 10f520f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f520f7 jle 0x10f52186 */
  if ((C.zf||C.sf!=C.of)) goto L_10f52186;
L_10f520fd:;
  /* 10f520fd mov esi, esp */
  ESI = (ESP);
  /* 10f520ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52101 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52103 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52109u);
  /* 10f52109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5210e call 0x10f53780 */
  push32(0x10f52113u); f_10f53780();
  /* 10f52113 mov esi, esp */
  ESI = (ESP);
  /* 10f52115 push 0x10f7b1f4 */
  push32((uint32_t)(0x10f7b1f4u));
  /* 10f5211a call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52120u);
  /* 10f52120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52125 call 0x10f53780 */
  push32(0x10f5212au); f_10f53780();
  /* 10f5212a mov esi, esp */
  ESI = (ESP);
  /* 10f5212c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5212e push 0x10f80450 */
  push32((uint32_t)(0x10f80450u));
  /* 10f52133 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52139u);
  /* 10f52139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5213c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5213e call 0x10f53780 */
  push32(0x10f52143u); f_10f53780();
  /* 10f52143 mov esi, esp */
  ESI = (ESP);
  /* 10f52145 push 0x10f7b1ec */
  push32((uint32_t)(0x10f7b1ecu));
  /* 10f5214a call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52150u);
  /* 10f52150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52155 call 0x10f53780 */
  push32(0x10f5215au); f_10f53780();
  /* 10f5215a mov esi, esp */
  ESI = (ESP);
  /* 10f5215c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5215e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52160 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52166u);
  /* 10f52166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5216b call 0x10f53780 */
  push32(0x10f52170u); f_10f53780();
  /* 10f52170 mov esi, esp */
  ESI = (ESP);
  /* 10f52172 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f52174 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f52176 call dword ptr [0x10f83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83450))), 0x10f5217cu);
  /* 10f5217c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5217f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52181 call 0x10f53780 */
  push32(0x10f52186u); f_10f53780();
L_10f52186:;
  /* 10f52186 mov esi, esp */
  ESI = (ESP);
  /* 10f52188 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10f5218a call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52190u);
  /* 10f52190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52195 call 0x10f53780 */
  push32(0x10f5219au); f_10f53780();
  /* 10f5219a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5219f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f521a1 je 0x10f52271 */
  if (C.zf) goto L_10f52271;
  /* 10f521a7 mov esi, esp */
  ESI = (ESP);
  /* 10f521a9 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f521ab call dword ptr [0x10f83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83454))), 0x10f521b1u);
  /* 10f521b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f521b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f521b6 call 0x10f53780 */
  push32(0x10f521bbu); f_10f53780();
  /* 10f521bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f521c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f521c2 je 0x10f52271 */
  if (C.zf) goto L_10f52271;
  /* 10f521c8 mov esi, esp */
  ESI = (ESP);
  /* 10f521ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10f521cc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10f521ce call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f521d4u);
  /* 10f521d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f521d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f521d9 call 0x10f53780 */
  push32(0x10f521deu); f_10f53780();
  /* 10f521de mov esi, esp */
  ESI = (ESP);
  /* 10f521e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f521e2 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f521e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f521e9 call dword ptr [0x10f83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83468))), 0x10f521efu);
  /* 10f521ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f521f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f521f4 call 0x10f53780 */
  push32(0x10f521f9u); f_10f53780();
  /* 10f521f9 mov esi, esp */
  ESI = (ESP);
  /* 10f521fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f521fd push 0x10f804a8 */
  push32((uint32_t)(0x10f804a8u));
  /* 10f52202 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52208u);
  /* 10f52208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5220d call 0x10f53780 */
  push32(0x10f52212u); f_10f53780();
  /* 10f52212 mov esi, esp */
  ESI = (ESP);
  /* 10f52214 push 0x10f7b1e0 */
  push32((uint32_t)(0x10f7b1e0u));
  /* 10f52219 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f5221fu);
  /* 10f5221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52222 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52224 call 0x10f53780 */
  push32(0x10f52229u); f_10f53780();
  /* 10f52229 mov esi, esp */
  ESI = (ESP);
  /* 10f5222b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5222d push 0x10f804a8 */
  push32((uint32_t)(0x10f804a8u));
  /* 10f52232 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52238u);
  /* 10f52238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5223b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5223d call 0x10f53780 */
  push32(0x10f52242u); f_10f53780();
  /* 10f52242 mov esi, esp */
  ESI = (ESP);
  /* 10f52244 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52246 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52248 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f5224eu);
  /* 10f5224e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52253 call 0x10f53780 */
  push32(0x10f52258u); f_10f53780();
  /* 10f52258 mov esi, esp */
  ESI = (ESP);
  /* 10f5225a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5225c push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52261 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52267u);
  /* 10f52267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5226a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5226c call 0x10f53780 */
  push32(0x10f52271u); f_10f53780();
L_10f52271:;
  /* 10f52271 mov esi, esp */
  ESI = (ESP);
  /* 10f52273 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52275 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5227bu);
  /* 10f5227b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5227e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52280 call 0x10f53780 */
  push32(0x10f52285u); f_10f53780();
  /* 10f52285 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5228a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5228c jne 0x10f52305 */
  if (!C.zf) goto L_10f52305;
  /* 10f5228e mov esi, esp */
  ESI = (ESP);
  /* 10f52290 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52292 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52298u);
  /* 10f52298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5229b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5229d call 0x10f53780 */
  push32(0x10f522a2u); f_10f53780();
  /* 10f522a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f522a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f522a9 je 0x10f52305 */
  if (C.zf) goto L_10f52305;
  /* 10f522ab mov esi, esp */
  ESI = (ESP);
  /* 10f522ad push 5 */
  push32((uint32_t)(0x5u));
  /* 10f522af call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f522b5u);
  /* 10f522b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f522b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f522ba call 0x10f53780 */
  push32(0x10f522bfu); f_10f53780();
  /* 10f522bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f522c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f522c6 je 0x10f52305 */
  if (C.zf) goto L_10f52305;
  /* 10f522c8 mov esi, esp */
  ESI = (ESP);
  /* 10f522ca push 0x10f804e8 */
  push32((uint32_t)(0x10f804e8u));
  /* 10f522cf push 0x10f80468 */
  push32((uint32_t)(0x10f80468u));
  /* 10f522d4 call dword ptr [0x10f8346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8346c))), 0x10f522dau);
  /* 10f522da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f522dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f522df call 0x10f53780 */
  push32(0x10f522e4u); f_10f53780();
  /* 10f522e4 mov esi, esp */
  ESI = (ESP);
  /* 10f522e6 push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f522eb push 0x10f804a0 */
  push32((uint32_t)(0x10f804a0u));
  /* 10f522f0 push 0x10f80468 */
  push32((uint32_t)(0x10f80468u));
  /* 10f522f5 call dword ptr [0x10f83464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83464))), 0x10f522fbu);
  /* 10f522fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f522fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52300 call 0x10f53780 */
  push32(0x10f52305u); f_10f53780();
L_10f52305:;
  /* 10f52305 mov esi, esp */
  ESI = (ESP);
  /* 10f52307 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f52309 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5230fu);
  /* 10f5230f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52312 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52314 call 0x10f53780 */
  push32(0x10f52319u); f_10f53780();
  /* 10f52319 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52320 je 0x10f52354 */
  if (C.zf) goto L_10f52354;
  /* 10f52322 mov esi, esp */
  ESI = (ESP);
  /* 10f52324 push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f52329 call dword ptr [0x10f83474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83474))), 0x10f5232fu);
  /* 10f5232f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52334 call 0x10f53780 */
  push32(0x10f52339u); f_10f53780();
  /* 10f52339 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5233c jle 0x10f52354 */
  if ((C.zf||C.sf!=C.of)) goto L_10f52354;
  /* 10f5233e mov esi, esp */
  ESI = (ESP);
  /* 10f52340 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52342 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f52344 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5234au);
  /* 10f5234a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5234d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5234f call 0x10f53780 */
  push32(0x10f52354u); f_10f53780();
L_10f52354:;
  /* 10f52354 mov esi, esp */
  ESI = (ESP);
  /* 10f52356 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52358 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5235eu);
  /* 10f5235e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52363 call 0x10f53780 */
  push32(0x10f52368u); f_10f53780();
  /* 10f52368 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5236d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5236f jne 0x10f52409 */
  if (!C.zf) goto L_10f52409;
  /* 10f52375 mov esi, esp */
  ESI = (ESP);
  /* 10f52377 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52379 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5237fu);
  /* 10f5237f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52382 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52384 call 0x10f53780 */
  push32(0x10f52389u); f_10f53780();
  /* 10f52389 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52390 je 0x10f52409 */
  if (C.zf) goto L_10f52409;
  /* 10f52392 mov esi, esp */
  ESI = (ESP);
  /* 10f52394 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f52396 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5239cu);
  /* 10f5239c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5239f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f523a1 call 0x10f53780 */
  push32(0x10f523a6u); f_10f53780();
  /* 10f523a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f523ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f523ad je 0x10f52409 */
  if (C.zf) goto L_10f52409;
  /* 10f523af mov esi, esp */
  ESI = (ESP);
  /* 10f523b1 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f523b3 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f523b9u);
  /* 10f523b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f523bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f523be call 0x10f53780 */
  push32(0x10f523c3u); f_10f53780();
  /* 10f523c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f523c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f523ca jne 0x10f52409 */
  if (!C.zf) goto L_10f52409;
  /* 10f523cc mov esi, esp */
  ESI = (ESP);
  /* 10f523ce push 0x10f804e8 */
  push32((uint32_t)(0x10f804e8u));
  /* 10f523d3 push 0x10f80470 */
  push32((uint32_t)(0x10f80470u));
  /* 10f523d8 call dword ptr [0x10f8346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8346c))), 0x10f523deu);
  /* 10f523de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f523e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f523e3 call 0x10f53780 */
  push32(0x10f523e8u); f_10f53780();
  /* 10f523e8 mov esi, esp */
  ESI = (ESP);
  /* 10f523ea push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f523ef push 0x10f804b8 */
  push32((uint32_t)(0x10f804b8u));
  /* 10f523f4 push 0x10f80470 */
  push32((uint32_t)(0x10f80470u));
  /* 10f523f9 call dword ptr [0x10f83464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83464))), 0x10f523ffu);
  /* 10f523ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52402 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52404 call 0x10f53780 */
  push32(0x10f52409u); f_10f53780();
L_10f52409:;
  /* 10f52409 mov esi, esp */
  ESI = (ESP);
  /* 10f5240b push 6 */
  push32((uint32_t)(0x6u));
  /* 10f5240d call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52413u);
  /* 10f52413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52416 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52418 call 0x10f53780 */
  push32(0x10f5241du); f_10f53780();
  /* 10f5241d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52424 je 0x10f52458 */
  if (C.zf) goto L_10f52458;
  /* 10f52426 mov esi, esp */
  ESI = (ESP);
  /* 10f52428 push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f5242d call dword ptr [0x10f83474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83474))), 0x10f52433u);
  /* 10f52433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52438 call 0x10f53780 */
  push32(0x10f5243du); f_10f53780();
  /* 10f5243d cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52440 jle 0x10f52458 */
  if ((C.zf||C.sf!=C.of)) goto L_10f52458;
  /* 10f52442 mov esi, esp */
  ESI = (ESP);
  /* 10f52444 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52446 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f52448 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5244eu);
  /* 10f5244e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52453 call 0x10f53780 */
  push32(0x10f52458u); f_10f53780();
L_10f52458:;
  /* 10f52458 mov esi, esp */
  ESI = (ESP);
  /* 10f5245a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5245c call dword ptr [0x10f83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83454))), 0x10f52462u);
  /* 10f52462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52467 call 0x10f53780 */
  push32(0x10f5246cu); f_10f53780();
  /* 10f5246c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52473 je 0x10f52793 */
  if (C.zf) goto L_10f52793;
  /* 10f52479 mov esi, esp */
  ESI = (ESP);
  /* 10f5247b push 0xf */
  push32((uint32_t)(0xfu));
  /* 10f5247d call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52483u);
  /* 10f52483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52488 call 0x10f53780 */
  push32(0x10f5248du); f_10f53780();
  /* 10f5248d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52494 je 0x10f524c3 */
  if (C.zf) goto L_10f524c3;
  /* 10f52496 mov esi, esp */
  ESI = (ESP);
  /* 10f52498 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5249a push 0xf */
  push32((uint32_t)(0xfu));
  /* 10f5249c call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f524a2u);
  /* 10f524a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f524a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f524a7 call 0x10f53780 */
  push32(0x10f524acu); f_10f53780();
  /* 10f524ac mov esi, esp */
  ESI = (ESP);
  /* 10f524ae push 0x10f7b1d4 */
  push32((uint32_t)(0x10f7b1d4u));
  /* 10f524b3 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f524b9u);
  /* 10f524b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f524bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f524be call 0x10f53780 */
  push32(0x10f524c3u); f_10f53780();
L_10f524c3:;
  /* 10f524c3 mov esi, esp */
  ESI = (ESP);
  /* 10f524c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f524c7 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f524cdu);
  /* 10f524cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f524d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f524d2 call 0x10f53780 */
  push32(0x10f524d7u); f_10f53780();
  /* 10f524d7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f524dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f524de jne 0x10f52606 */
  if (!C.zf) goto L_10f52606;
  /* 10f524e4 mov esi, esp */
  ESI = (ESP);
  /* 10f524e6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f524e8 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f524eeu);
  /* 10f524ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f524f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f524f3 call 0x10f53780 */
  push32(0x10f524f8u); f_10f53780();
  /* 10f524f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f524fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f524ff je 0x10f52606 */
  if (C.zf) goto L_10f52606;
  /* 10f52505 mov esi, esp */
  ESI = (ESP);
  /* 10f52507 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f52509 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5250fu);
  /* 10f5250f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52514 call 0x10f53780 */
  push32(0x10f52519u); f_10f53780();
  /* 10f52519 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5251e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52520 je 0x10f52606 */
  if (C.zf) goto L_10f52606;
  /* 10f52526 mov esi, esp */
  ESI = (ESP);
  /* 10f52528 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5252a push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f5252c call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52532u);
  /* 10f52532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52537 call 0x10f53780 */
  push32(0x10f5253cu); f_10f53780();
  /* 10f5253c mov esi, esp */
  ESI = (ESP);
  /* 10f5253e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52540 push 0x10f80500 */
  push32((uint32_t)(0x10f80500u));
  /* 10f52545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52547 call dword ptr [0x10f83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83468))), 0x10f5254du);
  /* 10f5254d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52552 call 0x10f53780 */
  push32(0x10f52557u); f_10f53780();
  /* 10f52557 mov esi, esp */
  ESI = (ESP);
  /* 10f52559 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 10f5255e push 0x10f804f8 */
  push32((uint32_t)(0x10f804f8u));
  /* 10f52563 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52565 push 0x10f804b8 */
  push32((uint32_t)(0x10f804b8u));
  /* 10f5256a push 0x10f80490 */
  push32((uint32_t)(0x10f80490u));
  /* 10f5256f push 0x10f80540 */
  push32((uint32_t)(0x10f80540u));
  /* 10f52574 call dword ptr [0x10f83478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83478))), 0x10f5257au);
  /* 10f5257a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5257f call 0x10f53780 */
  push32(0x10f52584u); f_10f53780();
  /* 10f52584 mov esi, esp */
  ESI = (ESP);
  /* 10f52586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52588 push 0x10f80540 */
  push32((uint32_t)(0x10f80540u));
  /* 10f5258d call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52593u);
  /* 10f52593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52598 call 0x10f53780 */
  push32(0x10f5259du); f_10f53780();
  /* 10f5259d mov esi, esp */
  ESI = (ESP);
  /* 10f5259f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f525a1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 10f525a6 push 0x10f804e8 */
  push32((uint32_t)(0x10f804e8u));
  /* 10f525ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10f525ad call dword ptr [0x10f83470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83470))), 0x10f525b3u);
  /* 10f525b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f525b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f525b8 call 0x10f53780 */
  push32(0x10f525bdu); f_10f53780();
  /* 10f525bd mov esi, esp */
  ESI = (ESP);
  /* 10f525bf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f525c1 call dword ptr [0x10f83480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83480))), 0x10f525c7u);
  /* 10f525c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f525ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f525cc call 0x10f53780 */
  push32(0x10f525d1u); f_10f53780();
  /* 10f525d1 mov esi, esp */
  ESI = (ESP);
  /* 10f525d3 push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f525d8 push 0x10f80540 */
  push32((uint32_t)(0x10f80540u));
  /* 10f525dd call dword ptr [0x10f83484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83484))), 0x10f525e3u);
  /* 10f525e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f525e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f525e8 call 0x10f53780 */
  push32(0x10f525edu); f_10f53780();
  /* 10f525ed mov esi, esp */
  ESI = (ESP);
  /* 10f525ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10f525f1 push 0x10f80500 */
  push32((uint32_t)(0x10f80500u));
  /* 10f525f6 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f525fcu);
  /* 10f525fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f525ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52601 call 0x10f53780 */
  push32(0x10f52606u); f_10f53780();
L_10f52606:;
  /* 10f52606 mov esi, esp */
  ESI = (ESP);
  /* 10f52608 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5260a call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52610u);
  /* 10f52610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52615 call 0x10f53780 */
  push32(0x10f5261au); f_10f53780();
  /* 10f5261a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5261f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52621 jne 0x10f526f9 */
  if (!C.zf) goto L_10f526f9;
  /* 10f52627 mov esi, esp */
  ESI = (ESP);
  /* 10f52629 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f5262b call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52631u);
  /* 10f52631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52636 call 0x10f53780 */
  push32(0x10f5263bu); f_10f53780();
  /* 10f5263b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52642 je 0x10f526f9 */
  if (C.zf) goto L_10f526f9;
  /* 10f52648 mov esi, esp */
  ESI = (ESP);
  /* 10f5264a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5264c push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f52651 call dword ptr [0x10f8347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8347c))), 0x10f52657u);
  /* 10f52657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5265a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5265c call 0x10f53780 */
  push32(0x10f52661u); f_10f53780();
  /* 10f52661 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52664 jle 0x10f526f9 */
  if ((C.zf||C.sf!=C.of)) goto L_10f526f9;
  /* 10f5266a mov esi, esp */
  ESI = (ESP);
  /* 10f5266c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5266e push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f52673 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52679u);
  /* 10f52679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5267c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5267e call 0x10f53780 */
  push32(0x10f52683u); f_10f53780();
  /* 10f52683 mov esi, esp */
  ESI = (ESP);
  /* 10f52685 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52687 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52689 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f5268fu);
  /* 10f5268f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52694 call 0x10f53780 */
  push32(0x10f52699u); f_10f53780();
  /* 10f52699 mov esi, esp */
  ESI = (ESP);
  /* 10f5269b push 0x10f80550 */
  push32((uint32_t)(0x10f80550u));
  /* 10f526a0 push 0x10f80548 */
  push32((uint32_t)(0x10f80548u));
  /* 10f526a5 call dword ptr [0x10f83484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83484))), 0x10f526abu);
  /* 10f526ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f526ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f526b0 call 0x10f53780 */
  push32(0x10f526b5u); f_10f53780();
  /* 10f526b5 mov esi, esp */
  ESI = (ESP);
  /* 10f526b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f526b9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f526bb call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f526c1u);
  /* 10f526c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f526c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f526c6 call 0x10f53780 */
  push32(0x10f526cbu); f_10f53780();
  /* 10f526cb mov esi, esp */
  ESI = (ESP);
  /* 10f526cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f526cf push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f526d1 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f526d7u);
  /* 10f526d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f526da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f526dc call 0x10f53780 */
  push32(0x10f526e1u); f_10f53780();
  /* 10f526e1 mov esi, esp */
  ESI = (ESP);
  /* 10f526e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f526e5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f526e7 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f526edu);
  /* 10f526ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f526f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f526f2 call 0x10f53780 */
  push32(0x10f526f7u); f_10f53780();
  /* 10f526f7 jmp 0x10f5270f */
  goto L_10f5270f;
L_10f526f9:;
  /* 10f526f9 mov esi, esp */
  ESI = (ESP);
  /* 10f526fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f526fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f526ff call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52705u);
  /* 10f52705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5270a call 0x10f53780 */
  push32(0x10f5270fu); f_10f53780();
L_10f5270f:;
  /* 10f5270f mov esi, esp */
  ESI = (ESP);
  /* 10f52711 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52713 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52719u);
  /* 10f52719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5271c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5271e call 0x10f53780 */
  push32(0x10f52723u); f_10f53780();
  /* 10f52723 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5272a jne 0x10f52793 */
  if (!C.zf) goto L_10f52793;
  /* 10f5272c mov esi, esp */
  ESI = (ESP);
  /* 10f5272e push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f52730 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52736u);
  /* 10f52736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5273b call 0x10f53780 */
  push32(0x10f52740u); f_10f53780();
  /* 10f52740 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52747 jne 0x10f52793 */
  if (!C.zf) goto L_10f52793;
  /* 10f52749 mov esi, esp */
  ESI = (ESP);
  /* 10f5274b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5274d push 0x10f80550 */
  push32((uint32_t)(0x10f80550u));
  /* 10f52752 call dword ptr [0x10f8347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8347c))), 0x10f52758u);
  /* 10f52758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5275b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5275d call 0x10f53780 */
  push32(0x10f52762u); f_10f53780();
  /* 10f52762 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52765 jge 0x10f52793 */
  if ((C.sf==C.of)) goto L_10f52793;
  /* 10f52767 mov esi, esp */
  ESI = (ESP);
  /* 10f52769 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5276b push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f5276d call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52773u);
  /* 10f52773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52778 call 0x10f53780 */
  push32(0x10f5277du); f_10f53780();
  /* 10f5277d mov esi, esp */
  ESI = (ESP);
  /* 10f5277f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52781 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f52783 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52789u);
  /* 10f52789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5278c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5278e call 0x10f53780 */
  push32(0x10f52793u); f_10f53780();
L_10f52793:;
  /* 10f52793 mov esi, esp */
  ESI = (ESP);
  /* 10f52795 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52797 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5279du);
  /* 10f5279d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f527a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f527a2 call 0x10f53780 */
  push32(0x10f527a7u); f_10f53780();
  /* 10f527a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f527ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f527ae jne 0x10f52838 */
  if (!C.zf) goto L_10f52838;
  /* 10f527b4 mov esi, esp */
  ESI = (ESP);
  /* 10f527b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f527b8 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f527beu);
  /* 10f527be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f527c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f527c3 call 0x10f53780 */
  push32(0x10f527c8u); f_10f53780();
  /* 10f527c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f527cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f527cf jne 0x10f52838 */
  if (!C.zf) goto L_10f52838;
  /* 10f527d1 mov esi, esp */
  ESI = (ESP);
  /* 10f527d3 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f527d5 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f527dbu);
  /* 10f527db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f527de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f527e0 call 0x10f53780 */
  push32(0x10f527e5u); f_10f53780();
  /* 10f527e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f527ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f527ec jne 0x10f52838 */
  if (!C.zf) goto L_10f52838;
  /* 10f527ee mov esi, esp */
  ESI = (ESP);
  /* 10f527f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f527f2 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f527f8u);
  /* 10f527f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f527fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f527fd call 0x10f53780 */
  push32(0x10f52802u); f_10f53780();
  /* 10f52802 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52809 je 0x10f52838 */
  if (C.zf) goto L_10f52838;
  /* 10f5280b mov esi, esp */
  ESI = (ESP);
  /* 10f5280d push 0x10f7b1cc */
  push32((uint32_t)(0x10f7b1ccu));
  /* 10f52812 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52818u);
  /* 10f52818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5281b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5281d call 0x10f53780 */
  push32(0x10f52822u); f_10f53780();
  /* 10f52822 mov esi, esp */
  ESI = (ESP);
  /* 10f52824 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52826 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52828 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5282eu);
  /* 10f5282e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52833 call 0x10f53780 */
  push32(0x10f52838u); f_10f53780();
L_10f52838:;
  /* 10f52838 mov esi, esp */
  ESI = (ESP);
  /* 10f5283a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5283c call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52842u);
  /* 10f52842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52847 call 0x10f53780 */
  push32(0x10f5284cu); f_10f53780();
  /* 10f5284c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52853 jne 0x10f528dd */
  if (!C.zf) goto L_10f528dd;
  /* 10f52859 mov esi, esp */
  ESI = (ESP);
  /* 10f5285b push 5 */
  push32((uint32_t)(0x5u));
  /* 10f5285d call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52863u);
  /* 10f52863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52868 call 0x10f53780 */
  push32(0x10f5286du); f_10f53780();
  /* 10f5286d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52874 jne 0x10f528dd */
  if (!C.zf) goto L_10f528dd;
  /* 10f52876 mov esi, esp */
  ESI = (ESP);
  /* 10f52878 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f5287a call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52880u);
  /* 10f52880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52885 call 0x10f53780 */
  push32(0x10f5288au); f_10f53780();
  /* 10f5288a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5288f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52891 je 0x10f528dd */
  if (C.zf) goto L_10f528dd;
  /* 10f52893 mov esi, esp */
  ESI = (ESP);
  /* 10f52895 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52897 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f5289du);
  /* 10f5289d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f528a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f528a2 call 0x10f53780 */
  push32(0x10f528a7u); f_10f53780();
  /* 10f528a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f528ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f528ae je 0x10f528dd */
  if (C.zf) goto L_10f528dd;
  /* 10f528b0 mov esi, esp */
  ESI = (ESP);
  /* 10f528b2 push 0x10f7b1cc */
  push32((uint32_t)(0x10f7b1ccu));
  /* 10f528b7 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f528bdu);
  /* 10f528bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f528c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f528c2 call 0x10f53780 */
  push32(0x10f528c7u); f_10f53780();
  /* 10f528c7 mov esi, esp */
  ESI = (ESP);
  /* 10f528c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f528cb push 4 */
  push32((uint32_t)(0x4u));
  /* 10f528cd call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f528d3u);
  /* 10f528d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f528d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f528d8 call 0x10f53780 */
  push32(0x10f528ddu); f_10f53780();
L_10f528dd:;
  /* 10f528dd mov esi, esp */
  ESI = (ESP);
  /* 10f528df push 7 */
  push32((uint32_t)(0x7u));
  /* 10f528e1 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f528e7u);
  /* 10f528e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f528ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f528ec call 0x10f53780 */
  push32(0x10f528f1u); f_10f53780();
  /* 10f528f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f528f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f528f8 je 0x10f529dc */
  if (C.zf) goto L_10f529dc;
  /* 10f528fe mov esi, esp */
  ESI = (ESP);
  /* 10f52900 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52902 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52908u);
  /* 10f52908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5290b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5290d call 0x10f53780 */
  push32(0x10f52912u); f_10f53780();
  /* 10f52912 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52919 jne 0x10f529dc */
  if (!C.zf) goto L_10f529dc;
  /* 10f5291f mov esi, esp */
  ESI = (ESP);
  /* 10f52921 push 0x10f80478 */
  push32((uint32_t)(0x10f80478u));
  /* 10f52926 push 0x10f804c8 */
  push32((uint32_t)(0x10f804c8u));
  /* 10f5292b call dword ptr [0x10f8348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8348c))), 0x10f52931u);
  /* 10f52931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52936 call 0x10f53780 */
  push32(0x10f5293bu); f_10f53780();
  /* 10f5293b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5293d jle 0x10f529dc */
  if ((C.zf||C.sf!=C.of)) goto L_10f529dc;
  /* 10f52943 mov esi, esp */
  ESI = (ESP);
  /* 10f52945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52947 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f52949 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5294fu);
  /* 10f5294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52954 call 0x10f53780 */
  push32(0x10f52959u); f_10f53780();
  /* 10f52959 mov esi, esp */
  ESI = (ESP);
  /* 10f5295b push 0x10f7b1c4 */
  push32((uint32_t)(0x10f7b1c4u));
  /* 10f52960 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52966u);
  /* 10f52966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5296b call 0x10f53780 */
  push32(0x10f52970u); f_10f53780();
  /* 10f52970 mov esi, esp */
  ESI = (ESP);
  /* 10f52972 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52974 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52976 push 0x10f804c0 */
  push32((uint32_t)(0x10f804c0u));
  /* 10f5297b call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f52981u);
  /* 10f52981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52986 call 0x10f53780 */
  push32(0x10f5298bu); f_10f53780();
  /* 10f5298b mov esi, esp */
  ESI = (ESP);
  /* 10f5298d push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 10f52992 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52996 call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f5299cu);
  /* 10f5299c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5299f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f529a1 call 0x10f53780 */
  push32(0x10f529a6u); f_10f53780();
  /* 10f529a6 mov esi, esp */
  ESI = (ESP);
  /* 10f529a8 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 10f529ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f529af push 0 */
  push32((uint32_t)(0x0u));
  /* 10f529b1 call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f529b7u);
  /* 10f529b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f529ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f529bc call 0x10f53780 */
  push32(0x10f529c1u); f_10f53780();
  /* 10f529c1 mov esi, esp */
  ESI = (ESP);
  /* 10f529c3 push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 10f529c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f529ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10f529cc call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f529d2u);
  /* 10f529d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f529d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f529d7 call 0x10f53780 */
  push32(0x10f529dcu); f_10f53780();
L_10f529dc:;
  /* 10f529dc mov esi, esp */
  ESI = (ESP);
  /* 10f529de push 7 */
  push32((uint32_t)(0x7u));
  /* 10f529e0 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f529e6u);
  /* 10f529e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f529e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f529eb call 0x10f53780 */
  push32(0x10f529f0u); f_10f53780();
  /* 10f529f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f529f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f529f7 jne 0x10f52c4b */
  if (!C.zf) goto L_10f52c4b;
  /* 10f529fd mov esi, esp */
  ESI = (ESP);
  /* 10f529ff push 8 */
  push32((uint32_t)(0x8u));
  /* 10f52a01 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52a07u);
  /* 10f52a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a0c call 0x10f53780 */
  push32(0x10f52a11u); f_10f53780();
  /* 10f52a11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52a18 je 0x10f52c4b */
  if (C.zf) goto L_10f52c4b;
  /* 10f52a1e mov esi, esp */
  ESI = (ESP);
  /* 10f52a20 push 0x10f80478 */
  push32((uint32_t)(0x10f80478u));
  /* 10f52a25 push 0x10f804c0 */
  push32((uint32_t)(0x10f804c0u));
  /* 10f52a2a call dword ptr [0x10f8348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8348c))), 0x10f52a30u);
  /* 10f52a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a35 call 0x10f53780 */
  push32(0x10f52a3au); f_10f53780();
  /* 10f52a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52a3c jle 0x10f52c4b */
  if ((C.zf||C.sf!=C.of)) goto L_10f52c4b;
  /* 10f52a42 mov esi, esp */
  ESI = (ESP);
  /* 10f52a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52a46 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52a4d call dword ptr [0x10f83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83468))), 0x10f52a53u);
  /* 10f52a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a58 call 0x10f53780 */
  push32(0x10f52a5du); f_10f53780();
  /* 10f52a5d mov esi, esp */
  ESI = (ESP);
  /* 10f52a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52a61 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f52a63 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52a69u);
  /* 10f52a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a6e call 0x10f53780 */
  push32(0x10f52a73u); f_10f53780();
  /* 10f52a73 mov esi, esp */
  ESI = (ESP);
  /* 10f52a75 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52a77 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52a79 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52a7fu);
  /* 10f52a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a84 call 0x10f53780 */
  push32(0x10f52a89u); f_10f53780();
  /* 10f52a89 mov esi, esp */
  ESI = (ESP);
  /* 10f52a8b push 0x10f7b1bc */
  push32((uint32_t)(0x10f7b1bcu));
  /* 10f52a90 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52a96u);
  /* 10f52a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52a99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52a9b call 0x10f53780 */
  push32(0x10f52aa0u); f_10f53780();
  /* 10f52aa0 mov esi, esp */
  ESI = (ESP);
  /* 10f52aa2 push 0x10f7b1b4 */
  push32((uint32_t)(0x10f7b1b4u));
  /* 10f52aa7 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52aadu);
  /* 10f52aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ab2 call 0x10f53780 */
  push32(0x10f52ab7u); f_10f53780();
  /* 10f52ab7 mov esi, esp */
  ESI = (ESP);
  /* 10f52ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52abb push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f52ac0 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52ac6u);
  /* 10f52ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52acb call 0x10f53780 */
  push32(0x10f52ad0u); f_10f53780();
  /* 10f52ad0 mov esi, esp */
  ESI = (ESP);
  /* 10f52ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52ad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52ad6 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52adcu);
  /* 10f52adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52adf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ae1 call 0x10f53780 */
  push32(0x10f52ae6u); f_10f53780();
  /* 10f52ae6 mov esi, esp */
  ESI = (ESP);
  /* 10f52ae8 push 0x10f80538 */
  push32((uint32_t)(0x10f80538u));
  /* 10f52aed push 0x10f80530 */
  push32((uint32_t)(0x10f80530u));
  /* 10f52af2 call dword ptr [0x10f83484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83484))), 0x10f52af8u);
  /* 10f52af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52afd call 0x10f53780 */
  push32(0x10f52b02u); f_10f53780();
  /* 10f52b02 mov esi, esp */
  ESI = (ESP);
  /* 10f52b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52b06 call dword ptr [0x10f83480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83480))), 0x10f52b0cu);
  /* 10f52b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b11 call 0x10f53780 */
  push32(0x10f52b16u); f_10f53780();
  /* 10f52b16 mov esi, esp */
  ESI = (ESP);
  /* 10f52b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52b1a push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f52b1f call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52b25u);
  /* 10f52b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b2a call 0x10f53780 */
  push32(0x10f52b2fu); f_10f53780();
  /* 10f52b2f mov esi, esp */
  ESI = (ESP);
  /* 10f52b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52b35 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52b3bu);
  /* 10f52b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b40 call 0x10f53780 */
  push32(0x10f52b45u); f_10f53780();
  /* 10f52b45 mov esi, esp */
  ESI = (ESP);
  /* 10f52b47 push 0x10f80528 */
  push32((uint32_t)(0x10f80528u));
  /* 10f52b4c push 0x10f80520 */
  push32((uint32_t)(0x10f80520u));
  /* 10f52b51 call dword ptr [0x10f83484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83484))), 0x10f52b57u);
  /* 10f52b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b5c call 0x10f53780 */
  push32(0x10f52b61u); f_10f53780();
  /* 10f52b61 mov esi, esp */
  ESI = (ESP);
  /* 10f52b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52b65 call dword ptr [0x10f83480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83480))), 0x10f52b6bu);
  /* 10f52b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b70 call 0x10f53780 */
  push32(0x10f52b75u); f_10f53780();
  /* 10f52b75 mov esi, esp */
  ESI = (ESP);
  /* 10f52b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52b79 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f52b7b call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52b81u);
  /* 10f52b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b86 call 0x10f53780 */
  push32(0x10f52b8bu); f_10f53780();
  /* 10f52b8b mov esi, esp */
  ESI = (ESP);
  /* 10f52b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52b8f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f52b91 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52b97u);
  /* 10f52b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52b9c call 0x10f53780 */
  push32(0x10f52ba1u); f_10f53780();
  /* 10f52ba1 mov esi, esp */
  ESI = (ESP);
  /* 10f52ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52ba5 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f52ba7 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52badu);
  /* 10f52bad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52bb2 call 0x10f53780 */
  push32(0x10f52bb7u); f_10f53780();
  /* 10f52bb7 mov esi, esp */
  ESI = (ESP);
  /* 10f52bb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52bbb push 6 */
  push32((uint32_t)(0x6u));
  /* 10f52bbd call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52bc3u);
  /* 10f52bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52bc8 call 0x10f53780 */
  push32(0x10f52bcdu); f_10f53780();
  /* 10f52bcd mov esi, esp */
  ESI = (ESP);
  /* 10f52bcf push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f52bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52bd8 call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f52bdeu);
  /* 10f52bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52be3 call 0x10f53780 */
  push32(0x10f52be8u); f_10f53780();
  /* 10f52be8 mov esi, esp */
  ESI = (ESP);
  /* 10f52bea push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10f52bef push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52bf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52bf3 call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f52bf9u);
  /* 10f52bf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52bfe call 0x10f53780 */
  push32(0x10f52c03u); f_10f53780();
  /* 10f52c03 mov esi, esp */
  ESI = (ESP);
  /* 10f52c05 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10f52c0a push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52c0e call dword ptr [0x10f83490] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83490))), 0x10f52c14u);
  /* 10f52c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c19 call 0x10f53780 */
  push32(0x10f52c1eu); f_10f53780();
  /* 10f52c1e mov esi, esp */
  ESI = (ESP);
  /* 10f52c20 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f52c22 call dword ptr [0x10f83488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83488))), 0x10f52c28u);
  /* 10f52c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c2d call 0x10f53780 */
  push32(0x10f52c32u); f_10f53780();
  /* 10f52c32 mov esi, esp */
  ESI = (ESP);
  /* 10f52c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52c36 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52c3b call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52c41u);
  /* 10f52c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c46 call 0x10f53780 */
  push32(0x10f52c4bu); f_10f53780();
L_10f52c4b:;
  /* 10f52c4b mov esi, esp */
  ESI = (ESP);
  /* 10f52c4d push 9 */
  push32((uint32_t)(0x9u));
  /* 10f52c4f call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52c55u);
  /* 10f52c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c5a call 0x10f53780 */
  push32(0x10f52c5fu); f_10f53780();
  /* 10f52c5f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52c66 je 0x10f52cb4 */
  if (C.zf) goto L_10f52cb4;
  /* 10f52c68 mov esi, esp */
  ESI = (ESP);
  /* 10f52c6a push 0x10f80478 */
  push32((uint32_t)(0x10f80478u));
  /* 10f52c6f push 0x10f804c0 */
  push32((uint32_t)(0x10f804c0u));
  /* 10f52c74 call dword ptr [0x10f8348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8348c))), 0x10f52c7au);
  /* 10f52c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c7f call 0x10f53780 */
  push32(0x10f52c84u); f_10f53780();
  /* 10f52c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52c86 jne 0x10f52cb4 */
  if (!C.zf) goto L_10f52cb4;
  /* 10f52c88 mov esi, esp */
  ESI = (ESP);
  /* 10f52c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52c8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f52c8e call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52c94u);
  /* 10f52c94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52c97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52c99 call 0x10f53780 */
  push32(0x10f52c9eu); f_10f53780();
  /* 10f52c9e mov esi, esp */
  ESI = (ESP);
  /* 10f52ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f52ca2 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f52ca4 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52caau);
  /* 10f52caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52caf call 0x10f53780 */
  push32(0x10f52cb4u); f_10f53780();
L_10f52cb4:;
  /* 10f52cb4 mov esi, esp */
  ESI = (ESP);
  /* 10f52cb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f52cb8 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52cbeu);
  /* 10f52cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52cc3 call 0x10f53780 */
  push32(0x10f52cc8u); f_10f53780();
  /* 10f52cc8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52ccf je 0x10f52e99 */
  if (C.zf) goto L_10f52e99;
  /* 10f52cd5 mov esi, esp */
  ESI = (ESP);
  /* 10f52cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52cd9 call dword ptr [0x10f83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83454))), 0x10f52cdfu);
  /* 10f52cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ce4 call 0x10f53780 */
  push32(0x10f52ce9u); f_10f53780();
  /* 10f52ce9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52cf0 je 0x10f52e99 */
  if (C.zf) goto L_10f52e99;
  /* 10f52cf6 mov esi, esp */
  ESI = (ESP);
  /* 10f52cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52cfa push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52cff push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52d01 call dword ptr [0x10f83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83468))), 0x10f52d07u);
  /* 10f52d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d0c call 0x10f53780 */
  push32(0x10f52d11u); f_10f53780();
  /* 10f52d11 mov esi, esp */
  ESI = (ESP);
  /* 10f52d13 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52d18 call dword ptr [0x10f83474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83474))), 0x10f52d1eu);
  /* 10f52d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d23 call 0x10f53780 */
  push32(0x10f52d28u); f_10f53780();
  /* 10f52d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52d2a jle 0x10f52e0e */
  if ((C.zf||C.sf!=C.of)) goto L_10f52e0e;
  /* 10f52d30 mov esi, esp */
  ESI = (ESP);
  /* 10f52d32 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10f52d37 push 0x10f80438 */
  push32((uint32_t)(0x10f80438u));
  /* 10f52d3c push 0x10f804c0 */
  push32((uint32_t)(0x10f804c0u));
  /* 10f52d41 push 0x10f80488 */
  push32((uint32_t)(0x10f80488u));
  /* 10f52d46 call dword ptr [0x10f83498] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83498))), 0x10f52d4cu);
  /* 10f52d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d51 call 0x10f53780 */
  push32(0x10f52d56u); f_10f53780();
  /* 10f52d56 mov esi, esp */
  ESI = (ESP);
  /* 10f52d58 push 0x10f804e0 */
  push32((uint32_t)(0x10f804e0u));
  /* 10f52d5d call dword ptr [0x10f83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83440))), 0x10f52d63u);
  /* 10f52d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d68 call 0x10f53780 */
  push32(0x10f52d6du); f_10f53780();
  /* 10f52d6d mov esi, esp */
  ESI = (ESP);
  /* 10f52d6f push 0x10f7b1ac */
  push32((uint32_t)(0x10f7b1acu));
  /* 10f52d74 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52d7au);
  /* 10f52d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d7f call 0x10f53780 */
  push32(0x10f52d84u); f_10f53780();
  /* 10f52d84 mov esi, esp */
  ESI = (ESP);
  /* 10f52d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52d88 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f52d8a call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52d90u);
  /* 10f52d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52d95 call 0x10f53780 */
  push32(0x10f52d9au); f_10f53780();
  /* 10f52d9a mov esi, esp */
  ESI = (ESP);
  /* 10f52d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52d9e push 0x10f80498 */
  push32((uint32_t)(0x10f80498u));
  /* 10f52da3 call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52da9u);
  /* 10f52da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52dae call 0x10f53780 */
  push32(0x10f52db3u); f_10f53780();
  /* 10f52db3 mov esi, esp */
  ESI = (ESP);
  /* 10f52db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52db9 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52dbfu);
  /* 10f52dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52dc4 call 0x10f53780 */
  push32(0x10f52dc9u); f_10f53780();
  /* 10f52dc9 mov esi, esp */
  ESI = (ESP);
  /* 10f52dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52dcd call dword ptr [0x10f83480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83480))), 0x10f52dd3u);
  /* 10f52dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52dd8 call 0x10f53780 */
  push32(0x10f52dddu); f_10f53780();
  /* 10f52ddd mov esi, esp */
  ESI = (ESP);
  /* 10f52ddf push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f52de1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f52de3 call dword ptr [0x10f83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83450))), 0x10f52de9u);
  /* 10f52de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52dee call 0x10f53780 */
  push32(0x10f52df3u); f_10f53780();
  /* 10f52df3 mov esi, esp */
  ESI = (ESP);
  /* 10f52df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52df7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f52df9 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52dffu);
  /* 10f52dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e04 call 0x10f53780 */
  push32(0x10f52e09u); f_10f53780();
  /* 10f52e09 jmp 0x10f52e99 */
  goto L_10f52e99;
L_10f52e0e:;
  /* 10f52e0e mov esi, esp */
  ESI = (ESP);
  /* 10f52e10 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f52e12 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f52e14 push 0x10f804e0 */
  push32((uint32_t)(0x10f804e0u));
  /* 10f52e19 call dword ptr [0x10f83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83448))), 0x10f52e1fu);
  /* 10f52e1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e24 call 0x10f53780 */
  push32(0x10f52e29u); f_10f53780();
  /* 10f52e29 mov esi, esp */
  ESI = (ESP);
  /* 10f52e2b push 0x10f7b1ac */
  push32((uint32_t)(0x10f7b1acu));
  /* 10f52e30 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52e36u);
  /* 10f52e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e3b call 0x10f53780 */
  push32(0x10f52e40u); f_10f53780();
  /* 10f52e40 mov esi, esp */
  ESI = (ESP);
  /* 10f52e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52e44 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f52e46 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52e4cu);
  /* 10f52e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e51 call 0x10f53780 */
  push32(0x10f52e56u); f_10f53780();
  /* 10f52e56 mov esi, esp */
  ESI = (ESP);
  /* 10f52e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52e5a push 0x10f80498 */
  push32((uint32_t)(0x10f80498u));
  /* 10f52e5f call dword ptr [0x10f83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83460))), 0x10f52e65u);
  /* 10f52e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e6a call 0x10f53780 */
  push32(0x10f52e6fu); f_10f53780();
  /* 10f52e6f mov esi, esp */
  ESI = (ESP);
  /* 10f52e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52e73 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f52e75 call dword ptr [0x10f83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83458))), 0x10f52e7bu);
  /* 10f52e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e80 call 0x10f53780 */
  push32(0x10f52e85u); f_10f53780();
  /* 10f52e85 mov esi, esp */
  ESI = (ESP);
  /* 10f52e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52e89 call dword ptr [0x10f83480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83480))), 0x10f52e8fu);
  /* 10f52e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52e94 call 0x10f53780 */
  push32(0x10f52e99u); f_10f53780();
L_10f52e99:;
  /* 10f52e99 mov esi, esp */
  ESI = (ESP);
  /* 10f52e9b push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f52e9d call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52ea3u);
  /* 10f52ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ea8 call 0x10f53780 */
  push32(0x10f52eadu); f_10f53780();
  /* 10f52ead and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52eb4 je 0x10f52f3e */
  if (C.zf) goto L_10f52f3e;
  /* 10f52eba mov esi, esp */
  ESI = (ESP);
  /* 10f52ebc push 0xa */
  push32((uint32_t)(0xau));
  /* 10f52ebe call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52ec4u);
  /* 10f52ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ec9 call 0x10f53780 */
  push32(0x10f52eceu); f_10f53780();
  /* 10f52ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52ed5 jne 0x10f52f3e */
  if (!C.zf) goto L_10f52f3e;
  /* 10f52ed7 mov esi, esp */
  ESI = (ESP);
  /* 10f52ed9 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f52edb call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52ee1u);
  /* 10f52ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ee6 call 0x10f53780 */
  push32(0x10f52eebu); f_10f53780();
  /* 10f52eeb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52ef2 jne 0x10f52f3e */
  if (!C.zf) goto L_10f52f3e;
  /* 10f52ef4 mov esi, esp */
  ESI = (ESP);
  /* 10f52ef6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f52ef8 call dword ptr [0x10f83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83454))), 0x10f52efeu);
  /* 10f52efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f03 call 0x10f53780 */
  push32(0x10f52f08u); f_10f53780();
  /* 10f52f08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52f0f je 0x10f52f3e */
  if (C.zf) goto L_10f52f3e;
  /* 10f52f11 mov esi, esp */
  ESI = (ESP);
  /* 10f52f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52f15 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f52f17 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52f1du);
  /* 10f52f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f22 call 0x10f53780 */
  push32(0x10f52f27u); f_10f53780();
  /* 10f52f27 mov esi, esp */
  ESI = (ESP);
  /* 10f52f29 push 0x10f80488 */
  push32((uint32_t)(0x10f80488u));
  /* 10f52f2e call dword ptr [0x10f83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83440))), 0x10f52f34u);
  /* 10f52f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f39 call 0x10f53780 */
  push32(0x10f52f3eu); f_10f53780();
L_10f52f3e:;
  /* 10f52f3e mov esi, esp */
  ESI = (ESP);
  /* 10f52f40 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10f52f42 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52f48u);
  /* 10f52f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f4d call 0x10f53780 */
  push32(0x10f52f52u); f_10f53780();
  /* 10f52f52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52f59 je 0x10f52fb2 */
  if (C.zf) goto L_10f52fb2;
  /* 10f52f5b mov esi, esp */
  ESI = (ESP);
  /* 10f52f5d push 0x10f80460 */
  push32((uint32_t)(0x10f80460u));
  /* 10f52f62 call dword ptr [0x10f83474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83474))), 0x10f52f68u);
  /* 10f52f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f6d call 0x10f53780 */
  push32(0x10f52f72u); f_10f53780();
  /* 10f52f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52f74 jne 0x10f52fb2 */
  if (!C.zf) goto L_10f52fb2;
  /* 10f52f76 mov esi, esp */
  ESI = (ESP);
  /* 10f52f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52f7a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10f52f7c call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52f82u);
  /* 10f52f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f87 call 0x10f53780 */
  push32(0x10f52f8cu); f_10f53780();
  /* 10f52f8c mov esi, esp */
  ESI = (ESP);
  /* 10f52f8e push 0x10f7b1a0 */
  push32((uint32_t)(0x10f7b1a0u));
  /* 10f52f93 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f52f99u);
  /* 10f52f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52f9e call 0x10f53780 */
  push32(0x10f52fa3u); f_10f53780();
  /* 10f52fa3 mov esi, esp */
  ESI = (ESP);
  /* 10f52fa5 call dword ptr [0x10f8349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8349c))), 0x10f52fabu);
  /* 10f52fab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52fad call 0x10f53780 */
  push32(0x10f52fb2u); f_10f53780();
L_10f52fb2:;
  /* 10f52fb2 mov esi, esp */
  ESI = (ESP);
  /* 10f52fb4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f52fb6 call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f52fbcu);
  /* 10f52fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52fc1 call 0x10f53780 */
  push32(0x10f52fc6u); f_10f53780();
  /* 10f52fc6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52fcd je 0x10f53028 */
  if (C.zf) goto L_10f53028;
  /* 10f52fcf mov esi, esp */
  ESI = (ESP);
  /* 10f52fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52fd3 call dword ptr [0x10f83494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83494))), 0x10f52fd9u);
  /* 10f52fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52fde call 0x10f53780 */
  push32(0x10f52fe3u); f_10f53780();
  /* 10f52fe3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f52fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f52fea je 0x10f53028 */
  if (C.zf) goto L_10f53028;
  /* 10f52fec mov esi, esp */
  ESI = (ESP);
  /* 10f52fee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f52ff0 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10f52ff2 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f52ff8u);
  /* 10f52ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f52ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f52ffd call 0x10f53780 */
  push32(0x10f53002u); f_10f53780();
  /* 10f53002 mov esi, esp */
  ESI = (ESP);
  /* 10f53004 push 0x10f7b194 */
  push32((uint32_t)(0x10f7b194u));
  /* 10f53009 call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f5300fu);
  /* 10f5300f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53014 call 0x10f53780 */
  push32(0x10f53019u); f_10f53780();
  /* 10f53019 mov esi, esp */
  ESI = (ESP);
  /* 10f5301b call dword ptr [0x10f8349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8349c))), 0x10f53021u);
  /* 10f53021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53023 call 0x10f53780 */
  push32(0x10f53028u); f_10f53780();
L_10f53028:;
  /* 10f53028 mov esi, esp */
  ESI = (ESP);
  /* 10f5302a push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10f5302c call dword ptr [0x10f8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8342c))), 0x10f53032u);
  /* 10f53032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53035 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53037 call 0x10f53780 */
  push32(0x10f5303cu); f_10f53780();
  /* 10f5303c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53043 je 0x10f530bb */
  if (C.zf) goto L_10f530bb;
  /* 10f53045 mov esi, esp */
  ESI = (ESP);
  /* 10f53047 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f53049 call dword ptr [0x10f83494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83494))), 0x10f5304fu);
  /* 10f5304f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53054 call 0x10f53780 */
  push32(0x10f53059u); f_10f53780();
  /* 10f53059 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5305e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53060 je 0x10f530bb */
  if (C.zf) goto L_10f530bb;
  /* 10f53062 mov esi, esp */
  ESI = (ESP);
  /* 10f53064 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f53066 call dword ptr [0x10f83494] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83494))), 0x10f5306cu);
  /* 10f5306c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5306f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53071 call 0x10f53780 */
  push32(0x10f53076u); f_10f53780();
  /* 10f53076 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5307b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5307d je 0x10f530bb */
  if (C.zf) goto L_10f530bb;
  /* 10f5307f mov esi, esp */
  ESI = (ESP);
  /* 10f53081 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f53083 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10f53085 call dword ptr [0x10f83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83430))), 0x10f5308bu);
  /* 10f5308b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5308e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53090 call 0x10f53780 */
  push32(0x10f53095u); f_10f53780();
  /* 10f53095 mov esi, esp */
  ESI = (ESP);
  /* 10f53097 push 0x10f7b188 */
  push32((uint32_t)(0x10f7b188u));
  /* 10f5309c call dword ptr [0x10f8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8343c))), 0x10f530a2u);
  /* 10f530a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f530a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f530a7 call 0x10f53780 */
  push32(0x10f530acu); f_10f53780();
  /* 10f530ac mov esi, esp */
  ESI = (ESP);
  /* 10f530ae call dword ptr [0x10f834a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f834a4))), 0x10f530b4u);
  /* 10f530b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f530b6 call 0x10f53780 */
  push32(0x10f530bbu); f_10f53780();
L_10f530bb:;
  /* 10f530bb pop edi */
  EDI = (pop32());
  /* 10f530bc pop esi */
  ESI = (pop32());
  /* 10f530bd pop ebx */
  EBX = (pop32());
  /* 10f530be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f530c1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f530c3 call 0x10f53780 */
  push32(0x10f530c8u); f_10f53780();
  /* 10f530c8 mov esp, ebp */
  ESP = (EBP);
  /* 10f530ca pop ebp */
  EBP = (pop32());
  /* 10f530cb ret  */
  ESPCHK(0x10f519c0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10f53780 (56 bytes, 28 insns) */
void f_10f53780(void) {
  FTRACE(0x10f53780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53780 jne 0x10f53783 */
  if (!C.zf) goto L_10f53783;
  /* 10f53782 ret  */
  ESPCHK(0x10f53780u, _esp0);
  ESP += 4; return;
L_10f53783:;
  /* 10f53783 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53784 mov ebp, esp */
  EBP = (ESP);
  /* 10f53786 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f53789 push eax */
  push32((uint32_t)(EAX));
  /* 10f5378a push edx */
  push32((uint32_t)(EDX));
  /* 10f5378b push ebx */
  push32((uint32_t)(EBX));
  /* 10f5378c push esi */
  push32((uint32_t)(ESI));
  /* 10f5378d push edi */
  push32((uint32_t)(EDI));
  /* 10f5378e push 0x10f7b238 */
  push32((uint32_t)(0x10f7b238u));
  /* 10f53793 push 0x10f7b234 */
  push32((uint32_t)(0x10f7b234u));
  /* 10f53798 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10f5379a push 0x10f7b224 */
  push32((uint32_t)(0x10f7b224u));
  /* 10f5379f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f537a1 call 0x10f53b50 */
  push32(0x10f537a6u); f_10f53b50();
  /* 10f537a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f537a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f537ac jne 0x10f537af */
  if (!C.zf) goto L_10f537af;
  /* 10f537ae int3  */
  x86_unimpl("int3 @ 0x10f537ae");
L_10f537af:;
  /* 10f537af pop edi */
  EDI = (pop32());
  /* 10f537b0 pop esi */
  ESI = (pop32());
  /* 10f537b1 pop ebx */
  EBX = (pop32());
  /* 10f537b2 pop edx */
  EDX = (pop32());
  /* 10f537b3 pop eax */
  EAX = (pop32());
  /* 10f537b4 mov esp, ebp */
  ESP = (EBP);
  /* 10f537b6 pop ebp */
  EBP = (pop32());
  /* 10f537b7 ret  */
  ESPCHK(0x10f53780u, _esp0);
  ESP += 4; return;
}

/* FUN_100037c0 @ 0x10f537c0 (313 bytes, 78 insns) */
void f_10f537c0(void) {
  FTRACE(0x10f537c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f537c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f537c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f537c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f537c7 jne 0x10f53887 */
  if (!C.zf) goto L_10f53887;
  /* 10f537cd call dword ptr [0x10f83344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83344))), 0x10f537d3u);
  /* 10f537d3 mov dword ptr [0x10f805c4], eax */
  w32((uint32_t)(0x10f805c4), (EAX));
  /* 10f537d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f537da call 0x10f57280 */
  push32(0x10f537dfu); f_10f57280();
  /* 10f537df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f537e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f537e4 jne 0x10f537ed */
  if (!C.zf) goto L_10f537ed;
  /* 10f537e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f537e8 jmp 0x10f538f5 */
  goto L_10f538f5;
L_10f537ed:;
  /* 10f537ed mov eax, dword ptr [0x10f805c4] */
  EAX = (r32((uint32_t)(0x10f805c4)));
  /* 10f537f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f537f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f537fa mov dword ptr [0x10f805d0], eax */
  w32((uint32_t)(0x10f805d0), (EAX));
  /* 10f537ff mov ecx, dword ptr [0x10f805c4] */
  ECX = (r32((uint32_t)(0x10f805c4)));
  /* 10f53805 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5380b mov dword ptr [0x10f805cc], ecx */
  w32((uint32_t)(0x10f805cc), (ECX));
  /* 10f53811 mov edx, dword ptr [0x10f805cc] */
  EDX = (r32((uint32_t)(0x10f805cc)));
  /* 10f53817 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10f5381a add edx, dword ptr [0x10f805d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f805d0))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53820 mov dword ptr [0x10f805c8], edx */
  w32((uint32_t)(0x10f805c8), (EDX));
  /* 10f53826 mov eax, dword ptr [0x10f805c4] */
  EAX = (r32((uint32_t)(0x10f805c4)));
  /* 10f5382b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f5382e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53833 mov dword ptr [0x10f805c4], eax */
  w32((uint32_t)(0x10f805c4), (EAX));
  /* 10f53838 call 0x10f543f0 */
  push32(0x10f5383du); f_10f543f0();
  /* 10f5383d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5383f jne 0x10f5384d */
  if (!C.zf) goto L_10f5384d;
  /* 10f53841 call 0x10f572d0 */
  push32(0x10f53846u); f_10f572d0();
  /* 10f53846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f53848 jmp 0x10f538f5 */
  goto L_10f538f5;
L_10f5384d:;
  /* 10f5384d call dword ptr [0x10f83340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83340))), 0x10f53853u);
  /* 10f53853 mov dword ptr [0x10f8210c], eax */
  w32((uint32_t)(0x10f8210c), (EAX));
  /* 10f53858 call 0x10f57060 */
  push32(0x10f5385du); f_10f57060();
  /* 10f5385d mov dword ptr [0x10f805ac], eax */
  w32((uint32_t)(0x10f805ac), (EAX));
  /* 10f53862 call 0x10f546a0 */
  push32(0x10f53867u); f_10f546a0();
  /* 10f53867 call 0x10f56b50 */
  push32(0x10f5386cu); f_10f56b50();
  /* 10f5386c call 0x10f56a00 */
  push32(0x10f53871u); f_10f56a00();
  /* 10f53871 call 0x10f541f0 */
  push32(0x10f53876u); f_10f541f0();
  /* 10f53876 mov ecx, dword ptr [0x10f805a8] */
  ECX = (r32((uint32_t)(0x10f805a8)));
  /* 10f5387c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5387f mov dword ptr [0x10f805a8], ecx */
  w32((uint32_t)(0x10f805a8), (ECX));
  /* 10f53885 jmp 0x10f538f0 */
  goto L_10f538f0;
L_10f53887:;
  /* 10f53887 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5388b jne 0x10f538e0 */
  if (!C.zf) goto L_10f538e0;
  /* 10f5388d cmp dword ptr [0x10f805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53894 jle 0x10f538da */
  if ((C.zf||C.sf!=C.of)) goto L_10f538da;
  /* 10f53896 mov edx, dword ptr [0x10f805a8] */
  EDX = (r32((uint32_t)(0x10f805a8)));
  /* 10f5389c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5389f mov dword ptr [0x10f805a8], edx */
  w32((uint32_t)(0x10f805a8), (EDX));
  /* 10f538a5 cmp dword ptr [0x10f805fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f538ac jne 0x10f538b3 */
  if (!C.zf) goto L_10f538b3;
  /* 10f538ae call 0x10f54270 */
  push32(0x10f538b3u); f_10f54270();
L_10f538b3:;
  /* 10f538b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f538b5 call 0x10f55fa0 */
  push32(0x10f538bau); f_10f55fa0();
  /* 10f538ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f538bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f538c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f538c2 je 0x10f538c9 */
  if (C.zf) goto L_10f538c9;
  /* 10f538c4 call 0x10f568b0 */
  push32(0x10f538c9u); f_10f568b0();
L_10f538c9:;
  /* 10f538c9 call 0x10f549d0 */
  push32(0x10f538ceu); f_10f549d0();
  /* 10f538ce call 0x10f54480 */
  push32(0x10f538d3u); f_10f54480();
  /* 10f538d3 call 0x10f572d0 */
  push32(0x10f538d8u); f_10f572d0();
  /* 10f538d8 jmp 0x10f538de */
  goto L_10f538de;
L_10f538da:;
  /* 10f538da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f538dc jmp 0x10f538f5 */
  goto L_10f538f5;
L_10f538de:;
  /* 10f538de jmp 0x10f538f0 */
  goto L_10f538f0;
L_10f538e0:;
  /* 10f538e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f538e4 jne 0x10f538f0 */
  if (!C.zf) goto L_10f538f0;
  /* 10f538e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f538e8 call 0x10f54570 */
  push32(0x10f538edu); f_10f54570();
  /* 10f538ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f538f0:;
  /* 10f538f0 mov eax, 1 */
  EAX = (0x1u);
L_10f538f5:;
  /* 10f538f5 pop ebp */
  EBP = (pop32());
  /* 10f538f6 ret 0xc */
  ESPCHK(0x10f537c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10f53900 (243 bytes, 86 insns) */
void f_10f53900(void) {
  FTRACE(0x10f53900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53900 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53901 mov ebp, esp */
  EBP = (ESP);
  /* 10f53903 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53904 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5390b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5390f jne 0x10f53921 */
  if (!C.zf) goto L_10f53921;
  /* 10f53911 cmp dword ptr [0x10f805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53918 jne 0x10f53921 */
  if (!C.zf) goto L_10f53921;
  /* 10f5391a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5391c jmp 0x10f539ed */
  goto L_10f539ed;
L_10f53921:;
  /* 10f53921 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53925 je 0x10f5392d */
  if (C.zf) goto L_10f5392d;
  /* 10f53927 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5392b jne 0x10f5396f */
  if (!C.zf) goto L_10f5396f;
L_10f5392d:;
  /* 10f5392d cmp dword ptr [0x10f8211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53934 je 0x10f5394b */
  if (C.zf) goto L_10f5394b;
  /* 10f53936 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53939 push eax */
  push32((uint32_t)(EAX));
  /* 10f5393a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5393d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5393e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53941 push edx */
  push32((uint32_t)(EDX));
  /* 10f53942 call dword ptr [0x10f8211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8211c))), 0x10f53948u);
  /* 10f53948 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5394b:;
  /* 10f5394b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5394f je 0x10f53965 */
  if (C.zf) goto L_10f53965;
  /* 10f53951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53954 push eax */
  push32((uint32_t)(EAX));
  /* 10f53955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53958 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5395c push edx */
  push32((uint32_t)(EDX));
  /* 10f5395d call 0x10f537c0 */
  push32(0x10f53962u); f_10f537c0();
  /* 10f53962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f53965:;
  /* 10f53965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53969 jne 0x10f5396f */
  if (!C.zf) goto L_10f5396f;
  /* 10f5396b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5396d jmp 0x10f539ed */
  goto L_10f539ed;
L_10f5396f:;
  /* 10f5396f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53972 push eax */
  push32((uint32_t)(EAX));
  /* 10f53973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53976 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5397a push edx */
  push32((uint32_t)(EDX));
  /* 10f5397b call 0x10f5100a */
  push32(0x10f53980u); f_10f5100a();
  /* 10f53980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f53983 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53987 jne 0x10f5399e */
  if (!C.zf) goto L_10f5399e;
  /* 10f53989 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5398d jne 0x10f5399e */
  if (!C.zf) goto L_10f5399e;
  /* 10f5398f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53992 push eax */
  push32((uint32_t)(EAX));
  /* 10f53993 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f53995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53998 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53999 call 0x10f537c0 */
  push32(0x10f5399eu); f_10f537c0();
L_10f5399e:;
  /* 10f5399e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f539a2 je 0x10f539aa */
  if (C.zf) goto L_10f539aa;
  /* 10f539a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f539a8 jne 0x10f539ea */
  if (!C.zf) goto L_10f539ea;
L_10f539aa:;
  /* 10f539aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f539ad push edx */
  push32((uint32_t)(EDX));
  /* 10f539ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f539b1 push eax */
  push32((uint32_t)(EAX));
  /* 10f539b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f539b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f539b6 call 0x10f537c0 */
  push32(0x10f539bbu); f_10f537c0();
  /* 10f539bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f539bd jne 0x10f539c6 */
  if (!C.zf) goto L_10f539c6;
  /* 10f539bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f539c6:;
  /* 10f539c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f539ca je 0x10f539ea */
  if (C.zf) goto L_10f539ea;
  /* 10f539cc cmp dword ptr [0x10f8211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f539d3 je 0x10f539ea */
  if (C.zf) goto L_10f539ea;
  /* 10f539d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f539d8 push edx */
  push32((uint32_t)(EDX));
  /* 10f539d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f539dc push eax */
  push32((uint32_t)(EAX));
  /* 10f539dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f539e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f539e1 call dword ptr [0x10f8211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8211c))), 0x10f539e7u);
  /* 10f539e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f539ea:;
  /* 10f539ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f539ed:;
  /* 10f539ed mov esp, ebp */
  ESP = (EBP);
  /* 10f539ef pop ebp */
  EBP = (pop32());
  /* 10f539f0 ret 0xc */
  ESPCHK(0x10f53900u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10f53a00 (58 bytes, 18 insns) */
void f_10f53a00(void) {
  FTRACE(0x10f53a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53a01 mov ebp, esp */
  EBP = (ESP);
  /* 10f53a03 cmp dword ptr [0x10f805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a0a je 0x10f53a1e */
  if (C.zf) goto L_10f53a1e;
  /* 10f53a0c cmp dword ptr [0x10f805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a13 jne 0x10f53a23 */
  if (!C.zf) goto L_10f53a23;
  /* 10f53a15 cmp dword ptr [0x10f805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a1c jne 0x10f53a23 */
  if (!C.zf) goto L_10f53a23;
L_10f53a1e:;
  /* 10f53a1e call 0x10f57370 */
  push32(0x10f53a23u); f_10f57370();
L_10f53a23:;
  /* 10f53a23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53a26 push eax */
  push32((uint32_t)(EAX));
  /* 10f53a27 call 0x10f573c0 */
  push32(0x10f53a2cu); f_10f573c0();
  /* 10f53a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53a2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f53a34 call dword ptr [0x10f7ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7ea30))), 0x10f53a3au);
  /* 10f53a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53a3d pop ebp */
  EBP = (pop32());
  /* 10f53a3e ret  */
  ESPCHK(0x10f53a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a40 @ 0x10f53a40 (11 bytes, 5 insns) */
void f_10f53a40(void) {
  FTRACE(0x10f53a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53a41 mov ebp, esp */
  EBP = (ESP);
  /* 10f53a43 call dword ptr [0x10f83348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83348))), 0x10f53a49u);
  /* 10f53a49 pop ebp */
  EBP = (pop32());
  /* 10f53a4a ret  */
  ESPCHK(0x10f53a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x10f53a50 (87 bytes, 30 insns) */
void f_10f53a50(void) {
  FTRACE(0x10f53a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53a51 mov ebp, esp */
  EBP = (ESP);
  /* 10f53a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a58 jl 0x10f53a60 */
  if ((C.sf!=C.of)) goto L_10f53a60;
  /* 10f53a5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a5e jl 0x10f53a65 */
  if ((C.sf!=C.of)) goto L_10f53a65;
L_10f53a60:;
  /* 10f53a60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53a63 jmp 0x10f53aa3 */
  goto L_10f53aa3;
L_10f53a65:;
  /* 10f53a65 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53a69 jne 0x10f53a77 */
  if (!C.zf) goto L_10f53a77;
  /* 10f53a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53a6e mov eax, dword ptr [eax*4 + 0x10f7ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f7ea38)));
  /* 10f53a75 jmp 0x10f53aa3 */
  goto L_10f53aa3;
L_10f53a77:;
  /* 10f53a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53a7a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f53a7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f53a7f je 0x10f53a86 */
  if (C.zf) goto L_10f53a86;
  /* 10f53a81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53a84 jmp 0x10f53aa3 */
  goto L_10f53aa3;
L_10f53a86:;
  /* 10f53a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53a89 mov eax, dword ptr [edx*4 + 0x10f7ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f7ea38)));
  /* 10f53a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f53a93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53a99 mov dword ptr [ecx*4 + 0x10f7ea38], edx */
  w32((uint32_t)(ECX*4 + 0x10f7ea38), (EDX));
  /* 10f53aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f53aa3:;
  /* 10f53aa3 mov esp, ebp */
  ESP = (EBP);
  /* 10f53aa5 pop ebp */
  EBP = (pop32());
  /* 10f53aa6 ret  */
  ESPCHK(0x10f53a50u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10f53ab0 (126 bytes, 38 insns) */
void f_10f53ab0(void) {
  FTRACE(0x10f53ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10f53ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53ab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53ab8 jl 0x10f53ac0 */
  if ((C.sf!=C.of)) goto L_10f53ac0;
  /* 10f53aba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53abe jl 0x10f53ac7 */
  if ((C.sf!=C.of)) goto L_10f53ac7;
L_10f53ac0:;
  /* 10f53ac0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10f53ac5 jmp 0x10f53b2a */
  goto L_10f53b2a;
L_10f53ac7:;
  /* 10f53ac7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53acb jne 0x10f53ad9 */
  if (!C.zf) goto L_10f53ad9;
  /* 10f53acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53ad0 mov eax, dword ptr [eax*4 + 0x10f7ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10f7ea44)));
  /* 10f53ad7 jmp 0x10f53b2a */
  goto L_10f53b2a;
L_10f53ad9:;
  /* 10f53ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53adc mov edx, dword ptr [ecx*4 + 0x10f7ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea44)));
  /* 10f53ae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f53ae6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53aea jne 0x10f53b00 */
  if (!C.zf) goto L_10f53b00;
  /* 10f53aec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10f53aee call dword ptr [0x10f8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8334c))), 0x10f53af4u);
  /* 10f53af4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53af7 mov dword ptr [ecx*4 + 0x10f7ea44], eax */
  w32((uint32_t)(ECX*4 + 0x10f7ea44), (EAX));
  /* 10f53afe jmp 0x10f53b27 */
  goto L_10f53b27;
L_10f53b00:;
  /* 10f53b00 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53b04 jne 0x10f53b1a */
  if (!C.zf) goto L_10f53b1a;
  /* 10f53b06 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f53b08 call dword ptr [0x10f8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8334c))), 0x10f53b0eu);
  /* 10f53b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53b11 mov dword ptr [edx*4 + 0x10f7ea44], eax */
  w32((uint32_t)(EDX*4 + 0x10f7ea44), (EAX));
  /* 10f53b18 jmp 0x10f53b27 */
  goto L_10f53b27;
L_10f53b1a:;
  /* 10f53b1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53b20 mov dword ptr [eax*4 + 0x10f7ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x10f7ea44), (ECX));
L_10f53b27:;
  /* 10f53b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f53b2a:;
  /* 10f53b2a mov esp, ebp */
  ESP = (EBP);
  /* 10f53b2c pop ebp */
  EBP = (pop32());
  /* 10f53b2d ret  */
  ESPCHK(0x10f53ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x10f53b30 (28 bytes, 11 insns) */
void f_10f53b30(void) {
  FTRACE(0x10f53b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53b31 mov ebp, esp */
  EBP = (ESP);
  /* 10f53b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53b34 mov eax, dword ptr [0x10f82100] */
  EAX = (r32((uint32_t)(0x10f82100)));
  /* 10f53b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f53b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53b3f mov dword ptr [0x10f82100], ecx */
  w32((uint32_t)(0x10f82100), (ECX));
  /* 10f53b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f53b48 mov esp, ebp */
  ESP = (EBP);
  /* 10f53b4a pop ebp */
  EBP = (pop32());
  /* 10f53b4b ret  */
  ESPCHK(0x10f53b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x10f53b50 (912 bytes, 248 insns) */
void f_10f53b50(void) {
  FTRACE(0x10f53b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53b51 mov ebp, esp */
  EBP = (ESP);
  /* 10f53b53 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10f53b58 call 0x10f57c30 */
  push32(0x10f53b5du); f_10f57c30();
  /* 10f53b5d push edi */
  push32((uint32_t)(EDI));
  /* 10f53b5e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10f53b65 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f53b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f53b6c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10f53b72 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f53b74 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f53b76 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f53b77 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10f53b7e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f53b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f53b85 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10f53b8b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f53b8d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f53b8f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f53b90 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10f53b97 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f53b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f53b9e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10f53ba4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f53ba6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f53ba8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f53ba9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10f53bac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10f53bb2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53bb6 jl 0x10f53bbe */
  if ((C.sf!=C.of)) goto L_10f53bbe;
  /* 10f53bb8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53bbc jl 0x10f53bc6 */
  if ((C.sf!=C.of)) goto L_10f53bc6;
L_10f53bbe:;
  /* 10f53bbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53bc1 jmp 0x10f53edb */
  goto L_10f53edb;
L_10f53bc6:;
  /* 10f53bc6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53bca jne 0x10f53c70 */
  if (!C.zf) goto L_10f53c70;
  /* 10f53bd0 push 0x10f7ea34 */
  push32((uint32_t)(0x10f7ea34u));
  /* 10f53bd5 call dword ptr [0x10f83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83364))), 0x10f53bdbu);
  /* 10f53bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53bdd jle 0x10f53c70 */
  if ((C.zf||C.sf!=C.of)) goto L_10f53c70;
  /* 10f53be3 cmp dword ptr [0x10f805bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53bea jne 0x10f53c2e */
  if (!C.zf) goto L_10f53c2e;
  /* 10f53bec push 0x10f7b3e0 */
  push32((uint32_t)(0x10f7b3e0u));
  /* 10f53bf1 call dword ptr [0x10f83360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83360))), 0x10f53bf7u);
  /* 10f53bf7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10f53bfd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53c04 je 0x10f53c26 */
  if (C.zf) goto L_10f53c26;
  /* 10f53c06 push 0x10f7b3d4 */
  push32((uint32_t)(0x10f7b3d4u));
  /* 10f53c0b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10f53c11 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53c12 call dword ptr [0x10f8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8335c))), 0x10f53c18u);
  /* 10f53c18 mov dword ptr [0x10f805bc], eax */
  w32((uint32_t)(0x10f805bc), (EAX));
  /* 10f53c1d cmp dword ptr [0x10f805bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53c24 jne 0x10f53c2e */
  if (!C.zf) goto L_10f53c2e;
L_10f53c26:;
  /* 10f53c26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53c29 jmp 0x10f53edb */
  goto L_10f53edb;
L_10f53c2e:;
  /* 10f53c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53c31 push edx */
  push32((uint32_t)(EDX));
  /* 10f53c32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53c35 push eax */
  push32((uint32_t)(EAX));
  /* 10f53c36 push 0x10f7b3a0 */
  push32((uint32_t)(0x10f7b3a0u));
  /* 10f53c3b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10f53c41 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53c42 call dword ptr [0x10f805bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f805bc))), 0x10f53c48u);
  /* 10f53c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53c4b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f53c51 push edx */
  push32((uint32_t)(EDX));
  /* 10f53c52 call dword ptr [0x10f83358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83358))), 0x10f53c58u);
  /* 10f53c58 push 0x10f7ea34 */
  push32((uint32_t)(0x10f7ea34u));
  /* 10f53c5d call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f53c63u);
  /* 10f53c63 call 0x10f53a40 */
  push32(0x10f53c68u); f_10f53a40();
  /* 10f53c68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f53c6b jmp 0x10f53edb */
  goto L_10f53edb;
L_10f53c70:;
  /* 10f53c70 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53c74 je 0x10f53cad */
  if (C.zf) goto L_10f53cad;
  /* 10f53c76 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10f53c7c push eax */
  push32((uint32_t)(EAX));
  /* 10f53c7d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f53c80 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53c81 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10f53c86 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10f53c8c push edx */
  push32((uint32_t)(EDX));
  /* 10f53c8d call 0x10f57b30 */
  push32(0x10f53c92u); f_10f57b30();
  /* 10f53c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53c97 jge 0x10f53cad */
  if ((C.sf==C.of)) goto L_10f53cad;
  /* 10f53c99 push 0x10f7b374 */
  push32((uint32_t)(0x10f7b374u));
  /* 10f53c9e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10f53ca4 push eax */
  push32((uint32_t)(EAX));
  /* 10f53ca5 call 0x10f57a40 */
  push32(0x10f53caau); f_10f57a40();
  /* 10f53caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53cad:;
  /* 10f53cad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53cb1 jne 0x10f53ce5 */
  if (!C.zf) goto L_10f53ce5;
  /* 10f53cb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53cb7 je 0x10f53cc5 */
  if (C.zf) goto L_10f53cc5;
  /* 10f53cb9 mov dword ptr [ebp - 0x3028], 0x10f7b360 */
  w32((uint32_t)(EBP + -0x3028), (0x10f7b360u));
  /* 10f53cc3 jmp 0x10f53ccf */
  goto L_10f53ccf;
L_10f53cc5:;
  /* 10f53cc5 mov dword ptr [ebp - 0x3028], 0x10f7b34c */
  w32((uint32_t)(EBP + -0x3028), (0x10f7b34cu));
L_10f53ccf:;
  /* 10f53ccf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10f53cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53cd6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f53cdc push edx */
  push32((uint32_t)(EDX));
  /* 10f53cdd call 0x10f57a40 */
  push32(0x10f53ce2u); f_10f57a40();
  /* 10f53ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53ce5:;
  /* 10f53ce5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10f53ceb push eax */
  push32((uint32_t)(EAX));
  /* 10f53cec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10f53cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53cf3 call 0x10f57a50 */
  push32(0x10f53cf8u); f_10f57a50();
  /* 10f53cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53cfb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53cff jne 0x10f53d3a */
  if (!C.zf) goto L_10f53d3a;
  /* 10f53d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53d04 mov eax, dword ptr [edx*4 + 0x10f7ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f7ea38)));
  /* 10f53d0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f53d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53d10 je 0x10f53d26 */
  if (C.zf) goto L_10f53d26;
  /* 10f53d12 push 0x10f7b348 */
  push32((uint32_t)(0x10f7b348u));
  /* 10f53d17 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10f53d1d push ecx */
  push32((uint32_t)(ECX));
  /* 10f53d1e call 0x10f57a50 */
  push32(0x10f53d23u); f_10f57a50();
  /* 10f53d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53d26:;
  /* 10f53d26 push 0x10f7b344 */
  push32((uint32_t)(0x10f7b344u));
  /* 10f53d2b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f53d31 push edx */
  push32((uint32_t)(EDX));
  /* 10f53d32 call 0x10f57a50 */
  push32(0x10f53d37u); f_10f57a50();
  /* 10f53d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53d3a:;
  /* 10f53d3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53d3e je 0x10f53d82 */
  if (C.zf) goto L_10f53d82;
  /* 10f53d40 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10f53d46 push eax */
  push32((uint32_t)(EAX));
  /* 10f53d47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53d4a push ecx */
  push32((uint32_t)(ECX));
  /* 10f53d4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53d4e push edx */
  push32((uint32_t)(EDX));
  /* 10f53d4f push 0x10f7b338 */
  push32((uint32_t)(0x10f7b338u));
  /* 10f53d54 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f53d59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f53d5f push eax */
  push32((uint32_t)(EAX));
  /* 10f53d60 call 0x10f57940 */
  push32(0x10f53d65u); f_10f57940();
  /* 10f53d65 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53d6a jge 0x10f53d80 */
  if ((C.sf==C.of)) goto L_10f53d80;
  /* 10f53d6c push 0x10f7b374 */
  push32((uint32_t)(0x10f7b374u));
  /* 10f53d71 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10f53d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53d78 call 0x10f57a40 */
  push32(0x10f53d7du); f_10f57a40();
  /* 10f53d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53d80:;
  /* 10f53d80 jmp 0x10f53d98 */
  goto L_10f53d98;
L_10f53d82:;
  /* 10f53d82 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f53d88 push edx */
  push32((uint32_t)(EDX));
  /* 10f53d89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f53d8f push eax */
  push32((uint32_t)(EAX));
  /* 10f53d90 call 0x10f57a40 */
  push32(0x10f53d95u); f_10f57a40();
  /* 10f53d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53d98:;
  /* 10f53d98 cmp dword ptr [0x10f82100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f82100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53d9f je 0x10f53ddc */
  if (C.zf) goto L_10f53ddc;
  /* 10f53da1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10f53da7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53da8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f53dae push edx */
  push32((uint32_t)(EDX));
  /* 10f53daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53db2 push eax */
  push32((uint32_t)(EAX));
  /* 10f53db3 call dword ptr [0x10f82100] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f82100))), 0x10f53db9u);
  /* 10f53db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53dbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53dbe je 0x10f53ddc */
  if (C.zf) goto L_10f53ddc;
  /* 10f53dc0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53dc4 jne 0x10f53dd1 */
  if (!C.zf) goto L_10f53dd1;
  /* 10f53dc6 push 0x10f7ea34 */
  push32((uint32_t)(0x10f7ea34u));
  /* 10f53dcb call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f53dd1u);
L_10f53dd1:;
  /* 10f53dd1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10f53dd7 jmp 0x10f53edb */
  goto L_10f53edb;
L_10f53ddc:;
  /* 10f53ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53ddf mov edx, dword ptr [ecx*4 + 0x10f7ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea38)));
  /* 10f53de6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f53de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f53deb je 0x10f53e2b */
  if (C.zf) goto L_10f53e2b;
  /* 10f53ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53df0 cmp dword ptr [eax*4 + 0x10f7ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10f7ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53df8 je 0x10f53e2b */
  if (C.zf) goto L_10f53e2b;
  /* 10f53dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f53dfc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10f53e02 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53e03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f53e09 push edx */
  push32((uint32_t)(EDX));
  /* 10f53e0a call 0x10f578c0 */
  push32(0x10f53e0fu); f_10f578c0();
  /* 10f53e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53e12 push eax */
  push32((uint32_t)(EAX));
  /* 10f53e13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f53e19 push eax */
  push32((uint32_t)(EAX));
  /* 10f53e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53e1d mov edx, dword ptr [ecx*4 + 0x10f7ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea44)));
  /* 10f53e24 push edx */
  push32((uint32_t)(EDX));
  /* 10f53e25 call dword ptr [0x10f83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83350))), 0x10f53e2bu);
L_10f53e2b:;
  /* 10f53e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53e2e mov ecx, dword ptr [eax*4 + 0x10f7ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7ea38)));
  /* 10f53e35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f53e38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f53e3a je 0x10f53e49 */
  if (C.zf) goto L_10f53e49;
  /* 10f53e3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f53e42 push edx */
  push32((uint32_t)(EDX));
  /* 10f53e43 call dword ptr [0x10f83358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83358))), 0x10f53e49u);
L_10f53e49:;
  /* 10f53e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53e4c mov ecx, dword ptr [eax*4 + 0x10f7ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7ea38)));
  /* 10f53e53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f53e56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f53e58 je 0x10f53ec8 */
  if (C.zf) goto L_10f53ec8;
  /* 10f53e5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53e5e je 0x10f53e7d */
  if (C.zf) goto L_10f53e7d;
  /* 10f53e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f53e62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10f53e68 push edx */
  push32((uint32_t)(EDX));
  /* 10f53e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f53e6c push eax */
  push32((uint32_t)(EAX));
  /* 10f53e6d call 0x10f575d0 */
  push32(0x10f53e72u); f_10f575d0();
  /* 10f53e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53e75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10f53e7b jmp 0x10f53e87 */
  goto L_10f53e87;
L_10f53e7d:;
  /* 10f53e7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10f53e87:;
  /* 10f53e87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10f53e8d push ecx */
  push32((uint32_t)(ECX));
  /* 10f53e8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f53e91 push edx */
  push32((uint32_t)(EDX));
  /* 10f53e92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10f53e98 push eax */
  push32((uint32_t)(EAX));
  /* 10f53e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f53e9c push ecx */
  push32((uint32_t)(ECX));
  /* 10f53e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f53ea0 push edx */
  push32((uint32_t)(EDX));
  /* 10f53ea1 call 0x10f53ee0 */
  push32(0x10f53ea6u); f_10f53ee0();
  /* 10f53ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53ea9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10f53eaf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53eb3 jne 0x10f53ec0 */
  if (!C.zf) goto L_10f53ec0;
  /* 10f53eb5 push 0x10f7ea34 */
  push32((uint32_t)(0x10f7ea34u));
  /* 10f53eba call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f53ec0u);
L_10f53ec0:;
  /* 10f53ec0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10f53ec6 jmp 0x10f53edb */
  goto L_10f53edb;
L_10f53ec8:;
  /* 10f53ec8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53ecc jne 0x10f53ed9 */
  if (!C.zf) goto L_10f53ed9;
  /* 10f53ece push 0x10f7ea34 */
  push32((uint32_t)(0x10f7ea34u));
  /* 10f53ed3 call dword ptr [0x10f83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83354))), 0x10f53ed9u);
L_10f53ed9:;
  /* 10f53ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f53edb:;
  /* 10f53edb pop edi */
  EDI = (pop32());
  /* 10f53edc mov esp, ebp */
  ESP = (EBP);
  /* 10f53ede pop ebp */
  EBP = (pop32());
  /* 10f53edf ret  */
  ESPCHK(0x10f53b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee0 @ 0x10f53ee0 (780 bytes, 197 insns) */
void f_10f53ee0(void) {
  FTRACE(0x10f53ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f53ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f53ee1 mov ebp, esp */
  EBP = (ESP);
  /* 10f53ee3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10f53ee8 call 0x10f57c30 */
  push32(0x10f53eedu); f_10f57c30();
L_10f53eed:;
  /* 10f53eed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53ef1 jne 0x10f53f18 */
  if (!C.zf) goto L_10f53f18;
  /* 10f53ef3 push 0x10f7b530 */
  push32((uint32_t)(0x10f7b530u));
  /* 10f53ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f53efa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10f53eff push 0x10f7b524 */
  push32((uint32_t)(0x10f7b524u));
  /* 10f53f04 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f53f06 call 0x10f53b50 */
  push32(0x10f53f0bu); f_10f53b50();
  /* 10f53f0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53f11 jne 0x10f53f18 */
  if (!C.zf) goto L_10f53f18;
  /* 10f53f13 call 0x10f53a40 */
  push32(0x10f53f18u); f_10f53a40();
L_10f53f18:;
  /* 10f53f18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f53f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53f1c jne 0x10f53eed */
  if (!C.zf) goto L_10f53eed;
  /* 10f53f1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f53f23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10f53f29 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f53f2c call dword ptr [0x10f83368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83368))), 0x10f53f32u);
  /* 10f53f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f53f34 jne 0x10f53f4a */
  if (!C.zf) goto L_10f53f4a;
  /* 10f53f36 push 0x10f7b50c */
  push32((uint32_t)(0x10f7b50cu));
  /* 10f53f3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10f53f41 push edx */
  push32((uint32_t)(EDX));
  /* 10f53f42 call 0x10f57a40 */
  push32(0x10f53f47u); f_10f57a40();
  /* 10f53f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53f4a:;
  /* 10f53f4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10f53f50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f53f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f53f56 push ecx */
  push32((uint32_t)(ECX));
  /* 10f53f57 call 0x10f578c0 */
  push32(0x10f53f5cu); f_10f578c0();
  /* 10f53f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53f5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53f62 jbe 0x10f53f8d */
  if ((C.cf||C.zf)) goto L_10f53f8d;
  /* 10f53f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f53f67 push edx */
  push32((uint32_t)(EDX));
  /* 10f53f68 call 0x10f578c0 */
  push32(0x10f53f6du); f_10f578c0();
  /* 10f53f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f53f73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10f53f77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f53f7a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f53f7c push 0x10f7b508 */
  push32((uint32_t)(0x10f7b508u));
  /* 10f53f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f53f84 push eax */
  push32((uint32_t)(EAX));
  /* 10f53f85 call 0x10f582b0 */
  push32(0x10f53f8au); f_10f582b0();
  /* 10f53f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53f8d:;
  /* 10f53f8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f53f90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10f53f96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53f9d je 0x10f53fe8 */
  if (C.zf) goto L_10f53fe8;
  /* 10f53f9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f53fa5 push edx */
  push32((uint32_t)(EDX));
  /* 10f53fa6 call 0x10f578c0 */
  push32(0x10f53fabu); f_10f578c0();
  /* 10f53fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53fae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53fb1 jbe 0x10f53fe8 */
  if ((C.cf||C.zf)) goto L_10f53fe8;
  /* 10f53fb3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f53fb9 push eax */
  push32((uint32_t)(EAX));
  /* 10f53fba call 0x10f578c0 */
  push32(0x10f53fbfu); f_10f578c0();
  /* 10f53fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f53fc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f53fc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10f53fcc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10f53fd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f53fd4 push 0x10f7b508 */
  push32((uint32_t)(0x10f7b508u));
  /* 10f53fd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f53fdf push eax */
  push32((uint32_t)(EAX));
  /* 10f53fe0 call 0x10f582b0 */
  push32(0x10f53fe5u); f_10f582b0();
  /* 10f53fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f53fe8:;
  /* 10f53fe8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f53fec jne 0x10f53ffa */
  if (!C.zf) goto L_10f53ffa;
  /* 10f53fee mov dword ptr [ebp - 0x1114], 0x10f7b494 */
  w32((uint32_t)(EBP + -0x1114), (0x10f7b494u));
  /* 10f53ff8 jmp 0x10f54004 */
  goto L_10f54004;
L_10f53ffa:;
  /* 10f53ffa mov dword ptr [ebp - 0x1114], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1114), (0x10f7b234u));
L_10f54004:;
  /* 10f54004 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54007 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f5400a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5400c je 0x10f54019 */
  if (C.zf) goto L_10f54019;
  /* 10f5400e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54011 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10f54017 jmp 0x10f54023 */
  goto L_10f54023;
L_10f54019:;
  /* 10f54019 mov dword ptr [ebp - 0x1118], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1118), (0x10f7b234u));
L_10f54023:;
  /* 10f54023 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54026 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f54029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5402b je 0x10f5403f */
  if (C.zf) goto L_10f5403f;
  /* 10f5402d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54031 jne 0x10f5403f */
  if (!C.zf) goto L_10f5403f;
  /* 10f54033 mov dword ptr [ebp - 0x111c], 0x10f7b484 */
  w32((uint32_t)(EBP + -0x111c), (0x10f7b484u));
  /* 10f5403d jmp 0x10f54049 */
  goto L_10f54049;
L_10f5403f:;
  /* 10f5403f mov dword ptr [ebp - 0x111c], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x111c), (0x10f7b234u));
L_10f54049:;
  /* 10f54049 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5404c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5404f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f54051 je 0x10f5405f */
  if (C.zf) goto L_10f5405f;
  /* 10f54053 mov dword ptr [ebp - 0x1120], 0x10f7b480 */
  w32((uint32_t)(EBP + -0x1120), (0x10f7b480u));
  /* 10f5405d jmp 0x10f54069 */
  goto L_10f54069;
L_10f5405f:;
  /* 10f5405f mov dword ptr [ebp - 0x1120], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1120), (0x10f7b234u));
L_10f54069:;
  /* 10f54069 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5406d je 0x10f5407a */
  if (C.zf) goto L_10f5407a;
  /* 10f5406f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54072 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10f54078 jmp 0x10f54084 */
  goto L_10f54084;
L_10f5407a:;
  /* 10f5407a mov dword ptr [ebp - 0x1124], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1124), (0x10f7b234u));
L_10f54084:;
  /* 10f54084 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54088 je 0x10f54096 */
  if (C.zf) goto L_10f54096;
  /* 10f5408a mov dword ptr [ebp - 0x1128], 0x10f7b478 */
  w32((uint32_t)(EBP + -0x1128), (0x10f7b478u));
  /* 10f54094 jmp 0x10f540a0 */
  goto L_10f540a0;
L_10f54096:;
  /* 10f54096 mov dword ptr [ebp - 0x1128], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1128), (0x10f7b234u));
L_10f540a0:;
  /* 10f540a0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f540a4 je 0x10f540b1 */
  if (C.zf) goto L_10f540b1;
  /* 10f540a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f540a9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10f540af jmp 0x10f540bb */
  goto L_10f540bb;
L_10f540b1:;
  /* 10f540b1 mov dword ptr [ebp - 0x112c], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x112c), (0x10f7b234u));
L_10f540bb:;
  /* 10f540bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f540bf je 0x10f540cd */
  if (C.zf) goto L_10f540cd;
  /* 10f540c1 mov dword ptr [ebp - 0x1130], 0x10f7b470 */
  w32((uint32_t)(EBP + -0x1130), (0x10f7b470u));
  /* 10f540cb jmp 0x10f540d7 */
  goto L_10f540d7;
L_10f540cd:;
  /* 10f540cd mov dword ptr [ebp - 0x1130], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1130), (0x10f7b234u));
L_10f540d7:;
  /* 10f540d7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f540de je 0x10f540ee */
  if (C.zf) goto L_10f540ee;
  /* 10f540e0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f540e6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10f540ec jmp 0x10f540f8 */
  goto L_10f540f8;
L_10f540ee:;
  /* 10f540ee mov dword ptr [ebp - 0x1134], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1134), (0x10f7b234u));
L_10f540f8:;
  /* 10f540f8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f540ff je 0x10f5410d */
  if (C.zf) goto L_10f5410d;
  /* 10f54101 mov dword ptr [ebp - 0x1138], 0x10f7b464 */
  w32((uint32_t)(EBP + -0x1138), (0x10f7b464u));
  /* 10f5410b jmp 0x10f54117 */
  goto L_10f54117;
L_10f5410d:;
  /* 10f5410d mov dword ptr [ebp - 0x1138], 0x10f7b234 */
  w32((uint32_t)(EBP + -0x1138), (0x10f7b234u));
L_10f54117:;
  /* 10f54117 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10f5411d push edx */
  push32((uint32_t)(EDX));
  /* 10f5411e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10f54124 push eax */
  push32((uint32_t)(EAX));
  /* 10f54125 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10f5412b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5412c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10f54132 push edx */
  push32((uint32_t)(EDX));
  /* 10f54133 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10f54139 push eax */
  push32((uint32_t)(EAX));
  /* 10f5413a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10f54140 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54141 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10f54147 push edx */
  push32((uint32_t)(EDX));
  /* 10f54148 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10f5414e push eax */
  push32((uint32_t)(EAX));
  /* 10f5414f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10f54155 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54156 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10f5415c push edx */
  push32((uint32_t)(EDX));
  /* 10f5415d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54160 push eax */
  push32((uint32_t)(EAX));
  /* 10f54161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54164 mov edx, dword ptr [ecx*4 + 0x10f7ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea50)));
  /* 10f5416b push edx */
  push32((uint32_t)(EDX));
  /* 10f5416c push 0x10f7b410 */
  push32((uint32_t)(0x10f7b410u));
  /* 10f54171 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f54176 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10f5417c push eax */
  push32((uint32_t)(EAX));
  /* 10f5417d call 0x10f57940 */
  push32(0x10f54182u); f_10f57940();
  /* 10f54182 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54187 jge 0x10f5419d */
  if ((C.sf==C.of)) goto L_10f5419d;
  /* 10f54189 push 0x10f7b374 */
  push32((uint32_t)(0x10f7b374u));
  /* 10f5418e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10f54194 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54195 call 0x10f57a40 */
  push32(0x10f5419au); f_10f57a40();
  /* 10f5419a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5419d:;
  /* 10f5419d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10f541a2 push 0x10f7b3ec */
  push32((uint32_t)(0x10f7b3ecu));
  /* 10f541a7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10f541ad push edx */
  push32((uint32_t)(EDX));
  /* 10f541ae call 0x10f581f0 */
  push32(0x10f541b3u); f_10f581f0();
  /* 10f541b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f541b6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10f541bc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f541c3 jne 0x10f541d6 */
  if (!C.zf) goto L_10f541d6;
  /* 10f541c5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f541c7 call 0x10f57f30 */
  push32(0x10f541ccu); f_10f57f30();
  /* 10f541cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f541cf push 3 */
  push32((uint32_t)(0x3u));
  /* 10f541d1 call 0x10f54250 */
  push32(0x10f541d6u); f_10f54250();
L_10f541d6:;
  /* 10f541d6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f541dd jne 0x10f541e6 */
  if (!C.zf) goto L_10f541e6;
  /* 10f541df mov eax, 1 */
  EAX = (0x1u);
  /* 10f541e4 jmp 0x10f541e8 */
  goto L_10f541e8;
L_10f541e6:;
  /* 10f541e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f541e8:;
  /* 10f541e8 mov esp, ebp */
  ESP = (EBP);
  /* 10f541ea pop ebp */
  EBP = (pop32());
  /* 10f541eb ret  */
  ESPCHK(0x10f53ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x10f541f0 (56 bytes, 15 insns) */
void f_10f541f0(void) {
  FTRACE(0x10f541f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f541f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f541f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f541f3 cmp dword ptr [0x10f820fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f541fa je 0x10f54202 */
  if (C.zf) goto L_10f54202;
  /* 10f541fc call dword ptr [0x10f820fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f820fc))), 0x10f54202u);
L_10f54202:;
  /* 10f54202 push 0x10f7e418 */
  push32((uint32_t)(0x10f7e418u));
  /* 10f54207 push 0x10f7e208 */
  push32((uint32_t)(0x10f7e208u));
  /* 10f5420c call 0x10f543c0 */
  push32(0x10f54211u); f_10f543c0();
  /* 10f54211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54214 push 0x10f7e104 */
  push32((uint32_t)(0x10f7e104u));
  /* 10f54219 push 0x10f7e000 */
  push32((uint32_t)(0x10f7e000u));
  /* 10f5421e call 0x10f543c0 */
  push32(0x10f54223u); f_10f543c0();
  /* 10f54223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54226 pop ebp */
  EBP = (pop32());
  /* 10f54227 ret  */
  ESPCHK(0x10f541f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x10f54230 (21 bytes, 10 insns) */
void f_10f54230(void) {
  FTRACE(0x10f54230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54230 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54231 mov ebp, esp */
  EBP = (ESP);
  /* 10f54233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5423a push eax */
  push32((uint32_t)(EAX));
  /* 10f5423b call 0x10f542b0 */
  push32(0x10f54240u); f_10f542b0();
  /* 10f54240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54243 pop ebp */
  EBP = (pop32());
  /* 10f54244 ret  */
  ESPCHK(0x10f54230u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10f54250 (21 bytes, 10 insns) */
void f_10f54250(void) {
  FTRACE(0x10f54250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54251 mov ebp, esp */
  EBP = (ESP);
  /* 10f54253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54255 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5425a push eax */
  push32((uint32_t)(EAX));
  /* 10f5425b call 0x10f542b0 */
  push32(0x10f54260u); f_10f542b0();
  /* 10f54260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54263 pop ebp */
  EBP = (pop32());
  /* 10f54264 ret  */
  ESPCHK(0x10f54250u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x10f54270 (19 bytes, 9 insns) */
void f_10f54270(void) {
  FTRACE(0x10f54270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54270 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54271 mov ebp, esp */
  EBP = (ESP);
  /* 10f54273 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54275 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54277 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54279 call 0x10f542b0 */
  push32(0x10f5427eu); f_10f542b0();
  /* 10f5427e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54281 pop ebp */
  EBP = (pop32());
  /* 10f54282 ret  */
  ESPCHK(0x10f54270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004290 @ 0x10f54290 (19 bytes, 9 insns) */
void f_10f54290(void) {
  FTRACE(0x10f54290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54290 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54291 mov ebp, esp */
  EBP = (ESP);
  /* 10f54293 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54295 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54297 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54299 call 0x10f542b0 */
  push32(0x10f5429eu); f_10f542b0();
  /* 10f5429e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f542a1 pop ebp */
  EBP = (pop32());
  /* 10f542a2 ret  */
  ESPCHK(0x10f54290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x10f542b0 (227 bytes, 61 insns) */
void f_10f542b0(void) {
  FTRACE(0x10f542b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f542b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f542b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f542b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f542b4 call 0x10f543a0 */
  push32(0x10f542b9u); f_10f543a0();
  /* 10f542b9 cmp dword ptr [0x10f80600], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f80600))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f542c0 jne 0x10f542d3 */
  if (!C.zf) goto L_10f542d3;
  /* 10f542c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f542c5 push eax */
  push32((uint32_t)(EAX));
  /* 10f542c6 call dword ptr [0x10f83374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83374))), 0x10f542ccu);
  /* 10f542cc push eax */
  push32((uint32_t)(EAX));
  /* 10f542cd call dword ptr [0x10f83370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83370))), 0x10f542d3u);
L_10f542d3:;
  /* 10f542d3 mov dword ptr [0x10f805fc], 1 */
  w32((uint32_t)(0x10f805fc), (0x1u));
  /* 10f542dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10f542e0 mov byte ptr [0x10f805f8], cl */
  w8((uint32_t)(0x10f805f8), (CL));
  /* 10f542e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f542ea jne 0x10f54333 */
  if (!C.zf) goto L_10f54333;
  /* 10f542ec cmp dword ptr [0x10f820f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f542f3 je 0x10f54321 */
  if (C.zf) goto L_10f54321;
  /* 10f542f5 mov edx, dword ptr [0x10f820f4] */
  EDX = (r32((uint32_t)(0x10f820f4)));
  /* 10f542fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f542fe:;
  /* 10f542fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54301 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f54304 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5430a cmp ecx, dword ptr [0x10f820f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f820f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54310 jb 0x10f54321 */
  if (C.cf) goto L_10f54321;
  /* 10f54312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54315 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54318 je 0x10f5431f */
  if (C.zf) goto L_10f5431f;
  /* 10f5431a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5431d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10f5431fu);
L_10f5431f:;
  /* 10f5431f jmp 0x10f542fe */
  goto L_10f542fe;
L_10f54321:;
  /* 10f54321 push 0x10f7e724 */
  push32((uint32_t)(0x10f7e724u));
  /* 10f54326 push 0x10f7e51c */
  push32((uint32_t)(0x10f7e51cu));
  /* 10f5432b call 0x10f543c0 */
  push32(0x10f54330u); f_10f543c0();
  /* 10f54330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54333:;
  /* 10f54333 push 0x10f7e92c */
  push32((uint32_t)(0x10f7e92cu));
  /* 10f54338 push 0x10f7e828 */
  push32((uint32_t)(0x10f7e828u));
  /* 10f5433d call 0x10f543c0 */
  push32(0x10f54342u); f_10f543c0();
  /* 10f54342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54345 cmp dword ptr [0x10f80604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5434c jne 0x10f5436e */
  if (!C.zf) goto L_10f5436e;
  /* 10f5434e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f54350 call 0x10f55fa0 */
  push32(0x10f54355u); f_10f55fa0();
  /* 10f54355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54358 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5435b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5435d je 0x10f5436e */
  if (C.zf) goto L_10f5436e;
  /* 10f5435f mov dword ptr [0x10f80604], 1 */
  w32((uint32_t)(0x10f80604), (0x1u));
  /* 10f54369 call 0x10f568b0 */
  push32(0x10f5436eu); f_10f568b0();
L_10f5436e:;
  /* 10f5436e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54372 je 0x10f5437b */
  if (C.zf) goto L_10f5437b;
  /* 10f54374 call 0x10f543b0 */
  push32(0x10f54379u); f_10f543b0();
  /* 10f54379 jmp 0x10f5438f */
  goto L_10f5438f;
L_10f5437b:;
  /* 10f5437b mov dword ptr [0x10f80600], 1 */
  w32((uint32_t)(0x10f80600), (0x1u));
  /* 10f54385 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54388 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54389 call dword ptr [0x10f8336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8336c))), 0x10f5438fu);
L_10f5438f:;
  /* 10f5438f mov esp, ebp */
  ESP = (EBP);
  /* 10f54391 pop ebp */
  EBP = (pop32());
  /* 10f54392 ret  */
  ESPCHK(0x10f542b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x10f543a0 (15 bytes, 7 insns) */
void f_10f543a0(void) {
  FTRACE(0x10f543a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f543a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f543a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f543a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f543a5 call 0x10f58490 */
  push32(0x10f543aau); f_10f58490();
  /* 10f543aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f543ad pop ebp */
  EBP = (pop32());
  /* 10f543ae ret  */
  ESPCHK(0x10f543a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x10f543b0 (15 bytes, 7 insns) */
void f_10f543b0(void) {
  FTRACE(0x10f543b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f543b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f543b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f543b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f543b5 call 0x10f58530 */
  push32(0x10f543bau); f_10f58530();
  /* 10f543ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f543bd pop ebp */
  EBP = (pop32());
  /* 10f543be ret  */
  ESPCHK(0x10f543b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10f543c0 (37 bytes, 16 insns) */
void f_10f543c0(void) {
  FTRACE(0x10f543c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f543c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f543c1 mov ebp, esp */
  EBP = (ESP);
L_10f543c3:;
  /* 10f543c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f543c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f543c9 jae 0x10f543e3 */
  if (!C.cf) goto L_10f543e3;
  /* 10f543cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f543ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f543d1 je 0x10f543d8 */
  if (C.zf) goto L_10f543d8;
  /* 10f543d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f543d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10f543d8u);
L_10f543d8:;
  /* 10f543d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f543db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f543de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f543e1 jmp 0x10f543c3 */
  goto L_10f543c3;
L_10f543e3:;
  /* 10f543e3 pop ebp */
  EBP = (pop32());
  /* 10f543e4 ret  */
  ESPCHK(0x10f543c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x10f543f0 (130 bytes, 42 insns) */
void f_10f543f0(void) {
  FTRACE(0x10f543f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f543f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f543f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f543f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f543f4 call 0x10f583b0 */
  push32(0x10f543f9u); f_10f583b0();
  /* 10f543f9 call dword ptr [0x10f832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832a4))), 0x10f543ffu);
  /* 10f543ff mov dword ptr [0x10f7ea5c], eax */
  w32((uint32_t)(0x10f7ea5c), (EAX));
  /* 10f54404 cmp dword ptr [0x10f7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5440b jne 0x10f54411 */
  if (!C.zf) goto L_10f54411;
  /* 10f5440d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5440f jmp 0x10f5446e */
  goto L_10f5446e;
L_10f54411:;
  /* 10f54411 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10f54413 push 0x10f7b548 */
  push32((uint32_t)(0x10f7b548u));
  /* 10f54418 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5441a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f5441c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5441e call 0x10f54ea0 */
  push32(0x10f54423u); f_10f54ea0();
  /* 10f54423 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54429 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5442d je 0x10f54444 */
  if (C.zf) goto L_10f54444;
  /* 10f5442f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54432 push eax */
  push32((uint32_t)(EAX));
  /* 10f54433 mov ecx, dword ptr [0x10f7ea5c] */
  ECX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f54439 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5443a call dword ptr [0x10f8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8337c))), 0x10f54440u);
  /* 10f54440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54442 jne 0x10f54448 */
  if (!C.zf) goto L_10f54448;
L_10f54444:;
  /* 10f54444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54446 jmp 0x10f5446e */
  goto L_10f5446e;
L_10f54448:;
  /* 10f54448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5444b push edx */
  push32((uint32_t)(EDX));
  /* 10f5444c call 0x10f544b0 */
  push32(0x10f54451u); f_10f544b0();
  /* 10f54451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54454 call dword ptr [0x10f83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83378))), 0x10f5445au);
  /* 10f5445a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5445d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f5445f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54462 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10f54469 mov eax, 1 */
  EAX = (0x1u);
L_10f5446e:;
  /* 10f5446e mov esp, ebp */
  ESP = (EBP);
  /* 10f54470 pop ebp */
  EBP = (pop32());
  /* 10f54471 ret  */
  ESPCHK(0x10f543f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x10f54480 (41 bytes, 11 insns) */
void f_10f54480(void) {
  FTRACE(0x10f54480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54480 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54481 mov ebp, esp */
  EBP = (ESP);
  /* 10f54483 call 0x10f583f0 */
  push32(0x10f54488u); f_10f583f0();
  /* 10f54488 cmp dword ptr [0x10f7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5448f je 0x10f544a7 */
  if (C.zf) goto L_10f544a7;
  /* 10f54491 mov eax, dword ptr [0x10f7ea5c] */
  EAX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f54496 push eax */
  push32((uint32_t)(EAX));
  /* 10f54497 call dword ptr [0x10f832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f832a8))), 0x10f5449du);
  /* 10f5449d mov dword ptr [0x10f7ea5c], 0xffffffff */
  w32((uint32_t)(0x10f7ea5c), (0xffffffffu));
L_10f544a7:;
  /* 10f544a7 pop ebp */
  EBP = (pop32());
  /* 10f544a8 ret  */
  ESPCHK(0x10f54480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x10f544b0 (25 bytes, 8 insns) */
void f_10f544b0(void) {
  FTRACE(0x10f544b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f544b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f544b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f544b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f544b6 mov dword ptr [eax + 0x50], 0x10f7ec00 */
  w32((uint32_t)(EAX + 0x50), (0x10f7ec00u));
  /* 10f544bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f544c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10f544c7 pop ebp */
  EBP = (pop32());
  /* 10f544c8 ret  */
  ESPCHK(0x10f544b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x10f544d0 (152 bytes, 48 insns) */
void f_10f544d0(void) {
  FTRACE(0x10f544d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f544d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f544d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f544d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f544d6 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f544dcu);
  /* 10f544dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f544df mov eax, dword ptr [0x10f7ea5c] */
  EAX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f544e4 push eax */
  push32((uint32_t)(EAX));
  /* 10f544e5 call dword ptr [0x10f8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8338c))), 0x10f544ebu);
  /* 10f544eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f544ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f544f2 jne 0x10f54557 */
  if (!C.zf) goto L_10f54557;
  /* 10f544f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10f544f9 push 0x10f7b548 */
  push32((uint32_t)(0x10f7b548u));
  /* 10f544fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54500 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f54502 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54504 call 0x10f54ea0 */
  push32(0x10f54509u); f_10f54ea0();
  /* 10f54509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5450c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5450f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54513 je 0x10f5454d */
  if (C.zf) goto L_10f5454d;
  /* 10f54515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54518 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54519 mov edx, dword ptr [0x10f7ea5c] */
  EDX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f5451f push edx */
  push32((uint32_t)(EDX));
  /* 10f54520 call dword ptr [0x10f8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8337c))), 0x10f54526u);
  /* 10f54526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54528 je 0x10f5454d */
  if (C.zf) goto L_10f5454d;
  /* 10f5452a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5452d push eax */
  push32((uint32_t)(EAX));
  /* 10f5452e call 0x10f544b0 */
  push32(0x10f54533u); f_10f544b0();
  /* 10f54533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54536 call dword ptr [0x10f83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83378))), 0x10f5453cu);
  /* 10f5453c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5453f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f54541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54544 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10f5454b jmp 0x10f54557 */
  goto L_10f54557;
L_10f5454d:;
  /* 10f5454d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f5454f call 0x10f53a00 */
  push32(0x10f54554u); f_10f53a00();
  /* 10f54554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54557:;
  /* 10f54557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5455a push eax */
  push32((uint32_t)(EAX));
  /* 10f5455b call dword ptr [0x10f83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83388))), 0x10f54561u);
  /* 10f54561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54564 mov esp, ebp */
  ESP = (EBP);
  /* 10f54566 pop ebp */
  EBP = (pop32());
  /* 10f54567 ret  */
  ESPCHK(0x10f544d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10f54570 (263 bytes, 86 insns) */
void f_10f54570(void) {
  FTRACE(0x10f54570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54570 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54571 mov ebp, esp */
  EBP = (ESP);
  /* 10f54573 cmp dword ptr [0x10f7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5457a je 0x10f54675 */
  if (C.zf) goto L_10f54675;
  /* 10f54580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54584 jne 0x10f54595 */
  if (!C.zf) goto L_10f54595;
  /* 10f54586 mov eax, dword ptr [0x10f7ea5c] */
  EAX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f5458b push eax */
  push32((uint32_t)(EAX));
  /* 10f5458c call dword ptr [0x10f8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8338c))), 0x10f54592u);
  /* 10f54592 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f54595:;
  /* 10f54595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54599 je 0x10f54666 */
  if (C.zf) goto L_10f54666;
  /* 10f5459f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f545a6 je 0x10f545b9 */
  if (C.zf) goto L_10f545b9;
  /* 10f545a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f545aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10f545b0 push eax */
  push32((uint32_t)(EAX));
  /* 10f545b1 call 0x10f55520 */
  push32(0x10f545b6u); f_10f55520();
  /* 10f545b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f545b9:;
  /* 10f545b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f545c0 je 0x10f545d3 */
  if (C.zf) goto L_10f545d3;
  /* 10f545c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f545c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10f545ca push eax */
  push32((uint32_t)(EAX));
  /* 10f545cb call 0x10f55520 */
  push32(0x10f545d0u); f_10f55520();
  /* 10f545d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f545d3:;
  /* 10f545d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f545da je 0x10f545ed */
  if (C.zf) goto L_10f545ed;
  /* 10f545dc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f545de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10f545e4 push eax */
  push32((uint32_t)(EAX));
  /* 10f545e5 call 0x10f55520 */
  push32(0x10f545eau); f_10f55520();
  /* 10f545ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f545ed:;
  /* 10f545ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f545f4 je 0x10f54607 */
  if (C.zf) goto L_10f54607;
  /* 10f545f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f545f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f545fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10f545fe push eax */
  push32((uint32_t)(EAX));
  /* 10f545ff call 0x10f55520 */
  push32(0x10f54604u); f_10f55520();
  /* 10f54604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54607:;
  /* 10f54607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5460a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5460e je 0x10f54621 */
  if (C.zf) goto L_10f54621;
  /* 10f54610 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54615 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10f54618 push eax */
  push32((uint32_t)(EAX));
  /* 10f54619 call 0x10f55520 */
  push32(0x10f5461eu); f_10f55520();
  /* 10f5461e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54621:;
  /* 10f54621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54624 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54628 je 0x10f5463b */
  if (C.zf) goto L_10f5463b;
  /* 10f5462a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5462c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5462f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10f54632 push eax */
  push32((uint32_t)(EAX));
  /* 10f54633 call 0x10f55520 */
  push32(0x10f54638u); f_10f55520();
  /* 10f54638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5463b:;
  /* 10f5463b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5463e cmp dword ptr [ecx + 0x50], 0x10f7ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10f7ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54645 je 0x10f54658 */
  if (C.zf) goto L_10f54658;
  /* 10f54647 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5464c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10f5464f push eax */
  push32((uint32_t)(EAX));
  /* 10f54650 call 0x10f55520 */
  push32(0x10f54655u); f_10f55520();
  /* 10f54655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54658:;
  /* 10f54658 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5465a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5465d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5465e call 0x10f55520 */
  push32(0x10f54663u); f_10f55520();
  /* 10f54663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f54666:;
  /* 10f54666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54668 mov edx, dword ptr [0x10f7ea5c] */
  EDX = (r32((uint32_t)(0x10f7ea5c)));
  /* 10f5466e push edx */
  push32((uint32_t)(EDX));
  /* 10f5466f call dword ptr [0x10f8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8337c))), 0x10f54675u);
L_10f54675:;
  /* 10f54675 pop ebp */
  EBP = (pop32());
  /* 10f54676 ret  */
  ESPCHK(0x10f54570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x10f54680 (11 bytes, 5 insns) */
void f_10f54680(void) {
  FTRACE(0x10f54680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54680 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54681 mov ebp, esp */
  EBP = (ESP);
  /* 10f54683 call dword ptr [0x10f83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83378))), 0x10f54689u);
  /* 10f54689 pop ebp */
  EBP = (pop32());
  /* 10f5468a ret  */
  ESPCHK(0x10f54680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x10f54690 (11 bytes, 5 insns) */
void f_10f54690(void) {
  FTRACE(0x10f54690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54690 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54691 mov ebp, esp */
  EBP = (ESP);
  /* 10f54693 call dword ptr [0x10f83394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83394))), 0x10f54699u);
  /* 10f54699 pop ebp */
  EBP = (pop32());
  /* 10f5469a ret  */
  ESPCHK(0x10f54690u, _esp0);
  ESP += 4; return;
}

/* FUN_100046a0 @ 0x10f546a0 (804 bytes, 236 insns) */
void f_10f546a0(void) {
  FTRACE(0x10f546a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f546a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f546a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f546a3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f546a6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10f546ab push 0x10f7b554 */
  push32((uint32_t)(0x10f7b554u));
  /* 10f546b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f546b2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f546b7 call 0x10f54a90 */
  push32(0x10f546bcu); f_10f54a90();
  /* 10f546bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f546bf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10f546c2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f546c6 jne 0x10f546d2 */
  if (!C.zf) goto L_10f546d2;
  /* 10f546c8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f546ca call 0x10f53a00 */
  push32(0x10f546cfu); f_10f53a00();
  /* 10f546cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f546d2:;
  /* 10f546d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f546d5 mov dword ptr [0x10f81fa0], eax */
  w32((uint32_t)(0x10f81fa0), (EAX));
  /* 10f546da mov dword ptr [0x10f820dc], 0x20 */
  w32((uint32_t)(0x10f820dc), (0x20u));
  /* 10f546e4 jmp 0x10f546ef */
  goto L_10f546ef;
L_10f546e6:;
  /* 10f546e6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f546e9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f546ec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10f546ef:;
  /* 10f546ef mov edx, dword ptr [0x10f81fa0] */
  EDX = (r32((uint32_t)(0x10f81fa0)));
  /* 10f546f5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f546fb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f546fe jae 0x10f54723 */
  if (!C.cf) goto L_10f54723;
  /* 10f54700 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54703 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f54707 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5470a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f54710 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54713 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10f54717 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5471a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f54721 jmp 0x10f546e6 */
  goto L_10f546e6;
L_10f54723:;
  /* 10f54723 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10f54726 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54727 call dword ptr [0x10f833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a0))), 0x10f5472du);
  /* 10f5472d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10f54730 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f54736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f54738 je 0x10f548c5 */
  if (C.zf) goto L_10f548c5;
  /* 10f5473e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54742 je 0x10f548c5 */
  if (C.zf) goto L_10f548c5;
  /* 10f54748 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5474b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5474d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10f54750 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f54753 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54756 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f54759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5475c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5475f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10f54762 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54769 jge 0x10f54773 */
  if ((C.sf==C.of)) goto L_10f54773;
  /* 10f5476b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10f5476e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10f54771 jmp 0x10f5477a */
  goto L_10f5477a;
L_10f54773:;
  /* 10f54773 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10f5477a:;
  /* 10f5477a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10f5477d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10f54780 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10f54787 jmp 0x10f54792 */
  goto L_10f54792;
L_10f54789:;
  /* 10f54789 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f5478c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5478f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10f54792:;
  /* 10f54792 mov ecx, dword ptr [0x10f820dc] */
  ECX = (r32((uint32_t)(0x10f820dc)));
  /* 10f54798 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5479b jge 0x10f54832 */
  if ((C.sf==C.of)) goto L_10f54832;
  /* 10f547a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10f547a6 push 0x10f7b554 */
  push32((uint32_t)(0x10f7b554u));
  /* 10f547ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10f547ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f547b2 call 0x10f54a90 */
  push32(0x10f547b7u); f_10f54a90();
  /* 10f547b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f547ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10f547bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f547c1 jne 0x10f547ce */
  if (!C.zf) goto L_10f547ce;
  /* 10f547c3 mov edx, dword ptr [0x10f820dc] */
  EDX = (r32((uint32_t)(0x10f820dc)));
  /* 10f547c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10f547cc jmp 0x10f54832 */
  goto L_10f54832;
L_10f547ce:;
  /* 10f547ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f547d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f547d4 mov dword ptr [eax*4 + 0x10f81fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x10f81fa0), (ECX));
  /* 10f547db mov edx, dword ptr [0x10f820dc] */
  EDX = (r32((uint32_t)(0x10f820dc)));
  /* 10f547e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f547e4 mov dword ptr [0x10f820dc], edx */
  w32((uint32_t)(0x10f820dc), (EDX));
  /* 10f547ea jmp 0x10f547f5 */
  goto L_10f547f5;
L_10f547ec:;
  /* 10f547ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f547ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f547f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10f547f5:;
  /* 10f547f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f547f8 mov edx, dword ptr [ecx*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f81fa0)));
  /* 10f547ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54805 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54808 jae 0x10f5482d */
  if (!C.cf) goto L_10f5482d;
  /* 10f5480a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5480d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f54811 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54814 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f5481a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5481d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10f54821 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54824 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f5482b jmp 0x10f547ec */
  goto L_10f547ec;
L_10f5482d:;
  /* 10f5482d jmp 0x10f54789 */
  goto L_10f54789;
L_10f54832:;
  /* 10f54832 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10f54839 jmp 0x10f54856 */
  goto L_10f54856;
L_10f5483b:;
  /* 10f5483b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f5483e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54841 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10f54844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54847 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5484a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5484d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f54850 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54853 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10f54856:;
  /* 10f54856 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f54859 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5485c jge 0x10f548c5 */
  if ((C.sf==C.of)) goto L_10f548c5;
  /* 10f5485e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f54861 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54864 je 0x10f548c0 */
  if (C.zf) goto L_10f548c0;
  /* 10f54866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f5486c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5486f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f54871 je 0x10f548c0 */
  if (C.zf) goto L_10f548c0;
  /* 10f54873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54876 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f54879 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5487c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5487e jne 0x10f54890 */
  if (!C.zf) goto L_10f54890;
  /* 10f54880 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f54883 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f54885 push edx */
  push32((uint32_t)(EDX));
  /* 10f54886 call dword ptr [0x10f8339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8339c))), 0x10f5488cu);
  /* 10f5488c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5488e je 0x10f548c0 */
  if (C.zf) goto L_10f548c0;
L_10f54890:;
  /* 10f54890 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f54893 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f54896 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f54899 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5489c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5489f mov edx, dword ptr [eax*4 + 0x10f81fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f548a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f548a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10f548ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f548ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f548b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f548b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f548b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f548b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f548bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f548bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10f548c0:;
  /* 10f548c0 jmp 0x10f5483b */
  goto L_10f5483b;
L_10f548c5:;
  /* 10f548c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10f548cc jmp 0x10f548d7 */
  goto L_10f548d7;
L_10f548ce:;
  /* 10f548ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f548d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f548d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10f548d7:;
  /* 10f548d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f548db jge 0x10f549b4 */
  if ((C.sf==C.of)) goto L_10f549b4;
  /* 10f548e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f548e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f548e7 mov edx, dword ptr [0x10f81fa0] */
  EDX = (r32((uint32_t)(0x10f81fa0)));
  /* 10f548ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f548ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10f548f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f548f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f548f8 jne 0x10f549a0 */
  if (!C.zf) goto L_10f549a0;
  /* 10f548fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54901 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10f54905 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54909 jne 0x10f54914 */
  if (!C.zf) goto L_10f54914;
  /* 10f5490b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10f54912 jmp 0x10f54924 */
  goto L_10f54924;
L_10f54914:;
  /* 10f54914 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f54917 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5491a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5491c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5491e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54921 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10f54924:;
  /* 10f54924 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10f54927 push eax */
  push32((uint32_t)(EAX));
  /* 10f54928 call dword ptr [0x10f8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8334c))), 0x10f5492eu);
  /* 10f5492e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10f54931 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54935 je 0x10f5498f */
  if (C.zf) goto L_10f5498f;
  /* 10f54937 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f5493a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5493b call dword ptr [0x10f8339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8339c))), 0x10f54941u);
  /* 10f54941 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10f54944 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54948 je 0x10f5498f */
  if (C.zf) goto L_10f5498f;
  /* 10f5494a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5494d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f54950 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f54952 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10f54955 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5495b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5495e jne 0x10f54970 */
  if (!C.zf) goto L_10f54970;
  /* 10f54960 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54963 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f54966 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10f54968 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5496b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10f5496e jmp 0x10f5498d */
  goto L_10f5498d;
L_10f54970:;
  /* 10f54970 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10f54973 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f54979 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5497c jne 0x10f5498d */
  if (!C.zf) goto L_10f5498d;
  /* 10f5497e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54981 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f54984 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10f54987 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5498a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f5498d:;
  /* 10f5498d jmp 0x10f5499e */
  goto L_10f5499e;
L_10f5498f:;
  /* 10f5498f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f54992 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f54995 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10f54998 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f5499b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f5499e:;
  /* 10f5499e jmp 0x10f549af */
  goto L_10f549af;
L_10f549a0:;
  /* 10f549a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f549a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f549a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10f549a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f549ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f549af:;
  /* 10f549af jmp 0x10f548ce */
  goto L_10f548ce;
L_10f549b4:;
  /* 10f549b4 mov eax, dword ptr [0x10f820dc] */
  EAX = (r32((uint32_t)(0x10f820dc)));
  /* 10f549b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f549ba call dword ptr [0x10f83398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83398))), 0x10f549c0u);
  /* 10f549c0 mov esp, ebp */
  ESP = (EBP);
  /* 10f549c2 pop ebp */
  EBP = (pop32());
  /* 10f549c3 ret  */
  ESPCHK(0x10f546a0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10f549d0 (155 bytes, 45 insns) */
void f_10f549d0(void) {
  FTRACE(0x10f549d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f549d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f549d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f549d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f549d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f549dd jmp 0x10f549e8 */
  goto L_10f549e8;
L_10f549df:;
  /* 10f549df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f549e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f549e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f549e8:;
  /* 10f549e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f549ec jge 0x10f54a67 */
  if ((C.sf==C.of)) goto L_10f54a67;
  /* 10f549ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f549f1 cmp dword ptr [ecx*4 + 0x10f81fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f81fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f549f9 je 0x10f54a62 */
  if (C.zf) goto L_10f54a62;
  /* 10f549fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f549fe mov eax, dword ptr [edx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f54a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54a08 jmp 0x10f54a13 */
  goto L_10f54a13;
L_10f54a0a:;
  /* 10f54a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54a0d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f54a13:;
  /* 10f54a13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54a16 mov eax, dword ptr [edx*4 + 0x10f81fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f81fa0)));
  /* 10f54a1d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54a22 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54a25 jae 0x10f54a3f */
  if (!C.cf) goto L_10f54a3f;
  /* 10f54a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54a2a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54a2e je 0x10f54a3d */
  if (C.zf) goto L_10f54a3d;
  /* 10f54a30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54a33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54a36 push edx */
  push32((uint32_t)(EDX));
  /* 10f54a37 call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f54a3du);
L_10f54a3d:;
  /* 10f54a3d jmp 0x10f54a0a */
  goto L_10f54a0a;
L_10f54a3f:;
  /* 10f54a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54a44 mov ecx, dword ptr [eax*4 + 0x10f81fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f81fa0)));
  /* 10f54a4b push ecx */
  push32((uint32_t)(ECX));
  /* 10f54a4c call 0x10f55520 */
  push32(0x10f54a51u); f_10f55520();
  /* 10f54a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54a54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54a57 mov dword ptr [edx*4 + 0x10f81fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x10f81fa0), (0x0u));
L_10f54a62:;
  /* 10f54a62 jmp 0x10f549df */
  goto L_10f549df;
L_10f54a67:;
  /* 10f54a67 mov esp, ebp */
  ESP = (EBP);
  /* 10f54a69 pop ebp */
  EBP = (pop32());
  /* 10f54a6a ret  */
  ESPCHK(0x10f549d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x10f54a70 (29 bytes, 13 insns) */
void f_10f54a70(void) {
  FTRACE(0x10f54a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54a71 mov ebp, esp */
  EBP = (ESP);
  /* 10f54a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54a79 mov eax, dword ptr [0x10f807a8] */
  EAX = (r32((uint32_t)(0x10f807a8)));
  /* 10f54a7e push eax */
  push32((uint32_t)(EAX));
  /* 10f54a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54a82 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54a83 call 0x10f54ae0 */
  push32(0x10f54a88u); f_10f54ae0();
  /* 10f54a88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54a8b pop ebp */
  EBP = (pop32());
  /* 10f54a8c ret  */
  ESPCHK(0x10f54a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x10f54a90 (35 bytes, 16 insns) */
void f_10f54a90(void) {
  FTRACE(0x10f54a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54a91 mov ebp, esp */
  EBP = (ESP);
  /* 10f54a93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54a96 push eax */
  push32((uint32_t)(EAX));
  /* 10f54a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54a9a push ecx */
  push32((uint32_t)(ECX));
  /* 10f54a9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54a9e push edx */
  push32((uint32_t)(EDX));
  /* 10f54a9f mov eax, dword ptr [0x10f807a8] */
  EAX = (r32((uint32_t)(0x10f807a8)));
  /* 10f54aa4 push eax */
  push32((uint32_t)(EAX));
  /* 10f54aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54aa9 call 0x10f54ae0 */
  push32(0x10f54aaeu); f_10f54ae0();
  /* 10f54aae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ab1 pop ebp */
  EBP = (pop32());
  /* 10f54ab2 ret  */
  ESPCHK(0x10f54a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x10f54ac0 (27 bytes, 13 insns) */
void f_10f54ac0(void) {
  FTRACE(0x10f54ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10f54ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54acc push eax */
  push32((uint32_t)(EAX));
  /* 10f54acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54ad1 call 0x10f54ae0 */
  push32(0x10f54ad6u); f_10f54ae0();
  /* 10f54ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ad9 pop ebp */
  EBP = (pop32());
  /* 10f54ada ret  */
  ESPCHK(0x10f54ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x10f54ae0 (94 bytes, 38 insns) */
void f_10f54ae0(void) {
  FTRACE(0x10f54ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10f54ae3 push ecx */
  push32((uint32_t)(ECX));
L_10f54ae4:;
  /* 10f54ae4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f54ae6 call 0x10f58490 */
  push32(0x10f54aebu); f_10f58490();
  /* 10f54aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54aee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54af1 push eax */
  push32((uint32_t)(EAX));
  /* 10f54af2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54af5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54af6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54af9 push edx */
  push32((uint32_t)(EDX));
  /* 10f54afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54afd push eax */
  push32((uint32_t)(EAX));
  /* 10f54afe call 0x10f54b60 */
  push32(0x10f54b03u); f_10f54b60();
  /* 10f54b03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54b06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54b09 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f54b0b call 0x10f58530 */
  push32(0x10f54b10u); f_10f58530();
  /* 10f54b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54b13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54b17 jne 0x10f54b1f */
  if (!C.zf) goto L_10f54b1f;
  /* 10f54b19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54b1d jne 0x10f54b24 */
  if (!C.zf) goto L_10f54b24;
L_10f54b1f:;
  /* 10f54b1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54b22 jmp 0x10f54b3a */
  goto L_10f54b3a;
L_10f54b24:;
  /* 10f54b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54b27 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54b28 call 0x10f587d0 */
  push32(0x10f54b2du); f_10f587d0();
  /* 10f54b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54b32 jne 0x10f54b38 */
  if (!C.zf) goto L_10f54b38;
  /* 10f54b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54b36 jmp 0x10f54b3a */
  goto L_10f54b3a;
L_10f54b38:;
  /* 10f54b38 jmp 0x10f54ae4 */
  goto L_10f54ae4;
L_10f54b3a:;
  /* 10f54b3a mov esp, ebp */
  ESP = (EBP);
  /* 10f54b3c pop ebp */
  EBP = (pop32());
  /* 10f54b3d ret  */
  ESPCHK(0x10f54ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b40 @ 0x10f54b40 (23 bytes, 11 insns) */
void f_10f54b40(void) {
  FTRACE(0x10f54b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54b41 mov ebp, esp */
  EBP = (ESP);
  /* 10f54b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54b4c push eax */
  push32((uint32_t)(EAX));
  /* 10f54b4d call 0x10f54b60 */
  push32(0x10f54b52u); f_10f54b60();
  /* 10f54b52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54b55 pop ebp */
  EBP = (pop32());
  /* 10f54b56 ret  */
  ESPCHK(0x10f54b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b60 @ 0x10f54b60 (787 bytes, 254 insns) */
void f_10f54b60(void) {
  FTRACE(0x10f54b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54b61 mov ebp, esp */
  EBP = (ESP);
  /* 10f54b63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f54b66 push ebx */
  push32((uint32_t)(EBX));
  /* 10f54b67 push esi */
  push32((uint32_t)(ESI));
  /* 10f54b68 push edi */
  push32((uint32_t)(EDI));
  /* 10f54b69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f54b70 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f54b75 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f54b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54b7a je 0x10f54bac */
  if (C.zf) goto L_10f54bac;
L_10f54b7c:;
  /* 10f54b7c call 0x10f55c30 */
  push32(0x10f54b81u); f_10f55c30();
  /* 10f54b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54b83 jne 0x10f54ba6 */
  if (!C.zf) goto L_10f54ba6;
  /* 10f54b85 push 0x10f7b648 */
  push32((uint32_t)(0x10f7b648u));
  /* 10f54b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54b8c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10f54b91 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f54b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54b98 call 0x10f53b50 */
  push32(0x10f54b9du); f_10f53b50();
  /* 10f54b9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ba0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54ba3 jne 0x10f54ba6 */
  if (!C.zf) goto L_10f54ba6;
  /* 10f54ba5 int3  */
  x86_unimpl("int3 @ 0x10f54ba5");
L_10f54ba6:;
  /* 10f54ba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f54ba8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f54baa jne 0x10f54b7c */
  if (!C.zf) goto L_10f54b7c;
L_10f54bac:;
  /* 10f54bac mov edx, dword ptr [0x10f7ea88] */
  EDX = (r32((uint32_t)(0x10f7ea88)));
  /* 10f54bb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f54bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54bb8 cmp eax, dword ptr [0x10f7ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54bbe jne 0x10f54bc1 */
  if (!C.zf) goto L_10f54bc1;
  /* 10f54bc0 int3  */
  x86_unimpl("int3 @ 0x10f54bc0");
L_10f54bc1:;
  /* 10f54bc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54bc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54bc8 push edx */
  push32((uint32_t)(EDX));
  /* 10f54bc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54bcc push eax */
  push32((uint32_t)(EAX));
  /* 10f54bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54bd4 push edx */
  push32((uint32_t)(EDX));
  /* 10f54bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54bd9 call dword ptr [0x10f7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7ec90))), 0x10f54bdfu);
  /* 10f54bdf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54be4 jne 0x10f54c44 */
  if (!C.zf) goto L_10f54c44;
  /* 10f54be6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54bea je 0x10f54c17 */
  if (C.zf) goto L_10f54c17;
L_10f54bec:;
  /* 10f54bec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54bef push eax */
  push32((uint32_t)(EAX));
  /* 10f54bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54bf4 push 0x10f7b604 */
  push32((uint32_t)(0x10f7b604u));
  /* 10f54bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c01 call 0x10f53b50 */
  push32(0x10f54c06u); f_10f53b50();
  /* 10f54c06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c0c jne 0x10f54c0f */
  if (!C.zf) goto L_10f54c0f;
  /* 10f54c0e int3  */
  x86_unimpl("int3 @ 0x10f54c0e");
L_10f54c0f:;
  /* 10f54c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f54c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f54c13 jne 0x10f54bec */
  if (!C.zf) goto L_10f54bec;
  /* 10f54c15 jmp 0x10f54c3d */
  goto L_10f54c3d;
L_10f54c17:;
  /* 10f54c17 push 0x10f7b5e0 */
  push32((uint32_t)(0x10f7b5e0u));
  /* 10f54c1c push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f54c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c29 call 0x10f53b50 */
  push32(0x10f54c2eu); f_10f53b50();
  /* 10f54c2e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c34 jne 0x10f54c37 */
  if (!C.zf) goto L_10f54c37;
  /* 10f54c36 int3  */
  x86_unimpl("int3 @ 0x10f54c36");
L_10f54c37:;
  /* 10f54c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54c3b jne 0x10f54c17 */
  if (!C.zf) goto L_10f54c17;
L_10f54c3d:;
  /* 10f54c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54c3f jmp 0x10f54e6c */
  goto L_10f54e6c;
L_10f54c44:;
  /* 10f54c44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54c47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f54c4d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c50 je 0x10f54c66 */
  if (C.zf) goto L_10f54c66;
  /* 10f54c52 mov edx, dword ptr [0x10f7ea84] */
  EDX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f54c58 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f54c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f54c5d jne 0x10f54c66 */
  if (!C.zf) goto L_10f54c66;
  /* 10f54c5f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10f54c66:;
  /* 10f54c66 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c6a ja 0x10f54c77 */
  if ((!C.cf&&!C.zf)) goto L_10f54c77;
  /* 10f54c6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54c6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54c72 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c75 jbe 0x10f54ca3 */
  if ((C.cf||C.zf)) goto L_10f54ca3;
L_10f54c77:;
  /* 10f54c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54c7a push ecx */
  push32((uint32_t)(ECX));
  /* 10f54c7b push 0x10f7b5b8 */
  push32((uint32_t)(0x10f7b5b8u));
  /* 10f54c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54c88 call 0x10f53b50 */
  push32(0x10f54c8du); f_10f53b50();
  /* 10f54c8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54c93 jne 0x10f54c96 */
  if (!C.zf) goto L_10f54c96;
  /* 10f54c95 int3  */
  x86_unimpl("int3 @ 0x10f54c95");
L_10f54c96:;
  /* 10f54c96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f54c98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f54c9a jne 0x10f54c77 */
  if (!C.zf) goto L_10f54c77;
  /* 10f54c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54c9e jmp 0x10f54e6c */
  goto L_10f54e6c;
L_10f54ca3:;
  /* 10f54ca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54ca6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f54cab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54cae je 0x10f54cf0 */
  if (C.zf) goto L_10f54cf0;
  /* 10f54cb0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54cb4 je 0x10f54cf0 */
  if (C.zf) goto L_10f54cf0;
  /* 10f54cb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54cb9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f54cbf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54cc2 je 0x10f54cf0 */
  if (C.zf) goto L_10f54cf0;
  /* 10f54cc4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54cc8 je 0x10f54cf0 */
  if (C.zf) goto L_10f54cf0;
L_10f54cca:;
  /* 10f54cca push 0x10f7b584 */
  push32((uint32_t)(0x10f7b584u));
  /* 10f54ccf push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f54cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54cda push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54cdc call 0x10f53b50 */
  push32(0x10f54ce1u); f_10f53b50();
  /* 10f54ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54ce7 jne 0x10f54cea */
  if (!C.zf) goto L_10f54cea;
  /* 10f54ce9 int3  */
  x86_unimpl("int3 @ 0x10f54ce9");
L_10f54cea:;
  /* 10f54cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f54cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f54cee jne 0x10f54cca */
  if (!C.zf) goto L_10f54cca;
L_10f54cf0:;
  /* 10f54cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54cf3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54cf6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f54cf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f54cfc push ecx */
  push32((uint32_t)(ECX));
  /* 10f54cfd call 0x10f588e0 */
  push32(0x10f54d02u); f_10f588e0();
  /* 10f54d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54d08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54d0c jne 0x10f54d15 */
  if (!C.zf) goto L_10f54d15;
  /* 10f54d0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54d10 jmp 0x10f54e6c */
  goto L_10f54e6c;
L_10f54d15:;
  /* 10f54d15 mov edx, dword ptr [0x10f7ea88] */
  EDX = (r32((uint32_t)(0x10f7ea88)));
  /* 10f54d1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54d1e mov dword ptr [0x10f7ea88], edx */
  w32((uint32_t)(0x10f7ea88), (EDX));
  /* 10f54d24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54d28 je 0x10f54d73 */
  if (C.zf) goto L_10f54d73;
  /* 10f54d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d2d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f54d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d36 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f54d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d40 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10f54d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d4a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10f54d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54d57 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10f54d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d5d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10f54d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54d67 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10f54d6e jmp 0x10f54e13 */
  goto L_10f54e13;
L_10f54d73:;
  /* 10f54d73 mov edx, dword ptr [0x10f8060c] */
  EDX = (r32((uint32_t)(0x10f8060c)));
  /* 10f54d79 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54d7c mov dword ptr [0x10f8060c], edx */
  w32((uint32_t)(0x10f8060c), (EDX));
  /* 10f54d82 mov eax, dword ptr [0x10f80614] */
  EAX = (r32((uint32_t)(0x10f80614)));
  /* 10f54d87 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54d8a mov dword ptr [0x10f80614], eax */
  w32((uint32_t)(0x10f80614), (EAX));
  /* 10f54d8f mov ecx, dword ptr [0x10f80614] */
  ECX = (r32((uint32_t)(0x10f80614)));
  /* 10f54d95 cmp ecx, dword ptr [0x10f80618] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f80618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54d9b jbe 0x10f54da9 */
  if ((C.cf||C.zf)) goto L_10f54da9;
  /* 10f54d9d mov edx, dword ptr [0x10f80614] */
  EDX = (r32((uint32_t)(0x10f80614)));
  /* 10f54da3 mov dword ptr [0x10f80618], edx */
  w32((uint32_t)(0x10f80618), (EDX));
L_10f54da9:;
  /* 10f54da9 cmp dword ptr [0x10f80610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54db0 je 0x10f54dbf */
  if (C.zf) goto L_10f54dbf;
  /* 10f54db2 mov eax, dword ptr [0x10f80610] */
  EAX = (r32((uint32_t)(0x10f80610)));
  /* 10f54db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54dba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f54dbd jmp 0x10f54dc8 */
  goto L_10f54dc8;
L_10f54dbf:;
  /* 10f54dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54dc2 mov dword ptr [0x10f80608], edx */
  w32((uint32_t)(0x10f80608), (EDX));
L_10f54dc8:;
  /* 10f54dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54dcb mov ecx, dword ptr [0x10f80610] */
  ECX = (r32((uint32_t)(0x10f80610)));
  /* 10f54dd1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f54dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54dd6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10f54ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54de0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54de3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f54de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54de9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54dec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10f54def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54df2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54df5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10f54df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54dfe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10f54e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54e07 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10f54e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e0d mov dword ptr [0x10f80610], ecx */
  w32((uint32_t)(0x10f80610), (ECX));
L_10f54e13:;
  /* 10f54e13 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f54e15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f54e17 mov dl, byte ptr [0x10f7ea90] */
  DL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f54e1d push edx */
  push32((uint32_t)(EDX));
  /* 10f54e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e24 push eax */
  push32((uint32_t)(EAX));
  /* 10f54e25 call 0x10f58800 */
  push32(0x10f54e2au); f_10f58800();
  /* 10f54e2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e2d push 4 */
  push32((uint32_t)(0x4u));
  /* 10f54e2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f54e31 mov cl, byte ptr [0x10f7ea90] */
  CL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f54e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54e38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e3e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10f54e42 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54e43 call 0x10f58800 */
  push32(0x10f54e48u); f_10f58800();
  /* 10f54e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54e4e push edx */
  push32((uint32_t)(EDX));
  /* 10f54e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54e51 mov al, byte ptr [0x10f7ea92] */
  AL = (r8((uint32_t)(0x10f7ea92)));
  /* 10f54e56 push eax */
  push32((uint32_t)(EAX));
  /* 10f54e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10f54e5e call 0x10f58800 */
  push32(0x10f54e63u); f_10f58800();
  /* 10f54e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54e69 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f54e6c:;
  /* 10f54e6c pop edi */
  EDI = (pop32());
  /* 10f54e6d pop esi */
  ESI = (pop32());
  /* 10f54e6e pop ebx */
  EBX = (pop32());
  /* 10f54e6f mov esp, ebp */
  ESP = (EBP);
  /* 10f54e71 pop ebp */
  EBP = (pop32());
  /* 10f54e72 ret  */
  ESPCHK(0x10f54b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x10f54e80 (27 bytes, 13 insns) */
void f_10f54e80(void) {
  FTRACE(0x10f54e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54e81 mov ebp, esp */
  EBP = (ESP);
  /* 10f54e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54e89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54e8c push eax */
  push32((uint32_t)(EAX));
  /* 10f54e8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54e90 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54e91 call 0x10f54ea0 */
  push32(0x10f54e96u); f_10f54ea0();
  /* 10f54e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54e99 pop ebp */
  EBP = (pop32());
  /* 10f54e9a ret  */
  ESPCHK(0x10f54e80u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10f54ea0 (96 bytes, 37 insns) */
void f_10f54ea0(void) {
  FTRACE(0x10f54ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10f54ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f54ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54ea9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f54ead mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f54eb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54eb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10f54eb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54ebb push eax */
  push32((uint32_t)(EAX));
  /* 10f54ebc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54ebf push ecx */
  push32((uint32_t)(ECX));
  /* 10f54ec0 call 0x10f54a90 */
  push32(0x10f54ec5u); f_10f54a90();
  /* 10f54ec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ec8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f54ecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54ecf je 0x10f54ef9 */
  if (C.zf) goto L_10f54ef9;
  /* 10f54ed1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54ed4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f54ed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f54eda add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54edd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f54ee0:;
  /* 10f54ee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f54ee3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54ee6 jae 0x10f54ef9 */
  if (!C.cf) goto L_10f54ef9;
  /* 10f54ee8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f54eeb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f54eee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f54ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f54ef7 jmp 0x10f54ee0 */
  goto L_10f54ee0;
L_10f54ef9:;
  /* 10f54ef9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f54efc mov esp, ebp */
  ESP = (EBP);
  /* 10f54efe pop ebp */
  EBP = (pop32());
  /* 10f54eff ret  */
  ESPCHK(0x10f54ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f00 @ 0x10f54f00 (27 bytes, 13 insns) */
void f_10f54f00(void) {
  FTRACE(0x10f54f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54f01 mov ebp, esp */
  EBP = (ESP);
  /* 10f54f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54f0c push eax */
  push32((uint32_t)(EAX));
  /* 10f54f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54f10 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54f11 call 0x10f54f20 */
  push32(0x10f54f16u); f_10f54f20();
  /* 10f54f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54f19 pop ebp */
  EBP = (pop32());
  /* 10f54f1a ret  */
  ESPCHK(0x10f54f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x10f54f20 (64 bytes, 27 insns) */
void f_10f54f20(void) {
  FTRACE(0x10f54f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54f21 mov ebp, esp */
  EBP = (ESP);
  /* 10f54f23 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54f24 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f54f26 call 0x10f58490 */
  push32(0x10f54f2bu); f_10f58490();
  /* 10f54f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f54f30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54f33 push eax */
  push32((uint32_t)(EAX));
  /* 10f54f34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54f37 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54f38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54f3b push edx */
  push32((uint32_t)(EDX));
  /* 10f54f3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54f3f push eax */
  push32((uint32_t)(EAX));
  /* 10f54f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54f43 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54f44 call 0x10f54f60 */
  push32(0x10f54f49u); f_10f54f60();
  /* 10f54f49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f54f4f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f54f51 call 0x10f58530 */
  push32(0x10f54f56u); f_10f58530();
  /* 10f54f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f54f5c mov esp, ebp */
  ESP = (EBP);
  /* 10f54f5e pop ebp */
  EBP = (pop32());
  /* 10f54f5f ret  */
  ESPCHK(0x10f54f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f60 @ 0x10f54f60 (1297 bytes, 431 insns) */
void f_10f54f60(void) {
  FTRACE(0x10f54f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f54f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f54f61 mov ebp, esp */
  EBP = (ESP);
  /* 10f54f63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f54f66 push ebx */
  push32((uint32_t)(EBX));
  /* 10f54f67 push esi */
  push32((uint32_t)(ESI));
  /* 10f54f68 push edi */
  push32((uint32_t)(EDI));
  /* 10f54f69 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f54f70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54f74 jne 0x10f54f93 */
  if (!C.zf) goto L_10f54f93;
  /* 10f54f76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f54f79 push eax */
  push32((uint32_t)(EAX));
  /* 10f54f7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f54f7d push ecx */
  push32((uint32_t)(ECX));
  /* 10f54f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54f81 push edx */
  push32((uint32_t)(EDX));
  /* 10f54f82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f54f85 push eax */
  push32((uint32_t)(EAX));
  /* 10f54f86 call 0x10f54a90 */
  push32(0x10f54f8bu); f_10f54a90();
  /* 10f54f8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54f8e jmp 0x10f5546a */
  goto L_10f5546a;
L_10f54f93:;
  /* 10f54f93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54f97 je 0x10f54fb6 */
  if (C.zf) goto L_10f54fb6;
  /* 10f54f99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54f9d jne 0x10f54fb6 */
  if (!C.zf) goto L_10f54fb6;
  /* 10f54f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f54fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f54fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f54fa6 push edx */
  push32((uint32_t)(EDX));
  /* 10f54fa7 call 0x10f55520 */
  push32(0x10f54facu); f_10f55520();
  /* 10f54fac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f54fb1 jmp 0x10f5546a */
  goto L_10f5546a;
L_10f54fb6:;
  /* 10f54fb6 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f54fbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f54fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54fc0 je 0x10f54ff2 */
  if (C.zf) goto L_10f54ff2;
L_10f54fc2:;
  /* 10f54fc2 call 0x10f55c30 */
  push32(0x10f54fc7u); f_10f55c30();
  /* 10f54fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f54fc9 jne 0x10f54fec */
  if (!C.zf) goto L_10f54fec;
  /* 10f54fcb push 0x10f7b648 */
  push32((uint32_t)(0x10f7b648u));
  /* 10f54fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f54fd2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10f54fd7 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f54fdc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f54fde call 0x10f53b50 */
  push32(0x10f54fe3u); f_10f53b50();
  /* 10f54fe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f54fe6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f54fe9 jne 0x10f54fec */
  if (!C.zf) goto L_10f54fec;
  /* 10f54feb int3  */
  x86_unimpl("int3 @ 0x10f54feb");
L_10f54fec:;
  /* 10f54fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f54fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f54ff0 jne 0x10f54fc2 */
  if (!C.zf) goto L_10f54fc2;
L_10f54ff2:;
  /* 10f54ff2 mov edx, dword ptr [0x10f7ea88] */
  EDX = (r32((uint32_t)(0x10f7ea88)));
  /* 10f54ff8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f54ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f54ffe cmp eax, dword ptr [0x10f7ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55004 jne 0x10f55007 */
  if (!C.zf) goto L_10f55007;
  /* 10f55006 int3  */
  x86_unimpl("int3 @ 0x10f55006");
L_10f55007:;
  /* 10f55007 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5500a push ecx */
  push32((uint32_t)(ECX));
  /* 10f5500b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5500e push edx */
  push32((uint32_t)(EDX));
  /* 10f5500f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f55012 push eax */
  push32((uint32_t)(EAX));
  /* 10f55013 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f55016 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55017 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5501a push edx */
  push32((uint32_t)(EDX));
  /* 10f5501b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5501e push eax */
  push32((uint32_t)(EAX));
  /* 10f5501f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55021 call dword ptr [0x10f7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7ec90))), 0x10f55027u);
  /* 10f55027 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5502a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5502c jne 0x10f5508c */
  if (!C.zf) goto L_10f5508c;
  /* 10f5502e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55032 je 0x10f5505f */
  if (C.zf) goto L_10f5505f;
L_10f55034:;
  /* 10f55034 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f55037 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55038 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5503b push edx */
  push32((uint32_t)(EDX));
  /* 10f5503c push 0x10f7b7c4 */
  push32((uint32_t)(0x10f7b7c4u));
  /* 10f55041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55043 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55047 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55049 call 0x10f53b50 */
  push32(0x10f5504eu); f_10f53b50();
  /* 10f5504e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55051 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55054 jne 0x10f55057 */
  if (!C.zf) goto L_10f55057;
  /* 10f55056 int3  */
  x86_unimpl("int3 @ 0x10f55056");
L_10f55057:;
  /* 10f55057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5505b jne 0x10f55034 */
  if (!C.zf) goto L_10f55034;
  /* 10f5505d jmp 0x10f55085 */
  goto L_10f55085;
L_10f5505f:;
  /* 10f5505f push 0x10f7b7a0 */
  push32((uint32_t)(0x10f7b7a0u));
  /* 10f55064 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55069 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5506b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5506d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5506f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55071 call 0x10f53b50 */
  push32(0x10f55076u); f_10f53b50();
  /* 10f55076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55079 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5507c jne 0x10f5507f */
  if (!C.zf) goto L_10f5507f;
  /* 10f5507e int3  */
  x86_unimpl("int3 @ 0x10f5507e");
L_10f5507f:;
  /* 10f5507f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55083 jne 0x10f5505f */
  if (!C.zf) goto L_10f5505f;
L_10f55085:;
  /* 10f55085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55087 jmp 0x10f5546a */
  goto L_10f5546a;
L_10f5508c:;
  /* 10f5508c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55090 jbe 0x10f550be */
  if ((C.cf||C.zf)) goto L_10f550be;
L_10f55092:;
  /* 10f55092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55095 push edx */
  push32((uint32_t)(EDX));
  /* 10f55096 push 0x10f7b770 */
  push32((uint32_t)(0x10f7b770u));
  /* 10f5509b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5509d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5509f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f550a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f550a3 call 0x10f53b50 */
  push32(0x10f550a8u); f_10f53b50();
  /* 10f550a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f550ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f550ae jne 0x10f550b1 */
  if (!C.zf) goto L_10f550b1;
  /* 10f550b0 int3  */
  x86_unimpl("int3 @ 0x10f550b0");
L_10f550b1:;
  /* 10f550b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f550b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f550b5 jne 0x10f55092 */
  if (!C.zf) goto L_10f55092;
  /* 10f550b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f550b9 jmp 0x10f5546a */
  goto L_10f5546a;
L_10f550be:;
  /* 10f550be cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f550c2 je 0x10f55106 */
  if (C.zf) goto L_10f55106;
  /* 10f550c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f550c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f550cd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f550d0 je 0x10f55106 */
  if (C.zf) goto L_10f55106;
  /* 10f550d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f550d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f550db cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f550de je 0x10f55106 */
  if (C.zf) goto L_10f55106;
L_10f550e0:;
  /* 10f550e0 push 0x10f7b584 */
  push32((uint32_t)(0x10f7b584u));
  /* 10f550e5 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f550ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10f550ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10f550ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f550f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f550f2 call 0x10f53b50 */
  push32(0x10f550f7u); f_10f53b50();
  /* 10f550f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f550fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f550fd jne 0x10f55100 */
  if (!C.zf) goto L_10f55100;
  /* 10f550ff int3  */
  x86_unimpl("int3 @ 0x10f550ff");
L_10f55100:;
  /* 10f55100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55104 jne 0x10f550e0 */
  if (!C.zf) goto L_10f550e0;
L_10f55106:;
  /* 10f55106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55109 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5510a call 0x10f56090 */
  push32(0x10f5510fu); f_10f56090();
  /* 10f5510f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55114 jne 0x10f55137 */
  if (!C.zf) goto L_10f55137;
  /* 10f55116 push 0x10f7b74c */
  push32((uint32_t)(0x10f7b74cu));
  /* 10f5511b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5511d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10f55122 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55127 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55129 call 0x10f53b50 */
  push32(0x10f5512eu); f_10f53b50();
  /* 10f5512e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55134 jne 0x10f55137 */
  if (!C.zf) goto L_10f55137;
  /* 10f55136 int3  */
  x86_unimpl("int3 @ 0x10f55136");
L_10f55137:;
  /* 10f55137 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5513b jne 0x10f55106 */
  if (!C.zf) goto L_10f55106;
  /* 10f5513d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55140 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f55146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55149 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5514d jne 0x10f55156 */
  if (!C.zf) goto L_10f55156;
  /* 10f5514f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10f55156:;
  /* 10f55156 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5515a je 0x10f5519a */
  if (C.zf) goto L_10f5519a;
L_10f5515c:;
  /* 10f5515c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5515f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55166 jne 0x10f55171 */
  if (!C.zf) goto L_10f55171;
  /* 10f55168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5516b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5516f je 0x10f55192 */
  if (C.zf) goto L_10f55192;
L_10f55171:;
  /* 10f55171 push 0x10f7b704 */
  push32((uint32_t)(0x10f7b704u));
  /* 10f55176 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55178 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10f5517d push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55182 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55184 call 0x10f53b50 */
  push32(0x10f55189u); f_10f53b50();
  /* 10f55189 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5518c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5518f jne 0x10f55192 */
  if (!C.zf) goto L_10f55192;
  /* 10f55191 int3  */
  x86_unimpl("int3 @ 0x10f55191");
L_10f55192:;
  /* 10f55192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55194 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55196 jne 0x10f5515c */
  if (!C.zf) goto L_10f5515c;
  /* 10f55198 jmp 0x10f551fe */
  goto L_10f551fe;
L_10f5519a:;
  /* 10f5519a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5519d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f551a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f551a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f551a8 jne 0x10f551bf */
  if (!C.zf) goto L_10f551bf;
  /* 10f551aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f551ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f551b3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f551b6 jne 0x10f551bf */
  if (!C.zf) goto L_10f551bf;
  /* 10f551b8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10f551bf:;
  /* 10f551bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f551c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f551c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f551ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f551cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f551d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f551d5 je 0x10f551f8 */
  if (C.zf) goto L_10f551f8;
  /* 10f551d7 push 0x10f7b6c8 */
  push32((uint32_t)(0x10f7b6c8u));
  /* 10f551dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f551de push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10f551e3 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f551e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f551ea call 0x10f53b50 */
  push32(0x10f551efu); f_10f53b50();
  /* 10f551ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f551f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f551f5 jne 0x10f551f8 */
  if (!C.zf) goto L_10f551f8;
  /* 10f551f7 int3  */
  x86_unimpl("int3 @ 0x10f551f7");
L_10f551f8:;
  /* 10f551f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f551fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f551fc jne 0x10f551bf */
  if (!C.zf) goto L_10f551bf;
L_10f551fe:;
  /* 10f551fe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55202 je 0x10f55229 */
  if (C.zf) goto L_10f55229;
  /* 10f55204 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55207 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5520a push eax */
  push32((uint32_t)(EAX));
  /* 10f5520b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5520e push ecx */
  push32((uint32_t)(ECX));
  /* 10f5520f call 0x10f58a10 */
  push32(0x10f55214u); f_10f58a10();
  /* 10f55214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5521a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5521e jne 0x10f55227 */
  if (!C.zf) goto L_10f55227;
  /* 10f55220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55222 jmp 0x10f5546a */
  goto L_10f5546a;
L_10f55227:;
  /* 10f55227 jmp 0x10f5524c */
  goto L_10f5524c;
L_10f55229:;
  /* 10f55229 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5522c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5522f push edx */
  push32((uint32_t)(EDX));
  /* 10f55230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55233 push eax */
  push32((uint32_t)(EAX));
  /* 10f55234 call 0x10f58960 */
  push32(0x10f55239u); f_10f58960();
  /* 10f55239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5523c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5523f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55243 jne 0x10f5524c */
  if (!C.zf) goto L_10f5524c;
  /* 10f55245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55247 jmp 0x10f5546a */
  goto L_10f5546a;
L_10f5524c:;
  /* 10f5524c mov ecx, dword ptr [0x10f7ea88] */
  ECX = (r32((uint32_t)(0x10f7ea88)));
  /* 10f55252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55255 mov dword ptr [0x10f7ea88], ecx */
  w32((uint32_t)(0x10f7ea88), (ECX));
  /* 10f5525b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5525f jne 0x10f552b7 */
  if (!C.zf) goto L_10f552b7;
  /* 10f55261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55264 mov eax, dword ptr [0x10f8060c] */
  EAX = (r32((uint32_t)(0x10f8060c)));
  /* 10f55269 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5526c mov dword ptr [0x10f8060c], eax */
  w32((uint32_t)(0x10f8060c), (EAX));
  /* 10f55271 mov ecx, dword ptr [0x10f8060c] */
  ECX = (r32((uint32_t)(0x10f8060c)));
  /* 10f55277 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5527a mov dword ptr [0x10f8060c], ecx */
  w32((uint32_t)(0x10f8060c), (ECX));
  /* 10f55280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55283 mov eax, dword ptr [0x10f80614] */
  EAX = (r32((uint32_t)(0x10f80614)));
  /* 10f55288 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5528b mov dword ptr [0x10f80614], eax */
  w32((uint32_t)(0x10f80614), (EAX));
  /* 10f55290 mov ecx, dword ptr [0x10f80614] */
  ECX = (r32((uint32_t)(0x10f80614)));
  /* 10f55296 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55299 mov dword ptr [0x10f80614], ecx */
  w32((uint32_t)(0x10f80614), (ECX));
  /* 10f5529f mov edx, dword ptr [0x10f80614] */
  EDX = (r32((uint32_t)(0x10f80614)));
  /* 10f552a5 cmp edx, dword ptr [0x10f80618] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f80618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f552ab jbe 0x10f552b7 */
  if ((C.cf||C.zf)) goto L_10f552b7;
  /* 10f552ad mov eax, dword ptr [0x10f80614] */
  EAX = (r32((uint32_t)(0x10f80614)));
  /* 10f552b2 mov dword ptr [0x10f80618], eax */
  w32((uint32_t)(0x10f80618), (EAX));
L_10f552b7:;
  /* 10f552b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f552ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f552bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f552c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f552c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f552c6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f552c9 jbe 0x10f552ef */
  if ((C.cf||C.zf)) goto L_10f552ef;
  /* 10f552cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f552ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f552d1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f552d4 push edx */
  push32((uint32_t)(EDX));
  /* 10f552d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f552d7 mov al, byte ptr [0x10f7ea92] */
  AL = (r8((uint32_t)(0x10f7ea92)));
  /* 10f552dc push eax */
  push32((uint32_t)(EAX));
  /* 10f552dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f552e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f552e3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f552e6 push edx */
  push32((uint32_t)(EDX));
  /* 10f552e7 call 0x10f58800 */
  push32(0x10f552ecu); f_10f58800();
  /* 10f552ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f552ef:;
  /* 10f552ef push 4 */
  push32((uint32_t)(0x4u));
  /* 10f552f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f552f3 mov al, byte ptr [0x10f7ea90] */
  AL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f552f8 push eax */
  push32((uint32_t)(EAX));
  /* 10f552f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f552fc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f552ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f55300 call 0x10f58800 */
  push32(0x10f55305u); f_10f58800();
  /* 10f55305 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55308 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5530c jne 0x10f55329 */
  if (!C.zf) goto L_10f55329;
  /* 10f5530e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55311 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f55314 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f55317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5531a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5531d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10f55320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55323 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f55326 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10f55329:;
  /* 10f55329 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5532c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5532f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10f55332:;
  /* 10f55332 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55336 jne 0x10f55367 */
  if (!C.zf) goto L_10f55367;
  /* 10f55338 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5533c jne 0x10f55346 */
  if (!C.zf) goto L_10f55346;
  /* 10f5533e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55341 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55344 je 0x10f55367 */
  if (C.zf) goto L_10f55367;
L_10f55346:;
  /* 10f55346 push 0x10f7b694 */
  push32((uint32_t)(0x10f7b694u));
  /* 10f5534b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5534d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10f55352 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55357 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55359 call 0x10f53b50 */
  push32(0x10f5535eu); f_10f53b50();
  /* 10f5535e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55361 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55364 jne 0x10f55367 */
  if (!C.zf) goto L_10f55367;
  /* 10f55366 int3  */
  x86_unimpl("int3 @ 0x10f55366");
L_10f55367:;
  /* 10f55367 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5536b jne 0x10f55332 */
  if (!C.zf) goto L_10f55332;
  /* 10f5536d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55370 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55373 je 0x10f5537b */
  if (C.zf) goto L_10f5537b;
  /* 10f55375 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55379 je 0x10f55383 */
  if (C.zf) goto L_10f55383;
L_10f5537b:;
  /* 10f5537b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5537e jmp 0x10f5546a */
  goto L_10f5546a;
L_10f55383:;
  /* 10f55383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55386 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55389 je 0x10f5539b */
  if (C.zf) goto L_10f5539b;
  /* 10f5538b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5538e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f55390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55393 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f55396 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f55399 jmp 0x10f553d7 */
  goto L_10f553d7;
L_10f5539b:;
  /* 10f5539b mov eax, dword ptr [0x10f80608] */
  EAX = (r32((uint32_t)(0x10f80608)));
  /* 10f553a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f553a3 je 0x10f553c6 */
  if (C.zf) goto L_10f553c6;
  /* 10f553a5 push 0x10f7b678 */
  push32((uint32_t)(0x10f7b678u));
  /* 10f553aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f553ac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10f553b1 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f553b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f553b8 call 0x10f53b50 */
  push32(0x10f553bdu); f_10f53b50();
  /* 10f553bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f553c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f553c3 jne 0x10f553c6 */
  if (!C.zf) goto L_10f553c6;
  /* 10f553c5 int3  */
  x86_unimpl("int3 @ 0x10f553c5");
L_10f553c6:;
  /* 10f553c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f553c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f553ca jne 0x10f5539b */
  if (!C.zf) goto L_10f5539b;
  /* 10f553cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f553cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f553d2 mov dword ptr [0x10f80608], eax */
  w32((uint32_t)(0x10f80608), (EAX));
L_10f553d7:;
  /* 10f553d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f553da cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f553de je 0x10f553ef */
  if (C.zf) goto L_10f553ef;
  /* 10f553e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f553e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f553e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f553e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f553eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f553ed jmp 0x10f5542a */
  goto L_10f5542a;
L_10f553ef:;
  /* 10f553ef mov eax, dword ptr [0x10f80610] */
  EAX = (r32((uint32_t)(0x10f80610)));
  /* 10f553f4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f553f7 je 0x10f5541a */
  if (C.zf) goto L_10f5541a;
  /* 10f553f9 push 0x10f7b65c */
  push32((uint32_t)(0x10f7b65cu));
  /* 10f553fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55400 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10f55405 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f5540a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5540c call 0x10f53b50 */
  push32(0x10f55411u); f_10f53b50();
  /* 10f55411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55414 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55417 jne 0x10f5541a */
  if (!C.zf) goto L_10f5541a;
  /* 10f55419 int3  */
  x86_unimpl("int3 @ 0x10f55419");
L_10f5541a:;
  /* 10f5541a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5541c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5541e jne 0x10f553ef */
  if (!C.zf) goto L_10f553ef;
  /* 10f55420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55423 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f55425 mov dword ptr [0x10f80610], eax */
  w32((uint32_t)(0x10f80610), (EAX));
L_10f5542a:;
  /* 10f5542a cmp dword ptr [0x10f80610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55431 je 0x10f55441 */
  if (C.zf) goto L_10f55441;
  /* 10f55433 mov ecx, dword ptr [0x10f80610] */
  ECX = (r32((uint32_t)(0x10f80610)));
  /* 10f55439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5543c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f5543f jmp 0x10f55449 */
  goto L_10f55449;
L_10f55441:;
  /* 10f55441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55444 mov dword ptr [0x10f80608], eax */
  w32((uint32_t)(0x10f80608), (EAX));
L_10f55449:;
  /* 10f55449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5544c mov edx, dword ptr [0x10f80610] */
  EDX = (r32((uint32_t)(0x10f80610)));
  /* 10f55452 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f55454 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55457 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f5545e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55461 mov dword ptr [0x10f80610], ecx */
  w32((uint32_t)(0x10f80610), (ECX));
  /* 10f55467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f5546a:;
  /* 10f5546a pop edi */
  EDI = (pop32());
  /* 10f5546b pop esi */
  ESI = (pop32());
  /* 10f5546c pop ebx */
  EBX = (pop32());
  /* 10f5546d mov esp, ebp */
  ESP = (EBP);
  /* 10f5546f pop ebp */
  EBP = (pop32());
  /* 10f55470 ret  */
  ESPCHK(0x10f54f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x10f55480 (27 bytes, 13 insns) */
void f_10f55480(void) {
  FTRACE(0x10f55480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55480 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55481 mov ebp, esp */
  EBP = (ESP);
  /* 10f55483 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55485 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55487 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f55489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5548c push eax */
  push32((uint32_t)(EAX));
  /* 10f5548d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55490 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55491 call 0x10f554a0 */
  push32(0x10f55496u); f_10f554a0();
  /* 10f55496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55499 pop ebp */
  EBP = (pop32());
  /* 10f5549a ret  */
  ESPCHK(0x10f55480u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x10f554a0 (64 bytes, 27 insns) */
void f_10f554a0(void) {
  FTRACE(0x10f554a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f554a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f554a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f554a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f554a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f554a6 call 0x10f58490 */
  push32(0x10f554abu); f_10f58490();
  /* 10f554ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f554ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10f554b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f554b3 push eax */
  push32((uint32_t)(EAX));
  /* 10f554b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f554b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f554b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f554bb push edx */
  push32((uint32_t)(EDX));
  /* 10f554bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f554bf push eax */
  push32((uint32_t)(EAX));
  /* 10f554c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f554c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f554c4 call 0x10f54f60 */
  push32(0x10f554c9u); f_10f54f60();
  /* 10f554c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f554cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f554cf push 9 */
  push32((uint32_t)(0x9u));
  /* 10f554d1 call 0x10f58530 */
  push32(0x10f554d6u); f_10f58530();
  /* 10f554d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f554d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f554dc mov esp, ebp */
  ESP = (EBP);
  /* 10f554de pop ebp */
  EBP = (pop32());
  /* 10f554df ret  */
  ESPCHK(0x10f554a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x10f554e0 (19 bytes, 9 insns) */
void f_10f554e0(void) {
  FTRACE(0x10f554e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f554e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f554e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f554e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f554e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f554e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f554e9 call 0x10f55520 */
  push32(0x10f554eeu); f_10f55520();
  /* 10f554ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f554f1 pop ebp */
  EBP = (pop32());
  /* 10f554f2 ret  */
  ESPCHK(0x10f554e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005500 @ 0x10f55500 (19 bytes, 9 insns) */
void f_10f55500(void) {
  FTRACE(0x10f55500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55500 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55501 mov ebp, esp */
  EBP = (ESP);
  /* 10f55503 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f55505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55508 push eax */
  push32((uint32_t)(EAX));
  /* 10f55509 call 0x10f55550 */
  push32(0x10f5550eu); f_10f55550();
  /* 10f5550e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55511 pop ebp */
  EBP = (pop32());
  /* 10f55512 ret  */
  ESPCHK(0x10f55500u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x10f55520 (41 bytes, 16 insns) */
void f_10f55520(void) {
  FTRACE(0x10f55520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55520 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55521 mov ebp, esp */
  EBP = (ESP);
  /* 10f55523 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55525 call 0x10f58490 */
  push32(0x10f5552au); f_10f58490();
  /* 10f5552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5552d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55530 push eax */
  push32((uint32_t)(EAX));
  /* 10f55531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55534 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55535 call 0x10f55550 */
  push32(0x10f5553au); f_10f55550();
  /* 10f5553a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5553d push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5553f call 0x10f58530 */
  push32(0x10f55544u); f_10f58530();
  /* 10f55544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55547 pop ebp */
  EBP = (pop32());
  /* 10f55548 ret  */
  ESPCHK(0x10f55520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x10f55550 (1004 bytes, 342 insns) */
void f_10f55550(void) {
  FTRACE(0x10f55550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55550 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55551 mov ebp, esp */
  EBP = (ESP);
  /* 10f55553 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55554 push ebx */
  push32((uint32_t)(EBX));
  /* 10f55555 push esi */
  push32((uint32_t)(ESI));
  /* 10f55556 push edi */
  push32((uint32_t)(EDI));
  /* 10f55557 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f5555c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5555f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55561 je 0x10f55593 */
  if (C.zf) goto L_10f55593;
L_10f55563:;
  /* 10f55563 call 0x10f55c30 */
  push32(0x10f55568u); f_10f55c30();
  /* 10f55568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5556a jne 0x10f5558d */
  if (!C.zf) goto L_10f5558d;
  /* 10f5556c push 0x10f7b648 */
  push32((uint32_t)(0x10f7b648u));
  /* 10f55571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55573 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10f55578 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f5557d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5557f call 0x10f53b50 */
  push32(0x10f55584u); f_10f53b50();
  /* 10f55584 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5558a jne 0x10f5558d */
  if (!C.zf) goto L_10f5558d;
  /* 10f5558c int3  */
  x86_unimpl("int3 @ 0x10f5558c");
L_10f5558d:;
  /* 10f5558d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5558f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55591 jne 0x10f55563 */
  if (!C.zf) goto L_10f55563;
L_10f55593:;
  /* 10f55593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55597 jne 0x10f5559e */
  if (!C.zf) goto L_10f5559e;
  /* 10f55599 jmp 0x10f55935 */
  goto L_10f55935;
L_10f5559e:;
  /* 10f5559e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f555a7 push edx */
  push32((uint32_t)(EDX));
  /* 10f555a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f555ad push eax */
  push32((uint32_t)(EAX));
  /* 10f555ae push 3 */
  push32((uint32_t)(0x3u));
  /* 10f555b0 call dword ptr [0x10f7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f7ec90))), 0x10f555b6u);
  /* 10f555b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f555b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f555bb jne 0x10f555e8 */
  if (!C.zf) goto L_10f555e8;
L_10f555bd:;
  /* 10f555bd push 0x10f7b90c */
  push32((uint32_t)(0x10f7b90cu));
  /* 10f555c2 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f555c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555cf call 0x10f53b50 */
  push32(0x10f555d4u); f_10f53b50();
  /* 10f555d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f555d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f555da jne 0x10f555dd */
  if (!C.zf) goto L_10f555dd;
  /* 10f555dc int3  */
  x86_unimpl("int3 @ 0x10f555dc");
L_10f555dd:;
  /* 10f555dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f555df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f555e1 jne 0x10f555bd */
  if (!C.zf) goto L_10f555bd;
  /* 10f555e3 jmp 0x10f55935 */
  goto L_10f55935;
L_10f555e8:;
  /* 10f555e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f555eb push edx */
  push32((uint32_t)(EDX));
  /* 10f555ec call 0x10f56090 */
  push32(0x10f555f1u); f_10f56090();
  /* 10f555f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f555f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f555f6 jne 0x10f55619 */
  if (!C.zf) goto L_10f55619;
  /* 10f555f8 push 0x10f7b74c */
  push32((uint32_t)(0x10f7b74cu));
  /* 10f555fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f555ff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10f55604 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55609 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5560b call 0x10f53b50 */
  push32(0x10f55610u); f_10f53b50();
  /* 10f55610 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55613 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55616 jne 0x10f55619 */
  if (!C.zf) goto L_10f55619;
  /* 10f55618 int3  */
  x86_unimpl("int3 @ 0x10f55618");
L_10f55619:;
  /* 10f55619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5561b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5561d jne 0x10f555e8 */
  if (!C.zf) goto L_10f555e8;
  /* 10f5561f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55622 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55625 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f55628:;
  /* 10f55628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5562b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f5562e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f55633 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55636 je 0x10f5567b */
  if (C.zf) goto L_10f5567b;
  /* 10f55638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5563b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5563f je 0x10f5567b */
  if (C.zf) goto L_10f5567b;
  /* 10f55641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55644 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f55647 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5564c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5564f je 0x10f5567b */
  if (C.zf) goto L_10f5567b;
  /* 10f55651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55654 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55658 je 0x10f5567b */
  if (C.zf) goto L_10f5567b;
  /* 10f5565a push 0x10f7b8e4 */
  push32((uint32_t)(0x10f7b8e4u));
  /* 10f5565f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55661 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10f55666 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f5566b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5566d call 0x10f53b50 */
  push32(0x10f55672u); f_10f53b50();
  /* 10f55672 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55678 jne 0x10f5567b */
  if (!C.zf) goto L_10f5567b;
  /* 10f5567a int3  */
  x86_unimpl("int3 @ 0x10f5567a");
L_10f5567b:;
  /* 10f5567b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5567d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5567f jne 0x10f55628 */
  if (!C.zf) goto L_10f55628;
  /* 10f55681 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f55686 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f55689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5568b jne 0x10f55756 */
  if (!C.zf) goto L_10f55756;
  /* 10f55691 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f55693 mov cl, byte ptr [0x10f7ea90] */
  CL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f55699 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5569a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5569d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f556a0 push edx */
  push32((uint32_t)(EDX));
  /* 10f556a1 call 0x10f55ba0 */
  push32(0x10f556a6u); f_10f55ba0();
  /* 10f556a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f556a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f556ab jne 0x10f556f0 */
  if (!C.zf) goto L_10f556f0;
L_10f556ad:;
  /* 10f556ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f556b0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f556b3 push eax */
  push32((uint32_t)(EAX));
  /* 10f556b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f556b7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f556ba push edx */
  push32((uint32_t)(EDX));
  /* 10f556bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f556be mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f556c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f556c7 mov edx, dword ptr [ecx*4 + 0x10f7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea94)));
  /* 10f556ce push edx */
  push32((uint32_t)(EDX));
  /* 10f556cf push 0x10f7b8b8 */
  push32((uint32_t)(0x10f7b8b8u));
  /* 10f556d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f556d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f556d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f556da push 1 */
  push32((uint32_t)(0x1u));
  /* 10f556dc call 0x10f53b50 */
  push32(0x10f556e1u); f_10f53b50();
  /* 10f556e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f556e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f556e7 jne 0x10f556ea */
  if (!C.zf) goto L_10f556ea;
  /* 10f556e9 int3  */
  x86_unimpl("int3 @ 0x10f556e9");
L_10f556ea:;
  /* 10f556ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f556ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f556ee jne 0x10f556ad */
  if (!C.zf) goto L_10f556ad;
L_10f556f0:;
  /* 10f556f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f556f2 mov cl, byte ptr [0x10f7ea90] */
  CL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f556f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f556f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f556fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f556ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55702 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10f55706 push edx */
  push32((uint32_t)(EDX));
  /* 10f55707 call 0x10f55ba0 */
  push32(0x10f5570cu); f_10f55ba0();
  /* 10f5570c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5570f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55711 jne 0x10f55756 */
  if (!C.zf) goto L_10f55756;
L_10f55713:;
  /* 10f55713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55716 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55719 push eax */
  push32((uint32_t)(EAX));
  /* 10f5571a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5571d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f55720 push edx */
  push32((uint32_t)(EDX));
  /* 10f55721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55724 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f55727 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f5572d mov edx, dword ptr [ecx*4 + 0x10f7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea94)));
  /* 10f55734 push edx */
  push32((uint32_t)(EDX));
  /* 10f55735 push 0x10f7b88c */
  push32((uint32_t)(0x10f7b88cu));
  /* 10f5573a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5573c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5573e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55740 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f55742 call 0x10f53b50 */
  push32(0x10f55747u); f_10f53b50();
  /* 10f55747 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5574a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5574d jne 0x10f55750 */
  if (!C.zf) goto L_10f55750;
  /* 10f5574f int3  */
  x86_unimpl("int3 @ 0x10f5574f");
L_10f55750:;
  /* 10f55750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55754 jne 0x10f55713 */
  if (!C.zf) goto L_10f55713;
L_10f55756:;
  /* 10f55756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55759 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5575d jne 0x10f557cb */
  if (!C.zf) goto L_10f557cb;
L_10f5575f:;
  /* 10f5575f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55762 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55769 jne 0x10f55774 */
  if (!C.zf) goto L_10f55774;
  /* 10f5576b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5576e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55772 je 0x10f55795 */
  if (C.zf) goto L_10f55795;
L_10f55774:;
  /* 10f55774 push 0x10f7b84c */
  push32((uint32_t)(0x10f7b84cu));
  /* 10f55779 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5577b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10f55780 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55785 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55787 call 0x10f53b50 */
  push32(0x10f5578cu); f_10f53b50();
  /* 10f5578c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5578f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55792 jne 0x10f55795 */
  if (!C.zf) goto L_10f55795;
  /* 10f55794 int3  */
  x86_unimpl("int3 @ 0x10f55794");
L_10f55795:;
  /* 10f55795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55799 jne 0x10f5575f */
  if (!C.zf) goto L_10f5575f;
  /* 10f5579b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5579e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f557a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f557a4 push eax */
  push32((uint32_t)(EAX));
  /* 10f557a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f557a7 mov cl, byte ptr [0x10f7ea91] */
  CL = (r8((uint32_t)(0x10f7ea91)));
  /* 10f557ad push ecx */
  push32((uint32_t)(ECX));
  /* 10f557ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f557b1 push edx */
  push32((uint32_t)(EDX));
  /* 10f557b2 call 0x10f58800 */
  push32(0x10f557b7u); f_10f58800();
  /* 10f557b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f557ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f557bd push eax */
  push32((uint32_t)(EAX));
  /* 10f557be call 0x10f58c00 */
  push32(0x10f557c3u); f_10f58c00();
  /* 10f557c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f557c6 jmp 0x10f55935 */
  goto L_10f55935;
L_10f557cb:;
  /* 10f557cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f557ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f557d2 jne 0x10f557e1 */
  if (!C.zf) goto L_10f557e1;
  /* 10f557d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f557d8 jne 0x10f557e1 */
  if (!C.zf) goto L_10f557e1;
  /* 10f557da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10f557e1:;
  /* 10f557e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f557e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f557e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f557ea je 0x10f5580d */
  if (C.zf) goto L_10f5580d;
  /* 10f557ec push 0x10f7b82c */
  push32((uint32_t)(0x10f7b82cu));
  /* 10f557f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f557f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10f557f8 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f557fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f557ff call 0x10f53b50 */
  push32(0x10f55804u); f_10f53b50();
  /* 10f55804 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5580a jne 0x10f5580d */
  if (!C.zf) goto L_10f5580d;
  /* 10f5580c int3  */
  x86_unimpl("int3 @ 0x10f5580c");
L_10f5580d:;
  /* 10f5580d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5580f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55811 jne 0x10f557e1 */
  if (!C.zf) goto L_10f557e1;
  /* 10f55813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55816 mov eax, dword ptr [0x10f80614] */
  EAX = (r32((uint32_t)(0x10f80614)));
  /* 10f5581b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5581e mov dword ptr [0x10f80614], eax */
  w32((uint32_t)(0x10f80614), (EAX));
  /* 10f55823 mov ecx, dword ptr [0x10f7ea84] */
  ECX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f55829 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5582c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f5582e jne 0x10f5590c */
  if (!C.zf) goto L_10f5590c;
  /* 10f55834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55837 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5583a je 0x10f5584c */
  if (C.zf) goto L_10f5584c;
  /* 10f5583c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5583f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f55841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55844 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f55847 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f5584a jmp 0x10f5588a */
  goto L_10f5588a;
L_10f5584c:;
  /* 10f5584c mov ecx, dword ptr [0x10f80608] */
  ECX = (r32((uint32_t)(0x10f80608)));
  /* 10f55852 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55855 je 0x10f55878 */
  if (C.zf) goto L_10f55878;
  /* 10f55857 push 0x10f7b814 */
  push32((uint32_t)(0x10f7b814u));
  /* 10f5585c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5585e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10f55863 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55868 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5586a call 0x10f53b50 */
  push32(0x10f5586fu); f_10f53b50();
  /* 10f5586f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55872 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55875 jne 0x10f55878 */
  if (!C.zf) goto L_10f55878;
  /* 10f55877 int3  */
  x86_unimpl("int3 @ 0x10f55877");
L_10f55878:;
  /* 10f55878 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5587a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5587c jne 0x10f5584c */
  if (!C.zf) goto L_10f5584c;
  /* 10f5587e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55881 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f55884 mov dword ptr [0x10f80608], ecx */
  w32((uint32_t)(0x10f80608), (ECX));
L_10f5588a:;
  /* 10f5588a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5588d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55891 je 0x10f558a2 */
  if (C.zf) goto L_10f558a2;
  /* 10f55893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55896 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f55899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5589c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f5589e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f558a0 jmp 0x10f558df */
  goto L_10f558df;
L_10f558a2:;
  /* 10f558a2 mov ecx, dword ptr [0x10f80610] */
  ECX = (r32((uint32_t)(0x10f80610)));
  /* 10f558a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f558ab je 0x10f558ce */
  if (C.zf) goto L_10f558ce;
  /* 10f558ad push 0x10f7b7fc */
  push32((uint32_t)(0x10f7b7fcu));
  /* 10f558b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f558b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10f558b9 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f558be push 2 */
  push32((uint32_t)(0x2u));
  /* 10f558c0 call 0x10f53b50 */
  push32(0x10f558c5u); f_10f53b50();
  /* 10f558c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f558c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f558cb jne 0x10f558ce */
  if (!C.zf) goto L_10f558ce;
  /* 10f558cd int3  */
  x86_unimpl("int3 @ 0x10f558cd");
L_10f558ce:;
  /* 10f558ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f558d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f558d2 jne 0x10f558a2 */
  if (!C.zf) goto L_10f558a2;
  /* 10f558d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f558d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f558d9 mov dword ptr [0x10f80610], ecx */
  w32((uint32_t)(0x10f80610), (ECX));
L_10f558df:;
  /* 10f558df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f558e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f558e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f558e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f558e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f558eb mov cl, byte ptr [0x10f7ea91] */
  CL = (r8((uint32_t)(0x10f7ea91)));
  /* 10f558f1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f558f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f558f5 push edx */
  push32((uint32_t)(EDX));
  /* 10f558f6 call 0x10f58800 */
  push32(0x10f558fbu); f_10f58800();
  /* 10f558fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f558fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55901 push eax */
  push32((uint32_t)(EAX));
  /* 10f55902 call 0x10f58c00 */
  push32(0x10f55907u); f_10f58c00();
  /* 10f55907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5590a jmp 0x10f55935 */
  goto L_10f55935;
L_10f5590c:;
  /* 10f5590c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5590f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10f55916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55919 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f5591c push eax */
  push32((uint32_t)(EAX));
  /* 10f5591d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5591f mov cl, byte ptr [0x10f7ea91] */
  CL = (r8((uint32_t)(0x10f7ea91)));
  /* 10f55925 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55929 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5592c push edx */
  push32((uint32_t)(EDX));
  /* 10f5592d call 0x10f58800 */
  push32(0x10f55932u); f_10f58800();
  /* 10f55932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f55935:;
  /* 10f55935 pop edi */
  EDI = (pop32());
  /* 10f55936 pop esi */
  ESI = (pop32());
  /* 10f55937 pop ebx */
  EBX = (pop32());
  /* 10f55938 mov esp, ebp */
  ESP = (EBP);
  /* 10f5593a pop ebp */
  EBP = (pop32());
  /* 10f5593b ret  */
  ESPCHK(0x10f55550u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x10f55940 (19 bytes, 9 insns) */
void f_10f55940(void) {
  FTRACE(0x10f55940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55940 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55941 mov ebp, esp */
  EBP = (ESP);
  /* 10f55943 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f55945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55948 push eax */
  push32((uint32_t)(EAX));
  /* 10f55949 call 0x10f55960 */
  push32(0x10f5594eu); f_10f55960();
  /* 10f5594e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55951 pop ebp */
  EBP = (pop32());
  /* 10f55952 ret  */
  ESPCHK(0x10f55940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005960 @ 0x10f55960 (342 bytes, 119 insns) */
void f_10f55960(void) {
  FTRACE(0x10f55960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55960 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55961 mov ebp, esp */
  EBP = (ESP);
  /* 10f55963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55966 push ebx */
  push32((uint32_t)(EBX));
  /* 10f55967 push esi */
  push32((uint32_t)(ESI));
  /* 10f55968 push edi */
  push32((uint32_t)(EDI));
  /* 10f55969 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f5596e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f55971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55973 je 0x10f559a5 */
  if (C.zf) goto L_10f559a5;
L_10f55975:;
  /* 10f55975 call 0x10f55c30 */
  push32(0x10f5597au); f_10f55c30();
  /* 10f5597a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5597c jne 0x10f5599f */
  if (!C.zf) goto L_10f5599f;
  /* 10f5597e push 0x10f7b648 */
  push32((uint32_t)(0x10f7b648u));
  /* 10f55983 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55985 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10f5598a push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f5598f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55991 call 0x10f53b50 */
  push32(0x10f55996u); f_10f53b50();
  /* 10f55996 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5599c jne 0x10f5599f */
  if (!C.zf) goto L_10f5599f;
  /* 10f5599e int3  */
  x86_unimpl("int3 @ 0x10f5599e");
L_10f5599f:;
  /* 10f5599f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f559a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f559a3 jne 0x10f55975 */
  if (!C.zf) goto L_10f55975;
L_10f559a5:;
  /* 10f559a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f559a7 call 0x10f58490 */
  push32(0x10f559acu); f_10f58490();
  /* 10f559ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f559af:;
  /* 10f559af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f559b2 push edx */
  push32((uint32_t)(EDX));
  /* 10f559b3 call 0x10f56090 */
  push32(0x10f559b8u); f_10f56090();
  /* 10f559b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f559bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f559bd jne 0x10f559e0 */
  if (!C.zf) goto L_10f559e0;
  /* 10f559bf push 0x10f7b74c */
  push32((uint32_t)(0x10f7b74cu));
  /* 10f559c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f559c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10f559cb push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f559d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f559d2 call 0x10f53b50 */
  push32(0x10f559d7u); f_10f53b50();
  /* 10f559d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f559da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f559dd jne 0x10f559e0 */
  if (!C.zf) goto L_10f559e0;
  /* 10f559df int3  */
  x86_unimpl("int3 @ 0x10f559df");
L_10f559e0:;
  /* 10f559e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f559e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f559e4 jne 0x10f559af */
  if (!C.zf) goto L_10f559af;
  /* 10f559e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f559e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f559ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f559ef:;
  /* 10f559ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f559f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f559f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f559fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f559fd je 0x10f55a42 */
  if (C.zf) goto L_10f55a42;
  /* 10f559ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a02 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a06 je 0x10f55a42 */
  if (C.zf) goto L_10f55a42;
  /* 10f55a08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a0b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f55a0e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f55a13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a16 je 0x10f55a42 */
  if (C.zf) goto L_10f55a42;
  /* 10f55a18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a1b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a1f je 0x10f55a42 */
  if (C.zf) goto L_10f55a42;
  /* 10f55a21 push 0x10f7b8e4 */
  push32((uint32_t)(0x10f7b8e4u));
  /* 10f55a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55a28 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10f55a2d push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55a32 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55a34 call 0x10f53b50 */
  push32(0x10f55a39u); f_10f53b50();
  /* 10f55a39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55a3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a3f jne 0x10f55a42 */
  if (!C.zf) goto L_10f55a42;
  /* 10f55a41 int3  */
  x86_unimpl("int3 @ 0x10f55a41");
L_10f55a42:;
  /* 10f55a42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55a44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55a46 jne 0x10f559ef */
  if (!C.zf) goto L_10f559ef;
  /* 10f55a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a4b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a4f jne 0x10f55a5e */
  if (!C.zf) goto L_10f55a5e;
  /* 10f55a51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a55 jne 0x10f55a5e */
  if (!C.zf) goto L_10f55a5e;
  /* 10f55a57 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10f55a5e:;
  /* 10f55a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a61 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a65 je 0x10f55a99 */
  if (C.zf) goto L_10f55a99;
L_10f55a67:;
  /* 10f55a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f55a6d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a70 je 0x10f55a93 */
  if (C.zf) goto L_10f55a93;
  /* 10f55a72 push 0x10f7b82c */
  push32((uint32_t)(0x10f7b82cu));
  /* 10f55a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55a79 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10f55a7e push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55a85 call 0x10f53b50 */
  push32(0x10f55a8au); f_10f53b50();
  /* 10f55a8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55a8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55a90 jne 0x10f55a93 */
  if (!C.zf) goto L_10f55a93;
  /* 10f55a92 int3  */
  x86_unimpl("int3 @ 0x10f55a92");
L_10f55a93:;
  /* 10f55a93 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55a97 jne 0x10f55a67 */
  if (!C.zf) goto L_10f55a67;
L_10f55a99:;
  /* 10f55a99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55a9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f55a9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f55aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55aa4 call 0x10f58530 */
  push32(0x10f55aa9u); f_10f58530();
  /* 10f55aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55aaf pop edi */
  EDI = (pop32());
  /* 10f55ab0 pop esi */
  ESI = (pop32());
  /* 10f55ab1 pop ebx */
  EBX = (pop32());
  /* 10f55ab2 mov esp, ebp */
  ESP = (EBP);
  /* 10f55ab4 pop ebp */
  EBP = (pop32());
  /* 10f55ab5 ret  */
  ESPCHK(0x10f55960u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x10f55ac0 (28 bytes, 11 insns) */
void f_10f55ac0(void) {
  FTRACE(0x10f55ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10f55ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55ac4 mov eax, dword ptr [0x10f7ea8c] */
  EAX = (r32((uint32_t)(0x10f7ea8c)));
  /* 10f55ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f55acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55acf mov dword ptr [0x10f7ea8c], ecx */
  w32((uint32_t)(0x10f7ea8c), (ECX));
  /* 10f55ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55ad8 mov esp, ebp */
  ESP = (EBP);
  /* 10f55ada pop ebp */
  EBP = (pop32());
  /* 10f55adb ret  */
  ESPCHK(0x10f55ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x10f55ae0 (157 bytes, 59 insns) */
void f_10f55ae0(void) {
  FTRACE(0x10f55ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10f55ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f55ae5 push esi */
  push32((uint32_t)(ESI));
  /* 10f55ae6 push edi */
  push32((uint32_t)(EDI));
  /* 10f55ae7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55ae9 call 0x10f58490 */
  push32(0x10f55aeeu); f_10f58490();
  /* 10f55aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55af4 push eax */
  push32((uint32_t)(EAX));
  /* 10f55af5 call 0x10f56090 */
  push32(0x10f55afau); f_10f56090();
  /* 10f55afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55aff je 0x10f55b6c */
  if (C.zf) goto L_10f55b6c;
  /* 10f55b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55b04 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55b07 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f55b0a:;
  /* 10f55b0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f55b10 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f55b15 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55b18 je 0x10f55b5d */
  if (C.zf) goto L_10f55b5d;
  /* 10f55b1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b1d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55b21 je 0x10f55b5d */
  if (C.zf) goto L_10f55b5d;
  /* 10f55b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b26 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f55b29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f55b2e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55b31 je 0x10f55b5d */
  if (C.zf) goto L_10f55b5d;
  /* 10f55b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b36 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55b3a je 0x10f55b5d */
  if (C.zf) goto L_10f55b5d;
  /* 10f55b3c push 0x10f7b8e4 */
  push32((uint32_t)(0x10f7b8e4u));
  /* 10f55b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55b43 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10f55b48 push 0x10f7b63c */
  push32((uint32_t)(0x10f7b63cu));
  /* 10f55b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f55b4f call 0x10f53b50 */
  push32(0x10f55b54u); f_10f53b50();
  /* 10f55b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55b5a jne 0x10f55b5d */
  if (!C.zf) goto L_10f55b5d;
  /* 10f55b5c int3  */
  x86_unimpl("int3 @ 0x10f55b5c");
L_10f55b5d:;
  /* 10f55b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55b61 jne 0x10f55b0a */
  if (!C.zf) goto L_10f55b0a;
  /* 10f55b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55b69 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10f55b6c:;
  /* 10f55b6c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55b6e call 0x10f58530 */
  push32(0x10f55b73u); f_10f58530();
  /* 10f55b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55b76 pop edi */
  EDI = (pop32());
  /* 10f55b77 pop esi */
  ESI = (pop32());
  /* 10f55b78 pop ebx */
  EBX = (pop32());
  /* 10f55b79 mov esp, ebp */
  ESP = (EBP);
  /* 10f55b7b pop ebp */
  EBP = (pop32());
  /* 10f55b7c ret  */
  ESPCHK(0x10f55ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x10f55b80 (28 bytes, 11 insns) */
void f_10f55b80(void) {
  FTRACE(0x10f55b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55b81 mov ebp, esp */
  EBP = (ESP);
  /* 10f55b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55b84 mov eax, dword ptr [0x10f7ec90] */
  EAX = (r32((uint32_t)(0x10f7ec90)));
  /* 10f55b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f55b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55b8f mov dword ptr [0x10f7ec90], ecx */
  w32((uint32_t)(0x10f7ec90), (ECX));
  /* 10f55b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55b98 mov esp, ebp */
  ESP = (EBP);
  /* 10f55b9a pop ebp */
  EBP = (pop32());
  /* 10f55b9b ret  */
  ESPCHK(0x10f55b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x10f55ba0 (136 bytes, 55 insns) */
void f_10f55ba0(void) {
  FTRACE(0x10f55ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10f55ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f55ba5 push esi */
  push32((uint32_t)(ESI));
  /* 10f55ba6 push edi */
  push32((uint32_t)(EDI));
  /* 10f55ba7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10f55bae:;
  /* 10f55bae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f55bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f55bb4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55bb7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f55bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55bbc je 0x10f55c1e */
  if (C.zf) goto L_10f55c1e;
  /* 10f55bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55bc3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f55bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55bc8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f55bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55bd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55bd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f55bd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55bd9 je 0x10f55c1c */
  if (C.zf) goto L_10f55c1c;
L_10f55bdb:;
  /* 10f55bdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f55bde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f55be3 push eax */
  push32((uint32_t)(EAX));
  /* 10f55be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55be9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10f55bec push edx */
  push32((uint32_t)(EDX));
  /* 10f55bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55bf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55bf3 push eax */
  push32((uint32_t)(EAX));
  /* 10f55bf4 push 0x10f7b928 */
  push32((uint32_t)(0x10f7b928u));
  /* 10f55bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55bff push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55c01 call 0x10f53b50 */
  push32(0x10f55c06u); f_10f53b50();
  /* 10f55c06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55c0c jne 0x10f55c0f */
  if (!C.zf) goto L_10f55c0f;
  /* 10f55c0e int3  */
  x86_unimpl("int3 @ 0x10f55c0e");
L_10f55c0f:;
  /* 10f55c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55c11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55c13 jne 0x10f55bdb */
  if (!C.zf) goto L_10f55bdb;
  /* 10f55c15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f55c1c:;
  /* 10f55c1c jmp 0x10f55bae */
  goto L_10f55bae;
L_10f55c1e:;
  /* 10f55c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55c21 pop edi */
  EDI = (pop32());
  /* 10f55c22 pop esi */
  ESI = (pop32());
  /* 10f55c23 pop ebx */
  EBX = (pop32());
  /* 10f55c24 mov esp, ebp */
  ESP = (EBP);
  /* 10f55c26 pop ebp */
  EBP = (pop32());
  /* 10f55c27 ret  */
  ESPCHK(0x10f55ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x10f55c30 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10f55c30(void) {
  FTRACE(0x10f55c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55c31 mov ebp, esp */
  EBP = (ESP);
  /* 10f55c33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f55c36 push ebx */
  push32((uint32_t)(EBX));
  /* 10f55c37 push esi */
  push32((uint32_t)(ESI));
  /* 10f55c38 push edi */
  push32((uint32_t)(EDI));
  /* 10f55c39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f55c40 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f55c45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f55c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55c4a jne 0x10f55c56 */
  if (!C.zf) goto L_10f55c56;
  /* 10f55c4c mov eax, 1 */
  EAX = (0x1u);
  /* 10f55c51 jmp 0x10f55f88 */
  goto L_10f55f88;
L_10f55c56:;
  /* 10f55c56 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55c58 call 0x10f58490 */
  push32(0x10f55c5du); f_10f58490();
  /* 10f55c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55c60 call 0x10f58c70 */
  push32(0x10f55c65u); f_10f58c70();
  /* 10f55c65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f55c68 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55c6c je 0x10f55d79 */
  if (C.zf) goto L_10f55d79;
  /* 10f55c72 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55c76 je 0x10f55d79 */
  if (C.zf) goto L_10f55d79;
  /* 10f55c7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f55c7f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f55c82 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f55c85 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55c88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f55c8b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55c8f ja 0x10f55d42 */
  if ((!C.cf&&!C.zf)) goto L_10f55d42;
  /* 10f55c95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f55c98 jmp dword ptr [eax*4 + 0x10f55f8f] */
  switch (EAX) {
    case 0: goto L_10f55d1a;
    case 1: goto L_10f55cf2;
    case 2: goto L_10f55cca;
    case 3: goto L_10f55c9f;
    default: x86_unimpl("switch@0x10f55c98 out of table"); return;
  }
L_10f55c9f:;
  /* 10f55c9f push 0x10f7ba7c */
  push32((uint32_t)(0x10f7ba7cu));
  /* 10f55ca4 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55caf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cb1 call 0x10f53b50 */
  push32(0x10f55cb6u); f_10f53b50();
  /* 10f55cb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55cbc jne 0x10f55cbf */
  if (!C.zf) goto L_10f55cbf;
  /* 10f55cbe int3  */
  x86_unimpl("int3 @ 0x10f55cbe");
L_10f55cbf:;
  /* 10f55cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55cc3 jne 0x10f55c9f */
  if (!C.zf) goto L_10f55c9f;
  /* 10f55cc5 jmp 0x10f55d68 */
  goto L_10f55d68;
L_10f55cca:;
  /* 10f55cca push 0x10f7ba58 */
  push32((uint32_t)(0x10f7ba58u));
  /* 10f55ccf push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cdc call 0x10f53b50 */
  push32(0x10f55ce1u); f_10f53b50();
  /* 10f55ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55ce7 jne 0x10f55cea */
  if (!C.zf) goto L_10f55cea;
  /* 10f55ce9 int3  */
  x86_unimpl("int3 @ 0x10f55ce9");
L_10f55cea:;
  /* 10f55cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55cee jne 0x10f55cca */
  if (!C.zf) goto L_10f55cca;
  /* 10f55cf0 jmp 0x10f55d68 */
  goto L_10f55d68;
L_10f55cf2:;
  /* 10f55cf2 push 0x10f7ba34 */
  push32((uint32_t)(0x10f7ba34u));
  /* 10f55cf7 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d04 call 0x10f53b50 */
  push32(0x10f55d09u); f_10f53b50();
  /* 10f55d09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55d0f jne 0x10f55d12 */
  if (!C.zf) goto L_10f55d12;
  /* 10f55d11 int3  */
  x86_unimpl("int3 @ 0x10f55d11");
L_10f55d12:;
  /* 10f55d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55d16 jne 0x10f55cf2 */
  if (!C.zf) goto L_10f55cf2;
  /* 10f55d18 jmp 0x10f55d68 */
  goto L_10f55d68;
L_10f55d1a:;
  /* 10f55d1a push 0x10f7ba10 */
  push32((uint32_t)(0x10f7ba10u));
  /* 10f55d1f push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d2c call 0x10f53b50 */
  push32(0x10f55d31u); f_10f53b50();
  /* 10f55d31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55d37 jne 0x10f55d3a */
  if (!C.zf) goto L_10f55d3a;
  /* 10f55d39 int3  */
  x86_unimpl("int3 @ 0x10f55d39");
L_10f55d3a:;
  /* 10f55d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55d3e jne 0x10f55d1a */
  if (!C.zf) goto L_10f55d1a;
  /* 10f55d40 jmp 0x10f55d68 */
  goto L_10f55d68;
L_10f55d42:;
  /* 10f55d42 push 0x10f7b9e4 */
  push32((uint32_t)(0x10f7b9e4u));
  /* 10f55d47 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f55d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55d54 call 0x10f53b50 */
  push32(0x10f55d59u); f_10f53b50();
  /* 10f55d59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55d5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55d5f jne 0x10f55d62 */
  if (!C.zf) goto L_10f55d62;
  /* 10f55d61 int3  */
  x86_unimpl("int3 @ 0x10f55d61");
L_10f55d62:;
  /* 10f55d62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55d64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55d66 jne 0x10f55d42 */
  if (!C.zf) goto L_10f55d42;
L_10f55d68:;
  /* 10f55d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55d6a call 0x10f58530 */
  push32(0x10f55d6fu); f_10f58530();
  /* 10f55d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55d72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55d74 jmp 0x10f55f88 */
  goto L_10f55f88;
L_10f55d79:;
  /* 10f55d79 mov eax, dword ptr [0x10f80610] */
  EAX = (r32((uint32_t)(0x10f80610)));
  /* 10f55d7e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f55d81 jmp 0x10f55d8b */
  goto L_10f55d8b;
L_10f55d83:;
  /* 10f55d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55d86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f55d88 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f55d8b:;
  /* 10f55d8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55d8f je 0x10f55f7b */
  if (C.zf) goto L_10f55f7b;
  /* 10f55d95 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f55d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55d9f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f55da2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f55da8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55dab je 0x10f55dd0 */
  if (C.zf) goto L_10f55dd0;
  /* 10f55dad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55db0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55db4 je 0x10f55dd0 */
  if (C.zf) goto L_10f55dd0;
  /* 10f55db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55db9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f55dbc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f55dc2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55dc5 je 0x10f55dd0 */
  if (C.zf) goto L_10f55dd0;
  /* 10f55dc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55dca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55dce jne 0x10f55de8 */
  if (!C.zf) goto L_10f55de8;
L_10f55dd0:;
  /* 10f55dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55dd3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f55dd6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f55ddc mov edx, dword ptr [ecx*4 + 0x10f7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea94)));
  /* 10f55de3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f55de6 jmp 0x10f55def */
  goto L_10f55def;
L_10f55de8:;
  /* 10f55de8 mov dword ptr [ebp - 0x14], 0x10f7b9dc */
  w32((uint32_t)(EBP + -0x14), (0x10f7b9dcu));
L_10f55def:;
  /* 10f55def push 4 */
  push32((uint32_t)(0x4u));
  /* 10f55df1 mov al, byte ptr [0x10f7ea90] */
  AL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f55df6 push eax */
  push32((uint32_t)(EAX));
  /* 10f55df7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55dfa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55dfd push ecx */
  push32((uint32_t)(ECX));
  /* 10f55dfe call 0x10f55ba0 */
  push32(0x10f55e03u); f_10f55ba0();
  /* 10f55e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55e08 jne 0x10f55e44 */
  if (!C.zf) goto L_10f55e44;
L_10f55e0a:;
  /* 10f55e0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e0d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e10 push edx */
  push32((uint32_t)(EDX));
  /* 10f55e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f55e17 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55e18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f55e1b push edx */
  push32((uint32_t)(EDX));
  /* 10f55e1c push 0x10f7b8b8 */
  push32((uint32_t)(0x10f7b8b8u));
  /* 10f55e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e29 call 0x10f53b50 */
  push32(0x10f55e2eu); f_10f53b50();
  /* 10f55e2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55e34 jne 0x10f55e37 */
  if (!C.zf) goto L_10f55e37;
  /* 10f55e36 int3  */
  x86_unimpl("int3 @ 0x10f55e36");
L_10f55e37:;
  /* 10f55e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55e3b jne 0x10f55e0a */
  if (!C.zf) goto L_10f55e0a;
  /* 10f55e3d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f55e44:;
  /* 10f55e44 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f55e46 mov cl, byte ptr [0x10f7ea90] */
  CL = (r8((uint32_t)(0x10f7ea90)));
  /* 10f55e4c push ecx */
  push32((uint32_t)(ECX));
  /* 10f55e4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e50 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f55e53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e56 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10f55e5a push edx */
  push32((uint32_t)(EDX));
  /* 10f55e5b call 0x10f55ba0 */
  push32(0x10f55e60u); f_10f55ba0();
  /* 10f55e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55e65 jne 0x10f55ea1 */
  if (!C.zf) goto L_10f55ea1;
L_10f55e67:;
  /* 10f55e67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e6a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e6d push eax */
  push32((uint32_t)(EAX));
  /* 10f55e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55e71 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f55e74 push edx */
  push32((uint32_t)(EDX));
  /* 10f55e75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f55e78 push eax */
  push32((uint32_t)(EAX));
  /* 10f55e79 push 0x10f7b88c */
  push32((uint32_t)(0x10f7b88cu));
  /* 10f55e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55e86 call 0x10f53b50 */
  push32(0x10f55e8bu); f_10f53b50();
  /* 10f55e8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55e8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55e91 jne 0x10f55e94 */
  if (!C.zf) goto L_10f55e94;
  /* 10f55e93 int3  */
  x86_unimpl("int3 @ 0x10f55e93");
L_10f55e94:;
  /* 10f55e94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f55e96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f55e98 jne 0x10f55e67 */
  if (!C.zf) goto L_10f55e67;
  /* 10f55e9a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f55ea1:;
  /* 10f55ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55ea4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55ea8 jne 0x10f55efa */
  if (!C.zf) goto L_10f55efa;
  /* 10f55eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55ead mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f55eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55eb1 mov dl, byte ptr [0x10f7ea91] */
  DL = (r8((uint32_t)(0x10f7ea91)));
  /* 10f55eb7 push edx */
  push32((uint32_t)(EDX));
  /* 10f55eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55ebb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55ebe push eax */
  push32((uint32_t)(EAX));
  /* 10f55ebf call 0x10f55ba0 */
  push32(0x10f55ec4u); f_10f55ba0();
  /* 10f55ec4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55ec9 jne 0x10f55efa */
  if (!C.zf) goto L_10f55efa;
L_10f55ecb:;
  /* 10f55ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55ece add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55ed2 push 0x10f7b9b0 */
  push32((uint32_t)(0x10f7b9b0u));
  /* 10f55ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55edb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55edd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55edf call 0x10f53b50 */
  push32(0x10f55ee4u); f_10f53b50();
  /* 10f55ee4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55eea jne 0x10f55eed */
  if (!C.zf) goto L_10f55eed;
  /* 10f55eec int3  */
  x86_unimpl("int3 @ 0x10f55eec");
L_10f55eed:;
  /* 10f55eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55ef1 jne 0x10f55ecb */
  if (!C.zf) goto L_10f55ecb;
  /* 10f55ef3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f55efa:;
  /* 10f55efa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55efe jne 0x10f55f76 */
  if (!C.zf) goto L_10f55f76;
  /* 10f55f00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55f03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55f07 je 0x10f55f3c */
  if (C.zf) goto L_10f55f3c;
L_10f55f09:;
  /* 10f55f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55f0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f55f0f push edx */
  push32((uint32_t)(EDX));
  /* 10f55f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55f13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f55f16 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55f17 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f55f1a push edx */
  push32((uint32_t)(EDX));
  /* 10f55f1b push 0x10f7b990 */
  push32((uint32_t)(0x10f7b990u));
  /* 10f55f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f28 call 0x10f53b50 */
  push32(0x10f55f2du); f_10f53b50();
  /* 10f55f2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55f33 jne 0x10f55f36 */
  if (!C.zf) goto L_10f55f36;
  /* 10f55f35 int3  */
  x86_unimpl("int3 @ 0x10f55f35");
L_10f55f36:;
  /* 10f55f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f55f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55f3a jne 0x10f55f09 */
  if (!C.zf) goto L_10f55f09;
L_10f55f3c:;
  /* 10f55f3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55f3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f55f42 push edx */
  push32((uint32_t)(EDX));
  /* 10f55f43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f55f46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55f49 push eax */
  push32((uint32_t)(EAX));
  /* 10f55f4a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f55f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10f55f4e push 0x10f7b964 */
  push32((uint32_t)(0x10f7b964u));
  /* 10f55f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f55f5b call 0x10f53b50 */
  push32(0x10f55f60u); f_10f53b50();
  /* 10f55f60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55f63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55f66 jne 0x10f55f69 */
  if (!C.zf) goto L_10f55f69;
  /* 10f55f68 int3  */
  x86_unimpl("int3 @ 0x10f55f68");
L_10f55f69:;
  /* 10f55f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f55f6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f55f6d jne 0x10f55f3c */
  if (!C.zf) goto L_10f55f3c;
  /* 10f55f6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f55f76:;
  /* 10f55f76 jmp 0x10f55d83 */
  goto L_10f55d83;
L_10f55f7b:;
  /* 10f55f7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55f7d call 0x10f58530 */
  push32(0x10f55f82u); f_10f58530();
  /* 10f55f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f55f88:;
  /* 10f55f88 pop edi */
  EDI = (pop32());
  /* 10f55f89 pop esi */
  ESI = (pop32());
  /* 10f55f8a pop ebx */
  EBX = (pop32());
  /* 10f55f8b mov esp, ebp */
  ESP = (EBP);
  /* 10f55f8d pop ebp */
  EBP = (pop32());
  /* 10f55f8e ret  */
  ESPCHK(0x10f55c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x10f55fa0 (34 bytes, 13 insns) */
void f_10f55fa0(void) {
  FTRACE(0x10f55fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10f55fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55fa4 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f55fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f55fac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f55fb0 je 0x10f55fbb */
  if (C.zf) goto L_10f55fbb;
  /* 10f55fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f55fb5 mov dword ptr [0x10f7ea84], ecx */
  w32((uint32_t)(0x10f7ea84), (ECX));
L_10f55fbb:;
  /* 10f55fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55fbe mov esp, ebp */
  ESP = (EBP);
  /* 10f55fc0 pop ebp */
  EBP = (pop32());
  /* 10f55fc1 ret  */
  ESPCHK(0x10f55fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x10f55fd0 (103 bytes, 38 insns) */
void f_10f55fd0(void) {
  FTRACE(0x10f55fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f55fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f55fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10f55fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f55fd4 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f55fd9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f55fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f55fde jne 0x10f55fe2 */
  if (!C.zf) goto L_10f55fe2;
  /* 10f55fe0 jmp 0x10f56033 */
  goto L_10f56033;
L_10f55fe2:;
  /* 10f55fe2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f55fe4 call 0x10f58490 */
  push32(0x10f55fe9u); f_10f58490();
  /* 10f55fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f55fec mov ecx, dword ptr [0x10f80610] */
  ECX = (r32((uint32_t)(0x10f80610)));
  /* 10f55ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f55ff5 jmp 0x10f55fff */
  goto L_10f55fff;
L_10f55ff7:;
  /* 10f55ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f55ffa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f55ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f55fff:;
  /* 10f55fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56003 je 0x10f56029 */
  if (C.zf) goto L_10f56029;
  /* 10f56005 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56008 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f5600b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56011 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56014 jne 0x10f56027 */
  if (!C.zf) goto L_10f56027;
  /* 10f56016 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56019 push eax */
  push32((uint32_t)(EAX));
  /* 10f5601a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5601d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56020 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56021 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10f56024u);
  /* 10f56024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56027:;
  /* 10f56027 jmp 0x10f55ff7 */
  goto L_10f55ff7;
L_10f56029:;
  /* 10f56029 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5602b call 0x10f58530 */
  push32(0x10f56030u); f_10f58530();
  /* 10f56030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56033:;
  /* 10f56033 mov esp, ebp */
  ESP = (EBP);
  /* 10f56035 pop ebp */
  EBP = (pop32());
  /* 10f56036 ret  */
  ESPCHK(0x10f55fd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10f56040 (75 bytes, 28 insns) */
void f_10f56040(void) {
  FTRACE(0x10f56040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56040 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56041 mov ebp, esp */
  EBP = (ESP);
  /* 10f56043 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56048 je 0x10f5607d */
  if (C.zf) goto L_10f5607d;
  /* 10f5604a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5604d push eax */
  push32((uint32_t)(EAX));
  /* 10f5604e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56051 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56052 call dword ptr [0x10f833ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833ac))), 0x10f56058u);
  /* 10f56058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5605a jne 0x10f5607d */
  if (!C.zf) goto L_10f5607d;
  /* 10f5605c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56060 je 0x10f56074 */
  if (C.zf) goto L_10f56074;
  /* 10f56062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56065 push edx */
  push32((uint32_t)(EDX));
  /* 10f56066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56069 push eax */
  push32((uint32_t)(EAX));
  /* 10f5606a call dword ptr [0x10f833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a8))), 0x10f56070u);
  /* 10f56070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56072 jne 0x10f5607d */
  if (!C.zf) goto L_10f5607d;
L_10f56074:;
  /* 10f56074 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5607b jmp 0x10f56084 */
  goto L_10f56084;
L_10f5607d:;
  /* 10f5607d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f56084:;
  /* 10f56084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56087 mov esp, ebp */
  ESP = (EBP);
  /* 10f56089 pop ebp */
  EBP = (pop32());
  /* 10f5608a ret  */
  ESPCHK(0x10f56040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x10f56090 (134 bytes, 50 insns) */
void f_10f56090(void) {
  FTRACE(0x10f56090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56090 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56091 mov ebp, esp */
  EBP = (ESP);
  /* 10f56093 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56094 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56098 jne 0x10f5609e */
  if (!C.zf) goto L_10f5609e;
  /* 10f5609a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5609c jmp 0x10f56112 */
  goto L_10f56112;
L_10f5609e:;
  /* 10f5609e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f560a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f560a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f560a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f560a8 push eax */
  push32((uint32_t)(EAX));
  /* 10f560a9 call 0x10f56040 */
  push32(0x10f560aeu); f_10f56040();
  /* 10f560ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f560b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f560b3 jne 0x10f560b9 */
  if (!C.zf) goto L_10f560b9;
  /* 10f560b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f560b7 jmp 0x10f56112 */
  goto L_10f56112;
L_10f560b9:;
  /* 10f560b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f560bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f560bf push ecx */
  push32((uint32_t)(ECX));
  /* 10f560c0 call 0x10f58d90 */
  push32(0x10f560c5u); f_10f58d90();
  /* 10f560c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f560c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f560cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f560cf je 0x10f560e6 */
  if (C.zf) goto L_10f560e6;
  /* 10f560d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f560d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f560d7 push edx */
  push32((uint32_t)(EDX));
  /* 10f560d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f560db push eax */
  push32((uint32_t)(EAX));
  /* 10f560dc call 0x10f58df0 */
  push32(0x10f560e1u); f_10f58df0();
  /* 10f560e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f560e4 jmp 0x10f56112 */
  goto L_10f56112;
L_10f560e6:;
  /* 10f560e6 mov ecx, dword ptr [0x10f805c4] */
  ECX = (r32((uint32_t)(0x10f805c4)));
  /* 10f560ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f560f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f560f4 je 0x10f560fd */
  if (C.zf) goto L_10f560fd;
  /* 10f560f6 mov eax, 1 */
  EAX = (0x1u);
  /* 10f560fb jmp 0x10f56112 */
  goto L_10f56112;
L_10f560fd:;
  /* 10f560fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56100 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56103 push edx */
  push32((uint32_t)(EDX));
  /* 10f56104 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56106 mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f5610b push eax */
  push32((uint32_t)(EAX));
  /* 10f5610c call dword ptr [0x10f833b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b0))), 0x10f56112u);
L_10f56112:;
  /* 10f56112 mov esp, ebp */
  ESP = (EBP);
  /* 10f56114 pop ebp */
  EBP = (pop32());
  /* 10f56115 ret  */
  ESPCHK(0x10f56090u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x10f56120 (227 bytes, 80 insns) */
void f_10f56120(void) {
  FTRACE(0x10f56120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56120 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56121 mov ebp, esp */
  EBP = (ESP);
  /* 10f56123 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56127 push eax */
  push32((uint32_t)(EAX));
  /* 10f56128 call 0x10f56090 */
  push32(0x10f5612du); f_10f56090();
  /* 10f5612d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56132 jne 0x10f5613b */
  if (!C.zf) goto L_10f5613b;
  /* 10f56134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56136 jmp 0x10f561ff */
  goto L_10f561ff;
L_10f5613b:;
  /* 10f5613b push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5613d call 0x10f58490 */
  push32(0x10f56142u); f_10f58490();
  /* 10f56142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56148 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5614b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5614e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56151 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f56154 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56159 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5615c je 0x10f56180 */
  if (C.zf) goto L_10f56180;
  /* 10f5615e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56161 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56165 je 0x10f56180 */
  if (C.zf) goto L_10f56180;
  /* 10f56167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5616a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f5616d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56172 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56175 je 0x10f56180 */
  if (C.zf) goto L_10f56180;
  /* 10f56177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5617a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5617e jne 0x10f561f3 */
  if (!C.zf) goto L_10f561f3;
L_10f56180:;
  /* 10f56180 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f56182 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56185 push edx */
  push32((uint32_t)(EDX));
  /* 10f56186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56189 push eax */
  push32((uint32_t)(EAX));
  /* 10f5618a call 0x10f56040 */
  push32(0x10f5618fu); f_10f56040();
  /* 10f5618f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56194 je 0x10f561f3 */
  if (C.zf) goto L_10f561f3;
  /* 10f56196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56199 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f5619c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5619f jne 0x10f561f3 */
  if (!C.zf) goto L_10f561f3;
  /* 10f561a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f561a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f561a7 cmp ecx, dword ptr [0x10f7ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f561ad jg 0x10f561f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f561f3;
  /* 10f561af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f561b3 je 0x10f561c0 */
  if (C.zf) goto L_10f561c0;
  /* 10f561b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f561b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f561bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f561be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f561c0:;
  /* 10f561c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f561c4 je 0x10f561d1 */
  if (C.zf) goto L_10f561d1;
  /* 10f561c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f561c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f561cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f561cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f561d1:;
  /* 10f561d1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f561d5 je 0x10f561e2 */
  if (C.zf) goto L_10f561e2;
  /* 10f561d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f561da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f561dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f561e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f561e2:;
  /* 10f561e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f561e4 call 0x10f58530 */
  push32(0x10f561e9u); f_10f58530();
  /* 10f561e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f561ec mov eax, 1 */
  EAX = (0x1u);
  /* 10f561f1 jmp 0x10f561ff */
  goto L_10f561ff;
L_10f561f3:;
  /* 10f561f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f561f5 call 0x10f58530 */
  push32(0x10f561fau); f_10f58530();
  /* 10f561fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f561fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f561ff:;
  /* 10f561ff mov esp, ebp */
  ESP = (EBP);
  /* 10f56201 pop ebp */
  EBP = (pop32());
  /* 10f56202 ret  */
  ESPCHK(0x10f56120u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x10f56210 (28 bytes, 11 insns) */
void f_10f56210(void) {
  FTRACE(0x10f56210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56210 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56211 mov ebp, esp */
  EBP = (ESP);
  /* 10f56213 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56214 mov eax, dword ptr [0x10f81f78] */
  EAX = (r32((uint32_t)(0x10f81f78)));
  /* 10f56219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5621c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5621f mov dword ptr [0x10f81f78], ecx */
  w32((uint32_t)(0x10f81f78), (ECX));
  /* 10f56225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56228 mov esp, ebp */
  ESP = (EBP);
  /* 10f5622a pop ebp */
  EBP = (pop32());
  /* 10f5622b ret  */
  ESPCHK(0x10f56210u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x10f56230 (362 bytes, 116 insns) */
void f_10f56230(void) {
  FTRACE(0x10f56230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56230 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56231 mov ebp, esp */
  EBP = (ESP);
  /* 10f56233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56236 push ebx */
  push32((uint32_t)(EBX));
  /* 10f56237 push esi */
  push32((uint32_t)(ESI));
  /* 10f56238 push edi */
  push32((uint32_t)(EDI));
  /* 10f56239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5623d jne 0x10f5626a */
  if (!C.zf) goto L_10f5626a;
L_10f5623f:;
  /* 10f5623f push 0x10f7bac4 */
  push32((uint32_t)(0x10f7bac4u));
  /* 10f56244 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f56249 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5624b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5624d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5624f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56251 call 0x10f53b50 */
  push32(0x10f56256u); f_10f53b50();
  /* 10f56256 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5625c jne 0x10f5625f */
  if (!C.zf) goto L_10f5625f;
  /* 10f5625e int3  */
  x86_unimpl("int3 @ 0x10f5625e");
L_10f5625f:;
  /* 10f5625f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56263 jne 0x10f5623f */
  if (!C.zf) goto L_10f5623f;
  /* 10f56265 jmp 0x10f56393 */
  goto L_10f56393;
L_10f5626a:;
  /* 10f5626a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5626c call 0x10f58490 */
  push32(0x10f56271u); f_10f58490();
  /* 10f56271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56277 mov edx, dword ptr [0x10f80610] */
  EDX = (r32((uint32_t)(0x10f80610)));
  /* 10f5627d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f5627f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f56286 jmp 0x10f56291 */
  goto L_10f56291;
L_10f56288:;
  /* 10f56288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5628b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5628e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f56291:;
  /* 10f56291 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56295 jge 0x10f562b5 */
  if ((C.sf==C.of)) goto L_10f562b5;
  /* 10f56297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5629a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5629d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10f562a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f562a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f562ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10f562b3 jmp 0x10f56288 */
  goto L_10f56288;
L_10f562b5:;
  /* 10f562b5 mov edx, dword ptr [0x10f80610] */
  EDX = (r32((uint32_t)(0x10f80610)));
  /* 10f562bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f562be jmp 0x10f562c8 */
  goto L_10f562c8;
L_10f562c0:;
  /* 10f562c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f562c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f562c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f562c8:;
  /* 10f562c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f562cc je 0x10f56371 */
  if (C.zf) goto L_10f56371;
  /* 10f562d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f562d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f562d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f562dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f562df jl 0x10f56347 */
  if ((C.sf!=C.of)) goto L_10f56347;
  /* 10f562e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f562e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f562e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f562ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f562f0 jge 0x10f56347 */
  if ((C.sf==C.of)) goto L_10f56347;
  /* 10f562f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f562f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f562f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f562fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56301 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10f56305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5630b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f5630e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56317 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10f5631b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5631e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f56321 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56329 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10f5632d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56330 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56336 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f56339 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5633e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56341 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10f56345 jmp 0x10f5636c */
  goto L_10f5636c;
L_10f56347:;
  /* 10f56347 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5634a push edx */
  push32((uint32_t)(EDX));
  /* 10f5634b push 0x10f7baa0 */
  push32((uint32_t)(0x10f7baa0u));
  /* 10f56350 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56352 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56354 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56356 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56358 call 0x10f53b50 */
  push32(0x10f5635du); f_10f53b50();
  /* 10f5635d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56363 jne 0x10f56366 */
  if (!C.zf) goto L_10f56366;
  /* 10f56365 int3  */
  x86_unimpl("int3 @ 0x10f56365");
L_10f56366:;
  /* 10f56366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5636a jne 0x10f56347 */
  if (!C.zf) goto L_10f56347;
L_10f5636c:;
  /* 10f5636c jmp 0x10f562c0 */
  goto L_10f562c0;
L_10f56371:;
  /* 10f56371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56374 mov edx, dword ptr [0x10f80618] */
  EDX = (r32((uint32_t)(0x10f80618)));
  /* 10f5637a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10f5637d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56380 mov ecx, dword ptr [0x10f8060c] */
  ECX = (r32((uint32_t)(0x10f8060c)));
  /* 10f56386 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10f56389 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5638b call 0x10f58530 */
  push32(0x10f56390u); f_10f58530();
  /* 10f56390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56393:;
  /* 10f56393 pop edi */
  EDI = (pop32());
  /* 10f56394 pop esi */
  ESI = (pop32());
  /* 10f56395 pop ebx */
  EBX = (pop32());
  /* 10f56396 mov esp, ebp */
  ESP = (EBP);
  /* 10f56398 pop ebp */
  EBP = (pop32());
  /* 10f56399 ret  */
  ESPCHK(0x10f56230u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x10f563a0 (291 bytes, 95 insns) */
void f_10f563a0(void) {
  FTRACE(0x10f563a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f563a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f563a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f563a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f563a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f563a7 push esi */
  push32((uint32_t)(ESI));
  /* 10f563a8 push edi */
  push32((uint32_t)(EDI));
  /* 10f563a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f563b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f563b4 je 0x10f563c2 */
  if (C.zf) goto L_10f563c2;
  /* 10f563b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f563ba je 0x10f563c2 */
  if (C.zf) goto L_10f563c2;
  /* 10f563bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f563c0 jne 0x10f563f0 */
  if (!C.zf) goto L_10f563f0;
L_10f563c2:;
  /* 10f563c2 push 0x10f7baec */
  push32((uint32_t)(0x10f7baecu));
  /* 10f563c7 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f563cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f563ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10f563d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f563d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f563d4 call 0x10f53b50 */
  push32(0x10f563d9u); f_10f53b50();
  /* 10f563d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f563dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f563df jne 0x10f563e2 */
  if (!C.zf) goto L_10f563e2;
  /* 10f563e1 int3  */
  x86_unimpl("int3 @ 0x10f563e1");
L_10f563e2:;
  /* 10f563e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f563e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f563e6 jne 0x10f563c2 */
  if (!C.zf) goto L_10f563c2;
  /* 10f563e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f563eb jmp 0x10f564bc */
  goto L_10f564bc;
L_10f563f0:;
  /* 10f563f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f563f7 jmp 0x10f56402 */
  goto L_10f56402;
L_10f563f9:;
  /* 10f563f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f563fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f563ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f56402:;
  /* 10f56402 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56406 jge 0x10f5648c */
  if ((C.sf==C.of)) goto L_10f5648c;
  /* 10f5640c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5640f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56415 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56418 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10f5641c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56426 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10f5642a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5642d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56430 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56433 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56436 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10f5643a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5643e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56444 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10f56448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5644b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5644e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56453 jne 0x10f56462 */
  if (!C.zf) goto L_10f56462;
  /* 10f56455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5645b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56460 je 0x10f56487 */
  if (C.zf) goto L_10f56487;
L_10f56462:;
  /* 10f56462 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56466 je 0x10f56487 */
  if (C.zf) goto L_10f56487;
  /* 10f56468 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5646c jne 0x10f56480 */
  if (!C.zf) goto L_10f56480;
  /* 10f5646e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56472 jne 0x10f56487 */
  if (!C.zf) goto L_10f56487;
  /* 10f56474 mov eax, dword ptr [0x10f7ea84] */
  EAX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f56479 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10f5647c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5647e je 0x10f56487 */
  if (C.zf) goto L_10f56487;
L_10f56480:;
  /* 10f56480 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10f56487:;
  /* 10f56487 jmp 0x10f563f9 */
  goto L_10f563f9;
L_10f5648c:;
  /* 10f5648c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5648f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56492 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10f56495 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56498 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5649b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10f5649e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f564a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f564a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10f564a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f564aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f564ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10f564b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f564b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f564b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f564bc:;
  /* 10f564bc pop edi */
  EDI = (pop32());
  /* 10f564bd pop esi */
  ESI = (pop32());
  /* 10f564be pop ebx */
  EBX = (pop32());
  /* 10f564bf mov esp, ebp */
  ESP = (EBP);
  /* 10f564c1 pop ebp */
  EBP = (pop32());
  /* 10f564c2 ret  */
  ESPCHK(0x10f563a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x10f564d0 (697 bytes, 253 insns) */
void f_10f564d0(void) {
  FTRACE(0x10f564d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f564d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f564d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f564d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f564d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f564d7 push esi */
  push32((uint32_t)(ESI));
  /* 10f564d8 push edi */
  push32((uint32_t)(EDI));
  /* 10f564d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f564e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f564e2 call 0x10f58490 */
  push32(0x10f564e7u); f_10f58490();
  /* 10f564e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f564ea:;
  /* 10f564ea push 0x10f7bbe4 */
  push32((uint32_t)(0x10f7bbe4u));
  /* 10f564ef push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f564f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f564f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f564f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f564fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f564fc call 0x10f53b50 */
  push32(0x10f56501u); f_10f53b50();
  /* 10f56501 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56507 jne 0x10f5650a */
  if (!C.zf) goto L_10f5650a;
  /* 10f56509 int3  */
  x86_unimpl("int3 @ 0x10f56509");
L_10f5650a:;
  /* 10f5650a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5650c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5650e jne 0x10f564ea */
  if (!C.zf) goto L_10f564ea;
  /* 10f56510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56514 je 0x10f5651e */
  if (C.zf) goto L_10f5651e;
  /* 10f56516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56519 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5651b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f5651e:;
  /* 10f5651e mov eax, dword ptr [0x10f80610] */
  EAX = (r32((uint32_t)(0x10f80610)));
  /* 10f56523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56526 jmp 0x10f56530 */
  goto L_10f56530;
L_10f56528:;
  /* 10f56528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5652b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5652d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f56530:;
  /* 10f56530 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56534 je 0x10f56752 */
  if (C.zf) goto L_10f56752;
  /* 10f5653a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5653d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56540 je 0x10f56752 */
  if (C.zf) goto L_10f56752;
  /* 10f56546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56549 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f5654c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56552 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56555 je 0x10f56584 */
  if (C.zf) goto L_10f56584;
  /* 10f56557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5655a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f5655d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f56563 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56565 je 0x10f56584 */
  if (C.zf) goto L_10f56584;
  /* 10f56567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5656a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f5656d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56572 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56575 jne 0x10f56589 */
  if (!C.zf) goto L_10f56589;
  /* 10f56577 mov ecx, dword ptr [0x10f7ea84] */
  ECX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f5657d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10f56580 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56582 jne 0x10f56589 */
  if (!C.zf) goto L_10f56589;
L_10f56584:;
  /* 10f56584 jmp 0x10f5674d */
  goto L_10f5674d;
L_10f56589:;
  /* 10f56589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5658c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56590 je 0x10f56602 */
  if (C.zf) goto L_10f56602;
  /* 10f56592 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56594 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f56596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56599 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f5659c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5659d call 0x10f56040 */
  push32(0x10f565a2u); f_10f56040();
  /* 10f565a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f565a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f565a7 jne 0x10f565d3 */
  if (!C.zf) goto L_10f565d3;
L_10f565a9:;
  /* 10f565a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f565ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f565af push eax */
  push32((uint32_t)(EAX));
  /* 10f565b0 push 0x10f7bbd0 */
  push32((uint32_t)(0x10f7bbd0u));
  /* 10f565b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565bd call 0x10f53b50 */
  push32(0x10f565c2u); f_10f53b50();
  /* 10f565c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f565c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f565c8 jne 0x10f565cb */
  if (!C.zf) goto L_10f565cb;
  /* 10f565ca int3  */
  x86_unimpl("int3 @ 0x10f565ca");
L_10f565cb:;
  /* 10f565cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f565cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f565cf jne 0x10f565a9 */
  if (!C.zf) goto L_10f565a9;
  /* 10f565d1 jmp 0x10f56602 */
  goto L_10f56602;
L_10f565d3:;
  /* 10f565d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f565d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f565d9 push eax */
  push32((uint32_t)(EAX));
  /* 10f565da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f565dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f565e0 push edx */
  push32((uint32_t)(EDX));
  /* 10f565e1 push 0x10f7bbc4 */
  push32((uint32_t)(0x10f7bbc4u));
  /* 10f565e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10f565ee call 0x10f53b50 */
  push32(0x10f565f3u); f_10f53b50();
  /* 10f565f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f565f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f565f9 jne 0x10f565fc */
  if (!C.zf) goto L_10f565fc;
  /* 10f565fb int3  */
  x86_unimpl("int3 @ 0x10f565fb");
L_10f565fc:;
  /* 10f565fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f565fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56600 jne 0x10f565d3 */
  if (!C.zf) goto L_10f565d3;
L_10f56602:;
  /* 10f56602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56605 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f56608 push edx */
  push32((uint32_t)(EDX));
  /* 10f56609 push 0x10f7bbbc */
  push32((uint32_t)(0x10f7bbbcu));
  /* 10f5660e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56610 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56616 call 0x10f53b50 */
  push32(0x10f5661bu); f_10f53b50();
  /* 10f5661b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5661e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56621 jne 0x10f56624 */
  if (!C.zf) goto L_10f56624;
  /* 10f56623 int3  */
  x86_unimpl("int3 @ 0x10f56623");
L_10f56624:;
  /* 10f56624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56628 jne 0x10f56602 */
  if (!C.zf) goto L_10f56602;
  /* 10f5662a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5662d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f56630 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56636 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56639 jne 0x10f566ac */
  if (!C.zf) goto L_10f566ac;
L_10f5663b:;
  /* 10f5663b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5663e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f56641 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56645 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f56648 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f5664b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56650 push eax */
  push32((uint32_t)(EAX));
  /* 10f56651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56654 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56657 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56658 push 0x10f7bb88 */
  push32((uint32_t)(0x10f7bb88u));
  /* 10f5665d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5665f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56661 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56663 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56665 call 0x10f53b50 */
  push32(0x10f5666au); f_10f53b50();
  /* 10f5666a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5666d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56670 jne 0x10f56673 */
  if (!C.zf) goto L_10f56673;
  /* 10f56672 int3  */
  x86_unimpl("int3 @ 0x10f56672");
L_10f56673:;
  /* 10f56673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56675 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56677 jne 0x10f5663b */
  if (!C.zf) goto L_10f5663b;
  /* 10f56679 cmp dword ptr [0x10f81f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56680 je 0x10f5669b */
  if (C.zf) goto L_10f5669b;
  /* 10f56682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56685 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f56688 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5668c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5668f push edx */
  push32((uint32_t)(EDX));
  /* 10f56690 call dword ptr [0x10f81f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f81f78))), 0x10f56696u);
  /* 10f56696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56699 jmp 0x10f566a7 */
  goto L_10f566a7;
L_10f5669b:;
  /* 10f5669b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5669e push eax */
  push32((uint32_t)(EAX));
  /* 10f5669f call 0x10f56790 */
  push32(0x10f566a4u); f_10f56790();
  /* 10f566a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f566a7:;
  /* 10f566a7 jmp 0x10f5674d */
  goto L_10f5674d;
L_10f566ac:;
  /* 10f566ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f566af cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f566b3 jne 0x10f566f2 */
  if (!C.zf) goto L_10f566f2;
L_10f566b5:;
  /* 10f566b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f566b8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f566bb push eax */
  push32((uint32_t)(EAX));
  /* 10f566bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f566bf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f566c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f566c3 push 0x10f7bb60 */
  push32((uint32_t)(0x10f7bb60u));
  /* 10f566c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f566ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10f566cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f566ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10f566d0 call 0x10f53b50 */
  push32(0x10f566d5u); f_10f53b50();
  /* 10f566d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f566d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f566db jne 0x10f566de */
  if (!C.zf) goto L_10f566de;
  /* 10f566dd int3  */
  x86_unimpl("int3 @ 0x10f566dd");
L_10f566de:;
  /* 10f566de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f566e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f566e2 jne 0x10f566b5 */
  if (!C.zf) goto L_10f566b5;
  /* 10f566e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f566e7 push eax */
  push32((uint32_t)(EAX));
  /* 10f566e8 call 0x10f56790 */
  push32(0x10f566edu); f_10f56790();
  /* 10f566ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f566f0 jmp 0x10f5674d */
  goto L_10f5674d;
L_10f566f2:;
  /* 10f566f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f566f5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f566f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f566fe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56701 jne 0x10f5674d */
  if (!C.zf) goto L_10f5674d;
L_10f56703:;
  /* 10f56703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56706 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f56709 push ecx */
  push32((uint32_t)(ECX));
  /* 10f5670a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5670d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f56710 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f56713 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56718 push eax */
  push32((uint32_t)(EAX));
  /* 10f56719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5671c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5671f push ecx */
  push32((uint32_t)(ECX));
  /* 10f56720 push 0x10f7bb2c */
  push32((uint32_t)(0x10f7bb2cu));
  /* 10f56725 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56727 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56729 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5672b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5672d call 0x10f53b50 */
  push32(0x10f56732u); f_10f53b50();
  /* 10f56732 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56738 jne 0x10f5673b */
  if (!C.zf) goto L_10f5673b;
  /* 10f5673a int3  */
  x86_unimpl("int3 @ 0x10f5673a");
L_10f5673b:;
  /* 10f5673b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5673d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5673f jne 0x10f56703 */
  if (!C.zf) goto L_10f56703;
  /* 10f56741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56744 push eax */
  push32((uint32_t)(EAX));
  /* 10f56745 call 0x10f56790 */
  push32(0x10f5674au); f_10f56790();
  /* 10f5674a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5674d:;
  /* 10f5674d jmp 0x10f56528 */
  goto L_10f56528;
L_10f56752:;
  /* 10f56752 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f56754 call 0x10f58530 */
  push32(0x10f56759u); f_10f58530();
  /* 10f56759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5675c:;
  /* 10f5675c push 0x10f7bb14 */
  push32((uint32_t)(0x10f7bb14u));
  /* 10f56761 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f56766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56768 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5676a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5676c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5676e call 0x10f53b50 */
  push32(0x10f56773u); f_10f53b50();
  /* 10f56773 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56779 jne 0x10f5677c */
  if (!C.zf) goto L_10f5677c;
  /* 10f5677b int3  */
  x86_unimpl("int3 @ 0x10f5677b");
L_10f5677c:;
  /* 10f5677c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f5677e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56780 jne 0x10f5675c */
  if (!C.zf) goto L_10f5675c;
  /* 10f56782 pop edi */
  EDI = (pop32());
  /* 10f56783 pop esi */
  ESI = (pop32());
  /* 10f56784 pop ebx */
  EBX = (pop32());
  /* 10f56785 mov esp, ebp */
  ESP = (EBP);
  /* 10f56787 pop ebp */
  EBP = (pop32());
  /* 10f56788 ret  */
  ESPCHK(0x10f564d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x10f56790 (276 bytes, 89 insns) */
void f_10f56790(void) {
  FTRACE(0x10f56790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56790 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56791 mov ebp, esp */
  EBP = (ESP);
  /* 10f56793 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56796 push ebx */
  push32((uint32_t)(EBX));
  /* 10f56797 push esi */
  push32((uint32_t)(ESI));
  /* 10f56798 push edi */
  push32((uint32_t)(EDI));
  /* 10f56799 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10f567a0 jmp 0x10f567ab */
  goto L_10f567ab;
L_10f567a2:;
  /* 10f567a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f567a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f567a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10f567ab:;
  /* 10f567ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f567ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f567b2 jge 0x10f567bf */
  if ((C.sf==C.of)) goto L_10f567bf;
  /* 10f567b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f567b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f567ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10f567bd jmp 0x10f567c6 */
  goto L_10f567c6;
L_10f567bf:;
  /* 10f567bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10f567c6:;
  /* 10f567c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f567c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f567cc jge 0x10f5686c */
  if ((C.sf==C.of)) goto L_10f5686c;
  /* 10f567d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f567d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f567d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10f567db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10f567de cmp dword ptr [0x10f7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f567e5 jle 0x10f56803 */
  if ((C.zf||C.sf!=C.of)) goto L_10f56803;
  /* 10f567e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10f567ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f567ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f567f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f567f6 call 0x10f5aaa0 */
  push32(0x10f567fbu); f_10f5aaa0();
  /* 10f567fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f567fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10f56801 jmp 0x10f56820 */
  goto L_10f56820;
L_10f56803:;
  /* 10f56803 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f56806 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5680c mov eax, dword ptr [0x10f7ec98] */
  EAX = (r32((uint32_t)(0x10f7ec98)));
  /* 10f56811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f56813 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f56817 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5681d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10f56820:;
  /* 10f56820 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56824 je 0x10f56834 */
  if (C.zf) goto L_10f56834;
  /* 10f56826 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f56829 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5682f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10f56832 jmp 0x10f5683b */
  goto L_10f5683b;
L_10f56834:;
  /* 10f56834 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10f5683b:;
  /* 10f5683b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f5683e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10f56841 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10f56845 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f56848 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5684e push edx */
  push32((uint32_t)(EDX));
  /* 10f5684f push 0x10f7bc08 */
  push32((uint32_t)(0x10f7bc08u));
  /* 10f56854 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f56857 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5685a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10f5685e push ecx */
  push32((uint32_t)(ECX));
  /* 10f5685f call 0x10f5a9a0 */
  push32(0x10f56864u); f_10f5a9a0();
  /* 10f56864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56867 jmp 0x10f567a2 */
  goto L_10f567a2;
L_10f5686c:;
  /* 10f5686c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f5686f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10f56874:;
  /* 10f56874 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10f56877 push eax */
  push32((uint32_t)(EAX));
  /* 10f56878 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10f5687b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5687c push 0x10f7bbf8 */
  push32((uint32_t)(0x10f7bbf8u));
  /* 10f56881 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56883 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56885 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56887 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56889 call 0x10f53b50 */
  push32(0x10f5688eu); f_10f53b50();
  /* 10f5688e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56891 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56894 jne 0x10f56897 */
  if (!C.zf) goto L_10f56897;
  /* 10f56896 int3  */
  x86_unimpl("int3 @ 0x10f56896");
L_10f56897:;
  /* 10f56897 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5689b jne 0x10f56874 */
  if (!C.zf) goto L_10f56874;
  /* 10f5689d pop edi */
  EDI = (pop32());
  /* 10f5689e pop esi */
  ESI = (pop32());
  /* 10f5689f pop ebx */
  EBX = (pop32());
  /* 10f568a0 mov esp, ebp */
  ESP = (EBP);
  /* 10f568a2 pop ebp */
  EBP = (pop32());
  /* 10f568a3 ret  */
  ESPCHK(0x10f56790u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x10f568b0 (116 bytes, 46 insns) */
void f_10f568b0(void) {
  FTRACE(0x10f568b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f568b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f568b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f568b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f568b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f568b7 push esi */
  push32((uint32_t)(ESI));
  /* 10f568b8 push edi */
  push32((uint32_t)(EDI));
  /* 10f568b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10f568bc push eax */
  push32((uint32_t)(EAX));
  /* 10f568bd call 0x10f56230 */
  push32(0x10f568c2u); f_10f56230();
  /* 10f568c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f568c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f568c9 jne 0x10f568e4 */
  if (!C.zf) goto L_10f568e4;
  /* 10f568cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f568cf jne 0x10f568e4 */
  if (!C.zf) goto L_10f568e4;
  /* 10f568d1 mov ecx, dword ptr [0x10f7ea84] */
  ECX = (r32((uint32_t)(0x10f7ea84)));
  /* 10f568d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10f568da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f568dc je 0x10f5691b */
  if (C.zf) goto L_10f5691b;
  /* 10f568de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f568e2 je 0x10f5691b */
  if (C.zf) goto L_10f5691b;
L_10f568e4:;
  /* 10f568e4 push 0x10f7bc10 */
  push32((uint32_t)(0x10f7bc10u));
  /* 10f568e9 push 0x10f7b5dc */
  push32((uint32_t)(0x10f7b5dcu));
  /* 10f568ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f568f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f568f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f568f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f568f6 call 0x10f53b50 */
  push32(0x10f568fbu); f_10f53b50();
  /* 10f568fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f568fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56901 jne 0x10f56904 */
  if (!C.zf) goto L_10f56904;
  /* 10f56903 int3  */
  x86_unimpl("int3 @ 0x10f56903");
L_10f56904:;
  /* 10f56904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56906 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56908 jne 0x10f568e4 */
  if (!C.zf) goto L_10f568e4;
  /* 10f5690a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5690c call 0x10f564d0 */
  push32(0x10f56911u); f_10f564d0();
  /* 10f56911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56914 mov eax, 1 */
  EAX = (0x1u);
  /* 10f56919 jmp 0x10f5691d */
  goto L_10f5691d;
L_10f5691b:;
  /* 10f5691b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f5691d:;
  /* 10f5691d pop edi */
  EDI = (pop32());
  /* 10f5691e pop esi */
  ESI = (pop32());
  /* 10f5691f pop ebx */
  EBX = (pop32());
  /* 10f56920 mov esp, ebp */
  ESP = (EBP);
  /* 10f56922 pop ebp */
  EBP = (pop32());
  /* 10f56923 ret  */
  ESPCHK(0x10f568b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x10f56930 (197 bytes, 79 insns) */
void f_10f56930(void) {
  FTRACE(0x10f56930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56930 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56931 mov ebp, esp */
  EBP = (ESP);
  /* 10f56933 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56934 push ebx */
  push32((uint32_t)(EBX));
  /* 10f56935 push esi */
  push32((uint32_t)(ESI));
  /* 10f56936 push edi */
  push32((uint32_t)(EDI));
  /* 10f56937 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5693b jne 0x10f56942 */
  if (!C.zf) goto L_10f56942;
  /* 10f5693d jmp 0x10f569ee */
  goto L_10f569ee;
L_10f56942:;
  /* 10f56942 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f56949 jmp 0x10f56954 */
  goto L_10f56954;
L_10f5694b:;
  /* 10f5694b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5694e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f56954:;
  /* 10f56954 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56958 jge 0x10f5699e */
  if ((C.sf==C.of)) goto L_10f5699e;
L_10f5695a:;
  /* 10f5695a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5695d mov edx, dword ptr [ecx*4 + 0x10f7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7ea94)));
  /* 10f56964 push edx */
  push32((uint32_t)(EDX));
  /* 10f56965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5696b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10f5696f push edx */
  push32((uint32_t)(EDX));
  /* 10f56970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56976 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10f5697a push edx */
  push32((uint32_t)(EDX));
  /* 10f5697b push 0x10f7bc6c */
  push32((uint32_t)(0x10f7bc6cu));
  /* 10f56980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56982 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56984 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56986 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56988 call 0x10f53b50 */
  push32(0x10f5698du); f_10f53b50();
  /* 10f5698d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56990 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56993 jne 0x10f56996 */
  if (!C.zf) goto L_10f56996;
  /* 10f56995 int3  */
  x86_unimpl("int3 @ 0x10f56995");
L_10f56996:;
  /* 10f56996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f5699a jne 0x10f5695a */
  if (!C.zf) goto L_10f5695a;
  /* 10f5699c jmp 0x10f5694b */
  goto L_10f5694b;
L_10f5699e:;
  /* 10f5699e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f569a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10f569a4 push edx */
  push32((uint32_t)(EDX));
  /* 10f569a5 push 0x10f7bc48 */
  push32((uint32_t)(0x10f7bc48u));
  /* 10f569aa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569b2 call 0x10f53b50 */
  push32(0x10f569b7u); f_10f53b50();
  /* 10f569b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f569ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f569bd jne 0x10f569c0 */
  if (!C.zf) goto L_10f569c0;
  /* 10f569bf int3  */
  x86_unimpl("int3 @ 0x10f569bf");
L_10f569c0:;
  /* 10f569c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f569c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f569c4 jne 0x10f5699e */
  if (!C.zf) goto L_10f5699e;
L_10f569c6:;
  /* 10f569c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f569c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10f569cc push edx */
  push32((uint32_t)(EDX));
  /* 10f569cd push 0x10f7bc28 */
  push32((uint32_t)(0x10f7bc28u));
  /* 10f569d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f569da call 0x10f53b50 */
  push32(0x10f569dfu); f_10f53b50();
  /* 10f569df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f569e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f569e5 jne 0x10f569e8 */
  if (!C.zf) goto L_10f569e8;
  /* 10f569e7 int3  */
  x86_unimpl("int3 @ 0x10f569e7");
L_10f569e8:;
  /* 10f569e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f569ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f569ec jne 0x10f569c6 */
  if (!C.zf) goto L_10f569c6;
L_10f569ee:;
  /* 10f569ee pop edi */
  EDI = (pop32());
  /* 10f569ef pop esi */
  ESI = (pop32());
  /* 10f569f0 pop ebx */
  EBX = (pop32());
  /* 10f569f1 mov esp, ebp */
  ESP = (EBP);
  /* 10f569f3 pop ebp */
  EBP = (pop32());
  /* 10f569f4 ret  */
  ESPCHK(0x10f56930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x10f56a00 (329 bytes, 102 insns) */
void f_10f56a00(void) {
  FTRACE(0x10f56a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56a01 mov ebp, esp */
  EBP = (ESP);
  /* 10f56a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56a06 cmp dword ptr [0x10f820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56a0d jne 0x10f56a14 */
  if (!C.zf) goto L_10f56a14;
  /* 10f56a0f call 0x10f5b340 */
  push32(0x10f56a14u); f_10f5b340();
L_10f56a14:;
  /* 10f56a14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f56a1b mov eax, dword ptr [0x10f805ac] */
  EAX = (r32((uint32_t)(0x10f805ac)));
  /* 10f56a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f56a23:;
  /* 10f56a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56a26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f56a29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56a2b je 0x10f56a59 */
  if (C.zf) goto L_10f56a59;
  /* 10f56a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56a30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56a33 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56a36 je 0x10f56a41 */
  if (C.zf) goto L_10f56a41;
  /* 10f56a38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56a3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56a3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f56a41:;
  /* 10f56a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56a44 push eax */
  push32((uint32_t)(EAX));
  /* 10f56a45 call 0x10f578c0 */
  push32(0x10f56a4au); f_10f578c0();
  /* 10f56a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56a50 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f56a54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f56a57 jmp 0x10f56a23 */
  goto L_10f56a23;
L_10f56a59:;
  /* 10f56a59 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10f56a5b push 0x10f7bc8c */
  push32((uint32_t)(0x10f7bc8cu));
  /* 10f56a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f56a62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56a65 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10f56a6c push ecx */
  push32((uint32_t)(ECX));
  /* 10f56a6d call 0x10f54a90 */
  push32(0x10f56a72u); f_10f54a90();
  /* 10f56a72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56a75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f56a78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56a7b mov dword ptr [0x10f805e0], edx */
  w32((uint32_t)(0x10f805e0), (EDX));
  /* 10f56a81 cmp dword ptr [0x10f805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56a88 jne 0x10f56a94 */
  if (!C.zf) goto L_10f56a94;
  /* 10f56a8a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f56a8c call 0x10f53a00 */
  push32(0x10f56a91u); f_10f53a00();
  /* 10f56a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56a94:;
  /* 10f56a94 mov eax, dword ptr [0x10f805ac] */
  EAX = (r32((uint32_t)(0x10f805ac)));
  /* 10f56a99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56a9c jmp 0x10f56aa7 */
  goto L_10f56aa7;
L_10f56a9e:;
  /* 10f56a9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56aa1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56aa4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f56aa7:;
  /* 10f56aa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56aaa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56aaf je 0x10f56b17 */
  if (C.zf) goto L_10f56b17;
  /* 10f56ab1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56ab5 call 0x10f578c0 */
  push32(0x10f56abau); f_10f578c0();
  /* 10f56aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ac0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f56ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ac6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56ac9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56acc je 0x10f56b15 */
  if (C.zf) goto L_10f56b15;
  /* 10f56ace push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10f56ad0 push 0x10f7bc8c */
  push32((uint32_t)(0x10f7bc8cu));
  /* 10f56ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f56ad7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56ada push ecx */
  push32((uint32_t)(ECX));
  /* 10f56adb call 0x10f54a90 */
  push32(0x10f56ae0u); f_10f54a90();
  /* 10f56ae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ae3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56ae6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f56ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56aeb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56aee jne 0x10f56afa */
  if (!C.zf) goto L_10f56afa;
  /* 10f56af0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f56af2 call 0x10f53a00 */
  push32(0x10f56af7u); f_10f53a00();
  /* 10f56af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56afa:;
  /* 10f56afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56afd push ecx */
  push32((uint32_t)(ECX));
  /* 10f56afe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56b01 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f56b03 push eax */
  push32((uint32_t)(EAX));
  /* 10f56b04 call 0x10f57a40 */
  push32(0x10f56b09u); f_10f57a40();
  /* 10f56b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56b0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56b0f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56b12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f56b15:;
  /* 10f56b15 jmp 0x10f56a9e */
  goto L_10f56a9e;
L_10f56b17:;
  /* 10f56b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f56b19 mov edx, dword ptr [0x10f805ac] */
  EDX = (r32((uint32_t)(0x10f805ac)));
  /* 10f56b1f push edx */
  push32((uint32_t)(EDX));
  /* 10f56b20 call 0x10f55520 */
  push32(0x10f56b25u); f_10f55520();
  /* 10f56b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56b28 mov dword ptr [0x10f805ac], 0 */
  w32((uint32_t)(0x10f805ac), (0x0u));
  /* 10f56b32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56b35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f56b3b mov dword ptr [0x10f820e0], 1 */
  w32((uint32_t)(0x10f820e0), (0x1u));
  /* 10f56b45 mov esp, ebp */
  ESP = (EBP);
  /* 10f56b47 pop ebp */
  EBP = (pop32());
  /* 10f56b48 ret  */
  ESPCHK(0x10f56a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x10f56b50 (216 bytes, 69 insns) */
void f_10f56b50(void) {
  FTRACE(0x10f56b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56b51 mov ebp, esp */
  EBP = (ESP);
  /* 10f56b53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56b56 cmp dword ptr [0x10f820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56b5d jne 0x10f56b64 */
  if (!C.zf) goto L_10f56b64;
  /* 10f56b5f call 0x10f5b340 */
  push32(0x10f56b64u); f_10f5b340();
L_10f56b64:;
  /* 10f56b64 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f56b69 push 0x10f8061c */
  push32((uint32_t)(0x10f8061cu));
  /* 10f56b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56b70 call dword ptr [0x10f83368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83368))), 0x10f56b76u);
  /* 10f56b76 mov dword ptr [0x10f805f0], 0x10f8061c */
  w32((uint32_t)(0x10f805f0), (0x10f8061cu));
  /* 10f56b80 mov eax, dword ptr [0x10f8210c] */
  EAX = (r32((uint32_t)(0x10f8210c)));
  /* 10f56b85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56b8a jne 0x10f56b97 */
  if (!C.zf) goto L_10f56b97;
  /* 10f56b8c mov edx, dword ptr [0x10f805f0] */
  EDX = (r32((uint32_t)(0x10f805f0)));
  /* 10f56b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f56b95 jmp 0x10f56b9f */
  goto L_10f56b9f;
L_10f56b97:;
  /* 10f56b97 mov eax, dword ptr [0x10f8210c] */
  EAX = (r32((uint32_t)(0x10f8210c)));
  /* 10f56b9c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10f56b9f:;
  /* 10f56b9f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f56ba2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f56ba5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10f56ba8 push edx */
  push32((uint32_t)(EDX));
  /* 10f56ba9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f56bac push eax */
  push32((uint32_t)(EAX));
  /* 10f56bad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56baf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f56bb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56bb5 call 0x10f56c30 */
  push32(0x10f56bbau); f_10f56c30();
  /* 10f56bba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56bbd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10f56bc2 push 0x10f7bc98 */
  push32((uint32_t)(0x10f7bc98u));
  /* 10f56bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f56bc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56bcf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10f56bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56bd3 call 0x10f54a90 */
  push32(0x10f56bd8u); f_10f54a90();
  /* 10f56bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f56bde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56be2 jne 0x10f56bee */
  if (!C.zf) goto L_10f56bee;
  /* 10f56be4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f56be6 call 0x10f53a00 */
  push32(0x10f56bebu); f_10f53a00();
  /* 10f56beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f56bee:;
  /* 10f56bee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10f56bf1 push edx */
  push32((uint32_t)(EDX));
  /* 10f56bf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f56bf5 push eax */
  push32((uint32_t)(EAX));
  /* 10f56bf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56bf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56bfc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10f56bff push eax */
  push32((uint32_t)(EAX));
  /* 10f56c00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10f56c04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56c07 push edx */
  push32((uint32_t)(EDX));
  /* 10f56c08 call 0x10f56c30 */
  push32(0x10f56c0du); f_10f56c30();
  /* 10f56c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56c10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56c13 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56c16 mov dword ptr [0x10f805d4], eax */
  w32((uint32_t)(0x10f805d4), (EAX));
  /* 10f56c1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f56c1e mov dword ptr [0x10f805d8], ecx */
  w32((uint32_t)(0x10f805d8), (ECX));
  /* 10f56c24 mov esp, ebp */
  ESP = (EBP);
  /* 10f56c26 pop ebp */
  EBP = (pop32());
  /* 10f56c27 ret  */
  ESPCHK(0x10f56b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x10f56c30 (1060 bytes, 360 insns) */
void f_10f56c30(void) {
  FTRACE(0x10f56c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f56c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f56c31 mov ebp, esp */
  EBP = (ESP);
  /* 10f56c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56c36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56c39 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f56c3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f56c42 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10f56c48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f56c4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f56c4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56c52 je 0x10f56c65 */
  if (C.zf) goto L_10f56c65;
  /* 10f56c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56c57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56c5a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f56c5c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56c5f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56c62 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10f56c65:;
  /* 10f56c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56c68 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56c6b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56c6e jne 0x10f56d3d */
  if (!C.zf) goto L_10f56d3d;
L_10f56c74:;
  /* 10f56c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56c77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56c7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f56c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56c80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56c83 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56c86 je 0x10f56d02 */
  if (C.zf) goto L_10f56d02;
  /* 10f56c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56c8b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56c90 je 0x10f56d02 */
  if (C.zf) goto L_10f56d02;
  /* 10f56c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56c95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56c97 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f56c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56c9b mov al, byte ptr [edx + 0x10f81e41] */
  AL = (r8((uint32_t)(EDX + 0x10f81e41)));
  /* 10f56ca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f56ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56ca6 je 0x10f56cd7 */
  if (C.zf) goto L_10f56cd7;
  /* 10f56ca8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56cab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f56cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56cb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56cb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f56cb5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56cb9 je 0x10f56cd7 */
  if (C.zf) goto L_10f56cd7;
  /* 10f56cbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56cc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f56cc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f56cc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56cc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ccb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f56cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56cd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56cd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f56cd7:;
  /* 10f56cd7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56cda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f56cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56cdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56ce2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f56ce4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56ce8 je 0x10f56cfd */
  if (C.zf) goto L_10f56cfd;
  /* 10f56cea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56ced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56cf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f56cf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f56cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56cf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56cfa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f56cfd:;
  /* 10f56cfd jmp 0x10f56c74 */
  goto L_10f56c74;
L_10f56d02:;
  /* 10f56d02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f56d07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d0a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f56d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56d13 je 0x10f56d24 */
  if (C.zf) goto L_10f56d24;
  /* 10f56d15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56d18 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f56d1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56d1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d21 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10f56d24:;
  /* 10f56d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56d27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56d2a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56d2d jne 0x10f56d38 */
  if (!C.zf) goto L_10f56d38;
  /* 10f56d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56d32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f56d38:;
  /* 10f56d38 jmp 0x10f56e0c */
  goto L_10f56e0c;
L_10f56d3d:;
  /* 10f56d3d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f56d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d45 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f56d4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56d4e je 0x10f56d63 */
  if (C.zf) goto L_10f56d63;
  /* 10f56d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56d56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f56d58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f56d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d60 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f56d63:;
  /* 10f56d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56d66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f56d68 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10f56d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56d74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56d77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f56d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56d7f mov dl, byte ptr [ecx + 0x10f81e41] */
  DL = (r8((uint32_t)(ECX + 0x10f81e41)));
  /* 10f56d85 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f56d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56d8a je 0x10f56dbb */
  if (C.zf) goto L_10f56dbb;
  /* 10f56d8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f56d91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56d94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56d97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f56d99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56d9d je 0x10f56db2 */
  if (C.zf) goto L_10f56db2;
  /* 10f56d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56da2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56da5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f56da7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f56da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56dac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56daf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f56db2:;
  /* 10f56db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56db8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f56dbb:;
  /* 10f56dbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56dbe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56dc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56dc7 je 0x10f56de7 */
  if (C.zf) goto L_10f56de7;
  /* 10f56dc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56dcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f56dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56dd3 je 0x10f56de7 */
  if (C.zf) goto L_10f56de7;
  /* 10f56dd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56dd8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f56dde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56de1 jne 0x10f56d3d */
  if (!C.zf) goto L_10f56d3d;
L_10f56de7:;
  /* 10f56de7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f56dea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f56df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56df2 jne 0x10f56dff */
  if (!C.zf) goto L_10f56dff;
  /* 10f56df4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56df7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56dfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56dfd jmp 0x10f56e0c */
  goto L_10f56e0c;
L_10f56dff:;
  /* 10f56dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56e03 je 0x10f56e0c */
  if (C.zf) goto L_10f56e0c;
  /* 10f56e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56e08 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10f56e0c:;
  /* 10f56e0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10f56e13:;
  /* 10f56e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56e1b je 0x10f56e3e */
  if (C.zf) goto L_10f56e3e;
L_10f56e1d:;
  /* 10f56e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f56e23 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56e26 je 0x10f56e33 */
  if (C.zf) goto L_10f56e33;
  /* 10f56e28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56e2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56e31 jne 0x10f56e3e */
  if (!C.zf) goto L_10f56e3e;
L_10f56e33:;
  /* 10f56e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56e39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f56e3c jmp 0x10f56e1d */
  goto L_10f56e1d;
L_10f56e3e:;
  /* 10f56e3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56e44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56e46 jne 0x10f56e4d */
  if (!C.zf) goto L_10f56e4d;
  /* 10f56e48 jmp 0x10f5702b */
  goto L_10f5702b;
L_10f56e4d:;
  /* 10f56e4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56e51 je 0x10f56e64 */
  if (C.zf) goto L_10f56e64;
  /* 10f56e53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56e59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f56e5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f56e5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56e61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f56e64:;
  /* 10f56e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f56e67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f56e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f56e6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f56e71:;
  /* 10f56e71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f56e78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f56e7f:;
  /* 10f56e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56e85 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56e88 jne 0x10f56e9e */
  if (!C.zf) goto L_10f56e9e;
  /* 10f56e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56e8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f56e93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56e99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f56e9c jmp 0x10f56e7f */
  goto L_10f56e7f;
L_10f56e9e:;
  /* 10f56e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ea1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56ea4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56ea7 jne 0x10f56efa */
  if (!C.zf) goto L_10f56efa;
  /* 10f56ea9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56eac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56eae mov ecx, 2 */
  ECX = (0x2u);
  /* 10f56eb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f56eb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f56eb7 jne 0x10f56ef2 */
  if (!C.zf) goto L_10f56ef2;
  /* 10f56eb9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56ebd je 0x10f56edf */
  if (C.zf) goto L_10f56edf;
  /* 10f56ebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ec2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f56ec6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56ec9 jne 0x10f56ed6 */
  if (!C.zf) goto L_10f56ed6;
  /* 10f56ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ed1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f56ed4 jmp 0x10f56edd */
  goto L_10f56edd;
L_10f56ed6:;
  /* 10f56ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f56edd:;
  /* 10f56edd jmp 0x10f56ee6 */
  goto L_10f56ee6;
L_10f56edf:;
  /* 10f56edf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f56ee6:;
  /* 10f56ee6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f56ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56eec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10f56eef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f56ef2:;
  /* 10f56ef2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56ef5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f56ef7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f56efa:;
  /* 10f56efa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56efd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f56f00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f56f03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f56f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56f08 je 0x10f56f2e */
  if (C.zf) goto L_10f56f2e;
  /* 10f56f0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f0e je 0x10f56f1f */
  if (C.zf) goto L_10f56f1f;
  /* 10f56f10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56f13 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10f56f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56f1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10f56f1f:;
  /* 10f56f1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56f22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f56f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56f27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56f2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f56f2c jmp 0x10f56efa */
  goto L_10f56efa;
L_10f56f2e:;
  /* 10f56f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f56f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f56f36 je 0x10f56f54 */
  if (C.zf) goto L_10f56f54;
  /* 10f56f38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f3c jne 0x10f56f59 */
  if (!C.zf) goto L_10f56f59;
  /* 10f56f3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f56f44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f47 je 0x10f56f54 */
  if (C.zf) goto L_10f56f54;
  /* 10f56f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f56f4f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f52 jne 0x10f56f59 */
  if (!C.zf) goto L_10f56f59;
L_10f56f54:;
  /* 10f56f54 jmp 0x10f57004 */
  goto L_10f57004;
L_10f56f59:;
  /* 10f56f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f5d je 0x10f56ff6 */
  if (C.zf) goto L_10f56ff6;
  /* 10f56f63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f56f67 je 0x10f56fbd */
  if (C.zf) goto L_10f56fbd;
  /* 10f56f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56f6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f56f70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f56f72 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f56f78 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f56f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56f7d je 0x10f56fa8 */
  if (C.zf) goto L_10f56fa8;
  /* 10f56f7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f85 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f56f87 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f56f89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56f8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56f8f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10f56f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56f95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56f98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56f9b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56f9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f56fa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56fa3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56fa6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f56fa8:;
  /* 10f56fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56fab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56fae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f56fb0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f56fb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f56fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56fb8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f56fbb jmp 0x10f56fe9 */
  goto L_10f56fe9;
L_10f56fbd:;
  /* 10f56fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f56fc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f56fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f56fc6 mov cl, byte ptr [eax + 0x10f81e41] */
  CL = (r8((uint32_t)(EAX + 0x10f81e41)));
  /* 10f56fcc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f56fcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f56fd1 je 0x10f56fe9 */
  if (C.zf) goto L_10f56fe9;
  /* 10f56fd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56fd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f56fdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56fdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f56fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56fe4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f56fe9:;
  /* 10f56fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56fec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f56fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f56ff4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f56ff6:;
  /* 10f56ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f56ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f56ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f56fff jmp 0x10f56e71 */
  goto L_10f56e71;
L_10f57004:;
  /* 10f57004 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57008 je 0x10f57019 */
  if (C.zf) goto L_10f57019;
  /* 10f5700a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f5700d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f57010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57013 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57016 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10f57019:;
  /* 10f57019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f5701c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f5701e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f57024 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f57026 jmp 0x10f56e13 */
  goto L_10f56e13;
L_10f5702b:;
  /* 10f5702b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5702f je 0x10f57043 */
  if (C.zf) goto L_10f57043;
  /* 10f57031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57034 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f5703a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5703d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57040 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f57043:;
  /* 10f57043 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f57046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f57048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5704b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5704e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f57050 mov esp, ebp */
  ESP = (EBP);
  /* 10f57052 pop ebp */
  EBP = (pop32());
  /* 10f57053 ret  */
  ESPCHK(0x10f56c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x10f57060 (537 bytes, 173 insns) */
void f_10f57060(void) {
  FTRACE(0x10f57060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57060 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57061 mov ebp, esp */
  EBP = (ESP);
  /* 10f57063 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57066 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f5706d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10f57074 cmp dword ptr [0x10f80720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5707b jne 0x10f570ba */
  if (!C.zf) goto L_10f570ba;
  /* 10f5707d call dword ptr [0x10f833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833c0))), 0x10f57083u);
  /* 10f57083 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f57086 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5708a je 0x10f57098 */
  if (C.zf) goto L_10f57098;
  /* 10f5708c mov dword ptr [0x10f80720], 1 */
  w32((uint32_t)(0x10f80720), (0x1u));
  /* 10f57096 jmp 0x10f570ba */
  goto L_10f570ba;
L_10f57098:;
  /* 10f57098 call dword ptr [0x10f833bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833bc))), 0x10f5709eu);
  /* 10f5709e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f570a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f570a5 je 0x10f570b3 */
  if (C.zf) goto L_10f570b3;
  /* 10f570a7 mov dword ptr [0x10f80720], 2 */
  w32((uint32_t)(0x10f80720), (0x2u));
  /* 10f570b1 jmp 0x10f570ba */
  goto L_10f570ba;
L_10f570b3:;
  /* 10f570b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f570b5 jmp 0x10f57275 */
  goto L_10f57275;
L_10f570ba:;
  /* 10f570ba cmp dword ptr [0x10f80720], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f80720))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f570c1 jne 0x10f571be */
  if (!C.zf) goto L_10f571be;
  /* 10f570c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f570cb jne 0x10f570e3 */
  if (!C.zf) goto L_10f570e3;
  /* 10f570cd call dword ptr [0x10f833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833c0))), 0x10f570d3u);
  /* 10f570d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f570d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f570da jne 0x10f570e3 */
  if (!C.zf) goto L_10f570e3;
  /* 10f570dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f570de jmp 0x10f57275 */
  goto L_10f57275;
L_10f570e3:;
  /* 10f570e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f570e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f570e9:;
  /* 10f570e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f570ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f570ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f570f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f570f3 je 0x10f57115 */
  if (C.zf) goto L_10f57115;
  /* 10f570f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f570f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f570fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f570fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57101 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57103 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f57106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f57108 jne 0x10f57113 */
  if (!C.zf) goto L_10f57113;
  /* 10f5710a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5710d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57110 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f57113:;
  /* 10f57113 jmp 0x10f570e9 */
  goto L_10f570e9;
L_10f57115:;
  /* 10f57115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57118 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5711b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f5711d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f57123 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57125 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57127 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57129 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5712b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5712e push edx */
  push32((uint32_t)(EDX));
  /* 10f5712f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f57132 push eax */
  push32((uint32_t)(EAX));
  /* 10f57133 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57135 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57137 call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f5713du);
  /* 10f5713d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f57140 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57144 je 0x10f57164 */
  if (C.zf) goto L_10f57164;
  /* 10f57146 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f57148 push 0x10f7bca4 */
  push32((uint32_t)(0x10f7bca4u));
  /* 10f5714d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5714f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f57152 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57153 call 0x10f54a90 */
  push32(0x10f57158u); f_10f54a90();
  /* 10f57158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5715b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f5715e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57162 jne 0x10f57175 */
  if (!C.zf) goto L_10f57175;
L_10f57164:;
  /* 10f57164 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f57167 push edx */
  push32((uint32_t)(EDX));
  /* 10f57168 call dword ptr [0x10f833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b4))), 0x10f5716eu);
  /* 10f5716e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f57170 jmp 0x10f57275 */
  goto L_10f57275;
L_10f57175:;
  /* 10f57175 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57177 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57179 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5717c push eax */
  push32((uint32_t)(EAX));
  /* 10f5717d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57180 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57184 push edx */
  push32((uint32_t)(EDX));
  /* 10f57185 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f57188 push eax */
  push32((uint32_t)(EAX));
  /* 10f57189 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5718b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5718d call dword ptr [0x10f833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b8))), 0x10f57193u);
  /* 10f57193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f57195 jne 0x10f571ac */
  if (!C.zf) goto L_10f571ac;
  /* 10f57197 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f57199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f5719c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5719d call 0x10f55520 */
  push32(0x10f571a2u); f_10f55520();
  /* 10f571a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f571a5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10f571ac:;
  /* 10f571ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f571af push edx */
  push32((uint32_t)(EDX));
  /* 10f571b0 call dword ptr [0x10f833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b4))), 0x10f571b6u);
  /* 10f571b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f571b9 jmp 0x10f57275 */
  goto L_10f57275;
L_10f571be:;
  /* 10f571be cmp dword ptr [0x10f80720], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10f80720))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f571c5 jne 0x10f57273 */
  if (!C.zf) goto L_10f57273;
  /* 10f571cb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f571cf jne 0x10f571e7 */
  if (!C.zf) goto L_10f571e7;
  /* 10f571d1 call dword ptr [0x10f833bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833bc))), 0x10f571d7u);
  /* 10f571d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f571da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f571de jne 0x10f571e7 */
  if (!C.zf) goto L_10f571e7;
  /* 10f571e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f571e2 jmp 0x10f57275 */
  goto L_10f57275;
L_10f571e7:;
  /* 10f571e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f571ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f571ed:;
  /* 10f571ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f571f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f571f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f571f5 je 0x10f57215 */
  if (C.zf) goto L_10f57215;
  /* 10f571f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f571fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f571fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f57206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f57208 jne 0x10f57213 */
  if (!C.zf) goto L_10f57213;
  /* 10f5720a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5720d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57210 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f57213:;
  /* 10f57213 jmp 0x10f571ed */
  goto L_10f571ed;
L_10f57215:;
  /* 10f57215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57218 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5721b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5721e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f57221 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10f57226 push 0x10f7bca4 */
  push32((uint32_t)(0x10f7bca4u));
  /* 10f5722b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5722d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f57230 push edx */
  push32((uint32_t)(EDX));
  /* 10f57231 call 0x10f54a90 */
  push32(0x10f57236u); f_10f54a90();
  /* 10f57236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57239 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f5723c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57240 jne 0x10f57250 */
  if (!C.zf) goto L_10f57250;
  /* 10f57242 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57245 push eax */
  push32((uint32_t)(EAX));
  /* 10f57246 call dword ptr [0x10f833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a4))), 0x10f5724cu);
  /* 10f5724c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5724e jmp 0x10f57275 */
  goto L_10f57275;
L_10f57250:;
  /* 10f57250 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f57253 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57254 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57257 push edx */
  push32((uint32_t)(EDX));
  /* 10f57258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5725b push eax */
  push32((uint32_t)(EAX));
  /* 10f5725c call 0x10f5b370 */
  push32(0x10f57261u); f_10f5b370();
  /* 10f57261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57264 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57267 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57268 call dword ptr [0x10f833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833a4))), 0x10f5726eu);
  /* 10f5726e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57271 jmp 0x10f57275 */
  goto L_10f57275;
L_10f57273:;
  /* 10f57273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f57275:;
  /* 10f57275 mov esp, ebp */
  ESP = (EBP);
  /* 10f57277 pop ebp */
  EBP = (pop32());
  /* 10f57278 ret  */
  ESPCHK(0x10f57060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x10f57280 (77 bytes, 25 insns) */
void f_10f57280(void) {
  FTRACE(0x10f57280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57280 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57281 mov ebp, esp */
  EBP = (ESP);
  /* 10f57283 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57285 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f5728a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5728c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57290 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f57293 push eax */
  push32((uint32_t)(EAX));
  /* 10f57294 call dword ptr [0x10f83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83338))), 0x10f5729au);
  /* 10f5729a mov dword ptr [0x10f81f6c], eax */
  w32((uint32_t)(0x10f81f6c), (EAX));
  /* 10f5729f cmp dword ptr [0x10f81f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f81f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f572a6 jne 0x10f572ac */
  if (!C.zf) goto L_10f572ac;
  /* 10f572a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f572aa jmp 0x10f572cb */
  goto L_10f572cb;
L_10f572ac:;
  /* 10f572ac call 0x10f58d30 */
  push32(0x10f572b1u); f_10f58d30();
  /* 10f572b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f572b3 jne 0x10f572c6 */
  if (!C.zf) goto L_10f572c6;
  /* 10f572b5 mov ecx, dword ptr [0x10f81f6c] */
  ECX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f572bb push ecx */
  push32((uint32_t)(ECX));
  /* 10f572bc call dword ptr [0x10f8333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8333c))), 0x10f572c2u);
  /* 10f572c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f572c4 jmp 0x10f572cb */
  goto L_10f572cb;
L_10f572c6:;
  /* 10f572c6 mov eax, 1 */
  EAX = (0x1u);
L_10f572cb:;
  /* 10f572cb pop ebp */
  EBP = (pop32());
  /* 10f572cc ret  */
  ESPCHK(0x10f57280u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x10f572d0 (156 bytes, 48 insns) */
void f_10f572d0(void) {
  FTRACE(0x10f572d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f572d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f572d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f572d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f572d6 mov eax, dword ptr [0x10f81f68] */
  EAX = (r32((uint32_t)(0x10f81f68)));
  /* 10f572db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f572de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f572e5 jmp 0x10f572f0 */
  goto L_10f572f0;
L_10f572e7:;
  /* 10f572e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f572ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f572ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f572f0:;
  /* 10f572f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f572f3 cmp edx, dword ptr [0x10f81f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f81f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f572f9 jge 0x10f57346 */
  if ((C.sf==C.of)) goto L_10f57346;
  /* 10f572fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f57300 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f57305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57308 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f5730b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5730c call dword ptr [0x10f83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83330))), 0x10f57312u);
  /* 10f57312 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f57317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57319 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5731c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f5731f push eax */
  push32((uint32_t)(EAX));
  /* 10f57320 call dword ptr [0x10f83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83330))), 0x10f57326u);
  /* 10f57326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57329 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f5732c push edx */
  push32((uint32_t)(EDX));
  /* 10f5732d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5732f mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f57334 push eax */
  push32((uint32_t)(EAX));
  /* 10f57335 call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f5733bu);
  /* 10f5733b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5733e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f57344 jmp 0x10f572e7 */
  goto L_10f572e7;
L_10f57346:;
  /* 10f57346 mov edx, dword ptr [0x10f81f68] */
  EDX = (r32((uint32_t)(0x10f81f68)));
  /* 10f5734c push edx */
  push32((uint32_t)(EDX));
  /* 10f5734d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5734f mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f57354 push eax */
  push32((uint32_t)(EAX));
  /* 10f57355 call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f5735bu);
  /* 10f5735b mov ecx, dword ptr [0x10f81f6c] */
  ECX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f57361 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57362 call dword ptr [0x10f8333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8333c))), 0x10f57368u);
  /* 10f57368 mov esp, ebp */
  ESP = (EBP);
  /* 10f5736a pop ebp */
  EBP = (pop32());
  /* 10f5736b ret  */
  ESPCHK(0x10f572d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10f57370 (73 bytes, 19 insns) */
void f_10f57370(void) {
  FTRACE(0x10f57370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57370 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57371 mov ebp, esp */
  EBP = (ESP);
  /* 10f57373 cmp dword ptr [0x10f805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5737a je 0x10f5738e */
  if (C.zf) goto L_10f5738e;
  /* 10f5737c cmp dword ptr [0x10f805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57383 jne 0x10f573b7 */
  if (!C.zf) goto L_10f573b7;
  /* 10f57385 cmp dword ptr [0x10f805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5738c jne 0x10f573b7 */
  if (!C.zf) goto L_10f573b7;
L_10f5738e:;
  /* 10f5738e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10f57393 call 0x10f573c0 */
  push32(0x10f57398u); f_10f573c0();
  /* 10f57398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5739b cmp dword ptr [0x10f80724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f573a2 je 0x10f573aa */
  if (C.zf) goto L_10f573aa;
  /* 10f573a4 call dword ptr [0x10f80724] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f80724))), 0x10f573aau);
L_10f573aa:;
  /* 10f573aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f573af call 0x10f573c0 */
  push32(0x10f573b4u); f_10f573c0();
  /* 10f573b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f573b7:;
  /* 10f573b7 pop ebp */
  EBP = (pop32());
  /* 10f573b8 ret  */
  ESPCHK(0x10f57370u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x10f573c0 (447 bytes, 131 insns) */
void f_10f573c0(void) {
  FTRACE(0x10f573c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f573c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f573c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f573c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f573c9 push ebx */
  push32((uint32_t)(EBX));
  /* 10f573ca push esi */
  push32((uint32_t)(ESI));
  /* 10f573cb push edi */
  push32((uint32_t)(EDI));
  /* 10f573cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f573d3 jmp 0x10f573de */
  goto L_10f573de;
L_10f573d5:;
  /* 10f573d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f573d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f573db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f573de:;
  /* 10f573de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f573e2 jae 0x10f573f7 */
  if (!C.cf) goto L_10f573f7;
  /* 10f573e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f573e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f573ea cmp edx, dword ptr [ecx*8 + 0x10f7eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10f7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f573f1 jne 0x10f573f5 */
  if (!C.zf) goto L_10f573f5;
  /* 10f573f3 jmp 0x10f573f7 */
  goto L_10f573f7;
L_10f573f5:;
  /* 10f573f5 jmp 0x10f573d5 */
  goto L_10f573d5;
L_10f573f7:;
  /* 10f573f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f573fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f573fd cmp ecx, dword ptr [eax*8 + 0x10f7eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57404 jne 0x10f57578 */
  if (!C.zf) goto L_10f57578;
  /* 10f5740a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57411 je 0x10f57434 */
  if (C.zf) goto L_10f57434;
  /* 10f57413 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57416 mov eax, dword ptr [edx*8 + 0x10f7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f7eab4)));
  /* 10f5741d push eax */
  push32((uint32_t)(EAX));
  /* 10f5741e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57424 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57426 call 0x10f53b50 */
  push32(0x10f5742bu); f_10f53b50();
  /* 10f5742b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5742e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57431 jne 0x10f57434 */
  if (!C.zf) goto L_10f57434;
  /* 10f57433 int3  */
  x86_unimpl("int3 @ 0x10f57433");
L_10f57434:;
  /* 10f57434 cmp dword ptr [0x10f805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5743b je 0x10f5744f */
  if (C.zf) goto L_10f5744f;
  /* 10f5743d cmp dword ptr [0x10f805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57444 jne 0x10f57488 */
  if (!C.zf) goto L_10f57488;
  /* 10f57446 cmp dword ptr [0x10f805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10f805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5744d jne 0x10f57488 */
  if (!C.zf) goto L_10f57488;
L_10f5744f:;
  /* 10f5744f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57451 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f57454 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57458 mov eax, dword ptr [edx*8 + 0x10f7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f7eab4)));
  /* 10f5745f push eax */
  push32((uint32_t)(EAX));
  /* 10f57460 call 0x10f578c0 */
  push32(0x10f57465u); f_10f578c0();
  /* 10f57465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57468 push eax */
  push32((uint32_t)(EAX));
  /* 10f57469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5746c mov edx, dword ptr [ecx*8 + 0x10f7eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10f7eab4)));
  /* 10f57473 push edx */
  push32((uint32_t)(EDX));
  /* 10f57474 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f57476 call dword ptr [0x10f8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8334c))), 0x10f5747cu);
  /* 10f5747c push eax */
  push32((uint32_t)(EAX));
  /* 10f5747d call dword ptr [0x10f83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83350))), 0x10f57483u);
  /* 10f57483 jmp 0x10f57578 */
  goto L_10f57578;
L_10f57488:;
  /* 10f57488 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5748f je 0x10f57578 */
  if (C.zf) goto L_10f57578;
  /* 10f57495 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f5749a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10f574a0 push eax */
  push32((uint32_t)(EAX));
  /* 10f574a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f574a3 call dword ptr [0x10f83368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83368))), 0x10f574a9u);
  /* 10f574a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f574ab jne 0x10f574c1 */
  if (!C.zf) goto L_10f574c1;
  /* 10f574ad push 0x10f7b50c */
  push32((uint32_t)(0x10f7b50cu));
  /* 10f574b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10f574b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f574b9 call 0x10f57a40 */
  push32(0x10f574beu); f_10f57a40();
  /* 10f574be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f574c1:;
  /* 10f574c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10f574c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f574ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f574cd push eax */
  push32((uint32_t)(EAX));
  /* 10f574ce call 0x10f578c0 */
  push32(0x10f574d3u); f_10f578c0();
  /* 10f574d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f574d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f574d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f574dc jbe 0x10f5750a */
  if ((C.cf||C.zf)) goto L_10f5750a;
  /* 10f574de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10f574e4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f574e5 call 0x10f578c0 */
  push32(0x10f574eau); f_10f578c0();
  /* 10f574ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f574ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f574f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10f574f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f574f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f574f9 push 0x10f7b508 */
  push32((uint32_t)(0x10f7b508u));
  /* 10f574fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57501 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57502 call 0x10f582b0 */
  push32(0x10f57507u); f_10f582b0();
  /* 10f57507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5750a:;
  /* 10f5750a push 0x10f7bf60 */
  push32((uint32_t)(0x10f7bf60u));
  /* 10f5750f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f57515 push edx */
  push32((uint32_t)(EDX));
  /* 10f57516 call 0x10f57a40 */
  push32(0x10f5751bu); f_10f57a40();
  /* 10f5751b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5751e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57521 push eax */
  push32((uint32_t)(EAX));
  /* 10f57522 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10f57528 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57529 call 0x10f57a50 */
  push32(0x10f5752eu); f_10f57a50();
  /* 10f5752e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57531 push 0x10f7b480 */
  push32((uint32_t)(0x10f7b480u));
  /* 10f57536 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f5753c push edx */
  push32((uint32_t)(EDX));
  /* 10f5753d call 0x10f57a50 */
  push32(0x10f57542u); f_10f57a50();
  /* 10f57542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57548 mov ecx, dword ptr [eax*8 + 0x10f7eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10f7eab4)));
  /* 10f5754f push ecx */
  push32((uint32_t)(ECX));
  /* 10f57550 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f57556 push edx */
  push32((uint32_t)(EDX));
  /* 10f57557 call 0x10f57a50 */
  push32(0x10f5755cu); f_10f57a50();
  /* 10f5755c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5755f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10f57564 push 0x10f7bf38 */
  push32((uint32_t)(0x10f7bf38u));
  /* 10f57569 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10f5756f push eax */
  push32((uint32_t)(EAX));
  /* 10f57570 call 0x10f581f0 */
  push32(0x10f57575u); f_10f581f0();
  /* 10f57575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f57578:;
  /* 10f57578 pop edi */
  EDI = (pop32());
  /* 10f57579 pop esi */
  ESI = (pop32());
  /* 10f5757a pop ebx */
  EBX = (pop32());
  /* 10f5757b mov esp, ebp */
  ESP = (EBP);
  /* 10f5757d pop ebp */
  EBP = (pop32());
  /* 10f5757e ret  */
  ESPCHK(0x10f573c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10f57580 (80 bytes, 27 insns) */
void f_10f57580(void) {
  FTRACE(0x10f57580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57580 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57581 mov ebp, esp */
  EBP = (ESP);
  /* 10f57583 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f5758b jmp 0x10f57596 */
  goto L_10f57596;
L_10f5758d:;
  /* 10f5758d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f57596:;
  /* 10f57596 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5759a jae 0x10f575af */
  if (!C.cf) goto L_10f575af;
  /* 10f5759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5759f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f575a2 cmp edx, dword ptr [ecx*8 + 0x10f7eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10f7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f575a9 jne 0x10f575ad */
  if (!C.zf) goto L_10f575ad;
  /* 10f575ab jmp 0x10f575af */
  goto L_10f575af;
L_10f575ad:;
  /* 10f575ad jmp 0x10f5758d */
  goto L_10f5758d;
L_10f575af:;
  /* 10f575af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f575b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f575b5 cmp ecx, dword ptr [eax*8 + 0x10f7eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10f7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f575bc jne 0x10f575ca */
  if (!C.zf) goto L_10f575ca;
  /* 10f575be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f575c1 mov eax, dword ptr [edx*8 + 0x10f7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10f7eab4)));
  /* 10f575c8 jmp 0x10f575cc */
  goto L_10f575cc;
L_10f575ca:;
  /* 10f575ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f575cc:;
  /* 10f575cc mov esp, ebp */
  ESP = (EBP);
  /* 10f575ce pop ebp */
  EBP = (pop32());
  /* 10f575cf ret  */
  ESPCHK(0x10f57580u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10f575d0 (66 bytes, 28 insns) */
void f_10f575d0(void) {
  FTRACE(0x10f575d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f575d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f575d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f575d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f575d7 jne 0x10f575f7 */
  if (!C.zf) goto L_10f575f7;
  /* 10f575d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f575dd jge 0x10f575f7 */
  if ((C.sf==C.of)) goto L_10f575f7;
  /* 10f575df push 1 */
  push32((uint32_t)(0x1u));
  /* 10f575e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f575e4 push eax */
  push32((uint32_t)(EAX));
  /* 10f575e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f575e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f575e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f575ec push edx */
  push32((uint32_t)(EDX));
  /* 10f575ed call 0x10f57620 */
  push32(0x10f575f2u); f_10f57620();
  /* 10f575f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f575f5 jmp 0x10f5760d */
  goto L_10f5760d;
L_10f575f7:;
  /* 10f575f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f575f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f575fc push eax */
  push32((uint32_t)(EAX));
  /* 10f575fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57600 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57604 push edx */
  push32((uint32_t)(EDX));
  /* 10f57605 call 0x10f57620 */
  push32(0x10f5760au); f_10f57620();
  /* 10f5760a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5760d:;
  /* 10f5760d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57610 pop ebp */
  EBP = (pop32());
  /* 10f57611 ret  */
  ESPCHK(0x10f575d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10f57620 (194 bytes, 71 insns) */
void f_10f57620(void) {
  FTRACE(0x10f57620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57620 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57621 mov ebp, esp */
  EBP = (ESP);
  /* 10f57623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5762c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57630 je 0x10f57649 */
  if (C.zf) goto L_10f57649;
  /* 10f57632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57635 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10f57638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5763b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5763e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f57641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57644 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f57646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f57649:;
  /* 10f57649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5764c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f5764f:;
  /* 10f5764f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57654 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f57657 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f5765a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5765d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5765f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f57662 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f57665 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57669 jbe 0x10f57681 */
  if ((C.cf||C.zf)) goto L_10f57681;
  /* 10f5766b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5766e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57674 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f57676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57679 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5767c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f5767f jmp 0x10f57695 */
  goto L_10f57695;
L_10f57681:;
  /* 10f57681 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57684 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5768a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f5768c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5768f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57692 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f57695:;
  /* 10f57695 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57699 ja 0x10f5764f */
  if ((!C.cf&&!C.zf)) goto L_10f5764f;
  /* 10f5769b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5769e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f576a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f576a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f576a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f576aa:;
  /* 10f576aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f576ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f576af mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10f576b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f576b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f576b8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f576ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f576bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f576bf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10f576c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f576c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f576c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f576ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f576cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f576d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f576d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f576d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f576d9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f576dc jb 0x10f576aa */
  if (C.cf) goto L_10f576aa;
  /* 10f576de mov esp, ebp */
  ESP = (EBP);
  /* 10f576e0 pop ebp */
  EBP = (pop32());
  /* 10f576e1 ret  */
  ESPCHK(0x10f57620u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10f576f0 (63 bytes, 24 insns) */
void f_10f576f0(void) {
  FTRACE(0x10f576f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f576f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f576f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f576f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f576f4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f576f8 jne 0x10f57709 */
  if (!C.zf) goto L_10f57709;
  /* 10f576fa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f576fe jge 0x10f57709 */
  if ((C.sf==C.of)) goto L_10f57709;
  /* 10f57700 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f57707 jmp 0x10f57710 */
  goto L_10f57710;
L_10f57709:;
  /* 10f57709 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f57710:;
  /* 10f57710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57713 push eax */
  push32((uint32_t)(EAX));
  /* 10f57714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57717 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5771b push edx */
  push32((uint32_t)(EDX));
  /* 10f5771c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5771f push eax */
  push32((uint32_t)(EAX));
  /* 10f57720 call 0x10f57620 */
  push32(0x10f57725u); f_10f57620();
  /* 10f57725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5772b mov esp, ebp */
  ESP = (EBP);
  /* 10f5772d pop ebp */
  EBP = (pop32());
  /* 10f5772e ret  */
  ESPCHK(0x10f576f0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10f57730 (30 bytes, 14 insns) */
void f_10f57730(void) {
  FTRACE(0x10f57730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57730 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57731 mov ebp, esp */
  EBP = (ESP);
  /* 10f57733 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57735 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57738 push eax */
  push32((uint32_t)(EAX));
  /* 10f57739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5773c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5773d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57740 push edx */
  push32((uint32_t)(EDX));
  /* 10f57741 call 0x10f57620 */
  push32(0x10f57746u); f_10f57620();
  /* 10f57746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5774c pop ebp */
  EBP = (pop32());
  /* 10f5774d ret  */
  ESPCHK(0x10f57730u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10f57750 (72 bytes, 28 insns) */
void f_10f57750(void) {
  FTRACE(0x10f57750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57750 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57751 mov ebp, esp */
  EBP = (ESP);
  /* 10f57753 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57754 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57758 jne 0x10f57771 */
  if (!C.zf) goto L_10f57771;
  /* 10f5775a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5775e jg 0x10f57771 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f57771;
  /* 10f57760 jl 0x10f57768 */
  if ((C.sf!=C.of)) goto L_10f57768;
  /* 10f57762 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57766 jae 0x10f57771 */
  if (!C.cf) goto L_10f57771;
L_10f57768:;
  /* 10f57768 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f5776f jmp 0x10f57778 */
  goto L_10f57778;
L_10f57771:;
  /* 10f57771 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f57778:;
  /* 10f57778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5777b push eax */
  push32((uint32_t)(EAX));
  /* 10f5777c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f5777f push ecx */
  push32((uint32_t)(ECX));
  /* 10f57780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57783 push edx */
  push32((uint32_t)(EDX));
  /* 10f57784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57787 push eax */
  push32((uint32_t)(EAX));
  /* 10f57788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5778b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5778c call 0x10f577a0 */
  push32(0x10f57791u); f_10f577a0();
  /* 10f57791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57794 mov esp, ebp */
  ESP = (EBP);
  /* 10f57796 pop ebp */
  EBP = (pop32());
  /* 10f57797 ret  */
  ESPCHK(0x10f57750u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10f577a0 (242 bytes, 91 insns) */
void f_10f577a0(void) {
  FTRACE(0x10f577a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f577a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f577a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f577a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f577a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f577a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f577ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f577b0 je 0x10f577d4 */
  if (C.zf) goto L_10f577d4;
  /* 10f577b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f577b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10f577b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f577bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f577be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f577c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f577c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f577c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f577c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f577cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f577ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f577d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f577d4:;
  /* 10f577d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f577d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f577da:;
  /* 10f577da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f577dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f577df push ecx */
  push32((uint32_t)(ECX));
  /* 10f577e0 push eax */
  push32((uint32_t)(EAX));
  /* 10f577e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f577e4 push edx */
  push32((uint32_t)(EDX));
  /* 10f577e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f577e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f577e9 call 0x10f5b720 */
  push32(0x10f577eeu); f_10f5b720();
  /* 10f577ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f577f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f577f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f577f6 push edx */
  push32((uint32_t)(EDX));
  /* 10f577f7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f577f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f577fb push eax */
  push32((uint32_t)(EAX));
  /* 10f577fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f577ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f57800 call 0x10f5b6b0 */
  push32(0x10f57805u); f_10f5b6b0();
  /* 10f57805 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f57808 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10f5780b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5780f jbe 0x10f57827 */
  if ((C.cf||C.zf)) goto L_10f57827;
  /* 10f57811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57814 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5781a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f5781c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5781f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f57825 jmp 0x10f5783b */
  goto L_10f5783b;
L_10f57827:;
  /* 10f57827 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f5782a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5782d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57830 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f57832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f5783b:;
  /* 10f5783b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5783f ja 0x10f577da */
  if ((!C.cf&&!C.zf)) goto L_10f577da;
  /* 10f57841 jb 0x10f57849 */
  if (C.cf) goto L_10f57849;
  /* 10f57843 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57847 ja 0x10f577da */
  if ((!C.cf&&!C.zf)) goto L_10f577da;
L_10f57849:;
  /* 10f57849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5784c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f5784f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57852 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f57858:;
  /* 10f57858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5785b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f5785d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10f57860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57863 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f57868 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f5786a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5786d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10f57870 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f57872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57875 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57878 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f5787b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5787e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57881 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f57884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57887 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5788a jb 0x10f57858 */
  if (C.cf) goto L_10f57858;
  /* 10f5788c mov esp, ebp */
  ESP = (EBP);
  /* 10f5788e pop ebp */
  EBP = (pop32());
  /* 10f5788f ret 0x14 */
  ESPCHK(0x10f577a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10f578a0 (31 bytes, 15 insns) */
void f_10f578a0(void) {
  FTRACE(0x10f578a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f578a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f578a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f578a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f578a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f578a8 push eax */
  push32((uint32_t)(EAX));
  /* 10f578a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f578ac push ecx */
  push32((uint32_t)(ECX));
  /* 10f578ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f578b0 push edx */
  push32((uint32_t)(EDX));
  /* 10f578b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f578b4 push eax */
  push32((uint32_t)(EAX));
  /* 10f578b5 call 0x10f577a0 */
  push32(0x10f578bau); f_10f577a0();
  /* 10f578ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f578bd pop ebp */
  EBP = (pop32());
  /* 10f578be ret  */
  ESPCHK(0x10f578a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10f578c0 (123 bytes, 44 insns) */
void f_10f578c0(void) {
  FTRACE(0x10f578c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f578c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f578c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f578ca je 0x10f578e0 */
  if (C.zf) goto L_10f578e0;
L_10f578cc:;
  /* 10f578cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f578ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f578cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f578d1 je 0x10f57913 */
  if (C.zf) goto L_10f57913;
  /* 10f578d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f578d9 jne 0x10f578cc */
  if (!C.zf) goto L_10f578cc;
  /* 10f578db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f578e0:;
  /* 10f578e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f578e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f578e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f578e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f578ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f578ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f578f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f578f6 je 0x10f578e0 */
  if (C.zf) goto L_10f578e0;
  /* 10f578f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f578fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f578fd je 0x10f57931 */
  if (C.zf) goto L_10f57931;
  /* 10f578ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f57901 je 0x10f57927 */
  if (C.zf) goto L_10f57927;
  /* 10f57903 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f57908 je 0x10f5791d */
  if (C.zf) goto L_10f5791d;
  /* 10f5790a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f5790f je 0x10f57913 */
  if (C.zf) goto L_10f57913;
  /* 10f57911 jmp 0x10f578e0 */
  goto L_10f578e0;
L_10f57913:;
  /* 10f57913 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10f57916 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f5791a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5791c ret  */
  ESPCHK(0x10f578c0u, _esp0);
  ESP += 4; return;
L_10f5791d:;
  /* 10f5791d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10f57920 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f57924 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57926 ret  */
  ESPCHK(0x10f578c0u, _esp0);
  ESP += 4; return;
L_10f57927:;
  /* 10f57927 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10f5792a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f5792e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57930 ret  */
  ESPCHK(0x10f578c0u, _esp0);
  ESP += 4; return;
L_10f57931:;
  /* 10f57931 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10f57934 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f57938 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f5793a ret  */
  ESPCHK(0x10f578c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x10f57940 (249 bytes, 93 insns) */
void f_10f57940(void) {
  FTRACE(0x10f57940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57940 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57941 mov ebp, esp */
  EBP = (ESP);
  /* 10f57943 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57946 push ebx */
  push32((uint32_t)(EBX));
  /* 10f57947 push esi */
  push32((uint32_t)(ESI));
  /* 10f57948 push edi */
  push32((uint32_t)(EDI));
  /* 10f57949 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f5794c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f5794f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10f57952 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10f57955:;
  /* 10f57955 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57959 jne 0x10f57979 */
  if (!C.zf) goto L_10f57979;
  /* 10f5795b push 0x10f7bf98 */
  push32((uint32_t)(0x10f7bf98u));
  /* 10f57960 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57962 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10f57964 push 0x10f7bf8c */
  push32((uint32_t)(0x10f7bf8cu));
  /* 10f57969 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f5796b call 0x10f53b50 */
  push32(0x10f57970u); f_10f53b50();
  /* 10f57970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57973 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57976 jne 0x10f57979 */
  if (!C.zf) goto L_10f57979;
  /* 10f57978 int3  */
  x86_unimpl("int3 @ 0x10f57978");
L_10f57979:;
  /* 10f57979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5797b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5797d jne 0x10f57955 */
  if (!C.zf) goto L_10f57955;
L_10f5797f:;
  /* 10f5797f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57983 jne 0x10f579a3 */
  if (!C.zf) goto L_10f579a3;
  /* 10f57985 push 0x10f7bf7c */
  push32((uint32_t)(0x10f7bf7cu));
  /* 10f5798a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5798c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10f5798e push 0x10f7bf8c */
  push32((uint32_t)(0x10f7bf8cu));
  /* 10f57993 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f57995 call 0x10f53b50 */
  push32(0x10f5799au); f_10f53b50();
  /* 10f5799a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5799d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f579a0 jne 0x10f579a3 */
  if (!C.zf) goto L_10f579a3;
  /* 10f579a2 int3  */
  x86_unimpl("int3 @ 0x10f579a2");
L_10f579a3:;
  /* 10f579a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f579a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f579a7 jne 0x10f5797f */
  if (!C.zf) goto L_10f5797f;
  /* 10f579a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10f579b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f579b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f579bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f579c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f579c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f579ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f579cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f579d0 push edx */
  push32((uint32_t)(EDX));
  /* 10f579d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f579d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f579d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f579d9 call 0x10f5ba20 */
  push32(0x10f579deu); f_10f5ba20();
  /* 10f579de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f579e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f579e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f579ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f579ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f579f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f579fa jl 0x10f57a1e */
  if ((C.sf!=C.of)) goto L_10f57a1e;
  /* 10f579fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f579ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f57a01 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f57a04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57a06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f57a0c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f57a0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57a12 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f57a14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57a17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57a1a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f57a1c jmp 0x10f57a2f */
  goto L_10f57a2f;
L_10f57a1e:;
  /* 10f57a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57a21 push eax */
  push32((uint32_t)(EAX));
  /* 10f57a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57a24 call 0x10f5b7a0 */
  push32(0x10f57a29u); f_10f5b7a0();
  /* 10f57a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57a2c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10f57a2f:;
  /* 10f57a2f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f57a32 pop edi */
  EDI = (pop32());
  /* 10f57a33 pop esi */
  ESI = (pop32());
  /* 10f57a34 pop ebx */
  EBX = (pop32());
  /* 10f57a35 mov esp, ebp */
  ESP = (EBP);
  /* 10f57a37 pop ebp */
  EBP = (pop32());
  /* 10f57a38 ret  */
  ESPCHK(0x10f57940u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a40 @ 0x10f57a40 (7 bytes, 3 insns) */
void f_10f57a40(void) {
  FTRACE(0x10f57a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57a40 push edi */
  push32((uint32_t)(EDI));
  /* 10f57a41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f57a45 jmp 0x10f57ab1 */
  jmp_ind(0x10f57ab1u); return;
}

/* FUN_10007a50 @ 0x10f57a50 (224 bytes, 84 insns) */
void f_10f57a50(void) {
  FTRACE(0x10f57a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57a50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f57a54 push edi */
  push32((uint32_t)(EDI));
  /* 10f57a55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f57a5b je 0x10f57a6c */
  if (C.zf) goto L_10f57a6c;
L_10f57a5d:;
  /* 10f57a5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f57a5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f57a60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f57a62 je 0x10f57a9f */
  if (C.zf) goto L_10f57a9f;
  /* 10f57a64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f57a6a jne 0x10f57a5d */
  if (!C.zf) goto L_10f57a5d;
L_10f57a6c:;
  /* 10f57a6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f57a6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f57a73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57a75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f57a78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f57a7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57a7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f57a82 je 0x10f57a6c */
  if (C.zf) goto L_10f57a6c;
  /* 10f57a84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f57a87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f57a89 je 0x10f57aae */
  if (C.zf) goto L_10f57aae;
  /* 10f57a8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f57a8d je 0x10f57aa9 */
  if (C.zf) goto L_10f57aa9;
  /* 10f57a8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f57a94 je 0x10f57aa4 */
  if (C.zf) goto L_10f57aa4;
  /* 10f57a96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f57a9b je 0x10f57a9f */
  if (C.zf) goto L_10f57a9f;
  /* 10f57a9d jmp 0x10f57a6c */
  goto L_10f57a6c;
L_10f57a9f:;
  /* 10f57a9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10f57aa2 jmp 0x10f57ab1 */
  goto L_10f57ab1;
L_10f57aa4:;
  /* 10f57aa4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10f57aa7 jmp 0x10f57ab1 */
  goto L_10f57ab1;
L_10f57aa9:;
  /* 10f57aa9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10f57aac jmp 0x10f57ab1 */
  goto L_10f57ab1;
L_10f57aae:;
  /* 10f57aae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10f57ab1:;
  /* 10f57ab1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f57ab5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f57abb je 0x10f57ad6 */
  if (C.zf) goto L_10f57ad6;
L_10f57abd:;
  /* 10f57abd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f57abf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f57ac0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f57ac2 je 0x10f57b28 */
  if (C.zf) goto L_10f57b28;
  /* 10f57ac4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f57ac6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f57ac7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f57acd jne 0x10f57abd */
  if (!C.zf) goto L_10f57abd;
  /* 10f57acf jmp 0x10f57ad6 */
  goto L_10f57ad6;
L_10f57ad1:;
  /* 10f57ad1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f57ad3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f57ad6:;
  /* 10f57ad6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f57adb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f57add add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57adf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f57ae2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f57ae4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57ae6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57ae9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f57aee je 0x10f57ad1 */
  if (C.zf) goto L_10f57ad1;
  /* 10f57af0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f57af2 je 0x10f57b28 */
  if (C.zf) goto L_10f57b28;
  /* 10f57af4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f57af6 je 0x10f57b1f */
  if (C.zf) goto L_10f57b1f;
  /* 10f57af8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f57afe je 0x10f57b12 */
  if (C.zf) goto L_10f57b12;
  /* 10f57b00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f57b06 je 0x10f57b0a */
  if (C.zf) goto L_10f57b0a;
  /* 10f57b08 jmp 0x10f57ad1 */
  goto L_10f57ad1;
L_10f57b0a:;
  /* 10f57b0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f57b0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f57b10 pop edi */
  EDI = (pop32());
  /* 10f57b11 ret  */
  ESPCHK(0x10f57a50u, _esp0);
  ESP += 4; return;
L_10f57b12:;
  /* 10f57b12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f57b15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f57b19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10f57b1d pop edi */
  EDI = (pop32());
  /* 10f57b1e ret  */
  ESPCHK(0x10f57a50u, _esp0);
  ESP += 4; return;
L_10f57b1f:;
  /* 10f57b1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f57b22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f57b26 pop edi */
  EDI = (pop32());
  /* 10f57b27 ret  */
  ESPCHK(0x10f57a50u, _esp0);
  ESP += 4; return;
L_10f57b28:;
  /* 10f57b28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f57b2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f57b2e pop edi */
  EDI = (pop32());
  /* 10f57b2f ret  */
  ESPCHK(0x10f57a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x10f57b30 (243 bytes, 91 insns) */
void f_10f57b30(void) {
  FTRACE(0x10f57b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57b31 mov ebp, esp */
  EBP = (ESP);
  /* 10f57b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10f57b37 push esi */
  push32((uint32_t)(ESI));
  /* 10f57b38 push edi */
  push32((uint32_t)(EDI));
  /* 10f57b39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f57b3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f57b3f:;
  /* 10f57b3f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57b43 jne 0x10f57b63 */
  if (!C.zf) goto L_10f57b63;
  /* 10f57b45 push 0x10f7bf98 */
  push32((uint32_t)(0x10f7bf98u));
  /* 10f57b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57b4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10f57b4e push 0x10f7bfa8 */
  push32((uint32_t)(0x10f7bfa8u));
  /* 10f57b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f57b55 call 0x10f53b50 */
  push32(0x10f57b5au); f_10f53b50();
  /* 10f57b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57b5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57b60 jne 0x10f57b63 */
  if (!C.zf) goto L_10f57b63;
  /* 10f57b62 int3  */
  x86_unimpl("int3 @ 0x10f57b62");
L_10f57b63:;
  /* 10f57b63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f57b65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f57b67 jne 0x10f57b3f */
  if (!C.zf) goto L_10f57b3f;
L_10f57b69:;
  /* 10f57b69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57b6d jne 0x10f57b8d */
  if (!C.zf) goto L_10f57b8d;
  /* 10f57b6f push 0x10f7bf7c */
  push32((uint32_t)(0x10f7bf7cu));
  /* 10f57b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57b76 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10f57b78 push 0x10f7bfa8 */
  push32((uint32_t)(0x10f7bfa8u));
  /* 10f57b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f57b7f call 0x10f53b50 */
  push32(0x10f57b84u); f_10f53b50();
  /* 10f57b84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57b87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57b8a jne 0x10f57b8d */
  if (!C.zf) goto L_10f57b8d;
  /* 10f57b8c int3  */
  x86_unimpl("int3 @ 0x10f57b8c");
L_10f57b8d:;
  /* 10f57b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57b8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f57b91 jne 0x10f57b69 */
  if (!C.zf) goto L_10f57b69;
  /* 10f57b93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57b96 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10f57b9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57ba3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f57ba6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57ba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57bac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f57bae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57bb4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f57bb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f57bba push ecx */
  push32((uint32_t)(ECX));
  /* 10f57bbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f57bbe push edx */
  push32((uint32_t)(EDX));
  /* 10f57bbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57bc2 push eax */
  push32((uint32_t)(EAX));
  /* 10f57bc3 call 0x10f5ba20 */
  push32(0x10f57bc8u); f_10f5ba20();
  /* 10f57bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57bcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f57bce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57bd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f57bd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57bd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57bda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f57bdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57be0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57be4 jl 0x10f57c08 */
  if ((C.sf!=C.of)) goto L_10f57c08;
  /* 10f57be6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57be9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f57beb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f57bee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f57bf0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f57bf6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f57bf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57bfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f57bfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57c01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57c04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f57c06 jmp 0x10f57c19 */
  goto L_10f57c19;
L_10f57c08:;
  /* 10f57c08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f57c0b push edx */
  push32((uint32_t)(EDX));
  /* 10f57c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f57c0e call 0x10f5b7a0 */
  push32(0x10f57c13u); f_10f5b7a0();
  /* 10f57c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57c16 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10f57c19:;
  /* 10f57c19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f57c1c pop edi */
  EDI = (pop32());
  /* 10f57c1d pop esi */
  ESI = (pop32());
  /* 10f57c1e pop ebx */
  EBX = (pop32());
  /* 10f57c1f mov esp, ebp */
  ESP = (EBP);
  /* 10f57c21 pop ebp */
  EBP = (pop32());
  /* 10f57c22 ret  */
  ESPCHK(0x10f57b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c30 @ 0x10f57c30 (47 bytes, 17 insns) */
void f_10f57c30(void) {
  FTRACE(0x10f57c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57c30 push ecx */
  push32((uint32_t)(ECX));
  /* 10f57c31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10f57c3a jb 0x10f57c50 */
  if (C.cf) goto L_10f57c50;
L_10f57c3c:;
  /* 10f57c3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57c42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57c47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f57c49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c4e jae 0x10f57c3c */
  if (!C.cf) goto L_10f57c3c;
L_10f57c50:;
  /* 10f57c50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57c52 mov eax, esp */
  EAX = (ESP);
  /* 10f57c54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f57c56 mov esp, ecx */
  ESP = (ECX);
  /* 10f57c58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f57c5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f57c5d push eax */
  push32((uint32_t)(EAX));
  /* 10f57c5e ret  */
  ESPCHK(0x10f57c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c60 @ 0x10f57c60 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10f57c60(void) {
  FTRACE(0x10f57c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57c61 mov ebp, esp */
  EBP = (ESP);
  /* 10f57c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57c66 push esi */
  push32((uint32_t)(ESI));
  /* 10f57c67 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c6b je 0x10f57c73 */
  if (C.zf) goto L_10f57c73;
  /* 10f57c6d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c71 jne 0x10f57c78 */
  if (!C.zf) goto L_10f57c78;
L_10f57c73:;
  /* 10f57c73 jmp 0x10f57e48 */
  goto L_10f57e48;
L_10f57c78:;
  /* 10f57c78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c7c je 0x10f57c94 */
  if (C.zf) goto L_10f57c94;
  /* 10f57c7e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c82 je 0x10f57c94 */
  if (C.zf) goto L_10f57c94;
  /* 10f57c84 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c88 je 0x10f57c94 */
  if (C.zf) goto L_10f57c94;
  /* 10f57c8a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57c8e jne 0x10f57d71 */
  if (!C.zf) goto L_10f57d71;
L_10f57c94:;
  /* 10f57c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57c96 call 0x10f58490 */
  push32(0x10f57c9bu); f_10f58490();
  /* 10f57c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57c9e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57ca2 je 0x10f57caa */
  if (C.zf) goto L_10f57caa;
  /* 10f57ca4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57ca8 jne 0x10f57cef */
  if (!C.zf) goto L_10f57cef;
L_10f57caa:;
  /* 10f57caa cmp dword ptr [0x10f80738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57cb1 jne 0x10f57cef */
  if (!C.zf) goto L_10f57cef;
  /* 10f57cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57cb5 push 0x10f57e90 */
  push32((uint32_t)(0x10f57e90u));
  /* 10f57cba call dword ptr [0x10f8332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8332c))), 0x10f57cc0u);
  /* 10f57cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57cc3 jne 0x10f57cd1 */
  if (!C.zf) goto L_10f57cd1;
  /* 10f57cc5 mov dword ptr [0x10f80738], 1 */
  w32((uint32_t)(0x10f80738), (0x1u));
  /* 10f57ccf jmp 0x10f57cef */
  goto L_10f57cef;
L_10f57cd1:;
  /* 10f57cd1 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f57cd7u);
  /* 10f57cd7 mov esi, eax */
  ESI = (EAX);
  /* 10f57cd9 call 0x10f5c970 */
  push32(0x10f57cdeu); f_10f5c970();
  /* 10f57cde mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10f57ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57ce2 call 0x10f58530 */
  push32(0x10f57ce7u); f_10f58530();
  /* 10f57ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57cea jmp 0x10f57e48 */
  goto L_10f57e48;
L_10f57cef:;
  /* 10f57cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57cf2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f57cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f57cf8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57cfb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f57cfe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57d02 ja 0x10f57d62 */
  if ((!C.cf&&!C.zf)) goto L_10f57d62;
  /* 10f57d04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f57d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57d09 mov dl, byte ptr [eax + 0x10f57e6f] */
  DL = (r8((uint32_t)(EAX + 0x10f57e6f)));
  /* 10f57d0f jmp dword ptr [edx*4 + 0x10f57e5b] */
  switch (EDX) {
    case 0: goto L_10f57d16;
    case 1: goto L_10f57d50;
    case 2: goto L_10f57d2a;
    case 3: goto L_10f57d3d;
    case 4: goto L_10f57d62;
    default: x86_unimpl("switch@0x10f57d0f out of table"); return;
  }
L_10f57d16:;
  /* 10f57d16 mov ecx, dword ptr [0x10f80728] */
  ECX = (r32((uint32_t)(0x10f80728)));
  /* 10f57d1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f57d1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57d22 mov dword ptr [0x10f80728], edx */
  w32((uint32_t)(0x10f80728), (EDX));
  /* 10f57d28 jmp 0x10f57d62 */
  goto L_10f57d62;
L_10f57d2a:;
  /* 10f57d2a mov eax, dword ptr [0x10f8072c] */
  EAX = (r32((uint32_t)(0x10f8072c)));
  /* 10f57d2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57d32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57d35 mov dword ptr [0x10f8072c], ecx */
  w32((uint32_t)(0x10f8072c), (ECX));
  /* 10f57d3b jmp 0x10f57d62 */
  goto L_10f57d62;
L_10f57d3d:;
  /* 10f57d3d mov edx, dword ptr [0x10f80730] */
  EDX = (r32((uint32_t)(0x10f80730)));
  /* 10f57d43 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f57d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57d49 mov dword ptr [0x10f80730], eax */
  w32((uint32_t)(0x10f80730), (EAX));
  /* 10f57d4e jmp 0x10f57d62 */
  goto L_10f57d62;
L_10f57d50:;
  /* 10f57d50 mov ecx, dword ptr [0x10f80734] */
  ECX = (r32((uint32_t)(0x10f80734)));
  /* 10f57d56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f57d59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57d5c mov dword ptr [0x10f80734], edx */
  w32((uint32_t)(0x10f80734), (EDX));
L_10f57d62:;
  /* 10f57d62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57d64 call 0x10f58530 */
  push32(0x10f57d69u); f_10f58530();
  /* 10f57d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57d6c jmp 0x10f57e43 */
  goto L_10f57e43;
L_10f57d71:;
  /* 10f57d71 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57d75 je 0x10f57d88 */
  if (C.zf) goto L_10f57d88;
  /* 10f57d77 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57d7b je 0x10f57d88 */
  if (C.zf) goto L_10f57d88;
  /* 10f57d7d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57d81 je 0x10f57d88 */
  if (C.zf) goto L_10f57d88;
  /* 10f57d83 jmp 0x10f57e48 */
  goto L_10f57e48;
L_10f57d88:;
  /* 10f57d88 call 0x10f544d0 */
  push32(0x10f57d8du); f_10f544d0();
  /* 10f57d8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f57d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57d93 cmp dword ptr [eax + 0x50], 0x10f7ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10f7ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57d9a jne 0x10f57de5 */
  if (!C.zf) goto L_10f57de5;
  /* 10f57d9c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10f57da1 push 0x10f7bfb4 */
  push32((uint32_t)(0x10f7bfb4u));
  /* 10f57da6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f57da8 mov ecx, dword ptr [0x10f7ec80] */
  ECX = (r32((uint32_t)(0x10f7ec80)));
  /* 10f57dae push ecx */
  push32((uint32_t)(ECX));
  /* 10f57daf call 0x10f54a90 */
  push32(0x10f57db4u); f_10f54a90();
  /* 10f57db4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57dba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10f57dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57dc0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57dc4 je 0x10f57de3 */
  if (C.zf) goto L_10f57de3;
  /* 10f57dc6 mov ecx, dword ptr [0x10f7ec80] */
  ECX = (r32((uint32_t)(0x10f7ec80)));
  /* 10f57dcc push ecx */
  push32((uint32_t)(ECX));
  /* 10f57dcd push 0x10f7ec00 */
  push32((uint32_t)(0x10f7ec00u));
  /* 10f57dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57dd5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10f57dd8 push eax */
  push32((uint32_t)(EAX));
  /* 10f57dd9 call 0x10f5b370 */
  push32(0x10f57ddeu); f_10f5b370();
  /* 10f57dde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57de1 jmp 0x10f57de5 */
  goto L_10f57de5;
L_10f57de3:;
  /* 10f57de3 jmp 0x10f57e48 */
  goto L_10f57e48;
L_10f57de5:;
  /* 10f57de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57de8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f57deb push edx */
  push32((uint32_t)(EDX));
  /* 10f57dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57def push eax */
  push32((uint32_t)(EAX));
  /* 10f57df0 call 0x10f58170 */
  push32(0x10f57df5u); f_10f58170();
  /* 10f57df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57df8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f57dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57dff jne 0x10f57e03 */
  if (!C.zf) goto L_10f57e03;
  /* 10f57e01 jmp 0x10f57e48 */
  goto L_10f57e48;
L_10f57e03:;
  /* 10f57e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57e06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f57e09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f57e0c:;
  /* 10f57e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57e0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f57e12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57e15 jne 0x10f57e43 */
  if (!C.zf) goto L_10f57e43;
  /* 10f57e17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57e1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f57e1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f57e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57e23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57e26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f57e29 mov edx, dword ptr [0x10f7ec84] */
  EDX = (r32((uint32_t)(0x10f7ec84)));
  /* 10f57e2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f57e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57e35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10f57e38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57e3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57e3d jb 0x10f57e41 */
  if (C.cf) goto L_10f57e41;
  /* 10f57e3f jmp 0x10f57e43 */
  goto L_10f57e43;
L_10f57e41:;
  /* 10f57e41 jmp 0x10f57e0c */
  goto L_10f57e0c;
L_10f57e43:;
  /* 10f57e43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57e46 jmp 0x10f57e56 */
  goto L_10f57e56;
L_10f57e48:;
  /* 10f57e48 call 0x10f5c960 */
  push32(0x10f57e4du); f_10f5c960();
  /* 10f57e4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10f57e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f57e56:;
  /* 10f57e56 pop esi */
  ESI = (pop32());
  /* 10f57e57 mov esp, ebp */
  ESP = (EBP);
  /* 10f57e59 pop ebp */
  EBP = (pop32());
  /* 10f57e5a ret  */
  ESPCHK(0x10f57c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e90 @ 0x10f57e90 (146 bytes, 45 insns) */
void f_10f57e90(void) {
  FTRACE(0x10f57e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57e90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57e91 mov ebp, esp */
  EBP = (ESP);
  /* 10f57e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57e98 call 0x10f58490 */
  push32(0x10f57e9du); f_10f58490();
  /* 10f57e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57ea4 jne 0x10f57ebe */
  if (!C.zf) goto L_10f57ebe;
  /* 10f57ea6 mov dword ptr [ebp - 8], 0x10f80728 */
  w32((uint32_t)(EBP + -0x8), (0x10f80728u));
  /* 10f57ead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57eb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f57eb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f57eb5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10f57ebc jmp 0x10f57ed4 */
  goto L_10f57ed4;
L_10f57ebe:;
  /* 10f57ebe mov dword ptr [ebp - 8], 0x10f8072c */
  w32((uint32_t)(EBP + -0x8), (0x10f8072cu));
  /* 10f57ec5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57ec8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f57eca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57ecd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10f57ed4:;
  /* 10f57ed4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57ed8 jne 0x10f57ee8 */
  if (!C.zf) goto L_10f57ee8;
  /* 10f57eda push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57edc call 0x10f58530 */
  push32(0x10f57ee1u); f_10f58530();
  /* 10f57ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f57ee6 jmp 0x10f57f1c */
  goto L_10f57f1c;
L_10f57ee8:;
  /* 10f57ee8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57eec je 0x10f57f0d */
  if (C.zf) goto L_10f57f0d;
  /* 10f57eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f57ef1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10f57ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57ef9 call 0x10f58530 */
  push32(0x10f57efeu); f_10f58530();
  /* 10f57efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57f04 push edx */
  push32((uint32_t)(EDX));
  /* 10f57f05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10f57f08u);
  /* 10f57f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57f0b jmp 0x10f57f17 */
  goto L_10f57f17;
L_10f57f0d:;
  /* 10f57f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f57f0f call 0x10f58530 */
  push32(0x10f57f14u); f_10f58530();
  /* 10f57f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f57f17:;
  /* 10f57f17 mov eax, 1 */
  EAX = (0x1u);
L_10f57f1c:;
  /* 10f57f1c mov esp, ebp */
  ESP = (EBP);
  /* 10f57f1e pop ebp */
  EBP = (pop32());
  /* 10f57f1f ret 4 */
  ESPCHK(0x10f57e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10007f30 @ 0x10f57f30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10f57f30(void) {
  FTRACE(0x10f57f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f57f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f57f31 mov ebp, esp */
  EBP = (ESP);
  /* 10f57f33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57f36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f57f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57f40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f57f43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f57f46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f57f49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f57f4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f57f50 ja 0x10f57ffe */
  if ((!C.cf&&!C.zf)) goto L_10f57ffe;
  /* 10f57f56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f57f59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f57f5b mov dl, byte ptr [eax + 0x10f58152] */
  DL = (r8((uint32_t)(EAX + 0x10f58152)));
  /* 10f57f61 jmp dword ptr [edx*4 + 0x10f5813a] */
  switch (EDX) {
    case 0: goto L_10f57f68;
    case 1: goto L_10f57fd3;
    case 2: goto L_10f57fb9;
    case 3: goto L_10f57f85;
    case 4: goto L_10f57f9f;
    case 5: goto L_10f57ffe;
    default: x86_unimpl("switch@0x10f57f61 out of table"); return;
  }
L_10f57f68:;
  /* 10f57f68 mov dword ptr [ebp - 0x18], 0x10f80728 */
  w32((uint32_t)(EBP + -0x18), (0x10f80728u));
  /* 10f57f6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57f72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57f74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f57f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57f80 jmp 0x10f58006 */
  goto L_10f58006;
L_10f57f85:;
  /* 10f57f85 mov dword ptr [ebp - 0x18], 0x10f8072c */
  w32((uint32_t)(EBP + -0x18), (0x10f8072cu));
  /* 10f57f8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57f8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57f91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f57f94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57f9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57f9d jmp 0x10f58006 */
  goto L_10f58006;
L_10f57f9f:;
  /* 10f57f9f mov dword ptr [ebp - 0x18], 0x10f80730 */
  w32((uint32_t)(EBP + -0x18), (0x10f80730u));
  /* 10f57fa6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57fa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57fab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f57fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57fb7 jmp 0x10f58006 */
  goto L_10f58006;
L_10f57fb9:;
  /* 10f57fb9 mov dword ptr [ebp - 0x18], 0x10f80734 */
  w32((uint32_t)(EBP + -0x18), (0x10f80734u));
  /* 10f57fc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57fc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57fc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f57fc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f57fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57fce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f57fd1 jmp 0x10f58006 */
  goto L_10f58006;
L_10f57fd3:;
  /* 10f57fd3 call 0x10f544d0 */
  push32(0x10f57fd8u); f_10f544d0();
  /* 10f57fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f57fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f57fde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f57fe1 push edx */
  push32((uint32_t)(EDX));
  /* 10f57fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f57fe5 push eax */
  push32((uint32_t)(EAX));
  /* 10f57fe6 call 0x10f58170 */
  push32(0x10f57febu); f_10f58170();
  /* 10f57feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57fee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f57ff1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f57ff4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f57ff7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f57ff9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f57ffc jmp 0x10f58006 */
  goto L_10f58006;
L_10f57ffe:;
  /* 10f57ffe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f58001 jmp 0x10f58136 */
  goto L_10f58136;
L_10f58006:;
  /* 10f58006 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5800a je 0x10f58016 */
  if (C.zf) goto L_10f58016;
  /* 10f5800c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f5800e call 0x10f58490 */
  push32(0x10f58013u); f_10f58490();
  /* 10f58013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58016:;
  /* 10f58016 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5801a jne 0x10f58033 */
  if (!C.zf) goto L_10f58033;
  /* 10f5801c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58020 je 0x10f5802c */
  if (C.zf) goto L_10f5802c;
  /* 10f58022 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f58024 call 0x10f58530 */
  push32(0x10f58029u); f_10f58530();
  /* 10f58029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5802c:;
  /* 10f5802c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5802e jmp 0x10f58136 */
  goto L_10f58136;
L_10f58033:;
  /* 10f58033 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58037 jne 0x10f58050 */
  if (!C.zf) goto L_10f58050;
  /* 10f58039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5803d je 0x10f58049 */
  if (C.zf) goto L_10f58049;
  /* 10f5803f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f58041 call 0x10f58530 */
  push32(0x10f58046u); f_10f58530();
  /* 10f58046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58049:;
  /* 10f58049 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f5804b call 0x10f54250 */
  push32(0x10f58050u); f_10f54250();
L_10f58050:;
  /* 10f58050 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58054 je 0x10f58062 */
  if (C.zf) goto L_10f58062;
  /* 10f58056 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5805a je 0x10f58062 */
  if (C.zf) goto L_10f58062;
  /* 10f5805c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58060 jne 0x10f5808e */
  if (!C.zf) goto L_10f5808e;
L_10f58062:;
  /* 10f58062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58065 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10f58068 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f5806b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5806e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10f58075 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58079 jne 0x10f5808e */
  if (!C.zf) goto L_10f5808e;
  /* 10f5807b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5807e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10f58081 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f58084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58087 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10f5808e:;
  /* 10f5808e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58092 jne 0x10f580d0 */
  if (!C.zf) goto L_10f580d0;
  /* 10f58094 mov eax, dword ptr [0x10f7ec78] */
  EAX = (r32((uint32_t)(0x10f7ec78)));
  /* 10f58099 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f5809c jmp 0x10f580a7 */
  goto L_10f580a7;
L_10f5809e:;
  /* 10f5809e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f580a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f580a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f580a7:;
  /* 10f580a7 mov edx, dword ptr [0x10f7ec78] */
  EDX = (r32((uint32_t)(0x10f7ec78)));
  /* 10f580ad add edx, dword ptr [0x10f7ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f580b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f580b6 jge 0x10f580ce */
  if ((C.sf==C.of)) goto L_10f580ce;
  /* 10f580b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f580bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f580be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f580c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f580c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10f580cc jmp 0x10f5809e */
  goto L_10f5809e;
L_10f580ce:;
  /* 10f580ce jmp 0x10f580d9 */
  goto L_10f580d9;
L_10f580d0:;
  /* 10f580d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f580d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10f580d9:;
  /* 10f580d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f580dd je 0x10f580e9 */
  if (C.zf) goto L_10f580e9;
  /* 10f580df push 1 */
  push32((uint32_t)(0x1u));
  /* 10f580e1 call 0x10f58530 */
  push32(0x10f580e6u); f_10f58530();
  /* 10f580e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f580e9:;
  /* 10f580e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f580ed jne 0x10f58100 */
  if (!C.zf) goto L_10f58100;
  /* 10f580ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f580f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10f580f5 push edx */
  push32((uint32_t)(EDX));
  /* 10f580f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f580f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10f580fbu);
  /* 10f580fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f580fe jmp 0x10f5810a */
  goto L_10f5810a;
L_10f58100:;
  /* 10f58100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58103 push eax */
  push32((uint32_t)(EAX));
  /* 10f58104 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10f58107u);
  /* 10f58107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5810a:;
  /* 10f5810a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5810e je 0x10f5811c */
  if (C.zf) goto L_10f5811c;
  /* 10f58110 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58114 je 0x10f5811c */
  if (C.zf) goto L_10f5811c;
  /* 10f58116 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5811a jne 0x10f58134 */
  if (!C.zf) goto L_10f58134;
L_10f5811c:;
  /* 10f5811c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5811f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f58122 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10f58125 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58129 jne 0x10f58134 */
  if (!C.zf) goto L_10f58134;
  /* 10f5812b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5812e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58131 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10f58134:;
  /* 10f58134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f58136:;
  /* 10f58136 mov esp, ebp */
  ESP = (EBP);
  /* 10f58138 pop ebp */
  EBP = (pop32());
  /* 10f58139 ret  */
  ESPCHK(0x10f57f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x10f58170 (91 bytes, 35 insns) */
void f_10f58170(void) {
  FTRACE(0x10f58170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58170 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58171 mov ebp, esp */
  EBP = (ESP);
  /* 10f58173 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5817a:;
  /* 10f5817a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5817d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f58180 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58183 je 0x10f581a3 */
  if (C.zf) goto L_10f581a3;
  /* 10f58185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58188 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5818b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5818e mov ecx, dword ptr [0x10f7ec84] */
  ECX = (r32((uint32_t)(0x10f7ec84)));
  /* 10f58194 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f58197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5819a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5819c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5819f jae 0x10f581a3 */
  if (!C.cf) goto L_10f581a3;
  /* 10f581a1 jmp 0x10f5817a */
  goto L_10f5817a;
L_10f581a3:;
  /* 10f581a3 mov eax, dword ptr [0x10f7ec84] */
  EAX = (r32((uint32_t)(0x10f7ec84)));
  /* 10f581a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f581ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f581ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f581b0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f581b3 jae 0x10f581c5 */
  if (!C.cf) goto L_10f581c5;
  /* 10f581b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f581b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f581bb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f581be jne 0x10f581c5 */
  if (!C.zf) goto L_10f581c5;
  /* 10f581c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f581c3 jmp 0x10f581c7 */
  goto L_10f581c7;
L_10f581c5:;
  /* 10f581c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f581c7:;
  /* 10f581c7 mov esp, ebp */
  ESP = (EBP);
  /* 10f581c9 pop ebp */
  EBP = (pop32());
  /* 10f581ca ret  */
  ESPCHK(0x10f58170u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x10f581d0 (13 bytes, 6 insns) */
void f_10f581d0(void) {
  FTRACE(0x10f581d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f581d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f581d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f581d3 call 0x10f544d0 */
  push32(0x10f581d8u); f_10f544d0();
  /* 10f581d8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f581db pop ebp */
  EBP = (pop32());
  /* 10f581dc ret  */
  ESPCHK(0x10f581d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x10f581e0 (13 bytes, 6 insns) */
void f_10f581e0(void) {
  FTRACE(0x10f581e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f581e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f581e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f581e3 call 0x10f544d0 */
  push32(0x10f581e8u); f_10f544d0();
  /* 10f581e8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f581eb pop ebp */
  EBP = (pop32());
  /* 10f581ec ret  */
  ESPCHK(0x10f581e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x10f581f0 (187 bytes, 54 insns) */
void f_10f581f0(void) {
  FTRACE(0x10f581f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f581f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f581f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f581f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f581f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f581fd cmp dword ptr [0x10f8073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58204 jne 0x10f58263 */
  if (!C.zf) goto L_10f58263;
  /* 10f58206 push 0x10f7b3e0 */
  push32((uint32_t)(0x10f7b3e0u));
  /* 10f5820b call dword ptr [0x10f83360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83360))), 0x10f58211u);
  /* 10f58211 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f58214 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58218 je 0x10f58237 */
  if (C.zf) goto L_10f58237;
  /* 10f5821a push 0x10f7bfe4 */
  push32((uint32_t)(0x10f7bfe4u));
  /* 10f5821f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58222 push eax */
  push32((uint32_t)(EAX));
  /* 10f58223 call dword ptr [0x10f8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8335c))), 0x10f58229u);
  /* 10f58229 mov dword ptr [0x10f8073c], eax */
  w32((uint32_t)(0x10f8073c), (EAX));
  /* 10f5822e cmp dword ptr [0x10f8073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f8073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58235 jne 0x10f5823b */
  if (!C.zf) goto L_10f5823b;
L_10f58237:;
  /* 10f58237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58239 jmp 0x10f582a7 */
  goto L_10f582a7;
L_10f5823b:;
  /* 10f5823b push 0x10f7bfd4 */
  push32((uint32_t)(0x10f7bfd4u));
  /* 10f58240 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58243 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58244 call dword ptr [0x10f8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8335c))), 0x10f5824au);
  /* 10f5824a mov dword ptr [0x10f80740], eax */
  w32((uint32_t)(0x10f80740), (EAX));
  /* 10f5824f push 0x10f7bfc0 */
  push32((uint32_t)(0x10f7bfc0u));
  /* 10f58254 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58257 push edx */
  push32((uint32_t)(EDX));
  /* 10f58258 call dword ptr [0x10f8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8335c))), 0x10f5825eu);
  /* 10f5825e mov dword ptr [0x10f80744], eax */
  w32((uint32_t)(0x10f80744), (EAX));
L_10f58263:;
  /* 10f58263 cmp dword ptr [0x10f80740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5826a je 0x10f58275 */
  if (C.zf) goto L_10f58275;
  /* 10f5826c call dword ptr [0x10f80740] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f80740))), 0x10f58272u);
  /* 10f58272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f58275:;
  /* 10f58275 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58279 je 0x10f58291 */
  if (C.zf) goto L_10f58291;
  /* 10f5827b cmp dword ptr [0x10f80744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f80744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58282 je 0x10f58291 */
  if (C.zf) goto L_10f58291;
  /* 10f58284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58287 push eax */
  push32((uint32_t)(EAX));
  /* 10f58288 call dword ptr [0x10f80744] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f80744))), 0x10f5828eu);
  /* 10f5828e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f58291:;
  /* 10f58291 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f58294 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58295 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58298 push edx */
  push32((uint32_t)(EDX));
  /* 10f58299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5829c push eax */
  push32((uint32_t)(EAX));
  /* 10f5829d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f582a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f582a1 call dword ptr [0x10f8073c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8073c))), 0x10f582a7u);
L_10f582a7:;
  /* 10f582a7 mov esp, ebp */
  ESP = (EBP);
  /* 10f582a9 pop ebp */
  EBP = (pop32());
  /* 10f582aa ret  */
  ESPCHK(0x10f581f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10f582b0 (254 bytes, 109 insns) */
void f_10f582b0(void) {
  FTRACE(0x10f582b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f582b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f582b4 push edi */
  push32((uint32_t)(EDI));
  /* 10f582b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f582b7 je 0x10f58333 */
  if (C.zf) goto L_10f58333;
  /* 10f582b9 push esi */
  push32((uint32_t)(ESI));
  /* 10f582ba push ebx */
  push32((uint32_t)(EBX));
  /* 10f582bb mov ebx, ecx */
  EBX = (ECX);
  /* 10f582bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10f582c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f582c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f582cb jne 0x10f582d4 */
  if (!C.zf) goto L_10f582d4;
  /* 10f582cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f582d0 jne 0x10f58341 */
  if (!C.zf) goto L_10f58341;
  /* 10f582d2 jmp 0x10f582f5 */
  goto L_10f582f5;
L_10f582d4:;
  /* 10f582d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f582d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f582d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f582d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f582da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f582db je 0x10f58302 */
  if (C.zf) goto L_10f58302;
  /* 10f582dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f582df je 0x10f5830a */
  if (C.zf) goto L_10f5830a;
  /* 10f582e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f582e7 jne 0x10f582d4 */
  if (!C.zf) goto L_10f582d4;
  /* 10f582e9 mov ebx, ecx */
  EBX = (ECX);
  /* 10f582eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f582ee jne 0x10f58341 */
  if (!C.zf) goto L_10f58341;
L_10f582f0:;
  /* 10f582f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f582f3 je 0x10f58302 */
  if (C.zf) goto L_10f58302;
L_10f582f5:;
  /* 10f582f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f582f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f582f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f582fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f582fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f582fd je 0x10f5832e */
  if (C.zf) goto L_10f5832e;
  /* 10f582ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f58300 jne 0x10f582f5 */
  if (!C.zf) goto L_10f582f5;
L_10f58302:;
  /* 10f58302 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f58306 pop ebx */
  EBX = (pop32());
  /* 10f58307 pop esi */
  ESI = (pop32());
  /* 10f58308 pop edi */
  EDI = (pop32());
  /* 10f58309 ret  */
  ESPCHK(0x10f582b0u, _esp0);
  ESP += 4; return;
L_10f5830a:;
  /* 10f5830a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f58310 je 0x10f58324 */
  if (C.zf) goto L_10f58324;
L_10f58312:;
  /* 10f58312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f58314 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f58315 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f58316 je 0x10f583a6 */
  if (C.zf) goto L_10f583a6;
  /* 10f5831c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f58322 jne 0x10f58312 */
  if (!C.zf) goto L_10f58312;
L_10f58324:;
  /* 10f58324 mov ebx, ecx */
  EBX = (ECX);
  /* 10f58326 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f58329 jne 0x10f58397 */
  if (!C.zf) goto L_10f58397;
L_10f5832b:;
  /* 10f5832b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f5832d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10f5832e:;
  /* 10f5832e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f5832f jne 0x10f5832b */
  if (!C.zf) goto L_10f5832b;
  /* 10f58331 pop ebx */
  EBX = (pop32());
  /* 10f58332 pop esi */
  ESI = (pop32());
L_10f58333:;
  /* 10f58333 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f58337 pop edi */
  EDI = (pop32());
  /* 10f58338 ret  */
  ESPCHK(0x10f582b0u, _esp0);
  ESP += 4; return;
L_10f58339:;
  /* 10f58339 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f5833b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5833e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f5833f je 0x10f582f0 */
  if (C.zf) goto L_10f582f0;
L_10f58341:;
  /* 10f58341 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f58346 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f58348 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5834a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f5834d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5834f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10f58351 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58354 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f58359 je 0x10f58339 */
  if (C.zf) goto L_10f58339;
  /* 10f5835b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f5835d je 0x10f5838b */
  if (C.zf) goto L_10f5838b;
  /* 10f5835f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f58361 je 0x10f58381 */
  if (C.zf) goto L_10f58381;
  /* 10f58363 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f58369 je 0x10f58377 */
  if (C.zf) goto L_10f58377;
  /* 10f5836b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f58371 jne 0x10f58339 */
  if (!C.zf) goto L_10f58339;
  /* 10f58373 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f58375 jmp 0x10f5838f */
  goto L_10f5838f;
L_10f58377:;
  /* 10f58377 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f5837d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f5837f jmp 0x10f5838f */
  goto L_10f5838f;
L_10f58381:;
  /* 10f58381 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f58387 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f58389 jmp 0x10f5838f */
  goto L_10f5838f;
L_10f5838b:;
  /* 10f5838b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f5838d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10f5838f:;
  /* 10f5838f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58394 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f58395 je 0x10f583a1 */
  if (C.zf) goto L_10f583a1;
L_10f58397:;
  /* 10f58397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f58399:;
  /* 10f58399 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f5839b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5839e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f5839f jne 0x10f58399 */
  if (!C.zf) goto L_10f58399;
L_10f583a1:;
  /* 10f583a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f583a4 jne 0x10f5832b */
  if (!C.zf) goto L_10f5832b;
L_10f583a6:;
  /* 10f583a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f583aa pop ebx */
  EBX = (pop32());
  /* 10f583ab pop esi */
  ESI = (pop32());
  /* 10f583ac pop edi */
  EDI = (pop32());
  /* 10f583ad ret  */
  ESPCHK(0x10f582b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083b0 @ 0x10f583b0 (55 bytes, 16 insns) */
void f_10f583b0(void) {
  FTRACE(0x10f583b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f583b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f583b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f583b3 mov eax, dword ptr [0x10f7eb84] */
  EAX = (r32((uint32_t)(0x10f7eb84)));
  /* 10f583b8 push eax */
  push32((uint32_t)(EAX));
  /* 10f583b9 call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f583bfu);
  /* 10f583bf mov ecx, dword ptr [0x10f7eb74] */
  ECX = (r32((uint32_t)(0x10f7eb74)));
  /* 10f583c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f583c6 call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f583ccu);
  /* 10f583cc mov edx, dword ptr [0x10f7eb64] */
  EDX = (r32((uint32_t)(0x10f7eb64)));
  /* 10f583d2 push edx */
  push32((uint32_t)(EDX));
  /* 10f583d3 call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f583d9u);
  /* 10f583d9 mov eax, dword ptr [0x10f7eb44] */
  EAX = (r32((uint32_t)(0x10f7eb44)));
  /* 10f583de push eax */
  push32((uint32_t)(EAX));
  /* 10f583df call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f583e5u);
  /* 10f583e5 pop ebp */
  EBP = (pop32());
  /* 10f583e6 ret  */
  ESPCHK(0x10f583b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x10f583f0 (159 bytes, 47 insns) */
void f_10f583f0(void) {
  FTRACE(0x10f583f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f583f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f583f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f583f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f583f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f583fb jmp 0x10f58406 */
  goto L_10f58406;
L_10f583fd:;
  /* 10f583fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58403 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f58406:;
  /* 10f58406 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5840a jge 0x10f58459 */
  if ((C.sf==C.of)) goto L_10f58459;
  /* 10f5840c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5840f cmp dword ptr [ecx*4 + 0x10f7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58417 je 0x10f58457 */
  if (C.zf) goto L_10f58457;
  /* 10f58419 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5841d je 0x10f58457 */
  if (C.zf) goto L_10f58457;
  /* 10f5841f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58423 je 0x10f58457 */
  if (C.zf) goto L_10f58457;
  /* 10f58425 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58429 je 0x10f58457 */
  if (C.zf) goto L_10f58457;
  /* 10f5842b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5842f je 0x10f58457 */
  if (C.zf) goto L_10f58457;
  /* 10f58431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58434 mov eax, dword ptr [edx*4 + 0x10f7eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10f7eb40)));
  /* 10f5843b push eax */
  push32((uint32_t)(EAX));
  /* 10f5843c call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f58442u);
  /* 10f58442 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f58444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58447 mov edx, dword ptr [ecx*4 + 0x10f7eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f7eb40)));
  /* 10f5844e push edx */
  push32((uint32_t)(EDX));
  /* 10f5844f call 0x10f55520 */
  push32(0x10f58454u); f_10f55520();
  /* 10f58454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58457:;
  /* 10f58457 jmp 0x10f583fd */
  goto L_10f583fd;
L_10f58459:;
  /* 10f58459 mov eax, dword ptr [0x10f7eb64] */
  EAX = (r32((uint32_t)(0x10f7eb64)));
  /* 10f5845e push eax */
  push32((uint32_t)(EAX));
  /* 10f5845f call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f58465u);
  /* 10f58465 mov ecx, dword ptr [0x10f7eb74] */
  ECX = (r32((uint32_t)(0x10f7eb74)));
  /* 10f5846b push ecx */
  push32((uint32_t)(ECX));
  /* 10f5846c call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f58472u);
  /* 10f58472 mov edx, dword ptr [0x10f7eb84] */
  EDX = (r32((uint32_t)(0x10f7eb84)));
  /* 10f58478 push edx */
  push32((uint32_t)(EDX));
  /* 10f58479 call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f5847fu);
  /* 10f5847f mov eax, dword ptr [0x10f7eb44] */
  EAX = (r32((uint32_t)(0x10f7eb44)));
  /* 10f58484 push eax */
  push32((uint32_t)(EAX));
  /* 10f58485 call dword ptr [0x10f83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83380))), 0x10f5848bu);
  /* 10f5848b mov esp, ebp */
  ESP = (EBP);
  /* 10f5848d pop ebp */
  EBP = (pop32());
  /* 10f5848e ret  */
  ESPCHK(0x10f583f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x10f58490 (151 bytes, 46 insns) */
void f_10f58490(void) {
  FTRACE(0x10f58490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58490 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58491 mov ebp, esp */
  EBP = (ESP);
  /* 10f58493 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58497 cmp dword ptr [eax*4 + 0x10f7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10f7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5849f jne 0x10f58512 */
  if (!C.zf) goto L_10f58512;
  /* 10f584a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10f584a6 push 0x10f7bff0 */
  push32((uint32_t)(0x10f7bff0u));
  /* 10f584ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10f584ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f584af call 0x10f54a90 */
  push32(0x10f584b4u); f_10f54a90();
  /* 10f584b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f584b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f584ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f584be jne 0x10f584ca */
  if (!C.zf) goto L_10f584ca;
  /* 10f584c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f584c2 call 0x10f53a00 */
  push32(0x10f584c7u); f_10f53a00();
  /* 10f584c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f584ca:;
  /* 10f584ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f584cc call 0x10f58490 */
  push32(0x10f584d1u); f_10f58490();
  /* 10f584d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f584d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f584d7 cmp dword ptr [ecx*4 + 0x10f7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10f7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f584df jne 0x10f584fa */
  if (!C.zf) goto L_10f584fa;
  /* 10f584e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f584e4 push edx */
  push32((uint32_t)(EDX));
  /* 10f584e5 call dword ptr [0x10f83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83334))), 0x10f584ebu);
  /* 10f584eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f584ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f584f1 mov dword ptr [eax*4 + 0x10f7eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10f7eb40), (ECX));
  /* 10f584f8 jmp 0x10f58508 */
  goto L_10f58508;
L_10f584fa:;
  /* 10f584fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10f584fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f584ff push edx */
  push32((uint32_t)(EDX));
  /* 10f58500 call 0x10f55520 */
  push32(0x10f58505u); f_10f55520();
  /* 10f58505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58508:;
  /* 10f58508 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f5850a call 0x10f58530 */
  push32(0x10f5850fu); f_10f58530();
  /* 10f5850f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58512:;
  /* 10f58512 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58515 mov ecx, dword ptr [eax*4 + 0x10f7eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7eb40)));
  /* 10f5851c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5851d call dword ptr [0x10f83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83324))), 0x10f58523u);
  /* 10f58523 mov esp, ebp */
  ESP = (EBP);
  /* 10f58525 pop ebp */
  EBP = (pop32());
  /* 10f58526 ret  */
  ESPCHK(0x10f58490u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x10f58530 (22 bytes, 8 insns) */
void f_10f58530(void) {
  FTRACE(0x10f58530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58530 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58531 mov ebp, esp */
  EBP = (ESP);
  /* 10f58533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58536 mov ecx, dword ptr [eax*4 + 0x10f7eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f7eb40)));
  /* 10f5853d push ecx */
  push32((uint32_t)(ECX));
  /* 10f5853e call dword ptr [0x10f83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83320))), 0x10f58544u);
  /* 10f58544 pop ebp */
  EBP = (pop32());
  /* 10f58545 ret  */
  ESPCHK(0x10f58530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x10f58550 (26 bytes, 10 insns) */
void f_10f58550(void) {
  FTRACE(0x10f58550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58550 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58551 mov ebp, esp */
  EBP = (ESP);
  /* 10f58553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58556 push eax */
  push32((uint32_t)(EAX));
  /* 10f58557 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58559 call dword ptr [0x10f83328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83328))), 0x10f5855fu);
  /* 10f5855f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f58564 call dword ptr [0x10f8336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8336c))), 0x10f5856au);
  /* 10f5856a pop ebp */
  EBP = (pop32());
  /* 10f5856b ret  */
  ESPCHK(0x10f58550u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10f58570 (446 bytes, 130 insns) */
void f_10f58570(void) {
  FTRACE(0x10f58570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58570 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58571 mov ebp, esp */
  EBP = (ESP);
  /* 10f58573 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58576 call 0x10f544d0 */
  push32(0x10f5857bu); f_10f544d0();
  /* 10f5857b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5857e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58581 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10f58584 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58588 push edx */
  push32((uint32_t)(EDX));
  /* 10f58589 call 0x10f58730 */
  push32(0x10f5858eu); f_10f58730();
  /* 10f5858e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58591 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f58594 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58598 je 0x10f585a3 */
  if (C.zf) goto L_10f585a3;
  /* 10f5859a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5859d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f585a1 jne 0x10f585b2 */
  if (!C.zf) goto L_10f585b2;
L_10f585a3:;
  /* 10f585a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f585a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f585a7 call dword ptr [0x10f83318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83318))), 0x10f585adu);
  /* 10f585ad jmp 0x10f5872a */
  goto L_10f5872a;
L_10f585b2:;
  /* 10f585b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f585b5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f585b9 jne 0x10f585cf */
  if (!C.zf) goto L_10f585cf;
  /* 10f585bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f585be mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f585c5 mov eax, 1 */
  EAX = (0x1u);
  /* 10f585ca jmp 0x10f5872a */
  goto L_10f5872a;
L_10f585cf:;
  /* 10f585cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f585d2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f585d6 jne 0x10f585e0 */
  if (!C.zf) goto L_10f585e0;
  /* 10f585d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f585db jmp 0x10f5872a */
  goto L_10f5872a;
L_10f585e0:;
  /* 10f585e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f585e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f585e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f585e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f585ec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10f585ef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f585f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f585f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f585f8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10f585fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f585fe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58602 jne 0x10f58707 */
  if (!C.zf) goto L_10f58707;
  /* 10f58608 mov eax, dword ptr [0x10f7ec78] */
  EAX = (r32((uint32_t)(0x10f7ec78)));
  /* 10f5860d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f58610 jmp 0x10f5861b */
  goto L_10f5861b;
L_10f58612:;
  /* 10f58612 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f58615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58618 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f5861b:;
  /* 10f5861b mov edx, dword ptr [0x10f7ec78] */
  EDX = (r32((uint32_t)(0x10f7ec78)));
  /* 10f58621 add edx, dword ptr [0x10f7ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f7ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58627 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5862a jge 0x10f58642 */
  if ((C.sf==C.of)) goto L_10f58642;
  /* 10f5862c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f5862f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f58632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58635 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f58638 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10f58640 jmp 0x10f58612 */
  goto L_10f58612;
L_10f58642:;
  /* 10f58642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58645 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10f58648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f5864b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5864e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58654 jne 0x10f58665 */
  if (!C.zf) goto L_10f58665;
  /* 10f58656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58659 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10f58660 jmp 0x10f586ed */
  goto L_10f586ed;
L_10f58665:;
  /* 10f58665 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f58668 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5866e jne 0x10f5867c */
  if (!C.zf) goto L_10f5867c;
  /* 10f58670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58673 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10f5867a jmp 0x10f586ed */
  goto L_10f586ed;
L_10f5867c:;
  /* 10f5867c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5867f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58685 jne 0x10f58693 */
  if (!C.zf) goto L_10f58693;
  /* 10f58687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f5868a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10f58691 jmp 0x10f586ed */
  goto L_10f586ed;
L_10f58693:;
  /* 10f58693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f58696 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5869c jne 0x10f586aa */
  if (!C.zf) goto L_10f586aa;
  /* 10f5869e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586a1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10f586a8 jmp 0x10f586ed */
  goto L_10f586ed;
L_10f586aa:;
  /* 10f586aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f586ad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f586b3 jne 0x10f586c1 */
  if (!C.zf) goto L_10f586c1;
  /* 10f586b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586b8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10f586bf jmp 0x10f586ed */
  goto L_10f586ed;
L_10f586c1:;
  /* 10f586c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f586c4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f586ca jne 0x10f586d8 */
  if (!C.zf) goto L_10f586d8;
  /* 10f586cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586cf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10f586d6 jmp 0x10f586ed */
  goto L_10f586ed;
L_10f586d8:;
  /* 10f586d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f586db cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f586e1 jne 0x10f586ed */
  if (!C.zf) goto L_10f586ed;
  /* 10f586e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586e6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10f586ed:;
  /* 10f586ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586f0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10f586f3 push edx */
  push32((uint32_t)(EDX));
  /* 10f586f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f586f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f586f9u);
  /* 10f586f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f586fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f586ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f58702 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10f58705 jmp 0x10f5871e */
  goto L_10f5871e;
L_10f58707:;
  /* 10f58707 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f5870a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10f58711 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f58714 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f58717 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58718 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f5871bu);
  /* 10f5871b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f5871e:;
  /* 10f5871e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58721 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f58724 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10f58727 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f5872a:;
  /* 10f5872a mov esp, ebp */
  ESP = (EBP);
  /* 10f5872c pop ebp */
  EBP = (pop32());
  /* 10f5872d ret  */
  ESPCHK(0x10f58570u, _esp0);
  ESP += 4; return;
}

/* FUN_10008730 @ 0x10f58730 (89 bytes, 35 insns) */
void f_10f58730(void) {
  FTRACE(0x10f58730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58730 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58731 mov ebp, esp */
  EBP = (ESP);
  /* 10f58733 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f5873a:;
  /* 10f5873a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5873d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f5873f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58742 je 0x10f58762 */
  if (C.zf) goto L_10f58762;
  /* 10f58744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58747 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5874a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f5874d mov ecx, dword ptr [0x10f7ec84] */
  ECX = (r32((uint32_t)(0x10f7ec84)));
  /* 10f58753 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f58756 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58759 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5875b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5875e jae 0x10f58762 */
  if (!C.cf) goto L_10f58762;
  /* 10f58760 jmp 0x10f5873a */
  goto L_10f5873a;
L_10f58762:;
  /* 10f58762 mov eax, dword ptr [0x10f7ec84] */
  EAX = (r32((uint32_t)(0x10f7ec84)));
  /* 10f58767 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f5876a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5876d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5876f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58772 jae 0x10f5877e */
  if (!C.cf) goto L_10f5877e;
  /* 10f58774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58777 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f58779 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5877c je 0x10f58782 */
  if (C.zf) goto L_10f58782;
L_10f5877e:;
  /* 10f5877e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58780 jmp 0x10f58785 */
  goto L_10f58785;
L_10f58782:;
  /* 10f58782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f58785:;
  /* 10f58785 mov esp, ebp */
  ESP = (EBP);
  /* 10f58787 pop ebp */
  EBP = (pop32());
  /* 10f58788 ret  */
  ESPCHK(0x10f58730u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10f58790 (48 bytes, 17 insns) */
void f_10f58790(void) {
  FTRACE(0x10f58790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58790 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58791 mov ebp, esp */
  EBP = (ESP);
  /* 10f58793 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58794 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58796 call 0x10f58490 */
  push32(0x10f5879bu); f_10f58490();
  /* 10f5879b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5879e mov eax, dword ptr [0x10f807ac] */
  EAX = (r32((uint32_t)(0x10f807ac)));
  /* 10f587a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f587a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f587a9 mov dword ptr [0x10f807ac], ecx */
  w32((uint32_t)(0x10f807ac), (ECX));
  /* 10f587af push 9 */
  push32((uint32_t)(0x9u));
  /* 10f587b1 call 0x10f58530 */
  push32(0x10f587b6u); f_10f58530();
  /* 10f587b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f587b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f587bc mov esp, ebp */
  ESP = (EBP);
  /* 10f587be pop ebp */
  EBP = (pop32());
  /* 10f587bf ret  */
  ESPCHK(0x10f58790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x10f587c0 (10 bytes, 5 insns) */
void f_10f587c0(void) {
  FTRACE(0x10f587c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f587c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f587c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f587c3 mov eax, dword ptr [0x10f807ac] */
  EAX = (r32((uint32_t)(0x10f807ac)));
  /* 10f587c8 pop ebp */
  EBP = (pop32());
  /* 10f587c9 ret  */
  ESPCHK(0x10f587c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10f587d0 (45 bytes, 19 insns) */
void f_10f587d0(void) {
  FTRACE(0x10f587d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f587d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f587d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f587d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f587d4 mov eax, dword ptr [0x10f807ac] */
  EAX = (r32((uint32_t)(0x10f807ac)));
  /* 10f587d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f587dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f587e0 je 0x10f587f0 */
  if (C.zf) goto L_10f587f0;
  /* 10f587e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f587e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f587e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f587e9u);
  /* 10f587e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f587ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f587ee jne 0x10f587f4 */
  if (!C.zf) goto L_10f587f4;
L_10f587f0:;
  /* 10f587f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f587f2 jmp 0x10f587f9 */
  goto L_10f587f9;
L_10f587f4:;
  /* 10f587f4 mov eax, 1 */
  EAX = (0x1u);
L_10f587f9:;
  /* 10f587f9 mov esp, ebp */
  ESP = (EBP);
  /* 10f587fb pop ebp */
  EBP = (pop32());
  /* 10f587fc ret  */
  ESPCHK(0x10f587d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10f58800 (88 bytes, 40 insns) */
void f_10f58800(void) {
  FTRACE(0x10f58800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58800 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f58804 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f58808 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f5880a je 0x10f58853 */
  if (C.zf) goto L_10f58853;
  /* 10f5880c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5880e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10f58812 push edi */
  push32((uint32_t)(EDI));
  /* 10f58813 mov edi, ecx */
  EDI = (ECX);
  /* 10f58815 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58818 jb 0x10f58847 */
  if (C.cf) goto L_10f58847;
  /* 10f5881a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f5881c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f5881f je 0x10f58829 */
  if (C.zf) goto L_10f58829;
  /* 10f58821 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f58823:;
  /* 10f58823 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f58825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f58826 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f58827 jne 0x10f58823 */
  if (!C.zf) goto L_10f58823;
L_10f58829:;
  /* 10f58829 mov ecx, eax */
  ECX = (EAX);
  /* 10f5882b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f5882e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58830 mov ecx, eax */
  ECX = (EAX);
  /* 10f58832 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f58835 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58837 mov ecx, edx */
  ECX = (EDX);
  /* 10f58839 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f5883c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f5883f je 0x10f58847 */
  if (C.zf) goto L_10f58847;
  /* 10f58841 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f58843 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f58845 je 0x10f5884d */
  if (C.zf) goto L_10f5884d;
L_10f58847:;
  /* 10f58847 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f58849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f5884a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f5884b jne 0x10f58847 */
  if (!C.zf) goto L_10f58847;
L_10f5884d:;
  /* 10f5884d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f58851 pop edi */
  EDI = (pop32());
  /* 10f58852 ret  */
  ESPCHK(0x10f58800u, _esp0);
  ESP += 4; return;
L_10f58853:;
  /* 10f58853 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f58857 ret  */
  ESPCHK(0x10f58800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x10f58860 (23 bytes, 10 insns) */
void f_10f58860(void) {
  FTRACE(0x10f58860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58860 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58861 mov ebp, esp */
  EBP = (ESP);
  /* 10f58863 mov eax, dword ptr [0x10f807a8] */
  EAX = (r32((uint32_t)(0x10f807a8)));
  /* 10f58868 push eax */
  push32((uint32_t)(EAX));
  /* 10f58869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5886c push ecx */
  push32((uint32_t)(ECX));
  /* 10f5886d call 0x10f58880 */
  push32(0x10f58872u); f_10f58880();
  /* 10f58872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58875 pop ebp */
  EBP = (pop32());
  /* 10f58876 ret  */
  ESPCHK(0x10f58860u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10f58880 (87 bytes, 34 insns) */
void f_10f58880(void) {
  FTRACE(0x10f58880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58880 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58881 mov ebp, esp */
  EBP = (ESP);
  /* 10f58883 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58884 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58888 jbe 0x10f5888e */
  if ((C.cf||C.zf)) goto L_10f5888e;
  /* 10f5888a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5888c jmp 0x10f588d3 */
  goto L_10f588d3;
L_10f5888e:;
  /* 10f5888e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58892 ja 0x10f588a5 */
  if ((!C.cf&&!C.zf)) goto L_10f588a5;
  /* 10f58894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58897 push eax */
  push32((uint32_t)(EAX));
  /* 10f58898 call 0x10f588e0 */
  push32(0x10f5889du); f_10f588e0();
  /* 10f5889d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f588a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f588a3 jmp 0x10f588ac */
  goto L_10f588ac;
L_10f588a5:;
  /* 10f588a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f588ac:;
  /* 10f588ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f588b0 jne 0x10f588b8 */
  if (!C.zf) goto L_10f588b8;
  /* 10f588b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f588b6 jne 0x10f588bd */
  if (!C.zf) goto L_10f588bd;
L_10f588b8:;
  /* 10f588b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f588bb jmp 0x10f588d3 */
  goto L_10f588d3;
L_10f588bd:;
  /* 10f588bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f588c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f588c1 call 0x10f587d0 */
  push32(0x10f588c6u); f_10f587d0();
  /* 10f588c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f588c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f588cb jne 0x10f588d1 */
  if (!C.zf) goto L_10f588d1;
  /* 10f588cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f588cf jmp 0x10f588d3 */
  goto L_10f588d3;
L_10f588d1:;
  /* 10f588d1 jmp 0x10f5888e */
  goto L_10f5888e;
L_10f588d3:;
  /* 10f588d3 mov esp, ebp */
  ESP = (EBP);
  /* 10f588d5 pop ebp */
  EBP = (pop32());
  /* 10f588d6 ret  */
  ESPCHK(0x10f58880u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x10f588e0 (109 bytes, 37 insns) */
void f_10f588e0(void) {
  FTRACE(0x10f588e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f588e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f588e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f588e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f588e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f588e7 cmp eax, dword ptr [0x10f7ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f588ed ja 0x10f5891d */
  if ((!C.cf&&!C.zf)) goto L_10f5891d;
  /* 10f588ef push 9 */
  push32((uint32_t)(0x9u));
  /* 10f588f1 call 0x10f58490 */
  push32(0x10f588f6u); f_10f58490();
  /* 10f588f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f588f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f588fc push ecx */
  push32((uint32_t)(ECX));
  /* 10f588fd call 0x10f59420 */
  push32(0x10f58902u); f_10f59420();
  /* 10f58902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f58908 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f5890a call 0x10f58530 */
  push32(0x10f5890fu); f_10f58530();
  /* 10f5890f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58912 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58916 je 0x10f5891d */
  if (C.zf) goto L_10f5891d;
  /* 10f58918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f5891b jmp 0x10f58949 */
  goto L_10f58949;
L_10f5891d:;
  /* 10f5891d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58921 jne 0x10f5892a */
  if (!C.zf) goto L_10f5892a;
  /* 10f58923 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10f5892a:;
  /* 10f5892a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f5892d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58930 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f58933 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f58936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58939 push eax */
  push32((uint32_t)(EAX));
  /* 10f5893a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f5893c mov ecx, dword ptr [0x10f81f6c] */
  ECX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58942 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58943 call dword ptr [0x10f83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83314))), 0x10f58949u);
L_10f58949:;
  /* 10f58949 mov esp, ebp */
  ESP = (EBP);
  /* 10f5894b pop ebp */
  EBP = (pop32());
  /* 10f5894c ret  */
  ESPCHK(0x10f588e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008950 @ 0x10f58950 (10 bytes, 5 insns) */
void f_10f58950(void) {
  FTRACE(0x10f58950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58950 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58951 mov ebp, esp */
  EBP = (ESP);
  /* 10f58953 mov eax, 1 */
  EAX = (0x1u);
  /* 10f58958 pop ebp */
  EBP = (pop32());
  /* 10f58959 ret  */
  ESPCHK(0x10f58950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x10f58960 (173 bytes, 59 insns) */
void f_10f58960(void) {
  FTRACE(0x10f58960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58960 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58961 mov ebp, esp */
  EBP = (ESP);
  /* 10f58963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58966 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f5896a jbe 0x10f58973 */
  if ((C.cf||C.zf)) goto L_10f58973;
  /* 10f5896c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f5896e jmp 0x10f58a09 */
  goto L_10f58a09;
L_10f58973:;
  /* 10f58973 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58975 call 0x10f58490 */
  push32(0x10f5897au); f_10f58490();
  /* 10f5897a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f5897d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58980 push eax */
  push32((uint32_t)(EAX));
  /* 10f58981 call 0x10f58d90 */
  push32(0x10f58986u); f_10f58d90();
  /* 10f58986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58989 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f5898c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58990 je 0x10f589d1 */
  if (C.zf) goto L_10f589d1;
  /* 10f58992 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f58999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f5899c cmp ecx, dword ptr [0x10f7ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10f7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f589a2 ja 0x10f589c2 */
  if ((!C.cf&&!C.zf)) goto L_10f589c2;
  /* 10f589a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f589a7 push edx */
  push32((uint32_t)(EDX));
  /* 10f589a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f589ab push eax */
  push32((uint32_t)(EAX));
  /* 10f589ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f589af push ecx */
  push32((uint32_t)(ECX));
  /* 10f589b0 call 0x10f59c60 */
  push32(0x10f589b5u); f_10f59c60();
  /* 10f589b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f589b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f589ba je 0x10f589c2 */
  if (C.zf) goto L_10f589c2;
  /* 10f589bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f589bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f589c2:;
  /* 10f589c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f589c4 call 0x10f58530 */
  push32(0x10f589c9u); f_10f58530();
  /* 10f589c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f589cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f589cf jmp 0x10f58a09 */
  goto L_10f58a09;
L_10f589d1:;
  /* 10f589d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f589d3 call 0x10f58530 */
  push32(0x10f589d8u); f_10f58530();
  /* 10f589d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f589db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f589df jne 0x10f589e8 */
  if (!C.zf) goto L_10f589e8;
  /* 10f589e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f589e8:;
  /* 10f589e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f589eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f589ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10f589f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f589f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f589f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f589f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f589fa push edx */
  push32((uint32_t)(EDX));
  /* 10f589fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f589fd mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58a02 push eax */
  push32((uint32_t)(EAX));
  /* 10f58a03 call dword ptr [0x10f8331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8331c))), 0x10f58a09u);
L_10f58a09:;
  /* 10f58a09 mov esp, ebp */
  ESP = (EBP);
  /* 10f58a0b pop ebp */
  EBP = (pop32());
  /* 10f58a0c ret  */
  ESPCHK(0x10f58960u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x10f58a10 (490 bytes, 165 insns) */
void f_10f58a10(void) {
  FTRACE(0x10f58a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58a11 mov ebp, esp */
  EBP = (ESP);
  /* 10f58a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58a16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58a1a jne 0x10f58a2d */
  if (!C.zf) goto L_10f58a2d;
  /* 10f58a1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58a1f push eax */
  push32((uint32_t)(EAX));
  /* 10f58a20 call 0x10f58860 */
  push32(0x10f58a25u); f_10f58860();
  /* 10f58a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58a28 jmp 0x10f58bf6 */
  goto L_10f58bf6;
L_10f58a2d:;
  /* 10f58a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58a31 jne 0x10f58a46 */
  if (!C.zf) goto L_10f58a46;
  /* 10f58a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58a36 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58a37 call 0x10f58c00 */
  push32(0x10f58a3cu); f_10f58c00();
  /* 10f58a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58a41 jmp 0x10f58bf6 */
  goto L_10f58bf6;
L_10f58a46:;
  /* 10f58a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f58a4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58a51 ja 0x10f58bc9 */
  if ((!C.cf&&!C.zf)) goto L_10f58bc9;
  /* 10f58a57 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58a59 call 0x10f58490 */
  push32(0x10f58a5eu); f_10f58490();
  /* 10f58a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58a64 push edx */
  push32((uint32_t)(EDX));
  /* 10f58a65 call 0x10f58d90 */
  push32(0x10f58a6au); f_10f58d90();
  /* 10f58a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58a6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f58a70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58a74 je 0x10f58b8c */
  if (C.zf) goto L_10f58b8c;
  /* 10f58a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58a7d cmp eax, dword ptr [0x10f7ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10f7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58a83 ja 0x10f58b00 */
  if ((!C.cf&&!C.zf)) goto L_10f58b00;
  /* 10f58a85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58a88 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58a8c push edx */
  push32((uint32_t)(EDX));
  /* 10f58a8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f58a90 push eax */
  push32((uint32_t)(EAX));
  /* 10f58a91 call 0x10f59c60 */
  push32(0x10f58a96u); f_10f59c60();
  /* 10f58a96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f58a9b je 0x10f58aa5 */
  if (C.zf) goto L_10f58aa5;
  /* 10f58a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58aa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f58aa3 jmp 0x10f58b00 */
  goto L_10f58b00;
L_10f58aa5:;
  /* 10f58aa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58aa8 push edx */
  push32((uint32_t)(EDX));
  /* 10f58aa9 call 0x10f59420 */
  push32(0x10f58aaeu); f_10f59420();
  /* 10f58aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58ab1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f58ab4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58ab8 je 0x10f58b00 */
  if (C.zf) goto L_10f58b00;
  /* 10f58aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58abd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10f58ac0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58ac3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f58ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58ac9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58acc jae 0x10f58ad6 */
  if (!C.cf) goto L_10f58ad6;
  /* 10f58ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58ad1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f58ad4 jmp 0x10f58adc */
  goto L_10f58adc;
L_10f58ad6:;
  /* 10f58ad6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58ad9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f58adc:;
  /* 10f58adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f58adf push edx */
  push32((uint32_t)(EDX));
  /* 10f58ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58ae3 push eax */
  push32((uint32_t)(EAX));
  /* 10f58ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58ae8 call 0x10f5b370 */
  push32(0x10f58aedu); f_10f5b370();
  /* 10f58aed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58af0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58af3 push edx */
  push32((uint32_t)(EDX));
  /* 10f58af4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f58af7 push eax */
  push32((uint32_t)(EAX));
  /* 10f58af8 call 0x10f58e50 */
  push32(0x10f58afdu); f_10f58e50();
  /* 10f58afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58b00:;
  /* 10f58b00 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58b04 jne 0x10f58b80 */
  if (!C.zf) goto L_10f58b80;
  /* 10f58b06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58b0a jne 0x10f58b13 */
  if (!C.zf) goto L_10f58b13;
  /* 10f58b0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f58b13:;
  /* 10f58b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58b16 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58b19 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10f58b1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f58b1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58b22 push edx */
  push32((uint32_t)(EDX));
  /* 10f58b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58b25 mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58b2a push eax */
  push32((uint32_t)(EAX));
  /* 10f58b2b call dword ptr [0x10f83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83314))), 0x10f58b31u);
  /* 10f58b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f58b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58b38 je 0x10f58b80 */
  if (C.zf) goto L_10f58b80;
  /* 10f58b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58b3d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f58b40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f58b43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f58b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58b49 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58b4c jae 0x10f58b56 */
  if (!C.cf) goto L_10f58b56;
  /* 10f58b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58b51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f58b54 jmp 0x10f58b5c */
  goto L_10f58b5c;
L_10f58b56:;
  /* 10f58b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58b59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f58b5c:;
  /* 10f58b5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f58b5f push eax */
  push32((uint32_t)(EAX));
  /* 10f58b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58b64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58b67 push edx */
  push32((uint32_t)(EDX));
  /* 10f58b68 call 0x10f5b370 */
  push32(0x10f58b6du); f_10f5b370();
  /* 10f58b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58b73 push eax */
  push32((uint32_t)(EAX));
  /* 10f58b74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f58b77 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58b78 call 0x10f58e50 */
  push32(0x10f58b7du); f_10f58e50();
  /* 10f58b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f58b80:;
  /* 10f58b80 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58b82 call 0x10f58530 */
  push32(0x10f58b87u); f_10f58530();
  /* 10f58b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58b8a jmp 0x10f58bc9 */
  goto L_10f58bc9;
L_10f58b8c:;
  /* 10f58b8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58b8e call 0x10f58530 */
  push32(0x10f58b93u); f_10f58530();
  /* 10f58b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58b96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58b9a jne 0x10f58ba3 */
  if (!C.zf) goto L_10f58ba3;
  /* 10f58b9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f58ba3:;
  /* 10f58ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58ba6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58ba9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f58bac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10f58baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58bb2 push eax */
  push32((uint32_t)(EAX));
  /* 10f58bb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58bb9 mov edx, dword ptr [0x10f81f6c] */
  EDX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58bbf push edx */
  push32((uint32_t)(EDX));
  /* 10f58bc0 call dword ptr [0x10f8331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f8331c))), 0x10f58bc6u);
  /* 10f58bc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f58bc9:;
  /* 10f58bc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58bcd jne 0x10f58bd8 */
  if (!C.zf) goto L_10f58bd8;
  /* 10f58bcf cmp dword ptr [0x10f807a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f807a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58bd6 jne 0x10f58bdd */
  if (!C.zf) goto L_10f58bdd;
L_10f58bd8:;
  /* 10f58bd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f58bdb jmp 0x10f58bf6 */
  goto L_10f58bf6;
L_10f58bdd:;
  /* 10f58bdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f58be0 push eax */
  push32((uint32_t)(EAX));
  /* 10f58be1 call 0x10f587d0 */
  push32(0x10f58be6u); f_10f587d0();
  /* 10f58be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f58beb jne 0x10f58bf1 */
  if (!C.zf) goto L_10f58bf1;
  /* 10f58bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f58bef jmp 0x10f58bf6 */
  goto L_10f58bf6;
L_10f58bf1:;
  /* 10f58bf1 jmp 0x10f58a46 */
  goto L_10f58a46;
L_10f58bf6:;
  /* 10f58bf6 mov esp, ebp */
  ESP = (EBP);
  /* 10f58bf8 pop ebp */
  EBP = (pop32());
  /* 10f58bf9 ret  */
  ESPCHK(0x10f58a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x10f58c00 (104 bytes, 38 insns) */
void f_10f58c00(void) {
  FTRACE(0x10f58c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58c01 mov ebp, esp */
  EBP = (ESP);
  /* 10f58c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58c04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58c08 jne 0x10f58c0c */
  if (!C.zf) goto L_10f58c0c;
  /* 10f58c0a jmp 0x10f58c64 */
  goto L_10f58c64;
L_10f58c0c:;
  /* 10f58c0c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58c0e call 0x10f58490 */
  push32(0x10f58c13u); f_10f58490();
  /* 10f58c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58c19 push eax */
  push32((uint32_t)(EAX));
  /* 10f58c1a call 0x10f58d90 */
  push32(0x10f58c1fu); f_10f58d90();
  /* 10f58c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f58c25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58c29 je 0x10f58c47 */
  if (C.zf) goto L_10f58c47;
  /* 10f58c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58c2e push ecx */
  push32((uint32_t)(ECX));
  /* 10f58c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58c32 push edx */
  push32((uint32_t)(EDX));
  /* 10f58c33 call 0x10f58e50 */
  push32(0x10f58c38u); f_10f58e50();
  /* 10f58c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c3b push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58c3d call 0x10f58530 */
  push32(0x10f58c42u); f_10f58530();
  /* 10f58c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c45 jmp 0x10f58c64 */
  goto L_10f58c64;
L_10f58c47:;
  /* 10f58c47 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58c49 call 0x10f58530 */
  push32(0x10f58c4eu); f_10f58530();
  /* 10f58c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f58c54 push eax */
  push32((uint32_t)(EAX));
  /* 10f58c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58c57 mov ecx, dword ptr [0x10f81f6c] */
  ECX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58c5d push ecx */
  push32((uint32_t)(ECX));
  /* 10f58c5e call dword ptr [0x10f83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83384))), 0x10f58c64u);
L_10f58c64:;
  /* 10f58c64 mov esp, ebp */
  ESP = (EBP);
  /* 10f58c66 pop ebp */
  EBP = (pop32());
  /* 10f58c67 ret  */
  ESPCHK(0x10f58c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c70 @ 0x10f58c70 (116 bytes, 34 insns) */
void f_10f58c70(void) {
  FTRACE(0x10f58c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58c70 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58c71 mov ebp, esp */
  EBP = (ESP);
  /* 10f58c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10f58c74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10f58c7b push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58c7d call 0x10f58490 */
  push32(0x10f58c82u); f_10f58490();
  /* 10f58c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c85 call 0x10f5a380 */
  push32(0x10f58c8au); f_10f5a380();
  /* 10f58c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f58c8c jge 0x10f58c95 */
  if ((C.sf==C.of)) goto L_10f58c95;
  /* 10f58c8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10f58c95:;
  /* 10f58c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f58c97 call 0x10f58530 */
  push32(0x10f58c9cu); f_10f58530();
  /* 10f58c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f58c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f58ca3 mov eax, dword ptr [0x10f81f6c] */
  EAX = (r32((uint32_t)(0x10f81f6c)));
  /* 10f58ca8 push eax */
  push32((uint32_t)(EAX));
  /* 10f58ca9 call dword ptr [0x10f833b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f833b0))), 0x10f58cafu);
  /* 10f58caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f58cb1 jne 0x10f58cdd */
  if (!C.zf) goto L_10f58cdd;
  /* 10f58cb3 call dword ptr [0x10f83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f83390))), 0x10f58cb9u);
  /* 10f58cb9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f58cbc jne 0x10f58cd6 */
  if (!C.zf) goto L_10f58cd6;
  /* 10f58cbe call 0x10f5c970 */
  push32(0x10f58cc3u); f_10f5c970();
  /* 10f58cc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10f58cc9 call 0x10f5c960 */
  push32(0x10f58cceu); f_10f5c960();
  /* 10f58cce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10f58cd4 jmp 0x10f58cdd */
  goto L_10f58cdd;
L_10f58cd6:;
  /* 10f58cd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10f58cdd:;
  /* 10f58cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f58ce0 mov esp, ebp */
  ESP = (EBP);
  /* 10f58ce2 pop ebp */
  EBP = (pop32());
  /* 10f58ce3 ret  */
  ESPCHK(0x10f58c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf0 @ 0x10f58cf0 (10 bytes, 5 insns) */
void f_10f58cf0(void) {
  FTRACE(0x10f58cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f58cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f58cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10f58cf3 call 0x10f58c70 */
  push32(0x10f58cf8u); f_10f58c70();
  /* 10f58cf8 pop ebp */
  EBP = (pop32());
  /* 10f58cf9 ret  */
  ESPCHK(0x10f58cf0u, _esp0);
  ESP += 4; return;
}

