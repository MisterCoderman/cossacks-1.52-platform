#include "recomp.h"

/* thunk_FUN_10003740 @ 0x10271005 (5 bytes, 1 insns) */
void f_10271005(void) {
  FTRACE(0x10271005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10271005 jmp 0x10273740 */
  f_10273740(); return;
}

/* OnInit @ 0x1027100a (5 bytes, 1 insns) */
void f_1027100a(void) {
  FTRACE(0x1027100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027100a jmp 0x10271090 */
  f_10271090(); return;
}

/* thunk_FUN_10001030 @ 0x1027100f (5 bytes, 1 insns) */
void f_1027100f(void) {
  FTRACE(0x1027100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1027100f jmp 0x10271030 */
  f_10271030(); return;
}

/* ProcessScenary @ 0x10271014 (5 bytes, 1 insns) */
void f_10271014(void) {
  FTRACE(0x10271014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10271014 jmp 0x102716e0 */
  f_102716e0(); return;
}

/* FUN_10001030 @ 0x10271030 (67 bytes, 26 insns) */
void f_10271030(void) {
  FTRACE(0x10271030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10271030 push ebp */
  push32((uint32_t)(EBP));
  /* 10271031 mov ebp, esp */
  EBP = (ESP);
  /* 10271033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271036 push ebx */
  push32((uint32_t)(EBX));
  /* 10271037 push esi */
  push32((uint32_t)(ESI));
  /* 10271038 push edi */
  push32((uint32_t)(EDI));
  /* 10271039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1027103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10271041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10271046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10271048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271052 je 0x10271056 */
  if (C.zf) goto L_10271056;
  /* 10271054 jmp 0x1027105b */
  goto L_1027105b;
L_10271056:;
  /* 10271056 call 0x1027100a */
  push32(0x1027105bu); f_1027100a();
L_1027105b:;
  /* 1027105b mov eax, 1 */
  EAX = (0x1u);
  /* 10271060 pop edi */
  EDI = (pop32());
  /* 10271061 pop esi */
  ESI = (pop32());
  /* 10271062 pop ebx */
  EBX = (pop32());
  /* 10271063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271068 call 0x10273840 */
  push32(0x1027106du); f_10273840();
  /* 1027106d mov esp, ebp */
  ESP = (EBP);
  /* 1027106f pop ebp */
  EBP = (pop32());
  /* 10271070 ret 0xc */
  ESPCHK(0x10271030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10271090 (1283 bytes, 334 insns) */
void f_10271090(void) {
  FTRACE(0x10271090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10271090 push ebp */
  push32((uint32_t)(EBP));
  /* 10271091 mov ebp, esp */
  EBP = (ESP);
  /* 10271093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271096 push ebx */
  push32((uint32_t)(EBX));
  /* 10271097 push esi */
  push32((uint32_t)(ESI));
  /* 10271098 push edi */
  push32((uint32_t)(EDI));
  /* 10271099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1027109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 102710a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 102710a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102710a8 mov esi, esp */
  ESI = (ESP);
  /* 102710aa push 0x1029b0d8 */
  push32((uint32_t)(0x1029b0d8u));
  /* 102710af push 0x102a03e0 */
  push32((uint32_t)(0x102a03e0u));
  /* 102710b4 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102710bau);
  /* 102710ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102710bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102710bf call 0x10273840 */
  push32(0x102710c4u); f_10273840();
  /* 102710c4 mov esi, esp */
  ESI = (ESP);
  /* 102710c6 push 0x1029b0d4 */
  push32((uint32_t)(0x1029b0d4u));
  /* 102710cb push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 102710d0 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102710d6u);
  /* 102710d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102710d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102710db call 0x10273840 */
  push32(0x102710e0u); f_10273840();
  /* 102710e0 mov esi, esp */
  ESI = (ESP);
  /* 102710e2 push 0x1029b0d0 */
  push32((uint32_t)(0x1029b0d0u));
  /* 102710e7 push 0x102a0468 */
  push32((uint32_t)(0x102a0468u));
  /* 102710ec call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102710f2u);
  /* 102710f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102710f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102710f7 call 0x10273840 */
  push32(0x102710fcu); f_10273840();
  /* 102710fc mov esi, esp */
  ESI = (ESP);
  /* 102710fe push 0x1029b0cc */
  push32((uint32_t)(0x1029b0ccu));
  /* 10271103 push 0x102a0478 */
  push32((uint32_t)(0x102a0478u));
  /* 10271108 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027110eu);
  /* 1027110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271113 call 0x10273840 */
  push32(0x10271118u); f_10273840();
  /* 10271118 mov esi, esp */
  ESI = (ESP);
  /* 1027111a push 0x1029b0c8 */
  push32((uint32_t)(0x1029b0c8u));
  /* 1027111f push 0x102a0488 */
  push32((uint32_t)(0x102a0488u));
  /* 10271124 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027112au);
  /* 1027112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027112f call 0x10273840 */
  push32(0x10271134u); f_10273840();
  /* 10271134 mov esi, esp */
  ESI = (ESP);
  /* 10271136 push 0x1029b0c4 */
  push32((uint32_t)(0x1029b0c4u));
  /* 1027113b push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271140 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271146u);
  /* 10271146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027114b call 0x10273840 */
  push32(0x10271150u); f_10273840();
  /* 10271150 mov esi, esp */
  ESI = (ESP);
  /* 10271152 push 0x1029b0c0 */
  push32((uint32_t)(0x1029b0c0u));
  /* 10271157 push 0x102a04a0 */
  push32((uint32_t)(0x102a04a0u));
  /* 1027115c call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271162u);
  /* 10271162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271167 call 0x10273840 */
  push32(0x1027116cu); f_10273840();
  /* 1027116c mov esi, esp */
  ESI = (ESP);
  /* 1027116e push 0x1029b0bc */
  push32((uint32_t)(0x1029b0bcu));
  /* 10271173 push 0x102a04b0 */
  push32((uint32_t)(0x102a04b0u));
  /* 10271178 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027117eu);
  /* 1027117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271183 call 0x10273840 */
  push32(0x10271188u); f_10273840();
  /* 10271188 mov esi, esp */
  ESI = (ESP);
  /* 1027118a push 0x1029b0b8 */
  push32((uint32_t)(0x1029b0b8u));
  /* 1027118f push 0x102a04c0 */
  push32((uint32_t)(0x102a04c0u));
  /* 10271194 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027119au);
  /* 1027119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027119f call 0x10273840 */
  push32(0x102711a4u); f_10273840();
  /* 102711a4 mov esi, esp */
  ESI = (ESP);
  /* 102711a6 push 0x1029b0b4 */
  push32((uint32_t)(0x1029b0b4u));
  /* 102711ab push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 102711b0 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102711b6u);
  /* 102711b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102711b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102711bb call 0x10273840 */
  push32(0x102711c0u); f_10273840();
  /* 102711c0 mov esi, esp */
  ESI = (ESP);
  /* 102711c2 push 0x1029b0b0 */
  push32((uint32_t)(0x1029b0b0u));
  /* 102711c7 push 0x102a04d8 */
  push32((uint32_t)(0x102a04d8u));
  /* 102711cc call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102711d2u);
  /* 102711d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102711d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102711d7 call 0x10273840 */
  push32(0x102711dcu); f_10273840();
  /* 102711dc mov esi, esp */
  ESI = (ESP);
  /* 102711de push 0x1029b0ac */
  push32((uint32_t)(0x1029b0acu));
  /* 102711e3 push 0x102a0400 */
  push32((uint32_t)(0x102a0400u));
  /* 102711e8 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102711eeu);
  /* 102711ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102711f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102711f3 call 0x10273840 */
  push32(0x102711f8u); f_10273840();
  /* 102711f8 mov esi, esp */
  ESI = (ESP);
  /* 102711fa push 0x1029b0a8 */
  push32((uint32_t)(0x1029b0a8u));
  /* 102711ff push 0x102a04e0 */
  push32((uint32_t)(0x102a04e0u));
  /* 10271204 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027120au);
  /* 1027120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027120f call 0x10273840 */
  push32(0x10271214u); f_10273840();
  /* 10271214 mov esi, esp */
  ESI = (ESP);
  /* 10271216 push 0x1029b0a4 */
  push32((uint32_t)(0x1029b0a4u));
  /* 1027121b push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 10271220 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271226u);
  /* 10271226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027122b call 0x10273840 */
  push32(0x10271230u); f_10273840();
  /* 10271230 mov esi, esp */
  ESI = (ESP);
  /* 10271232 push 0x1029b0a0 */
  push32((uint32_t)(0x1029b0a0u));
  /* 10271237 push 0x102a04e8 */
  push32((uint32_t)(0x102a04e8u));
  /* 1027123c call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271242u);
  /* 10271242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271247 call 0x10273840 */
  push32(0x1027124cu); f_10273840();
  /* 1027124c mov esi, esp */
  ESI = (ESP);
  /* 1027124e push 0x1029b09c */
  push32((uint32_t)(0x1029b09cu));
  /* 10271253 push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 10271258 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027125eu);
  /* 1027125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271263 call 0x10273840 */
  push32(0x10271268u); f_10273840();
  /* 10271268 mov esi, esp */
  ESI = (ESP);
  /* 1027126a push 0x1029b098 */
  push32((uint32_t)(0x1029b098u));
  /* 1027126f push 0x102a04f0 */
  push32((uint32_t)(0x102a04f0u));
  /* 10271274 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027127au);
  /* 1027127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027127f call 0x10273840 */
  push32(0x10271284u); f_10273840();
  /* 10271284 mov esi, esp */
  ESI = (ESP);
  /* 10271286 push 0x1029b094 */
  push32((uint32_t)(0x1029b094u));
  /* 1027128b push 0x102a0418 */
  push32((uint32_t)(0x102a0418u));
  /* 10271290 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271296u);
  /* 10271296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027129b call 0x10273840 */
  push32(0x102712a0u); f_10273840();
  /* 102712a0 mov esi, esp */
  ESI = (ESP);
  /* 102712a2 push 0x1029b090 */
  push32((uint32_t)(0x1029b090u));
  /* 102712a7 push 0x102a0420 */
  push32((uint32_t)(0x102a0420u));
  /* 102712ac call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102712b2u);
  /* 102712b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102712b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102712b7 call 0x10273840 */
  push32(0x102712bcu); f_10273840();
  /* 102712bc mov esi, esp */
  ESI = (ESP);
  /* 102712be push 0x1029b08c */
  push32((uint32_t)(0x1029b08cu));
  /* 102712c3 push 0x102a0430 */
  push32((uint32_t)(0x102a0430u));
  /* 102712c8 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102712ceu);
  /* 102712ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102712d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102712d3 call 0x10273840 */
  push32(0x102712d8u); f_10273840();
  /* 102712d8 mov esi, esp */
  ESI = (ESP);
  /* 102712da push 0x1029b088 */
  push32((uint32_t)(0x1029b088u));
  /* 102712df push 0x102a0438 */
  push32((uint32_t)(0x102a0438u));
  /* 102712e4 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102712eau);
  /* 102712ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102712ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102712ef call 0x10273840 */
  push32(0x102712f4u); f_10273840();
  /* 102712f4 mov esi, esp */
  ESI = (ESP);
  /* 102712f6 push 0x1029b084 */
  push32((uint32_t)(0x1029b084u));
  /* 102712fb push 0x102a0440 */
  push32((uint32_t)(0x102a0440u));
  /* 10271300 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271306u);
  /* 10271306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027130b call 0x10273840 */
  push32(0x10271310u); f_10273840();
  /* 10271310 mov esi, esp */
  ESI = (ESP);
  /* 10271312 push 0x1029b080 */
  push32((uint32_t)(0x1029b080u));
  /* 10271317 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 1027131c call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271322u);
  /* 10271322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271327 call 0x10273840 */
  push32(0x1027132cu); f_10273840();
  /* 1027132c mov esi, esp */
  ESI = (ESP);
  /* 1027132e push 0x1029b078 */
  push32((uint32_t)(0x1029b078u));
  /* 10271333 push 0x102a0500 */
  push32((uint32_t)(0x102a0500u));
  /* 10271338 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027133eu);
  /* 1027133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271343 call 0x10273840 */
  push32(0x10271348u); f_10273840();
  /* 10271348 mov esi, esp */
  ESI = (ESP);
  /* 1027134a push 0x1029b070 */
  push32((uint32_t)(0x1029b070u));
  /* 1027134f push 0x102a0508 */
  push32((uint32_t)(0x102a0508u));
  /* 10271354 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x1027135au);
  /* 1027135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027135f call 0x10273840 */
  push32(0x10271364u); f_10273840();
  /* 10271364 mov esi, esp */
  ESI = (ESP);
  /* 10271366 push 0x1029b068 */
  push32((uint32_t)(0x1029b068u));
  /* 1027136b push 0x102a0510 */
  push32((uint32_t)(0x102a0510u));
  /* 10271370 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271376u);
  /* 10271376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027137b call 0x10273840 */
  push32(0x10271380u); f_10273840();
  /* 10271380 mov esi, esp */
  ESI = (ESP);
  /* 10271382 push 0x1029b060 */
  push32((uint32_t)(0x1029b060u));
  /* 10271387 push 0x102a0518 */
  push32((uint32_t)(0x102a0518u));
  /* 1027138c call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x10271392u);
  /* 10271392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271397 call 0x10273840 */
  push32(0x1027139cu); f_10273840();
  /* 1027139c mov esi, esp */
  ESI = (ESP);
  /* 1027139e push 0x1029b05c */
  push32((uint32_t)(0x1029b05cu));
  /* 102713a3 push 0x102a0450 */
  push32((uint32_t)(0x102a0450u));
  /* 102713a8 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102713aeu);
  /* 102713ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102713b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102713b3 call 0x10273840 */
  push32(0x102713b8u); f_10273840();
  /* 102713b8 mov esi, esp */
  ESI = (ESP);
  /* 102713ba push 0x1029b058 */
  push32((uint32_t)(0x1029b058u));
  /* 102713bf push 0x102a0458 */
  push32((uint32_t)(0x102a0458u));
  /* 102713c4 call dword ptr [0x102a3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3458))), 0x102713cau);
  /* 102713ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102713cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102713cf call 0x10273840 */
  push32(0x102713d4u); f_10273840();
  /* 102713d4 mov esi, esp */
  ESI = (ESP);
  /* 102713d6 push 0x1029b054 */
  push32((uint32_t)(0x1029b054u));
  /* 102713db push 0x102a0460 */
  push32((uint32_t)(0x102a0460u));
  /* 102713e0 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x102713e6u);
  /* 102713e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102713e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102713eb call 0x10273840 */
  push32(0x102713f0u); f_10273840();
  /* 102713f0 mov esi, esp */
  ESI = (ESP);
  /* 102713f2 push 0x1029b050 */
  push32((uint32_t)(0x1029b050u));
  /* 102713f7 push 0x102a0470 */
  push32((uint32_t)(0x102a0470u));
  /* 102713fc call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x10271402u);
  /* 10271402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271407 call 0x10273840 */
  push32(0x1027140cu); f_10273840();
  /* 1027140c mov esi, esp */
  ESI = (ESP);
  /* 1027140e push 0x1029b04c */
  push32((uint32_t)(0x1029b04cu));
  /* 10271413 push 0x102a0480 */
  push32((uint32_t)(0x102a0480u));
  /* 10271418 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x1027141eu);
  /* 1027141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271423 call 0x10273840 */
  push32(0x10271428u); f_10273840();
  /* 10271428 mov esi, esp */
  ESI = (ESP);
  /* 1027142a push 0x1029b048 */
  push32((uint32_t)(0x1029b048u));
  /* 1027142f push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 10271434 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x1027143au);
  /* 1027143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027143f call 0x10273840 */
  push32(0x10271444u); f_10273840();
  /* 10271444 mov esi, esp */
  ESI = (ESP);
  /* 10271446 push 0x1029b044 */
  push32((uint32_t)(0x1029b044u));
  /* 1027144b push 0x102a0498 */
  push32((uint32_t)(0x102a0498u));
  /* 10271450 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x10271456u);
  /* 10271456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027145b call 0x10273840 */
  push32(0x10271460u); f_10273840();
  /* 10271460 mov esi, esp */
  ESI = (ESP);
  /* 10271462 push 0x1029b040 */
  push32((uint32_t)(0x1029b040u));
  /* 10271467 push 0x102a04a8 */
  push32((uint32_t)(0x102a04a8u));
  /* 1027146c call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x10271472u);
  /* 10271472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271477 call 0x10273840 */
  push32(0x1027147cu); f_10273840();
  /* 1027147c mov esi, esp */
  ESI = (ESP);
  /* 1027147e push 0x1029b03c */
  push32((uint32_t)(0x1029b03cu));
  /* 10271483 push 0x102a04b8 */
  push32((uint32_t)(0x102a04b8u));
  /* 10271488 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x1027148eu);
  /* 1027148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271493 call 0x10273840 */
  push32(0x10271498u); f_10273840();
  /* 10271498 mov esi, esp */
  ESI = (ESP);
  /* 1027149a push 0x1029b038 */
  push32((uint32_t)(0x1029b038u));
  /* 1027149f push 0x102a04c8 */
  push32((uint32_t)(0x102a04c8u));
  /* 102714a4 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x102714aau);
  /* 102714aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102714ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102714af call 0x10273840 */
  push32(0x102714b4u); f_10273840();
  /* 102714b4 mov esi, esp */
  ESI = (ESP);
  /* 102714b6 push 0x1029b034 */
  push32((uint32_t)(0x1029b034u));
  /* 102714bb push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 102714c0 call dword ptr [0x102a345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a345c))), 0x102714c6u);
  /* 102714c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102714c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102714cb call 0x10273840 */
  push32(0x102714d0u); f_10273840();
  /* 102714d0 mov esi, esp */
  ESI = (ESP);
  /* 102714d2 push 0x102a0428 */
  push32((uint32_t)(0x102a0428u));
  /* 102714d7 call dword ptr [0x102a3454] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3454))), 0x102714ddu);
  /* 102714dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102714e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102714e2 call 0x10273840 */
  push32(0x102714e7u); f_10273840();
  /* 102714e7 mov esi, esp */
  ESI = (ESP);
  /* 102714e9 push 8 */
  push32((uint32_t)(0x8u));
  /* 102714eb push 0x102a0520 */
  push32((uint32_t)(0x102a0520u));
  /* 102714f0 call dword ptr [0x102a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3464))), 0x102714f6u);
  /* 102714f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102714f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102714fb call 0x10273840 */
  push32(0x10271500u); f_10273840();
  /* 10271500 mov esi, esp */
  ESI = (ESP);
  /* 10271502 push 8 */
  push32((uint32_t)(0x8u));
  /* 10271504 push 0x102a0528 */
  push32((uint32_t)(0x102a0528u));
  /* 10271509 call dword ptr [0x102a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3464))), 0x1027150fu);
  /* 1027150f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271514 call 0x10273840 */
  push32(0x10271519u); f_10273840();
  /* 10271519 mov esi, esp */
  ESI = (ESP);
  /* 1027151b push 8 */
  push32((uint32_t)(0x8u));
  /* 1027151d push 0x102a0530 */
  push32((uint32_t)(0x102a0530u));
  /* 10271522 call dword ptr [0x102a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3464))), 0x10271528u);
  /* 10271528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027152b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027152d call 0x10273840 */
  push32(0x10271532u); f_10273840();
  /* 10271532 mov esi, esp */
  ESI = (ESP);
  /* 10271534 push 8 */
  push32((uint32_t)(0x8u));
  /* 10271536 push 0x102a0538 */
  push32((uint32_t)(0x102a0538u));
  /* 1027153b call dword ptr [0x102a3464] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3464))), 0x10271541u);
  /* 10271541 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271544 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271546 call 0x10273840 */
  push32(0x1027154bu); f_10273840();
  /* 1027154b mov esi, esp */
  ESI = (ESP);
  /* 1027154d push 0x1029b01c */
  push32((uint32_t)(0x1029b01cu));
  /* 10271552 push 0x102a04f8 */
  push32((uint32_t)(0x102a04f8u));
  /* 10271557 call dword ptr [0x102a3468] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3468))), 0x1027155du);
  /* 1027155d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271560 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271562 call 0x10273840 */
  push32(0x10271567u); f_10273840();
  /* 10271567 mov esi, esp */
  ESI = (ESP);
  /* 10271569 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027156b push 0x102a04f8 */
  push32((uint32_t)(0x102a04f8u));
  /* 10271570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271572 call dword ptr [0x102a3460] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3460))), 0x10271578u);
  /* 10271578 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027157b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027157d call 0x10273840 */
  push32(0x10271582u); f_10273840();
  /* 10271582 pop edi */
  EDI = (pop32());
  /* 10271583 pop esi */
  ESI = (pop32());
  /* 10271584 pop ebx */
  EBX = (pop32());
  /* 10271585 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271588 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027158a call 0x10273840 */
  push32(0x1027158fu); f_10273840();
  /* 1027158f mov esp, ebp */
  ESP = (EBP);
  /* 10271591 pop ebp */
  EBP = (pop32());
  /* 10271592 ret  */
  ESPCHK(0x10271090u, _esp0);
  ESP += 4; return;
}

/* FUN_100016e0 @ 0x102716e0 (6625 bytes, 1948 insns) */
void f_102716e0(void) {
  FTRACE(0x102716e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102716e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102716e1 mov ebp, esp */
  EBP = (ESP);
  /* 102716e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102716e6 push ebx */
  push32((uint32_t)(EBX));
  /* 102716e7 push esi */
  push32((uint32_t)(ESI));
  /* 102716e8 push edi */
  push32((uint32_t)(EDI));
  /* 102716e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 102716ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 102716f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 102716f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 102716f8 mov esi, esp */
  ESI = (ESP);
  /* 102716fa push 0x63 */
  push32((uint32_t)(0x63u));
  /* 102716fc call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271702u);
  /* 10271702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271705 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271707 call 0x10273840 */
  push32(0x1027170cu); f_10273840();
  /* 1027170c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271713 je 0x10271b17 */
  if (C.zf) goto L_10271b17;
  /* 10271719 mov esi, esp */
  ESI = (ESP);
  /* 1027171b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027171d push 0x63 */
  push32((uint32_t)(0x63u));
  /* 1027171f call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271725u);
  /* 10271725 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271728 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027172a call 0x10273840 */
  push32(0x1027172fu); f_10273840();
  /* 1027172f mov esi, esp */
  ESI = (ESP);
  /* 10271731 push 0x1029b118 */
  push32((uint32_t)(0x1029b118u));
  /* 10271736 call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x1027173cu);
  /* 1027173c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027173f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271741 call 0x10273840 */
  push32(0x10271746u); f_10273840();
  /* 10271746 mov esi, esp */
  ESI = (ESP);
  /* 10271748 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1027174d push 3 */
  push32((uint32_t)(0x3u));
  /* 1027174f push 1 */
  push32((uint32_t)(0x1u));
  /* 10271751 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x10271757u);
  /* 10271757 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027175a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027175c call 0x10273840 */
  push32(0x10271761u); f_10273840();
  /* 10271761 mov esi, esp */
  ESI = (ESP);
  /* 10271763 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10271768 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027176a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027176c call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x10271772u);
  /* 10271772 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271777 call 0x10273840 */
  push32(0x1027177cu); f_10273840();
  /* 1027177c mov esi, esp */
  ESI = (ESP);
  /* 1027177e push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 10271783 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271785 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271787 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x1027178du);
  /* 1027178d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271790 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271792 call 0x10273840 */
  push32(0x10271797u); f_10273840();
  /* 10271797 mov esi, esp */
  ESI = (ESP);
  /* 10271799 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 1027179e push 2 */
  push32((uint32_t)(0x2u));
  /* 102717a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102717a2 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102717a8u);
  /* 102717a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102717ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102717ad call 0x10273840 */
  push32(0x102717b2u); f_10273840();
  /* 102717b2 mov esi, esp */
  ESI = (ESP);
  /* 102717b4 push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 102717b9 push 5 */
  push32((uint32_t)(0x5u));
  /* 102717bb push 1 */
  push32((uint32_t)(0x1u));
  /* 102717bd call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102717c3u);
  /* 102717c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102717c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102717c8 call 0x10273840 */
  push32(0x102717cdu); f_10273840();
  /* 102717cd mov esi, esp */
  ESI = (ESP);
  /* 102717cf push 0x895440 */
  push32((uint32_t)(0x895440u));
  /* 102717d4 push 4 */
  push32((uint32_t)(0x4u));
  /* 102717d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 102717d8 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102717deu);
  /* 102717de add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102717e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102717e3 call 0x10273840 */
  push32(0x102717e8u); f_10273840();
  /* 102717e8 mov esi, esp */
  ESI = (ESP);
  /* 102717ea push 0 */
  push32((uint32_t)(0x0u));
  /* 102717ec call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x102717f2u);
  /* 102717f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102717f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102717f7 call 0x10273840 */
  push32(0x102717fcu); f_10273840();
  /* 102717fc imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10271802 mov ecx, 0xea60 */
  ECX = (0xea60u);
  /* 10271807 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271809 mov esi, esp */
  ESI = (ESP);
  /* 1027180b push ecx */
  push32((uint32_t)(ECX));
  /* 1027180c push 3 */
  push32((uint32_t)(0x3u));
  /* 1027180e push 0 */
  push32((uint32_t)(0x0u));
  /* 10271810 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x10271816u);
  /* 10271816 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271819 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027181b call 0x10273840 */
  push32(0x10271820u); f_10273840();
  /* 10271820 mov esi, esp */
  ESI = (ESP);
  /* 10271822 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271824 call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x1027182au);
  /* 1027182a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027182d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027182f call 0x10273840 */
  push32(0x10271834u); f_10273840();
  /* 10271834 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027183a mov edx, 0x7530 */
  EDX = (0x7530u);
  /* 1027183f sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271841 mov esi, esp */
  ESI = (ESP);
  /* 10271843 push edx */
  push32((uint32_t)(EDX));
  /* 10271844 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271846 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271848 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x1027184eu);
  /* 1027184e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271851 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271853 call 0x10273840 */
  push32(0x10271858u); f_10273840();
  /* 10271858 mov esi, esp */
  ESI = (ESP);
  /* 1027185a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027185c call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x10271862u);
  /* 10271862 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271865 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271867 call 0x10273840 */
  push32(0x1027186cu); f_10273840();
  /* 1027186c imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10271872 mov ecx, 0x9c40 */
  ECX = (0x9c40u);
  /* 10271877 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271879 mov esi, esp */
  ESI = (ESP);
  /* 1027187b push ecx */
  push32((uint32_t)(ECX));
  /* 1027187c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027187e push 0 */
  push32((uint32_t)(0x0u));
  /* 10271880 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x10271886u);
  /* 10271886 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027188b call 0x10273840 */
  push32(0x10271890u); f_10273840();
  /* 10271890 mov esi, esp */
  ESI = (ESP);
  /* 10271892 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271894 push 2 */
  push32((uint32_t)(0x2u));
  /* 10271896 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271898 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x1027189eu);
  /* 1027189e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102718a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102718a3 call 0x10273840 */
  push32(0x102718a8u); f_10273840();
  /* 102718a8 mov esi, esp */
  ESI = (ESP);
  /* 102718aa push 0 */
  push32((uint32_t)(0x0u));
  /* 102718ac call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x102718b2u);
  /* 102718b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102718b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102718b7 call 0x10273840 */
  push32(0x102718bcu); f_10273840();
  /* 102718bc imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102718c2 mov edx, 0x9c40 */
  EDX = (0x9c40u);
  /* 102718c7 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102718c9 mov esi, esp */
  ESI = (ESP);
  /* 102718cb push edx */
  push32((uint32_t)(EDX));
  /* 102718cc push 5 */
  push32((uint32_t)(0x5u));
  /* 102718ce push 0 */
  push32((uint32_t)(0x0u));
  /* 102718d0 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102718d6u);
  /* 102718d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102718d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102718db call 0x10273840 */
  push32(0x102718e0u); f_10273840();
  /* 102718e0 mov esi, esp */
  ESI = (ESP);
  /* 102718e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102718e4 call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x102718eau);
  /* 102718ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102718ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102718ef call 0x10273840 */
  push32(0x102718f4u); f_10273840();
  /* 102718f4 imul eax, eax, 0x1388 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1388u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102718fa mov ecx, 0x9c40 */
  ECX = (0x9c40u);
  /* 102718ff sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10271901 mov esi, esp */
  ESI = (ESP);
  /* 10271903 push ecx */
  push32((uint32_t)(ECX));
  /* 10271904 push 4 */
  push32((uint32_t)(0x4u));
  /* 10271906 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271908 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x1027190eu);
  /* 1027190e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271913 call 0x10273840 */
  push32(0x10271918u); f_10273840();
  /* 10271918 mov esi, esp */
  ESI = (ESP);
  /* 1027191a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027191c call dword ptr [0x102a3410] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3410))), 0x10271922u);
  /* 10271922 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271925 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271927 call 0x10273840 */
  push32(0x1027192cu); f_10273840();
  /* 1027192c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027192e jne 0x10271a33 */
  if (!C.zf) goto L_10271a33;
  /* 10271934 mov esi, esp */
  ESI = (ESP);
  /* 10271936 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271938 push 0x102a0458 */
  push32((uint32_t)(0x102a0458u));
  /* 1027193d call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271943u);
  /* 10271943 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271946 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271948 call 0x10273840 */
  push32(0x1027194du); f_10273840();
  /* 1027194d mov esi, esp */
  ESI = (ESP);
  /* 1027194f push 1 */
  push32((uint32_t)(0x1u));
  /* 10271951 call dword ptr [0x102a340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a340c))), 0x10271957u);
  /* 10271957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027195a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027195c call 0x10273840 */
  push32(0x10271961u); f_10273840();
  /* 10271961 mov esi, esp */
  ESI = (ESP);
  /* 10271963 push 0x1e8480 */
  push32((uint32_t)(0x1e8480u));
  /* 10271968 push 3 */
  push32((uint32_t)(0x3u));
  /* 1027196a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027196c call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x10271972u);
  /* 10271972 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271977 call 0x10273840 */
  push32(0x1027197cu); f_10273840();
  /* 1027197c mov esi, esp */
  ESI = (ESP);
  /* 1027197e push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10271983 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271985 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271987 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x1027198du);
  /* 1027198d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271990 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271992 call 0x10273840 */
  push32(0x10271997u); f_10273840();
  /* 10271997 mov esi, esp */
  ESI = (ESP);
  /* 10271999 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 1027199e push 0 */
  push32((uint32_t)(0x0u));
  /* 102719a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102719a2 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102719a8u);
  /* 102719a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102719ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102719ad call 0x10273840 */
  push32(0x102719b2u); f_10273840();
  /* 102719b2 mov esi, esp */
  ESI = (ESP);
  /* 102719b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102719b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102719b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102719ba call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102719c0u);
  /* 102719c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102719c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102719c5 call 0x10273840 */
  push32(0x102719cau); f_10273840();
  /* 102719ca mov esi, esp */
  ESI = (ESP);
  /* 102719cc push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102719d1 push 5 */
  push32((uint32_t)(0x5u));
  /* 102719d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102719d5 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102719dbu);
  /* 102719db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102719de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102719e0 call 0x10273840 */
  push32(0x102719e5u); f_10273840();
  /* 102719e5 mov esi, esp */
  ESI = (ESP);
  /* 102719e7 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 102719ec push 4 */
  push32((uint32_t)(0x4u));
  /* 102719ee push 0 */
  push32((uint32_t)(0x0u));
  /* 102719f0 call dword ptr [0x102a3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3400))), 0x102719f6u);
  /* 102719f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102719f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102719fb call 0x10273840 */
  push32(0x10271a00u); f_10273840();
  /* 10271a00 mov esi, esp */
  ESI = (ESP);
  /* 10271a02 push 0x1029b10c */
  push32((uint32_t)(0x1029b10cu));
  /* 10271a07 push 0x1029b0d8 */
  push32((uint32_t)(0x1029b0d8u));
  /* 10271a0c call dword ptr [0x102a341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a341c))), 0x10271a12u);
  /* 10271a12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271a15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271a17 call 0x10273840 */
  push32(0x10271a1cu); f_10273840();
  /* 10271a1c mov esi, esp */
  ESI = (ESP);
  /* 10271a1e push 0x1029b104 */
  push32((uint32_t)(0x1029b104u));
  /* 10271a23 call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x10271a29u);
  /* 10271a29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271a2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271a2e call 0x10273840 */
  push32(0x10271a33u); f_10273840();
L_10271a33:;
  /* 10271a33 mov esi, esp */
  ESI = (ESP);
  /* 10271a35 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10271a3a push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271a3f push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10271a44 push 0x102a0520 */
  push32((uint32_t)(0x102a0520u));
  /* 10271a49 call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x10271a4fu);
  /* 10271a4f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271a52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271a54 call 0x10273840 */
  push32(0x10271a59u); f_10273840();
  /* 10271a59 mov esi, esp */
  ESI = (ESP);
  /* 10271a5b push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10271a60 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271a65 push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10271a6a push 0x102a0528 */
  push32((uint32_t)(0x102a0528u));
  /* 10271a6f call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x10271a75u);
  /* 10271a75 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271a78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271a7a call 0x10273840 */
  push32(0x10271a7fu); f_10273840();
  /* 10271a7f mov esi, esp */
  ESI = (ESP);
  /* 10271a81 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10271a86 push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 10271a8b push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10271a90 push 0x102a0530 */
  push32((uint32_t)(0x102a0530u));
  /* 10271a95 call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x10271a9bu);
  /* 10271a9b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271a9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271aa0 call 0x10273840 */
  push32(0x10271aa5u); f_10273840();
  /* 10271aa5 mov esi, esp */
  ESI = (ESP);
  /* 10271aa7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10271aac push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 10271ab1 push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10271ab6 push 0x102a0538 */
  push32((uint32_t)(0x102a0538u));
  /* 10271abb call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x10271ac1u);
  /* 10271ac1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ac4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ac6 call 0x10273840 */
  push32(0x10271acbu); f_10273840();
  /* 10271acb mov esi, esp */
  ESI = (ESP);
  /* 10271acd push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10271acf push 1 */
  push32((uint32_t)(0x1u));
  /* 10271ad1 call dword ptr [0x102a3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3418))), 0x10271ad7u);
  /* 10271ad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ada cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271adc call 0x10273840 */
  push32(0x10271ae1u); f_10273840();
  /* 10271ae1 mov esi, esp */
  ESI = (ESP);
  /* 10271ae3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271ae5 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10271aea call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271af0u);
  /* 10271af0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271af5 call 0x10273840 */
  push32(0x10271afau); f_10273840();
  /* 10271afa mov esi, esp */
  ESI = (ESP);
  /* 10271afc push 0 */
  push32((uint32_t)(0x0u));
  /* 10271afe push 0 */
  push32((uint32_t)(0x0u));
  /* 10271b00 push 0x102a0498 */
  push32((uint32_t)(0x102a0498u));
  /* 10271b05 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271b07 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10271b0du);
  /* 10271b0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271b12 call 0x10273840 */
  push32(0x10271b17u); f_10273840();
L_10271b17:;
  /* 10271b17 mov esi, esp */
  ESI = (ESP);
  /* 10271b19 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271b1b call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271b21u);
  /* 10271b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271b26 call 0x10273840 */
  push32(0x10271b2bu); f_10273840();
  /* 10271b2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271b30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271b32 je 0x10271b93 */
  if (C.zf) goto L_10271b93;
  /* 10271b34 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271b39 call 0x10271005 */
  push32(0x10271b3eu); f_10271005();
  /* 10271b3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271b43 jle 0x10271b93 */
  if ((C.zf||C.sf!=C.of)) goto L_10271b93;
  /* 10271b45 mov esi, esp */
  ESI = (ESP);
  /* 10271b47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271b49 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271b4b call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271b51u);
  /* 10271b51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271b56 call 0x10273840 */
  push32(0x10271b5bu); f_10273840();
  /* 10271b5b mov esi, esp */
  ESI = (ESP);
  /* 10271b5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10271b5f push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271b64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271b66 call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x10271b6cu);
  /* 10271b6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271b71 call 0x10273840 */
  push32(0x10271b76u); f_10273840();
  /* 10271b76 mov esi, esp */
  ESI = (ESP);
  /* 10271b78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271b7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10271b7c push 0x102a0470 */
  push32((uint32_t)(0x102a0470u));
  /* 10271b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271b83 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10271b89u);
  /* 10271b89 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271b8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271b8e call 0x10273840 */
  push32(0x10271b93u); f_10273840();
L_10271b93:;
  /* 10271b93 mov esi, esp */
  ESI = (ESP);
  /* 10271b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10271b97 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271b9du);
  /* 10271b9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ba0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ba2 call 0x10273840 */
  push32(0x10271ba7u); f_10273840();
  /* 10271ba7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271bac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271bae je 0x10271be6 */
  if (C.zf) goto L_10271be6;
  /* 10271bb0 mov esi, esp */
  ESI = (ESP);
  /* 10271bb2 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271bb7 push 0x102a0470 */
  push32((uint32_t)(0x102a0470u));
  /* 10271bbc call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10271bc2u);
  /* 10271bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271bc5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271bc7 call 0x10273840 */
  push32(0x10271bccu); f_10273840();
  /* 10271bcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271bce jle 0x10271be6 */
  if ((C.zf||C.sf!=C.of)) goto L_10271be6;
  /* 10271bd0 mov esi, esp */
  ESI = (ESP);
  /* 10271bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271bd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10271bd6 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271bdcu);
  /* 10271bdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271bdf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271be1 call 0x10273840 */
  push32(0x10271be6u); f_10273840();
L_10271be6:;
  /* 10271be6 mov esi, esp */
  ESI = (ESP);
  /* 10271be8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10271bea call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271bf0u);
  /* 10271bf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271bf3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271bf5 call 0x10273840 */
  push32(0x10271bfau); f_10273840();
  /* 10271bfa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271bff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c01 jne 0x10271c59 */
  if (!C.zf) goto L_10271c59;
  /* 10271c03 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271c08 call 0x10271005 */
  push32(0x10271c0du); f_10271005();
  /* 10271c0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c12 jle 0x10271c59 */
  if ((C.zf||C.sf!=C.of)) goto L_10271c59;
  /* 10271c14 push 0x102a0478 */
  push32((uint32_t)(0x102a0478u));
  /* 10271c19 call 0x10271005 */
  push32(0x10271c1eu); f_10271005();
  /* 10271c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c23 jle 0x10271c59 */
  if ((C.zf||C.sf!=C.of)) goto L_10271c59;
  /* 10271c25 mov esi, esp */
  ESI = (ESP);
  /* 10271c27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271c29 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271c2e call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271c34u);
  /* 10271c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271c39 call 0x10273840 */
  push32(0x10271c3eu); f_10273840();
  /* 10271c3e mov esi, esp */
  ESI = (ESP);
  /* 10271c40 push 0x102a0478 */
  push32((uint32_t)(0x102a0478u));
  /* 10271c45 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271c47 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10271c4du);
  /* 10271c4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271c52 call 0x10273840 */
  push32(0x10271c57u); f_10273840();
  /* 10271c57 jmp 0x10271cca */
  goto L_10271cca;
L_10271c59:;
  /* 10271c59 mov esi, esp */
  ESI = (ESP);
  /* 10271c5b push 2 */
  push32((uint32_t)(0x2u));
  /* 10271c5d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271c63u);
  /* 10271c63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271c68 call 0x10273840 */
  push32(0x10271c6du); f_10273840();
  /* 10271c6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271c72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c74 jne 0x10271cca */
  if (!C.zf) goto L_10271cca;
  /* 10271c76 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271c7b call 0x10271005 */
  push32(0x10271c80u); f_10271005();
  /* 10271c80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c85 jle 0x10271cca */
  if ((C.zf||C.sf!=C.of)) goto L_10271cca;
  /* 10271c87 push 0x102a0488 */
  push32((uint32_t)(0x102a0488u));
  /* 10271c8c call 0x10271005 */
  push32(0x10271c91u); f_10271005();
  /* 10271c91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271c96 jle 0x10271cca */
  if ((C.zf||C.sf!=C.of)) goto L_10271cca;
  /* 10271c98 mov esi, esp */
  ESI = (ESP);
  /* 10271c9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10271c9c push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271ca1 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271ca7u);
  /* 10271ca7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271caa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271cac call 0x10273840 */
  push32(0x10271cb1u); f_10273840();
  /* 10271cb1 mov esi, esp */
  ESI = (ESP);
  /* 10271cb3 push 0x102a0488 */
  push32((uint32_t)(0x102a0488u));
  /* 10271cb8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271cba call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10271cc0u);
  /* 10271cc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271cc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271cc5 call 0x10273840 */
  push32(0x10271ccau); f_10273840();
L_10271cca:;
  /* 10271cca mov esi, esp */
  ESI = (ESP);
  /* 10271ccc push 3 */
  push32((uint32_t)(0x3u));
  /* 10271cce call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271cd4u);
  /* 10271cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271cd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271cd9 call 0x10273840 */
  push32(0x10271cdeu); f_10273840();
  /* 10271cde and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271ce3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271ce5 je 0x10271d6c */
  if (C.zf) goto L_10271d6c;
  /* 10271ceb push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271cf0 call 0x10271005 */
  push32(0x10271cf5u); f_10271005();
  /* 10271cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271cf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271cfa jle 0x10271d6c */
  if ((C.zf||C.sf!=C.of)) goto L_10271d6c;
  /* 10271cfc push 0x102a0478 */
  push32((uint32_t)(0x102a0478u));
  /* 10271d01 call 0x10271005 */
  push32(0x10271d06u); f_10271005();
  /* 10271d06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271d0b jne 0x10271d6c */
  if (!C.zf) goto L_10271d6c;
  /* 10271d0d push 0x102a0488 */
  push32((uint32_t)(0x102a0488u));
  /* 10271d12 call 0x10271005 */
  push32(0x10271d17u); f_10271005();
  /* 10271d17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271d1c jne 0x10271d6c */
  if (!C.zf) goto L_10271d6c;
  /* 10271d1e mov esi, esp */
  ESI = (ESP);
  /* 10271d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271d22 push 3 */
  push32((uint32_t)(0x3u));
  /* 10271d24 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271d2au);
  /* 10271d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271d2f call 0x10273840 */
  push32(0x10271d34u); f_10273840();
  /* 10271d34 mov esi, esp */
  ESI = (ESP);
  /* 10271d36 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271d38 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271d3d push 1 */
  push32((uint32_t)(0x1u));
  /* 10271d3f call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x10271d45u);
  /* 10271d45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271d4a call 0x10273840 */
  push32(0x10271d4fu); f_10273840();
  /* 10271d4f mov esi, esp */
  ESI = (ESP);
  /* 10271d51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271d53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271d55 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 10271d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10271d5c call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10271d62u);
  /* 10271d62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271d67 call 0x10273840 */
  push32(0x10271d6cu); f_10273840();
L_10271d6c:;
  /* 10271d6c mov esi, esp */
  ESI = (ESP);
  /* 10271d6e push 4 */
  push32((uint32_t)(0x4u));
  /* 10271d70 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271d76u);
  /* 10271d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271d7b call 0x10273840 */
  push32(0x10271d80u); f_10273840();
  /* 10271d80 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271d85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271d87 je 0x10271ddc */
  if (C.zf) goto L_10271ddc;
  /* 10271d89 mov esi, esp */
  ESI = (ESP);
  /* 10271d8b push 3 */
  push32((uint32_t)(0x3u));
  /* 10271d8d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271d93u);
  /* 10271d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271d96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271d98 call 0x10273840 */
  push32(0x10271d9du); f_10273840();
  /* 10271d9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271da4 jne 0x10271ddc */
  if (!C.zf) goto L_10271ddc;
  /* 10271da6 mov esi, esp */
  ESI = (ESP);
  /* 10271da8 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271dad push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 10271db2 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10271db8u);
  /* 10271db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271dbd call 0x10273840 */
  push32(0x10271dc2u); f_10273840();
  /* 10271dc2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271dc4 jle 0x10271ddc */
  if ((C.zf||C.sf!=C.of)) goto L_10271ddc;
  /* 10271dc6 mov esi, esp */
  ESI = (ESP);
  /* 10271dc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271dca push 4 */
  push32((uint32_t)(0x4u));
  /* 10271dcc call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271dd2u);
  /* 10271dd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271dd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271dd7 call 0x10273840 */
  push32(0x10271ddcu); f_10273840();
L_10271ddc:;
  /* 10271ddc mov esi, esp */
  ESI = (ESP);
  /* 10271dde push 4 */
  push32((uint32_t)(0x4u));
  /* 10271de0 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271de6u);
  /* 10271de6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271de9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271deb call 0x10273840 */
  push32(0x10271df0u); f_10273840();
  /* 10271df0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271df5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271df7 jne 0x10271e4d */
  if (!C.zf) goto L_10271e4d;
  /* 10271df9 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271dfe call 0x10271005 */
  push32(0x10271e03u); f_10271005();
  /* 10271e03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271e08 jle 0x10271e4d */
  if ((C.zf||C.sf!=C.of)) goto L_10271e4d;
  /* 10271e0a push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10271e0f call 0x10271005 */
  push32(0x10271e14u); f_10271005();
  /* 10271e14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271e19 jle 0x10271e4d */
  if ((C.zf||C.sf!=C.of)) goto L_10271e4d;
  /* 10271e1b mov esi, esp */
  ESI = (ESP);
  /* 10271e1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10271e1f push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 10271e24 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271e2au);
  /* 10271e2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271e2f call 0x10273840 */
  push32(0x10271e34u); f_10273840();
  /* 10271e34 mov esi, esp */
  ESI = (ESP);
  /* 10271e36 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10271e3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10271e3d call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10271e43u);
  /* 10271e43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271e48 call 0x10273840 */
  push32(0x10271e4du); f_10273840();
L_10271e4d:;
  /* 10271e4d mov esi, esp */
  ESI = (ESP);
  /* 10271e4f push 5 */
  push32((uint32_t)(0x5u));
  /* 10271e51 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271e57u);
  /* 10271e57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271e5c call 0x10273840 */
  push32(0x10271e61u); f_10273840();
  /* 10271e61 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271e66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271e68 je 0x10271ec9 */
  if (C.zf) goto L_10271ec9;
  /* 10271e6a push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271e6f call 0x10271005 */
  push32(0x10271e74u); f_10271005();
  /* 10271e74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271e79 jle 0x10271ec9 */
  if ((C.zf||C.sf!=C.of)) goto L_10271ec9;
  /* 10271e7b mov esi, esp */
  ESI = (ESP);
  /* 10271e7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10271e7f push 5 */
  push32((uint32_t)(0x5u));
  /* 10271e81 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271e87u);
  /* 10271e87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271e8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271e8c call 0x10273840 */
  push32(0x10271e91u); f_10273840();
  /* 10271e91 mov esi, esp */
  ESI = (ESP);
  /* 10271e93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271e95 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271e9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10271e9c call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x10271ea2u);
  /* 10271ea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ea5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ea7 call 0x10273840 */
  push32(0x10271eacu); f_10273840();
  /* 10271eac mov esi, esp */
  ESI = (ESP);
  /* 10271eae push 0 */
  push32((uint32_t)(0x0u));
  /* 10271eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271eb2 push 0x102a0480 */
  push32((uint32_t)(0x102a0480u));
  /* 10271eb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10271eb9 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10271ebfu);
  /* 10271ebf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ec4 call 0x10273840 */
  push32(0x10271ec9u); f_10273840();
L_10271ec9:;
  /* 10271ec9 mov esi, esp */
  ESI = (ESP);
  /* 10271ecb push 6 */
  push32((uint32_t)(0x6u));
  /* 10271ecd call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271ed3u);
  /* 10271ed3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ed6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ed8 call 0x10273840 */
  push32(0x10271eddu); f_10273840();
  /* 10271edd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271ee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271ee4 je 0x10271f1c */
  if (C.zf) goto L_10271f1c;
  /* 10271ee6 mov esi, esp */
  ESI = (ESP);
  /* 10271ee8 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271eed push 0x102a0480 */
  push32((uint32_t)(0x102a0480u));
  /* 10271ef2 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10271ef8u);
  /* 10271ef8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271efb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271efd call 0x10273840 */
  push32(0x10271f02u); f_10273840();
  /* 10271f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271f04 jle 0x10271f1c */
  if ((C.zf||C.sf!=C.of)) goto L_10271f1c;
  /* 10271f06 mov esi, esp */
  ESI = (ESP);
  /* 10271f08 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271f0a push 6 */
  push32((uint32_t)(0x6u));
  /* 10271f0c call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10271f12u);
  /* 10271f12 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271f17 call 0x10273840 */
  push32(0x10271f1cu); f_10273840();
L_10271f1c:;
  /* 10271f1c mov esi, esp */
  ESI = (ESP);
  /* 10271f1e push 6 */
  push32((uint32_t)(0x6u));
  /* 10271f20 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271f26u);
  /* 10271f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271f2b call 0x10273840 */
  push32(0x10271f30u); f_10273840();
  /* 10271f30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271f37 jne 0x10271f8f */
  if (!C.zf) goto L_10271f8f;
  /* 10271f39 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271f3e call 0x10271005 */
  push32(0x10271f43u); f_10271005();
  /* 10271f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271f48 jle 0x10271f8f */
  if ((C.zf||C.sf!=C.of)) goto L_10271f8f;
  /* 10271f4a push 0x102a04b0 */
  push32((uint32_t)(0x102a04b0u));
  /* 10271f4f call 0x10271005 */
  push32(0x10271f54u); f_10271005();
  /* 10271f54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271f59 jle 0x10271f8f */
  if ((C.zf||C.sf!=C.of)) goto L_10271f8f;
  /* 10271f5b mov esi, esp */
  ESI = (ESP);
  /* 10271f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10271f5f push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271f64 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271f6au);
  /* 10271f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271f6f call 0x10273840 */
  push32(0x10271f74u); f_10273840();
  /* 10271f74 mov esi, esp */
  ESI = (ESP);
  /* 10271f76 push 0x102a04b0 */
  push32((uint32_t)(0x102a04b0u));
  /* 10271f7b push 1 */
  push32((uint32_t)(0x1u));
  /* 10271f7d call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10271f83u);
  /* 10271f83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271f88 call 0x10273840 */
  push32(0x10271f8du); f_10273840();
  /* 10271f8d jmp 0x10272000 */
  goto L_10272000;
L_10271f8f:;
  /* 10271f8f mov esi, esp */
  ESI = (ESP);
  /* 10271f91 push 6 */
  push32((uint32_t)(0x6u));
  /* 10271f93 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10271f99u);
  /* 10271f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271f9e call 0x10273840 */
  push32(0x10271fa3u); f_10273840();
  /* 10271fa3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10271fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271faa jne 0x10272000 */
  if (!C.zf) goto L_10272000;
  /* 10271fac push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271fb1 call 0x10271005 */
  push32(0x10271fb6u); f_10271005();
  /* 10271fb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271fb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271fbb jle 0x10272000 */
  if ((C.zf||C.sf!=C.of)) goto L_10272000;
  /* 10271fbd push 0x102a04c0 */
  push32((uint32_t)(0x102a04c0u));
  /* 10271fc2 call 0x10271005 */
  push32(0x10271fc7u); f_10271005();
  /* 10271fc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271fca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10271fcc jle 0x10272000 */
  if ((C.zf||C.sf!=C.of)) goto L_10272000;
  /* 10271fce mov esi, esp */
  ESI = (ESP);
  /* 10271fd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10271fd2 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10271fd7 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10271fddu);
  /* 10271fdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271fe0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271fe2 call 0x10273840 */
  push32(0x10271fe7u); f_10273840();
  /* 10271fe7 mov esi, esp */
  ESI = (ESP);
  /* 10271fe9 push 0x102a04c0 */
  push32((uint32_t)(0x102a04c0u));
  /* 10271fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10271ff0 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10271ff6u);
  /* 10271ff6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10271ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10271ffb call 0x10273840 */
  push32(0x10272000u); f_10273840();
L_10272000:;
  /* 10272000 mov esi, esp */
  ESI = (ESP);
  /* 10272002 push 7 */
  push32((uint32_t)(0x7u));
  /* 10272004 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027200au);
  /* 1027200a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027200d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027200f call 0x10273840 */
  push32(0x10272014u); f_10273840();
  /* 10272014 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027201b je 0x102720a2 */
  if (C.zf) goto L_102720a2;
  /* 10272021 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10272026 call 0x10271005 */
  push32(0x1027202bu); f_10271005();
  /* 1027202b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027202e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272030 jle 0x102720a2 */
  if ((C.zf||C.sf!=C.of)) goto L_102720a2;
  /* 10272032 push 0x102a04b0 */
  push32((uint32_t)(0x102a04b0u));
  /* 10272037 call 0x10271005 */
  push32(0x1027203cu); f_10271005();
  /* 1027203c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027203f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272041 jne 0x102720a2 */
  if (!C.zf) goto L_102720a2;
  /* 10272043 push 0x102a04c0 */
  push32((uint32_t)(0x102a04c0u));
  /* 10272048 call 0x10271005 */
  push32(0x1027204du); f_10271005();
  /* 1027204d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272050 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272052 jne 0x102720a2 */
  if (!C.zf) goto L_102720a2;
  /* 10272054 mov esi, esp */
  ESI = (ESP);
  /* 10272056 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272058 push 7 */
  push32((uint32_t)(0x7u));
  /* 1027205a call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272060u);
  /* 10272060 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272063 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272065 call 0x10273840 */
  push32(0x1027206au); f_10273840();
  /* 1027206a mov esi, esp */
  ESI = (ESP);
  /* 1027206c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027206e push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10272073 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272075 call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x1027207bu);
  /* 1027207b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027207e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272080 call 0x10273840 */
  push32(0x10272085u); f_10273840();
  /* 10272085 mov esi, esp */
  ESI = (ESP);
  /* 10272087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272089 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027208b push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 10272090 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272092 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272098u);
  /* 10272098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027209b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027209d call 0x10273840 */
  push32(0x102720a2u); f_10273840();
L_102720a2:;
  /* 102720a2 mov esi, esp */
  ESI = (ESP);
  /* 102720a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102720a6 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102720acu);
  /* 102720ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102720af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102720b1 call 0x10273840 */
  push32(0x102720b6u); f_10273840();
  /* 102720b6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102720bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102720bd je 0x10272112 */
  if (C.zf) goto L_10272112;
  /* 102720bf mov esi, esp */
  ESI = (ESP);
  /* 102720c1 push 7 */
  push32((uint32_t)(0x7u));
  /* 102720c3 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102720c9u);
  /* 102720c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102720cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102720ce call 0x10273840 */
  push32(0x102720d3u); f_10273840();
  /* 102720d3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102720d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102720da jne 0x10272112 */
  if (!C.zf) goto L_10272112;
  /* 102720dc mov esi, esp */
  ESI = (ESP);
  /* 102720de push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 102720e3 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 102720e8 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x102720eeu);
  /* 102720ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102720f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102720f3 call 0x10273840 */
  push32(0x102720f8u); f_10273840();
  /* 102720f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102720fa jle 0x10272112 */
  if ((C.zf||C.sf!=C.of)) goto L_10272112;
  /* 102720fc mov esi, esp */
  ESI = (ESP);
  /* 102720fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10272100 push 8 */
  push32((uint32_t)(0x8u));
  /* 10272102 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272108u);
  /* 10272108 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027210b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027210d call 0x10273840 */
  push32(0x10272112u); f_10273840();
L_10272112:;
  /* 10272112 mov esi, esp */
  ESI = (ESP);
  /* 10272114 push 8 */
  push32((uint32_t)(0x8u));
  /* 10272116 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027211cu);
  /* 1027211c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027211f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272121 call 0x10273840 */
  push32(0x10272126u); f_10273840();
  /* 10272126 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027212b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027212d jne 0x10272183 */
  if (!C.zf) goto L_10272183;
  /* 1027212f push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10272134 call 0x10271005 */
  push32(0x10272139u); f_10271005();
  /* 10272139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027213c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027213e jle 0x10272183 */
  if ((C.zf||C.sf!=C.of)) goto L_10272183;
  /* 10272140 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10272145 call 0x10271005 */
  push32(0x1027214au); f_10271005();
  /* 1027214a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027214d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027214f jle 0x10272183 */
  if ((C.zf||C.sf!=C.of)) goto L_10272183;
  /* 10272151 mov esi, esp */
  ESI = (ESP);
  /* 10272153 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272155 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 1027215a call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272160u);
  /* 10272160 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272163 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272165 call 0x10273840 */
  push32(0x1027216au); f_10273840();
  /* 1027216a mov esi, esp */
  ESI = (ESP);
  /* 1027216c push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10272171 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272173 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272179u);
  /* 10272179 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027217c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027217e call 0x10273840 */
  push32(0x10272183u); f_10273840();
L_10272183:;
  /* 10272183 mov esi, esp */
  ESI = (ESP);
  /* 10272185 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272187 call dword ptr [0x102a3438] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3438))), 0x1027218du);
  /* 1027218d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272192 call 0x10273840 */
  push32(0x10272197u); f_10273840();
  /* 10272197 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027219c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027219e je 0x102723f2 */
  if (C.zf) goto L_102723f2;
  /* 102721a4 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 102721a9 call 0x10271005 */
  push32(0x102721aeu); f_10271005();
  /* 102721ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102721b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102721b3 jle 0x10272232 */
  if ((C.zf||C.sf!=C.of)) goto L_10272232;
  /* 102721b5 mov esi, esp */
  ESI = (ESP);
  /* 102721b7 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 102721bc push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 102721c1 push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 102721c6 push 0x102a0520 */
  push32((uint32_t)(0x102a0520u));
  /* 102721cb call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x102721d1u);
  /* 102721d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102721d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102721d6 call 0x10273840 */
  push32(0x102721dbu); f_10273840();
  /* 102721db mov esi, esp */
  ESI = (ESP);
  /* 102721dd push 0x102a0468 */
  push32((uint32_t)(0x102a0468u));
  /* 102721e2 push 0x102a0520 */
  push32((uint32_t)(0x102a0520u));
  /* 102721e7 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x102721edu);
  /* 102721ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102721f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102721f2 call 0x10273840 */
  push32(0x102721f7u); f_10273840();
  /* 102721f7 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102721fa jge 0x10272232 */
  if ((C.sf==C.of)) goto L_10272232;
  /* 102721fc mov esi, esp */
  ESI = (ESP);
  /* 102721fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10272200 push 0x102a0468 */
  push32((uint32_t)(0x102a0468u));
  /* 10272205 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x1027220bu);
  /* 1027220b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027220e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272210 call 0x10273840 */
  push32(0x10272215u); f_10273840();
  /* 10272215 mov esi, esp */
  ESI = (ESP);
  /* 10272217 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272219 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027221b push 0x102a0520 */
  push32((uint32_t)(0x102a0520u));
  /* 10272220 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272222 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272228u);
  /* 10272228 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027222b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027222d call 0x10273840 */
  push32(0x10272232u); f_10273840();
L_10272232:;
  /* 10272232 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 10272237 call 0x10271005 */
  push32(0x1027223cu); f_10271005();
  /* 1027223c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027223f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272241 jle 0x102722c0 */
  if ((C.zf||C.sf!=C.of)) goto L_102722c0;
  /* 10272243 mov esi, esp */
  ESI = (ESP);
  /* 10272245 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 1027224a push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 1027224f push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10272254 push 0x102a0528 */
  push32((uint32_t)(0x102a0528u));
  /* 10272259 call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x1027225fu);
  /* 1027225f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272262 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272264 call 0x10273840 */
  push32(0x10272269u); f_10273840();
  /* 10272269 mov esi, esp */
  ESI = (ESP);
  /* 1027226b push 0x102a04a0 */
  push32((uint32_t)(0x102a04a0u));
  /* 10272270 push 0x102a0528 */
  push32((uint32_t)(0x102a0528u));
  /* 10272275 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x1027227bu);
  /* 1027227b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027227e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272280 call 0x10273840 */
  push32(0x10272285u); f_10273840();
  /* 10272285 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272288 jge 0x102722c0 */
  if ((C.sf==C.of)) goto L_102722c0;
  /* 1027228a mov esi, esp */
  ESI = (ESP);
  /* 1027228c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027228e push 0x102a04a0 */
  push32((uint32_t)(0x102a04a0u));
  /* 10272293 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272299u);
  /* 10272299 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027229c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027229e call 0x10273840 */
  push32(0x102722a3u); f_10273840();
  /* 102722a3 mov esi, esp */
  ESI = (ESP);
  /* 102722a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102722a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102722a9 push 0x102a0528 */
  push32((uint32_t)(0x102a0528u));
  /* 102722ae push 1 */
  push32((uint32_t)(0x1u));
  /* 102722b0 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x102722b6u);
  /* 102722b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102722b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102722bb call 0x10273840 */
  push32(0x102722c0u); f_10273840();
L_102722c0:;
  /* 102722c0 push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 102722c5 call 0x10271005 */
  push32(0x102722cau); f_10271005();
  /* 102722ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102722cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102722cf jle 0x1027234e */
  if ((C.zf||C.sf!=C.of)) goto L_1027234e;
  /* 102722d1 mov esi, esp */
  ESI = (ESP);
  /* 102722d3 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 102722d8 push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 102722dd push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 102722e2 push 0x102a0530 */
  push32((uint32_t)(0x102a0530u));
  /* 102722e7 call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x102722edu);
  /* 102722ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102722f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102722f2 call 0x10273840 */
  push32(0x102722f7u); f_10273840();
  /* 102722f7 mov esi, esp */
  ESI = (ESP);
  /* 102722f9 push 0x102a04e8 */
  push32((uint32_t)(0x102a04e8u));
  /* 102722fe push 0x102a0530 */
  push32((uint32_t)(0x102a0530u));
  /* 10272303 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10272309u);
  /* 10272309 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027230c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027230e call 0x10273840 */
  push32(0x10272313u); f_10273840();
  /* 10272313 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272316 jge 0x1027234e */
  if ((C.sf==C.of)) goto L_1027234e;
  /* 10272318 mov esi, esp */
  ESI = (ESP);
  /* 1027231a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027231c push 0x102a04e8 */
  push32((uint32_t)(0x102a04e8u));
  /* 10272321 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272327u);
  /* 10272327 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027232a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027232c call 0x10273840 */
  push32(0x10272331u); f_10273840();
  /* 10272331 mov esi, esp */
  ESI = (ESP);
  /* 10272333 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272337 push 0x102a0530 */
  push32((uint32_t)(0x102a0530u));
  /* 1027233c push 1 */
  push32((uint32_t)(0x1u));
  /* 1027233e call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272344u);
  /* 10272344 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272347 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272349 call 0x10273840 */
  push32(0x1027234eu); f_10273840();
L_1027234e:;
  /* 1027234e push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 10272353 call 0x10271005 */
  push32(0x10272358u); f_10271005();
  /* 10272358 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027235b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027235d jle 0x102723dc */
  if ((C.zf||C.sf!=C.of)) goto L_102723dc;
  /* 1027235f mov esi, esp */
  ESI = (ESP);
  /* 10272361 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10272366 push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 1027236b push 0x102a04d0 */
  push32((uint32_t)(0x102a04d0u));
  /* 10272370 push 0x102a0538 */
  push32((uint32_t)(0x102a0538u));
  /* 10272375 call dword ptr [0x102a3420] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3420))), 0x1027237bu);
  /* 1027237b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027237e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272380 call 0x10273840 */
  push32(0x10272385u); f_10273840();
  /* 10272385 mov esi, esp */
  ESI = (ESP);
  /* 10272387 push 0x102a04f0 */
  push32((uint32_t)(0x102a04f0u));
  /* 1027238c push 0x102a0538 */
  push32((uint32_t)(0x102a0538u));
  /* 10272391 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10272397u);
  /* 10272397 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027239a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027239c call 0x10273840 */
  push32(0x102723a1u); f_10273840();
  /* 102723a1 cmp eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102723a4 jge 0x102723dc */
  if ((C.sf==C.of)) goto L_102723dc;
  /* 102723a6 mov esi, esp */
  ESI = (ESP);
  /* 102723a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102723aa push 0x102a04f0 */
  push32((uint32_t)(0x102a04f0u));
  /* 102723af call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x102723b5u);
  /* 102723b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102723b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102723ba call 0x10273840 */
  push32(0x102723bfu); f_10273840();
  /* 102723bf mov esi, esp */
  ESI = (ESP);
  /* 102723c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102723c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102723c5 push 0x102a0538 */
  push32((uint32_t)(0x102a0538u));
  /* 102723ca push 1 */
  push32((uint32_t)(0x1u));
  /* 102723cc call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x102723d2u);
  /* 102723d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102723d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102723d7 call 0x10273840 */
  push32(0x102723dcu); f_10273840();
L_102723dc:;
  /* 102723dc mov esi, esp */
  ESI = (ESP);
  /* 102723de push 0x32 */
  push32((uint32_t)(0x32u));
  /* 102723e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102723e2 call dword ptr [0x102a3418] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3418))), 0x102723e8u);
  /* 102723e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102723eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102723ed call 0x10273840 */
  push32(0x102723f2u); f_10273840();
L_102723f2:;
  /* 102723f2 mov esi, esp */
  ESI = (ESP);
  /* 102723f4 push 9 */
  push32((uint32_t)(0x9u));
  /* 102723f6 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102723fcu);
  /* 102723fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102723ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272401 call 0x10273840 */
  push32(0x10272406u); f_10273840();
  /* 10272406 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027240b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027240d je 0x10272500 */
  if (C.zf) goto L_10272500;
  /* 10272413 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10272418 call 0x10271005 */
  push32(0x1027241du); f_10271005();
  /* 1027241d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272420 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272422 jne 0x10272500 */
  if (!C.zf) goto L_10272500;
  /* 10272428 mov esi, esp */
  ESI = (ESP);
  /* 1027242a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027242c push 9 */
  push32((uint32_t)(0x9u));
  /* 1027242e call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272434u);
  /* 10272434 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272437 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272439 call 0x10273840 */
  push32(0x1027243eu); f_10273840();
  /* 1027243e mov esi, esp */
  ESI = (ESP);
  /* 10272440 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272442 push 0x102a0428 */
  push32((uint32_t)(0x102a0428u));
  /* 10272447 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272449 call dword ptr [0x102a3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3430))), 0x1027244fu);
  /* 1027244f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272452 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272454 call 0x10273840 */
  push32(0x10272459u); f_10273840();
  /* 10272459 mov esi, esp */
  ESI = (ESP);
  /* 1027245b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027245d call dword ptr [0x102a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3440))), 0x10272463u);
  /* 10272463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272466 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272468 call 0x10273840 */
  push32(0x1027246du); f_10273840();
  /* 1027246d mov esi, esp */
  ESI = (ESP);
  /* 1027246f push 0 */
  push32((uint32_t)(0x0u));
  /* 10272471 push 0x102a04d8 */
  push32((uint32_t)(0x102a04d8u));
  /* 10272476 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x1027247cu);
  /* 1027247c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027247f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272481 call 0x10273840 */
  push32(0x10272486u); f_10273840();
  /* 10272486 mov esi, esp */
  ESI = (ESP);
  /* 10272488 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027248a call dword ptr [0x102a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3444))), 0x10272490u);
  /* 10272490 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272493 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272495 call 0x10273840 */
  push32(0x1027249au); f_10273840();
  /* 1027249a mov esi, esp */
  ESI = (ESP);
  /* 1027249c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027249e push 0x102a0428 */
  push32((uint32_t)(0x102a0428u));
  /* 102724a3 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x102724a9u);
  /* 102724a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102724ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102724ae call 0x10273840 */
  push32(0x102724b3u); f_10273840();
  /* 102724b3 mov esi, esp */
  ESI = (ESP);
  /* 102724b5 push 0x1029b0fc */
  push32((uint32_t)(0x1029b0fcu));
  /* 102724ba call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x102724c0u);
  /* 102724c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102724c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102724c5 call 0x10273840 */
  push32(0x102724cau); f_10273840();
  /* 102724ca mov esi, esp */
  ESI = (ESP);
  /* 102724cc push 0 */
  push32((uint32_t)(0x0u));
  /* 102724ce push 0x102a0440 */
  push32((uint32_t)(0x102a0440u));
  /* 102724d3 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x102724d9u);
  /* 102724d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102724dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102724de call 0x10273840 */
  push32(0x102724e3u); f_10273840();
  /* 102724e3 mov esi, esp */
  ESI = (ESP);
  /* 102724e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102724e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102724e9 push 0x102a0460 */
  push32((uint32_t)(0x102a0460u));
  /* 102724ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102724f0 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x102724f6u);
  /* 102724f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102724f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102724fb call 0x10273840 */
  push32(0x10272500u); f_10273840();
L_10272500:;
  /* 10272500 push 0x102a0400 */
  push32((uint32_t)(0x102a0400u));
  /* 10272505 call 0x10271005 */
  push32(0x1027250au); f_10271005();
  /* 1027250a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027250d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027250f jle 0x10272554 */
  if ((C.zf||C.sf!=C.of)) goto L_10272554;
  /* 10272511 push 0x102a04e0 */
  push32((uint32_t)(0x102a04e0u));
  /* 10272516 call 0x10271005 */
  push32(0x1027251bu); f_10271005();
  /* 1027251b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027251e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272520 jle 0x10272554 */
  if ((C.zf||C.sf!=C.of)) goto L_10272554;
  /* 10272522 mov esi, esp */
  ESI = (ESP);
  /* 10272524 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272526 push 0x102a0400 */
  push32((uint32_t)(0x102a0400u));
  /* 1027252b call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272531u);
  /* 10272531 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272534 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272536 call 0x10273840 */
  push32(0x1027253bu); f_10273840();
  /* 1027253b mov esi, esp */
  ESI = (ESP);
  /* 1027253d push 0x102a04e0 */
  push32((uint32_t)(0x102a04e0u));
  /* 10272542 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272544 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x1027254au);
  /* 1027254a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027254d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027254f call 0x10273840 */
  push32(0x10272554u); f_10273840();
L_10272554:;
  /* 10272554 mov esi, esp */
  ESI = (ESP);
  /* 10272556 push 0xa */
  push32((uint32_t)(0xau));
  /* 10272558 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027255eu);
  /* 1027255e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272563 call 0x10273840 */
  push32(0x10272568u); f_10273840();
  /* 10272568 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027256d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027256f je 0x10272600 */
  if (C.zf) goto L_10272600;
  /* 10272575 mov esi, esp */
  ESI = (ESP);
  /* 10272577 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272579 push 0x102a03e8 */
  push32((uint32_t)(0x102a03e8u));
  /* 1027257e call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x10272584u);
  /* 10272584 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272587 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272589 call 0x10273840 */
  push32(0x1027258eu); f_10273840();
  /* 1027258e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272590 je 0x102725b4 */
  if (C.zf) goto L_102725b4;
  /* 10272592 push 0x102a0478 */
  push32((uint32_t)(0x102a0478u));
  /* 10272597 call 0x10271005 */
  push32(0x1027259cu); f_10271005();
  /* 1027259c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027259f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102725a1 jne 0x10272600 */
  if (!C.zf) goto L_10272600;
  /* 102725a3 push 0x102a0488 */
  push32((uint32_t)(0x102a0488u));
  /* 102725a8 call 0x10271005 */
  push32(0x102725adu); f_10271005();
  /* 102725ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102725b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102725b2 jne 0x10272600 */
  if (!C.zf) goto L_10272600;
L_102725b4:;
  /* 102725b4 mov esi, esp */
  ESI = (ESP);
  /* 102725b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102725b8 push 0xa */
  push32((uint32_t)(0xau));
  /* 102725ba call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x102725c0u);
  /* 102725c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102725c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102725c5 call 0x10273840 */
  push32(0x102725cau); f_10273840();
  /* 102725ca mov esi, esp */
  ESI = (ESP);
  /* 102725cc push 0 */
  push32((uint32_t)(0x0u));
  /* 102725ce push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 102725d3 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x102725d9u);
  /* 102725d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102725dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102725de call 0x10273840 */
  push32(0x102725e3u); f_10273840();
  /* 102725e3 mov esi, esp */
  ESI = (ESP);
  /* 102725e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102725e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102725e9 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 102725ee push 1 */
  push32((uint32_t)(0x1u));
  /* 102725f0 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x102725f6u);
  /* 102725f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102725f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102725fb call 0x10273840 */
  push32(0x10272600u); f_10273840();
L_10272600:;
  /* 10272600 mov esi, esp */
  ESI = (ESP);
  /* 10272602 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10272604 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027260au);
  /* 1027260a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027260d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027260f call 0x10273840 */
  push32(0x10272614u); f_10273840();
  /* 10272614 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272619 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027261b je 0x10272653 */
  if (C.zf) goto L_10272653;
  /* 1027261d mov esi, esp */
  ESI = (ESP);
  /* 1027261f push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 10272624 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 10272629 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x1027262fu);
  /* 1027262f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272632 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272634 call 0x10273840 */
  push32(0x10272639u); f_10273840();
  /* 10272639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027263b jle 0x10272653 */
  if ((C.zf||C.sf!=C.of)) goto L_10272653;
  /* 1027263d mov esi, esp */
  ESI = (ESP);
  /* 1027263f push 0 */
  push32((uint32_t)(0x0u));
  /* 10272641 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10272643 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272649u);
  /* 10272649 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027264c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027264e call 0x10273840 */
  push32(0x10272653u); f_10273840();
L_10272653:;
  /* 10272653 mov esi, esp */
  ESI = (ESP);
  /* 10272655 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10272657 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027265du);
  /* 1027265d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272660 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272662 call 0x10273840 */
  push32(0x10272667u); f_10273840();
  /* 10272667 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027266c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027266e jne 0x102726d0 */
  if (!C.zf) goto L_102726d0;
  /* 10272670 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 10272675 call 0x10271005 */
  push32(0x1027267au); f_10271005();
  /* 1027267a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027267d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027267f jle 0x102726d0 */
  if ((C.zf||C.sf!=C.of)) goto L_102726d0;
  /* 10272681 mov esi, esp */
  ESI = (ESP);
  /* 10272683 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272685 push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 1027268a call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x10272690u);
  /* 10272690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272693 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272695 call 0x10273840 */
  push32(0x1027269au); f_10273840();
  /* 1027269a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027269c jle 0x102726d0 */
  if ((C.zf||C.sf!=C.of)) goto L_102726d0;
  /* 1027269e mov esi, esp */
  ESI = (ESP);
  /* 102726a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102726a2 push 0x102a0408 */
  push32((uint32_t)(0x102a0408u));
  /* 102726a7 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x102726adu);
  /* 102726ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102726b0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102726b2 call 0x10273840 */
  push32(0x102726b7u); f_10273840();
  /* 102726b7 mov esi, esp */
  ESI = (ESP);
  /* 102726b9 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 102726be push 1 */
  push32((uint32_t)(0x1u));
  /* 102726c0 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x102726c6u);
  /* 102726c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102726c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102726cb call 0x10273840 */
  push32(0x102726d0u); f_10273840();
L_102726d0:;
  /* 102726d0 mov esi, esp */
  ESI = (ESP);
  /* 102726d2 push 0xc */
  push32((uint32_t)(0xcu));
  /* 102726d4 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102726dau);
  /* 102726da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102726dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102726df call 0x10273840 */
  push32(0x102726e4u); f_10273840();
  /* 102726e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102726e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102726eb je 0x1027277c */
  if (C.zf) goto L_1027277c;
  /* 102726f1 mov esi, esp */
  ESI = (ESP);
  /* 102726f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102726f5 push 0x102a03f0 */
  push32((uint32_t)(0x102a03f0u));
  /* 102726fa call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x10272700u);
  /* 10272700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272705 call 0x10273840 */
  push32(0x1027270au); f_10273840();
  /* 1027270a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027270c je 0x10272730 */
  if (C.zf) goto L_10272730;
  /* 1027270e push 0x102a04b0 */
  push32((uint32_t)(0x102a04b0u));
  /* 10272713 call 0x10271005 */
  push32(0x10272718u); f_10271005();
  /* 10272718 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027271b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027271d jne 0x1027277c */
  if (!C.zf) goto L_1027277c;
  /* 1027271f push 0x102a04c0 */
  push32((uint32_t)(0x102a04c0u));
  /* 10272724 call 0x10271005 */
  push32(0x10272729u); f_10271005();
  /* 10272729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027272c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027272e jne 0x1027277c */
  if (!C.zf) goto L_1027277c;
L_10272730:;
  /* 10272730 mov esi, esp */
  ESI = (ESP);
  /* 10272732 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272734 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10272736 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x1027273cu);
  /* 1027273c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027273f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272741 call 0x10273840 */
  push32(0x10272746u); f_10273840();
  /* 10272746 mov esi, esp */
  ESI = (ESP);
  /* 10272748 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027274a push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 1027274f call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272755u);
  /* 10272755 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027275a call 0x10273840 */
  push32(0x1027275fu); f_10273840();
  /* 1027275f mov esi, esp */
  ESI = (ESP);
  /* 10272761 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272763 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272765 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 1027276a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027276c call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272772u);
  /* 10272772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272775 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272777 call 0x10273840 */
  push32(0x1027277cu); f_10273840();
L_1027277c:;
  /* 1027277c mov esi, esp */
  ESI = (ESP);
  /* 1027277e push 0xd */
  push32((uint32_t)(0xdu));
  /* 10272780 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272786u);
  /* 10272786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272789 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027278b call 0x10273840 */
  push32(0x10272790u); f_10273840();
  /* 10272790 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272795 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272797 je 0x102727cf */
  if (C.zf) goto L_102727cf;
  /* 10272799 mov esi, esp */
  ESI = (ESP);
  /* 1027279b push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 102727a0 push 0x102a0490 */
  push32((uint32_t)(0x102a0490u));
  /* 102727a5 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x102727abu);
  /* 102727ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102727ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102727b0 call 0x10273840 */
  push32(0x102727b5u); f_10273840();
  /* 102727b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102727b7 jle 0x102727cf */
  if ((C.zf||C.sf!=C.of)) goto L_102727cf;
  /* 102727b9 mov esi, esp */
  ESI = (ESP);
  /* 102727bb push 0 */
  push32((uint32_t)(0x0u));
  /* 102727bd push 0xd */
  push32((uint32_t)(0xdu));
  /* 102727bf call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x102727c5u);
  /* 102727c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102727c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102727ca call 0x10273840 */
  push32(0x102727cfu); f_10273840();
L_102727cf:;
  /* 102727cf mov esi, esp */
  ESI = (ESP);
  /* 102727d1 push 0xd */
  push32((uint32_t)(0xdu));
  /* 102727d3 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102727d9u);
  /* 102727d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102727dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102727de call 0x10273840 */
  push32(0x102727e3u); f_10273840();
  /* 102727e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102727e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102727ea jne 0x1027284c */
  if (!C.zf) goto L_1027284c;
  /* 102727ec push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 102727f1 call 0x10271005 */
  push32(0x102727f6u); f_10271005();
  /* 102727f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102727f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102727fb jle 0x1027284c */
  if ((C.zf||C.sf!=C.of)) goto L_1027284c;
  /* 102727fd mov esi, esp */
  ESI = (ESP);
  /* 102727ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10272801 push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 10272806 call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x1027280cu);
  /* 1027280c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027280f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272811 call 0x10273840 */
  push32(0x10272816u); f_10273840();
  /* 10272816 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272818 jle 0x1027284c */
  if ((C.zf||C.sf!=C.of)) goto L_1027284c;
  /* 1027281a mov esi, esp */
  ESI = (ESP);
  /* 1027281c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027281e push 0x102a0410 */
  push32((uint32_t)(0x102a0410u));
  /* 10272823 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272829u);
  /* 10272829 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027282c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027282e call 0x10273840 */
  push32(0x10272833u); f_10273840();
  /* 10272833 mov esi, esp */
  ESI = (ESP);
  /* 10272835 push 0x102a03f8 */
  push32((uint32_t)(0x102a03f8u));
  /* 1027283a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027283c call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272842u);
  /* 10272842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272847 call 0x10273840 */
  push32(0x1027284cu); f_10273840();
L_1027284c:;
  /* 1027284c mov esi, esp */
  ESI = (ESP);
  /* 1027284e push 1 */
  push32((uint32_t)(0x1u));
  /* 10272850 push 0x102a0430 */
  push32((uint32_t)(0x102a0430u));
  /* 10272855 call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x1027285bu);
  /* 1027285b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027285e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272860 call 0x10273840 */
  push32(0x10272865u); f_10273840();
  /* 10272865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272867 jle 0x102728ac */
  if ((C.zf||C.sf!=C.of)) goto L_102728ac;
  /* 10272869 mov esi, esp */
  ESI = (ESP);
  /* 1027286b push 1 */
  push32((uint32_t)(0x1u));
  /* 1027286d call dword ptr [0x102a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3440))), 0x10272873u);
  /* 10272873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272878 call 0x10273840 */
  push32(0x1027287du); f_10273840();
  /* 1027287d mov esi, esp */
  ESI = (ESP);
  /* 1027287f push 0 */
  push32((uint32_t)(0x0u));
  /* 10272881 push 0x102a0430 */
  push32((uint32_t)(0x102a0430u));
  /* 10272886 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272888 call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x1027288eu);
  /* 1027288e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272891 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272893 call 0x10273840 */
  push32(0x10272898u); f_10273840();
  /* 10272898 mov esi, esp */
  ESI = (ESP);
  /* 1027289a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027289c call dword ptr [0x102a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3444))), 0x102728a2u);
  /* 102728a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102728a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102728a7 call 0x10273840 */
  push32(0x102728acu); f_10273840();
L_102728ac:;
  /* 102728ac mov esi, esp */
  ESI = (ESP);
  /* 102728ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102728b0 push 0x102a0438 */
  push32((uint32_t)(0x102a0438u));
  /* 102728b5 call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x102728bbu);
  /* 102728bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102728be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102728c0 call 0x10273840 */
  push32(0x102728c5u); f_10273840();
  /* 102728c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102728c7 jle 0x10272940 */
  if ((C.zf||C.sf!=C.of)) goto L_10272940;
  /* 102728c9 mov esi, esp */
  ESI = (ESP);
  /* 102728cb push 0 */
  push32((uint32_t)(0x0u));
  /* 102728cd push 0x102a0428 */
  push32((uint32_t)(0x102a0428u));
  /* 102728d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102728d4 call dword ptr [0x102a3430] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3430))), 0x102728dau);
  /* 102728da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102728dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102728df call 0x10273840 */
  push32(0x102728e4u); f_10273840();
  /* 102728e4 mov esi, esp */
  ESI = (ESP);
  /* 102728e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102728e8 call dword ptr [0x102a3440] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3440))), 0x102728eeu);
  /* 102728ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102728f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102728f3 call 0x10273840 */
  push32(0x102728f8u); f_10273840();
  /* 102728f8 mov esi, esp */
  ESI = (ESP);
  /* 102728fa push 0 */
  push32((uint32_t)(0x0u));
  /* 102728fc push 0x102a0438 */
  push32((uint32_t)(0x102a0438u));
  /* 10272901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272903 call dword ptr [0x102a342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a342c))), 0x10272909u);
  /* 10272909 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027290c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027290e call 0x10273840 */
  push32(0x10272913u); f_10273840();
  /* 10272913 mov esi, esp */
  ESI = (ESP);
  /* 10272915 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272917 call dword ptr [0x102a3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3444))), 0x1027291du);
  /* 1027291d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272920 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272922 call 0x10273840 */
  push32(0x10272927u); f_10273840();
  /* 10272927 mov esi, esp */
  ESI = (ESP);
  /* 10272929 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027292b push 0x102a0428 */
  push32((uint32_t)(0x102a0428u));
  /* 10272930 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272936u);
  /* 10272936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027293b call 0x10273840 */
  push32(0x10272940u); f_10273840();
L_10272940:;
  /* 10272940 mov esi, esp */
  ESI = (ESP);
  /* 10272942 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10272944 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x1027294au);
  /* 1027294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027294d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027294f call 0x10273840 */
  push32(0x10272954u); f_10273840();
  /* 10272954 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027295b je 0x102729aa */
  if (C.zf) goto L_102729aa;
  /* 1027295d push 0x102a03e0 */
  push32((uint32_t)(0x102a03e0u));
  /* 10272962 call 0x10271005 */
  push32(0x10272967u); f_10271005();
  /* 10272967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027296a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027296c jne 0x102729aa */
  if (!C.zf) goto L_102729aa;
  /* 1027296e mov esi, esp */
  ESI = (ESP);
  /* 10272970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272972 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10272974 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x1027297au);
  /* 1027297a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027297d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027297f call 0x10273840 */
  push32(0x10272984u); f_10273840();
  /* 10272984 mov esi, esp */
  ESI = (ESP);
  /* 10272986 push 0x1029b0f4 */
  push32((uint32_t)(0x1029b0f4u));
  /* 1027298b call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x10272991u);
  /* 10272991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272994 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272996 call 0x10273840 */
  push32(0x1027299bu); f_10273840();
  /* 1027299b mov esi, esp */
  ESI = (ESP);
  /* 1027299d call dword ptr [0x102a344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a344c))), 0x102729a3u);
  /* 102729a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102729a5 call 0x10273840 */
  push32(0x102729aau); f_10273840();
L_102729aa:;
  /* 102729aa mov esi, esp */
  ESI = (ESP);
  /* 102729ac push 0xf */
  push32((uint32_t)(0xfu));
  /* 102729ae call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x102729b4u);
  /* 102729b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102729b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102729b9 call 0x10273840 */
  push32(0x102729beu); f_10273840();
  /* 102729be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102729c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102729c5 je 0x10272a9e */
  if (C.zf) goto L_10272a9e;
  /* 102729cb mov esi, esp */
  ESI = (ESP);
  /* 102729cd push 1 */
  push32((uint32_t)(0x1u));
  /* 102729cf push 0x102a0438 */
  push32((uint32_t)(0x102a0438u));
  /* 102729d4 call dword ptr [0x102a343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a343c))), 0x102729dau);
  /* 102729da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102729dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102729df call 0x10273840 */
  push32(0x102729e4u); f_10273840();
  /* 102729e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102729e6 jne 0x10272a9e */
  if (!C.zf) goto L_10272a9e;
  /* 102729ec push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 102729f1 call 0x10271005 */
  push32(0x102729f6u); f_10271005();
  /* 102729f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102729f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102729fb jne 0x10272a9e */
  if (!C.zf) goto L_10272a9e;
  /* 10272a01 mov esi, esp */
  ESI = (ESP);
  /* 10272a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272a05 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10272a07 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272a0du);
  /* 10272a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a12 call 0x10273840 */
  push32(0x10272a17u); f_10273840();
  /* 10272a17 push 0x102a0420 */
  push32((uint32_t)(0x102a0420u));
  /* 10272a1c call 0x10271005 */
  push32(0x10272a21u); f_10271005();
  /* 10272a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a24 cmp eax, 0x7f */
  { uint32_t _a=(EAX),_b=(0x7fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a27 jne 0x10272a51 */
  if (!C.zf) goto L_10272a51;
  /* 10272a29 mov esi, esp */
  ESI = (ESP);
  /* 10272a2b push 0x1029b0ec */
  push32((uint32_t)(0x1029b0ecu));
  /* 10272a30 call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x10272a36u);
  /* 10272a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a3b call 0x10273840 */
  push32(0x10272a40u); f_10273840();
  /* 10272a40 mov esi, esp */
  ESI = (ESP);
  /* 10272a42 call dword ptr [0x102a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3450))), 0x10272a48u);
  /* 10272a48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a4a call 0x10273840 */
  push32(0x10272a4fu); f_10273840();
  /* 10272a4f jmp 0x10272a9e */
  goto L_10272a9e;
L_10272a51:;
  /* 10272a51 mov esi, esp */
  ESI = (ESP);
  /* 10272a53 push 0x1029b0e4 */
  push32((uint32_t)(0x1029b0e4u));
  /* 10272a58 call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x10272a5eu);
  /* 10272a5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a61 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a63 call 0x10273840 */
  push32(0x10272a68u); f_10273840();
  /* 10272a68 mov esi, esp */
  ESI = (ESP);
  /* 10272a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10272a6c push 0x102a0440 */
  push32((uint32_t)(0x102a0440u));
  /* 10272a71 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272a77u);
  /* 10272a77 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a7c call 0x10273840 */
  push32(0x10272a81u); f_10273840();
  /* 10272a81 mov esi, esp */
  ESI = (ESP);
  /* 10272a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272a87 push 0x102a0460 */
  push32((uint32_t)(0x102a0460u));
  /* 10272a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 10272a8e call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272a94u);
  /* 10272a94 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272a97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272a99 call 0x10273840 */
  push32(0x10272a9eu); f_10273840();
L_10272a9e:;
  /* 10272a9e mov esi, esp */
  ESI = (ESP);
  /* 10272aa0 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10272aa2 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272aa8u);
  /* 10272aa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272aab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272aad call 0x10273840 */
  push32(0x10272ab2u); f_10273840();
  /* 10272ab2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272ab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272ab9 je 0x10272b09 */
  if (C.zf) goto L_10272b09;
  /* 10272abb push 0x102a0440 */
  push32((uint32_t)(0x102a0440u));
  /* 10272ac0 call 0x10271005 */
  push32(0x10272ac5u); f_10271005();
  /* 10272ac5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272ac8 cmp eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272acb jge 0x10272b09 */
  if ((C.sf==C.of)) goto L_10272b09;
  /* 10272acd mov esi, esp */
  ESI = (ESP);
  /* 10272acf push 0 */
  push32((uint32_t)(0x0u));
  /* 10272ad1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10272ad3 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272ad9u);
  /* 10272ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272adc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ade call 0x10273840 */
  push32(0x10272ae3u); f_10273840();
  /* 10272ae3 mov esi, esp */
  ESI = (ESP);
  /* 10272ae5 push 0x1029b0dc */
  push32((uint32_t)(0x1029b0dcu));
  /* 10272aea call dword ptr [0x102a3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3408))), 0x10272af0u);
  /* 10272af0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272af3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272af5 call 0x10273840 */
  push32(0x10272afau); f_10273840();
  /* 10272afa mov esi, esp */
  ESI = (ESP);
  /* 10272afc call dword ptr [0x102a3450] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3450))), 0x10272b02u);
  /* 10272b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b04 call 0x10273840 */
  push32(0x10272b09u); f_10273840();
L_10272b09:;
  /* 10272b09 mov esi, esp */
  ESI = (ESP);
  /* 10272b0b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10272b0d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272b13u);
  /* 10272b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272b16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b18 call 0x10273840 */
  push32(0x10272b1du); f_10273840();
  /* 10272b1d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272b22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272b24 je 0x10272b79 */
  if (C.zf) goto L_10272b79;
  /* 10272b26 mov esi, esp */
  ESI = (ESP);
  /* 10272b28 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272b2d push 0x102a0498 */
  push32((uint32_t)(0x102a0498u));
  /* 10272b32 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10272b38u);
  /* 10272b38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272b3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b3d call 0x10273840 */
  push32(0x10272b42u); f_10273840();
  /* 10272b42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272b44 jle 0x10272b79 */
  if ((C.zf||C.sf!=C.of)) goto L_10272b79;
  /* 10272b46 mov esi, esp */
  ESI = (ESP);
  /* 10272b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272b4a push 0x102a0498 */
  push32((uint32_t)(0x102a0498u));
  /* 10272b4f call dword ptr [0x102a3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3448))), 0x10272b55u);
  /* 10272b55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272b58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b5a call 0x10273840 */
  push32(0x10272b5fu); f_10273840();
  /* 10272b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272b61 jne 0x10272b79 */
  if (!C.zf) goto L_10272b79;
  /* 10272b63 mov esi, esp */
  ESI = (ESP);
  /* 10272b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272b67 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10272b69 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272b6fu);
  /* 10272b6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272b72 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b74 call 0x10273840 */
  push32(0x10272b79u); f_10273840();
L_10272b79:;
  /* 10272b79 mov esi, esp */
  ESI = (ESP);
  /* 10272b7b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10272b7d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272b83u);
  /* 10272b83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272b86 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272b88 call 0x10273840 */
  push32(0x10272b8du); f_10273840();
  /* 10272b8d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272b92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272b94 jne 0x10272bea */
  if (!C.zf) goto L_10272bea;
  /* 10272b96 push 0x102a0500 */
  push32((uint32_t)(0x102a0500u));
  /* 10272b9b call 0x10271005 */
  push32(0x10272ba0u); f_10271005();
  /* 10272ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272ba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272ba5 jle 0x10272bea */
  if ((C.zf||C.sf!=C.of)) goto L_10272bea;
  /* 10272ba7 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272bac call 0x10271005 */
  push32(0x10272bb1u); f_10271005();
  /* 10272bb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272bb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272bb6 jle 0x10272bea */
  if ((C.zf||C.sf!=C.of)) goto L_10272bea;
  /* 10272bb8 mov esi, esp */
  ESI = (ESP);
  /* 10272bba push 0 */
  push32((uint32_t)(0x0u));
  /* 10272bbc push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272bc1 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272bc7u);
  /* 10272bc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272bca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272bcc call 0x10273840 */
  push32(0x10272bd1u); f_10273840();
  /* 10272bd1 mov esi, esp */
  ESI = (ESP);
  /* 10272bd3 push 0x102a0500 */
  push32((uint32_t)(0x102a0500u));
  /* 10272bd8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272bda call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272be0u);
  /* 10272be0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272be3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272be5 call 0x10273840 */
  push32(0x10272beau); f_10273840();
L_10272bea:;
  /* 10272bea mov esi, esp */
  ESI = (ESP);
  /* 10272bec push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10272bee call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272bf4u);
  /* 10272bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272bf9 call 0x10273840 */
  push32(0x10272bfeu); f_10273840();
  /* 10272bfe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272c05 je 0x10272c2e */
  if (C.zf) goto L_10272c2e;
  /* 10272c07 push 0x102a0500 */
  push32((uint32_t)(0x102a0500u));
  /* 10272c0c call 0x10271005 */
  push32(0x10272c11u); f_10271005();
  /* 10272c11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272c16 jne 0x10272c2e */
  if (!C.zf) goto L_10272c2e;
  /* 10272c18 mov esi, esp */
  ESI = (ESP);
  /* 10272c1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10272c1c push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10272c1e call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272c24u);
  /* 10272c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272c29 call 0x10273840 */
  push32(0x10272c2eu); f_10273840();
L_10272c2e:;
  /* 10272c2e mov esi, esp */
  ESI = (ESP);
  /* 10272c30 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10272c32 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272c38u);
  /* 10272c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c3b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272c3d call 0x10273840 */
  push32(0x10272c42u); f_10273840();
  /* 10272c42 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272c49 jne 0x10272c9f */
  if (!C.zf) goto L_10272c9f;
  /* 10272c4b push 0x102a0450 */
  push32((uint32_t)(0x102a0450u));
  /* 10272c50 call 0x10271005 */
  push32(0x10272c55u); f_10271005();
  /* 10272c55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272c5a jle 0x10272c9f */
  if ((C.zf||C.sf!=C.of)) goto L_10272c9f;
  /* 10272c5c push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272c61 call 0x10271005 */
  push32(0x10272c66u); f_10271005();
  /* 10272c66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272c6b jle 0x10272c9f */
  if ((C.zf||C.sf!=C.of)) goto L_10272c9f;
  /* 10272c6d mov esi, esp */
  ESI = (ESP);
  /* 10272c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10272c71 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272c76 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272c7cu);
  /* 10272c7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272c81 call 0x10273840 */
  push32(0x10272c86u); f_10273840();
  /* 10272c86 mov esi, esp */
  ESI = (ESP);
  /* 10272c88 push 0x102a0450 */
  push32((uint32_t)(0x102a0450u));
  /* 10272c8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10272c8f call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272c95u);
  /* 10272c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272c9a call 0x10273840 */
  push32(0x10272c9fu); f_10273840();
L_10272c9f:;
  /* 10272c9f mov esi, esp */
  ESI = (ESP);
  /* 10272ca1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10272ca3 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272ca9u);
  /* 10272ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272cae call 0x10273840 */
  push32(0x10272cb3u); f_10273840();
  /* 10272cb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272cba je 0x10272d19 */
  if (C.zf) goto L_10272d19;
  /* 10272cbc push 0x102a0450 */
  push32((uint32_t)(0x102a0450u));
  /* 10272cc1 call 0x10271005 */
  push32(0x10272cc6u); f_10271005();
  /* 10272cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272ccb jne 0x10272d19 */
  if (!C.zf) goto L_10272d19;
  /* 10272ccd mov esi, esp */
  ESI = (ESP);
  /* 10272ccf push 0 */
  push32((uint32_t)(0x0u));
  /* 10272cd1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10272cd3 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272cd9u);
  /* 10272cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272cde call 0x10273840 */
  push32(0x10272ce3u); f_10273840();
  /* 10272ce3 mov esi, esp */
  ESI = (ESP);
  /* 10272ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272ce7 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272cec call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272cf2u);
  /* 10272cf2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272cf7 call 0x10273840 */
  push32(0x10272cfcu); f_10273840();
  /* 10272cfc mov esi, esp */
  ESI = (ESP);
  /* 10272cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10272d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272d02 push 0x102a04a8 */
  push32((uint32_t)(0x102a04a8u));
  /* 10272d07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272d09 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272d0fu);
  /* 10272d0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d12 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d14 call 0x10273840 */
  push32(0x10272d19u); f_10273840();
L_10272d19:;
  /* 10272d19 mov esi, esp */
  ESI = (ESP);
  /* 10272d1b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10272d1d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272d23u);
  /* 10272d23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d28 call 0x10273840 */
  push32(0x10272d2du); f_10273840();
  /* 10272d2d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272d32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272d34 je 0x10272d89 */
  if (C.zf) goto L_10272d89;
  /* 10272d36 mov esi, esp */
  ESI = (ESP);
  /* 10272d38 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10272d3a call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272d40u);
  /* 10272d40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d45 call 0x10273840 */
  push32(0x10272d4au); f_10273840();
  /* 10272d4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272d4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272d51 jne 0x10272d89 */
  if (!C.zf) goto L_10272d89;
  /* 10272d53 mov esi, esp */
  ESI = (ESP);
  /* 10272d55 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272d5a push 0x102a04a8 */
  push32((uint32_t)(0x102a04a8u));
  /* 10272d5f call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10272d65u);
  /* 10272d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d6a call 0x10273840 */
  push32(0x10272d6fu); f_10273840();
  /* 10272d6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272d71 jle 0x10272d89 */
  if ((C.zf||C.sf!=C.of)) goto L_10272d89;
  /* 10272d73 mov esi, esp */
  ESI = (ESP);
  /* 10272d75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272d77 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10272d79 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272d7fu);
  /* 10272d7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d84 call 0x10273840 */
  push32(0x10272d89u); f_10273840();
L_10272d89:;
  /* 10272d89 mov esi, esp */
  ESI = (ESP);
  /* 10272d8b push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10272d8d call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272d93u);
  /* 10272d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272d96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272d98 call 0x10273840 */
  push32(0x10272d9du); f_10273840();
  /* 10272d9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272da2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272da4 jne 0x10272dfa */
  if (!C.zf) goto L_10272dfa;
  /* 10272da6 push 0x102a0508 */
  push32((uint32_t)(0x102a0508u));
  /* 10272dab call 0x10271005 */
  push32(0x10272db0u); f_10271005();
  /* 10272db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272db3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272db5 jle 0x10272dfa */
  if ((C.zf||C.sf!=C.of)) goto L_10272dfa;
  /* 10272db7 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272dbc call 0x10271005 */
  push32(0x10272dc1u); f_10271005();
  /* 10272dc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272dc4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272dc6 jle 0x10272dfa */
  if ((C.zf||C.sf!=C.of)) goto L_10272dfa;
  /* 10272dc8 mov esi, esp */
  ESI = (ESP);
  /* 10272dca push 0 */
  push32((uint32_t)(0x0u));
  /* 10272dcc push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272dd1 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272dd7u);
  /* 10272dd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272dda cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ddc call 0x10273840 */
  push32(0x10272de1u); f_10273840();
  /* 10272de1 mov esi, esp */
  ESI = (ESP);
  /* 10272de3 push 0x102a0508 */
  push32((uint32_t)(0x102a0508u));
  /* 10272de8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272dea call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272df0u);
  /* 10272df0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272df3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272df5 call 0x10273840 */
  push32(0x10272dfau); f_10273840();
L_10272dfa:;
  /* 10272dfa mov esi, esp */
  ESI = (ESP);
  /* 10272dfc push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10272dfe call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272e04u);
  /* 10272e04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272e09 call 0x10273840 */
  push32(0x10272e0eu); f_10273840();
  /* 10272e0e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272e13 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272e15 je 0x10272e74 */
  if (C.zf) goto L_10272e74;
  /* 10272e17 push 0x102a0508 */
  push32((uint32_t)(0x102a0508u));
  /* 10272e1c call 0x10271005 */
  push32(0x10272e21u); f_10271005();
  /* 10272e21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272e26 jne 0x10272e74 */
  if (!C.zf) goto L_10272e74;
  /* 10272e28 mov esi, esp */
  ESI = (ESP);
  /* 10272e2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10272e2c push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10272e2e call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272e34u);
  /* 10272e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272e39 call 0x10273840 */
  push32(0x10272e3eu); f_10273840();
  /* 10272e3e mov esi, esp */
  ESI = (ESP);
  /* 10272e40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272e42 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272e47 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272e4du);
  /* 10272e4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272e52 call 0x10273840 */
  push32(0x10272e57u); f_10273840();
  /* 10272e57 mov esi, esp */
  ESI = (ESP);
  /* 10272e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272e5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10272e5d push 0x102a04b8 */
  push32((uint32_t)(0x102a04b8u));
  /* 10272e62 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272e64 call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272e6au);
  /* 10272e6a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272e6f call 0x10273840 */
  push32(0x10272e74u); f_10273840();
L_10272e74:;
  /* 10272e74 mov esi, esp */
  ESI = (ESP);
  /* 10272e76 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10272e78 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272e7eu);
  /* 10272e7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272e83 call 0x10273840 */
  push32(0x10272e88u); f_10273840();
  /* 10272e88 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272e8f je 0x10272ee4 */
  if (C.zf) goto L_10272ee4;
  /* 10272e91 mov esi, esp */
  ESI = (ESP);
  /* 10272e93 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10272e95 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272e9bu);
  /* 10272e9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272e9e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ea0 call 0x10273840 */
  push32(0x10272ea5u); f_10273840();
  /* 10272ea5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272eaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272eac jne 0x10272ee4 */
  if (!C.zf) goto L_10272ee4;
  /* 10272eae mov esi, esp */
  ESI = (ESP);
  /* 10272eb0 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272eb5 push 0x102a04b8 */
  push32((uint32_t)(0x102a04b8u));
  /* 10272eba call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x10272ec0u);
  /* 10272ec0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272ec3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ec5 call 0x10273840 */
  push32(0x10272ecau); f_10273840();
  /* 10272eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272ecc jle 0x10272ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10272ee4;
  /* 10272ece mov esi, esp */
  ESI = (ESP);
  /* 10272ed0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272ed2 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10272ed4 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272edau);
  /* 10272eda add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272edf call 0x10273840 */
  push32(0x10272ee4u); f_10273840();
L_10272ee4:;
  /* 10272ee4 mov esi, esp */
  ESI = (ESP);
  /* 10272ee6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10272ee8 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272eeeu);
  /* 10272eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272ef1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ef3 call 0x10273840 */
  push32(0x10272ef8u); f_10273840();
  /* 10272ef8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272efd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272eff jne 0x10272f55 */
  if (!C.zf) goto L_10272f55;
  /* 10272f01 push 0x102a0510 */
  push32((uint32_t)(0x102a0510u));
  /* 10272f06 call 0x10271005 */
  push32(0x10272f0bu); f_10271005();
  /* 10272f0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272f10 jle 0x10272f55 */
  if ((C.zf||C.sf!=C.of)) goto L_10272f55;
  /* 10272f12 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272f17 call 0x10271005 */
  push32(0x10272f1cu); f_10271005();
  /* 10272f1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272f21 jle 0x10272f55 */
  if ((C.zf||C.sf!=C.of)) goto L_10272f55;
  /* 10272f23 mov esi, esp */
  ESI = (ESP);
  /* 10272f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272f27 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272f2c call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272f32u);
  /* 10272f32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f35 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272f37 call 0x10273840 */
  push32(0x10272f3cu); f_10273840();
  /* 10272f3c mov esi, esp */
  ESI = (ESP);
  /* 10272f3e push 0x102a0510 */
  push32((uint32_t)(0x102a0510u));
  /* 10272f43 push 1 */
  push32((uint32_t)(0x1u));
  /* 10272f45 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x10272f4bu);
  /* 10272f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272f50 call 0x10273840 */
  push32(0x10272f55u); f_10273840();
L_10272f55:;
  /* 10272f55 mov esi, esp */
  ESI = (ESP);
  /* 10272f57 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10272f59 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272f5fu);
  /* 10272f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272f64 call 0x10273840 */
  push32(0x10272f69u); f_10273840();
  /* 10272f69 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272f70 je 0x10272fcf */
  if (C.zf) goto L_10272fcf;
  /* 10272f72 push 0x102a0510 */
  push32((uint32_t)(0x102a0510u));
  /* 10272f77 call 0x10271005 */
  push32(0x10272f7cu); f_10271005();
  /* 10272f7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272f81 jne 0x10272fcf */
  if (!C.zf) goto L_10272fcf;
  /* 10272f83 mov esi, esp */
  ESI = (ESP);
  /* 10272f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272f87 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10272f89 call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10272f8fu);
  /* 10272f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272f92 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272f94 call 0x10273840 */
  push32(0x10272f99u); f_10273840();
  /* 10272f99 mov esi, esp */
  ESI = (ESP);
  /* 10272f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10272f9d push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10272fa2 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x10272fa8u);
  /* 10272fa8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272fab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272fad call 0x10273840 */
  push32(0x10272fb2u); f_10273840();
  /* 10272fb2 mov esi, esp */
  ESI = (ESP);
  /* 10272fb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10272fb8 push 0x102a04c8 */
  push32((uint32_t)(0x102a04c8u));
  /* 10272fbd push 1 */
  push32((uint32_t)(0x1u));
  /* 10272fbf call dword ptr [0x102a3428] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3428))), 0x10272fc5u);
  /* 10272fc5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272fc8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272fca call 0x10273840 */
  push32(0x10272fcfu); f_10273840();
L_10272fcf:;
  /* 10272fcf mov esi, esp */
  ESI = (ESP);
  /* 10272fd1 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10272fd3 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272fd9u);
  /* 10272fd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272fdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272fde call 0x10273840 */
  push32(0x10272fe3u); f_10273840();
  /* 10272fe3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10272fe8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10272fea je 0x1027303f */
  if (C.zf) goto L_1027303f;
  /* 10272fec mov esi, esp */
  ESI = (ESP);
  /* 10272fee push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10272ff0 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10272ff6u);
  /* 10272ff6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10272ff9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10272ffb call 0x10273840 */
  push32(0x10273000u); f_10273840();
  /* 10273000 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273007 jne 0x1027303f */
  if (!C.zf) goto L_1027303f;
  /* 10273009 mov esi, esp */
  ESI = (ESP);
  /* 1027300b push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10273010 push 0x102a04c8 */
  push32((uint32_t)(0x102a04c8u));
  /* 10273015 call dword ptr [0x102a3424] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3424))), 0x1027301bu);
  /* 1027301b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027301e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273020 call 0x10273840 */
  push32(0x10273025u); f_10273840();
  /* 10273025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273027 jle 0x1027303f */
  if ((C.zf||C.sf!=C.of)) goto L_1027303f;
  /* 10273029 mov esi, esp */
  ESI = (ESP);
  /* 1027302b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027302d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1027302f call dword ptr [0x102a3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3404))), 0x10273035u);
  /* 10273035 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273038 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027303a call 0x10273840 */
  push32(0x1027303fu); f_10273840();
L_1027303f:;
  /* 1027303f mov esi, esp */
  ESI = (ESP);
  /* 10273041 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10273043 call dword ptr [0x102a33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33f8))), 0x10273049u);
  /* 10273049 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027304c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027304e call 0x10273840 */
  push32(0x10273053u); f_10273840();
  /* 10273053 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273058 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027305a jne 0x102730b0 */
  if (!C.zf) goto L_102730b0;
  /* 1027305c push 0x102a0518 */
  push32((uint32_t)(0x102a0518u));
  /* 10273061 call 0x10271005 */
  push32(0x10273066u); f_10271005();
  /* 10273066 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273069 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027306b jle 0x102730b0 */
  if ((C.zf||C.sf!=C.of)) goto L_102730b0;
  /* 1027306d push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10273072 call 0x10271005 */
  push32(0x10273077u); f_10271005();
  /* 10273077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027307a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027307c jle 0x102730b0 */
  if ((C.zf||C.sf!=C.of)) goto L_102730b0;
  /* 1027307e mov esi, esp */
  ESI = (ESP);
  /* 10273080 push 0 */
  push32((uint32_t)(0x0u));
  /* 10273082 push 0x102a0448 */
  push32((uint32_t)(0x102a0448u));
  /* 10273087 call dword ptr [0x102a3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3414))), 0x1027308du);
  /* 1027308d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273090 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273092 call 0x10273840 */
  push32(0x10273097u); f_10273840();
  /* 10273097 mov esi, esp */
  ESI = (ESP);
  /* 10273099 push 0x102a0518 */
  push32((uint32_t)(0x102a0518u));
  /* 1027309e push 1 */
  push32((uint32_t)(0x1u));
  /* 102730a0 call dword ptr [0x102a3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3434))), 0x102730a6u);
  /* 102730a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102730a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102730ab call 0x10273840 */
  push32(0x102730b0u); f_10273840();
L_102730b0:;
  /* 102730b0 pop edi */
  EDI = (pop32());
  /* 102730b1 pop esi */
  ESI = (pop32());
  /* 102730b2 pop ebx */
  EBX = (pop32());
  /* 102730b3 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102730b6 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102730b8 call 0x10273840 */
  push32(0x102730bdu); f_10273840();
  /* 102730bd mov esp, ebp */
  ESP = (EBP);
  /* 102730bf pop ebp */
  EBP = (pop32());
  /* 102730c0 ret  */
  ESPCHK(0x102716e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003740 @ 0x10273740 (63 bytes, 26 insns) */
void f_10273740(void) {
  FTRACE(0x10273740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273740 push ebp */
  push32((uint32_t)(EBP));
  /* 10273741 mov ebp, esp */
  EBP = (ESP);
  /* 10273743 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10273746 push ebx */
  push32((uint32_t)(EBX));
  /* 10273747 push esi */
  push32((uint32_t)(ESI));
  /* 10273748 push edi */
  push32((uint32_t)(EDI));
  /* 10273749 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1027374c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10273751 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10273756 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10273758 mov esi, esp */
  ESI = (ESP);
  /* 1027375a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027375d push eax */
  push32((uint32_t)(EAX));
  /* 1027375e call dword ptr [0x102a33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a33fc))), 0x10273764u);
  /* 10273764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273767 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273769 call 0x10273840 */
  push32(0x1027376eu); f_10273840();
  /* 1027376e pop edi */
  EDI = (pop32());
  /* 1027376f pop esi */
  ESI = (pop32());
  /* 10273770 pop ebx */
  EBX = (pop32());
  /* 10273771 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273774 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273776 call 0x10273840 */
  push32(0x1027377bu); f_10273840();
  /* 1027377b mov esp, ebp */
  ESP = (EBP);
  /* 1027377d pop ebp */
  EBP = (pop32());
  /* 1027377e ret  */
  ESPCHK(0x10273740u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10273840 (56 bytes, 28 insns) */
void f_10273840(void) {
  FTRACE(0x10273840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273840 jne 0x10273843 */
  if (!C.zf) goto L_10273843;
  /* 10273842 ret  */
  ESPCHK(0x10273840u, _esp0);
  ESP += 4; return;
L_10273843:;
  /* 10273843 push ebp */
  push32((uint32_t)(EBP));
  /* 10273844 mov ebp, esp */
  EBP = (ESP);
  /* 10273846 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10273849 push eax */
  push32((uint32_t)(EAX));
  /* 1027384a push edx */
  push32((uint32_t)(EDX));
  /* 1027384b push ebx */
  push32((uint32_t)(EBX));
  /* 1027384c push esi */
  push32((uint32_t)(ESI));
  /* 1027384d push edi */
  push32((uint32_t)(EDI));
  /* 1027384e push 0x1029b134 */
  push32((uint32_t)(0x1029b134u));
  /* 10273853 push 0x1029b130 */
  push32((uint32_t)(0x1029b130u));
  /* 10273858 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1027385a push 0x1029b120 */
  push32((uint32_t)(0x1029b120u));
  /* 1027385f push 1 */
  push32((uint32_t)(0x1u));
  /* 10273861 call 0x10273c10 */
  push32(0x10273866u); f_10273c10();
  /* 10273866 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273869 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027386c jne 0x1027386f */
  if (!C.zf) goto L_1027386f;
  /* 1027386e int3  */
  x86_unimpl("int3 @ 0x1027386e");
L_1027386f:;
  /* 1027386f pop edi */
  EDI = (pop32());
  /* 10273870 pop esi */
  ESI = (pop32());
  /* 10273871 pop ebx */
  EBX = (pop32());
  /* 10273872 pop edx */
  EDX = (pop32());
  /* 10273873 pop eax */
  EAX = (pop32());
  /* 10273874 mov esp, ebp */
  ESP = (EBP);
  /* 10273876 pop ebp */
  EBP = (pop32());
  /* 10273877 ret  */
  ESPCHK(0x10273840u, _esp0);
  ESP += 4; return;
}

/* FUN_10003880 @ 0x10273880 (313 bytes, 78 insns) */
void f_10273880(void) {
  FTRACE(0x10273880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273880 push ebp */
  push32((uint32_t)(EBP));
  /* 10273881 mov ebp, esp */
  EBP = (ESP);
  /* 10273883 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273887 jne 0x10273947 */
  if (!C.zf) goto L_10273947;
  /* 1027388d call dword ptr [0x102a32ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32ec))), 0x10273893u);
  /* 10273893 mov dword ptr [0x102a05a8], eax */
  w32((uint32_t)(0x102a05a8), (EAX));
  /* 10273898 push 1 */
  push32((uint32_t)(0x1u));
  /* 1027389a call 0x10277340 */
  push32(0x1027389fu); f_10277340();
  /* 1027389f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102738a2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102738a4 jne 0x102738ad */
  if (!C.zf) goto L_102738ad;
  /* 102738a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102738a8 jmp 0x102739b5 */
  goto L_102739b5;
L_102738ad:;
  /* 102738ad mov eax, dword ptr [0x102a05a8] */
  EAX = (r32((uint32_t)(0x102a05a8)));
  /* 102738b2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102738b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 102738ba mov dword ptr [0x102a05b4], eax */
  w32((uint32_t)(0x102a05b4), (EAX));
  /* 102738bf mov ecx, dword ptr [0x102a05a8] */
  ECX = (r32((uint32_t)(0x102a05a8)));
  /* 102738c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 102738cb mov dword ptr [0x102a05b0], ecx */
  w32((uint32_t)(0x102a05b0), (ECX));
  /* 102738d1 mov edx, dword ptr [0x102a05b0] */
  EDX = (r32((uint32_t)(0x102a05b0)));
  /* 102738d7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 102738da add edx, dword ptr [0x102a05b4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x102a05b4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102738e0 mov dword ptr [0x102a05ac], edx */
  w32((uint32_t)(0x102a05ac), (EDX));
  /* 102738e6 mov eax, dword ptr [0x102a05a8] */
  EAX = (r32((uint32_t)(0x102a05a8)));
  /* 102738eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102738ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102738f3 mov dword ptr [0x102a05a8], eax */
  w32((uint32_t)(0x102a05a8), (EAX));
  /* 102738f8 call 0x102744b0 */
  push32(0x102738fdu); f_102744b0();
  /* 102738fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102738ff jne 0x1027390d */
  if (!C.zf) goto L_1027390d;
  /* 10273901 call 0x10277390 */
  push32(0x10273906u); f_10277390();
  /* 10273906 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273908 jmp 0x102739b5 */
  goto L_102739b5;
L_1027390d:;
  /* 1027390d call dword ptr [0x102a32e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e8))), 0x10273913u);
  /* 10273913 mov dword ptr [0x102a20ec], eax */
  w32((uint32_t)(0x102a20ec), (EAX));
  /* 10273918 call 0x10277120 */
  push32(0x1027391du); f_10277120();
  /* 1027391d mov dword ptr [0x102a0590], eax */
  w32((uint32_t)(0x102a0590), (EAX));
  /* 10273922 call 0x10274760 */
  push32(0x10273927u); f_10274760();
  /* 10273927 call 0x10276c10 */
  push32(0x1027392cu); f_10276c10();
  /* 1027392c call 0x10276ac0 */
  push32(0x10273931u); f_10276ac0();
  /* 10273931 call 0x102742b0 */
  push32(0x10273936u); f_102742b0();
  /* 10273936 mov ecx, dword ptr [0x102a058c] */
  ECX = (r32((uint32_t)(0x102a058c)));
  /* 1027393c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027393f mov dword ptr [0x102a058c], ecx */
  w32((uint32_t)(0x102a058c), (ECX));
  /* 10273945 jmp 0x102739b0 */
  goto L_102739b0;
L_10273947:;
  /* 10273947 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027394b jne 0x102739a0 */
  if (!C.zf) goto L_102739a0;
  /* 1027394d cmp dword ptr [0x102a058c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a058c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273954 jle 0x1027399a */
  if ((C.zf||C.sf!=C.of)) goto L_1027399a;
  /* 10273956 mov edx, dword ptr [0x102a058c] */
  EDX = (r32((uint32_t)(0x102a058c)));
  /* 1027395c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027395f mov dword ptr [0x102a058c], edx */
  w32((uint32_t)(0x102a058c), (EDX));
  /* 10273965 cmp dword ptr [0x102a05e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027396c jne 0x10273973 */
  if (!C.zf) goto L_10273973;
  /* 1027396e call 0x10274330 */
  push32(0x10273973u); f_10274330();
L_10273973:;
  /* 10273973 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10273975 call 0x10276060 */
  push32(0x1027397au); f_10276060();
  /* 1027397a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027397d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10273980 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273982 je 0x10273989 */
  if (C.zf) goto L_10273989;
  /* 10273984 call 0x10276970 */
  push32(0x10273989u); f_10276970();
L_10273989:;
  /* 10273989 call 0x10274a90 */
  push32(0x1027398eu); f_10274a90();
  /* 1027398e call 0x10274540 */
  push32(0x10273993u); f_10274540();
  /* 10273993 call 0x10277390 */
  push32(0x10273998u); f_10277390();
  /* 10273998 jmp 0x1027399e */
  goto L_1027399e;
L_1027399a:;
  /* 1027399a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027399c jmp 0x102739b5 */
  goto L_102739b5;
L_1027399e:;
  /* 1027399e jmp 0x102739b0 */
  goto L_102739b0;
L_102739a0:;
  /* 102739a0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739a4 jne 0x102739b0 */
  if (!C.zf) goto L_102739b0;
  /* 102739a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102739a8 call 0x10274630 */
  push32(0x102739adu); f_10274630();
  /* 102739ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102739b0:;
  /* 102739b0 mov eax, 1 */
  EAX = (0x1u);
L_102739b5:;
  /* 102739b5 pop ebp */
  EBP = (pop32());
  /* 102739b6 ret 0xc */
  ESPCHK(0x10273880u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x102739c0 (243 bytes, 86 insns) */
void f_102739c0(void) {
  FTRACE(0x102739c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102739c0 push ebp */
  push32((uint32_t)(EBP));
  /* 102739c1 mov ebp, esp */
  EBP = (ESP);
  /* 102739c3 push ecx */
  push32((uint32_t)(ECX));
  /* 102739c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102739cb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739cf jne 0x102739e1 */
  if (!C.zf) goto L_102739e1;
  /* 102739d1 cmp dword ptr [0x102a058c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a058c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739d8 jne 0x102739e1 */
  if (!C.zf) goto L_102739e1;
  /* 102739da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102739dc jmp 0x10273aad */
  goto L_10273aad;
L_102739e1:;
  /* 102739e1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739e5 je 0x102739ed */
  if (C.zf) goto L_102739ed;
  /* 102739e7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739eb jne 0x10273a2f */
  if (!C.zf) goto L_10273a2f;
L_102739ed:;
  /* 102739ed cmp dword ptr [0x102a20fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102739f4 je 0x10273a0b */
  if (C.zf) goto L_10273a0b;
  /* 102739f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102739f9 push eax */
  push32((uint32_t)(EAX));
  /* 102739fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102739fd push ecx */
  push32((uint32_t)(ECX));
  /* 102739fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273a01 push edx */
  push32((uint32_t)(EDX));
  /* 10273a02 call dword ptr [0x102a20fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a20fc))), 0x10273a08u);
  /* 10273a08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10273a0b:;
  /* 10273a0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a0f je 0x10273a25 */
  if (C.zf) goto L_10273a25;
  /* 10273a11 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273a14 push eax */
  push32((uint32_t)(EAX));
  /* 10273a15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10273a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273a1c push edx */
  push32((uint32_t)(EDX));
  /* 10273a1d call 0x10273880 */
  push32(0x10273a22u); f_10273880();
  /* 10273a22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10273a25:;
  /* 10273a25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a29 jne 0x10273a2f */
  if (!C.zf) goto L_10273a2f;
  /* 10273a2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273a2d jmp 0x10273aad */
  goto L_10273aad;
L_10273a2f:;
  /* 10273a2f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273a32 push eax */
  push32((uint32_t)(EAX));
  /* 10273a33 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273a36 push ecx */
  push32((uint32_t)(ECX));
  /* 10273a37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273a3a push edx */
  push32((uint32_t)(EDX));
  /* 10273a3b call 0x1027100f */
  push32(0x10273a40u); f_1027100f();
  /* 10273a40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10273a43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a47 jne 0x10273a5e */
  if (!C.zf) goto L_10273a5e;
  /* 10273a49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a4d jne 0x10273a5e */
  if (!C.zf) goto L_10273a5e;
  /* 10273a4f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273a52 push eax */
  push32((uint32_t)(EAX));
  /* 10273a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10273a55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273a58 push ecx */
  push32((uint32_t)(ECX));
  /* 10273a59 call 0x10273880 */
  push32(0x10273a5eu); f_10273880();
L_10273a5e:;
  /* 10273a5e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a62 je 0x10273a6a */
  if (C.zf) goto L_10273a6a;
  /* 10273a64 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a68 jne 0x10273aaa */
  if (!C.zf) goto L_10273aaa;
L_10273a6a:;
  /* 10273a6a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273a6d push edx */
  push32((uint32_t)(EDX));
  /* 10273a6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273a71 push eax */
  push32((uint32_t)(EAX));
  /* 10273a72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273a75 push ecx */
  push32((uint32_t)(ECX));
  /* 10273a76 call 0x10273880 */
  push32(0x10273a7bu); f_10273880();
  /* 10273a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273a7d jne 0x10273a86 */
  if (!C.zf) goto L_10273a86;
  /* 10273a7f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10273a86:;
  /* 10273a86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a8a je 0x10273aaa */
  if (C.zf) goto L_10273aaa;
  /* 10273a8c cmp dword ptr [0x102a20fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273a93 je 0x10273aaa */
  if (C.zf) goto L_10273aaa;
  /* 10273a95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273a98 push edx */
  push32((uint32_t)(EDX));
  /* 10273a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273a9c push eax */
  push32((uint32_t)(EAX));
  /* 10273a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10273aa1 call dword ptr [0x102a20fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a20fc))), 0x10273aa7u);
  /* 10273aa7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10273aaa:;
  /* 10273aaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10273aad:;
  /* 10273aad mov esp, ebp */
  ESP = (EBP);
  /* 10273aaf pop ebp */
  EBP = (pop32());
  /* 10273ab0 ret 0xc */
  ESPCHK(0x102739c0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10273ac0 (58 bytes, 18 insns) */
void f_10273ac0(void) {
  FTRACE(0x10273ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10273ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10273ac3 cmp dword ptr [0x102a0598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273aca je 0x10273ade */
  if (C.zf) goto L_10273ade;
  /* 10273acc cmp dword ptr [0x102a0598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273ad3 jne 0x10273ae3 */
  if (!C.zf) goto L_10273ae3;
  /* 10273ad5 cmp dword ptr [0x102a059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273adc jne 0x10273ae3 */
  if (!C.zf) goto L_10273ae3;
L_10273ade:;
  /* 10273ade call 0x10277430 */
  push32(0x10273ae3u); f_10277430();
L_10273ae3:;
  /* 10273ae3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273ae6 push eax */
  push32((uint32_t)(EAX));
  /* 10273ae7 call 0x10277480 */
  push32(0x10273aecu); f_10277480();
  /* 10273aec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273aef push 0xff */
  push32((uint32_t)(0xffu));
  /* 10273af4 call dword ptr [0x1029ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029ea30))), 0x10273afau);
  /* 10273afa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273afd pop ebp */
  EBP = (pop32());
  /* 10273afe ret  */
  ESPCHK(0x10273ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x10273b00 (11 bytes, 5 insns) */
void f_10273b00(void) {
  FTRACE(0x10273b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10273b01 mov ebp, esp */
  EBP = (ESP);
  /* 10273b03 call dword ptr [0x102a32f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f0))), 0x10273b09u);
  /* 10273b09 pop ebp */
  EBP = (pop32());
  /* 10273b0a ret  */
  ESPCHK(0x10273b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b10 @ 0x10273b10 (87 bytes, 30 insns) */
void f_10273b10(void) {
  FTRACE(0x10273b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10273b11 mov ebp, esp */
  EBP = (ESP);
  /* 10273b13 push ecx */
  push32((uint32_t)(ECX));
  /* 10273b14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b18 jl 0x10273b20 */
  if ((C.sf!=C.of)) goto L_10273b20;
  /* 10273b1a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b1e jl 0x10273b25 */
  if ((C.sf!=C.of)) goto L_10273b25;
L_10273b20:;
  /* 10273b20 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273b23 jmp 0x10273b63 */
  goto L_10273b63;
L_10273b25:;
  /* 10273b25 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b29 jne 0x10273b37 */
  if (!C.zf) goto L_10273b37;
  /* 10273b2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273b2e mov eax, dword ptr [eax*4 + 0x1029ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1029ea38)));
  /* 10273b35 jmp 0x10273b63 */
  goto L_10273b63;
L_10273b37:;
  /* 10273b37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273b3a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10273b3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10273b3f je 0x10273b46 */
  if (C.zf) goto L_10273b46;
  /* 10273b41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273b44 jmp 0x10273b63 */
  goto L_10273b63;
L_10273b46:;
  /* 10273b46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273b49 mov eax, dword ptr [edx*4 + 0x1029ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1029ea38)));
  /* 10273b50 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10273b53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273b56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273b59 mov dword ptr [ecx*4 + 0x1029ea38], edx */
  w32((uint32_t)(ECX*4 + 0x1029ea38), (EDX));
  /* 10273b60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10273b63:;
  /* 10273b63 mov esp, ebp */
  ESP = (EBP);
  /* 10273b65 pop ebp */
  EBP = (pop32());
  /* 10273b66 ret  */
  ESPCHK(0x10273b10u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10273b70 (126 bytes, 38 insns) */
void f_10273b70(void) {
  FTRACE(0x10273b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10273b71 mov ebp, esp */
  EBP = (ESP);
  /* 10273b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10273b74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b78 jl 0x10273b80 */
  if ((C.sf!=C.of)) goto L_10273b80;
  /* 10273b7a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b7e jl 0x10273b87 */
  if ((C.sf!=C.of)) goto L_10273b87;
L_10273b80:;
  /* 10273b80 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10273b85 jmp 0x10273bea */
  goto L_10273bea;
L_10273b87:;
  /* 10273b87 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273b8b jne 0x10273b99 */
  if (!C.zf) goto L_10273b99;
  /* 10273b8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273b90 mov eax, dword ptr [eax*4 + 0x1029ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1029ea44)));
  /* 10273b97 jmp 0x10273bea */
  goto L_10273bea;
L_10273b99:;
  /* 10273b99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273b9c mov edx, dword ptr [ecx*4 + 0x1029ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea44)));
  /* 10273ba3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10273ba6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273baa jne 0x10273bc0 */
  if (!C.zf) goto L_10273bc0;
  /* 10273bac push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10273bae call dword ptr [0x102a32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f4))), 0x10273bb4u);
  /* 10273bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273bb7 mov dword ptr [ecx*4 + 0x1029ea44], eax */
  w32((uint32_t)(ECX*4 + 0x1029ea44), (EAX));
  /* 10273bbe jmp 0x10273be7 */
  goto L_10273be7;
L_10273bc0:;
  /* 10273bc0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273bc4 jne 0x10273bda */
  if (!C.zf) goto L_10273bda;
  /* 10273bc6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10273bc8 call dword ptr [0x102a32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f4))), 0x10273bceu);
  /* 10273bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273bd1 mov dword ptr [edx*4 + 0x1029ea44], eax */
  w32((uint32_t)(EDX*4 + 0x1029ea44), (EAX));
  /* 10273bd8 jmp 0x10273be7 */
  goto L_10273be7;
L_10273bda:;
  /* 10273bda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273bdd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273be0 mov dword ptr [eax*4 + 0x1029ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x1029ea44), (ECX));
L_10273be7:;
  /* 10273be7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10273bea:;
  /* 10273bea mov esp, ebp */
  ESP = (EBP);
  /* 10273bec pop ebp */
  EBP = (pop32());
  /* 10273bed ret  */
  ESPCHK(0x10273b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10003bf0 @ 0x10273bf0 (28 bytes, 11 insns) */
void f_10273bf0(void) {
  FTRACE(0x10273bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10273bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10273bf3 push ecx */
  push32((uint32_t)(ECX));
  /* 10273bf4 mov eax, dword ptr [0x102a20e0] */
  EAX = (r32((uint32_t)(0x102a20e0)));
  /* 10273bf9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10273bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273bff mov dword ptr [0x102a20e0], ecx */
  w32((uint32_t)(0x102a20e0), (ECX));
  /* 10273c05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10273c08 mov esp, ebp */
  ESP = (EBP);
  /* 10273c0a pop ebp */
  EBP = (pop32());
  /* 10273c0b ret  */
  ESPCHK(0x10273bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003c10 @ 0x10273c10 (912 bytes, 248 insns) */
void f_10273c10(void) {
  FTRACE(0x10273c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10273c11 mov ebp, esp */
  EBP = (ESP);
  /* 10273c13 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10273c18 call 0x10277cf0 */
  push32(0x10273c1du); f_10277cf0();
  /* 10273c1d push edi */
  push32((uint32_t)(EDI));
  /* 10273c1e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10273c25 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10273c2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273c2c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10273c32 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10273c34 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10273c36 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10273c37 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10273c3e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10273c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273c45 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10273c4b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10273c4d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10273c4f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10273c50 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10273c57 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10273c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273c5e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10273c64 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10273c66 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10273c68 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10273c69 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10273c6c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10273c72 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273c76 jl 0x10273c7e */
  if ((C.sf!=C.of)) goto L_10273c7e;
  /* 10273c78 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273c7c jl 0x10273c86 */
  if ((C.sf!=C.of)) goto L_10273c86;
L_10273c7e:;
  /* 10273c7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273c81 jmp 0x10273f9b */
  goto L_10273f9b;
L_10273c86:;
  /* 10273c86 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273c8a jne 0x10273d30 */
  if (!C.zf) goto L_10273d30;
  /* 10273c90 push 0x1029ea34 */
  push32((uint32_t)(0x1029ea34u));
  /* 10273c95 call dword ptr [0x102a330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a330c))), 0x10273c9bu);
  /* 10273c9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273c9d jle 0x10273d30 */
  if ((C.zf||C.sf!=C.of)) goto L_10273d30;
  /* 10273ca3 cmp dword ptr [0x102a05a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273caa jne 0x10273cee */
  if (!C.zf) goto L_10273cee;
  /* 10273cac push 0x1029b2dc */
  push32((uint32_t)(0x1029b2dcu));
  /* 10273cb1 call dword ptr [0x102a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3308))), 0x10273cb7u);
  /* 10273cb7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10273cbd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273cc4 je 0x10273ce6 */
  if (C.zf) goto L_10273ce6;
  /* 10273cc6 push 0x1029b2d0 */
  push32((uint32_t)(0x1029b2d0u));
  /* 10273ccb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10273cd1 push ecx */
  push32((uint32_t)(ECX));
  /* 10273cd2 call dword ptr [0x102a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3304))), 0x10273cd8u);
  /* 10273cd8 mov dword ptr [0x102a05a0], eax */
  w32((uint32_t)(0x102a05a0), (EAX));
  /* 10273cdd cmp dword ptr [0x102a05a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273ce4 jne 0x10273cee */
  if (!C.zf) goto L_10273cee;
L_10273ce6:;
  /* 10273ce6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273ce9 jmp 0x10273f9b */
  goto L_10273f9b;
L_10273cee:;
  /* 10273cee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273cf1 push edx */
  push32((uint32_t)(EDX));
  /* 10273cf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273cf5 push eax */
  push32((uint32_t)(EAX));
  /* 10273cf6 push 0x1029b29c */
  push32((uint32_t)(0x1029b29cu));
  /* 10273cfb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10273d01 push ecx */
  push32((uint32_t)(ECX));
  /* 10273d02 call dword ptr [0x102a05a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a05a0))), 0x10273d08u);
  /* 10273d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273d0b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10273d11 push edx */
  push32((uint32_t)(EDX));
  /* 10273d12 call dword ptr [0x102a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3300))), 0x10273d18u);
  /* 10273d18 push 0x1029ea34 */
  push32((uint32_t)(0x1029ea34u));
  /* 10273d1d call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10273d23u);
  /* 10273d23 call 0x10273b00 */
  push32(0x10273d28u); f_10273b00();
  /* 10273d28 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10273d2b jmp 0x10273f9b */
  goto L_10273f9b;
L_10273d30:;
  /* 10273d30 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273d34 je 0x10273d6d */
  if (C.zf) goto L_10273d6d;
  /* 10273d36 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10273d3c push eax */
  push32((uint32_t)(EAX));
  /* 10273d3d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10273d40 push ecx */
  push32((uint32_t)(ECX));
  /* 10273d41 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10273d46 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10273d4c push edx */
  push32((uint32_t)(EDX));
  /* 10273d4d call 0x10277bf0 */
  push32(0x10273d52u); f_10277bf0();
  /* 10273d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273d55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273d57 jge 0x10273d6d */
  if ((C.sf==C.of)) goto L_10273d6d;
  /* 10273d59 push 0x1029b270 */
  push32((uint32_t)(0x1029b270u));
  /* 10273d5e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10273d64 push eax */
  push32((uint32_t)(EAX));
  /* 10273d65 call 0x10277b00 */
  push32(0x10273d6au); f_10277b00();
  /* 10273d6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273d6d:;
  /* 10273d6d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273d71 jne 0x10273da5 */
  if (!C.zf) goto L_10273da5;
  /* 10273d73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273d77 je 0x10273d85 */
  if (C.zf) goto L_10273d85;
  /* 10273d79 mov dword ptr [ebp - 0x3028], 0x1029b25c */
  w32((uint32_t)(EBP + -0x3028), (0x1029b25cu));
  /* 10273d83 jmp 0x10273d8f */
  goto L_10273d8f;
L_10273d85:;
  /* 10273d85 mov dword ptr [ebp - 0x3028], 0x1029b248 */
  w32((uint32_t)(EBP + -0x3028), (0x1029b248u));
L_10273d8f:;
  /* 10273d8f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10273d95 push ecx */
  push32((uint32_t)(ECX));
  /* 10273d96 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10273d9c push edx */
  push32((uint32_t)(EDX));
  /* 10273d9d call 0x10277b00 */
  push32(0x10273da2u); f_10277b00();
  /* 10273da2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273da5:;
  /* 10273da5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10273dab push eax */
  push32((uint32_t)(EAX));
  /* 10273dac lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10273db2 push ecx */
  push32((uint32_t)(ECX));
  /* 10273db3 call 0x10277b10 */
  push32(0x10273db8u); f_10277b10();
  /* 10273db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273dbb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273dbf jne 0x10273dfa */
  if (!C.zf) goto L_10273dfa;
  /* 10273dc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273dc4 mov eax, dword ptr [edx*4 + 0x1029ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1029ea38)));
  /* 10273dcb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10273dce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273dd0 je 0x10273de6 */
  if (C.zf) goto L_10273de6;
  /* 10273dd2 push 0x1029b244 */
  push32((uint32_t)(0x1029b244u));
  /* 10273dd7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10273ddd push ecx */
  push32((uint32_t)(ECX));
  /* 10273dde call 0x10277b10 */
  push32(0x10273de3u); f_10277b10();
  /* 10273de3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273de6:;
  /* 10273de6 push 0x1029b240 */
  push32((uint32_t)(0x1029b240u));
  /* 10273deb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10273df1 push edx */
  push32((uint32_t)(EDX));
  /* 10273df2 call 0x10277b10 */
  push32(0x10273df7u); f_10277b10();
  /* 10273df7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273dfa:;
  /* 10273dfa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273dfe je 0x10273e42 */
  if (C.zf) goto L_10273e42;
  /* 10273e00 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10273e06 push eax */
  push32((uint32_t)(EAX));
  /* 10273e07 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273e0a push ecx */
  push32((uint32_t)(ECX));
  /* 10273e0b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273e0e push edx */
  push32((uint32_t)(EDX));
  /* 10273e0f push 0x1029b234 */
  push32((uint32_t)(0x1029b234u));
  /* 10273e14 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10273e19 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10273e1f push eax */
  push32((uint32_t)(EAX));
  /* 10273e20 call 0x10277a00 */
  push32(0x10273e25u); f_10277a00();
  /* 10273e25 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273e28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273e2a jge 0x10273e40 */
  if ((C.sf==C.of)) goto L_10273e40;
  /* 10273e2c push 0x1029b270 */
  push32((uint32_t)(0x1029b270u));
  /* 10273e31 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10273e37 push ecx */
  push32((uint32_t)(ECX));
  /* 10273e38 call 0x10277b00 */
  push32(0x10273e3du); f_10277b00();
  /* 10273e3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273e40:;
  /* 10273e40 jmp 0x10273e58 */
  goto L_10273e58;
L_10273e42:;
  /* 10273e42 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10273e48 push edx */
  push32((uint32_t)(EDX));
  /* 10273e49 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10273e4f push eax */
  push32((uint32_t)(EAX));
  /* 10273e50 call 0x10277b00 */
  push32(0x10273e55u); f_10277b00();
  /* 10273e55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10273e58:;
  /* 10273e58 cmp dword ptr [0x102a20e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273e5f je 0x10273e9c */
  if (C.zf) goto L_10273e9c;
  /* 10273e61 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10273e67 push ecx */
  push32((uint32_t)(ECX));
  /* 10273e68 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10273e6e push edx */
  push32((uint32_t)(EDX));
  /* 10273e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273e72 push eax */
  push32((uint32_t)(EAX));
  /* 10273e73 call dword ptr [0x102a20e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a20e0))), 0x10273e79u);
  /* 10273e79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273e7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273e7e je 0x10273e9c */
  if (C.zf) goto L_10273e9c;
  /* 10273e80 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273e84 jne 0x10273e91 */
  if (!C.zf) goto L_10273e91;
  /* 10273e86 push 0x1029ea34 */
  push32((uint32_t)(0x1029ea34u));
  /* 10273e8b call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10273e91u);
L_10273e91:;
  /* 10273e91 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10273e97 jmp 0x10273f9b */
  goto L_10273f9b;
L_10273e9c:;
  /* 10273e9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273e9f mov edx, dword ptr [ecx*4 + 0x1029ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea38)));
  /* 10273ea6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10273ea9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10273eab je 0x10273eeb */
  if (C.zf) goto L_10273eeb;
  /* 10273ead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273eb0 cmp dword ptr [eax*4 + 0x1029ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1029ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273eb8 je 0x10273eeb */
  if (C.zf) goto L_10273eeb;
  /* 10273eba push 0 */
  push32((uint32_t)(0x0u));
  /* 10273ebc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10273ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 10273ec3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10273ec9 push edx */
  push32((uint32_t)(EDX));
  /* 10273eca call 0x10277980 */
  push32(0x10273ecfu); f_10277980();
  /* 10273ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273ed2 push eax */
  push32((uint32_t)(EAX));
  /* 10273ed3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10273ed9 push eax */
  push32((uint32_t)(EAX));
  /* 10273eda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273edd mov edx, dword ptr [ecx*4 + 0x1029ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea44)));
  /* 10273ee4 push edx */
  push32((uint32_t)(EDX));
  /* 10273ee5 call dword ptr [0x102a32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f8))), 0x10273eebu);
L_10273eeb:;
  /* 10273eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273eee mov ecx, dword ptr [eax*4 + 0x1029ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029ea38)));
  /* 10273ef5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10273ef8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10273efa je 0x10273f09 */
  if (C.zf) goto L_10273f09;
  /* 10273efc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10273f02 push edx */
  push32((uint32_t)(EDX));
  /* 10273f03 call dword ptr [0x102a3300] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3300))), 0x10273f09u);
L_10273f09:;
  /* 10273f09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273f0c mov ecx, dword ptr [eax*4 + 0x1029ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029ea38)));
  /* 10273f13 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10273f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10273f18 je 0x10273f88 */
  if (C.zf) goto L_10273f88;
  /* 10273f1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273f1e je 0x10273f3d */
  if (C.zf) goto L_10273f3d;
  /* 10273f20 push 0xa */
  push32((uint32_t)(0xau));
  /* 10273f22 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10273f28 push edx */
  push32((uint32_t)(EDX));
  /* 10273f29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10273f2c push eax */
  push32((uint32_t)(EAX));
  /* 10273f2d call 0x10277690 */
  push32(0x10273f32u); f_10277690();
  /* 10273f32 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273f35 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10273f3b jmp 0x10273f47 */
  goto L_10273f47;
L_10273f3d:;
  /* 10273f3d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10273f47:;
  /* 10273f47 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10273f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10273f4e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10273f51 push edx */
  push32((uint32_t)(EDX));
  /* 10273f52 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10273f58 push eax */
  push32((uint32_t)(EAX));
  /* 10273f59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10273f5c push ecx */
  push32((uint32_t)(ECX));
  /* 10273f5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10273f60 push edx */
  push32((uint32_t)(EDX));
  /* 10273f61 call 0x10273fa0 */
  push32(0x10273f66u); f_10273fa0();
  /* 10273f66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273f69 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10273f6f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273f73 jne 0x10273f80 */
  if (!C.zf) goto L_10273f80;
  /* 10273f75 push 0x1029ea34 */
  push32((uint32_t)(0x1029ea34u));
  /* 10273f7a call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10273f80u);
L_10273f80:;
  /* 10273f80 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10273f86 jmp 0x10273f9b */
  goto L_10273f9b;
L_10273f88:;
  /* 10273f88 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273f8c jne 0x10273f99 */
  if (!C.zf) goto L_10273f99;
  /* 10273f8e push 0x1029ea34 */
  push32((uint32_t)(0x1029ea34u));
  /* 10273f93 call dword ptr [0x102a32fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32fc))), 0x10273f99u);
L_10273f99:;
  /* 10273f99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10273f9b:;
  /* 10273f9b pop edi */
  EDI = (pop32());
  /* 10273f9c mov esp, ebp */
  ESP = (EBP);
  /* 10273f9e pop ebp */
  EBP = (pop32());
  /* 10273f9f ret  */
  ESPCHK(0x10273c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003fa0 @ 0x10273fa0 (780 bytes, 197 insns) */
void f_10273fa0(void) {
  FTRACE(0x10273fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10273fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10273fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10273fa3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10273fa8 call 0x10277cf0 */
  push32(0x10273fadu); f_10277cf0();
L_10273fad:;
  /* 10273fad cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273fb1 jne 0x10273fd8 */
  if (!C.zf) goto L_10273fd8;
  /* 10273fb3 push 0x1029b42c */
  push32((uint32_t)(0x1029b42cu));
  /* 10273fb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10273fba push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10273fbf push 0x1029b420 */
  push32((uint32_t)(0x1029b420u));
  /* 10273fc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10273fc6 call 0x10273c10 */
  push32(0x10273fcbu); f_10273c10();
  /* 10273fcb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10273fce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10273fd1 jne 0x10273fd8 */
  if (!C.zf) goto L_10273fd8;
  /* 10273fd3 call 0x10273b00 */
  push32(0x10273fd8u); f_10273b00();
L_10273fd8:;
  /* 10273fd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10273fda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273fdc jne 0x10273fad */
  if (!C.zf) goto L_10273fad;
  /* 10273fde push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10273fe3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10273fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 10273fea push 0 */
  push32((uint32_t)(0x0u));
  /* 10273fec call dword ptr [0x102a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3310))), 0x10273ff2u);
  /* 10273ff2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10273ff4 jne 0x1027400a */
  if (!C.zf) goto L_1027400a;
  /* 10273ff6 push 0x1029b408 */
  push32((uint32_t)(0x1029b408u));
  /* 10273ffb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10274001 push edx */
  push32((uint32_t)(EDX));
  /* 10274002 call 0x10277b00 */
  push32(0x10274007u); f_10277b00();
  /* 10274007 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027400a:;
  /* 1027400a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10274010 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10274013 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274016 push ecx */
  push32((uint32_t)(ECX));
  /* 10274017 call 0x10277980 */
  push32(0x1027401cu); f_10277980();
  /* 1027401c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027401f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274022 jbe 0x1027404d */
  if ((C.cf||C.zf)) goto L_1027404d;
  /* 10274024 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274027 push edx */
  push32((uint32_t)(EDX));
  /* 10274028 call 0x10277980 */
  push32(0x1027402du); f_10277980();
  /* 1027402d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274030 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274033 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10274037 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027403a push 3 */
  push32((uint32_t)(0x3u));
  /* 1027403c push 0x1029b404 */
  push32((uint32_t)(0x1029b404u));
  /* 10274041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274044 push eax */
  push32((uint32_t)(EAX));
  /* 10274045 call 0x10278370 */
  push32(0x1027404au); f_10278370();
  /* 1027404a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027404d:;
  /* 1027404d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274050 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10274056 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027405d je 0x102740a8 */
  if (C.zf) goto L_102740a8;
  /* 1027405f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10274065 push edx */
  push32((uint32_t)(EDX));
  /* 10274066 call 0x10277980 */
  push32(0x1027406bu); f_10277980();
  /* 1027406b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027406e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274071 jbe 0x102740a8 */
  if ((C.cf||C.zf)) goto L_102740a8;
  /* 10274073 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10274079 push eax */
  push32((uint32_t)(EAX));
  /* 1027407a call 0x10277980 */
  push32(0x1027407fu); f_10277980();
  /* 1027407f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274082 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10274088 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1027408c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10274092 push 3 */
  push32((uint32_t)(0x3u));
  /* 10274094 push 0x1029b404 */
  push32((uint32_t)(0x1029b404u));
  /* 10274099 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1027409f push eax */
  push32((uint32_t)(EAX));
  /* 102740a0 call 0x10278370 */
  push32(0x102740a5u); f_10278370();
  /* 102740a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102740a8:;
  /* 102740a8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102740ac jne 0x102740ba */
  if (!C.zf) goto L_102740ba;
  /* 102740ae mov dword ptr [ebp - 0x1114], 0x1029b390 */
  w32((uint32_t)(EBP + -0x1114), (0x1029b390u));
  /* 102740b8 jmp 0x102740c4 */
  goto L_102740c4;
L_102740ba:;
  /* 102740ba mov dword ptr [ebp - 0x1114], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1114), (0x1029b130u));
L_102740c4:;
  /* 102740c4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102740c7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102740ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102740cc je 0x102740d9 */
  if (C.zf) goto L_102740d9;
  /* 102740ce mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 102740d1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 102740d7 jmp 0x102740e3 */
  goto L_102740e3;
L_102740d9:;
  /* 102740d9 mov dword ptr [ebp - 0x1118], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1118), (0x1029b130u));
L_102740e3:;
  /* 102740e3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102740e6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102740e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102740eb je 0x102740ff */
  if (C.zf) goto L_102740ff;
  /* 102740ed cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102740f1 jne 0x102740ff */
  if (!C.zf) goto L_102740ff;
  /* 102740f3 mov dword ptr [ebp - 0x111c], 0x1029b380 */
  w32((uint32_t)(EBP + -0x111c), (0x1029b380u));
  /* 102740fd jmp 0x10274109 */
  goto L_10274109;
L_102740ff:;
  /* 102740ff mov dword ptr [ebp - 0x111c], 0x1029b130 */
  w32((uint32_t)(EBP + -0x111c), (0x1029b130u));
L_10274109:;
  /* 10274109 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027410c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027410f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10274111 je 0x1027411f */
  if (C.zf) goto L_1027411f;
  /* 10274113 mov dword ptr [ebp - 0x1120], 0x1029b37c */
  w32((uint32_t)(EBP + -0x1120), (0x1029b37cu));
  /* 1027411d jmp 0x10274129 */
  goto L_10274129;
L_1027411f:;
  /* 1027411f mov dword ptr [ebp - 0x1120], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1120), (0x1029b130u));
L_10274129:;
  /* 10274129 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027412d je 0x1027413a */
  if (C.zf) goto L_1027413a;
  /* 1027412f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274132 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10274138 jmp 0x10274144 */
  goto L_10274144;
L_1027413a:;
  /* 1027413a mov dword ptr [ebp - 0x1124], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1124), (0x1029b130u));
L_10274144:;
  /* 10274144 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274148 je 0x10274156 */
  if (C.zf) goto L_10274156;
  /* 1027414a mov dword ptr [ebp - 0x1128], 0x1029b374 */
  w32((uint32_t)(EBP + -0x1128), (0x1029b374u));
  /* 10274154 jmp 0x10274160 */
  goto L_10274160;
L_10274156:;
  /* 10274156 mov dword ptr [ebp - 0x1128], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1128), (0x1029b130u));
L_10274160:;
  /* 10274160 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274164 je 0x10274171 */
  if (C.zf) goto L_10274171;
  /* 10274166 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274169 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1027416f jmp 0x1027417b */
  goto L_1027417b;
L_10274171:;
  /* 10274171 mov dword ptr [ebp - 0x112c], 0x1029b130 */
  w32((uint32_t)(EBP + -0x112c), (0x1029b130u));
L_1027417b:;
  /* 1027417b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027417f je 0x1027418d */
  if (C.zf) goto L_1027418d;
  /* 10274181 mov dword ptr [ebp - 0x1130], 0x1029b36c */
  w32((uint32_t)(EBP + -0x1130), (0x1029b36cu));
  /* 1027418b jmp 0x10274197 */
  goto L_10274197;
L_1027418d:;
  /* 1027418d mov dword ptr [ebp - 0x1130], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1130), (0x1029b130u));
L_10274197:;
  /* 10274197 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027419e je 0x102741ae */
  if (C.zf) goto L_102741ae;
  /* 102741a0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 102741a6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 102741ac jmp 0x102741b8 */
  goto L_102741b8;
L_102741ae:;
  /* 102741ae mov dword ptr [ebp - 0x1134], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1134), (0x1029b130u));
L_102741b8:;
  /* 102741b8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102741bf je 0x102741cd */
  if (C.zf) goto L_102741cd;
  /* 102741c1 mov dword ptr [ebp - 0x1138], 0x1029b360 */
  w32((uint32_t)(EBP + -0x1138), (0x1029b360u));
  /* 102741cb jmp 0x102741d7 */
  goto L_102741d7;
L_102741cd:;
  /* 102741cd mov dword ptr [ebp - 0x1138], 0x1029b130 */
  w32((uint32_t)(EBP + -0x1138), (0x1029b130u));
L_102741d7:;
  /* 102741d7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 102741dd push edx */
  push32((uint32_t)(EDX));
  /* 102741de mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 102741e4 push eax */
  push32((uint32_t)(EAX));
  /* 102741e5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 102741eb push ecx */
  push32((uint32_t)(ECX));
  /* 102741ec mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 102741f2 push edx */
  push32((uint32_t)(EDX));
  /* 102741f3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 102741f9 push eax */
  push32((uint32_t)(EAX));
  /* 102741fa mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10274200 push ecx */
  push32((uint32_t)(ECX));
  /* 10274201 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10274207 push edx */
  push32((uint32_t)(EDX));
  /* 10274208 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1027420e push eax */
  push32((uint32_t)(EAX));
  /* 1027420f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10274215 push ecx */
  push32((uint32_t)(ECX));
  /* 10274216 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1027421c push edx */
  push32((uint32_t)(EDX));
  /* 1027421d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274220 push eax */
  push32((uint32_t)(EAX));
  /* 10274221 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274224 mov edx, dword ptr [ecx*4 + 0x1029ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea50)));
  /* 1027422b push edx */
  push32((uint32_t)(EDX));
  /* 1027422c push 0x1029b30c */
  push32((uint32_t)(0x1029b30cu));
  /* 10274231 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10274236 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1027423c push eax */
  push32((uint32_t)(EAX));
  /* 1027423d call 0x10277a00 */
  push32(0x10274242u); f_10277a00();
  /* 10274242 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274245 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274247 jge 0x1027425d */
  if ((C.sf==C.of)) goto L_1027425d;
  /* 10274249 push 0x1029b270 */
  push32((uint32_t)(0x1029b270u));
  /* 1027424e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10274254 push ecx */
  push32((uint32_t)(ECX));
  /* 10274255 call 0x10277b00 */
  push32(0x1027425au); f_10277b00();
  /* 1027425a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027425d:;
  /* 1027425d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10274262 push 0x1029b2e8 */
  push32((uint32_t)(0x1029b2e8u));
  /* 10274267 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1027426d push edx */
  push32((uint32_t)(EDX));
  /* 1027426e call 0x102782b0 */
  push32(0x10274273u); f_102782b0();
  /* 10274273 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274276 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1027427c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274283 jne 0x10274296 */
  if (!C.zf) goto L_10274296;
  /* 10274285 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10274287 call 0x10277ff0 */
  push32(0x1027428cu); f_10277ff0();
  /* 1027428c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027428f push 3 */
  push32((uint32_t)(0x3u));
  /* 10274291 call 0x10274310 */
  push32(0x10274296u); f_10274310();
L_10274296:;
  /* 10274296 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027429d jne 0x102742a6 */
  if (!C.zf) goto L_102742a6;
  /* 1027429f mov eax, 1 */
  EAX = (0x1u);
  /* 102742a4 jmp 0x102742a8 */
  goto L_102742a8;
L_102742a6:;
  /* 102742a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102742a8:;
  /* 102742a8 mov esp, ebp */
  ESP = (EBP);
  /* 102742aa pop ebp */
  EBP = (pop32());
  /* 102742ab ret  */
  ESPCHK(0x10273fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042b0 @ 0x102742b0 (56 bytes, 15 insns) */
void f_102742b0(void) {
  FTRACE(0x102742b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102742b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102742b1 mov ebp, esp */
  EBP = (ESP);
  /* 102742b3 cmp dword ptr [0x102a20dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102742ba je 0x102742c2 */
  if (C.zf) goto L_102742c2;
  /* 102742bc call dword ptr [0x102a20dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a20dc))), 0x102742c2u);
L_102742c2:;
  /* 102742c2 push 0x1029e418 */
  push32((uint32_t)(0x1029e418u));
  /* 102742c7 push 0x1029e208 */
  push32((uint32_t)(0x1029e208u));
  /* 102742cc call 0x10274480 */
  push32(0x102742d1u); f_10274480();
  /* 102742d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102742d4 push 0x1029e104 */
  push32((uint32_t)(0x1029e104u));
  /* 102742d9 push 0x1029e000 */
  push32((uint32_t)(0x1029e000u));
  /* 102742de call 0x10274480 */
  push32(0x102742e3u); f_10274480();
  /* 102742e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102742e6 pop ebp */
  EBP = (pop32());
  /* 102742e7 ret  */
  ESPCHK(0x102742b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100042f0 @ 0x102742f0 (21 bytes, 10 insns) */
void f_102742f0(void) {
  FTRACE(0x102742f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102742f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102742f1 mov ebp, esp */
  EBP = (ESP);
  /* 102742f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102742f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102742f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102742fa push eax */
  push32((uint32_t)(EAX));
  /* 102742fb call 0x10274370 */
  push32(0x10274300u); f_10274370();
  /* 10274300 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274303 pop ebp */
  EBP = (pop32());
  /* 10274304 ret  */
  ESPCHK(0x102742f0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10274310 (21 bytes, 10 insns) */
void f_10274310(void) {
  FTRACE(0x10274310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274310 push ebp */
  push32((uint32_t)(EBP));
  /* 10274311 mov ebp, esp */
  EBP = (ESP);
  /* 10274313 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274315 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274317 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027431a push eax */
  push32((uint32_t)(EAX));
  /* 1027431b call 0x10274370 */
  push32(0x10274320u); f_10274370();
  /* 10274320 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274323 pop ebp */
  EBP = (pop32());
  /* 10274324 ret  */
  ESPCHK(0x10274310u, _esp0);
  ESP += 4; return;
}

/* FUN_10004330 @ 0x10274330 (19 bytes, 9 insns) */
void f_10274330(void) {
  FTRACE(0x10274330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274330 push ebp */
  push32((uint32_t)(EBP));
  /* 10274331 mov ebp, esp */
  EBP = (ESP);
  /* 10274333 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274335 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274337 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274339 call 0x10274370 */
  push32(0x1027433eu); f_10274370();
  /* 1027433e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274341 pop ebp */
  EBP = (pop32());
  /* 10274342 ret  */
  ESPCHK(0x10274330u, _esp0);
  ESP += 4; return;
}

/* FUN_10004350 @ 0x10274350 (19 bytes, 9 insns) */
void f_10274350(void) {
  FTRACE(0x10274350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274350 push ebp */
  push32((uint32_t)(EBP));
  /* 10274351 mov ebp, esp */
  EBP = (ESP);
  /* 10274353 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274355 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274359 call 0x10274370 */
  push32(0x1027435eu); f_10274370();
  /* 1027435e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274361 pop ebp */
  EBP = (pop32());
  /* 10274362 ret  */
  ESPCHK(0x10274350u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x10274370 (227 bytes, 61 insns) */
void f_10274370(void) {
  FTRACE(0x10274370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274370 push ebp */
  push32((uint32_t)(EBP));
  /* 10274371 mov ebp, esp */
  EBP = (ESP);
  /* 10274373 push ecx */
  push32((uint32_t)(ECX));
  /* 10274374 call 0x10274460 */
  push32(0x10274379u); f_10274460();
  /* 10274379 cmp dword ptr [0x102a05e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a05e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274380 jne 0x10274393 */
  if (!C.zf) goto L_10274393;
  /* 10274382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274385 push eax */
  push32((uint32_t)(EAX));
  /* 10274386 call dword ptr [0x102a331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a331c))), 0x1027438cu);
  /* 1027438c push eax */
  push32((uint32_t)(EAX));
  /* 1027438d call dword ptr [0x102a3318] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3318))), 0x10274393u);
L_10274393:;
  /* 10274393 mov dword ptr [0x102a05e0], 1 */
  w32((uint32_t)(0x102a05e0), (0x1u));
  /* 1027439d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 102743a0 mov byte ptr [0x102a05dc], cl */
  w8((uint32_t)(0x102a05dc), (CL));
  /* 102743a6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102743aa jne 0x102743f3 */
  if (!C.zf) goto L_102743f3;
  /* 102743ac cmp dword ptr [0x102a20d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102743b3 je 0x102743e1 */
  if (C.zf) goto L_102743e1;
  /* 102743b5 mov edx, dword ptr [0x102a20d4] */
  EDX = (r32((uint32_t)(0x102a20d4)));
  /* 102743bb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_102743be:;
  /* 102743be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102743c1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102743c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102743c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102743ca cmp ecx, dword ptr [0x102a20d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a20d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102743d0 jb 0x102743e1 */
  if (C.cf) goto L_102743e1;
  /* 102743d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102743d5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102743d8 je 0x102743df */
  if (C.zf) goto L_102743df;
  /* 102743da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102743dd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x102743dfu);
L_102743df:;
  /* 102743df jmp 0x102743be */
  goto L_102743be;
L_102743e1:;
  /* 102743e1 push 0x1029e724 */
  push32((uint32_t)(0x1029e724u));
  /* 102743e6 push 0x1029e51c */
  push32((uint32_t)(0x1029e51cu));
  /* 102743eb call 0x10274480 */
  push32(0x102743f0u); f_10274480();
  /* 102743f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102743f3:;
  /* 102743f3 push 0x1029e92c */
  push32((uint32_t)(0x1029e92cu));
  /* 102743f8 push 0x1029e828 */
  push32((uint32_t)(0x1029e828u));
  /* 102743fd call 0x10274480 */
  push32(0x10274402u); f_10274480();
  /* 10274402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274405 cmp dword ptr [0x102a05e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027440c jne 0x1027442e */
  if (!C.zf) goto L_1027442e;
  /* 1027440e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10274410 call 0x10276060 */
  push32(0x10274415u); f_10276060();
  /* 10274415 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274418 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1027441b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027441d je 0x1027442e */
  if (C.zf) goto L_1027442e;
  /* 1027441f mov dword ptr [0x102a05e8], 1 */
  w32((uint32_t)(0x102a05e8), (0x1u));
  /* 10274429 call 0x10276970 */
  push32(0x1027442eu); f_10276970();
L_1027442e:;
  /* 1027442e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274432 je 0x1027443b */
  if (C.zf) goto L_1027443b;
  /* 10274434 call 0x10274470 */
  push32(0x10274439u); f_10274470();
  /* 10274439 jmp 0x1027444f */
  goto L_1027444f;
L_1027443b:;
  /* 1027443b mov dword ptr [0x102a05e4], 1 */
  w32((uint32_t)(0x102a05e4), (0x1u));
  /* 10274445 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274448 push ecx */
  push32((uint32_t)(ECX));
  /* 10274449 call dword ptr [0x102a3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3314))), 0x1027444fu);
L_1027444f:;
  /* 1027444f mov esp, ebp */
  ESP = (EBP);
  /* 10274451 pop ebp */
  EBP = (pop32());
  /* 10274452 ret  */
  ESPCHK(0x10274370u, _esp0);
  ESP += 4; return;
}

/* FUN_10004460 @ 0x10274460 (15 bytes, 7 insns) */
void f_10274460(void) {
  FTRACE(0x10274460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274460 push ebp */
  push32((uint32_t)(EBP));
  /* 10274461 mov ebp, esp */
  EBP = (ESP);
  /* 10274463 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10274465 call 0x10278550 */
  push32(0x1027446au); f_10278550();
  /* 1027446a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027446d pop ebp */
  EBP = (pop32());
  /* 1027446e ret  */
  ESPCHK(0x10274460u, _esp0);
  ESP += 4; return;
}

/* FUN_10004470 @ 0x10274470 (15 bytes, 7 insns) */
void f_10274470(void) {
  FTRACE(0x10274470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274470 push ebp */
  push32((uint32_t)(EBP));
  /* 10274471 mov ebp, esp */
  EBP = (ESP);
  /* 10274473 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10274475 call 0x102785f0 */
  push32(0x1027447au); f_102785f0();
  /* 1027447a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027447d pop ebp */
  EBP = (pop32());
  /* 1027447e ret  */
  ESPCHK(0x10274470u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10274480 (37 bytes, 16 insns) */
void f_10274480(void) {
  FTRACE(0x10274480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274480 push ebp */
  push32((uint32_t)(EBP));
  /* 10274481 mov ebp, esp */
  EBP = (ESP);
L_10274483:;
  /* 10274483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274486 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274489 jae 0x102744a3 */
  if (!C.cf) goto L_102744a3;
  /* 1027448b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027448e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274491 je 0x10274498 */
  if (C.zf) goto L_10274498;
  /* 10274493 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274496 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10274498u);
L_10274498:;
  /* 10274498 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027449b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027449e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 102744a1 jmp 0x10274483 */
  goto L_10274483;
L_102744a3:;
  /* 102744a3 pop ebp */
  EBP = (pop32());
  /* 102744a4 ret  */
  ESPCHK(0x10274480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044b0 @ 0x102744b0 (130 bytes, 42 insns) */
void f_102744b0(void) {
  FTRACE(0x102744b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102744b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102744b1 mov ebp, esp */
  EBP = (ESP);
  /* 102744b3 push ecx */
  push32((uint32_t)(ECX));
  /* 102744b4 call 0x10278470 */
  push32(0x102744b9u); f_10278470();
  /* 102744b9 call dword ptr [0x102a3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3328))), 0x102744bfu);
  /* 102744bf mov dword ptr [0x1029ea5c], eax */
  w32((uint32_t)(0x1029ea5c), (EAX));
  /* 102744c4 cmp dword ptr [0x1029ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1029ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102744cb jne 0x102744d1 */
  if (!C.zf) goto L_102744d1;
  /* 102744cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102744cf jmp 0x1027452e */
  goto L_1027452e;
L_102744d1:;
  /* 102744d1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 102744d3 push 0x1029b444 */
  push32((uint32_t)(0x1029b444u));
  /* 102744d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102744da push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102744dc push 1 */
  push32((uint32_t)(0x1u));
  /* 102744de call 0x10274f60 */
  push32(0x102744e3u); f_10274f60();
  /* 102744e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102744e6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102744e9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102744ed je 0x10274504 */
  if (C.zf) goto L_10274504;
  /* 102744ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102744f2 push eax */
  push32((uint32_t)(EAX));
  /* 102744f3 mov ecx, dword ptr [0x1029ea5c] */
  ECX = (r32((uint32_t)(0x1029ea5c)));
  /* 102744f9 push ecx */
  push32((uint32_t)(ECX));
  /* 102744fa call dword ptr [0x102a3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3324))), 0x10274500u);
  /* 10274500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274502 jne 0x10274508 */
  if (!C.zf) goto L_10274508;
L_10274504:;
  /* 10274504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274506 jmp 0x1027452e */
  goto L_1027452e;
L_10274508:;
  /* 10274508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027450b push edx */
  push32((uint32_t)(EDX));
  /* 1027450c call 0x10274570 */
  push32(0x10274511u); f_10274570();
  /* 10274511 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274514 call dword ptr [0x102a3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3320))), 0x1027451au);
  /* 1027451a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027451d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1027451f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274522 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10274529 mov eax, 1 */
  EAX = (0x1u);
L_1027452e:;
  /* 1027452e mov esp, ebp */
  ESP = (EBP);
  /* 10274530 pop ebp */
  EBP = (pop32());
  /* 10274531 ret  */
  ESPCHK(0x102744b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x10274540 (41 bytes, 11 insns) */
void f_10274540(void) {
  FTRACE(0x10274540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274540 push ebp */
  push32((uint32_t)(EBP));
  /* 10274541 mov ebp, esp */
  EBP = (ESP);
  /* 10274543 call 0x102784b0 */
  push32(0x10274548u); f_102784b0();
  /* 10274548 cmp dword ptr [0x1029ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1029ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027454f je 0x10274567 */
  if (C.zf) goto L_10274567;
  /* 10274551 mov eax, dword ptr [0x1029ea5c] */
  EAX = (r32((uint32_t)(0x1029ea5c)));
  /* 10274556 push eax */
  push32((uint32_t)(EAX));
  /* 10274557 call dword ptr [0x102a332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a332c))), 0x1027455du);
  /* 1027455d mov dword ptr [0x1029ea5c], 0xffffffff */
  w32((uint32_t)(0x1029ea5c), (0xffffffffu));
L_10274567:;
  /* 10274567 pop ebp */
  EBP = (pop32());
  /* 10274568 ret  */
  ESPCHK(0x10274540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004570 @ 0x10274570 (25 bytes, 8 insns) */
void f_10274570(void) {
  FTRACE(0x10274570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274570 push ebp */
  push32((uint32_t)(EBP));
  /* 10274571 mov ebp, esp */
  EBP = (ESP);
  /* 10274573 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274576 mov dword ptr [eax + 0x50], 0x1029ec00 */
  w32((uint32_t)(EAX + 0x50), (0x1029ec00u));
  /* 1027457d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274580 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10274587 pop ebp */
  EBP = (pop32());
  /* 10274588 ret  */
  ESPCHK(0x10274570u, _esp0);
  ESP += 4; return;
}

/* FUN_10004590 @ 0x10274590 (152 bytes, 48 insns) */
void f_10274590(void) {
  FTRACE(0x10274590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274590 push ebp */
  push32((uint32_t)(EBP));
  /* 10274591 mov ebp, esp */
  EBP = (ESP);
  /* 10274593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10274596 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x1027459cu);
  /* 1027459c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027459f mov eax, dword ptr [0x1029ea5c] */
  EAX = (r32((uint32_t)(0x1029ea5c)));
  /* 102745a4 push eax */
  push32((uint32_t)(EAX));
  /* 102745a5 call dword ptr [0x102a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3334))), 0x102745abu);
  /* 102745ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102745ae cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102745b2 jne 0x10274617 */
  if (!C.zf) goto L_10274617;
  /* 102745b4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 102745b9 push 0x1029b444 */
  push32((uint32_t)(0x1029b444u));
  /* 102745be push 2 */
  push32((uint32_t)(0x2u));
  /* 102745c0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 102745c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102745c4 call 0x10274f60 */
  push32(0x102745c9u); f_10274f60();
  /* 102745c9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102745cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102745cf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102745d3 je 0x1027460d */
  if (C.zf) goto L_1027460d;
  /* 102745d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102745d8 push ecx */
  push32((uint32_t)(ECX));
  /* 102745d9 mov edx, dword ptr [0x1029ea5c] */
  EDX = (r32((uint32_t)(0x1029ea5c)));
  /* 102745df push edx */
  push32((uint32_t)(EDX));
  /* 102745e0 call dword ptr [0x102a3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3324))), 0x102745e6u);
  /* 102745e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102745e8 je 0x1027460d */
  if (C.zf) goto L_1027460d;
  /* 102745ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102745ed push eax */
  push32((uint32_t)(EAX));
  /* 102745ee call 0x10274570 */
  push32(0x102745f3u); f_10274570();
  /* 102745f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102745f6 call dword ptr [0x102a3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3320))), 0x102745fcu);
  /* 102745fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102745ff mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10274601 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274604 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1027460b jmp 0x10274617 */
  goto L_10274617;
L_1027460d:;
  /* 1027460d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1027460f call 0x10273ac0 */
  push32(0x10274614u); f_10273ac0();
  /* 10274614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274617:;
  /* 10274617 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027461a push eax */
  push32((uint32_t)(EAX));
  /* 1027461b call dword ptr [0x102a3330] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3330))), 0x10274621u);
  /* 10274621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274624 mov esp, ebp */
  ESP = (EBP);
  /* 10274626 pop ebp */
  EBP = (pop32());
  /* 10274627 ret  */
  ESPCHK(0x10274590u, _esp0);
  ESP += 4; return;
}

/* FUN_10004630 @ 0x10274630 (263 bytes, 86 insns) */
void f_10274630(void) {
  FTRACE(0x10274630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274630 push ebp */
  push32((uint32_t)(EBP));
  /* 10274631 mov ebp, esp */
  EBP = (ESP);
  /* 10274633 cmp dword ptr [0x1029ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1029ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027463a je 0x10274735 */
  if (C.zf) goto L_10274735;
  /* 10274640 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274644 jne 0x10274655 */
  if (!C.zf) goto L_10274655;
  /* 10274646 mov eax, dword ptr [0x1029ea5c] */
  EAX = (r32((uint32_t)(0x1029ea5c)));
  /* 1027464b push eax */
  push32((uint32_t)(EAX));
  /* 1027464c call dword ptr [0x102a3334] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3334))), 0x10274652u);
  /* 10274652 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10274655:;
  /* 10274655 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274659 je 0x10274726 */
  if (C.zf) goto L_10274726;
  /* 1027465f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274662 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274666 je 0x10274679 */
  if (C.zf) goto L_10274679;
  /* 10274668 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027466a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027466d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10274670 push eax */
  push32((uint32_t)(EAX));
  /* 10274671 call 0x102755e0 */
  push32(0x10274676u); f_102755e0();
  /* 10274676 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274679:;
  /* 10274679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027467c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274680 je 0x10274693 */
  if (C.zf) goto L_10274693;
  /* 10274682 push 2 */
  push32((uint32_t)(0x2u));
  /* 10274684 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274687 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1027468a push eax */
  push32((uint32_t)(EAX));
  /* 1027468b call 0x102755e0 */
  push32(0x10274690u); f_102755e0();
  /* 10274690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274693:;
  /* 10274693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274696 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027469a je 0x102746ad */
  if (C.zf) goto L_102746ad;
  /* 1027469c push 2 */
  push32((uint32_t)(0x2u));
  /* 1027469e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746a1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 102746a4 push eax */
  push32((uint32_t)(EAX));
  /* 102746a5 call 0x102755e0 */
  push32(0x102746aau); f_102755e0();
  /* 102746aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102746ad:;
  /* 102746ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746b0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102746b4 je 0x102746c7 */
  if (C.zf) goto L_102746c7;
  /* 102746b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 102746b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746bb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 102746be push eax */
  push32((uint32_t)(EAX));
  /* 102746bf call 0x102755e0 */
  push32(0x102746c4u); f_102755e0();
  /* 102746c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102746c7:;
  /* 102746c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746ca cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102746ce je 0x102746e1 */
  if (C.zf) goto L_102746e1;
  /* 102746d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 102746d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746d5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 102746d8 push eax */
  push32((uint32_t)(EAX));
  /* 102746d9 call 0x102755e0 */
  push32(0x102746deu); f_102755e0();
  /* 102746de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102746e1:;
  /* 102746e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746e4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102746e8 je 0x102746fb */
  if (C.zf) goto L_102746fb;
  /* 102746ea push 2 */
  push32((uint32_t)(0x2u));
  /* 102746ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746ef mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 102746f2 push eax */
  push32((uint32_t)(EAX));
  /* 102746f3 call 0x102755e0 */
  push32(0x102746f8u); f_102755e0();
  /* 102746f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102746fb:;
  /* 102746fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102746fe cmp dword ptr [ecx + 0x50], 0x1029ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1029ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274705 je 0x10274718 */
  if (C.zf) goto L_10274718;
  /* 10274707 push 2 */
  push32((uint32_t)(0x2u));
  /* 10274709 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027470c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1027470f push eax */
  push32((uint32_t)(EAX));
  /* 10274710 call 0x102755e0 */
  push32(0x10274715u); f_102755e0();
  /* 10274715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274718:;
  /* 10274718 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027471a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027471d push ecx */
  push32((uint32_t)(ECX));
  /* 1027471e call 0x102755e0 */
  push32(0x10274723u); f_102755e0();
  /* 10274723 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274726:;
  /* 10274726 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274728 mov edx, dword ptr [0x1029ea5c] */
  EDX = (r32((uint32_t)(0x1029ea5c)));
  /* 1027472e push edx */
  push32((uint32_t)(EDX));
  /* 1027472f call dword ptr [0x102a3324] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3324))), 0x10274735u);
L_10274735:;
  /* 10274735 pop ebp */
  EBP = (pop32());
  /* 10274736 ret  */
  ESPCHK(0x10274630u, _esp0);
  ESP += 4; return;
}

/* FUN_10004740 @ 0x10274740 (11 bytes, 5 insns) */
void f_10274740(void) {
  FTRACE(0x10274740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274740 push ebp */
  push32((uint32_t)(EBP));
  /* 10274741 mov ebp, esp */
  EBP = (ESP);
  /* 10274743 call dword ptr [0x102a3320] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3320))), 0x10274749u);
  /* 10274749 pop ebp */
  EBP = (pop32());
  /* 1027474a ret  */
  ESPCHK(0x10274740u, _esp0);
  ESP += 4; return;
}

/* FUN_10004750 @ 0x10274750 (11 bytes, 5 insns) */
void f_10274750(void) {
  FTRACE(0x10274750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274750 push ebp */
  push32((uint32_t)(EBP));
  /* 10274751 mov ebp, esp */
  EBP = (ESP);
  /* 10274753 call dword ptr [0x102a3274] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3274))), 0x10274759u);
  /* 10274759 pop ebp */
  EBP = (pop32());
  /* 1027475a ret  */
  ESPCHK(0x10274750u, _esp0);
  ESP += 4; return;
}

/* FUN_10004760 @ 0x10274760 (804 bytes, 236 insns) */
void f_10274760(void) {
  FTRACE(0x10274760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274760 push ebp */
  push32((uint32_t)(EBP));
  /* 10274761 mov ebp, esp */
  EBP = (ESP);
  /* 10274763 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10274766 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1027476b push 0x1029b450 */
  push32((uint32_t)(0x1029b450u));
  /* 10274770 push 2 */
  push32((uint32_t)(0x2u));
  /* 10274772 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10274777 call 0x10274b50 */
  push32(0x1027477cu); f_10274b50();
  /* 1027477c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027477f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10274782 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274786 jne 0x10274792 */
  if (!C.zf) goto L_10274792;
  /* 10274788 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1027478a call 0x10273ac0 */
  push32(0x1027478fu); f_10273ac0();
  /* 1027478f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10274792:;
  /* 10274792 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274795 mov dword ptr [0x102a1f80], eax */
  w32((uint32_t)(0x102a1f80), (EAX));
  /* 1027479a mov dword ptr [0x102a20bc], 0x20 */
  w32((uint32_t)(0x102a20bc), (0x20u));
  /* 102747a4 jmp 0x102747af */
  goto L_102747af;
L_102747a6:;
  /* 102747a6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 102747a9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102747ac mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_102747af:;
  /* 102747af mov edx, dword ptr [0x102a1f80] */
  EDX = (r32((uint32_t)(0x102a1f80)));
  /* 102747b5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102747bb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102747be jae 0x102747e3 */
  if (!C.cf) goto L_102747e3;
  /* 102747c0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102747c3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 102747c7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 102747ca mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 102747d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 102747d3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 102747d7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102747da mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 102747e1 jmp 0x102747a6 */
  goto L_102747a6;
L_102747e3:;
  /* 102747e3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 102747e6 push ecx */
  push32((uint32_t)(ECX));
  /* 102747e7 call dword ptr [0x102a3348] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3348))), 0x102747edu);
  /* 102747ed mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 102747f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102747f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102747f8 je 0x10274985 */
  if (C.zf) goto L_10274985;
  /* 102747fe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274802 je 0x10274985 */
  if (C.zf) goto L_10274985;
  /* 10274808 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027480b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1027480d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10274810 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10274813 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274816 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10274819 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027481c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027481f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10274822 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274829 jge 0x10274833 */
  if ((C.sf==C.of)) goto L_10274833;
  /* 1027482b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1027482e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10274831 jmp 0x1027483a */
  goto L_1027483a;
L_10274833:;
  /* 10274833 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1027483a:;
  /* 1027483a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1027483d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10274840 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10274847 jmp 0x10274852 */
  goto L_10274852;
L_10274849:;
  /* 10274849 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1027484c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027484f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10274852:;
  /* 10274852 mov ecx, dword ptr [0x102a20bc] */
  ECX = (r32((uint32_t)(0x102a20bc)));
  /* 10274858 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027485b jge 0x102748f2 */
  if ((C.sf==C.of)) goto L_102748f2;
  /* 10274861 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10274866 push 0x1029b450 */
  push32((uint32_t)(0x1029b450u));
  /* 1027486b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027486d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10274872 call 0x10274b50 */
  push32(0x10274877u); f_10274b50();
  /* 10274877 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027487a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1027487d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274881 jne 0x1027488e */
  if (!C.zf) goto L_1027488e;
  /* 10274883 mov edx, dword ptr [0x102a20bc] */
  EDX = (r32((uint32_t)(0x102a20bc)));
  /* 10274889 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1027488c jmp 0x102748f2 */
  goto L_102748f2;
L_1027488e:;
  /* 1027488e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10274891 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274894 mov dword ptr [eax*4 + 0x102a1f80], ecx */
  w32((uint32_t)(EAX*4 + 0x102a1f80), (ECX));
  /* 1027489b mov edx, dword ptr [0x102a20bc] */
  EDX = (r32((uint32_t)(0x102a20bc)));
  /* 102748a1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102748a4 mov dword ptr [0x102a20bc], edx */
  w32((uint32_t)(0x102a20bc), (EDX));
  /* 102748aa jmp 0x102748b5 */
  goto L_102748b5;
L_102748ac:;
  /* 102748ac mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102748af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102748b2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_102748b5:;
  /* 102748b5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 102748b8 mov edx, dword ptr [ecx*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(ECX*4 + 0x102a1f80)));
  /* 102748bf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102748c5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102748c8 jae 0x102748ed */
  if (!C.cf) goto L_102748ed;
  /* 102748ca mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102748cd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 102748d1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 102748d4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 102748da mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 102748dd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 102748e1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102748e4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 102748eb jmp 0x102748ac */
  goto L_102748ac;
L_102748ed:;
  /* 102748ed jmp 0x10274849 */
  goto L_10274849;
L_102748f2:;
  /* 102748f2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 102748f9 jmp 0x10274916 */
  goto L_10274916;
L_102748fb:;
  /* 102748fb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 102748fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274901 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10274904 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274907 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027490a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027490d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10274910 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274913 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10274916:;
  /* 10274916 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10274919 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027491c jge 0x10274985 */
  if ((C.sf==C.of)) goto L_10274985;
  /* 1027491e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10274921 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274924 je 0x10274980 */
  if (C.zf) goto L_10274980;
  /* 10274926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274929 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027492c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1027492f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10274931 je 0x10274980 */
  if (C.zf) goto L_10274980;
  /* 10274933 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274936 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10274939 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1027493c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027493e jne 0x10274950 */
  if (!C.zf) goto L_10274950;
  /* 10274940 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10274943 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10274945 push edx */
  push32((uint32_t)(EDX));
  /* 10274946 call dword ptr [0x102a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3344))), 0x1027494cu);
  /* 1027494c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027494e je 0x10274980 */
  if (C.zf) goto L_10274980;
L_10274950:;
  /* 10274950 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10274953 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10274956 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10274959 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1027495c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027495f mov edx, dword ptr [eax*4 + 0x102a1f80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 10274966 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274968 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1027496b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1027496e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10274971 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10274973 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10274975 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274978 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027497b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027497d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10274980:;
  /* 10274980 jmp 0x102748fb */
  goto L_102748fb;
L_10274985:;
  /* 10274985 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1027498c jmp 0x10274997 */
  goto L_10274997;
L_1027498e:;
  /* 1027498e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10274991 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274994 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10274997:;
  /* 10274997 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027499b jge 0x10274a74 */
  if ((C.sf==C.of)) goto L_10274a74;
  /* 102749a1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 102749a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102749a7 mov edx, dword ptr [0x102a1f80] */
  EDX = (r32((uint32_t)(0x102a1f80)));
  /* 102749ad add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102749af mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 102749b2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 102749b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102749b8 jne 0x10274a60 */
  if (!C.zf) goto L_10274a60;
  /* 102749be mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 102749c1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 102749c5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102749c9 jne 0x102749d4 */
  if (!C.zf) goto L_102749d4;
  /* 102749cb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 102749d2 jmp 0x102749e4 */
  goto L_102749e4;
L_102749d4:;
  /* 102749d4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 102749d7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102749da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 102749dc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102749de add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102749e1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_102749e4:;
  /* 102749e4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 102749e7 push eax */
  push32((uint32_t)(EAX));
  /* 102749e8 call dword ptr [0x102a32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f4))), 0x102749eeu);
  /* 102749ee mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 102749f1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102749f5 je 0x10274a4f */
  if (C.zf) goto L_10274a4f;
  /* 102749f7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 102749fa push ecx */
  push32((uint32_t)(ECX));
  /* 102749fb call dword ptr [0x102a3344] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3344))), 0x10274a01u);
  /* 10274a01 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10274a04 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274a08 je 0x10274a4f */
  if (C.zf) goto L_10274a4f;
  /* 10274a0a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a0d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10274a10 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10274a12 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10274a15 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10274a1b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274a1e jne 0x10274a30 */
  if (!C.zf) goto L_10274a30;
  /* 10274a20 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a23 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10274a26 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10274a28 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a2b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10274a2e jmp 0x10274a4d */
  goto L_10274a4d;
L_10274a30:;
  /* 10274a30 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10274a33 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10274a39 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274a3c jne 0x10274a4d */
  if (!C.zf) goto L_10274a4d;
  /* 10274a3e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a41 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10274a44 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10274a47 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a4a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10274a4d:;
  /* 10274a4d jmp 0x10274a5e */
  goto L_10274a5e;
L_10274a4f:;
  /* 10274a4f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a52 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10274a55 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10274a58 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10274a5e:;
  /* 10274a5e jmp 0x10274a6f */
  goto L_10274a6f;
L_10274a60:;
  /* 10274a60 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a63 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10274a66 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10274a69 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10274a6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10274a6f:;
  /* 10274a6f jmp 0x1027498e */
  goto L_1027498e;
L_10274a74:;
  /* 10274a74 mov eax, dword ptr [0x102a20bc] */
  EAX = (r32((uint32_t)(0x102a20bc)));
  /* 10274a79 push eax */
  push32((uint32_t)(EAX));
  /* 10274a7a call dword ptr [0x102a3278] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3278))), 0x10274a80u);
  /* 10274a80 mov esp, ebp */
  ESP = (EBP);
  /* 10274a82 pop ebp */
  EBP = (pop32());
  /* 10274a83 ret  */
  ESPCHK(0x10274760u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10274a90 (155 bytes, 45 insns) */
void f_10274a90(void) {
  FTRACE(0x10274a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10274a91 mov ebp, esp */
  EBP = (ESP);
  /* 10274a93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10274a96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10274a9d jmp 0x10274aa8 */
  goto L_10274aa8;
L_10274a9f:;
  /* 10274a9f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274aa2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274aa5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10274aa8:;
  /* 10274aa8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274aac jge 0x10274b27 */
  if ((C.sf==C.of)) goto L_10274b27;
  /* 10274aae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274ab1 cmp dword ptr [ecx*4 + 0x102a1f80], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x102a1f80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274ab9 je 0x10274b22 */
  if (C.zf) goto L_10274b22;
  /* 10274abb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274abe mov eax, dword ptr [edx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 10274ac5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10274ac8 jmp 0x10274ad3 */
  goto L_10274ad3;
L_10274aca:;
  /* 10274aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274acd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274ad0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10274ad3:;
  /* 10274ad3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274ad6 mov eax, dword ptr [edx*4 + 0x102a1f80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x102a1f80)));
  /* 10274add add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274ae2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274ae5 jae 0x10274aff */
  if (!C.cf) goto L_10274aff;
  /* 10274ae7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274aea cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274aee je 0x10274afd */
  if (C.zf) goto L_10274afd;
  /* 10274af0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274af3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274af6 push edx */
  push32((uint32_t)(EDX));
  /* 10274af7 call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x10274afdu);
L_10274afd:;
  /* 10274afd jmp 0x10274aca */
  goto L_10274aca;
L_10274aff:;
  /* 10274aff push 2 */
  push32((uint32_t)(0x2u));
  /* 10274b01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274b04 mov ecx, dword ptr [eax*4 + 0x102a1f80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x102a1f80)));
  /* 10274b0b push ecx */
  push32((uint32_t)(ECX));
  /* 10274b0c call 0x102755e0 */
  push32(0x10274b11u); f_102755e0();
  /* 10274b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274b14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274b17 mov dword ptr [edx*4 + 0x102a1f80], 0 */
  w32((uint32_t)(EDX*4 + 0x102a1f80), (0x0u));
L_10274b22:;
  /* 10274b22 jmp 0x10274a9f */
  goto L_10274a9f;
L_10274b27:;
  /* 10274b27 mov esp, ebp */
  ESP = (EBP);
  /* 10274b29 pop ebp */
  EBP = (pop32());
  /* 10274b2a ret  */
  ESPCHK(0x10274a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x10274b30 (29 bytes, 13 insns) */
void f_10274b30(void) {
  FTRACE(0x10274b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10274b31 mov ebp, esp */
  EBP = (ESP);
  /* 10274b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274b35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274b37 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274b39 mov eax, dword ptr [0x102a0790] */
  EAX = (r32((uint32_t)(0x102a0790)));
  /* 10274b3e push eax */
  push32((uint32_t)(EAX));
  /* 10274b3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274b42 push ecx */
  push32((uint32_t)(ECX));
  /* 10274b43 call 0x10274ba0 */
  push32(0x10274b48u); f_10274ba0();
  /* 10274b48 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274b4b pop ebp */
  EBP = (pop32());
  /* 10274b4c ret  */
  ESPCHK(0x10274b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b50 @ 0x10274b50 (35 bytes, 16 insns) */
void f_10274b50(void) {
  FTRACE(0x10274b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10274b51 mov ebp, esp */
  EBP = (ESP);
  /* 10274b53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274b56 push eax */
  push32((uint32_t)(EAX));
  /* 10274b57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274b5a push ecx */
  push32((uint32_t)(ECX));
  /* 10274b5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274b5e push edx */
  push32((uint32_t)(EDX));
  /* 10274b5f mov eax, dword ptr [0x102a0790] */
  EAX = (r32((uint32_t)(0x102a0790)));
  /* 10274b64 push eax */
  push32((uint32_t)(EAX));
  /* 10274b65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274b68 push ecx */
  push32((uint32_t)(ECX));
  /* 10274b69 call 0x10274ba0 */
  push32(0x10274b6eu); f_10274ba0();
  /* 10274b6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274b71 pop ebp */
  EBP = (pop32());
  /* 10274b72 ret  */
  ESPCHK(0x10274b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b80 @ 0x10274b80 (27 bytes, 13 insns) */
void f_10274b80(void) {
  FTRACE(0x10274b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10274b81 mov ebp, esp */
  EBP = (ESP);
  /* 10274b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274b85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274b87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274b89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274b8c push eax */
  push32((uint32_t)(EAX));
  /* 10274b8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10274b91 call 0x10274ba0 */
  push32(0x10274b96u); f_10274ba0();
  /* 10274b96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274b99 pop ebp */
  EBP = (pop32());
  /* 10274b9a ret  */
  ESPCHK(0x10274b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ba0 @ 0x10274ba0 (94 bytes, 38 insns) */
void f_10274ba0(void) {
  FTRACE(0x10274ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10274ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10274ba3 push ecx */
  push32((uint32_t)(ECX));
L_10274ba4:;
  /* 10274ba4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10274ba6 call 0x10278550 */
  push32(0x10274babu); f_10278550();
  /* 10274bab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274bae mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10274bb1 push eax */
  push32((uint32_t)(EAX));
  /* 10274bb2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 10274bb6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274bb9 push edx */
  push32((uint32_t)(EDX));
  /* 10274bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274bbd push eax */
  push32((uint32_t)(EAX));
  /* 10274bbe call 0x10274c20 */
  push32(0x10274bc3u); f_10274c20();
  /* 10274bc3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274bc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10274bc9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10274bcb call 0x102785f0 */
  push32(0x10274bd0u); f_102785f0();
  /* 10274bd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274bd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274bd7 jne 0x10274bdf */
  if (!C.zf) goto L_10274bdf;
  /* 10274bd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274bdd jne 0x10274be4 */
  if (!C.zf) goto L_10274be4;
L_10274bdf:;
  /* 10274bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274be2 jmp 0x10274bfa */
  goto L_10274bfa;
L_10274be4:;
  /* 10274be4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274be7 push ecx */
  push32((uint32_t)(ECX));
  /* 10274be8 call 0x10278890 */
  push32(0x10274bedu); f_10278890();
  /* 10274bed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274bf0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274bf2 jne 0x10274bf8 */
  if (!C.zf) goto L_10274bf8;
  /* 10274bf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274bf6 jmp 0x10274bfa */
  goto L_10274bfa;
L_10274bf8:;
  /* 10274bf8 jmp 0x10274ba4 */
  goto L_10274ba4;
L_10274bfa:;
  /* 10274bfa mov esp, ebp */
  ESP = (EBP);
  /* 10274bfc pop ebp */
  EBP = (pop32());
  /* 10274bfd ret  */
  ESPCHK(0x10274ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c00 @ 0x10274c00 (23 bytes, 11 insns) */
void f_10274c00(void) {
  FTRACE(0x10274c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10274c01 mov ebp, esp */
  EBP = (ESP);
  /* 10274c03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274c05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274c07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274c09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274c0c push eax */
  push32((uint32_t)(EAX));
  /* 10274c0d call 0x10274c20 */
  push32(0x10274c12u); f_10274c20();
  /* 10274c12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274c15 pop ebp */
  EBP = (pop32());
  /* 10274c16 ret  */
  ESPCHK(0x10274c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10004c20 @ 0x10274c20 (787 bytes, 254 insns) */
void f_10274c20(void) {
  FTRACE(0x10274c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10274c21 mov ebp, esp */
  EBP = (ESP);
  /* 10274c23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10274c26 push ebx */
  push32((uint32_t)(EBX));
  /* 10274c27 push esi */
  push32((uint32_t)(ESI));
  /* 10274c28 push edi */
  push32((uint32_t)(EDI));
  /* 10274c29 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10274c30 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10274c35 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10274c38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274c3a je 0x10274c6c */
  if (C.zf) goto L_10274c6c;
L_10274c3c:;
  /* 10274c3c call 0x10275cf0 */
  push32(0x10274c41u); f_10275cf0();
  /* 10274c41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274c43 jne 0x10274c66 */
  if (!C.zf) goto L_10274c66;
  /* 10274c45 push 0x1029b544 */
  push32((uint32_t)(0x1029b544u));
  /* 10274c4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10274c4c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10274c51 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10274c56 push 2 */
  push32((uint32_t)(0x2u));
  /* 10274c58 call 0x10273c10 */
  push32(0x10274c5du); f_10273c10();
  /* 10274c5d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274c63 jne 0x10274c66 */
  if (!C.zf) goto L_10274c66;
  /* 10274c65 int3  */
  x86_unimpl("int3 @ 0x10274c65");
L_10274c66:;
  /* 10274c66 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10274c68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10274c6a jne 0x10274c3c */
  if (!C.zf) goto L_10274c3c;
L_10274c6c:;
  /* 10274c6c mov edx, dword ptr [0x1029ea88] */
  EDX = (r32((uint32_t)(0x1029ea88)));
  /* 10274c72 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10274c75 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274c78 cmp eax, dword ptr [0x1029ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274c7e jne 0x10274c81 */
  if (!C.zf) goto L_10274c81;
  /* 10274c80 int3  */
  x86_unimpl("int3 @ 0x10274c80");
L_10274c81:;
  /* 10274c81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274c84 push ecx */
  push32((uint32_t)(ECX));
  /* 10274c85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274c88 push edx */
  push32((uint32_t)(EDX));
  /* 10274c89 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274c8c push eax */
  push32((uint32_t)(EAX));
  /* 10274c8d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274c90 push ecx */
  push32((uint32_t)(ECX));
  /* 10274c91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274c94 push edx */
  push32((uint32_t)(EDX));
  /* 10274c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274c97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274c99 call dword ptr [0x1029ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029ec90))), 0x10274c9fu);
  /* 10274c9f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274ca2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274ca4 jne 0x10274d04 */
  if (!C.zf) goto L_10274d04;
  /* 10274ca6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274caa je 0x10274cd7 */
  if (C.zf) goto L_10274cd7;
L_10274cac:;
  /* 10274cac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274caf push eax */
  push32((uint32_t)(EAX));
  /* 10274cb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274cb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10274cb4 push 0x1029b500 */
  push32((uint32_t)(0x1029b500u));
  /* 10274cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10274cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10274cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10274cc1 call 0x10273c10 */
  push32(0x10274cc6u); f_10273c10();
  /* 10274cc6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274ccc jne 0x10274ccf */
  if (!C.zf) goto L_10274ccf;
  /* 10274cce int3  */
  x86_unimpl("int3 @ 0x10274cce");
L_10274ccf:;
  /* 10274ccf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10274cd1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10274cd3 jne 0x10274cac */
  if (!C.zf) goto L_10274cac;
  /* 10274cd5 jmp 0x10274cfd */
  goto L_10274cfd;
L_10274cd7:;
  /* 10274cd7 push 0x1029b4dc */
  push32((uint32_t)(0x1029b4dcu));
  /* 10274cdc push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10274ce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274ce3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274ce5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274ce7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274ce9 call 0x10273c10 */
  push32(0x10274ceeu); f_10273c10();
  /* 10274cee add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274cf1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274cf4 jne 0x10274cf7 */
  if (!C.zf) goto L_10274cf7;
  /* 10274cf6 int3  */
  x86_unimpl("int3 @ 0x10274cf6");
L_10274cf7:;
  /* 10274cf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274cf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10274cfb jne 0x10274cd7 */
  if (!C.zf) goto L_10274cd7;
L_10274cfd:;
  /* 10274cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274cff jmp 0x10274f2c */
  goto L_10274f2c;
L_10274d04:;
  /* 10274d04 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274d07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10274d0d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d10 je 0x10274d26 */
  if (C.zf) goto L_10274d26;
  /* 10274d12 mov edx, dword ptr [0x1029ea84] */
  EDX = (r32((uint32_t)(0x1029ea84)));
  /* 10274d18 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10274d1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10274d1d jne 0x10274d26 */
  if (!C.zf) goto L_10274d26;
  /* 10274d1f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10274d26:;
  /* 10274d26 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d2a ja 0x10274d37 */
  if ((!C.cf&&!C.zf)) goto L_10274d37;
  /* 10274d2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274d2f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274d32 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d35 jbe 0x10274d63 */
  if ((C.cf||C.zf)) goto L_10274d63;
L_10274d37:;
  /* 10274d37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274d3a push ecx */
  push32((uint32_t)(ECX));
  /* 10274d3b push 0x1029b4b4 */
  push32((uint32_t)(0x1029b4b4u));
  /* 10274d40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274d48 call 0x10273c10 */
  push32(0x10274d4du); f_10273c10();
  /* 10274d4d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274d50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d53 jne 0x10274d56 */
  if (!C.zf) goto L_10274d56;
  /* 10274d55 int3  */
  x86_unimpl("int3 @ 0x10274d55");
L_10274d56:;
  /* 10274d56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10274d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10274d5a jne 0x10274d37 */
  if (!C.zf) goto L_10274d37;
  /* 10274d5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274d5e jmp 0x10274f2c */
  goto L_10274f2c;
L_10274d63:;
  /* 10274d63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274d66 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10274d6b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d6e je 0x10274db0 */
  if (C.zf) goto L_10274db0;
  /* 10274d70 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d74 je 0x10274db0 */
  if (C.zf) goto L_10274db0;
  /* 10274d76 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274d79 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10274d7f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d82 je 0x10274db0 */
  if (C.zf) goto L_10274db0;
  /* 10274d84 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274d88 je 0x10274db0 */
  if (C.zf) goto L_10274db0;
L_10274d8a:;
  /* 10274d8a push 0x1029b480 */
  push32((uint32_t)(0x1029b480u));
  /* 10274d8f push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10274d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274d9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10274d9c call 0x10273c10 */
  push32(0x10274da1u); f_10273c10();
  /* 10274da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274da7 jne 0x10274daa */
  if (!C.zf) goto L_10274daa;
  /* 10274da9 int3  */
  x86_unimpl("int3 @ 0x10274da9");
L_10274daa:;
  /* 10274daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10274dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10274dae jne 0x10274d8a */
  if (!C.zf) goto L_10274d8a;
L_10274db0:;
  /* 10274db0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274db3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274db6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10274db9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10274dbc push ecx */
  push32((uint32_t)(ECX));
  /* 10274dbd call 0x102789a0 */
  push32(0x10274dc2u); f_102789a0();
  /* 10274dc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274dc5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10274dc8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274dcc jne 0x10274dd5 */
  if (!C.zf) goto L_10274dd5;
  /* 10274dce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274dd0 jmp 0x10274f2c */
  goto L_10274f2c;
L_10274dd5:;
  /* 10274dd5 mov edx, dword ptr [0x1029ea88] */
  EDX = (r32((uint32_t)(0x1029ea88)));
  /* 10274ddb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274dde mov dword ptr [0x1029ea88], edx */
  w32((uint32_t)(0x1029ea88), (EDX));
  /* 10274de4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274de8 je 0x10274e33 */
  if (C.zf) goto L_10274e33;
  /* 10274dea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ded mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10274df3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274df6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10274dfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e00 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10274e07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e0a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10274e11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274e17 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10274e1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e1d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10274e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e27 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10274e2e jmp 0x10274ed3 */
  goto L_10274ed3;
L_10274e33:;
  /* 10274e33 mov edx, dword ptr [0x102a05f0] */
  EDX = (r32((uint32_t)(0x102a05f0)));
  /* 10274e39 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274e3c mov dword ptr [0x102a05f0], edx */
  w32((uint32_t)(0x102a05f0), (EDX));
  /* 10274e42 mov eax, dword ptr [0x102a05f8] */
  EAX = (r32((uint32_t)(0x102a05f8)));
  /* 10274e47 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274e4a mov dword ptr [0x102a05f8], eax */
  w32((uint32_t)(0x102a05f8), (EAX));
  /* 10274e4f mov ecx, dword ptr [0x102a05f8] */
  ECX = (r32((uint32_t)(0x102a05f8)));
  /* 10274e55 cmp ecx, dword ptr [0x102a05fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x102a05fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274e5b jbe 0x10274e69 */
  if ((C.cf||C.zf)) goto L_10274e69;
  /* 10274e5d mov edx, dword ptr [0x102a05f8] */
  EDX = (r32((uint32_t)(0x102a05f8)));
  /* 10274e63 mov dword ptr [0x102a05fc], edx */
  w32((uint32_t)(0x102a05fc), (EDX));
L_10274e69:;
  /* 10274e69 cmp dword ptr [0x102a05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274e70 je 0x10274e7f */
  if (C.zf) goto L_10274e7f;
  /* 10274e72 mov eax, dword ptr [0x102a05f4] */
  EAX = (r32((uint32_t)(0x102a05f4)));
  /* 10274e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e7a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10274e7d jmp 0x10274e88 */
  goto L_10274e88;
L_10274e7f:;
  /* 10274e7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e82 mov dword ptr [0x102a05ec], edx */
  w32((uint32_t)(0x102a05ec), (EDX));
L_10274e88:;
  /* 10274e88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e8b mov ecx, dword ptr [0x102a05f4] */
  ECX = (r32((uint32_t)(0x102a05f4)));
  /* 10274e91 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10274e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274e96 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10274e9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ea0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274ea3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10274ea6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274eac mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10274eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274eb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274eb5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10274eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ebb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274ebe mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10274ec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274ec7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10274eca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ecd mov dword ptr [0x102a05f4], ecx */
  w32((uint32_t)(0x102a05f4), (ECX));
L_10274ed3:;
  /* 10274ed3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10274ed5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10274ed7 mov dl, byte ptr [0x1029ea90] */
  DL = (r8((uint32_t)(0x1029ea90)));
  /* 10274edd push edx */
  push32((uint32_t)(EDX));
  /* 10274ede mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274ee1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274ee4 push eax */
  push32((uint32_t)(EAX));
  /* 10274ee5 call 0x102788c0 */
  push32(0x10274eeau); f_102788c0();
  /* 10274eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274eed push 4 */
  push32((uint32_t)(0x4u));
  /* 10274eef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10274ef1 mov cl, byte ptr [0x1029ea90] */
  CL = (r8((uint32_t)(0x1029ea90)));
  /* 10274ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 10274ef8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274efe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10274f02 push ecx */
  push32((uint32_t)(ECX));
  /* 10274f03 call 0x102788c0 */
  push32(0x10274f08u); f_102788c0();
  /* 10274f08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274f0e push edx */
  push32((uint32_t)(EDX));
  /* 10274f0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10274f11 mov al, byte ptr [0x1029ea92] */
  AL = (r8((uint32_t)(0x1029ea92)));
  /* 10274f16 push eax */
  push32((uint32_t)(EAX));
  /* 10274f17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274f1a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f1d push ecx */
  push32((uint32_t)(ECX));
  /* 10274f1e call 0x102788c0 */
  push32(0x10274f23u); f_102788c0();
  /* 10274f23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10274f29 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10274f2c:;
  /* 10274f2c pop edi */
  EDI = (pop32());
  /* 10274f2d pop esi */
  ESI = (pop32());
  /* 10274f2e pop ebx */
  EBX = (pop32());
  /* 10274f2f mov esp, ebp */
  ESP = (EBP);
  /* 10274f31 pop ebp */
  EBP = (pop32());
  /* 10274f32 ret  */
  ESPCHK(0x10274c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f40 @ 0x10274f40 (27 bytes, 13 insns) */
void f_10274f40(void) {
  FTRACE(0x10274f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10274f41 mov ebp, esp */
  EBP = (ESP);
  /* 10274f43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274f45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274f47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274f49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274f4c push eax */
  push32((uint32_t)(EAX));
  /* 10274f4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274f50 push ecx */
  push32((uint32_t)(ECX));
  /* 10274f51 call 0x10274f60 */
  push32(0x10274f56u); f_10274f60();
  /* 10274f56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f59 pop ebp */
  EBP = (pop32());
  /* 10274f5a ret  */
  ESPCHK(0x10274f40u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10274f60 (96 bytes, 37 insns) */
void f_10274f60(void) {
  FTRACE(0x10274f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10274f61 mov ebp, esp */
  EBP = (ESP);
  /* 10274f63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10274f66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274f69 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10274f6d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10274f70 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10274f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10274f74 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274f77 push edx */
  push32((uint32_t)(EDX));
  /* 10274f78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274f7b push eax */
  push32((uint32_t)(EAX));
  /* 10274f7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274f7f push ecx */
  push32((uint32_t)(ECX));
  /* 10274f80 call 0x10274b50 */
  push32(0x10274f85u); f_10274b50();
  /* 10274f85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f88 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10274f8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274f8f je 0x10274fb9 */
  if (C.zf) goto L_10274fb9;
  /* 10274f91 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274f94 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10274f97 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10274f9a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274f9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10274fa0:;
  /* 10274fa0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10274fa3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10274fa6 jae 0x10274fb9 */
  if (!C.cf) goto L_10274fb9;
  /* 10274fa8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10274fab mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10274fae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10274fb1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10274fb4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10274fb7 jmp 0x10274fa0 */
  goto L_10274fa0;
L_10274fb9:;
  /* 10274fb9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10274fbc mov esp, ebp */
  ESP = (EBP);
  /* 10274fbe pop ebp */
  EBP = (pop32());
  /* 10274fbf ret  */
  ESPCHK(0x10274f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fc0 @ 0x10274fc0 (27 bytes, 13 insns) */
void f_10274fc0(void) {
  FTRACE(0x10274fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10274fc1 mov ebp, esp */
  EBP = (ESP);
  /* 10274fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274fc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10274fc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10274fc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274fcc push eax */
  push32((uint32_t)(EAX));
  /* 10274fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10274fd0 push ecx */
  push32((uint32_t)(ECX));
  /* 10274fd1 call 0x10274fe0 */
  push32(0x10274fd6u); f_10274fe0();
  /* 10274fd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274fd9 pop ebp */
  EBP = (pop32());
  /* 10274fda ret  */
  ESPCHK(0x10274fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fe0 @ 0x10274fe0 (64 bytes, 27 insns) */
void f_10274fe0(void) {
  FTRACE(0x10274fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10274fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10274fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10274fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10274fe4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10274fe6 call 0x10278550 */
  push32(0x10274febu); f_10278550();
  /* 10274feb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10274fee push 1 */
  push32((uint32_t)(0x1u));
  /* 10274ff0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10274ff3 push eax */
  push32((uint32_t)(EAX));
  /* 10274ff4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10274ff7 push ecx */
  push32((uint32_t)(ECX));
  /* 10274ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10274ffb push edx */
  push32((uint32_t)(EDX));
  /* 10274ffc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10274fff push eax */
  push32((uint32_t)(EAX));
  /* 10275000 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275003 push ecx */
  push32((uint32_t)(ECX));
  /* 10275004 call 0x10275020 */
  push32(0x10275009u); f_10275020();
  /* 10275009 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027500c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027500f push 9 */
  push32((uint32_t)(0x9u));
  /* 10275011 call 0x102785f0 */
  push32(0x10275016u); f_102785f0();
  /* 10275016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275019 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027501c mov esp, ebp */
  ESP = (EBP);
  /* 1027501e pop ebp */
  EBP = (pop32());
  /* 1027501f ret  */
  ESPCHK(0x10274fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005020 @ 0x10275020 (1297 bytes, 431 insns) */
void f_10275020(void) {
  FTRACE(0x10275020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275020 push ebp */
  push32((uint32_t)(EBP));
  /* 10275021 mov ebp, esp */
  EBP = (ESP);
  /* 10275023 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275026 push ebx */
  push32((uint32_t)(EBX));
  /* 10275027 push esi */
  push32((uint32_t)(ESI));
  /* 10275028 push edi */
  push32((uint32_t)(EDI));
  /* 10275029 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10275030 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275034 jne 0x10275053 */
  if (!C.zf) goto L_10275053;
  /* 10275036 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10275039 push eax */
  push32((uint32_t)(EAX));
  /* 1027503a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027503d push ecx */
  push32((uint32_t)(ECX));
  /* 1027503e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275041 push edx */
  push32((uint32_t)(EDX));
  /* 10275042 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275045 push eax */
  push32((uint32_t)(EAX));
  /* 10275046 call 0x10274b50 */
  push32(0x1027504bu); f_10274b50();
  /* 1027504b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027504e jmp 0x1027552a */
  goto L_1027552a;
L_10275053:;
  /* 10275053 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275057 je 0x10275076 */
  if (C.zf) goto L_10275076;
  /* 10275059 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027505d jne 0x10275076 */
  if (!C.zf) goto L_10275076;
  /* 1027505f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275062 push ecx */
  push32((uint32_t)(ECX));
  /* 10275063 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275066 push edx */
  push32((uint32_t)(EDX));
  /* 10275067 call 0x102755e0 */
  push32(0x1027506cu); f_102755e0();
  /* 1027506c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027506f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275071 jmp 0x1027552a */
  goto L_1027552a;
L_10275076:;
  /* 10275076 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 1027507b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1027507e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275080 je 0x102750b2 */
  if (C.zf) goto L_102750b2;
L_10275082:;
  /* 10275082 call 0x10275cf0 */
  push32(0x10275087u); f_10275cf0();
  /* 10275087 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275089 jne 0x102750ac */
  if (!C.zf) goto L_102750ac;
  /* 1027508b push 0x1029b544 */
  push32((uint32_t)(0x1029b544u));
  /* 10275090 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275092 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10275097 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 1027509c push 2 */
  push32((uint32_t)(0x2u));
  /* 1027509e call 0x10273c10 */
  push32(0x102750a3u); f_10273c10();
  /* 102750a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102750a6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102750a9 jne 0x102750ac */
  if (!C.zf) goto L_102750ac;
  /* 102750ab int3  */
  x86_unimpl("int3 @ 0x102750ab");
L_102750ac:;
  /* 102750ac xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102750ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102750b0 jne 0x10275082 */
  if (!C.zf) goto L_10275082;
L_102750b2:;
  /* 102750b2 mov edx, dword ptr [0x1029ea88] */
  EDX = (r32((uint32_t)(0x1029ea88)));
  /* 102750b8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 102750bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102750be cmp eax, dword ptr [0x1029ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102750c4 jne 0x102750c7 */
  if (!C.zf) goto L_102750c7;
  /* 102750c6 int3  */
  x86_unimpl("int3 @ 0x102750c6");
L_102750c7:;
  /* 102750c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102750ca push ecx */
  push32((uint32_t)(ECX));
  /* 102750cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102750ce push edx */
  push32((uint32_t)(EDX));
  /* 102750cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102750d2 push eax */
  push32((uint32_t)(EAX));
  /* 102750d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102750d6 push ecx */
  push32((uint32_t)(ECX));
  /* 102750d7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102750da push edx */
  push32((uint32_t)(EDX));
  /* 102750db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102750de push eax */
  push32((uint32_t)(EAX));
  /* 102750df push 2 */
  push32((uint32_t)(0x2u));
  /* 102750e1 call dword ptr [0x1029ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029ec90))), 0x102750e7u);
  /* 102750e7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102750ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102750ec jne 0x1027514c */
  if (!C.zf) goto L_1027514c;
  /* 102750ee cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102750f2 je 0x1027511f */
  if (C.zf) goto L_1027511f;
L_102750f4:;
  /* 102750f4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 102750f7 push ecx */
  push32((uint32_t)(ECX));
  /* 102750f8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 102750fb push edx */
  push32((uint32_t)(EDX));
  /* 102750fc push 0x1029b6c0 */
  push32((uint32_t)(0x1029b6c0u));
  /* 10275101 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275105 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275107 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275109 call 0x10273c10 */
  push32(0x1027510eu); f_10273c10();
  /* 1027510e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275111 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275114 jne 0x10275117 */
  if (!C.zf) goto L_10275117;
  /* 10275116 int3  */
  x86_unimpl("int3 @ 0x10275116");
L_10275117:;
  /* 10275117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027511b jne 0x102750f4 */
  if (!C.zf) goto L_102750f4;
  /* 1027511d jmp 0x10275145 */
  goto L_10275145;
L_1027511f:;
  /* 1027511f push 0x1029b69c */
  push32((uint32_t)(0x1029b69cu));
  /* 10275124 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027512b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027512d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027512f push 0 */
  push32((uint32_t)(0x0u));
  /* 10275131 call 0x10273c10 */
  push32(0x10275136u); f_10273c10();
  /* 10275136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275139 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027513c jne 0x1027513f */
  if (!C.zf) goto L_1027513f;
  /* 1027513e int3  */
  x86_unimpl("int3 @ 0x1027513e");
L_1027513f:;
  /* 1027513f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275143 jne 0x1027511f */
  if (!C.zf) goto L_1027511f;
L_10275145:;
  /* 10275145 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275147 jmp 0x1027552a */
  goto L_1027552a;
L_1027514c:;
  /* 1027514c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275150 jbe 0x1027517e */
  if ((C.cf||C.zf)) goto L_1027517e;
L_10275152:;
  /* 10275152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275155 push edx */
  push32((uint32_t)(EDX));
  /* 10275156 push 0x1029b66c */
  push32((uint32_t)(0x1029b66cu));
  /* 1027515b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027515d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027515f push 0 */
  push32((uint32_t)(0x0u));
  /* 10275161 push 1 */
  push32((uint32_t)(0x1u));
  /* 10275163 call 0x10273c10 */
  push32(0x10275168u); f_10273c10();
  /* 10275168 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027516b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027516e jne 0x10275171 */
  if (!C.zf) goto L_10275171;
  /* 10275170 int3  */
  x86_unimpl("int3 @ 0x10275170");
L_10275171:;
  /* 10275171 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275173 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275175 jne 0x10275152 */
  if (!C.zf) goto L_10275152;
  /* 10275177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275179 jmp 0x1027552a */
  goto L_1027552a;
L_1027517e:;
  /* 1027517e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275182 je 0x102751c6 */
  if (C.zf) goto L_102751c6;
  /* 10275184 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275187 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1027518d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275190 je 0x102751c6 */
  if (C.zf) goto L_102751c6;
  /* 10275192 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275195 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027519b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027519e je 0x102751c6 */
  if (C.zf) goto L_102751c6;
L_102751a0:;
  /* 102751a0 push 0x1029b480 */
  push32((uint32_t)(0x1029b480u));
  /* 102751a5 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 102751aa push 0 */
  push32((uint32_t)(0x0u));
  /* 102751ac push 0 */
  push32((uint32_t)(0x0u));
  /* 102751ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102751b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 102751b2 call 0x10273c10 */
  push32(0x102751b7u); f_10273c10();
  /* 102751b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102751ba cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102751bd jne 0x102751c0 */
  if (!C.zf) goto L_102751c0;
  /* 102751bf int3  */
  x86_unimpl("int3 @ 0x102751bf");
L_102751c0:;
  /* 102751c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102751c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102751c4 jne 0x102751a0 */
  if (!C.zf) goto L_102751a0;
L_102751c6:;
  /* 102751c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102751c9 push ecx */
  push32((uint32_t)(ECX));
  /* 102751ca call 0x10276150 */
  push32(0x102751cfu); f_10276150();
  /* 102751cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102751d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102751d4 jne 0x102751f7 */
  if (!C.zf) goto L_102751f7;
  /* 102751d6 push 0x1029b648 */
  push32((uint32_t)(0x1029b648u));
  /* 102751db push 0 */
  push32((uint32_t)(0x0u));
  /* 102751dd push 0x261 */
  push32((uint32_t)(0x261u));
  /* 102751e2 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 102751e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 102751e9 call 0x10273c10 */
  push32(0x102751eeu); f_10273c10();
  /* 102751ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102751f1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102751f4 jne 0x102751f7 */
  if (!C.zf) goto L_102751f7;
  /* 102751f6 int3  */
  x86_unimpl("int3 @ 0x102751f6");
L_102751f7:;
  /* 102751f7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102751f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102751fb jne 0x102751c6 */
  if (!C.zf) goto L_102751c6;
  /* 102751fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275200 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275203 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10275206 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275209 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027520d jne 0x10275216 */
  if (!C.zf) goto L_10275216;
  /* 1027520f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10275216:;
  /* 10275216 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027521a je 0x1027525a */
  if (C.zf) goto L_1027525a;
L_1027521c:;
  /* 1027521c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027521f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275226 jne 0x10275231 */
  if (!C.zf) goto L_10275231;
  /* 10275228 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027522b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027522f je 0x10275252 */
  if (C.zf) goto L_10275252;
L_10275231:;
  /* 10275231 push 0x1029b600 */
  push32((uint32_t)(0x1029b600u));
  /* 10275236 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275238 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1027523d push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275242 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275244 call 0x10273c10 */
  push32(0x10275249u); f_10273c10();
  /* 10275249 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027524c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027524f jne 0x10275252 */
  if (!C.zf) goto L_10275252;
  /* 10275251 int3  */
  x86_unimpl("int3 @ 0x10275251");
L_10275252:;
  /* 10275252 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275254 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275256 jne 0x1027521c */
  if (!C.zf) goto L_1027521c;
  /* 10275258 jmp 0x102752be */
  goto L_102752be;
L_1027525a:;
  /* 1027525a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027525d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275260 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275265 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275268 jne 0x1027527f */
  if (!C.zf) goto L_1027527f;
  /* 1027526a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027526d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275273 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275276 jne 0x1027527f */
  if (!C.zf) goto L_1027527f;
  /* 10275278 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1027527f:;
  /* 1027527f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275282 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275285 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027528a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027528d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275293 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275295 je 0x102752b8 */
  if (C.zf) goto L_102752b8;
  /* 10275297 push 0x1029b5c4 */
  push32((uint32_t)(0x1029b5c4u));
  /* 1027529c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027529e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 102752a3 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 102752a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 102752aa call 0x10273c10 */
  push32(0x102752afu); f_10273c10();
  /* 102752af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102752b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102752b5 jne 0x102752b8 */
  if (!C.zf) goto L_102752b8;
  /* 102752b7 int3  */
  x86_unimpl("int3 @ 0x102752b7");
L_102752b8:;
  /* 102752b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102752ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102752bc jne 0x1027527f */
  if (!C.zf) goto L_1027527f;
L_102752be:;
  /* 102752be cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102752c2 je 0x102752e9 */
  if (C.zf) goto L_102752e9;
  /* 102752c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102752c7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102752ca push eax */
  push32((uint32_t)(EAX));
  /* 102752cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102752ce push ecx */
  push32((uint32_t)(ECX));
  /* 102752cf call 0x10278ad0 */
  push32(0x102752d4u); f_10278ad0();
  /* 102752d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102752d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102752da cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102752de jne 0x102752e7 */
  if (!C.zf) goto L_102752e7;
  /* 102752e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102752e2 jmp 0x1027552a */
  goto L_1027552a;
L_102752e7:;
  /* 102752e7 jmp 0x1027530c */
  goto L_1027530c;
L_102752e9:;
  /* 102752e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102752ec add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102752ef push edx */
  push32((uint32_t)(EDX));
  /* 102752f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102752f3 push eax */
  push32((uint32_t)(EAX));
  /* 102752f4 call 0x10278a20 */
  push32(0x102752f9u); f_10278a20();
  /* 102752f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102752fc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102752ff cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275303 jne 0x1027530c */
  if (!C.zf) goto L_1027530c;
  /* 10275305 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275307 jmp 0x1027552a */
  goto L_1027552a;
L_1027530c:;
  /* 1027530c mov ecx, dword ptr [0x1029ea88] */
  ECX = (r32((uint32_t)(0x1029ea88)));
  /* 10275312 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275315 mov dword ptr [0x1029ea88], ecx */
  w32((uint32_t)(0x1029ea88), (ECX));
  /* 1027531b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027531f jne 0x10275377 */
  if (!C.zf) goto L_10275377;
  /* 10275321 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275324 mov eax, dword ptr [0x102a05f0] */
  EAX = (r32((uint32_t)(0x102a05f0)));
  /* 10275329 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027532c mov dword ptr [0x102a05f0], eax */
  w32((uint32_t)(0x102a05f0), (EAX));
  /* 10275331 mov ecx, dword ptr [0x102a05f0] */
  ECX = (r32((uint32_t)(0x102a05f0)));
  /* 10275337 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027533a mov dword ptr [0x102a05f0], ecx */
  w32((uint32_t)(0x102a05f0), (ECX));
  /* 10275340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275343 mov eax, dword ptr [0x102a05f8] */
  EAX = (r32((uint32_t)(0x102a05f8)));
  /* 10275348 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027534b mov dword ptr [0x102a05f8], eax */
  w32((uint32_t)(0x102a05f8), (EAX));
  /* 10275350 mov ecx, dword ptr [0x102a05f8] */
  ECX = (r32((uint32_t)(0x102a05f8)));
  /* 10275356 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275359 mov dword ptr [0x102a05f8], ecx */
  w32((uint32_t)(0x102a05f8), (ECX));
  /* 1027535f mov edx, dword ptr [0x102a05f8] */
  EDX = (r32((uint32_t)(0x102a05f8)));
  /* 10275365 cmp edx, dword ptr [0x102a05fc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x102a05fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027536b jbe 0x10275377 */
  if ((C.cf||C.zf)) goto L_10275377;
  /* 1027536d mov eax, dword ptr [0x102a05f8] */
  EAX = (r32((uint32_t)(0x102a05f8)));
  /* 10275372 mov dword ptr [0x102a05fc], eax */
  w32((uint32_t)(0x102a05fc), (EAX));
L_10275377:;
  /* 10275377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027537a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027537d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10275380 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275386 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275389 jbe 0x102753af */
  if ((C.cf||C.zf)) goto L_102753af;
  /* 1027538b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027538e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275391 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275394 push edx */
  push32((uint32_t)(EDX));
  /* 10275395 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275397 mov al, byte ptr [0x1029ea92] */
  AL = (r8((uint32_t)(0x1029ea92)));
  /* 1027539c push eax */
  push32((uint32_t)(EAX));
  /* 1027539d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102753a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102753a3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102753a6 push edx */
  push32((uint32_t)(EDX));
  /* 102753a7 call 0x102788c0 */
  push32(0x102753acu); f_102788c0();
  /* 102753ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102753af:;
  /* 102753af push 4 */
  push32((uint32_t)(0x4u));
  /* 102753b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102753b3 mov al, byte ptr [0x1029ea90] */
  AL = (r8((uint32_t)(0x1029ea90)));
  /* 102753b8 push eax */
  push32((uint32_t)(EAX));
  /* 102753b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102753bc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102753bf push ecx */
  push32((uint32_t)(ECX));
  /* 102753c0 call 0x102788c0 */
  push32(0x102753c5u); f_102788c0();
  /* 102753c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102753c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102753cc jne 0x102753e9 */
  if (!C.zf) goto L_102753e9;
  /* 102753ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102753d1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 102753d4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 102753d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102753da mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102753dd mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 102753e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102753e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 102753e6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_102753e9:;
  /* 102753e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102753ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102753ef mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_102753f2:;
  /* 102753f2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102753f6 jne 0x10275427 */
  if (!C.zf) goto L_10275427;
  /* 102753f8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102753fc jne 0x10275406 */
  if (!C.zf) goto L_10275406;
  /* 102753fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275401 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275404 je 0x10275427 */
  if (C.zf) goto L_10275427;
L_10275406:;
  /* 10275406 push 0x1029b590 */
  push32((uint32_t)(0x1029b590u));
  /* 1027540b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027540d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10275412 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275419 call 0x10273c10 */
  push32(0x1027541eu); f_10273c10();
  /* 1027541e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275421 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275424 jne 0x10275427 */
  if (!C.zf) goto L_10275427;
  /* 10275426 int3  */
  x86_unimpl("int3 @ 0x10275426");
L_10275427:;
  /* 10275427 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275429 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027542b jne 0x102753f2 */
  if (!C.zf) goto L_102753f2;
  /* 1027542d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275430 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275433 je 0x1027543b */
  if (C.zf) goto L_1027543b;
  /* 10275435 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275439 je 0x10275443 */
  if (C.zf) goto L_10275443;
L_1027543b:;
  /* 1027543b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027543e jmp 0x1027552a */
  goto L_1027552a;
L_10275443:;
  /* 10275443 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275446 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275449 je 0x1027545b */
  if (C.zf) goto L_1027545b;
  /* 1027544b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027544e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10275450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275453 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10275456 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10275459 jmp 0x10275497 */
  goto L_10275497;
L_1027545b:;
  /* 1027545b mov eax, dword ptr [0x102a05ec] */
  EAX = (r32((uint32_t)(0x102a05ec)));
  /* 10275460 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275463 je 0x10275486 */
  if (C.zf) goto L_10275486;
  /* 10275465 push 0x1029b574 */
  push32((uint32_t)(0x1029b574u));
  /* 1027546a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027546c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10275471 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275476 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275478 call 0x10273c10 */
  push32(0x1027547du); f_10273c10();
  /* 1027547d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275480 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275483 jne 0x10275486 */
  if (!C.zf) goto L_10275486;
  /* 10275485 int3  */
  x86_unimpl("int3 @ 0x10275485");
L_10275486:;
  /* 10275486 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275488 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027548a jne 0x1027545b */
  if (!C.zf) goto L_1027545b;
  /* 1027548c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027548f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10275492 mov dword ptr [0x102a05ec], eax */
  w32((uint32_t)(0x102a05ec), (EAX));
L_10275497:;
  /* 10275497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027549a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027549e je 0x102754af */
  if (C.zf) goto L_102754af;
  /* 102754a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102754a3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 102754a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102754a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102754ab mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 102754ad jmp 0x102754ea */
  goto L_102754ea;
L_102754af:;
  /* 102754af mov eax, dword ptr [0x102a05f4] */
  EAX = (r32((uint32_t)(0x102a05f4)));
  /* 102754b4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102754b7 je 0x102754da */
  if (C.zf) goto L_102754da;
  /* 102754b9 push 0x1029b558 */
  push32((uint32_t)(0x1029b558u));
  /* 102754be push 0 */
  push32((uint32_t)(0x0u));
  /* 102754c0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 102754c5 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 102754ca push 2 */
  push32((uint32_t)(0x2u));
  /* 102754cc call 0x10273c10 */
  push32(0x102754d1u); f_10273c10();
  /* 102754d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102754d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102754d7 jne 0x102754da */
  if (!C.zf) goto L_102754da;
  /* 102754d9 int3  */
  x86_unimpl("int3 @ 0x102754d9");
L_102754da:;
  /* 102754da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102754dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102754de jne 0x102754af */
  if (!C.zf) goto L_102754af;
  /* 102754e0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102754e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 102754e5 mov dword ptr [0x102a05f4], eax */
  w32((uint32_t)(0x102a05f4), (EAX));
L_102754ea:;
  /* 102754ea cmp dword ptr [0x102a05f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102754f1 je 0x10275501 */
  if (C.zf) goto L_10275501;
  /* 102754f3 mov ecx, dword ptr [0x102a05f4] */
  ECX = (r32((uint32_t)(0x102a05f4)));
  /* 102754f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102754fc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 102754ff jmp 0x10275509 */
  goto L_10275509;
L_10275501:;
  /* 10275501 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275504 mov dword ptr [0x102a05ec], eax */
  w32((uint32_t)(0x102a05ec), (EAX));
L_10275509:;
  /* 10275509 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027550c mov edx, dword ptr [0x102a05f4] */
  EDX = (r32((uint32_t)(0x102a05f4)));
  /* 10275512 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10275514 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275517 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1027551e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275521 mov dword ptr [0x102a05f4], ecx */
  w32((uint32_t)(0x102a05f4), (ECX));
  /* 10275527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1027552a:;
  /* 1027552a pop edi */
  EDI = (pop32());
  /* 1027552b pop esi */
  ESI = (pop32());
  /* 1027552c pop ebx */
  EBX = (pop32());
  /* 1027552d mov esp, ebp */
  ESP = (EBP);
  /* 1027552f pop ebp */
  EBP = (pop32());
  /* 10275530 ret  */
  ESPCHK(0x10275020u, _esp0);
  ESP += 4; return;
}

/* FUN_10005540 @ 0x10275540 (27 bytes, 13 insns) */
void f_10275540(void) {
  FTRACE(0x10275540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275540 push ebp */
  push32((uint32_t)(EBP));
  /* 10275541 mov ebp, esp */
  EBP = (ESP);
  /* 10275543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275545 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275547 push 1 */
  push32((uint32_t)(0x1u));
  /* 10275549 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027554c push eax */
  push32((uint32_t)(EAX));
  /* 1027554d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275550 push ecx */
  push32((uint32_t)(ECX));
  /* 10275551 call 0x10275560 */
  push32(0x10275556u); f_10275560();
  /* 10275556 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275559 pop ebp */
  EBP = (pop32());
  /* 1027555a ret  */
  ESPCHK(0x10275540u, _esp0);
  ESP += 4; return;
}

/* FUN_10005560 @ 0x10275560 (64 bytes, 27 insns) */
void f_10275560(void) {
  FTRACE(0x10275560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275560 push ebp */
  push32((uint32_t)(EBP));
  /* 10275561 mov ebp, esp */
  EBP = (ESP);
  /* 10275563 push ecx */
  push32((uint32_t)(ECX));
  /* 10275564 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275566 call 0x10278550 */
  push32(0x1027556bu); f_10278550();
  /* 1027556b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027556e push 0 */
  push32((uint32_t)(0x0u));
  /* 10275570 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10275573 push eax */
  push32((uint32_t)(EAX));
  /* 10275574 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10275577 push ecx */
  push32((uint32_t)(ECX));
  /* 10275578 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027557b push edx */
  push32((uint32_t)(EDX));
  /* 1027557c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027557f push eax */
  push32((uint32_t)(EAX));
  /* 10275580 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275583 push ecx */
  push32((uint32_t)(ECX));
  /* 10275584 call 0x10275020 */
  push32(0x10275589u); f_10275020();
  /* 10275589 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027558c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027558f push 9 */
  push32((uint32_t)(0x9u));
  /* 10275591 call 0x102785f0 */
  push32(0x10275596u); f_102785f0();
  /* 10275596 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275599 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027559c mov esp, ebp */
  ESP = (EBP);
  /* 1027559e pop ebp */
  EBP = (pop32());
  /* 1027559f ret  */
  ESPCHK(0x10275560u, _esp0);
  ESP += 4; return;
}

/* FUN_100055a0 @ 0x102755a0 (19 bytes, 9 insns) */
void f_102755a0(void) {
  FTRACE(0x102755a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102755a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102755a1 mov ebp, esp */
  EBP = (ESP);
  /* 102755a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102755a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102755a8 push eax */
  push32((uint32_t)(EAX));
  /* 102755a9 call 0x102755e0 */
  push32(0x102755aeu); f_102755e0();
  /* 102755ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102755b1 pop ebp */
  EBP = (pop32());
  /* 102755b2 ret  */
  ESPCHK(0x102755a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055c0 @ 0x102755c0 (19 bytes, 9 insns) */
void f_102755c0(void) {
  FTRACE(0x102755c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102755c0 push ebp */
  push32((uint32_t)(EBP));
  /* 102755c1 mov ebp, esp */
  EBP = (ESP);
  /* 102755c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 102755c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102755c8 push eax */
  push32((uint32_t)(EAX));
  /* 102755c9 call 0x10275610 */
  push32(0x102755ceu); f_10275610();
  /* 102755ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102755d1 pop ebp */
  EBP = (pop32());
  /* 102755d2 ret  */
  ESPCHK(0x102755c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100055e0 @ 0x102755e0 (41 bytes, 16 insns) */
void f_102755e0(void) {
  FTRACE(0x102755e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102755e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102755e1 mov ebp, esp */
  EBP = (ESP);
  /* 102755e3 push 9 */
  push32((uint32_t)(0x9u));
  /* 102755e5 call 0x10278550 */
  push32(0x102755eau); f_10278550();
  /* 102755ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102755ed mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102755f0 push eax */
  push32((uint32_t)(EAX));
  /* 102755f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102755f4 push ecx */
  push32((uint32_t)(ECX));
  /* 102755f5 call 0x10275610 */
  push32(0x102755fau); f_10275610();
  /* 102755fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102755fd push 9 */
  push32((uint32_t)(0x9u));
  /* 102755ff call 0x102785f0 */
  push32(0x10275604u); f_102785f0();
  /* 10275604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275607 pop ebp */
  EBP = (pop32());
  /* 10275608 ret  */
  ESPCHK(0x102755e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005610 @ 0x10275610 (1004 bytes, 342 insns) */
void f_10275610(void) {
  FTRACE(0x10275610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275610 push ebp */
  push32((uint32_t)(EBP));
  /* 10275611 mov ebp, esp */
  EBP = (ESP);
  /* 10275613 push ecx */
  push32((uint32_t)(ECX));
  /* 10275614 push ebx */
  push32((uint32_t)(EBX));
  /* 10275615 push esi */
  push32((uint32_t)(ESI));
  /* 10275616 push edi */
  push32((uint32_t)(EDI));
  /* 10275617 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 1027561c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1027561f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275621 je 0x10275653 */
  if (C.zf) goto L_10275653;
L_10275623:;
  /* 10275623 call 0x10275cf0 */
  push32(0x10275628u); f_10275cf0();
  /* 10275628 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027562a jne 0x1027564d */
  if (!C.zf) goto L_1027564d;
  /* 1027562c push 0x1029b544 */
  push32((uint32_t)(0x1029b544u));
  /* 10275631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275633 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10275638 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 1027563d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027563f call 0x10273c10 */
  push32(0x10275644u); f_10273c10();
  /* 10275644 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275647 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027564a jne 0x1027564d */
  if (!C.zf) goto L_1027564d;
  /* 1027564c int3  */
  x86_unimpl("int3 @ 0x1027564c");
L_1027564d:;
  /* 1027564d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027564f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275651 jne 0x10275623 */
  if (!C.zf) goto L_10275623;
L_10275653:;
  /* 10275653 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275657 jne 0x1027565e */
  if (!C.zf) goto L_1027565e;
  /* 10275659 jmp 0x102759f5 */
  goto L_102759f5;
L_1027565e:;
  /* 1027565e push 0 */
  push32((uint32_t)(0x0u));
  /* 10275660 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275662 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275664 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275667 push edx */
  push32((uint32_t)(EDX));
  /* 10275668 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027566a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027566d push eax */
  push32((uint32_t)(EAX));
  /* 1027566e push 3 */
  push32((uint32_t)(0x3u));
  /* 10275670 call dword ptr [0x1029ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1029ec90))), 0x10275676u);
  /* 10275676 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027567b jne 0x102756a8 */
  if (!C.zf) goto L_102756a8;
L_1027567d:;
  /* 1027567d push 0x1029b808 */
  push32((uint32_t)(0x1029b808u));
  /* 10275682 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275687 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275689 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027568b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027568d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027568f call 0x10273c10 */
  push32(0x10275694u); f_10273c10();
  /* 10275694 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275697 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027569a jne 0x1027569d */
  if (!C.zf) goto L_1027569d;
  /* 1027569c int3  */
  x86_unimpl("int3 @ 0x1027569c");
L_1027569d:;
  /* 1027569d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027569f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102756a1 jne 0x1027567d */
  if (!C.zf) goto L_1027567d;
  /* 102756a3 jmp 0x102759f5 */
  goto L_102759f5;
L_102756a8:;
  /* 102756a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102756ab push edx */
  push32((uint32_t)(EDX));
  /* 102756ac call 0x10276150 */
  push32(0x102756b1u); f_10276150();
  /* 102756b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102756b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102756b6 jne 0x102756d9 */
  if (!C.zf) goto L_102756d9;
  /* 102756b8 push 0x1029b648 */
  push32((uint32_t)(0x1029b648u));
  /* 102756bd push 0 */
  push32((uint32_t)(0x0u));
  /* 102756bf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 102756c4 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 102756c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 102756cb call 0x10273c10 */
  push32(0x102756d0u); f_10273c10();
  /* 102756d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102756d3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102756d6 jne 0x102756d9 */
  if (!C.zf) goto L_102756d9;
  /* 102756d8 int3  */
  x86_unimpl("int3 @ 0x102756d8");
L_102756d9:;
  /* 102756d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102756db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102756dd jne 0x102756a8 */
  if (!C.zf) goto L_102756a8;
  /* 102756df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102756e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102756e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_102756e8:;
  /* 102756e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102756eb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 102756ee and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102756f3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102756f6 je 0x1027573b */
  if (C.zf) goto L_1027573b;
  /* 102756f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102756fb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102756ff je 0x1027573b */
  if (C.zf) goto L_1027573b;
  /* 10275701 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275704 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275707 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027570c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027570f je 0x1027573b */
  if (C.zf) goto L_1027573b;
  /* 10275711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275714 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275718 je 0x1027573b */
  if (C.zf) goto L_1027573b;
  /* 1027571a push 0x1029b7e0 */
  push32((uint32_t)(0x1029b7e0u));
  /* 1027571f push 0 */
  push32((uint32_t)(0x0u));
  /* 10275721 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10275726 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 1027572b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027572d call 0x10273c10 */
  push32(0x10275732u); f_10273c10();
  /* 10275732 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275735 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275738 jne 0x1027573b */
  if (!C.zf) goto L_1027573b;
  /* 1027573a int3  */
  x86_unimpl("int3 @ 0x1027573a");
L_1027573b:;
  /* 1027573b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027573d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027573f jne 0x102756e8 */
  if (!C.zf) goto L_102756e8;
  /* 10275741 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10275746 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10275749 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027574b jne 0x10275816 */
  if (!C.zf) goto L_10275816;
  /* 10275751 push 4 */
  push32((uint32_t)(0x4u));
  /* 10275753 mov cl, byte ptr [0x1029ea90] */
  CL = (r8((uint32_t)(0x1029ea90)));
  /* 10275759 push ecx */
  push32((uint32_t)(ECX));
  /* 1027575a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027575d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275760 push edx */
  push32((uint32_t)(EDX));
  /* 10275761 call 0x10275c60 */
  push32(0x10275766u); f_10275c60();
  /* 10275766 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027576b jne 0x102757b0 */
  if (!C.zf) goto L_102757b0;
L_1027576d:;
  /* 1027576d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275770 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275773 push eax */
  push32((uint32_t)(EAX));
  /* 10275774 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275777 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1027577a push edx */
  push32((uint32_t)(EDX));
  /* 1027577b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027577e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10275781 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275787 mov edx, dword ptr [ecx*4 + 0x1029ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea94)));
  /* 1027578e push edx */
  push32((uint32_t)(EDX));
  /* 1027578f push 0x1029b7b4 */
  push32((uint32_t)(0x1029b7b4u));
  /* 10275794 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275796 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275798 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027579a push 1 */
  push32((uint32_t)(0x1u));
  /* 1027579c call 0x10273c10 */
  push32(0x102757a1u); f_10273c10();
  /* 102757a1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102757a4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102757a7 jne 0x102757aa */
  if (!C.zf) goto L_102757aa;
  /* 102757a9 int3  */
  x86_unimpl("int3 @ 0x102757a9");
L_102757aa:;
  /* 102757aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102757ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102757ae jne 0x1027576d */
  if (!C.zf) goto L_1027576d;
L_102757b0:;
  /* 102757b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 102757b2 mov cl, byte ptr [0x1029ea90] */
  CL = (r8((uint32_t)(0x1029ea90)));
  /* 102757b8 push ecx */
  push32((uint32_t)(ECX));
  /* 102757b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102757bc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 102757bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102757c2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 102757c6 push edx */
  push32((uint32_t)(EDX));
  /* 102757c7 call 0x10275c60 */
  push32(0x102757ccu); f_10275c60();
  /* 102757cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102757cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102757d1 jne 0x10275816 */
  if (!C.zf) goto L_10275816;
L_102757d3:;
  /* 102757d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102757d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102757d9 push eax */
  push32((uint32_t)(EAX));
  /* 102757da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102757dd mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 102757e0 push edx */
  push32((uint32_t)(EDX));
  /* 102757e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102757e4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 102757e7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 102757ed mov edx, dword ptr [ecx*4 + 0x1029ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea94)));
  /* 102757f4 push edx */
  push32((uint32_t)(EDX));
  /* 102757f5 push 0x1029b788 */
  push32((uint32_t)(0x1029b788u));
  /* 102757fa push 0 */
  push32((uint32_t)(0x0u));
  /* 102757fc push 0 */
  push32((uint32_t)(0x0u));
  /* 102757fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10275800 push 1 */
  push32((uint32_t)(0x1u));
  /* 10275802 call 0x10273c10 */
  push32(0x10275807u); f_10273c10();
  /* 10275807 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027580a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027580d jne 0x10275810 */
  if (!C.zf) goto L_10275810;
  /* 1027580f int3  */
  x86_unimpl("int3 @ 0x1027580f");
L_10275810:;
  /* 10275810 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275812 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275814 jne 0x102757d3 */
  if (!C.zf) goto L_102757d3;
L_10275816:;
  /* 10275816 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275819 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027581d jne 0x1027588b */
  if (!C.zf) goto L_1027588b;
L_1027581f:;
  /* 1027581f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275822 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275829 jne 0x10275834 */
  if (!C.zf) goto L_10275834;
  /* 1027582b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027582e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275832 je 0x10275855 */
  if (C.zf) goto L_10275855;
L_10275834:;
  /* 10275834 push 0x1029b748 */
  push32((uint32_t)(0x1029b748u));
  /* 10275839 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027583b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10275840 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275845 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275847 call 0x10273c10 */
  push32(0x1027584cu); f_10273c10();
  /* 1027584c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027584f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275852 jne 0x10275855 */
  if (!C.zf) goto L_10275855;
  /* 10275854 int3  */
  x86_unimpl("int3 @ 0x10275854");
L_10275855:;
  /* 10275855 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275857 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275859 jne 0x1027581f */
  if (!C.zf) goto L_1027581f;
  /* 1027585b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027585e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10275861 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275864 push eax */
  push32((uint32_t)(EAX));
  /* 10275865 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275867 mov cl, byte ptr [0x1029ea91] */
  CL = (r8((uint32_t)(0x1029ea91)));
  /* 1027586d push ecx */
  push32((uint32_t)(ECX));
  /* 1027586e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275871 push edx */
  push32((uint32_t)(EDX));
  /* 10275872 call 0x102788c0 */
  push32(0x10275877u); f_102788c0();
  /* 10275877 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027587a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027587d push eax */
  push32((uint32_t)(EAX));
  /* 1027587e call 0x10278cc0 */
  push32(0x10275883u); f_10278cc0();
  /* 10275883 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275886 jmp 0x102759f5 */
  goto L_102759f5;
L_1027588b:;
  /* 1027588b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027588e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275892 jne 0x102758a1 */
  if (!C.zf) goto L_102758a1;
  /* 10275894 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275898 jne 0x102758a1 */
  if (!C.zf) goto L_102758a1;
  /* 1027589a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_102758a1:;
  /* 102758a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102758a4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 102758a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102758aa je 0x102758cd */
  if (C.zf) goto L_102758cd;
  /* 102758ac push 0x1029b728 */
  push32((uint32_t)(0x1029b728u));
  /* 102758b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 102758b3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 102758b8 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 102758bd push 2 */
  push32((uint32_t)(0x2u));
  /* 102758bf call 0x10273c10 */
  push32(0x102758c4u); f_10273c10();
  /* 102758c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102758c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102758ca jne 0x102758cd */
  if (!C.zf) goto L_102758cd;
  /* 102758cc int3  */
  x86_unimpl("int3 @ 0x102758cc");
L_102758cd:;
  /* 102758cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102758cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102758d1 jne 0x102758a1 */
  if (!C.zf) goto L_102758a1;
  /* 102758d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102758d6 mov eax, dword ptr [0x102a05f8] */
  EAX = (r32((uint32_t)(0x102a05f8)));
  /* 102758db sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102758de mov dword ptr [0x102a05f8], eax */
  w32((uint32_t)(0x102a05f8), (EAX));
  /* 102758e3 mov ecx, dword ptr [0x1029ea84] */
  ECX = (r32((uint32_t)(0x1029ea84)));
  /* 102758e9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 102758ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102758ee jne 0x102759cc */
  if (!C.zf) goto L_102759cc;
  /* 102758f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102758f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102758fa je 0x1027590c */
  if (C.zf) goto L_1027590c;
  /* 102758fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102758ff mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10275901 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275904 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10275907 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1027590a jmp 0x1027594a */
  goto L_1027594a;
L_1027590c:;
  /* 1027590c mov ecx, dword ptr [0x102a05ec] */
  ECX = (r32((uint32_t)(0x102a05ec)));
  /* 10275912 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275915 je 0x10275938 */
  if (C.zf) goto L_10275938;
  /* 10275917 push 0x1029b710 */
  push32((uint32_t)(0x1029b710u));
  /* 1027591c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027591e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10275923 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275928 push 2 */
  push32((uint32_t)(0x2u));
  /* 1027592a call 0x10273c10 */
  push32(0x1027592fu); f_10273c10();
  /* 1027592f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275932 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275935 jne 0x10275938 */
  if (!C.zf) goto L_10275938;
  /* 10275937 int3  */
  x86_unimpl("int3 @ 0x10275937");
L_10275938:;
  /* 10275938 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027593a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027593c jne 0x1027590c */
  if (!C.zf) goto L_1027590c;
  /* 1027593e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275941 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10275944 mov dword ptr [0x102a05ec], ecx */
  w32((uint32_t)(0x102a05ec), (ECX));
L_1027594a:;
  /* 1027594a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027594d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275951 je 0x10275962 */
  if (C.zf) goto L_10275962;
  /* 10275953 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275956 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10275959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027595c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1027595e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10275960 jmp 0x1027599f */
  goto L_1027599f;
L_10275962:;
  /* 10275962 mov ecx, dword ptr [0x102a05f4] */
  ECX = (r32((uint32_t)(0x102a05f4)));
  /* 10275968 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027596b je 0x1027598e */
  if (C.zf) goto L_1027598e;
  /* 1027596d push 0x1029b6f8 */
  push32((uint32_t)(0x1029b6f8u));
  /* 10275972 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275974 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10275979 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 1027597e push 2 */
  push32((uint32_t)(0x2u));
  /* 10275980 call 0x10273c10 */
  push32(0x10275985u); f_10273c10();
  /* 10275985 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275988 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027598b jne 0x1027598e */
  if (!C.zf) goto L_1027598e;
  /* 1027598d int3  */
  x86_unimpl("int3 @ 0x1027598d");
L_1027598e:;
  /* 1027598e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275990 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275992 jne 0x10275962 */
  if (!C.zf) goto L_10275962;
  /* 10275994 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275997 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10275999 mov dword ptr [0x102a05f4], ecx */
  w32((uint32_t)(0x102a05f4), (ECX));
L_1027599f:;
  /* 1027599f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759a2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 102759a5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102759a8 push eax */
  push32((uint32_t)(EAX));
  /* 102759a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102759ab mov cl, byte ptr [0x1029ea91] */
  CL = (r8((uint32_t)(0x1029ea91)));
  /* 102759b1 push ecx */
  push32((uint32_t)(ECX));
  /* 102759b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759b5 push edx */
  push32((uint32_t)(EDX));
  /* 102759b6 call 0x102788c0 */
  push32(0x102759bbu); f_102788c0();
  /* 102759bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102759be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759c1 push eax */
  push32((uint32_t)(EAX));
  /* 102759c2 call 0x10278cc0 */
  push32(0x102759c7u); f_10278cc0();
  /* 102759c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102759ca jmp 0x102759f5 */
  goto L_102759f5;
L_102759cc:;
  /* 102759cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759cf mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 102759d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759d9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 102759dc push eax */
  push32((uint32_t)(EAX));
  /* 102759dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102759df mov cl, byte ptr [0x1029ea91] */
  CL = (r8((uint32_t)(0x1029ea91)));
  /* 102759e5 push ecx */
  push32((uint32_t)(ECX));
  /* 102759e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102759e9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102759ec push edx */
  push32((uint32_t)(EDX));
  /* 102759ed call 0x102788c0 */
  push32(0x102759f2u); f_102788c0();
  /* 102759f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102759f5:;
  /* 102759f5 pop edi */
  EDI = (pop32());
  /* 102759f6 pop esi */
  ESI = (pop32());
  /* 102759f7 pop ebx */
  EBX = (pop32());
  /* 102759f8 mov esp, ebp */
  ESP = (EBP);
  /* 102759fa pop ebp */
  EBP = (pop32());
  /* 102759fb ret  */
  ESPCHK(0x10275610u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x10275a00 (19 bytes, 9 insns) */
void f_10275a00(void) {
  FTRACE(0x10275a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10275a01 mov ebp, esp */
  EBP = (ESP);
  /* 10275a03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10275a05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275a08 push eax */
  push32((uint32_t)(EAX));
  /* 10275a09 call 0x10275a20 */
  push32(0x10275a0eu); f_10275a20();
  /* 10275a0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275a11 pop ebp */
  EBP = (pop32());
  /* 10275a12 ret  */
  ESPCHK(0x10275a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a20 @ 0x10275a20 (342 bytes, 119 insns) */
void f_10275a20(void) {
  FTRACE(0x10275a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10275a21 mov ebp, esp */
  EBP = (ESP);
  /* 10275a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275a26 push ebx */
  push32((uint32_t)(EBX));
  /* 10275a27 push esi */
  push32((uint32_t)(ESI));
  /* 10275a28 push edi */
  push32((uint32_t)(EDI));
  /* 10275a29 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10275a2e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10275a31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275a33 je 0x10275a65 */
  if (C.zf) goto L_10275a65;
L_10275a35:;
  /* 10275a35 call 0x10275cf0 */
  push32(0x10275a3au); f_10275cf0();
  /* 10275a3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275a3c jne 0x10275a5f */
  if (!C.zf) goto L_10275a5f;
  /* 10275a3e push 0x1029b544 */
  push32((uint32_t)(0x1029b544u));
  /* 10275a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275a45 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10275a4a push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275a4f push 2 */
  push32((uint32_t)(0x2u));
  /* 10275a51 call 0x10273c10 */
  push32(0x10275a56u); f_10273c10();
  /* 10275a56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275a59 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275a5c jne 0x10275a5f */
  if (!C.zf) goto L_10275a5f;
  /* 10275a5e int3  */
  x86_unimpl("int3 @ 0x10275a5e");
L_10275a5f:;
  /* 10275a5f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275a61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275a63 jne 0x10275a35 */
  if (!C.zf) goto L_10275a35;
L_10275a65:;
  /* 10275a65 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275a67 call 0x10278550 */
  push32(0x10275a6cu); f_10278550();
  /* 10275a6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10275a6f:;
  /* 10275a6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275a72 push edx */
  push32((uint32_t)(EDX));
  /* 10275a73 call 0x10276150 */
  push32(0x10275a78u); f_10276150();
  /* 10275a78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275a7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275a7d jne 0x10275aa0 */
  if (!C.zf) goto L_10275aa0;
  /* 10275a7f push 0x1029b648 */
  push32((uint32_t)(0x1029b648u));
  /* 10275a84 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275a86 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10275a8b push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275a90 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275a92 call 0x10273c10 */
  push32(0x10275a97u); f_10273c10();
  /* 10275a97 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275a9a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275a9d jne 0x10275aa0 */
  if (!C.zf) goto L_10275aa0;
  /* 10275a9f int3  */
  x86_unimpl("int3 @ 0x10275a9f");
L_10275aa0:;
  /* 10275aa0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275aa4 jne 0x10275a6f */
  if (!C.zf) goto L_10275a6f;
  /* 10275aa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275aa9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275aac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10275aaf:;
  /* 10275aaf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275ab2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275ab5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275aba cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275abd je 0x10275b02 */
  if (C.zf) goto L_10275b02;
  /* 10275abf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275ac2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275ac6 je 0x10275b02 */
  if (C.zf) goto L_10275b02;
  /* 10275ac8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275acb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275ace and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275ad3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275ad6 je 0x10275b02 */
  if (C.zf) goto L_10275b02;
  /* 10275ad8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275adb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275adf je 0x10275b02 */
  if (C.zf) goto L_10275b02;
  /* 10275ae1 push 0x1029b7e0 */
  push32((uint32_t)(0x1029b7e0u));
  /* 10275ae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275ae8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10275aed push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275af2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275af4 call 0x10273c10 */
  push32(0x10275af9u); f_10273c10();
  /* 10275af9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275afc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275aff jne 0x10275b02 */
  if (!C.zf) goto L_10275b02;
  /* 10275b01 int3  */
  x86_unimpl("int3 @ 0x10275b01");
L_10275b02:;
  /* 10275b02 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275b04 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275b06 jne 0x10275aaf */
  if (!C.zf) goto L_10275aaf;
  /* 10275b08 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275b0b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275b0f jne 0x10275b1e */
  if (!C.zf) goto L_10275b1e;
  /* 10275b11 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275b15 jne 0x10275b1e */
  if (!C.zf) goto L_10275b1e;
  /* 10275b17 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10275b1e:;
  /* 10275b1e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275b21 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275b25 je 0x10275b59 */
  if (C.zf) goto L_10275b59;
L_10275b27:;
  /* 10275b27 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275b2a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275b2d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275b30 je 0x10275b53 */
  if (C.zf) goto L_10275b53;
  /* 10275b32 push 0x1029b728 */
  push32((uint32_t)(0x1029b728u));
  /* 10275b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275b39 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10275b3e push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275b43 push 2 */
  push32((uint32_t)(0x2u));
  /* 10275b45 call 0x10273c10 */
  push32(0x10275b4au); f_10273c10();
  /* 10275b4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275b50 jne 0x10275b53 */
  if (!C.zf) goto L_10275b53;
  /* 10275b52 int3  */
  x86_unimpl("int3 @ 0x10275b52");
L_10275b53:;
  /* 10275b53 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275b55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275b57 jne 0x10275b27 */
  if (!C.zf) goto L_10275b27;
L_10275b59:;
  /* 10275b59 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275b5c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10275b5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10275b62 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275b64 call 0x102785f0 */
  push32(0x10275b69u); f_102785f0();
  /* 10275b69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275b6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275b6f pop edi */
  EDI = (pop32());
  /* 10275b70 pop esi */
  ESI = (pop32());
  /* 10275b71 pop ebx */
  EBX = (pop32());
  /* 10275b72 mov esp, ebp */
  ESP = (EBP);
  /* 10275b74 pop ebp */
  EBP = (pop32());
  /* 10275b75 ret  */
  ESPCHK(0x10275a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x10275b80 (28 bytes, 11 insns) */
void f_10275b80(void) {
  FTRACE(0x10275b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10275b81 mov ebp, esp */
  EBP = (ESP);
  /* 10275b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10275b84 mov eax, dword ptr [0x1029ea8c] */
  EAX = (r32((uint32_t)(0x1029ea8c)));
  /* 10275b89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10275b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275b8f mov dword ptr [0x1029ea8c], ecx */
  w32((uint32_t)(0x1029ea8c), (ECX));
  /* 10275b95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275b98 mov esp, ebp */
  ESP = (EBP);
  /* 10275b9a pop ebp */
  EBP = (pop32());
  /* 10275b9b ret  */
  ESPCHK(0x10275b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ba0 @ 0x10275ba0 (157 bytes, 59 insns) */
void f_10275ba0(void) {
  FTRACE(0x10275ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10275ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10275ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 10275ba4 push ebx */
  push32((uint32_t)(EBX));
  /* 10275ba5 push esi */
  push32((uint32_t)(ESI));
  /* 10275ba6 push edi */
  push32((uint32_t)(EDI));
  /* 10275ba7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275ba9 call 0x10278550 */
  push32(0x10275baeu); f_10278550();
  /* 10275bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275bb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275bb4 push eax */
  push32((uint32_t)(EAX));
  /* 10275bb5 call 0x10276150 */
  push32(0x10275bbau); f_10276150();
  /* 10275bba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275bbf je 0x10275c2c */
  if (C.zf) goto L_10275c2c;
  /* 10275bc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275bc4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275bc7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10275bca:;
  /* 10275bca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275bcd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275bd0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275bd5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275bd8 je 0x10275c1d */
  if (C.zf) goto L_10275c1d;
  /* 10275bda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275bdd cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275be1 je 0x10275c1d */
  if (C.zf) goto L_10275c1d;
  /* 10275be3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275be6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10275be9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275bee cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275bf1 je 0x10275c1d */
  if (C.zf) goto L_10275c1d;
  /* 10275bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275bf6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275bfa je 0x10275c1d */
  if (C.zf) goto L_10275c1d;
  /* 10275bfc push 0x1029b7e0 */
  push32((uint32_t)(0x1029b7e0u));
  /* 10275c01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275c03 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10275c08 push 0x1029b538 */
  push32((uint32_t)(0x1029b538u));
  /* 10275c0d push 2 */
  push32((uint32_t)(0x2u));
  /* 10275c0f call 0x10273c10 */
  push32(0x10275c14u); f_10273c10();
  /* 10275c14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275c17 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275c1a jne 0x10275c1d */
  if (!C.zf) goto L_10275c1d;
  /* 10275c1c int3  */
  x86_unimpl("int3 @ 0x10275c1c");
L_10275c1d:;
  /* 10275c1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275c1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275c21 jne 0x10275bca */
  if (!C.zf) goto L_10275bca;
  /* 10275c23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275c26 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275c29 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10275c2c:;
  /* 10275c2c push 9 */
  push32((uint32_t)(0x9u));
  /* 10275c2e call 0x102785f0 */
  push32(0x10275c33u); f_102785f0();
  /* 10275c33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275c36 pop edi */
  EDI = (pop32());
  /* 10275c37 pop esi */
  ESI = (pop32());
  /* 10275c38 pop ebx */
  EBX = (pop32());
  /* 10275c39 mov esp, ebp */
  ESP = (EBP);
  /* 10275c3b pop ebp */
  EBP = (pop32());
  /* 10275c3c ret  */
  ESPCHK(0x10275ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c40 @ 0x10275c40 (28 bytes, 11 insns) */
void f_10275c40(void) {
  FTRACE(0x10275c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10275c41 mov ebp, esp */
  EBP = (ESP);
  /* 10275c43 push ecx */
  push32((uint32_t)(ECX));
  /* 10275c44 mov eax, dword ptr [0x1029ec90] */
  EAX = (r32((uint32_t)(0x1029ec90)));
  /* 10275c49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10275c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275c4f mov dword ptr [0x1029ec90], ecx */
  w32((uint32_t)(0x1029ec90), (ECX));
  /* 10275c55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275c58 mov esp, ebp */
  ESP = (EBP);
  /* 10275c5a pop ebp */
  EBP = (pop32());
  /* 10275c5b ret  */
  ESPCHK(0x10275c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c60 @ 0x10275c60 (136 bytes, 55 insns) */
void f_10275c60(void) {
  FTRACE(0x10275c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275c60 push ebp */
  push32((uint32_t)(EBP));
  /* 10275c61 mov ebp, esp */
  EBP = (ESP);
  /* 10275c63 push ecx */
  push32((uint32_t)(ECX));
  /* 10275c64 push ebx */
  push32((uint32_t)(EBX));
  /* 10275c65 push esi */
  push32((uint32_t)(ESI));
  /* 10275c66 push edi */
  push32((uint32_t)(EDI));
  /* 10275c67 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10275c6e:;
  /* 10275c6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275c71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10275c74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275c77 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10275c7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275c7c je 0x10275cde */
  if (C.zf) goto L_10275cde;
  /* 10275c7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275c81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275c83 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10275c85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275c88 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275c91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275c94 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10275c97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275c99 je 0x10275cdc */
  if (C.zf) goto L_10275cdc;
L_10275c9b:;
  /* 10275c9b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10275c9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10275ca3 push eax */
  push32((uint32_t)(EAX));
  /* 10275ca4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275ca7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275ca9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10275cac push edx */
  push32((uint32_t)(EDX));
  /* 10275cad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10275cb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275cb3 push eax */
  push32((uint32_t)(EAX));
  /* 10275cb4 push 0x1029b824 */
  push32((uint32_t)(0x1029b824u));
  /* 10275cb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275cbb push 0 */
  push32((uint32_t)(0x0u));
  /* 10275cbd push 0 */
  push32((uint32_t)(0x0u));
  /* 10275cbf push 0 */
  push32((uint32_t)(0x0u));
  /* 10275cc1 call 0x10273c10 */
  push32(0x10275cc6u); f_10273c10();
  /* 10275cc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275cc9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275ccc jne 0x10275ccf */
  if (!C.zf) goto L_10275ccf;
  /* 10275cce int3  */
  x86_unimpl("int3 @ 0x10275cce");
L_10275ccf:;
  /* 10275ccf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275cd3 jne 0x10275c9b */
  if (!C.zf) goto L_10275c9b;
  /* 10275cd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10275cdc:;
  /* 10275cdc jmp 0x10275c6e */
  goto L_10275c6e;
L_10275cde:;
  /* 10275cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10275ce1 pop edi */
  EDI = (pop32());
  /* 10275ce2 pop esi */
  ESI = (pop32());
  /* 10275ce3 pop ebx */
  EBX = (pop32());
  /* 10275ce4 mov esp, ebp */
  ESP = (EBP);
  /* 10275ce6 pop ebp */
  EBP = (pop32());
  /* 10275ce7 ret  */
  ESPCHK(0x10275c60u, _esp0);
  ESP += 4; return;
}

/* FUN_10005cf0 @ 0x10275cf0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10275cf0(void) {
  FTRACE(0x10275cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10275cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10275cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10275cf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10275cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10275cf7 push esi */
  push32((uint32_t)(ESI));
  /* 10275cf8 push edi */
  push32((uint32_t)(EDI));
  /* 10275cf9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10275d00 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10275d05 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10275d08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275d0a jne 0x10275d16 */
  if (!C.zf) goto L_10275d16;
  /* 10275d0c mov eax, 1 */
  EAX = (0x1u);
  /* 10275d11 jmp 0x10276048 */
  goto L_10276048;
L_10275d16:;
  /* 10275d16 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275d18 call 0x10278550 */
  push32(0x10275d1du); f_10278550();
  /* 10275d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275d20 call 0x10278d30 */
  push32(0x10275d25u); f_10278d30();
  /* 10275d25 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10275d28 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275d2c je 0x10275e39 */
  if (C.zf) goto L_10275e39;
  /* 10275d32 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275d36 je 0x10275e39 */
  if (C.zf) goto L_10275e39;
  /* 10275d3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10275d3f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10275d42 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10275d45 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275d48 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10275d4b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275d4f ja 0x10275e02 */
  if ((!C.cf&&!C.zf)) goto L_10275e02;
  /* 10275d55 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10275d58 jmp dword ptr [eax*4 + 0x1027604f] */
  switch (EAX) {
    case 0: goto L_10275dda;
    case 1: goto L_10275db2;
    case 2: goto L_10275d8a;
    case 3: goto L_10275d5f;
    default: x86_unimpl("switch@0x10275d58 out of table"); return;
  }
L_10275d5f:;
  /* 10275d5f push 0x1029b978 */
  push32((uint32_t)(0x1029b978u));
  /* 10275d64 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d6b push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d71 call 0x10273c10 */
  push32(0x10275d76u); f_10273c10();
  /* 10275d76 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275d79 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275d7c jne 0x10275d7f */
  if (!C.zf) goto L_10275d7f;
  /* 10275d7e int3  */
  x86_unimpl("int3 @ 0x10275d7e");
L_10275d7f:;
  /* 10275d7f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275d81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275d83 jne 0x10275d5f */
  if (!C.zf) goto L_10275d5f;
  /* 10275d85 jmp 0x10275e28 */
  goto L_10275e28;
L_10275d8a:;
  /* 10275d8a push 0x1029b954 */
  push32((uint32_t)(0x1029b954u));
  /* 10275d8f push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d9a push 0 */
  push32((uint32_t)(0x0u));
  /* 10275d9c call 0x10273c10 */
  push32(0x10275da1u); f_10273c10();
  /* 10275da1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275da4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275da7 jne 0x10275daa */
  if (!C.zf) goto L_10275daa;
  /* 10275da9 int3  */
  x86_unimpl("int3 @ 0x10275da9");
L_10275daa:;
  /* 10275daa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275dac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275dae jne 0x10275d8a */
  if (!C.zf) goto L_10275d8a;
  /* 10275db0 jmp 0x10275e28 */
  goto L_10275e28;
L_10275db2:;
  /* 10275db2 push 0x1029b930 */
  push32((uint32_t)(0x1029b930u));
  /* 10275db7 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275dbc push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dbe push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dc4 call 0x10273c10 */
  push32(0x10275dc9u); f_10273c10();
  /* 10275dc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275dcc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275dcf jne 0x10275dd2 */
  if (!C.zf) goto L_10275dd2;
  /* 10275dd1 int3  */
  x86_unimpl("int3 @ 0x10275dd1");
L_10275dd2:;
  /* 10275dd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275dd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275dd6 jne 0x10275db2 */
  if (!C.zf) goto L_10275db2;
  /* 10275dd8 jmp 0x10275e28 */
  goto L_10275e28;
L_10275dda:;
  /* 10275dda push 0x1029b90c */
  push32((uint32_t)(0x1029b90cu));
  /* 10275ddf push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275de4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275de6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275de8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10275dec call 0x10273c10 */
  push32(0x10275df1u); f_10273c10();
  /* 10275df1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275df4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275df7 jne 0x10275dfa */
  if (!C.zf) goto L_10275dfa;
  /* 10275df9 int3  */
  x86_unimpl("int3 @ 0x10275df9");
L_10275dfa:;
  /* 10275dfa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275dfc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275dfe jne 0x10275dda */
  if (!C.zf) goto L_10275dda;
  /* 10275e00 jmp 0x10275e28 */
  goto L_10275e28;
L_10275e02:;
  /* 10275e02 push 0x1029b8e0 */
  push32((uint32_t)(0x1029b8e0u));
  /* 10275e07 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10275e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 10275e0e push 0 */
  push32((uint32_t)(0x0u));
  /* 10275e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275e14 call 0x10273c10 */
  push32(0x10275e19u); f_10273c10();
  /* 10275e19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275e1c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e1f jne 0x10275e22 */
  if (!C.zf) goto L_10275e22;
  /* 10275e21 int3  */
  x86_unimpl("int3 @ 0x10275e21");
L_10275e22:;
  /* 10275e22 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275e24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275e26 jne 0x10275e02 */
  if (!C.zf) goto L_10275e02;
L_10275e28:;
  /* 10275e28 push 9 */
  push32((uint32_t)(0x9u));
  /* 10275e2a call 0x102785f0 */
  push32(0x10275e2fu); f_102785f0();
  /* 10275e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275e32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275e34 jmp 0x10276048 */
  goto L_10276048;
L_10275e39:;
  /* 10275e39 mov eax, dword ptr [0x102a05f4] */
  EAX = (r32((uint32_t)(0x102a05f4)));
  /* 10275e3e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10275e41 jmp 0x10275e4b */
  goto L_10275e4b;
L_10275e43:;
  /* 10275e43 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10275e48 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10275e4b:;
  /* 10275e4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e4f je 0x1027603b */
  if (C.zf) goto L_1027603b;
  /* 10275e55 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10275e5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e5f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10275e62 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275e68 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e6b je 0x10275e90 */
  if (C.zf) goto L_10275e90;
  /* 10275e6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e70 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e74 je 0x10275e90 */
  if (C.zf) goto L_10275e90;
  /* 10275e76 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e79 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10275e7c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275e82 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e85 je 0x10275e90 */
  if (C.zf) goto L_10275e90;
  /* 10275e87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e8a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275e8e jne 0x10275ea8 */
  if (!C.zf) goto L_10275ea8;
L_10275e90:;
  /* 10275e90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275e93 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10275e96 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10275e9c mov edx, dword ptr [ecx*4 + 0x1029ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea94)));
  /* 10275ea3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10275ea6 jmp 0x10275eaf */
  goto L_10275eaf;
L_10275ea8:;
  /* 10275ea8 mov dword ptr [ebp - 0x14], 0x1029b8d8 */
  w32((uint32_t)(EBP + -0x14), (0x1029b8d8u));
L_10275eaf:;
  /* 10275eaf push 4 */
  push32((uint32_t)(0x4u));
  /* 10275eb1 mov al, byte ptr [0x1029ea90] */
  AL = (r8((uint32_t)(0x1029ea90)));
  /* 10275eb6 push eax */
  push32((uint32_t)(EAX));
  /* 10275eb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275eba add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275ebd push ecx */
  push32((uint32_t)(ECX));
  /* 10275ebe call 0x10275c60 */
  push32(0x10275ec3u); f_10275c60();
  /* 10275ec3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275ec8 jne 0x10275f04 */
  if (!C.zf) goto L_10275f04;
L_10275eca:;
  /* 10275eca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275ecd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275ed0 push edx */
  push32((uint32_t)(EDX));
  /* 10275ed1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275ed4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10275ed7 push ecx */
  push32((uint32_t)(ECX));
  /* 10275ed8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10275edb push edx */
  push32((uint32_t)(EDX));
  /* 10275edc push 0x1029b7b4 */
  push32((uint32_t)(0x1029b7b4u));
  /* 10275ee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275ee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275ee5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275ee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275ee9 call 0x10273c10 */
  push32(0x10275eeeu); f_10273c10();
  /* 10275eee add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275ef1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275ef4 jne 0x10275ef7 */
  if (!C.zf) goto L_10275ef7;
  /* 10275ef6 int3  */
  x86_unimpl("int3 @ 0x10275ef6");
L_10275ef7:;
  /* 10275ef7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275ef9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275efb jne 0x10275eca */
  if (!C.zf) goto L_10275eca;
  /* 10275efd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10275f04:;
  /* 10275f04 push 4 */
  push32((uint32_t)(0x4u));
  /* 10275f06 mov cl, byte ptr [0x1029ea90] */
  CL = (r8((uint32_t)(0x1029ea90)));
  /* 10275f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10275f0d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f10 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10275f13 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f16 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10275f1a push edx */
  push32((uint32_t)(EDX));
  /* 10275f1b call 0x10275c60 */
  push32(0x10275f20u); f_10275c60();
  /* 10275f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275f25 jne 0x10275f61 */
  if (!C.zf) goto L_10275f61;
L_10275f27:;
  /* 10275f27 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f2a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f2d push eax */
  push32((uint32_t)(EAX));
  /* 10275f2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f31 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10275f34 push edx */
  push32((uint32_t)(EDX));
  /* 10275f35 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10275f38 push eax */
  push32((uint32_t)(EAX));
  /* 10275f39 push 0x1029b788 */
  push32((uint32_t)(0x1029b788u));
  /* 10275f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f46 call 0x10273c10 */
  push32(0x10275f4bu); f_10273c10();
  /* 10275f4b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275f51 jne 0x10275f54 */
  if (!C.zf) goto L_10275f54;
  /* 10275f53 int3  */
  x86_unimpl("int3 @ 0x10275f53");
L_10275f54:;
  /* 10275f54 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10275f56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10275f58 jne 0x10275f27 */
  if (!C.zf) goto L_10275f27;
  /* 10275f5a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10275f61:;
  /* 10275f61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f64 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275f68 jne 0x10275fba */
  if (!C.zf) goto L_10275fba;
  /* 10275f6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f6d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10275f70 push ecx */
  push32((uint32_t)(ECX));
  /* 10275f71 mov dl, byte ptr [0x1029ea91] */
  DL = (r8((uint32_t)(0x1029ea91)));
  /* 10275f77 push edx */
  push32((uint32_t)(EDX));
  /* 10275f78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f7b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f7e push eax */
  push32((uint32_t)(EAX));
  /* 10275f7f call 0x10275c60 */
  push32(0x10275f84u); f_10275c60();
  /* 10275f84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275f89 jne 0x10275fba */
  if (!C.zf) goto L_10275fba;
L_10275f8b:;
  /* 10275f8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275f8e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10275f91 push ecx */
  push32((uint32_t)(ECX));
  /* 10275f92 push 0x1029b8ac */
  push32((uint32_t)(0x1029b8acu));
  /* 10275f97 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f99 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f9b push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f9d push 0 */
  push32((uint32_t)(0x0u));
  /* 10275f9f call 0x10273c10 */
  push32(0x10275fa4u); f_10273c10();
  /* 10275fa4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275fa7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275faa jne 0x10275fad */
  if (!C.zf) goto L_10275fad;
  /* 10275fac int3  */
  x86_unimpl("int3 @ 0x10275fac");
L_10275fad:;
  /* 10275fad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10275faf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10275fb1 jne 0x10275f8b */
  if (!C.zf) goto L_10275f8b;
  /* 10275fb3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10275fba:;
  /* 10275fba cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275fbe jne 0x10276036 */
  if (!C.zf) goto L_10276036;
  /* 10275fc0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275fc3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275fc7 je 0x10275ffc */
  if (C.zf) goto L_10275ffc;
L_10275fc9:;
  /* 10275fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275fcc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10275fcf push edx */
  push32((uint32_t)(EDX));
  /* 10275fd0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275fd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10275fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10275fd7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10275fda push edx */
  push32((uint32_t)(EDX));
  /* 10275fdb push 0x1029b88c */
  push32((uint32_t)(0x1029b88cu));
  /* 10275fe0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10275fe8 call 0x10273c10 */
  push32(0x10275fedu); f_10273c10();
  /* 10275fed add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10275ff0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10275ff3 jne 0x10275ff6 */
  if (!C.zf) goto L_10275ff6;
  /* 10275ff5 int3  */
  x86_unimpl("int3 @ 0x10275ff5");
L_10275ff6:;
  /* 10275ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10275ff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10275ffa jne 0x10275fc9 */
  if (!C.zf) goto L_10275fc9;
L_10275ffc:;
  /* 10275ffc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10275fff mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10276002 push edx */
  push32((uint32_t)(EDX));
  /* 10276003 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276006 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276009 push eax */
  push32((uint32_t)(EAX));
  /* 1027600a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027600d push ecx */
  push32((uint32_t)(ECX));
  /* 1027600e push 0x1029b860 */
  push32((uint32_t)(0x1029b860u));
  /* 10276013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276019 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027601b call 0x10273c10 */
  push32(0x10276020u); f_10273c10();
  /* 10276020 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276023 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276026 jne 0x10276029 */
  if (!C.zf) goto L_10276029;
  /* 10276028 int3  */
  x86_unimpl("int3 @ 0x10276028");
L_10276029:;
  /* 10276029 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027602b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027602d jne 0x10275ffc */
  if (!C.zf) goto L_10275ffc;
  /* 1027602f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10276036:;
  /* 10276036 jmp 0x10275e43 */
  goto L_10275e43;
L_1027603b:;
  /* 1027603b push 9 */
  push32((uint32_t)(0x9u));
  /* 1027603d call 0x102785f0 */
  push32(0x10276042u); f_102785f0();
  /* 10276042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10276048:;
  /* 10276048 pop edi */
  EDI = (pop32());
  /* 10276049 pop esi */
  ESI = (pop32());
  /* 1027604a pop ebx */
  EBX = (pop32());
  /* 1027604b mov esp, ebp */
  ESP = (EBP);
  /* 1027604d pop ebp */
  EBP = (pop32());
  /* 1027604e ret  */
  ESPCHK(0x10275cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x10276060 (34 bytes, 13 insns) */
void f_10276060(void) {
  FTRACE(0x10276060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276060 push ebp */
  push32((uint32_t)(EBP));
  /* 10276061 mov ebp, esp */
  EBP = (ESP);
  /* 10276063 push ecx */
  push32((uint32_t)(ECX));
  /* 10276064 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10276069 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027606c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276070 je 0x1027607b */
  if (C.zf) goto L_1027607b;
  /* 10276072 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276075 mov dword ptr [0x1029ea84], ecx */
  w32((uint32_t)(0x1029ea84), (ECX));
L_1027607b:;
  /* 1027607b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027607e mov esp, ebp */
  ESP = (EBP);
  /* 10276080 pop ebp */
  EBP = (pop32());
  /* 10276081 ret  */
  ESPCHK(0x10276060u, _esp0);
  ESP += 4; return;
}

/* FUN_10006090 @ 0x10276090 (103 bytes, 38 insns) */
void f_10276090(void) {
  FTRACE(0x10276090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276090 push ebp */
  push32((uint32_t)(EBP));
  /* 10276091 mov ebp, esp */
  EBP = (ESP);
  /* 10276093 push ecx */
  push32((uint32_t)(ECX));
  /* 10276094 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10276099 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1027609c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027609e jne 0x102760a2 */
  if (!C.zf) goto L_102760a2;
  /* 102760a0 jmp 0x102760f3 */
  goto L_102760f3;
L_102760a2:;
  /* 102760a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102760a4 call 0x10278550 */
  push32(0x102760a9u); f_10278550();
  /* 102760a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102760ac mov ecx, dword ptr [0x102a05f4] */
  ECX = (r32((uint32_t)(0x102a05f4)));
  /* 102760b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102760b5 jmp 0x102760bf */
  goto L_102760bf;
L_102760b7:;
  /* 102760b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102760ba mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 102760bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102760bf:;
  /* 102760bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102760c3 je 0x102760e9 */
  if (C.zf) goto L_102760e9;
  /* 102760c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102760c8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 102760cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102760d1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102760d4 jne 0x102760e7 */
  if (!C.zf) goto L_102760e7;
  /* 102760d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102760d9 push eax */
  push32((uint32_t)(EAX));
  /* 102760da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102760dd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102760e0 push ecx */
  push32((uint32_t)(ECX));
  /* 102760e1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x102760e4u);
  /* 102760e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102760e7:;
  /* 102760e7 jmp 0x102760b7 */
  goto L_102760b7;
L_102760e9:;
  /* 102760e9 push 9 */
  push32((uint32_t)(0x9u));
  /* 102760eb call 0x102785f0 */
  push32(0x102760f0u); f_102785f0();
  /* 102760f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102760f3:;
  /* 102760f3 mov esp, ebp */
  ESP = (EBP);
  /* 102760f5 pop ebp */
  EBP = (pop32());
  /* 102760f6 ret  */
  ESPCHK(0x10276090u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10276100 (75 bytes, 28 insns) */
void f_10276100(void) {
  FTRACE(0x10276100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276100 push ebp */
  push32((uint32_t)(EBP));
  /* 10276101 mov ebp, esp */
  EBP = (ESP);
  /* 10276103 push ecx */
  push32((uint32_t)(ECX));
  /* 10276104 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276108 je 0x1027613d */
  if (C.zf) goto L_1027613d;
  /* 1027610a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027610d push eax */
  push32((uint32_t)(EAX));
  /* 1027610e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276111 push ecx */
  push32((uint32_t)(ECX));
  /* 10276112 call dword ptr [0x102a3354] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3354))), 0x10276118u);
  /* 10276118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027611a jne 0x1027613d */
  if (!C.zf) goto L_1027613d;
  /* 1027611c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276120 je 0x10276134 */
  if (C.zf) goto L_10276134;
  /* 10276122 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276125 push edx */
  push32((uint32_t)(EDX));
  /* 10276126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276129 push eax */
  push32((uint32_t)(EAX));
  /* 1027612a call dword ptr [0x102a3350] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3350))), 0x10276130u);
  /* 10276130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276132 jne 0x1027613d */
  if (!C.zf) goto L_1027613d;
L_10276134:;
  /* 10276134 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027613b jmp 0x10276144 */
  goto L_10276144;
L_1027613d:;
  /* 1027613d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10276144:;
  /* 10276144 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276147 mov esp, ebp */
  ESP = (EBP);
  /* 10276149 pop ebp */
  EBP = (pop32());
  /* 1027614a ret  */
  ESPCHK(0x10276100u, _esp0);
  ESP += 4; return;
}

/* FUN_10006150 @ 0x10276150 (134 bytes, 50 insns) */
void f_10276150(void) {
  FTRACE(0x10276150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276150 push ebp */
  push32((uint32_t)(EBP));
  /* 10276151 mov ebp, esp */
  EBP = (ESP);
  /* 10276153 push ecx */
  push32((uint32_t)(ECX));
  /* 10276154 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276158 jne 0x1027615e */
  if (!C.zf) goto L_1027615e;
  /* 1027615a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027615c jmp 0x102761d2 */
  goto L_102761d2;
L_1027615e:;
  /* 1027615e push 1 */
  push32((uint32_t)(0x1u));
  /* 10276160 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10276162 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276165 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276168 push eax */
  push32((uint32_t)(EAX));
  /* 10276169 call 0x10276100 */
  push32(0x1027616eu); f_10276100();
  /* 1027616e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276173 jne 0x10276179 */
  if (!C.zf) goto L_10276179;
  /* 10276175 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276177 jmp 0x102761d2 */
  goto L_102761d2;
L_10276179:;
  /* 10276179 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027617c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027617f push ecx */
  push32((uint32_t)(ECX));
  /* 10276180 call 0x10278e50 */
  push32(0x10276185u); f_10278e50();
  /* 10276185 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276188 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027618b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027618f je 0x102761a6 */
  if (C.zf) goto L_102761a6;
  /* 10276191 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276194 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276197 push edx */
  push32((uint32_t)(EDX));
  /* 10276198 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027619b push eax */
  push32((uint32_t)(EAX));
  /* 1027619c call 0x10278eb0 */
  push32(0x102761a1u); f_10278eb0();
  /* 102761a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102761a4 jmp 0x102761d2 */
  goto L_102761d2;
L_102761a6:;
  /* 102761a6 mov ecx, dword ptr [0x102a05a8] */
  ECX = (r32((uint32_t)(0x102a05a8)));
  /* 102761ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 102761b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 102761b4 je 0x102761bd */
  if (C.zf) goto L_102761bd;
  /* 102761b6 mov eax, 1 */
  EAX = (0x1u);
  /* 102761bb jmp 0x102761d2 */
  goto L_102761d2;
L_102761bd:;
  /* 102761bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102761c0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102761c3 push edx */
  push32((uint32_t)(EDX));
  /* 102761c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102761c6 mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 102761cb push eax */
  push32((uint32_t)(EAX));
  /* 102761cc call dword ptr [0x102a3358] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3358))), 0x102761d2u);
L_102761d2:;
  /* 102761d2 mov esp, ebp */
  ESP = (EBP);
  /* 102761d4 pop ebp */
  EBP = (pop32());
  /* 102761d5 ret  */
  ESPCHK(0x10276150u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x102761e0 (227 bytes, 80 insns) */
void f_102761e0(void) {
  FTRACE(0x102761e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102761e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102761e1 mov ebp, esp */
  EBP = (ESP);
  /* 102761e3 push ecx */
  push32((uint32_t)(ECX));
  /* 102761e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102761e7 push eax */
  push32((uint32_t)(EAX));
  /* 102761e8 call 0x10276150 */
  push32(0x102761edu); f_10276150();
  /* 102761ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102761f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102761f2 jne 0x102761fb */
  if (!C.zf) goto L_102761fb;
  /* 102761f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102761f6 jmp 0x102762bf */
  goto L_102762bf;
L_102761fb:;
  /* 102761fb push 9 */
  push32((uint32_t)(0x9u));
  /* 102761fd call 0x10278550 */
  push32(0x10276202u); f_10278550();
  /* 10276202 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276205 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276208 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027620b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027620e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276211 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10276214 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10276219 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027621c je 0x10276240 */
  if (C.zf) goto L_10276240;
  /* 1027621e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276221 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276225 je 0x10276240 */
  if (C.zf) goto L_10276240;
  /* 10276227 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027622a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1027622d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10276232 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276235 je 0x10276240 */
  if (C.zf) goto L_10276240;
  /* 10276237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027623a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027623e jne 0x102762b3 */
  if (!C.zf) goto L_102762b3;
L_10276240:;
  /* 10276240 push 1 */
  push32((uint32_t)(0x1u));
  /* 10276242 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276245 push edx */
  push32((uint32_t)(EDX));
  /* 10276246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276249 push eax */
  push32((uint32_t)(EAX));
  /* 1027624a call 0x10276100 */
  push32(0x1027624fu); f_10276100();
  /* 1027624f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276254 je 0x102762b3 */
  if (C.zf) goto L_102762b3;
  /* 10276256 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276259 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1027625c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027625f jne 0x102762b3 */
  if (!C.zf) goto L_102762b3;
  /* 10276261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276264 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10276267 cmp ecx, dword ptr [0x1029ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027626d jg 0x102762b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_102762b3;
  /* 1027626f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276273 je 0x10276280 */
  if (C.zf) goto L_10276280;
  /* 10276275 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027627b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1027627e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10276280:;
  /* 10276280 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276284 je 0x10276291 */
  if (C.zf) goto L_10276291;
  /* 10276286 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10276289 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027628c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027628f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10276291:;
  /* 10276291 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276295 je 0x102762a2 */
  if (C.zf) goto L_102762a2;
  /* 10276297 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027629a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027629d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 102762a0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_102762a2:;
  /* 102762a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 102762a4 call 0x102785f0 */
  push32(0x102762a9u); f_102785f0();
  /* 102762a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102762ac mov eax, 1 */
  EAX = (0x1u);
  /* 102762b1 jmp 0x102762bf */
  goto L_102762bf;
L_102762b3:;
  /* 102762b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 102762b5 call 0x102785f0 */
  push32(0x102762bau); f_102785f0();
  /* 102762ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102762bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102762bf:;
  /* 102762bf mov esp, ebp */
  ESP = (EBP);
  /* 102762c1 pop ebp */
  EBP = (pop32());
  /* 102762c2 ret  */
  ESPCHK(0x102761e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062d0 @ 0x102762d0 (28 bytes, 11 insns) */
void f_102762d0(void) {
  FTRACE(0x102762d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102762d0 push ebp */
  push32((uint32_t)(EBP));
  /* 102762d1 mov ebp, esp */
  EBP = (ESP);
  /* 102762d3 push ecx */
  push32((uint32_t)(ECX));
  /* 102762d4 mov eax, dword ptr [0x102a1f58] */
  EAX = (r32((uint32_t)(0x102a1f58)));
  /* 102762d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102762dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102762df mov dword ptr [0x102a1f58], ecx */
  w32((uint32_t)(0x102a1f58), (ECX));
  /* 102762e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102762e8 mov esp, ebp */
  ESP = (EBP);
  /* 102762ea pop ebp */
  EBP = (pop32());
  /* 102762eb ret  */
  ESPCHK(0x102762d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x102762f0 (362 bytes, 116 insns) */
void f_102762f0(void) {
  FTRACE(0x102762f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102762f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102762f1 mov ebp, esp */
  EBP = (ESP);
  /* 102762f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102762f6 push ebx */
  push32((uint32_t)(EBX));
  /* 102762f7 push esi */
  push32((uint32_t)(ESI));
  /* 102762f8 push edi */
  push32((uint32_t)(EDI));
  /* 102762f9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102762fd jne 0x1027632a */
  if (!C.zf) goto L_1027632a;
L_102762ff:;
  /* 102762ff push 0x1029b9c0 */
  push32((uint32_t)(0x1029b9c0u));
  /* 10276304 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10276309 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027630b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027630d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027630f push 0 */
  push32((uint32_t)(0x0u));
  /* 10276311 call 0x10273c10 */
  push32(0x10276316u); f_10273c10();
  /* 10276316 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276319 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027631c jne 0x1027631f */
  if (!C.zf) goto L_1027631f;
  /* 1027631e int3  */
  x86_unimpl("int3 @ 0x1027631e");
L_1027631f:;
  /* 1027631f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276323 jne 0x102762ff */
  if (!C.zf) goto L_102762ff;
  /* 10276325 jmp 0x10276453 */
  goto L_10276453;
L_1027632a:;
  /* 1027632a push 9 */
  push32((uint32_t)(0x9u));
  /* 1027632c call 0x10278550 */
  push32(0x10276331u); f_10278550();
  /* 10276331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276334 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276337 mov edx, dword ptr [0x102a05f4] */
  EDX = (r32((uint32_t)(0x102a05f4)));
  /* 1027633d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1027633f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10276346 jmp 0x10276351 */
  goto L_10276351;
L_10276348:;
  /* 10276348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027634b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027634e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10276351:;
  /* 10276351 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276355 jge 0x10276375 */
  if ((C.sf==C.of)) goto L_10276375;
  /* 10276357 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027635a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027635d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10276365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027636b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10276373 jmp 0x10276348 */
  goto L_10276348;
L_10276375:;
  /* 10276375 mov edx, dword ptr [0x102a05f4] */
  EDX = (r32((uint32_t)(0x102a05f4)));
  /* 1027637b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1027637e jmp 0x10276388 */
  goto L_10276388;
L_10276380:;
  /* 10276380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276383 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10276385 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10276388:;
  /* 10276388 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027638c je 0x10276431 */
  if (C.zf) goto L_10276431;
  /* 10276392 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10276398 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027639d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027639f jl 0x10276407 */
  if ((C.sf!=C.of)) goto L_10276407;
  /* 102763a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763a4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 102763a7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102763ad cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102763b0 jge 0x10276407 */
  if ((C.sf==C.of)) goto L_10276407;
  /* 102763b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763b5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 102763b8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 102763be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102763c1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 102763c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102763c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763cb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 102763ce and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102763d4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102763d7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 102763db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763de mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 102763e1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102763e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102763e9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 102763ed mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763f0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102763f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102763f6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 102763f9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102763fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276401 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10276405 jmp 0x1027642c */
  goto L_1027642c;
L_10276407:;
  /* 10276407 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027640a push edx */
  push32((uint32_t)(EDX));
  /* 1027640b push 0x1029b99c */
  push32((uint32_t)(0x1029b99cu));
  /* 10276410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276412 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276414 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276416 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276418 call 0x10273c10 */
  push32(0x1027641du); f_10273c10();
  /* 1027641d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276420 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276423 jne 0x10276426 */
  if (!C.zf) goto L_10276426;
  /* 10276425 int3  */
  x86_unimpl("int3 @ 0x10276425");
L_10276426:;
  /* 10276426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027642a jne 0x10276407 */
  if (!C.zf) goto L_10276407;
L_1027642c:;
  /* 1027642c jmp 0x10276380 */
  goto L_10276380;
L_10276431:;
  /* 10276431 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276434 mov edx, dword ptr [0x102a05fc] */
  EDX = (r32((uint32_t)(0x102a05fc)));
  /* 1027643a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 1027643d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276440 mov ecx, dword ptr [0x102a05f0] */
  ECX = (r32((uint32_t)(0x102a05f0)));
  /* 10276446 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10276449 push 9 */
  push32((uint32_t)(0x9u));
  /* 1027644b call 0x102785f0 */
  push32(0x10276450u); f_102785f0();
  /* 10276450 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10276453:;
  /* 10276453 pop edi */
  EDI = (pop32());
  /* 10276454 pop esi */
  ESI = (pop32());
  /* 10276455 pop ebx */
  EBX = (pop32());
  /* 10276456 mov esp, ebp */
  ESP = (EBP);
  /* 10276458 pop ebp */
  EBP = (pop32());
  /* 10276459 ret  */
  ESPCHK(0x102762f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006460 @ 0x10276460 (291 bytes, 95 insns) */
void f_10276460(void) {
  FTRACE(0x10276460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276460 push ebp */
  push32((uint32_t)(EBP));
  /* 10276461 mov ebp, esp */
  EBP = (ESP);
  /* 10276463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276466 push ebx */
  push32((uint32_t)(EBX));
  /* 10276467 push esi */
  push32((uint32_t)(ESI));
  /* 10276468 push edi */
  push32((uint32_t)(EDI));
  /* 10276469 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10276470 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276474 je 0x10276482 */
  if (C.zf) goto L_10276482;
  /* 10276476 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027647a je 0x10276482 */
  if (C.zf) goto L_10276482;
  /* 1027647c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276480 jne 0x102764b0 */
  if (!C.zf) goto L_102764b0;
L_10276482:;
  /* 10276482 push 0x1029b9e8 */
  push32((uint32_t)(0x1029b9e8u));
  /* 10276487 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 1027648c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027648e push 0 */
  push32((uint32_t)(0x0u));
  /* 10276490 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276494 call 0x10273c10 */
  push32(0x10276499u); f_10273c10();
  /* 10276499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027649c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027649f jne 0x102764a2 */
  if (!C.zf) goto L_102764a2;
  /* 102764a1 int3  */
  x86_unimpl("int3 @ 0x102764a1");
L_102764a2:;
  /* 102764a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102764a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102764a6 jne 0x10276482 */
  if (!C.zf) goto L_10276482;
  /* 102764a8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102764ab jmp 0x1027657c */
  goto L_1027657c;
L_102764b0:;
  /* 102764b0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102764b7 jmp 0x102764c2 */
  goto L_102764c2;
L_102764b9:;
  /* 102764b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102764bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_102764c2:;
  /* 102764c2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102764c6 jge 0x1027654c */
  if ((C.sf==C.of)) goto L_1027654c;
  /* 102764cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102764d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102764d8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 102764dc sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102764e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102764e6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 102764ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764ed mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102764f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102764f3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 102764f6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 102764fa sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102764fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276504 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10276508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027650b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027650e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276513 jne 0x10276522 */
  if (!C.zf) goto L_10276522;
  /* 10276515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276518 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027651b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276520 je 0x10276547 */
  if (C.zf) goto L_10276547;
L_10276522:;
  /* 10276522 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276526 je 0x10276547 */
  if (C.zf) goto L_10276547;
  /* 10276528 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027652c jne 0x10276540 */
  if (!C.zf) goto L_10276540;
  /* 1027652e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276532 jne 0x10276547 */
  if (!C.zf) goto L_10276547;
  /* 10276534 mov eax, dword ptr [0x1029ea84] */
  EAX = (r32((uint32_t)(0x1029ea84)));
  /* 10276539 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1027653c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027653e je 0x10276547 */
  if (C.zf) goto L_10276547;
L_10276540:;
  /* 10276540 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10276547:;
  /* 10276547 jmp 0x102764b9 */
  goto L_102764b9;
L_1027654c:;
  /* 1027654c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027654f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276552 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10276555 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027655b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 1027655e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276561 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276564 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10276567 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027656a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027656d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10276570 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276573 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10276579 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1027657c:;
  /* 1027657c pop edi */
  EDI = (pop32());
  /* 1027657d pop esi */
  ESI = (pop32());
  /* 1027657e pop ebx */
  EBX = (pop32());
  /* 1027657f mov esp, ebp */
  ESP = (EBP);
  /* 10276581 pop ebp */
  EBP = (pop32());
  /* 10276582 ret  */
  ESPCHK(0x10276460u, _esp0);
  ESP += 4; return;
}

/* FUN_10006590 @ 0x10276590 (697 bytes, 253 insns) */
void f_10276590(void) {
  FTRACE(0x10276590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276590 push ebp */
  push32((uint32_t)(EBP));
  /* 10276591 mov ebp, esp */
  EBP = (ESP);
  /* 10276593 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276596 push ebx */
  push32((uint32_t)(EBX));
  /* 10276597 push esi */
  push32((uint32_t)(ESI));
  /* 10276598 push edi */
  push32((uint32_t)(EDI));
  /* 10276599 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 102765a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 102765a2 call 0x10278550 */
  push32(0x102765a7u); f_10278550();
  /* 102765a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102765aa:;
  /* 102765aa push 0x1029bae0 */
  push32((uint32_t)(0x1029bae0u));
  /* 102765af push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 102765b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102765b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102765b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102765ba push 0 */
  push32((uint32_t)(0x0u));
  /* 102765bc call 0x10273c10 */
  push32(0x102765c1u); f_10273c10();
  /* 102765c1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102765c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102765c7 jne 0x102765ca */
  if (!C.zf) goto L_102765ca;
  /* 102765c9 int3  */
  x86_unimpl("int3 @ 0x102765c9");
L_102765ca:;
  /* 102765ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102765cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102765ce jne 0x102765aa */
  if (!C.zf) goto L_102765aa;
  /* 102765d0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102765d4 je 0x102765de */
  if (C.zf) goto L_102765de;
  /* 102765d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102765d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102765db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_102765de:;
  /* 102765de mov eax, dword ptr [0x102a05f4] */
  EAX = (r32((uint32_t)(0x102a05f4)));
  /* 102765e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102765e6 jmp 0x102765f0 */
  goto L_102765f0;
L_102765e8:;
  /* 102765e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102765eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102765ed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_102765f0:;
  /* 102765f0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102765f4 je 0x10276812 */
  if (C.zf) goto L_10276812;
  /* 102765fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102765fd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276600 je 0x10276812 */
  if (C.zf) goto L_10276812;
  /* 10276606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276609 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1027660c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10276612 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276615 je 0x10276644 */
  if (C.zf) goto L_10276644;
  /* 10276617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027661a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1027661d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10276623 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276625 je 0x10276644 */
  if (C.zf) goto L_10276644;
  /* 10276627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027662a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1027662d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10276632 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276635 jne 0x10276649 */
  if (!C.zf) goto L_10276649;
  /* 10276637 mov ecx, dword ptr [0x1029ea84] */
  ECX = (r32((uint32_t)(0x1029ea84)));
  /* 1027663d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10276640 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276642 jne 0x10276649 */
  if (!C.zf) goto L_10276649;
L_10276644:;
  /* 10276644 jmp 0x1027680d */
  goto L_1027680d;
L_10276649:;
  /* 10276649 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027664c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276650 je 0x102766c2 */
  if (C.zf) goto L_102766c2;
  /* 10276652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276654 push 1 */
  push32((uint32_t)(0x1u));
  /* 10276656 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276659 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1027665c push ecx */
  push32((uint32_t)(ECX));
  /* 1027665d call 0x10276100 */
  push32(0x10276662u); f_10276100();
  /* 10276662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276665 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276667 jne 0x10276693 */
  if (!C.zf) goto L_10276693;
L_10276669:;
  /* 10276669 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027666c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1027666f push eax */
  push32((uint32_t)(EAX));
  /* 10276670 push 0x1029bacc */
  push32((uint32_t)(0x1029baccu));
  /* 10276675 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276679 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027667b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027667d call 0x10273c10 */
  push32(0x10276682u); f_10273c10();
  /* 10276682 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276685 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276688 jne 0x1027668b */
  if (!C.zf) goto L_1027668b;
  /* 1027668a int3  */
  x86_unimpl("int3 @ 0x1027668a");
L_1027668b:;
  /* 1027668b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027668d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027668f jne 0x10276669 */
  if (!C.zf) goto L_10276669;
  /* 10276691 jmp 0x102766c2 */
  goto L_102766c2;
L_10276693:;
  /* 10276693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276696 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10276699 push eax */
  push32((uint32_t)(EAX));
  /* 1027669a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027669d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 102766a0 push edx */
  push32((uint32_t)(EDX));
  /* 102766a1 push 0x1029bac0 */
  push32((uint32_t)(0x1029bac0u));
  /* 102766a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 102766a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 102766aa push 0 */
  push32((uint32_t)(0x0u));
  /* 102766ac push 0 */
  push32((uint32_t)(0x0u));
  /* 102766ae call 0x10273c10 */
  push32(0x102766b3u); f_10273c10();
  /* 102766b3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102766b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102766b9 jne 0x102766bc */
  if (!C.zf) goto L_102766bc;
  /* 102766bb int3  */
  x86_unimpl("int3 @ 0x102766bb");
L_102766bc:;
  /* 102766bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102766be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102766c0 jne 0x10276693 */
  if (!C.zf) goto L_10276693;
L_102766c2:;
  /* 102766c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102766c5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 102766c8 push edx */
  push32((uint32_t)(EDX));
  /* 102766c9 push 0x1029bab8 */
  push32((uint32_t)(0x1029bab8u));
  /* 102766ce push 0 */
  push32((uint32_t)(0x0u));
  /* 102766d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102766d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102766d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102766d6 call 0x10273c10 */
  push32(0x102766dbu); f_10273c10();
  /* 102766db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102766de cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102766e1 jne 0x102766e4 */
  if (!C.zf) goto L_102766e4;
  /* 102766e3 int3  */
  x86_unimpl("int3 @ 0x102766e3");
L_102766e4:;
  /* 102766e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102766e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102766e8 jne 0x102766c2 */
  if (!C.zf) goto L_102766c2;
  /* 102766ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102766ed mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 102766f0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102766f6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102766f9 jne 0x1027676c */
  if (!C.zf) goto L_1027676c;
L_102766fb:;
  /* 102766fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102766fe mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10276701 push ecx */
  push32((uint32_t)(ECX));
  /* 10276702 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276705 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10276708 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1027670b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10276710 push eax */
  push32((uint32_t)(EAX));
  /* 10276711 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276714 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276717 push ecx */
  push32((uint32_t)(ECX));
  /* 10276718 push 0x1029ba84 */
  push32((uint32_t)(0x1029ba84u));
  /* 1027671d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027671f push 0 */
  push32((uint32_t)(0x0u));
  /* 10276721 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276723 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276725 call 0x10273c10 */
  push32(0x1027672au); f_10273c10();
  /* 1027672a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027672d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276730 jne 0x10276733 */
  if (!C.zf) goto L_10276733;
  /* 10276732 int3  */
  x86_unimpl("int3 @ 0x10276732");
L_10276733:;
  /* 10276733 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276735 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10276737 jne 0x102766fb */
  if (!C.zf) goto L_102766fb;
  /* 10276739 cmp dword ptr [0x102a1f58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276740 je 0x1027675b */
  if (C.zf) goto L_1027675b;
  /* 10276742 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276745 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10276748 push ecx */
  push32((uint32_t)(ECX));
  /* 10276749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027674c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027674f push edx */
  push32((uint32_t)(EDX));
  /* 10276750 call dword ptr [0x102a1f58] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a1f58))), 0x10276756u);
  /* 10276756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276759 jmp 0x10276767 */
  goto L_10276767;
L_1027675b:;
  /* 1027675b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027675e push eax */
  push32((uint32_t)(EAX));
  /* 1027675f call 0x10276850 */
  push32(0x10276764u); f_10276850();
  /* 10276764 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10276767:;
  /* 10276767 jmp 0x1027680d */
  goto L_1027680d;
L_1027676c:;
  /* 1027676c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027676f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276773 jne 0x102767b2 */
  if (!C.zf) goto L_102767b2;
L_10276775:;
  /* 10276775 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276778 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027677b push eax */
  push32((uint32_t)(EAX));
  /* 1027677c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027677f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276782 push ecx */
  push32((uint32_t)(ECX));
  /* 10276783 push 0x1029ba5c */
  push32((uint32_t)(0x1029ba5cu));
  /* 10276788 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027678a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027678c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027678e push 0 */
  push32((uint32_t)(0x0u));
  /* 10276790 call 0x10273c10 */
  push32(0x10276795u); f_10273c10();
  /* 10276795 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276798 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027679b jne 0x1027679e */
  if (!C.zf) goto L_1027679e;
  /* 1027679d int3  */
  x86_unimpl("int3 @ 0x1027679d");
L_1027679e:;
  /* 1027679e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102767a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102767a2 jne 0x10276775 */
  if (!C.zf) goto L_10276775;
  /* 102767a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102767a7 push eax */
  push32((uint32_t)(EAX));
  /* 102767a8 call 0x10276850 */
  push32(0x102767adu); f_10276850();
  /* 102767ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102767b0 jmp 0x1027680d */
  goto L_1027680d;
L_102767b2:;
  /* 102767b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102767b5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 102767b8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 102767be cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102767c1 jne 0x1027680d */
  if (!C.zf) goto L_1027680d;
L_102767c3:;
  /* 102767c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102767c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 102767c9 push ecx */
  push32((uint32_t)(ECX));
  /* 102767ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102767cd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 102767d0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102767d3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102767d8 push eax */
  push32((uint32_t)(EAX));
  /* 102767d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102767dc add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102767df push ecx */
  push32((uint32_t)(ECX));
  /* 102767e0 push 0x1029ba28 */
  push32((uint32_t)(0x1029ba28u));
  /* 102767e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102767e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102767e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102767eb push 0 */
  push32((uint32_t)(0x0u));
  /* 102767ed call 0x10273c10 */
  push32(0x102767f2u); f_10273c10();
  /* 102767f2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102767f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102767f8 jne 0x102767fb */
  if (!C.zf) goto L_102767fb;
  /* 102767fa int3  */
  x86_unimpl("int3 @ 0x102767fa");
L_102767fb:;
  /* 102767fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102767fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102767ff jne 0x102767c3 */
  if (!C.zf) goto L_102767c3;
  /* 10276801 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276804 push eax */
  push32((uint32_t)(EAX));
  /* 10276805 call 0x10276850 */
  push32(0x1027680au); f_10276850();
  /* 1027680a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027680d:;
  /* 1027680d jmp 0x102765e8 */
  goto L_102765e8;
L_10276812:;
  /* 10276812 push 9 */
  push32((uint32_t)(0x9u));
  /* 10276814 call 0x102785f0 */
  push32(0x10276819u); f_102785f0();
  /* 10276819 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027681c:;
  /* 1027681c push 0x1029ba10 */
  push32((uint32_t)(0x1029ba10u));
  /* 10276821 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 10276826 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276828 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027682a push 0 */
  push32((uint32_t)(0x0u));
  /* 1027682c push 0 */
  push32((uint32_t)(0x0u));
  /* 1027682e call 0x10273c10 */
  push32(0x10276833u); f_10273c10();
  /* 10276833 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276836 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276839 jne 0x1027683c */
  if (!C.zf) goto L_1027683c;
  /* 1027683b int3  */
  x86_unimpl("int3 @ 0x1027683b");
L_1027683c:;
  /* 1027683c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027683e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276840 jne 0x1027681c */
  if (!C.zf) goto L_1027681c;
  /* 10276842 pop edi */
  EDI = (pop32());
  /* 10276843 pop esi */
  ESI = (pop32());
  /* 10276844 pop ebx */
  EBX = (pop32());
  /* 10276845 mov esp, ebp */
  ESP = (EBP);
  /* 10276847 pop ebp */
  EBP = (pop32());
  /* 10276848 ret  */
  ESPCHK(0x10276590u, _esp0);
  ESP += 4; return;
}

/* FUN_10006850 @ 0x10276850 (276 bytes, 89 insns) */
void f_10276850(void) {
  FTRACE(0x10276850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276850 push ebp */
  push32((uint32_t)(EBP));
  /* 10276851 mov ebp, esp */
  EBP = (ESP);
  /* 10276853 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276856 push ebx */
  push32((uint32_t)(EBX));
  /* 10276857 push esi */
  push32((uint32_t)(ESI));
  /* 10276858 push edi */
  push32((uint32_t)(EDI));
  /* 10276859 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10276860 jmp 0x1027686b */
  goto L_1027686b;
L_10276862:;
  /* 10276862 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10276865 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276868 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_1027686b:;
  /* 1027686b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027686e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276872 jge 0x1027687f */
  if ((C.sf==C.of)) goto L_1027687f;
  /* 10276874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276877 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1027687a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1027687d jmp 0x10276886 */
  goto L_10276886;
L_1027687f:;
  /* 1027687f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10276886:;
  /* 10276886 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10276889 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027688c jge 0x1027692c */
  if ((C.sf==C.of)) goto L_1027692c;
  /* 10276892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276895 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276898 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 1027689b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 1027689e cmp dword ptr [0x1029eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1029eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102768a5 jle 0x102768c3 */
  if ((C.zf||C.sf!=C.of)) goto L_102768c3;
  /* 102768a7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 102768ac mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 102768af and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 102768b5 push ecx */
  push32((uint32_t)(ECX));
  /* 102768b6 call 0x1027ab60 */
  push32(0x102768bbu); f_1027ab60();
  /* 102768bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102768be mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 102768c1 jmp 0x102768e0 */
  goto L_102768e0;
L_102768c3:;
  /* 102768c3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 102768c6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102768cc mov eax, dword ptr [0x1029ec98] */
  EAX = (r32((uint32_t)(0x1029ec98)));
  /* 102768d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 102768d3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 102768d7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 102768dd mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_102768e0:;
  /* 102768e0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102768e4 je 0x102768f4 */
  if (C.zf) goto L_102768f4;
  /* 102768e6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 102768e9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 102768ef mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 102768f2 jmp 0x102768fb */
  goto L_102768fb;
L_102768f4:;
  /* 102768f4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_102768fb:;
  /* 102768fb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 102768fe mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10276901 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10276905 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10276908 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027690e push edx */
  push32((uint32_t)(EDX));
  /* 1027690f push 0x1029bb04 */
  push32((uint32_t)(0x1029bb04u));
  /* 10276914 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10276917 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027691a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 1027691e push ecx */
  push32((uint32_t)(ECX));
  /* 1027691f call 0x1027aa60 */
  push32(0x10276924u); f_1027aa60();
  /* 10276924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276927 jmp 0x10276862 */
  goto L_10276862;
L_1027692c:;
  /* 1027692c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1027692f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10276934:;
  /* 10276934 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10276937 push eax */
  push32((uint32_t)(EAX));
  /* 10276938 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1027693b push ecx */
  push32((uint32_t)(ECX));
  /* 1027693c push 0x1029baf4 */
  push32((uint32_t)(0x1029baf4u));
  /* 10276941 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276943 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276945 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276947 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276949 call 0x10273c10 */
  push32(0x1027694eu); f_10273c10();
  /* 1027694e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276951 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276954 jne 0x10276957 */
  if (!C.zf) goto L_10276957;
  /* 10276956 int3  */
  x86_unimpl("int3 @ 0x10276956");
L_10276957:;
  /* 10276957 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276959 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1027695b jne 0x10276934 */
  if (!C.zf) goto L_10276934;
  /* 1027695d pop edi */
  EDI = (pop32());
  /* 1027695e pop esi */
  ESI = (pop32());
  /* 1027695f pop ebx */
  EBX = (pop32());
  /* 10276960 mov esp, ebp */
  ESP = (EBP);
  /* 10276962 pop ebp */
  EBP = (pop32());
  /* 10276963 ret  */
  ESPCHK(0x10276850u, _esp0);
  ESP += 4; return;
}

/* FUN_10006970 @ 0x10276970 (116 bytes, 46 insns) */
void f_10276970(void) {
  FTRACE(0x10276970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276970 push ebp */
  push32((uint32_t)(EBP));
  /* 10276971 mov ebp, esp */
  EBP = (ESP);
  /* 10276973 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276976 push ebx */
  push32((uint32_t)(EBX));
  /* 10276977 push esi */
  push32((uint32_t)(ESI));
  /* 10276978 push edi */
  push32((uint32_t)(EDI));
  /* 10276979 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 1027697c push eax */
  push32((uint32_t)(EAX));
  /* 1027697d call 0x102762f0 */
  push32(0x10276982u); f_102762f0();
  /* 10276982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276985 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276989 jne 0x102769a4 */
  if (!C.zf) goto L_102769a4;
  /* 1027698b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027698f jne 0x102769a4 */
  if (!C.zf) goto L_102769a4;
  /* 10276991 mov ecx, dword ptr [0x1029ea84] */
  ECX = (r32((uint32_t)(0x1029ea84)));
  /* 10276997 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 1027699a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027699c je 0x102769db */
  if (C.zf) goto L_102769db;
  /* 1027699e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102769a2 je 0x102769db */
  if (C.zf) goto L_102769db;
L_102769a4:;
  /* 102769a4 push 0x1029bb0c */
  push32((uint32_t)(0x1029bb0cu));
  /* 102769a9 push 0x1029b4d8 */
  push32((uint32_t)(0x1029b4d8u));
  /* 102769ae push 0 */
  push32((uint32_t)(0x0u));
  /* 102769b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102769b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102769b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 102769b6 call 0x10273c10 */
  push32(0x102769bbu); f_10273c10();
  /* 102769bb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102769be cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102769c1 jne 0x102769c4 */
  if (!C.zf) goto L_102769c4;
  /* 102769c3 int3  */
  x86_unimpl("int3 @ 0x102769c3");
L_102769c4:;
  /* 102769c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102769c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102769c8 jne 0x102769a4 */
  if (!C.zf) goto L_102769a4;
  /* 102769ca push 0 */
  push32((uint32_t)(0x0u));
  /* 102769cc call 0x10276590 */
  push32(0x102769d1u); f_10276590();
  /* 102769d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102769d4 mov eax, 1 */
  EAX = (0x1u);
  /* 102769d9 jmp 0x102769dd */
  goto L_102769dd;
L_102769db:;
  /* 102769db xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102769dd:;
  /* 102769dd pop edi */
  EDI = (pop32());
  /* 102769de pop esi */
  ESI = (pop32());
  /* 102769df pop ebx */
  EBX = (pop32());
  /* 102769e0 mov esp, ebp */
  ESP = (EBP);
  /* 102769e2 pop ebp */
  EBP = (pop32());
  /* 102769e3 ret  */
  ESPCHK(0x10276970u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x102769f0 (197 bytes, 79 insns) */
void f_102769f0(void) {
  FTRACE(0x102769f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102769f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102769f1 mov ebp, esp */
  EBP = (ESP);
  /* 102769f3 push ecx */
  push32((uint32_t)(ECX));
  /* 102769f4 push ebx */
  push32((uint32_t)(EBX));
  /* 102769f5 push esi */
  push32((uint32_t)(ESI));
  /* 102769f6 push edi */
  push32((uint32_t)(EDI));
  /* 102769f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102769fb jne 0x10276a02 */
  if (!C.zf) goto L_10276a02;
  /* 102769fd jmp 0x10276aae */
  goto L_10276aae;
L_10276a02:;
  /* 10276a02 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10276a09 jmp 0x10276a14 */
  goto L_10276a14;
L_10276a0b:;
  /* 10276a0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276a0e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276a11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10276a14:;
  /* 10276a14 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276a18 jge 0x10276a5e */
  if ((C.sf==C.of)) goto L_10276a5e;
L_10276a1a:;
  /* 10276a1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276a1d mov edx, dword ptr [ecx*4 + 0x1029ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029ea94)));
  /* 10276a24 push edx */
  push32((uint32_t)(EDX));
  /* 10276a25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276a28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276a2b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10276a2f push edx */
  push32((uint32_t)(EDX));
  /* 10276a30 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276a33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276a36 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10276a3a push edx */
  push32((uint32_t)(EDX));
  /* 10276a3b push 0x1029bb68 */
  push32((uint32_t)(0x1029bb68u));
  /* 10276a40 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a42 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a46 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a48 call 0x10273c10 */
  push32(0x10276a4du); f_10273c10();
  /* 10276a4d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276a50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276a53 jne 0x10276a56 */
  if (!C.zf) goto L_10276a56;
  /* 10276a55 int3  */
  x86_unimpl("int3 @ 0x10276a55");
L_10276a56:;
  /* 10276a56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276a5a jne 0x10276a1a */
  if (!C.zf) goto L_10276a1a;
  /* 10276a5c jmp 0x10276a0b */
  goto L_10276a0b;
L_10276a5e:;
  /* 10276a5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276a61 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10276a64 push edx */
  push32((uint32_t)(EDX));
  /* 10276a65 push 0x1029bb44 */
  push32((uint32_t)(0x1029bb44u));
  /* 10276a6a push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a6c push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a72 call 0x10273c10 */
  push32(0x10276a77u); f_10273c10();
  /* 10276a77 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276a7a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276a7d jne 0x10276a80 */
  if (!C.zf) goto L_10276a80;
  /* 10276a7f int3  */
  x86_unimpl("int3 @ 0x10276a7f");
L_10276a80:;
  /* 10276a80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276a82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276a84 jne 0x10276a5e */
  if (!C.zf) goto L_10276a5e;
L_10276a86:;
  /* 10276a86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276a89 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10276a8c push edx */
  push32((uint32_t)(EDX));
  /* 10276a8d push 0x1029bb24 */
  push32((uint32_t)(0x1029bb24u));
  /* 10276a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a98 push 0 */
  push32((uint32_t)(0x0u));
  /* 10276a9a call 0x10273c10 */
  push32(0x10276a9fu); f_10273c10();
  /* 10276a9f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276aa2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276aa5 jne 0x10276aa8 */
  if (!C.zf) goto L_10276aa8;
  /* 10276aa7 int3  */
  x86_unimpl("int3 @ 0x10276aa7");
L_10276aa8:;
  /* 10276aa8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276aac jne 0x10276a86 */
  if (!C.zf) goto L_10276a86;
L_10276aae:;
  /* 10276aae pop edi */
  EDI = (pop32());
  /* 10276aaf pop esi */
  ESI = (pop32());
  /* 10276ab0 pop ebx */
  EBX = (pop32());
  /* 10276ab1 mov esp, ebp */
  ESP = (EBP);
  /* 10276ab3 pop ebp */
  EBP = (pop32());
  /* 10276ab4 ret  */
  ESPCHK(0x102769f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10276ac0 (329 bytes, 102 insns) */
void f_10276ac0(void) {
  FTRACE(0x10276ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10276ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10276ac3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276ac6 cmp dword ptr [0x102a20d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276acd jne 0x10276ad4 */
  if (!C.zf) goto L_10276ad4;
  /* 10276acf call 0x1027b400 */
  push32(0x10276ad4u); f_1027b400();
L_10276ad4:;
  /* 10276ad4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10276adb mov eax, dword ptr [0x102a0590] */
  EAX = (r32((uint32_t)(0x102a0590)));
  /* 10276ae0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10276ae3:;
  /* 10276ae3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276ae6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10276ae9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10276aeb je 0x10276b19 */
  if (C.zf) goto L_10276b19;
  /* 10276aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276af0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276af3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276af6 je 0x10276b01 */
  if (C.zf) goto L_10276b01;
  /* 10276af8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276afb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276afe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10276b01:;
  /* 10276b01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b04 push eax */
  push32((uint32_t)(EAX));
  /* 10276b05 call 0x10277980 */
  push32(0x10276b0au); f_10277980();
  /* 10276b0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276b0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b10 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10276b14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10276b17 jmp 0x10276ae3 */
  goto L_10276ae3;
L_10276b19:;
  /* 10276b19 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10276b1b push 0x1029bb88 */
  push32((uint32_t)(0x1029bb88u));
  /* 10276b20 push 2 */
  push32((uint32_t)(0x2u));
  /* 10276b22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276b25 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10276b2c push ecx */
  push32((uint32_t)(ECX));
  /* 10276b2d call 0x10274b50 */
  push32(0x10276b32u); f_10274b50();
  /* 10276b32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276b35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10276b38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276b3b mov dword ptr [0x102a05c4], edx */
  w32((uint32_t)(0x102a05c4), (EDX));
  /* 10276b41 cmp dword ptr [0x102a05c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a05c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276b48 jne 0x10276b54 */
  if (!C.zf) goto L_10276b54;
  /* 10276b4a push 9 */
  push32((uint32_t)(0x9u));
  /* 10276b4c call 0x10273ac0 */
  push32(0x10276b51u); f_10273ac0();
  /* 10276b51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10276b54:;
  /* 10276b54 mov eax, dword ptr [0x102a0590] */
  EAX = (r32((uint32_t)(0x102a0590)));
  /* 10276b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10276b5c jmp 0x10276b67 */
  goto L_10276b67;
L_10276b5e:;
  /* 10276b5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b61 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276b64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10276b67:;
  /* 10276b67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b6a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276b6f je 0x10276bd7 */
  if (C.zf) goto L_10276bd7;
  /* 10276b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b74 push ecx */
  push32((uint32_t)(ECX));
  /* 10276b75 call 0x10277980 */
  push32(0x10276b7au); f_10277980();
  /* 10276b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276b7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276b80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10276b83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276b86 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276b89 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276b8c je 0x10276bd5 */
  if (C.zf) goto L_10276bd5;
  /* 10276b8e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10276b90 push 0x1029bb88 */
  push32((uint32_t)(0x1029bb88u));
  /* 10276b95 push 2 */
  push32((uint32_t)(0x2u));
  /* 10276b97 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276b9a push ecx */
  push32((uint32_t)(ECX));
  /* 10276b9b call 0x10274b50 */
  push32(0x10276ba0u); f_10274b50();
  /* 10276ba0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276ba3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276ba6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10276ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276bab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276bae jne 0x10276bba */
  if (!C.zf) goto L_10276bba;
  /* 10276bb0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10276bb2 call 0x10273ac0 */
  push32(0x10276bb7u); f_10273ac0();
  /* 10276bb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10276bba:;
  /* 10276bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10276bbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276bc1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10276bc3 push eax */
  push32((uint32_t)(EAX));
  /* 10276bc4 call 0x10277b00 */
  push32(0x10276bc9u); f_10277b00();
  /* 10276bc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276bcc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276bcf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276bd2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10276bd5:;
  /* 10276bd5 jmp 0x10276b5e */
  goto L_10276b5e;
L_10276bd7:;
  /* 10276bd7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10276bd9 mov edx, dword ptr [0x102a0590] */
  EDX = (r32((uint32_t)(0x102a0590)));
  /* 10276bdf push edx */
  push32((uint32_t)(EDX));
  /* 10276be0 call 0x102755e0 */
  push32(0x10276be5u); f_102755e0();
  /* 10276be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276be8 mov dword ptr [0x102a0590], 0 */
  w32((uint32_t)(0x102a0590), (0x0u));
  /* 10276bf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276bf5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10276bfb mov dword ptr [0x102a20c0], 1 */
  w32((uint32_t)(0x102a20c0), (0x1u));
  /* 10276c05 mov esp, ebp */
  ESP = (EBP);
  /* 10276c07 pop ebp */
  EBP = (pop32());
  /* 10276c08 ret  */
  ESPCHK(0x10276ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x10276c10 (216 bytes, 69 insns) */
void f_10276c10(void) {
  FTRACE(0x10276c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10276c11 mov ebp, esp */
  EBP = (ESP);
  /* 10276c13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276c16 cmp dword ptr [0x102a20d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a20d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276c1d jne 0x10276c24 */
  if (!C.zf) goto L_10276c24;
  /* 10276c1f call 0x1027b400 */
  push32(0x10276c24u); f_1027b400();
L_10276c24:;
  /* 10276c24 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10276c29 push 0x102a0600 */
  push32((uint32_t)(0x102a0600u));
  /* 10276c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10276c30 call dword ptr [0x102a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3310))), 0x10276c36u);
  /* 10276c36 mov dword ptr [0x102a05d4], 0x102a0600 */
  w32((uint32_t)(0x102a05d4), (0x102a0600u));
  /* 10276c40 mov eax, dword ptr [0x102a20ec] */
  EAX = (r32((uint32_t)(0x102a20ec)));
  /* 10276c45 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276c48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276c4a jne 0x10276c57 */
  if (!C.zf) goto L_10276c57;
  /* 10276c4c mov edx, dword ptr [0x102a05d4] */
  EDX = (r32((uint32_t)(0x102a05d4)));
  /* 10276c52 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10276c55 jmp 0x10276c5f */
  goto L_10276c5f;
L_10276c57:;
  /* 10276c57 mov eax, dword ptr [0x102a20ec] */
  EAX = (r32((uint32_t)(0x102a20ec)));
  /* 10276c5c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10276c5f:;
  /* 10276c5f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10276c62 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10276c65 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10276c68 push edx */
  push32((uint32_t)(EDX));
  /* 10276c69 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10276c6c push eax */
  push32((uint32_t)(EAX));
  /* 10276c6d push 0 */
  push32((uint32_t)(0x0u));
  /* 10276c6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10276c71 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276c74 push ecx */
  push32((uint32_t)(ECX));
  /* 10276c75 call 0x10276cf0 */
  push32(0x10276c7au); f_10276cf0();
  /* 10276c7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276c7d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10276c82 push 0x1029bb94 */
  push32((uint32_t)(0x1029bb94u));
  /* 10276c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 10276c89 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276c8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276c8f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10276c92 push ecx */
  push32((uint32_t)(ECX));
  /* 10276c93 call 0x10274b50 */
  push32(0x10276c98u); f_10274b50();
  /* 10276c98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276c9b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10276c9e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ca2 jne 0x10276cae */
  if (!C.zf) goto L_10276cae;
  /* 10276ca4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10276ca6 call 0x10273ac0 */
  push32(0x10276cabu); f_10273ac0();
  /* 10276cab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10276cae:;
  /* 10276cae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10276cb1 push edx */
  push32((uint32_t)(EDX));
  /* 10276cb2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10276cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10276cb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276cb9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276cbc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10276cbf push eax */
  push32((uint32_t)(EAX));
  /* 10276cc0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10276cc4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276cc7 push edx */
  push32((uint32_t)(EDX));
  /* 10276cc8 call 0x10276cf0 */
  push32(0x10276ccdu); f_10276cf0();
  /* 10276ccd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10276cd0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276cd3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276cd6 mov dword ptr [0x102a05b8], eax */
  w32((uint32_t)(0x102a05b8), (EAX));
  /* 10276cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10276cde mov dword ptr [0x102a05bc], ecx */
  w32((uint32_t)(0x102a05bc), (ECX));
  /* 10276ce4 mov esp, ebp */
  ESP = (EBP);
  /* 10276ce6 pop ebp */
  EBP = (pop32());
  /* 10276ce7 ret  */
  ESPCHK(0x10276c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cf0 @ 0x10276cf0 (1060 bytes, 360 insns) */
void f_10276cf0(void) {
  FTRACE(0x10276cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10276cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10276cf1 mov ebp, esp */
  EBP = (ESP);
  /* 10276cf3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276cf6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276cf9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10276cff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10276d02 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10276d08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10276d0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10276d0e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276d12 je 0x10276d25 */
  if (C.zf) goto L_10276d25;
  /* 10276d14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276d17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276d1a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10276d1c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276d1f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d22 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10276d25:;
  /* 10276d25 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d28 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276d2b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276d2e jne 0x10276dfd */
  if (!C.zf) goto L_10276dfd;
L_10276d34:;
  /* 10276d34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d3a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10276d3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d40 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276d43 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276d46 je 0x10276dc2 */
  if (C.zf) goto L_10276dc2;
  /* 10276d48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d4b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276d50 je 0x10276dc2 */
  if (C.zf) goto L_10276dc2;
  /* 10276d52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276d57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10276d59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10276d5b mov al, byte ptr [edx + 0x102a1e21] */
  AL = (r8((uint32_t)(EDX + 0x102a1e21)));
  /* 10276d61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10276d64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276d66 je 0x10276d97 */
  if (C.zf) goto L_10276d97;
  /* 10276d68 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276d6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10276d6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276d73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10276d75 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276d79 je 0x10276d97 */
  if (C.zf) goto L_10276d97;
  /* 10276d7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276d7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d81 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10276d83 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10276d85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276d88 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d8b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10276d8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276d91 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d94 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10276d97:;
  /* 10276d97 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276d9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10276d9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276d9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276da2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10276da4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276da8 je 0x10276dbd */
  if (C.zf) goto L_10276dbd;
  /* 10276daa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276dad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276db0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10276db2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10276db4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276db7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276dba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10276dbd:;
  /* 10276dbd jmp 0x10276d34 */
  goto L_10276d34;
L_10276dc2:;
  /* 10276dc2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276dc5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10276dc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276dca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276dcd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10276dcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276dd3 je 0x10276de4 */
  if (C.zf) goto L_10276de4;
  /* 10276dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276dd8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10276ddb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276dde add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276de1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10276de4:;
  /* 10276de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276de7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276dea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ded jne 0x10276df8 */
  if (!C.zf) goto L_10276df8;
  /* 10276def mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276df2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276df5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10276df8:;
  /* 10276df8 jmp 0x10276ecc */
  goto L_10276ecc;
L_10276dfd:;
  /* 10276dfd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276e00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10276e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e05 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276e08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10276e0a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276e0e je 0x10276e23 */
  if (C.zf) goto L_10276e23;
  /* 10276e10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276e13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276e16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10276e18 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10276e1a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276e1d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e20 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10276e23:;
  /* 10276e23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276e26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10276e28 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10276e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276e2e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10276e34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276e37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10276e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276e3f mov dl, byte ptr [ecx + 0x102a1e21] */
  DL = (r8((uint32_t)(ECX + 0x102a1e21)));
  /* 10276e45 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10276e48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10276e4a je 0x10276e7b */
  if (C.zf) goto L_10276e7b;
  /* 10276e4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276e4f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10276e51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e54 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276e57 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10276e59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276e5d je 0x10276e72 */
  if (C.zf) goto L_10276e72;
  /* 10276e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276e65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10276e67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10276e69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276e6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e6f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10276e72:;
  /* 10276e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276e75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276e78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10276e7b:;
  /* 10276e7b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276e7e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10276e84 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276e87 je 0x10276ea7 */
  if (C.zf) goto L_10276ea7;
  /* 10276e89 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276e8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10276e91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276e93 je 0x10276ea7 */
  if (C.zf) goto L_10276ea7;
  /* 10276e95 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276e98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10276e9e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ea1 jne 0x10276dfd */
  if (!C.zf) goto L_10276dfd;
L_10276ea7:;
  /* 10276ea7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10276eaa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10276eb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10276eb2 jne 0x10276ebf */
  if (!C.zf) goto L_10276ebf;
  /* 10276eb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276eb7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276eba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10276ebd jmp 0x10276ecc */
  goto L_10276ecc;
L_10276ebf:;
  /* 10276ebf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ec3 je 0x10276ecc */
  if (C.zf) goto L_10276ecc;
  /* 10276ec5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276ec8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10276ecc:;
  /* 10276ecc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10276ed3:;
  /* 10276ed3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276ed6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276ed9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276edb je 0x10276efe */
  if (C.zf) goto L_10276efe;
L_10276edd:;
  /* 10276edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10276ee3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ee6 je 0x10276ef3 */
  if (C.zf) goto L_10276ef3;
  /* 10276ee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276eeb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276eee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ef1 jne 0x10276efe */
  if (!C.zf) goto L_10276efe;
L_10276ef3:;
  /* 10276ef3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276ef6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276ef9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10276efc jmp 0x10276edd */
  goto L_10276edd;
L_10276efe:;
  /* 10276efe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f01 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276f04 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276f06 jne 0x10276f0d */
  if (!C.zf) goto L_10276f0d;
  /* 10276f08 jmp 0x102770eb */
  goto L_102770eb;
L_10276f0d:;
  /* 10276f0d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276f11 je 0x10276f24 */
  if (C.zf) goto L_10276f24;
  /* 10276f13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276f16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276f19 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10276f1b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10276f1e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276f21 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10276f24:;
  /* 10276f24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10276f27 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10276f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276f2c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10276f2f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10276f31:;
  /* 10276f31 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10276f38 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10276f3f:;
  /* 10276f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f42 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276f45 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276f48 jne 0x10276f5e */
  if (!C.zf) goto L_10276f5e;
  /* 10276f4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f4d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276f50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10276f53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276f56 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276f59 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10276f5c jmp 0x10276f3f */
  goto L_10276f3f;
L_10276f5e:;
  /* 10276f5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f61 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10276f64 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276f67 jne 0x10276fba */
  if (!C.zf) goto L_10276fba;
  /* 10276f69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276f6c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276f6e mov ecx, 2 */
  ECX = (0x2u);
  /* 10276f73 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10276f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10276f77 jne 0x10276fb2 */
  if (!C.zf) goto L_10276fb2;
  /* 10276f79 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276f7d je 0x10276f9f */
  if (C.zf) goto L_10276f9f;
  /* 10276f7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f82 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10276f86 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276f89 jne 0x10276f96 */
  if (!C.zf) goto L_10276f96;
  /* 10276f8b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276f8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276f91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10276f94 jmp 0x10276f9d */
  goto L_10276f9d;
L_10276f96:;
  /* 10276f96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10276f9d:;
  /* 10276f9d jmp 0x10276fa6 */
  goto L_10276fa6;
L_10276f9f:;
  /* 10276f9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10276fa6:;
  /* 10276fa6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10276fa8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276fac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10276faf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10276fb2:;
  /* 10276fb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276fb5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10276fb7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10276fba:;
  /* 10276fba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276fbd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10276fc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10276fc3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10276fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10276fc8 je 0x10276fee */
  if (C.zf) goto L_10276fee;
  /* 10276fca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276fce je 0x10276fdf */
  if (C.zf) goto L_10276fdf;
  /* 10276fd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276fd3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10276fd6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10276fd9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276fdc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10276fdf:;
  /* 10276fdf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276fe2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10276fe4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10276fe7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10276fea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10276fec jmp 0x10276fba */
  goto L_10276fba;
L_10276fee:;
  /* 10276fee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10276ff1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10276ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10276ff6 je 0x10277014 */
  if (C.zf) goto L_10277014;
  /* 10276ff8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10276ffc jne 0x10277019 */
  if (!C.zf) goto L_10277019;
  /* 10276ffe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277001 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10277004 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277007 je 0x10277014 */
  if (C.zf) goto L_10277014;
  /* 10277009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027700c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1027700f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277012 jne 0x10277019 */
  if (!C.zf) goto L_10277019;
L_10277014:;
  /* 10277014 jmp 0x102770c4 */
  goto L_102770c4;
L_10277019:;
  /* 10277019 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027701d je 0x102770b6 */
  if (C.zf) goto L_102770b6;
  /* 10277023 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277027 je 0x1027707d */
  if (C.zf) goto L_1027707d;
  /* 10277029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027702c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027702e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10277030 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10277032 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 10277038 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1027703b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1027703d je 0x10277068 */
  if (C.zf) goto L_10277068;
  /* 1027703f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277045 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10277047 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10277049 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027704c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027704f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10277052 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027705b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027705e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10277060 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277063 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10277066 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10277068:;
  /* 10277068 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027706b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027706e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10277070 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10277072 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277075 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277078 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1027707b jmp 0x102770a9 */
  goto L_102770a9;
L_1027707d:;
  /* 1027707d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277080 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277082 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10277084 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10277086 mov cl, byte ptr [eax + 0x102a1e21] */
  CL = (r8((uint32_t)(EAX + 0x102a1e21)));
  /* 1027708c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1027708f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10277091 je 0x102770a9 */
  if (C.zf) goto L_102770a9;
  /* 10277093 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277096 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277099 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027709c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1027709f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102770a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102770a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102770a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_102770a9:;
  /* 102770a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 102770ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102770ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102770b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102770b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_102770b6:;
  /* 102770b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102770b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102770bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102770bf jmp 0x10276f31 */
  goto L_10276f31;
L_102770c4:;
  /* 102770c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102770c8 je 0x102770d9 */
  if (C.zf) goto L_102770d9;
  /* 102770ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102770cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 102770d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 102770d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102770d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_102770d9:;
  /* 102770d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 102770dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 102770de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102770e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 102770e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 102770e6 jmp 0x10276ed3 */
  goto L_10276ed3;
L_102770eb:;
  /* 102770eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102770ef je 0x10277103 */
  if (C.zf) goto L_10277103;
  /* 102770f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102770f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 102770fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102770fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277100 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10277103:;
  /* 10277103 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10277106 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10277108 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027710b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027710e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10277110 mov esp, ebp */
  ESP = (EBP);
  /* 10277112 pop ebp */
  EBP = (pop32());
  /* 10277113 ret  */
  ESPCHK(0x10276cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007120 @ 0x10277120 (537 bytes, 173 insns) */
void f_10277120(void) {
  FTRACE(0x10277120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277120 push ebp */
  push32((uint32_t)(EBP));
  /* 10277121 mov ebp, esp */
  EBP = (ESP);
  /* 10277123 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277126 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1027712d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10277134 cmp dword ptr [0x102a0704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027713b jne 0x1027717a */
  if (!C.zf) goto L_1027717a;
  /* 1027713d call dword ptr [0x102a336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a336c))), 0x10277143u);
  /* 10277143 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10277146 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027714a je 0x10277158 */
  if (C.zf) goto L_10277158;
  /* 1027714c mov dword ptr [0x102a0704], 1 */
  w32((uint32_t)(0x102a0704), (0x1u));
  /* 10277156 jmp 0x1027717a */
  goto L_1027717a;
L_10277158:;
  /* 10277158 call dword ptr [0x102a3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3368))), 0x1027715eu);
  /* 1027715e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10277161 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277165 je 0x10277173 */
  if (C.zf) goto L_10277173;
  /* 10277167 mov dword ptr [0x102a0704], 2 */
  w32((uint32_t)(0x102a0704), (0x2u));
  /* 10277171 jmp 0x1027717a */
  goto L_1027717a;
L_10277173:;
  /* 10277173 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277175 jmp 0x10277335 */
  goto L_10277335;
L_1027717a:;
  /* 1027717a cmp dword ptr [0x102a0704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277181 jne 0x1027727e */
  if (!C.zf) goto L_1027727e;
  /* 10277187 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027718b jne 0x102771a3 */
  if (!C.zf) goto L_102771a3;
  /* 1027718d call dword ptr [0x102a336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a336c))), 0x10277193u);
  /* 10277193 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10277196 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027719a jne 0x102771a3 */
  if (!C.zf) goto L_102771a3;
  /* 1027719c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027719e jmp 0x10277335 */
  goto L_10277335;
L_102771a3:;
  /* 102771a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102771a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102771a9:;
  /* 102771a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102771ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102771ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102771b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102771b3 je 0x102771d5 */
  if (C.zf) goto L_102771d5;
  /* 102771b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102771b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102771bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102771be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102771c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102771c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 102771c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102771c8 jne 0x102771d3 */
  if (!C.zf) goto L_102771d3;
  /* 102771ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102771cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102771d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_102771d3:;
  /* 102771d3 jmp 0x102771a9 */
  goto L_102771a9;
L_102771d5:;
  /* 102771d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102771d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102771db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 102771dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102771e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102771e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102771ee push edx */
  push32((uint32_t)(EDX));
  /* 102771ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102771f2 push eax */
  push32((uint32_t)(EAX));
  /* 102771f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 102771f7 call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x102771fdu);
  /* 102771fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10277200 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277204 je 0x10277224 */
  if (C.zf) goto L_10277224;
  /* 10277206 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10277208 push 0x1029bba0 */
  push32((uint32_t)(0x1029bba0u));
  /* 1027720d push 2 */
  push32((uint32_t)(0x2u));
  /* 1027720f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10277212 push ecx */
  push32((uint32_t)(ECX));
  /* 10277213 call 0x10274b50 */
  push32(0x10277218u); f_10274b50();
  /* 10277218 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027721b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1027721e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277222 jne 0x10277235 */
  if (!C.zf) goto L_10277235;
L_10277224:;
  /* 10277224 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10277227 push edx */
  push32((uint32_t)(EDX));
  /* 10277228 call dword ptr [0x102a3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3360))), 0x1027722eu);
  /* 1027722e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277230 jmp 0x10277335 */
  goto L_10277335;
L_10277235:;
  /* 10277235 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277237 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277239 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027723c push eax */
  push32((uint32_t)(EAX));
  /* 1027723d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10277240 push ecx */
  push32((uint32_t)(ECX));
  /* 10277241 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277244 push edx */
  push32((uint32_t)(EDX));
  /* 10277245 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10277248 push eax */
  push32((uint32_t)(EAX));
  /* 10277249 push 0 */
  push32((uint32_t)(0x0u));
  /* 1027724b push 0 */
  push32((uint32_t)(0x0u));
  /* 1027724d call dword ptr [0x102a3364] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3364))), 0x10277253u);
  /* 10277253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10277255 jne 0x1027726c */
  if (!C.zf) goto L_1027726c;
  /* 10277257 push 2 */
  push32((uint32_t)(0x2u));
  /* 10277259 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027725c push ecx */
  push32((uint32_t)(ECX));
  /* 1027725d call 0x102755e0 */
  push32(0x10277262u); f_102755e0();
  /* 10277262 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277265 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1027726c:;
  /* 1027726c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1027726f push edx */
  push32((uint32_t)(EDX));
  /* 10277270 call dword ptr [0x102a3360] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3360))), 0x10277276u);
  /* 10277276 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10277279 jmp 0x10277335 */
  goto L_10277335;
L_1027727e:;
  /* 1027727e cmp dword ptr [0x102a0704], 2 */
  { uint32_t _a=(r32((uint32_t)(0x102a0704))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277285 jne 0x10277333 */
  if (!C.zf) goto L_10277333;
  /* 1027728b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027728f jne 0x102772a7 */
  if (!C.zf) goto L_102772a7;
  /* 10277291 call dword ptr [0x102a3368] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3368))), 0x10277297u);
  /* 10277297 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1027729a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027729e jne 0x102772a7 */
  if (!C.zf) goto L_102772a7;
  /* 102772a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102772a2 jmp 0x10277335 */
  goto L_10277335;
L_102772a7:;
  /* 102772a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102772aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_102772ad:;
  /* 102772ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102772b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102772b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102772b5 je 0x102772d5 */
  if (C.zf) goto L_102772d5;
  /* 102772b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102772ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102772bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102772c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102772c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 102772c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102772c8 jne 0x102772d3 */
  if (!C.zf) goto L_102772d3;
  /* 102772ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102772cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102772d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_102772d3:;
  /* 102772d3 jmp 0x102772ad */
  goto L_102772ad;
L_102772d5:;
  /* 102772d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102772d8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102772db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102772de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 102772e1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 102772e6 push 0x1029bba0 */
  push32((uint32_t)(0x1029bba0u));
  /* 102772eb push 2 */
  push32((uint32_t)(0x2u));
  /* 102772ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102772f0 push edx */
  push32((uint32_t)(EDX));
  /* 102772f1 call 0x10274b50 */
  push32(0x102772f6u); f_10274b50();
  /* 102772f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102772f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102772fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277300 jne 0x10277310 */
  if (!C.zf) goto L_10277310;
  /* 10277302 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10277305 push eax */
  push32((uint32_t)(EAX));
  /* 10277306 call dword ptr [0x102a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a335c))), 0x1027730cu);
  /* 1027730c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027730e jmp 0x10277335 */
  goto L_10277335;
L_10277310:;
  /* 10277310 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10277313 push ecx */
  push32((uint32_t)(ECX));
  /* 10277314 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10277317 push edx */
  push32((uint32_t)(EDX));
  /* 10277318 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027731b push eax */
  push32((uint32_t)(EAX));
  /* 1027731c call 0x1027b430 */
  push32(0x10277321u); f_1027b430();
  /* 10277321 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277324 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10277327 push ecx */
  push32((uint32_t)(ECX));
  /* 10277328 call dword ptr [0x102a335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a335c))), 0x1027732eu);
  /* 1027732e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10277331 jmp 0x10277335 */
  goto L_10277335;
L_10277333:;
  /* 10277333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10277335:;
  /* 10277335 mov esp, ebp */
  ESP = (EBP);
  /* 10277337 pop ebp */
  EBP = (pop32());
  /* 10277338 ret  */
  ESPCHK(0x10277120u, _esp0);
  ESP += 4; return;
}

/* FUN_10007340 @ 0x10277340 (77 bytes, 25 insns) */
void f_10277340(void) {
  FTRACE(0x10277340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277340 push ebp */
  push32((uint32_t)(EBP));
  /* 10277341 mov ebp, esp */
  EBP = (ESP);
  /* 10277343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277345 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1027734a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027734c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277350 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10277353 push eax */
  push32((uint32_t)(EAX));
  /* 10277354 call dword ptr [0x102a3374] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3374))), 0x1027735au);
  /* 1027735a mov dword ptr [0x102a1f4c], eax */
  w32((uint32_t)(0x102a1f4c), (EAX));
  /* 1027735f cmp dword ptr [0x102a1f4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a1f4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277366 jne 0x1027736c */
  if (!C.zf) goto L_1027736c;
  /* 10277368 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027736a jmp 0x1027738b */
  goto L_1027738b;
L_1027736c:;
  /* 1027736c call 0x10278df0 */
  push32(0x10277371u); f_10278df0();
  /* 10277371 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10277373 jne 0x10277386 */
  if (!C.zf) goto L_10277386;
  /* 10277375 mov ecx, dword ptr [0x102a1f4c] */
  ECX = (r32((uint32_t)(0x102a1f4c)));
  /* 1027737b push ecx */
  push32((uint32_t)(ECX));
  /* 1027737c call dword ptr [0x102a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3370))), 0x10277382u);
  /* 10277382 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277384 jmp 0x1027738b */
  goto L_1027738b;
L_10277386:;
  /* 10277386 mov eax, 1 */
  EAX = (0x1u);
L_1027738b:;
  /* 1027738b pop ebp */
  EBP = (pop32());
  /* 1027738c ret  */
  ESPCHK(0x10277340u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x10277390 (156 bytes, 48 insns) */
void f_10277390(void) {
  FTRACE(0x10277390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277390 push ebp */
  push32((uint32_t)(EBP));
  /* 10277391 mov ebp, esp */
  EBP = (ESP);
  /* 10277393 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277396 mov eax, dword ptr [0x102a1f48] */
  EAX = (r32((uint32_t)(0x102a1f48)));
  /* 1027739b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027739e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102773a5 jmp 0x102773b0 */
  goto L_102773b0;
L_102773a7:;
  /* 102773a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102773aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102773ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_102773b0:;
  /* 102773b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102773b3 cmp edx, dword ptr [0x102a1f44] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x102a1f44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102773b9 jge 0x10277406 */
  if ((C.sf==C.of)) goto L_10277406;
  /* 102773bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 102773c0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 102773c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102773c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 102773cb push ecx */
  push32((uint32_t)(ECX));
  /* 102773cc call dword ptr [0x102a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a337c))), 0x102773d2u);
  /* 102773d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 102773d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102773d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102773dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 102773df push eax */
  push32((uint32_t)(EAX));
  /* 102773e0 call dword ptr [0x102a337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a337c))), 0x102773e6u);
  /* 102773e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102773e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 102773ec push edx */
  push32((uint32_t)(EDX));
  /* 102773ed push 0 */
  push32((uint32_t)(0x0u));
  /* 102773ef mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 102773f4 push eax */
  push32((uint32_t)(EAX));
  /* 102773f5 call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x102773fbu);
  /* 102773fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102773fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277401 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10277404 jmp 0x102773a7 */
  goto L_102773a7;
L_10277406:;
  /* 10277406 mov edx, dword ptr [0x102a1f48] */
  EDX = (r32((uint32_t)(0x102a1f48)));
  /* 1027740c push edx */
  push32((uint32_t)(EDX));
  /* 1027740d push 0 */
  push32((uint32_t)(0x0u));
  /* 1027740f mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10277414 push eax */
  push32((uint32_t)(EAX));
  /* 10277415 call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x1027741bu);
  /* 1027741b mov ecx, dword ptr [0x102a1f4c] */
  ECX = (r32((uint32_t)(0x102a1f4c)));
  /* 10277421 push ecx */
  push32((uint32_t)(ECX));
  /* 10277422 call dword ptr [0x102a3370] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3370))), 0x10277428u);
  /* 10277428 mov esp, ebp */
  ESP = (EBP);
  /* 1027742a pop ebp */
  EBP = (pop32());
  /* 1027742b ret  */
  ESPCHK(0x10277390u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10277430 (73 bytes, 19 insns) */
void f_10277430(void) {
  FTRACE(0x10277430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277430 push ebp */
  push32((uint32_t)(EBP));
  /* 10277431 mov ebp, esp */
  EBP = (ESP);
  /* 10277433 cmp dword ptr [0x102a0598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027743a je 0x1027744e */
  if (C.zf) goto L_1027744e;
  /* 1027743c cmp dword ptr [0x102a0598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277443 jne 0x10277477 */
  if (!C.zf) goto L_10277477;
  /* 10277445 cmp dword ptr [0x102a059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027744c jne 0x10277477 */
  if (!C.zf) goto L_10277477;
L_1027744e:;
  /* 1027744e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10277453 call 0x10277480 */
  push32(0x10277458u); f_10277480();
  /* 10277458 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027745b cmp dword ptr [0x102a0708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277462 je 0x1027746a */
  if (C.zf) goto L_1027746a;
  /* 10277464 call dword ptr [0x102a0708] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0708))), 0x1027746au);
L_1027746a:;
  /* 1027746a push 0xff */
  push32((uint32_t)(0xffu));
  /* 1027746f call 0x10277480 */
  push32(0x10277474u); f_10277480();
  /* 10277474 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10277477:;
  /* 10277477 pop ebp */
  EBP = (pop32());
  /* 10277478 ret  */
  ESPCHK(0x10277430u, _esp0);
  ESP += 4; return;
}

/* FUN_10007480 @ 0x10277480 (447 bytes, 131 insns) */
void f_10277480(void) {
  FTRACE(0x10277480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277480 push ebp */
  push32((uint32_t)(EBP));
  /* 10277481 mov ebp, esp */
  EBP = (ESP);
  /* 10277483 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277489 push ebx */
  push32((uint32_t)(EBX));
  /* 1027748a push esi */
  push32((uint32_t)(ESI));
  /* 1027748b push edi */
  push32((uint32_t)(EDI));
  /* 1027748c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10277493 jmp 0x1027749e */
  goto L_1027749e;
L_10277495:;
  /* 10277495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277498 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027749b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1027749e:;
  /* 1027749e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774a2 jae 0x102774b7 */
  if (!C.cf) goto L_102774b7;
  /* 102774a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102774a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102774aa cmp edx, dword ptr [ecx*8 + 0x1029eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1029eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774b1 jne 0x102774b5 */
  if (!C.zf) goto L_102774b5;
  /* 102774b3 jmp 0x102774b7 */
  goto L_102774b7;
L_102774b5:;
  /* 102774b5 jmp 0x10277495 */
  goto L_10277495;
L_102774b7:;
  /* 102774b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102774ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102774bd cmp ecx, dword ptr [eax*8 + 0x1029eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1029eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774c4 jne 0x10277638 */
  if (!C.zf) goto L_10277638;
  /* 102774ca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774d1 je 0x102774f4 */
  if (C.zf) goto L_102774f4;
  /* 102774d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102774d6 mov eax, dword ptr [edx*8 + 0x1029eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1029eab4)));
  /* 102774dd push eax */
  push32((uint32_t)(EAX));
  /* 102774de push 0 */
  push32((uint32_t)(0x0u));
  /* 102774e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 102774e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 102774e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 102774e6 call 0x10273c10 */
  push32(0x102774ebu); f_10273c10();
  /* 102774eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102774ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774f1 jne 0x102774f4 */
  if (!C.zf) goto L_102774f4;
  /* 102774f3 int3  */
  x86_unimpl("int3 @ 0x102774f3");
L_102774f4:;
  /* 102774f4 cmp dword ptr [0x102a0598], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102774fb je 0x1027750f */
  if (C.zf) goto L_1027750f;
  /* 102774fd cmp dword ptr [0x102a0598], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0598))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277504 jne 0x10277548 */
  if (!C.zf) goto L_10277548;
  /* 10277506 cmp dword ptr [0x102a059c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x102a059c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027750d jne 0x10277548 */
  if (!C.zf) goto L_10277548;
L_1027750f:;
  /* 1027750f push 0 */
  push32((uint32_t)(0x0u));
  /* 10277511 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10277514 push ecx */
  push32((uint32_t)(ECX));
  /* 10277515 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277518 mov eax, dword ptr [edx*8 + 0x1029eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1029eab4)));
  /* 1027751f push eax */
  push32((uint32_t)(EAX));
  /* 10277520 call 0x10277980 */
  push32(0x10277525u); f_10277980();
  /* 10277525 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277528 push eax */
  push32((uint32_t)(EAX));
  /* 10277529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027752c mov edx, dword ptr [ecx*8 + 0x1029eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x1029eab4)));
  /* 10277533 push edx */
  push32((uint32_t)(EDX));
  /* 10277534 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10277536 call dword ptr [0x102a32f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f4))), 0x1027753cu);
  /* 1027753c push eax */
  push32((uint32_t)(EAX));
  /* 1027753d call dword ptr [0x102a32f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32f8))), 0x10277543u);
  /* 10277543 jmp 0x10277638 */
  goto L_10277638;
L_10277548:;
  /* 10277548 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027754f je 0x10277638 */
  if (C.zf) goto L_10277638;
  /* 10277555 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1027755a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10277560 push eax */
  push32((uint32_t)(EAX));
  /* 10277561 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277563 call dword ptr [0x102a3310] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3310))), 0x10277569u);
  /* 10277569 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027756b jne 0x10277581 */
  if (!C.zf) goto L_10277581;
  /* 1027756d push 0x1029b408 */
  push32((uint32_t)(0x1029b408u));
  /* 10277572 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10277578 push ecx */
  push32((uint32_t)(ECX));
  /* 10277579 call 0x10277b00 */
  push32(0x1027757eu); f_10277b00();
  /* 1027757e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10277581:;
  /* 10277581 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10277587 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1027758a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027758d push eax */
  push32((uint32_t)(EAX));
  /* 1027758e call 0x10277980 */
  push32(0x10277593u); f_10277980();
  /* 10277593 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277596 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277599 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027759c jbe 0x102775ca */
  if ((C.cf||C.zf)) goto L_102775ca;
  /* 1027759e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 102775a4 push ecx */
  push32((uint32_t)(ECX));
  /* 102775a5 call 0x10277980 */
  push32(0x102775aau); f_10277980();
  /* 102775aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102775ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102775b0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 102775b4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102775b7 push 3 */
  push32((uint32_t)(0x3u));
  /* 102775b9 push 0x1029b404 */
  push32((uint32_t)(0x1029b404u));
  /* 102775be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102775c1 push ecx */
  push32((uint32_t)(ECX));
  /* 102775c2 call 0x10278370 */
  push32(0x102775c7u); f_10278370();
  /* 102775c7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102775ca:;
  /* 102775ca push 0x1029be5c */
  push32((uint32_t)(0x1029be5cu));
  /* 102775cf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 102775d5 push edx */
  push32((uint32_t)(EDX));
  /* 102775d6 call 0x10277b00 */
  push32(0x102775dbu); f_10277b00();
  /* 102775db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102775de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 102775e1 push eax */
  push32((uint32_t)(EAX));
  /* 102775e2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 102775e8 push ecx */
  push32((uint32_t)(ECX));
  /* 102775e9 call 0x10277b10 */
  push32(0x102775eeu); f_10277b10();
  /* 102775ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102775f1 push 0x1029b37c */
  push32((uint32_t)(0x1029b37cu));
  /* 102775f6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 102775fc push edx */
  push32((uint32_t)(EDX));
  /* 102775fd call 0x10277b10 */
  push32(0x10277602u); f_10277b10();
  /* 10277602 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277605 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277608 mov ecx, dword ptr [eax*8 + 0x1029eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x1029eab4)));
  /* 1027760f push ecx */
  push32((uint32_t)(ECX));
  /* 10277610 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10277616 push edx */
  push32((uint32_t)(EDX));
  /* 10277617 call 0x10277b10 */
  push32(0x1027761cu); f_10277b10();
  /* 1027761c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027761f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10277624 push 0x1029be34 */
  push32((uint32_t)(0x1029be34u));
  /* 10277629 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 1027762f push eax */
  push32((uint32_t)(EAX));
  /* 10277630 call 0x102782b0 */
  push32(0x10277635u); f_102782b0();
  /* 10277635 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10277638:;
  /* 10277638 pop edi */
  EDI = (pop32());
  /* 10277639 pop esi */
  ESI = (pop32());
  /* 1027763a pop ebx */
  EBX = (pop32());
  /* 1027763b mov esp, ebp */
  ESP = (EBP);
  /* 1027763d pop ebp */
  EBP = (pop32());
  /* 1027763e ret  */
  ESPCHK(0x10277480u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10277640 (80 bytes, 27 insns) */
void f_10277640(void) {
  FTRACE(0x10277640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277640 push ebp */
  push32((uint32_t)(EBP));
  /* 10277641 mov ebp, esp */
  EBP = (ESP);
  /* 10277643 push ecx */
  push32((uint32_t)(ECX));
  /* 10277644 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1027764b jmp 0x10277656 */
  goto L_10277656;
L_1027764d:;
  /* 1027764d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277650 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277653 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10277656:;
  /* 10277656 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027765a jae 0x1027766f */
  if (!C.cf) goto L_1027766f;
  /* 1027765c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027765f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277662 cmp edx, dword ptr [ecx*8 + 0x1029eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x1029eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277669 jne 0x1027766d */
  if (!C.zf) goto L_1027766d;
  /* 1027766b jmp 0x1027766f */
  goto L_1027766f;
L_1027766d:;
  /* 1027766d jmp 0x1027764d */
  goto L_1027764d;
L_1027766f:;
  /* 1027766f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277672 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277675 cmp ecx, dword ptr [eax*8 + 0x1029eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1029eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027767c jne 0x1027768a */
  if (!C.zf) goto L_1027768a;
  /* 1027767e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277681 mov eax, dword ptr [edx*8 + 0x1029eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x1029eab4)));
  /* 10277688 jmp 0x1027768c */
  goto L_1027768c;
L_1027768a:;
  /* 1027768a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1027768c:;
  /* 1027768c mov esp, ebp */
  ESP = (EBP);
  /* 1027768e pop ebp */
  EBP = (pop32());
  /* 1027768f ret  */
  ESPCHK(0x10277640u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10277690 (66 bytes, 28 insns) */
void f_10277690(void) {
  FTRACE(0x10277690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277690 push ebp */
  push32((uint32_t)(EBP));
  /* 10277691 mov ebp, esp */
  EBP = (ESP);
  /* 10277693 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277697 jne 0x102776b7 */
  if (!C.zf) goto L_102776b7;
  /* 10277699 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027769d jge 0x102776b7 */
  if ((C.sf==C.of)) goto L_102776b7;
  /* 1027769f push 1 */
  push32((uint32_t)(0x1u));
  /* 102776a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102776a4 push eax */
  push32((uint32_t)(EAX));
  /* 102776a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102776a8 push ecx */
  push32((uint32_t)(ECX));
  /* 102776a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102776ac push edx */
  push32((uint32_t)(EDX));
  /* 102776ad call 0x102776e0 */
  push32(0x102776b2u); f_102776e0();
  /* 102776b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102776b5 jmp 0x102776cd */
  goto L_102776cd;
L_102776b7:;
  /* 102776b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 102776b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102776bc push eax */
  push32((uint32_t)(EAX));
  /* 102776bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102776c0 push ecx */
  push32((uint32_t)(ECX));
  /* 102776c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102776c4 push edx */
  push32((uint32_t)(EDX));
  /* 102776c5 call 0x102776e0 */
  push32(0x102776cau); f_102776e0();
  /* 102776ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102776cd:;
  /* 102776cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102776d0 pop ebp */
  EBP = (pop32());
  /* 102776d1 ret  */
  ESPCHK(0x10277690u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x102776e0 (194 bytes, 71 insns) */
void f_102776e0(void) {
  FTRACE(0x102776e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102776e0 push ebp */
  push32((uint32_t)(EBP));
  /* 102776e1 mov ebp, esp */
  EBP = (ESP);
  /* 102776e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102776e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102776e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102776ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102776f0 je 0x10277709 */
  if (C.zf) goto L_10277709;
  /* 102776f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102776f5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 102776f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102776fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102776fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10277701 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277704 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10277706 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10277709:;
  /* 10277709 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027770c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1027770f:;
  /* 1027770f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277712 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10277714 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10277717 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1027771a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027771d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027771f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10277722 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10277725 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277729 jbe 0x10277741 */
  if ((C.cf||C.zf)) goto L_10277741;
  /* 1027772b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027772e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277731 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277734 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10277736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277739 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027773c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1027773f jmp 0x10277755 */
  goto L_10277755;
L_10277741:;
  /* 10277741 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10277744 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277747 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027774a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1027774c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027774f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277752 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10277755:;
  /* 10277755 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277759 ja 0x1027770f */
  if ((!C.cf&&!C.zf)) goto L_1027770f;
  /* 1027775b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027775e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10277761 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277764 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277767 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027776a:;
  /* 1027776a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027776d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027776f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10277772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277775 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277778 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027777a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1027777c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027777f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10277782 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10277784 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277787 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1027778a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027778d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277790 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277793 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10277796 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277799 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027779c jb 0x1027776a */
  if (C.cf) goto L_1027776a;
  /* 1027779e mov esp, ebp */
  ESP = (EBP);
  /* 102777a0 pop ebp */
  EBP = (pop32());
  /* 102777a1 ret  */
  ESPCHK(0x102776e0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x102777b0 (63 bytes, 24 insns) */
void f_102777b0(void) {
  FTRACE(0x102777b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102777b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102777b1 mov ebp, esp */
  EBP = (ESP);
  /* 102777b3 push ecx */
  push32((uint32_t)(ECX));
  /* 102777b4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102777b8 jne 0x102777c9 */
  if (!C.zf) goto L_102777c9;
  /* 102777ba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102777be jge 0x102777c9 */
  if ((C.sf==C.of)) goto L_102777c9;
  /* 102777c0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 102777c7 jmp 0x102777d0 */
  goto L_102777d0;
L_102777c9:;
  /* 102777c9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_102777d0:;
  /* 102777d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102777d3 push eax */
  push32((uint32_t)(EAX));
  /* 102777d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 102777d7 push ecx */
  push32((uint32_t)(ECX));
  /* 102777d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102777db push edx */
  push32((uint32_t)(EDX));
  /* 102777dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102777df push eax */
  push32((uint32_t)(EAX));
  /* 102777e0 call 0x102776e0 */
  push32(0x102777e5u); f_102776e0();
  /* 102777e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102777e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102777eb mov esp, ebp */
  ESP = (EBP);
  /* 102777ed pop ebp */
  EBP = (pop32());
  /* 102777ee ret  */
  ESPCHK(0x102777b0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x102777f0 (30 bytes, 14 insns) */
void f_102777f0(void) {
  FTRACE(0x102777f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102777f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102777f1 mov ebp, esp */
  EBP = (ESP);
  /* 102777f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 102777f5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 102777f8 push eax */
  push32((uint32_t)(EAX));
  /* 102777f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102777fc push ecx */
  push32((uint32_t)(ECX));
  /* 102777fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277800 push edx */
  push32((uint32_t)(EDX));
  /* 10277801 call 0x102776e0 */
  push32(0x10277806u); f_102776e0();
  /* 10277806 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027780c pop ebp */
  EBP = (pop32());
  /* 1027780d ret  */
  ESPCHK(0x102777f0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10277810 (72 bytes, 28 insns) */
void f_10277810(void) {
  FTRACE(0x10277810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277810 push ebp */
  push32((uint32_t)(EBP));
  /* 10277811 mov ebp, esp */
  EBP = (ESP);
  /* 10277813 push ecx */
  push32((uint32_t)(ECX));
  /* 10277814 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277818 jne 0x10277831 */
  if (!C.zf) goto L_10277831;
  /* 1027781a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027781e jg 0x10277831 */
  if ((!C.zf&&C.sf==C.of)) goto L_10277831;
  /* 10277820 jl 0x10277828 */
  if ((C.sf!=C.of)) goto L_10277828;
  /* 10277822 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277826 jae 0x10277831 */
  if (!C.cf) goto L_10277831;
L_10277828:;
  /* 10277828 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1027782f jmp 0x10277838 */
  goto L_10277838;
L_10277831:;
  /* 10277831 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10277838:;
  /* 10277838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027783b push eax */
  push32((uint32_t)(EAX));
  /* 1027783c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027783f push ecx */
  push32((uint32_t)(ECX));
  /* 10277840 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277843 push edx */
  push32((uint32_t)(EDX));
  /* 10277844 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277847 push eax */
  push32((uint32_t)(EAX));
  /* 10277848 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027784b push ecx */
  push32((uint32_t)(ECX));
  /* 1027784c call 0x10277860 */
  push32(0x10277851u); f_10277860();
  /* 10277851 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277854 mov esp, ebp */
  ESP = (EBP);
  /* 10277856 pop ebp */
  EBP = (pop32());
  /* 10277857 ret  */
  ESPCHK(0x10277810u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10277860 (242 bytes, 91 insns) */
void f_10277860(void) {
  FTRACE(0x10277860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277860 push ebp */
  push32((uint32_t)(EBP));
  /* 10277861 mov ebp, esp */
  EBP = (ESP);
  /* 10277863 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277866 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277869 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027786c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277870 je 0x10277894 */
  if (C.zf) goto L_10277894;
  /* 10277872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277875 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10277878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027787b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027787e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10277881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277884 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10277886 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277889 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027788c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1027788e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10277891 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10277894:;
  /* 10277894 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1027789a:;
  /* 1027789a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1027789d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1027789f push ecx */
  push32((uint32_t)(ECX));
  /* 102778a0 push eax */
  push32((uint32_t)(EAX));
  /* 102778a1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 102778a4 push edx */
  push32((uint32_t)(EDX));
  /* 102778a5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102778a8 push eax */
  push32((uint32_t)(EAX));
  /* 102778a9 call 0x1027b7e0 */
  push32(0x102778aeu); f_1027b7e0();
  /* 102778ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 102778b1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 102778b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 102778b6 push edx */
  push32((uint32_t)(EDX));
  /* 102778b7 push ecx */
  push32((uint32_t)(ECX));
  /* 102778b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102778bb push eax */
  push32((uint32_t)(EAX));
  /* 102778bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102778bf push ecx */
  push32((uint32_t)(ECX));
  /* 102778c0 call 0x1027b770 */
  push32(0x102778c5u); f_1027b770();
  /* 102778c5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 102778c8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 102778cb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102778cf jbe 0x102778e7 */
  if ((C.cf||C.zf)) goto L_102778e7;
  /* 102778d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102778d4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102778d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102778da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 102778dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102778df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102778e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 102778e5 jmp 0x102778fb */
  goto L_102778fb;
L_102778e7:;
  /* 102778e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 102778ea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102778ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102778f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 102778f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102778f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102778f8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_102778fb:;
  /* 102778fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102778ff ja 0x1027789a */
  if ((!C.cf&&!C.zf)) goto L_1027789a;
  /* 10277901 jb 0x10277909 */
  if (C.cf) goto L_10277909;
  /* 10277903 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277907 ja 0x1027789a */
  if ((!C.cf&&!C.zf)) goto L_1027789a;
L_10277909:;
  /* 10277909 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027790c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1027790f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277912 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277915 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10277918:;
  /* 10277918 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027791b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1027791d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10277920 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277923 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277926 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10277928 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1027792a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027792d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10277930 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10277932 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277935 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277938 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1027793b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027793e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10277944 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277947 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027794a jb 0x10277918 */
  if (C.cf) goto L_10277918;
  /* 1027794c mov esp, ebp */
  ESP = (EBP);
  /* 1027794e pop ebp */
  EBP = (pop32());
  /* 1027794f ret 0x14 */
  ESPCHK(0x10277860u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10277960 (31 bytes, 15 insns) */
void f_10277960(void) {
  FTRACE(0x10277960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277960 push ebp */
  push32((uint32_t)(EBP));
  /* 10277961 mov ebp, esp */
  EBP = (ESP);
  /* 10277963 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277965 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10277968 push eax */
  push32((uint32_t)(EAX));
  /* 10277969 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027796c push ecx */
  push32((uint32_t)(ECX));
  /* 1027796d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277970 push edx */
  push32((uint32_t)(EDX));
  /* 10277971 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277974 push eax */
  push32((uint32_t)(EAX));
  /* 10277975 call 0x10277860 */
  push32(0x1027797au); f_10277860();
  /* 1027797a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1027797d pop ebp */
  EBP = (pop32());
  /* 1027797e ret  */
  ESPCHK(0x10277960u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10277980 (123 bytes, 44 insns) */
void f_10277980(void) {
  FTRACE(0x10277980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277980 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10277984 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1027798a je 0x102779a0 */
  if (C.zf) goto L_102779a0;
L_1027798c:;
  /* 1027798c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1027798e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1027798f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10277991 je 0x102779d3 */
  if (C.zf) goto L_102779d3;
  /* 10277993 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10277999 jne 0x1027798c */
  if (!C.zf) goto L_1027798c;
  /* 1027799b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_102779a0:;
  /* 102779a0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 102779a2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 102779a7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102779a9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102779ac xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 102779ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102779b1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 102779b6 je 0x102779a0 */
  if (C.zf) goto L_102779a0;
  /* 102779b8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 102779bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102779bd je 0x102779f1 */
  if (C.zf) goto L_102779f1;
  /* 102779bf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 102779c1 je 0x102779e7 */
  if (C.zf) goto L_102779e7;
  /* 102779c3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 102779c8 je 0x102779dd */
  if (C.zf) goto L_102779dd;
  /* 102779ca test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 102779cf je 0x102779d3 */
  if (C.zf) goto L_102779d3;
  /* 102779d1 jmp 0x102779a0 */
  goto L_102779a0;
L_102779d3:;
  /* 102779d3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 102779d6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102779da sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102779dc ret  */
  ESPCHK(0x10277980u, _esp0);
  ESP += 4; return;
L_102779dd:;
  /* 102779dd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 102779e0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102779e4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102779e6 ret  */
  ESPCHK(0x10277980u, _esp0);
  ESP += 4; return;
L_102779e7:;
  /* 102779e7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 102779ea mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102779ee sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102779f0 ret  */
  ESPCHK(0x10277980u, _esp0);
  ESP += 4; return;
L_102779f1:;
  /* 102779f1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 102779f4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102779f8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 102779fa ret  */
  ESPCHK(0x10277980u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a00 @ 0x10277a00 (249 bytes, 93 insns) */
void f_10277a00(void) {
  FTRACE(0x10277a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10277a01 mov ebp, esp */
  EBP = (ESP);
  /* 10277a03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277a06 push ebx */
  push32((uint32_t)(EBX));
  /* 10277a07 push esi */
  push32((uint32_t)(ESI));
  /* 10277a08 push edi */
  push32((uint32_t)(EDI));
  /* 10277a09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10277a0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10277a0f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10277a12 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10277a15:;
  /* 10277a15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277a19 jne 0x10277a39 */
  if (!C.zf) goto L_10277a39;
  /* 10277a1b push 0x1029be94 */
  push32((uint32_t)(0x1029be94u));
  /* 10277a20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277a22 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10277a24 push 0x1029be88 */
  push32((uint32_t)(0x1029be88u));
  /* 10277a29 push 2 */
  push32((uint32_t)(0x2u));
  /* 10277a2b call 0x10273c10 */
  push32(0x10277a30u); f_10273c10();
  /* 10277a30 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277a33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277a36 jne 0x10277a39 */
  if (!C.zf) goto L_10277a39;
  /* 10277a38 int3  */
  x86_unimpl("int3 @ 0x10277a38");
L_10277a39:;
  /* 10277a39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10277a3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10277a3d jne 0x10277a15 */
  if (!C.zf) goto L_10277a15;
L_10277a3f:;
  /* 10277a3f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277a43 jne 0x10277a63 */
  if (!C.zf) goto L_10277a63;
  /* 10277a45 push 0x1029be78 */
  push32((uint32_t)(0x1029be78u));
  /* 10277a4a push 0 */
  push32((uint32_t)(0x0u));
  /* 10277a4c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10277a4e push 0x1029be88 */
  push32((uint32_t)(0x1029be88u));
  /* 10277a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10277a55 call 0x10273c10 */
  push32(0x10277a5au); f_10273c10();
  /* 10277a5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277a5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277a60 jne 0x10277a63 */
  if (!C.zf) goto L_10277a63;
  /* 10277a62 int3  */
  x86_unimpl("int3 @ 0x10277a62");
L_10277a63:;
  /* 10277a63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277a65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10277a67 jne 0x10277a3f */
  if (!C.zf) goto L_10277a3f;
  /* 10277a69 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277a6c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10277a73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277a79 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10277a7c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277a7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277a82 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10277a84 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277a87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277a8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10277a8d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10277a90 push edx */
  push32((uint32_t)(EDX));
  /* 10277a91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277a94 push eax */
  push32((uint32_t)(EAX));
  /* 10277a95 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277a98 push ecx */
  push32((uint32_t)(ECX));
  /* 10277a99 call 0x1027bae0 */
  push32(0x10277a9eu); f_1027bae0();
  /* 10277a9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277aa1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10277aa4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277aa7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10277aaa sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277aad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ab0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10277ab3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ab6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277aba jl 0x10277ade */
  if ((C.sf!=C.of)) goto L_10277ade;
  /* 10277abc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277abf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10277ac1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10277ac4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10277ac6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10277acc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10277acf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ad2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10277ad4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277ad7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ada mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10277adc jmp 0x10277aef */
  goto L_10277aef;
L_10277ade:;
  /* 10277ade mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ae1 push eax */
  push32((uint32_t)(EAX));
  /* 10277ae2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277ae4 call 0x1027b860 */
  push32(0x10277ae9u); f_1027b860();
  /* 10277ae9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277aec mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10277aef:;
  /* 10277aef mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10277af2 pop edi */
  EDI = (pop32());
  /* 10277af3 pop esi */
  ESI = (pop32());
  /* 10277af4 pop ebx */
  EBX = (pop32());
  /* 10277af5 mov esp, ebp */
  ESP = (EBP);
  /* 10277af7 pop ebp */
  EBP = (pop32());
  /* 10277af8 ret  */
  ESPCHK(0x10277a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x10277b00 (7 bytes, 3 insns) */
void f_10277b00(void) {
  FTRACE(0x10277b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277b00 push edi */
  push32((uint32_t)(EDI));
  /* 10277b01 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10277b05 jmp 0x10277b71 */
  jmp_ind(0x10277b71u); return;
}

/* FUN_10007b10 @ 0x10277b10 (224 bytes, 84 insns) */
void f_10277b10(void) {
  FTRACE(0x10277b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277b10 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10277b14 push edi */
  push32((uint32_t)(EDI));
  /* 10277b15 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10277b1b je 0x10277b2c */
  if (C.zf) goto L_10277b2c;
L_10277b1d:;
  /* 10277b1d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10277b1f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10277b20 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10277b22 je 0x10277b5f */
  if (C.zf) goto L_10277b5f;
  /* 10277b24 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10277b2a jne 0x10277b1d */
  if (!C.zf) goto L_10277b1d;
L_10277b2c:;
  /* 10277b2c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10277b2e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10277b33 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277b35 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10277b38 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10277b3a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277b3d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10277b42 je 0x10277b2c */
  if (C.zf) goto L_10277b2c;
  /* 10277b44 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10277b47 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10277b49 je 0x10277b6e */
  if (C.zf) goto L_10277b6e;
  /* 10277b4b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10277b4d je 0x10277b69 */
  if (C.zf) goto L_10277b69;
  /* 10277b4f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10277b54 je 0x10277b64 */
  if (C.zf) goto L_10277b64;
  /* 10277b56 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10277b5b je 0x10277b5f */
  if (C.zf) goto L_10277b5f;
  /* 10277b5d jmp 0x10277b2c */
  goto L_10277b2c;
L_10277b5f:;
  /* 10277b5f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10277b62 jmp 0x10277b71 */
  goto L_10277b71;
L_10277b64:;
  /* 10277b64 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10277b67 jmp 0x10277b71 */
  goto L_10277b71;
L_10277b69:;
  /* 10277b69 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10277b6c jmp 0x10277b71 */
  goto L_10277b71;
L_10277b6e:;
  /* 10277b6e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10277b71:;
  /* 10277b71 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10277b75 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10277b7b je 0x10277b96 */
  if (C.zf) goto L_10277b96;
L_10277b7d:;
  /* 10277b7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10277b7f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10277b80 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10277b82 je 0x10277be8 */
  if (C.zf) goto L_10277be8;
  /* 10277b84 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10277b86 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10277b87 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10277b8d jne 0x10277b7d */
  if (!C.zf) goto L_10277b7d;
  /* 10277b8f jmp 0x10277b96 */
  goto L_10277b96;
L_10277b91:;
  /* 10277b91 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10277b93 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10277b96:;
  /* 10277b96 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10277b9b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10277b9d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277b9f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10277ba2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10277ba4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10277ba6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277ba9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10277bae je 0x10277b91 */
  if (C.zf) goto L_10277b91;
  /* 10277bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10277bb2 je 0x10277be8 */
  if (C.zf) goto L_10277be8;
  /* 10277bb4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10277bb6 je 0x10277bdf */
  if (C.zf) goto L_10277bdf;
  /* 10277bb8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10277bbe je 0x10277bd2 */
  if (C.zf) goto L_10277bd2;
  /* 10277bc0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10277bc6 je 0x10277bca */
  if (C.zf) goto L_10277bca;
  /* 10277bc8 jmp 0x10277b91 */
  goto L_10277b91;
L_10277bca:;
  /* 10277bca mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10277bcc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10277bd0 pop edi */
  EDI = (pop32());
  /* 10277bd1 ret  */
  ESPCHK(0x10277b10u, _esp0);
  ESP += 4; return;
L_10277bd2:;
  /* 10277bd2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10277bd5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10277bd9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10277bdd pop edi */
  EDI = (pop32());
  /* 10277bde ret  */
  ESPCHK(0x10277b10u, _esp0);
  ESP += 4; return;
L_10277bdf:;
  /* 10277bdf mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10277be2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10277be6 pop edi */
  EDI = (pop32());
  /* 10277be7 ret  */
  ESPCHK(0x10277b10u, _esp0);
  ESP += 4; return;
L_10277be8:;
  /* 10277be8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10277bea mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10277bee pop edi */
  EDI = (pop32());
  /* 10277bef ret  */
  ESPCHK(0x10277b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bf0 @ 0x10277bf0 (243 bytes, 91 insns) */
void f_10277bf0(void) {
  FTRACE(0x10277bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 10277bf1 mov ebp, esp */
  EBP = (ESP);
  /* 10277bf3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277bf6 push ebx */
  push32((uint32_t)(EBX));
  /* 10277bf7 push esi */
  push32((uint32_t)(ESI));
  /* 10277bf8 push edi */
  push32((uint32_t)(EDI));
  /* 10277bf9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10277bfc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10277bff:;
  /* 10277bff cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277c03 jne 0x10277c23 */
  if (!C.zf) goto L_10277c23;
  /* 10277c05 push 0x1029be94 */
  push32((uint32_t)(0x1029be94u));
  /* 10277c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10277c0c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10277c0e push 0x1029bea4 */
  push32((uint32_t)(0x1029bea4u));
  /* 10277c13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10277c15 call 0x10273c10 */
  push32(0x10277c1au); f_10273c10();
  /* 10277c1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277c1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277c20 jne 0x10277c23 */
  if (!C.zf) goto L_10277c23;
  /* 10277c22 int3  */
  x86_unimpl("int3 @ 0x10277c22");
L_10277c23:;
  /* 10277c23 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10277c25 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10277c27 jne 0x10277bff */
  if (!C.zf) goto L_10277bff;
L_10277c29:;
  /* 10277c29 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277c2d jne 0x10277c4d */
  if (!C.zf) goto L_10277c4d;
  /* 10277c2f push 0x1029be78 */
  push32((uint32_t)(0x1029be78u));
  /* 10277c34 push 0 */
  push32((uint32_t)(0x0u));
  /* 10277c36 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10277c38 push 0x1029bea4 */
  push32((uint32_t)(0x1029bea4u));
  /* 10277c3d push 2 */
  push32((uint32_t)(0x2u));
  /* 10277c3f call 0x10273c10 */
  push32(0x10277c44u); f_10273c10();
  /* 10277c44 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277c47 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277c4a jne 0x10277c4d */
  if (!C.zf) goto L_10277c4d;
  /* 10277c4c int3  */
  x86_unimpl("int3 @ 0x10277c4c");
L_10277c4d:;
  /* 10277c4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10277c4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10277c51 jne 0x10277c29 */
  if (!C.zf) goto L_10277c29;
  /* 10277c53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c56 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10277c5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c60 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277c63 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10277c66 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277c6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10277c6e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c71 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277c74 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10277c77 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10277c7a push ecx */
  push32((uint32_t)(ECX));
  /* 10277c7b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10277c7e push edx */
  push32((uint32_t)(EDX));
  /* 10277c7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c82 push eax */
  push32((uint32_t)(EAX));
  /* 10277c83 call 0x1027bae0 */
  push32(0x10277c88u); f_1027bae0();
  /* 10277c88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277c8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10277c8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c91 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10277c94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277c97 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277c9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10277c9d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ca0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277ca4 jl 0x10277cc8 */
  if ((C.sf!=C.of)) goto L_10277cc8;
  /* 10277ca6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ca9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10277cab mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10277cae xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10277cb0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10277cb6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10277cb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277cbc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10277cbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277cc1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277cc4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10277cc6 jmp 0x10277cd9 */
  goto L_10277cd9;
L_10277cc8:;
  /* 10277cc8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10277ccb push edx */
  push32((uint32_t)(EDX));
  /* 10277ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10277cce call 0x1027b860 */
  push32(0x10277cd3u); f_1027b860();
  /* 10277cd3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277cd6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10277cd9:;
  /* 10277cd9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10277cdc pop edi */
  EDI = (pop32());
  /* 10277cdd pop esi */
  ESI = (pop32());
  /* 10277cde pop ebx */
  EBX = (pop32());
  /* 10277cdf mov esp, ebp */
  ESP = (EBP);
  /* 10277ce1 pop ebp */
  EBP = (pop32());
  /* 10277ce2 ret  */
  ESPCHK(0x10277bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cf0 @ 0x10277cf0 (47 bytes, 17 insns) */
void f_10277cf0(void) {
  FTRACE(0x10277cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277cf0 push ecx */
  push32((uint32_t)(ECX));
  /* 10277cf1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277cf6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10277cfa jb 0x10277d10 */
  if (C.cf) goto L_10277d10;
L_10277cfc:;
  /* 10277cfc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277d02 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277d07 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10277d09 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d0e jae 0x10277cfc */
  if (!C.cf) goto L_10277cfc;
L_10277d10:;
  /* 10277d10 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277d12 mov eax, esp */
  EAX = (ESP);
  /* 10277d14 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10277d16 mov esp, ecx */
  ESP = (ECX);
  /* 10277d18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10277d1a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10277d1d push eax */
  push32((uint32_t)(EAX));
  /* 10277d1e ret  */
  ESPCHK(0x10277cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d20 @ 0x10277d20 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10277d20(void) {
  FTRACE(0x10277d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10277d21 mov ebp, esp */
  EBP = (ESP);
  /* 10277d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277d26 push esi */
  push32((uint32_t)(ESI));
  /* 10277d27 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d2b je 0x10277d33 */
  if (C.zf) goto L_10277d33;
  /* 10277d2d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d31 jne 0x10277d38 */
  if (!C.zf) goto L_10277d38;
L_10277d33:;
  /* 10277d33 jmp 0x10277f08 */
  goto L_10277f08;
L_10277d38:;
  /* 10277d38 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d3c je 0x10277d54 */
  if (C.zf) goto L_10277d54;
  /* 10277d3e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d42 je 0x10277d54 */
  if (C.zf) goto L_10277d54;
  /* 10277d44 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d48 je 0x10277d54 */
  if (C.zf) goto L_10277d54;
  /* 10277d4a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d4e jne 0x10277e31 */
  if (!C.zf) goto L_10277e31;
L_10277d54:;
  /* 10277d54 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277d56 call 0x10278550 */
  push32(0x10277d5bu); f_10278550();
  /* 10277d5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277d5e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d62 je 0x10277d6a */
  if (C.zf) goto L_10277d6a;
  /* 10277d64 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d68 jne 0x10277daf */
  if (!C.zf) goto L_10277daf;
L_10277d6a:;
  /* 10277d6a cmp dword ptr [0x102a071c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a071c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d71 jne 0x10277daf */
  if (!C.zf) goto L_10277daf;
  /* 10277d73 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277d75 push 0x10277f50 */
  push32((uint32_t)(0x10277f50u));
  /* 10277d7a call dword ptr [0x102a3380] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3380))), 0x10277d80u);
  /* 10277d80 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277d83 jne 0x10277d91 */
  if (!C.zf) goto L_10277d91;
  /* 10277d85 mov dword ptr [0x102a071c], 1 */
  w32((uint32_t)(0x102a071c), (0x1u));
  /* 10277d8f jmp 0x10277daf */
  goto L_10277daf;
L_10277d91:;
  /* 10277d91 call dword ptr [0x102a3338] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3338))), 0x10277d97u);
  /* 10277d97 mov esi, eax */
  ESI = (EAX);
  /* 10277d99 call 0x1027ca30 */
  push32(0x10277d9eu); f_1027ca30();
  /* 10277d9e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10277da0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277da2 call 0x102785f0 */
  push32(0x10277da7u); f_102785f0();
  /* 10277da7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277daa jmp 0x10277f08 */
  goto L_10277f08;
L_10277daf:;
  /* 10277daf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277db2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10277db5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10277db8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277dbb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10277dbe cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277dc2 ja 0x10277e22 */
  if ((!C.cf&&!C.zf)) goto L_10277e22;
  /* 10277dc4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10277dc7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10277dc9 mov dl, byte ptr [eax + 0x10277f2f] */
  DL = (r8((uint32_t)(EAX + 0x10277f2f)));
  /* 10277dcf jmp dword ptr [edx*4 + 0x10277f1b] */
  switch (EDX) {
    case 0: goto L_10277dd6;
    case 1: goto L_10277e10;
    case 2: goto L_10277dea;
    case 3: goto L_10277dfd;
    case 4: goto L_10277e22;
    default: x86_unimpl("switch@0x10277dcf out of table"); return;
  }
L_10277dd6:;
  /* 10277dd6 mov ecx, dword ptr [0x102a070c] */
  ECX = (r32((uint32_t)(0x102a070c)));
  /* 10277ddc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10277ddf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277de2 mov dword ptr [0x102a070c], edx */
  w32((uint32_t)(0x102a070c), (EDX));
  /* 10277de8 jmp 0x10277e22 */
  goto L_10277e22;
L_10277dea:;
  /* 10277dea mov eax, dword ptr [0x102a0710] */
  EAX = (r32((uint32_t)(0x102a0710)));
  /* 10277def mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10277df2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277df5 mov dword ptr [0x102a0710], ecx */
  w32((uint32_t)(0x102a0710), (ECX));
  /* 10277dfb jmp 0x10277e22 */
  goto L_10277e22;
L_10277dfd:;
  /* 10277dfd mov edx, dword ptr [0x102a0714] */
  EDX = (r32((uint32_t)(0x102a0714)));
  /* 10277e03 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10277e06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277e09 mov dword ptr [0x102a0714], eax */
  w32((uint32_t)(0x102a0714), (EAX));
  /* 10277e0e jmp 0x10277e22 */
  goto L_10277e22;
L_10277e10:;
  /* 10277e10 mov ecx, dword ptr [0x102a0718] */
  ECX = (r32((uint32_t)(0x102a0718)));
  /* 10277e16 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10277e19 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277e1c mov dword ptr [0x102a0718], edx */
  w32((uint32_t)(0x102a0718), (EDX));
L_10277e22:;
  /* 10277e22 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277e24 call 0x102785f0 */
  push32(0x10277e29u); f_102785f0();
  /* 10277e29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277e2c jmp 0x10277f03 */
  goto L_10277f03;
L_10277e31:;
  /* 10277e31 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277e35 je 0x10277e48 */
  if (C.zf) goto L_10277e48;
  /* 10277e37 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277e3b je 0x10277e48 */
  if (C.zf) goto L_10277e48;
  /* 10277e3d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277e41 je 0x10277e48 */
  if (C.zf) goto L_10277e48;
  /* 10277e43 jmp 0x10277f08 */
  goto L_10277f08;
L_10277e48:;
  /* 10277e48 call 0x10274590 */
  push32(0x10277e4du); f_10274590();
  /* 10277e4d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10277e50 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277e53 cmp dword ptr [eax + 0x50], 0x1029ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x1029ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277e5a jne 0x10277ea5 */
  if (!C.zf) goto L_10277ea5;
  /* 10277e5c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10277e61 push 0x1029beb0 */
  push32((uint32_t)(0x1029beb0u));
  /* 10277e66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10277e68 mov ecx, dword ptr [0x1029ec80] */
  ECX = (r32((uint32_t)(0x1029ec80)));
  /* 10277e6e push ecx */
  push32((uint32_t)(ECX));
  /* 10277e6f call 0x10274b50 */
  push32(0x10277e74u); f_10274b50();
  /* 10277e74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277e77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277e7a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10277e7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277e80 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277e84 je 0x10277ea3 */
  if (C.zf) goto L_10277ea3;
  /* 10277e86 mov ecx, dword ptr [0x1029ec80] */
  ECX = (r32((uint32_t)(0x1029ec80)));
  /* 10277e8c push ecx */
  push32((uint32_t)(ECX));
  /* 10277e8d push 0x1029ec00 */
  push32((uint32_t)(0x1029ec00u));
  /* 10277e92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277e95 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10277e98 push eax */
  push32((uint32_t)(EAX));
  /* 10277e99 call 0x1027b430 */
  push32(0x10277e9eu); f_1027b430();
  /* 10277e9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277ea1 jmp 0x10277ea5 */
  goto L_10277ea5;
L_10277ea3:;
  /* 10277ea3 jmp 0x10277f08 */
  goto L_10277f08;
L_10277ea5:;
  /* 10277ea5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277ea8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10277eab push edx */
  push32((uint32_t)(EDX));
  /* 10277eac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10277eaf push eax */
  push32((uint32_t)(EAX));
  /* 10277eb0 call 0x10278230 */
  push32(0x10277eb5u); f_10278230();
  /* 10277eb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277eb8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10277ebb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277ebf jne 0x10277ec3 */
  if (!C.zf) goto L_10277ec3;
  /* 10277ec1 jmp 0x10277f08 */
  goto L_10277f08;
L_10277ec3:;
  /* 10277ec3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277ec6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10277ec9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10277ecc:;
  /* 10277ecc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277ecf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10277ed2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277ed5 jne 0x10277f03 */
  if (!C.zf) goto L_10277f03;
  /* 10277ed7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277eda mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10277edd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10277ee0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277ee3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277ee6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10277ee9 mov edx, dword ptr [0x1029ec84] */
  EDX = (r32((uint32_t)(0x1029ec84)));
  /* 10277eef imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10277ef2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277ef5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10277ef8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10277efa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277efd jb 0x10277f01 */
  if (C.cf) goto L_10277f01;
  /* 10277eff jmp 0x10277f03 */
  goto L_10277f03;
L_10277f01:;
  /* 10277f01 jmp 0x10277ecc */
  goto L_10277ecc;
L_10277f03:;
  /* 10277f03 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10277f06 jmp 0x10277f16 */
  goto L_10277f16;
L_10277f08:;
  /* 10277f08 call 0x1027ca20 */
  push32(0x10277f0du); f_1027ca20();
  /* 10277f0d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10277f13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10277f16:;
  /* 10277f16 pop esi */
  ESI = (pop32());
  /* 10277f17 mov esp, ebp */
  ESP = (EBP);
  /* 10277f19 pop ebp */
  EBP = (pop32());
  /* 10277f1a ret  */
  ESPCHK(0x10277d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f50 @ 0x10277f50 (146 bytes, 45 insns) */
void f_10277f50(void) {
  FTRACE(0x10277f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10277f51 mov ebp, esp */
  EBP = (ESP);
  /* 10277f53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277f56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277f58 call 0x10278550 */
  push32(0x10277f5du); f_10278550();
  /* 10277f5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277f60 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277f64 jne 0x10277f7e */
  if (!C.zf) goto L_10277f7e;
  /* 10277f66 mov dword ptr [ebp - 8], 0x102a070c */
  w32((uint32_t)(EBP + -0x8), (0x102a070cu));
  /* 10277f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277f70 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10277f72 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10277f75 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10277f7c jmp 0x10277f94 */
  goto L_10277f94;
L_10277f7e:;
  /* 10277f7e mov dword ptr [ebp - 8], 0x102a0710 */
  w32((uint32_t)(EBP + -0x8), (0x102a0710u));
  /* 10277f85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277f88 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10277f8a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10277f8d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10277f94:;
  /* 10277f94 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277f98 jne 0x10277fa8 */
  if (!C.zf) goto L_10277fa8;
  /* 10277f9a push 1 */
  push32((uint32_t)(0x1u));
  /* 10277f9c call 0x102785f0 */
  push32(0x10277fa1u); f_102785f0();
  /* 10277fa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277fa4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10277fa6 jmp 0x10277fdc */
  goto L_10277fdc;
L_10277fa8:;
  /* 10277fa8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10277fac je 0x10277fcd */
  if (C.zf) goto L_10277fcd;
  /* 10277fae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10277fb1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10277fb7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10277fb9 call 0x102785f0 */
  push32(0x10277fbeu); f_102785f0();
  /* 10277fbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277fc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10277fc4 push edx */
  push32((uint32_t)(EDX));
  /* 10277fc5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10277fc8u);
  /* 10277fc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10277fcb jmp 0x10277fd7 */
  goto L_10277fd7;
L_10277fcd:;
  /* 10277fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10277fcf call 0x102785f0 */
  push32(0x10277fd4u); f_102785f0();
  /* 10277fd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10277fd7:;
  /* 10277fd7 mov eax, 1 */
  EAX = (0x1u);
L_10277fdc:;
  /* 10277fdc mov esp, ebp */
  ESP = (EBP);
  /* 10277fde pop ebp */
  EBP = (pop32());
  /* 10277fdf ret 4 */
  ESPCHK(0x10277f50u, _esp0);
  ESP += 8; return;
}

/* FUN_10007ff0 @ 0x10277ff0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10277ff0(void) {
  FTRACE(0x10277ff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10277ff0 push ebp */
  push32((uint32_t)(EBP));
  /* 10277ff1 mov ebp, esp */
  EBP = (ESP);
  /* 10277ff3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10277ff6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10277ffd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278000 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10278003 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10278006 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278009 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1027800c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278010 ja 0x102780be */
  if ((!C.cf&&!C.zf)) goto L_102780be;
  /* 10278016 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10278019 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027801b mov dl, byte ptr [eax + 0x10278212] */
  DL = (r8((uint32_t)(EAX + 0x10278212)));
  /* 10278021 jmp dword ptr [edx*4 + 0x102781fa] */
  switch (EDX) {
    case 0: goto L_10278028;
    case 1: goto L_10278093;
    case 2: goto L_10278079;
    case 3: goto L_10278045;
    case 4: goto L_1027805f;
    case 5: goto L_102780be;
    default: x86_unimpl("switch@0x10278021 out of table"); return;
  }
L_10278028:;
  /* 10278028 mov dword ptr [ebp - 0x18], 0x102a070c */
  w32((uint32_t)(EBP + -0x18), (0x102a070cu));
  /* 1027802f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10278032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10278034 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10278037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027803a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027803d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10278040 jmp 0x102780c6 */
  goto L_102780c6;
L_10278045:;
  /* 10278045 mov dword ptr [ebp - 0x18], 0x102a0710 */
  w32((uint32_t)(EBP + -0x18), (0x102a0710u));
  /* 1027804c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1027804f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10278051 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10278054 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278057 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027805a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1027805d jmp 0x102780c6 */
  goto L_102780c6;
L_1027805f:;
  /* 1027805f mov dword ptr [ebp - 0x18], 0x102a0714 */
  w32((uint32_t)(EBP + -0x18), (0x102a0714u));
  /* 10278066 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10278069 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1027806b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1027806e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278071 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278074 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10278077 jmp 0x102780c6 */
  goto L_102780c6;
L_10278079:;
  /* 10278079 mov dword ptr [ebp - 0x18], 0x102a0718 */
  w32((uint32_t)(EBP + -0x18), (0x102a0718u));
  /* 10278080 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10278083 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10278085 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10278088 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1027808b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027808e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10278091 jmp 0x102780c6 */
  goto L_102780c6;
L_10278093:;
  /* 10278093 call 0x10274590 */
  push32(0x10278098u); f_10274590();
  /* 10278098 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027809b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027809e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 102780a1 push edx */
  push32((uint32_t)(EDX));
  /* 102780a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102780a5 push eax */
  push32((uint32_t)(EAX));
  /* 102780a6 call 0x10278230 */
  push32(0x102780abu); f_10278230();
  /* 102780ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102780ae add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102780b1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 102780b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 102780b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102780b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 102780bc jmp 0x102780c6 */
  goto L_102780c6;
L_102780be:;
  /* 102780be or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 102780c1 jmp 0x102781f6 */
  goto L_102781f6;
L_102780c6:;
  /* 102780c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102780ca je 0x102780d6 */
  if (C.zf) goto L_102780d6;
  /* 102780cc push 1 */
  push32((uint32_t)(0x1u));
  /* 102780ce call 0x10278550 */
  push32(0x102780d3u); f_10278550();
  /* 102780d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102780d6:;
  /* 102780d6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102780da jne 0x102780f3 */
  if (!C.zf) goto L_102780f3;
  /* 102780dc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102780e0 je 0x102780ec */
  if (C.zf) goto L_102780ec;
  /* 102780e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 102780e4 call 0x102785f0 */
  push32(0x102780e9u); f_102785f0();
  /* 102780e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102780ec:;
  /* 102780ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102780ee jmp 0x102781f6 */
  goto L_102781f6;
L_102780f3:;
  /* 102780f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102780f7 jne 0x10278110 */
  if (!C.zf) goto L_10278110;
  /* 102780f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102780fd je 0x10278109 */
  if (C.zf) goto L_10278109;
  /* 102780ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10278101 call 0x102785f0 */
  push32(0x10278106u); f_102785f0();
  /* 10278106 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10278109:;
  /* 10278109 push 3 */
  push32((uint32_t)(0x3u));
  /* 1027810b call 0x10274310 */
  push32(0x10278110u); f_10274310();
L_10278110:;
  /* 10278110 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278114 je 0x10278122 */
  if (C.zf) goto L_10278122;
  /* 10278116 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027811a je 0x10278122 */
  if (C.zf) goto L_10278122;
  /* 1027811c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278120 jne 0x1027814e */
  if (!C.zf) goto L_1027814e;
L_10278122:;
  /* 10278122 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278125 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10278128 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1027812b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027812e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10278135 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278139 jne 0x1027814e */
  if (!C.zf) goto L_1027814e;
  /* 1027813b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027813e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10278141 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10278144 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278147 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1027814e:;
  /* 1027814e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278152 jne 0x10278190 */
  if (!C.zf) goto L_10278190;
  /* 10278154 mov eax, dword ptr [0x1029ec78] */
  EAX = (r32((uint32_t)(0x1029ec78)));
  /* 10278159 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1027815c jmp 0x10278167 */
  goto L_10278167;
L_1027815e:;
  /* 1027815e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278161 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278164 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10278167:;
  /* 10278167 mov edx, dword ptr [0x1029ec78] */
  EDX = (r32((uint32_t)(0x1029ec78)));
  /* 1027816d add edx, dword ptr [0x1029ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278173 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278176 jge 0x1027818e */
  if ((C.sf==C.of)) goto L_1027818e;
  /* 10278178 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027817b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027817e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278181 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10278184 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1027818c jmp 0x1027815e */
  goto L_1027815e;
L_1027818e:;
  /* 1027818e jmp 0x10278199 */
  goto L_10278199;
L_10278190:;
  /* 10278190 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10278193 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10278199:;
  /* 10278199 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027819d je 0x102781a9 */
  if (C.zf) goto L_102781a9;
  /* 1027819f push 1 */
  push32((uint32_t)(0x1u));
  /* 102781a1 call 0x102785f0 */
  push32(0x102781a6u); f_102785f0();
  /* 102781a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102781a9:;
  /* 102781a9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102781ad jne 0x102781c0 */
  if (!C.zf) goto L_102781c0;
  /* 102781af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102781b2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 102781b5 push edx */
  push32((uint32_t)(EDX));
  /* 102781b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 102781b8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x102781bbu);
  /* 102781bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102781be jmp 0x102781ca */
  goto L_102781ca;
L_102781c0:;
  /* 102781c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102781c3 push eax */
  push32((uint32_t)(EAX));
  /* 102781c4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x102781c7u);
  /* 102781c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102781ca:;
  /* 102781ca cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102781ce je 0x102781dc */
  if (C.zf) goto L_102781dc;
  /* 102781d0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102781d4 je 0x102781dc */
  if (C.zf) goto L_102781dc;
  /* 102781d6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102781da jne 0x102781f4 */
  if (!C.zf) goto L_102781f4;
L_102781dc:;
  /* 102781dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102781df mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 102781e2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 102781e5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102781e9 jne 0x102781f4 */
  if (!C.zf) goto L_102781f4;
  /* 102781eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102781ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102781f1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_102781f4:;
  /* 102781f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_102781f6:;
  /* 102781f6 mov esp, ebp */
  ESP = (EBP);
  /* 102781f8 pop ebp */
  EBP = (pop32());
  /* 102781f9 ret  */
  ESPCHK(0x10277ff0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008230 @ 0x10278230 (91 bytes, 35 insns) */
void f_10278230(void) {
  FTRACE(0x10278230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278230 push ebp */
  push32((uint32_t)(EBP));
  /* 10278231 mov ebp, esp */
  EBP = (ESP);
  /* 10278233 push ecx */
  push32((uint32_t)(ECX));
  /* 10278234 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1027823a:;
  /* 1027823a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027823d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10278240 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278243 je 0x10278263 */
  if (C.zf) goto L_10278263;
  /* 10278245 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278248 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027824b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027824e mov ecx, dword ptr [0x1029ec84] */
  ECX = (r32((uint32_t)(0x1029ec84)));
  /* 10278254 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10278257 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027825a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027825c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027825f jae 0x10278263 */
  if (!C.cf) goto L_10278263;
  /* 10278261 jmp 0x1027823a */
  goto L_1027823a;
L_10278263:;
  /* 10278263 mov eax, dword ptr [0x1029ec84] */
  EAX = (r32((uint32_t)(0x1029ec84)));
  /* 10278268 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027826b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027826e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278270 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278273 jae 0x10278285 */
  if (!C.cf) goto L_10278285;
  /* 10278275 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278278 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1027827b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027827e jne 0x10278285 */
  if (!C.zf) goto L_10278285;
  /* 10278280 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278283 jmp 0x10278287 */
  goto L_10278287;
L_10278285:;
  /* 10278285 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10278287:;
  /* 10278287 mov esp, ebp */
  ESP = (EBP);
  /* 10278289 pop ebp */
  EBP = (pop32());
  /* 1027828a ret  */
  ESPCHK(0x10278230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008290 @ 0x10278290 (13 bytes, 6 insns) */
void f_10278290(void) {
  FTRACE(0x10278290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278290 push ebp */
  push32((uint32_t)(EBP));
  /* 10278291 mov ebp, esp */
  EBP = (ESP);
  /* 10278293 call 0x10274590 */
  push32(0x10278298u); f_10274590();
  /* 10278298 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027829b pop ebp */
  EBP = (pop32());
  /* 1027829c ret  */
  ESPCHK(0x10278290u, _esp0);
  ESP += 4; return;
}

/* FUN_100082a0 @ 0x102782a0 (13 bytes, 6 insns) */
void f_102782a0(void) {
  FTRACE(0x102782a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102782a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102782a1 mov ebp, esp */
  EBP = (ESP);
  /* 102782a3 call 0x10274590 */
  push32(0x102782a8u); f_10274590();
  /* 102782a8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102782ab pop ebp */
  EBP = (pop32());
  /* 102782ac ret  */
  ESPCHK(0x102782a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b0 @ 0x102782b0 (187 bytes, 54 insns) */
void f_102782b0(void) {
  FTRACE(0x102782b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102782b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102782b1 mov ebp, esp */
  EBP = (ESP);
  /* 102782b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 102782b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102782bd cmp dword ptr [0x102a0720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102782c4 jne 0x10278323 */
  if (!C.zf) goto L_10278323;
  /* 102782c6 push 0x1029b2dc */
  push32((uint32_t)(0x1029b2dcu));
  /* 102782cb call dword ptr [0x102a3308] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3308))), 0x102782d1u);
  /* 102782d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 102782d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102782d8 je 0x102782f7 */
  if (C.zf) goto L_102782f7;
  /* 102782da push 0x1029bee0 */
  push32((uint32_t)(0x1029bee0u));
  /* 102782df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102782e2 push eax */
  push32((uint32_t)(EAX));
  /* 102782e3 call dword ptr [0x102a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3304))), 0x102782e9u);
  /* 102782e9 mov dword ptr [0x102a0720], eax */
  w32((uint32_t)(0x102a0720), (EAX));
  /* 102782ee cmp dword ptr [0x102a0720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102782f5 jne 0x102782fb */
  if (!C.zf) goto L_102782fb;
L_102782f7:;
  /* 102782f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102782f9 jmp 0x10278367 */
  goto L_10278367;
L_102782fb:;
  /* 102782fb push 0x1029bed0 */
  push32((uint32_t)(0x1029bed0u));
  /* 10278300 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278303 push ecx */
  push32((uint32_t)(ECX));
  /* 10278304 call dword ptr [0x102a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3304))), 0x1027830au);
  /* 1027830a mov dword ptr [0x102a0724], eax */
  w32((uint32_t)(0x102a0724), (EAX));
  /* 1027830f push 0x1029bebc */
  push32((uint32_t)(0x1029bebcu));
  /* 10278314 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278317 push edx */
  push32((uint32_t)(EDX));
  /* 10278318 call dword ptr [0x102a3304] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3304))), 0x1027831eu);
  /* 1027831e mov dword ptr [0x102a0728], eax */
  w32((uint32_t)(0x102a0728), (EAX));
L_10278323:;
  /* 10278323 cmp dword ptr [0x102a0724], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0724))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027832a je 0x10278335 */
  if (C.zf) goto L_10278335;
  /* 1027832c call dword ptr [0x102a0724] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0724))), 0x10278332u);
  /* 10278332 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10278335:;
  /* 10278335 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278339 je 0x10278351 */
  if (C.zf) goto L_10278351;
  /* 1027833b cmp dword ptr [0x102a0728], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0728))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278342 je 0x10278351 */
  if (C.zf) goto L_10278351;
  /* 10278344 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278347 push eax */
  push32((uint32_t)(EAX));
  /* 10278348 call dword ptr [0x102a0728] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0728))), 0x1027834eu);
  /* 1027834e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10278351:;
  /* 10278351 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10278354 push ecx */
  push32((uint32_t)(ECX));
  /* 10278355 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278358 push edx */
  push32((uint32_t)(EDX));
  /* 10278359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027835c push eax */
  push32((uint32_t)(EAX));
  /* 1027835d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278360 push ecx */
  push32((uint32_t)(ECX));
  /* 10278361 call dword ptr [0x102a0720] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a0720))), 0x10278367u);
L_10278367:;
  /* 10278367 mov esp, ebp */
  ESP = (EBP);
  /* 10278369 pop ebp */
  EBP = (pop32());
  /* 1027836a ret  */
  ESPCHK(0x102782b0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10278370 (254 bytes, 109 insns) */
void f_10278370(void) {
  FTRACE(0x10278370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278370 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10278374 push edi */
  push32((uint32_t)(EDI));
  /* 10278375 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10278377 je 0x102783f3 */
  if (C.zf) goto L_102783f3;
  /* 10278379 push esi */
  push32((uint32_t)(ESI));
  /* 1027837a push ebx */
  push32((uint32_t)(EBX));
  /* 1027837b mov ebx, ecx */
  EBX = (ECX);
  /* 1027837d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10278381 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10278387 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1027838b jne 0x10278394 */
  if (!C.zf) goto L_10278394;
  /* 1027838d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10278390 jne 0x10278401 */
  if (!C.zf) goto L_10278401;
  /* 10278392 jmp 0x102783b5 */
  goto L_102783b5;
L_10278394:;
  /* 10278394 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10278396 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10278397 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10278399 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1027839a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1027839b je 0x102783c2 */
  if (C.zf) goto L_102783c2;
  /* 1027839d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1027839f je 0x102783ca */
  if (C.zf) goto L_102783ca;
  /* 102783a1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 102783a7 jne 0x10278394 */
  if (!C.zf) goto L_10278394;
  /* 102783a9 mov ebx, ecx */
  EBX = (ECX);
  /* 102783ab shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102783ae jne 0x10278401 */
  if (!C.zf) goto L_10278401;
L_102783b0:;
  /* 102783b0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 102783b3 je 0x102783c2 */
  if (C.zf) goto L_102783c2;
L_102783b5:;
  /* 102783b5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 102783b7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 102783b8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102783ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102783bb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 102783bd je 0x102783ee */
  if (C.zf) goto L_102783ee;
  /* 102783bf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102783c0 jne 0x102783b5 */
  if (!C.zf) goto L_102783b5;
L_102783c2:;
  /* 102783c2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 102783c6 pop ebx */
  EBX = (pop32());
  /* 102783c7 pop esi */
  ESI = (pop32());
  /* 102783c8 pop edi */
  EDI = (pop32());
  /* 102783c9 ret  */
  ESPCHK(0x10278370u, _esp0);
  ESP += 4; return;
L_102783ca:;
  /* 102783ca test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102783d0 je 0x102783e4 */
  if (C.zf) goto L_102783e4;
L_102783d2:;
  /* 102783d2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102783d4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102783d5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102783d6 je 0x10278466 */
  if (C.zf) goto L_10278466;
  /* 102783dc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 102783e2 jne 0x102783d2 */
  if (!C.zf) goto L_102783d2;
L_102783e4:;
  /* 102783e4 mov ebx, ecx */
  EBX = (ECX);
  /* 102783e6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102783e9 jne 0x10278457 */
  if (!C.zf) goto L_10278457;
L_102783eb:;
  /* 102783eb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102783ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_102783ee:;
  /* 102783ee dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 102783ef jne 0x102783eb */
  if (!C.zf) goto L_102783eb;
  /* 102783f1 pop ebx */
  EBX = (pop32());
  /* 102783f2 pop esi */
  ESI = (pop32());
L_102783f3:;
  /* 102783f3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 102783f7 pop edi */
  EDI = (pop32());
  /* 102783f8 ret  */
  ESPCHK(0x10278370u, _esp0);
  ESP += 4; return;
L_102783f9:;
  /* 102783f9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 102783fb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 102783fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102783ff je 0x102783b0 */
  if (C.zf) goto L_102783b0;
L_10278401:;
  /* 10278401 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10278406 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10278408 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027840a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027840d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1027840f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10278411 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10278414 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10278419 je 0x102783f9 */
  if (C.zf) goto L_102783f9;
  /* 1027841b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1027841d je 0x1027844b */
  if (C.zf) goto L_1027844b;
  /* 1027841f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10278421 je 0x10278441 */
  if (C.zf) goto L_10278441;
  /* 10278423 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10278429 je 0x10278437 */
  if (C.zf) goto L_10278437;
  /* 1027842b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10278431 jne 0x102783f9 */
  if (!C.zf) goto L_102783f9;
  /* 10278433 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10278435 jmp 0x1027844f */
  goto L_1027844f;
L_10278437:;
  /* 10278437 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1027843d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1027843f jmp 0x1027844f */
  goto L_1027844f;
L_10278441:;
  /* 10278441 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10278447 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10278449 jmp 0x1027844f */
  goto L_1027844f;
L_1027844b:;
  /* 1027844b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1027844d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1027844f:;
  /* 1027844f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10278452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278454 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10278455 je 0x10278461 */
  if (C.zf) goto L_10278461;
L_10278457:;
  /* 10278457 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10278459:;
  /* 10278459 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1027845b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1027845e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1027845f jne 0x10278459 */
  if (!C.zf) goto L_10278459;
L_10278461:;
  /* 10278461 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10278464 jne 0x102783eb */
  if (!C.zf) goto L_102783eb;
L_10278466:;
  /* 10278466 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1027846a pop ebx */
  EBX = (pop32());
  /* 1027846b pop esi */
  ESI = (pop32());
  /* 1027846c pop edi */
  EDI = (pop32());
  /* 1027846d ret  */
  ESPCHK(0x10278370u, _esp0);
  ESP += 4; return;
}

/* FUN_10008470 @ 0x10278470 (55 bytes, 16 insns) */
void f_10278470(void) {
  FTRACE(0x10278470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278470 push ebp */
  push32((uint32_t)(EBP));
  /* 10278471 mov ebp, esp */
  EBP = (ESP);
  /* 10278473 mov eax, dword ptr [0x1029eb84] */
  EAX = (r32((uint32_t)(0x1029eb84)));
  /* 10278478 push eax */
  push32((uint32_t)(EAX));
  /* 10278479 call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x1027847fu);
  /* 1027847f mov ecx, dword ptr [0x1029eb74] */
  ECX = (r32((uint32_t)(0x1029eb74)));
  /* 10278485 push ecx */
  push32((uint32_t)(ECX));
  /* 10278486 call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x1027848cu);
  /* 1027848c mov edx, dword ptr [0x1029eb64] */
  EDX = (r32((uint32_t)(0x1029eb64)));
  /* 10278492 push edx */
  push32((uint32_t)(EDX));
  /* 10278493 call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x10278499u);
  /* 10278499 mov eax, dword ptr [0x1029eb44] */
  EAX = (r32((uint32_t)(0x1029eb44)));
  /* 1027849e push eax */
  push32((uint32_t)(EAX));
  /* 1027849f call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x102784a5u);
  /* 102784a5 pop ebp */
  EBP = (pop32());
  /* 102784a6 ret  */
  ESPCHK(0x10278470u, _esp0);
  ESP += 4; return;
}

/* FUN_100084b0 @ 0x102784b0 (159 bytes, 47 insns) */
void f_102784b0(void) {
  FTRACE(0x102784b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102784b0 push ebp */
  push32((uint32_t)(EBP));
  /* 102784b1 mov ebp, esp */
  EBP = (ESP);
  /* 102784b3 push ecx */
  push32((uint32_t)(ECX));
  /* 102784b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 102784bb jmp 0x102784c6 */
  goto L_102784c6;
L_102784bd:;
  /* 102784bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102784c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102784c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102784c6:;
  /* 102784c6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784ca jge 0x10278519 */
  if ((C.sf==C.of)) goto L_10278519;
  /* 102784cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102784cf cmp dword ptr [ecx*4 + 0x1029eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1029eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784d7 je 0x10278517 */
  if (C.zf) goto L_10278517;
  /* 102784d9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784dd je 0x10278517 */
  if (C.zf) goto L_10278517;
  /* 102784df cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784e3 je 0x10278517 */
  if (C.zf) goto L_10278517;
  /* 102784e5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784e9 je 0x10278517 */
  if (C.zf) goto L_10278517;
  /* 102784eb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102784ef je 0x10278517 */
  if (C.zf) goto L_10278517;
  /* 102784f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102784f4 mov eax, dword ptr [edx*4 + 0x1029eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1029eb40)));
  /* 102784fb push eax */
  push32((uint32_t)(EAX));
  /* 102784fc call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x10278502u);
  /* 10278502 push 2 */
  push32((uint32_t)(0x2u));
  /* 10278504 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278507 mov edx, dword ptr [ecx*4 + 0x1029eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1029eb40)));
  /* 1027850e push edx */
  push32((uint32_t)(EDX));
  /* 1027850f call 0x102755e0 */
  push32(0x10278514u); f_102755e0();
  /* 10278514 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10278517:;
  /* 10278517 jmp 0x102784bd */
  goto L_102784bd;
L_10278519:;
  /* 10278519 mov eax, dword ptr [0x1029eb64] */
  EAX = (r32((uint32_t)(0x1029eb64)));
  /* 1027851e push eax */
  push32((uint32_t)(EAX));
  /* 1027851f call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x10278525u);
  /* 10278525 mov ecx, dword ptr [0x1029eb74] */
  ECX = (r32((uint32_t)(0x1029eb74)));
  /* 1027852b push ecx */
  push32((uint32_t)(ECX));
  /* 1027852c call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x10278532u);
  /* 10278532 mov edx, dword ptr [0x1029eb84] */
  EDX = (r32((uint32_t)(0x1029eb84)));
  /* 10278538 push edx */
  push32((uint32_t)(EDX));
  /* 10278539 call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x1027853fu);
  /* 1027853f mov eax, dword ptr [0x1029eb44] */
  EAX = (r32((uint32_t)(0x1029eb44)));
  /* 10278544 push eax */
  push32((uint32_t)(EAX));
  /* 10278545 call dword ptr [0x102a334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a334c))), 0x1027854bu);
  /* 1027854b mov esp, ebp */
  ESP = (EBP);
  /* 1027854d pop ebp */
  EBP = (pop32());
  /* 1027854e ret  */
  ESPCHK(0x102784b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008550 @ 0x10278550 (151 bytes, 46 insns) */
void f_10278550(void) {
  FTRACE(0x10278550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278550 push ebp */
  push32((uint32_t)(EBP));
  /* 10278551 mov ebp, esp */
  EBP = (ESP);
  /* 10278553 push ecx */
  push32((uint32_t)(ECX));
  /* 10278554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278557 cmp dword ptr [eax*4 + 0x1029eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1029eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027855f jne 0x102785d2 */
  if (!C.zf) goto L_102785d2;
  /* 10278561 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10278566 push 0x1029beec */
  push32((uint32_t)(0x1029beecu));
  /* 1027856b push 2 */
  push32((uint32_t)(0x2u));
  /* 1027856d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1027856f call 0x10274b50 */
  push32(0x10278574u); f_10274b50();
  /* 10278574 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027857a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027857e jne 0x1027858a */
  if (!C.zf) goto L_1027858a;
  /* 10278580 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10278582 call 0x10273ac0 */
  push32(0x10278587u); f_10273ac0();
  /* 10278587 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1027858a:;
  /* 1027858a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1027858c call 0x10278550 */
  push32(0x10278591u); f_10278550();
  /* 10278591 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278594 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278597 cmp dword ptr [ecx*4 + 0x1029eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1029eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027859f jne 0x102785ba */
  if (!C.zf) goto L_102785ba;
  /* 102785a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102785a4 push edx */
  push32((uint32_t)(EDX));
  /* 102785a5 call dword ptr [0x102a3384] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3384))), 0x102785abu);
  /* 102785ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102785ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102785b1 mov dword ptr [eax*4 + 0x1029eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x1029eb40), (ECX));
  /* 102785b8 jmp 0x102785c8 */
  goto L_102785c8;
L_102785ba:;
  /* 102785ba push 2 */
  push32((uint32_t)(0x2u));
  /* 102785bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 102785bf push edx */
  push32((uint32_t)(EDX));
  /* 102785c0 call 0x102755e0 */
  push32(0x102785c5u); f_102755e0();
  /* 102785c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102785c8:;
  /* 102785c8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 102785ca call 0x102785f0 */
  push32(0x102785cfu); f_102785f0();
  /* 102785cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102785d2:;
  /* 102785d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102785d5 mov ecx, dword ptr [eax*4 + 0x1029eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029eb40)));
  /* 102785dc push ecx */
  push32((uint32_t)(ECX));
  /* 102785dd call dword ptr [0x102a3388] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3388))), 0x102785e3u);
  /* 102785e3 mov esp, ebp */
  ESP = (EBP);
  /* 102785e5 pop ebp */
  EBP = (pop32());
  /* 102785e6 ret  */
  ESPCHK(0x10278550u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x102785f0 (22 bytes, 8 insns) */
void f_102785f0(void) {
  FTRACE(0x102785f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102785f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102785f1 mov ebp, esp */
  EBP = (ESP);
  /* 102785f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102785f6 mov ecx, dword ptr [eax*4 + 0x1029eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1029eb40)));
  /* 102785fd push ecx */
  push32((uint32_t)(ECX));
  /* 102785fe call dword ptr [0x102a338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a338c))), 0x10278604u);
  /* 10278604 pop ebp */
  EBP = (pop32());
  /* 10278605 ret  */
  ESPCHK(0x102785f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008610 @ 0x10278610 (26 bytes, 10 insns) */
void f_10278610(void) {
  FTRACE(0x10278610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278610 push ebp */
  push32((uint32_t)(EBP));
  /* 10278611 mov ebp, esp */
  EBP = (ESP);
  /* 10278613 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278616 push eax */
  push32((uint32_t)(EAX));
  /* 10278617 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278619 call dword ptr [0x102a3390] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3390))), 0x1027861fu);
  /* 1027861f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10278624 call dword ptr [0x102a3314] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3314))), 0x1027862au);
  /* 1027862a pop ebp */
  EBP = (pop32());
  /* 1027862b ret  */
  ESPCHK(0x10278610u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10278630 (446 bytes, 130 insns) */
void f_10278630(void) {
  FTRACE(0x10278630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278630 push ebp */
  push32((uint32_t)(EBP));
  /* 10278631 mov ebp, esp */
  EBP = (ESP);
  /* 10278633 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278636 call 0x10274590 */
  push32(0x1027863bu); f_10274590();
  /* 1027863b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1027863e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278641 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10278644 push ecx */
  push32((uint32_t)(ECX));
  /* 10278645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278648 push edx */
  push32((uint32_t)(EDX));
  /* 10278649 call 0x102787f0 */
  push32(0x1027864eu); f_102787f0();
  /* 1027864e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278651 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10278654 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278658 je 0x10278663 */
  if (C.zf) goto L_10278663;
  /* 1027865a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027865d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278661 jne 0x10278672 */
  if (!C.zf) goto L_10278672;
L_10278663:;
  /* 10278663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278666 push ecx */
  push32((uint32_t)(ECX));
  /* 10278667 call dword ptr [0x102a333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a333c))), 0x1027866du);
  /* 1027866d jmp 0x102787ea */
  goto L_102787ea;
L_10278672:;
  /* 10278672 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278675 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278679 jne 0x1027868f */
  if (!C.zf) goto L_1027868f;
  /* 1027867b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027867e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10278685 mov eax, 1 */
  EAX = (0x1u);
  /* 1027868a jmp 0x102787ea */
  goto L_102787ea;
L_1027868f:;
  /* 1027868f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278692 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278696 jne 0x102786a0 */
  if (!C.zf) goto L_102786a0;
  /* 10278698 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1027869b jmp 0x102787ea */
  goto L_102787ea;
L_102786a0:;
  /* 102786a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102786a3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 102786a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102786a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102786ac mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 102786af mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 102786b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102786b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 102786b8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 102786bb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102786be cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102786c2 jne 0x102787c7 */
  if (!C.zf) goto L_102787c7;
  /* 102786c8 mov eax, dword ptr [0x1029ec78] */
  EAX = (r32((uint32_t)(0x1029ec78)));
  /* 102786cd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 102786d0 jmp 0x102786db */
  goto L_102786db;
L_102786d2:;
  /* 102786d2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 102786d5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 102786d8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_102786db:;
  /* 102786db mov edx, dword ptr [0x1029ec78] */
  EDX = (r32((uint32_t)(0x1029ec78)));
  /* 102786e1 add edx, dword ptr [0x1029ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1029ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102786e7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102786ea jge 0x10278702 */
  if ((C.sf==C.of)) goto L_10278702;
  /* 102786ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 102786ef imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 102786f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102786f5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 102786f8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10278700 jmp 0x102786d2 */
  goto L_102786d2;
L_10278702:;
  /* 10278702 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278705 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10278708 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1027870b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027870e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278714 jne 0x10278725 */
  if (!C.zf) goto L_10278725;
  /* 10278716 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278719 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10278720 jmp 0x102787ad */
  goto L_102787ad;
L_10278725:;
  /* 10278725 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278728 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027872e jne 0x1027873c */
  if (!C.zf) goto L_1027873c;
  /* 10278730 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278733 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1027873a jmp 0x102787ad */
  goto L_102787ad;
L_1027873c:;
  /* 1027873c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027873f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278745 jne 0x10278753 */
  if (!C.zf) goto L_10278753;
  /* 10278747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027874a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10278751 jmp 0x102787ad */
  goto L_102787ad;
L_10278753:;
  /* 10278753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278756 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027875c jne 0x1027876a */
  if (!C.zf) goto L_1027876a;
  /* 1027875e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278761 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10278768 jmp 0x102787ad */
  goto L_102787ad;
L_1027876a:;
  /* 1027876a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027876d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278773 jne 0x10278781 */
  if (!C.zf) goto L_10278781;
  /* 10278775 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278778 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1027877f jmp 0x102787ad */
  goto L_102787ad;
L_10278781:;
  /* 10278781 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278784 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027878a jne 0x10278798 */
  if (!C.zf) goto L_10278798;
  /* 1027878c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1027878f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10278796 jmp 0x102787ad */
  goto L_102787ad;
L_10278798:;
  /* 10278798 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1027879b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102787a1 jne 0x102787ad */
  if (!C.zf) goto L_102787ad;
  /* 102787a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102787a6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_102787ad:;
  /* 102787ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 102787b0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 102787b3 push edx */
  push32((uint32_t)(EDX));
  /* 102787b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 102787b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x102787b9u);
  /* 102787b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102787bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 102787bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 102787c2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 102787c5 jmp 0x102787de */
  goto L_102787de;
L_102787c7:;
  /* 102787c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 102787ca mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 102787d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 102787d4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 102787d7 push ecx */
  push32((uint32_t)(ECX));
  /* 102787d8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x102787dbu);
  /* 102787db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_102787de:;
  /* 102787de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 102787e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 102787e4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 102787e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_102787ea:;
  /* 102787ea mov esp, ebp */
  ESP = (EBP);
  /* 102787ec pop ebp */
  EBP = (pop32());
  /* 102787ed ret  */
  ESPCHK(0x10278630u, _esp0);
  ESP += 4; return;
}

/* FUN_100087f0 @ 0x102787f0 (89 bytes, 35 insns) */
void f_102787f0(void) {
  FTRACE(0x102787f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102787f0 push ebp */
  push32((uint32_t)(EBP));
  /* 102787f1 mov ebp, esp */
  EBP = (ESP);
  /* 102787f3 push ecx */
  push32((uint32_t)(ECX));
  /* 102787f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 102787f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_102787fa:;
  /* 102787fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 102787fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 102787ff cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278802 je 0x10278822 */
  if (C.zf) goto L_10278822;
  /* 10278804 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278807 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027880a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027880d mov ecx, dword ptr [0x1029ec84] */
  ECX = (r32((uint32_t)(0x1029ec84)));
  /* 10278813 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10278816 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278819 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027881b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027881e jae 0x10278822 */
  if (!C.cf) goto L_10278822;
  /* 10278820 jmp 0x102787fa */
  goto L_102787fa;
L_10278822:;
  /* 10278822 mov eax, dword ptr [0x1029ec84] */
  EAX = (r32((uint32_t)(0x1029ec84)));
  /* 10278827 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1027882a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1027882d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1027882f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278832 jae 0x1027883e */
  if (!C.cf) goto L_1027883e;
  /* 10278834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278837 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10278839 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1027883c je 0x10278842 */
  if (C.zf) goto L_10278842;
L_1027883e:;
  /* 1027883e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278840 jmp 0x10278845 */
  goto L_10278845;
L_10278842:;
  /* 10278842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10278845:;
  /* 10278845 mov esp, ebp */
  ESP = (EBP);
  /* 10278847 pop ebp */
  EBP = (pop32());
  /* 10278848 ret  */
  ESPCHK(0x102787f0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10278850 (48 bytes, 17 insns) */
void f_10278850(void) {
  FTRACE(0x10278850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278850 push ebp */
  push32((uint32_t)(EBP));
  /* 10278851 mov ebp, esp */
  EBP = (ESP);
  /* 10278853 push ecx */
  push32((uint32_t)(ECX));
  /* 10278854 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278856 call 0x10278550 */
  push32(0x1027885bu); f_10278550();
  /* 1027885b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1027885e mov eax, dword ptr [0x102a0794] */
  EAX = (r32((uint32_t)(0x102a0794)));
  /* 10278863 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10278866 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278869 mov dword ptr [0x102a0794], ecx */
  w32((uint32_t)(0x102a0794), (ECX));
  /* 1027886f push 9 */
  push32((uint32_t)(0x9u));
  /* 10278871 call 0x102785f0 */
  push32(0x10278876u); f_102785f0();
  /* 10278876 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027887c mov esp, ebp */
  ESP = (EBP);
  /* 1027887e pop ebp */
  EBP = (pop32());
  /* 1027887f ret  */
  ESPCHK(0x10278850u, _esp0);
  ESP += 4; return;
}

/* FUN_10008880 @ 0x10278880 (10 bytes, 5 insns) */
void f_10278880(void) {
  FTRACE(0x10278880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278880 push ebp */
  push32((uint32_t)(EBP));
  /* 10278881 mov ebp, esp */
  EBP = (ESP);
  /* 10278883 mov eax, dword ptr [0x102a0794] */
  EAX = (r32((uint32_t)(0x102a0794)));
  /* 10278888 pop ebp */
  EBP = (pop32());
  /* 10278889 ret  */
  ESPCHK(0x10278880u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10278890 (45 bytes, 19 insns) */
void f_10278890(void) {
  FTRACE(0x10278890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278890 push ebp */
  push32((uint32_t)(EBP));
  /* 10278891 mov ebp, esp */
  EBP = (ESP);
  /* 10278893 push ecx */
  push32((uint32_t)(ECX));
  /* 10278894 mov eax, dword ptr [0x102a0794] */
  EAX = (r32((uint32_t)(0x102a0794)));
  /* 10278899 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1027889c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102788a0 je 0x102788b0 */
  if (C.zf) goto L_102788b0;
  /* 102788a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102788a5 push ecx */
  push32((uint32_t)(ECX));
  /* 102788a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x102788a9u);
  /* 102788a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102788ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 102788ae jne 0x102788b4 */
  if (!C.zf) goto L_102788b4;
L_102788b0:;
  /* 102788b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102788b2 jmp 0x102788b9 */
  goto L_102788b9;
L_102788b4:;
  /* 102788b4 mov eax, 1 */
  EAX = (0x1u);
L_102788b9:;
  /* 102788b9 mov esp, ebp */
  ESP = (EBP);
  /* 102788bb pop ebp */
  EBP = (pop32());
  /* 102788bc ret  */
  ESPCHK(0x10278890u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x102788c0 (88 bytes, 40 insns) */
void f_102788c0(void) {
  FTRACE(0x102788c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102788c0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 102788c4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 102788c8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 102788ca je 0x10278913 */
  if (C.zf) goto L_10278913;
  /* 102788cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 102788ce mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 102788d2 push edi */
  push32((uint32_t)(EDI));
  /* 102788d3 mov edi, ecx */
  EDI = (ECX);
  /* 102788d5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102788d8 jb 0x10278907 */
  if (C.cf) goto L_10278907;
  /* 102788da neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 102788dc and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 102788df je 0x102788e9 */
  if (C.zf) goto L_102788e9;
  /* 102788e1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_102788e3:;
  /* 102788e3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 102788e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 102788e6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 102788e7 jne 0x102788e3 */
  if (!C.zf) goto L_102788e3;
L_102788e9:;
  /* 102788e9 mov ecx, eax */
  ECX = (EAX);
  /* 102788eb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 102788ee add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102788f0 mov ecx, eax */
  ECX = (EAX);
  /* 102788f2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 102788f5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 102788f7 mov ecx, edx */
  ECX = (EDX);
  /* 102788f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 102788fc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 102788ff je 0x10278907 */
  if (C.zf) goto L_10278907;
  /* 10278901 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10278903 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10278905 je 0x1027890d */
  if (C.zf) goto L_1027890d;
L_10278907:;
  /* 10278907 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10278909 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1027890a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1027890b jne 0x10278907 */
  if (!C.zf) goto L_10278907;
L_1027890d:;
  /* 1027890d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10278911 pop edi */
  EDI = (pop32());
  /* 10278912 ret  */
  ESPCHK(0x102788c0u, _esp0);
  ESP += 4; return;
L_10278913:;
  /* 10278913 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10278917 ret  */
  ESPCHK(0x102788c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x10278920 (23 bytes, 10 insns) */
void f_10278920(void) {
  FTRACE(0x10278920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278920 push ebp */
  push32((uint32_t)(EBP));
  /* 10278921 mov ebp, esp */
  EBP = (ESP);
  /* 10278923 mov eax, dword ptr [0x102a0790] */
  EAX = (r32((uint32_t)(0x102a0790)));
  /* 10278928 push eax */
  push32((uint32_t)(EAX));
  /* 10278929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1027892c push ecx */
  push32((uint32_t)(ECX));
  /* 1027892d call 0x10278940 */
  push32(0x10278932u); f_10278940();
  /* 10278932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278935 pop ebp */
  EBP = (pop32());
  /* 10278936 ret  */
  ESPCHK(0x10278920u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10278940 (87 bytes, 34 insns) */
void f_10278940(void) {
  FTRACE(0x10278940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278940 push ebp */
  push32((uint32_t)(EBP));
  /* 10278941 mov ebp, esp */
  EBP = (ESP);
  /* 10278943 push ecx */
  push32((uint32_t)(ECX));
  /* 10278944 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278948 jbe 0x1027894e */
  if ((C.cf||C.zf)) goto L_1027894e;
  /* 1027894a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027894c jmp 0x10278993 */
  goto L_10278993;
L_1027894e:;
  /* 1027894e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278952 ja 0x10278965 */
  if ((!C.cf&&!C.zf)) goto L_10278965;
  /* 10278954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278957 push eax */
  push32((uint32_t)(EAX));
  /* 10278958 call 0x102789a0 */
  push32(0x1027895du); f_102789a0();
  /* 1027895d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278960 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10278963 jmp 0x1027896c */
  goto L_1027896c;
L_10278965:;
  /* 10278965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1027896c:;
  /* 1027896c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278970 jne 0x10278978 */
  if (!C.zf) goto L_10278978;
  /* 10278972 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278976 jne 0x1027897d */
  if (!C.zf) goto L_1027897d;
L_10278978:;
  /* 10278978 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1027897b jmp 0x10278993 */
  goto L_10278993;
L_1027897d:;
  /* 1027897d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278980 push ecx */
  push32((uint32_t)(ECX));
  /* 10278981 call 0x10278890 */
  push32(0x10278986u); f_10278890();
  /* 10278986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278989 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1027898b jne 0x10278991 */
  if (!C.zf) goto L_10278991;
  /* 1027898d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1027898f jmp 0x10278993 */
  goto L_10278993;
L_10278991:;
  /* 10278991 jmp 0x1027894e */
  goto L_1027894e;
L_10278993:;
  /* 10278993 mov esp, ebp */
  ESP = (EBP);
  /* 10278995 pop ebp */
  EBP = (pop32());
  /* 10278996 ret  */
  ESPCHK(0x10278940u, _esp0);
  ESP += 4; return;
}

/* FUN_100089a0 @ 0x102789a0 (109 bytes, 37 insns) */
void f_102789a0(void) {
  FTRACE(0x102789a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 102789a0 push ebp */
  push32((uint32_t)(EBP));
  /* 102789a1 mov ebp, esp */
  EBP = (ESP);
  /* 102789a3 push ecx */
  push32((uint32_t)(ECX));
  /* 102789a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102789a7 cmp eax, dword ptr [0x1029ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102789ad ja 0x102789dd */
  if ((!C.cf&&!C.zf)) goto L_102789dd;
  /* 102789af push 9 */
  push32((uint32_t)(0x9u));
  /* 102789b1 call 0x10278550 */
  push32(0x102789b6u); f_10278550();
  /* 102789b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102789b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 102789bc push ecx */
  push32((uint32_t)(ECX));
  /* 102789bd call 0x102794e0 */
  push32(0x102789c2u); f_102794e0();
  /* 102789c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102789c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 102789c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 102789ca call 0x102785f0 */
  push32(0x102789cfu); f_102785f0();
  /* 102789cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 102789d2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102789d6 je 0x102789dd */
  if (C.zf) goto L_102789dd;
  /* 102789d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 102789db jmp 0x10278a09 */
  goto L_10278a09;
L_102789dd:;
  /* 102789dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 102789e1 jne 0x102789ea */
  if (!C.zf) goto L_102789ea;
  /* 102789e3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_102789ea:;
  /* 102789ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 102789ed add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 102789f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 102789f3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 102789f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 102789f9 push eax */
  push32((uint32_t)(EAX));
  /* 102789fa push 0 */
  push32((uint32_t)(0x0u));
  /* 102789fc mov ecx, dword ptr [0x102a1f4c] */
  ECX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278a02 push ecx */
  push32((uint32_t)(ECX));
  /* 10278a03 call dword ptr [0x102a32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e4))), 0x10278a09u);
L_10278a09:;
  /* 10278a09 mov esp, ebp */
  ESP = (EBP);
  /* 10278a0b pop ebp */
  EBP = (pop32());
  /* 10278a0c ret  */
  ESPCHK(0x102789a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a10 @ 0x10278a10 (10 bytes, 5 insns) */
void f_10278a10(void) {
  FTRACE(0x10278a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10278a11 mov ebp, esp */
  EBP = (ESP);
  /* 10278a13 mov eax, 1 */
  EAX = (0x1u);
  /* 10278a18 pop ebp */
  EBP = (pop32());
  /* 10278a19 ret  */
  ESPCHK(0x10278a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a20 @ 0x10278a20 (173 bytes, 59 insns) */
void f_10278a20(void) {
  FTRACE(0x10278a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10278a21 mov ebp, esp */
  EBP = (ESP);
  /* 10278a23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278a26 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278a2a jbe 0x10278a33 */
  if ((C.cf||C.zf)) goto L_10278a33;
  /* 10278a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278a2e jmp 0x10278ac9 */
  goto L_10278ac9;
L_10278a33:;
  /* 10278a33 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278a35 call 0x10278550 */
  push32(0x10278a3au); f_10278550();
  /* 10278a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278a3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278a40 push eax */
  push32((uint32_t)(EAX));
  /* 10278a41 call 0x10278e50 */
  push32(0x10278a46u); f_10278e50();
  /* 10278a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278a49 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10278a4c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278a50 je 0x10278a91 */
  if (C.zf) goto L_10278a91;
  /* 10278a52 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10278a59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278a5c cmp ecx, dword ptr [0x1029ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1029ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278a62 ja 0x10278a82 */
  if ((!C.cf&&!C.zf)) goto L_10278a82;
  /* 10278a64 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278a67 push edx */
  push32((uint32_t)(EDX));
  /* 10278a68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278a6b push eax */
  push32((uint32_t)(EAX));
  /* 10278a6c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278a6f push ecx */
  push32((uint32_t)(ECX));
  /* 10278a70 call 0x10279d20 */
  push32(0x10278a75u); f_10279d20();
  /* 10278a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278a7a je 0x10278a82 */
  if (C.zf) goto L_10278a82;
  /* 10278a7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278a7f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10278a82:;
  /* 10278a82 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278a84 call 0x102785f0 */
  push32(0x10278a89u); f_102785f0();
  /* 10278a89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278a8c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278a8f jmp 0x10278ac9 */
  goto L_10278ac9;
L_10278a91:;
  /* 10278a91 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278a93 call 0x102785f0 */
  push32(0x10278a98u); f_102785f0();
  /* 10278a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278a9b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278a9f jne 0x10278aa8 */
  if (!C.zf) goto L_10278aa8;
  /* 10278aa1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10278aa8:;
  /* 10278aa8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278aab add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278aae and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10278ab0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10278ab3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278ab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10278ab7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278aba push edx */
  push32((uint32_t)(EDX));
  /* 10278abb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10278abd mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278ac2 push eax */
  push32((uint32_t)(EAX));
  /* 10278ac3 call dword ptr [0x102a3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3340))), 0x10278ac9u);
L_10278ac9:;
  /* 10278ac9 mov esp, ebp */
  ESP = (EBP);
  /* 10278acb pop ebp */
  EBP = (pop32());
  /* 10278acc ret  */
  ESPCHK(0x10278a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ad0 @ 0x10278ad0 (490 bytes, 165 insns) */
void f_10278ad0(void) {
  FTRACE(0x10278ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10278ad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278ad6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278ada jne 0x10278aed */
  if (!C.zf) goto L_10278aed;
  /* 10278adc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278adf push eax */
  push32((uint32_t)(EAX));
  /* 10278ae0 call 0x10278920 */
  push32(0x10278ae5u); f_10278920();
  /* 10278ae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278ae8 jmp 0x10278cb6 */
  goto L_10278cb6;
L_10278aed:;
  /* 10278aed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278af1 jne 0x10278b06 */
  if (!C.zf) goto L_10278b06;
  /* 10278af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278af6 push ecx */
  push32((uint32_t)(ECX));
  /* 10278af7 call 0x10278cc0 */
  push32(0x10278afcu); f_10278cc0();
  /* 10278afc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278aff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278b01 jmp 0x10278cb6 */
  goto L_10278cb6;
L_10278b06:;
  /* 10278b06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10278b0d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278b11 ja 0x10278c89 */
  if ((!C.cf&&!C.zf)) goto L_10278c89;
  /* 10278b17 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278b19 call 0x10278550 */
  push32(0x10278b1eu); f_10278550();
  /* 10278b1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278b21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278b24 push edx */
  push32((uint32_t)(EDX));
  /* 10278b25 call 0x10278e50 */
  push32(0x10278b2au); f_10278e50();
  /* 10278b2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278b2d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10278b30 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278b34 je 0x10278c4c */
  if (C.zf) goto L_10278c4c;
  /* 10278b3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278b3d cmp eax, dword ptr [0x1029ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1029ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278b43 ja 0x10278bc0 */
  if ((!C.cf&&!C.zf)) goto L_10278bc0;
  /* 10278b45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278b48 push ecx */
  push32((uint32_t)(ECX));
  /* 10278b49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278b4c push edx */
  push32((uint32_t)(EDX));
  /* 10278b4d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278b50 push eax */
  push32((uint32_t)(EAX));
  /* 10278b51 call 0x10279d20 */
  push32(0x10278b56u); f_10279d20();
  /* 10278b56 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278b59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278b5b je 0x10278b65 */
  if (C.zf) goto L_10278b65;
  /* 10278b5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278b60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10278b63 jmp 0x10278bc0 */
  goto L_10278bc0;
L_10278b65:;
  /* 10278b65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278b68 push edx */
  push32((uint32_t)(EDX));
  /* 10278b69 call 0x102794e0 */
  push32(0x10278b6eu); f_102794e0();
  /* 10278b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278b71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10278b74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278b78 je 0x10278bc0 */
  if (C.zf) goto L_10278bc0;
  /* 10278b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278b7d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10278b80 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278b83 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10278b86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278b89 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278b8c jae 0x10278b96 */
  if (!C.cf) goto L_10278b96;
  /* 10278b8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278b91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10278b94 jmp 0x10278b9c */
  goto L_10278b9c;
L_10278b96:;
  /* 10278b96 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278b99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10278b9c:;
  /* 10278b9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10278b9f push edx */
  push32((uint32_t)(EDX));
  /* 10278ba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278ba3 push eax */
  push32((uint32_t)(EAX));
  /* 10278ba4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 10278ba8 call 0x1027b430 */
  push32(0x10278badu); f_1027b430();
  /* 10278bad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278bb0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278bb3 push edx */
  push32((uint32_t)(EDX));
  /* 10278bb4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278bb7 push eax */
  push32((uint32_t)(EAX));
  /* 10278bb8 call 0x10278f10 */
  push32(0x10278bbdu); f_10278f10();
  /* 10278bbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10278bc0:;
  /* 10278bc0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278bc4 jne 0x10278c40 */
  if (!C.zf) goto L_10278c40;
  /* 10278bc6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278bca jne 0x10278bd3 */
  if (!C.zf) goto L_10278bd3;
  /* 10278bcc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10278bd3:;
  /* 10278bd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278bd6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278bd9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10278bdc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10278bdf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278be2 push edx */
  push32((uint32_t)(EDX));
  /* 10278be3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278be5 mov eax, dword ptr [0x102a1f4c] */
  EAX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278bea push eax */
  push32((uint32_t)(EAX));
  /* 10278beb call dword ptr [0x102a32e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a32e4))), 0x10278bf1u);
  /* 10278bf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10278bf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278bf8 je 0x10278c40 */
  if (C.zf) goto L_10278c40;
  /* 10278bfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278bfd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10278c00 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10278c03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10278c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278c09 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278c0c jae 0x10278c16 */
  if (!C.cf) goto L_10278c16;
  /* 10278c0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278c11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10278c14 jmp 0x10278c1c */
  goto L_10278c1c;
L_10278c16:;
  /* 10278c16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278c19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10278c1c:;
  /* 10278c1c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10278c1f push eax */
  push32((uint32_t)(EAX));
  /* 10278c20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10278c24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278c27 push edx */
  push32((uint32_t)(EDX));
  /* 10278c28 call 0x1027b430 */
  push32(0x10278c2du); f_1027b430();
  /* 10278c2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278c33 push eax */
  push32((uint32_t)(EAX));
  /* 10278c34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10278c37 push ecx */
  push32((uint32_t)(ECX));
  /* 10278c38 call 0x10278f10 */
  push32(0x10278c3du); f_10278f10();
  /* 10278c3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10278c40:;
  /* 10278c40 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278c42 call 0x102785f0 */
  push32(0x10278c47u); f_102785f0();
  /* 10278c47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278c4a jmp 0x10278c89 */
  goto L_10278c89;
L_10278c4c:;
  /* 10278c4c push 9 */
  push32((uint32_t)(0x9u));
  /* 10278c4e call 0x102785f0 */
  push32(0x10278c53u); f_102785f0();
  /* 10278c53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278c56 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278c5a jne 0x10278c63 */
  if (!C.zf) goto L_10278c63;
  /* 10278c5c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10278c63:;
  /* 10278c63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278c66 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10278c69 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10278c6c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10278c6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278c72 push eax */
  push32((uint32_t)(EAX));
  /* 10278c73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278c76 push ecx */
  push32((uint32_t)(ECX));
  /* 10278c77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278c79 mov edx, dword ptr [0x102a1f4c] */
  EDX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278c7f push edx */
  push32((uint32_t)(EDX));
  /* 10278c80 call dword ptr [0x102a3340] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3340))), 0x10278c86u);
  /* 10278c86 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10278c89:;
  /* 10278c89 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278c8d jne 0x10278c98 */
  if (!C.zf) goto L_10278c98;
  /* 10278c8f cmp dword ptr [0x102a0790], 0 */
  { uint32_t _a=(r32((uint32_t)(0x102a0790))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278c96 jne 0x10278c9d */
  if (!C.zf) goto L_10278c9d;
L_10278c98:;
  /* 10278c98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10278c9b jmp 0x10278cb6 */
  goto L_10278cb6;
L_10278c9d:;
  /* 10278c9d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10278ca0 push eax */
  push32((uint32_t)(EAX));
  /* 10278ca1 call 0x10278890 */
  push32(0x10278ca6u); f_10278890();
  /* 10278ca6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278ca9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10278cab jne 0x10278cb1 */
  if (!C.zf) goto L_10278cb1;
  /* 10278cad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10278caf jmp 0x10278cb6 */
  goto L_10278cb6;
L_10278cb1:;
  /* 10278cb1 jmp 0x10278b06 */
  goto L_10278b06;
L_10278cb6:;
  /* 10278cb6 mov esp, ebp */
  ESP = (EBP);
  /* 10278cb8 pop ebp */
  EBP = (pop32());
  /* 10278cb9 ret  */
  ESPCHK(0x10278ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cc0 @ 0x10278cc0 (104 bytes, 38 insns) */
void f_10278cc0(void) {
  FTRACE(0x10278cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10278cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10278cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10278cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10278cc4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278cc8 jne 0x10278ccc */
  if (!C.zf) goto L_10278ccc;
  /* 10278cca jmp 0x10278d24 */
  goto L_10278d24;
L_10278ccc:;
  /* 10278ccc push 9 */
  push32((uint32_t)(0x9u));
  /* 10278cce call 0x10278550 */
  push32(0x10278cd3u); f_10278550();
  /* 10278cd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278cd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278cd9 push eax */
  push32((uint32_t)(EAX));
  /* 10278cda call 0x10278e50 */
  push32(0x10278cdfu); f_10278e50();
  /* 10278cdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10278ce5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10278ce9 je 0x10278d07 */
  if (C.zf) goto L_10278d07;
  /* 10278ceb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278cee push ecx */
  push32((uint32_t)(ECX));
  /* 10278cef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10278cf2 push edx */
  push32((uint32_t)(EDX));
  /* 10278cf3 call 0x10278f10 */
  push32(0x10278cf8u); f_10278f10();
  /* 10278cf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278cfb push 9 */
  push32((uint32_t)(0x9u));
  /* 10278cfd call 0x102785f0 */
  push32(0x10278d02u); f_102785f0();
  /* 10278d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278d05 jmp 0x10278d24 */
  goto L_10278d24;
L_10278d07:;
  /* 10278d07 push 9 */
  push32((uint32_t)(0x9u));
  /* 10278d09 call 0x102785f0 */
  push32(0x10278d0eu); f_102785f0();
  /* 10278d0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10278d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10278d14 push eax */
  push32((uint32_t)(EAX));
  /* 10278d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10278d17 mov ecx, dword ptr [0x102a1f4c] */
  ECX = (r32((uint32_t)(0x102a1f4c)));
  /* 10278d1d push ecx */
  push32((uint32_t)(ECX));
  /* 10278d1e call dword ptr [0x102a3378] */
  call_ind((uint32_t)(r32((uint32_t)(0x102a3378))), 0x10278d24u);
L_10278d24:;
  /* 10278d24 mov esp, ebp */
  ESP = (EBP);
  /* 10278d26 pop ebp */
  EBP = (pop32());
  /* 10278d27 ret  */
  ESPCHK(0x10278cc0u, _esp0);
  ESP += 4; return;
}

