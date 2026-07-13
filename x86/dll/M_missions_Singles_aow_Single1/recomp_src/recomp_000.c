#include "recomp.h"

/* OnInit @ 0x12151005 (5 bytes, 1 insns) */
void f_12151005(void) {
  FTRACE(0x12151005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12151005 jmp 0x12151090 */
  f_12151090(); return;
}

/* thunk_FUN_10001030 @ 0x1215100a (5 bytes, 1 insns) */
void f_1215100a(void) {
  FTRACE(0x1215100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215100a jmp 0x12151030 */
  f_12151030(); return;
}

/* ProcessScenary @ 0x1215100f (5 bytes, 1 insns) */
void f_1215100f(void) {
  FTRACE(0x1215100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1215100f jmp 0x121519c0 */
  f_121519c0(); return;
}

/* FUN_10001030 @ 0x12151030 (67 bytes, 26 insns) */
void f_12151030(void) {
  FTRACE(0x12151030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12151030 push ebp */
  push32((uint32_t)(EBP));
  /* 12151031 mov ebp, esp */
  EBP = (ESP);
  /* 12151033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151036 push ebx */
  push32((uint32_t)(EBX));
  /* 12151037 push esi */
  push32((uint32_t)(ESI));
  /* 12151038 push edi */
  push32((uint32_t)(EDI));
  /* 12151039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1215103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 12151041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 12151046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12151048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151052 je 0x12151056 */
  if (C.zf) goto L_12151056;
  /* 12151054 jmp 0x1215105b */
  goto L_1215105b;
L_12151056:;
  /* 12151056 call 0x12151005 */
  push32(0x1215105bu); f_12151005();
L_1215105b:;
  /* 1215105b mov eax, 1 */
  EAX = (0x1u);
  /* 12151060 pop edi */
  EDI = (pop32());
  /* 12151061 pop esi */
  ESI = (pop32());
  /* 12151062 pop ebx */
  EBX = (pop32());
  /* 12151063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151068 call 0x12153780 */
  push32(0x1215106du); f_12153780();
  /* 1215106d mov esp, ebp */
  ESP = (EBP);
  /* 1215106f pop ebp */
  EBP = (pop32());
  /* 12151070 ret 0xc */
  ESPCHK(0x12151030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x12151090 (1881 bytes, 504 insns) */
void f_12151090(void) {
  FTRACE(0x12151090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12151090 push ebp */
  push32((uint32_t)(EBP));
  /* 12151091 mov ebp, esp */
  EBP = (ESP);
  /* 12151093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151096 push ebx */
  push32((uint32_t)(EBX));
  /* 12151097 push esi */
  push32((uint32_t)(ESI));
  /* 12151098 push edi */
  push32((uint32_t)(EDI));
  /* 12151099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1215109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 121510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 121510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 121510a8 mov esi, esp */
  ESI = (ESP);
  /* 121510aa push 0x1217b184 */
  push32((uint32_t)(0x1217b184u));
  /* 121510af push 0x12180440 */
  push32((uint32_t)(0x12180440u));
  /* 121510b4 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121510bau);
  /* 121510ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121510bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121510bf call 0x12153780 */
  push32(0x121510c4u); f_12153780();
  /* 121510c4 mov esi, esp */
  ESI = (ESP);
  /* 121510c6 push 0x1217b180 */
  push32((uint32_t)(0x1217b180u));
  /* 121510cb push 0x12180448 */
  push32((uint32_t)(0x12180448u));
  /* 121510d0 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121510d6u);
  /* 121510d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121510d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121510db call 0x12153780 */
  push32(0x121510e0u); f_12153780();
  /* 121510e0 mov esi, esp */
  ESI = (ESP);
  /* 121510e2 push 0x1217b17c */
  push32((uint32_t)(0x1217b17cu));
  /* 121510e7 push 0x12180450 */
  push32((uint32_t)(0x12180450u));
  /* 121510ec call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121510f2u);
  /* 121510f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121510f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121510f7 call 0x12153780 */
  push32(0x121510fcu); f_12153780();
  /* 121510fc mov esi, esp */
  ESI = (ESP);
  /* 121510fe push 0x1217b178 */
  push32((uint32_t)(0x1217b178u));
  /* 12151103 push 0x12180458 */
  push32((uint32_t)(0x12180458u));
  /* 12151108 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x1215110eu);
  /* 1215110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151113 call 0x12153780 */
  push32(0x12151118u); f_12153780();
  /* 12151118 mov esi, esp */
  ESI = (ESP);
  /* 1215111a push 0x1217b174 */
  push32((uint32_t)(0x1217b174u));
  /* 1215111f push 0x12180460 */
  push32((uint32_t)(0x12180460u));
  /* 12151124 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x1215112au);
  /* 1215112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215112f call 0x12153780 */
  push32(0x12151134u); f_12153780();
  /* 12151134 mov esi, esp */
  ESI = (ESP);
  /* 12151136 push 0x1217b170 */
  push32((uint32_t)(0x1217b170u));
  /* 1215113b push 0x12180468 */
  push32((uint32_t)(0x12180468u));
  /* 12151140 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x12151146u);
  /* 12151146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215114b call 0x12153780 */
  push32(0x12151150u); f_12153780();
  /* 12151150 mov esi, esp */
  ESI = (ESP);
  /* 12151152 push 0x1217b16c */
  push32((uint32_t)(0x1217b16cu));
  /* 12151157 push 0x12180470 */
  push32((uint32_t)(0x12180470u));
  /* 1215115c call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x12151162u);
  /* 12151162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151167 call 0x12153780 */
  push32(0x1215116cu); f_12153780();
  /* 1215116c mov esi, esp */
  ESI = (ESP);
  /* 1215116e push 0x1217b168 */
  push32((uint32_t)(0x1217b168u));
  /* 12151173 push 0x12180478 */
  push32((uint32_t)(0x12180478u));
  /* 12151178 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x1215117eu);
  /* 1215117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151183 call 0x12153780 */
  push32(0x12151188u); f_12153780();
  /* 12151188 mov esi, esp */
  ESI = (ESP);
  /* 1215118a push 0x1217b164 */
  push32((uint32_t)(0x1217b164u));
  /* 1215118f push 0x12180480 */
  push32((uint32_t)(0x12180480u));
  /* 12151194 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x1215119au);
  /* 1215119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215119f call 0x12153780 */
  push32(0x121511a4u); f_12153780();
  /* 121511a4 mov esi, esp */
  ESI = (ESP);
  /* 121511a6 push 0x1217b160 */
  push32((uint32_t)(0x1217b160u));
  /* 121511ab push 0x12180498 */
  push32((uint32_t)(0x12180498u));
  /* 121511b0 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121511b6u);
  /* 121511b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121511b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121511bb call 0x12153780 */
  push32(0x121511c0u); f_12153780();
  /* 121511c0 mov esi, esp */
  ESI = (ESP);
  /* 121511c2 push 0x1217b15c */
  push32((uint32_t)(0x1217b15cu));
  /* 121511c7 push 0x121804a8 */
  push32((uint32_t)(0x121804a8u));
  /* 121511cc call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121511d2u);
  /* 121511d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121511d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121511d7 call 0x12153780 */
  push32(0x121511dcu); f_12153780();
  /* 121511dc mov esi, esp */
  ESI = (ESP);
  /* 121511de push 0x1217b158 */
  push32((uint32_t)(0x1217b158u));
  /* 121511e3 push 0x121804b0 */
  push32((uint32_t)(0x121804b0u));
  /* 121511e8 call dword ptr [0x121834a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a8))), 0x121511eeu);
  /* 121511ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121511f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121511f3 call 0x12153780 */
  push32(0x121511f8u); f_12153780();
  /* 121511f8 mov esi, esp */
  ESI = (ESP);
  /* 121511fa push 0x1217b154 */
  push32((uint32_t)(0x1217b154u));
  /* 121511ff push 0x121804c0 */
  push32((uint32_t)(0x121804c0u));
  /* 12151204 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x1215120au);
  /* 1215120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215120f call 0x12153780 */
  push32(0x12151214u); f_12153780();
  /* 12151214 mov esi, esp */
  ESI = (ESP);
  /* 12151216 push 0x1217b150 */
  push32((uint32_t)(0x1217b150u));
  /* 1215121b push 0x121804c8 */
  push32((uint32_t)(0x121804c8u));
  /* 12151220 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x12151226u);
  /* 12151226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215122b call 0x12153780 */
  push32(0x12151230u); f_12153780();
  /* 12151230 mov esi, esp */
  ESI = (ESP);
  /* 12151232 push 0x1217b14c */
  push32((uint32_t)(0x1217b14cu));
  /* 12151237 push 0x121804d0 */
  push32((uint32_t)(0x121804d0u));
  /* 1215123c call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x12151242u);
  /* 12151242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151247 call 0x12153780 */
  push32(0x1215124cu); f_12153780();
  /* 1215124c mov esi, esp */
  ESI = (ESP);
  /* 1215124e push 0x1217b148 */
  push32((uint32_t)(0x1217b148u));
  /* 12151253 push 0x121804d8 */
  push32((uint32_t)(0x121804d8u));
  /* 12151258 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x1215125eu);
  /* 1215125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151263 call 0x12153780 */
  push32(0x12151268u); f_12153780();
  /* 12151268 mov esi, esp */
  ESI = (ESP);
  /* 1215126a push 0x1217b144 */
  push32((uint32_t)(0x1217b144u));
  /* 1215126f push 0x121804e0 */
  push32((uint32_t)(0x121804e0u));
  /* 12151274 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x1215127au);
  /* 1215127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215127f call 0x12153780 */
  push32(0x12151284u); f_12153780();
  /* 12151284 mov esi, esp */
  ESI = (ESP);
  /* 12151286 push 0x1217b140 */
  push32((uint32_t)(0x1217b140u));
  /* 1215128b push 0x121804e8 */
  push32((uint32_t)(0x121804e8u));
  /* 12151290 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x12151296u);
  /* 12151296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215129b call 0x12153780 */
  push32(0x121512a0u); f_12153780();
  /* 121512a0 mov esi, esp */
  ESI = (ESP);
  /* 121512a2 push 0x1217b13c */
  push32((uint32_t)(0x1217b13cu));
  /* 121512a7 push 0x12180508 */
  push32((uint32_t)(0x12180508u));
  /* 121512ac call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x121512b2u);
  /* 121512b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121512b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121512b7 call 0x12153780 */
  push32(0x121512bcu); f_12153780();
  /* 121512bc mov esi, esp */
  ESI = (ESP);
  /* 121512be push 0x1217b138 */
  push32((uint32_t)(0x1217b138u));
  /* 121512c3 push 0x12180510 */
  push32((uint32_t)(0x12180510u));
  /* 121512c8 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x121512ceu);
  /* 121512ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121512d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121512d3 call 0x12153780 */
  push32(0x121512d8u); f_12153780();
  /* 121512d8 mov esi, esp */
  ESI = (ESP);
  /* 121512da push 0x1217b134 */
  push32((uint32_t)(0x1217b134u));
  /* 121512df push 0x12180518 */
  push32((uint32_t)(0x12180518u));
  /* 121512e4 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x121512eau);
  /* 121512ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121512ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121512ef call 0x12153780 */
  push32(0x121512f4u); f_12153780();
  /* 121512f4 mov esi, esp */
  ESI = (ESP);
  /* 121512f6 push 0x1217b130 */
  push32((uint32_t)(0x1217b130u));
  /* 121512fb push 0x121804f0 */
  push32((uint32_t)(0x121804f0u));
  /* 12151300 call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x12151306u);
  /* 12151306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215130b call 0x12153780 */
  push32(0x12151310u); f_12153780();
  /* 12151310 mov esi, esp */
  ESI = (ESP);
  /* 12151312 push 0x1217b12c */
  push32((uint32_t)(0x1217b12cu));
  /* 12151317 push 0x121804f8 */
  push32((uint32_t)(0x121804f8u));
  /* 1215131c call dword ptr [0x121834a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a0))), 0x12151322u);
  /* 12151322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151327 call 0x12153780 */
  push32(0x1215132cu); f_12153780();
  /* 1215132c mov esi, esp */
  ESI = (ESP);
  /* 1215132e push 0x1217b114 */
  push32((uint32_t)(0x1217b114u));
  /* 12151333 push 0x121803f0 */
  push32((uint32_t)(0x121803f0u));
  /* 12151338 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x1215133eu);
  /* 1215133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151343 call 0x12153780 */
  push32(0x12151348u); f_12153780();
  /* 12151348 mov esi, esp */
  ESI = (ESP);
  /* 1215134a push 0x1217b100 */
  push32((uint32_t)(0x1217b100u));
  /* 1215134f push 0x121803f8 */
  push32((uint32_t)(0x121803f8u));
  /* 12151354 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x1215135au);
  /* 1215135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215135f call 0x12153780 */
  push32(0x12151364u); f_12153780();
  /* 12151364 mov esi, esp */
  ESI = (ESP);
  /* 12151366 push 0x1217b0f0 */
  push32((uint32_t)(0x1217b0f0u));
  /* 1215136b push 0x12180400 */
  push32((uint32_t)(0x12180400u));
  /* 12151370 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x12151376u);
  /* 12151376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215137b call 0x12153780 */
  push32(0x12151380u); f_12153780();
  /* 12151380 mov esi, esp */
  ESI = (ESP);
  /* 12151382 push 0x1217b0e0 */
  push32((uint32_t)(0x1217b0e0u));
  /* 12151387 push 0x12180408 */
  push32((uint32_t)(0x12180408u));
  /* 1215138c call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x12151392u);
  /* 12151392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151397 call 0x12153780 */
  push32(0x1215139cu); f_12153780();
  /* 1215139c mov esi, esp */
  ESI = (ESP);
  /* 1215139e push 0x1217b0cc */
  push32((uint32_t)(0x1217b0ccu));
  /* 121513a3 push 0x12180410 */
  push32((uint32_t)(0x12180410u));
  /* 121513a8 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x121513aeu);
  /* 121513ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121513b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121513b3 call 0x12153780 */
  push32(0x121513b8u); f_12153780();
  /* 121513b8 mov esi, esp */
  ESI = (ESP);
  /* 121513ba push 0x1217b0b4 */
  push32((uint32_t)(0x1217b0b4u));
  /* 121513bf push 0x12180418 */
  push32((uint32_t)(0x12180418u));
  /* 121513c4 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x121513cau);
  /* 121513ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121513cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121513cf call 0x12153780 */
  push32(0x121513d4u); f_12153780();
  /* 121513d4 mov esi, esp */
  ESI = (ESP);
  /* 121513d6 push 0x1217b0a4 */
  push32((uint32_t)(0x1217b0a4u));
  /* 121513db push 0x12180420 */
  push32((uint32_t)(0x12180420u));
  /* 121513e0 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x121513e6u);
  /* 121513e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121513e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121513eb call 0x12153780 */
  push32(0x121513f0u); f_12153780();
  /* 121513f0 mov esi, esp */
  ESI = (ESP);
  /* 121513f2 push 0x1217b08c */
  push32((uint32_t)(0x1217b08cu));
  /* 121513f7 push 0x12180428 */
  push32((uint32_t)(0x12180428u));
  /* 121513fc call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x12151402u);
  /* 12151402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151407 call 0x12153780 */
  push32(0x1215140cu); f_12153780();
  /* 1215140c mov esi, esp */
  ESI = (ESP);
  /* 1215140e push 0x1217b080 */
  push32((uint32_t)(0x1217b080u));
  /* 12151413 push 0x12180430 */
  push32((uint32_t)(0x12180430u));
  /* 12151418 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x1215141eu);
  /* 1215141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151423 call 0x12153780 */
  push32(0x12151428u); f_12153780();
  /* 12151428 mov esi, esp */
  ESI = (ESP);
  /* 1215142a push 0x1217b074 */
  push32((uint32_t)(0x1217b074u));
  /* 1215142f push 0x121803e0 */
  push32((uint32_t)(0x121803e0u));
  /* 12151434 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x1215143au);
  /* 1215143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215143f call 0x12153780 */
  push32(0x12151444u); f_12153780();
  /* 12151444 mov esi, esp */
  ESI = (ESP);
  /* 12151446 push 0x1217b060 */
  push32((uint32_t)(0x1217b060u));
  /* 1215144b push 0x121803e8 */
  push32((uint32_t)(0x121803e8u));
  /* 12151450 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x12151456u);
  /* 12151456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215145b call 0x12153780 */
  push32(0x12151460u); f_12153780();
  /* 12151460 mov esi, esp */
  ESI = (ESP);
  /* 12151462 push 0x1217b050 */
  push32((uint32_t)(0x1217b050u));
  /* 12151467 push 0x121804a0 */
  push32((uint32_t)(0x121804a0u));
  /* 1215146c call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x12151472u);
  /* 12151472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151477 call 0x12153780 */
  push32(0x1215147cu); f_12153780();
  /* 1215147c mov esi, esp */
  ESI = (ESP);
  /* 1215147e push 0x1217b038 */
  push32((uint32_t)(0x1217b038u));
  /* 12151483 push 0x121804b8 */
  push32((uint32_t)(0x121804b8u));
  /* 12151488 call dword ptr [0x121834b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b0))), 0x1215148eu);
  /* 1215148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151493 call 0x12153780 */
  push32(0x12151498u); f_12153780();
  /* 12151498 mov esi, esp */
  ESI = (ESP);
  /* 1215149a push 8 */
  push32((uint32_t)(0x8u));
  /* 1215149c push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 121514a1 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x121514a7u);
  /* 121514a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121514aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121514ac call 0x12153780 */
  push32(0x121514b1u); f_12153780();
  /* 121514b1 mov esi, esp */
  ESI = (ESP);
  /* 121514b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 121514b5 push 0x12180528 */
  push32((uint32_t)(0x12180528u));
  /* 121514ba call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x121514c0u);
  /* 121514c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121514c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121514c5 call 0x12153780 */
  push32(0x121514cau); f_12153780();
  /* 121514ca mov esi, esp */
  ESI = (ESP);
  /* 121514cc push 8 */
  push32((uint32_t)(0x8u));
  /* 121514ce push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 121514d3 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x121514d9u);
  /* 121514d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121514dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121514de call 0x12153780 */
  push32(0x121514e3u); f_12153780();
  /* 121514e3 mov esi, esp */
  ESI = (ESP);
  /* 121514e5 push 8 */
  push32((uint32_t)(0x8u));
  /* 121514e7 push 0x12180538 */
  push32((uint32_t)(0x12180538u));
  /* 121514ec call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x121514f2u);
  /* 121514f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121514f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121514f7 call 0x12153780 */
  push32(0x121514fcu); f_12153780();
  /* 121514fc mov esi, esp */
  ESI = (ESP);
  /* 121514fe push 8 */
  push32((uint32_t)(0x8u));
  /* 12151500 push 0x12180540 */
  push32((uint32_t)(0x12180540u));
  /* 12151505 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x1215150bu);
  /* 1215150b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215150e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151510 call 0x12153780 */
  push32(0x12151515u); f_12153780();
  /* 12151515 mov esi, esp */
  ESI = (ESP);
  /* 12151517 push 8 */
  push32((uint32_t)(0x8u));
  /* 12151519 push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 1215151e call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x12151524u);
  /* 12151524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151527 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151529 call 0x12153780 */
  push32(0x1215152eu); f_12153780();
  /* 1215152e mov esi, esp */
  ESI = (ESP);
  /* 12151530 push 8 */
  push32((uint32_t)(0x8u));
  /* 12151532 push 0x12180550 */
  push32((uint32_t)(0x12180550u));
  /* 12151537 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x1215153du);
  /* 1215153d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151540 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151542 call 0x12153780 */
  push32(0x12151547u); f_12153780();
  /* 12151547 mov esi, esp */
  ESI = (ESP);
  /* 12151549 push 8 */
  push32((uint32_t)(0x8u));
  /* 1215154b push 0x12180500 */
  push32((uint32_t)(0x12180500u));
  /* 12151550 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x12151556u);
  /* 12151556 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151559 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215155b call 0x12153780 */
  push32(0x12151560u); f_12153780();
  /* 12151560 mov esi, esp */
  ESI = (ESP);
  /* 12151562 push 8 */
  push32((uint32_t)(0x8u));
  /* 12151564 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12151569 call dword ptr [0x121834b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b4))), 0x1215156fu);
  /* 1215156f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151574 call 0x12153780 */
  push32(0x12151579u); f_12153780();
  /* 12151579 mov esi, esp */
  ESI = (ESP);
  /* 1215157b push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 12151580 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x12151586u);
  /* 12151586 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151589 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215158b call 0x12153780 */
  push32(0x12151590u); f_12153780();
  /* 12151590 mov esi, esp */
  ESI = (ESP);
  /* 12151592 push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 12151597 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x1215159du);
  /* 1215159d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121515a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121515a2 call 0x12153780 */
  push32(0x121515a7u); f_12153780();
  /* 121515a7 mov esi, esp */
  ESI = (ESP);
  /* 121515a9 push 0x12180528 */
  push32((uint32_t)(0x12180528u));
  /* 121515ae call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x121515b4u);
  /* 121515b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121515b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121515b9 call 0x12153780 */
  push32(0x121515beu); f_12153780();
  /* 121515be mov esi, esp */
  ESI = (ESP);
  /* 121515c0 push 0x12180538 */
  push32((uint32_t)(0x12180538u));
  /* 121515c5 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x121515cbu);
  /* 121515cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121515ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121515d0 call 0x12153780 */
  push32(0x121515d5u); f_12153780();
  /* 121515d5 mov esi, esp */
  ESI = (ESP);
  /* 121515d7 push 0x12180540 */
  push32((uint32_t)(0x12180540u));
  /* 121515dc call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x121515e2u);
  /* 121515e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121515e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121515e7 call 0x12153780 */
  push32(0x121515ecu); f_12153780();
  /* 121515ec mov esi, esp */
  ESI = (ESP);
  /* 121515ee push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 121515f3 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x121515f9u);
  /* 121515f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121515fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121515fe call 0x12153780 */
  push32(0x12151603u); f_12153780();
  /* 12151603 mov esi, esp */
  ESI = (ESP);
  /* 12151605 push 0x12180550 */
  push32((uint32_t)(0x12180550u));
  /* 1215160a call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x12151610u);
  /* 12151610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151615 call 0x12153780 */
  push32(0x1215161au); f_12153780();
  /* 1215161a mov esi, esp */
  ESI = (ESP);
  /* 1215161c push 0x12180500 */
  push32((uint32_t)(0x12180500u));
  /* 12151621 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x12151627u);
  /* 12151627 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215162a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215162c call 0x12153780 */
  push32(0x12151631u); f_12153780();
  /* 12151631 mov esi, esp */
  ESI = (ESP);
  /* 12151633 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12151638 call dword ptr [0x121834ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834ac))), 0x1215163eu);
  /* 1215163e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151641 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151643 call 0x12153780 */
  push32(0x12151648u); f_12153780();
  /* 12151648 mov esi, esp */
  ESI = (ESP);
  /* 1215164a push 0x1217b030 */
  push32((uint32_t)(0x1217b030u));
  /* 1215164f push 0x12180490 */
  push32((uint32_t)(0x12180490u));
  /* 12151654 call dword ptr [0x121834bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834bc))), 0x1215165au);
  /* 1215165a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215165d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215165f call 0x12153780 */
  push32(0x12151664u); f_12153780();
  /* 12151664 mov esi, esp */
  ESI = (ESP);
  /* 12151666 push 0x1217b028 */
  push32((uint32_t)(0x1217b028u));
  /* 1215166b push 3 */
  push32((uint32_t)(0x3u));
  /* 1215166d call dword ptr [0x121834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834c0))), 0x12151673u);
  /* 12151673 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151678 call 0x12153780 */
  push32(0x1215167du); f_12153780();
  /* 1215167d mov esi, esp */
  ESI = (ESP);
  /* 1215167f push 0x1217b028 */
  push32((uint32_t)(0x1217b028u));
  /* 12151684 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151686 call dword ptr [0x121834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834c0))), 0x1215168cu);
  /* 1215168c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215168f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151691 call 0x12153780 */
  push32(0x12151696u); f_12153780();
  /* 12151696 mov esi, esp */
  ESI = (ESP);
  /* 12151698 push 0x1217b01c */
  push32((uint32_t)(0x1217b01cu));
  /* 1215169d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215169f call dword ptr [0x121834c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834c0))), 0x121516a5u);
  /* 121516a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121516a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121516aa call 0x12153780 */
  push32(0x121516afu); f_12153780();
  /* 121516af mov esi, esp */
  ESI = (ESP);
  /* 121516b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121516b3 push 0x121803f0 */
  push32((uint32_t)(0x121803f0u));
  /* 121516b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121516ba call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x121516c0u);
  /* 121516c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121516c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121516c5 call 0x12153780 */
  push32(0x121516cau); f_12153780();
  /* 121516ca mov esi, esp */
  ESI = (ESP);
  /* 121516cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121516ce push 0x121803f8 */
  push32((uint32_t)(0x121803f8u));
  /* 121516d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121516d5 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x121516dbu);
  /* 121516db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121516de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121516e0 call 0x12153780 */
  push32(0x121516e5u); f_12153780();
  /* 121516e5 mov esi, esp */
  ESI = (ESP);
  /* 121516e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121516e9 push 0x12180400 */
  push32((uint32_t)(0x12180400u));
  /* 121516ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121516f0 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x121516f6u);
  /* 121516f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121516f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121516fb call 0x12153780 */
  push32(0x12151700u); f_12153780();
  /* 12151700 mov esi, esp */
  ESI = (ESP);
  /* 12151702 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151704 push 0x12180408 */
  push32((uint32_t)(0x12180408u));
  /* 12151709 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215170b call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x12151711u);
  /* 12151711 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151714 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151716 call 0x12153780 */
  push32(0x1215171bu); f_12153780();
  /* 1215171b mov esi, esp */
  ESI = (ESP);
  /* 1215171d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215171f push 0x12180410 */
  push32((uint32_t)(0x12180410u));
  /* 12151724 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151726 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x1215172cu);
  /* 1215172c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215172f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151731 call 0x12153780 */
  push32(0x12151736u); f_12153780();
  /* 12151736 mov esi, esp */
  ESI = (ESP);
  /* 12151738 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215173a push 0x12180418 */
  push32((uint32_t)(0x12180418u));
  /* 1215173f push 0 */
  push32((uint32_t)(0x0u));
  /* 12151741 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x12151747u);
  /* 12151747 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215174a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215174c call 0x12153780 */
  push32(0x12151751u); f_12153780();
  /* 12151751 mov esi, esp */
  ESI = (ESP);
  /* 12151753 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151755 push 0x12180420 */
  push32((uint32_t)(0x12180420u));
  /* 1215175a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215175c call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x12151762u);
  /* 12151762 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151765 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151767 call 0x12153780 */
  push32(0x1215176cu); f_12153780();
  /* 1215176c mov esi, esp */
  ESI = (ESP);
  /* 1215176e push 0 */
  push32((uint32_t)(0x0u));
  /* 12151770 push 0x12180428 */
  push32((uint32_t)(0x12180428u));
  /* 12151775 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151777 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x1215177du);
  /* 1215177d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151780 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151782 call 0x12153780 */
  push32(0x12151787u); f_12153780();
  /* 12151787 mov esi, esp */
  ESI = (ESP);
  /* 12151789 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215178b push 0x12180430 */
  push32((uint32_t)(0x12180430u));
  /* 12151790 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151792 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x12151798u);
  /* 12151798 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215179b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215179d call 0x12153780 */
  push32(0x121517a2u); f_12153780();
  /* 121517a2 mov esi, esp */
  ESI = (ESP);
  /* 121517a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121517a6 push 0x121803e0 */
  push32((uint32_t)(0x121803e0u));
  /* 121517ab push 0 */
  push32((uint32_t)(0x0u));
  /* 121517ad call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x121517b3u);
  /* 121517b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121517b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121517b8 call 0x12153780 */
  push32(0x121517bdu); f_12153780();
  /* 121517bd mov esi, esp */
  ESI = (ESP);
  /* 121517bf push 0 */
  push32((uint32_t)(0x0u));
  /* 121517c1 push 0x121803e8 */
  push32((uint32_t)(0x121803e8u));
  /* 121517c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121517c8 call dword ptr [0x121834b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834b8))), 0x121517ceu);
  /* 121517ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121517d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121517d3 call 0x12153780 */
  push32(0x121517d8u); f_12153780();
  /* 121517d8 pop edi */
  EDI = (pop32());
  /* 121517d9 pop esi */
  ESI = (pop32());
  /* 121517da pop ebx */
  EBX = (pop32());
  /* 121517db add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121517de cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121517e0 call 0x12153780 */
  push32(0x121517e5u); f_12153780();
  /* 121517e5 mov esp, ebp */
  ESP = (EBP);
  /* 121517e7 pop ebp */
  EBP = (pop32());
  /* 121517e8 ret  */
  ESPCHK(0x12151090u, _esp0);
  ESP += 4; return;
}

/* FUN_100019c0 @ 0x121519c0 (5900 bytes, 1729 insns) */
void f_121519c0(void) {
  FTRACE(0x121519c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121519c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121519c1 mov ebp, esp */
  EBP = (ESP);
  /* 121519c3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121519c6 push ebx */
  push32((uint32_t)(EBX));
  /* 121519c7 push esi */
  push32((uint32_t)(ESI));
  /* 121519c8 push edi */
  push32((uint32_t)(EDI));
  /* 121519c9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 121519cc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 121519d1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 121519d6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 121519d8 mov esi, esp */
  ESI = (ESP);
  /* 121519da push 0x32 */
  push32((uint32_t)(0x32u));
  /* 121519dc call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121519e2u);
  /* 121519e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121519e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121519e7 call 0x12153780 */
  push32(0x121519ecu); f_12153780();
  /* 121519ec and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121519f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121519f3 je 0x12151a0b */
  if (C.zf) goto L_12151a0b;
  /* 121519f5 mov esi, esp */
  ESI = (ESP);
  /* 121519f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121519f9 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 121519fb call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12151a01u);
  /* 12151a01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a06 call 0x12153780 */
  push32(0x12151a0bu); f_12153780();
L_12151a0b:;
  /* 12151a0b mov esi, esp */
  ESI = (ESP);
  /* 12151a0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12151a0f call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12151a15u);
  /* 12151a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a1a call 0x12153780 */
  push32(0x12151a1fu); f_12153780();
  /* 12151a1f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12151a24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151a26 je 0x12151eb3 */
  if (C.zf) goto L_12151eb3;
  /* 12151a2c mov esi, esp */
  ESI = (ESP);
  /* 12151a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12151a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151a32 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12151a38u);
  /* 12151a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a3d call 0x12153780 */
  push32(0x12151a42u); f_12153780();
  /* 12151a42 mov esi, esp */
  ESI = (ESP);
  /* 12151a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151a46 call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151a4cu);
  /* 12151a4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a51 call 0x12153780 */
  push32(0x12151a56u); f_12153780();
  /* 12151a56 imul eax, eax, 0x5dc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x5dcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151a5c mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 12151a61 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151a63 mov esi, esp */
  ESI = (ESP);
  /* 12151a65 push ecx */
  push32((uint32_t)(ECX));
  /* 12151a66 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151a6a call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151a70u);
  /* 12151a70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a75 call 0x12153780 */
  push32(0x12151a7au); f_12153780();
  /* 12151a7a mov esi, esp */
  ESI = (ESP);
  /* 12151a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 12151a7e call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151a84u);
  /* 12151a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151a89 call 0x12153780 */
  push32(0x12151a8eu); f_12153780();
  /* 12151a8e imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151a94 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 12151a99 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151a9b mov esi, esp */
  ESI = (ESP);
  /* 12151a9d push edx */
  push32((uint32_t)(EDX));
  /* 12151a9e push 1 */
  push32((uint32_t)(0x1u));
  /* 12151aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151aa2 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151aa8u);
  /* 12151aa8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151aad call 0x12153780 */
  push32(0x12151ab2u); f_12153780();
  /* 12151ab2 mov esi, esp */
  ESI = (ESP);
  /* 12151ab4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151ab6 call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151abcu);
  /* 12151abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151abf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151ac1 call 0x12153780 */
  push32(0x12151ac6u); f_12153780();
  /* 12151ac6 imul eax, eax, 0x514 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x514u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151acc mov ecx, 0x1b58 */
  ECX = (0x1b58u);
  /* 12151ad1 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151ad3 mov esi, esp */
  ESI = (ESP);
  /* 12151ad5 push ecx */
  push32((uint32_t)(ECX));
  /* 12151ad6 push 4 */
  push32((uint32_t)(0x4u));
  /* 12151ad8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151ada call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151ae0u);
  /* 12151ae0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151ae3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151ae5 call 0x12153780 */
  push32(0x12151aeau); f_12153780();
  /* 12151aea mov esi, esp */
  ESI = (ESP);
  /* 12151aec push 0 */
  push32((uint32_t)(0x0u));
  /* 12151aee call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151af4u);
  /* 12151af4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151af7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151af9 call 0x12153780 */
  push32(0x12151afeu); f_12153780();
  /* 12151afe imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151b04 mov edx, 0x1770 */
  EDX = (0x1770u);
  /* 12151b09 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151b0b mov esi, esp */
  ESI = (ESP);
  /* 12151b0d push edx */
  push32((uint32_t)(EDX));
  /* 12151b0e push 2 */
  push32((uint32_t)(0x2u));
  /* 12151b10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b12 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151b18u);
  /* 12151b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151b1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151b1d call 0x12153780 */
  push32(0x12151b22u); f_12153780();
  /* 12151b22 mov esi, esp */
  ESI = (ESP);
  /* 12151b24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b26 call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151b2cu);
  /* 12151b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151b2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151b31 call 0x12153780 */
  push32(0x12151b36u); f_12153780();
  /* 12151b36 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151b3c mov ecx, 0x1770 */
  ECX = (0x1770u);
  /* 12151b41 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151b43 mov esi, esp */
  ESI = (ESP);
  /* 12151b45 push ecx */
  push32((uint32_t)(ECX));
  /* 12151b46 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b4a call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151b50u);
  /* 12151b50 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151b53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151b55 call 0x12153780 */
  push32(0x12151b5au); f_12153780();
  /* 12151b5a mov esi, esp */
  ESI = (ESP);
  /* 12151b5c push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b5e call dword ptr [0x12183428] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183428))), 0x12151b64u);
  /* 12151b64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151b67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151b69 call 0x12153780 */
  push32(0x12151b6eu); f_12153780();
  /* 12151b6e imul eax, eax, 0x514 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x514u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12151b74 mov edx, 0x1b58 */
  EDX = (0x1b58u);
  /* 12151b79 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12151b7b mov esi, esp */
  ESI = (ESP);
  /* 12151b7d push edx */
  push32((uint32_t)(EDX));
  /* 12151b7e push 5 */
  push32((uint32_t)(0x5u));
  /* 12151b80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151b82 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151b88u);
  /* 12151b88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151b8d call 0x12153780 */
  push32(0x12151b92u); f_12153780();
  /* 12151b92 mov esi, esp */
  ESI = (ESP);
  /* 12151b94 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151b99 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151b9b push 1 */
  push32((uint32_t)(0x1u));
  /* 12151b9d call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151ba3u);
  /* 12151ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151ba6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151ba8 call 0x12153780 */
  push32(0x12151badu); f_12153780();
  /* 12151bad mov esi, esp */
  ESI = (ESP);
  /* 12151baf push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151bb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151bb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151bb8 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151bbeu);
  /* 12151bbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151bc3 call 0x12153780 */
  push32(0x12151bc8u); f_12153780();
  /* 12151bc8 mov esi, esp */
  ESI = (ESP);
  /* 12151bca push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151bcf push 4 */
  push32((uint32_t)(0x4u));
  /* 12151bd1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151bd3 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151bd9u);
  /* 12151bd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151bdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151bde call 0x12153780 */
  push32(0x12151be3u); f_12153780();
  /* 12151be3 mov esi, esp */
  ESI = (ESP);
  /* 12151be5 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151bea push 2 */
  push32((uint32_t)(0x2u));
  /* 12151bec push 1 */
  push32((uint32_t)(0x1u));
  /* 12151bee call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151bf4u);
  /* 12151bf4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151bf9 call 0x12153780 */
  push32(0x12151bfeu); f_12153780();
  /* 12151bfe mov esi, esp */
  ESI = (ESP);
  /* 12151c00 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151c09 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c0fu);
  /* 12151c0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c14 call 0x12153780 */
  push32(0x12151c19u); f_12153780();
  /* 12151c19 mov esi, esp */
  ESI = (ESP);
  /* 12151c1b push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151c20 push 5 */
  push32((uint32_t)(0x5u));
  /* 12151c22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151c24 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c2au);
  /* 12151c2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c2f call 0x12153780 */
  push32(0x12151c34u); f_12153780();
  /* 12151c34 mov esi, esp */
  ESI = (ESP);
  /* 12151c36 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151c3b push 3 */
  push32((uint32_t)(0x3u));
  /* 12151c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12151c3f call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c45u);
  /* 12151c45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c4a call 0x12153780 */
  push32(0x12151c4fu); f_12153780();
  /* 12151c4f mov esi, esp */
  ESI = (ESP);
  /* 12151c51 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151c56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151c58 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151c5a call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c60u);
  /* 12151c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c65 call 0x12153780 */
  push32(0x12151c6au); f_12153780();
  /* 12151c6a mov esi, esp */
  ESI = (ESP);
  /* 12151c6c push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151c71 push 4 */
  push32((uint32_t)(0x4u));
  /* 12151c73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151c75 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c7bu);
  /* 12151c7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c80 call 0x12153780 */
  push32(0x12151c85u); f_12153780();
  /* 12151c85 mov esi, esp */
  ESI = (ESP);
  /* 12151c87 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151c8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12151c8e push 2 */
  push32((uint32_t)(0x2u));
  /* 12151c90 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151c96u);
  /* 12151c96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151c99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151c9b call 0x12153780 */
  push32(0x12151ca0u); f_12153780();
  /* 12151ca0 mov esi, esp */
  ESI = (ESP);
  /* 12151ca2 push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151ca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151cab call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151cb1u);
  /* 12151cb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151cb4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151cb6 call 0x12153780 */
  push32(0x12151cbbu); f_12153780();
  /* 12151cbb mov esi, esp */
  ESI = (ESP);
  /* 12151cbd push 0x4c4b40 */
  push32((uint32_t)(0x4c4b40u));
  /* 12151cc2 push 5 */
  push32((uint32_t)(0x5u));
  /* 12151cc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151cc6 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151cccu);
  /* 12151ccc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151ccf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151cd1 call 0x12153780 */
  push32(0x12151cd6u); f_12153780();
  /* 12151cd6 mov esi, esp */
  ESI = (ESP);
  /* 12151cd8 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151cdd push 3 */
  push32((uint32_t)(0x3u));
  /* 12151cdf push 3 */
  push32((uint32_t)(0x3u));
  /* 12151ce1 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151ce7u);
  /* 12151ce7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151cea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151cec call 0x12153780 */
  push32(0x12151cf1u); f_12153780();
  /* 12151cf1 mov esi, esp */
  ESI = (ESP);
  /* 12151cf3 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151cf8 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151cfa push 3 */
  push32((uint32_t)(0x3u));
  /* 12151cfc call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151d02u);
  /* 12151d02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d07 call 0x12153780 */
  push32(0x12151d0cu); f_12153780();
  /* 12151d0c mov esi, esp */
  ESI = (ESP);
  /* 12151d0e push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151d13 push 4 */
  push32((uint32_t)(0x4u));
  /* 12151d15 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151d17 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151d1du);
  /* 12151d1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d22 call 0x12153780 */
  push32(0x12151d27u); f_12153780();
  /* 12151d27 mov esi, esp */
  ESI = (ESP);
  /* 12151d29 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151d2e push 2 */
  push32((uint32_t)(0x2u));
  /* 12151d30 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151d32 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151d38u);
  /* 12151d38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d3d call 0x12153780 */
  push32(0x12151d42u); f_12153780();
  /* 12151d42 mov esi, esp */
  ESI = (ESP);
  /* 12151d44 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151d4b push 3 */
  push32((uint32_t)(0x3u));
  /* 12151d4d call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151d53u);
  /* 12151d53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d58 call 0x12153780 */
  push32(0x12151d5du); f_12153780();
  /* 12151d5d mov esi, esp */
  ESI = (ESP);
  /* 12151d5f push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 12151d64 push 5 */
  push32((uint32_t)(0x5u));
  /* 12151d66 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151d68 call dword ptr [0x12183438] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183438))), 0x12151d6eu);
  /* 12151d6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d73 call 0x12153780 */
  push32(0x12151d78u); f_12153780();
  /* 12151d78 mov esi, esp */
  ESI = (ESP);
  /* 12151d7a push 0x1217b21c */
  push32((uint32_t)(0x1217b21cu));
  /* 12151d7f call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12151d85u);
  /* 12151d85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151d8a call 0x12153780 */
  push32(0x12151d8fu); f_12153780();
  /* 12151d8f mov esi, esp */
  ESI = (ESP);
  /* 12151d91 push 0x1217b214 */
  push32((uint32_t)(0x1217b214u));
  /* 12151d96 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12151d9cu);
  /* 12151d9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151d9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151da1 call 0x12153780 */
  push32(0x12151da6u); f_12153780();
  /* 12151da6 mov esi, esp */
  ESI = (ESP);
  /* 12151da8 push 5 */
  push32((uint32_t)(0x5u));
  /* 12151daa push 0 */
  push32((uint32_t)(0x0u));
  /* 12151dac call dword ptr [0x12183434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183434))), 0x12151db2u);
  /* 12151db2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151db5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151db7 call 0x12153780 */
  push32(0x12151dbcu); f_12153780();
  /* 12151dbc mov esi, esp */
  ESI = (ESP);
  /* 12151dbe push 0xa */
  push32((uint32_t)(0xau));
  /* 12151dc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151dc2 call dword ptr [0x12183434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183434))), 0x12151dc8u);
  /* 12151dc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151dcb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151dcd call 0x12153780 */
  push32(0x12151dd2u); f_12153780();
  /* 12151dd2 mov esi, esp */
  ESI = (ESP);
  /* 12151dd4 push 5 */
  push32((uint32_t)(0x5u));
  /* 12151dd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151dd8 call dword ptr [0x12183434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183434))), 0x12151ddeu);
  /* 12151dde add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151de1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151de3 call 0x12153780 */
  push32(0x12151de8u); f_12153780();
  /* 12151de8 mov esi, esp */
  ESI = (ESP);
  /* 12151dea push 0xa */
  push32((uint32_t)(0xau));
  /* 12151dec push 3 */
  push32((uint32_t)(0x3u));
  /* 12151dee call dword ptr [0x12183434] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183434))), 0x12151df4u);
  /* 12151df4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151df9 call 0x12153780 */
  push32(0x12151dfeu); f_12153780();
  /* 12151dfe mov esi, esp */
  ESI = (ESP);
  /* 12151e00 push 0x1217b208 */
  push32((uint32_t)(0x1217b208u));
  /* 12151e05 push 0x1217b158 */
  push32((uint32_t)(0x1217b158u));
  /* 12151e0a call dword ptr [0x12183444] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183444))), 0x12151e10u);
  /* 12151e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e15 call 0x12153780 */
  push32(0x12151e1au); f_12153780();
  /* 12151e1a mov esi, esp */
  ESI = (ESP);
  /* 12151e1c push 1 */
  push32((uint32_t)(0x1u));
  /* 12151e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 12151e20 push 0x12180508 */
  push32((uint32_t)(0x12180508u));
  /* 12151e25 call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12151e2bu);
  /* 12151e2b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e30 call 0x12153780 */
  push32(0x12151e35u); f_12153780();
  /* 12151e35 mov esi, esp */
  ESI = (ESP);
  /* 12151e37 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151e3b push 0x12180510 */
  push32((uint32_t)(0x12180510u));
  /* 12151e40 call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12151e46u);
  /* 12151e46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e4b call 0x12153780 */
  push32(0x12151e50u); f_12153780();
  /* 12151e50 mov esi, esp */
  ESI = (ESP);
  /* 12151e52 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151e54 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151e56 push 0x12180518 */
  push32((uint32_t)(0x12180518u));
  /* 12151e5b call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12151e61u);
  /* 12151e61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e66 call 0x12153780 */
  push32(0x12151e6bu); f_12153780();
  /* 12151e6b mov esi, esp */
  ESI = (ESP);
  /* 12151e6d push 5 */
  push32((uint32_t)(0x5u));
  /* 12151e6f push 1 */
  push32((uint32_t)(0x1u));
  /* 12151e71 push 0x121804d8 */
  push32((uint32_t)(0x121804d8u));
  /* 12151e76 call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12151e7cu);
  /* 12151e7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e81 call 0x12153780 */
  push32(0x12151e86u); f_12153780();
  /* 12151e86 mov esi, esp */
  ESI = (ESP);
  /* 12151e88 push 0x121804d8 */
  push32((uint32_t)(0x121804d8u));
  /* 12151e8d call dword ptr [0x12183440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183440))), 0x12151e93u);
  /* 12151e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151e98 call 0x12153780 */
  push32(0x12151e9du); f_12153780();
  /* 12151e9d mov esi, esp */
  ESI = (ESP);
  /* 12151e9f push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12151ea1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151ea3 call dword ptr [0x12183450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183450))), 0x12151ea9u);
  /* 12151ea9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151eac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151eae call 0x12153780 */
  push32(0x12151eb3u); f_12153780();
L_12151eb3:;
  /* 12151eb3 mov esi, esp */
  ESI = (ESP);
  /* 12151eb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151eb7 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12151ebdu);
  /* 12151ebd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151ec0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151ec2 call 0x12153780 */
  push32(0x12151ec7u); f_12153780();
  /* 12151ec7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12151ecc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151ece je 0x12151f96 */
  if (C.zf) goto L_12151f96;
  /* 12151ed4 mov esi, esp */
  ESI = (ESP);
  /* 12151ed6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151ed8 call dword ptr [0x12183454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183454))), 0x12151edeu);
  /* 12151ede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151ee1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151ee3 call 0x12153780 */
  push32(0x12151ee8u); f_12153780();
  /* 12151ee8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12151eed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151eef je 0x12151f96 */
  if (C.zf) goto L_12151f96;
  /* 12151ef5 mov esi, esp */
  ESI = (ESP);
  /* 12151ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151ef9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12151efb call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12151f01u);
  /* 12151f01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f06 call 0x12153780 */
  push32(0x12151f0bu); f_12153780();
  /* 12151f0b mov esi, esp */
  ESI = (ESP);
  /* 12151f0d push 0x121804f0 */
  push32((uint32_t)(0x121804f0u));
  /* 12151f12 call dword ptr [0x12183440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183440))), 0x12151f18u);
  /* 12151f18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f1d call 0x12153780 */
  push32(0x12151f22u); f_12153780();
  /* 12151f22 mov esi, esp */
  ESI = (ESP);
  /* 12151f24 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12151f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151f28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 12151f2c push 0x1217b1fc */
  push32((uint32_t)(0x1217b1fcu));
  /* 12151f31 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151f33 call dword ptr [0x1218344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218344c))), 0x12151f39u);
  /* 12151f39 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f3e call 0x12153780 */
  push32(0x12151f43u); f_12153780();
  /* 12151f43 mov esi, esp */
  ESI = (ESP);
  /* 12151f45 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12151f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12151f49 push 0 */
  push32((uint32_t)(0x0u));
  /* 12151f4b push 1 */
  push32((uint32_t)(0x1u));
  /* 12151f4d push 0x1217b1fc */
  push32((uint32_t)(0x1217b1fcu));
  /* 12151f52 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151f54 call dword ptr [0x1218344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218344c))), 0x12151f5au);
  /* 12151f5a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f5f call 0x12153780 */
  push32(0x12151f64u); f_12153780();
  /* 12151f64 mov esi, esp */
  ESI = (ESP);
  /* 12151f66 push 0x4e20 */
  push32((uint32_t)(0x4e20u));
  /* 12151f6b push 2 */
  push32((uint32_t)(0x2u));
  /* 12151f6d call dword ptr [0x12183450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183450))), 0x12151f73u);
  /* 12151f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f78 call 0x12153780 */
  push32(0x12151f7du); f_12153780();
  /* 12151f7d mov esi, esp */
  ESI = (ESP);
  /* 12151f7f push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 12151f84 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151f86 call dword ptr [0x12183450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183450))), 0x12151f8cu);
  /* 12151f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151f8f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151f91 call 0x12153780 */
  push32(0x12151f96u); f_12153780();
L_12151f96:;
  /* 12151f96 mov esi, esp */
  ESI = (ESP);
  /* 12151f98 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151f9a call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12151fa0u);
  /* 12151fa0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151fa5 call 0x12153780 */
  push32(0x12151faau); f_12153780();
  /* 12151faa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12151faf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151fb1 je 0x12152081 */
  if (C.zf) goto L_12152081;
  /* 12151fb7 mov esi, esp */
  ESI = (ESP);
  /* 12151fb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151fbb push 0x12180508 */
  push32((uint32_t)(0x12180508u));
  /* 12151fc0 call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x12151fc6u);
  /* 12151fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151fc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151fcb call 0x12153780 */
  push32(0x12151fd0u); f_12153780();
  /* 12151fd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151fd2 jg 0x1215200e */
  if ((!C.zf&&C.sf==C.of)) goto L_1215200e;
  /* 12151fd4 mov esi, esp */
  ESI = (ESP);
  /* 12151fd6 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151fd8 push 0x12180510 */
  push32((uint32_t)(0x12180510u));
  /* 12151fdd call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x12151fe3u);
  /* 12151fe3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12151fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12151fe8 call 0x12153780 */
  push32(0x12151fedu); f_12153780();
  /* 12151fed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12151fef jg 0x1215200e */
  if ((!C.zf&&C.sf==C.of)) goto L_1215200e;
  /* 12151ff1 mov esi, esp */
  ESI = (ESP);
  /* 12151ff3 push 3 */
  push32((uint32_t)(0x3u));
  /* 12151ff5 push 0x12180518 */
  push32((uint32_t)(0x12180518u));
  /* 12151ffa call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x12152000u);
  /* 12152000 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152003 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152005 call 0x12153780 */
  push32(0x1215200au); f_12153780();
  /* 1215200a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215200c jle 0x12152081 */
  if ((C.zf||C.sf!=C.of)) goto L_12152081;
L_1215200e:;
  /* 1215200e mov esi, esp */
  ESI = (ESP);
  /* 12152010 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152012 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152014 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215201au);
  /* 1215201a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215201d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215201f call 0x12153780 */
  push32(0x12152024u); f_12153780();
  /* 12152024 mov esi, esp */
  ESI = (ESP);
  /* 12152026 push 0x1217b1f4 */
  push32((uint32_t)(0x1217b1f4u));
  /* 1215202b call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152031u);
  /* 12152031 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152034 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152036 call 0x12153780 */
  push32(0x1215203bu); f_12153780();
  /* 1215203b mov esi, esp */
  ESI = (ESP);
  /* 1215203d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215203f push 0x12180450 */
  push32((uint32_t)(0x12180450u));
  /* 12152044 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x1215204au);
  /* 1215204a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215204d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215204f call 0x12153780 */
  push32(0x12152054u); f_12153780();
  /* 12152054 mov esi, esp */
  ESI = (ESP);
  /* 12152056 push 0x1217b1ec */
  push32((uint32_t)(0x1217b1ecu));
  /* 1215205b call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152061u);
  /* 12152061 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152064 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152066 call 0x12153780 */
  push32(0x1215206bu); f_12153780();
  /* 1215206b mov esi, esp */
  ESI = (ESP);
  /* 1215206d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215206f push 2 */
  push32((uint32_t)(0x2u));
  /* 12152071 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152077u);
  /* 12152077 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215207a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215207c call 0x12153780 */
  push32(0x12152081u); f_12153780();
L_12152081:;
  /* 12152081 mov esi, esp */
  ESI = (ESP);
  /* 12152083 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152085 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215208bu);
  /* 1215208b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215208e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152090 call 0x12153780 */
  push32(0x12152095u); f_12153780();
  /* 12152095 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215209a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215209c je 0x12152186 */
  if (C.zf) goto L_12152186;
  /* 121520a2 mov esi, esp */
  ESI = (ESP);
  /* 121520a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 121520a6 push 0x12180508 */
  push32((uint32_t)(0x12180508u));
  /* 121520ab call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x121520b1u);
  /* 121520b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121520b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121520b6 call 0x12153780 */
  push32(0x121520bbu); f_12153780();
  /* 121520bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121520bd jg 0x121520fd */
  if ((!C.zf&&C.sf==C.of)) goto L_121520fd;
  /* 121520bf mov esi, esp */
  ESI = (ESP);
  /* 121520c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121520c3 push 0x12180510 */
  push32((uint32_t)(0x12180510u));
  /* 121520c8 call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x121520ceu);
  /* 121520ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121520d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121520d3 call 0x12153780 */
  push32(0x121520d8u); f_12153780();
  /* 121520d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121520da jg 0x121520fd */
  if ((!C.zf&&C.sf==C.of)) goto L_121520fd;
  /* 121520dc mov esi, esp */
  ESI = (ESP);
  /* 121520de push 1 */
  push32((uint32_t)(0x1u));
  /* 121520e0 push 0x12180518 */
  push32((uint32_t)(0x12180518u));
  /* 121520e5 call dword ptr [0x1218345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218345c))), 0x121520ebu);
  /* 121520eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121520ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121520f0 call 0x12153780 */
  push32(0x121520f5u); f_12153780();
  /* 121520f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121520f7 jle 0x12152186 */
  if ((C.zf||C.sf!=C.of)) goto L_12152186;
L_121520fd:;
  /* 121520fd mov esi, esp */
  ESI = (ESP);
  /* 121520ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12152101 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152103 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152109u);
  /* 12152109 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215210c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215210e call 0x12153780 */
  push32(0x12152113u); f_12153780();
  /* 12152113 mov esi, esp */
  ESI = (ESP);
  /* 12152115 push 0x1217b1f4 */
  push32((uint32_t)(0x1217b1f4u));
  /* 1215211a call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152120u);
  /* 12152120 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152123 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152125 call 0x12153780 */
  push32(0x1215212au); f_12153780();
  /* 1215212a mov esi, esp */
  ESI = (ESP);
  /* 1215212c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215212e push 0x12180450 */
  push32((uint32_t)(0x12180450u));
  /* 12152133 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152139u);
  /* 12152139 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215213c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215213e call 0x12153780 */
  push32(0x12152143u); f_12153780();
  /* 12152143 mov esi, esp */
  ESI = (ESP);
  /* 12152145 push 0x1217b1ec */
  push32((uint32_t)(0x1217b1ecu));
  /* 1215214a call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152150u);
  /* 12152150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152153 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152155 call 0x12153780 */
  push32(0x1215215au); f_12153780();
  /* 1215215a mov esi, esp */
  ESI = (ESP);
  /* 1215215c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215215e push 2 */
  push32((uint32_t)(0x2u));
  /* 12152160 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152166u);
  /* 12152166 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215216b call 0x12153780 */
  push32(0x12152170u); f_12153780();
  /* 12152170 mov esi, esp */
  ESI = (ESP);
  /* 12152172 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12152174 push 6 */
  push32((uint32_t)(0x6u));
  /* 12152176 call dword ptr [0x12183450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183450))), 0x1215217cu);
  /* 1215217c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215217f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152181 call 0x12153780 */
  push32(0x12152186u); f_12153780();
L_12152186:;
  /* 12152186 mov esi, esp */
  ESI = (ESP);
  /* 12152188 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1215218a call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152190u);
  /* 12152190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152195 call 0x12153780 */
  push32(0x1215219au); f_12153780();
  /* 1215219a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215219f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121521a1 je 0x12152271 */
  if (C.zf) goto L_12152271;
  /* 121521a7 mov esi, esp */
  ESI = (ESP);
  /* 121521a9 push 6 */
  push32((uint32_t)(0x6u));
  /* 121521ab call dword ptr [0x12183454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183454))), 0x121521b1u);
  /* 121521b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121521b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121521b6 call 0x12153780 */
  push32(0x121521bbu); f_12153780();
  /* 121521bb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121521c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121521c2 je 0x12152271 */
  if (C.zf) goto L_12152271;
  /* 121521c8 mov esi, esp */
  ESI = (ESP);
  /* 121521ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121521cc push 0x17 */
  push32((uint32_t)(0x17u));
  /* 121521ce call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121521d4u);
  /* 121521d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121521d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121521d9 call 0x12153780 */
  push32(0x121521deu); f_12153780();
  /* 121521de mov esi, esp */
  ESI = (ESP);
  /* 121521e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121521e2 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 121521e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121521e9 call dword ptr [0x12183468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183468))), 0x121521efu);
  /* 121521ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121521f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121521f4 call 0x12153780 */
  push32(0x121521f9u); f_12153780();
  /* 121521f9 mov esi, esp */
  ESI = (ESP);
  /* 121521fb push 0 */
  push32((uint32_t)(0x0u));
  /* 121521fd push 0x121804a8 */
  push32((uint32_t)(0x121804a8u));
  /* 12152202 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152208u);
  /* 12152208 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215220b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215220d call 0x12153780 */
  push32(0x12152212u); f_12153780();
  /* 12152212 mov esi, esp */
  ESI = (ESP);
  /* 12152214 push 0x1217b1e0 */
  push32((uint32_t)(0x1217b1e0u));
  /* 12152219 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x1215221fu);
  /* 1215221f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152222 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152224 call 0x12153780 */
  push32(0x12152229u); f_12153780();
  /* 12152229 mov esi, esp */
  ESI = (ESP);
  /* 1215222b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215222d push 0x121804a8 */
  push32((uint32_t)(0x121804a8u));
  /* 12152232 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152238u);
  /* 12152238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215223b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215223d call 0x12153780 */
  push32(0x12152242u); f_12153780();
  /* 12152242 mov esi, esp */
  ESI = (ESP);
  /* 12152244 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152246 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152248 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x1215224eu);
  /* 1215224e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152251 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152253 call 0x12153780 */
  push32(0x12152258u); f_12153780();
  /* 12152258 mov esi, esp */
  ESI = (ESP);
  /* 1215225a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215225c push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152261 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152267u);
  /* 12152267 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215226a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215226c call 0x12153780 */
  push32(0x12152271u); f_12153780();
L_12152271:;
  /* 12152271 mov esi, esp */
  ESI = (ESP);
  /* 12152273 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152275 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215227bu);
  /* 1215227b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215227e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152280 call 0x12153780 */
  push32(0x12152285u); f_12153780();
  /* 12152285 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215228a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215228c jne 0x12152305 */
  if (!C.zf) goto L_12152305;
  /* 1215228e mov esi, esp */
  ESI = (ESP);
  /* 12152290 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152292 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152298u);
  /* 12152298 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215229b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215229d call 0x12153780 */
  push32(0x121522a2u); f_12153780();
  /* 121522a2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121522a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121522a9 je 0x12152305 */
  if (C.zf) goto L_12152305;
  /* 121522ab mov esi, esp */
  ESI = (ESP);
  /* 121522ad push 5 */
  push32((uint32_t)(0x5u));
  /* 121522af call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121522b5u);
  /* 121522b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121522b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121522ba call 0x12153780 */
  push32(0x121522bfu); f_12153780();
  /* 121522bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121522c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121522c6 je 0x12152305 */
  if (C.zf) goto L_12152305;
  /* 121522c8 mov esi, esp */
  ESI = (ESP);
  /* 121522ca push 0x121804e8 */
  push32((uint32_t)(0x121804e8u));
  /* 121522cf push 0x12180468 */
  push32((uint32_t)(0x12180468u));
  /* 121522d4 call dword ptr [0x1218346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218346c))), 0x121522dau);
  /* 121522da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121522dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121522df call 0x12153780 */
  push32(0x121522e4u); f_12153780();
  /* 121522e4 mov esi, esp */
  ESI = (ESP);
  /* 121522e6 push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 121522eb push 0x121804a0 */
  push32((uint32_t)(0x121804a0u));
  /* 121522f0 push 0x12180468 */
  push32((uint32_t)(0x12180468u));
  /* 121522f5 call dword ptr [0x12183464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183464))), 0x121522fbu);
  /* 121522fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121522fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152300 call 0x12153780 */
  push32(0x12152305u); f_12153780();
L_12152305:;
  /* 12152305 mov esi, esp */
  ESI = (ESP);
  /* 12152307 push 5 */
  push32((uint32_t)(0x5u));
  /* 12152309 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215230fu);
  /* 1215230f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152312 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152314 call 0x12153780 */
  push32(0x12152319u); f_12153780();
  /* 12152319 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215231e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152320 je 0x12152354 */
  if (C.zf) goto L_12152354;
  /* 12152322 mov esi, esp */
  ESI = (ESP);
  /* 12152324 push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 12152329 call dword ptr [0x12183474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183474))), 0x1215232fu);
  /* 1215232f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152332 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152334 call 0x12153780 */
  push32(0x12152339u); f_12153780();
  /* 12152339 cmp eax, 0x19 */
  { uint32_t _a=(EAX),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215233c jle 0x12152354 */
  if ((C.zf||C.sf!=C.of)) goto L_12152354;
  /* 1215233e mov esi, esp */
  ESI = (ESP);
  /* 12152340 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152342 push 5 */
  push32((uint32_t)(0x5u));
  /* 12152344 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215234au);
  /* 1215234a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215234d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215234f call 0x12153780 */
  push32(0x12152354u); f_12153780();
L_12152354:;
  /* 12152354 mov esi, esp */
  ESI = (ESP);
  /* 12152356 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152358 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215235eu);
  /* 1215235e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152361 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152363 call 0x12153780 */
  push32(0x12152368u); f_12153780();
  /* 12152368 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215236d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215236f jne 0x12152409 */
  if (!C.zf) goto L_12152409;
  /* 12152375 mov esi, esp */
  ESI = (ESP);
  /* 12152377 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152379 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215237fu);
  /* 1215237f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152382 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152384 call 0x12153780 */
  push32(0x12152389u); f_12153780();
  /* 12152389 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215238e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152390 je 0x12152409 */
  if (C.zf) goto L_12152409;
  /* 12152392 mov esi, esp */
  ESI = (ESP);
  /* 12152394 push 6 */
  push32((uint32_t)(0x6u));
  /* 12152396 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215239cu);
  /* 1215239c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215239f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121523a1 call 0x12153780 */
  push32(0x121523a6u); f_12153780();
  /* 121523a6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121523ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121523ad je 0x12152409 */
  if (C.zf) goto L_12152409;
  /* 121523af mov esi, esp */
  ESI = (ESP);
  /* 121523b1 push 0xa */
  push32((uint32_t)(0xau));
  /* 121523b3 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121523b9u);
  /* 121523b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121523bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121523be call 0x12153780 */
  push32(0x121523c3u); f_12153780();
  /* 121523c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121523c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121523ca jne 0x12152409 */
  if (!C.zf) goto L_12152409;
  /* 121523cc mov esi, esp */
  ESI = (ESP);
  /* 121523ce push 0x121804e8 */
  push32((uint32_t)(0x121804e8u));
  /* 121523d3 push 0x12180470 */
  push32((uint32_t)(0x12180470u));
  /* 121523d8 call dword ptr [0x1218346c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218346c))), 0x121523deu);
  /* 121523de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121523e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121523e3 call 0x12153780 */
  push32(0x121523e8u); f_12153780();
  /* 121523e8 mov esi, esp */
  ESI = (ESP);
  /* 121523ea push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 121523ef push 0x121804b8 */
  push32((uint32_t)(0x121804b8u));
  /* 121523f4 push 0x12180470 */
  push32((uint32_t)(0x12180470u));
  /* 121523f9 call dword ptr [0x12183464] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183464))), 0x121523ffu);
  /* 121523ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152402 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152404 call 0x12153780 */
  push32(0x12152409u); f_12153780();
L_12152409:;
  /* 12152409 mov esi, esp */
  ESI = (ESP);
  /* 1215240b push 6 */
  push32((uint32_t)(0x6u));
  /* 1215240d call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152413u);
  /* 12152413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152416 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152418 call 0x12153780 */
  push32(0x1215241du); f_12153780();
  /* 1215241d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152422 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152424 je 0x12152458 */
  if (C.zf) goto L_12152458;
  /* 12152426 mov esi, esp */
  ESI = (ESP);
  /* 12152428 push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 1215242d call dword ptr [0x12183474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183474))), 0x12152433u);
  /* 12152433 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152436 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152438 call 0x12153780 */
  push32(0x1215243du); f_12153780();
  /* 1215243d cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152440 jle 0x12152458 */
  if ((C.zf||C.sf!=C.of)) goto L_12152458;
  /* 12152442 mov esi, esp */
  ESI = (ESP);
  /* 12152444 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152446 push 6 */
  push32((uint32_t)(0x6u));
  /* 12152448 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215244eu);
  /* 1215244e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152453 call 0x12153780 */
  push32(0x12152458u); f_12153780();
L_12152458:;
  /* 12152458 mov esi, esp */
  ESI = (ESP);
  /* 1215245a push 3 */
  push32((uint32_t)(0x3u));
  /* 1215245c call dword ptr [0x12183454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183454))), 0x12152462u);
  /* 12152462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152467 call 0x12153780 */
  push32(0x1215246cu); f_12153780();
  /* 1215246c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152473 je 0x12152793 */
  if (C.zf) goto L_12152793;
  /* 12152479 mov esi, esp */
  ESI = (ESP);
  /* 1215247b push 0xf */
  push32((uint32_t)(0xfu));
  /* 1215247d call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152483u);
  /* 12152483 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152486 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152488 call 0x12153780 */
  push32(0x1215248du); f_12153780();
  /* 1215248d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152494 je 0x121524c3 */
  if (C.zf) goto L_121524c3;
  /* 12152496 mov esi, esp */
  ESI = (ESP);
  /* 12152498 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215249a push 0xf */
  push32((uint32_t)(0xfu));
  /* 1215249c call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121524a2u);
  /* 121524a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121524a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121524a7 call 0x12153780 */
  push32(0x121524acu); f_12153780();
  /* 121524ac mov esi, esp */
  ESI = (ESP);
  /* 121524ae push 0x1217b1d4 */
  push32((uint32_t)(0x1217b1d4u));
  /* 121524b3 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x121524b9u);
  /* 121524b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121524bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121524be call 0x12153780 */
  push32(0x121524c3u); f_12153780();
L_121524c3:;
  /* 121524c3 mov esi, esp */
  ESI = (ESP);
  /* 121524c5 push 3 */
  push32((uint32_t)(0x3u));
  /* 121524c7 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121524cdu);
  /* 121524cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121524d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121524d2 call 0x12153780 */
  push32(0x121524d7u); f_12153780();
  /* 121524d7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121524dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121524de jne 0x12152606 */
  if (!C.zf) goto L_12152606;
  /* 121524e4 mov esi, esp */
  ESI = (ESP);
  /* 121524e6 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121524e8 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121524eeu);
  /* 121524ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121524f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121524f3 call 0x12153780 */
  push32(0x121524f8u); f_12153780();
  /* 121524f8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121524fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121524ff je 0x12152606 */
  if (C.zf) goto L_12152606;
  /* 12152505 mov esi, esp */
  ESI = (ESP);
  /* 12152507 push 0xd */
  push32((uint32_t)(0xdu));
  /* 12152509 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215250fu);
  /* 1215250f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152514 call 0x12153780 */
  push32(0x12152519u); f_12153780();
  /* 12152519 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215251e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152520 je 0x12152606 */
  if (C.zf) goto L_12152606;
  /* 12152526 mov esi, esp */
  ESI = (ESP);
  /* 12152528 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215252a push 0xb */
  push32((uint32_t)(0xbu));
  /* 1215252c call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152532u);
  /* 12152532 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152535 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152537 call 0x12153780 */
  push32(0x1215253cu); f_12153780();
  /* 1215253c mov esi, esp */
  ESI = (ESP);
  /* 1215253e push 0 */
  push32((uint32_t)(0x0u));
  /* 12152540 push 0x12180500 */
  push32((uint32_t)(0x12180500u));
  /* 12152545 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152547 call dword ptr [0x12183468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183468))), 0x1215254du);
  /* 1215254d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152550 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152552 call 0x12153780 */
  push32(0x12152557u); f_12153780();
  /* 12152557 mov esi, esp */
  ESI = (ESP);
  /* 12152559 push 0xf0 */
  push32((uint32_t)(0xf0u));
  /* 1215255e push 0x121804f8 */
  push32((uint32_t)(0x121804f8u));
  /* 12152563 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152565 push 0x121804b8 */
  push32((uint32_t)(0x121804b8u));
  /* 1215256a push 0x12180490 */
  push32((uint32_t)(0x12180490u));
  /* 1215256f push 0x12180540 */
  push32((uint32_t)(0x12180540u));
  /* 12152574 call dword ptr [0x12183478] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183478))), 0x1215257au);
  /* 1215257a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215257f call 0x12153780 */
  push32(0x12152584u); f_12153780();
  /* 12152584 mov esi, esp */
  ESI = (ESP);
  /* 12152586 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152588 push 0x12180540 */
  push32((uint32_t)(0x12180540u));
  /* 1215258d call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152593u);
  /* 12152593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152596 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152598 call 0x12153780 */
  push32(0x1215259du); f_12153780();
  /* 1215259d mov esi, esp */
  ESI = (ESP);
  /* 1215259f push 0 */
  push32((uint32_t)(0x0u));
  /* 121525a1 push 0xc8 */
  push32((uint32_t)(0xc8u));
  /* 121525a6 push 0x121804e8 */
  push32((uint32_t)(0x121804e8u));
  /* 121525ab push 2 */
  push32((uint32_t)(0x2u));
  /* 121525ad call dword ptr [0x12183470] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183470))), 0x121525b3u);
  /* 121525b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121525b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121525b8 call 0x12153780 */
  push32(0x121525bdu); f_12153780();
  /* 121525bd mov esi, esp */
  ESI = (ESP);
  /* 121525bf push 0 */
  push32((uint32_t)(0x0u));
  /* 121525c1 call dword ptr [0x12183480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183480))), 0x121525c7u);
  /* 121525c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121525ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121525cc call 0x12153780 */
  push32(0x121525d1u); f_12153780();
  /* 121525d1 mov esi, esp */
  ESI = (ESP);
  /* 121525d3 push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 121525d8 push 0x12180540 */
  push32((uint32_t)(0x12180540u));
  /* 121525dd call dword ptr [0x12183484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183484))), 0x121525e3u);
  /* 121525e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121525e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121525e8 call 0x12153780 */
  push32(0x121525edu); f_12153780();
  /* 121525ed mov esi, esp */
  ESI = (ESP);
  /* 121525ef push 0 */
  push32((uint32_t)(0x0u));
  /* 121525f1 push 0x12180500 */
  push32((uint32_t)(0x12180500u));
  /* 121525f6 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x121525fcu);
  /* 121525fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121525ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152601 call 0x12153780 */
  push32(0x12152606u); f_12153780();
L_12152606:;
  /* 12152606 mov esi, esp */
  ESI = (ESP);
  /* 12152608 push 3 */
  push32((uint32_t)(0x3u));
  /* 1215260a call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152610u);
  /* 12152610 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152613 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152615 call 0x12153780 */
  push32(0x1215261au); f_12153780();
  /* 1215261a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215261f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152621 jne 0x121526f9 */
  if (!C.zf) goto L_121526f9;
  /* 12152627 mov esi, esp */
  ESI = (ESP);
  /* 12152629 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1215262b call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152631u);
  /* 12152631 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152634 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152636 call 0x12153780 */
  push32(0x1215263bu); f_12153780();
  /* 1215263b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152642 je 0x121526f9 */
  if (C.zf) goto L_121526f9;
  /* 12152648 mov esi, esp */
  ESI = (ESP);
  /* 1215264a push 2 */
  push32((uint32_t)(0x2u));
  /* 1215264c push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 12152651 call dword ptr [0x1218347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218347c))), 0x12152657u);
  /* 12152657 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215265a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215265c call 0x12153780 */
  push32(0x12152661u); f_12153780();
  /* 12152661 cmp eax, 0x64 */
  { uint32_t _a=(EAX),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152664 jle 0x121526f9 */
  if ((C.zf||C.sf!=C.of)) goto L_121526f9;
  /* 1215266a mov esi, esp */
  ESI = (ESP);
  /* 1215266c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215266e push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 12152673 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152679u);
  /* 12152679 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215267c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215267e call 0x12153780 */
  push32(0x12152683u); f_12153780();
  /* 12152683 mov esi, esp */
  ESI = (ESP);
  /* 12152685 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152687 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152689 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x1215268fu);
  /* 1215268f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152692 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152694 call 0x12153780 */
  push32(0x12152699u); f_12153780();
  /* 12152699 mov esi, esp */
  ESI = (ESP);
  /* 1215269b push 0x12180550 */
  push32((uint32_t)(0x12180550u));
  /* 121526a0 push 0x12180548 */
  push32((uint32_t)(0x12180548u));
  /* 121526a5 call dword ptr [0x12183484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183484))), 0x121526abu);
  /* 121526ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121526ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121526b0 call 0x12153780 */
  push32(0x121526b5u); f_12153780();
  /* 121526b5 mov esi, esp */
  ESI = (ESP);
  /* 121526b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121526b9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 121526bb call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121526c1u);
  /* 121526c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121526c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121526c6 call 0x12153780 */
  push32(0x121526cbu); f_12153780();
  /* 121526cb mov esi, esp */
  ESI = (ESP);
  /* 121526cd push 0 */
  push32((uint32_t)(0x0u));
  /* 121526cf push 0xd */
  push32((uint32_t)(0xdu));
  /* 121526d1 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121526d7u);
  /* 121526d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121526da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121526dc call 0x12153780 */
  push32(0x121526e1u); f_12153780();
  /* 121526e1 mov esi, esp */
  ESI = (ESP);
  /* 121526e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121526e5 push 0xe */
  push32((uint32_t)(0xeu));
  /* 121526e7 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121526edu);
  /* 121526ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121526f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121526f2 call 0x12153780 */
  push32(0x121526f7u); f_12153780();
  /* 121526f7 jmp 0x1215270f */
  goto L_1215270f;
L_121526f9:;
  /* 121526f9 mov esi, esp */
  ESI = (ESP);
  /* 121526fb push 1 */
  push32((uint32_t)(0x1u));
  /* 121526fd push 0xb */
  push32((uint32_t)(0xbu));
  /* 121526ff call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152705u);
  /* 12152705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152708 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215270a call 0x12153780 */
  push32(0x1215270fu); f_12153780();
L_1215270f:;
  /* 1215270f mov esi, esp */
  ESI = (ESP);
  /* 12152711 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152713 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152719u);
  /* 12152719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215271c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215271e call 0x12153780 */
  push32(0x12152723u); f_12153780();
  /* 12152723 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152728 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215272a jne 0x12152793 */
  if (!C.zf) goto L_12152793;
  /* 1215272c mov esi, esp */
  ESI = (ESP);
  /* 1215272e push 0xe */
  push32((uint32_t)(0xeu));
  /* 12152730 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152736u);
  /* 12152736 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152739 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215273b call 0x12153780 */
  push32(0x12152740u); f_12153780();
  /* 12152740 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152747 jne 0x12152793 */
  if (!C.zf) goto L_12152793;
  /* 12152749 mov esi, esp */
  ESI = (ESP);
  /* 1215274b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215274d push 0x12180550 */
  push32((uint32_t)(0x12180550u));
  /* 12152752 call dword ptr [0x1218347c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218347c))), 0x12152758u);
  /* 12152758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215275b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215275d call 0x12153780 */
  push32(0x12152762u); f_12153780();
  /* 12152762 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152765 jge 0x12152793 */
  if ((C.sf==C.of)) goto L_12152793;
  /* 12152767 mov esi, esp */
  ESI = (ESP);
  /* 12152769 push 1 */
  push32((uint32_t)(0x1u));
  /* 1215276b push 0xd */
  push32((uint32_t)(0xdu));
  /* 1215276d call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152773u);
  /* 12152773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152776 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152778 call 0x12153780 */
  push32(0x1215277du); f_12153780();
  /* 1215277d mov esi, esp */
  ESI = (ESP);
  /* 1215277f push 1 */
  push32((uint32_t)(0x1u));
  /* 12152781 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12152783 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152789u);
  /* 12152789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215278c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215278e call 0x12153780 */
  push32(0x12152793u); f_12153780();
L_12152793:;
  /* 12152793 mov esi, esp */
  ESI = (ESP);
  /* 12152795 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152797 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215279du);
  /* 1215279d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121527a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121527a2 call 0x12153780 */
  push32(0x121527a7u); f_12153780();
  /* 121527a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121527ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121527ae jne 0x12152838 */
  if (!C.zf) goto L_12152838;
  /* 121527b4 mov esi, esp */
  ESI = (ESP);
  /* 121527b6 push 5 */
  push32((uint32_t)(0x5u));
  /* 121527b8 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121527beu);
  /* 121527be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121527c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121527c3 call 0x12153780 */
  push32(0x121527c8u); f_12153780();
  /* 121527c8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121527cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121527cf jne 0x12152838 */
  if (!C.zf) goto L_12152838;
  /* 121527d1 mov esi, esp */
  ESI = (ESP);
  /* 121527d3 push 6 */
  push32((uint32_t)(0x6u));
  /* 121527d5 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121527dbu);
  /* 121527db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121527de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121527e0 call 0x12153780 */
  push32(0x121527e5u); f_12153780();
  /* 121527e5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121527ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121527ec jne 0x12152838 */
  if (!C.zf) goto L_12152838;
  /* 121527ee mov esi, esp */
  ESI = (ESP);
  /* 121527f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121527f2 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121527f8u);
  /* 121527f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121527fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121527fd call 0x12153780 */
  push32(0x12152802u); f_12153780();
  /* 12152802 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152807 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152809 je 0x12152838 */
  if (C.zf) goto L_12152838;
  /* 1215280b mov esi, esp */
  ESI = (ESP);
  /* 1215280d push 0x1217b1cc */
  push32((uint32_t)(0x1217b1ccu));
  /* 12152812 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152818u);
  /* 12152818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215281b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215281d call 0x12153780 */
  push32(0x12152822u); f_12153780();
  /* 12152822 mov esi, esp */
  ESI = (ESP);
  /* 12152824 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152826 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152828 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215282eu);
  /* 1215282e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152831 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152833 call 0x12153780 */
  push32(0x12152838u); f_12153780();
L_12152838:;
  /* 12152838 mov esi, esp */
  ESI = (ESP);
  /* 1215283a push 3 */
  push32((uint32_t)(0x3u));
  /* 1215283c call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152842u);
  /* 12152842 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152847 call 0x12153780 */
  push32(0x1215284cu); f_12153780();
  /* 1215284c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152851 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152853 jne 0x121528dd */
  if (!C.zf) goto L_121528dd;
  /* 12152859 mov esi, esp */
  ESI = (ESP);
  /* 1215285b push 5 */
  push32((uint32_t)(0x5u));
  /* 1215285d call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152863u);
  /* 12152863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152866 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152868 call 0x12153780 */
  push32(0x1215286du); f_12153780();
  /* 1215286d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152872 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152874 jne 0x121528dd */
  if (!C.zf) goto L_121528dd;
  /* 12152876 mov esi, esp */
  ESI = (ESP);
  /* 12152878 push 0xa */
  push32((uint32_t)(0xau));
  /* 1215287a call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152880u);
  /* 12152880 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152883 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152885 call 0x12153780 */
  push32(0x1215288au); f_12153780();
  /* 1215288a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215288f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152891 je 0x121528dd */
  if (C.zf) goto L_121528dd;
  /* 12152893 mov esi, esp */
  ESI = (ESP);
  /* 12152895 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152897 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x1215289du);
  /* 1215289d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121528a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121528a2 call 0x12153780 */
  push32(0x121528a7u); f_12153780();
  /* 121528a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121528ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121528ae je 0x121528dd */
  if (C.zf) goto L_121528dd;
  /* 121528b0 mov esi, esp */
  ESI = (ESP);
  /* 121528b2 push 0x1217b1cc */
  push32((uint32_t)(0x1217b1ccu));
  /* 121528b7 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x121528bdu);
  /* 121528bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121528c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121528c2 call 0x12153780 */
  push32(0x121528c7u); f_12153780();
  /* 121528c7 mov esi, esp */
  ESI = (ESP);
  /* 121528c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121528cb push 4 */
  push32((uint32_t)(0x4u));
  /* 121528cd call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x121528d3u);
  /* 121528d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121528d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121528d8 call 0x12153780 */
  push32(0x121528ddu); f_12153780();
L_121528dd:;
  /* 121528dd mov esi, esp */
  ESI = (ESP);
  /* 121528df push 7 */
  push32((uint32_t)(0x7u));
  /* 121528e1 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121528e7u);
  /* 121528e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121528ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121528ec call 0x12153780 */
  push32(0x121528f1u); f_12153780();
  /* 121528f1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121528f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121528f8 je 0x121529dc */
  if (C.zf) goto L_121529dc;
  /* 121528fe mov esi, esp */
  ESI = (ESP);
  /* 12152900 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152902 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152908u);
  /* 12152908 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215290b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215290d call 0x12153780 */
  push32(0x12152912u); f_12153780();
  /* 12152912 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152917 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152919 jne 0x121529dc */
  if (!C.zf) goto L_121529dc;
  /* 1215291f mov esi, esp */
  ESI = (ESP);
  /* 12152921 push 0x12180478 */
  push32((uint32_t)(0x12180478u));
  /* 12152926 push 0x121804c8 */
  push32((uint32_t)(0x121804c8u));
  /* 1215292b call dword ptr [0x1218348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218348c))), 0x12152931u);
  /* 12152931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152934 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152936 call 0x12153780 */
  push32(0x1215293bu); f_12153780();
  /* 1215293b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215293d jle 0x121529dc */
  if ((C.zf||C.sf!=C.of)) goto L_121529dc;
  /* 12152943 mov esi, esp */
  ESI = (ESP);
  /* 12152945 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152947 push 7 */
  push32((uint32_t)(0x7u));
  /* 12152949 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215294fu);
  /* 1215294f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152954 call 0x12153780 */
  push32(0x12152959u); f_12153780();
  /* 12152959 mov esi, esp */
  ESI = (ESP);
  /* 1215295b push 0x1217b1c4 */
  push32((uint32_t)(0x1217b1c4u));
  /* 12152960 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152966u);
  /* 12152966 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152969 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215296b call 0x12153780 */
  push32(0x12152970u); f_12153780();
  /* 12152970 mov esi, esp */
  ESI = (ESP);
  /* 12152972 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152974 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152976 push 0x121804c0 */
  push32((uint32_t)(0x121804c0u));
  /* 1215297b call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12152981u);
  /* 12152981 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152986 call 0x12153780 */
  push32(0x1215298bu); f_12153780();
  /* 1215298b mov esi, esp */
  ESI = (ESP);
  /* 1215298d push 0xfffff830 */
  push32((uint32_t)(0xfffff830u));
  /* 12152992 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152994 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152996 call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x1215299cu);
  /* 1215299c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215299f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121529a1 call 0x12153780 */
  push32(0x121529a6u); f_12153780();
  /* 121529a6 mov esi, esp */
  ESI = (ESP);
  /* 121529a8 push 0xfffffc18 */
  push32((uint32_t)(0xfffffc18u));
  /* 121529ad push 0 */
  push32((uint32_t)(0x0u));
  /* 121529af push 0 */
  push32((uint32_t)(0x0u));
  /* 121529b1 call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x121529b7u);
  /* 121529b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121529ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121529bc call 0x12153780 */
  push32(0x121529c1u); f_12153780();
  /* 121529c1 mov esi, esp */
  ESI = (ESP);
  /* 121529c3 push 0xfffffed4 */
  push32((uint32_t)(0xfffffed4u));
  /* 121529c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 121529ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121529cc call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x121529d2u);
  /* 121529d2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121529d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121529d7 call 0x12153780 */
  push32(0x121529dcu); f_12153780();
L_121529dc:;
  /* 121529dc mov esi, esp */
  ESI = (ESP);
  /* 121529de push 7 */
  push32((uint32_t)(0x7u));
  /* 121529e0 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x121529e6u);
  /* 121529e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121529e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121529eb call 0x12153780 */
  push32(0x121529f0u); f_12153780();
  /* 121529f0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121529f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121529f7 jne 0x12152c4b */
  if (!C.zf) goto L_12152c4b;
  /* 121529fd mov esi, esp */
  ESI = (ESP);
  /* 121529ff push 8 */
  push32((uint32_t)(0x8u));
  /* 12152a01 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152a07u);
  /* 12152a07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a0c call 0x12153780 */
  push32(0x12152a11u); f_12153780();
  /* 12152a11 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152a16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152a18 je 0x12152c4b */
  if (C.zf) goto L_12152c4b;
  /* 12152a1e mov esi, esp */
  ESI = (ESP);
  /* 12152a20 push 0x12180478 */
  push32((uint32_t)(0x12180478u));
  /* 12152a25 push 0x121804c0 */
  push32((uint32_t)(0x121804c0u));
  /* 12152a2a call dword ptr [0x1218348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218348c))), 0x12152a30u);
  /* 12152a30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a35 call 0x12153780 */
  push32(0x12152a3au); f_12153780();
  /* 12152a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152a3c jle 0x12152c4b */
  if ((C.zf||C.sf!=C.of)) goto L_12152c4b;
  /* 12152a42 mov esi, esp */
  ESI = (ESP);
  /* 12152a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152a46 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152a4b push 0 */
  push32((uint32_t)(0x0u));
  /* 12152a4d call dword ptr [0x12183468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183468))), 0x12152a53u);
  /* 12152a53 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a58 call 0x12153780 */
  push32(0x12152a5du); f_12153780();
  /* 12152a5d mov esi, esp */
  ESI = (ESP);
  /* 12152a5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12152a61 push 8 */
  push32((uint32_t)(0x8u));
  /* 12152a63 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152a69u);
  /* 12152a69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a6c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a6e call 0x12153780 */
  push32(0x12152a73u); f_12153780();
  /* 12152a73 mov esi, esp */
  ESI = (ESP);
  /* 12152a75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152a77 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152a79 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152a7fu);
  /* 12152a7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a84 call 0x12153780 */
  push32(0x12152a89u); f_12153780();
  /* 12152a89 mov esi, esp */
  ESI = (ESP);
  /* 12152a8b push 0x1217b1bc */
  push32((uint32_t)(0x1217b1bcu));
  /* 12152a90 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152a96u);
  /* 12152a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152a99 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152a9b call 0x12153780 */
  push32(0x12152aa0u); f_12153780();
  /* 12152aa0 mov esi, esp */
  ESI = (ESP);
  /* 12152aa2 push 0x1217b1b4 */
  push32((uint32_t)(0x1217b1b4u));
  /* 12152aa7 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152aadu);
  /* 12152aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ab0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ab2 call 0x12153780 */
  push32(0x12152ab7u); f_12153780();
  /* 12152ab7 mov esi, esp */
  ESI = (ESP);
  /* 12152ab9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152abb push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 12152ac0 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152ac6u);
  /* 12152ac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ac9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152acb call 0x12153780 */
  push32(0x12152ad0u); f_12153780();
  /* 12152ad0 mov esi, esp */
  ESI = (ESP);
  /* 12152ad2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152ad4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152ad6 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152adcu);
  /* 12152adc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152adf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ae1 call 0x12153780 */
  push32(0x12152ae6u); f_12153780();
  /* 12152ae6 mov esi, esp */
  ESI = (ESP);
  /* 12152ae8 push 0x12180538 */
  push32((uint32_t)(0x12180538u));
  /* 12152aed push 0x12180530 */
  push32((uint32_t)(0x12180530u));
  /* 12152af2 call dword ptr [0x12183484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183484))), 0x12152af8u);
  /* 12152af8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152afb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152afd call 0x12153780 */
  push32(0x12152b02u); f_12153780();
  /* 12152b02 mov esi, esp */
  ESI = (ESP);
  /* 12152b04 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152b06 call dword ptr [0x12183480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183480))), 0x12152b0cu);
  /* 12152b0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b11 call 0x12153780 */
  push32(0x12152b16u); f_12153780();
  /* 12152b16 mov esi, esp */
  ESI = (ESP);
  /* 12152b18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152b1a push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 12152b1f call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152b25u);
  /* 12152b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b2a call 0x12153780 */
  push32(0x12152b2fu); f_12153780();
  /* 12152b2f mov esi, esp */
  ESI = (ESP);
  /* 12152b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152b33 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152b35 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152b3bu);
  /* 12152b3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b40 call 0x12153780 */
  push32(0x12152b45u); f_12153780();
  /* 12152b45 mov esi, esp */
  ESI = (ESP);
  /* 12152b47 push 0x12180528 */
  push32((uint32_t)(0x12180528u));
  /* 12152b4c push 0x12180520 */
  push32((uint32_t)(0x12180520u));
  /* 12152b51 call dword ptr [0x12183484] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183484))), 0x12152b57u);
  /* 12152b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b5c call 0x12153780 */
  push32(0x12152b61u); f_12153780();
  /* 12152b61 mov esi, esp */
  ESI = (ESP);
  /* 12152b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152b65 call dword ptr [0x12183480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183480))), 0x12152b6bu);
  /* 12152b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b70 call 0x12153780 */
  push32(0x12152b75u); f_12153780();
  /* 12152b75 mov esi, esp */
  ESI = (ESP);
  /* 12152b77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152b79 push 7 */
  push32((uint32_t)(0x7u));
  /* 12152b7b call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152b81u);
  /* 12152b81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b86 call 0x12153780 */
  push32(0x12152b8bu); f_12153780();
  /* 12152b8b mov esi, esp */
  ESI = (ESP);
  /* 12152b8d push 1 */
  push32((uint32_t)(0x1u));
  /* 12152b8f push 9 */
  push32((uint32_t)(0x9u));
  /* 12152b91 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152b97u);
  /* 12152b97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152b9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152b9c call 0x12153780 */
  push32(0x12152ba1u); f_12153780();
  /* 12152ba1 mov esi, esp */
  ESI = (ESP);
  /* 12152ba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152ba5 push 5 */
  push32((uint32_t)(0x5u));
  /* 12152ba7 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152badu);
  /* 12152bad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152bb0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152bb2 call 0x12153780 */
  push32(0x12152bb7u); f_12153780();
  /* 12152bb7 mov esi, esp */
  ESI = (ESP);
  /* 12152bb9 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152bbb push 6 */
  push32((uint32_t)(0x6u));
  /* 12152bbd call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152bc3u);
  /* 12152bc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152bc6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152bc8 call 0x12153780 */
  push32(0x12152bcdu); f_12153780();
  /* 12152bcd mov esi, esp */
  ESI = (ESP);
  /* 12152bcf push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 12152bd4 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152bd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152bd8 call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x12152bdeu);
  /* 12152bde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152be1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152be3 call 0x12153780 */
  push32(0x12152be8u); f_12153780();
  /* 12152be8 mov esi, esp */
  ESI = (ESP);
  /* 12152bea push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 12152bef push 0 */
  push32((uint32_t)(0x0u));
  /* 12152bf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152bf3 call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x12152bf9u);
  /* 12152bf9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152bfc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152bfe call 0x12153780 */
  push32(0x12152c03u); f_12153780();
  /* 12152c03 mov esi, esp */
  ESI = (ESP);
  /* 12152c05 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 12152c0a push 4 */
  push32((uint32_t)(0x4u));
  /* 12152c0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12152c0e call dword ptr [0x12183490] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183490))), 0x12152c14u);
  /* 12152c14 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c19 call 0x12153780 */
  push32(0x12152c1eu); f_12153780();
  /* 12152c1e mov esi, esp */
  ESI = (ESP);
  /* 12152c20 push 4 */
  push32((uint32_t)(0x4u));
  /* 12152c22 call dword ptr [0x12183488] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183488))), 0x12152c28u);
  /* 12152c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c2d call 0x12153780 */
  push32(0x12152c32u); f_12153780();
  /* 12152c32 mov esi, esp */
  ESI = (ESP);
  /* 12152c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152c36 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152c3b call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152c41u);
  /* 12152c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c46 call 0x12153780 */
  push32(0x12152c4bu); f_12153780();
L_12152c4b:;
  /* 12152c4b mov esi, esp */
  ESI = (ESP);
  /* 12152c4d push 9 */
  push32((uint32_t)(0x9u));
  /* 12152c4f call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152c55u);
  /* 12152c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c5a call 0x12153780 */
  push32(0x12152c5fu); f_12153780();
  /* 12152c5f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152c66 je 0x12152cb4 */
  if (C.zf) goto L_12152cb4;
  /* 12152c68 mov esi, esp */
  ESI = (ESP);
  /* 12152c6a push 0x12180478 */
  push32((uint32_t)(0x12180478u));
  /* 12152c6f push 0x121804c0 */
  push32((uint32_t)(0x121804c0u));
  /* 12152c74 call dword ptr [0x1218348c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218348c))), 0x12152c7au);
  /* 12152c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c7f call 0x12153780 */
  push32(0x12152c84u); f_12153780();
  /* 12152c84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152c86 jne 0x12152cb4 */
  if (!C.zf) goto L_12152cb4;
  /* 12152c88 mov esi, esp */
  ESI = (ESP);
  /* 12152c8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12152c8c push 9 */
  push32((uint32_t)(0x9u));
  /* 12152c8e call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152c94u);
  /* 12152c94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152c97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152c99 call 0x12153780 */
  push32(0x12152c9eu); f_12153780();
  /* 12152c9e mov esi, esp */
  ESI = (ESP);
  /* 12152ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12152ca2 push 8 */
  push32((uint32_t)(0x8u));
  /* 12152ca4 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152caau);
  /* 12152caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152cad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152caf call 0x12153780 */
  push32(0x12152cb4u); f_12153780();
L_12152cb4:;
  /* 12152cb4 mov esi, esp */
  ESI = (ESP);
  /* 12152cb6 push 0xa */
  push32((uint32_t)(0xau));
  /* 12152cb8 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152cbeu);
  /* 12152cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152cc3 call 0x12153780 */
  push32(0x12152cc8u); f_12153780();
  /* 12152cc8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152ccd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152ccf je 0x12152e99 */
  if (C.zf) goto L_12152e99;
  /* 12152cd5 mov esi, esp */
  ESI = (ESP);
  /* 12152cd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152cd9 call dword ptr [0x12183454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183454))), 0x12152cdfu);
  /* 12152cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ce2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ce4 call 0x12153780 */
  push32(0x12152ce9u); f_12153780();
  /* 12152ce9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152cee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152cf0 je 0x12152e99 */
  if (C.zf) goto L_12152e99;
  /* 12152cf6 mov esi, esp */
  ESI = (ESP);
  /* 12152cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152cfa push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152cff push 0 */
  push32((uint32_t)(0x0u));
  /* 12152d01 call dword ptr [0x12183468] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183468))), 0x12152d07u);
  /* 12152d07 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d0c call 0x12153780 */
  push32(0x12152d11u); f_12153780();
  /* 12152d11 mov esi, esp */
  ESI = (ESP);
  /* 12152d13 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152d18 call dword ptr [0x12183474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183474))), 0x12152d1eu);
  /* 12152d1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d21 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d23 call 0x12153780 */
  push32(0x12152d28u); f_12153780();
  /* 12152d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152d2a jle 0x12152e0e */
  if ((C.zf||C.sf!=C.of)) goto L_12152e0e;
  /* 12152d30 mov esi, esp */
  ESI = (ESP);
  /* 12152d32 push 0x320 */
  push32((uint32_t)(0x320u));
  /* 12152d37 push 0x12180438 */
  push32((uint32_t)(0x12180438u));
  /* 12152d3c push 0x121804c0 */
  push32((uint32_t)(0x121804c0u));
  /* 12152d41 push 0x12180488 */
  push32((uint32_t)(0x12180488u));
  /* 12152d46 call dword ptr [0x12183498] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183498))), 0x12152d4cu);
  /* 12152d4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d51 call 0x12153780 */
  push32(0x12152d56u); f_12153780();
  /* 12152d56 mov esi, esp */
  ESI = (ESP);
  /* 12152d58 push 0x121804e0 */
  push32((uint32_t)(0x121804e0u));
  /* 12152d5d call dword ptr [0x12183440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183440))), 0x12152d63u);
  /* 12152d63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d68 call 0x12153780 */
  push32(0x12152d6du); f_12153780();
  /* 12152d6d mov esi, esp */
  ESI = (ESP);
  /* 12152d6f push 0x1217b1ac */
  push32((uint32_t)(0x1217b1acu));
  /* 12152d74 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152d7au);
  /* 12152d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d7f call 0x12153780 */
  push32(0x12152d84u); f_12153780();
  /* 12152d84 mov esi, esp */
  ESI = (ESP);
  /* 12152d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152d88 push 0xa */
  push32((uint32_t)(0xau));
  /* 12152d8a call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152d90u);
  /* 12152d90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152d93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152d95 call 0x12153780 */
  push32(0x12152d9au); f_12153780();
  /* 12152d9a mov esi, esp */
  ESI = (ESP);
  /* 12152d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12152d9e push 0x12180498 */
  push32((uint32_t)(0x12180498u));
  /* 12152da3 call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152da9u);
  /* 12152da9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152dac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152dae call 0x12153780 */
  push32(0x12152db3u); f_12153780();
  /* 12152db3 mov esi, esp */
  ESI = (ESP);
  /* 12152db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152db7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152db9 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152dbfu);
  /* 12152dbf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152dc2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152dc4 call 0x12153780 */
  push32(0x12152dc9u); f_12153780();
  /* 12152dc9 mov esi, esp */
  ESI = (ESP);
  /* 12152dcb push 0 */
  push32((uint32_t)(0x0u));
  /* 12152dcd call dword ptr [0x12183480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183480))), 0x12152dd3u);
  /* 12152dd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152dd8 call 0x12153780 */
  push32(0x12152dddu); f_12153780();
  /* 12152ddd mov esi, esp */
  ESI = (ESP);
  /* 12152ddf push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12152de1 push 5 */
  push32((uint32_t)(0x5u));
  /* 12152de3 call dword ptr [0x12183450] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183450))), 0x12152de9u);
  /* 12152de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152dee call 0x12153780 */
  push32(0x12152df3u); f_12153780();
  /* 12152df3 mov esi, esp */
  ESI = (ESP);
  /* 12152df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152df7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12152df9 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152dffu);
  /* 12152dff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e04 call 0x12153780 */
  push32(0x12152e09u); f_12153780();
  /* 12152e09 jmp 0x12152e99 */
  goto L_12152e99;
L_12152e0e:;
  /* 12152e0e mov esi, esp */
  ESI = (ESP);
  /* 12152e10 push 9 */
  push32((uint32_t)(0x9u));
  /* 12152e12 push 3 */
  push32((uint32_t)(0x3u));
  /* 12152e14 push 0x121804e0 */
  push32((uint32_t)(0x121804e0u));
  /* 12152e19 call dword ptr [0x12183448] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183448))), 0x12152e1fu);
  /* 12152e1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e24 call 0x12153780 */
  push32(0x12152e29u); f_12153780();
  /* 12152e29 mov esi, esp */
  ESI = (ESP);
  /* 12152e2b push 0x1217b1ac */
  push32((uint32_t)(0x1217b1acu));
  /* 12152e30 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152e36u);
  /* 12152e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e3b call 0x12153780 */
  push32(0x12152e40u); f_12153780();
  /* 12152e40 mov esi, esp */
  ESI = (ESP);
  /* 12152e42 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152e44 push 0xa */
  push32((uint32_t)(0xau));
  /* 12152e46 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152e4cu);
  /* 12152e4c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e51 call 0x12153780 */
  push32(0x12152e56u); f_12153780();
  /* 12152e56 mov esi, esp */
  ESI = (ESP);
  /* 12152e58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152e5a push 0x12180498 */
  push32((uint32_t)(0x12180498u));
  /* 12152e5f call dword ptr [0x12183460] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183460))), 0x12152e65u);
  /* 12152e65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e6a call 0x12153780 */
  push32(0x12152e6fu); f_12153780();
  /* 12152e6f mov esi, esp */
  ESI = (ESP);
  /* 12152e71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152e73 push 2 */
  push32((uint32_t)(0x2u));
  /* 12152e75 call dword ptr [0x12183458] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183458))), 0x12152e7bu);
  /* 12152e7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e80 call 0x12153780 */
  push32(0x12152e85u); f_12153780();
  /* 12152e85 mov esi, esp */
  ESI = (ESP);
  /* 12152e87 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152e89 call dword ptr [0x12183480] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183480))), 0x12152e8fu);
  /* 12152e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152e92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152e94 call 0x12153780 */
  push32(0x12152e99u); f_12153780();
L_12152e99:;
  /* 12152e99 mov esi, esp */
  ESI = (ESP);
  /* 12152e9b push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12152e9d call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152ea3u);
  /* 12152ea3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ea6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ea8 call 0x12153780 */
  push32(0x12152eadu); f_12153780();
  /* 12152ead and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152eb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152eb4 je 0x12152f3e */
  if (C.zf) goto L_12152f3e;
  /* 12152eba mov esi, esp */
  ESI = (ESP);
  /* 12152ebc push 0xa */
  push32((uint32_t)(0xau));
  /* 12152ebe call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152ec4u);
  /* 12152ec4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ec7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ec9 call 0x12153780 */
  push32(0x12152eceu); f_12153780();
  /* 12152ece and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152ed3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152ed5 jne 0x12152f3e */
  if (!C.zf) goto L_12152f3e;
  /* 12152ed7 mov esi, esp */
  ESI = (ESP);
  /* 12152ed9 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12152edb call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152ee1u);
  /* 12152ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ee4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ee6 call 0x12153780 */
  push32(0x12152eebu); f_12153780();
  /* 12152eeb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152ef0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152ef2 jne 0x12152f3e */
  if (!C.zf) goto L_12152f3e;
  /* 12152ef4 mov esi, esp */
  ESI = (ESP);
  /* 12152ef6 push 5 */
  push32((uint32_t)(0x5u));
  /* 12152ef8 call dword ptr [0x12183454] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183454))), 0x12152efeu);
  /* 12152efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f03 call 0x12153780 */
  push32(0x12152f08u); f_12153780();
  /* 12152f08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152f0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152f0f je 0x12152f3e */
  if (C.zf) goto L_12152f3e;
  /* 12152f11 mov esi, esp */
  ESI = (ESP);
  /* 12152f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152f15 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12152f17 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152f1du);
  /* 12152f1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f22 call 0x12153780 */
  push32(0x12152f27u); f_12153780();
  /* 12152f27 mov esi, esp */
  ESI = (ESP);
  /* 12152f29 push 0x12180488 */
  push32((uint32_t)(0x12180488u));
  /* 12152f2e call dword ptr [0x12183440] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183440))), 0x12152f34u);
  /* 12152f34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f39 call 0x12153780 */
  push32(0x12152f3eu); f_12153780();
L_12152f3e:;
  /* 12152f3e mov esi, esp */
  ESI = (ESP);
  /* 12152f40 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12152f42 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152f48u);
  /* 12152f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f4b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f4d call 0x12153780 */
  push32(0x12152f52u); f_12153780();
  /* 12152f52 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152f59 je 0x12152fb2 */
  if (C.zf) goto L_12152fb2;
  /* 12152f5b mov esi, esp */
  ESI = (ESP);
  /* 12152f5d push 0x12180460 */
  push32((uint32_t)(0x12180460u));
  /* 12152f62 call dword ptr [0x12183474] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183474))), 0x12152f68u);
  /* 12152f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f6b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f6d call 0x12153780 */
  push32(0x12152f72u); f_12153780();
  /* 12152f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152f74 jne 0x12152fb2 */
  if (!C.zf) goto L_12152fb2;
  /* 12152f76 mov esi, esp */
  ESI = (ESP);
  /* 12152f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152f7a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 12152f7c call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152f82u);
  /* 12152f82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f87 call 0x12153780 */
  push32(0x12152f8cu); f_12153780();
  /* 12152f8c mov esi, esp */
  ESI = (ESP);
  /* 12152f8e push 0x1217b1a0 */
  push32((uint32_t)(0x1217b1a0u));
  /* 12152f93 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x12152f99u);
  /* 12152f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152f9e call 0x12153780 */
  push32(0x12152fa3u); f_12153780();
  /* 12152fa3 mov esi, esp */
  ESI = (ESP);
  /* 12152fa5 call dword ptr [0x1218349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218349c))), 0x12152fabu);
  /* 12152fab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152fad call 0x12153780 */
  push32(0x12152fb2u); f_12153780();
L_12152fb2:;
  /* 12152fb2 mov esi, esp */
  ESI = (ESP);
  /* 12152fb4 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12152fb6 call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12152fbcu);
  /* 12152fbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152fbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152fc1 call 0x12153780 */
  push32(0x12152fc6u); f_12153780();
  /* 12152fc6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152fcd je 0x12153028 */
  if (C.zf) goto L_12153028;
  /* 12152fcf mov esi, esp */
  ESI = (ESP);
  /* 12152fd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12152fd3 call dword ptr [0x12183494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183494))), 0x12152fd9u);
  /* 12152fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152fde call 0x12153780 */
  push32(0x12152fe3u); f_12153780();
  /* 12152fe3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12152fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12152fea je 0x12153028 */
  if (C.zf) goto L_12153028;
  /* 12152fec mov esi, esp */
  ESI = (ESP);
  /* 12152fee push 0 */
  push32((uint32_t)(0x0u));
  /* 12152ff0 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12152ff2 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x12152ff8u);
  /* 12152ff8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12152ffb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12152ffd call 0x12153780 */
  push32(0x12153002u); f_12153780();
  /* 12153002 mov esi, esp */
  ESI = (ESP);
  /* 12153004 push 0x1217b194 */
  push32((uint32_t)(0x1217b194u));
  /* 12153009 call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x1215300fu);
  /* 1215300f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153012 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153014 call 0x12153780 */
  push32(0x12153019u); f_12153780();
  /* 12153019 mov esi, esp */
  ESI = (ESP);
  /* 1215301b call dword ptr [0x1218349c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218349c))), 0x12153021u);
  /* 12153021 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153023 call 0x12153780 */
  push32(0x12153028u); f_12153780();
L_12153028:;
  /* 12153028 mov esi, esp */
  ESI = (ESP);
  /* 1215302a push 0x1d */
  push32((uint32_t)(0x1du));
  /* 1215302c call dword ptr [0x1218342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218342c))), 0x12153032u);
  /* 12153032 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153035 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153037 call 0x12153780 */
  push32(0x1215303cu); f_12153780();
  /* 1215303c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153041 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153043 je 0x121530bb */
  if (C.zf) goto L_121530bb;
  /* 12153045 mov esi, esp */
  ESI = (ESP);
  /* 12153047 push 1 */
  push32((uint32_t)(0x1u));
  /* 12153049 call dword ptr [0x12183494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183494))), 0x1215304fu);
  /* 1215304f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153054 call 0x12153780 */
  push32(0x12153059u); f_12153780();
  /* 12153059 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215305e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153060 je 0x121530bb */
  if (C.zf) goto L_121530bb;
  /* 12153062 mov esi, esp */
  ESI = (ESP);
  /* 12153064 push 3 */
  push32((uint32_t)(0x3u));
  /* 12153066 call dword ptr [0x12183494] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183494))), 0x1215306cu);
  /* 1215306c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215306f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153071 call 0x12153780 */
  push32(0x12153076u); f_12153780();
  /* 12153076 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215307b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215307d je 0x121530bb */
  if (C.zf) goto L_121530bb;
  /* 1215307f mov esi, esp */
  ESI = (ESP);
  /* 12153081 push 0 */
  push32((uint32_t)(0x0u));
  /* 12153083 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 12153085 call dword ptr [0x12183430] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183430))), 0x1215308bu);
  /* 1215308b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215308e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153090 call 0x12153780 */
  push32(0x12153095u); f_12153780();
  /* 12153095 mov esi, esp */
  ESI = (ESP);
  /* 12153097 push 0x1217b188 */
  push32((uint32_t)(0x1217b188u));
  /* 1215309c call dword ptr [0x1218343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218343c))), 0x121530a2u);
  /* 121530a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121530a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121530a7 call 0x12153780 */
  push32(0x121530acu); f_12153780();
  /* 121530ac mov esi, esp */
  ESI = (ESP);
  /* 121530ae call dword ptr [0x121834a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121834a4))), 0x121530b4u);
  /* 121530b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121530b6 call 0x12153780 */
  push32(0x121530bbu); f_12153780();
L_121530bb:;
  /* 121530bb pop edi */
  EDI = (pop32());
  /* 121530bc pop esi */
  ESI = (pop32());
  /* 121530bd pop ebx */
  EBX = (pop32());
  /* 121530be add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121530c1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121530c3 call 0x12153780 */
  push32(0x121530c8u); f_12153780();
  /* 121530c8 mov esp, ebp */
  ESP = (EBP);
  /* 121530ca pop ebp */
  EBP = (pop32());
  /* 121530cb ret  */
  ESPCHK(0x121519c0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x12153780 (56 bytes, 28 insns) */
void f_12153780(void) {
  FTRACE(0x12153780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153780 jne 0x12153783 */
  if (!C.zf) goto L_12153783;
  /* 12153782 ret  */
  ESPCHK(0x12153780u, _esp0);
  ESP += 4; return;
L_12153783:;
  /* 12153783 push ebp */
  push32((uint32_t)(EBP));
  /* 12153784 mov ebp, esp */
  EBP = (ESP);
  /* 12153786 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12153789 push eax */
  push32((uint32_t)(EAX));
  /* 1215378a push edx */
  push32((uint32_t)(EDX));
  /* 1215378b push ebx */
  push32((uint32_t)(EBX));
  /* 1215378c push esi */
  push32((uint32_t)(ESI));
  /* 1215378d push edi */
  push32((uint32_t)(EDI));
  /* 1215378e push 0x1217b238 */
  push32((uint32_t)(0x1217b238u));
  /* 12153793 push 0x1217b234 */
  push32((uint32_t)(0x1217b234u));
  /* 12153798 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1215379a push 0x1217b224 */
  push32((uint32_t)(0x1217b224u));
  /* 1215379f push 1 */
  push32((uint32_t)(0x1u));
  /* 121537a1 call 0x12153b50 */
  push32(0x121537a6u); f_12153b50();
  /* 121537a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121537a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121537ac jne 0x121537af */
  if (!C.zf) goto L_121537af;
  /* 121537ae int3  */
  x86_unimpl("int3 @ 0x121537ae");
L_121537af:;
  /* 121537af pop edi */
  EDI = (pop32());
  /* 121537b0 pop esi */
  ESI = (pop32());
  /* 121537b1 pop ebx */
  EBX = (pop32());
  /* 121537b2 pop edx */
  EDX = (pop32());
  /* 121537b3 pop eax */
  EAX = (pop32());
  /* 121537b4 mov esp, ebp */
  ESP = (EBP);
  /* 121537b6 pop ebp */
  EBP = (pop32());
  /* 121537b7 ret  */
  ESPCHK(0x12153780u, _esp0);
  ESP += 4; return;
}

/* FUN_100037c0 @ 0x121537c0 (313 bytes, 78 insns) */
void f_121537c0(void) {
  FTRACE(0x121537c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121537c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121537c1 mov ebp, esp */
  EBP = (ESP);
  /* 121537c3 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121537c7 jne 0x12153887 */
  if (!C.zf) goto L_12153887;
  /* 121537cd call dword ptr [0x12183344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183344))), 0x121537d3u);
  /* 121537d3 mov dword ptr [0x121805c4], eax */
  w32((uint32_t)(0x121805c4), (EAX));
  /* 121537d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 121537da call 0x12157280 */
  push32(0x121537dfu); f_12157280();
  /* 121537df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121537e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121537e4 jne 0x121537ed */
  if (!C.zf) goto L_121537ed;
  /* 121537e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121537e8 jmp 0x121538f5 */
  goto L_121538f5;
L_121537ed:;
  /* 121537ed mov eax, dword ptr [0x121805c4] */
  EAX = (r32((uint32_t)(0x121805c4)));
  /* 121537f2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 121537f5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 121537fa mov dword ptr [0x121805d0], eax */
  w32((uint32_t)(0x121805d0), (EAX));
  /* 121537ff mov ecx, dword ptr [0x121805c4] */
  ECX = (r32((uint32_t)(0x121805c4)));
  /* 12153805 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215380b mov dword ptr [0x121805cc], ecx */
  w32((uint32_t)(0x121805cc), (ECX));
  /* 12153811 mov edx, dword ptr [0x121805cc] */
  EDX = (r32((uint32_t)(0x121805cc)));
  /* 12153817 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 1215381a add edx, dword ptr [0x121805d0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x121805d0))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12153820 mov dword ptr [0x121805c8], edx */
  w32((uint32_t)(0x121805c8), (EDX));
  /* 12153826 mov eax, dword ptr [0x121805c4] */
  EAX = (r32((uint32_t)(0x121805c4)));
  /* 1215382b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1215382e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153833 mov dword ptr [0x121805c4], eax */
  w32((uint32_t)(0x121805c4), (EAX));
  /* 12153838 call 0x121543f0 */
  push32(0x1215383du); f_121543f0();
  /* 1215383d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215383f jne 0x1215384d */
  if (!C.zf) goto L_1215384d;
  /* 12153841 call 0x121572d0 */
  push32(0x12153846u); f_121572d0();
  /* 12153846 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12153848 jmp 0x121538f5 */
  goto L_121538f5;
L_1215384d:;
  /* 1215384d call dword ptr [0x12183340] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183340))), 0x12153853u);
  /* 12153853 mov dword ptr [0x1218210c], eax */
  w32((uint32_t)(0x1218210c), (EAX));
  /* 12153858 call 0x12157060 */
  push32(0x1215385du); f_12157060();
  /* 1215385d mov dword ptr [0x121805ac], eax */
  w32((uint32_t)(0x121805ac), (EAX));
  /* 12153862 call 0x121546a0 */
  push32(0x12153867u); f_121546a0();
  /* 12153867 call 0x12156b50 */
  push32(0x1215386cu); f_12156b50();
  /* 1215386c call 0x12156a00 */
  push32(0x12153871u); f_12156a00();
  /* 12153871 call 0x121541f0 */
  push32(0x12153876u); f_121541f0();
  /* 12153876 mov ecx, dword ptr [0x121805a8] */
  ECX = (r32((uint32_t)(0x121805a8)));
  /* 1215387c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215387f mov dword ptr [0x121805a8], ecx */
  w32((uint32_t)(0x121805a8), (ECX));
  /* 12153885 jmp 0x121538f0 */
  goto L_121538f0;
L_12153887:;
  /* 12153887 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215388b jne 0x121538e0 */
  if (!C.zf) goto L_121538e0;
  /* 1215388d cmp dword ptr [0x121805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153894 jle 0x121538da */
  if ((C.zf||C.sf!=C.of)) goto L_121538da;
  /* 12153896 mov edx, dword ptr [0x121805a8] */
  EDX = (r32((uint32_t)(0x121805a8)));
  /* 1215389c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215389f mov dword ptr [0x121805a8], edx */
  w32((uint32_t)(0x121805a8), (EDX));
  /* 121538a5 cmp dword ptr [0x121805fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121538ac jne 0x121538b3 */
  if (!C.zf) goto L_121538b3;
  /* 121538ae call 0x12154270 */
  push32(0x121538b3u); f_12154270();
L_121538b3:;
  /* 121538b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 121538b5 call 0x12155fa0 */
  push32(0x121538bau); f_12155fa0();
  /* 121538ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121538bd and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 121538c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121538c2 je 0x121538c9 */
  if (C.zf) goto L_121538c9;
  /* 121538c4 call 0x121568b0 */
  push32(0x121538c9u); f_121568b0();
L_121538c9:;
  /* 121538c9 call 0x121549d0 */
  push32(0x121538ceu); f_121549d0();
  /* 121538ce call 0x12154480 */
  push32(0x121538d3u); f_12154480();
  /* 121538d3 call 0x121572d0 */
  push32(0x121538d8u); f_121572d0();
  /* 121538d8 jmp 0x121538de */
  goto L_121538de;
L_121538da:;
  /* 121538da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121538dc jmp 0x121538f5 */
  goto L_121538f5;
L_121538de:;
  /* 121538de jmp 0x121538f0 */
  goto L_121538f0;
L_121538e0:;
  /* 121538e0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121538e4 jne 0x121538f0 */
  if (!C.zf) goto L_121538f0;
  /* 121538e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121538e8 call 0x12154570 */
  push32(0x121538edu); f_12154570();
  /* 121538ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121538f0:;
  /* 121538f0 mov eax, 1 */
  EAX = (0x1u);
L_121538f5:;
  /* 121538f5 pop ebp */
  EBP = (pop32());
  /* 121538f6 ret 0xc */
  ESPCHK(0x121537c0u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x12153900 (243 bytes, 86 insns) */
void f_12153900(void) {
  FTRACE(0x12153900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153900 push ebp */
  push32((uint32_t)(EBP));
  /* 12153901 mov ebp, esp */
  EBP = (ESP);
  /* 12153903 push ecx */
  push32((uint32_t)(ECX));
  /* 12153904 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215390b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215390f jne 0x12153921 */
  if (!C.zf) goto L_12153921;
  /* 12153911 cmp dword ptr [0x121805a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153918 jne 0x12153921 */
  if (!C.zf) goto L_12153921;
  /* 1215391a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215391c jmp 0x121539ed */
  goto L_121539ed;
L_12153921:;
  /* 12153921 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153925 je 0x1215392d */
  if (C.zf) goto L_1215392d;
  /* 12153927 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215392b jne 0x1215396f */
  if (!C.zf) goto L_1215396f;
L_1215392d:;
  /* 1215392d cmp dword ptr [0x1218211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153934 je 0x1215394b */
  if (C.zf) goto L_1215394b;
  /* 12153936 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153939 push eax */
  push32((uint32_t)(EAX));
  /* 1215393a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215393d push ecx */
  push32((uint32_t)(ECX));
  /* 1215393e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153941 push edx */
  push32((uint32_t)(EDX));
  /* 12153942 call dword ptr [0x1218211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218211c))), 0x12153948u);
  /* 12153948 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215394b:;
  /* 1215394b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215394f je 0x12153965 */
  if (C.zf) goto L_12153965;
  /* 12153951 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153954 push eax */
  push32((uint32_t)(EAX));
  /* 12153955 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153958 push ecx */
  push32((uint32_t)(ECX));
  /* 12153959 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215395c push edx */
  push32((uint32_t)(EDX));
  /* 1215395d call 0x121537c0 */
  push32(0x12153962u); f_121537c0();
  /* 12153962 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12153965:;
  /* 12153965 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153969 jne 0x1215396f */
  if (!C.zf) goto L_1215396f;
  /* 1215396b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215396d jmp 0x121539ed */
  goto L_121539ed;
L_1215396f:;
  /* 1215396f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153972 push eax */
  push32((uint32_t)(EAX));
  /* 12153973 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153976 push ecx */
  push32((uint32_t)(ECX));
  /* 12153977 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215397a push edx */
  push32((uint32_t)(EDX));
  /* 1215397b call 0x1215100a */
  push32(0x12153980u); f_1215100a();
  /* 12153980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12153983 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153987 jne 0x1215399e */
  if (!C.zf) goto L_1215399e;
  /* 12153989 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215398d jne 0x1215399e */
  if (!C.zf) goto L_1215399e;
  /* 1215398f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153992 push eax */
  push32((uint32_t)(EAX));
  /* 12153993 push 0 */
  push32((uint32_t)(0x0u));
  /* 12153995 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153998 push ecx */
  push32((uint32_t)(ECX));
  /* 12153999 call 0x121537c0 */
  push32(0x1215399eu); f_121537c0();
L_1215399e:;
  /* 1215399e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121539a2 je 0x121539aa */
  if (C.zf) goto L_121539aa;
  /* 121539a4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121539a8 jne 0x121539ea */
  if (!C.zf) goto L_121539ea;
L_121539aa:;
  /* 121539aa mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121539ad push edx */
  push32((uint32_t)(EDX));
  /* 121539ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121539b1 push eax */
  push32((uint32_t)(EAX));
  /* 121539b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121539b5 push ecx */
  push32((uint32_t)(ECX));
  /* 121539b6 call 0x121537c0 */
  push32(0x121539bbu); f_121537c0();
  /* 121539bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121539bd jne 0x121539c6 */
  if (!C.zf) goto L_121539c6;
  /* 121539bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121539c6:;
  /* 121539c6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121539ca je 0x121539ea */
  if (C.zf) goto L_121539ea;
  /* 121539cc cmp dword ptr [0x1218211c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218211c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121539d3 je 0x121539ea */
  if (C.zf) goto L_121539ea;
  /* 121539d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121539d8 push edx */
  push32((uint32_t)(EDX));
  /* 121539d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121539dc push eax */
  push32((uint32_t)(EAX));
  /* 121539dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121539e0 push ecx */
  push32((uint32_t)(ECX));
  /* 121539e1 call dword ptr [0x1218211c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218211c))), 0x121539e7u);
  /* 121539e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121539ea:;
  /* 121539ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_121539ed:;
  /* 121539ed mov esp, ebp */
  ESP = (EBP);
  /* 121539ef pop ebp */
  EBP = (pop32());
  /* 121539f0 ret 0xc */
  ESPCHK(0x12153900u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x12153a00 (58 bytes, 18 insns) */
void f_12153a00(void) {
  FTRACE(0x12153a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12153a01 mov ebp, esp */
  EBP = (ESP);
  /* 12153a03 cmp dword ptr [0x121805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a0a je 0x12153a1e */
  if (C.zf) goto L_12153a1e;
  /* 12153a0c cmp dword ptr [0x121805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a13 jne 0x12153a23 */
  if (!C.zf) goto L_12153a23;
  /* 12153a15 cmp dword ptr [0x121805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a1c jne 0x12153a23 */
  if (!C.zf) goto L_12153a23;
L_12153a1e:;
  /* 12153a1e call 0x12157370 */
  push32(0x12153a23u); f_12157370();
L_12153a23:;
  /* 12153a23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153a26 push eax */
  push32((uint32_t)(EAX));
  /* 12153a27 call 0x121573c0 */
  push32(0x12153a2cu); f_121573c0();
  /* 12153a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153a2f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12153a34 call dword ptr [0x1217ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217ea30))), 0x12153a3au);
  /* 12153a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153a3d pop ebp */
  EBP = (pop32());
  /* 12153a3e ret  */
  ESPCHK(0x12153a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a40 @ 0x12153a40 (11 bytes, 5 insns) */
void f_12153a40(void) {
  FTRACE(0x12153a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12153a41 mov ebp, esp */
  EBP = (ESP);
  /* 12153a43 call dword ptr [0x12183348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183348))), 0x12153a49u);
  /* 12153a49 pop ebp */
  EBP = (pop32());
  /* 12153a4a ret  */
  ESPCHK(0x12153a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a50 @ 0x12153a50 (87 bytes, 30 insns) */
void f_12153a50(void) {
  FTRACE(0x12153a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153a50 push ebp */
  push32((uint32_t)(EBP));
  /* 12153a51 mov ebp, esp */
  EBP = (ESP);
  /* 12153a53 push ecx */
  push32((uint32_t)(ECX));
  /* 12153a54 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a58 jl 0x12153a60 */
  if ((C.sf!=C.of)) goto L_12153a60;
  /* 12153a5a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a5e jl 0x12153a65 */
  if ((C.sf!=C.of)) goto L_12153a65;
L_12153a60:;
  /* 12153a60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153a63 jmp 0x12153aa3 */
  goto L_12153aa3;
L_12153a65:;
  /* 12153a65 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153a69 jne 0x12153a77 */
  if (!C.zf) goto L_12153a77;
  /* 12153a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153a6e mov eax, dword ptr [eax*4 + 0x1217ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1217ea38)));
  /* 12153a75 jmp 0x12153aa3 */
  goto L_12153aa3;
L_12153a77:;
  /* 12153a77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153a7a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 12153a7d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12153a7f je 0x12153a86 */
  if (C.zf) goto L_12153a86;
  /* 12153a81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153a84 jmp 0x12153aa3 */
  goto L_12153aa3;
L_12153a86:;
  /* 12153a86 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153a89 mov eax, dword ptr [edx*4 + 0x1217ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1217ea38)));
  /* 12153a90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12153a93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153a99 mov dword ptr [ecx*4 + 0x1217ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1217ea38), (EDX));
  /* 12153aa0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12153aa3:;
  /* 12153aa3 mov esp, ebp */
  ESP = (EBP);
  /* 12153aa5 pop ebp */
  EBP = (pop32());
  /* 12153aa6 ret  */
  ESPCHK(0x12153a50u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x12153ab0 (126 bytes, 38 insns) */
void f_12153ab0(void) {
  FTRACE(0x12153ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12153ab1 mov ebp, esp */
  EBP = (ESP);
  /* 12153ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 12153ab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153ab8 jl 0x12153ac0 */
  if ((C.sf!=C.of)) goto L_12153ac0;
  /* 12153aba cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153abe jl 0x12153ac7 */
  if ((C.sf!=C.of)) goto L_12153ac7;
L_12153ac0:;
  /* 12153ac0 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12153ac5 jmp 0x12153b2a */
  goto L_12153b2a;
L_12153ac7:;
  /* 12153ac7 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153acb jne 0x12153ad9 */
  if (!C.zf) goto L_12153ad9;
  /* 12153acd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153ad0 mov eax, dword ptr [eax*4 + 0x1217ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1217ea44)));
  /* 12153ad7 jmp 0x12153b2a */
  goto L_12153b2a;
L_12153ad9:;
  /* 12153ad9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153adc mov edx, dword ptr [ecx*4 + 0x1217ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea44)));
  /* 12153ae3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12153ae6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153aea jne 0x12153b00 */
  if (!C.zf) goto L_12153b00;
  /* 12153aec push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12153aee call dword ptr [0x1218334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218334c))), 0x12153af4u);
  /* 12153af4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153af7 mov dword ptr [ecx*4 + 0x1217ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1217ea44), (EAX));
  /* 12153afe jmp 0x12153b27 */
  goto L_12153b27;
L_12153b00:;
  /* 12153b00 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153b04 jne 0x12153b1a */
  if (!C.zf) goto L_12153b1a;
  /* 12153b06 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12153b08 call dword ptr [0x1218334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218334c))), 0x12153b0eu);
  /* 12153b0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153b11 mov dword ptr [edx*4 + 0x1217ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1217ea44), (EAX));
  /* 12153b18 jmp 0x12153b27 */
  goto L_12153b27;
L_12153b1a:;
  /* 12153b1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153b1d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153b20 mov dword ptr [eax*4 + 0x1217ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1217ea44), (ECX));
L_12153b27:;
  /* 12153b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12153b2a:;
  /* 12153b2a mov esp, ebp */
  ESP = (EBP);
  /* 12153b2c pop ebp */
  EBP = (pop32());
  /* 12153b2d ret  */
  ESPCHK(0x12153ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b30 @ 0x12153b30 (28 bytes, 11 insns) */
void f_12153b30(void) {
  FTRACE(0x12153b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12153b31 mov ebp, esp */
  EBP = (ESP);
  /* 12153b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12153b34 mov eax, dword ptr [0x12182100] */
  EAX = (r32((uint32_t)(0x12182100)));
  /* 12153b39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12153b3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153b3f mov dword ptr [0x12182100], ecx */
  w32((uint32_t)(0x12182100), (ECX));
  /* 12153b45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12153b48 mov esp, ebp */
  ESP = (EBP);
  /* 12153b4a pop ebp */
  EBP = (pop32());
  /* 12153b4b ret  */
  ESPCHK(0x12153b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b50 @ 0x12153b50 (912 bytes, 248 insns) */
void f_12153b50(void) {
  FTRACE(0x12153b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12153b51 mov ebp, esp */
  EBP = (ESP);
  /* 12153b53 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 12153b58 call 0x12157c30 */
  push32(0x12153b5du); f_12157c30();
  /* 12153b5d push edi */
  push32((uint32_t)(EDI));
  /* 12153b5e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 12153b65 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12153b6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12153b6c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 12153b72 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12153b74 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12153b76 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12153b77 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 12153b7e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12153b83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12153b85 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 12153b8b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12153b8d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12153b8f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12153b90 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 12153b97 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 12153b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12153b9e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 12153ba4 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12153ba6 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 12153ba8 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12153ba9 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 12153bac mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 12153bb2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153bb6 jl 0x12153bbe */
  if ((C.sf!=C.of)) goto L_12153bbe;
  /* 12153bb8 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153bbc jl 0x12153bc6 */
  if ((C.sf!=C.of)) goto L_12153bc6;
L_12153bbe:;
  /* 12153bbe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153bc1 jmp 0x12153edb */
  goto L_12153edb;
L_12153bc6:;
  /* 12153bc6 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153bca jne 0x12153c70 */
  if (!C.zf) goto L_12153c70;
  /* 12153bd0 push 0x1217ea34 */
  push32((uint32_t)(0x1217ea34u));
  /* 12153bd5 call dword ptr [0x12183364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183364))), 0x12153bdbu);
  /* 12153bdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153bdd jle 0x12153c70 */
  if ((C.zf||C.sf!=C.of)) goto L_12153c70;
  /* 12153be3 cmp dword ptr [0x121805bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153bea jne 0x12153c2e */
  if (!C.zf) goto L_12153c2e;
  /* 12153bec push 0x1217b3e0 */
  push32((uint32_t)(0x1217b3e0u));
  /* 12153bf1 call dword ptr [0x12183360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183360))), 0x12153bf7u);
  /* 12153bf7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 12153bfd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153c04 je 0x12153c26 */
  if (C.zf) goto L_12153c26;
  /* 12153c06 push 0x1217b3d4 */
  push32((uint32_t)(0x1217b3d4u));
  /* 12153c0b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 12153c11 push ecx */
  push32((uint32_t)(ECX));
  /* 12153c12 call dword ptr [0x1218335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218335c))), 0x12153c18u);
  /* 12153c18 mov dword ptr [0x121805bc], eax */
  w32((uint32_t)(0x121805bc), (EAX));
  /* 12153c1d cmp dword ptr [0x121805bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153c24 jne 0x12153c2e */
  if (!C.zf) goto L_12153c2e;
L_12153c26:;
  /* 12153c26 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153c29 jmp 0x12153edb */
  goto L_12153edb;
L_12153c2e:;
  /* 12153c2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153c31 push edx */
  push32((uint32_t)(EDX));
  /* 12153c32 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153c35 push eax */
  push32((uint32_t)(EAX));
  /* 12153c36 push 0x1217b3a0 */
  push32((uint32_t)(0x1217b3a0u));
  /* 12153c3b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12153c41 push ecx */
  push32((uint32_t)(ECX));
  /* 12153c42 call dword ptr [0x121805bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121805bc))), 0x12153c48u);
  /* 12153c48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153c4b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12153c51 push edx */
  push32((uint32_t)(EDX));
  /* 12153c52 call dword ptr [0x12183358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183358))), 0x12153c58u);
  /* 12153c58 push 0x1217ea34 */
  push32((uint32_t)(0x1217ea34u));
  /* 12153c5d call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12153c63u);
  /* 12153c63 call 0x12153a40 */
  push32(0x12153c68u); f_12153a40();
  /* 12153c68 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12153c6b jmp 0x12153edb */
  goto L_12153edb;
L_12153c70:;
  /* 12153c70 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153c74 je 0x12153cad */
  if (C.zf) goto L_12153cad;
  /* 12153c76 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 12153c7c push eax */
  push32((uint32_t)(EAX));
  /* 12153c7d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12153c80 push ecx */
  push32((uint32_t)(ECX));
  /* 12153c81 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 12153c86 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 12153c8c push edx */
  push32((uint32_t)(EDX));
  /* 12153c8d call 0x12157b30 */
  push32(0x12153c92u); f_12157b30();
  /* 12153c92 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153c95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153c97 jge 0x12153cad */
  if ((C.sf==C.of)) goto L_12153cad;
  /* 12153c99 push 0x1217b374 */
  push32((uint32_t)(0x1217b374u));
  /* 12153c9e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12153ca4 push eax */
  push32((uint32_t)(EAX));
  /* 12153ca5 call 0x12157a40 */
  push32(0x12153caau); f_12157a40();
  /* 12153caa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153cad:;
  /* 12153cad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153cb1 jne 0x12153ce5 */
  if (!C.zf) goto L_12153ce5;
  /* 12153cb3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153cb7 je 0x12153cc5 */
  if (C.zf) goto L_12153cc5;
  /* 12153cb9 mov dword ptr [ebp - 0x3028], 0x1217b360 */
  w32((uint32_t)(EBP + -0x3028), (0x1217b360u));
  /* 12153cc3 jmp 0x12153ccf */
  goto L_12153ccf;
L_12153cc5:;
  /* 12153cc5 mov dword ptr [ebp - 0x3028], 0x1217b34c */
  w32((uint32_t)(EBP + -0x3028), (0x1217b34cu));
L_12153ccf:;
  /* 12153ccf mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 12153cd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12153cd6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12153cdc push edx */
  push32((uint32_t)(EDX));
  /* 12153cdd call 0x12157a40 */
  push32(0x12153ce2u); f_12157a40();
  /* 12153ce2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153ce5:;
  /* 12153ce5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 12153ceb push eax */
  push32((uint32_t)(EAX));
  /* 12153cec lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12153cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12153cf3 call 0x12157a50 */
  push32(0x12153cf8u); f_12157a50();
  /* 12153cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153cfb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153cff jne 0x12153d3a */
  if (!C.zf) goto L_12153d3a;
  /* 12153d01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153d04 mov eax, dword ptr [edx*4 + 0x1217ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1217ea38)));
  /* 12153d0b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12153d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153d10 je 0x12153d26 */
  if (C.zf) goto L_12153d26;
  /* 12153d12 push 0x1217b348 */
  push32((uint32_t)(0x1217b348u));
  /* 12153d17 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 12153d1d push ecx */
  push32((uint32_t)(ECX));
  /* 12153d1e call 0x12157a50 */
  push32(0x12153d23u); f_12157a50();
  /* 12153d23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153d26:;
  /* 12153d26 push 0x1217b344 */
  push32((uint32_t)(0x1217b344u));
  /* 12153d2b lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12153d31 push edx */
  push32((uint32_t)(EDX));
  /* 12153d32 call 0x12157a50 */
  push32(0x12153d37u); f_12157a50();
  /* 12153d37 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153d3a:;
  /* 12153d3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153d3e je 0x12153d82 */
  if (C.zf) goto L_12153d82;
  /* 12153d40 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 12153d46 push eax */
  push32((uint32_t)(EAX));
  /* 12153d47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153d4a push ecx */
  push32((uint32_t)(ECX));
  /* 12153d4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153d4e push edx */
  push32((uint32_t)(EDX));
  /* 12153d4f push 0x1217b338 */
  push32((uint32_t)(0x1217b338u));
  /* 12153d54 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12153d59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12153d5f push eax */
  push32((uint32_t)(EAX));
  /* 12153d60 call 0x12157940 */
  push32(0x12153d65u); f_12157940();
  /* 12153d65 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153d68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153d6a jge 0x12153d80 */
  if ((C.sf==C.of)) goto L_12153d80;
  /* 12153d6c push 0x1217b374 */
  push32((uint32_t)(0x1217b374u));
  /* 12153d71 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 12153d77 push ecx */
  push32((uint32_t)(ECX));
  /* 12153d78 call 0x12157a40 */
  push32(0x12153d7du); f_12157a40();
  /* 12153d7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153d80:;
  /* 12153d80 jmp 0x12153d98 */
  goto L_12153d98;
L_12153d82:;
  /* 12153d82 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 12153d88 push edx */
  push32((uint32_t)(EDX));
  /* 12153d89 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12153d8f push eax */
  push32((uint32_t)(EAX));
  /* 12153d90 call 0x12157a40 */
  push32(0x12153d95u); f_12157a40();
  /* 12153d95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153d98:;
  /* 12153d98 cmp dword ptr [0x12182100], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12182100))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153d9f je 0x12153ddc */
  if (C.zf) goto L_12153ddc;
  /* 12153da1 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 12153da7 push ecx */
  push32((uint32_t)(ECX));
  /* 12153da8 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12153dae push edx */
  push32((uint32_t)(EDX));
  /* 12153daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153db2 push eax */
  push32((uint32_t)(EAX));
  /* 12153db3 call dword ptr [0x12182100] */
  call_ind((uint32_t)(r32((uint32_t)(0x12182100))), 0x12153db9u);
  /* 12153db9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153dbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153dbe je 0x12153ddc */
  if (C.zf) goto L_12153ddc;
  /* 12153dc0 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153dc4 jne 0x12153dd1 */
  if (!C.zf) goto L_12153dd1;
  /* 12153dc6 push 0x1217ea34 */
  push32((uint32_t)(0x1217ea34u));
  /* 12153dcb call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12153dd1u);
L_12153dd1:;
  /* 12153dd1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12153dd7 jmp 0x12153edb */
  goto L_12153edb;
L_12153ddc:;
  /* 12153ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153ddf mov edx, dword ptr [ecx*4 + 0x1217ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea38)));
  /* 12153de6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12153de9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12153deb je 0x12153e2b */
  if (C.zf) goto L_12153e2b;
  /* 12153ded mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153df0 cmp dword ptr [eax*4 + 0x1217ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1217ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153df8 je 0x12153e2b */
  if (C.zf) goto L_12153e2b;
  /* 12153dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 12153dfc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 12153e02 push ecx */
  push32((uint32_t)(ECX));
  /* 12153e03 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12153e09 push edx */
  push32((uint32_t)(EDX));
  /* 12153e0a call 0x121578c0 */
  push32(0x12153e0fu); f_121578c0();
  /* 12153e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153e12 push eax */
  push32((uint32_t)(EAX));
  /* 12153e13 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 12153e19 push eax */
  push32((uint32_t)(EAX));
  /* 12153e1a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153e1d mov edx, dword ptr [ecx*4 + 0x1217ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea44)));
  /* 12153e24 push edx */
  push32((uint32_t)(EDX));
  /* 12153e25 call dword ptr [0x12183350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183350))), 0x12153e2bu);
L_12153e2b:;
  /* 12153e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153e2e mov ecx, dword ptr [eax*4 + 0x1217ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217ea38)));
  /* 12153e35 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12153e38 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12153e3a je 0x12153e49 */
  if (C.zf) goto L_12153e49;
  /* 12153e3c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 12153e42 push edx */
  push32((uint32_t)(EDX));
  /* 12153e43 call dword ptr [0x12183358] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183358))), 0x12153e49u);
L_12153e49:;
  /* 12153e49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153e4c mov ecx, dword ptr [eax*4 + 0x1217ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217ea38)));
  /* 12153e53 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12153e56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12153e58 je 0x12153ec8 */
  if (C.zf) goto L_12153ec8;
  /* 12153e5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153e5e je 0x12153e7d */
  if (C.zf) goto L_12153e7d;
  /* 12153e60 push 0xa */
  push32((uint32_t)(0xau));
  /* 12153e62 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 12153e68 push edx */
  push32((uint32_t)(EDX));
  /* 12153e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12153e6c push eax */
  push32((uint32_t)(EAX));
  /* 12153e6d call 0x121575d0 */
  push32(0x12153e72u); f_121575d0();
  /* 12153e72 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153e75 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 12153e7b jmp 0x12153e87 */
  goto L_12153e87;
L_12153e7d:;
  /* 12153e7d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_12153e87:;
  /* 12153e87 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 12153e8d push ecx */
  push32((uint32_t)(ECX));
  /* 12153e8e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12153e91 push edx */
  push32((uint32_t)(EDX));
  /* 12153e92 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 12153e98 push eax */
  push32((uint32_t)(EAX));
  /* 12153e99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12153e9c push ecx */
  push32((uint32_t)(ECX));
  /* 12153e9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12153ea0 push edx */
  push32((uint32_t)(EDX));
  /* 12153ea1 call 0x12153ee0 */
  push32(0x12153ea6u); f_12153ee0();
  /* 12153ea6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153ea9 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 12153eaf cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153eb3 jne 0x12153ec0 */
  if (!C.zf) goto L_12153ec0;
  /* 12153eb5 push 0x1217ea34 */
  push32((uint32_t)(0x1217ea34u));
  /* 12153eba call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12153ec0u);
L_12153ec0:;
  /* 12153ec0 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 12153ec6 jmp 0x12153edb */
  goto L_12153edb;
L_12153ec8:;
  /* 12153ec8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153ecc jne 0x12153ed9 */
  if (!C.zf) goto L_12153ed9;
  /* 12153ece push 0x1217ea34 */
  push32((uint32_t)(0x1217ea34u));
  /* 12153ed3 call dword ptr [0x12183354] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183354))), 0x12153ed9u);
L_12153ed9:;
  /* 12153ed9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12153edb:;
  /* 12153edb pop edi */
  EDI = (pop32());
  /* 12153edc mov esp, ebp */
  ESP = (EBP);
  /* 12153ede pop ebp */
  EBP = (pop32());
  /* 12153edf ret  */
  ESPCHK(0x12153b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10003ee0 @ 0x12153ee0 (780 bytes, 197 insns) */
void f_12153ee0(void) {
  FTRACE(0x12153ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12153ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 12153ee1 mov ebp, esp */
  EBP = (ESP);
  /* 12153ee3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 12153ee8 call 0x12157c30 */
  push32(0x12153eedu); f_12157c30();
L_12153eed:;
  /* 12153eed cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153ef1 jne 0x12153f18 */
  if (!C.zf) goto L_12153f18;
  /* 12153ef3 push 0x1217b530 */
  push32((uint32_t)(0x1217b530u));
  /* 12153ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12153efa push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 12153eff push 0x1217b524 */
  push32((uint32_t)(0x1217b524u));
  /* 12153f04 push 2 */
  push32((uint32_t)(0x2u));
  /* 12153f06 call 0x12153b50 */
  push32(0x12153f0bu); f_12153b50();
  /* 12153f0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153f11 jne 0x12153f18 */
  if (!C.zf) goto L_12153f18;
  /* 12153f13 call 0x12153a40 */
  push32(0x12153f18u); f_12153a40();
L_12153f18:;
  /* 12153f18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12153f1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153f1c jne 0x12153eed */
  if (!C.zf) goto L_12153eed;
  /* 12153f1e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12153f23 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 12153f29 push ecx */
  push32((uint32_t)(ECX));
  /* 12153f2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12153f2c call dword ptr [0x12183368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183368))), 0x12153f32u);
  /* 12153f32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12153f34 jne 0x12153f4a */
  if (!C.zf) goto L_12153f4a;
  /* 12153f36 push 0x1217b50c */
  push32((uint32_t)(0x1217b50cu));
  /* 12153f3b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 12153f41 push edx */
  push32((uint32_t)(EDX));
  /* 12153f42 call 0x12157a40 */
  push32(0x12153f47u); f_12157a40();
  /* 12153f47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153f4a:;
  /* 12153f4a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 12153f50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12153f53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12153f56 push ecx */
  push32((uint32_t)(ECX));
  /* 12153f57 call 0x121578c0 */
  push32(0x12153f5cu); f_121578c0();
  /* 12153f5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153f5f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153f62 jbe 0x12153f8d */
  if ((C.cf||C.zf)) goto L_12153f8d;
  /* 12153f64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12153f67 push edx */
  push32((uint32_t)(EDX));
  /* 12153f68 call 0x121578c0 */
  push32(0x12153f6du); f_121578c0();
  /* 12153f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153f70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12153f73 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12153f77 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12153f7a push 3 */
  push32((uint32_t)(0x3u));
  /* 12153f7c push 0x1217b508 */
  push32((uint32_t)(0x1217b508u));
  /* 12153f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12153f84 push eax */
  push32((uint32_t)(EAX));
  /* 12153f85 call 0x121582b0 */
  push32(0x12153f8au); f_121582b0();
  /* 12153f8a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153f8d:;
  /* 12153f8d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12153f90 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 12153f96 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153f9d je 0x12153fe8 */
  if (C.zf) goto L_12153fe8;
  /* 12153f9f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12153fa5 push edx */
  push32((uint32_t)(EDX));
  /* 12153fa6 call 0x121578c0 */
  push32(0x12153fabu); f_121578c0();
  /* 12153fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153fae cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153fb1 jbe 0x12153fe8 */
  if ((C.cf||C.zf)) goto L_12153fe8;
  /* 12153fb3 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12153fb9 push eax */
  push32((uint32_t)(EAX));
  /* 12153fba call 0x121578c0 */
  push32(0x12153fbfu); f_121578c0();
  /* 12153fbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12153fc2 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12153fc8 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 12153fcc mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 12153fd2 push 3 */
  push32((uint32_t)(0x3u));
  /* 12153fd4 push 0x1217b508 */
  push32((uint32_t)(0x1217b508u));
  /* 12153fd9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 12153fdf push eax */
  push32((uint32_t)(EAX));
  /* 12153fe0 call 0x121582b0 */
  push32(0x12153fe5u); f_121582b0();
  /* 12153fe5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12153fe8:;
  /* 12153fe8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12153fec jne 0x12153ffa */
  if (!C.zf) goto L_12153ffa;
  /* 12153fee mov dword ptr [ebp - 0x1114], 0x1217b494 */
  w32((uint32_t)(EBP + -0x1114), (0x1217b494u));
  /* 12153ff8 jmp 0x12154004 */
  goto L_12154004;
L_12153ffa:;
  /* 12153ffa mov dword ptr [ebp - 0x1114], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1114), (0x1217b234u));
L_12154004:;
  /* 12154004 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154007 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1215400a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215400c je 0x12154019 */
  if (C.zf) goto L_12154019;
  /* 1215400e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154011 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 12154017 jmp 0x12154023 */
  goto L_12154023;
L_12154019:;
  /* 12154019 mov dword ptr [ebp - 0x1118], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1118), (0x1217b234u));
L_12154023:;
  /* 12154023 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154026 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12154029 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215402b je 0x1215403f */
  if (C.zf) goto L_1215403f;
  /* 1215402d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154031 jne 0x1215403f */
  if (!C.zf) goto L_1215403f;
  /* 12154033 mov dword ptr [ebp - 0x111c], 0x1217b484 */
  w32((uint32_t)(EBP + -0x111c), (0x1217b484u));
  /* 1215403d jmp 0x12154049 */
  goto L_12154049;
L_1215403f:;
  /* 1215403f mov dword ptr [ebp - 0x111c], 0x1217b234 */
  w32((uint32_t)(EBP + -0x111c), (0x1217b234u));
L_12154049:;
  /* 12154049 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215404c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215404f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12154051 je 0x1215405f */
  if (C.zf) goto L_1215405f;
  /* 12154053 mov dword ptr [ebp - 0x1120], 0x1217b480 */
  w32((uint32_t)(EBP + -0x1120), (0x1217b480u));
  /* 1215405d jmp 0x12154069 */
  goto L_12154069;
L_1215405f:;
  /* 1215405f mov dword ptr [ebp - 0x1120], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1120), (0x1217b234u));
L_12154069:;
  /* 12154069 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215406d je 0x1215407a */
  if (C.zf) goto L_1215407a;
  /* 1215406f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154072 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 12154078 jmp 0x12154084 */
  goto L_12154084;
L_1215407a:;
  /* 1215407a mov dword ptr [ebp - 0x1124], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1124), (0x1217b234u));
L_12154084:;
  /* 12154084 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154088 je 0x12154096 */
  if (C.zf) goto L_12154096;
  /* 1215408a mov dword ptr [ebp - 0x1128], 0x1217b478 */
  w32((uint32_t)(EBP + -0x1128), (0x1217b478u));
  /* 12154094 jmp 0x121540a0 */
  goto L_121540a0;
L_12154096:;
  /* 12154096 mov dword ptr [ebp - 0x1128], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1128), (0x1217b234u));
L_121540a0:;
  /* 121540a0 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121540a4 je 0x121540b1 */
  if (C.zf) goto L_121540b1;
  /* 121540a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121540a9 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 121540af jmp 0x121540bb */
  goto L_121540bb;
L_121540b1:;
  /* 121540b1 mov dword ptr [ebp - 0x112c], 0x1217b234 */
  w32((uint32_t)(EBP + -0x112c), (0x1217b234u));
L_121540bb:;
  /* 121540bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121540bf je 0x121540cd */
  if (C.zf) goto L_121540cd;
  /* 121540c1 mov dword ptr [ebp - 0x1130], 0x1217b470 */
  w32((uint32_t)(EBP + -0x1130), (0x1217b470u));
  /* 121540cb jmp 0x121540d7 */
  goto L_121540d7;
L_121540cd:;
  /* 121540cd mov dword ptr [ebp - 0x1130], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1130), (0x1217b234u));
L_121540d7:;
  /* 121540d7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121540de je 0x121540ee */
  if (C.zf) goto L_121540ee;
  /* 121540e0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 121540e6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 121540ec jmp 0x121540f8 */
  goto L_121540f8;
L_121540ee:;
  /* 121540ee mov dword ptr [ebp - 0x1134], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1134), (0x1217b234u));
L_121540f8:;
  /* 121540f8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121540ff je 0x1215410d */
  if (C.zf) goto L_1215410d;
  /* 12154101 mov dword ptr [ebp - 0x1138], 0x1217b464 */
  w32((uint32_t)(EBP + -0x1138), (0x1217b464u));
  /* 1215410b jmp 0x12154117 */
  goto L_12154117;
L_1215410d:;
  /* 1215410d mov dword ptr [ebp - 0x1138], 0x1217b234 */
  w32((uint32_t)(EBP + -0x1138), (0x1217b234u));
L_12154117:;
  /* 12154117 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1215411d push edx */
  push32((uint32_t)(EDX));
  /* 1215411e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 12154124 push eax */
  push32((uint32_t)(EAX));
  /* 12154125 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1215412b push ecx */
  push32((uint32_t)(ECX));
  /* 1215412c mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 12154132 push edx */
  push32((uint32_t)(EDX));
  /* 12154133 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 12154139 push eax */
  push32((uint32_t)(EAX));
  /* 1215413a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 12154140 push ecx */
  push32((uint32_t)(ECX));
  /* 12154141 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 12154147 push edx */
  push32((uint32_t)(EDX));
  /* 12154148 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1215414e push eax */
  push32((uint32_t)(EAX));
  /* 1215414f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 12154155 push ecx */
  push32((uint32_t)(ECX));
  /* 12154156 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1215415c push edx */
  push32((uint32_t)(EDX));
  /* 1215415d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154160 push eax */
  push32((uint32_t)(EAX));
  /* 12154161 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154164 mov edx, dword ptr [ecx*4 + 0x1217ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea50)));
  /* 1215416b push edx */
  push32((uint32_t)(EDX));
  /* 1215416c push 0x1217b410 */
  push32((uint32_t)(0x1217b410u));
  /* 12154171 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12154176 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1215417c push eax */
  push32((uint32_t)(EAX));
  /* 1215417d call 0x12157940 */
  push32(0x12154182u); f_12157940();
  /* 12154182 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154187 jge 0x1215419d */
  if ((C.sf==C.of)) goto L_1215419d;
  /* 12154189 push 0x1217b374 */
  push32((uint32_t)(0x1217b374u));
  /* 1215418e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 12154194 push ecx */
  push32((uint32_t)(ECX));
  /* 12154195 call 0x12157a40 */
  push32(0x1215419au); f_12157a40();
  /* 1215419a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215419d:;
  /* 1215419d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 121541a2 push 0x1217b3ec */
  push32((uint32_t)(0x1217b3ecu));
  /* 121541a7 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 121541ad push edx */
  push32((uint32_t)(EDX));
  /* 121541ae call 0x121581f0 */
  push32(0x121541b3u); f_121581f0();
  /* 121541b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121541b6 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 121541bc cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121541c3 jne 0x121541d6 */
  if (!C.zf) goto L_121541d6;
  /* 121541c5 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 121541c7 call 0x12157f30 */
  push32(0x121541ccu); f_12157f30();
  /* 121541cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121541cf push 3 */
  push32((uint32_t)(0x3u));
  /* 121541d1 call 0x12154250 */
  push32(0x121541d6u); f_12154250();
L_121541d6:;
  /* 121541d6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121541dd jne 0x121541e6 */
  if (!C.zf) goto L_121541e6;
  /* 121541df mov eax, 1 */
  EAX = (0x1u);
  /* 121541e4 jmp 0x121541e8 */
  goto L_121541e8;
L_121541e6:;
  /* 121541e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121541e8:;
  /* 121541e8 mov esp, ebp */
  ESP = (EBP);
  /* 121541ea pop ebp */
  EBP = (pop32());
  /* 121541eb ret  */
  ESPCHK(0x12153ee0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041f0 @ 0x121541f0 (56 bytes, 15 insns) */
void f_121541f0(void) {
  FTRACE(0x121541f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121541f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121541f1 mov ebp, esp */
  EBP = (ESP);
  /* 121541f3 cmp dword ptr [0x121820fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121541fa je 0x12154202 */
  if (C.zf) goto L_12154202;
  /* 121541fc call dword ptr [0x121820fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121820fc))), 0x12154202u);
L_12154202:;
  /* 12154202 push 0x1217e418 */
  push32((uint32_t)(0x1217e418u));
  /* 12154207 push 0x1217e208 */
  push32((uint32_t)(0x1217e208u));
  /* 1215420c call 0x121543c0 */
  push32(0x12154211u); f_121543c0();
  /* 12154211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154214 push 0x1217e104 */
  push32((uint32_t)(0x1217e104u));
  /* 12154219 push 0x1217e000 */
  push32((uint32_t)(0x1217e000u));
  /* 1215421e call 0x121543c0 */
  push32(0x12154223u); f_121543c0();
  /* 12154223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154226 pop ebp */
  EBP = (pop32());
  /* 12154227 ret  */
  ESPCHK(0x121541f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004230 @ 0x12154230 (21 bytes, 10 insns) */
void f_12154230(void) {
  FTRACE(0x12154230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154230 push ebp */
  push32((uint32_t)(EBP));
  /* 12154231 mov ebp, esp */
  EBP = (ESP);
  /* 12154233 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154235 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154237 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215423a push eax */
  push32((uint32_t)(EAX));
  /* 1215423b call 0x121542b0 */
  push32(0x12154240u); f_121542b0();
  /* 12154240 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154243 pop ebp */
  EBP = (pop32());
  /* 12154244 ret  */
  ESPCHK(0x12154230u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x12154250 (21 bytes, 10 insns) */
void f_12154250(void) {
  FTRACE(0x12154250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154250 push ebp */
  push32((uint32_t)(EBP));
  /* 12154251 mov ebp, esp */
  EBP = (ESP);
  /* 12154253 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154255 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154257 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215425a push eax */
  push32((uint32_t)(EAX));
  /* 1215425b call 0x121542b0 */
  push32(0x12154260u); f_121542b0();
  /* 12154260 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154263 pop ebp */
  EBP = (pop32());
  /* 12154264 ret  */
  ESPCHK(0x12154250u, _esp0);
  ESP += 4; return;
}

/* FUN_10004270 @ 0x12154270 (19 bytes, 9 insns) */
void f_12154270(void) {
  FTRACE(0x12154270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154270 push ebp */
  push32((uint32_t)(EBP));
  /* 12154271 mov ebp, esp */
  EBP = (ESP);
  /* 12154273 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154275 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154277 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154279 call 0x121542b0 */
  push32(0x1215427eu); f_121542b0();
  /* 1215427e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154281 pop ebp */
  EBP = (pop32());
  /* 12154282 ret  */
  ESPCHK(0x12154270u, _esp0);
  ESP += 4; return;
}

/* FUN_10004290 @ 0x12154290 (19 bytes, 9 insns) */
void f_12154290(void) {
  FTRACE(0x12154290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154290 push ebp */
  push32((uint32_t)(EBP));
  /* 12154291 mov ebp, esp */
  EBP = (ESP);
  /* 12154293 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154295 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154297 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154299 call 0x121542b0 */
  push32(0x1215429eu); f_121542b0();
  /* 1215429e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121542a1 pop ebp */
  EBP = (pop32());
  /* 121542a2 ret  */
  ESPCHK(0x12154290u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x121542b0 (227 bytes, 61 insns) */
void f_121542b0(void) {
  FTRACE(0x121542b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121542b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121542b1 mov ebp, esp */
  EBP = (ESP);
  /* 121542b3 push ecx */
  push32((uint32_t)(ECX));
  /* 121542b4 call 0x121543a0 */
  push32(0x121542b9u); f_121543a0();
  /* 121542b9 cmp dword ptr [0x12180600], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12180600))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121542c0 jne 0x121542d3 */
  if (!C.zf) goto L_121542d3;
  /* 121542c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121542c5 push eax */
  push32((uint32_t)(EAX));
  /* 121542c6 call dword ptr [0x12183374] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183374))), 0x121542ccu);
  /* 121542cc push eax */
  push32((uint32_t)(EAX));
  /* 121542cd call dword ptr [0x12183370] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183370))), 0x121542d3u);
L_121542d3:;
  /* 121542d3 mov dword ptr [0x121805fc], 1 */
  w32((uint32_t)(0x121805fc), (0x1u));
  /* 121542dd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 121542e0 mov byte ptr [0x121805f8], cl */
  w8((uint32_t)(0x121805f8), (CL));
  /* 121542e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121542ea jne 0x12154333 */
  if (!C.zf) goto L_12154333;
  /* 121542ec cmp dword ptr [0x121820f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121542f3 je 0x12154321 */
  if (C.zf) goto L_12154321;
  /* 121542f5 mov edx, dword ptr [0x121820f4] */
  EDX = (r32((uint32_t)(0x121820f4)));
  /* 121542fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121542fe:;
  /* 121542fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154301 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12154304 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215430a cmp ecx, dword ptr [0x121820f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x121820f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154310 jb 0x12154321 */
  if (C.cf) goto L_12154321;
  /* 12154312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154315 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154318 je 0x1215431f */
  if (C.zf) goto L_1215431f;
  /* 1215431a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215431d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1215431fu);
L_1215431f:;
  /* 1215431f jmp 0x121542fe */
  goto L_121542fe;
L_12154321:;
  /* 12154321 push 0x1217e724 */
  push32((uint32_t)(0x1217e724u));
  /* 12154326 push 0x1217e51c */
  push32((uint32_t)(0x1217e51cu));
  /* 1215432b call 0x121543c0 */
  push32(0x12154330u); f_121543c0();
  /* 12154330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154333:;
  /* 12154333 push 0x1217e92c */
  push32((uint32_t)(0x1217e92cu));
  /* 12154338 push 0x1217e828 */
  push32((uint32_t)(0x1217e828u));
  /* 1215433d call 0x121543c0 */
  push32(0x12154342u); f_121543c0();
  /* 12154342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154345 cmp dword ptr [0x12180604], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180604))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215434c jne 0x1215436e */
  if (!C.zf) goto L_1215436e;
  /* 1215434e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12154350 call 0x12155fa0 */
  push32(0x12154355u); f_12155fa0();
  /* 12154355 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154358 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1215435b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215435d je 0x1215436e */
  if (C.zf) goto L_1215436e;
  /* 1215435f mov dword ptr [0x12180604], 1 */
  w32((uint32_t)(0x12180604), (0x1u));
  /* 12154369 call 0x121568b0 */
  push32(0x1215436eu); f_121568b0();
L_1215436e:;
  /* 1215436e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154372 je 0x1215437b */
  if (C.zf) goto L_1215437b;
  /* 12154374 call 0x121543b0 */
  push32(0x12154379u); f_121543b0();
  /* 12154379 jmp 0x1215438f */
  goto L_1215438f;
L_1215437b:;
  /* 1215437b mov dword ptr [0x12180600], 1 */
  w32((uint32_t)(0x12180600), (0x1u));
  /* 12154385 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154388 push ecx */
  push32((uint32_t)(ECX));
  /* 12154389 call dword ptr [0x1218336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218336c))), 0x1215438fu);
L_1215438f:;
  /* 1215438f mov esp, ebp */
  ESP = (EBP);
  /* 12154391 pop ebp */
  EBP = (pop32());
  /* 12154392 ret  */
  ESPCHK(0x121542b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043a0 @ 0x121543a0 (15 bytes, 7 insns) */
void f_121543a0(void) {
  FTRACE(0x121543a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121543a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121543a1 mov ebp, esp */
  EBP = (ESP);
  /* 121543a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 121543a5 call 0x12158490 */
  push32(0x121543aau); f_12158490();
  /* 121543aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121543ad pop ebp */
  EBP = (pop32());
  /* 121543ae ret  */
  ESPCHK(0x121543a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043b0 @ 0x121543b0 (15 bytes, 7 insns) */
void f_121543b0(void) {
  FTRACE(0x121543b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121543b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121543b1 mov ebp, esp */
  EBP = (ESP);
  /* 121543b3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 121543b5 call 0x12158530 */
  push32(0x121543bau); f_12158530();
  /* 121543ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121543bd pop ebp */
  EBP = (pop32());
  /* 121543be ret  */
  ESPCHK(0x121543b0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x121543c0 (37 bytes, 16 insns) */
void f_121543c0(void) {
  FTRACE(0x121543c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121543c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121543c1 mov ebp, esp */
  EBP = (ESP);
L_121543c3:;
  /* 121543c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121543c6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121543c9 jae 0x121543e3 */
  if (!C.cf) goto L_121543e3;
  /* 121543cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121543ce cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121543d1 je 0x121543d8 */
  if (C.zf) goto L_121543d8;
  /* 121543d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121543d6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x121543d8u);
L_121543d8:;
  /* 121543d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121543db add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121543de mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121543e1 jmp 0x121543c3 */
  goto L_121543c3;
L_121543e3:;
  /* 121543e3 pop ebp */
  EBP = (pop32());
  /* 121543e4 ret  */
  ESPCHK(0x121543c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100043f0 @ 0x121543f0 (130 bytes, 42 insns) */
void f_121543f0(void) {
  FTRACE(0x121543f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121543f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121543f1 mov ebp, esp */
  EBP = (ESP);
  /* 121543f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121543f4 call 0x121583b0 */
  push32(0x121543f9u); f_121583b0();
  /* 121543f9 call dword ptr [0x121832a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832a4))), 0x121543ffu);
  /* 121543ff mov dword ptr [0x1217ea5c], eax */
  w32((uint32_t)(0x1217ea5c), (EAX));
  /* 12154404 cmp dword ptr [0x1217ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1217ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215440b jne 0x12154411 */
  if (!C.zf) goto L_12154411;
  /* 1215440d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215440f jmp 0x1215446e */
  goto L_1215446e;
L_12154411:;
  /* 12154411 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 12154413 push 0x1217b548 */
  push32((uint32_t)(0x1217b548u));
  /* 12154418 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215441a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1215441c push 1 */
  push32((uint32_t)(0x1u));
  /* 1215441e call 0x12154ea0 */
  push32(0x12154423u); f_12154ea0();
  /* 12154423 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154429 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215442d je 0x12154444 */
  if (C.zf) goto L_12154444;
  /* 1215442f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154432 push eax */
  push32((uint32_t)(EAX));
  /* 12154433 mov ecx, dword ptr [0x1217ea5c] */
  ECX = (r32((uint32_t)(0x1217ea5c)));
  /* 12154439 push ecx */
  push32((uint32_t)(ECX));
  /* 1215443a call dword ptr [0x1218337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218337c))), 0x12154440u);
  /* 12154440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154442 jne 0x12154448 */
  if (!C.zf) goto L_12154448;
L_12154444:;
  /* 12154444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154446 jmp 0x1215446e */
  goto L_1215446e;
L_12154448:;
  /* 12154448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215444b push edx */
  push32((uint32_t)(EDX));
  /* 1215444c call 0x121544b0 */
  push32(0x12154451u); f_121544b0();
  /* 12154451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154454 call dword ptr [0x12183378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183378))), 0x1215445au);
  /* 1215445a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215445d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1215445f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154462 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 12154469 mov eax, 1 */
  EAX = (0x1u);
L_1215446e:;
  /* 1215446e mov esp, ebp */
  ESP = (EBP);
  /* 12154470 pop ebp */
  EBP = (pop32());
  /* 12154471 ret  */
  ESPCHK(0x121543f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x12154480 (41 bytes, 11 insns) */
void f_12154480(void) {
  FTRACE(0x12154480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154480 push ebp */
  push32((uint32_t)(EBP));
  /* 12154481 mov ebp, esp */
  EBP = (ESP);
  /* 12154483 call 0x121583f0 */
  push32(0x12154488u); f_121583f0();
  /* 12154488 cmp dword ptr [0x1217ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1217ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215448f je 0x121544a7 */
  if (C.zf) goto L_121544a7;
  /* 12154491 mov eax, dword ptr [0x1217ea5c] */
  EAX = (r32((uint32_t)(0x1217ea5c)));
  /* 12154496 push eax */
  push32((uint32_t)(EAX));
  /* 12154497 call dword ptr [0x121832a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121832a8))), 0x1215449du);
  /* 1215449d mov dword ptr [0x1217ea5c], 0xffffffff */
  w32((uint32_t)(0x1217ea5c), (0xffffffffu));
L_121544a7:;
  /* 121544a7 pop ebp */
  EBP = (pop32());
  /* 121544a8 ret  */
  ESPCHK(0x12154480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x121544b0 (25 bytes, 8 insns) */
void f_121544b0(void) {
  FTRACE(0x121544b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121544b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121544b1 mov ebp, esp */
  EBP = (ESP);
  /* 121544b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121544b6 mov dword ptr [eax + 0x50], 0x1217ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1217ec00u));
  /* 121544bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121544c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 121544c7 pop ebp */
  EBP = (pop32());
  /* 121544c8 ret  */
  ESPCHK(0x121544b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100044d0 @ 0x121544d0 (152 bytes, 48 insns) */
void f_121544d0(void) {
  FTRACE(0x121544d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121544d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121544d1 mov ebp, esp */
  EBP = (ESP);
  /* 121544d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121544d6 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x121544dcu);
  /* 121544dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121544df mov eax, dword ptr [0x1217ea5c] */
  EAX = (r32((uint32_t)(0x1217ea5c)));
  /* 121544e4 push eax */
  push32((uint32_t)(EAX));
  /* 121544e5 call dword ptr [0x1218338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218338c))), 0x121544ebu);
  /* 121544eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121544ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121544f2 jne 0x12154557 */
  if (!C.zf) goto L_12154557;
  /* 121544f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 121544f9 push 0x1217b548 */
  push32((uint32_t)(0x1217b548u));
  /* 121544fe push 2 */
  push32((uint32_t)(0x2u));
  /* 12154500 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 12154502 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154504 call 0x12154ea0 */
  push32(0x12154509u); f_12154ea0();
  /* 12154509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215450c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215450f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154513 je 0x1215454d */
  if (C.zf) goto L_1215454d;
  /* 12154515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154518 push ecx */
  push32((uint32_t)(ECX));
  /* 12154519 mov edx, dword ptr [0x1217ea5c] */
  EDX = (r32((uint32_t)(0x1217ea5c)));
  /* 1215451f push edx */
  push32((uint32_t)(EDX));
  /* 12154520 call dword ptr [0x1218337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218337c))), 0x12154526u);
  /* 12154526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154528 je 0x1215454d */
  if (C.zf) goto L_1215454d;
  /* 1215452a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215452d push eax */
  push32((uint32_t)(EAX));
  /* 1215452e call 0x121544b0 */
  push32(0x12154533u); f_121544b0();
  /* 12154533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154536 call dword ptr [0x12183378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183378))), 0x1215453cu);
  /* 1215453c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215453f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12154541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154544 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1215454b jmp 0x12154557 */
  goto L_12154557;
L_1215454d:;
  /* 1215454d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1215454f call 0x12153a00 */
  push32(0x12154554u); f_12153a00();
  /* 12154554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154557:;
  /* 12154557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215455a push eax */
  push32((uint32_t)(EAX));
  /* 1215455b call dword ptr [0x12183388] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183388))), 0x12154561u);
  /* 12154561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154564 mov esp, ebp */
  ESP = (EBP);
  /* 12154566 pop ebp */
  EBP = (pop32());
  /* 12154567 ret  */
  ESPCHK(0x121544d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x12154570 (263 bytes, 86 insns) */
void f_12154570(void) {
  FTRACE(0x12154570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154570 push ebp */
  push32((uint32_t)(EBP));
  /* 12154571 mov ebp, esp */
  EBP = (ESP);
  /* 12154573 cmp dword ptr [0x1217ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1217ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215457a je 0x12154675 */
  if (C.zf) goto L_12154675;
  /* 12154580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154584 jne 0x12154595 */
  if (!C.zf) goto L_12154595;
  /* 12154586 mov eax, dword ptr [0x1217ea5c] */
  EAX = (r32((uint32_t)(0x1217ea5c)));
  /* 1215458b push eax */
  push32((uint32_t)(EAX));
  /* 1215458c call dword ptr [0x1218338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218338c))), 0x12154592u);
  /* 12154592 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12154595:;
  /* 12154595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154599 je 0x12154666 */
  if (C.zf) goto L_12154666;
  /* 1215459f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121545a6 je 0x121545b9 */
  if (C.zf) goto L_121545b9;
  /* 121545a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121545aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 121545b0 push eax */
  push32((uint32_t)(EAX));
  /* 121545b1 call 0x12155520 */
  push32(0x121545b6u); f_12155520();
  /* 121545b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121545b9:;
  /* 121545b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121545c0 je 0x121545d3 */
  if (C.zf) goto L_121545d3;
  /* 121545c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 121545c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 121545ca push eax */
  push32((uint32_t)(EAX));
  /* 121545cb call 0x12155520 */
  push32(0x121545d0u); f_12155520();
  /* 121545d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121545d3:;
  /* 121545d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121545da je 0x121545ed */
  if (C.zf) goto L_121545ed;
  /* 121545dc push 2 */
  push32((uint32_t)(0x2u));
  /* 121545de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 121545e4 push eax */
  push32((uint32_t)(EAX));
  /* 121545e5 call 0x12155520 */
  push32(0x121545eau); f_12155520();
  /* 121545ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121545ed:;
  /* 121545ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121545f4 je 0x12154607 */
  if (C.zf) goto L_12154607;
  /* 121545f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121545f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121545fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 121545fe push eax */
  push32((uint32_t)(EAX));
  /* 121545ff call 0x12155520 */
  push32(0x12154604u); f_12155520();
  /* 12154604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154607:;
  /* 12154607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215460a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215460e je 0x12154621 */
  if (C.zf) goto L_12154621;
  /* 12154610 push 2 */
  push32((uint32_t)(0x2u));
  /* 12154612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154615 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12154618 push eax */
  push32((uint32_t)(EAX));
  /* 12154619 call 0x12155520 */
  push32(0x1215461eu); f_12155520();
  /* 1215461e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154621:;
  /* 12154621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154624 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154628 je 0x1215463b */
  if (C.zf) goto L_1215463b;
  /* 1215462a push 2 */
  push32((uint32_t)(0x2u));
  /* 1215462c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215462f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 12154632 push eax */
  push32((uint32_t)(EAX));
  /* 12154633 call 0x12155520 */
  push32(0x12154638u); f_12155520();
  /* 12154638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215463b:;
  /* 1215463b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215463e cmp dword ptr [ecx + 0x50], 0x1217ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1217ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154645 je 0x12154658 */
  if (C.zf) goto L_12154658;
  /* 12154647 push 2 */
  push32((uint32_t)(0x2u));
  /* 12154649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215464c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1215464f push eax */
  push32((uint32_t)(EAX));
  /* 12154650 call 0x12155520 */
  push32(0x12154655u); f_12155520();
  /* 12154655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154658:;
  /* 12154658 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215465a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215465d push ecx */
  push32((uint32_t)(ECX));
  /* 1215465e call 0x12155520 */
  push32(0x12154663u); f_12155520();
  /* 12154663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12154666:;
  /* 12154666 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154668 mov edx, dword ptr [0x1217ea5c] */
  EDX = (r32((uint32_t)(0x1217ea5c)));
  /* 1215466e push edx */
  push32((uint32_t)(EDX));
  /* 1215466f call dword ptr [0x1218337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218337c))), 0x12154675u);
L_12154675:;
  /* 12154675 pop ebp */
  EBP = (pop32());
  /* 12154676 ret  */
  ESPCHK(0x12154570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004680 @ 0x12154680 (11 bytes, 5 insns) */
void f_12154680(void) {
  FTRACE(0x12154680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154680 push ebp */
  push32((uint32_t)(EBP));
  /* 12154681 mov ebp, esp */
  EBP = (ESP);
  /* 12154683 call dword ptr [0x12183378] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183378))), 0x12154689u);
  /* 12154689 pop ebp */
  EBP = (pop32());
  /* 1215468a ret  */
  ESPCHK(0x12154680u, _esp0);
  ESP += 4; return;
}

/* FUN_10004690 @ 0x12154690 (11 bytes, 5 insns) */
void f_12154690(void) {
  FTRACE(0x12154690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154690 push ebp */
  push32((uint32_t)(EBP));
  /* 12154691 mov ebp, esp */
  EBP = (ESP);
  /* 12154693 call dword ptr [0x12183394] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183394))), 0x12154699u);
  /* 12154699 pop ebp */
  EBP = (pop32());
  /* 1215469a ret  */
  ESPCHK(0x12154690u, _esp0);
  ESP += 4; return;
}

/* FUN_100046a0 @ 0x121546a0 (804 bytes, 236 insns) */
void f_121546a0(void) {
  FTRACE(0x121546a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121546a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121546a1 mov ebp, esp */
  EBP = (ESP);
  /* 121546a3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121546a6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 121546ab push 0x1217b554 */
  push32((uint32_t)(0x1217b554u));
  /* 121546b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121546b2 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 121546b7 call 0x12154a90 */
  push32(0x121546bcu); f_12154a90();
  /* 121546bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121546bf mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 121546c2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121546c6 jne 0x121546d2 */
  if (!C.zf) goto L_121546d2;
  /* 121546c8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 121546ca call 0x12153a00 */
  push32(0x121546cfu); f_12153a00();
  /* 121546cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121546d2:;
  /* 121546d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121546d5 mov dword ptr [0x12181fa0], eax */
  w32((uint32_t)(0x12181fa0), (EAX));
  /* 121546da mov dword ptr [0x121820dc], 0x20 */
  w32((uint32_t)(0x121820dc), (0x20u));
  /* 121546e4 jmp 0x121546ef */
  goto L_121546ef;
L_121546e6:;
  /* 121546e6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121546e9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121546ec mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_121546ef:;
  /* 121546ef mov edx, dword ptr [0x12181fa0] */
  EDX = (r32((uint32_t)(0x12181fa0)));
  /* 121546f5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121546fb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121546fe jae 0x12154723 */
  if (!C.cf) goto L_12154723;
  /* 12154700 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154703 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12154707 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215470a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12154710 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154713 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12154717 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215471a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12154721 jmp 0x121546e6 */
  goto L_121546e6;
L_12154723:;
  /* 12154723 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 12154726 push ecx */
  push32((uint32_t)(ECX));
  /* 12154727 call dword ptr [0x121833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a0))), 0x1215472du);
  /* 1215472d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 12154730 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12154736 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12154738 je 0x121548c5 */
  if (C.zf) goto L_121548c5;
  /* 1215473e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154742 je 0x121548c5 */
  if (C.zf) goto L_121548c5;
  /* 12154748 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215474b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215474d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 12154750 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12154753 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154756 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12154759 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215475c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215475f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 12154762 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154769 jge 0x12154773 */
  if ((C.sf==C.of)) goto L_12154773;
  /* 1215476b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1215476e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 12154771 jmp 0x1215477a */
  goto L_1215477a;
L_12154773:;
  /* 12154773 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1215477a:;
  /* 1215477a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1215477d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 12154780 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 12154787 jmp 0x12154792 */
  goto L_12154792;
L_12154789:;
  /* 12154789 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1215478c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215478f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_12154792:;
  /* 12154792 mov ecx, dword ptr [0x121820dc] */
  ECX = (r32((uint32_t)(0x121820dc)));
  /* 12154798 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215479b jge 0x12154832 */
  if ((C.sf==C.of)) goto L_12154832;
  /* 121547a1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 121547a6 push 0x1217b554 */
  push32((uint32_t)(0x1217b554u));
  /* 121547ab push 2 */
  push32((uint32_t)(0x2u));
  /* 121547ad push 0x480 */
  push32((uint32_t)(0x480u));
  /* 121547b2 call 0x12154a90 */
  push32(0x121547b7u); f_12154a90();
  /* 121547b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121547ba mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 121547bd cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121547c1 jne 0x121547ce */
  if (!C.zf) goto L_121547ce;
  /* 121547c3 mov edx, dword ptr [0x121820dc] */
  EDX = (r32((uint32_t)(0x121820dc)));
  /* 121547c9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 121547cc jmp 0x12154832 */
  goto L_12154832;
L_121547ce:;
  /* 121547ce mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 121547d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121547d4 mov dword ptr [eax*4 + 0x12181fa0], ecx */
  w32((uint32_t)(EAX*4 + 0x12181fa0), (ECX));
  /* 121547db mov edx, dword ptr [0x121820dc] */
  EDX = (r32((uint32_t)(0x121820dc)));
  /* 121547e1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121547e4 mov dword ptr [0x121820dc], edx */
  w32((uint32_t)(0x121820dc), (EDX));
  /* 121547ea jmp 0x121547f5 */
  goto L_121547f5;
L_121547ec:;
  /* 121547ec mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121547ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121547f2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_121547f5:;
  /* 121547f5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 121547f8 mov edx, dword ptr [ecx*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12181fa0)));
  /* 121547ff add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154805 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154808 jae 0x1215482d */
  if (!C.cf) goto L_1215482d;
  /* 1215480a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215480d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12154811 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154814 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1215481a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215481d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12154821 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154824 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1215482b jmp 0x121547ec */
  goto L_121547ec;
L_1215482d:;
  /* 1215482d jmp 0x12154789 */
  goto L_12154789;
L_12154832:;
  /* 12154832 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 12154839 jmp 0x12154856 */
  goto L_12154856;
L_1215483b:;
  /* 1215483b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1215483e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154841 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 12154844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154847 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215484a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215484d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 12154850 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154853 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_12154856:;
  /* 12154856 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12154859 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215485c jge 0x121548c5 */
  if ((C.sf==C.of)) goto L_121548c5;
  /* 1215485e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 12154861 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154864 je 0x121548c0 */
  if (C.zf) goto L_121548c0;
  /* 12154866 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154869 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1215486c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1215486f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12154871 je 0x121548c0 */
  if (C.zf) goto L_121548c0;
  /* 12154873 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154876 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12154879 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1215487c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215487e jne 0x12154890 */
  if (!C.zf) goto L_12154890;
  /* 12154880 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 12154883 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12154885 push edx */
  push32((uint32_t)(EDX));
  /* 12154886 call dword ptr [0x1218339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218339c))), 0x1215488cu);
  /* 1215488c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215488e je 0x121548c0 */
  if (C.zf) goto L_121548c0;
L_12154890:;
  /* 12154890 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 12154893 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12154896 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 12154899 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1215489c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215489f mov edx, dword ptr [eax*4 + 0x12181fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 121548a6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121548a8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 121548ab mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121548ae mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 121548b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121548b3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121548b5 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121548b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121548bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121548bd mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_121548c0:;
  /* 121548c0 jmp 0x1215483b */
  goto L_1215483b;
L_121548c5:;
  /* 121548c5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 121548cc jmp 0x121548d7 */
  goto L_121548d7;
L_121548ce:;
  /* 121548ce mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 121548d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121548d4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_121548d7:;
  /* 121548d7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121548db jge 0x121549b4 */
  if ((C.sf==C.of)) goto L_121549b4;
  /* 121548e1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 121548e4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121548e7 mov edx, dword ptr [0x12181fa0] */
  EDX = (r32((uint32_t)(0x12181fa0)));
  /* 121548ed add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121548ef mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 121548f2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121548f5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121548f8 jne 0x121549a0 */
  if (!C.zf) goto L_121549a0;
  /* 121548fe mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154901 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 12154905 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154909 jne 0x12154914 */
  if (!C.zf) goto L_12154914;
  /* 1215490b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 12154912 jmp 0x12154924 */
  goto L_12154924;
L_12154914:;
  /* 12154914 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 12154917 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215491a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215491c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215491e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154921 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_12154924:;
  /* 12154924 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 12154927 push eax */
  push32((uint32_t)(EAX));
  /* 12154928 call dword ptr [0x1218334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218334c))), 0x1215492eu);
  /* 1215492e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 12154931 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154935 je 0x1215498f */
  if (C.zf) goto L_1215498f;
  /* 12154937 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1215493a push ecx */
  push32((uint32_t)(ECX));
  /* 1215493b call dword ptr [0x1218339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218339c))), 0x12154941u);
  /* 12154941 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 12154944 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154948 je 0x1215498f */
  if (C.zf) goto L_1215498f;
  /* 1215494a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215494d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12154950 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12154952 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 12154955 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215495b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215495e jne 0x12154970 */
  if (!C.zf) goto L_12154970;
  /* 12154960 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154963 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12154966 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12154968 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215496b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1215496e jmp 0x1215498d */
  goto L_1215498d;
L_12154970:;
  /* 12154970 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 12154973 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12154979 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215497c jne 0x1215498d */
  if (!C.zf) goto L_1215498d;
  /* 1215497e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154981 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12154984 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 12154987 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215498a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1215498d:;
  /* 1215498d jmp 0x1215499e */
  goto L_1215499e;
L_1215498f:;
  /* 1215498f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 12154992 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12154995 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12154998 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1215499b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1215499e:;
  /* 1215499e jmp 0x121549af */
  goto L_121549af;
L_121549a0:;
  /* 121549a0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 121549a3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 121549a6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 121549a9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 121549ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_121549af:;
  /* 121549af jmp 0x121548ce */
  goto L_121548ce;
L_121549b4:;
  /* 121549b4 mov eax, dword ptr [0x121820dc] */
  EAX = (r32((uint32_t)(0x121820dc)));
  /* 121549b9 push eax */
  push32((uint32_t)(EAX));
  /* 121549ba call dword ptr [0x12183398] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183398))), 0x121549c0u);
  /* 121549c0 mov esp, ebp */
  ESP = (EBP);
  /* 121549c2 pop ebp */
  EBP = (pop32());
  /* 121549c3 ret  */
  ESPCHK(0x121546a0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x121549d0 (155 bytes, 45 insns) */
void f_121549d0(void) {
  FTRACE(0x121549d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121549d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121549d1 mov ebp, esp */
  EBP = (ESP);
  /* 121549d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121549d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121549dd jmp 0x121549e8 */
  goto L_121549e8;
L_121549df:;
  /* 121549df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121549e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121549e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121549e8:;
  /* 121549e8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121549ec jge 0x12154a67 */
  if ((C.sf==C.of)) goto L_12154a67;
  /* 121549ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121549f1 cmp dword ptr [ecx*4 + 0x12181fa0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12181fa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121549f9 je 0x12154a62 */
  if (C.zf) goto L_12154a62;
  /* 121549fb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121549fe mov eax, dword ptr [edx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 12154a05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154a08 jmp 0x12154a13 */
  goto L_12154a13;
L_12154a0a:;
  /* 12154a0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154a0d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154a10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12154a13:;
  /* 12154a13 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154a16 mov eax, dword ptr [edx*4 + 0x12181fa0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12181fa0)));
  /* 12154a1d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154a22 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154a25 jae 0x12154a3f */
  if (!C.cf) goto L_12154a3f;
  /* 12154a27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154a2a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154a2e je 0x12154a3d */
  if (C.zf) goto L_12154a3d;
  /* 12154a30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154a33 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154a36 push edx */
  push32((uint32_t)(EDX));
  /* 12154a37 call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x12154a3du);
L_12154a3d:;
  /* 12154a3d jmp 0x12154a0a */
  goto L_12154a0a;
L_12154a3f:;
  /* 12154a3f push 2 */
  push32((uint32_t)(0x2u));
  /* 12154a41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154a44 mov ecx, dword ptr [eax*4 + 0x12181fa0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12181fa0)));
  /* 12154a4b push ecx */
  push32((uint32_t)(ECX));
  /* 12154a4c call 0x12155520 */
  push32(0x12154a51u); f_12155520();
  /* 12154a51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154a54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154a57 mov dword ptr [edx*4 + 0x12181fa0], 0 */
  w32((uint32_t)(EDX*4 + 0x12181fa0), (0x0u));
L_12154a62:;
  /* 12154a62 jmp 0x121549df */
  goto L_121549df;
L_12154a67:;
  /* 12154a67 mov esp, ebp */
  ESP = (EBP);
  /* 12154a69 pop ebp */
  EBP = (pop32());
  /* 12154a6a ret  */
  ESPCHK(0x121549d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a70 @ 0x12154a70 (29 bytes, 13 insns) */
void f_12154a70(void) {
  FTRACE(0x12154a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154a70 push ebp */
  push32((uint32_t)(EBP));
  /* 12154a71 mov ebp, esp */
  EBP = (ESP);
  /* 12154a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154a79 mov eax, dword ptr [0x121807a8] */
  EAX = (r32((uint32_t)(0x121807a8)));
  /* 12154a7e push eax */
  push32((uint32_t)(EAX));
  /* 12154a7f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154a82 push ecx */
  push32((uint32_t)(ECX));
  /* 12154a83 call 0x12154ae0 */
  push32(0x12154a88u); f_12154ae0();
  /* 12154a88 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154a8b pop ebp */
  EBP = (pop32());
  /* 12154a8c ret  */
  ESPCHK(0x12154a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x12154a90 (35 bytes, 16 insns) */
void f_12154a90(void) {
  FTRACE(0x12154a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12154a91 mov ebp, esp */
  EBP = (ESP);
  /* 12154a93 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154a96 push eax */
  push32((uint32_t)(EAX));
  /* 12154a97 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154a9a push ecx */
  push32((uint32_t)(ECX));
  /* 12154a9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154a9e push edx */
  push32((uint32_t)(EDX));
  /* 12154a9f mov eax, dword ptr [0x121807a8] */
  EAX = (r32((uint32_t)(0x121807a8)));
  /* 12154aa4 push eax */
  push32((uint32_t)(EAX));
  /* 12154aa5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154aa8 push ecx */
  push32((uint32_t)(ECX));
  /* 12154aa9 call 0x12154ae0 */
  push32(0x12154aaeu); f_12154ae0();
  /* 12154aae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ab1 pop ebp */
  EBP = (pop32());
  /* 12154ab2 ret  */
  ESPCHK(0x12154a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ac0 @ 0x12154ac0 (27 bytes, 13 insns) */
void f_12154ac0(void) {
  FTRACE(0x12154ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12154ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12154ac3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154ac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154ac9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154acc push eax */
  push32((uint32_t)(EAX));
  /* 12154acd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 12154ad1 call 0x12154ae0 */
  push32(0x12154ad6u); f_12154ae0();
  /* 12154ad6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ad9 pop ebp */
  EBP = (pop32());
  /* 12154ada ret  */
  ESPCHK(0x12154ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ae0 @ 0x12154ae0 (94 bytes, 38 insns) */
void f_12154ae0(void) {
  FTRACE(0x12154ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12154ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12154ae3 push ecx */
  push32((uint32_t)(ECX));
L_12154ae4:;
  /* 12154ae4 push 9 */
  push32((uint32_t)(0x9u));
  /* 12154ae6 call 0x12158490 */
  push32(0x12154aebu); f_12158490();
  /* 12154aeb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154aee mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154af1 push eax */
  push32((uint32_t)(EAX));
  /* 12154af2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154af5 push ecx */
  push32((uint32_t)(ECX));
  /* 12154af6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154af9 push edx */
  push32((uint32_t)(EDX));
  /* 12154afa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154afd push eax */
  push32((uint32_t)(EAX));
  /* 12154afe call 0x12154b60 */
  push32(0x12154b03u); f_12154b60();
  /* 12154b03 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154b06 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154b09 push 9 */
  push32((uint32_t)(0x9u));
  /* 12154b0b call 0x12158530 */
  push32(0x12154b10u); f_12158530();
  /* 12154b10 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154b13 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154b17 jne 0x12154b1f */
  if (!C.zf) goto L_12154b1f;
  /* 12154b19 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154b1d jne 0x12154b24 */
  if (!C.zf) goto L_12154b24;
L_12154b1f:;
  /* 12154b1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154b22 jmp 0x12154b3a */
  goto L_12154b3a;
L_12154b24:;
  /* 12154b24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154b27 push ecx */
  push32((uint32_t)(ECX));
  /* 12154b28 call 0x121587d0 */
  push32(0x12154b2du); f_121587d0();
  /* 12154b2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154b32 jne 0x12154b38 */
  if (!C.zf) goto L_12154b38;
  /* 12154b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154b36 jmp 0x12154b3a */
  goto L_12154b3a;
L_12154b38:;
  /* 12154b38 jmp 0x12154ae4 */
  goto L_12154ae4;
L_12154b3a:;
  /* 12154b3a mov esp, ebp */
  ESP = (EBP);
  /* 12154b3c pop ebp */
  EBP = (pop32());
  /* 12154b3d ret  */
  ESPCHK(0x12154ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b40 @ 0x12154b40 (23 bytes, 11 insns) */
void f_12154b40(void) {
  FTRACE(0x12154b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12154b41 mov ebp, esp */
  EBP = (ESP);
  /* 12154b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154b49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154b4c push eax */
  push32((uint32_t)(EAX));
  /* 12154b4d call 0x12154b60 */
  push32(0x12154b52u); f_12154b60();
  /* 12154b52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154b55 pop ebp */
  EBP = (pop32());
  /* 12154b56 ret  */
  ESPCHK(0x12154b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b60 @ 0x12154b60 (787 bytes, 254 insns) */
void f_12154b60(void) {
  FTRACE(0x12154b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154b60 push ebp */
  push32((uint32_t)(EBP));
  /* 12154b61 mov ebp, esp */
  EBP = (ESP);
  /* 12154b63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12154b66 push ebx */
  push32((uint32_t)(EBX));
  /* 12154b67 push esi */
  push32((uint32_t)(ESI));
  /* 12154b68 push edi */
  push32((uint32_t)(EDI));
  /* 12154b69 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12154b70 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12154b75 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12154b78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154b7a je 0x12154bac */
  if (C.zf) goto L_12154bac;
L_12154b7c:;
  /* 12154b7c call 0x12155c30 */
  push32(0x12154b81u); f_12155c30();
  /* 12154b81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154b83 jne 0x12154ba6 */
  if (!C.zf) goto L_12154ba6;
  /* 12154b85 push 0x1217b648 */
  push32((uint32_t)(0x1217b648u));
  /* 12154b8a push 0 */
  push32((uint32_t)(0x0u));
  /* 12154b8c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 12154b91 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12154b96 push 2 */
  push32((uint32_t)(0x2u));
  /* 12154b98 call 0x12153b50 */
  push32(0x12154b9du); f_12153b50();
  /* 12154b9d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ba0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154ba3 jne 0x12154ba6 */
  if (!C.zf) goto L_12154ba6;
  /* 12154ba5 int3  */
  x86_unimpl("int3 @ 0x12154ba5");
L_12154ba6:;
  /* 12154ba6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12154ba8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12154baa jne 0x12154b7c */
  if (!C.zf) goto L_12154b7c;
L_12154bac:;
  /* 12154bac mov edx, dword ptr [0x1217ea88] */
  EDX = (r32((uint32_t)(0x1217ea88)));
  /* 12154bb2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12154bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154bb8 cmp eax, dword ptr [0x1217ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154bbe jne 0x12154bc1 */
  if (!C.zf) goto L_12154bc1;
  /* 12154bc0 int3  */
  x86_unimpl("int3 @ 0x12154bc0");
L_12154bc1:;
  /* 12154bc1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154bc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12154bc5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154bc8 push edx */
  push32((uint32_t)(EDX));
  /* 12154bc9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154bcc push eax */
  push32((uint32_t)(EAX));
  /* 12154bcd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 12154bd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154bd4 push edx */
  push32((uint32_t)(EDX));
  /* 12154bd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154bd7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154bd9 call dword ptr [0x1217ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217ec90))), 0x12154bdfu);
  /* 12154bdf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154be4 jne 0x12154c44 */
  if (!C.zf) goto L_12154c44;
  /* 12154be6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154bea je 0x12154c17 */
  if (C.zf) goto L_12154c17;
L_12154bec:;
  /* 12154bec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154bef push eax */
  push32((uint32_t)(EAX));
  /* 12154bf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12154bf4 push 0x1217b604 */
  push32((uint32_t)(0x1217b604u));
  /* 12154bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12154bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12154bff push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c01 call 0x12153b50 */
  push32(0x12154c06u); f_12153b50();
  /* 12154c06 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c0c jne 0x12154c0f */
  if (!C.zf) goto L_12154c0f;
  /* 12154c0e int3  */
  x86_unimpl("int3 @ 0x12154c0e");
L_12154c0f:;
  /* 12154c0f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12154c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12154c13 jne 0x12154bec */
  if (!C.zf) goto L_12154bec;
  /* 12154c15 jmp 0x12154c3d */
  goto L_12154c3d;
L_12154c17:;
  /* 12154c17 push 0x1217b5e0 */
  push32((uint32_t)(0x1217b5e0u));
  /* 12154c1c push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12154c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c29 call 0x12153b50 */
  push32(0x12154c2eu); f_12153b50();
  /* 12154c2e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154c31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c34 jne 0x12154c37 */
  if (!C.zf) goto L_12154c37;
  /* 12154c36 int3  */
  x86_unimpl("int3 @ 0x12154c36");
L_12154c37:;
  /* 12154c37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154c39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154c3b jne 0x12154c17 */
  if (!C.zf) goto L_12154c17;
L_12154c3d:;
  /* 12154c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154c3f jmp 0x12154e6c */
  goto L_12154e6c;
L_12154c44:;
  /* 12154c44 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154c47 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12154c4d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c50 je 0x12154c66 */
  if (C.zf) goto L_12154c66;
  /* 12154c52 mov edx, dword ptr [0x1217ea84] */
  EDX = (r32((uint32_t)(0x1217ea84)));
  /* 12154c58 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12154c5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12154c5d jne 0x12154c66 */
  if (!C.zf) goto L_12154c66;
  /* 12154c5f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_12154c66:;
  /* 12154c66 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c6a ja 0x12154c77 */
  if ((!C.cf&&!C.zf)) goto L_12154c77;
  /* 12154c6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154c6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154c72 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c75 jbe 0x12154ca3 */
  if ((C.cf||C.zf)) goto L_12154ca3;
L_12154c77:;
  /* 12154c77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154c7a push ecx */
  push32((uint32_t)(ECX));
  /* 12154c7b push 0x1217b5b8 */
  push32((uint32_t)(0x1217b5b8u));
  /* 12154c80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154c86 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154c88 call 0x12153b50 */
  push32(0x12154c8du); f_12153b50();
  /* 12154c8d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154c93 jne 0x12154c96 */
  if (!C.zf) goto L_12154c96;
  /* 12154c95 int3  */
  x86_unimpl("int3 @ 0x12154c95");
L_12154c96:;
  /* 12154c96 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12154c98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12154c9a jne 0x12154c77 */
  if (!C.zf) goto L_12154c77;
  /* 12154c9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154c9e jmp 0x12154e6c */
  goto L_12154e6c;
L_12154ca3:;
  /* 12154ca3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154ca6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12154cab cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154cae je 0x12154cf0 */
  if (C.zf) goto L_12154cf0;
  /* 12154cb0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154cb4 je 0x12154cf0 */
  if (C.zf) goto L_12154cf0;
  /* 12154cb6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154cb9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12154cbf cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154cc2 je 0x12154cf0 */
  if (C.zf) goto L_12154cf0;
  /* 12154cc4 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154cc8 je 0x12154cf0 */
  if (C.zf) goto L_12154cf0;
L_12154cca:;
  /* 12154cca push 0x1217b584 */
  push32((uint32_t)(0x1217b584u));
  /* 12154ccf push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12154cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154cda push 1 */
  push32((uint32_t)(0x1u));
  /* 12154cdc call 0x12153b50 */
  push32(0x12154ce1u); f_12153b50();
  /* 12154ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154ce7 jne 0x12154cea */
  if (!C.zf) goto L_12154cea;
  /* 12154ce9 int3  */
  x86_unimpl("int3 @ 0x12154ce9");
L_12154cea:;
  /* 12154cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12154cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12154cee jne 0x12154cca */
  if (!C.zf) goto L_12154cca;
L_12154cf0:;
  /* 12154cf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154cf3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154cf6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12154cf9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12154cfc push ecx */
  push32((uint32_t)(ECX));
  /* 12154cfd call 0x121588e0 */
  push32(0x12154d02u); f_121588e0();
  /* 12154d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154d08 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154d0c jne 0x12154d15 */
  if (!C.zf) goto L_12154d15;
  /* 12154d0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154d10 jmp 0x12154e6c */
  goto L_12154e6c;
L_12154d15:;
  /* 12154d15 mov edx, dword ptr [0x1217ea88] */
  EDX = (r32((uint32_t)(0x1217ea88)));
  /* 12154d1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154d1e mov dword ptr [0x1217ea88], edx */
  w32((uint32_t)(0x1217ea88), (EDX));
  /* 12154d24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154d28 je 0x12154d73 */
  if (C.zf) goto L_12154d73;
  /* 12154d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d2d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12154d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d36 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12154d3d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d40 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12154d47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d4a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 12154d51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154d57 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12154d5a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d5d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 12154d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154d67 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 12154d6e jmp 0x12154e13 */
  goto L_12154e13;
L_12154d73:;
  /* 12154d73 mov edx, dword ptr [0x1218060c] */
  EDX = (r32((uint32_t)(0x1218060c)));
  /* 12154d79 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154d7c mov dword ptr [0x1218060c], edx */
  w32((uint32_t)(0x1218060c), (EDX));
  /* 12154d82 mov eax, dword ptr [0x12180614] */
  EAX = (r32((uint32_t)(0x12180614)));
  /* 12154d87 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154d8a mov dword ptr [0x12180614], eax */
  w32((uint32_t)(0x12180614), (EAX));
  /* 12154d8f mov ecx, dword ptr [0x12180614] */
  ECX = (r32((uint32_t)(0x12180614)));
  /* 12154d95 cmp ecx, dword ptr [0x12180618] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12180618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154d9b jbe 0x12154da9 */
  if ((C.cf||C.zf)) goto L_12154da9;
  /* 12154d9d mov edx, dword ptr [0x12180614] */
  EDX = (r32((uint32_t)(0x12180614)));
  /* 12154da3 mov dword ptr [0x12180618], edx */
  w32((uint32_t)(0x12180618), (EDX));
L_12154da9:;
  /* 12154da9 cmp dword ptr [0x12180610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154db0 je 0x12154dbf */
  if (C.zf) goto L_12154dbf;
  /* 12154db2 mov eax, dword ptr [0x12180610] */
  EAX = (r32((uint32_t)(0x12180610)));
  /* 12154db7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154dba mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12154dbd jmp 0x12154dc8 */
  goto L_12154dc8;
L_12154dbf:;
  /* 12154dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154dc2 mov dword ptr [0x12180608], edx */
  w32((uint32_t)(0x12180608), (EDX));
L_12154dc8:;
  /* 12154dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154dcb mov ecx, dword ptr [0x12180610] */
  ECX = (r32((uint32_t)(0x12180610)));
  /* 12154dd1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12154dd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154dd6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 12154ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154de0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154de3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12154de6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154de9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154dec mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 12154def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154df2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154df5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 12154df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154dfb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154dfe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 12154e01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e04 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154e07 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 12154e0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e0d mov dword ptr [0x12180610], ecx */
  w32((uint32_t)(0x12180610), (ECX));
L_12154e13:;
  /* 12154e13 push 4 */
  push32((uint32_t)(0x4u));
  /* 12154e15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12154e17 mov dl, byte ptr [0x1217ea90] */
  DL = (r8((uint32_t)(0x1217ea90)));
  /* 12154e1d push edx */
  push32((uint32_t)(EDX));
  /* 12154e1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e21 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e24 push eax */
  push32((uint32_t)(EAX));
  /* 12154e25 call 0x12158800 */
  push32(0x12154e2au); f_12158800();
  /* 12154e2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e2d push 4 */
  push32((uint32_t)(0x4u));
  /* 12154e2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12154e31 mov cl, byte ptr [0x1217ea90] */
  CL = (r8((uint32_t)(0x1217ea90)));
  /* 12154e37 push ecx */
  push32((uint32_t)(ECX));
  /* 12154e38 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154e3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e3e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 12154e42 push ecx */
  push32((uint32_t)(ECX));
  /* 12154e43 call 0x12158800 */
  push32(0x12154e48u); f_12158800();
  /* 12154e48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154e4e push edx */
  push32((uint32_t)(EDX));
  /* 12154e4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154e51 mov al, byte ptr [0x1217ea92] */
  AL = (r8((uint32_t)(0x1217ea92)));
  /* 12154e56 push eax */
  push32((uint32_t)(EAX));
  /* 12154e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e5a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e5d push ecx */
  push32((uint32_t)(ECX));
  /* 12154e5e call 0x12158800 */
  push32(0x12154e63u); f_12158800();
  /* 12154e63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154e69 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12154e6c:;
  /* 12154e6c pop edi */
  EDI = (pop32());
  /* 12154e6d pop esi */
  ESI = (pop32());
  /* 12154e6e pop ebx */
  EBX = (pop32());
  /* 12154e6f mov esp, ebp */
  ESP = (EBP);
  /* 12154e71 pop ebp */
  EBP = (pop32());
  /* 12154e72 ret  */
  ESPCHK(0x12154b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e80 @ 0x12154e80 (27 bytes, 13 insns) */
void f_12154e80(void) {
  FTRACE(0x12154e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154e80 push ebp */
  push32((uint32_t)(EBP));
  /* 12154e81 mov ebp, esp */
  EBP = (ESP);
  /* 12154e83 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154e85 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154e87 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154e89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154e8c push eax */
  push32((uint32_t)(EAX));
  /* 12154e8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154e90 push ecx */
  push32((uint32_t)(ECX));
  /* 12154e91 call 0x12154ea0 */
  push32(0x12154e96u); f_12154ea0();
  /* 12154e96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154e99 pop ebp */
  EBP = (pop32());
  /* 12154e9a ret  */
  ESPCHK(0x12154e80u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x12154ea0 (96 bytes, 37 insns) */
void f_12154ea0(void) {
  FTRACE(0x12154ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12154ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12154ea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12154ea6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154ea9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12154ead mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12154eb0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12154eb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154eb7 push edx */
  push32((uint32_t)(EDX));
  /* 12154eb8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154ebb push eax */
  push32((uint32_t)(EAX));
  /* 12154ebc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154ebf push ecx */
  push32((uint32_t)(ECX));
  /* 12154ec0 call 0x12154a90 */
  push32(0x12154ec5u); f_12154a90();
  /* 12154ec5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ec8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12154ecb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154ecf je 0x12154ef9 */
  if (C.zf) goto L_12154ef9;
  /* 12154ed1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154ed4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12154ed7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12154eda add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154edd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12154ee0:;
  /* 12154ee0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12154ee3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154ee6 jae 0x12154ef9 */
  if (!C.cf) goto L_12154ef9;
  /* 12154ee8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12154eeb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12154eee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12154ef1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12154ef4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12154ef7 jmp 0x12154ee0 */
  goto L_12154ee0;
L_12154ef9:;
  /* 12154ef9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12154efc mov esp, ebp */
  ESP = (EBP);
  /* 12154efe pop ebp */
  EBP = (pop32());
  /* 12154eff ret  */
  ESPCHK(0x12154ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f00 @ 0x12154f00 (27 bytes, 13 insns) */
void f_12154f00(void) {
  FTRACE(0x12154f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154f00 push ebp */
  push32((uint32_t)(EBP));
  /* 12154f01 mov ebp, esp */
  EBP = (ESP);
  /* 12154f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 12154f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154f0c push eax */
  push32((uint32_t)(EAX));
  /* 12154f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154f10 push ecx */
  push32((uint32_t)(ECX));
  /* 12154f11 call 0x12154f20 */
  push32(0x12154f16u); f_12154f20();
  /* 12154f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154f19 pop ebp */
  EBP = (pop32());
  /* 12154f1a ret  */
  ESPCHK(0x12154f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f20 @ 0x12154f20 (64 bytes, 27 insns) */
void f_12154f20(void) {
  FTRACE(0x12154f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154f20 push ebp */
  push32((uint32_t)(EBP));
  /* 12154f21 mov ebp, esp */
  EBP = (ESP);
  /* 12154f23 push ecx */
  push32((uint32_t)(ECX));
  /* 12154f24 push 9 */
  push32((uint32_t)(0x9u));
  /* 12154f26 call 0x12158490 */
  push32(0x12154f2bu); f_12158490();
  /* 12154f2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154f2e push 1 */
  push32((uint32_t)(0x1u));
  /* 12154f30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154f33 push eax */
  push32((uint32_t)(EAX));
  /* 12154f34 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154f37 push ecx */
  push32((uint32_t)(ECX));
  /* 12154f38 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154f3b push edx */
  push32((uint32_t)(EDX));
  /* 12154f3c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154f3f push eax */
  push32((uint32_t)(EAX));
  /* 12154f40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154f43 push ecx */
  push32((uint32_t)(ECX));
  /* 12154f44 call 0x12154f60 */
  push32(0x12154f49u); f_12154f60();
  /* 12154f49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154f4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12154f4f push 9 */
  push32((uint32_t)(0x9u));
  /* 12154f51 call 0x12158530 */
  push32(0x12154f56u); f_12158530();
  /* 12154f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154f59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12154f5c mov esp, ebp */
  ESP = (EBP);
  /* 12154f5e pop ebp */
  EBP = (pop32());
  /* 12154f5f ret  */
  ESPCHK(0x12154f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f60 @ 0x12154f60 (1297 bytes, 431 insns) */
void f_12154f60(void) {
  FTRACE(0x12154f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12154f60 push ebp */
  push32((uint32_t)(EBP));
  /* 12154f61 mov ebp, esp */
  EBP = (ESP);
  /* 12154f63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12154f66 push ebx */
  push32((uint32_t)(EBX));
  /* 12154f67 push esi */
  push32((uint32_t)(ESI));
  /* 12154f68 push edi */
  push32((uint32_t)(EDI));
  /* 12154f69 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12154f70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154f74 jne 0x12154f93 */
  if (!C.zf) goto L_12154f93;
  /* 12154f76 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12154f79 push eax */
  push32((uint32_t)(EAX));
  /* 12154f7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12154f7d push ecx */
  push32((uint32_t)(ECX));
  /* 12154f7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154f81 push edx */
  push32((uint32_t)(EDX));
  /* 12154f82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12154f85 push eax */
  push32((uint32_t)(EAX));
  /* 12154f86 call 0x12154a90 */
  push32(0x12154f8bu); f_12154a90();
  /* 12154f8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154f8e jmp 0x1215546a */
  goto L_1215546a;
L_12154f93:;
  /* 12154f93 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154f97 je 0x12154fb6 */
  if (C.zf) goto L_12154fb6;
  /* 12154f99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154f9d jne 0x12154fb6 */
  if (!C.zf) goto L_12154fb6;
  /* 12154f9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12154fa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12154fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12154fa6 push edx */
  push32((uint32_t)(EDX));
  /* 12154fa7 call 0x12155520 */
  push32(0x12154facu); f_12155520();
  /* 12154fac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12154fb1 jmp 0x1215546a */
  goto L_1215546a;
L_12154fb6:;
  /* 12154fb6 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12154fbb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12154fbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154fc0 je 0x12154ff2 */
  if (C.zf) goto L_12154ff2;
L_12154fc2:;
  /* 12154fc2 call 0x12155c30 */
  push32(0x12154fc7u); f_12155c30();
  /* 12154fc7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12154fc9 jne 0x12154fec */
  if (!C.zf) goto L_12154fec;
  /* 12154fcb push 0x1217b648 */
  push32((uint32_t)(0x1217b648u));
  /* 12154fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12154fd2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 12154fd7 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12154fdc push 2 */
  push32((uint32_t)(0x2u));
  /* 12154fde call 0x12153b50 */
  push32(0x12154fe3u); f_12153b50();
  /* 12154fe3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12154fe6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12154fe9 jne 0x12154fec */
  if (!C.zf) goto L_12154fec;
  /* 12154feb int3  */
  x86_unimpl("int3 @ 0x12154feb");
L_12154fec:;
  /* 12154fec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12154fee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12154ff0 jne 0x12154fc2 */
  if (!C.zf) goto L_12154fc2;
L_12154ff2:;
  /* 12154ff2 mov edx, dword ptr [0x1217ea88] */
  EDX = (r32((uint32_t)(0x1217ea88)));
  /* 12154ff8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12154ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12154ffe cmp eax, dword ptr [0x1217ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155004 jne 0x12155007 */
  if (!C.zf) goto L_12155007;
  /* 12155006 int3  */
  x86_unimpl("int3 @ 0x12155006");
L_12155007:;
  /* 12155007 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215500a push ecx */
  push32((uint32_t)(ECX));
  /* 1215500b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215500e push edx */
  push32((uint32_t)(EDX));
  /* 1215500f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12155012 push eax */
  push32((uint32_t)(EAX));
  /* 12155013 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12155016 push ecx */
  push32((uint32_t)(ECX));
  /* 12155017 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215501a push edx */
  push32((uint32_t)(EDX));
  /* 1215501b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215501e push eax */
  push32((uint32_t)(EAX));
  /* 1215501f push 2 */
  push32((uint32_t)(0x2u));
  /* 12155021 call dword ptr [0x1217ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217ec90))), 0x12155027u);
  /* 12155027 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215502a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215502c jne 0x1215508c */
  if (!C.zf) goto L_1215508c;
  /* 1215502e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155032 je 0x1215505f */
  if (C.zf) goto L_1215505f;
L_12155034:;
  /* 12155034 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12155037 push ecx */
  push32((uint32_t)(ECX));
  /* 12155038 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215503b push edx */
  push32((uint32_t)(EDX));
  /* 1215503c push 0x1217b7c4 */
  push32((uint32_t)(0x1217b7c4u));
  /* 12155041 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155043 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155045 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155047 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155049 call 0x12153b50 */
  push32(0x1215504eu); f_12153b50();
  /* 1215504e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155051 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155054 jne 0x12155057 */
  if (!C.zf) goto L_12155057;
  /* 12155056 int3  */
  x86_unimpl("int3 @ 0x12155056");
L_12155057:;
  /* 12155057 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155059 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215505b jne 0x12155034 */
  if (!C.zf) goto L_12155034;
  /* 1215505d jmp 0x12155085 */
  goto L_12155085;
L_1215505f:;
  /* 1215505f push 0x1217b7a0 */
  push32((uint32_t)(0x1217b7a0u));
  /* 12155064 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155069 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215506b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215506d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215506f push 0 */
  push32((uint32_t)(0x0u));
  /* 12155071 call 0x12153b50 */
  push32(0x12155076u); f_12153b50();
  /* 12155076 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155079 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215507c jne 0x1215507f */
  if (!C.zf) goto L_1215507f;
  /* 1215507e int3  */
  x86_unimpl("int3 @ 0x1215507e");
L_1215507f:;
  /* 1215507f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155081 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155083 jne 0x1215505f */
  if (!C.zf) goto L_1215505f;
L_12155085:;
  /* 12155085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155087 jmp 0x1215546a */
  goto L_1215546a;
L_1215508c:;
  /* 1215508c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155090 jbe 0x121550be */
  if ((C.cf||C.zf)) goto L_121550be;
L_12155092:;
  /* 12155092 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155095 push edx */
  push32((uint32_t)(EDX));
  /* 12155096 push 0x1217b770 */
  push32((uint32_t)(0x1217b770u));
  /* 1215509b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215509d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215509f push 0 */
  push32((uint32_t)(0x0u));
  /* 121550a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 121550a3 call 0x12153b50 */
  push32(0x121550a8u); f_12153b50();
  /* 121550a8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121550ab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121550ae jne 0x121550b1 */
  if (!C.zf) goto L_121550b1;
  /* 121550b0 int3  */
  x86_unimpl("int3 @ 0x121550b0");
L_121550b1:;
  /* 121550b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121550b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121550b5 jne 0x12155092 */
  if (!C.zf) goto L_12155092;
  /* 121550b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121550b9 jmp 0x1215546a */
  goto L_1215546a;
L_121550be:;
  /* 121550be cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121550c2 je 0x12155106 */
  if (C.zf) goto L_12155106;
  /* 121550c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121550c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121550cd cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121550d0 je 0x12155106 */
  if (C.zf) goto L_12155106;
  /* 121550d2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121550d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121550db cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121550de je 0x12155106 */
  if (C.zf) goto L_12155106;
L_121550e0:;
  /* 121550e0 push 0x1217b584 */
  push32((uint32_t)(0x1217b584u));
  /* 121550e5 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 121550ea push 0 */
  push32((uint32_t)(0x0u));
  /* 121550ec push 0 */
  push32((uint32_t)(0x0u));
  /* 121550ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121550f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 121550f2 call 0x12153b50 */
  push32(0x121550f7u); f_12153b50();
  /* 121550f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121550fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121550fd jne 0x12155100 */
  if (!C.zf) goto L_12155100;
  /* 121550ff int3  */
  x86_unimpl("int3 @ 0x121550ff");
L_12155100:;
  /* 12155100 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155102 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155104 jne 0x121550e0 */
  if (!C.zf) goto L_121550e0;
L_12155106:;
  /* 12155106 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155109 push ecx */
  push32((uint32_t)(ECX));
  /* 1215510a call 0x12156090 */
  push32(0x1215510fu); f_12156090();
  /* 1215510f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155114 jne 0x12155137 */
  if (!C.zf) goto L_12155137;
  /* 12155116 push 0x1217b74c */
  push32((uint32_t)(0x1217b74cu));
  /* 1215511b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215511d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 12155122 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155127 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155129 call 0x12153b50 */
  push32(0x1215512eu); f_12153b50();
  /* 1215512e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155131 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155134 jne 0x12155137 */
  if (!C.zf) goto L_12155137;
  /* 12155136 int3  */
  x86_unimpl("int3 @ 0x12155136");
L_12155137:;
  /* 12155137 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155139 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215513b jne 0x12155106 */
  if (!C.zf) goto L_12155106;
  /* 1215513d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155140 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155143 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12155146 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155149 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215514d jne 0x12155156 */
  if (!C.zf) goto L_12155156;
  /* 1215514f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_12155156:;
  /* 12155156 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215515a je 0x1215519a */
  if (C.zf) goto L_1215519a;
L_1215515c:;
  /* 1215515c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215515f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155166 jne 0x12155171 */
  if (!C.zf) goto L_12155171;
  /* 12155168 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215516b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215516f je 0x12155192 */
  if (C.zf) goto L_12155192;
L_12155171:;
  /* 12155171 push 0x1217b704 */
  push32((uint32_t)(0x1217b704u));
  /* 12155176 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155178 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1215517d push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155182 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155184 call 0x12153b50 */
  push32(0x12155189u); f_12153b50();
  /* 12155189 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215518c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215518f jne 0x12155192 */
  if (!C.zf) goto L_12155192;
  /* 12155191 int3  */
  x86_unimpl("int3 @ 0x12155191");
L_12155192:;
  /* 12155192 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155194 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155196 jne 0x1215515c */
  if (!C.zf) goto L_1215515c;
  /* 12155198 jmp 0x121551fe */
  goto L_121551fe;
L_1215519a:;
  /* 1215519a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215519d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121551a0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121551a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121551a8 jne 0x121551bf */
  if (!C.zf) goto L_121551bf;
  /* 121551aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121551ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121551b3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121551b6 jne 0x121551bf */
  if (!C.zf) goto L_121551bf;
  /* 121551b8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_121551bf:;
  /* 121551bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121551c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121551c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121551ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121551cd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121551d3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121551d5 je 0x121551f8 */
  if (C.zf) goto L_121551f8;
  /* 121551d7 push 0x1217b6c8 */
  push32((uint32_t)(0x1217b6c8u));
  /* 121551dc push 0 */
  push32((uint32_t)(0x0u));
  /* 121551de push 0x272 */
  push32((uint32_t)(0x272u));
  /* 121551e3 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 121551e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 121551ea call 0x12153b50 */
  push32(0x121551efu); f_12153b50();
  /* 121551ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121551f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121551f5 jne 0x121551f8 */
  if (!C.zf) goto L_121551f8;
  /* 121551f7 int3  */
  x86_unimpl("int3 @ 0x121551f7");
L_121551f8:;
  /* 121551f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121551fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121551fc jne 0x121551bf */
  if (!C.zf) goto L_121551bf;
L_121551fe:;
  /* 121551fe cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155202 je 0x12155229 */
  if (C.zf) goto L_12155229;
  /* 12155204 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155207 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215520a push eax */
  push32((uint32_t)(EAX));
  /* 1215520b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215520e push ecx */
  push32((uint32_t)(ECX));
  /* 1215520f call 0x12158a10 */
  push32(0x12155214u); f_12158a10();
  /* 12155214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155217 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215521a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215521e jne 0x12155227 */
  if (!C.zf) goto L_12155227;
  /* 12155220 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155222 jmp 0x1215546a */
  goto L_1215546a;
L_12155227:;
  /* 12155227 jmp 0x1215524c */
  goto L_1215524c;
L_12155229:;
  /* 12155229 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215522c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215522f push edx */
  push32((uint32_t)(EDX));
  /* 12155230 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155233 push eax */
  push32((uint32_t)(EAX));
  /* 12155234 call 0x12158960 */
  push32(0x12155239u); f_12158960();
  /* 12155239 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215523c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215523f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155243 jne 0x1215524c */
  if (!C.zf) goto L_1215524c;
  /* 12155245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155247 jmp 0x1215546a */
  goto L_1215546a;
L_1215524c:;
  /* 1215524c mov ecx, dword ptr [0x1217ea88] */
  ECX = (r32((uint32_t)(0x1217ea88)));
  /* 12155252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155255 mov dword ptr [0x1217ea88], ecx */
  w32((uint32_t)(0x1217ea88), (ECX));
  /* 1215525b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215525f jne 0x121552b7 */
  if (!C.zf) goto L_121552b7;
  /* 12155261 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155264 mov eax, dword ptr [0x1218060c] */
  EAX = (r32((uint32_t)(0x1218060c)));
  /* 12155269 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215526c mov dword ptr [0x1218060c], eax */
  w32((uint32_t)(0x1218060c), (EAX));
  /* 12155271 mov ecx, dword ptr [0x1218060c] */
  ECX = (r32((uint32_t)(0x1218060c)));
  /* 12155277 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215527a mov dword ptr [0x1218060c], ecx */
  w32((uint32_t)(0x1218060c), (ECX));
  /* 12155280 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155283 mov eax, dword ptr [0x12180614] */
  EAX = (r32((uint32_t)(0x12180614)));
  /* 12155288 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215528b mov dword ptr [0x12180614], eax */
  w32((uint32_t)(0x12180614), (EAX));
  /* 12155290 mov ecx, dword ptr [0x12180614] */
  ECX = (r32((uint32_t)(0x12180614)));
  /* 12155296 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155299 mov dword ptr [0x12180614], ecx */
  w32((uint32_t)(0x12180614), (ECX));
  /* 1215529f mov edx, dword ptr [0x12180614] */
  EDX = (r32((uint32_t)(0x12180614)));
  /* 121552a5 cmp edx, dword ptr [0x12180618] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12180618))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121552ab jbe 0x121552b7 */
  if ((C.cf||C.zf)) goto L_121552b7;
  /* 121552ad mov eax, dword ptr [0x12180614] */
  EAX = (r32((uint32_t)(0x12180614)));
  /* 121552b2 mov dword ptr [0x12180618], eax */
  w32((uint32_t)(0x12180618), (EAX));
L_121552b7:;
  /* 121552b7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121552ba add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121552bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 121552c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121552c3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121552c6 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121552c9 jbe 0x121552ef */
  if ((C.cf||C.zf)) goto L_121552ef;
  /* 121552cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121552ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121552d1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121552d4 push edx */
  push32((uint32_t)(EDX));
  /* 121552d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121552d7 mov al, byte ptr [0x1217ea92] */
  AL = (r8((uint32_t)(0x1217ea92)));
  /* 121552dc push eax */
  push32((uint32_t)(EAX));
  /* 121552dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121552e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121552e3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121552e6 push edx */
  push32((uint32_t)(EDX));
  /* 121552e7 call 0x12158800 */
  push32(0x121552ecu); f_12158800();
  /* 121552ec add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121552ef:;
  /* 121552ef push 4 */
  push32((uint32_t)(0x4u));
  /* 121552f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121552f3 mov al, byte ptr [0x1217ea90] */
  AL = (r8((uint32_t)(0x1217ea90)));
  /* 121552f8 push eax */
  push32((uint32_t)(EAX));
  /* 121552f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121552fc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121552ff push ecx */
  push32((uint32_t)(ECX));
  /* 12155300 call 0x12158800 */
  push32(0x12155305u); f_12158800();
  /* 12155305 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155308 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215530c jne 0x12155329 */
  if (!C.zf) goto L_12155329;
  /* 1215530e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155311 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12155314 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12155317 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215531a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215531d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 12155320 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155323 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12155326 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_12155329:;
  /* 12155329 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215532c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215532f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_12155332:;
  /* 12155332 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155336 jne 0x12155367 */
  if (!C.zf) goto L_12155367;
  /* 12155338 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215533c jne 0x12155346 */
  if (!C.zf) goto L_12155346;
  /* 1215533e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155341 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155344 je 0x12155367 */
  if (C.zf) goto L_12155367;
L_12155346:;
  /* 12155346 push 0x1217b694 */
  push32((uint32_t)(0x1217b694u));
  /* 1215534b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215534d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 12155352 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155357 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155359 call 0x12153b50 */
  push32(0x1215535eu); f_12153b50();
  /* 1215535e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155361 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155364 jne 0x12155367 */
  if (!C.zf) goto L_12155367;
  /* 12155366 int3  */
  x86_unimpl("int3 @ 0x12155366");
L_12155367:;
  /* 12155367 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155369 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215536b jne 0x12155332 */
  if (!C.zf) goto L_12155332;
  /* 1215536d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155370 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155373 je 0x1215537b */
  if (C.zf) goto L_1215537b;
  /* 12155375 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155379 je 0x12155383 */
  if (C.zf) goto L_12155383;
L_1215537b:;
  /* 1215537b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215537e jmp 0x1215546a */
  goto L_1215546a;
L_12155383:;
  /* 12155383 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155386 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155389 je 0x1215539b */
  if (C.zf) goto L_1215539b;
  /* 1215538b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215538e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12155390 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155393 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12155396 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12155399 jmp 0x121553d7 */
  goto L_121553d7;
L_1215539b:;
  /* 1215539b mov eax, dword ptr [0x12180608] */
  EAX = (r32((uint32_t)(0x12180608)));
  /* 121553a0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121553a3 je 0x121553c6 */
  if (C.zf) goto L_121553c6;
  /* 121553a5 push 0x1217b678 */
  push32((uint32_t)(0x1217b678u));
  /* 121553aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121553ac push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 121553b1 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 121553b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 121553b8 call 0x12153b50 */
  push32(0x121553bdu); f_12153b50();
  /* 121553bd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121553c0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121553c3 jne 0x121553c6 */
  if (!C.zf) goto L_121553c6;
  /* 121553c5 int3  */
  x86_unimpl("int3 @ 0x121553c5");
L_121553c6:;
  /* 121553c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121553c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121553ca jne 0x1215539b */
  if (!C.zf) goto L_1215539b;
  /* 121553cc mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121553cf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121553d2 mov dword ptr [0x12180608], eax */
  w32((uint32_t)(0x12180608), (EAX));
L_121553d7:;
  /* 121553d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121553da cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121553de je 0x121553ef */
  if (C.zf) goto L_121553ef;
  /* 121553e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121553e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121553e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121553e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 121553eb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 121553ed jmp 0x1215542a */
  goto L_1215542a;
L_121553ef:;
  /* 121553ef mov eax, dword ptr [0x12180610] */
  EAX = (r32((uint32_t)(0x12180610)));
  /* 121553f4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121553f7 je 0x1215541a */
  if (C.zf) goto L_1215541a;
  /* 121553f9 push 0x1217b65c */
  push32((uint32_t)(0x1217b65cu));
  /* 121553fe push 0 */
  push32((uint32_t)(0x0u));
  /* 12155400 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 12155405 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 1215540a push 2 */
  push32((uint32_t)(0x2u));
  /* 1215540c call 0x12153b50 */
  push32(0x12155411u); f_12153b50();
  /* 12155411 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155414 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155417 jne 0x1215541a */
  if (!C.zf) goto L_1215541a;
  /* 12155419 int3  */
  x86_unimpl("int3 @ 0x12155419");
L_1215541a:;
  /* 1215541a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215541c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215541e jne 0x121553ef */
  if (!C.zf) goto L_121553ef;
  /* 12155420 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155423 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12155425 mov dword ptr [0x12180610], eax */
  w32((uint32_t)(0x12180610), (EAX));
L_1215542a:;
  /* 1215542a cmp dword ptr [0x12180610], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180610))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155431 je 0x12155441 */
  if (C.zf) goto L_12155441;
  /* 12155433 mov ecx, dword ptr [0x12180610] */
  ECX = (r32((uint32_t)(0x12180610)));
  /* 12155439 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215543c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1215543f jmp 0x12155449 */
  goto L_12155449;
L_12155441:;
  /* 12155441 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155444 mov dword ptr [0x12180608], eax */
  w32((uint32_t)(0x12180608), (EAX));
L_12155449:;
  /* 12155449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215544c mov edx, dword ptr [0x12180610] */
  EDX = (r32((uint32_t)(0x12180610)));
  /* 12155452 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12155454 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155457 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1215545e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155461 mov dword ptr [0x12180610], ecx */
  w32((uint32_t)(0x12180610), (ECX));
  /* 12155467 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1215546a:;
  /* 1215546a pop edi */
  EDI = (pop32());
  /* 1215546b pop esi */
  ESI = (pop32());
  /* 1215546c pop ebx */
  EBX = (pop32());
  /* 1215546d mov esp, ebp */
  ESP = (EBP);
  /* 1215546f pop ebp */
  EBP = (pop32());
  /* 12155470 ret  */
  ESPCHK(0x12154f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005480 @ 0x12155480 (27 bytes, 13 insns) */
void f_12155480(void) {
  FTRACE(0x12155480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155480 push ebp */
  push32((uint32_t)(EBP));
  /* 12155481 mov ebp, esp */
  EBP = (ESP);
  /* 12155483 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155485 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155487 push 1 */
  push32((uint32_t)(0x1u));
  /* 12155489 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215548c push eax */
  push32((uint32_t)(EAX));
  /* 1215548d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155490 push ecx */
  push32((uint32_t)(ECX));
  /* 12155491 call 0x121554a0 */
  push32(0x12155496u); f_121554a0();
  /* 12155496 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155499 pop ebp */
  EBP = (pop32());
  /* 1215549a ret  */
  ESPCHK(0x12155480u, _esp0);
  ESP += 4; return;
}

/* FUN_100054a0 @ 0x121554a0 (64 bytes, 27 insns) */
void f_121554a0(void) {
  FTRACE(0x121554a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121554a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121554a1 mov ebp, esp */
  EBP = (ESP);
  /* 121554a3 push ecx */
  push32((uint32_t)(ECX));
  /* 121554a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 121554a6 call 0x12158490 */
  push32(0x121554abu); f_12158490();
  /* 121554ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121554ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121554b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 121554b3 push eax */
  push32((uint32_t)(EAX));
  /* 121554b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121554b7 push ecx */
  push32((uint32_t)(ECX));
  /* 121554b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121554bb push edx */
  push32((uint32_t)(EDX));
  /* 121554bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121554bf push eax */
  push32((uint32_t)(EAX));
  /* 121554c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121554c3 push ecx */
  push32((uint32_t)(ECX));
  /* 121554c4 call 0x12154f60 */
  push32(0x121554c9u); f_12154f60();
  /* 121554c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121554cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121554cf push 9 */
  push32((uint32_t)(0x9u));
  /* 121554d1 call 0x12158530 */
  push32(0x121554d6u); f_12158530();
  /* 121554d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121554d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121554dc mov esp, ebp */
  ESP = (EBP);
  /* 121554de pop ebp */
  EBP = (pop32());
  /* 121554df ret  */
  ESPCHK(0x121554a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054e0 @ 0x121554e0 (19 bytes, 9 insns) */
void f_121554e0(void) {
  FTRACE(0x121554e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121554e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121554e1 mov ebp, esp */
  EBP = (ESP);
  /* 121554e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 121554e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121554e8 push eax */
  push32((uint32_t)(EAX));
  /* 121554e9 call 0x12155520 */
  push32(0x121554eeu); f_12155520();
  /* 121554ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121554f1 pop ebp */
  EBP = (pop32());
  /* 121554f2 ret  */
  ESPCHK(0x121554e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005500 @ 0x12155500 (19 bytes, 9 insns) */
void f_12155500(void) {
  FTRACE(0x12155500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155500 push ebp */
  push32((uint32_t)(EBP));
  /* 12155501 mov ebp, esp */
  EBP = (ESP);
  /* 12155503 push 1 */
  push32((uint32_t)(0x1u));
  /* 12155505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155508 push eax */
  push32((uint32_t)(EAX));
  /* 12155509 call 0x12155550 */
  push32(0x1215550eu); f_12155550();
  /* 1215550e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155511 pop ebp */
  EBP = (pop32());
  /* 12155512 ret  */
  ESPCHK(0x12155500u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x12155520 (41 bytes, 16 insns) */
void f_12155520(void) {
  FTRACE(0x12155520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155520 push ebp */
  push32((uint32_t)(EBP));
  /* 12155521 mov ebp, esp */
  EBP = (ESP);
  /* 12155523 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155525 call 0x12158490 */
  push32(0x1215552au); f_12158490();
  /* 1215552a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215552d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155530 push eax */
  push32((uint32_t)(EAX));
  /* 12155531 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155534 push ecx */
  push32((uint32_t)(ECX));
  /* 12155535 call 0x12155550 */
  push32(0x1215553au); f_12155550();
  /* 1215553a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215553d push 9 */
  push32((uint32_t)(0x9u));
  /* 1215553f call 0x12158530 */
  push32(0x12155544u); f_12158530();
  /* 12155544 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155547 pop ebp */
  EBP = (pop32());
  /* 12155548 ret  */
  ESPCHK(0x12155520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005550 @ 0x12155550 (1004 bytes, 342 insns) */
void f_12155550(void) {
  FTRACE(0x12155550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155550 push ebp */
  push32((uint32_t)(EBP));
  /* 12155551 mov ebp, esp */
  EBP = (ESP);
  /* 12155553 push ecx */
  push32((uint32_t)(ECX));
  /* 12155554 push ebx */
  push32((uint32_t)(EBX));
  /* 12155555 push esi */
  push32((uint32_t)(ESI));
  /* 12155556 push edi */
  push32((uint32_t)(EDI));
  /* 12155557 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 1215555c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1215555f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155561 je 0x12155593 */
  if (C.zf) goto L_12155593;
L_12155563:;
  /* 12155563 call 0x12155c30 */
  push32(0x12155568u); f_12155c30();
  /* 12155568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215556a jne 0x1215558d */
  if (!C.zf) goto L_1215558d;
  /* 1215556c push 0x1217b648 */
  push32((uint32_t)(0x1217b648u));
  /* 12155571 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155573 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 12155578 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 1215557d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215557f call 0x12153b50 */
  push32(0x12155584u); f_12153b50();
  /* 12155584 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155587 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215558a jne 0x1215558d */
  if (!C.zf) goto L_1215558d;
  /* 1215558c int3  */
  x86_unimpl("int3 @ 0x1215558c");
L_1215558d:;
  /* 1215558d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215558f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155591 jne 0x12155563 */
  if (!C.zf) goto L_12155563;
L_12155593:;
  /* 12155593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155597 jne 0x1215559e */
  if (!C.zf) goto L_1215559e;
  /* 12155599 jmp 0x12155935 */
  goto L_12155935;
L_1215559e:;
  /* 1215559e push 0 */
  push32((uint32_t)(0x0u));
  /* 121555a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121555a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121555a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121555a7 push edx */
  push32((uint32_t)(EDX));
  /* 121555a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121555aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121555ad push eax */
  push32((uint32_t)(EAX));
  /* 121555ae push 3 */
  push32((uint32_t)(0x3u));
  /* 121555b0 call dword ptr [0x1217ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1217ec90))), 0x121555b6u);
  /* 121555b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121555b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121555bb jne 0x121555e8 */
  if (!C.zf) goto L_121555e8;
L_121555bd:;
  /* 121555bd push 0x1217b90c */
  push32((uint32_t)(0x1217b90cu));
  /* 121555c2 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 121555c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121555c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121555cb push 0 */
  push32((uint32_t)(0x0u));
  /* 121555cd push 0 */
  push32((uint32_t)(0x0u));
  /* 121555cf call 0x12153b50 */
  push32(0x121555d4u); f_12153b50();
  /* 121555d4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121555d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121555da jne 0x121555dd */
  if (!C.zf) goto L_121555dd;
  /* 121555dc int3  */
  x86_unimpl("int3 @ 0x121555dc");
L_121555dd:;
  /* 121555dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121555df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121555e1 jne 0x121555bd */
  if (!C.zf) goto L_121555bd;
  /* 121555e3 jmp 0x12155935 */
  goto L_12155935;
L_121555e8:;
  /* 121555e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121555eb push edx */
  push32((uint32_t)(EDX));
  /* 121555ec call 0x12156090 */
  push32(0x121555f1u); f_12156090();
  /* 121555f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121555f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121555f6 jne 0x12155619 */
  if (!C.zf) goto L_12155619;
  /* 121555f8 push 0x1217b74c */
  push32((uint32_t)(0x1217b74cu));
  /* 121555fd push 0 */
  push32((uint32_t)(0x0u));
  /* 121555ff push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 12155604 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155609 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215560b call 0x12153b50 */
  push32(0x12155610u); f_12153b50();
  /* 12155610 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155613 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155616 jne 0x12155619 */
  if (!C.zf) goto L_12155619;
  /* 12155618 int3  */
  x86_unimpl("int3 @ 0x12155618");
L_12155619:;
  /* 12155619 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215561b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215561d jne 0x121555e8 */
  if (!C.zf) goto L_121555e8;
  /* 1215561f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155622 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155625 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12155628:;
  /* 12155628 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215562b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1215562e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12155633 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155636 je 0x1215567b */
  if (C.zf) goto L_1215567b;
  /* 12155638 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215563b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215563f je 0x1215567b */
  if (C.zf) goto L_1215567b;
  /* 12155641 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155644 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12155647 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215564c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215564f je 0x1215567b */
  if (C.zf) goto L_1215567b;
  /* 12155651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155654 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155658 je 0x1215567b */
  if (C.zf) goto L_1215567b;
  /* 1215565a push 0x1217b8e4 */
  push32((uint32_t)(0x1217b8e4u));
  /* 1215565f push 0 */
  push32((uint32_t)(0x0u));
  /* 12155661 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 12155666 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 1215566b push 2 */
  push32((uint32_t)(0x2u));
  /* 1215566d call 0x12153b50 */
  push32(0x12155672u); f_12153b50();
  /* 12155672 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155675 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155678 jne 0x1215567b */
  if (!C.zf) goto L_1215567b;
  /* 1215567a int3  */
  x86_unimpl("int3 @ 0x1215567a");
L_1215567b:;
  /* 1215567b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215567d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215567f jne 0x12155628 */
  if (!C.zf) goto L_12155628;
  /* 12155681 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12155686 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12155689 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215568b jne 0x12155756 */
  if (!C.zf) goto L_12155756;
  /* 12155691 push 4 */
  push32((uint32_t)(0x4u));
  /* 12155693 mov cl, byte ptr [0x1217ea90] */
  CL = (r8((uint32_t)(0x1217ea90)));
  /* 12155699 push ecx */
  push32((uint32_t)(ECX));
  /* 1215569a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215569d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121556a0 push edx */
  push32((uint32_t)(EDX));
  /* 121556a1 call 0x12155ba0 */
  push32(0x121556a6u); f_12155ba0();
  /* 121556a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121556a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121556ab jne 0x121556f0 */
  if (!C.zf) goto L_121556f0;
L_121556ad:;
  /* 121556ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121556b0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121556b3 push eax */
  push32((uint32_t)(EAX));
  /* 121556b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121556b7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 121556ba push edx */
  push32((uint32_t)(EDX));
  /* 121556bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121556be mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121556c1 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121556c7 mov edx, dword ptr [ecx*4 + 0x1217ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea94)));
  /* 121556ce push edx */
  push32((uint32_t)(EDX));
  /* 121556cf push 0x1217b8b8 */
  push32((uint32_t)(0x1217b8b8u));
  /* 121556d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121556d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121556d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121556da push 1 */
  push32((uint32_t)(0x1u));
  /* 121556dc call 0x12153b50 */
  push32(0x121556e1u); f_12153b50();
  /* 121556e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121556e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121556e7 jne 0x121556ea */
  if (!C.zf) goto L_121556ea;
  /* 121556e9 int3  */
  x86_unimpl("int3 @ 0x121556e9");
L_121556ea:;
  /* 121556ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121556ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121556ee jne 0x121556ad */
  if (!C.zf) goto L_121556ad;
L_121556f0:;
  /* 121556f0 push 4 */
  push32((uint32_t)(0x4u));
  /* 121556f2 mov cl, byte ptr [0x1217ea90] */
  CL = (r8((uint32_t)(0x1217ea90)));
  /* 121556f8 push ecx */
  push32((uint32_t)(ECX));
  /* 121556f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121556fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121556ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155702 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12155706 push edx */
  push32((uint32_t)(EDX));
  /* 12155707 call 0x12155ba0 */
  push32(0x1215570cu); f_12155ba0();
  /* 1215570c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215570f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155711 jne 0x12155756 */
  if (!C.zf) goto L_12155756;
L_12155713:;
  /* 12155713 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155716 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155719 push eax */
  push32((uint32_t)(EAX));
  /* 1215571a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215571d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12155720 push edx */
  push32((uint32_t)(EDX));
  /* 12155721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155724 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12155727 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1215572d mov edx, dword ptr [ecx*4 + 0x1217ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea94)));
  /* 12155734 push edx */
  push32((uint32_t)(EDX));
  /* 12155735 push 0x1217b88c */
  push32((uint32_t)(0x1217b88cu));
  /* 1215573a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215573c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215573e push 0 */
  push32((uint32_t)(0x0u));
  /* 12155740 push 1 */
  push32((uint32_t)(0x1u));
  /* 12155742 call 0x12153b50 */
  push32(0x12155747u); f_12153b50();
  /* 12155747 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215574a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215574d jne 0x12155750 */
  if (!C.zf) goto L_12155750;
  /* 1215574f int3  */
  x86_unimpl("int3 @ 0x1215574f");
L_12155750:;
  /* 12155750 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155754 jne 0x12155713 */
  if (!C.zf) goto L_12155713;
L_12155756:;
  /* 12155756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155759 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215575d jne 0x121557cb */
  if (!C.zf) goto L_121557cb;
L_1215575f:;
  /* 1215575f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155762 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155769 jne 0x12155774 */
  if (!C.zf) goto L_12155774;
  /* 1215576b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215576e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155772 je 0x12155795 */
  if (C.zf) goto L_12155795;
L_12155774:;
  /* 12155774 push 0x1217b84c */
  push32((uint32_t)(0x1217b84cu));
  /* 12155779 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215577b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 12155780 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155785 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155787 call 0x12153b50 */
  push32(0x1215578cu); f_12153b50();
  /* 1215578c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215578f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155792 jne 0x12155795 */
  if (!C.zf) goto L_12155795;
  /* 12155794 int3  */
  x86_unimpl("int3 @ 0x12155794");
L_12155795:;
  /* 12155795 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155799 jne 0x1215575f */
  if (!C.zf) goto L_1215575f;
  /* 1215579b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215579e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121557a1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121557a4 push eax */
  push32((uint32_t)(EAX));
  /* 121557a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121557a7 mov cl, byte ptr [0x1217ea91] */
  CL = (r8((uint32_t)(0x1217ea91)));
  /* 121557ad push ecx */
  push32((uint32_t)(ECX));
  /* 121557ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121557b1 push edx */
  push32((uint32_t)(EDX));
  /* 121557b2 call 0x12158800 */
  push32(0x121557b7u); f_12158800();
  /* 121557b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121557ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121557bd push eax */
  push32((uint32_t)(EAX));
  /* 121557be call 0x12158c00 */
  push32(0x121557c3u); f_12158c00();
  /* 121557c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121557c6 jmp 0x12155935 */
  goto L_12155935;
L_121557cb:;
  /* 121557cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121557ce cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121557d2 jne 0x121557e1 */
  if (!C.zf) goto L_121557e1;
  /* 121557d4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121557d8 jne 0x121557e1 */
  if (!C.zf) goto L_121557e1;
  /* 121557da mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_121557e1:;
  /* 121557e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121557e4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121557e7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121557ea je 0x1215580d */
  if (C.zf) goto L_1215580d;
  /* 121557ec push 0x1217b82c */
  push32((uint32_t)(0x1217b82cu));
  /* 121557f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121557f3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 121557f8 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 121557fd push 2 */
  push32((uint32_t)(0x2u));
  /* 121557ff call 0x12153b50 */
  push32(0x12155804u); f_12153b50();
  /* 12155804 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155807 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215580a jne 0x1215580d */
  if (!C.zf) goto L_1215580d;
  /* 1215580c int3  */
  x86_unimpl("int3 @ 0x1215580c");
L_1215580d:;
  /* 1215580d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215580f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155811 jne 0x121557e1 */
  if (!C.zf) goto L_121557e1;
  /* 12155813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155816 mov eax, dword ptr [0x12180614] */
  EAX = (r32((uint32_t)(0x12180614)));
  /* 1215581b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215581e mov dword ptr [0x12180614], eax */
  w32((uint32_t)(0x12180614), (EAX));
  /* 12155823 mov ecx, dword ptr [0x1217ea84] */
  ECX = (r32((uint32_t)(0x1217ea84)));
  /* 12155829 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1215582c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1215582e jne 0x1215590c */
  if (!C.zf) goto L_1215590c;
  /* 12155834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155837 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215583a je 0x1215584c */
  if (C.zf) goto L_1215584c;
  /* 1215583c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215583f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12155841 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155844 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12155847 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1215584a jmp 0x1215588a */
  goto L_1215588a;
L_1215584c:;
  /* 1215584c mov ecx, dword ptr [0x12180608] */
  ECX = (r32((uint32_t)(0x12180608)));
  /* 12155852 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155855 je 0x12155878 */
  if (C.zf) goto L_12155878;
  /* 12155857 push 0x1217b814 */
  push32((uint32_t)(0x1217b814u));
  /* 1215585c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215585e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 12155863 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155868 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215586a call 0x12153b50 */
  push32(0x1215586fu); f_12153b50();
  /* 1215586f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155872 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155875 jne 0x12155878 */
  if (!C.zf) goto L_12155878;
  /* 12155877 int3  */
  x86_unimpl("int3 @ 0x12155877");
L_12155878:;
  /* 12155878 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215587a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215587c jne 0x1215584c */
  if (!C.zf) goto L_1215584c;
  /* 1215587e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155881 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12155884 mov dword ptr [0x12180608], ecx */
  w32((uint32_t)(0x12180608), (ECX));
L_1215588a:;
  /* 1215588a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215588d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155891 je 0x121558a2 */
  if (C.zf) goto L_121558a2;
  /* 12155893 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155896 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12155899 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215589c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1215589e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 121558a0 jmp 0x121558df */
  goto L_121558df;
L_121558a2:;
  /* 121558a2 mov ecx, dword ptr [0x12180610] */
  ECX = (r32((uint32_t)(0x12180610)));
  /* 121558a8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121558ab je 0x121558ce */
  if (C.zf) goto L_121558ce;
  /* 121558ad push 0x1217b7fc */
  push32((uint32_t)(0x1217b7fcu));
  /* 121558b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121558b4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 121558b9 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 121558be push 2 */
  push32((uint32_t)(0x2u));
  /* 121558c0 call 0x12153b50 */
  push32(0x121558c5u); f_12153b50();
  /* 121558c5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121558c8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121558cb jne 0x121558ce */
  if (!C.zf) goto L_121558ce;
  /* 121558cd int3  */
  x86_unimpl("int3 @ 0x121558cd");
L_121558ce:;
  /* 121558ce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121558d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121558d2 jne 0x121558a2 */
  if (!C.zf) goto L_121558a2;
  /* 121558d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121558d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121558d9 mov dword ptr [0x12180610], ecx */
  w32((uint32_t)(0x12180610), (ECX));
L_121558df:;
  /* 121558df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121558e2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121558e5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121558e8 push eax */
  push32((uint32_t)(EAX));
  /* 121558e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121558eb mov cl, byte ptr [0x1217ea91] */
  CL = (r8((uint32_t)(0x1217ea91)));
  /* 121558f1 push ecx */
  push32((uint32_t)(ECX));
  /* 121558f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121558f5 push edx */
  push32((uint32_t)(EDX));
  /* 121558f6 call 0x12158800 */
  push32(0x121558fbu); f_12158800();
  /* 121558fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121558fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155901 push eax */
  push32((uint32_t)(EAX));
  /* 12155902 call 0x12158c00 */
  push32(0x12155907u); f_12158c00();
  /* 12155907 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215590a jmp 0x12155935 */
  goto L_12155935;
L_1215590c:;
  /* 1215590c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215590f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 12155916 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155919 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1215591c push eax */
  push32((uint32_t)(EAX));
  /* 1215591d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215591f mov cl, byte ptr [0x1217ea91] */
  CL = (r8((uint32_t)(0x1217ea91)));
  /* 12155925 push ecx */
  push32((uint32_t)(ECX));
  /* 12155926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155929 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215592c push edx */
  push32((uint32_t)(EDX));
  /* 1215592d call 0x12158800 */
  push32(0x12155932u); f_12158800();
  /* 12155932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12155935:;
  /* 12155935 pop edi */
  EDI = (pop32());
  /* 12155936 pop esi */
  ESI = (pop32());
  /* 12155937 pop ebx */
  EBX = (pop32());
  /* 12155938 mov esp, ebp */
  ESP = (EBP);
  /* 1215593a pop ebp */
  EBP = (pop32());
  /* 1215593b ret  */
  ESPCHK(0x12155550u, _esp0);
  ESP += 4; return;
}

/* FUN_10005940 @ 0x12155940 (19 bytes, 9 insns) */
void f_12155940(void) {
  FTRACE(0x12155940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155940 push ebp */
  push32((uint32_t)(EBP));
  /* 12155941 mov ebp, esp */
  EBP = (ESP);
  /* 12155943 push 1 */
  push32((uint32_t)(0x1u));
  /* 12155945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155948 push eax */
  push32((uint32_t)(EAX));
  /* 12155949 call 0x12155960 */
  push32(0x1215594eu); f_12155960();
  /* 1215594e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155951 pop ebp */
  EBP = (pop32());
  /* 12155952 ret  */
  ESPCHK(0x12155940u, _esp0);
  ESP += 4; return;
}

/* FUN_10005960 @ 0x12155960 (342 bytes, 119 insns) */
void f_12155960(void) {
  FTRACE(0x12155960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155960 push ebp */
  push32((uint32_t)(EBP));
  /* 12155961 mov ebp, esp */
  EBP = (ESP);
  /* 12155963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155966 push ebx */
  push32((uint32_t)(EBX));
  /* 12155967 push esi */
  push32((uint32_t)(ESI));
  /* 12155968 push edi */
  push32((uint32_t)(EDI));
  /* 12155969 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 1215596e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12155971 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155973 je 0x121559a5 */
  if (C.zf) goto L_121559a5;
L_12155975:;
  /* 12155975 call 0x12155c30 */
  push32(0x1215597au); f_12155c30();
  /* 1215597a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215597c jne 0x1215599f */
  if (!C.zf) goto L_1215599f;
  /* 1215597e push 0x1217b648 */
  push32((uint32_t)(0x1217b648u));
  /* 12155983 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155985 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1215598a push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 1215598f push 2 */
  push32((uint32_t)(0x2u));
  /* 12155991 call 0x12153b50 */
  push32(0x12155996u); f_12153b50();
  /* 12155996 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155999 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215599c jne 0x1215599f */
  if (!C.zf) goto L_1215599f;
  /* 1215599e int3  */
  x86_unimpl("int3 @ 0x1215599e");
L_1215599f:;
  /* 1215599f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121559a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121559a3 jne 0x12155975 */
  if (!C.zf) goto L_12155975;
L_121559a5:;
  /* 121559a5 push 9 */
  push32((uint32_t)(0x9u));
  /* 121559a7 call 0x12158490 */
  push32(0x121559acu); f_12158490();
  /* 121559ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121559af:;
  /* 121559af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121559b2 push edx */
  push32((uint32_t)(EDX));
  /* 121559b3 call 0x12156090 */
  push32(0x121559b8u); f_12156090();
  /* 121559b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121559bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121559bd jne 0x121559e0 */
  if (!C.zf) goto L_121559e0;
  /* 121559bf push 0x1217b74c */
  push32((uint32_t)(0x1217b74cu));
  /* 121559c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121559c6 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 121559cb push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 121559d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 121559d2 call 0x12153b50 */
  push32(0x121559d7u); f_12153b50();
  /* 121559d7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121559da cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121559dd jne 0x121559e0 */
  if (!C.zf) goto L_121559e0;
  /* 121559df int3  */
  x86_unimpl("int3 @ 0x121559df");
L_121559e0:;
  /* 121559e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121559e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121559e4 jne 0x121559af */
  if (!C.zf) goto L_121559af;
  /* 121559e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121559e9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121559ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121559ef:;
  /* 121559ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121559f2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121559f5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121559fa cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121559fd je 0x12155a42 */
  if (C.zf) goto L_12155a42;
  /* 121559ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a02 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a06 je 0x12155a42 */
  if (C.zf) goto L_12155a42;
  /* 12155a08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a0b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12155a0e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12155a13 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a16 je 0x12155a42 */
  if (C.zf) goto L_12155a42;
  /* 12155a18 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a1b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a1f je 0x12155a42 */
  if (C.zf) goto L_12155a42;
  /* 12155a21 push 0x1217b8e4 */
  push32((uint32_t)(0x1217b8e4u));
  /* 12155a26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155a28 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 12155a2d push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155a32 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155a34 call 0x12153b50 */
  push32(0x12155a39u); f_12153b50();
  /* 12155a39 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155a3c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a3f jne 0x12155a42 */
  if (!C.zf) goto L_12155a42;
  /* 12155a41 int3  */
  x86_unimpl("int3 @ 0x12155a41");
L_12155a42:;
  /* 12155a42 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155a44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155a46 jne 0x121559ef */
  if (!C.zf) goto L_121559ef;
  /* 12155a48 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a4b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a4f jne 0x12155a5e */
  if (!C.zf) goto L_12155a5e;
  /* 12155a51 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a55 jne 0x12155a5e */
  if (!C.zf) goto L_12155a5e;
  /* 12155a57 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_12155a5e:;
  /* 12155a5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a61 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a65 je 0x12155a99 */
  if (C.zf) goto L_12155a99;
L_12155a67:;
  /* 12155a67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12155a6d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a70 je 0x12155a93 */
  if (C.zf) goto L_12155a93;
  /* 12155a72 push 0x1217b82c */
  push32((uint32_t)(0x1217b82cu));
  /* 12155a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155a79 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 12155a7e push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155a83 push 2 */
  push32((uint32_t)(0x2u));
  /* 12155a85 call 0x12153b50 */
  push32(0x12155a8au); f_12153b50();
  /* 12155a8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155a8d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155a90 jne 0x12155a93 */
  if (!C.zf) goto L_12155a93;
  /* 12155a92 int3  */
  x86_unimpl("int3 @ 0x12155a92");
L_12155a93:;
  /* 12155a93 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155a97 jne 0x12155a67 */
  if (!C.zf) goto L_12155a67;
L_12155a99:;
  /* 12155a99 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155a9c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12155a9f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12155aa2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155aa4 call 0x12158530 */
  push32(0x12155aa9u); f_12158530();
  /* 12155aa9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155aac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155aaf pop edi */
  EDI = (pop32());
  /* 12155ab0 pop esi */
  ESI = (pop32());
  /* 12155ab1 pop ebx */
  EBX = (pop32());
  /* 12155ab2 mov esp, ebp */
  ESP = (EBP);
  /* 12155ab4 pop ebp */
  EBP = (pop32());
  /* 12155ab5 ret  */
  ESPCHK(0x12155960u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ac0 @ 0x12155ac0 (28 bytes, 11 insns) */
void f_12155ac0(void) {
  FTRACE(0x12155ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 12155ac1 mov ebp, esp */
  EBP = (ESP);
  /* 12155ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 12155ac4 mov eax, dword ptr [0x1217ea8c] */
  EAX = (r32((uint32_t)(0x1217ea8c)));
  /* 12155ac9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12155acc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155acf mov dword ptr [0x1217ea8c], ecx */
  w32((uint32_t)(0x1217ea8c), (ECX));
  /* 12155ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155ad8 mov esp, ebp */
  ESP = (EBP);
  /* 12155ada pop ebp */
  EBP = (pop32());
  /* 12155adb ret  */
  ESPCHK(0x12155ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x12155ae0 (157 bytes, 59 insns) */
void f_12155ae0(void) {
  FTRACE(0x12155ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 12155ae1 mov ebp, esp */
  EBP = (ESP);
  /* 12155ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 12155ae4 push ebx */
  push32((uint32_t)(EBX));
  /* 12155ae5 push esi */
  push32((uint32_t)(ESI));
  /* 12155ae6 push edi */
  push32((uint32_t)(EDI));
  /* 12155ae7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155ae9 call 0x12158490 */
  push32(0x12155aeeu); f_12158490();
  /* 12155aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155af1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155af4 push eax */
  push32((uint32_t)(EAX));
  /* 12155af5 call 0x12156090 */
  push32(0x12155afau); f_12156090();
  /* 12155afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155afd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155aff je 0x12155b6c */
  if (C.zf) goto L_12155b6c;
  /* 12155b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155b04 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155b07 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12155b0a:;
  /* 12155b0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b0d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12155b10 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12155b15 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155b18 je 0x12155b5d */
  if (C.zf) goto L_12155b5d;
  /* 12155b1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b1d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155b21 je 0x12155b5d */
  if (C.zf) goto L_12155b5d;
  /* 12155b23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b26 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12155b29 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12155b2e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155b31 je 0x12155b5d */
  if (C.zf) goto L_12155b5d;
  /* 12155b33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b36 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155b3a je 0x12155b5d */
  if (C.zf) goto L_12155b5d;
  /* 12155b3c push 0x1217b8e4 */
  push32((uint32_t)(0x1217b8e4u));
  /* 12155b41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155b43 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 12155b48 push 0x1217b63c */
  push32((uint32_t)(0x1217b63cu));
  /* 12155b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 12155b4f call 0x12153b50 */
  push32(0x12155b54u); f_12153b50();
  /* 12155b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155b5a jne 0x12155b5d */
  if (!C.zf) goto L_12155b5d;
  /* 12155b5c int3  */
  x86_unimpl("int3 @ 0x12155b5c");
L_12155b5d:;
  /* 12155b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155b61 jne 0x12155b0a */
  if (!C.zf) goto L_12155b0a;
  /* 12155b63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b66 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155b69 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_12155b6c:;
  /* 12155b6c push 9 */
  push32((uint32_t)(0x9u));
  /* 12155b6e call 0x12158530 */
  push32(0x12155b73u); f_12158530();
  /* 12155b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155b76 pop edi */
  EDI = (pop32());
  /* 12155b77 pop esi */
  ESI = (pop32());
  /* 12155b78 pop ebx */
  EBX = (pop32());
  /* 12155b79 mov esp, ebp */
  ESP = (EBP);
  /* 12155b7b pop ebp */
  EBP = (pop32());
  /* 12155b7c ret  */
  ESPCHK(0x12155ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x12155b80 (28 bytes, 11 insns) */
void f_12155b80(void) {
  FTRACE(0x12155b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12155b81 mov ebp, esp */
  EBP = (ESP);
  /* 12155b83 push ecx */
  push32((uint32_t)(ECX));
  /* 12155b84 mov eax, dword ptr [0x1217ec90] */
  EAX = (r32((uint32_t)(0x1217ec90)));
  /* 12155b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12155b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155b8f mov dword ptr [0x1217ec90], ecx */
  w32((uint32_t)(0x1217ec90), (ECX));
  /* 12155b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155b98 mov esp, ebp */
  ESP = (EBP);
  /* 12155b9a pop ebp */
  EBP = (pop32());
  /* 12155b9b ret  */
  ESPCHK(0x12155b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x12155ba0 (136 bytes, 55 insns) */
void f_12155ba0(void) {
  FTRACE(0x12155ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12155ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12155ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 12155ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 12155ba5 push esi */
  push32((uint32_t)(ESI));
  /* 12155ba6 push edi */
  push32((uint32_t)(EDI));
  /* 12155ba7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12155bae:;
  /* 12155bae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12155bb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12155bb4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155bb7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12155bba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155bbc je 0x12155c1e */
  if (C.zf) goto L_12155c1e;
  /* 12155bbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155bc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155bc3 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12155bc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155bc8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12155bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155bd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155bd4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12155bd7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155bd9 je 0x12155c1c */
  if (C.zf) goto L_12155c1c;
L_12155bdb:;
  /* 12155bdb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12155bde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12155be3 push eax */
  push32((uint32_t)(EAX));
  /* 12155be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155be7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155be9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 12155bec push edx */
  push32((uint32_t)(EDX));
  /* 12155bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155bf0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155bf3 push eax */
  push32((uint32_t)(EAX));
  /* 12155bf4 push 0x1217b928 */
  push32((uint32_t)(0x1217b928u));
  /* 12155bf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155bfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12155bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 12155bff push 0 */
  push32((uint32_t)(0x0u));
  /* 12155c01 call 0x12153b50 */
  push32(0x12155c06u); f_12153b50();
  /* 12155c06 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155c09 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155c0c jne 0x12155c0f */
  if (!C.zf) goto L_12155c0f;
  /* 12155c0e int3  */
  x86_unimpl("int3 @ 0x12155c0e");
L_12155c0f:;
  /* 12155c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155c11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155c13 jne 0x12155bdb */
  if (!C.zf) goto L_12155bdb;
  /* 12155c15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12155c1c:;
  /* 12155c1c jmp 0x12155bae */
  goto L_12155bae;
L_12155c1e:;
  /* 12155c1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155c21 pop edi */
  EDI = (pop32());
  /* 12155c22 pop esi */
  ESI = (pop32());
  /* 12155c23 pop ebx */
  EBX = (pop32());
  /* 12155c24 mov esp, ebp */
  ESP = (EBP);
  /* 12155c26 pop ebp */
  EBP = (pop32());
  /* 12155c27 ret  */
  ESPCHK(0x12155ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c30 @ 0x12155c30 (863 bytes, 299 insns) [1 switch table(s)] */
void f_12155c30(void) {
  FTRACE(0x12155c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12155c31 mov ebp, esp */
  EBP = (ESP);
  /* 12155c33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12155c36 push ebx */
  push32((uint32_t)(EBX));
  /* 12155c37 push esi */
  push32((uint32_t)(ESI));
  /* 12155c38 push edi */
  push32((uint32_t)(EDI));
  /* 12155c39 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12155c40 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12155c45 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12155c48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155c4a jne 0x12155c56 */
  if (!C.zf) goto L_12155c56;
  /* 12155c4c mov eax, 1 */
  EAX = (0x1u);
  /* 12155c51 jmp 0x12155f88 */
  goto L_12155f88;
L_12155c56:;
  /* 12155c56 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155c58 call 0x12158490 */
  push32(0x12155c5du); f_12158490();
  /* 12155c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155c60 call 0x12158c70 */
  push32(0x12155c65u); f_12158c70();
  /* 12155c65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12155c68 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155c6c je 0x12155d79 */
  if (C.zf) goto L_12155d79;
  /* 12155c72 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155c76 je 0x12155d79 */
  if (C.zf) goto L_12155d79;
  /* 12155c7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12155c7f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12155c82 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12155c85 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155c88 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12155c8b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155c8f ja 0x12155d42 */
  if ((!C.cf&&!C.zf)) goto L_12155d42;
  /* 12155c95 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12155c98 jmp dword ptr [eax*4 + 0x12155f8f] */
  switch (EAX) {
    case 0: goto L_12155d1a;
    case 1: goto L_12155cf2;
    case 2: goto L_12155cca;
    case 3: goto L_12155c9f;
    default: x86_unimpl("switch@0x12155c98 out of table"); return;
  }
L_12155c9f:;
  /* 12155c9f push 0x1217ba7c */
  push32((uint32_t)(0x1217ba7cu));
  /* 12155ca4 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155ca9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cab push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cad push 0 */
  push32((uint32_t)(0x0u));
  /* 12155caf push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cb1 call 0x12153b50 */
  push32(0x12155cb6u); f_12153b50();
  /* 12155cb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155cb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155cbc jne 0x12155cbf */
  if (!C.zf) goto L_12155cbf;
  /* 12155cbe int3  */
  x86_unimpl("int3 @ 0x12155cbe");
L_12155cbf:;
  /* 12155cbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155cc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155cc3 jne 0x12155c9f */
  if (!C.zf) goto L_12155c9f;
  /* 12155cc5 jmp 0x12155d68 */
  goto L_12155d68;
L_12155cca:;
  /* 12155cca push 0x1217ba58 */
  push32((uint32_t)(0x1217ba58u));
  /* 12155ccf push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155cd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cda push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cdc call 0x12153b50 */
  push32(0x12155ce1u); f_12153b50();
  /* 12155ce1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155ce4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155ce7 jne 0x12155cea */
  if (!C.zf) goto L_12155cea;
  /* 12155ce9 int3  */
  x86_unimpl("int3 @ 0x12155ce9");
L_12155cea:;
  /* 12155cea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155cec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155cee jne 0x12155cca */
  if (!C.zf) goto L_12155cca;
  /* 12155cf0 jmp 0x12155d68 */
  goto L_12155d68;
L_12155cf2:;
  /* 12155cf2 push 0x1217ba34 */
  push32((uint32_t)(0x1217ba34u));
  /* 12155cf7 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155cfc push 0 */
  push32((uint32_t)(0x0u));
  /* 12155cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d04 call 0x12153b50 */
  push32(0x12155d09u); f_12153b50();
  /* 12155d09 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155d0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155d0f jne 0x12155d12 */
  if (!C.zf) goto L_12155d12;
  /* 12155d11 int3  */
  x86_unimpl("int3 @ 0x12155d11");
L_12155d12:;
  /* 12155d12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155d14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155d16 jne 0x12155cf2 */
  if (!C.zf) goto L_12155cf2;
  /* 12155d18 jmp 0x12155d68 */
  goto L_12155d68;
L_12155d1a:;
  /* 12155d1a push 0x1217ba10 */
  push32((uint32_t)(0x1217ba10u));
  /* 12155d1f push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155d24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d2c call 0x12153b50 */
  push32(0x12155d31u); f_12153b50();
  /* 12155d31 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155d34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155d37 jne 0x12155d3a */
  if (!C.zf) goto L_12155d3a;
  /* 12155d39 int3  */
  x86_unimpl("int3 @ 0x12155d39");
L_12155d3a:;
  /* 12155d3a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155d3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155d3e jne 0x12155d1a */
  if (!C.zf) goto L_12155d1a;
  /* 12155d40 jmp 0x12155d68 */
  goto L_12155d68;
L_12155d42:;
  /* 12155d42 push 0x1217b9e4 */
  push32((uint32_t)(0x1217b9e4u));
  /* 12155d47 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12155d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d52 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155d54 call 0x12153b50 */
  push32(0x12155d59u); f_12153b50();
  /* 12155d59 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155d5c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155d5f jne 0x12155d62 */
  if (!C.zf) goto L_12155d62;
  /* 12155d61 int3  */
  x86_unimpl("int3 @ 0x12155d61");
L_12155d62:;
  /* 12155d62 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155d64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155d66 jne 0x12155d42 */
  if (!C.zf) goto L_12155d42;
L_12155d68:;
  /* 12155d68 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155d6a call 0x12158530 */
  push32(0x12155d6fu); f_12158530();
  /* 12155d6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155d72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155d74 jmp 0x12155f88 */
  goto L_12155f88;
L_12155d79:;
  /* 12155d79 mov eax, dword ptr [0x12180610] */
  EAX = (r32((uint32_t)(0x12180610)));
  /* 12155d7e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12155d81 jmp 0x12155d8b */
  goto L_12155d8b;
L_12155d83:;
  /* 12155d83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155d86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12155d88 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12155d8b:;
  /* 12155d8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155d8f je 0x12155f7b */
  if (C.zf) goto L_12155f7b;
  /* 12155d95 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12155d9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155d9f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12155da2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12155da8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155dab je 0x12155dd0 */
  if (C.zf) goto L_12155dd0;
  /* 12155dad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155db0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155db4 je 0x12155dd0 */
  if (C.zf) goto L_12155dd0;
  /* 12155db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155db9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12155dbc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12155dc2 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155dc5 je 0x12155dd0 */
  if (C.zf) goto L_12155dd0;
  /* 12155dc7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155dca cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155dce jne 0x12155de8 */
  if (!C.zf) goto L_12155de8;
L_12155dd0:;
  /* 12155dd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155dd3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12155dd6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12155ddc mov edx, dword ptr [ecx*4 + 0x1217ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea94)));
  /* 12155de3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12155de6 jmp 0x12155def */
  goto L_12155def;
L_12155de8:;
  /* 12155de8 mov dword ptr [ebp - 0x14], 0x1217b9dc */
  w32((uint32_t)(EBP + -0x14), (0x1217b9dcu));
L_12155def:;
  /* 12155def push 4 */
  push32((uint32_t)(0x4u));
  /* 12155df1 mov al, byte ptr [0x1217ea90] */
  AL = (r8((uint32_t)(0x1217ea90)));
  /* 12155df6 push eax */
  push32((uint32_t)(EAX));
  /* 12155df7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155dfa add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155dfd push ecx */
  push32((uint32_t)(ECX));
  /* 12155dfe call 0x12155ba0 */
  push32(0x12155e03u); f_12155ba0();
  /* 12155e03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155e08 jne 0x12155e44 */
  if (!C.zf) goto L_12155e44;
L_12155e0a:;
  /* 12155e0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e0d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e10 push edx */
  push32((uint32_t)(EDX));
  /* 12155e11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e14 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12155e17 push ecx */
  push32((uint32_t)(ECX));
  /* 12155e18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12155e1b push edx */
  push32((uint32_t)(EDX));
  /* 12155e1c push 0x1217b8b8 */
  push32((uint32_t)(0x1217b8b8u));
  /* 12155e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e25 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e29 call 0x12153b50 */
  push32(0x12155e2eu); f_12153b50();
  /* 12155e2e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e31 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155e34 jne 0x12155e37 */
  if (!C.zf) goto L_12155e37;
  /* 12155e36 int3  */
  x86_unimpl("int3 @ 0x12155e36");
L_12155e37:;
  /* 12155e37 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155e39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155e3b jne 0x12155e0a */
  if (!C.zf) goto L_12155e0a;
  /* 12155e3d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12155e44:;
  /* 12155e44 push 4 */
  push32((uint32_t)(0x4u));
  /* 12155e46 mov cl, byte ptr [0x1217ea90] */
  CL = (r8((uint32_t)(0x1217ea90)));
  /* 12155e4c push ecx */
  push32((uint32_t)(ECX));
  /* 12155e4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e50 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12155e53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e56 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 12155e5a push edx */
  push32((uint32_t)(EDX));
  /* 12155e5b call 0x12155ba0 */
  push32(0x12155e60u); f_12155ba0();
  /* 12155e60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155e65 jne 0x12155ea1 */
  if (!C.zf) goto L_12155ea1;
L_12155e67:;
  /* 12155e67 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e6a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e6d push eax */
  push32((uint32_t)(EAX));
  /* 12155e6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155e71 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12155e74 push edx */
  push32((uint32_t)(EDX));
  /* 12155e75 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12155e78 push eax */
  push32((uint32_t)(EAX));
  /* 12155e79 push 0x1217b88c */
  push32((uint32_t)(0x1217b88cu));
  /* 12155e7e push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e80 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e82 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155e86 call 0x12153b50 */
  push32(0x12155e8bu); f_12153b50();
  /* 12155e8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155e8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155e91 jne 0x12155e94 */
  if (!C.zf) goto L_12155e94;
  /* 12155e93 int3  */
  x86_unimpl("int3 @ 0x12155e93");
L_12155e94:;
  /* 12155e94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12155e96 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12155e98 jne 0x12155e67 */
  if (!C.zf) goto L_12155e67;
  /* 12155e9a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12155ea1:;
  /* 12155ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155ea4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155ea8 jne 0x12155efa */
  if (!C.zf) goto L_12155efa;
  /* 12155eaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155ead mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12155eb0 push ecx */
  push32((uint32_t)(ECX));
  /* 12155eb1 mov dl, byte ptr [0x1217ea91] */
  DL = (r8((uint32_t)(0x1217ea91)));
  /* 12155eb7 push edx */
  push32((uint32_t)(EDX));
  /* 12155eb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155ebb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155ebe push eax */
  push32((uint32_t)(EAX));
  /* 12155ebf call 0x12155ba0 */
  push32(0x12155ec4u); f_12155ba0();
  /* 12155ec4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155ec7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155ec9 jne 0x12155efa */
  if (!C.zf) goto L_12155efa;
L_12155ecb:;
  /* 12155ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155ece add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 12155ed2 push 0x1217b9b0 */
  push32((uint32_t)(0x1217b9b0u));
  /* 12155ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155ed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155edb push 0 */
  push32((uint32_t)(0x0u));
  /* 12155edd push 0 */
  push32((uint32_t)(0x0u));
  /* 12155edf call 0x12153b50 */
  push32(0x12155ee4u); f_12153b50();
  /* 12155ee4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155ee7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155eea jne 0x12155eed */
  if (!C.zf) goto L_12155eed;
  /* 12155eec int3  */
  x86_unimpl("int3 @ 0x12155eec");
L_12155eed:;
  /* 12155eed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155eef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155ef1 jne 0x12155ecb */
  if (!C.zf) goto L_12155ecb;
  /* 12155ef3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12155efa:;
  /* 12155efa cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155efe jne 0x12155f76 */
  if (!C.zf) goto L_12155f76;
  /* 12155f00 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155f03 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155f07 je 0x12155f3c */
  if (C.zf) goto L_12155f3c;
L_12155f09:;
  /* 12155f09 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155f0c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12155f0f push edx */
  push32((uint32_t)(EDX));
  /* 12155f10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155f13 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12155f16 push ecx */
  push32((uint32_t)(ECX));
  /* 12155f17 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12155f1a push edx */
  push32((uint32_t)(EDX));
  /* 12155f1b push 0x1217b990 */
  push32((uint32_t)(0x1217b990u));
  /* 12155f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f26 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f28 call 0x12153b50 */
  push32(0x12155f2du); f_12153b50();
  /* 12155f2d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155f30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155f33 jne 0x12155f36 */
  if (!C.zf) goto L_12155f36;
  /* 12155f35 int3  */
  x86_unimpl("int3 @ 0x12155f35");
L_12155f36:;
  /* 12155f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12155f38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155f3a jne 0x12155f09 */
  if (!C.zf) goto L_12155f09;
L_12155f3c:;
  /* 12155f3c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155f3f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12155f42 push edx */
  push32((uint32_t)(EDX));
  /* 12155f43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12155f46 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12155f49 push eax */
  push32((uint32_t)(EAX));
  /* 12155f4a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12155f4d push ecx */
  push32((uint32_t)(ECX));
  /* 12155f4e push 0x1217b964 */
  push32((uint32_t)(0x1217b964u));
  /* 12155f53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12155f5b call 0x12153b50 */
  push32(0x12155f60u); f_12153b50();
  /* 12155f60 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155f63 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155f66 jne 0x12155f69 */
  if (!C.zf) goto L_12155f69;
  /* 12155f68 int3  */
  x86_unimpl("int3 @ 0x12155f68");
L_12155f69:;
  /* 12155f69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12155f6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12155f6d jne 0x12155f3c */
  if (!C.zf) goto L_12155f3c;
  /* 12155f6f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12155f76:;
  /* 12155f76 jmp 0x12155d83 */
  goto L_12155d83;
L_12155f7b:;
  /* 12155f7b push 9 */
  push32((uint32_t)(0x9u));
  /* 12155f7d call 0x12158530 */
  push32(0x12155f82u); f_12158530();
  /* 12155f82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155f85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12155f88:;
  /* 12155f88 pop edi */
  EDI = (pop32());
  /* 12155f89 pop esi */
  ESI = (pop32());
  /* 12155f8a pop ebx */
  EBX = (pop32());
  /* 12155f8b mov esp, ebp */
  ESP = (EBP);
  /* 12155f8d pop ebp */
  EBP = (pop32());
  /* 12155f8e ret  */
  ESPCHK(0x12155c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x12155fa0 (34 bytes, 13 insns) */
void f_12155fa0(void) {
  FTRACE(0x12155fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12155fa1 mov ebp, esp */
  EBP = (ESP);
  /* 12155fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12155fa4 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12155fa9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12155fac cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12155fb0 je 0x12155fbb */
  if (C.zf) goto L_12155fbb;
  /* 12155fb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12155fb5 mov dword ptr [0x1217ea84], ecx */
  w32((uint32_t)(0x1217ea84), (ECX));
L_12155fbb:;
  /* 12155fbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155fbe mov esp, ebp */
  ESP = (EBP);
  /* 12155fc0 pop ebp */
  EBP = (pop32());
  /* 12155fc1 ret  */
  ESPCHK(0x12155fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fd0 @ 0x12155fd0 (103 bytes, 38 insns) */
void f_12155fd0(void) {
  FTRACE(0x12155fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12155fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12155fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12155fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12155fd4 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12155fd9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12155fdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12155fde jne 0x12155fe2 */
  if (!C.zf) goto L_12155fe2;
  /* 12155fe0 jmp 0x12156033 */
  goto L_12156033;
L_12155fe2:;
  /* 12155fe2 push 9 */
  push32((uint32_t)(0x9u));
  /* 12155fe4 call 0x12158490 */
  push32(0x12155fe9u); f_12158490();
  /* 12155fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12155fec mov ecx, dword ptr [0x12180610] */
  ECX = (r32((uint32_t)(0x12180610)));
  /* 12155ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12155ff5 jmp 0x12155fff */
  goto L_12155fff;
L_12155ff7:;
  /* 12155ff7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12155ffa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12155ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12155fff:;
  /* 12155fff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156003 je 0x12156029 */
  if (C.zf) goto L_12156029;
  /* 12156005 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156008 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1215600b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156011 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156014 jne 0x12156027 */
  if (!C.zf) goto L_12156027;
  /* 12156016 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156019 push eax */
  push32((uint32_t)(EAX));
  /* 1215601a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215601d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156020 push ecx */
  push32((uint32_t)(ECX));
  /* 12156021 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x12156024u);
  /* 12156024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156027:;
  /* 12156027 jmp 0x12155ff7 */
  goto L_12155ff7;
L_12156029:;
  /* 12156029 push 9 */
  push32((uint32_t)(0x9u));
  /* 1215602b call 0x12158530 */
  push32(0x12156030u); f_12158530();
  /* 12156030 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156033:;
  /* 12156033 mov esp, ebp */
  ESP = (EBP);
  /* 12156035 pop ebp */
  EBP = (pop32());
  /* 12156036 ret  */
  ESPCHK(0x12155fd0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x12156040 (75 bytes, 28 insns) */
void f_12156040(void) {
  FTRACE(0x12156040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156040 push ebp */
  push32((uint32_t)(EBP));
  /* 12156041 mov ebp, esp */
  EBP = (ESP);
  /* 12156043 push ecx */
  push32((uint32_t)(ECX));
  /* 12156044 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156048 je 0x1215607d */
  if (C.zf) goto L_1215607d;
  /* 1215604a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215604d push eax */
  push32((uint32_t)(EAX));
  /* 1215604e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156051 push ecx */
  push32((uint32_t)(ECX));
  /* 12156052 call dword ptr [0x121833ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833ac))), 0x12156058u);
  /* 12156058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215605a jne 0x1215607d */
  if (!C.zf) goto L_1215607d;
  /* 1215605c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156060 je 0x12156074 */
  if (C.zf) goto L_12156074;
  /* 12156062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156065 push edx */
  push32((uint32_t)(EDX));
  /* 12156066 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156069 push eax */
  push32((uint32_t)(EAX));
  /* 1215606a call dword ptr [0x121833a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a8))), 0x12156070u);
  /* 12156070 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156072 jne 0x1215607d */
  if (!C.zf) goto L_1215607d;
L_12156074:;
  /* 12156074 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215607b jmp 0x12156084 */
  goto L_12156084;
L_1215607d:;
  /* 1215607d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12156084:;
  /* 12156084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156087 mov esp, ebp */
  ESP = (EBP);
  /* 12156089 pop ebp */
  EBP = (pop32());
  /* 1215608a ret  */
  ESPCHK(0x12156040u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x12156090 (134 bytes, 50 insns) */
void f_12156090(void) {
  FTRACE(0x12156090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156090 push ebp */
  push32((uint32_t)(EBP));
  /* 12156091 mov ebp, esp */
  EBP = (ESP);
  /* 12156093 push ecx */
  push32((uint32_t)(ECX));
  /* 12156094 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156098 jne 0x1215609e */
  if (!C.zf) goto L_1215609e;
  /* 1215609a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215609c jmp 0x12156112 */
  goto L_12156112;
L_1215609e:;
  /* 1215609e push 1 */
  push32((uint32_t)(0x1u));
  /* 121560a0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 121560a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121560a5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121560a8 push eax */
  push32((uint32_t)(EAX));
  /* 121560a9 call 0x12156040 */
  push32(0x121560aeu); f_12156040();
  /* 121560ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121560b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121560b3 jne 0x121560b9 */
  if (!C.zf) goto L_121560b9;
  /* 121560b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121560b7 jmp 0x12156112 */
  goto L_12156112;
L_121560b9:;
  /* 121560b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121560bc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121560bf push ecx */
  push32((uint32_t)(ECX));
  /* 121560c0 call 0x12158d90 */
  push32(0x121560c5u); f_12158d90();
  /* 121560c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121560c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121560cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121560cf je 0x121560e6 */
  if (C.zf) goto L_121560e6;
  /* 121560d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121560d4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121560d7 push edx */
  push32((uint32_t)(EDX));
  /* 121560d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121560db push eax */
  push32((uint32_t)(EAX));
  /* 121560dc call 0x12158df0 */
  push32(0x121560e1u); f_12158df0();
  /* 121560e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121560e4 jmp 0x12156112 */
  goto L_12156112;
L_121560e6:;
  /* 121560e6 mov ecx, dword ptr [0x121805c4] */
  ECX = (r32((uint32_t)(0x121805c4)));
  /* 121560ec and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 121560f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121560f4 je 0x121560fd */
  if (C.zf) goto L_121560fd;
  /* 121560f6 mov eax, 1 */
  EAX = (0x1u);
  /* 121560fb jmp 0x12156112 */
  goto L_12156112;
L_121560fd:;
  /* 121560fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156100 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156103 push edx */
  push32((uint32_t)(EDX));
  /* 12156104 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156106 mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 1215610b push eax */
  push32((uint32_t)(EAX));
  /* 1215610c call dword ptr [0x121833b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b0))), 0x12156112u);
L_12156112:;
  /* 12156112 mov esp, ebp */
  ESP = (EBP);
  /* 12156114 pop ebp */
  EBP = (pop32());
  /* 12156115 ret  */
  ESPCHK(0x12156090u, _esp0);
  ESP += 4; return;
}

/* FUN_10006120 @ 0x12156120 (227 bytes, 80 insns) */
void f_12156120(void) {
  FTRACE(0x12156120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156120 push ebp */
  push32((uint32_t)(EBP));
  /* 12156121 mov ebp, esp */
  EBP = (ESP);
  /* 12156123 push ecx */
  push32((uint32_t)(ECX));
  /* 12156124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156127 push eax */
  push32((uint32_t)(EAX));
  /* 12156128 call 0x12156090 */
  push32(0x1215612du); f_12156090();
  /* 1215612d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156132 jne 0x1215613b */
  if (!C.zf) goto L_1215613b;
  /* 12156134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156136 jmp 0x121561ff */
  goto L_121561ff;
L_1215613b:;
  /* 1215613b push 9 */
  push32((uint32_t)(0x9u));
  /* 1215613d call 0x12158490 */
  push32(0x12156142u); f_12158490();
  /* 12156142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156148 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215614b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215614e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156151 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12156154 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156159 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215615c je 0x12156180 */
  if (C.zf) goto L_12156180;
  /* 1215615e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156161 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156165 je 0x12156180 */
  if (C.zf) goto L_12156180;
  /* 12156167 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215616a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1215616d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156172 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156175 je 0x12156180 */
  if (C.zf) goto L_12156180;
  /* 12156177 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215617a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215617e jne 0x121561f3 */
  if (!C.zf) goto L_121561f3;
L_12156180:;
  /* 12156180 push 1 */
  push32((uint32_t)(0x1u));
  /* 12156182 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156185 push edx */
  push32((uint32_t)(EDX));
  /* 12156186 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156189 push eax */
  push32((uint32_t)(EAX));
  /* 1215618a call 0x12156040 */
  push32(0x1215618fu); f_12156040();
  /* 1215618f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156194 je 0x121561f3 */
  if (C.zf) goto L_121561f3;
  /* 12156196 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156199 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1215619c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215619f jne 0x121561f3 */
  if (!C.zf) goto L_121561f3;
  /* 121561a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121561a4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121561a7 cmp ecx, dword ptr [0x1217ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121561ad jg 0x121561f3 */
  if ((!C.zf&&C.sf==C.of)) goto L_121561f3;
  /* 121561af cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121561b3 je 0x121561c0 */
  if (C.zf) goto L_121561c0;
  /* 121561b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121561b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121561bb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 121561be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121561c0:;
  /* 121561c0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121561c4 je 0x121561d1 */
  if (C.zf) goto L_121561d1;
  /* 121561c6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 121561c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121561cc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 121561cf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121561d1:;
  /* 121561d1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121561d5 je 0x121561e2 */
  if (C.zf) goto L_121561e2;
  /* 121561d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 121561da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121561dd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 121561e0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_121561e2:;
  /* 121561e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 121561e4 call 0x12158530 */
  push32(0x121561e9u); f_12158530();
  /* 121561e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121561ec mov eax, 1 */
  EAX = (0x1u);
  /* 121561f1 jmp 0x121561ff */
  goto L_121561ff;
L_121561f3:;
  /* 121561f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 121561f5 call 0x12158530 */
  push32(0x121561fau); f_12158530();
  /* 121561fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121561fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121561ff:;
  /* 121561ff mov esp, ebp */
  ESP = (EBP);
  /* 12156201 pop ebp */
  EBP = (pop32());
  /* 12156202 ret  */
  ESPCHK(0x12156120u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x12156210 (28 bytes, 11 insns) */
void f_12156210(void) {
  FTRACE(0x12156210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156210 push ebp */
  push32((uint32_t)(EBP));
  /* 12156211 mov ebp, esp */
  EBP = (ESP);
  /* 12156213 push ecx */
  push32((uint32_t)(ECX));
  /* 12156214 mov eax, dword ptr [0x12181f78] */
  EAX = (r32((uint32_t)(0x12181f78)));
  /* 12156219 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215621c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215621f mov dword ptr [0x12181f78], ecx */
  w32((uint32_t)(0x12181f78), (ECX));
  /* 12156225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156228 mov esp, ebp */
  ESP = (EBP);
  /* 1215622a pop ebp */
  EBP = (pop32());
  /* 1215622b ret  */
  ESPCHK(0x12156210u, _esp0);
  ESP += 4; return;
}

/* FUN_10006230 @ 0x12156230 (362 bytes, 116 insns) */
void f_12156230(void) {
  FTRACE(0x12156230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156230 push ebp */
  push32((uint32_t)(EBP));
  /* 12156231 mov ebp, esp */
  EBP = (ESP);
  /* 12156233 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156236 push ebx */
  push32((uint32_t)(EBX));
  /* 12156237 push esi */
  push32((uint32_t)(ESI));
  /* 12156238 push edi */
  push32((uint32_t)(EDI));
  /* 12156239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215623d jne 0x1215626a */
  if (!C.zf) goto L_1215626a;
L_1215623f:;
  /* 1215623f push 0x1217bac4 */
  push32((uint32_t)(0x1217bac4u));
  /* 12156244 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12156249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215624b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215624d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215624f push 0 */
  push32((uint32_t)(0x0u));
  /* 12156251 call 0x12153b50 */
  push32(0x12156256u); f_12153b50();
  /* 12156256 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156259 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215625c jne 0x1215625f */
  if (!C.zf) goto L_1215625f;
  /* 1215625e int3  */
  x86_unimpl("int3 @ 0x1215625e");
L_1215625f:;
  /* 1215625f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156263 jne 0x1215623f */
  if (!C.zf) goto L_1215623f;
  /* 12156265 jmp 0x12156393 */
  goto L_12156393;
L_1215626a:;
  /* 1215626a push 9 */
  push32((uint32_t)(0x9u));
  /* 1215626c call 0x12158490 */
  push32(0x12156271u); f_12158490();
  /* 12156271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156274 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156277 mov edx, dword ptr [0x12180610] */
  EDX = (r32((uint32_t)(0x12180610)));
  /* 1215627d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1215627f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12156286 jmp 0x12156291 */
  goto L_12156291;
L_12156288:;
  /* 12156288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215628b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215628e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12156291:;
  /* 12156291 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156295 jge 0x121562b5 */
  if ((C.sf==C.of)) goto L_121562b5;
  /* 12156297 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215629a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215629d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 121562a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121562a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121562ab mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 121562b3 jmp 0x12156288 */
  goto L_12156288;
L_121562b5:;
  /* 121562b5 mov edx, dword ptr [0x12180610] */
  EDX = (r32((uint32_t)(0x12180610)));
  /* 121562bb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 121562be jmp 0x121562c8 */
  goto L_121562c8;
L_121562c0:;
  /* 121562c0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121562c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 121562c5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_121562c8:;
  /* 121562c8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121562cc je 0x12156371 */
  if (C.zf) goto L_12156371;
  /* 121562d2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121562d5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 121562d8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121562dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121562df jl 0x12156347 */
  if ((C.sf!=C.of)) goto L_12156347;
  /* 121562e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121562e4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121562e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121562ed cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121562f0 jge 0x12156347 */
  if ((C.sf==C.of)) goto L_12156347;
  /* 121562f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121562f5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 121562f8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 121562fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156301 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 12156305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156308 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215630b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1215630e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156317 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 1215631b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215631e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12156321 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156329 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1215632d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156330 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156333 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156336 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12156339 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215633e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156341 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 12156345 jmp 0x1215636c */
  goto L_1215636c;
L_12156347:;
  /* 12156347 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215634a push edx */
  push32((uint32_t)(EDX));
  /* 1215634b push 0x1217baa0 */
  push32((uint32_t)(0x1217baa0u));
  /* 12156350 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156352 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156354 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156356 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156358 call 0x12153b50 */
  push32(0x1215635du); f_12153b50();
  /* 1215635d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156360 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156363 jne 0x12156366 */
  if (!C.zf) goto L_12156366;
  /* 12156365 int3  */
  x86_unimpl("int3 @ 0x12156365");
L_12156366:;
  /* 12156366 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215636a jne 0x12156347 */
  if (!C.zf) goto L_12156347;
L_1215636c:;
  /* 1215636c jmp 0x121562c0 */
  goto L_121562c0;
L_12156371:;
  /* 12156371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156374 mov edx, dword ptr [0x12180618] */
  EDX = (r32((uint32_t)(0x12180618)));
  /* 1215637a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1215637d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156380 mov ecx, dword ptr [0x1218060c] */
  ECX = (r32((uint32_t)(0x1218060c)));
  /* 12156386 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 12156389 push 9 */
  push32((uint32_t)(0x9u));
  /* 1215638b call 0x12158530 */
  push32(0x12156390u); f_12158530();
  /* 12156390 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156393:;
  /* 12156393 pop edi */
  EDI = (pop32());
  /* 12156394 pop esi */
  ESI = (pop32());
  /* 12156395 pop ebx */
  EBX = (pop32());
  /* 12156396 mov esp, ebp */
  ESP = (EBP);
  /* 12156398 pop ebp */
  EBP = (pop32());
  /* 12156399 ret  */
  ESPCHK(0x12156230u, _esp0);
  ESP += 4; return;
}

/* FUN_100063a0 @ 0x121563a0 (291 bytes, 95 insns) */
void f_121563a0(void) {
  FTRACE(0x121563a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121563a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121563a1 mov ebp, esp */
  EBP = (ESP);
  /* 121563a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121563a6 push ebx */
  push32((uint32_t)(EBX));
  /* 121563a7 push esi */
  push32((uint32_t)(ESI));
  /* 121563a8 push edi */
  push32((uint32_t)(EDI));
  /* 121563a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121563b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121563b4 je 0x121563c2 */
  if (C.zf) goto L_121563c2;
  /* 121563b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121563ba je 0x121563c2 */
  if (C.zf) goto L_121563c2;
  /* 121563bc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121563c0 jne 0x121563f0 */
  if (!C.zf) goto L_121563f0;
L_121563c2:;
  /* 121563c2 push 0x1217baec */
  push32((uint32_t)(0x1217baecu));
  /* 121563c7 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 121563cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121563ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121563d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121563d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121563d4 call 0x12153b50 */
  push32(0x121563d9u); f_12153b50();
  /* 121563d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121563dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121563df jne 0x121563e2 */
  if (!C.zf) goto L_121563e2;
  /* 121563e1 int3  */
  x86_unimpl("int3 @ 0x121563e1");
L_121563e2:;
  /* 121563e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121563e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121563e6 jne 0x121563c2 */
  if (!C.zf) goto L_121563c2;
  /* 121563e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121563eb jmp 0x121564bc */
  goto L_121564bc;
L_121563f0:;
  /* 121563f0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121563f7 jmp 0x12156402 */
  goto L_12156402;
L_121563f9:;
  /* 121563f9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121563fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121563ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12156402:;
  /* 12156402 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156406 jge 0x1215648c */
  if ((C.sf==C.of)) goto L_1215648c;
  /* 1215640c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215640f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156412 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156415 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12156418 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 1215641c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156420 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156423 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156426 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 1215642a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215642d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156430 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156433 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12156436 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 1215643a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215643e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156441 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156444 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 12156448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215644b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215644e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156453 jne 0x12156462 */
  if (!C.zf) goto L_12156462;
  /* 12156455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215645b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156460 je 0x12156487 */
  if (C.zf) goto L_12156487;
L_12156462:;
  /* 12156462 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156466 je 0x12156487 */
  if (C.zf) goto L_12156487;
  /* 12156468 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215646c jne 0x12156480 */
  if (!C.zf) goto L_12156480;
  /* 1215646e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156472 jne 0x12156487 */
  if (!C.zf) goto L_12156487;
  /* 12156474 mov eax, dword ptr [0x1217ea84] */
  EAX = (r32((uint32_t)(0x1217ea84)));
  /* 12156479 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1215647c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215647e je 0x12156487 */
  if (C.zf) goto L_12156487;
L_12156480:;
  /* 12156480 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12156487:;
  /* 12156487 jmp 0x121563f9 */
  goto L_121563f9;
L_1215648c:;
  /* 1215648c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215648f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156492 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 12156495 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156498 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215649b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1215649e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 121564a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121564a4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 121564a7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121564aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121564ad mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 121564b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121564b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 121564b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_121564bc:;
  /* 121564bc pop edi */
  EDI = (pop32());
  /* 121564bd pop esi */
  ESI = (pop32());
  /* 121564be pop ebx */
  EBX = (pop32());
  /* 121564bf mov esp, ebp */
  ESP = (EBP);
  /* 121564c1 pop ebp */
  EBP = (pop32());
  /* 121564c2 ret  */
  ESPCHK(0x121563a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x121564d0 (697 bytes, 253 insns) */
void f_121564d0(void) {
  FTRACE(0x121564d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121564d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121564d1 mov ebp, esp */
  EBP = (ESP);
  /* 121564d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121564d6 push ebx */
  push32((uint32_t)(EBX));
  /* 121564d7 push esi */
  push32((uint32_t)(ESI));
  /* 121564d8 push edi */
  push32((uint32_t)(EDI));
  /* 121564d9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121564e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 121564e2 call 0x12158490 */
  push32(0x121564e7u); f_12158490();
  /* 121564e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121564ea:;
  /* 121564ea push 0x1217bbe4 */
  push32((uint32_t)(0x1217bbe4u));
  /* 121564ef push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 121564f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121564f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121564f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121564fa push 0 */
  push32((uint32_t)(0x0u));
  /* 121564fc call 0x12153b50 */
  push32(0x12156501u); f_12153b50();
  /* 12156501 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156504 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156507 jne 0x1215650a */
  if (!C.zf) goto L_1215650a;
  /* 12156509 int3  */
  x86_unimpl("int3 @ 0x12156509");
L_1215650a:;
  /* 1215650a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215650c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215650e jne 0x121564ea */
  if (!C.zf) goto L_121564ea;
  /* 12156510 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156514 je 0x1215651e */
  if (C.zf) goto L_1215651e;
  /* 12156516 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156519 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215651b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1215651e:;
  /* 1215651e mov eax, dword ptr [0x12180610] */
  EAX = (r32((uint32_t)(0x12180610)));
  /* 12156523 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156526 jmp 0x12156530 */
  goto L_12156530;
L_12156528:;
  /* 12156528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215652b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215652d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12156530:;
  /* 12156530 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156534 je 0x12156752 */
  if (C.zf) goto L_12156752;
  /* 1215653a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215653d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156540 je 0x12156752 */
  if (C.zf) goto L_12156752;
  /* 12156546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156549 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1215654c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156552 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156555 je 0x12156584 */
  if (C.zf) goto L_12156584;
  /* 12156557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215655a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1215655d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12156563 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156565 je 0x12156584 */
  if (C.zf) goto L_12156584;
  /* 12156567 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215656a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1215656d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156572 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156575 jne 0x12156589 */
  if (!C.zf) goto L_12156589;
  /* 12156577 mov ecx, dword ptr [0x1217ea84] */
  ECX = (r32((uint32_t)(0x1217ea84)));
  /* 1215657d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 12156580 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156582 jne 0x12156589 */
  if (!C.zf) goto L_12156589;
L_12156584:;
  /* 12156584 jmp 0x1215674d */
  goto L_1215674d;
L_12156589:;
  /* 12156589 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215658c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156590 je 0x12156602 */
  if (C.zf) goto L_12156602;
  /* 12156592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156594 push 1 */
  push32((uint32_t)(0x1u));
  /* 12156596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156599 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1215659c push ecx */
  push32((uint32_t)(ECX));
  /* 1215659d call 0x12156040 */
  push32(0x121565a2u); f_12156040();
  /* 121565a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121565a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121565a7 jne 0x121565d3 */
  if (!C.zf) goto L_121565d3;
L_121565a9:;
  /* 121565a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121565ac mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121565af push eax */
  push32((uint32_t)(EAX));
  /* 121565b0 push 0x1217bbd0 */
  push32((uint32_t)(0x1217bbd0u));
  /* 121565b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 121565b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121565b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 121565bb push 0 */
  push32((uint32_t)(0x0u));
  /* 121565bd call 0x12153b50 */
  push32(0x121565c2u); f_12153b50();
  /* 121565c2 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121565c5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121565c8 jne 0x121565cb */
  if (!C.zf) goto L_121565cb;
  /* 121565ca int3  */
  x86_unimpl("int3 @ 0x121565ca");
L_121565cb:;
  /* 121565cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121565cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121565cf jne 0x121565a9 */
  if (!C.zf) goto L_121565a9;
  /* 121565d1 jmp 0x12156602 */
  goto L_12156602;
L_121565d3:;
  /* 121565d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121565d6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 121565d9 push eax */
  push32((uint32_t)(EAX));
  /* 121565da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121565dd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 121565e0 push edx */
  push32((uint32_t)(EDX));
  /* 121565e1 push 0x1217bbc4 */
  push32((uint32_t)(0x1217bbc4u));
  /* 121565e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121565e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121565ea push 0 */
  push32((uint32_t)(0x0u));
  /* 121565ec push 0 */
  push32((uint32_t)(0x0u));
  /* 121565ee call 0x12153b50 */
  push32(0x121565f3u); f_12153b50();
  /* 121565f3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121565f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121565f9 jne 0x121565fc */
  if (!C.zf) goto L_121565fc;
  /* 121565fb int3  */
  x86_unimpl("int3 @ 0x121565fb");
L_121565fc:;
  /* 121565fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121565fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156600 jne 0x121565d3 */
  if (!C.zf) goto L_121565d3;
L_12156602:;
  /* 12156602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156605 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12156608 push edx */
  push32((uint32_t)(EDX));
  /* 12156609 push 0x1217bbbc */
  push32((uint32_t)(0x1217bbbcu));
  /* 1215660e push 0 */
  push32((uint32_t)(0x0u));
  /* 12156610 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156612 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156614 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156616 call 0x12153b50 */
  push32(0x1215661bu); f_12153b50();
  /* 1215661b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215661e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156621 jne 0x12156624 */
  if (!C.zf) goto L_12156624;
  /* 12156623 int3  */
  x86_unimpl("int3 @ 0x12156623");
L_12156624:;
  /* 12156624 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156628 jne 0x12156602 */
  if (!C.zf) goto L_12156602;
  /* 1215662a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215662d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12156630 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156636 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156639 jne 0x121566ac */
  if (!C.zf) goto L_121566ac;
L_1215663b:;
  /* 1215663b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215663e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12156641 push ecx */
  push32((uint32_t)(ECX));
  /* 12156642 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156645 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12156648 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1215664b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156650 push eax */
  push32((uint32_t)(EAX));
  /* 12156651 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156654 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156657 push ecx */
  push32((uint32_t)(ECX));
  /* 12156658 push 0x1217bb88 */
  push32((uint32_t)(0x1217bb88u));
  /* 1215665d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215665f push 0 */
  push32((uint32_t)(0x0u));
  /* 12156661 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156663 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156665 call 0x12153b50 */
  push32(0x1215666au); f_12153b50();
  /* 1215666a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215666d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156670 jne 0x12156673 */
  if (!C.zf) goto L_12156673;
  /* 12156672 int3  */
  x86_unimpl("int3 @ 0x12156672");
L_12156673:;
  /* 12156673 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156675 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156677 jne 0x1215663b */
  if (!C.zf) goto L_1215663b;
  /* 12156679 cmp dword ptr [0x12181f78], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181f78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156680 je 0x1215669b */
  if (C.zf) goto L_1215669b;
  /* 12156682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156685 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12156688 push ecx */
  push32((uint32_t)(ECX));
  /* 12156689 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215668c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215668f push edx */
  push32((uint32_t)(EDX));
  /* 12156690 call dword ptr [0x12181f78] */
  call_ind((uint32_t)(r32((uint32_t)(0x12181f78))), 0x12156696u);
  /* 12156696 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156699 jmp 0x121566a7 */
  goto L_121566a7;
L_1215669b:;
  /* 1215669b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215669e push eax */
  push32((uint32_t)(EAX));
  /* 1215669f call 0x12156790 */
  push32(0x121566a4u); f_12156790();
  /* 121566a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121566a7:;
  /* 121566a7 jmp 0x1215674d */
  goto L_1215674d;
L_121566ac:;
  /* 121566ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121566af cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121566b3 jne 0x121566f2 */
  if (!C.zf) goto L_121566f2;
L_121566b5:;
  /* 121566b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121566b8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121566bb push eax */
  push32((uint32_t)(EAX));
  /* 121566bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121566bf add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121566c2 push ecx */
  push32((uint32_t)(ECX));
  /* 121566c3 push 0x1217bb60 */
  push32((uint32_t)(0x1217bb60u));
  /* 121566c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121566ca push 0 */
  push32((uint32_t)(0x0u));
  /* 121566cc push 0 */
  push32((uint32_t)(0x0u));
  /* 121566ce push 0 */
  push32((uint32_t)(0x0u));
  /* 121566d0 call 0x12153b50 */
  push32(0x121566d5u); f_12153b50();
  /* 121566d5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121566d8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121566db jne 0x121566de */
  if (!C.zf) goto L_121566de;
  /* 121566dd int3  */
  x86_unimpl("int3 @ 0x121566dd");
L_121566de:;
  /* 121566de xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121566e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121566e2 jne 0x121566b5 */
  if (!C.zf) goto L_121566b5;
  /* 121566e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121566e7 push eax */
  push32((uint32_t)(EAX));
  /* 121566e8 call 0x12156790 */
  push32(0x121566edu); f_12156790();
  /* 121566ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121566f0 jmp 0x1215674d */
  goto L_1215674d;
L_121566f2:;
  /* 121566f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121566f5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 121566f8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 121566fe cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156701 jne 0x1215674d */
  if (!C.zf) goto L_1215674d;
L_12156703:;
  /* 12156703 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156706 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12156709 push ecx */
  push32((uint32_t)(ECX));
  /* 1215670a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215670d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12156710 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12156713 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156718 push eax */
  push32((uint32_t)(EAX));
  /* 12156719 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215671c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215671f push ecx */
  push32((uint32_t)(ECX));
  /* 12156720 push 0x1217bb2c */
  push32((uint32_t)(0x1217bb2cu));
  /* 12156725 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156727 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156729 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215672b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215672d call 0x12153b50 */
  push32(0x12156732u); f_12153b50();
  /* 12156732 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156738 jne 0x1215673b */
  if (!C.zf) goto L_1215673b;
  /* 1215673a int3  */
  x86_unimpl("int3 @ 0x1215673a");
L_1215673b:;
  /* 1215673b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215673d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215673f jne 0x12156703 */
  if (!C.zf) goto L_12156703;
  /* 12156741 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156744 push eax */
  push32((uint32_t)(EAX));
  /* 12156745 call 0x12156790 */
  push32(0x1215674au); f_12156790();
  /* 1215674a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215674d:;
  /* 1215674d jmp 0x12156528 */
  goto L_12156528;
L_12156752:;
  /* 12156752 push 9 */
  push32((uint32_t)(0x9u));
  /* 12156754 call 0x12158530 */
  push32(0x12156759u); f_12158530();
  /* 12156759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215675c:;
  /* 1215675c push 0x1217bb14 */
  push32((uint32_t)(0x1217bb14u));
  /* 12156761 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 12156766 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215676a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215676c push 0 */
  push32((uint32_t)(0x0u));
  /* 1215676e call 0x12153b50 */
  push32(0x12156773u); f_12153b50();
  /* 12156773 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156776 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156779 jne 0x1215677c */
  if (!C.zf) goto L_1215677c;
  /* 1215677b int3  */
  x86_unimpl("int3 @ 0x1215677b");
L_1215677c:;
  /* 1215677c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1215677e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156780 jne 0x1215675c */
  if (!C.zf) goto L_1215675c;
  /* 12156782 pop edi */
  EDI = (pop32());
  /* 12156783 pop esi */
  ESI = (pop32());
  /* 12156784 pop ebx */
  EBX = (pop32());
  /* 12156785 mov esp, ebp */
  ESP = (EBP);
  /* 12156787 pop ebp */
  EBP = (pop32());
  /* 12156788 ret  */
  ESPCHK(0x121564d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006790 @ 0x12156790 (276 bytes, 89 insns) */
void f_12156790(void) {
  FTRACE(0x12156790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156790 push ebp */
  push32((uint32_t)(EBP));
  /* 12156791 mov ebp, esp */
  EBP = (ESP);
  /* 12156793 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156796 push ebx */
  push32((uint32_t)(EBX));
  /* 12156797 push esi */
  push32((uint32_t)(ESI));
  /* 12156798 push edi */
  push32((uint32_t)(EDI));
  /* 12156799 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 121567a0 jmp 0x121567ab */
  goto L_121567ab;
L_121567a2:;
  /* 121567a2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121567a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121567a8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_121567ab:;
  /* 121567ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121567ae cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121567b2 jge 0x121567bf */
  if ((C.sf==C.of)) goto L_121567bf;
  /* 121567b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121567b7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 121567ba mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 121567bd jmp 0x121567c6 */
  goto L_121567c6;
L_121567bf:;
  /* 121567bf mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_121567c6:;
  /* 121567c6 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 121567c9 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121567cc jge 0x1215686c */
  if ((C.sf==C.of)) goto L_1215686c;
  /* 121567d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121567d5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121567d8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 121567db mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 121567de cmp dword ptr [0x1217eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1217eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121567e5 jle 0x12156803 */
  if ((C.zf||C.sf!=C.of)) goto L_12156803;
  /* 121567e7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 121567ec mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 121567ef and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 121567f5 push ecx */
  push32((uint32_t)(ECX));
  /* 121567f6 call 0x1215aaa0 */
  push32(0x121567fbu); f_1215aaa0();
  /* 121567fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121567fe mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 12156801 jmp 0x12156820 */
  goto L_12156820;
L_12156803:;
  /* 12156803 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12156806 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215680c mov eax, dword ptr [0x1217ec98] */
  EAX = (r32((uint32_t)(0x1217ec98)));
  /* 12156811 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12156813 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12156817 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 1215681d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_12156820:;
  /* 12156820 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156824 je 0x12156834 */
  if (C.zf) goto L_12156834;
  /* 12156826 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12156829 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215682f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 12156832 jmp 0x1215683b */
  goto L_1215683b;
L_12156834:;
  /* 12156834 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_1215683b:;
  /* 1215683b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1215683e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 12156841 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 12156845 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 12156848 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215684e push edx */
  push32((uint32_t)(EDX));
  /* 1215684f push 0x1217bc08 */
  push32((uint32_t)(0x1217bc08u));
  /* 12156854 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 12156857 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215685a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1215685e push ecx */
  push32((uint32_t)(ECX));
  /* 1215685f call 0x1215a9a0 */
  push32(0x12156864u); f_1215a9a0();
  /* 12156864 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156867 jmp 0x121567a2 */
  goto L_121567a2;
L_1215686c:;
  /* 1215686c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1215686f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_12156874:;
  /* 12156874 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 12156877 push eax */
  push32((uint32_t)(EAX));
  /* 12156878 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1215687b push ecx */
  push32((uint32_t)(ECX));
  /* 1215687c push 0x1217bbf8 */
  push32((uint32_t)(0x1217bbf8u));
  /* 12156881 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156883 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156885 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156887 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156889 call 0x12153b50 */
  push32(0x1215688eu); f_12153b50();
  /* 1215688e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156891 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156894 jne 0x12156897 */
  if (!C.zf) goto L_12156897;
  /* 12156896 int3  */
  x86_unimpl("int3 @ 0x12156896");
L_12156897:;
  /* 12156897 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156899 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215689b jne 0x12156874 */
  if (!C.zf) goto L_12156874;
  /* 1215689d pop edi */
  EDI = (pop32());
  /* 1215689e pop esi */
  ESI = (pop32());
  /* 1215689f pop ebx */
  EBX = (pop32());
  /* 121568a0 mov esp, ebp */
  ESP = (EBP);
  /* 121568a2 pop ebp */
  EBP = (pop32());
  /* 121568a3 ret  */
  ESPCHK(0x12156790u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x121568b0 (116 bytes, 46 insns) */
void f_121568b0(void) {
  FTRACE(0x121568b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121568b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121568b1 mov ebp, esp */
  EBP = (ESP);
  /* 121568b3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121568b6 push ebx */
  push32((uint32_t)(EBX));
  /* 121568b7 push esi */
  push32((uint32_t)(ESI));
  /* 121568b8 push edi */
  push32((uint32_t)(EDI));
  /* 121568b9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 121568bc push eax */
  push32((uint32_t)(EAX));
  /* 121568bd call 0x12156230 */
  push32(0x121568c2u); f_12156230();
  /* 121568c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121568c5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121568c9 jne 0x121568e4 */
  if (!C.zf) goto L_121568e4;
  /* 121568cb cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121568cf jne 0x121568e4 */
  if (!C.zf) goto L_121568e4;
  /* 121568d1 mov ecx, dword ptr [0x1217ea84] */
  ECX = (r32((uint32_t)(0x1217ea84)));
  /* 121568d7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 121568da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121568dc je 0x1215691b */
  if (C.zf) goto L_1215691b;
  /* 121568de cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121568e2 je 0x1215691b */
  if (C.zf) goto L_1215691b;
L_121568e4:;
  /* 121568e4 push 0x1217bc10 */
  push32((uint32_t)(0x1217bc10u));
  /* 121568e9 push 0x1217b5dc */
  push32((uint32_t)(0x1217b5dcu));
  /* 121568ee push 0 */
  push32((uint32_t)(0x0u));
  /* 121568f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121568f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121568f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121568f6 call 0x12153b50 */
  push32(0x121568fbu); f_12153b50();
  /* 121568fb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121568fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156901 jne 0x12156904 */
  if (!C.zf) goto L_12156904;
  /* 12156903 int3  */
  x86_unimpl("int3 @ 0x12156903");
L_12156904:;
  /* 12156904 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156906 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156908 jne 0x121568e4 */
  if (!C.zf) goto L_121568e4;
  /* 1215690a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215690c call 0x121564d0 */
  push32(0x12156911u); f_121564d0();
  /* 12156911 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156914 mov eax, 1 */
  EAX = (0x1u);
  /* 12156919 jmp 0x1215691d */
  goto L_1215691d;
L_1215691b:;
  /* 1215691b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1215691d:;
  /* 1215691d pop edi */
  EDI = (pop32());
  /* 1215691e pop esi */
  ESI = (pop32());
  /* 1215691f pop ebx */
  EBX = (pop32());
  /* 12156920 mov esp, ebp */
  ESP = (EBP);
  /* 12156922 pop ebp */
  EBP = (pop32());
  /* 12156923 ret  */
  ESPCHK(0x121568b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006930 @ 0x12156930 (197 bytes, 79 insns) */
void f_12156930(void) {
  FTRACE(0x12156930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156930 push ebp */
  push32((uint32_t)(EBP));
  /* 12156931 mov ebp, esp */
  EBP = (ESP);
  /* 12156933 push ecx */
  push32((uint32_t)(ECX));
  /* 12156934 push ebx */
  push32((uint32_t)(EBX));
  /* 12156935 push esi */
  push32((uint32_t)(ESI));
  /* 12156936 push edi */
  push32((uint32_t)(EDI));
  /* 12156937 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215693b jne 0x12156942 */
  if (!C.zf) goto L_12156942;
  /* 1215693d jmp 0x121569ee */
  goto L_121569ee;
L_12156942:;
  /* 12156942 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12156949 jmp 0x12156954 */
  goto L_12156954;
L_1215694b:;
  /* 1215694b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215694e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156951 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12156954:;
  /* 12156954 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156958 jge 0x1215699e */
  if ((C.sf==C.of)) goto L_1215699e;
L_1215695a:;
  /* 1215695a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215695d mov edx, dword ptr [ecx*4 + 0x1217ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217ea94)));
  /* 12156964 push edx */
  push32((uint32_t)(EDX));
  /* 12156965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156968 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215696b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 1215696f push edx */
  push32((uint32_t)(EDX));
  /* 12156970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156976 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 1215697a push edx */
  push32((uint32_t)(EDX));
  /* 1215697b push 0x1217bc6c */
  push32((uint32_t)(0x1217bc6cu));
  /* 12156980 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156982 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156984 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156986 push 0 */
  push32((uint32_t)(0x0u));
  /* 12156988 call 0x12153b50 */
  push32(0x1215698du); f_12153b50();
  /* 1215698d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156990 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156993 jne 0x12156996 */
  if (!C.zf) goto L_12156996;
  /* 12156995 int3  */
  x86_unimpl("int3 @ 0x12156995");
L_12156996:;
  /* 12156996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1215699a jne 0x1215695a */
  if (!C.zf) goto L_1215695a;
  /* 1215699c jmp 0x1215694b */
  goto L_1215694b;
L_1215699e:;
  /* 1215699e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121569a1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 121569a4 push edx */
  push32((uint32_t)(EDX));
  /* 121569a5 push 0x1217bc48 */
  push32((uint32_t)(0x1217bc48u));
  /* 121569aa push 0 */
  push32((uint32_t)(0x0u));
  /* 121569ac push 0 */
  push32((uint32_t)(0x0u));
  /* 121569ae push 0 */
  push32((uint32_t)(0x0u));
  /* 121569b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 121569b2 call 0x12153b50 */
  push32(0x121569b7u); f_12153b50();
  /* 121569b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121569ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121569bd jne 0x121569c0 */
  if (!C.zf) goto L_121569c0;
  /* 121569bf int3  */
  x86_unimpl("int3 @ 0x121569bf");
L_121569c0:;
  /* 121569c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121569c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121569c4 jne 0x1215699e */
  if (!C.zf) goto L_1215699e;
L_121569c6:;
  /* 121569c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121569c9 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 121569cc push edx */
  push32((uint32_t)(EDX));
  /* 121569cd push 0x1217bc28 */
  push32((uint32_t)(0x1217bc28u));
  /* 121569d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 121569d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 121569d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 121569d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 121569da call 0x12153b50 */
  push32(0x121569dfu); f_12153b50();
  /* 121569df add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121569e2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121569e5 jne 0x121569e8 */
  if (!C.zf) goto L_121569e8;
  /* 121569e7 int3  */
  x86_unimpl("int3 @ 0x121569e7");
L_121569e8:;
  /* 121569e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121569ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121569ec jne 0x121569c6 */
  if (!C.zf) goto L_121569c6;
L_121569ee:;
  /* 121569ee pop edi */
  EDI = (pop32());
  /* 121569ef pop esi */
  ESI = (pop32());
  /* 121569f0 pop ebx */
  EBX = (pop32());
  /* 121569f1 mov esp, ebp */
  ESP = (EBP);
  /* 121569f3 pop ebp */
  EBP = (pop32());
  /* 121569f4 ret  */
  ESPCHK(0x12156930u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a00 @ 0x12156a00 (329 bytes, 102 insns) */
void f_12156a00(void) {
  FTRACE(0x12156a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156a00 push ebp */
  push32((uint32_t)(EBP));
  /* 12156a01 mov ebp, esp */
  EBP = (ESP);
  /* 12156a03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156a06 cmp dword ptr [0x121820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156a0d jne 0x12156a14 */
  if (!C.zf) goto L_12156a14;
  /* 12156a0f call 0x1215b340 */
  push32(0x12156a14u); f_1215b340();
L_12156a14:;
  /* 12156a14 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12156a1b mov eax, dword ptr [0x121805ac] */
  EAX = (r32((uint32_t)(0x121805ac)));
  /* 12156a20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12156a23:;
  /* 12156a23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156a26 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12156a29 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156a2b je 0x12156a59 */
  if (C.zf) goto L_12156a59;
  /* 12156a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156a30 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156a33 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156a36 je 0x12156a41 */
  if (C.zf) goto L_12156a41;
  /* 12156a38 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156a3b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156a3e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12156a41:;
  /* 12156a41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156a44 push eax */
  push32((uint32_t)(EAX));
  /* 12156a45 call 0x121578c0 */
  push32(0x12156a4au); f_121578c0();
  /* 12156a4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156a4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156a50 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12156a54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12156a57 jmp 0x12156a23 */
  goto L_12156a23;
L_12156a59:;
  /* 12156a59 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 12156a5b push 0x1217bc8c */
  push32((uint32_t)(0x1217bc8cu));
  /* 12156a60 push 2 */
  push32((uint32_t)(0x2u));
  /* 12156a62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156a65 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 12156a6c push ecx */
  push32((uint32_t)(ECX));
  /* 12156a6d call 0x12154a90 */
  push32(0x12156a72u); f_12154a90();
  /* 12156a72 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156a75 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12156a78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156a7b mov dword ptr [0x121805e0], edx */
  w32((uint32_t)(0x121805e0), (EDX));
  /* 12156a81 cmp dword ptr [0x121805e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156a88 jne 0x12156a94 */
  if (!C.zf) goto L_12156a94;
  /* 12156a8a push 9 */
  push32((uint32_t)(0x9u));
  /* 12156a8c call 0x12153a00 */
  push32(0x12156a91u); f_12153a00();
  /* 12156a91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156a94:;
  /* 12156a94 mov eax, dword ptr [0x121805ac] */
  EAX = (r32((uint32_t)(0x121805ac)));
  /* 12156a99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156a9c jmp 0x12156aa7 */
  goto L_12156aa7;
L_12156a9e:;
  /* 12156a9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156aa1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156aa4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12156aa7:;
  /* 12156aa7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156aaa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156aad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156aaf je 0x12156b17 */
  if (C.zf) goto L_12156b17;
  /* 12156ab1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ab4 push ecx */
  push32((uint32_t)(ECX));
  /* 12156ab5 call 0x121578c0 */
  push32(0x12156abau); f_121578c0();
  /* 12156aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156abd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ac0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12156ac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ac6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156ac9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156acc je 0x12156b15 */
  if (C.zf) goto L_12156b15;
  /* 12156ace push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12156ad0 push 0x1217bc8c */
  push32((uint32_t)(0x1217bc8cu));
  /* 12156ad5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12156ad7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156ada push ecx */
  push32((uint32_t)(ECX));
  /* 12156adb call 0x12154a90 */
  push32(0x12156ae0u); f_12154a90();
  /* 12156ae0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ae3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156ae6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12156ae8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156aeb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156aee jne 0x12156afa */
  if (!C.zf) goto L_12156afa;
  /* 12156af0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12156af2 call 0x12153a00 */
  push32(0x12156af7u); f_12153a00();
  /* 12156af7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156afa:;
  /* 12156afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156afd push ecx */
  push32((uint32_t)(ECX));
  /* 12156afe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156b01 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12156b03 push eax */
  push32((uint32_t)(EAX));
  /* 12156b04 call 0x12157a40 */
  push32(0x12156b09u); f_12157a40();
  /* 12156b09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156b0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156b0f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156b12 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12156b15:;
  /* 12156b15 jmp 0x12156a9e */
  goto L_12156a9e;
L_12156b17:;
  /* 12156b17 push 2 */
  push32((uint32_t)(0x2u));
  /* 12156b19 mov edx, dword ptr [0x121805ac] */
  EDX = (r32((uint32_t)(0x121805ac)));
  /* 12156b1f push edx */
  push32((uint32_t)(EDX));
  /* 12156b20 call 0x12155520 */
  push32(0x12156b25u); f_12155520();
  /* 12156b25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156b28 mov dword ptr [0x121805ac], 0 */
  w32((uint32_t)(0x121805ac), (0x0u));
  /* 12156b32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156b35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12156b3b mov dword ptr [0x121820e0], 1 */
  w32((uint32_t)(0x121820e0), (0x1u));
  /* 12156b45 mov esp, ebp */
  ESP = (EBP);
  /* 12156b47 pop ebp */
  EBP = (pop32());
  /* 12156b48 ret  */
  ESPCHK(0x12156a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x12156b50 (216 bytes, 69 insns) */
void f_12156b50(void) {
  FTRACE(0x12156b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12156b51 mov ebp, esp */
  EBP = (ESP);
  /* 12156b53 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156b56 cmp dword ptr [0x121820f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121820f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156b5d jne 0x12156b64 */
  if (!C.zf) goto L_12156b64;
  /* 12156b5f call 0x1215b340 */
  push32(0x12156b64u); f_1215b340();
L_12156b64:;
  /* 12156b64 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 12156b69 push 0x1218061c */
  push32((uint32_t)(0x1218061cu));
  /* 12156b6e push 0 */
  push32((uint32_t)(0x0u));
  /* 12156b70 call dword ptr [0x12183368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183368))), 0x12156b76u);
  /* 12156b76 mov dword ptr [0x121805f0], 0x1218061c */
  w32((uint32_t)(0x121805f0), (0x1218061cu));
  /* 12156b80 mov eax, dword ptr [0x1218210c] */
  EAX = (r32((uint32_t)(0x1218210c)));
  /* 12156b85 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156b88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156b8a jne 0x12156b97 */
  if (!C.zf) goto L_12156b97;
  /* 12156b8c mov edx, dword ptr [0x121805f0] */
  EDX = (r32((uint32_t)(0x121805f0)));
  /* 12156b92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12156b95 jmp 0x12156b9f */
  goto L_12156b9f;
L_12156b97:;
  /* 12156b97 mov eax, dword ptr [0x1218210c] */
  EAX = (r32((uint32_t)(0x1218210c)));
  /* 12156b9c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12156b9f:;
  /* 12156b9f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12156ba2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12156ba5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12156ba8 push edx */
  push32((uint32_t)(EDX));
  /* 12156ba9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12156bac push eax */
  push32((uint32_t)(EAX));
  /* 12156bad push 0 */
  push32((uint32_t)(0x0u));
  /* 12156baf push 0 */
  push32((uint32_t)(0x0u));
  /* 12156bb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156bb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12156bb5 call 0x12156c30 */
  push32(0x12156bbau); f_12156c30();
  /* 12156bba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156bbd push 0x80 */
  push32((uint32_t)(0x80u));
  /* 12156bc2 push 0x1217bc98 */
  push32((uint32_t)(0x1217bc98u));
  /* 12156bc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12156bc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156bcf lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 12156bd2 push ecx */
  push32((uint32_t)(ECX));
  /* 12156bd3 call 0x12154a90 */
  push32(0x12156bd8u); f_12154a90();
  /* 12156bd8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156bdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12156bde cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156be2 jne 0x12156bee */
  if (!C.zf) goto L_12156bee;
  /* 12156be4 push 8 */
  push32((uint32_t)(0x8u));
  /* 12156be6 call 0x12153a00 */
  push32(0x12156bebu); f_12153a00();
  /* 12156beb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12156bee:;
  /* 12156bee lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 12156bf1 push edx */
  push32((uint32_t)(EDX));
  /* 12156bf2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12156bf5 push eax */
  push32((uint32_t)(EAX));
  /* 12156bf6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156bf9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156bfc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 12156bff push eax */
  push32((uint32_t)(EAX));
  /* 12156c00 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12156c04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156c07 push edx */
  push32((uint32_t)(EDX));
  /* 12156c08 call 0x12156c30 */
  push32(0x12156c0du); f_12156c30();
  /* 12156c0d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12156c10 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156c13 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156c16 mov dword ptr [0x121805d4], eax */
  w32((uint32_t)(0x121805d4), (EAX));
  /* 12156c1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12156c1e mov dword ptr [0x121805d8], ecx */
  w32((uint32_t)(0x121805d8), (ECX));
  /* 12156c24 mov esp, ebp */
  ESP = (EBP);
  /* 12156c26 pop ebp */
  EBP = (pop32());
  /* 12156c27 ret  */
  ESPCHK(0x12156b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c30 @ 0x12156c30 (1060 bytes, 360 insns) */
void f_12156c30(void) {
  FTRACE(0x12156c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12156c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12156c31 mov ebp, esp */
  EBP = (ESP);
  /* 12156c33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156c36 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156c39 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12156c3f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12156c42 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 12156c48 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12156c4b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12156c4e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156c52 je 0x12156c65 */
  if (C.zf) goto L_12156c65;
  /* 12156c54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156c57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156c5a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12156c5c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156c5f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156c62 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_12156c65:;
  /* 12156c65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156c68 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156c6b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156c6e jne 0x12156d3d */
  if (!C.zf) goto L_12156d3d;
L_12156c74:;
  /* 12156c74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156c77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156c7a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12156c7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156c80 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156c83 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156c86 je 0x12156d02 */
  if (C.zf) goto L_12156d02;
  /* 12156c88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156c8b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156c8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156c90 je 0x12156d02 */
  if (C.zf) goto L_12156d02;
  /* 12156c92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156c95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156c97 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12156c99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156c9b mov al, byte ptr [edx + 0x12181e41] */
  AL = (r8((uint32_t)(EDX + 0x12181e41)));
  /* 12156ca1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12156ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156ca6 je 0x12156cd7 */
  if (C.zf) goto L_12156cd7;
  /* 12156ca8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156cab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12156cad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156cb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156cb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12156cb5 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156cb9 je 0x12156cd7 */
  if (C.zf) goto L_12156cd7;
  /* 12156cbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156cbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156cc1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12156cc3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12156cc5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156cc8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ccb mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12156cce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156cd1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156cd4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12156cd7:;
  /* 12156cd7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156cda mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12156cdc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156cdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156ce2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12156ce4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156ce8 je 0x12156cfd */
  if (C.zf) goto L_12156cfd;
  /* 12156cea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156ced mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156cf0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12156cf2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12156cf4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156cf7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156cfa mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12156cfd:;
  /* 12156cfd jmp 0x12156c74 */
  goto L_12156c74;
L_12156d02:;
  /* 12156d02 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12156d07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d0a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d0d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12156d0f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156d13 je 0x12156d24 */
  if (C.zf) goto L_12156d24;
  /* 12156d15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156d18 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12156d1b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156d1e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d21 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12156d24:;
  /* 12156d24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156d27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156d2a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156d2d jne 0x12156d38 */
  if (!C.zf) goto L_12156d38;
  /* 12156d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156d32 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12156d38:;
  /* 12156d38 jmp 0x12156e0c */
  goto L_12156e0c;
L_12156d3d:;
  /* 12156d3d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12156d42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d45 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d48 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12156d4a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156d4e je 0x12156d63 */
  if (C.zf) goto L_12156d63;
  /* 12156d50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156d53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156d56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12156d58 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12156d5a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156d5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d60 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12156d63:;
  /* 12156d63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156d66 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12156d68 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12156d6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156d74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156d77 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12156d7d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156d7f mov dl, byte ptr [ecx + 0x12181e41] */
  DL = (r8((uint32_t)(ECX + 0x12181e41)));
  /* 12156d85 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12156d88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156d8a je 0x12156dbb */
  if (C.zf) goto L_12156dbb;
  /* 12156d8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12156d91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156d94 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156d97 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12156d99 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156d9d je 0x12156db2 */
  if (C.zf) goto L_12156db2;
  /* 12156d9f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156da2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156da5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12156da7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12156da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156dac add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156daf mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12156db2:;
  /* 12156db2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156db8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12156dbb:;
  /* 12156dbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156dbe and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156dc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156dc7 je 0x12156de7 */
  if (C.zf) goto L_12156de7;
  /* 12156dc9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156dcc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12156dd1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156dd3 je 0x12156de7 */
  if (C.zf) goto L_12156de7;
  /* 12156dd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156dd8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12156dde cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156de1 jne 0x12156d3d */
  if (!C.zf) goto L_12156d3d;
L_12156de7:;
  /* 12156de7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12156dea and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12156df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156df2 jne 0x12156dff */
  if (!C.zf) goto L_12156dff;
  /* 12156df4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156df7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156dfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156dfd jmp 0x12156e0c */
  goto L_12156e0c;
L_12156dff:;
  /* 12156dff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156e03 je 0x12156e0c */
  if (C.zf) goto L_12156e0c;
  /* 12156e05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156e08 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_12156e0c:;
  /* 12156e0c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12156e13:;
  /* 12156e13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e16 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156e19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156e1b je 0x12156e3e */
  if (C.zf) goto L_12156e3e;
L_12156e1d:;
  /* 12156e1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12156e23 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156e26 je 0x12156e33 */
  if (C.zf) goto L_12156e33;
  /* 12156e28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e2b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156e2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156e31 jne 0x12156e3e */
  if (!C.zf) goto L_12156e3e;
L_12156e33:;
  /* 12156e33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e36 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156e39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12156e3c jmp 0x12156e1d */
  goto L_12156e1d;
L_12156e3e:;
  /* 12156e3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e41 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156e44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156e46 jne 0x12156e4d */
  if (!C.zf) goto L_12156e4d;
  /* 12156e48 jmp 0x1215702b */
  goto L_1215702b;
L_12156e4d:;
  /* 12156e4d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156e51 je 0x12156e64 */
  if (C.zf) goto L_12156e64;
  /* 12156e53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156e56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156e59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12156e5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12156e5e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156e61 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12156e64:;
  /* 12156e64 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12156e67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12156e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156e6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12156e6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12156e71:;
  /* 12156e71 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12156e78 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12156e7f:;
  /* 12156e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e82 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156e85 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156e88 jne 0x12156e9e */
  if (!C.zf) goto L_12156e9e;
  /* 12156e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156e8d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156e90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12156e93 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156e96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156e99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12156e9c jmp 0x12156e7f */
  goto L_12156e7f;
L_12156e9e:;
  /* 12156e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ea1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156ea4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156ea7 jne 0x12156efa */
  if (!C.zf) goto L_12156efa;
  /* 12156ea9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156eac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156eae mov ecx, 2 */
  ECX = (0x2u);
  /* 12156eb3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12156eb5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12156eb7 jne 0x12156ef2 */
  if (!C.zf) goto L_12156ef2;
  /* 12156eb9 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156ebd je 0x12156edf */
  if (C.zf) goto L_12156edf;
  /* 12156ebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ec2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12156ec6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156ec9 jne 0x12156ed6 */
  if (!C.zf) goto L_12156ed6;
  /* 12156ecb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ece add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ed1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12156ed4 jmp 0x12156edd */
  goto L_12156edd;
L_12156ed6:;
  /* 12156ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12156edd:;
  /* 12156edd jmp 0x12156ee6 */
  goto L_12156ee6;
L_12156edf:;
  /* 12156edf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12156ee6:;
  /* 12156ee6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12156ee8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156eec sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 12156eef mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12156ef2:;
  /* 12156ef2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156ef5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12156ef7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12156efa:;
  /* 12156efa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156efd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12156f00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12156f03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12156f06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156f08 je 0x12156f2e */
  if (C.zf) goto L_12156f2e;
  /* 12156f0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f0e je 0x12156f1f */
  if (C.zf) goto L_12156f1f;
  /* 12156f10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156f13 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 12156f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156f19 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156f1c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_12156f1f:;
  /* 12156f1f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156f22 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12156f24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156f27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156f2a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12156f2c jmp 0x12156efa */
  goto L_12156efa;
L_12156f2e:;
  /* 12156f2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12156f34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12156f36 je 0x12156f54 */
  if (C.zf) goto L_12156f54;
  /* 12156f38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f3c jne 0x12156f59 */
  if (!C.zf) goto L_12156f59;
  /* 12156f3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f41 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12156f44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f47 je 0x12156f54 */
  if (C.zf) goto L_12156f54;
  /* 12156f49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f4c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12156f4f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f52 jne 0x12156f59 */
  if (!C.zf) goto L_12156f59;
L_12156f54:;
  /* 12156f54 jmp 0x12157004 */
  goto L_12157004;
L_12156f59:;
  /* 12156f59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f5d je 0x12156ff6 */
  if (C.zf) goto L_12156ff6;
  /* 12156f63 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12156f67 je 0x12156fbd */
  if (C.zf) goto L_12156fbd;
  /* 12156f69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156f6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12156f70 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12156f72 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 12156f78 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12156f7b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156f7d je 0x12156fa8 */
  if (C.zf) goto L_12156fa8;
  /* 12156f7f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f85 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12156f87 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12156f89 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156f8c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156f8f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 12156f92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156f95 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156f98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156f9b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156f9e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12156fa0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156fa3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156fa6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12156fa8:;
  /* 12156fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156fab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156fae mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12156fb0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12156fb2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12156fb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156fb8 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12156fbb jmp 0x12156fe9 */
  goto L_12156fe9;
L_12156fbd:;
  /* 12156fbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156fc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12156fc2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12156fc4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12156fc6 mov cl, byte ptr [eax + 0x12181e41] */
  CL = (r8((uint32_t)(EAX + 0x12181e41)));
  /* 12156fcc and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12156fcf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12156fd1 je 0x12156fe9 */
  if (C.zf) goto L_12156fe9;
  /* 12156fd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156fd6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156fd9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12156fdc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156fdf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12156fe1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156fe4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156fe7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12156fe9:;
  /* 12156fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156fec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12156fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12156ff4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12156ff6:;
  /* 12156ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12156ff9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12156ffc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12156fff jmp 0x12156e71 */
  goto L_12156e71;
L_12157004:;
  /* 12157004 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157008 je 0x12157019 */
  if (C.zf) goto L_12157019;
  /* 1215700a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1215700d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12157010 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157013 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157016 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_12157019:;
  /* 12157019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1215701c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1215701e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157021 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12157024 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12157026 jmp 0x12156e13 */
  goto L_12156e13;
L_1215702b:;
  /* 1215702b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215702f je 0x12157043 */
  if (C.zf) goto L_12157043;
  /* 12157031 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157034 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1215703a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215703d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157040 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12157043:;
  /* 12157043 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12157046 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12157048 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215704b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215704e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12157050 mov esp, ebp */
  ESP = (EBP);
  /* 12157052 pop ebp */
  EBP = (pop32());
  /* 12157053 ret  */
  ESPCHK(0x12156c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007060 @ 0x12157060 (537 bytes, 173 insns) */
void f_12157060(void) {
  FTRACE(0x12157060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157060 push ebp */
  push32((uint32_t)(EBP));
  /* 12157061 mov ebp, esp */
  EBP = (ESP);
  /* 12157063 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157066 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1215706d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12157074 cmp dword ptr [0x12180720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215707b jne 0x121570ba */
  if (!C.zf) goto L_121570ba;
  /* 1215707d call dword ptr [0x121833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833c0))), 0x12157083u);
  /* 12157083 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12157086 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215708a je 0x12157098 */
  if (C.zf) goto L_12157098;
  /* 1215708c mov dword ptr [0x12180720], 1 */
  w32((uint32_t)(0x12180720), (0x1u));
  /* 12157096 jmp 0x121570ba */
  goto L_121570ba;
L_12157098:;
  /* 12157098 call dword ptr [0x121833bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833bc))), 0x1215709eu);
  /* 1215709e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121570a1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121570a5 je 0x121570b3 */
  if (C.zf) goto L_121570b3;
  /* 121570a7 mov dword ptr [0x12180720], 2 */
  w32((uint32_t)(0x12180720), (0x2u));
  /* 121570b1 jmp 0x121570ba */
  goto L_121570ba;
L_121570b3:;
  /* 121570b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121570b5 jmp 0x12157275 */
  goto L_12157275;
L_121570ba:;
  /* 121570ba cmp dword ptr [0x12180720], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12180720))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121570c1 jne 0x121571be */
  if (!C.zf) goto L_121571be;
  /* 121570c7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121570cb jne 0x121570e3 */
  if (!C.zf) goto L_121570e3;
  /* 121570cd call dword ptr [0x121833c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833c0))), 0x121570d3u);
  /* 121570d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 121570d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121570da jne 0x121570e3 */
  if (!C.zf) goto L_121570e3;
  /* 121570dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121570de jmp 0x12157275 */
  goto L_12157275;
L_121570e3:;
  /* 121570e3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 121570e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121570e9:;
  /* 121570e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121570ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121570ee mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 121570f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121570f3 je 0x12157115 */
  if (C.zf) goto L_12157115;
  /* 121570f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121570f8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121570fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121570fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157101 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157103 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12157106 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12157108 jne 0x12157113 */
  if (!C.zf) goto L_12157113;
  /* 1215710a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215710d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157110 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12157113:;
  /* 12157113 jmp 0x121570e9 */
  goto L_121570e9;
L_12157115:;
  /* 12157115 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157118 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215711b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1215711d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12157123 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157125 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157127 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215712b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215712e push edx */
  push32((uint32_t)(EDX));
  /* 1215712f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12157132 push eax */
  push32((uint32_t)(EAX));
  /* 12157133 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157135 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157137 call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x1215713du);
  /* 1215713d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12157140 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157144 je 0x12157164 */
  if (C.zf) goto L_12157164;
  /* 12157146 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 12157148 push 0x1217bca4 */
  push32((uint32_t)(0x1217bca4u));
  /* 1215714d push 2 */
  push32((uint32_t)(0x2u));
  /* 1215714f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12157152 push ecx */
  push32((uint32_t)(ECX));
  /* 12157153 call 0x12154a90 */
  push32(0x12157158u); f_12154a90();
  /* 12157158 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215715b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1215715e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157162 jne 0x12157175 */
  if (!C.zf) goto L_12157175;
L_12157164:;
  /* 12157164 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12157167 push edx */
  push32((uint32_t)(EDX));
  /* 12157168 call dword ptr [0x121833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b4))), 0x1215716eu);
  /* 1215716e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12157170 jmp 0x12157275 */
  goto L_12157275;
L_12157175:;
  /* 12157175 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157177 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157179 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215717c push eax */
  push32((uint32_t)(EAX));
  /* 1215717d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157180 push ecx */
  push32((uint32_t)(ECX));
  /* 12157181 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157184 push edx */
  push32((uint32_t)(EDX));
  /* 12157185 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12157188 push eax */
  push32((uint32_t)(EAX));
  /* 12157189 push 0 */
  push32((uint32_t)(0x0u));
  /* 1215718b push 0 */
  push32((uint32_t)(0x0u));
  /* 1215718d call dword ptr [0x121833b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b8))), 0x12157193u);
  /* 12157193 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12157195 jne 0x121571ac */
  if (!C.zf) goto L_121571ac;
  /* 12157197 push 2 */
  push32((uint32_t)(0x2u));
  /* 12157199 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1215719c push ecx */
  push32((uint32_t)(ECX));
  /* 1215719d call 0x12155520 */
  push32(0x121571a2u); f_12155520();
  /* 121571a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121571a5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_121571ac:;
  /* 121571ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 121571af push edx */
  push32((uint32_t)(EDX));
  /* 121571b0 call dword ptr [0x121833b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b4))), 0x121571b6u);
  /* 121571b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121571b9 jmp 0x12157275 */
  goto L_12157275;
L_121571be:;
  /* 121571be cmp dword ptr [0x12180720], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12180720))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121571c5 jne 0x12157273 */
  if (!C.zf) goto L_12157273;
  /* 121571cb cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121571cf jne 0x121571e7 */
  if (!C.zf) goto L_121571e7;
  /* 121571d1 call dword ptr [0x121833bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833bc))), 0x121571d7u);
  /* 121571d7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 121571da cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121571de jne 0x121571e7 */
  if (!C.zf) goto L_121571e7;
  /* 121571e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121571e2 jmp 0x12157275 */
  goto L_12157275;
L_121571e7:;
  /* 121571e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121571ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_121571ed:;
  /* 121571ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 121571f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 121571f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 121571f5 je 0x12157215 */
  if (C.zf) goto L_12157215;
  /* 121571f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121571fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121571fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157200 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157203 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12157206 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12157208 jne 0x12157213 */
  if (!C.zf) goto L_12157213;
  /* 1215720a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215720d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157210 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12157213:;
  /* 12157213 jmp 0x121571ed */
  goto L_121571ed;
L_12157215:;
  /* 12157215 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157218 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215721b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215721e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12157221 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 12157226 push 0x1217bca4 */
  push32((uint32_t)(0x1217bca4u));
  /* 1215722b push 2 */
  push32((uint32_t)(0x2u));
  /* 1215722d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12157230 push edx */
  push32((uint32_t)(EDX));
  /* 12157231 call 0x12154a90 */
  push32(0x12157236u); f_12154a90();
  /* 12157236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157239 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1215723c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157240 jne 0x12157250 */
  if (!C.zf) goto L_12157250;
  /* 12157242 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157245 push eax */
  push32((uint32_t)(EAX));
  /* 12157246 call dword ptr [0x121833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a4))), 0x1215724cu);
  /* 1215724c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215724e jmp 0x12157275 */
  goto L_12157275;
L_12157250:;
  /* 12157250 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12157253 push ecx */
  push32((uint32_t)(ECX));
  /* 12157254 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157257 push edx */
  push32((uint32_t)(EDX));
  /* 12157258 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215725b push eax */
  push32((uint32_t)(EAX));
  /* 1215725c call 0x1215b370 */
  push32(0x12157261u); f_1215b370();
  /* 12157261 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157264 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157267 push ecx */
  push32((uint32_t)(ECX));
  /* 12157268 call dword ptr [0x121833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833a4))), 0x1215726eu);
  /* 1215726e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157271 jmp 0x12157275 */
  goto L_12157275;
L_12157273:;
  /* 12157273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12157275:;
  /* 12157275 mov esp, ebp */
  ESP = (EBP);
  /* 12157277 pop ebp */
  EBP = (pop32());
  /* 12157278 ret  */
  ESPCHK(0x12157060u, _esp0);
  ESP += 4; return;
}

/* FUN_10007280 @ 0x12157280 (77 bytes, 25 insns) */
void f_12157280(void) {
  FTRACE(0x12157280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157280 push ebp */
  push32((uint32_t)(EBP));
  /* 12157281 mov ebp, esp */
  EBP = (ESP);
  /* 12157283 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157285 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1215728a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215728c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157290 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 12157293 push eax */
  push32((uint32_t)(EAX));
  /* 12157294 call dword ptr [0x12183338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183338))), 0x1215729au);
  /* 1215729a mov dword ptr [0x12181f6c], eax */
  w32((uint32_t)(0x12181f6c), (EAX));
  /* 1215729f cmp dword ptr [0x12181f6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12181f6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121572a6 jne 0x121572ac */
  if (!C.zf) goto L_121572ac;
  /* 121572a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121572aa jmp 0x121572cb */
  goto L_121572cb;
L_121572ac:;
  /* 121572ac call 0x12158d30 */
  push32(0x121572b1u); f_12158d30();
  /* 121572b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121572b3 jne 0x121572c6 */
  if (!C.zf) goto L_121572c6;
  /* 121572b5 mov ecx, dword ptr [0x12181f6c] */
  ECX = (r32((uint32_t)(0x12181f6c)));
  /* 121572bb push ecx */
  push32((uint32_t)(ECX));
  /* 121572bc call dword ptr [0x1218333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218333c))), 0x121572c2u);
  /* 121572c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121572c4 jmp 0x121572cb */
  goto L_121572cb;
L_121572c6:;
  /* 121572c6 mov eax, 1 */
  EAX = (0x1u);
L_121572cb:;
  /* 121572cb pop ebp */
  EBP = (pop32());
  /* 121572cc ret  */
  ESPCHK(0x12157280u, _esp0);
  ESP += 4; return;
}

/* FUN_100072d0 @ 0x121572d0 (156 bytes, 48 insns) */
void f_121572d0(void) {
  FTRACE(0x121572d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121572d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121572d1 mov ebp, esp */
  EBP = (ESP);
  /* 121572d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121572d6 mov eax, dword ptr [0x12181f68] */
  EAX = (r32((uint32_t)(0x12181f68)));
  /* 121572db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121572de mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121572e5 jmp 0x121572f0 */
  goto L_121572f0;
L_121572e7:;
  /* 121572e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121572ea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121572ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_121572f0:;
  /* 121572f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121572f3 cmp edx, dword ptr [0x12181f64] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12181f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121572f9 jge 0x12157346 */
  if ((C.sf==C.of)) goto L_12157346;
  /* 121572fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12157300 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12157305 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157308 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1215730b push ecx */
  push32((uint32_t)(ECX));
  /* 1215730c call dword ptr [0x12183330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183330))), 0x12157312u);
  /* 12157312 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12157317 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157319 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215731c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1215731f push eax */
  push32((uint32_t)(EAX));
  /* 12157320 call dword ptr [0x12183330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183330))), 0x12157326u);
  /* 12157326 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157329 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1215732c push edx */
  push32((uint32_t)(EDX));
  /* 1215732d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215732f mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12157334 push eax */
  push32((uint32_t)(EAX));
  /* 12157335 call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x1215733bu);
  /* 1215733b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215733e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12157344 jmp 0x121572e7 */
  goto L_121572e7;
L_12157346:;
  /* 12157346 mov edx, dword ptr [0x12181f68] */
  EDX = (r32((uint32_t)(0x12181f68)));
  /* 1215734c push edx */
  push32((uint32_t)(EDX));
  /* 1215734d push 0 */
  push32((uint32_t)(0x0u));
  /* 1215734f mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12157354 push eax */
  push32((uint32_t)(EAX));
  /* 12157355 call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x1215735bu);
  /* 1215735b mov ecx, dword ptr [0x12181f6c] */
  ECX = (r32((uint32_t)(0x12181f6c)));
  /* 12157361 push ecx */
  push32((uint32_t)(ECX));
  /* 12157362 call dword ptr [0x1218333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218333c))), 0x12157368u);
  /* 12157368 mov esp, ebp */
  ESP = (EBP);
  /* 1215736a pop ebp */
  EBP = (pop32());
  /* 1215736b ret  */
  ESPCHK(0x121572d0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x12157370 (73 bytes, 19 insns) */
void f_12157370(void) {
  FTRACE(0x12157370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157370 push ebp */
  push32((uint32_t)(EBP));
  /* 12157371 mov ebp, esp */
  EBP = (ESP);
  /* 12157373 cmp dword ptr [0x121805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215737a je 0x1215738e */
  if (C.zf) goto L_1215738e;
  /* 1215737c cmp dword ptr [0x121805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157383 jne 0x121573b7 */
  if (!C.zf) goto L_121573b7;
  /* 12157385 cmp dword ptr [0x121805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215738c jne 0x121573b7 */
  if (!C.zf) goto L_121573b7;
L_1215738e:;
  /* 1215738e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 12157393 call 0x121573c0 */
  push32(0x12157398u); f_121573c0();
  /* 12157398 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215739b cmp dword ptr [0x12180724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121573a2 je 0x121573aa */
  if (C.zf) goto L_121573aa;
  /* 121573a4 call dword ptr [0x12180724] */
  call_ind((uint32_t)(r32((uint32_t)(0x12180724))), 0x121573aau);
L_121573aa:;
  /* 121573aa push 0xff */
  push32((uint32_t)(0xffu));
  /* 121573af call 0x121573c0 */
  push32(0x121573b4u); f_121573c0();
  /* 121573b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121573b7:;
  /* 121573b7 pop ebp */
  EBP = (pop32());
  /* 121573b8 ret  */
  ESPCHK(0x12157370u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x121573c0 (447 bytes, 131 insns) */
void f_121573c0(void) {
  FTRACE(0x121573c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121573c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121573c1 mov ebp, esp */
  EBP = (ESP);
  /* 121573c3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121573c9 push ebx */
  push32((uint32_t)(EBX));
  /* 121573ca push esi */
  push32((uint32_t)(ESI));
  /* 121573cb push edi */
  push32((uint32_t)(EDI));
  /* 121573cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 121573d3 jmp 0x121573de */
  goto L_121573de;
L_121573d5:;
  /* 121573d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121573d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121573db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_121573de:;
  /* 121573de cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121573e2 jae 0x121573f7 */
  if (!C.cf) goto L_121573f7;
  /* 121573e4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121573e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121573ea cmp edx, dword ptr [ecx*8 + 0x1217eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1217eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121573f1 jne 0x121573f5 */
  if (!C.zf) goto L_121573f5;
  /* 121573f3 jmp 0x121573f7 */
  goto L_121573f7;
L_121573f5:;
  /* 121573f5 jmp 0x121573d5 */
  goto L_121573d5;
L_121573f7:;
  /* 121573f7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121573fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121573fd cmp ecx, dword ptr [eax*8 + 0x1217eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1217eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157404 jne 0x12157578 */
  if (!C.zf) goto L_12157578;
  /* 1215740a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157411 je 0x12157434 */
  if (C.zf) goto L_12157434;
  /* 12157413 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157416 mov eax, dword ptr [edx*8 + 0x1217eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1217eab4)));
  /* 1215741d push eax */
  push32((uint32_t)(EAX));
  /* 1215741e push 0 */
  push32((uint32_t)(0x0u));
  /* 12157420 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157422 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157424 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157426 call 0x12153b50 */
  push32(0x1215742bu); f_12153b50();
  /* 1215742b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215742e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157431 jne 0x12157434 */
  if (!C.zf) goto L_12157434;
  /* 12157433 int3  */
  x86_unimpl("int3 @ 0x12157433");
L_12157434:;
  /* 12157434 cmp dword ptr [0x121805b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215743b je 0x1215744f */
  if (C.zf) goto L_1215744f;
  /* 1215743d cmp dword ptr [0x121805b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121805b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157444 jne 0x12157488 */
  if (!C.zf) goto L_12157488;
  /* 12157446 cmp dword ptr [0x121805b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121805b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215744d jne 0x12157488 */
  if (!C.zf) goto L_12157488;
L_1215744f:;
  /* 1215744f push 0 */
  push32((uint32_t)(0x0u));
  /* 12157451 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12157454 push ecx */
  push32((uint32_t)(ECX));
  /* 12157455 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157458 mov eax, dword ptr [edx*8 + 0x1217eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1217eab4)));
  /* 1215745f push eax */
  push32((uint32_t)(EAX));
  /* 12157460 call 0x121578c0 */
  push32(0x12157465u); f_121578c0();
  /* 12157465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157468 push eax */
  push32((uint32_t)(EAX));
  /* 12157469 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215746c mov edx, dword ptr [ecx*8 + 0x1217eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1217eab4)));
  /* 12157473 push edx */
  push32((uint32_t)(EDX));
  /* 12157474 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12157476 call dword ptr [0x1218334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218334c))), 0x1215747cu);
  /* 1215747c push eax */
  push32((uint32_t)(EAX));
  /* 1215747d call dword ptr [0x12183350] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183350))), 0x12157483u);
  /* 12157483 jmp 0x12157578 */
  goto L_12157578;
L_12157488:;
  /* 12157488 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215748f je 0x12157578 */
  if (C.zf) goto L_12157578;
  /* 12157495 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1215749a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 121574a0 push eax */
  push32((uint32_t)(EAX));
  /* 121574a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 121574a3 call dword ptr [0x12183368] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183368))), 0x121574a9u);
  /* 121574a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121574ab jne 0x121574c1 */
  if (!C.zf) goto L_121574c1;
  /* 121574ad push 0x1217b50c */
  push32((uint32_t)(0x1217b50cu));
  /* 121574b2 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 121574b8 push ecx */
  push32((uint32_t)(ECX));
  /* 121574b9 call 0x12157a40 */
  push32(0x121574beu); f_12157a40();
  /* 121574be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121574c1:;
  /* 121574c1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 121574c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 121574ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 121574cd push eax */
  push32((uint32_t)(EAX));
  /* 121574ce call 0x121578c0 */
  push32(0x121574d3u); f_121578c0();
  /* 121574d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121574d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121574d9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121574dc jbe 0x1215750a */
  if ((C.cf||C.zf)) goto L_1215750a;
  /* 121574de lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 121574e4 push ecx */
  push32((uint32_t)(ECX));
  /* 121574e5 call 0x121578c0 */
  push32(0x121574eau); f_121578c0();
  /* 121574ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121574ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 121574f0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 121574f4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121574f7 push 3 */
  push32((uint32_t)(0x3u));
  /* 121574f9 push 0x1217b508 */
  push32((uint32_t)(0x1217b508u));
  /* 121574fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157501 push ecx */
  push32((uint32_t)(ECX));
  /* 12157502 call 0x121582b0 */
  push32(0x12157507u); f_121582b0();
  /* 12157507 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215750a:;
  /* 1215750a push 0x1217bf60 */
  push32((uint32_t)(0x1217bf60u));
  /* 1215750f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12157515 push edx */
  push32((uint32_t)(EDX));
  /* 12157516 call 0x12157a40 */
  push32(0x1215751bu); f_12157a40();
  /* 1215751b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215751e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157521 push eax */
  push32((uint32_t)(EAX));
  /* 12157522 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 12157528 push ecx */
  push32((uint32_t)(ECX));
  /* 12157529 call 0x12157a50 */
  push32(0x1215752eu); f_12157a50();
  /* 1215752e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157531 push 0x1217b480 */
  push32((uint32_t)(0x1217b480u));
  /* 12157536 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 1215753c push edx */
  push32((uint32_t)(EDX));
  /* 1215753d call 0x12157a50 */
  push32(0x12157542u); f_12157a50();
  /* 12157542 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157545 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157548 mov ecx, dword ptr [eax*8 + 0x1217eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1217eab4)));
  /* 1215754f push ecx */
  push32((uint32_t)(ECX));
  /* 12157550 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 12157556 push edx */
  push32((uint32_t)(EDX));
  /* 12157557 call 0x12157a50 */
  push32(0x1215755cu); f_12157a50();
  /* 1215755c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215755f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 12157564 push 0x1217bf38 */
  push32((uint32_t)(0x1217bf38u));
  /* 12157569 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1215756f push eax */
  push32((uint32_t)(EAX));
  /* 12157570 call 0x121581f0 */
  push32(0x12157575u); f_121581f0();
  /* 12157575 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12157578:;
  /* 12157578 pop edi */
  EDI = (pop32());
  /* 12157579 pop esi */
  ESI = (pop32());
  /* 1215757a pop ebx */
  EBX = (pop32());
  /* 1215757b mov esp, ebp */
  ESP = (EBP);
  /* 1215757d pop ebp */
  EBP = (pop32());
  /* 1215757e ret  */
  ESPCHK(0x121573c0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x12157580 (80 bytes, 27 insns) */
void f_12157580(void) {
  FTRACE(0x12157580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157580 push ebp */
  push32((uint32_t)(EBP));
  /* 12157581 mov ebp, esp */
  EBP = (ESP);
  /* 12157583 push ecx */
  push32((uint32_t)(ECX));
  /* 12157584 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1215758b jmp 0x12157596 */
  goto L_12157596;
L_1215758d:;
  /* 1215758d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157590 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157593 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12157596:;
  /* 12157596 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215759a jae 0x121575af */
  if (!C.cf) goto L_121575af;
  /* 1215759c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215759f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121575a2 cmp edx, dword ptr [ecx*8 + 0x1217eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1217eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121575a9 jne 0x121575ad */
  if (!C.zf) goto L_121575ad;
  /* 121575ab jmp 0x121575af */
  goto L_121575af;
L_121575ad:;
  /* 121575ad jmp 0x1215758d */
  goto L_1215758d;
L_121575af:;
  /* 121575af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121575b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121575b5 cmp ecx, dword ptr [eax*8 + 0x1217eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1217eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121575bc jne 0x121575ca */
  if (!C.zf) goto L_121575ca;
  /* 121575be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121575c1 mov eax, dword ptr [edx*8 + 0x1217eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1217eab4)));
  /* 121575c8 jmp 0x121575cc */
  goto L_121575cc;
L_121575ca:;
  /* 121575ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121575cc:;
  /* 121575cc mov esp, ebp */
  ESP = (EBP);
  /* 121575ce pop ebp */
  EBP = (pop32());
  /* 121575cf ret  */
  ESPCHK(0x12157580u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x121575d0 (66 bytes, 28 insns) */
void f_121575d0(void) {
  FTRACE(0x121575d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121575d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121575d1 mov ebp, esp */
  EBP = (ESP);
  /* 121575d3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121575d7 jne 0x121575f7 */
  if (!C.zf) goto L_121575f7;
  /* 121575d9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121575dd jge 0x121575f7 */
  if ((C.sf==C.of)) goto L_121575f7;
  /* 121575df push 1 */
  push32((uint32_t)(0x1u));
  /* 121575e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121575e4 push eax */
  push32((uint32_t)(EAX));
  /* 121575e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121575e8 push ecx */
  push32((uint32_t)(ECX));
  /* 121575e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121575ec push edx */
  push32((uint32_t)(EDX));
  /* 121575ed call 0x12157620 */
  push32(0x121575f2u); f_12157620();
  /* 121575f2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121575f5 jmp 0x1215760d */
  goto L_1215760d;
L_121575f7:;
  /* 121575f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 121575f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121575fc push eax */
  push32((uint32_t)(EAX));
  /* 121575fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157600 push ecx */
  push32((uint32_t)(ECX));
  /* 12157601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157604 push edx */
  push32((uint32_t)(EDX));
  /* 12157605 call 0x12157620 */
  push32(0x1215760au); f_12157620();
  /* 1215760a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215760d:;
  /* 1215760d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157610 pop ebp */
  EBP = (pop32());
  /* 12157611 ret  */
  ESPCHK(0x121575d0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x12157620 (194 bytes, 71 insns) */
void f_12157620(void) {
  FTRACE(0x12157620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157620 push ebp */
  push32((uint32_t)(EBP));
  /* 12157621 mov ebp, esp */
  EBP = (ESP);
  /* 12157623 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157626 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157629 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215762c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157630 je 0x12157649 */
  if (C.zf) goto L_12157649;
  /* 12157632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157635 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 12157638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215763b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215763e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12157641 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157644 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12157646 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12157649:;
  /* 12157649 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215764c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1215764f:;
  /* 1215764f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157652 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157654 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12157657 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1215765a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215765d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215765f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12157662 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12157665 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157669 jbe 0x12157681 */
  if ((C.cf||C.zf)) goto L_12157681;
  /* 1215766b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215766e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157674 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12157676 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157679 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215767c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1215767f jmp 0x12157695 */
  goto L_12157695;
L_12157681:;
  /* 12157681 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157684 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157687 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215768a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1215768c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215768f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157692 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12157695:;
  /* 12157695 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157699 ja 0x1215764f */
  if ((!C.cf&&!C.zf)) goto L_1215764f;
  /* 1215769b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215769e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 121576a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121576a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121576a7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_121576aa:;
  /* 121576aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121576ad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121576af mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 121576b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121576b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121576b8 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 121576ba mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 121576bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121576bf mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 121576c2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 121576c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121576c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121576ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121576cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121576d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121576d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 121576d6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121576d9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121576dc jb 0x121576aa */
  if (C.cf) goto L_121576aa;
  /* 121576de mov esp, ebp */
  ESP = (EBP);
  /* 121576e0 pop ebp */
  EBP = (pop32());
  /* 121576e1 ret  */
  ESPCHK(0x12157620u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x121576f0 (63 bytes, 24 insns) */
void f_121576f0(void) {
  FTRACE(0x121576f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121576f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121576f1 mov ebp, esp */
  EBP = (ESP);
  /* 121576f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121576f4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121576f8 jne 0x12157709 */
  if (!C.zf) goto L_12157709;
  /* 121576fa cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121576fe jge 0x12157709 */
  if ((C.sf==C.of)) goto L_12157709;
  /* 12157700 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12157707 jmp 0x12157710 */
  goto L_12157710;
L_12157709:;
  /* 12157709 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12157710:;
  /* 12157710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157713 push eax */
  push32((uint32_t)(EAX));
  /* 12157714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157717 push ecx */
  push32((uint32_t)(ECX));
  /* 12157718 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215771b push edx */
  push32((uint32_t)(EDX));
  /* 1215771c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215771f push eax */
  push32((uint32_t)(EAX));
  /* 12157720 call 0x12157620 */
  push32(0x12157725u); f_12157620();
  /* 12157725 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157728 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215772b mov esp, ebp */
  ESP = (EBP);
  /* 1215772d pop ebp */
  EBP = (pop32());
  /* 1215772e ret  */
  ESPCHK(0x121576f0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x12157730 (30 bytes, 14 insns) */
void f_12157730(void) {
  FTRACE(0x12157730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157730 push ebp */
  push32((uint32_t)(EBP));
  /* 12157731 mov ebp, esp */
  EBP = (ESP);
  /* 12157733 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157735 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157738 push eax */
  push32((uint32_t)(EAX));
  /* 12157739 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215773c push ecx */
  push32((uint32_t)(ECX));
  /* 1215773d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157740 push edx */
  push32((uint32_t)(EDX));
  /* 12157741 call 0x12157620 */
  push32(0x12157746u); f_12157620();
  /* 12157746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157749 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215774c pop ebp */
  EBP = (pop32());
  /* 1215774d ret  */
  ESPCHK(0x12157730u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x12157750 (72 bytes, 28 insns) */
void f_12157750(void) {
  FTRACE(0x12157750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157750 push ebp */
  push32((uint32_t)(EBP));
  /* 12157751 mov ebp, esp */
  EBP = (ESP);
  /* 12157753 push ecx */
  push32((uint32_t)(ECX));
  /* 12157754 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157758 jne 0x12157771 */
  if (!C.zf) goto L_12157771;
  /* 1215775a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215775e jg 0x12157771 */
  if ((!C.zf&&C.sf==C.of)) goto L_12157771;
  /* 12157760 jl 0x12157768 */
  if ((C.sf!=C.of)) goto L_12157768;
  /* 12157762 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157766 jae 0x12157771 */
  if (!C.cf) goto L_12157771;
L_12157768:;
  /* 12157768 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1215776f jmp 0x12157778 */
  goto L_12157778;
L_12157771:;
  /* 12157771 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12157778:;
  /* 12157778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215777b push eax */
  push32((uint32_t)(EAX));
  /* 1215777c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1215777f push ecx */
  push32((uint32_t)(ECX));
  /* 12157780 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157783 push edx */
  push32((uint32_t)(EDX));
  /* 12157784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157787 push eax */
  push32((uint32_t)(EAX));
  /* 12157788 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215778b push ecx */
  push32((uint32_t)(ECX));
  /* 1215778c call 0x121577a0 */
  push32(0x12157791u); f_121577a0();
  /* 12157791 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157794 mov esp, ebp */
  ESP = (EBP);
  /* 12157796 pop ebp */
  EBP = (pop32());
  /* 12157797 ret  */
  ESPCHK(0x12157750u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x121577a0 (242 bytes, 91 insns) */
void f_121577a0(void) {
  FTRACE(0x121577a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121577a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121577a1 mov ebp, esp */
  EBP = (ESP);
  /* 121577a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121577a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121577a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121577ac cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121577b0 je 0x121577d4 */
  if (C.zf) goto L_121577d4;
  /* 121577b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121577b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 121577b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121577bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121577be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 121577c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121577c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 121577c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121577c9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121577cc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 121577ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 121577d1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_121577d4:;
  /* 121577d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121577d7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_121577da:;
  /* 121577da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121577dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 121577df push ecx */
  push32((uint32_t)(ECX));
  /* 121577e0 push eax */
  push32((uint32_t)(EAX));
  /* 121577e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121577e4 push edx */
  push32((uint32_t)(EDX));
  /* 121577e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121577e8 push eax */
  push32((uint32_t)(EAX));
  /* 121577e9 call 0x1215b720 */
  push32(0x121577eeu); f_1215b720();
  /* 121577ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 121577f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 121577f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 121577f6 push edx */
  push32((uint32_t)(EDX));
  /* 121577f7 push ecx */
  push32((uint32_t)(ECX));
  /* 121577f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121577fb push eax */
  push32((uint32_t)(EAX));
  /* 121577fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121577ff push ecx */
  push32((uint32_t)(ECX));
  /* 12157800 call 0x1215b6b0 */
  push32(0x12157805u); f_1215b6b0();
  /* 12157805 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12157808 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 1215780b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215780f jbe 0x12157827 */
  if ((C.cf||C.zf)) goto L_12157827;
  /* 12157811 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157814 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157817 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215781a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1215781c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215781f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157822 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12157825 jmp 0x1215783b */
  goto L_1215783b;
L_12157827:;
  /* 12157827 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1215782a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215782d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157830 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12157832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157835 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157838 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1215783b:;
  /* 1215783b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215783f ja 0x121577da */
  if ((!C.cf&&!C.zf)) goto L_121577da;
  /* 12157841 jb 0x12157849 */
  if (C.cf) goto L_12157849;
  /* 12157843 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157847 ja 0x121577da */
  if ((!C.cf&&!C.zf)) goto L_121577da;
L_12157849:;
  /* 12157849 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215784c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1215784f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157852 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157855 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12157858:;
  /* 12157858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215785b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1215785d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 12157860 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157863 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157866 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12157868 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1215786a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215786d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 12157870 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12157872 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157875 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157878 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1215787b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215787e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157881 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12157884 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157887 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215788a jb 0x12157858 */
  if (C.cf) goto L_12157858;
  /* 1215788c mov esp, ebp */
  ESP = (EBP);
  /* 1215788e pop ebp */
  EBP = (pop32());
  /* 1215788f ret 0x14 */
  ESPCHK(0x121577a0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x121578a0 (31 bytes, 15 insns) */
void f_121578a0(void) {
  FTRACE(0x121578a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121578a0 push ebp */
  push32((uint32_t)(EBP));
  /* 121578a1 mov ebp, esp */
  EBP = (ESP);
  /* 121578a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 121578a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 121578a8 push eax */
  push32((uint32_t)(EAX));
  /* 121578a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 121578ac push ecx */
  push32((uint32_t)(ECX));
  /* 121578ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121578b0 push edx */
  push32((uint32_t)(EDX));
  /* 121578b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121578b4 push eax */
  push32((uint32_t)(EAX));
  /* 121578b5 call 0x121577a0 */
  push32(0x121578bau); f_121577a0();
  /* 121578ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121578bd pop ebp */
  EBP = (pop32());
  /* 121578be ret  */
  ESPCHK(0x121578a0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x121578c0 (123 bytes, 44 insns) */
void f_121578c0(void) {
  FTRACE(0x121578c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121578c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 121578c4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 121578ca je 0x121578e0 */
  if (C.zf) goto L_121578e0;
L_121578cc:;
  /* 121578cc mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 121578ce inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 121578cf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121578d1 je 0x12157913 */
  if (C.zf) goto L_12157913;
  /* 121578d3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 121578d9 jne 0x121578cc */
  if (!C.zf) goto L_121578cc;
  /* 121578db add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_121578e0:;
  /* 121578e0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 121578e2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 121578e7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121578e9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121578ec xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 121578ee add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121578f1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 121578f6 je 0x121578e0 */
  if (C.zf) goto L_121578e0;
  /* 121578f8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 121578fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121578fd je 0x12157931 */
  if (C.zf) goto L_12157931;
  /* 121578ff test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12157901 je 0x12157927 */
  if (C.zf) goto L_12157927;
  /* 12157903 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12157908 je 0x1215791d */
  if (C.zf) goto L_1215791d;
  /* 1215790a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1215790f je 0x12157913 */
  if (C.zf) goto L_12157913;
  /* 12157911 jmp 0x121578e0 */
  goto L_121578e0;
L_12157913:;
  /* 12157913 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 12157916 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1215791a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215791c ret  */
  ESPCHK(0x121578c0u, _esp0);
  ESP += 4; return;
L_1215791d:;
  /* 1215791d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 12157920 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12157924 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157926 ret  */
  ESPCHK(0x121578c0u, _esp0);
  ESP += 4; return;
L_12157927:;
  /* 12157927 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1215792a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1215792e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157930 ret  */
  ESPCHK(0x121578c0u, _esp0);
  ESP += 4; return;
L_12157931:;
  /* 12157931 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 12157934 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12157938 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1215793a ret  */
  ESPCHK(0x121578c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007940 @ 0x12157940 (249 bytes, 93 insns) */
void f_12157940(void) {
  FTRACE(0x12157940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157940 push ebp */
  push32((uint32_t)(EBP));
  /* 12157941 mov ebp, esp */
  EBP = (ESP);
  /* 12157943 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157946 push ebx */
  push32((uint32_t)(EBX));
  /* 12157947 push esi */
  push32((uint32_t)(ESI));
  /* 12157948 push edi */
  push32((uint32_t)(EDI));
  /* 12157949 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1215794c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1215794f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 12157952 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12157955:;
  /* 12157955 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157959 jne 0x12157979 */
  if (!C.zf) goto L_12157979;
  /* 1215795b push 0x1217bf98 */
  push32((uint32_t)(0x1217bf98u));
  /* 12157960 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157962 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12157964 push 0x1217bf8c */
  push32((uint32_t)(0x1217bf8cu));
  /* 12157969 push 2 */
  push32((uint32_t)(0x2u));
  /* 1215796b call 0x12153b50 */
  push32(0x12157970u); f_12153b50();
  /* 12157970 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157973 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157976 jne 0x12157979 */
  if (!C.zf) goto L_12157979;
  /* 12157978 int3  */
  x86_unimpl("int3 @ 0x12157978");
L_12157979:;
  /* 12157979 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215797b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215797d jne 0x12157955 */
  if (!C.zf) goto L_12157955;
L_1215797f:;
  /* 1215797f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157983 jne 0x121579a3 */
  if (!C.zf) goto L_121579a3;
  /* 12157985 push 0x1217bf7c */
  push32((uint32_t)(0x1217bf7cu));
  /* 1215798a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215798c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1215798e push 0x1217bf8c */
  push32((uint32_t)(0x1217bf8cu));
  /* 12157993 push 2 */
  push32((uint32_t)(0x2u));
  /* 12157995 call 0x12153b50 */
  push32(0x1215799au); f_12153b50();
  /* 1215799a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215799d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121579a0 jne 0x121579a3 */
  if (!C.zf) goto L_121579a3;
  /* 121579a2 int3  */
  x86_unimpl("int3 @ 0x121579a2");
L_121579a3:;
  /* 121579a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121579a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121579a7 jne 0x1215797f */
  if (!C.zf) goto L_1215797f;
  /* 121579a9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579ac mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 121579b3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121579b9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 121579bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121579c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 121579c4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121579ca mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 121579cd mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 121579d0 push edx */
  push32((uint32_t)(EDX));
  /* 121579d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 121579d4 push eax */
  push32((uint32_t)(EAX));
  /* 121579d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579d8 push ecx */
  push32((uint32_t)(ECX));
  /* 121579d9 call 0x1215ba20 */
  push32(0x121579deu); f_1215ba20();
  /* 121579de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121579e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 121579e4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579e7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121579ea sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 121579ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579f0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 121579f3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579f6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121579fa jl 0x12157a1e */
  if ((C.sf!=C.of)) goto L_12157a1e;
  /* 121579fc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 121579ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12157a01 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12157a04 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157a06 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12157a0c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12157a0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157a12 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12157a14 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157a17 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157a1a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12157a1c jmp 0x12157a2f */
  goto L_12157a2f;
L_12157a1e:;
  /* 12157a1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157a21 push eax */
  push32((uint32_t)(EAX));
  /* 12157a22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157a24 call 0x1215b7a0 */
  push32(0x12157a29u); f_1215b7a0();
  /* 12157a29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157a2c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12157a2f:;
  /* 12157a2f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12157a32 pop edi */
  EDI = (pop32());
  /* 12157a33 pop esi */
  ESI = (pop32());
  /* 12157a34 pop ebx */
  EBX = (pop32());
  /* 12157a35 mov esp, ebp */
  ESP = (EBP);
  /* 12157a37 pop ebp */
  EBP = (pop32());
  /* 12157a38 ret  */
  ESPCHK(0x12157940u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a40 @ 0x12157a40 (7 bytes, 3 insns) */
void f_12157a40(void) {
  FTRACE(0x12157a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157a40 push edi */
  push32((uint32_t)(EDI));
  /* 12157a41 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 12157a45 jmp 0x12157ab1 */
  jmp_ind(0x12157ab1u); return;
}

/* FUN_10007a50 @ 0x12157a50 (224 bytes, 84 insns) */
void f_12157a50(void) {
  FTRACE(0x12157a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157a50 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12157a54 push edi */
  push32((uint32_t)(EDI));
  /* 12157a55 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12157a5b je 0x12157a6c */
  if (C.zf) goto L_12157a6c;
L_12157a5d:;
  /* 12157a5d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 12157a5f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12157a60 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12157a62 je 0x12157a9f */
  if (C.zf) goto L_12157a9f;
  /* 12157a64 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12157a6a jne 0x12157a5d */
  if (!C.zf) goto L_12157a5d;
L_12157a6c:;
  /* 12157a6c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12157a6e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12157a73 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157a75 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12157a78 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12157a7a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157a7d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12157a82 je 0x12157a6c */
  if (C.zf) goto L_12157a6c;
  /* 12157a84 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12157a87 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12157a89 je 0x12157aae */
  if (C.zf) goto L_12157aae;
  /* 12157a8b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12157a8d je 0x12157aa9 */
  if (C.zf) goto L_12157aa9;
  /* 12157a8f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 12157a94 je 0x12157aa4 */
  if (C.zf) goto L_12157aa4;
  /* 12157a96 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 12157a9b je 0x12157a9f */
  if (C.zf) goto L_12157a9f;
  /* 12157a9d jmp 0x12157a6c */
  goto L_12157a6c;
L_12157a9f:;
  /* 12157a9f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 12157aa2 jmp 0x12157ab1 */
  goto L_12157ab1;
L_12157aa4:;
  /* 12157aa4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 12157aa7 jmp 0x12157ab1 */
  goto L_12157ab1;
L_12157aa9:;
  /* 12157aa9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 12157aac jmp 0x12157ab1 */
  goto L_12157ab1;
L_12157aae:;
  /* 12157aae lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_12157ab1:;
  /* 12157ab1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12157ab5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12157abb je 0x12157ad6 */
  if (C.zf) goto L_12157ad6;
L_12157abd:;
  /* 12157abd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12157abf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12157ac0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12157ac2 je 0x12157b28 */
  if (C.zf) goto L_12157b28;
  /* 12157ac4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12157ac6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12157ac7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 12157acd jne 0x12157abd */
  if (!C.zf) goto L_12157abd;
  /* 12157acf jmp 0x12157ad6 */
  goto L_12157ad6;
L_12157ad1:;
  /* 12157ad1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12157ad3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12157ad6:;
  /* 12157ad6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12157adb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12157add add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157adf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12157ae2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12157ae4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157ae6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157ae9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12157aee je 0x12157ad1 */
  if (C.zf) goto L_12157ad1;
  /* 12157af0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 12157af2 je 0x12157b28 */
  if (C.zf) goto L_12157b28;
  /* 12157af4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12157af6 je 0x12157b1f */
  if (C.zf) goto L_12157b1f;
  /* 12157af8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12157afe je 0x12157b12 */
  if (C.zf) goto L_12157b12;
  /* 12157b00 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12157b06 je 0x12157b0a */
  if (C.zf) goto L_12157b0a;
  /* 12157b08 jmp 0x12157ad1 */
  goto L_12157ad1;
L_12157b0a:;
  /* 12157b0a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12157b0c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12157b10 pop edi */
  EDI = (pop32());
  /* 12157b11 ret  */
  ESPCHK(0x12157a50u, _esp0);
  ESP += 4; return;
L_12157b12:;
  /* 12157b12 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12157b15 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12157b19 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 12157b1d pop edi */
  EDI = (pop32());
  /* 12157b1e ret  */
  ESPCHK(0x12157a50u, _esp0);
  ESP += 4; return;
L_12157b1f:;
  /* 12157b1f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 12157b22 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12157b26 pop edi */
  EDI = (pop32());
  /* 12157b27 ret  */
  ESPCHK(0x12157a50u, _esp0);
  ESP += 4; return;
L_12157b28:;
  /* 12157b28 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 12157b2a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12157b2e pop edi */
  EDI = (pop32());
  /* 12157b2f ret  */
  ESPCHK(0x12157a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b30 @ 0x12157b30 (243 bytes, 91 insns) */
void f_12157b30(void) {
  FTRACE(0x12157b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12157b31 mov ebp, esp */
  EBP = (ESP);
  /* 12157b33 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157b36 push ebx */
  push32((uint32_t)(EBX));
  /* 12157b37 push esi */
  push32((uint32_t)(ESI));
  /* 12157b38 push edi */
  push32((uint32_t)(EDI));
  /* 12157b39 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12157b3c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12157b3f:;
  /* 12157b3f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157b43 jne 0x12157b63 */
  if (!C.zf) goto L_12157b63;
  /* 12157b45 push 0x1217bf98 */
  push32((uint32_t)(0x1217bf98u));
  /* 12157b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 12157b4c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 12157b4e push 0x1217bfa8 */
  push32((uint32_t)(0x1217bfa8u));
  /* 12157b53 push 2 */
  push32((uint32_t)(0x2u));
  /* 12157b55 call 0x12153b50 */
  push32(0x12157b5au); f_12153b50();
  /* 12157b5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157b5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157b60 jne 0x12157b63 */
  if (!C.zf) goto L_12157b63;
  /* 12157b62 int3  */
  x86_unimpl("int3 @ 0x12157b62");
L_12157b63:;
  /* 12157b63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12157b65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12157b67 jne 0x12157b3f */
  if (!C.zf) goto L_12157b3f;
L_12157b69:;
  /* 12157b69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157b6d jne 0x12157b8d */
  if (!C.zf) goto L_12157b8d;
  /* 12157b6f push 0x1217bf7c */
  push32((uint32_t)(0x1217bf7cu));
  /* 12157b74 push 0 */
  push32((uint32_t)(0x0u));
  /* 12157b76 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 12157b78 push 0x1217bfa8 */
  push32((uint32_t)(0x1217bfa8u));
  /* 12157b7d push 2 */
  push32((uint32_t)(0x2u));
  /* 12157b7f call 0x12153b50 */
  push32(0x12157b84u); f_12153b50();
  /* 12157b84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157b87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157b8a jne 0x12157b8d */
  if (!C.zf) goto L_12157b8d;
  /* 12157b8c int3  */
  x86_unimpl("int3 @ 0x12157b8c");
L_12157b8d:;
  /* 12157b8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157b8f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12157b91 jne 0x12157b69 */
  if (!C.zf) goto L_12157b69;
  /* 12157b93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157b96 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 12157b9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157ba0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157ba3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12157ba6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157ba9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157bac mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12157bae mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157bb1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157bb4 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12157bb7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12157bba push ecx */
  push32((uint32_t)(ECX));
  /* 12157bbb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12157bbe push edx */
  push32((uint32_t)(EDX));
  /* 12157bbf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157bc2 push eax */
  push32((uint32_t)(EAX));
  /* 12157bc3 call 0x1215ba20 */
  push32(0x12157bc8u); f_1215ba20();
  /* 12157bc8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157bcb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12157bce mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157bd1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12157bd4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157bd7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157bda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12157bdd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157be0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157be4 jl 0x12157c08 */
  if ((C.sf!=C.of)) goto L_12157c08;
  /* 12157be6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157be9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12157beb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12157bee xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12157bf0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12157bf6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12157bf9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157bfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12157bfe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157c01 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157c04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12157c06 jmp 0x12157c19 */
  goto L_12157c19;
L_12157c08:;
  /* 12157c08 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12157c0b push edx */
  push32((uint32_t)(EDX));
  /* 12157c0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12157c0e call 0x1215b7a0 */
  push32(0x12157c13u); f_1215b7a0();
  /* 12157c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157c16 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_12157c19:;
  /* 12157c19 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12157c1c pop edi */
  EDI = (pop32());
  /* 12157c1d pop esi */
  ESI = (pop32());
  /* 12157c1e pop ebx */
  EBX = (pop32());
  /* 12157c1f mov esp, ebp */
  ESP = (EBP);
  /* 12157c21 pop ebp */
  EBP = (pop32());
  /* 12157c22 ret  */
  ESPCHK(0x12157b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c30 @ 0x12157c30 (47 bytes, 17 insns) */
void f_12157c30(void) {
  FTRACE(0x12157c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157c30 push ecx */
  push32((uint32_t)(ECX));
  /* 12157c31 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c36 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 12157c3a jb 0x12157c50 */
  if (C.cf) goto L_12157c50;
L_12157c3c:;
  /* 12157c3c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157c42 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157c47 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12157c49 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c4e jae 0x12157c3c */
  if (!C.cf) goto L_12157c3c;
L_12157c50:;
  /* 12157c50 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157c52 mov eax, esp */
  EAX = (ESP);
  /* 12157c54 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 12157c56 mov esp, ecx */
  ESP = (ECX);
  /* 12157c58 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12157c5a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 12157c5d push eax */
  push32((uint32_t)(EAX));
  /* 12157c5e ret  */
  ESPCHK(0x12157c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c60 @ 0x12157c60 (507 bytes, 151 insns) [1 switch table(s)] */
void f_12157c60(void) {
  FTRACE(0x12157c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157c60 push ebp */
  push32((uint32_t)(EBP));
  /* 12157c61 mov ebp, esp */
  EBP = (ESP);
  /* 12157c63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157c66 push esi */
  push32((uint32_t)(ESI));
  /* 12157c67 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c6b je 0x12157c73 */
  if (C.zf) goto L_12157c73;
  /* 12157c6d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c71 jne 0x12157c78 */
  if (!C.zf) goto L_12157c78;
L_12157c73:;
  /* 12157c73 jmp 0x12157e48 */
  goto L_12157e48;
L_12157c78:;
  /* 12157c78 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c7c je 0x12157c94 */
  if (C.zf) goto L_12157c94;
  /* 12157c7e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c82 je 0x12157c94 */
  if (C.zf) goto L_12157c94;
  /* 12157c84 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c88 je 0x12157c94 */
  if (C.zf) goto L_12157c94;
  /* 12157c8a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157c8e jne 0x12157d71 */
  if (!C.zf) goto L_12157d71;
L_12157c94:;
  /* 12157c94 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157c96 call 0x12158490 */
  push32(0x12157c9bu); f_12158490();
  /* 12157c9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157c9e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157ca2 je 0x12157caa */
  if (C.zf) goto L_12157caa;
  /* 12157ca4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157ca8 jne 0x12157cef */
  if (!C.zf) goto L_12157cef;
L_12157caa:;
  /* 12157caa cmp dword ptr [0x12180738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157cb1 jne 0x12157cef */
  if (!C.zf) goto L_12157cef;
  /* 12157cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157cb5 push 0x12157e90 */
  push32((uint32_t)(0x12157e90u));
  /* 12157cba call dword ptr [0x1218332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218332c))), 0x12157cc0u);
  /* 12157cc0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157cc3 jne 0x12157cd1 */
  if (!C.zf) goto L_12157cd1;
  /* 12157cc5 mov dword ptr [0x12180738], 1 */
  w32((uint32_t)(0x12180738), (0x1u));
  /* 12157ccf jmp 0x12157cef */
  goto L_12157cef;
L_12157cd1:;
  /* 12157cd1 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x12157cd7u);
  /* 12157cd7 mov esi, eax */
  ESI = (EAX);
  /* 12157cd9 call 0x1215c970 */
  push32(0x12157cdeu); f_1215c970();
  /* 12157cde mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 12157ce0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157ce2 call 0x12158530 */
  push32(0x12157ce7u); f_12158530();
  /* 12157ce7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157cea jmp 0x12157e48 */
  goto L_12157e48;
L_12157cef:;
  /* 12157cef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157cf2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12157cf5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12157cf8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157cfb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12157cfe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157d02 ja 0x12157d62 */
  if ((!C.cf&&!C.zf)) goto L_12157d62;
  /* 12157d04 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12157d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157d09 mov dl, byte ptr [eax + 0x12157e6f] */
  DL = (r8((uint32_t)(EAX + 0x12157e6f)));
  /* 12157d0f jmp dword ptr [edx*4 + 0x12157e5b] */
  switch (EDX) {
    case 0: goto L_12157d16;
    case 1: goto L_12157d50;
    case 2: goto L_12157d2a;
    case 3: goto L_12157d3d;
    case 4: goto L_12157d62;
    default: x86_unimpl("switch@0x12157d0f out of table"); return;
  }
L_12157d16:;
  /* 12157d16 mov ecx, dword ptr [0x12180728] */
  ECX = (r32((uint32_t)(0x12180728)));
  /* 12157d1c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12157d1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157d22 mov dword ptr [0x12180728], edx */
  w32((uint32_t)(0x12180728), (EDX));
  /* 12157d28 jmp 0x12157d62 */
  goto L_12157d62;
L_12157d2a:;
  /* 12157d2a mov eax, dword ptr [0x1218072c] */
  EAX = (r32((uint32_t)(0x1218072c)));
  /* 12157d2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157d32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157d35 mov dword ptr [0x1218072c], ecx */
  w32((uint32_t)(0x1218072c), (ECX));
  /* 12157d3b jmp 0x12157d62 */
  goto L_12157d62;
L_12157d3d:;
  /* 12157d3d mov edx, dword ptr [0x12180730] */
  EDX = (r32((uint32_t)(0x12180730)));
  /* 12157d43 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12157d46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157d49 mov dword ptr [0x12180730], eax */
  w32((uint32_t)(0x12180730), (EAX));
  /* 12157d4e jmp 0x12157d62 */
  goto L_12157d62;
L_12157d50:;
  /* 12157d50 mov ecx, dword ptr [0x12180734] */
  ECX = (r32((uint32_t)(0x12180734)));
  /* 12157d56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12157d59 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157d5c mov dword ptr [0x12180734], edx */
  w32((uint32_t)(0x12180734), (EDX));
L_12157d62:;
  /* 12157d62 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157d64 call 0x12158530 */
  push32(0x12157d69u); f_12158530();
  /* 12157d69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157d6c jmp 0x12157e43 */
  goto L_12157e43;
L_12157d71:;
  /* 12157d71 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157d75 je 0x12157d88 */
  if (C.zf) goto L_12157d88;
  /* 12157d77 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157d7b je 0x12157d88 */
  if (C.zf) goto L_12157d88;
  /* 12157d7d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157d81 je 0x12157d88 */
  if (C.zf) goto L_12157d88;
  /* 12157d83 jmp 0x12157e48 */
  goto L_12157e48;
L_12157d88:;
  /* 12157d88 call 0x121544d0 */
  push32(0x12157d8du); f_121544d0();
  /* 12157d8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12157d90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157d93 cmp dword ptr [eax + 0x50], 0x1217ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1217ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157d9a jne 0x12157de5 */
  if (!C.zf) goto L_12157de5;
  /* 12157d9c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 12157da1 push 0x1217bfb4 */
  push32((uint32_t)(0x1217bfb4u));
  /* 12157da6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12157da8 mov ecx, dword ptr [0x1217ec80] */
  ECX = (r32((uint32_t)(0x1217ec80)));
  /* 12157dae push ecx */
  push32((uint32_t)(ECX));
  /* 12157daf call 0x12154a90 */
  push32(0x12157db4u); f_12154a90();
  /* 12157db4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157db7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157dba mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 12157dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157dc0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157dc4 je 0x12157de3 */
  if (C.zf) goto L_12157de3;
  /* 12157dc6 mov ecx, dword ptr [0x1217ec80] */
  ECX = (r32((uint32_t)(0x1217ec80)));
  /* 12157dcc push ecx */
  push32((uint32_t)(ECX));
  /* 12157dcd push 0x1217ec00 */
  push32((uint32_t)(0x1217ec00u));
  /* 12157dd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157dd5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 12157dd8 push eax */
  push32((uint32_t)(EAX));
  /* 12157dd9 call 0x1215b370 */
  push32(0x12157ddeu); f_1215b370();
  /* 12157dde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157de1 jmp 0x12157de5 */
  goto L_12157de5;
L_12157de3:;
  /* 12157de3 jmp 0x12157e48 */
  goto L_12157e48;
L_12157de5:;
  /* 12157de5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157de8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12157deb push edx */
  push32((uint32_t)(EDX));
  /* 12157dec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157def push eax */
  push32((uint32_t)(EAX));
  /* 12157df0 call 0x12158170 */
  push32(0x12157df5u); f_12158170();
  /* 12157df5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157df8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12157dfb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157dff jne 0x12157e03 */
  if (!C.zf) goto L_12157e03;
  /* 12157e01 jmp 0x12157e48 */
  goto L_12157e48;
L_12157e03:;
  /* 12157e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157e06 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12157e09 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12157e0c:;
  /* 12157e0c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157e0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12157e12 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157e15 jne 0x12157e43 */
  if (!C.zf) goto L_12157e43;
  /* 12157e17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157e1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12157e1d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12157e20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157e23 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157e26 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12157e29 mov edx, dword ptr [0x1217ec84] */
  EDX = (r32((uint32_t)(0x1217ec84)));
  /* 12157e2f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12157e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157e35 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12157e38 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157e3a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157e3d jb 0x12157e41 */
  if (C.cf) goto L_12157e41;
  /* 12157e3f jmp 0x12157e43 */
  goto L_12157e43;
L_12157e41:;
  /* 12157e41 jmp 0x12157e0c */
  goto L_12157e0c;
L_12157e43:;
  /* 12157e43 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157e46 jmp 0x12157e56 */
  goto L_12157e56;
L_12157e48:;
  /* 12157e48 call 0x1215c960 */
  push32(0x12157e4du); f_1215c960();
  /* 12157e4d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 12157e53 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12157e56:;
  /* 12157e56 pop esi */
  ESI = (pop32());
  /* 12157e57 mov esp, ebp */
  ESP = (EBP);
  /* 12157e59 pop ebp */
  EBP = (pop32());
  /* 12157e5a ret  */
  ESPCHK(0x12157c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e90 @ 0x12157e90 (146 bytes, 45 insns) */
void f_12157e90(void) {
  FTRACE(0x12157e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157e90 push ebp */
  push32((uint32_t)(EBP));
  /* 12157e91 mov ebp, esp */
  EBP = (ESP);
  /* 12157e93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157e96 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157e98 call 0x12158490 */
  push32(0x12157e9du); f_12158490();
  /* 12157e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157ea0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157ea4 jne 0x12157ebe */
  if (!C.zf) goto L_12157ebe;
  /* 12157ea6 mov dword ptr [ebp - 8], 0x12180728 */
  w32((uint32_t)(EBP + -0x8), (0x12180728u));
  /* 12157ead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157eb0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12157eb2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12157eb5 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12157ebc jmp 0x12157ed4 */
  goto L_12157ed4;
L_12157ebe:;
  /* 12157ebe mov dword ptr [ebp - 8], 0x1218072c */
  w32((uint32_t)(EBP + -0x8), (0x1218072cu));
  /* 12157ec5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157ec8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12157eca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157ecd mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_12157ed4:;
  /* 12157ed4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157ed8 jne 0x12157ee8 */
  if (!C.zf) goto L_12157ee8;
  /* 12157eda push 1 */
  push32((uint32_t)(0x1u));
  /* 12157edc call 0x12158530 */
  push32(0x12157ee1u); f_12158530();
  /* 12157ee1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157ee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12157ee6 jmp 0x12157f1c */
  goto L_12157f1c;
L_12157ee8:;
  /* 12157ee8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157eec je 0x12157f0d */
  if (C.zf) goto L_12157f0d;
  /* 12157eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12157ef1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12157ef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12157ef9 call 0x12158530 */
  push32(0x12157efeu); f_12158530();
  /* 12157efe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157f01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157f04 push edx */
  push32((uint32_t)(EDX));
  /* 12157f05 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x12157f08u);
  /* 12157f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157f0b jmp 0x12157f17 */
  goto L_12157f17;
L_12157f0d:;
  /* 12157f0d push 1 */
  push32((uint32_t)(0x1u));
  /* 12157f0f call 0x12158530 */
  push32(0x12157f14u); f_12158530();
  /* 12157f14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12157f17:;
  /* 12157f17 mov eax, 1 */
  EAX = (0x1u);
L_12157f1c:;
  /* 12157f1c mov esp, ebp */
  ESP = (EBP);
  /* 12157f1e pop ebp */
  EBP = (pop32());
  /* 12157f1f ret 4 */
  ESPCHK(0x12157e90u, _esp0);
  ESP += 8; return;
}

/* FUN_10007f30 @ 0x12157f30 (522 bytes, 162 insns) [1 switch table(s)] */
void f_12157f30(void) {
  FTRACE(0x12157f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12157f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12157f31 mov ebp, esp */
  EBP = (ESP);
  /* 12157f33 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157f36 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12157f3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157f40 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12157f43 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12157f46 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12157f49 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12157f4c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12157f50 ja 0x12157ffe */
  if ((!C.cf&&!C.zf)) goto L_12157ffe;
  /* 12157f56 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12157f59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12157f5b mov dl, byte ptr [eax + 0x12158152] */
  DL = (r8((uint32_t)(EAX + 0x12158152)));
  /* 12157f61 jmp dword ptr [edx*4 + 0x1215813a] */
  switch (EDX) {
    case 0: goto L_12157f68;
    case 1: goto L_12157fd3;
    case 2: goto L_12157fb9;
    case 3: goto L_12157f85;
    case 4: goto L_12157f9f;
    case 5: goto L_12157ffe;
    default: x86_unimpl("switch@0x12157f61 out of table"); return;
  }
L_12157f68:;
  /* 12157f68 mov dword ptr [ebp - 0x18], 0x12180728 */
  w32((uint32_t)(EBP + -0x18), (0x12180728u));
  /* 12157f6f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157f72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157f74 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12157f77 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157f7a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157f7d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157f80 jmp 0x12158006 */
  goto L_12158006;
L_12157f85:;
  /* 12157f85 mov dword ptr [ebp - 0x18], 0x1218072c */
  w32((uint32_t)(EBP + -0x18), (0x1218072cu));
  /* 12157f8c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157f8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157f91 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12157f94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157f97 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157f9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157f9d jmp 0x12158006 */
  goto L_12158006;
L_12157f9f:;
  /* 12157f9f mov dword ptr [ebp - 0x18], 0x12180730 */
  w32((uint32_t)(EBP + -0x18), (0x12180730u));
  /* 12157fa6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157fa9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157fab mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12157fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157fb7 jmp 0x12158006 */
  goto L_12158006;
L_12157fb9:;
  /* 12157fb9 mov dword ptr [ebp - 0x18], 0x12180734 */
  w32((uint32_t)(EBP + -0x18), (0x12180734u));
  /* 12157fc0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157fc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157fc5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12157fc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12157fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157fce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12157fd1 jmp 0x12158006 */
  goto L_12158006;
L_12157fd3:;
  /* 12157fd3 call 0x121544d0 */
  push32(0x12157fd8u); f_121544d0();
  /* 12157fd8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12157fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12157fde mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12157fe1 push edx */
  push32((uint32_t)(EDX));
  /* 12157fe2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12157fe5 push eax */
  push32((uint32_t)(EAX));
  /* 12157fe6 call 0x12158170 */
  push32(0x12157febu); f_12158170();
  /* 12157feb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12157fee add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12157ff1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12157ff4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12157ff7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12157ff9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12157ffc jmp 0x12158006 */
  goto L_12158006;
L_12157ffe:;
  /* 12157ffe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12158001 jmp 0x12158136 */
  goto L_12158136;
L_12158006:;
  /* 12158006 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215800a je 0x12158016 */
  if (C.zf) goto L_12158016;
  /* 1215800c push 1 */
  push32((uint32_t)(0x1u));
  /* 1215800e call 0x12158490 */
  push32(0x12158013u); f_12158490();
  /* 12158013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158016:;
  /* 12158016 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215801a jne 0x12158033 */
  if (!C.zf) goto L_12158033;
  /* 1215801c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158020 je 0x1215802c */
  if (C.zf) goto L_1215802c;
  /* 12158022 push 1 */
  push32((uint32_t)(0x1u));
  /* 12158024 call 0x12158530 */
  push32(0x12158029u); f_12158530();
  /* 12158029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215802c:;
  /* 1215802c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215802e jmp 0x12158136 */
  goto L_12158136;
L_12158033:;
  /* 12158033 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158037 jne 0x12158050 */
  if (!C.zf) goto L_12158050;
  /* 12158039 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215803d je 0x12158049 */
  if (C.zf) goto L_12158049;
  /* 1215803f push 1 */
  push32((uint32_t)(0x1u));
  /* 12158041 call 0x12158530 */
  push32(0x12158046u); f_12158530();
  /* 12158046 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158049:;
  /* 12158049 push 3 */
  push32((uint32_t)(0x3u));
  /* 1215804b call 0x12154250 */
  push32(0x12158050u); f_12154250();
L_12158050:;
  /* 12158050 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158054 je 0x12158062 */
  if (C.zf) goto L_12158062;
  /* 12158056 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215805a je 0x12158062 */
  if (C.zf) goto L_12158062;
  /* 1215805c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158060 jne 0x1215808e */
  if (!C.zf) goto L_1215808e;
L_12158062:;
  /* 12158062 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158065 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12158068 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1215806b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215806e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 12158075 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158079 jne 0x1215808e */
  if (!C.zf) goto L_1215808e;
  /* 1215807b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215807e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12158081 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12158084 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158087 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1215808e:;
  /* 1215808e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158092 jne 0x121580d0 */
  if (!C.zf) goto L_121580d0;
  /* 12158094 mov eax, dword ptr [0x1217ec78] */
  EAX = (r32((uint32_t)(0x1217ec78)));
  /* 12158099 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1215809c jmp 0x121580a7 */
  goto L_121580a7;
L_1215809e:;
  /* 1215809e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121580a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121580a4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_121580a7:;
  /* 121580a7 mov edx, dword ptr [0x1217ec78] */
  EDX = (r32((uint32_t)(0x1217ec78)));
  /* 121580ad add edx, dword ptr [0x1217ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 121580b3 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121580b6 jge 0x121580ce */
  if ((C.sf==C.of)) goto L_121580ce;
  /* 121580b8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121580bb imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121580be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121580c1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 121580c4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 121580cc jmp 0x1215809e */
  goto L_1215809e;
L_121580ce:;
  /* 121580ce jmp 0x121580d9 */
  goto L_121580d9;
L_121580d0:;
  /* 121580d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 121580d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_121580d9:;
  /* 121580d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121580dd je 0x121580e9 */
  if (C.zf) goto L_121580e9;
  /* 121580df push 1 */
  push32((uint32_t)(0x1u));
  /* 121580e1 call 0x12158530 */
  push32(0x121580e6u); f_12158530();
  /* 121580e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121580e9:;
  /* 121580e9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121580ed jne 0x12158100 */
  if (!C.zf) goto L_12158100;
  /* 121580ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121580f2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 121580f5 push edx */
  push32((uint32_t)(EDX));
  /* 121580f6 push 8 */
  push32((uint32_t)(0x8u));
  /* 121580f8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x121580fbu);
  /* 121580fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121580fe jmp 0x1215810a */
  goto L_1215810a;
L_12158100:;
  /* 12158100 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158103 push eax */
  push32((uint32_t)(EAX));
  /* 12158104 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x12158107u);
  /* 12158107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215810a:;
  /* 1215810a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215810e je 0x1215811c */
  if (C.zf) goto L_1215811c;
  /* 12158110 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158114 je 0x1215811c */
  if (C.zf) goto L_1215811c;
  /* 12158116 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215811a jne 0x12158134 */
  if (!C.zf) goto L_12158134;
L_1215811c:;
  /* 1215811c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215811f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12158122 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 12158125 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158129 jne 0x12158134 */
  if (!C.zf) goto L_12158134;
  /* 1215812b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215812e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158131 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_12158134:;
  /* 12158134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12158136:;
  /* 12158136 mov esp, ebp */
  ESP = (EBP);
  /* 12158138 pop ebp */
  EBP = (pop32());
  /* 12158139 ret  */
  ESPCHK(0x12157f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x12158170 (91 bytes, 35 insns) */
void f_12158170(void) {
  FTRACE(0x12158170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158170 push ebp */
  push32((uint32_t)(EBP));
  /* 12158171 mov ebp, esp */
  EBP = (ESP);
  /* 12158173 push ecx */
  push32((uint32_t)(ECX));
  /* 12158174 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158177 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215817a:;
  /* 1215817a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215817d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12158180 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158183 je 0x121581a3 */
  if (C.zf) goto L_121581a3;
  /* 12158185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158188 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215818b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215818e mov ecx, dword ptr [0x1217ec84] */
  ECX = (r32((uint32_t)(0x1217ec84)));
  /* 12158194 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12158197 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215819a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215819c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215819f jae 0x121581a3 */
  if (!C.cf) goto L_121581a3;
  /* 121581a1 jmp 0x1215817a */
  goto L_1215817a;
L_121581a3:;
  /* 121581a3 mov eax, dword ptr [0x1217ec84] */
  EAX = (r32((uint32_t)(0x1217ec84)));
  /* 121581a8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 121581ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121581ae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 121581b0 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121581b3 jae 0x121581c5 */
  if (!C.cf) goto L_121581c5;
  /* 121581b5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121581b8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 121581bb cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121581be jne 0x121581c5 */
  if (!C.zf) goto L_121581c5;
  /* 121581c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121581c3 jmp 0x121581c7 */
  goto L_121581c7;
L_121581c5:;
  /* 121581c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_121581c7:;
  /* 121581c7 mov esp, ebp */
  ESP = (EBP);
  /* 121581c9 pop ebp */
  EBP = (pop32());
  /* 121581ca ret  */
  ESPCHK(0x12158170u, _esp0);
  ESP += 4; return;
}

/* FUN_100081d0 @ 0x121581d0 (13 bytes, 6 insns) */
void f_121581d0(void) {
  FTRACE(0x121581d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121581d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121581d1 mov ebp, esp */
  EBP = (ESP);
  /* 121581d3 call 0x121544d0 */
  push32(0x121581d8u); f_121544d0();
  /* 121581d8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121581db pop ebp */
  EBP = (pop32());
  /* 121581dc ret  */
  ESPCHK(0x121581d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081e0 @ 0x121581e0 (13 bytes, 6 insns) */
void f_121581e0(void) {
  FTRACE(0x121581e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121581e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121581e1 mov ebp, esp */
  EBP = (ESP);
  /* 121581e3 call 0x121544d0 */
  push32(0x121581e8u); f_121544d0();
  /* 121581e8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121581eb pop ebp */
  EBP = (pop32());
  /* 121581ec ret  */
  ESPCHK(0x121581e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081f0 @ 0x121581f0 (187 bytes, 54 insns) */
void f_121581f0(void) {
  FTRACE(0x121581f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121581f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121581f1 mov ebp, esp */
  EBP = (ESP);
  /* 121581f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 121581f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121581fd cmp dword ptr [0x1218073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158204 jne 0x12158263 */
  if (!C.zf) goto L_12158263;
  /* 12158206 push 0x1217b3e0 */
  push32((uint32_t)(0x1217b3e0u));
  /* 1215820b call dword ptr [0x12183360] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183360))), 0x12158211u);
  /* 12158211 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12158214 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158218 je 0x12158237 */
  if (C.zf) goto L_12158237;
  /* 1215821a push 0x1217bfe4 */
  push32((uint32_t)(0x1217bfe4u));
  /* 1215821f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158222 push eax */
  push32((uint32_t)(EAX));
  /* 12158223 call dword ptr [0x1218335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218335c))), 0x12158229u);
  /* 12158229 mov dword ptr [0x1218073c], eax */
  w32((uint32_t)(0x1218073c), (EAX));
  /* 1215822e cmp dword ptr [0x1218073c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1218073c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158235 jne 0x1215823b */
  if (!C.zf) goto L_1215823b;
L_12158237:;
  /* 12158237 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158239 jmp 0x121582a7 */
  goto L_121582a7;
L_1215823b:;
  /* 1215823b push 0x1217bfd4 */
  push32((uint32_t)(0x1217bfd4u));
  /* 12158240 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158243 push ecx */
  push32((uint32_t)(ECX));
  /* 12158244 call dword ptr [0x1218335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218335c))), 0x1215824au);
  /* 1215824a mov dword ptr [0x12180740], eax */
  w32((uint32_t)(0x12180740), (EAX));
  /* 1215824f push 0x1217bfc0 */
  push32((uint32_t)(0x1217bfc0u));
  /* 12158254 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158257 push edx */
  push32((uint32_t)(EDX));
  /* 12158258 call dword ptr [0x1218335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218335c))), 0x1215825eu);
  /* 1215825e mov dword ptr [0x12180744], eax */
  w32((uint32_t)(0x12180744), (EAX));
L_12158263:;
  /* 12158263 cmp dword ptr [0x12180740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215826a je 0x12158275 */
  if (C.zf) goto L_12158275;
  /* 1215826c call dword ptr [0x12180740] */
  call_ind((uint32_t)(r32((uint32_t)(0x12180740))), 0x12158272u);
  /* 12158272 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12158275:;
  /* 12158275 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158279 je 0x12158291 */
  if (C.zf) goto L_12158291;
  /* 1215827b cmp dword ptr [0x12180744], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12180744))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158282 je 0x12158291 */
  if (C.zf) goto L_12158291;
  /* 12158284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158287 push eax */
  push32((uint32_t)(EAX));
  /* 12158288 call dword ptr [0x12180744] */
  call_ind((uint32_t)(r32((uint32_t)(0x12180744))), 0x1215828eu);
  /* 1215828e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12158291:;
  /* 12158291 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12158294 push ecx */
  push32((uint32_t)(ECX));
  /* 12158295 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158298 push edx */
  push32((uint32_t)(EDX));
  /* 12158299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215829c push eax */
  push32((uint32_t)(EAX));
  /* 1215829d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121582a0 push ecx */
  push32((uint32_t)(ECX));
  /* 121582a1 call dword ptr [0x1218073c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218073c))), 0x121582a7u);
L_121582a7:;
  /* 121582a7 mov esp, ebp */
  ESP = (EBP);
  /* 121582a9 pop ebp */
  EBP = (pop32());
  /* 121582aa ret  */
  ESPCHK(0x121581f0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x121582b0 (254 bytes, 109 insns) */
void f_121582b0(void) {
  FTRACE(0x121582b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121582b0 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 121582b4 push edi */
  push32((uint32_t)(EDI));
  /* 121582b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 121582b7 je 0x12158333 */
  if (C.zf) goto L_12158333;
  /* 121582b9 push esi */
  push32((uint32_t)(ESI));
  /* 121582ba push ebx */
  push32((uint32_t)(EBX));
  /* 121582bb mov ebx, ecx */
  EBX = (ECX);
  /* 121582bd mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 121582c1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 121582c7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 121582cb jne 0x121582d4 */
  if (!C.zf) goto L_121582d4;
  /* 121582cd shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121582d0 jne 0x12158341 */
  if (!C.zf) goto L_12158341;
  /* 121582d2 jmp 0x121582f5 */
  goto L_121582f5;
L_121582d4:;
  /* 121582d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121582d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121582d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121582d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121582da dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 121582db je 0x12158302 */
  if (C.zf) goto L_12158302;
  /* 121582dd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121582df je 0x1215830a */
  if (C.zf) goto L_1215830a;
  /* 121582e1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 121582e7 jne 0x121582d4 */
  if (!C.zf) goto L_121582d4;
  /* 121582e9 mov ebx, ecx */
  EBX = (ECX);
  /* 121582eb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 121582ee jne 0x12158341 */
  if (!C.zf) goto L_12158341;
L_121582f0:;
  /* 121582f0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 121582f3 je 0x12158302 */
  if (C.zf) goto L_12158302;
L_121582f5:;
  /* 121582f5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 121582f7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 121582f8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 121582fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 121582fb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 121582fd je 0x1215832e */
  if (C.zf) goto L_1215832e;
  /* 121582ff dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 12158300 jne 0x121582f5 */
  if (!C.zf) goto L_121582f5;
L_12158302:;
  /* 12158302 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12158306 pop ebx */
  EBX = (pop32());
  /* 12158307 pop esi */
  ESI = (pop32());
  /* 12158308 pop edi */
  EDI = (pop32());
  /* 12158309 ret  */
  ESPCHK(0x121582b0u, _esp0);
  ESP += 4; return;
L_1215830a:;
  /* 1215830a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12158310 je 0x12158324 */
  if (C.zf) goto L_12158324;
L_12158312:;
  /* 12158312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12158314 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12158315 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12158316 je 0x121583a6 */
  if (C.zf) goto L_121583a6;
  /* 1215831c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12158322 jne 0x12158312 */
  if (!C.zf) goto L_12158312;
L_12158324:;
  /* 12158324 mov ebx, ecx */
  EBX = (ECX);
  /* 12158326 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12158329 jne 0x12158397 */
  if (!C.zf) goto L_12158397;
L_1215832b:;
  /* 1215832b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1215832d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1215832e:;
  /* 1215832e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1215832f jne 0x1215832b */
  if (!C.zf) goto L_1215832b;
  /* 12158331 pop ebx */
  EBX = (pop32());
  /* 12158332 pop esi */
  ESI = (pop32());
L_12158333:;
  /* 12158333 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12158337 pop edi */
  EDI = (pop32());
  /* 12158338 ret  */
  ESPCHK(0x121582b0u, _esp0);
  ESP += 4; return;
L_12158339:;
  /* 12158339 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1215833b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215833e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1215833f je 0x121582f0 */
  if (C.zf) goto L_121582f0;
L_12158341:;
  /* 12158341 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 12158346 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 12158348 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215834a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1215834d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1215834f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 12158351 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12158354 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 12158359 je 0x12158339 */
  if (C.zf) goto L_12158339;
  /* 1215835b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1215835d je 0x1215838b */
  if (C.zf) goto L_1215838b;
  /* 1215835f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 12158361 je 0x12158381 */
  if (C.zf) goto L_12158381;
  /* 12158363 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 12158369 je 0x12158377 */
  if (C.zf) goto L_12158377;
  /* 1215836b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 12158371 jne 0x12158339 */
  if (!C.zf) goto L_12158339;
  /* 12158373 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12158375 jmp 0x1215838f */
  goto L_1215838f;
L_12158377:;
  /* 12158377 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1215837d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1215837f jmp 0x1215838f */
  goto L_1215838f;
L_12158381:;
  /* 12158381 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12158387 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 12158389 jmp 0x1215838f */
  goto L_1215838f;
L_1215838b:;
  /* 1215838b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1215838d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1215838f:;
  /* 1215838f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12158392 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158394 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12158395 je 0x121583a1 */
  if (C.zf) goto L_121583a1;
L_12158397:;
  /* 12158397 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12158399:;
  /* 12158399 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1215839b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1215839e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1215839f jne 0x12158399 */
  if (!C.zf) goto L_12158399;
L_121583a1:;
  /* 121583a1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 121583a4 jne 0x1215832b */
  if (!C.zf) goto L_1215832b;
L_121583a6:;
  /* 121583a6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 121583aa pop ebx */
  EBX = (pop32());
  /* 121583ab pop esi */
  ESI = (pop32());
  /* 121583ac pop edi */
  EDI = (pop32());
  /* 121583ad ret  */
  ESPCHK(0x121582b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083b0 @ 0x121583b0 (55 bytes, 16 insns) */
void f_121583b0(void) {
  FTRACE(0x121583b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121583b0 push ebp */
  push32((uint32_t)(EBP));
  /* 121583b1 mov ebp, esp */
  EBP = (ESP);
  /* 121583b3 mov eax, dword ptr [0x1217eb84] */
  EAX = (r32((uint32_t)(0x1217eb84)));
  /* 121583b8 push eax */
  push32((uint32_t)(EAX));
  /* 121583b9 call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x121583bfu);
  /* 121583bf mov ecx, dword ptr [0x1217eb74] */
  ECX = (r32((uint32_t)(0x1217eb74)));
  /* 121583c5 push ecx */
  push32((uint32_t)(ECX));
  /* 121583c6 call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x121583ccu);
  /* 121583cc mov edx, dword ptr [0x1217eb64] */
  EDX = (r32((uint32_t)(0x1217eb64)));
  /* 121583d2 push edx */
  push32((uint32_t)(EDX));
  /* 121583d3 call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x121583d9u);
  /* 121583d9 mov eax, dword ptr [0x1217eb44] */
  EAX = (r32((uint32_t)(0x1217eb44)));
  /* 121583de push eax */
  push32((uint32_t)(EAX));
  /* 121583df call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x121583e5u);
  /* 121583e5 pop ebp */
  EBP = (pop32());
  /* 121583e6 ret  */
  ESPCHK(0x121583b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100083f0 @ 0x121583f0 (159 bytes, 47 insns) */
void f_121583f0(void) {
  FTRACE(0x121583f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121583f0 push ebp */
  push32((uint32_t)(EBP));
  /* 121583f1 mov ebp, esp */
  EBP = (ESP);
  /* 121583f3 push ecx */
  push32((uint32_t)(ECX));
  /* 121583f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 121583fb jmp 0x12158406 */
  goto L_12158406;
L_121583fd:;
  /* 121583fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158400 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158403 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12158406:;
  /* 12158406 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215840a jge 0x12158459 */
  if ((C.sf==C.of)) goto L_12158459;
  /* 1215840c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215840f cmp dword ptr [ecx*4 + 0x1217eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1217eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158417 je 0x12158457 */
  if (C.zf) goto L_12158457;
  /* 12158419 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215841d je 0x12158457 */
  if (C.zf) goto L_12158457;
  /* 1215841f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158423 je 0x12158457 */
  if (C.zf) goto L_12158457;
  /* 12158425 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158429 je 0x12158457 */
  if (C.zf) goto L_12158457;
  /* 1215842b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215842f je 0x12158457 */
  if (C.zf) goto L_12158457;
  /* 12158431 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158434 mov eax, dword ptr [edx*4 + 0x1217eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1217eb40)));
  /* 1215843b push eax */
  push32((uint32_t)(EAX));
  /* 1215843c call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x12158442u);
  /* 12158442 push 2 */
  push32((uint32_t)(0x2u));
  /* 12158444 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158447 mov edx, dword ptr [ecx*4 + 0x1217eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1217eb40)));
  /* 1215844e push edx */
  push32((uint32_t)(EDX));
  /* 1215844f call 0x12155520 */
  push32(0x12158454u); f_12155520();
  /* 12158454 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158457:;
  /* 12158457 jmp 0x121583fd */
  goto L_121583fd;
L_12158459:;
  /* 12158459 mov eax, dword ptr [0x1217eb64] */
  EAX = (r32((uint32_t)(0x1217eb64)));
  /* 1215845e push eax */
  push32((uint32_t)(EAX));
  /* 1215845f call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x12158465u);
  /* 12158465 mov ecx, dword ptr [0x1217eb74] */
  ECX = (r32((uint32_t)(0x1217eb74)));
  /* 1215846b push ecx */
  push32((uint32_t)(ECX));
  /* 1215846c call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x12158472u);
  /* 12158472 mov edx, dword ptr [0x1217eb84] */
  EDX = (r32((uint32_t)(0x1217eb84)));
  /* 12158478 push edx */
  push32((uint32_t)(EDX));
  /* 12158479 call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x1215847fu);
  /* 1215847f mov eax, dword ptr [0x1217eb44] */
  EAX = (r32((uint32_t)(0x1217eb44)));
  /* 12158484 push eax */
  push32((uint32_t)(EAX));
  /* 12158485 call dword ptr [0x12183380] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183380))), 0x1215848bu);
  /* 1215848b mov esp, ebp */
  ESP = (EBP);
  /* 1215848d pop ebp */
  EBP = (pop32());
  /* 1215848e ret  */
  ESPCHK(0x121583f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008490 @ 0x12158490 (151 bytes, 46 insns) */
void f_12158490(void) {
  FTRACE(0x12158490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158490 push ebp */
  push32((uint32_t)(EBP));
  /* 12158491 mov ebp, esp */
  EBP = (ESP);
  /* 12158493 push ecx */
  push32((uint32_t)(ECX));
  /* 12158494 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158497 cmp dword ptr [eax*4 + 0x1217eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1217eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215849f jne 0x12158512 */
  if (!C.zf) goto L_12158512;
  /* 121584a1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 121584a6 push 0x1217bff0 */
  push32((uint32_t)(0x1217bff0u));
  /* 121584ab push 2 */
  push32((uint32_t)(0x2u));
  /* 121584ad push 0x18 */
  push32((uint32_t)(0x18u));
  /* 121584af call 0x12154a90 */
  push32(0x121584b4u); f_12154a90();
  /* 121584b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121584b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121584ba cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121584be jne 0x121584ca */
  if (!C.zf) goto L_121584ca;
  /* 121584c0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121584c2 call 0x12153a00 */
  push32(0x121584c7u); f_12153a00();
  /* 121584c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_121584ca:;
  /* 121584ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 121584cc call 0x12158490 */
  push32(0x121584d1u); f_12158490();
  /* 121584d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121584d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121584d7 cmp dword ptr [ecx*4 + 0x1217eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1217eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121584df jne 0x121584fa */
  if (!C.zf) goto L_121584fa;
  /* 121584e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121584e4 push edx */
  push32((uint32_t)(EDX));
  /* 121584e5 call dword ptr [0x12183334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183334))), 0x121584ebu);
  /* 121584eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121584ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 121584f1 mov dword ptr [eax*4 + 0x1217eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1217eb40), (ECX));
  /* 121584f8 jmp 0x12158508 */
  goto L_12158508;
L_121584fa:;
  /* 121584fa push 2 */
  push32((uint32_t)(0x2u));
  /* 121584fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 121584ff push edx */
  push32((uint32_t)(EDX));
  /* 12158500 call 0x12155520 */
  push32(0x12158505u); f_12155520();
  /* 12158505 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158508:;
  /* 12158508 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1215850a call 0x12158530 */
  push32(0x1215850fu); f_12158530();
  /* 1215850f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158512:;
  /* 12158512 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158515 mov ecx, dword ptr [eax*4 + 0x1217eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217eb40)));
  /* 1215851c push ecx */
  push32((uint32_t)(ECX));
  /* 1215851d call dword ptr [0x12183324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183324))), 0x12158523u);
  /* 12158523 mov esp, ebp */
  ESP = (EBP);
  /* 12158525 pop ebp */
  EBP = (pop32());
  /* 12158526 ret  */
  ESPCHK(0x12158490u, _esp0);
  ESP += 4; return;
}

/* FUN_10008530 @ 0x12158530 (22 bytes, 8 insns) */
void f_12158530(void) {
  FTRACE(0x12158530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158530 push ebp */
  push32((uint32_t)(EBP));
  /* 12158531 mov ebp, esp */
  EBP = (ESP);
  /* 12158533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158536 mov ecx, dword ptr [eax*4 + 0x1217eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1217eb40)));
  /* 1215853d push ecx */
  push32((uint32_t)(ECX));
  /* 1215853e call dword ptr [0x12183320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183320))), 0x12158544u);
  /* 12158544 pop ebp */
  EBP = (pop32());
  /* 12158545 ret  */
  ESPCHK(0x12158530u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x12158550 (26 bytes, 10 insns) */
void f_12158550(void) {
  FTRACE(0x12158550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158550 push ebp */
  push32((uint32_t)(EBP));
  /* 12158551 mov ebp, esp */
  EBP = (ESP);
  /* 12158553 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158556 push eax */
  push32((uint32_t)(EAX));
  /* 12158557 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158559 call dword ptr [0x12183328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183328))), 0x1215855fu);
  /* 1215855f push 0xff */
  push32((uint32_t)(0xffu));
  /* 12158564 call dword ptr [0x1218336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218336c))), 0x1215856au);
  /* 1215856a pop ebp */
  EBP = (pop32());
  /* 1215856b ret  */
  ESPCHK(0x12158550u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x12158570 (446 bytes, 130 insns) */
void f_12158570(void) {
  FTRACE(0x12158570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158570 push ebp */
  push32((uint32_t)(EBP));
  /* 12158571 mov ebp, esp */
  EBP = (ESP);
  /* 12158573 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158576 call 0x121544d0 */
  push32(0x1215857bu); f_121544d0();
  /* 1215857b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215857e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158581 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 12158584 push ecx */
  push32((uint32_t)(ECX));
  /* 12158585 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158588 push edx */
  push32((uint32_t)(EDX));
  /* 12158589 call 0x12158730 */
  push32(0x1215858eu); f_12158730();
  /* 1215858e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158591 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12158594 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158598 je 0x121585a3 */
  if (C.zf) goto L_121585a3;
  /* 1215859a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215859d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121585a1 jne 0x121585b2 */
  if (!C.zf) goto L_121585b2;
L_121585a3:;
  /* 121585a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121585a6 push ecx */
  push32((uint32_t)(ECX));
  /* 121585a7 call dword ptr [0x12183318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183318))), 0x121585adu);
  /* 121585ad jmp 0x1215872a */
  goto L_1215872a;
L_121585b2:;
  /* 121585b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121585b5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121585b9 jne 0x121585cf */
  if (!C.zf) goto L_121585cf;
  /* 121585bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121585be mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 121585c5 mov eax, 1 */
  EAX = (0x1u);
  /* 121585ca jmp 0x1215872a */
  goto L_1215872a;
L_121585cf:;
  /* 121585cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121585d2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121585d6 jne 0x121585e0 */
  if (!C.zf) goto L_121585e0;
  /* 121585d8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 121585db jmp 0x1215872a */
  goto L_1215872a;
L_121585e0:;
  /* 121585e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121585e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 121585e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121585e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121585ec mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 121585ef mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 121585f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121585f5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121585f8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 121585fb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121585fe cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158602 jne 0x12158707 */
  if (!C.zf) goto L_12158707;
  /* 12158608 mov eax, dword ptr [0x1217ec78] */
  EAX = (r32((uint32_t)(0x1217ec78)));
  /* 1215860d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12158610 jmp 0x1215861b */
  goto L_1215861b;
L_12158612:;
  /* 12158612 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12158615 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158618 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1215861b:;
  /* 1215861b mov edx, dword ptr [0x1217ec78] */
  EDX = (r32((uint32_t)(0x1217ec78)));
  /* 12158621 add edx, dword ptr [0x1217ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1217ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158627 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215862a jge 0x12158642 */
  if ((C.sf==C.of)) goto L_12158642;
  /* 1215862c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1215862f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12158632 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158635 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12158638 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 12158640 jmp 0x12158612 */
  goto L_12158612;
L_12158642:;
  /* 12158642 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158645 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 12158648 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1215864b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215864e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158654 jne 0x12158665 */
  if (!C.zf) goto L_12158665;
  /* 12158656 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158659 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 12158660 jmp 0x121586ed */
  goto L_121586ed;
L_12158665:;
  /* 12158665 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12158668 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215866e jne 0x1215867c */
  if (!C.zf) goto L_1215867c;
  /* 12158670 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158673 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1215867a jmp 0x121586ed */
  goto L_121586ed;
L_1215867c:;
  /* 1215867c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215867f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158685 jne 0x12158693 */
  if (!C.zf) goto L_12158693;
  /* 12158687 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1215868a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 12158691 jmp 0x121586ed */
  goto L_121586ed;
L_12158693:;
  /* 12158693 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12158696 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215869c jne 0x121586aa */
  if (!C.zf) goto L_121586aa;
  /* 1215869e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586a1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 121586a8 jmp 0x121586ed */
  goto L_121586ed;
L_121586aa:;
  /* 121586aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 121586ad cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121586b3 jne 0x121586c1 */
  if (!C.zf) goto L_121586c1;
  /* 121586b5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586b8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 121586bf jmp 0x121586ed */
  goto L_121586ed;
L_121586c1:;
  /* 121586c1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 121586c4 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121586ca jne 0x121586d8 */
  if (!C.zf) goto L_121586d8;
  /* 121586cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586cf mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 121586d6 jmp 0x121586ed */
  goto L_121586ed;
L_121586d8:;
  /* 121586d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 121586db cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121586e1 jne 0x121586ed */
  if (!C.zf) goto L_121586ed;
  /* 121586e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586e6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_121586ed:;
  /* 121586ed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586f0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 121586f3 push edx */
  push32((uint32_t)(EDX));
  /* 121586f4 push 8 */
  push32((uint32_t)(0x8u));
  /* 121586f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x121586f9u);
  /* 121586f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121586fc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 121586ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12158702 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 12158705 jmp 0x1215871e */
  goto L_1215871e;
L_12158707:;
  /* 12158707 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1215870a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12158711 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12158714 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12158717 push ecx */
  push32((uint32_t)(ECX));
  /* 12158718 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1215871bu);
  /* 1215871b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1215871e:;
  /* 1215871e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158721 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12158724 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 12158727 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1215872a:;
  /* 1215872a mov esp, ebp */
  ESP = (EBP);
  /* 1215872c pop ebp */
  EBP = (pop32());
  /* 1215872d ret  */
  ESPCHK(0x12158570u, _esp0);
  ESP += 4; return;
}

/* FUN_10008730 @ 0x12158730 (89 bytes, 35 insns) */
void f_12158730(void) {
  FTRACE(0x12158730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158730 push ebp */
  push32((uint32_t)(EBP));
  /* 12158731 mov ebp, esp */
  EBP = (ESP);
  /* 12158733 push ecx */
  push32((uint32_t)(ECX));
  /* 12158734 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158737 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1215873a:;
  /* 1215873a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215873d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1215873f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158742 je 0x12158762 */
  if (C.zf) goto L_12158762;
  /* 12158744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158747 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215874a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1215874d mov ecx, dword ptr [0x1217ec84] */
  ECX = (r32((uint32_t)(0x1217ec84)));
  /* 12158753 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12158756 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158759 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215875b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215875e jae 0x12158762 */
  if (!C.cf) goto L_12158762;
  /* 12158760 jmp 0x1215873a */
  goto L_1215873a;
L_12158762:;
  /* 12158762 mov eax, dword ptr [0x1217ec84] */
  EAX = (r32((uint32_t)(0x1217ec84)));
  /* 12158767 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1215876a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215876d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1215876f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158772 jae 0x1215877e */
  if (!C.cf) goto L_1215877e;
  /* 12158774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158777 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12158779 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215877c je 0x12158782 */
  if (C.zf) goto L_12158782;
L_1215877e:;
  /* 1215877e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158780 jmp 0x12158785 */
  goto L_12158785;
L_12158782:;
  /* 12158782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12158785:;
  /* 12158785 mov esp, ebp */
  ESP = (EBP);
  /* 12158787 pop ebp */
  EBP = (pop32());
  /* 12158788 ret  */
  ESPCHK(0x12158730u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x12158790 (48 bytes, 17 insns) */
void f_12158790(void) {
  FTRACE(0x12158790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158790 push ebp */
  push32((uint32_t)(EBP));
  /* 12158791 mov ebp, esp */
  EBP = (ESP);
  /* 12158793 push ecx */
  push32((uint32_t)(ECX));
  /* 12158794 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158796 call 0x12158490 */
  push32(0x1215879bu); f_12158490();
  /* 1215879b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215879e mov eax, dword ptr [0x121807ac] */
  EAX = (r32((uint32_t)(0x121807ac)));
  /* 121587a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121587a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121587a9 mov dword ptr [0x121807ac], ecx */
  w32((uint32_t)(0x121807ac), (ECX));
  /* 121587af push 9 */
  push32((uint32_t)(0x9u));
  /* 121587b1 call 0x12158530 */
  push32(0x121587b6u); f_12158530();
  /* 121587b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121587b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121587bc mov esp, ebp */
  ESP = (EBP);
  /* 121587be pop ebp */
  EBP = (pop32());
  /* 121587bf ret  */
  ESPCHK(0x12158790u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x121587c0 (10 bytes, 5 insns) */
void f_121587c0(void) {
  FTRACE(0x121587c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121587c0 push ebp */
  push32((uint32_t)(EBP));
  /* 121587c1 mov ebp, esp */
  EBP = (ESP);
  /* 121587c3 mov eax, dword ptr [0x121807ac] */
  EAX = (r32((uint32_t)(0x121807ac)));
  /* 121587c8 pop ebp */
  EBP = (pop32());
  /* 121587c9 ret  */
  ESPCHK(0x121587c0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x121587d0 (45 bytes, 19 insns) */
void f_121587d0(void) {
  FTRACE(0x121587d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121587d0 push ebp */
  push32((uint32_t)(EBP));
  /* 121587d1 mov ebp, esp */
  EBP = (ESP);
  /* 121587d3 push ecx */
  push32((uint32_t)(ECX));
  /* 121587d4 mov eax, dword ptr [0x121807ac] */
  EAX = (r32((uint32_t)(0x121807ac)));
  /* 121587d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121587dc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121587e0 je 0x121587f0 */
  if (C.zf) goto L_121587f0;
  /* 121587e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121587e5 push ecx */
  push32((uint32_t)(ECX));
  /* 121587e6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x121587e9u);
  /* 121587e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121587ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121587ee jne 0x121587f4 */
  if (!C.zf) goto L_121587f4;
L_121587f0:;
  /* 121587f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121587f2 jmp 0x121587f9 */
  goto L_121587f9;
L_121587f4:;
  /* 121587f4 mov eax, 1 */
  EAX = (0x1u);
L_121587f9:;
  /* 121587f9 mov esp, ebp */
  ESP = (EBP);
  /* 121587fb pop ebp */
  EBP = (pop32());
  /* 121587fc ret  */
  ESPCHK(0x121587d0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x12158800 (88 bytes, 40 insns) */
void f_12158800(void) {
  FTRACE(0x12158800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158800 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12158804 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 12158808 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1215880a je 0x12158853 */
  if (C.zf) goto L_12158853;
  /* 1215880c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215880e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12158812 push edi */
  push32((uint32_t)(EDI));
  /* 12158813 mov edi, ecx */
  EDI = (ECX);
  /* 12158815 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158818 jb 0x12158847 */
  if (C.cf) goto L_12158847;
  /* 1215881a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1215881c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1215881f je 0x12158829 */
  if (C.zf) goto L_12158829;
  /* 12158821 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12158823:;
  /* 12158823 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12158825 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12158826 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12158827 jne 0x12158823 */
  if (!C.zf) goto L_12158823;
L_12158829:;
  /* 12158829 mov ecx, eax */
  ECX = (EAX);
  /* 1215882b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1215882e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158830 mov ecx, eax */
  ECX = (EAX);
  /* 12158832 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12158835 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158837 mov ecx, edx */
  ECX = (EDX);
  /* 12158839 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1215883c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1215883f je 0x12158847 */
  if (C.zf) goto L_12158847;
  /* 12158841 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 12158843 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12158845 je 0x1215884d */
  if (C.zf) goto L_1215884d;
L_12158847:;
  /* 12158847 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12158849 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1215884a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1215884b jne 0x12158847 */
  if (!C.zf) goto L_12158847;
L_1215884d:;
  /* 1215884d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12158851 pop edi */
  EDI = (pop32());
  /* 12158852 ret  */
  ESPCHK(0x12158800u, _esp0);
  ESP += 4; return;
L_12158853:;
  /* 12158853 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12158857 ret  */
  ESPCHK(0x12158800u, _esp0);
  ESP += 4; return;
}

/* FUN_10008860 @ 0x12158860 (23 bytes, 10 insns) */
void f_12158860(void) {
  FTRACE(0x12158860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158860 push ebp */
  push32((uint32_t)(EBP));
  /* 12158861 mov ebp, esp */
  EBP = (ESP);
  /* 12158863 mov eax, dword ptr [0x121807a8] */
  EAX = (r32((uint32_t)(0x121807a8)));
  /* 12158868 push eax */
  push32((uint32_t)(EAX));
  /* 12158869 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215886c push ecx */
  push32((uint32_t)(ECX));
  /* 1215886d call 0x12158880 */
  push32(0x12158872u); f_12158880();
  /* 12158872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158875 pop ebp */
  EBP = (pop32());
  /* 12158876 ret  */
  ESPCHK(0x12158860u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x12158880 (87 bytes, 34 insns) */
void f_12158880(void) {
  FTRACE(0x12158880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158880 push ebp */
  push32((uint32_t)(EBP));
  /* 12158881 mov ebp, esp */
  EBP = (ESP);
  /* 12158883 push ecx */
  push32((uint32_t)(ECX));
  /* 12158884 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158888 jbe 0x1215888e */
  if ((C.cf||C.zf)) goto L_1215888e;
  /* 1215888a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215888c jmp 0x121588d3 */
  goto L_121588d3;
L_1215888e:;
  /* 1215888e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158892 ja 0x121588a5 */
  if ((!C.cf&&!C.zf)) goto L_121588a5;
  /* 12158894 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158897 push eax */
  push32((uint32_t)(EAX));
  /* 12158898 call 0x121588e0 */
  push32(0x1215889du); f_121588e0();
  /* 1215889d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121588a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 121588a3 jmp 0x121588ac */
  goto L_121588ac;
L_121588a5:;
  /* 121588a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_121588ac:;
  /* 121588ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121588b0 jne 0x121588b8 */
  if (!C.zf) goto L_121588b8;
  /* 121588b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121588b6 jne 0x121588bd */
  if (!C.zf) goto L_121588bd;
L_121588b8:;
  /* 121588b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121588bb jmp 0x121588d3 */
  goto L_121588d3;
L_121588bd:;
  /* 121588bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121588c0 push ecx */
  push32((uint32_t)(ECX));
  /* 121588c1 call 0x121587d0 */
  push32(0x121588c6u); f_121587d0();
  /* 121588c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121588c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121588cb jne 0x121588d1 */
  if (!C.zf) goto L_121588d1;
  /* 121588cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 121588cf jmp 0x121588d3 */
  goto L_121588d3;
L_121588d1:;
  /* 121588d1 jmp 0x1215888e */
  goto L_1215888e;
L_121588d3:;
  /* 121588d3 mov esp, ebp */
  ESP = (EBP);
  /* 121588d5 pop ebp */
  EBP = (pop32());
  /* 121588d6 ret  */
  ESPCHK(0x12158880u, _esp0);
  ESP += 4; return;
}

/* FUN_100088e0 @ 0x121588e0 (109 bytes, 37 insns) */
void f_121588e0(void) {
  FTRACE(0x121588e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 121588e0 push ebp */
  push32((uint32_t)(EBP));
  /* 121588e1 mov ebp, esp */
  EBP = (ESP);
  /* 121588e3 push ecx */
  push32((uint32_t)(ECX));
  /* 121588e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121588e7 cmp eax, dword ptr [0x1217ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121588ed ja 0x1215891d */
  if ((!C.cf&&!C.zf)) goto L_1215891d;
  /* 121588ef push 9 */
  push32((uint32_t)(0x9u));
  /* 121588f1 call 0x12158490 */
  push32(0x121588f6u); f_12158490();
  /* 121588f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121588f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 121588fc push ecx */
  push32((uint32_t)(ECX));
  /* 121588fd call 0x12159420 */
  push32(0x12158902u); f_12159420();
  /* 12158902 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158905 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12158908 push 9 */
  push32((uint32_t)(0x9u));
  /* 1215890a call 0x12158530 */
  push32(0x1215890fu); f_12158530();
  /* 1215890f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158912 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158916 je 0x1215891d */
  if (C.zf) goto L_1215891d;
  /* 12158918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1215891b jmp 0x12158949 */
  goto L_12158949;
L_1215891d:;
  /* 1215891d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158921 jne 0x1215892a */
  if (!C.zf) goto L_1215892a;
  /* 12158923 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_1215892a:;
  /* 1215892a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1215892d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158930 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12158933 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12158936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158939 push eax */
  push32((uint32_t)(EAX));
  /* 1215893a push 0 */
  push32((uint32_t)(0x0u));
  /* 1215893c mov ecx, dword ptr [0x12181f6c] */
  ECX = (r32((uint32_t)(0x12181f6c)));
  /* 12158942 push ecx */
  push32((uint32_t)(ECX));
  /* 12158943 call dword ptr [0x12183314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183314))), 0x12158949u);
L_12158949:;
  /* 12158949 mov esp, ebp */
  ESP = (EBP);
  /* 1215894b pop ebp */
  EBP = (pop32());
  /* 1215894c ret  */
  ESPCHK(0x121588e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008950 @ 0x12158950 (10 bytes, 5 insns) */
void f_12158950(void) {
  FTRACE(0x12158950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158950 push ebp */
  push32((uint32_t)(EBP));
  /* 12158951 mov ebp, esp */
  EBP = (ESP);
  /* 12158953 mov eax, 1 */
  EAX = (0x1u);
  /* 12158958 pop ebp */
  EBP = (pop32());
  /* 12158959 ret  */
  ESPCHK(0x12158950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008960 @ 0x12158960 (173 bytes, 59 insns) */
void f_12158960(void) {
  FTRACE(0x12158960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158960 push ebp */
  push32((uint32_t)(EBP));
  /* 12158961 mov ebp, esp */
  EBP = (ESP);
  /* 12158963 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158966 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1215896a jbe 0x12158973 */
  if ((C.cf||C.zf)) goto L_12158973;
  /* 1215896c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1215896e jmp 0x12158a09 */
  goto L_12158a09;
L_12158973:;
  /* 12158973 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158975 call 0x12158490 */
  push32(0x1215897au); f_12158490();
  /* 1215897a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1215897d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158980 push eax */
  push32((uint32_t)(EAX));
  /* 12158981 call 0x12158d90 */
  push32(0x12158986u); f_12158d90();
  /* 12158986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158989 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1215898c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158990 je 0x121589d1 */
  if (C.zf) goto L_121589d1;
  /* 12158992 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12158999 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1215899c cmp ecx, dword ptr [0x1217ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1217ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121589a2 ja 0x121589c2 */
  if ((!C.cf&&!C.zf)) goto L_121589c2;
  /* 121589a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 121589a7 push edx */
  push32((uint32_t)(EDX));
  /* 121589a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 121589ab push eax */
  push32((uint32_t)(EAX));
  /* 121589ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 121589af push ecx */
  push32((uint32_t)(ECX));
  /* 121589b0 call 0x12159c60 */
  push32(0x121589b5u); f_12159c60();
  /* 121589b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121589b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 121589ba je 0x121589c2 */
  if (C.zf) goto L_121589c2;
  /* 121589bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121589bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_121589c2:;
  /* 121589c2 push 9 */
  push32((uint32_t)(0x9u));
  /* 121589c4 call 0x12158530 */
  push32(0x121589c9u); f_12158530();
  /* 121589c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121589cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 121589cf jmp 0x12158a09 */
  goto L_12158a09;
L_121589d1:;
  /* 121589d1 push 9 */
  push32((uint32_t)(0x9u));
  /* 121589d3 call 0x12158530 */
  push32(0x121589d8u); f_12158530();
  /* 121589d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 121589db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 121589df jne 0x121589e8 */
  if (!C.zf) goto L_121589e8;
  /* 121589e1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_121589e8:;
  /* 121589e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 121589eb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 121589ee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 121589f0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 121589f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 121589f6 push ecx */
  push32((uint32_t)(ECX));
  /* 121589f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 121589fa push edx */
  push32((uint32_t)(EDX));
  /* 121589fb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 121589fd mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12158a02 push eax */
  push32((uint32_t)(EAX));
  /* 12158a03 call dword ptr [0x1218331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218331c))), 0x12158a09u);
L_12158a09:;
  /* 12158a09 mov esp, ebp */
  ESP = (EBP);
  /* 12158a0b pop ebp */
  EBP = (pop32());
  /* 12158a0c ret  */
  ESPCHK(0x12158960u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x12158a10 (490 bytes, 165 insns) */
void f_12158a10(void) {
  FTRACE(0x12158a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158a10 push ebp */
  push32((uint32_t)(EBP));
  /* 12158a11 mov ebp, esp */
  EBP = (ESP);
  /* 12158a13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158a16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158a1a jne 0x12158a2d */
  if (!C.zf) goto L_12158a2d;
  /* 12158a1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158a1f push eax */
  push32((uint32_t)(EAX));
  /* 12158a20 call 0x12158860 */
  push32(0x12158a25u); f_12158860();
  /* 12158a25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158a28 jmp 0x12158bf6 */
  goto L_12158bf6;
L_12158a2d:;
  /* 12158a2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158a31 jne 0x12158a46 */
  if (!C.zf) goto L_12158a46;
  /* 12158a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158a36 push ecx */
  push32((uint32_t)(ECX));
  /* 12158a37 call 0x12158c00 */
  push32(0x12158a3cu); f_12158c00();
  /* 12158a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158a3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158a41 jmp 0x12158bf6 */
  goto L_12158bf6;
L_12158a46:;
  /* 12158a46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12158a4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158a51 ja 0x12158bc9 */
  if ((!C.cf&&!C.zf)) goto L_12158bc9;
  /* 12158a57 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158a59 call 0x12158490 */
  push32(0x12158a5eu); f_12158490();
  /* 12158a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158a61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158a64 push edx */
  push32((uint32_t)(EDX));
  /* 12158a65 call 0x12158d90 */
  push32(0x12158a6au); f_12158d90();
  /* 12158a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158a6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12158a70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158a74 je 0x12158b8c */
  if (C.zf) goto L_12158b8c;
  /* 12158a7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158a7d cmp eax, dword ptr [0x1217ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1217ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158a83 ja 0x12158b00 */
  if ((!C.cf&&!C.zf)) goto L_12158b00;
  /* 12158a85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158a88 push ecx */
  push32((uint32_t)(ECX));
  /* 12158a89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158a8c push edx */
  push32((uint32_t)(EDX));
  /* 12158a8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12158a90 push eax */
  push32((uint32_t)(EAX));
  /* 12158a91 call 0x12159c60 */
  push32(0x12158a96u); f_12159c60();
  /* 12158a96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12158a9b je 0x12158aa5 */
  if (C.zf) goto L_12158aa5;
  /* 12158a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158aa0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12158aa3 jmp 0x12158b00 */
  goto L_12158b00;
L_12158aa5:;
  /* 12158aa5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158aa8 push edx */
  push32((uint32_t)(EDX));
  /* 12158aa9 call 0x12159420 */
  push32(0x12158aaeu); f_12159420();
  /* 12158aae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158ab1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12158ab4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158ab8 je 0x12158b00 */
  if (C.zf) goto L_12158b00;
  /* 12158aba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158abd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12158ac0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158ac3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12158ac6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158ac9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158acc jae 0x12158ad6 */
  if (!C.cf) goto L_12158ad6;
  /* 12158ace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158ad1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12158ad4 jmp 0x12158adc */
  goto L_12158adc;
L_12158ad6:;
  /* 12158ad6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158ad9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12158adc:;
  /* 12158adc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12158adf push edx */
  push32((uint32_t)(EDX));
  /* 12158ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158ae3 push eax */
  push32((uint32_t)(EAX));
  /* 12158ae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158ae7 push ecx */
  push32((uint32_t)(ECX));
  /* 12158ae8 call 0x1215b370 */
  push32(0x12158aedu); f_1215b370();
  /* 12158aed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158af0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158af3 push edx */
  push32((uint32_t)(EDX));
  /* 12158af4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12158af7 push eax */
  push32((uint32_t)(EAX));
  /* 12158af8 call 0x12158e50 */
  push32(0x12158afdu); f_12158e50();
  /* 12158afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158b00:;
  /* 12158b00 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158b04 jne 0x12158b80 */
  if (!C.zf) goto L_12158b80;
  /* 12158b06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158b0a jne 0x12158b13 */
  if (!C.zf) goto L_12158b13;
  /* 12158b0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12158b13:;
  /* 12158b13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158b16 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158b19 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12158b1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12158b1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158b22 push edx */
  push32((uint32_t)(EDX));
  /* 12158b23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158b25 mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12158b2a push eax */
  push32((uint32_t)(EAX));
  /* 12158b2b call dword ptr [0x12183314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183314))), 0x12158b31u);
  /* 12158b31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12158b34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158b38 je 0x12158b80 */
  if (C.zf) goto L_12158b80;
  /* 12158b3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158b3d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12158b40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12158b43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12158b46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158b49 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158b4c jae 0x12158b56 */
  if (!C.cf) goto L_12158b56;
  /* 12158b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158b51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12158b54 jmp 0x12158b5c */
  goto L_12158b5c;
L_12158b56:;
  /* 12158b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158b59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12158b5c:;
  /* 12158b5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12158b5f push eax */
  push32((uint32_t)(EAX));
  /* 12158b60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158b63 push ecx */
  push32((uint32_t)(ECX));
  /* 12158b64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158b67 push edx */
  push32((uint32_t)(EDX));
  /* 12158b68 call 0x1215b370 */
  push32(0x12158b6du); f_1215b370();
  /* 12158b6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158b70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158b73 push eax */
  push32((uint32_t)(EAX));
  /* 12158b74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12158b77 push ecx */
  push32((uint32_t)(ECX));
  /* 12158b78 call 0x12158e50 */
  push32(0x12158b7du); f_12158e50();
  /* 12158b7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12158b80:;
  /* 12158b80 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158b82 call 0x12158530 */
  push32(0x12158b87u); f_12158530();
  /* 12158b87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158b8a jmp 0x12158bc9 */
  goto L_12158bc9;
L_12158b8c:;
  /* 12158b8c push 9 */
  push32((uint32_t)(0x9u));
  /* 12158b8e call 0x12158530 */
  push32(0x12158b93u); f_12158530();
  /* 12158b93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158b96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158b9a jne 0x12158ba3 */
  if (!C.zf) goto L_12158ba3;
  /* 12158b9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12158ba3:;
  /* 12158ba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158ba6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12158ba9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12158bac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12158baf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158bb2 push eax */
  push32((uint32_t)(EAX));
  /* 12158bb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12158bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158bb9 mov edx, dword ptr [0x12181f6c] */
  EDX = (r32((uint32_t)(0x12181f6c)));
  /* 12158bbf push edx */
  push32((uint32_t)(EDX));
  /* 12158bc0 call dword ptr [0x1218331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1218331c))), 0x12158bc6u);
  /* 12158bc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12158bc9:;
  /* 12158bc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158bcd jne 0x12158bd8 */
  if (!C.zf) goto L_12158bd8;
  /* 12158bcf cmp dword ptr [0x121807a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x121807a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158bd6 jne 0x12158bdd */
  if (!C.zf) goto L_12158bdd;
L_12158bd8:;
  /* 12158bd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12158bdb jmp 0x12158bf6 */
  goto L_12158bf6;
L_12158bdd:;
  /* 12158bdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12158be0 push eax */
  push32((uint32_t)(EAX));
  /* 12158be1 call 0x121587d0 */
  push32(0x12158be6u); f_121587d0();
  /* 12158be6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12158beb jne 0x12158bf1 */
  if (!C.zf) goto L_12158bf1;
  /* 12158bed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12158bef jmp 0x12158bf6 */
  goto L_12158bf6;
L_12158bf1:;
  /* 12158bf1 jmp 0x12158a46 */
  goto L_12158a46;
L_12158bf6:;
  /* 12158bf6 mov esp, ebp */
  ESP = (EBP);
  /* 12158bf8 pop ebp */
  EBP = (pop32());
  /* 12158bf9 ret  */
  ESPCHK(0x12158a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x12158c00 (104 bytes, 38 insns) */
void f_12158c00(void) {
  FTRACE(0x12158c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12158c01 mov ebp, esp */
  EBP = (ESP);
  /* 12158c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12158c04 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158c08 jne 0x12158c0c */
  if (!C.zf) goto L_12158c0c;
  /* 12158c0a jmp 0x12158c64 */
  goto L_12158c64;
L_12158c0c:;
  /* 12158c0c push 9 */
  push32((uint32_t)(0x9u));
  /* 12158c0e call 0x12158490 */
  push32(0x12158c13u); f_12158490();
  /* 12158c13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158c19 push eax */
  push32((uint32_t)(EAX));
  /* 12158c1a call 0x12158d90 */
  push32(0x12158c1fu); f_12158d90();
  /* 12158c1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12158c25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158c29 je 0x12158c47 */
  if (C.zf) goto L_12158c47;
  /* 12158c2b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158c2e push ecx */
  push32((uint32_t)(ECX));
  /* 12158c2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158c32 push edx */
  push32((uint32_t)(EDX));
  /* 12158c33 call 0x12158e50 */
  push32(0x12158c38u); f_12158e50();
  /* 12158c38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c3b push 9 */
  push32((uint32_t)(0x9u));
  /* 12158c3d call 0x12158530 */
  push32(0x12158c42u); f_12158530();
  /* 12158c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c45 jmp 0x12158c64 */
  goto L_12158c64;
L_12158c47:;
  /* 12158c47 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158c49 call 0x12158530 */
  push32(0x12158c4eu); f_12158530();
  /* 12158c4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12158c54 push eax */
  push32((uint32_t)(EAX));
  /* 12158c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158c57 mov ecx, dword ptr [0x12181f6c] */
  ECX = (r32((uint32_t)(0x12181f6c)));
  /* 12158c5d push ecx */
  push32((uint32_t)(ECX));
  /* 12158c5e call dword ptr [0x12183384] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183384))), 0x12158c64u);
L_12158c64:;
  /* 12158c64 mov esp, ebp */
  ESP = (EBP);
  /* 12158c66 pop ebp */
  EBP = (pop32());
  /* 12158c67 ret  */
  ESPCHK(0x12158c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c70 @ 0x12158c70 (116 bytes, 34 insns) */
void f_12158c70(void) {
  FTRACE(0x12158c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12158c71 mov ebp, esp */
  EBP = (ESP);
  /* 12158c73 push ecx */
  push32((uint32_t)(ECX));
  /* 12158c74 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12158c7b push 9 */
  push32((uint32_t)(0x9u));
  /* 12158c7d call 0x12158490 */
  push32(0x12158c82u); f_12158490();
  /* 12158c82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c85 call 0x1215a380 */
  push32(0x12158c8au); f_1215a380();
  /* 12158c8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12158c8c jge 0x12158c95 */
  if ((C.sf==C.of)) goto L_12158c95;
  /* 12158c8e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12158c95:;
  /* 12158c95 push 9 */
  push32((uint32_t)(0x9u));
  /* 12158c97 call 0x12158530 */
  push32(0x12158c9cu); f_12158530();
  /* 12158c9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12158c9f push 0 */
  push32((uint32_t)(0x0u));
  /* 12158ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12158ca3 mov eax, dword ptr [0x12181f6c] */
  EAX = (r32((uint32_t)(0x12181f6c)));
  /* 12158ca8 push eax */
  push32((uint32_t)(EAX));
  /* 12158ca9 call dword ptr [0x121833b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x121833b0))), 0x12158cafu);
  /* 12158caf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12158cb1 jne 0x12158cdd */
  if (!C.zf) goto L_12158cdd;
  /* 12158cb3 call dword ptr [0x12183390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12183390))), 0x12158cb9u);
  /* 12158cb9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12158cbc jne 0x12158cd6 */
  if (!C.zf) goto L_12158cd6;
  /* 12158cbe call 0x1215c970 */
  push32(0x12158cc3u); f_1215c970();
  /* 12158cc3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12158cc9 call 0x1215c960 */
  push32(0x12158cceu); f_1215c960();
  /* 12158cce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12158cd4 jmp 0x12158cdd */
  goto L_12158cdd;
L_12158cd6:;
  /* 12158cd6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12158cdd:;
  /* 12158cdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12158ce0 mov esp, ebp */
  ESP = (EBP);
  /* 12158ce2 pop ebp */
  EBP = (pop32());
  /* 12158ce3 ret  */
  ESPCHK(0x12158c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cf0 @ 0x12158cf0 (10 bytes, 5 insns) */
void f_12158cf0(void) {
  FTRACE(0x12158cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12158cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12158cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12158cf3 call 0x12158c70 */
  push32(0x12158cf8u); f_12158c70();
  /* 12158cf8 pop ebp */
  EBP = (pop32());
  /* 12158cf9 ret  */
  ESPCHK(0x12158cf0u, _esp0);
  ESP += 4; return;
}

