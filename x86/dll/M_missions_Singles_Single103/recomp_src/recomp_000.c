#include "recomp.h"

/* thunk_FUN_100066e0 @ 0x10f91005 (5 bytes, 1 insns) */
void f_10f91005(void) {
  FTRACE(0x10f91005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f91005 jmp 0x10f966e0 */
  f_10f966e0(); return;
}

/* OnInit @ 0x10f9100a (5 bytes, 1 insns) */
void f_10f9100a(void) {
  FTRACE(0x10f9100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9100a jmp 0x10f91090 */
  f_10f91090(); return;
}

/* thunk_FUN_10001030 @ 0x10f9100f (5 bytes, 1 insns) */
void f_10f9100f(void) {
  FTRACE(0x10f9100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9100f jmp 0x10f91030 */
  f_10f91030(); return;
}

/* ProcessScenary @ 0x10f91014 (5 bytes, 1 insns) */
void f_10f91014(void) {
  FTRACE(0x10f91014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f91014 jmp 0x10f91f90 */
  f_10f91f90(); return;
}

/* FUN_10001030 @ 0x10f91030 (67 bytes, 26 insns) */
void f_10f91030(void) {
  FTRACE(0x10f91030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f91030 push ebp */
  push32((uint32_t)(EBP));
  /* 10f91031 mov ebp, esp */
  EBP = (ESP);
  /* 10f91033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f91036 push ebx */
  push32((uint32_t)(EBX));
  /* 10f91037 push esi */
  push32((uint32_t)(ESI));
  /* 10f91038 push edi */
  push32((uint32_t)(EDI));
  /* 10f91039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10f9103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10f91041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f91046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f91048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91052 je 0x10f91056 */
  if (C.zf) goto L_10f91056;
  /* 10f91054 jmp 0x10f9105b */
  goto L_10f9105b;
L_10f91056:;
  /* 10f91056 call 0x10f9100a */
  push32(0x10f9105bu); f_10f9100a();
L_10f9105b:;
  /* 10f9105b mov eax, 1 */
  EAX = (0x1u);
  /* 10f91060 pop edi */
  EDI = (pop32());
  /* 10f91061 pop esi */
  ESI = (pop32());
  /* 10f91062 pop ebx */
  EBX = (pop32());
  /* 10f91063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91068 call 0x10f96800 */
  push32(0x10f9106du); f_10f96800();
  /* 10f9106d mov esp, ebp */
  ESP = (EBP);
  /* 10f9106f pop ebp */
  EBP = (pop32());
  /* 10f91070 ret 0xc */
  ESPCHK(0x10f91030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10f91090 (3069 bytes, 821 insns) */
void f_10f91090(void) {
  FTRACE(0x10f91090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f91090 push ebp */
  push32((uint32_t)(EBP));
  /* 10f91091 mov ebp, esp */
  EBP = (ESP);
  /* 10f91093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f91096 push ebx */
  push32((uint32_t)(EBX));
  /* 10f91097 push esi */
  push32((uint32_t)(ESI));
  /* 10f91098 push edi */
  push32((uint32_t)(EDI));
  /* 10f91099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10f9109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10f910a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f910a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f910a8 mov esi, esp */
  ESI = (ESP);
  /* 10f910aa push 0x10fbe130 */
  push32((uint32_t)(0x10fbe130u));
  /* 10f910af push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f910b4 call dword ptr [0x10fc6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6474))), 0x10f910bau);
  /* 10f910ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f910bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f910bf call 0x10f96800 */
  push32(0x10f910c4u); f_10f96800();
  /* 10f910c4 mov esi, esp */
  ESI = (ESP);
  /* 10f910c6 push 0x10fbe12c */
  push32((uint32_t)(0x10fbe12cu));
  /* 10f910cb push 0x10fc33f0 */
  push32((uint32_t)(0x10fc33f0u));
  /* 10f910d0 call dword ptr [0x10fc6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6474))), 0x10f910d6u);
  /* 10f910d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f910d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f910db call 0x10f96800 */
  push32(0x10f910e0u); f_10f96800();
  /* 10f910e0 mov esi, esp */
  ESI = (ESP);
  /* 10f910e2 push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f910e7 push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f910ec call dword ptr [0x10fc6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6474))), 0x10f910f2u);
  /* 10f910f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f910f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f910f7 call 0x10f96800 */
  push32(0x10f910fcu); f_10f96800();
  /* 10f910fc mov esi, esp */
  ESI = (ESP);
  /* 10f910fe push 0x10fbe124 */
  push32((uint32_t)(0x10fbe124u));
  /* 10f91103 push 0x10fc33f8 */
  push32((uint32_t)(0x10fc33f8u));
  /* 10f91108 call dword ptr [0x10fc6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6474))), 0x10f9110eu);
  /* 10f9110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91113 call 0x10f96800 */
  push32(0x10f91118u); f_10f96800();
  /* 10f91118 mov esi, esp */
  ESI = (ESP);
  /* 10f9111a push 0x10fbe120 */
  push32((uint32_t)(0x10fbe120u));
  /* 10f9111f push 0x10fc3400 */
  push32((uint32_t)(0x10fc3400u));
  /* 10f91124 call dword ptr [0x10fc6474] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6474))), 0x10f9112au);
  /* 10f9112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9112f call 0x10f96800 */
  push32(0x10f91134u); f_10f96800();
  /* 10f91134 mov esi, esp */
  ESI = (ESP);
  /* 10f91136 push 0x10fbe11c */
  push32((uint32_t)(0x10fbe11cu));
  /* 10f9113b push 0x10fc3428 */
  push32((uint32_t)(0x10fc3428u));
  /* 10f91140 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91146u);
  /* 10f91146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9114b call 0x10f96800 */
  push32(0x10f91150u); f_10f96800();
  /* 10f91150 mov esi, esp */
  ESI = (ESP);
  /* 10f91152 push 0x10fbe118 */
  push32((uint32_t)(0x10fbe118u));
  /* 10f91157 push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f9115c call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91162u);
  /* 10f91162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91167 call 0x10f96800 */
  push32(0x10f9116cu); f_10f96800();
  /* 10f9116c mov esi, esp */
  ESI = (ESP);
  /* 10f9116e push 0x10fbe114 */
  push32((uint32_t)(0x10fbe114u));
  /* 10f91173 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f91178 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9117eu);
  /* 10f9117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91183 call 0x10f96800 */
  push32(0x10f91188u); f_10f96800();
  /* 10f91188 mov esi, esp */
  ESI = (ESP);
  /* 10f9118a push 0x10fbe110 */
  push32((uint32_t)(0x10fbe110u));
  /* 10f9118f push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f91194 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9119au);
  /* 10f9119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9119f call 0x10f96800 */
  push32(0x10f911a4u); f_10f96800();
  /* 10f911a4 mov esi, esp */
  ESI = (ESP);
  /* 10f911a6 push 0x10fbe10c */
  push32((uint32_t)(0x10fbe10cu));
  /* 10f911ab push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f911b0 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f911b6u);
  /* 10f911b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f911b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f911bb call 0x10f96800 */
  push32(0x10f911c0u); f_10f96800();
  /* 10f911c0 mov esi, esp */
  ESI = (ESP);
  /* 10f911c2 push 0x10fbe108 */
  push32((uint32_t)(0x10fbe108u));
  /* 10f911c7 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f911cc call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f911d2u);
  /* 10f911d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f911d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f911d7 call 0x10f96800 */
  push32(0x10f911dcu); f_10f96800();
  /* 10f911dc mov esi, esp */
  ESI = (ESP);
  /* 10f911de push 0x10fbe104 */
  push32((uint32_t)(0x10fbe104u));
  /* 10f911e3 push 0x10fc3458 */
  push32((uint32_t)(0x10fc3458u));
  /* 10f911e8 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f911eeu);
  /* 10f911ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f911f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f911f3 call 0x10f96800 */
  push32(0x10f911f8u); f_10f96800();
  /* 10f911f8 mov esi, esp */
  ESI = (ESP);
  /* 10f911fa push 0x10fbe100 */
  push32((uint32_t)(0x10fbe100u));
  /* 10f911ff push 0x10fc3460 */
  push32((uint32_t)(0x10fc3460u));
  /* 10f91204 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9120au);
  /* 10f9120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9120f call 0x10f96800 */
  push32(0x10f91214u); f_10f96800();
  /* 10f91214 mov esi, esp */
  ESI = (ESP);
  /* 10f91216 push 0x10fbe0fc */
  push32((uint32_t)(0x10fbe0fcu));
  /* 10f9121b push 0x10fc3468 */
  push32((uint32_t)(0x10fc3468u));
  /* 10f91220 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91226u);
  /* 10f91226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9122b call 0x10f96800 */
  push32(0x10f91230u); f_10f96800();
  /* 10f91230 mov esi, esp */
  ESI = (ESP);
  /* 10f91232 push 0x10fbe0f8 */
  push32((uint32_t)(0x10fbe0f8u));
  /* 10f91237 push 0x10fc3570 */
  push32((uint32_t)(0x10fc3570u));
  /* 10f9123c call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91242u);
  /* 10f91242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91247 call 0x10f96800 */
  push32(0x10f9124cu); f_10f96800();
  /* 10f9124c mov esi, esp */
  ESI = (ESP);
  /* 10f9124e push 0x10fbe0f4 */
  push32((uint32_t)(0x10fbe0f4u));
  /* 10f91253 push 0x10fc3578 */
  push32((uint32_t)(0x10fc3578u));
  /* 10f91258 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9125eu);
  /* 10f9125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91263 call 0x10f96800 */
  push32(0x10f91268u); f_10f96800();
  /* 10f91268 mov esi, esp */
  ESI = (ESP);
  /* 10f9126a push 0x10fbe0f0 */
  push32((uint32_t)(0x10fbe0f0u));
  /* 10f9126f push 0x10fc3580 */
  push32((uint32_t)(0x10fc3580u));
  /* 10f91274 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9127au);
  /* 10f9127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9127f call 0x10f96800 */
  push32(0x10f91284u); f_10f96800();
  /* 10f91284 mov esi, esp */
  ESI = (ESP);
  /* 10f91286 push 0x10fbe0ec */
  push32((uint32_t)(0x10fbe0ecu));
  /* 10f9128b push 0x10fc3588 */
  push32((uint32_t)(0x10fc3588u));
  /* 10f91290 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91296u);
  /* 10f91296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9129b call 0x10f96800 */
  push32(0x10f912a0u); f_10f96800();
  /* 10f912a0 mov esi, esp */
  ESI = (ESP);
  /* 10f912a2 push 0x10fbe0e8 */
  push32((uint32_t)(0x10fbe0e8u));
  /* 10f912a7 push 0x10fc3598 */
  push32((uint32_t)(0x10fc3598u));
  /* 10f912ac call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f912b2u);
  /* 10f912b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f912b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f912b7 call 0x10f96800 */
  push32(0x10f912bcu); f_10f96800();
  /* 10f912bc mov esi, esp */
  ESI = (ESP);
  /* 10f912be push 0x10fbe0e4 */
  push32((uint32_t)(0x10fbe0e4u));
  /* 10f912c3 push 0x10fc35a8 */
  push32((uint32_t)(0x10fc35a8u));
  /* 10f912c8 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f912ceu);
  /* 10f912ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f912d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f912d3 call 0x10f96800 */
  push32(0x10f912d8u); f_10f96800();
  /* 10f912d8 mov esi, esp */
  ESI = (ESP);
  /* 10f912da push 0x10fbe0e0 */
  push32((uint32_t)(0x10fbe0e0u));
  /* 10f912df push 0x10fc35b8 */
  push32((uint32_t)(0x10fc35b8u));
  /* 10f912e4 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f912eau);
  /* 10f912ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f912ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f912ef call 0x10f96800 */
  push32(0x10f912f4u); f_10f96800();
  /* 10f912f4 mov esi, esp */
  ESI = (ESP);
  /* 10f912f6 push 0x10fbe0dc */
  push32((uint32_t)(0x10fbe0dcu));
  /* 10f912fb push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f91300 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91306u);
  /* 10f91306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9130b call 0x10f96800 */
  push32(0x10f91310u); f_10f96800();
  /* 10f91310 mov esi, esp */
  ESI = (ESP);
  /* 10f91312 push 0x10fbe0d8 */
  push32((uint32_t)(0x10fbe0d8u));
  /* 10f91317 push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f9131c call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91322u);
  /* 10f91322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91327 call 0x10f96800 */
  push32(0x10f9132cu); f_10f96800();
  /* 10f9132c mov esi, esp */
  ESI = (ESP);
  /* 10f9132e push 0x10fbe0d4 */
  push32((uint32_t)(0x10fbe0d4u));
  /* 10f91333 push 0x10fc35f0 */
  push32((uint32_t)(0x10fc35f0u));
  /* 10f91338 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9133eu);
  /* 10f9133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91343 call 0x10f96800 */
  push32(0x10f91348u); f_10f96800();
  /* 10f91348 mov esi, esp */
  ESI = (ESP);
  /* 10f9134a push 0x10fbe0d0 */
  push32((uint32_t)(0x10fbe0d0u));
  /* 10f9134f push 0x10fc3590 */
  push32((uint32_t)(0x10fc3590u));
  /* 10f91354 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9135au);
  /* 10f9135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9135f call 0x10f96800 */
  push32(0x10f91364u); f_10f96800();
  /* 10f91364 mov esi, esp */
  ESI = (ESP);
  /* 10f91366 push 0x10fbe0cc */
  push32((uint32_t)(0x10fbe0ccu));
  /* 10f9136b push 0x10fc35a0 */
  push32((uint32_t)(0x10fc35a0u));
  /* 10f91370 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91376u);
  /* 10f91376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9137b call 0x10f96800 */
  push32(0x10f91380u); f_10f96800();
  /* 10f91380 mov esi, esp */
  ESI = (ESP);
  /* 10f91382 push 0x10fbe0c8 */
  push32((uint32_t)(0x10fbe0c8u));
  /* 10f91387 push 0x10fc35b0 */
  push32((uint32_t)(0x10fc35b0u));
  /* 10f9138c call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91392u);
  /* 10f91392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91397 call 0x10f96800 */
  push32(0x10f9139cu); f_10f96800();
  /* 10f9139c mov esi, esp */
  ESI = (ESP);
  /* 10f9139e push 0x10fbe0c4 */
  push32((uint32_t)(0x10fbe0c4u));
  /* 10f913a3 push 0x10fc35c0 */
  push32((uint32_t)(0x10fc35c0u));
  /* 10f913a8 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f913aeu);
  /* 10f913ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f913b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f913b3 call 0x10f96800 */
  push32(0x10f913b8u); f_10f96800();
  /* 10f913b8 mov esi, esp */
  ESI = (ESP);
  /* 10f913ba push 0x10fbe0c0 */
  push32((uint32_t)(0x10fbe0c0u));
  /* 10f913bf push 0x10fc35d0 */
  push32((uint32_t)(0x10fc35d0u));
  /* 10f913c4 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f913cau);
  /* 10f913ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f913cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f913cf call 0x10f96800 */
  push32(0x10f913d4u); f_10f96800();
  /* 10f913d4 mov esi, esp */
  ESI = (ESP);
  /* 10f913d6 push 0x10fbe0bc */
  push32((uint32_t)(0x10fbe0bcu));
  /* 10f913db push 0x10fc35e8 */
  push32((uint32_t)(0x10fc35e8u));
  /* 10f913e0 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f913e6u);
  /* 10f913e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f913e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f913eb call 0x10f96800 */
  push32(0x10f913f0u); f_10f96800();
  /* 10f913f0 mov esi, esp */
  ESI = (ESP);
  /* 10f913f2 push 0x10fbe0b8 */
  push32((uint32_t)(0x10fbe0b8u));
  /* 10f913f7 push 0x10fc3600 */
  push32((uint32_t)(0x10fc3600u));
  /* 10f913fc call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91402u);
  /* 10f91402 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91405 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91407 call 0x10f96800 */
  push32(0x10f9140cu); f_10f96800();
  /* 10f9140c mov esi, esp */
  ESI = (ESP);
  /* 10f9140e push 0x10fbe0b4 */
  push32((uint32_t)(0x10fbe0b4u));
  /* 10f91413 push 0x10fc3610 */
  push32((uint32_t)(0x10fc3610u));
  /* 10f91418 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9141eu);
  /* 10f9141e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91421 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91423 call 0x10f96800 */
  push32(0x10f91428u); f_10f96800();
  /* 10f91428 mov esi, esp */
  ESI = (ESP);
  /* 10f9142a push 0x10fbe0b0 */
  push32((uint32_t)(0x10fbe0b0u));
  /* 10f9142f push 0x10fc3620 */
  push32((uint32_t)(0x10fc3620u));
  /* 10f91434 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9143au);
  /* 10f9143a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9143d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9143f call 0x10f96800 */
  push32(0x10f91444u); f_10f96800();
  /* 10f91444 mov esi, esp */
  ESI = (ESP);
  /* 10f91446 push 0x10fbe0ac */
  push32((uint32_t)(0x10fbe0acu));
  /* 10f9144b push 0x10fc3630 */
  push32((uint32_t)(0x10fc3630u));
  /* 10f91450 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91456u);
  /* 10f91456 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91459 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9145b call 0x10f96800 */
  push32(0x10f91460u); f_10f96800();
  /* 10f91460 mov esi, esp */
  ESI = (ESP);
  /* 10f91462 push 0x10fbe0a8 */
  push32((uint32_t)(0x10fbe0a8u));
  /* 10f91467 push 0x10fc35e0 */
  push32((uint32_t)(0x10fc35e0u));
  /* 10f9146c call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f91472u);
  /* 10f91472 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91475 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91477 call 0x10f96800 */
  push32(0x10f9147cu); f_10f96800();
  /* 10f9147c mov esi, esp */
  ESI = (ESP);
  /* 10f9147e push 0x10fbe0a4 */
  push32((uint32_t)(0x10fbe0a4u));
  /* 10f91483 push 0x10fc35f8 */
  push32((uint32_t)(0x10fc35f8u));
  /* 10f91488 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f9148eu);
  /* 10f9148e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91491 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91493 call 0x10f96800 */
  push32(0x10f91498u); f_10f96800();
  /* 10f91498 mov esi, esp */
  ESI = (ESP);
  /* 10f9149a push 0x10fbe0a0 */
  push32((uint32_t)(0x10fbe0a0u));
  /* 10f9149f push 0x10fc3608 */
  push32((uint32_t)(0x10fc3608u));
  /* 10f914a4 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f914aau);
  /* 10f914aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f914ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f914af call 0x10f96800 */
  push32(0x10f914b4u); f_10f96800();
  /* 10f914b4 mov esi, esp */
  ESI = (ESP);
  /* 10f914b6 push 0x10fbe09c */
  push32((uint32_t)(0x10fbe09cu));
  /* 10f914bb push 0x10fc3618 */
  push32((uint32_t)(0x10fc3618u));
  /* 10f914c0 call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f914c6u);
  /* 10f914c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f914c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f914cb call 0x10f96800 */
  push32(0x10f914d0u); f_10f96800();
  /* 10f914d0 mov esi, esp */
  ESI = (ESP);
  /* 10f914d2 push 0x10fbe098 */
  push32((uint32_t)(0x10fbe098u));
  /* 10f914d7 push 0x10fc3628 */
  push32((uint32_t)(0x10fc3628u));
  /* 10f914dc call dword ptr [0x10fc646c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc646c))), 0x10f914e2u);
  /* 10f914e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f914e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f914e7 call 0x10f96800 */
  push32(0x10f914ecu); f_10f96800();
  /* 10f914ec mov esi, esp */
  ESI = (ESP);
  /* 10f914ee push 0x10fbe088 */
  push32((uint32_t)(0x10fbe088u));
  /* 10f914f3 push 0x10fc3550 */
  push32((uint32_t)(0x10fc3550u));
  /* 10f914f8 call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f914feu);
  /* 10f914fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91501 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91503 call 0x10f96800 */
  push32(0x10f91508u); f_10f96800();
  /* 10f91508 mov esi, esp */
  ESI = (ESP);
  /* 10f9150a push 0x10fbe078 */
  push32((uint32_t)(0x10fbe078u));
  /* 10f9150f push 0x10fc3638 */
  push32((uint32_t)(0x10fc3638u));
  /* 10f91514 call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f9151au);
  /* 10f9151a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9151d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9151f call 0x10f96800 */
  push32(0x10f91524u); f_10f96800();
  /* 10f91524 mov esi, esp */
  ESI = (ESP);
  /* 10f91526 push 0x10fbe068 */
  push32((uint32_t)(0x10fbe068u));
  /* 10f9152b push 0x10fc3558 */
  push32((uint32_t)(0x10fc3558u));
  /* 10f91530 call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f91536u);
  /* 10f91536 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91539 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9153b call 0x10f96800 */
  push32(0x10f91540u); f_10f96800();
  /* 10f91540 mov esi, esp */
  ESI = (ESP);
  /* 10f91542 push 0x10fbe058 */
  push32((uint32_t)(0x10fbe058u));
  /* 10f91547 push 0x10fc3420 */
  push32((uint32_t)(0x10fc3420u));
  /* 10f9154c call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f91552u);
  /* 10f91552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91557 call 0x10f96800 */
  push32(0x10f9155cu); f_10f96800();
  /* 10f9155c mov esi, esp */
  ESI = (ESP);
  /* 10f9155e push 0x10fbe048 */
  push32((uint32_t)(0x10fbe048u));
  /* 10f91563 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f91568 call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f9156eu);
  /* 10f9156e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91571 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91573 call 0x10f96800 */
  push32(0x10f91578u); f_10f96800();
  /* 10f91578 mov esi, esp */
  ESI = (ESP);
  /* 10f9157a push 0x10fbe038 */
  push32((uint32_t)(0x10fbe038u));
  /* 10f9157f push 0x10fc3410 */
  push32((uint32_t)(0x10fc3410u));
  /* 10f91584 call dword ptr [0x10fc647c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc647c))), 0x10f9158au);
  /* 10f9158a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9158d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9158f call 0x10f96800 */
  push32(0x10f91594u); f_10f96800();
  /* 10f91594 mov esi, esp */
  ESI = (ESP);
  /* 10f91596 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91598 push 0x10fc3470 */
  push32((uint32_t)(0x10fc3470u));
  /* 10f9159d call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f915a3u);
  /* 10f915a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f915a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f915a8 call 0x10f96800 */
  push32(0x10f915adu); f_10f96800();
  /* 10f915ad mov esi, esp */
  ESI = (ESP);
  /* 10f915af push 4 */
  push32((uint32_t)(0x4u));
  /* 10f915b1 push 0x10fc3474 */
  push32((uint32_t)(0x10fc3474u));
  /* 10f915b6 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f915bcu);
  /* 10f915bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f915bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f915c1 call 0x10f96800 */
  push32(0x10f915c6u); f_10f96800();
  /* 10f915c6 mov esi, esp */
  ESI = (ESP);
  /* 10f915c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f915ca push 0x10fc3478 */
  push32((uint32_t)(0x10fc3478u));
  /* 10f915cf call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f915d5u);
  /* 10f915d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f915d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f915da call 0x10f96800 */
  push32(0x10f915dfu); f_10f96800();
  /* 10f915df mov esi, esp */
  ESI = (ESP);
  /* 10f915e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f915e3 push 0x10fc347c */
  push32((uint32_t)(0x10fc347cu));
  /* 10f915e8 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f915eeu);
  /* 10f915ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f915f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f915f3 call 0x10f96800 */
  push32(0x10f915f8u); f_10f96800();
  /* 10f915f8 mov esi, esp */
  ESI = (ESP);
  /* 10f915fa push 4 */
  push32((uint32_t)(0x4u));
  /* 10f915fc push 0x10fc3480 */
  push32((uint32_t)(0x10fc3480u));
  /* 10f91601 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91607u);
  /* 10f91607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9160a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9160c call 0x10f96800 */
  push32(0x10f91611u); f_10f96800();
  /* 10f91611 mov esi, esp */
  ESI = (ESP);
  /* 10f91613 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91615 push 0x10fc3484 */
  push32((uint32_t)(0x10fc3484u));
  /* 10f9161a call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91620u);
  /* 10f91620 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91623 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91625 call 0x10f96800 */
  push32(0x10f9162au); f_10f96800();
  /* 10f9162a mov esi, esp */
  ESI = (ESP);
  /* 10f9162c push 4 */
  push32((uint32_t)(0x4u));
  /* 10f9162e push 0x10fc3488 */
  push32((uint32_t)(0x10fc3488u));
  /* 10f91633 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91639u);
  /* 10f91639 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9163c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9163e call 0x10f96800 */
  push32(0x10f91643u); f_10f96800();
  /* 10f91643 mov esi, esp */
  ESI = (ESP);
  /* 10f91645 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91647 push 0x10fc348c */
  push32((uint32_t)(0x10fc348cu));
  /* 10f9164c call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91652u);
  /* 10f91652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91657 call 0x10f96800 */
  push32(0x10f9165cu); f_10f96800();
  /* 10f9165c mov esi, esp */
  ESI = (ESP);
  /* 10f9165e push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91660 push 0x10fc3490 */
  push32((uint32_t)(0x10fc3490u));
  /* 10f91665 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9166bu);
  /* 10f9166b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9166e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91670 call 0x10f96800 */
  push32(0x10f91675u); f_10f96800();
  /* 10f91675 mov esi, esp */
  ESI = (ESP);
  /* 10f91677 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91679 push 0x10fc3640 */
  push32((uint32_t)(0x10fc3640u));
  /* 10f9167e call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91684u);
  /* 10f91684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91689 call 0x10f96800 */
  push32(0x10f9168eu); f_10f96800();
  /* 10f9168e mov esi, esp */
  ESI = (ESP);
  /* 10f91690 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91692 push 0x10fc3644 */
  push32((uint32_t)(0x10fc3644u));
  /* 10f91697 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9169du);
  /* 10f9169d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f916a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f916a2 call 0x10f96800 */
  push32(0x10f916a7u); f_10f96800();
  /* 10f916a7 mov esi, esp */
  ESI = (ESP);
  /* 10f916a9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f916ab push 0x10fc3648 */
  push32((uint32_t)(0x10fc3648u));
  /* 10f916b0 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f916b6u);
  /* 10f916b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f916b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f916bb call 0x10f96800 */
  push32(0x10f916c0u); f_10f96800();
  /* 10f916c0 mov esi, esp */
  ESI = (ESP);
  /* 10f916c2 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f916c4 push 0x10fc364c */
  push32((uint32_t)(0x10fc364cu));
  /* 10f916c9 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f916cfu);
  /* 10f916cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f916d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f916d4 call 0x10f96800 */
  push32(0x10f916d9u); f_10f96800();
  /* 10f916d9 mov esi, esp */
  ESI = (ESP);
  /* 10f916db push 4 */
  push32((uint32_t)(0x4u));
  /* 10f916dd push 0x10fc3650 */
  push32((uint32_t)(0x10fc3650u));
  /* 10f916e2 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f916e8u);
  /* 10f916e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f916eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f916ed call 0x10f96800 */
  push32(0x10f916f2u); f_10f96800();
  /* 10f916f2 mov esi, esp */
  ESI = (ESP);
  /* 10f916f4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f916f6 push 0x10fc3654 */
  push32((uint32_t)(0x10fc3654u));
  /* 10f916fb call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91701u);
  /* 10f91701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91704 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91706 call 0x10f96800 */
  push32(0x10f9170bu); f_10f96800();
  /* 10f9170b mov esi, esp */
  ESI = (ESP);
  /* 10f9170d push 4 */
  push32((uint32_t)(0x4u));
  /* 10f9170f push 0x10fc3658 */
  push32((uint32_t)(0x10fc3658u));
  /* 10f91714 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9171au);
  /* 10f9171a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9171d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9171f call 0x10f96800 */
  push32(0x10f91724u); f_10f96800();
  /* 10f91724 mov esi, esp */
  ESI = (ESP);
  /* 10f91726 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f91728 push 0x10fc365c */
  push32((uint32_t)(0x10fc365cu));
  /* 10f9172d call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91733u);
  /* 10f91733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91736 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91738 call 0x10f96800 */
  push32(0x10f9173du); f_10f96800();
  /* 10f9173d mov esi, esp */
  ESI = (ESP);
  /* 10f9173f push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91741 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f91746 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9174cu);
  /* 10f9174c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9174f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91751 call 0x10f96800 */
  push32(0x10f91756u); f_10f96800();
  /* 10f91756 mov esi, esp */
  ESI = (ESP);
  /* 10f91758 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9175a push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f9175f call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91765u);
  /* 10f91765 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91768 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9176a call 0x10f96800 */
  push32(0x10f9176fu); f_10f96800();
  /* 10f9176f mov esi, esp */
  ESI = (ESP);
  /* 10f91771 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91773 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f91778 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9177eu);
  /* 10f9177e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91781 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91783 call 0x10f96800 */
  push32(0x10f91788u); f_10f96800();
  /* 10f91788 mov esi, esp */
  ESI = (ESP);
  /* 10f9178a push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9178c push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f91791 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91797u);
  /* 10f91797 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9179a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9179c call 0x10f96800 */
  push32(0x10f917a1u); f_10f96800();
  /* 10f917a1 mov esi, esp */
  ESI = (ESP);
  /* 10f917a3 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f917a5 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f917aa call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f917b0u);
  /* 10f917b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f917b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f917b5 call 0x10f96800 */
  push32(0x10f917bau); f_10f96800();
  /* 10f917ba mov esi, esp */
  ESI = (ESP);
  /* 10f917bc push 8 */
  push32((uint32_t)(0x8u));
  /* 10f917be push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f917c3 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f917c9u);
  /* 10f917c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f917cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f917ce call 0x10f96800 */
  push32(0x10f917d3u); f_10f96800();
  /* 10f917d3 mov esi, esp */
  ESI = (ESP);
  /* 10f917d5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f917d7 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f917dc call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f917e2u);
  /* 10f917e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f917e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f917e7 call 0x10f96800 */
  push32(0x10f917ecu); f_10f96800();
  /* 10f917ec mov esi, esp */
  ESI = (ESP);
  /* 10f917ee push 8 */
  push32((uint32_t)(0x8u));
  /* 10f917f0 push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f917f5 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f917fbu);
  /* 10f917fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f917fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91800 call 0x10f96800 */
  push32(0x10f91805u); f_10f96800();
  /* 10f91805 mov esi, esp */
  ESI = (ESP);
  /* 10f91807 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91809 push 0x10fc3408 */
  push32((uint32_t)(0x10fc3408u));
  /* 10f9180e call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91814u);
  /* 10f91814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91817 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91819 call 0x10f96800 */
  push32(0x10f9181eu); f_10f96800();
  /* 10f9181e mov esi, esp */
  ESI = (ESP);
  /* 10f91820 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91822 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f91827 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9182du);
  /* 10f9182d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91830 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91832 call 0x10f96800 */
  push32(0x10f91837u); f_10f96800();
  /* 10f91837 mov esi, esp */
  ESI = (ESP);
  /* 10f91839 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9183b push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f91840 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91846u);
  /* 10f91846 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91849 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9184b call 0x10f96800 */
  push32(0x10f91850u); f_10f96800();
  /* 10f91850 mov esi, esp */
  ESI = (ESP);
  /* 10f91852 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91854 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f91859 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9185fu);
  /* 10f9185f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91864 call 0x10f96800 */
  push32(0x10f91869u); f_10f96800();
  /* 10f91869 mov esi, esp */
  ESI = (ESP);
  /* 10f9186b push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9186d push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f91872 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91878u);
  /* 10f91878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9187b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9187d call 0x10f96800 */
  push32(0x10f91882u); f_10f96800();
  /* 10f91882 mov esi, esp */
  ESI = (ESP);
  /* 10f91884 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91886 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f9188b call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91891u);
  /* 10f91891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91894 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91896 call 0x10f96800 */
  push32(0x10f9189bu); f_10f96800();
  /* 10f9189b mov esi, esp */
  ESI = (ESP);
  /* 10f9189d push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9189f push 0x10fc3530 */
  push32((uint32_t)(0x10fc3530u));
  /* 10f918a4 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f918aau);
  /* 10f918aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f918ad cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f918af call 0x10f96800 */
  push32(0x10f918b4u); f_10f96800();
  /* 10f918b4 mov esi, esp */
  ESI = (ESP);
  /* 10f918b6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f918b8 push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f918bd call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f918c3u);
  /* 10f918c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f918c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f918c8 call 0x10f96800 */
  push32(0x10f918cdu); f_10f96800();
  /* 10f918cd mov esi, esp */
  ESI = (ESP);
  /* 10f918cf push 8 */
  push32((uint32_t)(0x8u));
  /* 10f918d1 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f918d6 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f918dcu);
  /* 10f918dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f918df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f918e1 call 0x10f96800 */
  push32(0x10f918e6u); f_10f96800();
  /* 10f918e6 mov esi, esp */
  ESI = (ESP);
  /* 10f918e8 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f918ea push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f918ef call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f918f5u);
  /* 10f918f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f918f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f918fa call 0x10f96800 */
  push32(0x10f918ffu); f_10f96800();
  /* 10f918ff mov esi, esp */
  ESI = (ESP);
  /* 10f91901 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91903 push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f91908 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9190eu);
  /* 10f9190e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91911 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91913 call 0x10f96800 */
  push32(0x10f91918u); f_10f96800();
  /* 10f91918 mov esi, esp */
  ESI = (ESP);
  /* 10f9191a push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9191c push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f91921 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91927u);
  /* 10f91927 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9192a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9192c call 0x10f96800 */
  push32(0x10f91931u); f_10f96800();
  /* 10f91931 mov esi, esp */
  ESI = (ESP);
  /* 10f91933 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91935 push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f9193a call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91940u);
  /* 10f91940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91943 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91945 call 0x10f96800 */
  push32(0x10f9194au); f_10f96800();
  /* 10f9194a mov esi, esp */
  ESI = (ESP);
  /* 10f9194c push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9194e push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f91953 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91959u);
  /* 10f91959 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9195c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9195e call 0x10f96800 */
  push32(0x10f91963u); f_10f96800();
  /* 10f91963 mov esi, esp */
  ESI = (ESP);
  /* 10f91965 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91967 push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f9196c call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f91972u);
  /* 10f91972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91975 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91977 call 0x10f96800 */
  push32(0x10f9197cu); f_10f96800();
  /* 10f9197c mov esi, esp */
  ESI = (ESP);
  /* 10f9197e push 8 */
  push32((uint32_t)(0x8u));
  /* 10f91980 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f91985 call dword ptr [0x10fc6480] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6480))), 0x10f9198bu);
  /* 10f9198b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9198e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91990 call 0x10f96800 */
  push32(0x10f91995u); f_10f96800();
  /* 10f91995 mov esi, esp */
  ESI = (ESP);
  /* 10f91997 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f9199c call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f919a2u);
  /* 10f919a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f919a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f919a7 call 0x10f96800 */
  push32(0x10f919acu); f_10f96800();
  /* 10f919ac mov esi, esp */
  ESI = (ESP);
  /* 10f919ae push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f919b3 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f919b9u);
  /* 10f919b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f919bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f919be call 0x10f96800 */
  push32(0x10f919c3u); f_10f96800();
  /* 10f919c3 mov esi, esp */
  ESI = (ESP);
  /* 10f919c5 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f919ca call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f919d0u);
  /* 10f919d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f919d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f919d5 call 0x10f96800 */
  push32(0x10f919dau); f_10f96800();
  /* 10f919da mov esi, esp */
  ESI = (ESP);
  /* 10f919dc push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f919e1 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f919e7u);
  /* 10f919e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f919ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f919ec call 0x10f96800 */
  push32(0x10f919f1u); f_10f96800();
  /* 10f919f1 mov esi, esp */
  ESI = (ESP);
  /* 10f919f3 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f919f8 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f919feu);
  /* 10f919fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a03 call 0x10f96800 */
  push32(0x10f91a08u); f_10f96800();
  /* 10f91a08 mov esi, esp */
  ESI = (ESP);
  /* 10f91a0a push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f91a0f call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a15u);
  /* 10f91a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a18 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a1a call 0x10f96800 */
  push32(0x10f91a1fu); f_10f96800();
  /* 10f91a1f mov esi, esp */
  ESI = (ESP);
  /* 10f91a21 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f91a26 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a2cu);
  /* 10f91a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a2f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a31 call 0x10f96800 */
  push32(0x10f91a36u); f_10f96800();
  /* 10f91a36 mov esi, esp */
  ESI = (ESP);
  /* 10f91a38 push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f91a3d call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a43u);
  /* 10f91a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a48 call 0x10f96800 */
  push32(0x10f91a4du); f_10f96800();
  /* 10f91a4d mov esi, esp */
  ESI = (ESP);
  /* 10f91a4f push 0x10fc3408 */
  push32((uint32_t)(0x10fc3408u));
  /* 10f91a54 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a5au);
  /* 10f91a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a5f call 0x10f96800 */
  push32(0x10f91a64u); f_10f96800();
  /* 10f91a64 mov esi, esp */
  ESI = (ESP);
  /* 10f91a66 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f91a6b call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a71u);
  /* 10f91a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a76 call 0x10f96800 */
  push32(0x10f91a7bu); f_10f96800();
  /* 10f91a7b mov esi, esp */
  ESI = (ESP);
  /* 10f91a7d push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f91a82 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a88u);
  /* 10f91a88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91a8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91a8d call 0x10f96800 */
  push32(0x10f91a92u); f_10f96800();
  /* 10f91a92 mov esi, esp */
  ESI = (ESP);
  /* 10f91a94 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f91a99 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91a9fu);
  /* 10f91a9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91aa4 call 0x10f96800 */
  push32(0x10f91aa9u); f_10f96800();
  /* 10f91aa9 mov esi, esp */
  ESI = (ESP);
  /* 10f91aab push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f91ab0 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91ab6u);
  /* 10f91ab6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91ab9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91abb call 0x10f96800 */
  push32(0x10f91ac0u); f_10f96800();
  /* 10f91ac0 mov esi, esp */
  ESI = (ESP);
  /* 10f91ac2 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f91ac7 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91acdu);
  /* 10f91acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91ad0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91ad2 call 0x10f96800 */
  push32(0x10f91ad7u); f_10f96800();
  /* 10f91ad7 mov esi, esp */
  ESI = (ESP);
  /* 10f91ad9 push 0x10fc3530 */
  push32((uint32_t)(0x10fc3530u));
  /* 10f91ade call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91ae4u);
  /* 10f91ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91ae7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91ae9 call 0x10f96800 */
  push32(0x10f91aeeu); f_10f96800();
  /* 10f91aee mov esi, esp */
  ESI = (ESP);
  /* 10f91af0 push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f91af5 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91afbu);
  /* 10f91afb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91afe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b00 call 0x10f96800 */
  push32(0x10f91b05u); f_10f96800();
  /* 10f91b05 mov esi, esp */
  ESI = (ESP);
  /* 10f91b07 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f91b0c call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b12u);
  /* 10f91b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b17 call 0x10f96800 */
  push32(0x10f91b1cu); f_10f96800();
  /* 10f91b1c mov esi, esp */
  ESI = (ESP);
  /* 10f91b1e push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f91b23 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b29u);
  /* 10f91b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b2c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b2e call 0x10f96800 */
  push32(0x10f91b33u); f_10f96800();
  /* 10f91b33 mov esi, esp */
  ESI = (ESP);
  /* 10f91b35 push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f91b3a call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b40u);
  /* 10f91b40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b45 call 0x10f96800 */
  push32(0x10f91b4au); f_10f96800();
  /* 10f91b4a mov esi, esp */
  ESI = (ESP);
  /* 10f91b4c push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f91b51 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b57u);
  /* 10f91b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b5c call 0x10f96800 */
  push32(0x10f91b61u); f_10f96800();
  /* 10f91b61 mov esi, esp */
  ESI = (ESP);
  /* 10f91b63 push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f91b68 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b6eu);
  /* 10f91b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b73 call 0x10f96800 */
  push32(0x10f91b78u); f_10f96800();
  /* 10f91b78 mov esi, esp */
  ESI = (ESP);
  /* 10f91b7a push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f91b7f call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b85u);
  /* 10f91b85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91b8a call 0x10f96800 */
  push32(0x10f91b8fu); f_10f96800();
  /* 10f91b8f mov esi, esp */
  ESI = (ESP);
  /* 10f91b91 push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f91b96 call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91b9cu);
  /* 10f91b9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91b9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91ba1 call 0x10f96800 */
  push32(0x10f91ba6u); f_10f96800();
  /* 10f91ba6 mov esi, esp */
  ESI = (ESP);
  /* 10f91ba8 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f91bad call dword ptr [0x10fc6478] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6478))), 0x10f91bb3u);
  /* 10f91bb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91bb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91bb8 call 0x10f96800 */
  push32(0x10f91bbdu); f_10f96800();
  /* 10f91bbd mov esi, esp */
  ESI = (ESP);
  /* 10f91bbf push 0x10fbe030 */
  push32((uint32_t)(0x10fbe030u));
  /* 10f91bc4 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f91bc9 call dword ptr [0x10fc6488] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6488))), 0x10f91bcfu);
  /* 10f91bcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91bd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91bd4 call 0x10f96800 */
  push32(0x10f91bd9u); f_10f96800();
  /* 10f91bd9 mov esi, esp */
  ESI = (ESP);
  /* 10f91bdb push 0x10fbe024 */
  push32((uint32_t)(0x10fbe024u));
  /* 10f91be0 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f91be2 call dword ptr [0x10fc648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc648c))), 0x10f91be8u);
  /* 10f91be8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91beb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91bed call 0x10f96800 */
  push32(0x10f91bf2u); f_10f96800();
  /* 10f91bf2 mov esi, esp */
  ESI = (ESP);
  /* 10f91bf4 push 0x10fbe024 */
  push32((uint32_t)(0x10fbe024u));
  /* 10f91bf9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f91bfb call dword ptr [0x10fc648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc648c))), 0x10f91c01u);
  /* 10f91c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c06 call 0x10f96800 */
  push32(0x10f91c0bu); f_10f96800();
  /* 10f91c0b mov esi, esp */
  ESI = (ESP);
  /* 10f91c0d push 0x10fbe01c */
  push32((uint32_t)(0x10fbe01cu));
  /* 10f91c12 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f91c14 call dword ptr [0x10fc648c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc648c))), 0x10f91c1au);
  /* 10f91c1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c1f call 0x10f96800 */
  push32(0x10f91c24u); f_10f96800();
  /* 10f91c24 mov esi, esp */
  ESI = (ESP);
  /* 10f91c26 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f91c28 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f91c2a call dword ptr [0x10fc6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6484))), 0x10f91c30u);
  /* 10f91c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c35 call 0x10f96800 */
  push32(0x10f91c3au); f_10f96800();
  /* 10f91c3a mov esi, esp */
  ESI = (ESP);
  /* 10f91c3c push 0xa */
  push32((uint32_t)(0xau));
  /* 10f91c3e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f91c40 call dword ptr [0x10fc6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6484))), 0x10f91c46u);
  /* 10f91c46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c4b call 0x10f96800 */
  push32(0x10f91c50u); f_10f96800();
  /* 10f91c50 mov esi, esp */
  ESI = (ESP);
  /* 10f91c52 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f91c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f91c56 call dword ptr [0x10fc6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6484))), 0x10f91c5cu);
  /* 10f91c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c61 call 0x10f96800 */
  push32(0x10f91c66u); f_10f96800();
  /* 10f91c66 mov esi, esp */
  ESI = (ESP);
  /* 10f91c68 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f91c6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f91c6c call dword ptr [0x10fc6484] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6484))), 0x10f91c72u);
  /* 10f91c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c77 call 0x10f96800 */
  push32(0x10f91c7cu); f_10f96800();
  /* 10f91c7c pop edi */
  EDI = (pop32());
  /* 10f91c7d pop esi */
  ESI = (pop32());
  /* 10f91c7e pop ebx */
  EBX = (pop32());
  /* 10f91c7f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91c82 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91c84 call 0x10f96800 */
  push32(0x10f91c89u); f_10f96800();
  /* 10f91c89 mov esp, ebp */
  ESP = (EBP);
  /* 10f91c8b pop ebp */
  EBP = (pop32());
  /* 10f91c8c ret  */
  ESPCHK(0x10f91090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001f90 @ 0x10f91f90 (14604 bytes, 4151 insns) */
void f_10f91f90(void) {
  FTRACE(0x10f91f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f91f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f91f91 mov ebp, esp */
  EBP = (ESP);
  /* 10f91f93 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f91f96 push ebx */
  push32((uint32_t)(EBX));
  /* 10f91f97 push esi */
  push32((uint32_t)(ESI));
  /* 10f91f98 push edi */
  push32((uint32_t)(EDI));
  /* 10f91f99 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10f91f9c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10f91fa1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f91fa6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f91fa8 mov esi, esp */
  ESI = (ESP);
  /* 10f91faa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f91fac call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f91fb2u);
  /* 10f91fb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91fb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91fb7 call 0x10f96800 */
  push32(0x10f91fbcu); f_10f96800();
  /* 10f91fbc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f91fc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f91fc3 je 0x10f925fe */
  if (C.zf) goto L_10f925fe;
  /* 10f91fc9 mov esi, esp */
  ESI = (ESP);
  /* 10f91fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f91fcd push 1 */
  push32((uint32_t)(0x1u));
  /* 10f91fcf call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f91fd5u);
  /* 10f91fd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91fd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91fda call 0x10f96800 */
  push32(0x10f91fdfu); f_10f96800();
  /* 10f91fdf mov esi, esp */
  ESI = (ESP);
  /* 10f91fe1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f91fe3 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f91fe9u);
  /* 10f91fe9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f91fec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f91fee call 0x10f96800 */
  push32(0x10f91ff3u); f_10f96800();
  /* 10f91ff3 mov ecx, 3 */
  ECX = (0x3u);
  /* 10f91ff8 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f91ffa imul ecx, ecx, 0x2710 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2710u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f92000 add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92006 mov esi, esp */
  ESI = (ESP);
  /* 10f92008 push ecx */
  push32((uint32_t)(ECX));
  /* 10f92009 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9200b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9200d call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92013u);
  /* 10f92013 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92016 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92018 call 0x10f96800 */
  push32(0x10f9201du); f_10f96800();
  /* 10f9201d mov esi, esp */
  ESI = (ESP);
  /* 10f9201f push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92021 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92027u);
  /* 10f92027 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9202a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9202c call 0x10f96800 */
  push32(0x10f92031u); f_10f96800();
  /* 10f92031 mov edx, 3 */
  EDX = (0x3u);
  /* 10f92036 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92038 imul edx, edx, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x1f4u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9203e add edx, 0xfa0 */
  { uint32_t _a=(EDX),_b=(0xfa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92044 mov esi, esp */
  ESI = (ESP);
  /* 10f92046 push edx */
  push32((uint32_t)(EDX));
  /* 10f92047 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92049 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9204b call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92051u);
  /* 10f92051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92054 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92056 call 0x10f96800 */
  push32(0x10f9205bu); f_10f96800();
  /* 10f9205b mov esi, esp */
  ESI = (ESP);
  /* 10f9205d push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9205f call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92065u);
  /* 10f92065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9206a call 0x10f96800 */
  push32(0x10f9206fu); f_10f96800();
  /* 10f9206f mov ecx, 3 */
  ECX = (0x3u);
  /* 10f92074 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92076 imul ecx, ecx, 0x320 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x320u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9207c add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92082 mov esi, esp */
  ESI = (ESP);
  /* 10f92084 push ecx */
  push32((uint32_t)(ECX));
  /* 10f92085 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f92087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92089 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9208fu);
  /* 10f9208f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92092 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92094 call 0x10f96800 */
  push32(0x10f92099u); f_10f96800();
  /* 10f92099 mov esi, esp */
  ESI = (ESP);
  /* 10f9209b push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9209d call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f920a3u);
  /* 10f920a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f920a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f920a8 call 0x10f96800 */
  push32(0x10f920adu); f_10f96800();
  /* 10f920ad mov edx, 3 */
  EDX = (0x3u);
  /* 10f920b2 sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f920b4 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f920ba add edx, 0x1388 */
  { uint32_t _a=(EDX),_b=(0x1388u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f920c0 mov esi, esp */
  ESI = (ESP);
  /* 10f920c2 push edx */
  push32((uint32_t)(EDX));
  /* 10f920c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f920c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f920c7 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f920cdu);
  /* 10f920cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f920d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f920d2 call 0x10f96800 */
  push32(0x10f920d7u); f_10f96800();
  /* 10f920d7 mov esi, esp */
  ESI = (ESP);
  /* 10f920d9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f920db call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f920e1u);
  /* 10f920e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f920e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f920e6 call 0x10f96800 */
  push32(0x10f920ebu); f_10f96800();
  /* 10f920eb mov ecx, 3 */
  ECX = (0x3u);
  /* 10f920f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f920f2 imul ecx, ecx, 0x320 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x320u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f920f8 add ecx, 0x1388 */
  { uint32_t _a=(ECX),_b=(0x1388u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f920fe mov esi, esp */
  ESI = (ESP);
  /* 10f92100 push ecx */
  push32((uint32_t)(ECX));
  /* 10f92101 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92105 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9210bu);
  /* 10f9210b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9210e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92110 call 0x10f96800 */
  push32(0x10f92115u); f_10f96800();
  /* 10f92115 mov esi, esp */
  ESI = (ESP);
  /* 10f92117 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92119 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f9211fu);
  /* 10f9211f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92122 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92124 call 0x10f96800 */
  push32(0x10f92129u); f_10f96800();
  /* 10f92129 mov edx, 3 */
  EDX = (0x3u);
  /* 10f9212e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92130 imul edx, edx, 0x258 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x258u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f92136 add edx, 0x1388 */
  { uint32_t _a=(EDX),_b=(0x1388u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9213c mov esi, esp */
  ESI = (ESP);
  /* 10f9213e push edx */
  push32((uint32_t)(EDX));
  /* 10f9213f push 5 */
  push32((uint32_t)(0x5u));
  /* 10f92141 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92143 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92149u);
  /* 10f92149 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9214c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9214e call 0x10f96800 */
  push32(0x10f92153u); f_10f96800();
  /* 10f92153 mov esi, esp */
  ESI = (ESP);
  /* 10f92155 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f9215a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9215c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9215e call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92164u);
  /* 10f92164 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92167 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92169 call 0x10f96800 */
  push32(0x10f9216eu); f_10f96800();
  /* 10f9216e mov esi, esp */
  ESI = (ESP);
  /* 10f92170 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92175 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92177 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92179 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9217fu);
  /* 10f9217f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92182 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92184 call 0x10f96800 */
  push32(0x10f92189u); f_10f96800();
  /* 10f92189 mov esi, esp */
  ESI = (ESP);
  /* 10f9218b push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92190 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f92192 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92194 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9219au);
  /* 10f9219a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9219d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9219f call 0x10f96800 */
  push32(0x10f921a4u); f_10f96800();
  /* 10f921a4 mov esi, esp */
  ESI = (ESP);
  /* 10f921a6 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f921ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10f921ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10f921af call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f921b5u);
  /* 10f921b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f921b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f921ba call 0x10f96800 */
  push32(0x10f921bfu); f_10f96800();
  /* 10f921bf mov esi, esp */
  ESI = (ESP);
  /* 10f921c1 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f921c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f921c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f921ca call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f921d0u);
  /* 10f921d0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f921d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f921d5 call 0x10f96800 */
  push32(0x10f921dau); f_10f96800();
  /* 10f921da mov esi, esp */
  ESI = (ESP);
  /* 10f921dc push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f921e1 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f921e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f921e5 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f921ebu);
  /* 10f921eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f921ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f921f0 call 0x10f96800 */
  push32(0x10f921f5u); f_10f96800();
  /* 10f921f5 mov esi, esp */
  ESI = (ESP);
  /* 10f921f7 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f921fc push 3 */
  push32((uint32_t)(0x3u));
  /* 10f921fe push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92200 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92206u);
  /* 10f92206 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92209 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9220b call 0x10f96800 */
  push32(0x10f92210u); f_10f96800();
  /* 10f92210 mov esi, esp */
  ESI = (ESP);
  /* 10f92212 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92217 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92219 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9221b call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92221u);
  /* 10f92221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92224 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92226 call 0x10f96800 */
  push32(0x10f9222bu); f_10f96800();
  /* 10f9222b mov esi, esp */
  ESI = (ESP);
  /* 10f9222d push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92232 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f92234 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92236 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9223cu);
  /* 10f9223c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9223f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92241 call 0x10f96800 */
  push32(0x10f92246u); f_10f96800();
  /* 10f92246 mov esi, esp */
  ESI = (ESP);
  /* 10f92248 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f9224d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9224f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92251 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92257u);
  /* 10f92257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9225a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9225c call 0x10f96800 */
  push32(0x10f92261u); f_10f96800();
  /* 10f92261 mov esi, esp */
  ESI = (ESP);
  /* 10f92263 push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92268 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9226a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9226c call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92272u);
  /* 10f92272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92275 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92277 call 0x10f96800 */
  push32(0x10f9227cu); f_10f96800();
  /* 10f9227c mov esi, esp */
  ESI = (ESP);
  /* 10f9227e push 0x3b9ac9ff */
  push32((uint32_t)(0x3b9ac9ffu));
  /* 10f92283 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f92285 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92287 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9228du);
  /* 10f9228d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92290 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92292 call 0x10f96800 */
  push32(0x10f92297u); f_10f96800();
  /* 10f92297 mov esi, esp */
  ESI = (ESP);
  /* 10f92299 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9229b call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f922a1u);
  /* 10f922a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f922a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f922a6 call 0x10f96800 */
  push32(0x10f922abu); f_10f96800();
  /* 10f922ab imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f922b1 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10f922b6 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f922b8 mov esi, esp */
  ESI = (ESP);
  /* 10f922ba push ecx */
  push32((uint32_t)(ECX));
  /* 10f922bb push 3 */
  push32((uint32_t)(0x3u));
  /* 10f922bd push 3 */
  push32((uint32_t)(0x3u));
  /* 10f922bf call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f922c5u);
  /* 10f922c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f922c8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f922ca call 0x10f96800 */
  push32(0x10f922cfu); f_10f96800();
  /* 10f922cf mov esi, esp */
  ESI = (ESP);
  /* 10f922d1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f922d3 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f922d9u);
  /* 10f922d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f922dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f922de call 0x10f96800 */
  push32(0x10f922e3u); f_10f96800();
  /* 10f922e3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f922e9 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 10f922ee sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f922f0 mov esi, esp */
  ESI = (ESP);
  /* 10f922f2 push edx */
  push32((uint32_t)(EDX));
  /* 10f922f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f922f5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f922f7 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f922fdu);
  /* 10f922fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92300 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92302 call 0x10f96800 */
  push32(0x10f92307u); f_10f96800();
  /* 10f92307 mov esi, esp */
  ESI = (ESP);
  /* 10f92309 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9230b call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92311u);
  /* 10f92311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92314 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92316 call 0x10f96800 */
  push32(0x10f9231bu); f_10f96800();
  /* 10f9231b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f92321 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10f92326 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92328 mov esi, esp */
  ESI = (ESP);
  /* 10f9232a push ecx */
  push32((uint32_t)(ECX));
  /* 10f9232b push 4 */
  push32((uint32_t)(0x4u));
  /* 10f9232d push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9232f call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f92335u);
  /* 10f92335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92338 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9233a call 0x10f96800 */
  push32(0x10f9233fu); f_10f96800();
  /* 10f9233f mov esi, esp */
  ESI = (ESP);
  /* 10f92341 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92343 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92349u);
  /* 10f92349 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9234c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9234e call 0x10f96800 */
  push32(0x10f92353u); f_10f96800();
  /* 10f92353 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f92359 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 10f9235e sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92360 mov esi, esp */
  ESI = (ESP);
  /* 10f92362 push edx */
  push32((uint32_t)(EDX));
  /* 10f92363 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92365 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92367 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f9236du);
  /* 10f9236d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92370 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92372 call 0x10f96800 */
  push32(0x10f92377u); f_10f96800();
  /* 10f92377 mov esi, esp */
  ESI = (ESP);
  /* 10f92379 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9237b call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92381u);
  /* 10f92381 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92384 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92386 call 0x10f96800 */
  push32(0x10f9238bu); f_10f96800();
  /* 10f9238b imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f92391 mov ecx, 0x2710 */
  ECX = (0x2710u);
  /* 10f92396 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f92398 mov esi, esp */
  ESI = (ESP);
  /* 10f9239a push ecx */
  push32((uint32_t)(ECX));
  /* 10f9239b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9239d push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9239f call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f923a5u);
  /* 10f923a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f923a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f923aa call 0x10f96800 */
  push32(0x10f923afu); f_10f96800();
  /* 10f923af mov esi, esp */
  ESI = (ESP);
  /* 10f923b1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f923b3 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f923b9u);
  /* 10f923b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f923bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f923be call 0x10f96800 */
  push32(0x10f923c3u); f_10f96800();
  /* 10f923c3 imul eax, eax, 0x1f4 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x1f4u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f923c9 mov edx, 0x2710 */
  EDX = (0x2710u);
  /* 10f923ce sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f923d0 mov esi, esp */
  ESI = (ESP);
  /* 10f923d2 push edx */
  push32((uint32_t)(EDX));
  /* 10f923d3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f923d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f923d7 call dword ptr [0x10fc641c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc641c))), 0x10f923ddu);
  /* 10f923dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f923e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f923e2 call 0x10f96800 */
  push32(0x10f923e7u); f_10f96800();
  /* 10f923e7 mov esi, esp */
  ESI = (ESP);
  /* 10f923e9 push 0x10fbe1c0 */
  push32((uint32_t)(0x10fbe1c0u));
  /* 10f923ee push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f923f3 call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f923f9u);
  /* 10f923f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f923fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f923fe call 0x10f96800 */
  push32(0x10f92403u); f_10f96800();
  /* 10f92403 mov esi, esp */
  ESI = (ESP);
  /* 10f92405 push 0x10fbe1b4 */
  push32((uint32_t)(0x10fbe1b4u));
  /* 10f9240a push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f9240f call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f92415u);
  /* 10f92415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9241a call 0x10f96800 */
  push32(0x10f9241fu); f_10f96800();
  /* 10f9241f mov esi, esp */
  ESI = (ESP);
  /* 10f92421 push 0x10fbe1a8 */
  push32((uint32_t)(0x10fbe1a8u));
  /* 10f92426 push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f9242b call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f92431u);
  /* 10f92431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92436 call 0x10f96800 */
  push32(0x10f9243bu); f_10f96800();
  /* 10f9243b mov esi, esp */
  ESI = (ESP);
  /* 10f9243d push 0x10fbe19c */
  push32((uint32_t)(0x10fbe19cu));
  /* 10f92442 push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f92447 call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f9244du);
  /* 10f9244d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92452 call 0x10f96800 */
  push32(0x10f92457u); f_10f96800();
  /* 10f92457 mov esi, esp */
  ESI = (ESP);
  /* 10f92459 push 0x10fbe190 */
  push32((uint32_t)(0x10fbe190u));
  /* 10f9245e push 0x10fbe128 */
  push32((uint32_t)(0x10fbe128u));
  /* 10f92463 call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f92469u);
  /* 10f92469 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9246c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9246e call 0x10f96800 */
  push32(0x10f92473u); f_10f96800();
  /* 10f92473 mov esi, esp */
  ESI = (ESP);
  /* 10f92475 push 0x10fbe184 */
  push32((uint32_t)(0x10fbe184u));
  /* 10f9247a push 0x10fbe12c */
  push32((uint32_t)(0x10fbe12cu));
  /* 10f9247f call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f92485u);
  /* 10f92485 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92488 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9248a call 0x10f96800 */
  push32(0x10f9248fu); f_10f96800();
  /* 10f9248f mov esi, esp */
  ESI = (ESP);
  /* 10f92491 push 0x10fbe178 */
  push32((uint32_t)(0x10fbe178u));
  /* 10f92496 push 0x10fbe12c */
  push32((uint32_t)(0x10fbe12cu));
  /* 10f9249b call dword ptr [0x10fc6420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6420))), 0x10f924a1u);
  /* 10f924a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f924a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f924a6 call 0x10f96800 */
  push32(0x10f924abu); f_10f96800();
  /* 10f924ab mov esi, esp */
  ESI = (ESP);
  /* 10f924ad push 0x10fc3458 */
  push32((uint32_t)(0x10fc3458u));
  /* 10f924b2 call dword ptr [0x10fc6418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6418))), 0x10f924b8u);
  /* 10f924b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f924bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f924bd call 0x10f96800 */
  push32(0x10f924c2u); f_10f96800();
  /* 10f924c2 mov esi, esp */
  ESI = (ESP);
  /* 10f924c4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f924c6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f924c8 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f924ceu);
  /* 10f924ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f924d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f924d3 call 0x10f96800 */
  push32(0x10f924d8u); f_10f96800();
  /* 10f924d8 mov esi, esp */
  ESI = (ESP);
  /* 10f924da push 0xa */
  push32((uint32_t)(0xau));
  /* 10f924dc push 7 */
  push32((uint32_t)(0x7u));
  /* 10f924de call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f924e4u);
  /* 10f924e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f924e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f924e9 call 0x10f96800 */
  push32(0x10f924eeu); f_10f96800();
  /* 10f924ee mov esi, esp */
  ESI = (ESP);
  /* 10f924f0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f924f2 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f924f4 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f924fau);
  /* 10f924fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f924fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f924ff call 0x10f96800 */
  push32(0x10f92504u); f_10f96800();
  /* 10f92504 mov esi, esp */
  ESI = (ESP);
  /* 10f92506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92508 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f9250a call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92510u);
  /* 10f92510 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92513 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92515 call 0x10f96800 */
  push32(0x10f9251au); f_10f96800();
  /* 10f9251a mov esi, esp */
  ESI = (ESP);
  /* 10f9251c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9251e push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f92520 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92526u);
  /* 10f92526 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9252b call 0x10f96800 */
  push32(0x10f92530u); f_10f96800();
  /* 10f92530 mov esi, esp */
  ESI = (ESP);
  /* 10f92532 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92534 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f92536 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9253cu);
  /* 10f9253c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9253f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92541 call 0x10f96800 */
  push32(0x10f92546u); f_10f96800();
  /* 10f92546 mov esi, esp */
  ESI = (ESP);
  /* 10f92548 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9254a push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10f9254c call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92552u);
  /* 10f92552 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92555 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92557 call 0x10f96800 */
  push32(0x10f9255cu); f_10f96800();
  /* 10f9255c mov esi, esp */
  ESI = (ESP);
  /* 10f9255e push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10f92560 call dword ptr [0x10fc642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc642c))), 0x10f92566u);
  /* 10f92566 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92569 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9256b call 0x10f96800 */
  push32(0x10f92570u); f_10f96800();
  /* 10f92570 mov esi, esp */
  ESI = (ESP);
  /* 10f92572 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10f92574 call dword ptr [0x10fc642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc642c))), 0x10f9257au);
  /* 10f9257a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9257d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9257f call 0x10f96800 */
  push32(0x10f92584u); f_10f96800();
  /* 10f92584 mov esi, esp */
  ESI = (ESP);
  /* 10f92586 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92588 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f9258a call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92590u);
  /* 10f92590 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92595 call 0x10f96800 */
  push32(0x10f9259au); f_10f96800();
  /* 10f9259a mov dword ptr [0x10fc3470], 0 */
  w32((uint32_t)(0x10fc3470), (0x0u));
  /* 10f925a4 mov dword ptr [0x10fc3474], 0 */
  w32((uint32_t)(0x10fc3474), (0x0u));
  /* 10f925ae mov dword ptr [0x10fc3478], 0 */
  w32((uint32_t)(0x10fc3478), (0x0u));
  /* 10f925b8 mov dword ptr [0x10fc347c], 0 */
  w32((uint32_t)(0x10fc347c), (0x0u));
  /* 10f925c2 mov dword ptr [0x10fc3480], 0 */
  w32((uint32_t)(0x10fc3480), (0x0u));
  /* 10f925cc mov dword ptr [0x10fc3484], 0 */
  w32((uint32_t)(0x10fc3484), (0x0u));
  /* 10f925d6 mov dword ptr [0x10fc3488], 0 */
  w32((uint32_t)(0x10fc3488), (0x0u));
  /* 10f925e0 mov dword ptr [0x10fc348c], 0 */
  w32((uint32_t)(0x10fc348c), (0x0u));
  /* 10f925ea mov dword ptr [0x10fc3490], 0 */
  w32((uint32_t)(0x10fc3490), (0x0u));
  /* 10f925f4 mov dword ptr [0x10fc3640], 0 */
  w32((uint32_t)(0x10fc3640), (0x0u));
L_10f925fe:;
  /* 10f925fe mov esi, esp */
  ESI = (ESP);
  /* 10f92600 push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10f92602 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92608u);
  /* 10f92608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9260b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9260d call 0x10f96800 */
  push32(0x10f92612u); f_10f96800();
  /* 10f92612 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92617 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92619 je 0x10f92697 */
  if (C.zf) goto L_10f92697;
  /* 10f9261b mov esi, esp */
  ESI = (ESP);
  /* 10f9261d push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f9261f call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92625u);
  /* 10f92625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9262a call 0x10f96800 */
  push32(0x10f9262fu); f_10f96800();
  /* 10f9262f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92636 je 0x10f92697 */
  if (C.zf) goto L_10f92697;
  /* 10f92638 mov esi, esp */
  ESI = (ESP);
  /* 10f9263a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9263c push 0x39 */
  push32((uint32_t)(0x39u));
  /* 10f9263e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92644u);
  /* 10f92644 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92647 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92649 call 0x10f96800 */
  push32(0x10f9264eu); f_10f96800();
  /* 10f9264e mov esi, esp */
  ESI = (ESP);
  /* 10f92650 push 0x10fbe170 */
  push32((uint32_t)(0x10fbe170u));
  /* 10f92655 call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f9265bu);
  /* 10f9265b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9265e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92660 call 0x10f96800 */
  push32(0x10f92665u); f_10f96800();
  /* 10f92665 mov esi, esp */
  ESI = (ESP);
  /* 10f92667 push 0x10fbe168 */
  push32((uint32_t)(0x10fbe168u));
  /* 10f9266c call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f92672u);
  /* 10f92672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92675 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92677 call 0x10f96800 */
  push32(0x10f9267cu); f_10f96800();
  /* 10f9267c mov esi, esp */
  ESI = (ESP);
  /* 10f9267e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92682 push 0x10fc3618 */
  push32((uint32_t)(0x10fc3618u));
  /* 10f92687 call dword ptr [0x10fc6438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6438))), 0x10f9268du);
  /* 10f9268d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92690 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92692 call 0x10f96800 */
  push32(0x10f92697u); f_10f96800();
L_10f92697:;
  /* 10f92697 mov esi, esp */
  ESI = (ESP);
  /* 10f92699 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9269b call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f926a1u);
  /* 10f926a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f926a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f926a6 call 0x10f96800 */
  push32(0x10f926abu); f_10f96800();
  /* 10f926ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f926b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f926b2 je 0x10f92754 */
  if (C.zf) goto L_10f92754;
  /* 10f926b8 mov esi, esp */
  ESI = (ESP);
  /* 10f926ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10f926bc call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f926c2u);
  /* 10f926c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f926c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f926c7 call 0x10f96800 */
  push32(0x10f926ccu); f_10f96800();
  /* 10f926cc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f926d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f926d3 je 0x10f92754 */
  if (C.zf) goto L_10f92754;
  /* 10f926d5 mov esi, esp */
  ESI = (ESP);
  /* 10f926d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f926d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f926db call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f926e1u);
  /* 10f926e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f926e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f926e6 call 0x10f96800 */
  push32(0x10f926ebu); f_10f96800();
  /* 10f926eb mov esi, esp */
  ESI = (ESP);
  /* 10f926ed push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10f926f2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f926f4 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f926fau);
  /* 10f926fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f926fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f926ff call 0x10f96800 */
  push32(0x10f92704u); f_10f96800();
  /* 10f92704 mov esi, esp */
  ESI = (ESP);
  /* 10f92706 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 10f92708 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f9270a call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f92710u);
  /* 10f92710 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92713 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92715 call 0x10f96800 */
  push32(0x10f9271au); f_10f96800();
  /* 10f9271a mov esi, esp */
  ESI = (ESP);
  /* 10f9271c push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10f92721 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f92723 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f92729u);
  /* 10f92729 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9272c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9272e call 0x10f96800 */
  push32(0x10f92733u); f_10f96800();
  /* 10f92733 mov esi, esp */
  ESI = (ESP);
  /* 10f92735 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f92737 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92739 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9273b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9273d push 0x10fbe15c */
  push32((uint32_t)(0x10fbe15cu));
  /* 10f92742 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92744 call dword ptr [0x10fc6430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6430))), 0x10f9274au);
  /* 10f9274a add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9274d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9274f call 0x10f96800 */
  push32(0x10f92754u); f_10f96800();
L_10f92754:;
  /* 10f92754 mov esi, esp */
  ESI = (ESP);
  /* 10f92756 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92758 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9275eu);
  /* 10f9275e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92761 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92763 call 0x10f96800 */
  push32(0x10f92768u); f_10f96800();
  /* 10f92768 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9276d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9276f je 0x10f9280e */
  if (C.zf) goto L_10f9280e;
  /* 10f92775 mov esi, esp */
  ESI = (ESP);
  /* 10f92777 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92779 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9277b call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92781u);
  /* 10f92781 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92784 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92786 call 0x10f96800 */
  push32(0x10f9278bu); f_10f96800();
  /* 10f9278b mov esi, esp */
  ESI = (ESP);
  /* 10f9278d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9278f push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f92794 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92796 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9279cu);
  /* 10f9279c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9279f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f927a1 call 0x10f96800 */
  push32(0x10f927a6u); f_10f96800();
  /* 10f927a6 mov esi, esp */
  ESI = (ESP);
  /* 10f927a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f927aa push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f927af push 2 */
  push32((uint32_t)(0x2u));
  /* 10f927b1 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f927b7u);
  /* 10f927b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f927ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f927bc call 0x10f96800 */
  push32(0x10f927c1u); f_10f96800();
  /* 10f927c1 mov esi, esp */
  ESI = (ESP);
  /* 10f927c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f927c5 push 0x8c */
  push32((uint32_t)(0x8cu));
  /* 10f927ca push 0x10fc3428 */
  push32((uint32_t)(0x10fc3428u));
  /* 10f927cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10f927d1 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f927d7u);
  /* 10f927d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f927da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f927dc call 0x10f96800 */
  push32(0x10f927e1u); f_10f96800();
  /* 10f927e1 mov esi, esp */
  ESI = (ESP);
  /* 10f927e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f927e5 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f927ebu);
  /* 10f927eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f927ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f927f0 call 0x10f96800 */
  push32(0x10f927f5u); f_10f96800();
  /* 10f927f5 mov esi, esp */
  ESI = (ESP);
  /* 10f927f7 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10f927fc push 1 */
  push32((uint32_t)(0x1u));
  /* 10f927fe call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f92804u);
  /* 10f92804 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92807 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92809 call 0x10f96800 */
  push32(0x10f9280eu); f_10f96800();
L_10f9280e:;
  /* 10f9280e mov esi, esp */
  ESI = (ESP);
  /* 10f92810 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f92812 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92818u);
  /* 10f92818 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9281b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9281d call 0x10f96800 */
  push32(0x10f92822u); f_10f96800();
  /* 10f92822 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92827 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92829 je 0x10f928b1 */
  if (C.zf) goto L_10f928b1;
  /* 10f9282f mov esi, esp */
  ESI = (ESP);
  /* 10f92831 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92833 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92839u);
  /* 10f92839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9283c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9283e call 0x10f96800 */
  push32(0x10f92843u); f_10f96800();
  /* 10f92843 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9284a je 0x10f928b1 */
  if (C.zf) goto L_10f928b1;
  /* 10f9284c mov esi, esp */
  ESI = (ESP);
  /* 10f9284e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92850 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f92852 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92858u);
  /* 10f92858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9285b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9285d call 0x10f96800 */
  push32(0x10f92862u); f_10f96800();
  /* 10f92862 mov esi, esp */
  ESI = (ESP);
  /* 10f92864 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92866 push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f9286b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9286d call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92873u);
  /* 10f92873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92876 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92878 call 0x10f96800 */
  push32(0x10f9287du); f_10f96800();
  /* 10f9287d mov esi, esp */
  ESI = (ESP);
  /* 10f9287f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92881 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f92886 push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f9288b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9288d call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f92893u);
  /* 10f92893 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92896 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92898 call 0x10f96800 */
  push32(0x10f9289du); f_10f96800();
  /* 10f9289d mov esi, esp */
  ESI = (ESP);
  /* 10f9289f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f928a1 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f928a7u);
  /* 10f928a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f928aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f928ac call 0x10f96800 */
  push32(0x10f928b1u); f_10f96800();
L_10f928b1:;
  /* 10f928b1 mov esi, esp */
  ESI = (ESP);
  /* 10f928b3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f928b5 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f928bbu);
  /* 10f928bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f928be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f928c0 call 0x10f96800 */
  push32(0x10f928c5u); f_10f96800();
  /* 10f928c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f928ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f928cc je 0x10f92954 */
  if (C.zf) goto L_10f92954;
  /* 10f928d2 mov esi, esp */
  ESI = (ESP);
  /* 10f928d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f928d6 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f928dcu);
  /* 10f928dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f928df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f928e1 call 0x10f96800 */
  push32(0x10f928e6u); f_10f96800();
  /* 10f928e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f928eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f928ed je 0x10f92954 */
  if (C.zf) goto L_10f92954;
  /* 10f928ef mov esi, esp */
  ESI = (ESP);
  /* 10f928f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f928f3 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f928f5 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f928fbu);
  /* 10f928fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f928fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92900 call 0x10f96800 */
  push32(0x10f92905u); f_10f96800();
  /* 10f92905 mov esi, esp */
  ESI = (ESP);
  /* 10f92907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92909 push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f9290e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92910 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92916u);
  /* 10f92916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92919 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9291b call 0x10f96800 */
  push32(0x10f92920u); f_10f96800();
  /* 10f92920 mov esi, esp */
  ESI = (ESP);
  /* 10f92922 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92924 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f92929 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f9292e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92930 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f92936u);
  /* 10f92936 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92939 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9293b call 0x10f96800 */
  push32(0x10f92940u); f_10f96800();
  /* 10f92940 mov esi, esp */
  ESI = (ESP);
  /* 10f92942 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92944 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f9294au);
  /* 10f9294a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9294d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9294f call 0x10f96800 */
  push32(0x10f92954u); f_10f96800();
L_10f92954:;
  /* 10f92954 mov esi, esp */
  ESI = (ESP);
  /* 10f92956 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f92958 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9295eu);
  /* 10f9295e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92961 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92963 call 0x10f96800 */
  push32(0x10f92968u); f_10f96800();
  /* 10f92968 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9296d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9296f je 0x10f92a0e */
  if (C.zf) goto L_10f92a0e;
  /* 10f92975 mov esi, esp */
  ESI = (ESP);
  /* 10f92977 push 0x10fc33f0 */
  push32((uint32_t)(0x10fc33f0u));
  /* 10f9297c call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f92982u);
  /* 10f92982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92985 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92987 call 0x10f96800 */
  push32(0x10f9298cu); f_10f96800();
  /* 10f9298c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9298e jne 0x10f92a0e */
  if (!C.zf) goto L_10f92a0e;
  /* 10f92990 mov esi, esp */
  ESI = (ESP);
  /* 10f92992 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92994 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f92996 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9299cu);
  /* 10f9299c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9299f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f929a1 call 0x10f96800 */
  push32(0x10f929a6u); f_10f96800();
  /* 10f929a6 mov esi, esp */
  ESI = (ESP);
  /* 10f929a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f929aa push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f929af push 2 */
  push32((uint32_t)(0x2u));
  /* 10f929b1 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f929b7u);
  /* 10f929b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f929ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f929bc call 0x10f96800 */
  push32(0x10f929c1u); f_10f96800();
  /* 10f929c1 mov esi, esp */
  ESI = (ESP);
  /* 10f929c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f929c5 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f929ca push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f929cf push 2 */
  push32((uint32_t)(0x2u));
  /* 10f929d1 call dword ptr [0x10fc6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6450))), 0x10f929d7u);
  /* 10f929d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f929da cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f929dc call 0x10f96800 */
  push32(0x10f929e1u); f_10f96800();
  /* 10f929e1 mov esi, esp */
  ESI = (ESP);
  /* 10f929e3 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f929e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f929ea call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f929f0u);
  /* 10f929f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f929f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f929f5 call 0x10f96800 */
  push32(0x10f929fau); f_10f96800();
  /* 10f929fa mov esi, esp */
  ESI = (ESP);
  /* 10f929fc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f929fe call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f92a04u);
  /* 10f92a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a09 call 0x10f96800 */
  push32(0x10f92a0eu); f_10f96800();
L_10f92a0e:;
  /* 10f92a0e mov esi, esp */
  ESI = (ESP);
  /* 10f92a10 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f92a12 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92a18u);
  /* 10f92a18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a1d call 0x10f96800 */
  push32(0x10f92a22u); f_10f96800();
  /* 10f92a22 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92a27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92a29 je 0x10f92aaf */
  if (C.zf) goto L_10f92aaf;
  /* 10f92a2f mov esi, esp */
  ESI = (ESP);
  /* 10f92a31 push 0x10fc33f8 */
  push32((uint32_t)(0x10fc33f8u));
  /* 10f92a36 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f92a3cu);
  /* 10f92a3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a41 call 0x10f96800 */
  push32(0x10f92a46u); f_10f96800();
  /* 10f92a46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92a48 jne 0x10f92aaf */
  if (!C.zf) goto L_10f92aaf;
  /* 10f92a4a mov esi, esp */
  ESI = (ESP);
  /* 10f92a4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92a4e push 7 */
  push32((uint32_t)(0x7u));
  /* 10f92a50 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92a56u);
  /* 10f92a56 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a59 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a5b call 0x10f96800 */
  push32(0x10f92a60u); f_10f96800();
  /* 10f92a60 mov esi, esp */
  ESI = (ESP);
  /* 10f92a62 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92a64 push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f92a69 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92a6b call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92a71u);
  /* 10f92a71 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a74 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a76 call 0x10f96800 */
  push32(0x10f92a7bu); f_10f96800();
  /* 10f92a7b mov esi, esp */
  ESI = (ESP);
  /* 10f92a7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92a7f push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f92a84 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f92a89 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92a8b call dword ptr [0x10fc6450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6450))), 0x10f92a91u);
  /* 10f92a91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92a94 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92a96 call 0x10f96800 */
  push32(0x10f92a9bu); f_10f96800();
  /* 10f92a9b mov esi, esp */
  ESI = (ESP);
  /* 10f92a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92a9f call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f92aa5u);
  /* 10f92aa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92aa8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92aaa call 0x10f96800 */
  push32(0x10f92aafu); f_10f96800();
L_10f92aaf:;
  /* 10f92aaf mov esi, esp */
  ESI = (ESP);
  /* 10f92ab1 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f92ab3 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92ab9u);
  /* 10f92ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92abc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92abe call 0x10f96800 */
  push32(0x10f92ac3u); f_10f96800();
  /* 10f92ac3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92ac8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92aca je 0x10f92b71 */
  if (C.zf) goto L_10f92b71;
  /* 10f92ad0 mov esi, esp */
  ESI = (ESP);
  /* 10f92ad2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92ad4 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92adau);
  /* 10f92ada add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92add cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92adf call 0x10f96800 */
  push32(0x10f92ae4u); f_10f96800();
  /* 10f92ae4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92ae9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92aeb je 0x10f92b71 */
  if (C.zf) goto L_10f92b71;
  /* 10f92af1 mov esi, esp */
  ESI = (ESP);
  /* 10f92af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92af5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f92af7 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92afdu);
  /* 10f92afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b02 call 0x10f96800 */
  push32(0x10f92b07u); f_10f96800();
  /* 10f92b07 mov esi, esp */
  ESI = (ESP);
  /* 10f92b09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92b0b push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f92b10 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92b12 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92b18u);
  /* 10f92b18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b1b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b1d call 0x10f96800 */
  push32(0x10f92b22u); f_10f96800();
  /* 10f92b22 mov esi, esp */
  ESI = (ESP);
  /* 10f92b24 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92b26 push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f92b2b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92b2d call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92b33u);
  /* 10f92b33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b38 call 0x10f96800 */
  push32(0x10f92b3du); f_10f96800();
  /* 10f92b3d mov esi, esp */
  ESI = (ESP);
  /* 10f92b3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92b41 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f92b46 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f92b4b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92b4d call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f92b53u);
  /* 10f92b53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b56 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b58 call 0x10f96800 */
  push32(0x10f92b5du); f_10f96800();
  /* 10f92b5d mov esi, esp */
  ESI = (ESP);
  /* 10f92b5f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92b61 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f92b67u);
  /* 10f92b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b6a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b6c call 0x10f96800 */
  push32(0x10f92b71u); f_10f96800();
L_10f92b71:;
  /* 10f92b71 mov esi, esp */
  ESI = (ESP);
  /* 10f92b73 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10f92b75 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92b7bu);
  /* 10f92b7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92b7e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92b80 call 0x10f96800 */
  push32(0x10f92b85u); f_10f96800();
  /* 10f92b85 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92b8c je 0x10f92c63 */
  if (C.zf) goto L_10f92c63;
  /* 10f92b92 mov esi, esp */
  ESI = (ESP);
  /* 10f92b94 push 0x10fc3400 */
  push32((uint32_t)(0x10fc3400u));
  /* 10f92b99 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f92b9fu);
  /* 10f92b9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92ba2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92ba4 call 0x10f96800 */
  push32(0x10f92ba9u); f_10f96800();
  /* 10f92ba9 cmp eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92bac jge 0x10f92c63 */
  if ((C.sf==C.of)) goto L_10f92c63;
  /* 10f92bb2 mov esi, esp */
  ESI = (ESP);
  /* 10f92bb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92bb6 push 0xf */
  push32((uint32_t)(0xfu));
  /* 10f92bb8 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92bbeu);
  /* 10f92bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92bc3 call 0x10f96800 */
  push32(0x10f92bc8u); f_10f96800();
  /* 10f92bc8 mov esi, esp */
  ESI = (ESP);
  /* 10f92bca push 0x10fbe154 */
  push32((uint32_t)(0x10fbe154u));
  /* 10f92bcf call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f92bd5u);
  /* 10f92bd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92bd8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92bda call 0x10f96800 */
  push32(0x10f92bdfu); f_10f96800();
  /* 10f92bdf mov esi, esp */
  ESI = (ESP);
  /* 10f92be1 push 0x10fbe14c */
  push32((uint32_t)(0x10fbe14cu));
  /* 10f92be6 call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f92becu);
  /* 10f92bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92bf1 call 0x10f96800 */
  push32(0x10f92bf6u); f_10f96800();
  /* 10f92bf6 mov esi, esp */
  ESI = (ESP);
  /* 10f92bf8 push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10f92bfa call dword ptr [0x10fc642c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc642c))), 0x10f92c00u);
  /* 10f92c00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c03 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c05 call 0x10f96800 */
  push32(0x10f92c0au); f_10f96800();
  /* 10f92c0a mov esi, esp */
  ESI = (ESP);
  /* 10f92c0c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10f92c0e call dword ptr [0x10fc6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6448))), 0x10f92c14u);
  /* 10f92c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c19 call 0x10f96800 */
  push32(0x10f92c1eu); f_10f96800();
  /* 10f92c1e mov esi, esp */
  ESI = (ESP);
  /* 10f92c20 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 10f92c22 call dword ptr [0x10fc6448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6448))), 0x10f92c28u);
  /* 10f92c28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c2b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c2d call 0x10f96800 */
  push32(0x10f92c32u); f_10f96800();
  /* 10f92c32 mov esi, esp */
  ESI = (ESP);
  /* 10f92c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92c36 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f92c38 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92c3eu);
  /* 10f92c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c43 call 0x10f96800 */
  push32(0x10f92c48u); f_10f96800();
  /* 10f92c48 mov esi, esp */
  ESI = (ESP);
  /* 10f92c4a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f92c4c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92c4e push 0x10fc3628 */
  push32((uint32_t)(0x10fc3628u));
  /* 10f92c53 call dword ptr [0x10fc6438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6438))), 0x10f92c59u);
  /* 10f92c59 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c5e call 0x10f96800 */
  push32(0x10f92c63u); f_10f96800();
L_10f92c63:;
  /* 10f92c63 mov esi, esp */
  ESI = (ESP);
  /* 10f92c65 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10f92c67 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92c6du);
  /* 10f92c6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c72 call 0x10f96800 */
  push32(0x10f92c77u); f_10f96800();
  /* 10f92c77 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92c7e je 0x10f93977 */
  if (C.zf) goto L_10f93977;
  /* 10f92c84 mov esi, esp */
  ESI = (ESP);
  /* 10f92c86 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f92c88 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92c8eu);
  /* 10f92c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92c91 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92c93 call 0x10f96800 */
  push32(0x10f92c98u); f_10f96800();
  /* 10f92c98 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92c9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92c9f je 0x10f92db1 */
  if (C.zf) goto L_10f92db1;
  /* 10f92ca5 mov esi, esp */
  ESI = (ESP);
  /* 10f92ca7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f92ca9 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92cafu);
  /* 10f92caf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92cb2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92cb4 call 0x10f96800 */
  push32(0x10f92cb9u); f_10f96800();
  /* 10f92cb9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92cbe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92cc0 je 0x10f92db1 */
  if (C.zf) goto L_10f92db1;
  /* 10f92cc6 mov esi, esp */
  ESI = (ESP);
  /* 10f92cc8 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f92cca call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92cd0u);
  /* 10f92cd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92cd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92cd5 call 0x10f96800 */
  push32(0x10f92cdau); f_10f96800();
  /* 10f92cda and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92ce1 je 0x10f92db1 */
  if (C.zf) goto L_10f92db1;
  /* 10f92ce7 mov esi, esp */
  ESI = (ESP);
  /* 10f92ce9 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92cee call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f92cf4u);
  /* 10f92cf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92cf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92cf9 call 0x10f96800 */
  push32(0x10f92cfeu); f_10f96800();
  /* 10f92cfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92d00 jne 0x10f92db1 */
  if (!C.zf) goto L_10f92db1;
  /* 10f92d06 cmp dword ptr [0x10fc3470], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3470))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92d0d jge 0x10f92db1 */
  if ((C.sf==C.of)) goto L_10f92db1;
  /* 10f92d13 mov esi, esp */
  ESI = (ESP);
  /* 10f92d15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92d17 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f92d1c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92d1e push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f92d23 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f92d28 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92d2d call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f92d33u);
  /* 10f92d33 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92d36 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92d38 call 0x10f96800 */
  push32(0x10f92d3du); f_10f96800();
  /* 10f92d3d mov esi, esp */
  ESI = (ESP);
  /* 10f92d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92d41 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92d46 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92d48 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92d4eu);
  /* 10f92d4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92d53 call 0x10f96800 */
  push32(0x10f92d58u); f_10f96800();
  /* 10f92d58 mov esi, esp */
  ESI = (ESP);
  /* 10f92d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92d5e push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f92d63 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92d65 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f92d6bu);
  /* 10f92d6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92d6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92d70 call 0x10f96800 */
  push32(0x10f92d75u); f_10f96800();
  /* 10f92d75 mov esi, esp */
  ESI = (ESP);
  /* 10f92d77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92d79 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10f92d7b call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92d81u);
  /* 10f92d81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92d84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92d86 call 0x10f96800 */
  push32(0x10f92d8bu); f_10f96800();
  /* 10f92d8b mov eax, dword ptr [0x10fc3470] */
  EAX = (r32((uint32_t)(0x10fc3470)));
  /* 10f92d90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92d93 mov dword ptr [0x10fc3470], eax */
  w32((uint32_t)(0x10fc3470), (EAX));
  /* 10f92d98 mov esi, esp */
  ESI = (ESP);
  /* 10f92d9a push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f92d9f push 5 */
  push32((uint32_t)(0x5u));
  /* 10f92da1 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f92da7u);
  /* 10f92da7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92daa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92dac call 0x10f96800 */
  push32(0x10f92db1u); f_10f96800();
L_10f92db1:;
  /* 10f92db1 mov esi, esp */
  ESI = (ESP);
  /* 10f92db3 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10f92db5 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92dbbu);
  /* 10f92dbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92dbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92dc0 call 0x10f96800 */
  push32(0x10f92dc5u); f_10f96800();
  /* 10f92dc5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92dca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92dcc je 0x10f92e4b */
  if (C.zf) goto L_10f92e4b;
  /* 10f92dce push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92dd3 call 0x10f91005 */
  push32(0x10f92dd8u); f_10f91005();
  /* 10f92dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92ddb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92ddd jle 0x10f92e4b */
  if ((C.zf||C.sf!=C.of)) goto L_10f92e4b;
  /* 10f92ddf mov esi, esp */
  ESI = (ESP);
  /* 10f92de1 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92de6 push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f92deb call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f92df1u);
  /* 10f92df1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92df4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92df6 call 0x10f96800 */
  push32(0x10f92dfbu); f_10f96800();
  /* 10f92dfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92dfd jle 0x10f92e4b */
  if ((C.zf||C.sf!=C.of)) goto L_10f92e4b;
  /* 10f92dff mov esi, esp */
  ESI = (ESP);
  /* 10f92e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92e03 push 0x24 */
  push32((uint32_t)(0x24u));
  /* 10f92e05 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92e0bu);
  /* 10f92e0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e10 call 0x10f96800 */
  push32(0x10f92e15u); f_10f96800();
  /* 10f92e15 mov esi, esp */
  ESI = (ESP);
  /* 10f92e17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92e19 push 0x10fc3508 */
  push32((uint32_t)(0x10fc3508u));
  /* 10f92e1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92e20 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92e26u);
  /* 10f92e26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e2b call 0x10f96800 */
  push32(0x10f92e30u); f_10f96800();
  /* 10f92e30 mov esi, esp */
  ESI = (ESP);
  /* 10f92e32 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92e34 push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f92e39 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92e3b call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f92e41u);
  /* 10f92e41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e44 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e46 call 0x10f96800 */
  push32(0x10f92e4bu); f_10f96800();
L_10f92e4b:;
  /* 10f92e4b mov esi, esp */
  ESI = (ESP);
  /* 10f92e4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92e4f call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f92e55u);
  /* 10f92e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e58 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e5a call 0x10f96800 */
  push32(0x10f92e5fu); f_10f96800();
  /* 10f92e5f cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e62 jle 0x10f93010 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93010;
  /* 10f92e68 mov esi, esp */
  ESI = (ESP);
  /* 10f92e6a push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 10f92e6c call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92e72u);
  /* 10f92e72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e77 call 0x10f96800 */
  push32(0x10f92e7cu); f_10f96800();
  /* 10f92e7c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92e81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92e83 je 0x10f92f76 */
  if (C.zf) goto L_10f92f76;
  /* 10f92e89 mov esi, esp */
  ESI = (ESP);
  /* 10f92e8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92e8d call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f92e93u);
  /* 10f92e93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92e96 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92e98 call 0x10f96800 */
  push32(0x10f92e9du); f_10f96800();
  /* 10f92e9d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92ea4 je 0x10f92f76 */
  if (C.zf) goto L_10f92f76;
  /* 10f92eaa mov esi, esp */
  ESI = (ESP);
  /* 10f92eac push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92eb1 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f92eb7u);
  /* 10f92eb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92eba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92ebc call 0x10f96800 */
  push32(0x10f92ec1u); f_10f96800();
  /* 10f92ec1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92ec3 jne 0x10f92f76 */
  if (!C.zf) goto L_10f92f76;
  /* 10f92ec9 cmp dword ptr [0x10fc3474], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3474))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92ed0 jge 0x10f92f76 */
  if ((C.sf==C.of)) goto L_10f92f76;
  /* 10f92ed6 mov esi, esp */
  ESI = (ESP);
  /* 10f92ed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92eda push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f92edf push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92ee1 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f92ee6 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f92eeb push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92ef0 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f92ef6u);
  /* 10f92ef6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92ef9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92efb call 0x10f96800 */
  push32(0x10f92f00u); f_10f96800();
  /* 10f92f00 mov esi, esp */
  ESI = (ESP);
  /* 10f92f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92f04 push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92f09 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92f0b call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92f11u);
  /* 10f92f11 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f14 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92f16 call 0x10f96800 */
  push32(0x10f92f1bu); f_10f96800();
  /* 10f92f1b mov esi, esp */
  ESI = (ESP);
  /* 10f92f1d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92f1f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92f21 push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f92f26 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92f28 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f92f2eu);
  /* 10f92f2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92f33 call 0x10f96800 */
  push32(0x10f92f38u); f_10f96800();
  /* 10f92f38 mov esi, esp */
  ESI = (ESP);
  /* 10f92f3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92f3c push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10f92f3e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92f44u);
  /* 10f92f44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92f49 call 0x10f96800 */
  push32(0x10f92f4eu); f_10f96800();
  /* 10f92f4e mov esi, esp */
  ESI = (ESP);
  /* 10f92f50 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f92f55 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f92f57 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f92f5du);
  /* 10f92f5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92f62 call 0x10f96800 */
  push32(0x10f92f67u); f_10f96800();
  /* 10f92f67 mov ecx, dword ptr [0x10fc3474] */
  ECX = (r32((uint32_t)(0x10fc3474)));
  /* 10f92f6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f70 mov dword ptr [0x10fc3474], ecx */
  w32((uint32_t)(0x10fc3474), (ECX));
L_10f92f76:;
  /* 10f92f76 mov esi, esp */
  ESI = (ESP);
  /* 10f92f78 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10f92f7a call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f92f80u);
  /* 10f92f80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92f83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92f85 call 0x10f96800 */
  push32(0x10f92f8au); f_10f96800();
  /* 10f92f8a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f92f8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92f91 je 0x10f93010 */
  if (C.zf) goto L_10f93010;
  /* 10f92f93 push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92f98 call 0x10f91005 */
  push32(0x10f92f9du); f_10f91005();
  /* 10f92f9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92fa0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92fa2 jle 0x10f93010 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93010;
  /* 10f92fa4 mov esi, esp */
  ESI = (ESP);
  /* 10f92fa6 push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92fab push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f92fb0 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f92fb6u);
  /* 10f92fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92fb9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92fbb call 0x10f96800 */
  push32(0x10f92fc0u); f_10f96800();
  /* 10f92fc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f92fc2 jle 0x10f93010 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93010;
  /* 10f92fc4 mov esi, esp */
  ESI = (ESP);
  /* 10f92fc6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92fc8 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 10f92fca call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f92fd0u);
  /* 10f92fd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92fd3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92fd5 call 0x10f96800 */
  push32(0x10f92fdau); f_10f96800();
  /* 10f92fda mov esi, esp */
  ESI = (ESP);
  /* 10f92fdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92fde push 0x10fc34b8 */
  push32((uint32_t)(0x10fc34b8u));
  /* 10f92fe3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f92fe5 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f92febu);
  /* 10f92feb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f92fee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f92ff0 call 0x10f96800 */
  push32(0x10f92ff5u); f_10f96800();
  /* 10f92ff5 mov esi, esp */
  ESI = (ESP);
  /* 10f92ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f92ff9 push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f92ffe push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93000 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93006u);
  /* 10f93006 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93009 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9300b call 0x10f96800 */
  push32(0x10f93010u); f_10f96800();
L_10f93010:;
  /* 10f93010 mov esi, esp */
  ESI = (ESP);
  /* 10f93012 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f93014 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9301au);
  /* 10f9301a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9301d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9301f call 0x10f96800 */
  push32(0x10f93024u); f_10f96800();
  /* 10f93024 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9302b je 0x10f9313f */
  if (C.zf) goto L_10f9313f;
  /* 10f93031 mov esi, esp */
  ESI = (ESP);
  /* 10f93033 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f93035 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9303bu);
  /* 10f9303b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9303e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93040 call 0x10f96800 */
  push32(0x10f93045u); f_10f96800();
  /* 10f93045 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9304a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9304c je 0x10f9313f */
  if (C.zf) goto L_10f9313f;
  /* 10f93052 mov esi, esp */
  ESI = (ESP);
  /* 10f93054 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f93056 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9305cu);
  /* 10f9305c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9305f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93061 call 0x10f96800 */
  push32(0x10f93066u); f_10f96800();
  /* 10f93066 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9306b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9306d je 0x10f9313f */
  if (C.zf) goto L_10f9313f;
  /* 10f93073 mov esi, esp */
  ESI = (ESP);
  /* 10f93075 push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f9307a call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93080u);
  /* 10f93080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93083 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93085 call 0x10f96800 */
  push32(0x10f9308au); f_10f96800();
  /* 10f9308a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9308c jne 0x10f9313f */
  if (!C.zf) goto L_10f9313f;
  /* 10f93092 cmp dword ptr [0x10fc3478], 5 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3478))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93099 jge 0x10f9313f */
  if ((C.sf==C.of)) goto L_10f9313f;
  /* 10f9309f mov esi, esp */
  ESI = (ESP);
  /* 10f930a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f930a3 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f930a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f930aa push 0x10fc3558 */
  push32((uint32_t)(0x10fc3558u));
  /* 10f930af push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f930b4 push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f930b9 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f930bfu);
  /* 10f930bf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f930c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f930c4 call 0x10f96800 */
  push32(0x10f930c9u); f_10f96800();
  /* 10f930c9 mov esi, esp */
  ESI = (ESP);
  /* 10f930cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f930cd push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f930d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f930d4 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f930dau);
  /* 10f930da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f930dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f930df call 0x10f96800 */
  push32(0x10f930e4u); f_10f96800();
  /* 10f930e4 mov esi, esp */
  ESI = (ESP);
  /* 10f930e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f930e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f930ea push 0x10fc35a8 */
  push32((uint32_t)(0x10fc35a8u));
  /* 10f930ef push 1 */
  push32((uint32_t)(0x1u));
  /* 10f930f1 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f930f7u);
  /* 10f930f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f930fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f930fc call 0x10f96800 */
  push32(0x10f93101u); f_10f96800();
  /* 10f93101 mov esi, esp */
  ESI = (ESP);
  /* 10f93103 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f93108 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f9310a call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f93110u);
  /* 10f93110 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93113 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93115 call 0x10f96800 */
  push32(0x10f9311au); f_10f96800();
  /* 10f9311a mov esi, esp */
  ESI = (ESP);
  /* 10f9311c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9311e push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f93120 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93126u);
  /* 10f93126 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93129 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9312b call 0x10f96800 */
  push32(0x10f93130u); f_10f96800();
  /* 10f93130 mov edx, dword ptr [0x10fc3478] */
  EDX = (r32((uint32_t)(0x10fc3478)));
  /* 10f93136 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93139 mov dword ptr [0x10fc3478], edx */
  w32((uint32_t)(0x10fc3478), (EDX));
L_10f9313f:;
  /* 10f9313f mov esi, esp */
  ESI = (ESP);
  /* 10f93141 push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f93146 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9314cu);
  /* 10f9314c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9314f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93151 call 0x10f96800 */
  push32(0x10f93156u); f_10f96800();
  /* 10f93156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93158 jle 0x10f931e7 */
  if ((C.zf||C.sf!=C.of)) goto L_10f931e7;
  /* 10f9315e mov esi, esp */
  ESI = (ESP);
  /* 10f93160 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f93162 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93168u);
  /* 10f93168 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9316b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9316d call 0x10f96800 */
  push32(0x10f93172u); f_10f96800();
  /* 10f93172 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93179 je 0x10f931e7 */
  if (C.zf) goto L_10f931e7;
  /* 10f9317b mov esi, esp */
  ESI = (ESP);
  /* 10f9317d push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f93182 push 0x10fc35a8 */
  push32((uint32_t)(0x10fc35a8u));
  /* 10f93187 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9318du);
  /* 10f9318d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93190 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93192 call 0x10f96800 */
  push32(0x10f93197u); f_10f96800();
  /* 10f93197 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93199 jle 0x10f931e7 */
  if ((C.zf||C.sf!=C.of)) goto L_10f931e7;
  /* 10f9319b mov esi, esp */
  ESI = (ESP);
  /* 10f9319d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9319f push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f931a1 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f931a7u);
  /* 10f931a7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f931aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f931ac call 0x10f96800 */
  push32(0x10f931b1u); f_10f96800();
  /* 10f931b1 mov esi, esp */
  ESI = (ESP);
  /* 10f931b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f931b5 push 0x10fc3510 */
  push32((uint32_t)(0x10fc3510u));
  /* 10f931ba push 1 */
  push32((uint32_t)(0x1u));
  /* 10f931bc call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f931c2u);
  /* 10f931c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f931c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f931c7 call 0x10f96800 */
  push32(0x10f931ccu); f_10f96800();
  /* 10f931cc mov esi, esp */
  ESI = (ESP);
  /* 10f931ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10f931d0 push 0x10fc3598 */
  push32((uint32_t)(0x10fc3598u));
  /* 10f931d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f931d7 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f931ddu);
  /* 10f931dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f931e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f931e2 call 0x10f96800 */
  push32(0x10f931e7u); f_10f96800();
L_10f931e7:;
  /* 10f931e7 mov esi, esp */
  ESI = (ESP);
  /* 10f931e9 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f931eb call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f931f1u);
  /* 10f931f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f931f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f931f6 call 0x10f96800 */
  push32(0x10f931fbu); f_10f96800();
  /* 10f931fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93200 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93202 je 0x10f9330a */
  if (C.zf) goto L_10f9330a;
  /* 10f93208 mov esi, esp */
  ESI = (ESP);
  /* 10f9320a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9320c call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93212u);
  /* 10f93212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93217 call 0x10f96800 */
  push32(0x10f9321cu); f_10f96800();
  /* 10f9321c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93221 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93223 je 0x10f9330a */
  if (C.zf) goto L_10f9330a;
  /* 10f93229 mov esi, esp */
  ESI = (ESP);
  /* 10f9322b push 6 */
  push32((uint32_t)(0x6u));
  /* 10f9322d call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93233u);
  /* 10f93233 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93236 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93238 call 0x10f96800 */
  push32(0x10f9323du); f_10f96800();
  /* 10f9323d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93242 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93244 je 0x10f9330a */
  if (C.zf) goto L_10f9330a;
  /* 10f9324a mov esi, esp */
  ESI = (ESP);
  /* 10f9324c push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f93251 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93257u);
  /* 10f93257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9325a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9325c call 0x10f96800 */
  push32(0x10f93261u); f_10f96800();
  /* 10f93261 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93263 jne 0x10f9330a */
  if (!C.zf) goto L_10f9330a;
  /* 10f93269 mov eax, dword ptr [0x10fc347c] */
  EAX = (r32((uint32_t)(0x10fc347c)));
  /* 10f9326e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93271 mov dword ptr [0x10fc347c], eax */
  w32((uint32_t)(0x10fc347c), (EAX));
  /* 10f93276 cmp dword ptr [0x10fc347c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc347c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9327d je 0x10f9330a */
  if (C.zf) goto L_10f9330a;
  /* 10f93283 mov esi, esp */
  ESI = (ESP);
  /* 10f93285 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93287 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f9328c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9328e push 0x10fc3558 */
  push32((uint32_t)(0x10fc3558u));
  /* 10f93293 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93298 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f9329d call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f932a3u);
  /* 10f932a3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f932a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f932a8 call 0x10f96800 */
  push32(0x10f932adu); f_10f96800();
  /* 10f932ad mov esi, esp */
  ESI = (ESP);
  /* 10f932af push 0 */
  push32((uint32_t)(0x0u));
  /* 10f932b1 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f932b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f932b8 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f932beu);
  /* 10f932be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f932c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f932c3 call 0x10f96800 */
  push32(0x10f932c8u); f_10f96800();
  /* 10f932c8 mov esi, esp */
  ESI = (ESP);
  /* 10f932ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10f932cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f932ce push 0x10fc35b8 */
  push32((uint32_t)(0x10fc35b8u));
  /* 10f932d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f932d5 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f932dbu);
  /* 10f932db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f932de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f932e0 call 0x10f96800 */
  push32(0x10f932e5u); f_10f96800();
  /* 10f932e5 mov esi, esp */
  ESI = (ESP);
  /* 10f932e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f932e9 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f932eb call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f932f1u);
  /* 10f932f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f932f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f932f6 call 0x10f96800 */
  push32(0x10f932fbu); f_10f96800();
  /* 10f932fb mov ecx, dword ptr [0x10fc347c] */
  ECX = (r32((uint32_t)(0x10fc347c)));
  /* 10f93301 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93304 mov dword ptr [0x10fc347c], ecx */
  w32((uint32_t)(0x10fc347c), (ECX));
L_10f9330a:;
  /* 10f9330a mov esi, esp */
  ESI = (ESP);
  /* 10f9330c push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f93311 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93317u);
  /* 10f93317 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9331a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9331c call 0x10f96800 */
  push32(0x10f93321u); f_10f96800();
  /* 10f93321 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93323 jle 0x10f933b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10f933b2;
  /* 10f93329 mov esi, esp */
  ESI = (ESP);
  /* 10f9332b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f9332d call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93333u);
  /* 10f93333 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93336 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93338 call 0x10f96800 */
  push32(0x10f9333du); f_10f96800();
  /* 10f9333d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93342 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93344 je 0x10f933b2 */
  if (C.zf) goto L_10f933b2;
  /* 10f93346 mov esi, esp */
  ESI = (ESP);
  /* 10f93348 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f9334d push 0x10fc35b8 */
  push32((uint32_t)(0x10fc35b8u));
  /* 10f93352 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f93358u);
  /* 10f93358 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9335b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9335d call 0x10f96800 */
  push32(0x10f93362u); f_10f96800();
  /* 10f93362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93364 jle 0x10f933b2 */
  if ((C.zf||C.sf!=C.of)) goto L_10f933b2;
  /* 10f93366 mov esi, esp */
  ESI = (ESP);
  /* 10f93368 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9336a push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10f9336c call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93372u);
  /* 10f93372 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93375 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93377 call 0x10f96800 */
  push32(0x10f9337cu); f_10f96800();
  /* 10f9337c mov esi, esp */
  ESI = (ESP);
  /* 10f9337e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93380 push 0x10fc3518 */
  push32((uint32_t)(0x10fc3518u));
  /* 10f93385 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93387 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9338du);
  /* 10f9338d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93390 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93392 call 0x10f96800 */
  push32(0x10f93397u); f_10f96800();
  /* 10f93397 mov esi, esp */
  ESI = (ESP);
  /* 10f93399 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9339b push 0x10fc3588 */
  push32((uint32_t)(0x10fc3588u));
  /* 10f933a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f933a2 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f933a8u);
  /* 10f933a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f933ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f933ad call 0x10f96800 */
  push32(0x10f933b2u); f_10f96800();
L_10f933b2:;
  /* 10f933b2 mov esi, esp */
  ESI = (ESP);
  /* 10f933b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f933b6 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f933bcu);
  /* 10f933bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f933bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f933c1 call 0x10f96800 */
  push32(0x10f933c6u); f_10f96800();
  /* 10f933c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f933c8 jle 0x10f935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f935a5;
  /* 10f933ce mov esi, esp */
  ESI = (ESP);
  /* 10f933d0 push 0x26 */
  push32((uint32_t)(0x26u));
  /* 10f933d2 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f933d8u);
  /* 10f933d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f933db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f933dd call 0x10f96800 */
  push32(0x10f933e2u); f_10f96800();
  /* 10f933e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f933e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f933e9 je 0x10f934fd */
  if (C.zf) goto L_10f934fd;
  /* 10f933ef mov esi, esp */
  ESI = (ESP);
  /* 10f933f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f933f3 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f933f9u);
  /* 10f933f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f933fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f933fe call 0x10f96800 */
  push32(0x10f93403u); f_10f96800();
  /* 10f93403 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93408 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9340a je 0x10f934fd */
  if (C.zf) goto L_10f934fd;
  /* 10f93410 mov esi, esp */
  ESI = (ESP);
  /* 10f93412 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f93414 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9341au);
  /* 10f9341a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9341d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9341f call 0x10f96800 */
  push32(0x10f93424u); f_10f96800();
  /* 10f93424 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93429 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9342b je 0x10f934fd */
  if (C.zf) goto L_10f934fd;
  /* 10f93431 mov esi, esp */
  ESI = (ESP);
  /* 10f93433 push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93438 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9343eu);
  /* 10f9343e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93441 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93443 call 0x10f96800 */
  push32(0x10f93448u); f_10f96800();
  /* 10f93448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9344a jne 0x10f934fd */
  if (!C.zf) goto L_10f934fd;
  /* 10f93450 cmp dword ptr [0x10fc3480], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3480))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93457 jge 0x10f934fd */
  if ((C.sf==C.of)) goto L_10f934fd;
  /* 10f9345d mov esi, esp */
  ESI = (ESP);
  /* 10f9345f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93461 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f93466 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93468 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f9346d push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93472 push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93477 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f9347du);
  /* 10f9347d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93482 call 0x10f96800 */
  push32(0x10f93487u); f_10f96800();
  /* 10f93487 mov esi, esp */
  ESI = (ESP);
  /* 10f93489 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9348b push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93490 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93492 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93498u);
  /* 10f93498 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9349b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9349d call 0x10f96800 */
  push32(0x10f934a2u); f_10f96800();
  /* 10f934a2 mov esi, esp */
  ESI = (ESP);
  /* 10f934a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f934a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f934a8 push 0x10fc35e8 */
  push32((uint32_t)(0x10fc35e8u));
  /* 10f934ad push 1 */
  push32((uint32_t)(0x1u));
  /* 10f934af call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f934b5u);
  /* 10f934b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f934b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f934ba call 0x10f96800 */
  push32(0x10f934bfu); f_10f96800();
  /* 10f934bf mov esi, esp */
  ESI = (ESP);
  /* 10f934c1 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f934c6 push 7 */
  push32((uint32_t)(0x7u));
  /* 10f934c8 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f934ceu);
  /* 10f934ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f934d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f934d3 call 0x10f96800 */
  push32(0x10f934d8u); f_10f96800();
  /* 10f934d8 mov esi, esp */
  ESI = (ESP);
  /* 10f934da push 1 */
  push32((uint32_t)(0x1u));
  /* 10f934dc push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10f934de call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f934e4u);
  /* 10f934e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f934e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f934e9 call 0x10f96800 */
  push32(0x10f934eeu); f_10f96800();
  /* 10f934ee mov edx, dword ptr [0x10fc3480] */
  EDX = (r32((uint32_t)(0x10fc3480)));
  /* 10f934f4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f934f7 mov dword ptr [0x10fc3480], edx */
  w32((uint32_t)(0x10fc3480), (EDX));
L_10f934fd:;
  /* 10f934fd mov esi, esp */
  ESI = (ESP);
  /* 10f934ff push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93504 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9350au);
  /* 10f9350a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9350d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9350f call 0x10f96800 */
  push32(0x10f93514u); f_10f96800();
  /* 10f93514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93516 jle 0x10f935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f935a5;
  /* 10f9351c mov esi, esp */
  ESI = (ESP);
  /* 10f9351e push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10f93520 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93526u);
  /* 10f93526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93529 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9352b call 0x10f96800 */
  push32(0x10f93530u); f_10f96800();
  /* 10f93530 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93535 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93537 je 0x10f935a5 */
  if (C.zf) goto L_10f935a5;
  /* 10f93539 mov esi, esp */
  ESI = (ESP);
  /* 10f9353b push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93540 push 0x10fc35e8 */
  push32((uint32_t)(0x10fc35e8u));
  /* 10f93545 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9354bu);
  /* 10f9354b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9354e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93550 call 0x10f96800 */
  push32(0x10f93555u); f_10f96800();
  /* 10f93555 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93557 jle 0x10f935a5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f935a5;
  /* 10f93559 mov esi, esp */
  ESI = (ESP);
  /* 10f9355b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9355d push 0x27 */
  push32((uint32_t)(0x27u));
  /* 10f9355f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93565u);
  /* 10f93565 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93568 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9356a call 0x10f96800 */
  push32(0x10f9356fu); f_10f96800();
  /* 10f9356f mov esi, esp */
  ESI = (ESP);
  /* 10f93571 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93573 push 0x10fc3498 */
  push32((uint32_t)(0x10fc3498u));
  /* 10f93578 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9357a call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93580u);
  /* 10f93580 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93583 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93585 call 0x10f96800 */
  push32(0x10f9358au); f_10f96800();
  /* 10f9358a mov esi, esp */
  ESI = (ESP);
  /* 10f9358c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9358e push 0x10fc3600 */
  push32((uint32_t)(0x10fc3600u));
  /* 10f93593 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93595 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f9359bu);
  /* 10f9359b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9359e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f935a0 call 0x10f96800 */
  push32(0x10f935a5u); f_10f96800();
L_10f935a5:;
  /* 10f935a5 mov esi, esp */
  ESI = (ESP);
  /* 10f935a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f935a9 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f935afu);
  /* 10f935af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f935b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f935b4 call 0x10f96800 */
  push32(0x10f935b9u); f_10f96800();
  /* 10f935b9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f935bc jle 0x10f9378d */
  if ((C.zf||C.sf!=C.of)) goto L_10f9378d;
  /* 10f935c2 mov esi, esp */
  ESI = (ESP);
  /* 10f935c4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f935c6 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f935ccu);
  /* 10f935cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f935cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f935d1 call 0x10f96800 */
  push32(0x10f935d6u); f_10f96800();
  /* 10f935d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f935db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f935dd je 0x10f936cb */
  if (C.zf) goto L_10f936cb;
  /* 10f935e3 mov esi, esp */
  ESI = (ESP);
  /* 10f935e5 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f935e7 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f935edu);
  /* 10f935ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f935f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f935f2 call 0x10f96800 */
  push32(0x10f935f7u); f_10f96800();
  /* 10f935f7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f935fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f935fe je 0x10f936cb */
  if (C.zf) goto L_10f936cb;
  /* 10f93604 mov esi, esp */
  ESI = (ESP);
  /* 10f93606 push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f9360b call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93611u);
  /* 10f93611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93616 call 0x10f96800 */
  push32(0x10f9361bu); f_10f96800();
  /* 10f9361b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9361d jne 0x10f936cb */
  if (!C.zf) goto L_10f936cb;
  /* 10f93623 cmp dword ptr [0x10fc3484], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3484))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9362a jge 0x10f936cb */
  if ((C.sf==C.of)) goto L_10f936cb;
  /* 10f93630 mov esi, esp */
  ESI = (ESP);
  /* 10f93632 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93634 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f93639 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9363b push 0x10fc3410 */
  push32((uint32_t)(0x10fc3410u));
  /* 10f93640 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93645 push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f9364a call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93650u);
  /* 10f93650 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93653 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93655 call 0x10f96800 */
  push32(0x10f9365au); f_10f96800();
  /* 10f9365a mov esi, esp */
  ESI = (ESP);
  /* 10f9365c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9365e push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f93663 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93665 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9366bu);
  /* 10f9366b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9366e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93670 call 0x10f96800 */
  push32(0x10f93675u); f_10f96800();
  /* 10f93675 mov esi, esp */
  ESI = (ESP);
  /* 10f93677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93679 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9367b push 0x10fc3468 */
  push32((uint32_t)(0x10fc3468u));
  /* 10f93680 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93682 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93688u);
  /* 10f93688 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9368b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9368d call 0x10f96800 */
  push32(0x10f93692u); f_10f96800();
  /* 10f93692 mov esi, esp */
  ESI = (ESP);
  /* 10f93694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93696 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f93698 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9369eu);
  /* 10f9369e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f936a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f936a3 call 0x10f96800 */
  push32(0x10f936a8u); f_10f96800();
  /* 10f936a8 mov esi, esp */
  ESI = (ESP);
  /* 10f936aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10f936ac push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f936ae call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f936b4u);
  /* 10f936b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f936b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f936b9 call 0x10f96800 */
  push32(0x10f936beu); f_10f96800();
  /* 10f936be mov eax, dword ptr [0x10fc3484] */
  EAX = (r32((uint32_t)(0x10fc3484)));
  /* 10f936c3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f936c6 mov dword ptr [0x10fc3484], eax */
  w32((uint32_t)(0x10fc3484), (EAX));
L_10f936cb:;
  /* 10f936cb mov esi, esp */
  ESI = (ESP);
  /* 10f936cd push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f936d2 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f936d8u);
  /* 10f936d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f936db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f936dd call 0x10f96800 */
  push32(0x10f936e2u); f_10f96800();
  /* 10f936e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f936e4 jle 0x10f9378d */
  if ((C.zf||C.sf!=C.of)) goto L_10f9378d;
  /* 10f936ea mov esi, esp */
  ESI = (ESP);
  /* 10f936ec push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f936ee call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f936f4u);
  /* 10f936f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f936f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f936f9 call 0x10f96800 */
  push32(0x10f936feu); f_10f96800();
  /* 10f936fe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93703 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93705 je 0x10f9378d */
  if (C.zf) goto L_10f9378d;
  /* 10f9370b mov esi, esp */
  ESI = (ESP);
  /* 10f9370d push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f93712 push 0x10fc3468 */
  push32((uint32_t)(0x10fc3468u));
  /* 10f93717 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9371du);
  /* 10f9371d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93720 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93722 call 0x10f96800 */
  push32(0x10f93727u); f_10f96800();
  /* 10f93727 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93729 jle 0x10f9378d */
  if ((C.zf||C.sf!=C.of)) goto L_10f9378d;
  /* 10f9372b mov esi, esp */
  ESI = (ESP);
  /* 10f9372d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9372f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f93731 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93737u);
  /* 10f93737 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9373a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9373c call 0x10f96800 */
  push32(0x10f93741u); f_10f96800();
  /* 10f93741 mov esi, esp */
  ESI = (ESP);
  /* 10f93743 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93745 push 0x10fc3538 */
  push32((uint32_t)(0x10fc3538u));
  /* 10f9374a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9374c call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93752u);
  /* 10f93752 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93755 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93757 call 0x10f96800 */
  push32(0x10f9375cu); f_10f96800();
  /* 10f9375c mov esi, esp */
  ESI = (ESP);
  /* 10f9375e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93760 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f93762 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93768u);
  /* 10f93768 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9376b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9376d call 0x10f96800 */
  push32(0x10f93772u); f_10f96800();
  /* 10f93772 mov esi, esp */
  ESI = (ESP);
  /* 10f93774 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93776 push 0x10fc3570 */
  push32((uint32_t)(0x10fc3570u));
  /* 10f9377b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9377d call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93783u);
  /* 10f93783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93786 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93788 call 0x10f96800 */
  push32(0x10f9378du); f_10f96800();
L_10f9378d:;
  /* 10f9378d mov esi, esp */
  ESI = (ESP);
  /* 10f9378f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93791 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f93797u);
  /* 10f93797 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9379a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9379c call 0x10f96800 */
  push32(0x10f937a1u); f_10f96800();
  /* 10f937a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f937a4 jle 0x10f93977 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93977;
  /* 10f937aa mov esi, esp */
  ESI = (ESP);
  /* 10f937ac push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f937ae call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f937b4u);
  /* 10f937b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f937b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f937b9 call 0x10f96800 */
  push32(0x10f937beu); f_10f96800();
  /* 10f937be and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f937c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f937c5 je 0x10f938b5 */
  if (C.zf) goto L_10f938b5;
  /* 10f937cb mov esi, esp */
  ESI = (ESP);
  /* 10f937cd push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f937cf call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f937d5u);
  /* 10f937d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f937d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f937da call 0x10f96800 */
  push32(0x10f937dfu); f_10f96800();
  /* 10f937df and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f937e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f937e6 je 0x10f938b5 */
  if (C.zf) goto L_10f938b5;
  /* 10f937ec mov esi, esp */
  ESI = (ESP);
  /* 10f937ee push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f937f3 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f937f9u);
  /* 10f937f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f937fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f937fe call 0x10f96800 */
  push32(0x10f93803u); f_10f96800();
  /* 10f93803 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93805 jne 0x10f938b5 */
  if (!C.zf) goto L_10f938b5;
  /* 10f9380b cmp dword ptr [0x10fc3488], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3488))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93812 jge 0x10f938b5 */
  if ((C.sf==C.of)) goto L_10f938b5;
  /* 10f93818 mov esi, esp */
  ESI = (ESP);
  /* 10f9381a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9381c push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f93821 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93823 push 0x10fc3410 */
  push32((uint32_t)(0x10fc3410u));
  /* 10f93828 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f9382d push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f93832 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93838u);
  /* 10f93838 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9383b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9383d call 0x10f96800 */
  push32(0x10f93842u); f_10f96800();
  /* 10f93842 mov esi, esp */
  ESI = (ESP);
  /* 10f93844 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93846 push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f9384b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9384d call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93853u);
  /* 10f93853 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93856 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93858 call 0x10f96800 */
  push32(0x10f9385du); f_10f96800();
  /* 10f9385d mov esi, esp */
  ESI = (ESP);
  /* 10f9385f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93861 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93863 push 0x10fc3610 */
  push32((uint32_t)(0x10fc3610u));
  /* 10f93868 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9386a call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93870u);
  /* 10f93870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93875 call 0x10f96800 */
  push32(0x10f9387au); f_10f96800();
  /* 10f9387a mov esi, esp */
  ESI = (ESP);
  /* 10f9387c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9387e push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f93880 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93886u);
  /* 10f93886 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93889 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9388b call 0x10f96800 */
  push32(0x10f93890u); f_10f96800();
  /* 10f93890 mov esi, esp */
  ESI = (ESP);
  /* 10f93892 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93894 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10f93896 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9389cu);
  /* 10f9389c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9389f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f938a1 call 0x10f96800 */
  push32(0x10f938a6u); f_10f96800();
  /* 10f938a6 mov ecx, dword ptr [0x10fc3488] */
  ECX = (r32((uint32_t)(0x10fc3488)));
  /* 10f938ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f938af mov dword ptr [0x10fc3488], ecx */
  w32((uint32_t)(0x10fc3488), (ECX));
L_10f938b5:;
  /* 10f938b5 mov esi, esp */
  ESI = (ESP);
  /* 10f938b7 push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f938bc call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f938c2u);
  /* 10f938c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f938c5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f938c7 call 0x10f96800 */
  push32(0x10f938ccu); f_10f96800();
  /* 10f938cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f938ce jle 0x10f93977 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93977;
  /* 10f938d4 mov esi, esp */
  ESI = (ESP);
  /* 10f938d6 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10f938d8 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f938deu);
  /* 10f938de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f938e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f938e3 call 0x10f96800 */
  push32(0x10f938e8u); f_10f96800();
  /* 10f938e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f938ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f938ef je 0x10f93977 */
  if (C.zf) goto L_10f93977;
  /* 10f938f5 mov esi, esp */
  ESI = (ESP);
  /* 10f938f7 push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f938fc push 0x10fc3610 */
  push32((uint32_t)(0x10fc3610u));
  /* 10f93901 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f93907u);
  /* 10f93907 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9390a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9390c call 0x10f96800 */
  push32(0x10f93911u); f_10f96800();
  /* 10f93911 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93913 jle 0x10f93977 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93977;
  /* 10f93915 mov esi, esp */
  ESI = (ESP);
  /* 10f93917 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93919 push 0x10fc34a0 */
  push32((uint32_t)(0x10fc34a0u));
  /* 10f9391e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93920 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93926u);
  /* 10f93926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9392b call 0x10f96800 */
  push32(0x10f93930u); f_10f96800();
  /* 10f93930 mov esi, esp */
  ESI = (ESP);
  /* 10f93932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93934 push 0x10fc3620 */
  push32((uint32_t)(0x10fc3620u));
  /* 10f93939 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9393b call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93941u);
  /* 10f93941 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93944 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93946 call 0x10f96800 */
  push32(0x10f9394bu); f_10f96800();
  /* 10f9394b mov esi, esp */
  ESI = (ESP);
  /* 10f9394d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9394f push 0x29 */
  push32((uint32_t)(0x29u));
  /* 10f93951 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93957u);
  /* 10f93957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9395a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9395c call 0x10f96800 */
  push32(0x10f93961u); f_10f96800();
  /* 10f93961 mov esi, esp */
  ESI = (ESP);
  /* 10f93963 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93965 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 10f93967 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9396du);
  /* 10f9396d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93970 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93972 call 0x10f96800 */
  push32(0x10f93977u); f_10f96800();
L_10f93977:;
  /* 10f93977 mov esi, esp */
  ESI = (ESP);
  /* 10f93979 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10f9397b call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93981u);
  /* 10f93981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93984 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93986 call 0x10f96800 */
  push32(0x10f9398bu); f_10f96800();
  /* 10f9398b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93990 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93992 je 0x10f947c6 */
  if (C.zf) goto L_10f947c6;
  /* 10f93998 mov esi, esp */
  ESI = (ESP);
  /* 10f9399a push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f9399c call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f939a2u);
  /* 10f939a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f939a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f939a7 call 0x10f96800 */
  push32(0x10f939acu); f_10f96800();
  /* 10f939ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f939b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f939b3 je 0x10f93ac7 */
  if (C.zf) goto L_10f93ac7;
  /* 10f939b9 mov esi, esp */
  ESI = (ESP);
  /* 10f939bb push 3 */
  push32((uint32_t)(0x3u));
  /* 10f939bd call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f939c3u);
  /* 10f939c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f939c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f939c8 call 0x10f96800 */
  push32(0x10f939cdu); f_10f96800();
  /* 10f939cd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f939d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f939d4 je 0x10f93ac7 */
  if (C.zf) goto L_10f93ac7;
  /* 10f939da mov esi, esp */
  ESI = (ESP);
  /* 10f939dc push 7 */
  push32((uint32_t)(0x7u));
  /* 10f939de call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f939e4u);
  /* 10f939e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f939e7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f939e9 call 0x10f96800 */
  push32(0x10f939eeu); f_10f96800();
  /* 10f939ee and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f939f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f939f5 je 0x10f93ac7 */
  if (C.zf) goto L_10f93ac7;
  /* 10f939fb mov esi, esp */
  ESI = (ESP);
  /* 10f939fd push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93a02 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93a08u);
  /* 10f93a08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93a0b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a0d call 0x10f96800 */
  push32(0x10f93a12u); f_10f96800();
  /* 10f93a12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93a14 jne 0x10f93ac7 */
  if (!C.zf) goto L_10f93ac7;
  /* 10f93a1a cmp dword ptr [0x10fc348c], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc348c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a21 jge 0x10f93ac7 */
  if ((C.sf==C.of)) goto L_10f93ac7;
  /* 10f93a27 mov esi, esp */
  ESI = (ESP);
  /* 10f93a29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93a2b push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f93a30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93a32 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f93a37 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93a3c push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93a41 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93a47u);
  /* 10f93a47 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93a4a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a4c call 0x10f96800 */
  push32(0x10f93a51u); f_10f96800();
  /* 10f93a51 mov esi, esp */
  ESI = (ESP);
  /* 10f93a53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93a55 push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93a5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93a5c call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93a62u);
  /* 10f93a62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a67 call 0x10f96800 */
  push32(0x10f93a6cu); f_10f96800();
  /* 10f93a6c mov esi, esp */
  ESI = (ESP);
  /* 10f93a6e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93a70 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93a72 push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f93a77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93a79 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93a7fu);
  /* 10f93a7f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93a82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a84 call 0x10f96800 */
  push32(0x10f93a89u); f_10f96800();
  /* 10f93a89 mov esi, esp */
  ESI = (ESP);
  /* 10f93a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93a8d push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10f93a8f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93a95u);
  /* 10f93a95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93a98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93a9a call 0x10f96800 */
  push32(0x10f93a9fu); f_10f96800();
  /* 10f93a9f mov esi, esp */
  ESI = (ESP);
  /* 10f93aa1 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f93aa6 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f93aa8 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f93aaeu);
  /* 10f93aae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ab1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ab3 call 0x10f96800 */
  push32(0x10f93ab8u); f_10f96800();
  /* 10f93ab8 mov edx, dword ptr [0x10fc348c] */
  EDX = (r32((uint32_t)(0x10fc348c)));
  /* 10f93abe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ac1 mov dword ptr [0x10fc348c], edx */
  w32((uint32_t)(0x10fc348c), (EDX));
L_10f93ac7:;
  /* 10f93ac7 mov esi, esp */
  ESI = (ESP);
  /* 10f93ac9 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10f93acb call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93ad1u);
  /* 10f93ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ad4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ad6 call 0x10f96800 */
  push32(0x10f93adbu); f_10f96800();
  /* 10f93adb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93ae0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93ae2 je 0x10f93b61 */
  if (C.zf) goto L_10f93b61;
  /* 10f93ae4 push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93ae9 call 0x10f91005 */
  push32(0x10f93aeeu); f_10f91005();
  /* 10f93aee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93af1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93af3 jle 0x10f93b61 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93b61;
  /* 10f93af5 mov esi, esp */
  ESI = (ESP);
  /* 10f93af7 push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93afc push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f93b01 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f93b07u);
  /* 10f93b07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b0a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b0c call 0x10f96800 */
  push32(0x10f93b11u); f_10f96800();
  /* 10f93b11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93b13 jle 0x10f93b61 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93b61;
  /* 10f93b15 mov esi, esp */
  ESI = (ESP);
  /* 10f93b17 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93b19 push 0x25 */
  push32((uint32_t)(0x25u));
  /* 10f93b1b call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93b21u);
  /* 10f93b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b26 call 0x10f96800 */
  push32(0x10f93b2bu); f_10f96800();
  /* 10f93b2b mov esi, esp */
  ESI = (ESP);
  /* 10f93b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93b2f push 0x10fc3520 */
  push32((uint32_t)(0x10fc3520u));
  /* 10f93b34 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93b36 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93b3cu);
  /* 10f93b3c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b3f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b41 call 0x10f96800 */
  push32(0x10f93b46u); f_10f96800();
  /* 10f93b46 mov esi, esp */
  ESI = (ESP);
  /* 10f93b48 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93b4a push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f93b4f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93b51 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93b57u);
  /* 10f93b57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b5c call 0x10f96800 */
  push32(0x10f93b61u); f_10f96800();
L_10f93b61:;
  /* 10f93b61 mov esi, esp */
  ESI = (ESP);
  /* 10f93b63 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93b65 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f93b6bu);
  /* 10f93b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b70 call 0x10f96800 */
  push32(0x10f93b75u); f_10f96800();
  /* 10f93b75 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b78 jle 0x10f93d24 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93d24;
  /* 10f93b7e mov esi, esp */
  ESI = (ESP);
  /* 10f93b80 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10f93b82 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93b88u);
  /* 10f93b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93b8d call 0x10f96800 */
  push32(0x10f93b92u); f_10f96800();
  /* 10f93b92 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93b97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93b99 je 0x10f93c8a */
  if (C.zf) goto L_10f93c8a;
  /* 10f93b9f mov esi, esp */
  ESI = (ESP);
  /* 10f93ba1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93ba3 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93ba9u);
  /* 10f93ba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93bac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93bae call 0x10f96800 */
  push32(0x10f93bb3u); f_10f96800();
  /* 10f93bb3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93bba je 0x10f93c8a */
  if (C.zf) goto L_10f93c8a;
  /* 10f93bc0 mov esi, esp */
  ESI = (ESP);
  /* 10f93bc2 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93bc7 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93bcdu);
  /* 10f93bcd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93bd0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93bd2 call 0x10f96800 */
  push32(0x10f93bd7u); f_10f96800();
  /* 10f93bd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93bd9 jne 0x10f93c8a */
  if (!C.zf) goto L_10f93c8a;
  /* 10f93bdf cmp dword ptr [0x10fc3490], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3490))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93be6 jge 0x10f93c8a */
  if ((C.sf==C.of)) goto L_10f93c8a;
  /* 10f93bec mov esi, esp */
  ESI = (ESP);
  /* 10f93bee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93bf0 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f93bf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93bf7 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f93bfc push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93c01 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93c06 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93c0cu);
  /* 10f93c0c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c11 call 0x10f96800 */
  push32(0x10f93c16u); f_10f96800();
  /* 10f93c16 mov esi, esp */
  ESI = (ESP);
  /* 10f93c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93c1a push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93c21 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93c27u);
  /* 10f93c27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c2a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c2c call 0x10f96800 */
  push32(0x10f93c31u); f_10f96800();
  /* 10f93c31 mov esi, esp */
  ESI = (ESP);
  /* 10f93c33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93c35 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93c37 push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f93c3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93c3e call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93c44u);
  /* 10f93c44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c49 call 0x10f96800 */
  push32(0x10f93c4eu); f_10f96800();
  /* 10f93c4e mov esi, esp */
  ESI = (ESP);
  /* 10f93c50 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93c52 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10f93c54 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93c5au);
  /* 10f93c5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c5f call 0x10f96800 */
  push32(0x10f93c64u); f_10f96800();
  /* 10f93c64 mov esi, esp */
  ESI = (ESP);
  /* 10f93c66 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f93c6b push 5 */
  push32((uint32_t)(0x5u));
  /* 10f93c6d call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f93c73u);
  /* 10f93c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c76 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c78 call 0x10f96800 */
  push32(0x10f93c7du); f_10f96800();
  /* 10f93c7d mov eax, dword ptr [0x10fc3490] */
  EAX = (r32((uint32_t)(0x10fc3490)));
  /* 10f93c82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c85 mov dword ptr [0x10fc3490], eax */
  w32((uint32_t)(0x10fc3490), (EAX));
L_10f93c8a:;
  /* 10f93c8a mov esi, esp */
  ESI = (ESP);
  /* 10f93c8c push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10f93c8e call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93c94u);
  /* 10f93c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93c97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93c99 call 0x10f96800 */
  push32(0x10f93c9eu); f_10f96800();
  /* 10f93c9e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93ca3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93ca5 je 0x10f93d24 */
  if (C.zf) goto L_10f93d24;
  /* 10f93ca7 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93cac call 0x10f91005 */
  push32(0x10f93cb1u); f_10f91005();
  /* 10f93cb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93cb6 jle 0x10f93d24 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93d24;
  /* 10f93cb8 mov esi, esp */
  ESI = (ESP);
  /* 10f93cba push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93cbf push 0x10fc35d8 */
  push32((uint32_t)(0x10fc35d8u));
  /* 10f93cc4 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f93ccau);
  /* 10f93cca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ccd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ccf call 0x10f96800 */
  push32(0x10f93cd4u); f_10f96800();
  /* 10f93cd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93cd6 jle 0x10f93d24 */
  if ((C.zf||C.sf!=C.of)) goto L_10f93d24;
  /* 10f93cd8 mov esi, esp */
  ESI = (ESP);
  /* 10f93cda push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93cdc push 0x31 */
  push32((uint32_t)(0x31u));
  /* 10f93cde call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93ce4u);
  /* 10f93ce4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ce7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ce9 call 0x10f96800 */
  push32(0x10f93ceeu); f_10f96800();
  /* 10f93cee mov esi, esp */
  ESI = (ESP);
  /* 10f93cf0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93cf2 push 0x10fc34c0 */
  push32((uint32_t)(0x10fc34c0u));
  /* 10f93cf7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93cf9 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93cffu);
  /* 10f93cff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d04 call 0x10f96800 */
  push32(0x10f93d09u); f_10f96800();
  /* 10f93d09 mov esi, esp */
  ESI = (ESP);
  /* 10f93d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93d0d push 0x10fc35c8 */
  push32((uint32_t)(0x10fc35c8u));
  /* 10f93d12 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93d14 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93d1au);
  /* 10f93d1a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d1f call 0x10f96800 */
  push32(0x10f93d24u); f_10f96800();
L_10f93d24:;
  /* 10f93d24 mov esi, esp */
  ESI = (ESP);
  /* 10f93d26 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f93d28 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93d2eu);
  /* 10f93d2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d33 call 0x10f96800 */
  push32(0x10f93d38u); f_10f96800();
  /* 10f93d38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93d3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93d3f je 0x10f93e53 */
  if (C.zf) goto L_10f93e53;
  /* 10f93d45 mov esi, esp */
  ESI = (ESP);
  /* 10f93d47 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f93d49 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93d4fu);
  /* 10f93d4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d54 call 0x10f96800 */
  push32(0x10f93d59u); f_10f96800();
  /* 10f93d59 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93d60 je 0x10f93e53 */
  if (C.zf) goto L_10f93e53;
  /* 10f93d66 mov esi, esp */
  ESI = (ESP);
  /* 10f93d68 push 5 */
  push32((uint32_t)(0x5u));
  /* 10f93d6a call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93d70u);
  /* 10f93d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d73 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d75 call 0x10f96800 */
  push32(0x10f93d7au); f_10f96800();
  /* 10f93d7a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93d7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93d81 je 0x10f93e53 */
  if (C.zf) goto L_10f93e53;
  /* 10f93d87 mov esi, esp */
  ESI = (ESP);
  /* 10f93d89 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93d8e call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93d94u);
  /* 10f93d94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93d97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93d99 call 0x10f96800 */
  push32(0x10f93d9eu); f_10f96800();
  /* 10f93d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93da0 jne 0x10f93e53 */
  if (!C.zf) goto L_10f93e53;
  /* 10f93da6 cmp dword ptr [0x10fc3640], 5 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3640))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93dad jge 0x10f93e53 */
  if ((C.sf==C.of)) goto L_10f93e53;
  /* 10f93db3 mov esi, esp */
  ESI = (ESP);
  /* 10f93db5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93db7 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f93dbc push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93dbe push 0x10fc3558 */
  push32((uint32_t)(0x10fc3558u));
  /* 10f93dc3 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93dc8 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93dcd call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93dd3u);
  /* 10f93dd3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93dd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93dd8 call 0x10f96800 */
  push32(0x10f93dddu); f_10f96800();
  /* 10f93ddd mov esi, esp */
  ESI = (ESP);
  /* 10f93ddf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93de1 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93de8 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93deeu);
  /* 10f93dee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93df1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93df3 call 0x10f96800 */
  push32(0x10f93df8u); f_10f96800();
  /* 10f93df8 mov esi, esp */
  ESI = (ESP);
  /* 10f93dfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93dfc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93dfe push 0x10fc3598 */
  push32((uint32_t)(0x10fc3598u));
  /* 10f93e03 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93e05 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93e0bu);
  /* 10f93e0b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93e10 call 0x10f96800 */
  push32(0x10f93e15u); f_10f96800();
  /* 10f93e15 mov esi, esp */
  ESI = (ESP);
  /* 10f93e17 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f93e1c push 6 */
  push32((uint32_t)(0x6u));
  /* 10f93e1e call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f93e24u);
  /* 10f93e24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e27 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93e29 call 0x10f96800 */
  push32(0x10f93e2eu); f_10f96800();
  /* 10f93e2e mov esi, esp */
  ESI = (ESP);
  /* 10f93e30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93e32 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f93e34 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93e3au);
  /* 10f93e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93e3f call 0x10f96800 */
  push32(0x10f93e44u); f_10f96800();
  /* 10f93e44 mov ecx, dword ptr [0x10fc3640] */
  ECX = (r32((uint32_t)(0x10fc3640)));
  /* 10f93e4a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e4d mov dword ptr [0x10fc3640], ecx */
  w32((uint32_t)(0x10fc3640), (ECX));
L_10f93e53:;
  /* 10f93e53 mov esi, esp */
  ESI = (ESP);
  /* 10f93e55 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93e5a call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93e60u);
  /* 10f93e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93e65 call 0x10f96800 */
  push32(0x10f93e6au); f_10f96800();
  /* 10f93e6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93e6c jle 0x10f93efb */
  if ((C.zf||C.sf!=C.of)) goto L_10f93efb;
  /* 10f93e72 mov esi, esp */
  ESI = (ESP);
  /* 10f93e74 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f93e76 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93e7cu);
  /* 10f93e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93e7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93e81 call 0x10f96800 */
  push32(0x10f93e86u); f_10f96800();
  /* 10f93e86 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93e8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93e8d je 0x10f93efb */
  if (C.zf) goto L_10f93efb;
  /* 10f93e8f mov esi, esp */
  ESI = (ESP);
  /* 10f93e91 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93e96 push 0x10fc3598 */
  push32((uint32_t)(0x10fc3598u));
  /* 10f93e9b call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f93ea1u);
  /* 10f93ea1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ea4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ea6 call 0x10f96800 */
  push32(0x10f93eabu); f_10f96800();
  /* 10f93eab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93ead jle 0x10f93efb */
  if ((C.zf||C.sf!=C.of)) goto L_10f93efb;
  /* 10f93eaf mov esi, esp */
  ESI = (ESP);
  /* 10f93eb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93eb3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10f93eb5 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f93ebbu);
  /* 10f93ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ebe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ec0 call 0x10f96800 */
  push32(0x10f93ec5u); f_10f96800();
  /* 10f93ec5 mov esi, esp */
  ESI = (ESP);
  /* 10f93ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93ec9 push 0x10fc3528 */
  push32((uint32_t)(0x10fc3528u));
  /* 10f93ece push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93ed0 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93ed6u);
  /* 10f93ed6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ed9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93edb call 0x10f96800 */
  push32(0x10f93ee0u); f_10f96800();
  /* 10f93ee0 mov esi, esp */
  ESI = (ESP);
  /* 10f93ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93ee4 push 0x10fc35a8 */
  push32((uint32_t)(0x10fc35a8u));
  /* 10f93ee9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93eeb call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f93ef1u);
  /* 10f93ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93ef4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93ef6 call 0x10f96800 */
  push32(0x10f93efbu); f_10f96800();
L_10f93efb:;
  /* 10f93efb mov esi, esp */
  ESI = (ESP);
  /* 10f93efd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93eff call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f93f05u);
  /* 10f93f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93f08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93f0a call 0x10f96800 */
  push32(0x10f93f0fu); f_10f96800();
  /* 10f93f0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93f11 jle 0x10f940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f940d5;
  /* 10f93f17 mov esi, esp */
  ESI = (ESP);
  /* 10f93f19 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10f93f1b call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f93f21u);
  /* 10f93f21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93f24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93f26 call 0x10f96800 */
  push32(0x10f93f2bu); f_10f96800();
  /* 10f93f2b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93f30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93f32 je 0x10f9402d */
  if (C.zf) goto L_10f9402d;
  /* 10f93f38 mov esi, esp */
  ESI = (ESP);
  /* 10f93f3a push 3 */
  push32((uint32_t)(0x3u));
  /* 10f93f3c call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93f42u);
  /* 10f93f42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93f47 call 0x10f96800 */
  push32(0x10f93f4cu); f_10f96800();
  /* 10f93f4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93f53 je 0x10f9402d */
  if (C.zf) goto L_10f9402d;
  /* 10f93f59 mov esi, esp */
  ESI = (ESP);
  /* 10f93f5b push 5 */
  push32((uint32_t)(0x5u));
  /* 10f93f5d call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f93f63u);
  /* 10f93f63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93f66 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93f68 call 0x10f96800 */
  push32(0x10f93f6du); f_10f96800();
  /* 10f93f6d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f93f72 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93f74 je 0x10f9402d */
  if (C.zf) goto L_10f9402d;
  /* 10f93f7a mov esi, esp */
  ESI = (ESP);
  /* 10f93f7c push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f93f81 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f93f87u);
  /* 10f93f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93f8a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93f8c call 0x10f96800 */
  push32(0x10f93f91u); f_10f96800();
  /* 10f93f91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f93f93 jne 0x10f9402d */
  if (!C.zf) goto L_10f9402d;
  /* 10f93f99 cmp dword ptr [0x10fc3644], 4 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3644))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93fa0 jge 0x10f9402d */
  if ((C.sf==C.of)) goto L_10f9402d;
  /* 10f93fa6 mov esi, esp */
  ESI = (ESP);
  /* 10f93fa8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93faa push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f93faf push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93fb1 push 0x10fc3560 */
  push32((uint32_t)(0x10fc3560u));
  /* 10f93fb6 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f93fbb push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f93fc0 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f93fc6u);
  /* 10f93fc6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93fc9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93fcb call 0x10f96800 */
  push32(0x10f93fd0u); f_10f96800();
  /* 10f93fd0 mov esi, esp */
  ESI = (ESP);
  /* 10f93fd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93fd4 push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f93fd9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93fdb call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f93fe1u);
  /* 10f93fe1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f93fe4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f93fe6 call 0x10f96800 */
  push32(0x10f93febu); f_10f96800();
  /* 10f93feb mov esi, esp */
  ESI = (ESP);
  /* 10f93fed push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93fef push 0 */
  push32((uint32_t)(0x0u));
  /* 10f93ff1 push 0x10fc35c0 */
  push32((uint32_t)(0x10fc35c0u));
  /* 10f93ff6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f93ff8 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f93ffeu);
  /* 10f93ffe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94003 call 0x10f96800 */
  push32(0x10f94008u); f_10f96800();
  /* 10f94008 mov esi, esp */
  ESI = (ESP);
  /* 10f9400a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9400c push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10f9400e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94014u);
  /* 10f94014 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94017 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94019 call 0x10f96800 */
  push32(0x10f9401eu); f_10f96800();
  /* 10f9401e mov edx, dword ptr [0x10fc3644] */
  EDX = (r32((uint32_t)(0x10fc3644)));
  /* 10f94024 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94027 mov dword ptr [0x10fc3644], edx */
  w32((uint32_t)(0x10fc3644), (EDX));
L_10f9402d:;
  /* 10f9402d mov esi, esp */
  ESI = (ESP);
  /* 10f9402f push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f94034 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9403au);
  /* 10f9403a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9403d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9403f call 0x10f96800 */
  push32(0x10f94044u); f_10f96800();
  /* 10f94044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94046 jle 0x10f940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f940d5;
  /* 10f9404c mov esi, esp */
  ESI = (ESP);
  /* 10f9404e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10f94050 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94056u);
  /* 10f94056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9405b call 0x10f96800 */
  push32(0x10f94060u); f_10f96800();
  /* 10f94060 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94065 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94067 je 0x10f940d5 */
  if (C.zf) goto L_10f940d5;
  /* 10f94069 mov esi, esp */
  ESI = (ESP);
  /* 10f9406b push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f94070 push 0x10fc35c0 */
  push32((uint32_t)(0x10fc35c0u));
  /* 10f94075 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9407bu);
  /* 10f9407b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9407e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94080 call 0x10f96800 */
  push32(0x10f94085u); f_10f96800();
  /* 10f94085 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94087 jle 0x10f940d5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f940d5;
  /* 10f94089 mov esi, esp */
  ESI = (ESP);
  /* 10f9408b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9408d push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 10f9408f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94095u);
  /* 10f94095 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94098 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9409a call 0x10f96800 */
  push32(0x10f9409fu); f_10f96800();
  /* 10f9409f mov esi, esp */
  ESI = (ESP);
  /* 10f940a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f940a3 push 0x10fc34a8 */
  push32((uint32_t)(0x10fc34a8u));
  /* 10f940a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f940aa call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f940b0u);
  /* 10f940b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f940b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f940b5 call 0x10f96800 */
  push32(0x10f940bau); f_10f96800();
  /* 10f940ba mov esi, esp */
  ESI = (ESP);
  /* 10f940bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f940be push 0x10fc35d0 */
  push32((uint32_t)(0x10fc35d0u));
  /* 10f940c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f940c5 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f940cbu);
  /* 10f940cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f940ce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f940d0 call 0x10f96800 */
  push32(0x10f940d5u); f_10f96800();
L_10f940d5:;
  /* 10f940d5 mov esi, esp */
  ESI = (ESP);
  /* 10f940d7 push 0xe */
  push32((uint32_t)(0xeu));
  /* 10f940d9 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f940dfu);
  /* 10f940df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f940e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f940e4 call 0x10f96800 */
  push32(0x10f940e9u); f_10f96800();
  /* 10f940e9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f940ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f940f0 je 0x10f941e9 */
  if (C.zf) goto L_10f941e9;
  /* 10f940f6 mov esi, esp */
  ESI = (ESP);
  /* 10f940f8 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f940fa call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94100u);
  /* 10f94100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94103 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94105 call 0x10f96800 */
  push32(0x10f9410au); f_10f96800();
  /* 10f9410a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9410f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94111 je 0x10f941e9 */
  if (C.zf) goto L_10f941e9;
  /* 10f94117 mov esi, esp */
  ESI = (ESP);
  /* 10f94119 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f9411b call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94121u);
  /* 10f94121 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94124 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94126 call 0x10f96800 */
  push32(0x10f9412bu); f_10f96800();
  /* 10f9412b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94130 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94132 je 0x10f941e9 */
  if (C.zf) goto L_10f941e9;
  /* 10f94138 mov esi, esp */
  ESI = (ESP);
  /* 10f9413a push 0x10fc3530 */
  push32((uint32_t)(0x10fc3530u));
  /* 10f9413f call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94145u);
  /* 10f94145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94148 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9414a call 0x10f96800 */
  push32(0x10f9414fu); f_10f96800();
  /* 10f9414f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94151 jne 0x10f941e9 */
  if (!C.zf) goto L_10f941e9;
  /* 10f94157 cmp dword ptr [0x10fc3648], 5 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3648))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9415e jge 0x10f941e9 */
  if ((C.sf==C.of)) goto L_10f941e9;
  /* 10f94164 mov esi, esp */
  ESI = (ESP);
  /* 10f94166 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94168 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f9416d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9416f push 0x10fc3558 */
  push32((uint32_t)(0x10fc3558u));
  /* 10f94174 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94179 push 0x10fc3530 */
  push32((uint32_t)(0x10fc3530u));
  /* 10f9417e call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94184u);
  /* 10f94184 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94187 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94189 call 0x10f96800 */
  push32(0x10f9418eu); f_10f96800();
  /* 10f9418e mov esi, esp */
  ESI = (ESP);
  /* 10f94190 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94192 push 0x10fc3530 */
  push32((uint32_t)(0x10fc3530u));
  /* 10f94197 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94199 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9419fu);
  /* 10f9419f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f941a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f941a4 call 0x10f96800 */
  push32(0x10f941a9u); f_10f96800();
  /* 10f941a9 mov esi, esp */
  ESI = (ESP);
  /* 10f941ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f941ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f941af push 0x10fc3580 */
  push32((uint32_t)(0x10fc3580u));
  /* 10f941b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f941b6 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f941bcu);
  /* 10f941bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f941bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f941c1 call 0x10f96800 */
  push32(0x10f941c6u); f_10f96800();
  /* 10f941c6 mov esi, esp */
  ESI = (ESP);
  /* 10f941c8 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10f941cd push 7 */
  push32((uint32_t)(0x7u));
  /* 10f941cf call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f941d5u);
  /* 10f941d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f941d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f941da call 0x10f96800 */
  push32(0x10f941dfu); f_10f96800();
  /* 10f941df mov dword ptr [0x10fc3648], 0xd */
  w32((uint32_t)(0x10fc3648), (0xdu));
L_10f941e9:;
  /* 10f941e9 mov esi, esp */
  ESI = (ESP);
  /* 10f941eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f941ed call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f941f3u);
  /* 10f941f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f941f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f941f8 call 0x10f96800 */
  push32(0x10f941fdu); f_10f96800();
  /* 10f941fd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94200 jle 0x10f943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f943d1;
  /* 10f94206 mov esi, esp */
  ESI = (ESP);
  /* 10f94208 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10f9420a call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94210u);
  /* 10f94210 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94213 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94215 call 0x10f96800 */
  push32(0x10f9421au); f_10f96800();
  /* 10f9421a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9421f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94221 je 0x10f9430f */
  if (C.zf) goto L_10f9430f;
  /* 10f94227 mov esi, esp */
  ESI = (ESP);
  /* 10f94229 push 0xc */
  push32((uint32_t)(0xcu));
  /* 10f9422b call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94231u);
  /* 10f94231 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94234 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94236 call 0x10f96800 */
  push32(0x10f9423bu); f_10f96800();
  /* 10f9423b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94240 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94242 je 0x10f9430f */
  if (C.zf) goto L_10f9430f;
  /* 10f94248 mov esi, esp */
  ESI = (ESP);
  /* 10f9424a push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f9424f call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94255u);
  /* 10f94255 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94258 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9425a call 0x10f96800 */
  push32(0x10f9425fu); f_10f96800();
  /* 10f9425f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94261 jne 0x10f9430f */
  if (!C.zf) goto L_10f9430f;
  /* 10f94267 cmp dword ptr [0x10fc364c], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10fc364c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9426e jge 0x10f9430f */
  if ((C.sf==C.of)) goto L_10f9430f;
  /* 10f94274 mov esi, esp */
  ESI = (ESP);
  /* 10f94276 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94278 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f9427d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9427f push 0x10fc3410 */
  push32((uint32_t)(0x10fc3410u));
  /* 10f94284 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94289 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f9428e call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94294u);
  /* 10f94294 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94297 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94299 call 0x10f96800 */
  push32(0x10f9429eu); f_10f96800();
  /* 10f9429e mov esi, esp */
  ESI = (ESP);
  /* 10f942a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f942a2 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f942a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f942a9 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f942afu);
  /* 10f942af add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f942b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f942b4 call 0x10f96800 */
  push32(0x10f942b9u); f_10f96800();
  /* 10f942b9 mov esi, esp */
  ESI = (ESP);
  /* 10f942bb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f942bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f942bf push 0x10fc3460 */
  push32((uint32_t)(0x10fc3460u));
  /* 10f942c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f942c6 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f942ccu);
  /* 10f942cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f942cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f942d1 call 0x10f96800 */
  push32(0x10f942d6u); f_10f96800();
  /* 10f942d6 mov esi, esp */
  ESI = (ESP);
  /* 10f942d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f942da push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10f942dc call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f942e2u);
  /* 10f942e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f942e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f942e7 call 0x10f96800 */
  push32(0x10f942ecu); f_10f96800();
  /* 10f942ec mov esi, esp */
  ESI = (ESP);
  /* 10f942ee push 1 */
  push32((uint32_t)(0x1u));
  /* 10f942f0 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f942f2 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f942f8u);
  /* 10f942f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f942fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f942fd call 0x10f96800 */
  push32(0x10f94302u); f_10f96800();
  /* 10f94302 mov eax, dword ptr [0x10fc364c] */
  EAX = (r32((uint32_t)(0x10fc364c)));
  /* 10f94307 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9430a mov dword ptr [0x10fc364c], eax */
  w32((uint32_t)(0x10fc364c), (EAX));
L_10f9430f:;
  /* 10f9430f mov esi, esp */
  ESI = (ESP);
  /* 10f94311 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f94316 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9431cu);
  /* 10f9431c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9431f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94321 call 0x10f96800 */
  push32(0x10f94326u); f_10f96800();
  /* 10f94326 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94328 jle 0x10f943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f943d1;
  /* 10f9432e mov esi, esp */
  ESI = (ESP);
  /* 10f94330 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f94332 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94338u);
  /* 10f94338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9433b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9433d call 0x10f96800 */
  push32(0x10f94342u); f_10f96800();
  /* 10f94342 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94349 je 0x10f943d1 */
  if (C.zf) goto L_10f943d1;
  /* 10f9434f mov esi, esp */
  ESI = (ESP);
  /* 10f94351 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f94356 push 0x10fc3460 */
  push32((uint32_t)(0x10fc3460u));
  /* 10f9435b call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94361u);
  /* 10f94361 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94364 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94366 call 0x10f96800 */
  push32(0x10f9436bu); f_10f96800();
  /* 10f9436b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9436d jle 0x10f943d1 */
  if ((C.zf||C.sf!=C.of)) goto L_10f943d1;
  /* 10f9436f mov esi, esp */
  ESI = (ESP);
  /* 10f94371 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94373 push 0x10fc3540 */
  push32((uint32_t)(0x10fc3540u));
  /* 10f94378 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9437a call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94380u);
  /* 10f94380 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94385 call 0x10f96800 */
  push32(0x10f9438au); f_10f96800();
  /* 10f9438a mov esi, esp */
  ESI = (ESP);
  /* 10f9438c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9438e push 0x10fc3578 */
  push32((uint32_t)(0x10fc3578u));
  /* 10f94393 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94395 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f9439bu);
  /* 10f9439b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9439e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943a0 call 0x10f96800 */
  push32(0x10f943a5u); f_10f96800();
  /* 10f943a5 mov esi, esp */
  ESI = (ESP);
  /* 10f943a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f943a9 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 10f943ab call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f943b1u);
  /* 10f943b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f943b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943b6 call 0x10f96800 */
  push32(0x10f943bbu); f_10f96800();
  /* 10f943bb mov esi, esp */
  ESI = (ESP);
  /* 10f943bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f943bf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10f943c1 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f943c7u);
  /* 10f943c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f943ca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943cc call 0x10f96800 */
  push32(0x10f943d1u); f_10f96800();
L_10f943d1:;
  /* 10f943d1 mov esi, esp */
  ESI = (ESP);
  /* 10f943d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f943d5 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f943dbu);
  /* 10f943db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f943de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943e0 call 0x10f96800 */
  push32(0x10f943e5u); f_10f96800();
  /* 10f943e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943e8 jle 0x10f945dc */
  if ((C.zf||C.sf!=C.of)) goto L_10f945dc;
  /* 10f943ee mov esi, esp */
  ESI = (ESP);
  /* 10f943f0 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10f943f2 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f943f8u);
  /* 10f943f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f943fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f943fd call 0x10f96800 */
  push32(0x10f94402u); f_10f96800();
  /* 10f94402 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94409 je 0x10f9451a */
  if (C.zf) goto L_10f9451a;
  /* 10f9440f mov esi, esp */
  ESI = (ESP);
  /* 10f94411 push 6 */
  push32((uint32_t)(0x6u));
  /* 10f94413 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94419u);
  /* 10f94419 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9441c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9441e call 0x10f96800 */
  push32(0x10f94423u); f_10f96800();
  /* 10f94423 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9442a je 0x10f9451a */
  if (C.zf) goto L_10f9451a;
  /* 10f94430 mov esi, esp */
  ESI = (ESP);
  /* 10f94432 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f94434 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9443au);
  /* 10f9443a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9443d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9443f call 0x10f96800 */
  push32(0x10f94444u); f_10f96800();
  /* 10f94444 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94449 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9444b je 0x10f9451a */
  if (C.zf) goto L_10f9451a;
  /* 10f94451 mov esi, esp */
  ESI = (ESP);
  /* 10f94453 push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f94458 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9445eu);
  /* 10f9445e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94461 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94463 call 0x10f96800 */
  push32(0x10f94468u); f_10f96800();
  /* 10f94468 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9446a jne 0x10f9451a */
  if (!C.zf) goto L_10f9451a;
  /* 10f94470 cmp dword ptr [0x10fc3650], 3 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3650))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94477 jge 0x10f9451a */
  if ((C.sf==C.of)) goto L_10f9451a;
  /* 10f9447d mov esi, esp */
  ESI = (ESP);
  /* 10f9447f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94481 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f94486 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94488 push 0x10fc3410 */
  push32((uint32_t)(0x10fc3410u));
  /* 10f9448d push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94492 push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f94497 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f9449du);
  /* 10f9449d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f944a0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f944a2 call 0x10f96800 */
  push32(0x10f944a7u); f_10f96800();
  /* 10f944a7 mov esi, esp */
  ESI = (ESP);
  /* 10f944a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f944ab push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f944b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f944b2 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f944b8u);
  /* 10f944b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f944bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f944bd call 0x10f96800 */
  push32(0x10f944c2u); f_10f96800();
  /* 10f944c2 mov esi, esp */
  ESI = (ESP);
  /* 10f944c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f944c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f944c8 push 0x10fc3630 */
  push32((uint32_t)(0x10fc3630u));
  /* 10f944cd push 1 */
  push32((uint32_t)(0x1u));
  /* 10f944cf call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f944d5u);
  /* 10f944d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f944d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f944da call 0x10f96800 */
  push32(0x10f944dfu); f_10f96800();
  /* 10f944df mov esi, esp */
  ESI = (ESP);
  /* 10f944e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f944e3 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10f944e5 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f944ebu);
  /* 10f944eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f944ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f944f0 call 0x10f96800 */
  push32(0x10f944f5u); f_10f96800();
  /* 10f944f5 mov esi, esp */
  ESI = (ESP);
  /* 10f944f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f944f9 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10f944fb call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94501u);
  /* 10f94501 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94504 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94506 call 0x10f96800 */
  push32(0x10f9450bu); f_10f96800();
  /* 10f9450b mov ecx, dword ptr [0x10fc3650] */
  ECX = (r32((uint32_t)(0x10fc3650)));
  /* 10f94511 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94514 mov dword ptr [0x10fc3650], ecx */
  w32((uint32_t)(0x10fc3650), (ECX));
L_10f9451a:;
  /* 10f9451a mov esi, esp */
  ESI = (ESP);
  /* 10f9451c push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f94521 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94527u);
  /* 10f94527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9452a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9452c call 0x10f96800 */
  push32(0x10f94531u); f_10f96800();
  /* 10f94531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94533 jle 0x10f945dc */
  if ((C.zf||C.sf!=C.of)) goto L_10f945dc;
  /* 10f94539 mov esi, esp */
  ESI = (ESP);
  /* 10f9453b push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10f9453d call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94543u);
  /* 10f94543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94546 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94548 call 0x10f96800 */
  push32(0x10f9454du); f_10f96800();
  /* 10f9454d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94554 je 0x10f945dc */
  if (C.zf) goto L_10f945dc;
  /* 10f9455a mov esi, esp */
  ESI = (ESP);
  /* 10f9455c push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f94561 push 0x10fc3630 */
  push32((uint32_t)(0x10fc3630u));
  /* 10f94566 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9456cu);
  /* 10f9456c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9456f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94571 call 0x10f96800 */
  push32(0x10f94576u); f_10f96800();
  /* 10f94576 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94578 jle 0x10f945dc */
  if ((C.zf||C.sf!=C.of)) goto L_10f945dc;
  /* 10f9457a mov esi, esp */
  ESI = (ESP);
  /* 10f9457c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9457e push 0x10fc34b0 */
  push32((uint32_t)(0x10fc34b0u));
  /* 10f94583 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94585 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9458bu);
  /* 10f9458b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9458e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94590 call 0x10f96800 */
  push32(0x10f94595u); f_10f96800();
  /* 10f94595 mov esi, esp */
  ESI = (ESP);
  /* 10f94597 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94599 push 0x10fc35e0 */
  push32((uint32_t)(0x10fc35e0u));
  /* 10f9459e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f945a0 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f945a6u);
  /* 10f945a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f945a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f945ab call 0x10f96800 */
  push32(0x10f945b0u); f_10f96800();
  /* 10f945b0 mov esi, esp */
  ESI = (ESP);
  /* 10f945b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f945b4 push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 10f945b6 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f945bcu);
  /* 10f945bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f945bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f945c1 call 0x10f96800 */
  push32(0x10f945c6u); f_10f96800();
  /* 10f945c6 mov esi, esp */
  ESI = (ESP);
  /* 10f945c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f945ca push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10f945cc call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f945d2u);
  /* 10f945d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f945d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f945d7 call 0x10f96800 */
  push32(0x10f945dcu); f_10f96800();
L_10f945dc:;
  /* 10f945dc mov esi, esp */
  ESI = (ESP);
  /* 10f945de push 0 */
  push32((uint32_t)(0x0u));
  /* 10f945e0 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f945e6u);
  /* 10f945e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f945e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f945eb call 0x10f96800 */
  push32(0x10f945f0u); f_10f96800();
  /* 10f945f0 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f945f3 jle 0x10f947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f947c6;
  /* 10f945f9 mov esi, esp */
  ESI = (ESP);
  /* 10f945fb push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10f945fd call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94603u);
  /* 10f94603 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94608 call 0x10f96800 */
  push32(0x10f9460du); f_10f96800();
  /* 10f9460d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94614 je 0x10f94704 */
  if (C.zf) goto L_10f94704;
  /* 10f9461a mov esi, esp */
  ESI = (ESP);
  /* 10f9461c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10f9461e call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94624u);
  /* 10f94624 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94627 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94629 call 0x10f96800 */
  push32(0x10f9462eu); f_10f96800();
  /* 10f9462e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94633 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94635 je 0x10f94704 */
  if (C.zf) goto L_10f94704;
  /* 10f9463b mov esi, esp */
  ESI = (ESP);
  /* 10f9463d push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f94642 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94648u);
  /* 10f94648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9464b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9464d call 0x10f96800 */
  push32(0x10f94652u); f_10f96800();
  /* 10f94652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94654 jne 0x10f94704 */
  if (!C.zf) goto L_10f94704;
  /* 10f9465a cmp dword ptr [0x10fc3654], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3654))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94661 jge 0x10f94704 */
  if ((C.sf==C.of)) goto L_10f94704;
  /* 10f94667 mov esi, esp */
  ESI = (ESP);
  /* 10f94669 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9466b push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f94670 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94672 push 0x10fc3420 */
  push32((uint32_t)(0x10fc3420u));
  /* 10f94677 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f9467c push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f94681 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94687u);
  /* 10f94687 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9468a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9468c call 0x10f96800 */
  push32(0x10f94691u); f_10f96800();
  /* 10f94691 mov esi, esp */
  ESI = (ESP);
  /* 10f94693 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94695 push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f9469a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9469c call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f946a2u);
  /* 10f946a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f946a5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f946a7 call 0x10f96800 */
  push32(0x10f946acu); f_10f96800();
  /* 10f946ac mov esi, esp */
  ESI = (ESP);
  /* 10f946ae push 0 */
  push32((uint32_t)(0x0u));
  /* 10f946b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f946b2 push 0x10fc35a0 */
  push32((uint32_t)(0x10fc35a0u));
  /* 10f946b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f946b9 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f946bfu);
  /* 10f946bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f946c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f946c4 call 0x10f96800 */
  push32(0x10f946c9u); f_10f96800();
  /* 10f946c9 mov esi, esp */
  ESI = (ESP);
  /* 10f946cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f946cd push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10f946cf call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f946d5u);
  /* 10f946d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f946d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f946da call 0x10f96800 */
  push32(0x10f946dfu); f_10f96800();
  /* 10f946df mov esi, esp */
  ESI = (ESP);
  /* 10f946e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f946e3 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10f946e5 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f946ebu);
  /* 10f946eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f946ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f946f0 call 0x10f96800 */
  push32(0x10f946f5u); f_10f96800();
  /* 10f946f5 mov edx, dword ptr [0x10fc3654] */
  EDX = (r32((uint32_t)(0x10fc3654)));
  /* 10f946fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f946fe mov dword ptr [0x10fc3654], edx */
  w32((uint32_t)(0x10fc3654), (EDX));
L_10f94704:;
  /* 10f94704 mov esi, esp */
  ESI = (ESP);
  /* 10f94706 push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10f94708 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9470eu);
  /* 10f9470e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94711 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94713 call 0x10f96800 */
  push32(0x10f94718u); f_10f96800();
  /* 10f94718 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9471d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9471f je 0x10f947c6 */
  if (C.zf) goto L_10f947c6;
  /* 10f94725 mov esi, esp */
  ESI = (ESP);
  /* 10f94727 push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f9472c call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94732u);
  /* 10f94732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94735 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94737 call 0x10f96800 */
  push32(0x10f9473cu); f_10f96800();
  /* 10f9473c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9473e jle 0x10f947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f947c6;
  /* 10f94744 mov esi, esp */
  ESI = (ESP);
  /* 10f94746 push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f9474b push 0x10fc35a0 */
  push32((uint32_t)(0x10fc35a0u));
  /* 10f94750 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94756u);
  /* 10f94756 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94759 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9475b call 0x10f96800 */
  push32(0x10f94760u); f_10f96800();
  /* 10f94760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94762 jle 0x10f947c6 */
  if ((C.zf||C.sf!=C.of)) goto L_10f947c6;
  /* 10f94764 mov esi, esp */
  ESI = (ESP);
  /* 10f94766 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94768 push 0x10fc3548 */
  push32((uint32_t)(0x10fc3548u));
  /* 10f9476d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9476f call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94775u);
  /* 10f94775 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94778 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9477a call 0x10f96800 */
  push32(0x10f9477fu); f_10f96800();
  /* 10f9477f mov esi, esp */
  ESI = (ESP);
  /* 10f94781 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94783 push 0x10fc35b0 */
  push32((uint32_t)(0x10fc35b0u));
  /* 10f94788 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9478a call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f94790u);
  /* 10f94790 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94793 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94795 call 0x10f96800 */
  push32(0x10f9479au); f_10f96800();
  /* 10f9479a mov esi, esp */
  ESI = (ESP);
  /* 10f9479c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9479e push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10f947a0 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f947a6u);
  /* 10f947a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f947a9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f947ab call 0x10f96800 */
  push32(0x10f947b0u); f_10f96800();
  /* 10f947b0 mov esi, esp */
  ESI = (ESP);
  /* 10f947b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f947b4 push 0x22 */
  push32((uint32_t)(0x22u));
  /* 10f947b6 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f947bcu);
  /* 10f947bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f947bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f947c1 call 0x10f96800 */
  push32(0x10f947c6u); f_10f96800();
L_10f947c6:;
  /* 10f947c6 mov esi, esp */
  ESI = (ESP);
  /* 10f947c8 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10f947ca call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f947d0u);
  /* 10f947d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f947d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f947d5 call 0x10f96800 */
  push32(0x10f947dau); f_10f96800();
  /* 10f947da and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f947df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f947e1 je 0x10f9482d */
  if (C.zf) goto L_10f9482d;
  /* 10f947e3 mov esi, esp */
  ESI = (ESP);
  /* 10f947e5 push 0x10fc33e0 */
  push32((uint32_t)(0x10fc33e0u));
  /* 10f947ea call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f947f0u);
  /* 10f947f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f947f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f947f5 call 0x10f96800 */
  push32(0x10f947fau); f_10f96800();
  /* 10f947fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f947fc jne 0x10f9482d */
  if (!C.zf) goto L_10f9482d;
  /* 10f947fe mov esi, esp */
  ESI = (ESP);
  /* 10f94800 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94802 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 10f94804 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9480au);
  /* 10f9480a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9480d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9480f call 0x10f96800 */
  push32(0x10f94814u); f_10f96800();
  /* 10f94814 mov esi, esp */
  ESI = (ESP);
  /* 10f94816 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f9481b push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9481d call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f94823u);
  /* 10f94823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94826 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94828 call 0x10f96800 */
  push32(0x10f9482du); f_10f96800();
L_10f9482d:;
  /* 10f9482d mov esi, esp */
  ESI = (ESP);
  /* 10f9482f push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10f94831 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94837u);
  /* 10f94837 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9483a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9483c call 0x10f96800 */
  push32(0x10f94841u); f_10f96800();
  /* 10f94841 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94846 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94848 je 0x10f94894 */
  if (C.zf) goto L_10f94894;
  /* 10f9484a mov esi, esp */
  ESI = (ESP);
  /* 10f9484c push 0x10fc33e8 */
  push32((uint32_t)(0x10fc33e8u));
  /* 10f94851 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94857u);
  /* 10f94857 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9485a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9485c call 0x10f96800 */
  push32(0x10f94861u); f_10f96800();
  /* 10f94861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94863 jne 0x10f94894 */
  if (!C.zf) goto L_10f94894;
  /* 10f94865 mov esi, esp */
  ESI = (ESP);
  /* 10f94867 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94869 push 0x17 */
  push32((uint32_t)(0x17u));
  /* 10f9486b call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94871u);
  /* 10f94871 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94874 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94876 call 0x10f96800 */
  push32(0x10f9487bu); f_10f96800();
  /* 10f9487b mov esi, esp */
  ESI = (ESP);
  /* 10f9487d push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10f94882 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f94884 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f9488au);
  /* 10f9488a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9488d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9488f call 0x10f96800 */
  push32(0x10f94894u); f_10f96800();
L_10f94894:;
  /* 10f94894 mov esi, esp */
  ESI = (ESP);
  /* 10f94896 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94898 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f9489eu);
  /* 10f9489e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f948a1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f948a3 call 0x10f96800 */
  push32(0x10f948a8u); f_10f96800();
  /* 10f948a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f948ab jle 0x10f94976 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94976;
  /* 10f948b1 mov esi, esp */
  ESI = (ESP);
  /* 10f948b3 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f948b5 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f948bbu);
  /* 10f948bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f948be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f948c0 call 0x10f96800 */
  push32(0x10f948c5u); f_10f96800();
  /* 10f948c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f948ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f948cc jne 0x10f94971 */
  if (!C.zf) goto L_10f94971;
  /* 10f948d2 mov esi, esp */
  ESI = (ESP);
  /* 10f948d4 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f948d9 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f948dfu);
  /* 10f948df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f948e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f948e4 call 0x10f96800 */
  push32(0x10f948e9u); f_10f96800();
  /* 10f948e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f948eb jne 0x10f94971 */
  if (!C.zf) goto L_10f94971;
  /* 10f948f1 mov esi, esp */
  ESI = (ESP);
  /* 10f948f3 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f948f8 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f948feu);
  /* 10f948fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94901 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94903 call 0x10f96800 */
  push32(0x10f94908u); f_10f96800();
  /* 10f94908 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9490a jne 0x10f94971 */
  if (!C.zf) goto L_10f94971;
  /* 10f9490c mov esi, esp */
  ESI = (ESP);
  /* 10f9490e push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94913 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94919u);
  /* 10f94919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9491c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9491e call 0x10f96800 */
  push32(0x10f94923u); f_10f96800();
  /* 10f94923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94925 jne 0x10f94971 */
  if (!C.zf) goto L_10f94971;
  /* 10f94927 mov esi, esp */
  ESI = (ESP);
  /* 10f94929 push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f9492e call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94934u);
  /* 10f94934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94937 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94939 call 0x10f96800 */
  push32(0x10f9493eu); f_10f96800();
  /* 10f9493e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94940 jne 0x10f94971 */
  if (!C.zf) goto L_10f94971;
  /* 10f94942 mov esi, esp */
  ESI = (ESP);
  /* 10f94944 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94946 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f94948 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9494eu);
  /* 10f9494e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94951 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94953 call 0x10f96800 */
  push32(0x10f94958u); f_10f96800();
  /* 10f94958 mov esi, esp */
  ESI = (ESP);
  /* 10f9495a push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 10f9495f push 8 */
  push32((uint32_t)(0x8u));
  /* 10f94961 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f94967u);
  /* 10f94967 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9496a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9496c call 0x10f96800 */
  push32(0x10f94971u); f_10f96800();
L_10f94971:;
  /* 10f94971 jmp 0x10f949f8 */
  goto L_10f949f8;
L_10f94976:;
  /* 10f94976 mov esi, esp */
  ESI = (ESP);
  /* 10f94978 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f9497a call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94980u);
  /* 10f94980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94983 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94985 call 0x10f96800 */
  push32(0x10f9498au); f_10f96800();
  /* 10f9498a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9498f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94991 jne 0x10f949f8 */
  if (!C.zf) goto L_10f949f8;
  /* 10f94993 mov esi, esp */
  ESI = (ESP);
  /* 10f94995 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f9499a call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f949a0u);
  /* 10f949a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f949a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f949a5 call 0x10f96800 */
  push32(0x10f949aau); f_10f96800();
  /* 10f949aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f949ac jne 0x10f949f8 */
  if (!C.zf) goto L_10f949f8;
  /* 10f949ae mov esi, esp */
  ESI = (ESP);
  /* 10f949b0 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f949b5 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f949bbu);
  /* 10f949bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f949be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f949c0 call 0x10f96800 */
  push32(0x10f949c5u); f_10f96800();
  /* 10f949c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f949c7 jne 0x10f949f8 */
  if (!C.zf) goto L_10f949f8;
  /* 10f949c9 mov esi, esp */
  ESI = (ESP);
  /* 10f949cb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f949cd push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f949cf call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f949d5u);
  /* 10f949d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f949d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f949da call 0x10f96800 */
  push32(0x10f949dfu); f_10f96800();
  /* 10f949df mov esi, esp */
  ESI = (ESP);
  /* 10f949e1 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10f949e6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f949e8 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f949eeu);
  /* 10f949ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f949f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f949f3 call 0x10f96800 */
  push32(0x10f949f8u); f_10f96800();
L_10f949f8:;
  /* 10f949f8 mov esi, esp */
  ESI = (ESP);
  /* 10f949fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f949fc call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f94a02u);
  /* 10f94a02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a05 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a07 call 0x10f96800 */
  push32(0x10f94a0cu); f_10f96800();
  /* 10f94a0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a0f jle 0x10f94ad5 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94ad5;
  /* 10f94a15 mov esi, esp */
  ESI = (ESP);
  /* 10f94a17 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f94a19 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94a1fu);
  /* 10f94a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a24 call 0x10f96800 */
  push32(0x10f94a29u); f_10f96800();
  /* 10f94a29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94a30 jne 0x10f94ad5 */
  if (!C.zf) goto L_10f94ad5;
  /* 10f94a36 mov esi, esp */
  ESI = (ESP);
  /* 10f94a38 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f94a3d call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94a43u);
  /* 10f94a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a48 call 0x10f96800 */
  push32(0x10f94a4du); f_10f96800();
  /* 10f94a4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94a4f jne 0x10f94ad5 */
  if (!C.zf) goto L_10f94ad5;
  /* 10f94a55 mov esi, esp */
  ESI = (ESP);
  /* 10f94a57 push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f94a5c call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94a62u);
  /* 10f94a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a67 call 0x10f96800 */
  push32(0x10f94a6cu); f_10f96800();
  /* 10f94a6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94a6e jne 0x10f94ad5 */
  if (!C.zf) goto L_10f94ad5;
  /* 10f94a70 mov esi, esp */
  ESI = (ESP);
  /* 10f94a72 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f94a77 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94a7du);
  /* 10f94a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a80 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a82 call 0x10f96800 */
  push32(0x10f94a87u); f_10f96800();
  /* 10f94a87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94a89 jne 0x10f94ad5 */
  if (!C.zf) goto L_10f94ad5;
  /* 10f94a8b mov esi, esp */
  ESI = (ESP);
  /* 10f94a8d push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f94a92 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94a98u);
  /* 10f94a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94a9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94a9d call 0x10f96800 */
  push32(0x10f94aa2u); f_10f96800();
  /* 10f94aa2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94aa4 jne 0x10f94ad5 */
  if (!C.zf) goto L_10f94ad5;
  /* 10f94aa6 mov esi, esp */
  ESI = (ESP);
  /* 10f94aa8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94aaa push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f94aac call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94ab2u);
  /* 10f94ab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ab5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ab7 call 0x10f96800 */
  push32(0x10f94abcu); f_10f96800();
  /* 10f94abc mov esi, esp */
  ESI = (ESP);
  /* 10f94abe push 0x1770 */
  push32((uint32_t)(0x1770u));
  /* 10f94ac3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f94ac5 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f94acbu);
  /* 10f94acb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ace cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ad0 call 0x10f96800 */
  push32(0x10f94ad5u); f_10f96800();
L_10f94ad5:;
  /* 10f94ad5 mov esi, esp */
  ESI = (ESP);
  /* 10f94ad7 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f94ad9 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94adfu);
  /* 10f94adf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ae2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ae4 call 0x10f96800 */
  push32(0x10f94ae9u); f_10f96800();
  /* 10f94ae9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94aee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94af0 jne 0x10f94b57 */
  if (!C.zf) goto L_10f94b57;
  /* 10f94af2 mov esi, esp */
  ESI = (ESP);
  /* 10f94af4 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f94af9 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94affu);
  /* 10f94aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b02 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b04 call 0x10f96800 */
  push32(0x10f94b09u); f_10f96800();
  /* 10f94b09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94b0b jne 0x10f94b57 */
  if (!C.zf) goto L_10f94b57;
  /* 10f94b0d mov esi, esp */
  ESI = (ESP);
  /* 10f94b0f push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f94b14 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94b1au);
  /* 10f94b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b1f call 0x10f96800 */
  push32(0x10f94b24u); f_10f96800();
  /* 10f94b24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94b26 jne 0x10f94b57 */
  if (!C.zf) goto L_10f94b57;
  /* 10f94b28 mov esi, esp */
  ESI = (ESP);
  /* 10f94b2a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94b2c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f94b2e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94b34u);
  /* 10f94b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b39 call 0x10f96800 */
  push32(0x10f94b3eu); f_10f96800();
  /* 10f94b3e mov esi, esp */
  ESI = (ESP);
  /* 10f94b40 push 0xfa0 */
  push32((uint32_t)(0xfa0u));
  /* 10f94b45 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f94b47 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f94b4du);
  /* 10f94b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b50 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b52 call 0x10f96800 */
  push32(0x10f94b57u); f_10f96800();
L_10f94b57:;
  /* 10f94b57 mov esi, esp */
  ESI = (ESP);
  /* 10f94b59 push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f94b5b call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94b61u);
  /* 10f94b61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b66 call 0x10f96800 */
  push32(0x10f94b6bu); f_10f96800();
  /* 10f94b6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94b70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94b72 je 0x10f94d62 */
  if (C.zf) goto L_10f94d62;
  /* 10f94b78 mov esi, esp */
  ESI = (ESP);
  /* 10f94b7a push 8 */
  push32((uint32_t)(0x8u));
  /* 10f94b7c call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f94b82u);
  /* 10f94b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94b85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94b87 call 0x10f96800 */
  push32(0x10f94b8cu); f_10f96800();
  /* 10f94b8c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94b91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94b93 je 0x10f94d62 */
  if (C.zf) goto L_10f94d62;
  /* 10f94b99 cmp dword ptr [0x10fc3658], 0xf */
  { uint32_t _a=(r32((uint32_t)(0x10fc3658))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ba0 jge 0x10f94d62 */
  if ((C.sf==C.of)) goto L_10f94d62;
  /* 10f94ba6 mov esi, esp */
  ESI = (ESP);
  /* 10f94ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94baa push 0x14 */
  push32((uint32_t)(0x14u));
  /* 10f94bac call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94bb2u);
  /* 10f94bb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94bb7 call 0x10f96800 */
  push32(0x10f94bbcu); f_10f96800();
  /* 10f94bbc mov esi, esp */
  ESI = (ESP);
  /* 10f94bbe push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f94bc3 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f94bc8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94bca push 0x10fc3550 */
  push32((uint32_t)(0x10fc3550u));
  /* 10f94bcf push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94bd4 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94bd9 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94bdfu);
  /* 10f94bdf add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94be4 call 0x10f96800 */
  push32(0x10f94be9u); f_10f96800();
  /* 10f94be9 mov esi, esp */
  ESI = (ESP);
  /* 10f94beb push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f94bf0 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f94bf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94bf7 push 0x10fc3550 */
  push32((uint32_t)(0x10fc3550u));
  /* 10f94bfc push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94c01 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94c06 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94c0cu);
  /* 10f94c0c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94c0f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c11 call 0x10f96800 */
  push32(0x10f94c16u); f_10f96800();
  /* 10f94c16 mov esi, esp */
  ESI = (ESP);
  /* 10f94c18 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94c1a call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f94c20u);
  /* 10f94c20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94c23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c25 call 0x10f96800 */
  push32(0x10f94c2au); f_10f96800();
  /* 10f94c2a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c2d jle 0x10f94c89 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94c89;
  /* 10f94c2f mov esi, esp */
  ESI = (ESP);
  /* 10f94c31 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f94c36 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f94c3b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94c3d push 0x10fc3638 */
  push32((uint32_t)(0x10fc3638u));
  /* 10f94c42 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94c47 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94c4c call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94c52u);
  /* 10f94c52 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94c55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c57 call 0x10f96800 */
  push32(0x10f94c5cu); f_10f96800();
  /* 10f94c5c mov esi, esp */
  ESI = (ESP);
  /* 10f94c5e push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f94c63 push 0x10fc3438 */
  push32((uint32_t)(0x10fc3438u));
  /* 10f94c68 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94c6a push 0x10fc3638 */
  push32((uint32_t)(0x10fc3638u));
  /* 10f94c6f push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f94c74 push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f94c79 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f94c7fu);
  /* 10f94c7f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c84 call 0x10f96800 */
  push32(0x10f94c89u); f_10f96800();
L_10f94c89:;
  /* 10f94c89 mov esi, esp */
  ESI = (ESP);
  /* 10f94c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94c8d push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94c92 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94c94 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94c9au);
  /* 10f94c9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94c9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94c9f call 0x10f96800 */
  push32(0x10f94ca4u); f_10f96800();
  /* 10f94ca4 mov esi, esp */
  ESI = (ESP);
  /* 10f94ca6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94ca8 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94cad push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94caf call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94cb5u);
  /* 10f94cb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94cb8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94cba call 0x10f96800 */
  push32(0x10f94cbfu); f_10f96800();
  /* 10f94cbf mov esi, esp */
  ESI = (ESP);
  /* 10f94cc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94cc3 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f94cc9u);
  /* 10f94cc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ccc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94cce call 0x10f96800 */
  push32(0x10f94cd3u); f_10f96800();
  /* 10f94cd3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94cd6 jle 0x10f94d0e */
  if ((C.zf||C.sf!=C.of)) goto L_10f94d0e;
  /* 10f94cd8 mov esi, esp */
  ESI = (ESP);
  /* 10f94cda push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94cdc push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94ce1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94ce3 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94ce9u);
  /* 10f94ce9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94cec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94cee call 0x10f96800 */
  push32(0x10f94cf3u); f_10f96800();
  /* 10f94cf3 mov esi, esp */
  ESI = (ESP);
  /* 10f94cf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94cf7 push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f94cfc push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94cfe call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94d04u);
  /* 10f94d04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d07 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d09 call 0x10f96800 */
  push32(0x10f94d0eu); f_10f96800();
L_10f94d0e:;
  /* 10f94d0e mov esi, esp */
  ESI = (ESP);
  /* 10f94d10 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94d14 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94d19 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94d1b call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f94d21u);
  /* 10f94d21 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d24 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d26 call 0x10f96800 */
  push32(0x10f94d2bu); f_10f96800();
  /* 10f94d2b mov eax, dword ptr [0x10fc3658] */
  EAX = (r32((uint32_t)(0x10fc3658)));
  /* 10f94d30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d33 mov dword ptr [0x10fc3658], eax */
  w32((uint32_t)(0x10fc3658), (EAX));
  /* 10f94d38 mov esi, esp */
  ESI = (ESP);
  /* 10f94d3a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94d3c push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f94d3e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94d44u);
  /* 10f94d44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d47 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d49 call 0x10f96800 */
  push32(0x10f94d4eu); f_10f96800();
  /* 10f94d4e mov esi, esp */
  ESI = (ESP);
  /* 10f94d50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94d52 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f94d58u);
  /* 10f94d58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d5d call 0x10f96800 */
  push32(0x10f94d62u); f_10f96800();
L_10f94d62:;
  /* 10f94d62 mov esi, esp */
  ESI = (ESP);
  /* 10f94d64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94d66 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f94d6cu);
  /* 10f94d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d71 call 0x10f96800 */
  push32(0x10f94d76u); f_10f96800();
  /* 10f94d76 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d79 jle 0x10f94f18 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94f18;
  /* 10f94d7f mov esi, esp */
  ESI = (ESP);
  /* 10f94d81 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f94d83 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94d89u);
  /* 10f94d89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94d8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94d8e call 0x10f96800 */
  push32(0x10f94d93u); f_10f96800();
  /* 10f94d93 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94d9a je 0x10f94ee4 */
  if (C.zf) goto L_10f94ee4;
  /* 10f94da0 mov esi, esp */
  ESI = (ESP);
  /* 10f94da2 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94da7 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94dadu);
  /* 10f94dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94db0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94db2 call 0x10f96800 */
  push32(0x10f94db7u); f_10f96800();
  /* 10f94db7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94db9 jle 0x10f94ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94ee4;
  /* 10f94dbf mov esi, esp */
  ESI = (ESP);
  /* 10f94dc1 push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f94dc6 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f94dccu);
  /* 10f94dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94dcf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94dd1 call 0x10f96800 */
  push32(0x10f94dd6u); f_10f96800();
  /* 10f94dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94dd8 jle 0x10f94ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94ee4;
  /* 10f94dde mov esi, esp */
  ESI = (ESP);
  /* 10f94de0 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94de5 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94dea call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94df0u);
  /* 10f94df0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94df3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94df5 call 0x10f96800 */
  push32(0x10f94dfau); f_10f96800();
  /* 10f94dfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94dfc jg 0x10f94e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f94e62;
  /* 10f94dfe mov esi, esp */
  ESI = (ESP);
  /* 10f94e00 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94e05 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94e0a call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94e10u);
  /* 10f94e10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94e13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94e15 call 0x10f96800 */
  push32(0x10f94e1au); f_10f96800();
  /* 10f94e1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94e1c jg 0x10f94e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f94e62;
  /* 10f94e1e mov esi, esp */
  ESI = (ESP);
  /* 10f94e20 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94e25 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94e2a call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94e30u);
  /* 10f94e30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94e33 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94e35 call 0x10f96800 */
  push32(0x10f94e3au); f_10f96800();
  /* 10f94e3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94e3c jg 0x10f94e62 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f94e62;
  /* 10f94e3e mov esi, esp */
  ESI = (ESP);
  /* 10f94e40 push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f94e45 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94e4a call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94e50u);
  /* 10f94e50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94e53 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94e55 call 0x10f96800 */
  push32(0x10f94e5au); f_10f96800();
  /* 10f94e5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94e5c jle 0x10f94ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94ee4;
L_10f94e62:;
  /* 10f94e62 mov esi, esp */
  ESI = (ESP);
  /* 10f94e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94e66 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f94e68 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94e6eu);
  /* 10f94e6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94e71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94e73 call 0x10f96800 */
  push32(0x10f94e78u); f_10f96800();
  /* 10f94e78 mov esi, esp */
  ESI = (ESP);
  /* 10f94e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94e7c push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94e81 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94e83 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94e89u);
  /* 10f94e89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94e8c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94e8e call 0x10f96800 */
  push32(0x10f94e93u); f_10f96800();
  /* 10f94e93 mov esi, esp */
  ESI = (ESP);
  /* 10f94e95 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94e97 push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94e9c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94e9e call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94ea4u);
  /* 10f94ea4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ea7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ea9 call 0x10f96800 */
  push32(0x10f94eaeu); f_10f96800();
  /* 10f94eae mov esi, esp */
  ESI = (ESP);
  /* 10f94eb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94eb2 push 0x10fc34e8 */
  push32((uint32_t)(0x10fc34e8u));
  /* 10f94eb7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94eb9 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94ebfu);
  /* 10f94ebf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ec2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94ec4 call 0x10f96800 */
  push32(0x10f94ec9u); f_10f96800();
  /* 10f94ec9 mov esi, esp */
  ESI = (ESP);
  /* 10f94ecb push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94ecd push 0x10fc34f0 */
  push32((uint32_t)(0x10fc34f0u));
  /* 10f94ed2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94ed4 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94edau);
  /* 10f94eda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94edd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94edf call 0x10f96800 */
  push32(0x10f94ee4u); f_10f96800();
L_10f94ee4:;
  /* 10f94ee4 mov esi, esp */
  ESI = (ESP);
  /* 10f94ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94ee8 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f94eed push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94eef call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f94ef5u);
  /* 10f94ef5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94ef8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94efa call 0x10f96800 */
  push32(0x10f94effu); f_10f96800();
  /* 10f94eff mov esi, esp */
  ESI = (ESP);
  /* 10f94f01 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94f03 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f94f09u);
  /* 10f94f09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94f0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94f0e call 0x10f96800 */
  push32(0x10f94f13u); f_10f96800();
  /* 10f94f13 jmp 0x10f94ff4 */
  goto L_10f94ff4;
L_10f94f18:;
  /* 10f94f18 mov esi, esp */
  ESI = (ESP);
  /* 10f94f1a push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f94f1c call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94f22u);
  /* 10f94f22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94f25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94f27 call 0x10f96800 */
  push32(0x10f94f2cu); f_10f96800();
  /* 10f94f2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f94f31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94f33 je 0x10f94ff4 */
  if (C.zf) goto L_10f94ff4;
  /* 10f94f39 mov esi, esp */
  ESI = (ESP);
  /* 10f94f3b push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94f40 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94f45 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94f4bu);
  /* 10f94f4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94f4e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94f50 call 0x10f96800 */
  push32(0x10f94f55u); f_10f96800();
  /* 10f94f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94f57 jg 0x10f94f79 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f94f79;
  /* 10f94f59 mov esi, esp */
  ESI = (ESP);
  /* 10f94f5b push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94f60 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f94f65 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f94f6bu);
  /* 10f94f6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94f6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94f70 call 0x10f96800 */
  push32(0x10f94f75u); f_10f96800();
  /* 10f94f75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f94f77 jle 0x10f94ff4 */
  if ((C.zf||C.sf!=C.of)) goto L_10f94ff4;
L_10f94f79:;
  /* 10f94f79 mov esi, esp */
  ESI = (ESP);
  /* 10f94f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94f7d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f94f7f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f94f85u);
  /* 10f94f85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94f88 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94f8a call 0x10f96800 */
  push32(0x10f94f8fu); f_10f96800();
  /* 10f94f8f mov esi, esp */
  ESI = (ESP);
  /* 10f94f91 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94f93 push 0x10fc34c8 */
  push32((uint32_t)(0x10fc34c8u));
  /* 10f94f98 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94f9a call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94fa0u);
  /* 10f94fa0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94fa5 call 0x10f96800 */
  push32(0x10f94faau); f_10f96800();
  /* 10f94faa mov esi, esp */
  ESI = (ESP);
  /* 10f94fac push 1 */
  push32((uint32_t)(0x1u));
  /* 10f94fae push 0x10fc34d0 */
  push32((uint32_t)(0x10fc34d0u));
  /* 10f94fb3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94fb5 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f94fbbu);
  /* 10f94fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94fbe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94fc0 call 0x10f96800 */
  push32(0x10f94fc5u); f_10f96800();
  /* 10f94fc5 mov esi, esp */
  ESI = (ESP);
  /* 10f94fc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f94fc9 push 0x10fc3448 */
  push32((uint32_t)(0x10fc3448u));
  /* 10f94fce push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94fd0 call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f94fd6u);
  /* 10f94fd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94fd9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94fdb call 0x10f96800 */
  push32(0x10f94fe0u); f_10f96800();
  /* 10f94fe0 mov esi, esp */
  ESI = (ESP);
  /* 10f94fe2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f94fe4 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f94feau);
  /* 10f94fea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f94fed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f94fef call 0x10f96800 */
  push32(0x10f94ff4u); f_10f96800();
L_10f94ff4:;
  /* 10f94ff4 mov esi, esp */
  ESI = (ESP);
  /* 10f94ff6 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f94ff8 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f94ffeu);
  /* 10f94ffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95001 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95003 call 0x10f96800 */
  push32(0x10f95008u); f_10f96800();
  /* 10f95008 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9500d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9500f je 0x10f95201 */
  if (C.zf) goto L_10f95201;
  /* 10f95015 mov esi, esp */
  ESI = (ESP);
  /* 10f95017 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f95019 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9501fu);
  /* 10f9501f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95022 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95024 call 0x10f96800 */
  push32(0x10f95029u); f_10f96800();
  /* 10f95029 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9502e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95030 je 0x10f95201 */
  if (C.zf) goto L_10f95201;
  /* 10f95036 cmp dword ptr [0x10fc365c], 0xf */
  { uint32_t _a=(r32((uint32_t)(0x10fc365c))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9503d jge 0x10f95201 */
  if ((C.sf==C.of)) goto L_10f95201;
  /* 10f95043 mov esi, esp */
  ESI = (ESP);
  /* 10f95045 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95047 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f95049 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9504fu);
  /* 10f9504f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95052 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95054 call 0x10f96800 */
  push32(0x10f95059u); f_10f96800();
  /* 10f95059 mov esi, esp */
  ESI = (ESP);
  /* 10f9505b push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f95060 push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f95065 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95067 push 0x10fc3550 */
  push32((uint32_t)(0x10fc3550u));
  /* 10f9506c push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f95071 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f95076 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f9507cu);
  /* 10f9507c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9507f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95081 call 0x10f96800 */
  push32(0x10f95086u); f_10f96800();
  /* 10f95086 mov esi, esp */
  ESI = (ESP);
  /* 10f95088 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f9508d push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f95092 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95094 push 0x10fc3550 */
  push32((uint32_t)(0x10fc3550u));
  /* 10f95099 push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f9509e push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f950a3 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f950a9u);
  /* 10f950a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f950ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f950ae call 0x10f96800 */
  push32(0x10f950b3u); f_10f96800();
  /* 10f950b3 mov esi, esp */
  ESI = (ESP);
  /* 10f950b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f950b7 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f950bdu);
  /* 10f950bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f950c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f950c2 call 0x10f96800 */
  push32(0x10f950c7u); f_10f96800();
  /* 10f950c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f950ca jle 0x10f95126 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95126;
  /* 10f950cc mov esi, esp */
  ESI = (ESP);
  /* 10f950ce push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f950d3 push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f950d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f950da push 0x10fc3638 */
  push32((uint32_t)(0x10fc3638u));
  /* 10f950df push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f950e4 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f950e9 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f950efu);
  /* 10f950ef add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f950f2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f950f4 call 0x10f96800 */
  push32(0x10f950f9u); f_10f96800();
  /* 10f950f9 mov esi, esp */
  ESI = (ESP);
  /* 10f950fb push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 10f95100 push 0x10fc3430 */
  push32((uint32_t)(0x10fc3430u));
  /* 10f95105 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95107 push 0x10fc3638 */
  push32((uint32_t)(0x10fc3638u));
  /* 10f9510c push 0x10fc3418 */
  push32((uint32_t)(0x10fc3418u));
  /* 10f95111 push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f95116 call dword ptr [0x10fc6458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6458))), 0x10f9511cu);
  /* 10f9511c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9511f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95121 call 0x10f96800 */
  push32(0x10f95126u); f_10f96800();
L_10f95126:;
  /* 10f95126 mov esi, esp */
  ESI = (ESP);
  /* 10f95128 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9512a push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f9512f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95131 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95137u);
  /* 10f95137 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9513a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9513c call 0x10f96800 */
  push32(0x10f95141u); f_10f96800();
  /* 10f95141 mov esi, esp */
  ESI = (ESP);
  /* 10f95143 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95145 push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f9514a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9514c call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95152u);
  /* 10f95152 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95155 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95157 call 0x10f96800 */
  push32(0x10f9515cu); f_10f96800();
  /* 10f9515c mov esi, esp */
  ESI = (ESP);
  /* 10f9515e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95160 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f95166u);
  /* 10f95166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95169 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9516b call 0x10f96800 */
  push32(0x10f95170u); f_10f96800();
  /* 10f95170 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95173 jle 0x10f951ab */
  if ((C.zf||C.sf!=C.of)) goto L_10f951ab;
  /* 10f95175 mov esi, esp */
  ESI = (ESP);
  /* 10f95177 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95179 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f9517e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95180 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95186u);
  /* 10f95186 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95189 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9518b call 0x10f96800 */
  push32(0x10f95190u); f_10f96800();
  /* 10f95190 mov esi, esp */
  ESI = (ESP);
  /* 10f95192 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95194 push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f95199 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9519b call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f951a1u);
  /* 10f951a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f951a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f951a6 call 0x10f96800 */
  push32(0x10f951abu); f_10f96800();
L_10f951ab:;
  /* 10f951ab mov esi, esp */
  ESI = (ESP);
  /* 10f951ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f951af push 0 */
  push32((uint32_t)(0x0u));
  /* 10f951b1 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f951b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f951b8 call dword ptr [0x10fc6444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6444))), 0x10f951beu);
  /* 10f951be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f951c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f951c3 call 0x10f96800 */
  push32(0x10f951c8u); f_10f96800();
  /* 10f951c8 mov ecx, dword ptr [0x10fc365c] */
  ECX = (r32((uint32_t)(0x10fc365c)));
  /* 10f951ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f951d1 mov dword ptr [0x10fc365c], ecx */
  w32((uint32_t)(0x10fc365c), (ECX));
  /* 10f951d7 mov esi, esp */
  ESI = (ESP);
  /* 10f951d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f951db push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10f951dd call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f951e3u);
  /* 10f951e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f951e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f951e8 call 0x10f96800 */
  push32(0x10f951edu); f_10f96800();
  /* 10f951ed mov esi, esp */
  ESI = (ESP);
  /* 10f951ef push 2 */
  push32((uint32_t)(0x2u));
  /* 10f951f1 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f951f7u);
  /* 10f951f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f951fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f951fc call 0x10f96800 */
  push32(0x10f95201u); f_10f96800();
L_10f95201:;
  /* 10f95201 mov esi, esp */
  ESI = (ESP);
  /* 10f95203 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95205 call dword ptr [0x10fc640c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc640c))), 0x10f9520bu);
  /* 10f9520b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9520e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95210 call 0x10f96800 */
  push32(0x10f95215u); f_10f96800();
  /* 10f95215 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95218 jle 0x10f95397 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95397;
  /* 10f9521e mov esi, esp */
  ESI = (ESP);
  /* 10f95220 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10f95222 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f95228u);
  /* 10f95228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9522b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9522d call 0x10f96800 */
  push32(0x10f95232u); f_10f96800();
  /* 10f95232 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95239 je 0x10f95392 */
  if (C.zf) goto L_10f95392;
  /* 10f9523f mov esi, esp */
  ESI = (ESP);
  /* 10f95241 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f95246 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9524cu);
  /* 10f9524c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9524f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95251 call 0x10f96800 */
  push32(0x10f95256u); f_10f96800();
  /* 10f95256 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95258 jle 0x10f95392 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95392;
  /* 10f9525e mov esi, esp */
  ESI = (ESP);
  /* 10f95260 push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f95265 call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f9526bu);
  /* 10f9526b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9526e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95270 call 0x10f96800 */
  push32(0x10f95275u); f_10f96800();
  /* 10f95275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95277 jle 0x10f95392 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95392;
  /* 10f9527d mov esi, esp */
  ESI = (ESP);
  /* 10f9527f push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f95284 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f95289 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f9528fu);
  /* 10f9528f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95294 call 0x10f96800 */
  push32(0x10f95299u); f_10f96800();
  /* 10f95299 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9529b jg 0x10f952e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f952e1;
  /* 10f9529d mov esi, esp */
  ESI = (ESP);
  /* 10f9529f push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f952a4 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f952a9 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f952afu);
  /* 10f952af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f952b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f952b4 call 0x10f96800 */
  push32(0x10f952b9u); f_10f96800();
  /* 10f952b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f952bb jg 0x10f952e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f952e1;
  /* 10f952bd mov esi, esp */
  ESI = (ESP);
  /* 10f952bf push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f952c4 push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f952c9 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f952cfu);
  /* 10f952cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f952d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f952d4 call 0x10f96800 */
  push32(0x10f952d9u); f_10f96800();
  /* 10f952d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f952db jle 0x10f95392 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95392;
L_10f952e1:;
  /* 10f952e1 mov esi, esp */
  ESI = (ESP);
  /* 10f952e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f952e5 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10f952e7 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f952edu);
  /* 10f952ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f952f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f952f2 call 0x10f96800 */
  push32(0x10f952f7u); f_10f96800();
  /* 10f952f7 mov esi, esp */
  ESI = (ESP);
  /* 10f952f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f952fb push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f95300 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95302 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95308u);
  /* 10f95308 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9530b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9530d call 0x10f96800 */
  push32(0x10f95312u); f_10f96800();
  /* 10f95312 mov esi, esp */
  ESI = (ESP);
  /* 10f95314 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95316 push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f9531b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9531d call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95323u);
  /* 10f95323 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95326 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95328 call 0x10f96800 */
  push32(0x10f9532du); f_10f96800();
  /* 10f9532d mov esi, esp */
  ESI = (ESP);
  /* 10f9532f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95331 push 0x10fc34f8 */
  push32((uint32_t)(0x10fc34f8u));
  /* 10f95336 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95338 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9533eu);
  /* 10f9533e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95343 call 0x10f96800 */
  push32(0x10f95348u); f_10f96800();
  /* 10f95348 mov esi, esp */
  ESI = (ESP);
  /* 10f9534a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9534c push 0x10fc3500 */
  push32((uint32_t)(0x10fc3500u));
  /* 10f95351 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95353 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f95359u);
  /* 10f95359 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9535c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9535e call 0x10f96800 */
  push32(0x10f95363u); f_10f96800();
  /* 10f95363 mov esi, esp */
  ESI = (ESP);
  /* 10f95365 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95367 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f9536c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9536e call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f95374u);
  /* 10f95374 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95377 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95379 call 0x10f96800 */
  push32(0x10f9537eu); f_10f96800();
  /* 10f9537e mov esi, esp */
  ESI = (ESP);
  /* 10f95380 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95382 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f95388u);
  /* 10f95388 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9538b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9538d call 0x10f96800 */
  push32(0x10f95392u); f_10f96800();
L_10f95392:;
  /* 10f95392 jmp 0x10f95473 */
  goto L_10f95473;
L_10f95397:;
  /* 10f95397 mov esi, esp */
  ESI = (ESP);
  /* 10f95399 push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10f9539b call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f953a1u);
  /* 10f953a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f953a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f953a6 call 0x10f96800 */
  push32(0x10f953abu); f_10f96800();
  /* 10f953ab and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f953b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f953b2 je 0x10f95473 */
  if (C.zf) goto L_10f95473;
  /* 10f953b8 mov esi, esp */
  ESI = (ESP);
  /* 10f953ba push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f953bf push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f953c4 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f953cau);
  /* 10f953ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f953cd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f953cf call 0x10f96800 */
  push32(0x10f953d4u); f_10f96800();
  /* 10f953d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f953d6 jg 0x10f953f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f953f8;
  /* 10f953d8 mov esi, esp */
  ESI = (ESP);
  /* 10f953da push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f953df push 0x10fc3440 */
  push32((uint32_t)(0x10fc3440u));
  /* 10f953e4 call dword ptr [0x10fc645c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc645c))), 0x10f953eau);
  /* 10f953ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f953ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f953ef call 0x10f96800 */
  push32(0x10f953f4u); f_10f96800();
  /* 10f953f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f953f6 jle 0x10f95473 */
  if ((C.zf||C.sf!=C.of)) goto L_10f95473;
L_10f953f8:;
  /* 10f953f8 mov esi, esp */
  ESI = (ESP);
  /* 10f953fa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f953fc push 0x1c */
  push32((uint32_t)(0x1cu));
  /* 10f953fe call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95404u);
  /* 10f95404 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95407 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95409 call 0x10f96800 */
  push32(0x10f9540eu); f_10f96800();
  /* 10f9540e mov esi, esp */
  ESI = (ESP);
  /* 10f95410 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95412 push 0x10fc34d8 */
  push32((uint32_t)(0x10fc34d8u));
  /* 10f95417 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95419 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9541fu);
  /* 10f9541f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95422 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95424 call 0x10f96800 */
  push32(0x10f95429u); f_10f96800();
  /* 10f95429 mov esi, esp */
  ESI = (ESP);
  /* 10f9542b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9542d push 0x10fc34e0 */
  push32((uint32_t)(0x10fc34e0u));
  /* 10f95432 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95434 call dword ptr [0x10fc6440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6440))), 0x10f9543au);
  /* 10f9543a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9543d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9543f call 0x10f96800 */
  push32(0x10f95444u); f_10f96800();
  /* 10f95444 mov esi, esp */
  ESI = (ESP);
  /* 10f95446 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95448 push 0x10fc3450 */
  push32((uint32_t)(0x10fc3450u));
  /* 10f9544d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9544f call dword ptr [0x10fc6454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6454))), 0x10f95455u);
  /* 10f95455 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95458 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9545a call 0x10f96800 */
  push32(0x10f9545fu); f_10f96800();
  /* 10f9545f mov esi, esp */
  ESI = (ESP);
  /* 10f95461 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f95463 call dword ptr [0x10fc643c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc643c))), 0x10f95469u);
  /* 10f95469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9546c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9546e call 0x10f96800 */
  push32(0x10f95473u); f_10f96800();
L_10f95473:;
  /* 10f95473 mov esi, esp */
  ESI = (ESP);
  /* 10f95475 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10f95477 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9547du);
  /* 10f9547d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95480 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95482 call 0x10f96800 */
  push32(0x10f95487u); f_10f96800();
  /* 10f95487 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9548c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9548e je 0x10f9550c */
  if (C.zf) goto L_10f9550c;
  /* 10f95490 mov esi, esp */
  ESI = (ESP);
  /* 10f95492 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f95494 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f9549au);
  /* 10f9549a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9549d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9549f call 0x10f96800 */
  push32(0x10f954a4u); f_10f96800();
  /* 10f954a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f954a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f954ab je 0x10f9550c */
  if (C.zf) goto L_10f9550c;
  /* 10f954ad mov esi, esp */
  ESI = (ESP);
  /* 10f954af push 0 */
  push32((uint32_t)(0x0u));
  /* 10f954b1 push 0x10fc35f0 */
  push32((uint32_t)(0x10fc35f0u));
  /* 10f954b6 call dword ptr [0x10fc6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6464))), 0x10f954bcu);
  /* 10f954bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f954bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f954c1 call 0x10f96800 */
  push32(0x10f954c6u); f_10f96800();
  /* 10f954c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f954c8 jle 0x10f9550c */
  if ((C.zf||C.sf!=C.of)) goto L_10f9550c;
  /* 10f954ca mov esi, esp */
  ESI = (ESP);
  /* 10f954cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f954ce push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10f954d0 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f954d6u);
  /* 10f954d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f954d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f954db call 0x10f96800 */
  push32(0x10f954e0u); f_10f96800();
  /* 10f954e0 mov esi, esp */
  ESI = (ESP);
  /* 10f954e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f954e4 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10f954e6 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f954ecu);
  /* 10f954ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f954ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f954f1 call 0x10f96800 */
  push32(0x10f954f6u); f_10f96800();
  /* 10f954f6 mov esi, esp */
  ESI = (ESP);
  /* 10f954f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f954fa push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10f954fc call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95502u);
  /* 10f95502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95507 call 0x10f96800 */
  push32(0x10f9550cu); f_10f96800();
L_10f9550c:;
  /* 10f9550c mov esi, esp */
  ESI = (ESP);
  /* 10f9550e push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10f95510 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f95516u);
  /* 10f95516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95519 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9551b call 0x10f96800 */
  push32(0x10f95520u); f_10f96800();
  /* 10f95520 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95525 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95527 je 0x10f955a5 */
  if (C.zf) goto L_10f955a5;
  /* 10f95529 mov esi, esp */
  ESI = (ESP);
  /* 10f9552b push 0xa */
  push32((uint32_t)(0xau));
  /* 10f9552d call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f95533u);
  /* 10f95533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95536 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95538 call 0x10f96800 */
  push32(0x10f9553du); f_10f96800();
  /* 10f9553d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95542 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95544 je 0x10f955a5 */
  if (C.zf) goto L_10f955a5;
  /* 10f95546 mov esi, esp */
  ESI = (ESP);
  /* 10f95548 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9554a push 0x10fc35f0 */
  push32((uint32_t)(0x10fc35f0u));
  /* 10f9554f call dword ptr [0x10fc6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6464))), 0x10f95555u);
  /* 10f95555 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95558 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9555a call 0x10f96800 */
  push32(0x10f9555fu); f_10f96800();
  /* 10f9555f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95561 jne 0x10f955a5 */
  if (!C.zf) goto L_10f955a5;
  /* 10f95563 mov esi, esp */
  ESI = (ESP);
  /* 10f95565 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95567 push 0x1d */
  push32((uint32_t)(0x1du));
  /* 10f95569 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9556fu);
  /* 10f9556f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95572 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95574 call 0x10f96800 */
  push32(0x10f95579u); f_10f96800();
  /* 10f95579 mov esi, esp */
  ESI = (ESP);
  /* 10f9557b push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9557d push 0x33 */
  push32((uint32_t)(0x33u));
  /* 10f9557f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95585u);
  /* 10f95585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95588 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9558a call 0x10f96800 */
  push32(0x10f9558fu); f_10f96800();
  /* 10f9558f mov esi, esp */
  ESI = (ESP);
  /* 10f95591 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95593 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 10f95595 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9559bu);
  /* 10f9559b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9559e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f955a0 call 0x10f96800 */
  push32(0x10f955a5u); f_10f96800();
L_10f955a5:;
  /* 10f955a5 mov esi, esp */
  ESI = (ESP);
  /* 10f955a7 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10f955a9 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f955afu);
  /* 10f955af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f955b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f955b4 call 0x10f96800 */
  push32(0x10f955b9u); f_10f96800();
  /* 10f955b9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f955be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f955c0 je 0x10f9563e */
  if (C.zf) goto L_10f9563e;
  /* 10f955c2 mov esi, esp */
  ESI = (ESP);
  /* 10f955c4 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f955c6 call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f955ccu);
  /* 10f955cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f955cf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f955d1 call 0x10f96800 */
  push32(0x10f955d6u); f_10f96800();
  /* 10f955d6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f955db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f955dd je 0x10f9563e */
  if (C.zf) goto L_10f9563e;
  /* 10f955df mov esi, esp */
  ESI = (ESP);
  /* 10f955e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f955e3 push 0x10fc3590 */
  push32((uint32_t)(0x10fc3590u));
  /* 10f955e8 call dword ptr [0x10fc6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6464))), 0x10f955eeu);
  /* 10f955ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f955f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f955f3 call 0x10f96800 */
  push32(0x10f955f8u); f_10f96800();
  /* 10f955f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f955fa jle 0x10f9563e */
  if ((C.zf||C.sf!=C.of)) goto L_10f9563e;
  /* 10f955fc mov esi, esp */
  ESI = (ESP);
  /* 10f955fe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95600 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10f95602 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95608u);
  /* 10f95608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9560b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9560d call 0x10f96800 */
  push32(0x10f95612u); f_10f96800();
  /* 10f95612 mov esi, esp */
  ESI = (ESP);
  /* 10f95614 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95616 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10f95618 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9561eu);
  /* 10f9561e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95621 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95623 call 0x10f96800 */
  push32(0x10f95628u); f_10f96800();
  /* 10f95628 mov esi, esp */
  ESI = (ESP);
  /* 10f9562a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9562c push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10f9562e call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95634u);
  /* 10f95634 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95637 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95639 call 0x10f96800 */
  push32(0x10f9563eu); f_10f96800();
L_10f9563e:;
  /* 10f9563e mov esi, esp */
  ESI = (ESP);
  /* 10f95640 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10f95642 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f95648u);
  /* 10f95648 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9564b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9564d call 0x10f96800 */
  push32(0x10f95652u); f_10f96800();
  /* 10f95652 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95657 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95659 je 0x10f956d7 */
  if (C.zf) goto L_10f956d7;
  /* 10f9565b mov esi, esp */
  ESI = (ESP);
  /* 10f9565d push 0xa */
  push32((uint32_t)(0xau));
  /* 10f9565f call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f95665u);
  /* 10f95665 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95668 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9566a call 0x10f96800 */
  push32(0x10f9566fu); f_10f96800();
  /* 10f9566f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95676 je 0x10f956d7 */
  if (C.zf) goto L_10f956d7;
  /* 10f95678 mov esi, esp */
  ESI = (ESP);
  /* 10f9567a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9567c push 0x10fc3590 */
  push32((uint32_t)(0x10fc3590u));
  /* 10f95681 call dword ptr [0x10fc6464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6464))), 0x10f95687u);
  /* 10f95687 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9568a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9568c call 0x10f96800 */
  push32(0x10f95691u); f_10f96800();
  /* 10f95691 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95693 jne 0x10f956d7 */
  if (!C.zf) goto L_10f956d7;
  /* 10f95695 mov esi, esp */
  ESI = (ESP);
  /* 10f95697 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95699 push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 10f9569b call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f956a1u);
  /* 10f956a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f956a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f956a6 call 0x10f96800 */
  push32(0x10f956abu); f_10f96800();
  /* 10f956ab mov esi, esp */
  ESI = (ESP);
  /* 10f956ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f956af push 0x36 */
  push32((uint32_t)(0x36u));
  /* 10f956b1 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f956b7u);
  /* 10f956b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f956ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f956bc call 0x10f96800 */
  push32(0x10f956c1u); f_10f96800();
  /* 10f956c1 mov esi, esp */
  ESI = (ESP);
  /* 10f956c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f956c5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 10f956c7 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f956cdu);
  /* 10f956cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f956d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f956d2 call 0x10f96800 */
  push32(0x10f956d7u); f_10f96800();
L_10f956d7:;
  /* 10f956d7 mov esi, esp */
  ESI = (ESP);
  /* 10f956d9 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10f956db call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f956e1u);
  /* 10f956e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f956e4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f956e6 call 0x10f96800 */
  push32(0x10f956ebu); f_10f96800();
  /* 10f956eb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f956f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f956f2 je 0x10f95739 */
  if (C.zf) goto L_10f95739;
  /* 10f956f4 mov esi, esp */
  ESI = (ESP);
  /* 10f956f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f956f8 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10f956fa call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95700u);
  /* 10f95700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95705 call 0x10f96800 */
  push32(0x10f9570au); f_10f96800();
  /* 10f9570a mov esi, esp */
  ESI = (ESP);
  /* 10f9570c push 0x320 */
  push32((uint32_t)(0x320u));
  /* 10f95711 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f95713 call dword ptr [0x10fc6428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6428))), 0x10f95719u);
  /* 10f95719 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9571c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9571e call 0x10f96800 */
  push32(0x10f95723u); f_10f96800();
  /* 10f95723 mov esi, esp */
  ESI = (ESP);
  /* 10f95725 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95727 push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10f95729 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9572fu);
  /* 10f9572f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95732 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95734 call 0x10f96800 */
  push32(0x10f95739u); f_10f96800();
L_10f95739:;
  /* 10f95739 mov esi, esp */
  ESI = (ESP);
  /* 10f9573b push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10f9573d call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f95743u);
  /* 10f95743 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95746 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95748 call 0x10f96800 */
  push32(0x10f9574du); f_10f96800();
  /* 10f9574d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f95752 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95754 jne 0x10f9579f */
  if (!C.zf) goto L_10f9579f;
  /* 10f95756 mov esi, esp */
  ESI = (ESP);
  /* 10f95758 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f9575a call dword ptr [0x10fc6424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6424))), 0x10f95760u);
  /* 10f95760 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95763 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95765 call 0x10f96800 */
  push32(0x10f9576au); f_10f96800();
  /* 10f9576a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9576f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95771 je 0x10f9579f */
  if (C.zf) goto L_10f9579f;
  /* 10f95773 mov esi, esp */
  ESI = (ESP);
  /* 10f95775 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f95777 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 10f95779 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9577fu);
  /* 10f9577f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95782 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95784 call 0x10f96800 */
  push32(0x10f95789u); f_10f96800();
  /* 10f95789 mov esi, esp */
  ESI = (ESP);
  /* 10f9578b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9578d push 0x38 */
  push32((uint32_t)(0x38u));
  /* 10f9578f call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f95795u);
  /* 10f95795 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95798 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9579a call 0x10f96800 */
  push32(0x10f9579fu); f_10f96800();
L_10f9579f:;
  /* 10f9579f mov esi, esp */
  ESI = (ESP);
  /* 10f957a1 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10f957a3 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f957a9u);
  /* 10f957a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f957ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f957ae call 0x10f96800 */
  push32(0x10f957b3u); f_10f96800();
  /* 10f957b3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f957b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f957ba je 0x10f95815 */
  if (C.zf) goto L_10f95815;
  /* 10f957bc mov esi, esp */
  ESI = (ESP);
  /* 10f957be push 0 */
  push32((uint32_t)(0x0u));
  /* 10f957c0 call dword ptr [0x10fc6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6468))), 0x10f957c6u);
  /* 10f957c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f957c9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f957cb call 0x10f96800 */
  push32(0x10f957d0u); f_10f96800();
  /* 10f957d0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f957d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f957d7 je 0x10f95815 */
  if (C.zf) goto L_10f95815;
  /* 10f957d9 mov esi, esp */
  ESI = (ESP);
  /* 10f957db push 0 */
  push32((uint32_t)(0x0u));
  /* 10f957dd push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10f957df call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f957e5u);
  /* 10f957e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f957e8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f957ea call 0x10f96800 */
  push32(0x10f957efu); f_10f96800();
  /* 10f957ef mov esi, esp */
  ESI = (ESP);
  /* 10f957f1 push 0x10fbe140 */
  push32((uint32_t)(0x10fbe140u));
  /* 10f957f6 call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f957fcu);
  /* 10f957fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f957ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95801 call 0x10f96800 */
  push32(0x10f95806u); f_10f96800();
  /* 10f95806 mov esi, esp */
  ESI = (ESP);
  /* 10f95808 call dword ptr [0x10fc6460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6460))), 0x10f9580eu);
  /* 10f9580e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95810 call 0x10f96800 */
  push32(0x10f95815u); f_10f96800();
L_10f95815:;
  /* 10f95815 mov esi, esp */
  ESI = (ESP);
  /* 10f95817 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f95819 call dword ptr [0x10fc6410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6410))), 0x10f9581fu);
  /* 10f9581f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95822 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95824 call 0x10f96800 */
  push32(0x10f95829u); f_10f96800();
  /* 10f95829 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9582e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f95830 je 0x10f9588b */
  if (C.zf) goto L_10f9588b;
  /* 10f95832 mov esi, esp */
  ESI = (ESP);
  /* 10f95834 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f95836 call dword ptr [0x10fc6468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6468))), 0x10f9583cu);
  /* 10f9583c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9583f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95841 call 0x10f96800 */
  push32(0x10f95846u); f_10f96800();
  /* 10f95846 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9584b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9584d je 0x10f9588b */
  if (C.zf) goto L_10f9588b;
  /* 10f9584f mov esi, esp */
  ESI = (ESP);
  /* 10f95851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f95853 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f95855 call dword ptr [0x10fc6414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6414))), 0x10f9585bu);
  /* 10f9585b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9585e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95860 call 0x10f96800 */
  push32(0x10f95865u); f_10f96800();
  /* 10f95865 mov esi, esp */
  ESI = (ESP);
  /* 10f95867 push 0x10fbe134 */
  push32((uint32_t)(0x10fbe134u));
  /* 10f9586c call dword ptr [0x10fc6434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6434))), 0x10f95872u);
  /* 10f95872 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95875 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95877 call 0x10f96800 */
  push32(0x10f9587cu); f_10f96800();
  /* 10f9587c mov esi, esp */
  ESI = (ESP);
  /* 10f9587e call dword ptr [0x10fc6470] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6470))), 0x10f95884u);
  /* 10f95884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95886 call 0x10f96800 */
  push32(0x10f9588bu); f_10f96800();
L_10f9588b:;
  /* 10f9588b pop edi */
  EDI = (pop32());
  /* 10f9588c pop esi */
  ESI = (pop32());
  /* 10f9588d pop ebx */
  EBX = (pop32());
  /* 10f9588e add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f95891 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f95893 call 0x10f96800 */
  push32(0x10f95898u); f_10f96800();
  /* 10f95898 mov esp, ebp */
  ESP = (EBP);
  /* 10f9589a pop ebp */
  EBP = (pop32());
  /* 10f9589b ret  */
  ESPCHK(0x10f91f90u, _esp0);
  ESP += 4; return;
}

/* FUN_100066e0 @ 0x10f966e0 (63 bytes, 26 insns) */
void f_10f966e0(void) {
  FTRACE(0x10f966e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f966e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f966e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f966e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f966e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f966e7 push esi */
  push32((uint32_t)(ESI));
  /* 10f966e8 push edi */
  push32((uint32_t)(EDI));
  /* 10f966e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10f966ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10f966f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10f966f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f966f8 mov esi, esp */
  ESI = (ESP);
  /* 10f966fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f966fd push eax */
  push32((uint32_t)(EAX));
  /* 10f966fe call dword ptr [0x10fc644c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc644c))), 0x10f96704u);
  /* 10f96704 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96709 call 0x10f96800 */
  push32(0x10f9670eu); f_10f96800();
  /* 10f9670e pop edi */
  EDI = (pop32());
  /* 10f9670f pop esi */
  ESI = (pop32());
  /* 10f96710 pop ebx */
  EBX = (pop32());
  /* 10f96711 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96714 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96716 call 0x10f96800 */
  push32(0x10f9671bu); f_10f96800();
  /* 10f9671b mov esp, ebp */
  ESP = (EBP);
  /* 10f9671d pop ebp */
  EBP = (pop32());
  /* 10f9671e ret  */
  ESPCHK(0x10f966e0u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10f96800 (56 bytes, 28 insns) */
void f_10f96800(void) {
  FTRACE(0x10f96800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96800 jne 0x10f96803 */
  if (!C.zf) goto L_10f96803;
  /* 10f96802 ret  */
  ESPCHK(0x10f96800u, _esp0);
  ESP += 4; return;
L_10f96803:;
  /* 10f96803 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96804 mov ebp, esp */
  EBP = (ESP);
  /* 10f96806 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f96809 push eax */
  push32((uint32_t)(EAX));
  /* 10f9680a push edx */
  push32((uint32_t)(EDX));
  /* 10f9680b push ebx */
  push32((uint32_t)(EBX));
  /* 10f9680c push esi */
  push32((uint32_t)(ESI));
  /* 10f9680d push edi */
  push32((uint32_t)(EDI));
  /* 10f9680e push 0x10fbe1e0 */
  push32((uint32_t)(0x10fbe1e0u));
  /* 10f96813 push 0x10fbe1dc */
  push32((uint32_t)(0x10fbe1dcu));
  /* 10f96818 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10f9681a push 0x10fbe1cc */
  push32((uint32_t)(0x10fbe1ccu));
  /* 10f9681f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f96821 call 0x10f96bd0 */
  push32(0x10f96826u); f_10f96bd0();
  /* 10f96826 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96829 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9682c jne 0x10f9682f */
  if (!C.zf) goto L_10f9682f;
  /* 10f9682e int3  */
  x86_unimpl("int3 @ 0x10f9682e");
L_10f9682f:;
  /* 10f9682f pop edi */
  EDI = (pop32());
  /* 10f96830 pop esi */
  ESI = (pop32());
  /* 10f96831 pop ebx */
  EBX = (pop32());
  /* 10f96832 pop edx */
  EDX = (pop32());
  /* 10f96833 pop eax */
  EAX = (pop32());
  /* 10f96834 mov esp, ebp */
  ESP = (EBP);
  /* 10f96836 pop ebp */
  EBP = (pop32());
  /* 10f96837 ret  */
  ESPCHK(0x10f96800u, _esp0);
  ESP += 4; return;
}

/* FUN_10006840 @ 0x10f96840 (313 bytes, 78 insns) */
void f_10f96840(void) {
  FTRACE(0x10f96840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96840 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96841 mov ebp, esp */
  EBP = (ESP);
  /* 10f96843 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96847 jne 0x10f96907 */
  if (!C.zf) goto L_10f96907;
  /* 10f9684d call dword ptr [0x10fc6310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6310))), 0x10f96853u);
  /* 10f96853 mov dword ptr [0x10fc3700], eax */
  w32((uint32_t)(0x10fc3700), (EAX));
  /* 10f96858 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9685a call 0x10f9a300 */
  push32(0x10f9685fu); f_10f9a300();
  /* 10f9685f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96864 jne 0x10f9686d */
  if (!C.zf) goto L_10f9686d;
  /* 10f96866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f96868 jmp 0x10f96975 */
  goto L_10f96975;
L_10f9686d:;
  /* 10f9686d mov eax, dword ptr [0x10fc3700] */
  EAX = (r32((uint32_t)(0x10fc3700)));
  /* 10f96872 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f96875 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9687a mov dword ptr [0x10fc370c], eax */
  w32((uint32_t)(0x10fc370c), (EAX));
  /* 10f9687f mov ecx, dword ptr [0x10fc3700] */
  ECX = (r32((uint32_t)(0x10fc3700)));
  /* 10f96885 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9688b mov dword ptr [0x10fc3708], ecx */
  w32((uint32_t)(0x10fc3708), (ECX));
  /* 10f96891 mov edx, dword ptr [0x10fc3708] */
  EDX = (r32((uint32_t)(0x10fc3708)));
  /* 10f96897 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10f9689a add edx, dword ptr [0x10fc370c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc370c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f968a0 mov dword ptr [0x10fc3704], edx */
  w32((uint32_t)(0x10fc3704), (EDX));
  /* 10f968a6 mov eax, dword ptr [0x10fc3700] */
  EAX = (r32((uint32_t)(0x10fc3700)));
  /* 10f968ab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f968ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f968b3 mov dword ptr [0x10fc3700], eax */
  w32((uint32_t)(0x10fc3700), (EAX));
  /* 10f968b8 call 0x10f97470 */
  push32(0x10f968bdu); f_10f97470();
  /* 10f968bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f968bf jne 0x10f968cd */
  if (!C.zf) goto L_10f968cd;
  /* 10f968c1 call 0x10f9a350 */
  push32(0x10f968c6u); f_10f9a350();
  /* 10f968c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f968c8 jmp 0x10f96975 */
  goto L_10f96975;
L_10f968cd:;
  /* 10f968cd call dword ptr [0x10fc630c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc630c))), 0x10f968d3u);
  /* 10f968d3 mov dword ptr [0x10fc524c], eax */
  w32((uint32_t)(0x10fc524c), (EAX));
  /* 10f968d8 call 0x10f9a0e0 */
  push32(0x10f968ddu); f_10f9a0e0();
  /* 10f968dd mov dword ptr [0x10fc36e8], eax */
  w32((uint32_t)(0x10fc36e8), (EAX));
  /* 10f968e2 call 0x10f97720 */
  push32(0x10f968e7u); f_10f97720();
  /* 10f968e7 call 0x10f99bd0 */
  push32(0x10f968ecu); f_10f99bd0();
  /* 10f968ec call 0x10f99a80 */
  push32(0x10f968f1u); f_10f99a80();
  /* 10f968f1 call 0x10f97270 */
  push32(0x10f968f6u); f_10f97270();
  /* 10f968f6 mov ecx, dword ptr [0x10fc36e4] */
  ECX = (r32((uint32_t)(0x10fc36e4)));
  /* 10f968fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f968ff mov dword ptr [0x10fc36e4], ecx */
  w32((uint32_t)(0x10fc36e4), (ECX));
  /* 10f96905 jmp 0x10f96970 */
  goto L_10f96970;
L_10f96907:;
  /* 10f96907 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9690b jne 0x10f96960 */
  if (!C.zf) goto L_10f96960;
  /* 10f9690d cmp dword ptr [0x10fc36e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96914 jle 0x10f9695a */
  if ((C.zf||C.sf!=C.of)) goto L_10f9695a;
  /* 10f96916 mov edx, dword ptr [0x10fc36e4] */
  EDX = (r32((uint32_t)(0x10fc36e4)));
  /* 10f9691c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9691f mov dword ptr [0x10fc36e4], edx */
  w32((uint32_t)(0x10fc36e4), (EDX));
  /* 10f96925 cmp dword ptr [0x10fc3738], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3738))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9692c jne 0x10f96933 */
  if (!C.zf) goto L_10f96933;
  /* 10f9692e call 0x10f972f0 */
  push32(0x10f96933u); f_10f972f0();
L_10f96933:;
  /* 10f96933 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f96935 call 0x10f99020 */
  push32(0x10f9693au); f_10f99020();
  /* 10f9693a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9693d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f96940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96942 je 0x10f96949 */
  if (C.zf) goto L_10f96949;
  /* 10f96944 call 0x10f99930 */
  push32(0x10f96949u); f_10f99930();
L_10f96949:;
  /* 10f96949 call 0x10f97a50 */
  push32(0x10f9694eu); f_10f97a50();
  /* 10f9694e call 0x10f97500 */
  push32(0x10f96953u); f_10f97500();
  /* 10f96953 call 0x10f9a350 */
  push32(0x10f96958u); f_10f9a350();
  /* 10f96958 jmp 0x10f9695e */
  goto L_10f9695e;
L_10f9695a:;
  /* 10f9695a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9695c jmp 0x10f96975 */
  goto L_10f96975;
L_10f9695e:;
  /* 10f9695e jmp 0x10f96970 */
  goto L_10f96970;
L_10f96960:;
  /* 10f96960 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96964 jne 0x10f96970 */
  if (!C.zf) goto L_10f96970;
  /* 10f96966 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f96968 call 0x10f975f0 */
  push32(0x10f9696du); f_10f975f0();
  /* 10f9696d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96970:;
  /* 10f96970 mov eax, 1 */
  EAX = (0x1u);
L_10f96975:;
  /* 10f96975 pop ebp */
  EBP = (pop32());
  /* 10f96976 ret 0xc */
  ESPCHK(0x10f96840u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10f96980 (243 bytes, 86 insns) */
void f_10f96980(void) {
  FTRACE(0x10f96980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96980 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96981 mov ebp, esp */
  EBP = (ESP);
  /* 10f96983 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96984 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f9698b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9698f jne 0x10f969a1 */
  if (!C.zf) goto L_10f969a1;
  /* 10f96991 cmp dword ptr [0x10fc36e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96998 jne 0x10f969a1 */
  if (!C.zf) goto L_10f969a1;
  /* 10f9699a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9699c jmp 0x10f96a6d */
  goto L_10f96a6d;
L_10f969a1:;
  /* 10f969a1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f969a5 je 0x10f969ad */
  if (C.zf) goto L_10f969ad;
  /* 10f969a7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f969ab jne 0x10f969ef */
  if (!C.zf) goto L_10f969ef;
L_10f969ad:;
  /* 10f969ad cmp dword ptr [0x10fc525c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc525c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f969b4 je 0x10f969cb */
  if (C.zf) goto L_10f969cb;
  /* 10f969b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f969b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f969ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f969bd push ecx */
  push32((uint32_t)(ECX));
  /* 10f969be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f969c1 push edx */
  push32((uint32_t)(EDX));
  /* 10f969c2 call dword ptr [0x10fc525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc525c))), 0x10f969c8u);
  /* 10f969c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f969cb:;
  /* 10f969cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f969cf je 0x10f969e5 */
  if (C.zf) goto L_10f969e5;
  /* 10f969d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f969d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f969d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f969d8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f969d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f969dc push edx */
  push32((uint32_t)(EDX));
  /* 10f969dd call 0x10f96840 */
  push32(0x10f969e2u); f_10f96840();
  /* 10f969e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f969e5:;
  /* 10f969e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f969e9 jne 0x10f969ef */
  if (!C.zf) goto L_10f969ef;
  /* 10f969eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f969ed jmp 0x10f96a6d */
  goto L_10f96a6d;
L_10f969ef:;
  /* 10f969ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f969f2 push eax */
  push32((uint32_t)(EAX));
  /* 10f969f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f969f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f969f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f969fa push edx */
  push32((uint32_t)(EDX));
  /* 10f969fb call 0x10f9100f */
  push32(0x10f96a00u); f_10f9100f();
  /* 10f96a00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f96a03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a07 jne 0x10f96a1e */
  if (!C.zf) goto L_10f96a1e;
  /* 10f96a09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a0d jne 0x10f96a1e */
  if (!C.zf) goto L_10f96a1e;
  /* 10f96a0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96a12 push eax */
  push32((uint32_t)(EAX));
  /* 10f96a13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f96a15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96a18 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96a19 call 0x10f96840 */
  push32(0x10f96a1eu); f_10f96840();
L_10f96a1e:;
  /* 10f96a1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a22 je 0x10f96a2a */
  if (C.zf) goto L_10f96a2a;
  /* 10f96a24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a28 jne 0x10f96a6a */
  if (!C.zf) goto L_10f96a6a;
L_10f96a2a:;
  /* 10f96a2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96a2d push edx */
  push32((uint32_t)(EDX));
  /* 10f96a2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96a31 push eax */
  push32((uint32_t)(EAX));
  /* 10f96a32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96a35 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96a36 call 0x10f96840 */
  push32(0x10f96a3bu); f_10f96840();
  /* 10f96a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96a3d jne 0x10f96a46 */
  if (!C.zf) goto L_10f96a46;
  /* 10f96a3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f96a46:;
  /* 10f96a46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a4a je 0x10f96a6a */
  if (C.zf) goto L_10f96a6a;
  /* 10f96a4c cmp dword ptr [0x10fc525c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc525c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a53 je 0x10f96a6a */
  if (C.zf) goto L_10f96a6a;
  /* 10f96a55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96a58 push edx */
  push32((uint32_t)(EDX));
  /* 10f96a59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96a5c push eax */
  push32((uint32_t)(EAX));
  /* 10f96a5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96a60 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96a61 call dword ptr [0x10fc525c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc525c))), 0x10f96a67u);
  /* 10f96a67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f96a6a:;
  /* 10f96a6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f96a6d:;
  /* 10f96a6d mov esp, ebp */
  ESP = (EBP);
  /* 10f96a6f pop ebp */
  EBP = (pop32());
  /* 10f96a70 ret 0xc */
  ESPCHK(0x10f96980u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10f96a80 (58 bytes, 18 insns) */
void f_10f96a80(void) {
  FTRACE(0x10f96a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96a81 mov ebp, esp */
  EBP = (ESP);
  /* 10f96a83 cmp dword ptr [0x10fc36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a8a je 0x10f96a9e */
  if (C.zf) goto L_10f96a9e;
  /* 10f96a8c cmp dword ptr [0x10fc36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a93 jne 0x10f96aa3 */
  if (!C.zf) goto L_10f96aa3;
  /* 10f96a95 cmp dword ptr [0x10fc36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96a9c jne 0x10f96aa3 */
  if (!C.zf) goto L_10f96aa3;
L_10f96a9e:;
  /* 10f96a9e call 0x10f9a3f0 */
  push32(0x10f96aa3u); f_10f9a3f0();
L_10f96aa3:;
  /* 10f96aa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96aa6 push eax */
  push32((uint32_t)(EAX));
  /* 10f96aa7 call 0x10f9a440 */
  push32(0x10f96aacu); f_10f9a440();
  /* 10f96aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96aaf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f96ab4 call dword ptr [0x10fc1a30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc1a30))), 0x10f96abau);
  /* 10f96aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96abd pop ebp */
  EBP = (pop32());
  /* 10f96abe ret  */
  ESPCHK(0x10f96a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x10f96ac0 (11 bytes, 5 insns) */
void f_10f96ac0(void) {
  FTRACE(0x10f96ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10f96ac3 call dword ptr [0x10fc6314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6314))), 0x10f96ac9u);
  /* 10f96ac9 pop ebp */
  EBP = (pop32());
  /* 10f96aca ret  */
  ESPCHK(0x10f96ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x10f96ad0 (87 bytes, 30 insns) */
void f_10f96ad0(void) {
  FTRACE(0x10f96ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96ad1 mov ebp, esp */
  EBP = (ESP);
  /* 10f96ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96ad4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96ad8 jl 0x10f96ae0 */
  if ((C.sf!=C.of)) goto L_10f96ae0;
  /* 10f96ada cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96ade jl 0x10f96ae5 */
  if ((C.sf!=C.of)) goto L_10f96ae5;
L_10f96ae0:;
  /* 10f96ae0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f96ae3 jmp 0x10f96b23 */
  goto L_10f96b23;
L_10f96ae5:;
  /* 10f96ae5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96ae9 jne 0x10f96af7 */
  if (!C.zf) goto L_10f96af7;
  /* 10f96aeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96aee mov eax, dword ptr [eax*4 + 0x10fc1a38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10fc1a38)));
  /* 10f96af5 jmp 0x10f96b23 */
  goto L_10f96b23;
L_10f96af7:;
  /* 10f96af7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96afa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10f96afd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f96aff je 0x10f96b06 */
  if (C.zf) goto L_10f96b06;
  /* 10f96b01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f96b04 jmp 0x10f96b23 */
  goto L_10f96b23;
L_10f96b06:;
  /* 10f96b06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b09 mov eax, dword ptr [edx*4 + 0x10fc1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc1a38)));
  /* 10f96b10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f96b13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96b19 mov dword ptr [ecx*4 + 0x10fc1a38], edx */
  w32((uint32_t)(ECX*4 + 0x10fc1a38), (EDX));
  /* 10f96b20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f96b23:;
  /* 10f96b23 mov esp, ebp */
  ESP = (EBP);
  /* 10f96b25 pop ebp */
  EBP = (pop32());
  /* 10f96b26 ret  */
  ESPCHK(0x10f96ad0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10f96b30 (126 bytes, 38 insns) */
void f_10f96b30(void) {
  FTRACE(0x10f96b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96b31 mov ebp, esp */
  EBP = (ESP);
  /* 10f96b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96b34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96b38 jl 0x10f96b40 */
  if ((C.sf!=C.of)) goto L_10f96b40;
  /* 10f96b3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96b3e jl 0x10f96b47 */
  if ((C.sf!=C.of)) goto L_10f96b47;
L_10f96b40:;
  /* 10f96b40 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10f96b45 jmp 0x10f96baa */
  goto L_10f96baa;
L_10f96b47:;
  /* 10f96b47 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96b4b jne 0x10f96b59 */
  if (!C.zf) goto L_10f96b59;
  /* 10f96b4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b50 mov eax, dword ptr [eax*4 + 0x10fc1a44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10fc1a44)));
  /* 10f96b57 jmp 0x10f96baa */
  goto L_10f96baa;
L_10f96b59:;
  /* 10f96b59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b5c mov edx, dword ptr [ecx*4 + 0x10fc1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a44)));
  /* 10f96b63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f96b66 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96b6a jne 0x10f96b80 */
  if (!C.zf) goto L_10f96b80;
  /* 10f96b6c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10f96b6e call dword ptr [0x10fc6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6318))), 0x10f96b74u);
  /* 10f96b74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b77 mov dword ptr [ecx*4 + 0x10fc1a44], eax */
  w32((uint32_t)(ECX*4 + 0x10fc1a44), (EAX));
  /* 10f96b7e jmp 0x10f96ba7 */
  goto L_10f96ba7;
L_10f96b80:;
  /* 10f96b80 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96b84 jne 0x10f96b9a */
  if (!C.zf) goto L_10f96b9a;
  /* 10f96b86 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f96b88 call dword ptr [0x10fc6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6318))), 0x10f96b8eu);
  /* 10f96b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b91 mov dword ptr [edx*4 + 0x10fc1a44], eax */
  w32((uint32_t)(EDX*4 + 0x10fc1a44), (EAX));
  /* 10f96b98 jmp 0x10f96ba7 */
  goto L_10f96ba7;
L_10f96b9a:;
  /* 10f96b9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96ba0 mov dword ptr [eax*4 + 0x10fc1a44], ecx */
  w32((uint32_t)(EAX*4 + 0x10fc1a44), (ECX));
L_10f96ba7:;
  /* 10f96ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f96baa:;
  /* 10f96baa mov esp, ebp */
  ESP = (EBP);
  /* 10f96bac pop ebp */
  EBP = (pop32());
  /* 10f96bad ret  */
  ESPCHK(0x10f96b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x10f96bb0 (28 bytes, 11 insns) */
void f_10f96bb0(void) {
  FTRACE(0x10f96bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f96bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96bb4 mov eax, dword ptr [0x10fc5240] */
  EAX = (r32((uint32_t)(0x10fc5240)));
  /* 10f96bb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f96bbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96bbf mov dword ptr [0x10fc5240], ecx */
  w32((uint32_t)(0x10fc5240), (ECX));
  /* 10f96bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f96bc8 mov esp, ebp */
  ESP = (EBP);
  /* 10f96bca pop ebp */
  EBP = (pop32());
  /* 10f96bcb ret  */
  ESPCHK(0x10f96bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bd0 @ 0x10f96bd0 (912 bytes, 248 insns) */
void f_10f96bd0(void) {
  FTRACE(0x10f96bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10f96bd3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10f96bd8 call 0x10f9acb0 */
  push32(0x10f96bddu); f_10f9acb0();
  /* 10f96bdd push edi */
  push32((uint32_t)(EDI));
  /* 10f96bde mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10f96be5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f96bea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f96bec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10f96bf2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f96bf4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f96bf6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f96bf7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10f96bfe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f96c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f96c05 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10f96c0b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f96c0d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f96c0f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f96c10 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10f96c17 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10f96c1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f96c1e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10f96c24 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f96c26 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10f96c28 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10f96c29 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10f96c2c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10f96c32 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96c36 jl 0x10f96c3e */
  if ((C.sf!=C.of)) goto L_10f96c3e;
  /* 10f96c38 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96c3c jl 0x10f96c46 */
  if ((C.sf!=C.of)) goto L_10f96c46;
L_10f96c3e:;
  /* 10f96c3e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f96c41 jmp 0x10f96f5b */
  goto L_10f96f5b;
L_10f96c46:;
  /* 10f96c46 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96c4a jne 0x10f96cf0 */
  if (!C.zf) goto L_10f96cf0;
  /* 10f96c50 push 0x10fc1a34 */
  push32((uint32_t)(0x10fc1a34u));
  /* 10f96c55 call dword ptr [0x10fc6330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6330))), 0x10f96c5bu);
  /* 10f96c5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96c5d jle 0x10f96cf0 */
  if ((C.zf||C.sf!=C.of)) goto L_10f96cf0;
  /* 10f96c63 cmp dword ptr [0x10fc36f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96c6a jne 0x10f96cae */
  if (!C.zf) goto L_10f96cae;
  /* 10f96c6c push 0x10fbe388 */
  push32((uint32_t)(0x10fbe388u));
  /* 10f96c71 call dword ptr [0x10fc632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc632c))), 0x10f96c77u);
  /* 10f96c77 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10f96c7d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96c84 je 0x10f96ca6 */
  if (C.zf) goto L_10f96ca6;
  /* 10f96c86 push 0x10fbe37c */
  push32((uint32_t)(0x10fbe37cu));
  /* 10f96c8b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10f96c91 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96c92 call dword ptr [0x10fc6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6328))), 0x10f96c98u);
  /* 10f96c98 mov dword ptr [0x10fc36f8], eax */
  w32((uint32_t)(0x10fc36f8), (EAX));
  /* 10f96c9d cmp dword ptr [0x10fc36f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96ca4 jne 0x10f96cae */
  if (!C.zf) goto L_10f96cae;
L_10f96ca6:;
  /* 10f96ca6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f96ca9 jmp 0x10f96f5b */
  goto L_10f96f5b;
L_10f96cae:;
  /* 10f96cae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96cb1 push edx */
  push32((uint32_t)(EDX));
  /* 10f96cb2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96cb5 push eax */
  push32((uint32_t)(EAX));
  /* 10f96cb6 push 0x10fbe348 */
  push32((uint32_t)(0x10fbe348u));
  /* 10f96cbb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10f96cc1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96cc2 call dword ptr [0x10fc36f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc36f8))), 0x10f96cc8u);
  /* 10f96cc8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96ccb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f96cd1 push edx */
  push32((uint32_t)(EDX));
  /* 10f96cd2 call dword ptr [0x10fc6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6324))), 0x10f96cd8u);
  /* 10f96cd8 push 0x10fc1a34 */
  push32((uint32_t)(0x10fc1a34u));
  /* 10f96cdd call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10f96ce3u);
  /* 10f96ce3 call 0x10f96ac0 */
  push32(0x10f96ce8u); f_10f96ac0();
  /* 10f96ce8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f96ceb jmp 0x10f96f5b */
  goto L_10f96f5b;
L_10f96cf0:;
  /* 10f96cf0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96cf4 je 0x10f96d2d */
  if (C.zf) goto L_10f96d2d;
  /* 10f96cf6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10f96cfc push eax */
  push32((uint32_t)(EAX));
  /* 10f96cfd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f96d00 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96d01 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10f96d06 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10f96d0c push edx */
  push32((uint32_t)(EDX));
  /* 10f96d0d call 0x10f9abb0 */
  push32(0x10f96d12u); f_10f9abb0();
  /* 10f96d12 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96d15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96d17 jge 0x10f96d2d */
  if ((C.sf==C.of)) goto L_10f96d2d;
  /* 10f96d19 push 0x10fbe31c */
  push32((uint32_t)(0x10fbe31cu));
  /* 10f96d1e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10f96d24 push eax */
  push32((uint32_t)(EAX));
  /* 10f96d25 call 0x10f9aac0 */
  push32(0x10f96d2au); f_10f9aac0();
  /* 10f96d2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96d2d:;
  /* 10f96d2d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96d31 jne 0x10f96d65 */
  if (!C.zf) goto L_10f96d65;
  /* 10f96d33 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96d37 je 0x10f96d45 */
  if (C.zf) goto L_10f96d45;
  /* 10f96d39 mov dword ptr [ebp - 0x3028], 0x10fbe308 */
  w32((uint32_t)(EBP + -0x3028), (0x10fbe308u));
  /* 10f96d43 jmp 0x10f96d4f */
  goto L_10f96d4f;
L_10f96d45:;
  /* 10f96d45 mov dword ptr [ebp - 0x3028], 0x10fbe2f4 */
  w32((uint32_t)(EBP + -0x3028), (0x10fbe2f4u));
L_10f96d4f:;
  /* 10f96d4f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10f96d55 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96d56 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f96d5c push edx */
  push32((uint32_t)(EDX));
  /* 10f96d5d call 0x10f9aac0 */
  push32(0x10f96d62u); f_10f9aac0();
  /* 10f96d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96d65:;
  /* 10f96d65 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10f96d6b push eax */
  push32((uint32_t)(EAX));
  /* 10f96d6c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10f96d72 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96d73 call 0x10f9aad0 */
  push32(0x10f96d78u); f_10f9aad0();
  /* 10f96d78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96d7b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96d7f jne 0x10f96dba */
  if (!C.zf) goto L_10f96dba;
  /* 10f96d81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96d84 mov eax, dword ptr [edx*4 + 0x10fc1a38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc1a38)));
  /* 10f96d8b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f96d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96d90 je 0x10f96da6 */
  if (C.zf) goto L_10f96da6;
  /* 10f96d92 push 0x10fbe2f0 */
  push32((uint32_t)(0x10fbe2f0u));
  /* 10f96d97 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10f96d9d push ecx */
  push32((uint32_t)(ECX));
  /* 10f96d9e call 0x10f9aad0 */
  push32(0x10f96da3u); f_10f9aad0();
  /* 10f96da3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96da6:;
  /* 10f96da6 push 0x10fbe2ec */
  push32((uint32_t)(0x10fbe2ecu));
  /* 10f96dab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f96db1 push edx */
  push32((uint32_t)(EDX));
  /* 10f96db2 call 0x10f9aad0 */
  push32(0x10f96db7u); f_10f9aad0();
  /* 10f96db7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96dba:;
  /* 10f96dba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96dbe je 0x10f96e02 */
  if (C.zf) goto L_10f96e02;
  /* 10f96dc0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10f96dc6 push eax */
  push32((uint32_t)(EAX));
  /* 10f96dc7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96dca push ecx */
  push32((uint32_t)(ECX));
  /* 10f96dcb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96dce push edx */
  push32((uint32_t)(EDX));
  /* 10f96dcf push 0x10fbe2e0 */
  push32((uint32_t)(0x10fbe2e0u));
  /* 10f96dd4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f96dd9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f96ddf push eax */
  push32((uint32_t)(EAX));
  /* 10f96de0 call 0x10f9a9c0 */
  push32(0x10f96de5u); f_10f9a9c0();
  /* 10f96de5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96dea jge 0x10f96e00 */
  if ((C.sf==C.of)) goto L_10f96e00;
  /* 10f96dec push 0x10fbe31c */
  push32((uint32_t)(0x10fbe31cu));
  /* 10f96df1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10f96df7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96df8 call 0x10f9aac0 */
  push32(0x10f96dfdu); f_10f9aac0();
  /* 10f96dfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96e00:;
  /* 10f96e00 jmp 0x10f96e18 */
  goto L_10f96e18;
L_10f96e02:;
  /* 10f96e02 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10f96e08 push edx */
  push32((uint32_t)(EDX));
  /* 10f96e09 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f96e0f push eax */
  push32((uint32_t)(EAX));
  /* 10f96e10 call 0x10f9aac0 */
  push32(0x10f96e15u); f_10f9aac0();
  /* 10f96e15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96e18:;
  /* 10f96e18 cmp dword ptr [0x10fc5240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96e1f je 0x10f96e5c */
  if (C.zf) goto L_10f96e5c;
  /* 10f96e21 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10f96e27 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96e28 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f96e2e push edx */
  push32((uint32_t)(EDX));
  /* 10f96e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96e32 push eax */
  push32((uint32_t)(EAX));
  /* 10f96e33 call dword ptr [0x10fc5240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc5240))), 0x10f96e39u);
  /* 10f96e39 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96e3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96e3e je 0x10f96e5c */
  if (C.zf) goto L_10f96e5c;
  /* 10f96e40 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96e44 jne 0x10f96e51 */
  if (!C.zf) goto L_10f96e51;
  /* 10f96e46 push 0x10fc1a34 */
  push32((uint32_t)(0x10fc1a34u));
  /* 10f96e4b call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10f96e51u);
L_10f96e51:;
  /* 10f96e51 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10f96e57 jmp 0x10f96f5b */
  goto L_10f96f5b;
L_10f96e5c:;
  /* 10f96e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96e5f mov edx, dword ptr [ecx*4 + 0x10fc1a38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a38)));
  /* 10f96e66 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f96e69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f96e6b je 0x10f96eab */
  if (C.zf) goto L_10f96eab;
  /* 10f96e6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96e70 cmp dword ptr [eax*4 + 0x10fc1a44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10fc1a44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96e78 je 0x10f96eab */
  if (C.zf) goto L_10f96eab;
  /* 10f96e7a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f96e7c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10f96e82 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96e83 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f96e89 push edx */
  push32((uint32_t)(EDX));
  /* 10f96e8a call 0x10f9a940 */
  push32(0x10f96e8fu); f_10f9a940();
  /* 10f96e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96e92 push eax */
  push32((uint32_t)(EAX));
  /* 10f96e93 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10f96e99 push eax */
  push32((uint32_t)(EAX));
  /* 10f96e9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96e9d mov edx, dword ptr [ecx*4 + 0x10fc1a44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a44)));
  /* 10f96ea4 push edx */
  push32((uint32_t)(EDX));
  /* 10f96ea5 call dword ptr [0x10fc631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc631c))), 0x10f96eabu);
L_10f96eab:;
  /* 10f96eab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96eae mov ecx, dword ptr [eax*4 + 0x10fc1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc1a38)));
  /* 10f96eb5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f96eb8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f96eba je 0x10f96ec9 */
  if (C.zf) goto L_10f96ec9;
  /* 10f96ebc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10f96ec2 push edx */
  push32((uint32_t)(EDX));
  /* 10f96ec3 call dword ptr [0x10fc6324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6324))), 0x10f96ec9u);
L_10f96ec9:;
  /* 10f96ec9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96ecc mov ecx, dword ptr [eax*4 + 0x10fc1a38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc1a38)));
  /* 10f96ed3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f96ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f96ed8 je 0x10f96f48 */
  if (C.zf) goto L_10f96f48;
  /* 10f96eda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96ede je 0x10f96efd */
  if (C.zf) goto L_10f96efd;
  /* 10f96ee0 push 0xa */
  push32((uint32_t)(0xau));
  /* 10f96ee2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10f96ee8 push edx */
  push32((uint32_t)(EDX));
  /* 10f96ee9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f96eec push eax */
  push32((uint32_t)(EAX));
  /* 10f96eed call 0x10f9a650 */
  push32(0x10f96ef2u); f_10f9a650();
  /* 10f96ef2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96ef5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10f96efb jmp 0x10f96f07 */
  goto L_10f96f07;
L_10f96efd:;
  /* 10f96efd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10f96f07:;
  /* 10f96f07 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10f96f0d push ecx */
  push32((uint32_t)(ECX));
  /* 10f96f0e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f96f11 push edx */
  push32((uint32_t)(EDX));
  /* 10f96f12 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10f96f18 push eax */
  push32((uint32_t)(EAX));
  /* 10f96f19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f96f1c push ecx */
  push32((uint32_t)(ECX));
  /* 10f96f1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f96f20 push edx */
  push32((uint32_t)(EDX));
  /* 10f96f21 call 0x10f96f60 */
  push32(0x10f96f26u); f_10f96f60();
  /* 10f96f26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96f29 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10f96f2f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96f33 jne 0x10f96f40 */
  if (!C.zf) goto L_10f96f40;
  /* 10f96f35 push 0x10fc1a34 */
  push32((uint32_t)(0x10fc1a34u));
  /* 10f96f3a call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10f96f40u);
L_10f96f40:;
  /* 10f96f40 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10f96f46 jmp 0x10f96f5b */
  goto L_10f96f5b;
L_10f96f48:;
  /* 10f96f48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96f4c jne 0x10f96f59 */
  if (!C.zf) goto L_10f96f59;
  /* 10f96f4e push 0x10fc1a34 */
  push32((uint32_t)(0x10fc1a34u));
  /* 10f96f53 call dword ptr [0x10fc6320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6320))), 0x10f96f59u);
L_10f96f59:;
  /* 10f96f59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f96f5b:;
  /* 10f96f5b pop edi */
  EDI = (pop32());
  /* 10f96f5c mov esp, ebp */
  ESP = (EBP);
  /* 10f96f5e pop ebp */
  EBP = (pop32());
  /* 10f96f5f ret  */
  ESPCHK(0x10f96bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f60 @ 0x10f96f60 (780 bytes, 197 insns) */
void f_10f96f60(void) {
  FTRACE(0x10f96f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f96f60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f96f61 mov ebp, esp */
  EBP = (ESP);
  /* 10f96f63 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10f96f68 call 0x10f9acb0 */
  push32(0x10f96f6du); f_10f9acb0();
L_10f96f6d:;
  /* 10f96f6d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96f71 jne 0x10f96f98 */
  if (!C.zf) goto L_10f96f98;
  /* 10f96f73 push 0x10fbe4d8 */
  push32((uint32_t)(0x10fbe4d8u));
  /* 10f96f78 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f96f7a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10f96f7f push 0x10fbe4cc */
  push32((uint32_t)(0x10fbe4ccu));
  /* 10f96f84 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f96f86 call 0x10f96bd0 */
  push32(0x10f96f8bu); f_10f96bd0();
  /* 10f96f8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96f8e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96f91 jne 0x10f96f98 */
  if (!C.zf) goto L_10f96f98;
  /* 10f96f93 call 0x10f96ac0 */
  push32(0x10f96f98u); f_10f96ac0();
L_10f96f98:;
  /* 10f96f98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f96f9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96f9c jne 0x10f96f6d */
  if (!C.zf) goto L_10f96f6d;
  /* 10f96f9e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f96fa3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10f96fa9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96faa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f96fac call dword ptr [0x10fc6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6334))), 0x10f96fb2u);
  /* 10f96fb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f96fb4 jne 0x10f96fca */
  if (!C.zf) goto L_10f96fca;
  /* 10f96fb6 push 0x10fbe4b4 */
  push32((uint32_t)(0x10fbe4b4u));
  /* 10f96fbb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10f96fc1 push edx */
  push32((uint32_t)(EDX));
  /* 10f96fc2 call 0x10f9aac0 */
  push32(0x10f96fc7u); f_10f9aac0();
  /* 10f96fc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f96fca:;
  /* 10f96fca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10f96fd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f96fd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f96fd6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f96fd7 call 0x10f9a940 */
  push32(0x10f96fdcu); f_10f9a940();
  /* 10f96fdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96fdf cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f96fe2 jbe 0x10f9700d */
  if ((C.cf||C.zf)) goto L_10f9700d;
  /* 10f96fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f96fe7 push edx */
  push32((uint32_t)(EDX));
  /* 10f96fe8 call 0x10f9a940 */
  push32(0x10f96fedu); f_10f9a940();
  /* 10f96fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f96ff0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f96ff3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10f96ff7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f96ffa push 3 */
  push32((uint32_t)(0x3u));
  /* 10f96ffc push 0x10fbe4b0 */
  push32((uint32_t)(0x10fbe4b0u));
  /* 10f97001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97004 push eax */
  push32((uint32_t)(EAX));
  /* 10f97005 call 0x10f9b330 */
  push32(0x10f9700au); f_10f9b330();
  /* 10f9700a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9700d:;
  /* 10f9700d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97010 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10f97016 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9701d je 0x10f97068 */
  if (C.zf) goto L_10f97068;
  /* 10f9701f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f97025 push edx */
  push32((uint32_t)(EDX));
  /* 10f97026 call 0x10f9a940 */
  push32(0x10f9702bu); f_10f9a940();
  /* 10f9702b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9702e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97031 jbe 0x10f97068 */
  if ((C.cf||C.zf)) goto L_10f97068;
  /* 10f97033 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f97039 push eax */
  push32((uint32_t)(EAX));
  /* 10f9703a call 0x10f9a940 */
  push32(0x10f9703fu); f_10f9a940();
  /* 10f9703f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97042 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f97048 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10f9704c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10f97052 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f97054 push 0x10fbe4b0 */
  push32((uint32_t)(0x10fbe4b0u));
  /* 10f97059 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f9705f push eax */
  push32((uint32_t)(EAX));
  /* 10f97060 call 0x10f9b330 */
  push32(0x10f97065u); f_10f9b330();
  /* 10f97065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f97068:;
  /* 10f97068 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9706c jne 0x10f9707a */
  if (!C.zf) goto L_10f9707a;
  /* 10f9706e mov dword ptr [ebp - 0x1114], 0x10fbe43c */
  w32((uint32_t)(EBP + -0x1114), (0x10fbe43cu));
  /* 10f97078 jmp 0x10f97084 */
  goto L_10f97084;
L_10f9707a:;
  /* 10f9707a mov dword ptr [ebp - 0x1114], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1114), (0x10fbe1dcu));
L_10f97084:;
  /* 10f97084 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97087 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9708a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9708c je 0x10f97099 */
  if (C.zf) goto L_10f97099;
  /* 10f9708e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97091 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10f97097 jmp 0x10f970a3 */
  goto L_10f970a3;
L_10f97099:;
  /* 10f97099 mov dword ptr [ebp - 0x1118], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1118), (0x10fbe1dcu));
L_10f970a3:;
  /* 10f970a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f970a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f970a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f970ab je 0x10f970bf */
  if (C.zf) goto L_10f970bf;
  /* 10f970ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f970b1 jne 0x10f970bf */
  if (!C.zf) goto L_10f970bf;
  /* 10f970b3 mov dword ptr [ebp - 0x111c], 0x10fbe42c */
  w32((uint32_t)(EBP + -0x111c), (0x10fbe42cu));
  /* 10f970bd jmp 0x10f970c9 */
  goto L_10f970c9;
L_10f970bf:;
  /* 10f970bf mov dword ptr [ebp - 0x111c], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x111c), (0x10fbe1dcu));
L_10f970c9:;
  /* 10f970c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f970cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f970cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f970d1 je 0x10f970df */
  if (C.zf) goto L_10f970df;
  /* 10f970d3 mov dword ptr [ebp - 0x1120], 0x10fbe428 */
  w32((uint32_t)(EBP + -0x1120), (0x10fbe428u));
  /* 10f970dd jmp 0x10f970e9 */
  goto L_10f970e9;
L_10f970df:;
  /* 10f970df mov dword ptr [ebp - 0x1120], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1120), (0x10fbe1dcu));
L_10f970e9:;
  /* 10f970e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f970ed je 0x10f970fa */
  if (C.zf) goto L_10f970fa;
  /* 10f970ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f970f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10f970f8 jmp 0x10f97104 */
  goto L_10f97104;
L_10f970fa:;
  /* 10f970fa mov dword ptr [ebp - 0x1124], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1124), (0x10fbe1dcu));
L_10f97104:;
  /* 10f97104 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97108 je 0x10f97116 */
  if (C.zf) goto L_10f97116;
  /* 10f9710a mov dword ptr [ebp - 0x1128], 0x10fbe420 */
  w32((uint32_t)(EBP + -0x1128), (0x10fbe420u));
  /* 10f97114 jmp 0x10f97120 */
  goto L_10f97120;
L_10f97116:;
  /* 10f97116 mov dword ptr [ebp - 0x1128], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1128), (0x10fbe1dcu));
L_10f97120:;
  /* 10f97120 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97124 je 0x10f97131 */
  if (C.zf) goto L_10f97131;
  /* 10f97126 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97129 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10f9712f jmp 0x10f9713b */
  goto L_10f9713b;
L_10f97131:;
  /* 10f97131 mov dword ptr [ebp - 0x112c], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x112c), (0x10fbe1dcu));
L_10f9713b:;
  /* 10f9713b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9713f je 0x10f9714d */
  if (C.zf) goto L_10f9714d;
  /* 10f97141 mov dword ptr [ebp - 0x1130], 0x10fbe418 */
  w32((uint32_t)(EBP + -0x1130), (0x10fbe418u));
  /* 10f9714b jmp 0x10f97157 */
  goto L_10f97157;
L_10f9714d:;
  /* 10f9714d mov dword ptr [ebp - 0x1130], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1130), (0x10fbe1dcu));
L_10f97157:;
  /* 10f97157 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9715e je 0x10f9716e */
  if (C.zf) goto L_10f9716e;
  /* 10f97160 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10f97166 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10f9716c jmp 0x10f97178 */
  goto L_10f97178;
L_10f9716e:;
  /* 10f9716e mov dword ptr [ebp - 0x1134], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1134), (0x10fbe1dcu));
L_10f97178:;
  /* 10f97178 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9717f je 0x10f9718d */
  if (C.zf) goto L_10f9718d;
  /* 10f97181 mov dword ptr [ebp - 0x1138], 0x10fbe40c */
  w32((uint32_t)(EBP + -0x1138), (0x10fbe40cu));
  /* 10f9718b jmp 0x10f97197 */
  goto L_10f97197;
L_10f9718d:;
  /* 10f9718d mov dword ptr [ebp - 0x1138], 0x10fbe1dc */
  w32((uint32_t)(EBP + -0x1138), (0x10fbe1dcu));
L_10f97197:;
  /* 10f97197 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10f9719d push edx */
  push32((uint32_t)(EDX));
  /* 10f9719e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10f971a4 push eax */
  push32((uint32_t)(EAX));
  /* 10f971a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10f971ab push ecx */
  push32((uint32_t)(ECX));
  /* 10f971ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10f971b2 push edx */
  push32((uint32_t)(EDX));
  /* 10f971b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10f971b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f971ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10f971c0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f971c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10f971c7 push edx */
  push32((uint32_t)(EDX));
  /* 10f971c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10f971ce push eax */
  push32((uint32_t)(EAX));
  /* 10f971cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10f971d5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f971d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10f971dc push edx */
  push32((uint32_t)(EDX));
  /* 10f971dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f971e0 push eax */
  push32((uint32_t)(EAX));
  /* 10f971e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f971e4 mov edx, dword ptr [ecx*4 + 0x10fc1a50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a50)));
  /* 10f971eb push edx */
  push32((uint32_t)(EDX));
  /* 10f971ec push 0x10fbe3b8 */
  push32((uint32_t)(0x10fbe3b8u));
  /* 10f971f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f971f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10f971fc push eax */
  push32((uint32_t)(EAX));
  /* 10f971fd call 0x10f9a9c0 */
  push32(0x10f97202u); f_10f9a9c0();
  /* 10f97202 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97205 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97207 jge 0x10f9721d */
  if ((C.sf==C.of)) goto L_10f9721d;
  /* 10f97209 push 0x10fbe31c */
  push32((uint32_t)(0x10fbe31cu));
  /* 10f9720e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10f97214 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97215 call 0x10f9aac0 */
  push32(0x10f9721au); f_10f9aac0();
  /* 10f9721a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9721d:;
  /* 10f9721d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10f97222 push 0x10fbe394 */
  push32((uint32_t)(0x10fbe394u));
  /* 10f97227 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10f9722d push edx */
  push32((uint32_t)(EDX));
  /* 10f9722e call 0x10f9b270 */
  push32(0x10f97233u); f_10f9b270();
  /* 10f97233 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97236 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10f9723c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97243 jne 0x10f97256 */
  if (!C.zf) goto L_10f97256;
  /* 10f97245 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10f97247 call 0x10f9afb0 */
  push32(0x10f9724cu); f_10f9afb0();
  /* 10f9724c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9724f push 3 */
  push32((uint32_t)(0x3u));
  /* 10f97251 call 0x10f972d0 */
  push32(0x10f97256u); f_10f972d0();
L_10f97256:;
  /* 10f97256 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9725d jne 0x10f97266 */
  if (!C.zf) goto L_10f97266;
  /* 10f9725f mov eax, 1 */
  EAX = (0x1u);
  /* 10f97264 jmp 0x10f97268 */
  goto L_10f97268;
L_10f97266:;
  /* 10f97266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f97268:;
  /* 10f97268 mov esp, ebp */
  ESP = (EBP);
  /* 10f9726a pop ebp */
  EBP = (pop32());
  /* 10f9726b ret  */
  ESPCHK(0x10f96f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007270 @ 0x10f97270 (56 bytes, 15 insns) */
void f_10f97270(void) {
  FTRACE(0x10f97270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97270 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97271 mov ebp, esp */
  EBP = (ESP);
  /* 10f97273 cmp dword ptr [0x10fc523c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc523c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9727a je 0x10f97282 */
  if (C.zf) goto L_10f97282;
  /* 10f9727c call dword ptr [0x10fc523c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc523c))), 0x10f97282u);
L_10f97282:;
  /* 10f97282 push 0x10fc1418 */
  push32((uint32_t)(0x10fc1418u));
  /* 10f97287 push 0x10fc1208 */
  push32((uint32_t)(0x10fc1208u));
  /* 10f9728c call 0x10f97440 */
  push32(0x10f97291u); f_10f97440();
  /* 10f97291 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97294 push 0x10fc1104 */
  push32((uint32_t)(0x10fc1104u));
  /* 10f97299 push 0x10fc1000 */
  push32((uint32_t)(0x10fc1000u));
  /* 10f9729e call 0x10f97440 */
  push32(0x10f972a3u); f_10f97440();
  /* 10f972a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f972a6 pop ebp */
  EBP = (pop32());
  /* 10f972a7 ret  */
  ESPCHK(0x10f97270u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x10f972b0 (21 bytes, 10 insns) */
void f_10f972b0(void) {
  FTRACE(0x10f972b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f972b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f972b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f972b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f972b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f972b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f972ba push eax */
  push32((uint32_t)(EAX));
  /* 10f972bb call 0x10f97330 */
  push32(0x10f972c0u); f_10f97330();
  /* 10f972c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f972c3 pop ebp */
  EBP = (pop32());
  /* 10f972c4 ret  */
  ESPCHK(0x10f972b0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10f972d0 (21 bytes, 10 insns) */
void f_10f972d0(void) {
  FTRACE(0x10f972d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f972d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f972d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f972d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f972d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f972d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f972da push eax */
  push32((uint32_t)(EAX));
  /* 10f972db call 0x10f97330 */
  push32(0x10f972e0u); f_10f97330();
  /* 10f972e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f972e3 pop ebp */
  EBP = (pop32());
  /* 10f972e4 ret  */
  ESPCHK(0x10f972d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072f0 @ 0x10f972f0 (19 bytes, 9 insns) */
void f_10f972f0(void) {
  FTRACE(0x10f972f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f972f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f972f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f972f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f972f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f972f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f972f9 call 0x10f97330 */
  push32(0x10f972feu); f_10f97330();
  /* 10f972fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97301 pop ebp */
  EBP = (pop32());
  /* 10f97302 ret  */
  ESPCHK(0x10f972f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007310 @ 0x10f97310 (19 bytes, 9 insns) */
void f_10f97310(void) {
  FTRACE(0x10f97310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97310 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97311 mov ebp, esp */
  EBP = (ESP);
  /* 10f97313 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97315 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97317 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97319 call 0x10f97330 */
  push32(0x10f9731eu); f_10f97330();
  /* 10f9731e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97321 pop ebp */
  EBP = (pop32());
  /* 10f97322 ret  */
  ESPCHK(0x10f97310u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x10f97330 (227 bytes, 61 insns) */
void f_10f97330(void) {
  FTRACE(0x10f97330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97330 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97331 mov ebp, esp */
  EBP = (ESP);
  /* 10f97333 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97334 call 0x10f97420 */
  push32(0x10f97339u); f_10f97420();
  /* 10f97339 cmp dword ptr [0x10fc373c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc373c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97340 jne 0x10f97353 */
  if (!C.zf) goto L_10f97353;
  /* 10f97342 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97345 push eax */
  push32((uint32_t)(EAX));
  /* 10f97346 call dword ptr [0x10fc6340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6340))), 0x10f9734cu);
  /* 10f9734c push eax */
  push32((uint32_t)(EAX));
  /* 10f9734d call dword ptr [0x10fc633c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc633c))), 0x10f97353u);
L_10f97353:;
  /* 10f97353 mov dword ptr [0x10fc3738], 1 */
  w32((uint32_t)(0x10fc3738), (0x1u));
  /* 10f9735d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10f97360 mov byte ptr [0x10fc3734], cl */
  w8((uint32_t)(0x10fc3734), (CL));
  /* 10f97366 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9736a jne 0x10f973b3 */
  if (!C.zf) goto L_10f973b3;
  /* 10f9736c cmp dword ptr [0x10fc5238], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5238))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97373 je 0x10f973a1 */
  if (C.zf) goto L_10f973a1;
  /* 10f97375 mov edx, dword ptr [0x10fc5234] */
  EDX = (r32((uint32_t)(0x10fc5234)));
  /* 10f9737b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9737e:;
  /* 10f9737e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97381 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97384 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f97387 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9738a cmp ecx, dword ptr [0x10fc5238] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc5238))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97390 jb 0x10f973a1 */
  if (C.cf) goto L_10f973a1;
  /* 10f97392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97395 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97398 je 0x10f9739f */
  if (C.zf) goto L_10f9739f;
  /* 10f9739a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9739d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10f9739fu);
L_10f9739f:;
  /* 10f9739f jmp 0x10f9737e */
  goto L_10f9737e;
L_10f973a1:;
  /* 10f973a1 push 0x10fc1724 */
  push32((uint32_t)(0x10fc1724u));
  /* 10f973a6 push 0x10fc151c */
  push32((uint32_t)(0x10fc151cu));
  /* 10f973ab call 0x10f97440 */
  push32(0x10f973b0u); f_10f97440();
  /* 10f973b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f973b3:;
  /* 10f973b3 push 0x10fc192c */
  push32((uint32_t)(0x10fc192cu));
  /* 10f973b8 push 0x10fc1828 */
  push32((uint32_t)(0x10fc1828u));
  /* 10f973bd call 0x10f97440 */
  push32(0x10f973c2u); f_10f97440();
  /* 10f973c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f973c5 cmp dword ptr [0x10fc3740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f973cc jne 0x10f973ee */
  if (!C.zf) goto L_10f973ee;
  /* 10f973ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10f973d0 call 0x10f99020 */
  push32(0x10f973d5u); f_10f99020();
  /* 10f973d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f973d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10f973db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f973dd je 0x10f973ee */
  if (C.zf) goto L_10f973ee;
  /* 10f973df mov dword ptr [0x10fc3740], 1 */
  w32((uint32_t)(0x10fc3740), (0x1u));
  /* 10f973e9 call 0x10f99930 */
  push32(0x10f973eeu); f_10f99930();
L_10f973ee:;
  /* 10f973ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f973f2 je 0x10f973fb */
  if (C.zf) goto L_10f973fb;
  /* 10f973f4 call 0x10f97430 */
  push32(0x10f973f9u); f_10f97430();
  /* 10f973f9 jmp 0x10f9740f */
  goto L_10f9740f;
L_10f973fb:;
  /* 10f973fb mov dword ptr [0x10fc373c], 1 */
  w32((uint32_t)(0x10fc373c), (0x1u));
  /* 10f97405 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97408 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97409 call dword ptr [0x10fc6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6338))), 0x10f9740fu);
L_10f9740f:;
  /* 10f9740f mov esp, ebp */
  ESP = (EBP);
  /* 10f97411 pop ebp */
  EBP = (pop32());
  /* 10f97412 ret  */
  ESPCHK(0x10f97330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x10f97420 (15 bytes, 7 insns) */
void f_10f97420(void) {
  FTRACE(0x10f97420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97420 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97421 mov ebp, esp */
  EBP = (ESP);
  /* 10f97423 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f97425 call 0x10f9b510 */
  push32(0x10f9742au); f_10f9b510();
  /* 10f9742a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9742d pop ebp */
  EBP = (pop32());
  /* 10f9742e ret  */
  ESPCHK(0x10f97420u, _esp0);
  ESP += 4; return;
}

/* FUN_10007430 @ 0x10f97430 (15 bytes, 7 insns) */
void f_10f97430(void) {
  FTRACE(0x10f97430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97430 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97431 mov ebp, esp */
  EBP = (ESP);
  /* 10f97433 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10f97435 call 0x10f9b5b0 */
  push32(0x10f9743au); f_10f9b5b0();
  /* 10f9743a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9743d pop ebp */
  EBP = (pop32());
  /* 10f9743e ret  */
  ESPCHK(0x10f97430u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10f97440 (37 bytes, 16 insns) */
void f_10f97440(void) {
  FTRACE(0x10f97440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97440 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97441 mov ebp, esp */
  EBP = (ESP);
L_10f97443:;
  /* 10f97443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97446 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97449 jae 0x10f97463 */
  if (!C.cf) goto L_10f97463;
  /* 10f9744b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9744e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97451 je 0x10f97458 */
  if (C.zf) goto L_10f97458;
  /* 10f97453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97456 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10f97458u);
L_10f97458:;
  /* 10f97458 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9745b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9745e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f97461 jmp 0x10f97443 */
  goto L_10f97443;
L_10f97463:;
  /* 10f97463 pop ebp */
  EBP = (pop32());
  /* 10f97464 ret  */
  ESPCHK(0x10f97440u, _esp0);
  ESP += 4; return;
}

/* FUN_10007470 @ 0x10f97470 (130 bytes, 42 insns) */
void f_10f97470(void) {
  FTRACE(0x10f97470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97470 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97471 mov ebp, esp */
  EBP = (ESP);
  /* 10f97473 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97474 call 0x10f9b430 */
  push32(0x10f97479u); f_10f9b430();
  /* 10f97479 call dword ptr [0x10fc634c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc634c))), 0x10f9747fu);
  /* 10f9747f mov dword ptr [0x10fc1a5c], eax */
  w32((uint32_t)(0x10fc1a5c), (EAX));
  /* 10f97484 cmp dword ptr [0x10fc1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9748b jne 0x10f97491 */
  if (!C.zf) goto L_10f97491;
  /* 10f9748d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9748f jmp 0x10f974ee */
  goto L_10f974ee;
L_10f97491:;
  /* 10f97491 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10f97493 push 0x10fbe4f0 */
  push32((uint32_t)(0x10fbe4f0u));
  /* 10f97498 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9749a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f9749c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9749e call 0x10f97f20 */
  push32(0x10f974a3u); f_10f97f20();
  /* 10f974a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f974a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f974a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f974ad je 0x10f974c4 */
  if (C.zf) goto L_10f974c4;
  /* 10f974af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f974b2 push eax */
  push32((uint32_t)(EAX));
  /* 10f974b3 mov ecx, dword ptr [0x10fc1a5c] */
  ECX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f974b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10f974ba call dword ptr [0x10fc6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6348))), 0x10f974c0u);
  /* 10f974c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f974c2 jne 0x10f974c8 */
  if (!C.zf) goto L_10f974c8;
L_10f974c4:;
  /* 10f974c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f974c6 jmp 0x10f974ee */
  goto L_10f974ee;
L_10f974c8:;
  /* 10f974c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f974cb push edx */
  push32((uint32_t)(EDX));
  /* 10f974cc call 0x10f97530 */
  push32(0x10f974d1u); f_10f97530();
  /* 10f974d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f974d4 call dword ptr [0x10fc6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6344))), 0x10f974dau);
  /* 10f974da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f974dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f974df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f974e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10f974e9 mov eax, 1 */
  EAX = (0x1u);
L_10f974ee:;
  /* 10f974ee mov esp, ebp */
  ESP = (EBP);
  /* 10f974f0 pop ebp */
  EBP = (pop32());
  /* 10f974f1 ret  */
  ESPCHK(0x10f97470u, _esp0);
  ESP += 4; return;
}

/* FUN_10007500 @ 0x10f97500 (41 bytes, 11 insns) */
void f_10f97500(void) {
  FTRACE(0x10f97500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97500 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97501 mov ebp, esp */
  EBP = (ESP);
  /* 10f97503 call 0x10f9b470 */
  push32(0x10f97508u); f_10f9b470();
  /* 10f97508 cmp dword ptr [0x10fc1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9750f je 0x10f97527 */
  if (C.zf) goto L_10f97527;
  /* 10f97511 mov eax, dword ptr [0x10fc1a5c] */
  EAX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f97516 push eax */
  push32((uint32_t)(EAX));
  /* 10f97517 call dword ptr [0x10fc6350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6350))), 0x10f9751du);
  /* 10f9751d mov dword ptr [0x10fc1a5c], 0xffffffff */
  w32((uint32_t)(0x10fc1a5c), (0xffffffffu));
L_10f97527:;
  /* 10f97527 pop ebp */
  EBP = (pop32());
  /* 10f97528 ret  */
  ESPCHK(0x10f97500u, _esp0);
  ESP += 4; return;
}

/* FUN_10007530 @ 0x10f97530 (25 bytes, 8 insns) */
void f_10f97530(void) {
  FTRACE(0x10f97530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97530 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97531 mov ebp, esp */
  EBP = (ESP);
  /* 10f97533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97536 mov dword ptr [eax + 0x50], 0x10fc1c00 */
  w32((uint32_t)(EAX + 0x50), (0x10fc1c00u));
  /* 10f9753d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97540 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10f97547 pop ebp */
  EBP = (pop32());
  /* 10f97548 ret  */
  ESPCHK(0x10f97530u, _esp0);
  ESP += 4; return;
}

/* FUN_10007550 @ 0x10f97550 (152 bytes, 48 insns) */
void f_10f97550(void) {
  FTRACE(0x10f97550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97550 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97551 mov ebp, esp */
  EBP = (ESP);
  /* 10f97553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97556 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10f9755cu);
  /* 10f9755c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9755f mov eax, dword ptr [0x10fc1a5c] */
  EAX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f97564 push eax */
  push32((uint32_t)(EAX));
  /* 10f97565 call dword ptr [0x10fc6288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6288))), 0x10f9756bu);
  /* 10f9756b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9756e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97572 jne 0x10f975d7 */
  if (!C.zf) goto L_10f975d7;
  /* 10f97574 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10f97579 push 0x10fbe4f0 */
  push32((uint32_t)(0x10fbe4f0u));
  /* 10f9757e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97580 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10f97582 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97584 call 0x10f97f20 */
  push32(0x10f97589u); f_10f97f20();
  /* 10f97589 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9758c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9758f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97593 je 0x10f975cd */
  if (C.zf) goto L_10f975cd;
  /* 10f97595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97598 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97599 mov edx, dword ptr [0x10fc1a5c] */
  EDX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f9759f push edx */
  push32((uint32_t)(EDX));
  /* 10f975a0 call dword ptr [0x10fc6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6348))), 0x10f975a6u);
  /* 10f975a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f975a8 je 0x10f975cd */
  if (C.zf) goto L_10f975cd;
  /* 10f975aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f975ad push eax */
  push32((uint32_t)(EAX));
  /* 10f975ae call 0x10f97530 */
  push32(0x10f975b3u); f_10f97530();
  /* 10f975b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f975b6 call dword ptr [0x10fc6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6344))), 0x10f975bcu);
  /* 10f975bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f975bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f975c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f975c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10f975cb jmp 0x10f975d7 */
  goto L_10f975d7;
L_10f975cd:;
  /* 10f975cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f975cf call 0x10f96a80 */
  push32(0x10f975d4u); f_10f96a80();
  /* 10f975d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f975d7:;
  /* 10f975d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f975da push eax */
  push32((uint32_t)(EAX));
  /* 10f975db call dword ptr [0x10fc6354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6354))), 0x10f975e1u);
  /* 10f975e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f975e4 mov esp, ebp */
  ESP = (EBP);
  /* 10f975e6 pop ebp */
  EBP = (pop32());
  /* 10f975e7 ret  */
  ESPCHK(0x10f97550u, _esp0);
  ESP += 4; return;
}

/* FUN_100075f0 @ 0x10f975f0 (263 bytes, 86 insns) */
void f_10f975f0(void) {
  FTRACE(0x10f975f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f975f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f975f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f975f3 cmp dword ptr [0x10fc1a5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1a5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f975fa je 0x10f976f5 */
  if (C.zf) goto L_10f976f5;
  /* 10f97600 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97604 jne 0x10f97615 */
  if (!C.zf) goto L_10f97615;
  /* 10f97606 mov eax, dword ptr [0x10fc1a5c] */
  EAX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f9760b push eax */
  push32((uint32_t)(EAX));
  /* 10f9760c call dword ptr [0x10fc6288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6288))), 0x10f97612u);
  /* 10f97612 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f97615:;
  /* 10f97615 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97619 je 0x10f976e6 */
  if (C.zf) goto L_10f976e6;
  /* 10f9761f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97622 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97626 je 0x10f97639 */
  if (C.zf) goto L_10f97639;
  /* 10f97628 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9762a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9762d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10f97630 push eax */
  push32((uint32_t)(EAX));
  /* 10f97631 call 0x10f985a0 */
  push32(0x10f97636u); f_10f985a0();
  /* 10f97636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f97639:;
  /* 10f97639 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9763c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97640 je 0x10f97653 */
  if (C.zf) goto L_10f97653;
  /* 10f97642 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97644 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97647 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10f9764a push eax */
  push32((uint32_t)(EAX));
  /* 10f9764b call 0x10f985a0 */
  push32(0x10f97650u); f_10f985a0();
  /* 10f97650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f97653:;
  /* 10f97653 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97656 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9765a je 0x10f9766d */
  if (C.zf) goto L_10f9766d;
  /* 10f9765c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9765e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97661 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10f97664 push eax */
  push32((uint32_t)(EAX));
  /* 10f97665 call 0x10f985a0 */
  push32(0x10f9766au); f_10f985a0();
  /* 10f9766a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9766d:;
  /* 10f9766d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97670 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97674 je 0x10f97687 */
  if (C.zf) goto L_10f97687;
  /* 10f97676 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97678 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9767b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10f9767e push eax */
  push32((uint32_t)(EAX));
  /* 10f9767f call 0x10f985a0 */
  push32(0x10f97684u); f_10f985a0();
  /* 10f97684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f97687:;
  /* 10f97687 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9768a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9768e je 0x10f976a1 */
  if (C.zf) goto L_10f976a1;
  /* 10f97690 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97692 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97695 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10f97698 push eax */
  push32((uint32_t)(EAX));
  /* 10f97699 call 0x10f985a0 */
  push32(0x10f9769eu); f_10f985a0();
  /* 10f9769e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f976a1:;
  /* 10f976a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f976a4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f976a8 je 0x10f976bb */
  if (C.zf) goto L_10f976bb;
  /* 10f976aa push 2 */
  push32((uint32_t)(0x2u));
  /* 10f976ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f976af mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10f976b2 push eax */
  push32((uint32_t)(EAX));
  /* 10f976b3 call 0x10f985a0 */
  push32(0x10f976b8u); f_10f985a0();
  /* 10f976b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f976bb:;
  /* 10f976bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f976be cmp dword ptr [ecx + 0x50], 0x10fc1c00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10fc1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f976c5 je 0x10f976d8 */
  if (C.zf) goto L_10f976d8;
  /* 10f976c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f976c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f976cc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10f976cf push eax */
  push32((uint32_t)(EAX));
  /* 10f976d0 call 0x10f985a0 */
  push32(0x10f976d5u); f_10f985a0();
  /* 10f976d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f976d8:;
  /* 10f976d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f976da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f976dd push ecx */
  push32((uint32_t)(ECX));
  /* 10f976de call 0x10f985a0 */
  push32(0x10f976e3u); f_10f985a0();
  /* 10f976e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f976e6:;
  /* 10f976e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f976e8 mov edx, dword ptr [0x10fc1a5c] */
  EDX = (r32((uint32_t)(0x10fc1a5c)));
  /* 10f976ee push edx */
  push32((uint32_t)(EDX));
  /* 10f976ef call dword ptr [0x10fc6348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6348))), 0x10f976f5u);
L_10f976f5:;
  /* 10f976f5 pop ebp */
  EBP = (pop32());
  /* 10f976f6 ret  */
  ESPCHK(0x10f975f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007700 @ 0x10f97700 (11 bytes, 5 insns) */
void f_10f97700(void) {
  FTRACE(0x10f97700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97700 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97701 mov ebp, esp */
  EBP = (ESP);
  /* 10f97703 call dword ptr [0x10fc6344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6344))), 0x10f97709u);
  /* 10f97709 pop ebp */
  EBP = (pop32());
  /* 10f9770a ret  */
  ESPCHK(0x10f97700u, _esp0);
  ESP += 4; return;
}

/* FUN_10007710 @ 0x10f97710 (11 bytes, 5 insns) */
void f_10f97710(void) {
  FTRACE(0x10f97710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97710 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97711 mov ebp, esp */
  EBP = (ESP);
  /* 10f97713 call dword ptr [0x10fc6360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6360))), 0x10f97719u);
  /* 10f97719 pop ebp */
  EBP = (pop32());
  /* 10f9771a ret  */
  ESPCHK(0x10f97710u, _esp0);
  ESP += 4; return;
}

/* FUN_10007720 @ 0x10f97720 (804 bytes, 236 insns) */
void f_10f97720(void) {
  FTRACE(0x10f97720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97720 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97721 mov ebp, esp */
  EBP = (ESP);
  /* 10f97723 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97726 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10f9772b push 0x10fbe4fc */
  push32((uint32_t)(0x10fbe4fcu));
  /* 10f97730 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97732 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f97737 call 0x10f97b10 */
  push32(0x10f9773cu); f_10f97b10();
  /* 10f9773c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9773f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10f97742 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97746 jne 0x10f97752 */
  if (!C.zf) goto L_10f97752;
  /* 10f97748 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10f9774a call 0x10f96a80 */
  push32(0x10f9774fu); f_10f96a80();
  /* 10f9774f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f97752:;
  /* 10f97752 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97755 mov dword ptr [0x10fc50e0], eax */
  w32((uint32_t)(0x10fc50e0), (EAX));
  /* 10f9775a mov dword ptr [0x10fc521c], 0x20 */
  w32((uint32_t)(0x10fc521c), (0x20u));
  /* 10f97764 jmp 0x10f9776f */
  goto L_10f9776f;
L_10f97766:;
  /* 10f97766 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97769 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9776c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10f9776f:;
  /* 10f9776f mov edx, dword ptr [0x10fc50e0] */
  EDX = (r32((uint32_t)(0x10fc50e0)));
  /* 10f97775 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9777b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9777e jae 0x10f977a3 */
  if (!C.cf) goto L_10f977a3;
  /* 10f97780 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97783 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f97787 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9778a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f97790 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97793 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10f97797 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9779a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f977a1 jmp 0x10f97766 */
  goto L_10f97766;
L_10f977a3:;
  /* 10f977a3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10f977a6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f977a7 call dword ptr [0x10fc636c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc636c))), 0x10f977adu);
  /* 10f977ad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10f977b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f977b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f977b8 je 0x10f97945 */
  if (C.zf) goto L_10f97945;
  /* 10f977be cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f977c2 je 0x10f97945 */
  if (C.zf) goto L_10f97945;
  /* 10f977c8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f977cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f977cd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10f977d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f977d3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f977d6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f977d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f977dc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f977df mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10f977e2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f977e9 jge 0x10f977f3 */
  if ((C.sf==C.of)) goto L_10f977f3;
  /* 10f977eb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10f977ee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10f977f1 jmp 0x10f977fa */
  goto L_10f977fa;
L_10f977f3:;
  /* 10f977f3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10f977fa:;
  /* 10f977fa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10f977fd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10f97800 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10f97807 jmp 0x10f97812 */
  goto L_10f97812;
L_10f97809:;
  /* 10f97809 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f9780c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9780f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10f97812:;
  /* 10f97812 mov ecx, dword ptr [0x10fc521c] */
  ECX = (r32((uint32_t)(0x10fc521c)));
  /* 10f97818 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9781b jge 0x10f978b2 */
  if ((C.sf==C.of)) goto L_10f978b2;
  /* 10f97821 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10f97826 push 0x10fbe4fc */
  push32((uint32_t)(0x10fbe4fcu));
  /* 10f9782b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9782d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10f97832 call 0x10f97b10 */
  push32(0x10f97837u); f_10f97b10();
  /* 10f97837 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9783a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10f9783d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97841 jne 0x10f9784e */
  if (!C.zf) goto L_10f9784e;
  /* 10f97843 mov edx, dword ptr [0x10fc521c] */
  EDX = (r32((uint32_t)(0x10fc521c)));
  /* 10f97849 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10f9784c jmp 0x10f978b2 */
  goto L_10f978b2;
L_10f9784e:;
  /* 10f9784e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f97851 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97854 mov dword ptr [eax*4 + 0x10fc50e0], ecx */
  w32((uint32_t)(EAX*4 + 0x10fc50e0), (ECX));
  /* 10f9785b mov edx, dword ptr [0x10fc521c] */
  EDX = (r32((uint32_t)(0x10fc521c)));
  /* 10f97861 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97864 mov dword ptr [0x10fc521c], edx */
  w32((uint32_t)(0x10fc521c), (EDX));
  /* 10f9786a jmp 0x10f97875 */
  goto L_10f97875;
L_10f9786c:;
  /* 10f9786c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9786f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97872 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10f97875:;
  /* 10f97875 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10f97878 mov edx, dword ptr [ecx*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc50e0)));
  /* 10f9787f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97885 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97888 jae 0x10f978ad */
  if (!C.cf) goto L_10f978ad;
  /* 10f9788a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9788d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f97891 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97894 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10f9789a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9789d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10f978a1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f978a4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f978ab jmp 0x10f9786c */
  goto L_10f9786c;
L_10f978ad:;
  /* 10f978ad jmp 0x10f97809 */
  goto L_10f97809;
L_10f978b2:;
  /* 10f978b2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10f978b9 jmp 0x10f978d6 */
  goto L_10f978d6;
L_10f978bb:;
  /* 10f978bb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f978be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f978c1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10f978c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f978c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f978ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f978cd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f978d0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f978d3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10f978d6:;
  /* 10f978d6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f978d9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f978dc jge 0x10f97945 */
  if ((C.sf==C.of)) goto L_10f97945;
  /* 10f978de mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f978e1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f978e4 je 0x10f97940 */
  if (C.zf) goto L_10f97940;
  /* 10f978e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f978e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f978ec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10f978ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f978f1 je 0x10f97940 */
  if (C.zf) goto L_10f97940;
  /* 10f978f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f978f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f978f9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10f978fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f978fe jne 0x10f97910 */
  if (!C.zf) goto L_10f97910;
  /* 10f97900 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f97903 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f97905 push edx */
  push32((uint32_t)(EDX));
  /* 10f97906 call dword ptr [0x10fc6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6368))), 0x10f9790cu);
  /* 10f9790c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9790e je 0x10f97940 */
  if (C.zf) goto L_10f97940;
L_10f97910:;
  /* 10f97910 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f97913 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10f97916 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f97919 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9791c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9791f mov edx, dword ptr [eax*4 + 0x10fc50e0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10f97926 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97928 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10f9792b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9792e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10f97931 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f97933 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f97935 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97938 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9793b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9793d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10f97940:;
  /* 10f97940 jmp 0x10f978bb */
  goto L_10f978bb;
L_10f97945:;
  /* 10f97945 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10f9794c jmp 0x10f97957 */
  goto L_10f97957;
L_10f9794e:;
  /* 10f9794e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f97951 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97954 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10f97957:;
  /* 10f97957 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9795b jge 0x10f97a34 */
  if ((C.sf==C.of)) goto L_10f97a34;
  /* 10f97961 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f97964 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f97967 mov edx, dword ptr [0x10fc50e0] */
  EDX = (r32((uint32_t)(0x10fc50e0)));
  /* 10f9796d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9796f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10f97972 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97975 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97978 jne 0x10f97a20 */
  if (!C.zf) goto L_10f97a20;
  /* 10f9797e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97981 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10f97985 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97989 jne 0x10f97994 */
  if (!C.zf) goto L_10f97994;
  /* 10f9798b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10f97992 jmp 0x10f979a4 */
  goto L_10f979a4;
L_10f97994:;
  /* 10f97994 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10f97997 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9799a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9799c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9799e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f979a1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10f979a4:;
  /* 10f979a4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10f979a7 push eax */
  push32((uint32_t)(EAX));
  /* 10f979a8 call dword ptr [0x10fc6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6318))), 0x10f979aeu);
  /* 10f979ae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10f979b1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f979b5 je 0x10f97a0f */
  if (C.zf) goto L_10f97a0f;
  /* 10f979b7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f979ba push ecx */
  push32((uint32_t)(ECX));
  /* 10f979bb call dword ptr [0x10fc6368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6368))), 0x10f979c1u);
  /* 10f979c1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10f979c4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f979c8 je 0x10f97a0f */
  if (C.zf) goto L_10f97a0f;
  /* 10f979ca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f979cd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f979d0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f979d2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10f979d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f979db cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f979de jne 0x10f979f0 */
  if (!C.zf) goto L_10f979f0;
  /* 10f979e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f979e3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10f979e6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10f979e8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f979eb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10f979ee jmp 0x10f97a0d */
  goto L_10f97a0d;
L_10f979f0:;
  /* 10f979f0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10f979f3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f979f9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f979fc jne 0x10f97a0d */
  if (!C.zf) goto L_10f97a0d;
  /* 10f979fe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f97a04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10f97a07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f97a0d:;
  /* 10f97a0d jmp 0x10f97a1e */
  goto L_10f97a1e;
L_10f97a0f:;
  /* 10f97a0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f97a15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10f97a18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f97a1e:;
  /* 10f97a1e jmp 0x10f97a2f */
  goto L_10f97a2f;
L_10f97a20:;
  /* 10f97a20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10f97a26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10f97a29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f97a2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10f97a2f:;
  /* 10f97a2f jmp 0x10f9794e */
  goto L_10f9794e;
L_10f97a34:;
  /* 10f97a34 mov eax, dword ptr [0x10fc521c] */
  EAX = (r32((uint32_t)(0x10fc521c)));
  /* 10f97a39 push eax */
  push32((uint32_t)(EAX));
  /* 10f97a3a call dword ptr [0x10fc6364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6364))), 0x10f97a40u);
  /* 10f97a40 mov esp, ebp */
  ESP = (EBP);
  /* 10f97a42 pop ebp */
  EBP = (pop32());
  /* 10f97a43 ret  */
  ESPCHK(0x10f97720u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10f97a50 (155 bytes, 45 insns) */
void f_10f97a50(void) {
  FTRACE(0x10f97a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97a51 mov ebp, esp */
  EBP = (ESP);
  /* 10f97a53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97a56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f97a5d jmp 0x10f97a68 */
  goto L_10f97a68;
L_10f97a5f:;
  /* 10f97a5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97a62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97a65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f97a68:;
  /* 10f97a68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97a6c jge 0x10f97ae7 */
  if ((C.sf==C.of)) goto L_10f97ae7;
  /* 10f97a6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97a71 cmp dword ptr [ecx*4 + 0x10fc50e0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10fc50e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97a79 je 0x10f97ae2 */
  if (C.zf) goto L_10f97ae2;
  /* 10f97a7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97a7e mov eax, dword ptr [edx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10f97a85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f97a88 jmp 0x10f97a93 */
  goto L_10f97a93;
L_10f97a8a:;
  /* 10f97a8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97a8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97a90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f97a93:;
  /* 10f97a93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97a96 mov eax, dword ptr [edx*4 + 0x10fc50e0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc50e0)));
  /* 10f97a9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97aa2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97aa5 jae 0x10f97abf */
  if (!C.cf) goto L_10f97abf;
  /* 10f97aa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97aaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97aae je 0x10f97abd */
  if (C.zf) goto L_10f97abd;
  /* 10f97ab0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ab3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ab6 push edx */
  push32((uint32_t)(EDX));
  /* 10f97ab7 call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f97abdu);
L_10f97abd:;
  /* 10f97abd jmp 0x10f97a8a */
  goto L_10f97a8a;
L_10f97abf:;
  /* 10f97abf push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97ac1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97ac4 mov ecx, dword ptr [eax*4 + 0x10fc50e0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc50e0)));
  /* 10f97acb push ecx */
  push32((uint32_t)(ECX));
  /* 10f97acc call 0x10f985a0 */
  push32(0x10f97ad1u); f_10f985a0();
  /* 10f97ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ad4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97ad7 mov dword ptr [edx*4 + 0x10fc50e0], 0 */
  w32((uint32_t)(EDX*4 + 0x10fc50e0), (0x0u));
L_10f97ae2:;
  /* 10f97ae2 jmp 0x10f97a5f */
  goto L_10f97a5f;
L_10f97ae7:;
  /* 10f97ae7 mov esp, ebp */
  ESP = (EBP);
  /* 10f97ae9 pop ebp */
  EBP = (pop32());
  /* 10f97aea ret  */
  ESPCHK(0x10f97a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x10f97af0 (29 bytes, 13 insns) */
void f_10f97af0(void) {
  FTRACE(0x10f97af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97af0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97af1 mov ebp, esp */
  EBP = (ESP);
  /* 10f97af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97af5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97af7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97af9 mov eax, dword ptr [0x10fc38e8] */
  EAX = (r32((uint32_t)(0x10fc38e8)));
  /* 10f97afe push eax */
  push32((uint32_t)(EAX));
  /* 10f97aff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97b02 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97b03 call 0x10f97b60 */
  push32(0x10f97b08u); f_10f97b60();
  /* 10f97b08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b0b pop ebp */
  EBP = (pop32());
  /* 10f97b0c ret  */
  ESPCHK(0x10f97af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b10 @ 0x10f97b10 (35 bytes, 16 insns) */
void f_10f97b10(void) {
  FTRACE(0x10f97b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97b11 mov ebp, esp */
  EBP = (ESP);
  /* 10f97b13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97b16 push eax */
  push32((uint32_t)(EAX));
  /* 10f97b17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97b1a push ecx */
  push32((uint32_t)(ECX));
  /* 10f97b1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97b1e push edx */
  push32((uint32_t)(EDX));
  /* 10f97b1f mov eax, dword ptr [0x10fc38e8] */
  EAX = (r32((uint32_t)(0x10fc38e8)));
  /* 10f97b24 push eax */
  push32((uint32_t)(EAX));
  /* 10f97b25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97b28 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97b29 call 0x10f97b60 */
  push32(0x10f97b2eu); f_10f97b60();
  /* 10f97b2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b31 pop ebp */
  EBP = (pop32());
  /* 10f97b32 ret  */
  ESPCHK(0x10f97b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b40 @ 0x10f97b40 (27 bytes, 13 insns) */
void f_10f97b40(void) {
  FTRACE(0x10f97b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97b41 mov ebp, esp */
  EBP = (ESP);
  /* 10f97b43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97b45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97b47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97b49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97b4c push eax */
  push32((uint32_t)(EAX));
  /* 10f97b4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97b50 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97b51 call 0x10f97b60 */
  push32(0x10f97b56u); f_10f97b60();
  /* 10f97b56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b59 pop ebp */
  EBP = (pop32());
  /* 10f97b5a ret  */
  ESPCHK(0x10f97b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x10f97b60 (94 bytes, 38 insns) */
void f_10f97b60(void) {
  FTRACE(0x10f97b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97b61 mov ebp, esp */
  EBP = (ESP);
  /* 10f97b63 push ecx */
  push32((uint32_t)(ECX));
L_10f97b64:;
  /* 10f97b64 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f97b66 call 0x10f9b510 */
  push32(0x10f97b6bu); f_10f9b510();
  /* 10f97b6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97b71 push eax */
  push32((uint32_t)(EAX));
  /* 10f97b72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97b75 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97b76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97b79 push edx */
  push32((uint32_t)(EDX));
  /* 10f97b7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97b7d push eax */
  push32((uint32_t)(EAX));
  /* 10f97b7e call 0x10f97be0 */
  push32(0x10f97b83u); f_10f97be0();
  /* 10f97b83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f97b89 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f97b8b call 0x10f9b5b0 */
  push32(0x10f97b90u); f_10f9b5b0();
  /* 10f97b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97b93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97b97 jne 0x10f97b9f */
  if (!C.zf) goto L_10f97b9f;
  /* 10f97b99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97b9d jne 0x10f97ba4 */
  if (!C.zf) goto L_10f97ba4;
L_10f97b9f:;
  /* 10f97b9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ba2 jmp 0x10f97bba */
  goto L_10f97bba;
L_10f97ba4:;
  /* 10f97ba4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97ba7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97ba8 call 0x10f9b850 */
  push32(0x10f97badu); f_10f9b850();
  /* 10f97bad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97bb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97bb2 jne 0x10f97bb8 */
  if (!C.zf) goto L_10f97bb8;
  /* 10f97bb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97bb6 jmp 0x10f97bba */
  goto L_10f97bba;
L_10f97bb8:;
  /* 10f97bb8 jmp 0x10f97b64 */
  goto L_10f97b64;
L_10f97bba:;
  /* 10f97bba mov esp, ebp */
  ESP = (EBP);
  /* 10f97bbc pop ebp */
  EBP = (pop32());
  /* 10f97bbd ret  */
  ESPCHK(0x10f97b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bc0 @ 0x10f97bc0 (23 bytes, 11 insns) */
void f_10f97bc0(void) {
  FTRACE(0x10f97bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10f97bc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97bc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97bc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97bc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97bcc push eax */
  push32((uint32_t)(EAX));
  /* 10f97bcd call 0x10f97be0 */
  push32(0x10f97bd2u); f_10f97be0();
  /* 10f97bd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97bd5 pop ebp */
  EBP = (pop32());
  /* 10f97bd6 ret  */
  ESPCHK(0x10f97bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007be0 @ 0x10f97be0 (787 bytes, 254 insns) */
void f_10f97be0(void) {
  FTRACE(0x10f97be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97be1 mov ebp, esp */
  EBP = (ESP);
  /* 10f97be3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97be6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f97be7 push esi */
  push32((uint32_t)(ESI));
  /* 10f97be8 push edi */
  push32((uint32_t)(EDI));
  /* 10f97be9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f97bf0 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f97bf5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f97bf8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97bfa je 0x10f97c2c */
  if (C.zf) goto L_10f97c2c;
L_10f97bfc:;
  /* 10f97bfc call 0x10f98cb0 */
  push32(0x10f97c01u); f_10f98cb0();
  /* 10f97c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97c03 jne 0x10f97c26 */
  if (!C.zf) goto L_10f97c26;
  /* 10f97c05 push 0x10fbe5f0 */
  push32((uint32_t)(0x10fbe5f0u));
  /* 10f97c0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c0c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10f97c11 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f97c16 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f97c18 call 0x10f96bd0 */
  push32(0x10f97c1du); f_10f96bd0();
  /* 10f97c1d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97c20 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97c23 jne 0x10f97c26 */
  if (!C.zf) goto L_10f97c26;
  /* 10f97c25 int3  */
  x86_unimpl("int3 @ 0x10f97c25");
L_10f97c26:;
  /* 10f97c26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f97c28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f97c2a jne 0x10f97bfc */
  if (!C.zf) goto L_10f97bfc;
L_10f97c2c:;
  /* 10f97c2c mov edx, dword ptr [0x10fc1a88] */
  EDX = (r32((uint32_t)(0x10fc1a88)));
  /* 10f97c32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f97c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97c38 cmp eax, dword ptr [0x10fc1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97c3e jne 0x10f97c41 */
  if (!C.zf) goto L_10f97c41;
  /* 10f97c40 int3  */
  x86_unimpl("int3 @ 0x10f97c40");
L_10f97c41:;
  /* 10f97c41 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97c44 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97c45 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97c48 push edx */
  push32((uint32_t)(EDX));
  /* 10f97c49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97c4c push eax */
  push32((uint32_t)(EAX));
  /* 10f97c4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97c51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97c54 push edx */
  push32((uint32_t)(EDX));
  /* 10f97c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97c59 call dword ptr [0x10fc1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc1c90))), 0x10f97c5fu);
  /* 10f97c5f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97c64 jne 0x10f97cc4 */
  if (!C.zf) goto L_10f97cc4;
  /* 10f97c66 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97c6a je 0x10f97c97 */
  if (C.zf) goto L_10f97c97;
L_10f97c6c:;
  /* 10f97c6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97c6f push eax */
  push32((uint32_t)(EAX));
  /* 10f97c70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97c73 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97c74 push 0x10fbe5ac */
  push32((uint32_t)(0x10fbe5acu));
  /* 10f97c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97c81 call 0x10f96bd0 */
  push32(0x10f97c86u); f_10f96bd0();
  /* 10f97c86 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97c8c jne 0x10f97c8f */
  if (!C.zf) goto L_10f97c8f;
  /* 10f97c8e int3  */
  x86_unimpl("int3 @ 0x10f97c8e");
L_10f97c8f:;
  /* 10f97c8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f97c91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f97c93 jne 0x10f97c6c */
  if (!C.zf) goto L_10f97c6c;
  /* 10f97c95 jmp 0x10f97cbd */
  goto L_10f97cbd;
L_10f97c97:;
  /* 10f97c97 push 0x10fbe588 */
  push32((uint32_t)(0x10fbe588u));
  /* 10f97c9c push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f97ca1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97ca3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97ca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97ca9 call 0x10f96bd0 */
  push32(0x10f97caeu); f_10f96bd0();
  /* 10f97cae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97cb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97cb4 jne 0x10f97cb7 */
  if (!C.zf) goto L_10f97cb7;
  /* 10f97cb6 int3  */
  x86_unimpl("int3 @ 0x10f97cb6");
L_10f97cb7:;
  /* 10f97cb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97cb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f97cbb jne 0x10f97c97 */
  if (!C.zf) goto L_10f97c97;
L_10f97cbd:;
  /* 10f97cbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97cbf jmp 0x10f97eec */
  goto L_10f97eec;
L_10f97cc4:;
  /* 10f97cc4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97cc7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f97ccd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97cd0 je 0x10f97ce6 */
  if (C.zf) goto L_10f97ce6;
  /* 10f97cd2 mov edx, dword ptr [0x10fc1a84] */
  EDX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f97cd8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10f97cdb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f97cdd jne 0x10f97ce6 */
  if (!C.zf) goto L_10f97ce6;
  /* 10f97cdf mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10f97ce6:;
  /* 10f97ce6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97cea ja 0x10f97cf7 */
  if ((!C.cf&&!C.zf)) goto L_10f97cf7;
  /* 10f97cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97cef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97cf2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97cf5 jbe 0x10f97d23 */
  if ((C.cf||C.zf)) goto L_10f97d23;
L_10f97cf7:;
  /* 10f97cf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97cfa push ecx */
  push32((uint32_t)(ECX));
  /* 10f97cfb push 0x10fbe560 */
  push32((uint32_t)(0x10fbe560u));
  /* 10f97d00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d06 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97d08 call 0x10f96bd0 */
  push32(0x10f97d0du); f_10f96bd0();
  /* 10f97d0d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97d10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d13 jne 0x10f97d16 */
  if (!C.zf) goto L_10f97d16;
  /* 10f97d15 int3  */
  x86_unimpl("int3 @ 0x10f97d15");
L_10f97d16:;
  /* 10f97d16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f97d18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f97d1a jne 0x10f97cf7 */
  if (!C.zf) goto L_10f97cf7;
  /* 10f97d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97d1e jmp 0x10f97eec */
  goto L_10f97eec;
L_10f97d23:;
  /* 10f97d23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97d26 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f97d2b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d2e je 0x10f97d70 */
  if (C.zf) goto L_10f97d70;
  /* 10f97d30 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d34 je 0x10f97d70 */
  if (C.zf) goto L_10f97d70;
  /* 10f97d36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97d39 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f97d3f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d42 je 0x10f97d70 */
  if (C.zf) goto L_10f97d70;
  /* 10f97d44 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d48 je 0x10f97d70 */
  if (C.zf) goto L_10f97d70;
L_10f97d4a:;
  /* 10f97d4a push 0x10fbe52c */
  push32((uint32_t)(0x10fbe52cu));
  /* 10f97d4f push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f97d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97d5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97d5c call 0x10f96bd0 */
  push32(0x10f97d61u); f_10f96bd0();
  /* 10f97d61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d67 jne 0x10f97d6a */
  if (!C.zf) goto L_10f97d6a;
  /* 10f97d69 int3  */
  x86_unimpl("int3 @ 0x10f97d69");
L_10f97d6a:;
  /* 10f97d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f97d6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f97d6e jne 0x10f97d4a */
  if (!C.zf) goto L_10f97d4a;
L_10f97d70:;
  /* 10f97d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97d73 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97d76 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f97d79 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f97d7c push ecx */
  push32((uint32_t)(ECX));
  /* 10f97d7d call 0x10f9b960 */
  push32(0x10f97d82u); f_10f9b960();
  /* 10f97d82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97d85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f97d88 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97d8c jne 0x10f97d95 */
  if (!C.zf) goto L_10f97d95;
  /* 10f97d8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97d90 jmp 0x10f97eec */
  goto L_10f97eec;
L_10f97d95:;
  /* 10f97d95 mov edx, dword ptr [0x10fc1a88] */
  EDX = (r32((uint32_t)(0x10fc1a88)));
  /* 10f97d9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97d9e mov dword ptr [0x10fc1a88], edx */
  w32((uint32_t)(0x10fc1a88), (EDX));
  /* 10f97da4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97da8 je 0x10f97df3 */
  if (C.zf) goto L_10f97df3;
  /* 10f97daa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97dad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f97db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97db6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10f97dbd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97dc0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10f97dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97dca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10f97dd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97dd7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10f97dda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ddd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10f97de4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97de7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10f97dee jmp 0x10f97e93 */
  goto L_10f97e93;
L_10f97df3:;
  /* 10f97df3 mov edx, dword ptr [0x10fc3748] */
  EDX = (r32((uint32_t)(0x10fc3748)));
  /* 10f97df9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97dfc mov dword ptr [0x10fc3748], edx */
  w32((uint32_t)(0x10fc3748), (EDX));
  /* 10f97e02 mov eax, dword ptr [0x10fc3750] */
  EAX = (r32((uint32_t)(0x10fc3750)));
  /* 10f97e07 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97e0a mov dword ptr [0x10fc3750], eax */
  w32((uint32_t)(0x10fc3750), (EAX));
  /* 10f97e0f mov ecx, dword ptr [0x10fc3750] */
  ECX = (r32((uint32_t)(0x10fc3750)));
  /* 10f97e15 cmp ecx, dword ptr [0x10fc3754] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc3754))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97e1b jbe 0x10f97e29 */
  if ((C.cf||C.zf)) goto L_10f97e29;
  /* 10f97e1d mov edx, dword ptr [0x10fc3750] */
  EDX = (r32((uint32_t)(0x10fc3750)));
  /* 10f97e23 mov dword ptr [0x10fc3754], edx */
  w32((uint32_t)(0x10fc3754), (EDX));
L_10f97e29:;
  /* 10f97e29 cmp dword ptr [0x10fc374c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc374c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97e30 je 0x10f97e3f */
  if (C.zf) goto L_10f97e3f;
  /* 10f97e32 mov eax, dword ptr [0x10fc374c] */
  EAX = (r32((uint32_t)(0x10fc374c)));
  /* 10f97e37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e3a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f97e3d jmp 0x10f97e48 */
  goto L_10f97e48;
L_10f97e3f:;
  /* 10f97e3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e42 mov dword ptr [0x10fc3744], edx */
  w32((uint32_t)(0x10fc3744), (EDX));
L_10f97e48:;
  /* 10f97e48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e4b mov ecx, dword ptr [0x10fc374c] */
  ECX = (r32((uint32_t)(0x10fc374c)));
  /* 10f97e51 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f97e53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e56 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10f97e5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97e63 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10f97e66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e69 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97e6c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10f97e6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97e75 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10f97e78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97e7e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10f97e81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97e87 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10f97e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97e8d mov dword ptr [0x10fc374c], ecx */
  w32((uint32_t)(0x10fc374c), (ECX));
L_10f97e93:;
  /* 10f97e93 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f97e95 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f97e97 mov dl, byte ptr [0x10fc1a90] */
  DL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f97e9d push edx */
  push32((uint32_t)(EDX));
  /* 10f97e9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ea1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ea4 push eax */
  push32((uint32_t)(EAX));
  /* 10f97ea5 call 0x10f9b880 */
  push32(0x10f97eaau); f_10f9b880();
  /* 10f97eaa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ead push 4 */
  push32((uint32_t)(0x4u));
  /* 10f97eaf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f97eb1 mov cl, byte ptr [0x10fc1a90] */
  CL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f97eb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97eb8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97ebb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ebe lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10f97ec2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97ec3 call 0x10f9b880 */
  push32(0x10f97ec8u); f_10f9b880();
  /* 10f97ec8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ecb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97ece push edx */
  push32((uint32_t)(EDX));
  /* 10f97ecf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f97ed1 mov al, byte ptr [0x10fc1a92] */
  AL = (r8((uint32_t)(0x10fc1a92)));
  /* 10f97ed6 push eax */
  push32((uint32_t)(EAX));
  /* 10f97ed7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97eda add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97edd push ecx */
  push32((uint32_t)(ECX));
  /* 10f97ede call 0x10f9b880 */
  push32(0x10f97ee3u); f_10f9b880();
  /* 10f97ee3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97ee6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97ee9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f97eec:;
  /* 10f97eec pop edi */
  EDI = (pop32());
  /* 10f97eed pop esi */
  ESI = (pop32());
  /* 10f97eee pop ebx */
  EBX = (pop32());
  /* 10f97eef mov esp, ebp */
  ESP = (EBP);
  /* 10f97ef1 pop ebp */
  EBP = (pop32());
  /* 10f97ef2 ret  */
  ESPCHK(0x10f97be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f00 @ 0x10f97f00 (27 bytes, 13 insns) */
void f_10f97f00(void) {
  FTRACE(0x10f97f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97f01 mov ebp, esp */
  EBP = (ESP);
  /* 10f97f03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97f05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97f07 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97f0c push eax */
  push32((uint32_t)(EAX));
  /* 10f97f0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97f10 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97f11 call 0x10f97f20 */
  push32(0x10f97f16u); f_10f97f20();
  /* 10f97f16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97f19 pop ebp */
  EBP = (pop32());
  /* 10f97f1a ret  */
  ESPCHK(0x10f97f00u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10f97f20 (96 bytes, 37 insns) */
void f_10f97f20(void) {
  FTRACE(0x10f97f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97f20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97f21 mov ebp, esp */
  EBP = (ESP);
  /* 10f97f23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97f26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97f29 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f97f2d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f97f30 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97f34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97f37 push edx */
  push32((uint32_t)(EDX));
  /* 10f97f38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97f3b push eax */
  push32((uint32_t)(EAX));
  /* 10f97f3c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97f3f push ecx */
  push32((uint32_t)(ECX));
  /* 10f97f40 call 0x10f97b10 */
  push32(0x10f97f45u); f_10f97b10();
  /* 10f97f45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97f48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f97f4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97f4f je 0x10f97f79 */
  if (C.zf) goto L_10f97f79;
  /* 10f97f51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97f54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f97f57 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f97f5a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97f5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f97f60:;
  /* 10f97f60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f97f63 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97f66 jae 0x10f97f79 */
  if (!C.cf) goto L_10f97f79;
  /* 10f97f68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f97f6b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f97f6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f97f71 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97f74 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f97f77 jmp 0x10f97f60 */
  goto L_10f97f60;
L_10f97f79:;
  /* 10f97f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f97f7c mov esp, ebp */
  ESP = (EBP);
  /* 10f97f7e pop ebp */
  EBP = (pop32());
  /* 10f97f7f ret  */
  ESPCHK(0x10f97f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007f80 @ 0x10f97f80 (27 bytes, 13 insns) */
void f_10f97f80(void) {
  FTRACE(0x10f97f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97f80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97f81 mov ebp, esp */
  EBP = (ESP);
  /* 10f97f83 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97f85 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f97f87 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97f89 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97f8c push eax */
  push32((uint32_t)(EAX));
  /* 10f97f8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97f90 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97f91 call 0x10f97fa0 */
  push32(0x10f97f96u); f_10f97fa0();
  /* 10f97f96 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97f99 pop ebp */
  EBP = (pop32());
  /* 10f97f9a ret  */
  ESPCHK(0x10f97f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fa0 @ 0x10f97fa0 (64 bytes, 27 insns) */
void f_10f97fa0(void) {
  FTRACE(0x10f97fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10f97fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97fa4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f97fa6 call 0x10f9b510 */
  push32(0x10f97fabu); f_10f9b510();
  /* 10f97fab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97fae push 1 */
  push32((uint32_t)(0x1u));
  /* 10f97fb0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97fb3 push eax */
  push32((uint32_t)(EAX));
  /* 10f97fb4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97fb7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97fb8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f97fbb push edx */
  push32((uint32_t)(EDX));
  /* 10f97fbc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f97fbf push eax */
  push32((uint32_t)(EAX));
  /* 10f97fc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f97fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f97fc4 call 0x10f97fe0 */
  push32(0x10f97fc9u); f_10f97fe0();
  /* 10f97fc9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f97fcf push 9 */
  push32((uint32_t)(0x9u));
  /* 10f97fd1 call 0x10f9b5b0 */
  push32(0x10f97fd6u); f_10f9b5b0();
  /* 10f97fd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f97fd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f97fdc mov esp, ebp */
  ESP = (EBP);
  /* 10f97fde pop ebp */
  EBP = (pop32());
  /* 10f97fdf ret  */
  ESPCHK(0x10f97fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007fe0 @ 0x10f97fe0 (1297 bytes, 431 insns) */
void f_10f97fe0(void) {
  FTRACE(0x10f97fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f97fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f97fe1 mov ebp, esp */
  EBP = (ESP);
  /* 10f97fe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f97fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f97fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10f97fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10f97fe9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f97ff0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f97ff4 jne 0x10f98013 */
  if (!C.zf) goto L_10f98013;
  /* 10f97ff6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f97ff9 push eax */
  push32((uint32_t)(EAX));
  /* 10f97ffa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f97ffd push ecx */
  push32((uint32_t)(ECX));
  /* 10f97ffe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98001 push edx */
  push32((uint32_t)(EDX));
  /* 10f98002 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98005 push eax */
  push32((uint32_t)(EAX));
  /* 10f98006 call 0x10f97b10 */
  push32(0x10f9800bu); f_10f97b10();
  /* 10f9800b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9800e jmp 0x10f984ea */
  goto L_10f984ea;
L_10f98013:;
  /* 10f98013 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98017 je 0x10f98036 */
  if (C.zf) goto L_10f98036;
  /* 10f98019 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9801d jne 0x10f98036 */
  if (!C.zf) goto L_10f98036;
  /* 10f9801f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98022 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98023 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98026 push edx */
  push32((uint32_t)(EDX));
  /* 10f98027 call 0x10f985a0 */
  push32(0x10f9802cu); f_10f985a0();
  /* 10f9802c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9802f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98031 jmp 0x10f984ea */
  goto L_10f984ea;
L_10f98036:;
  /* 10f98036 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f9803b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9803e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98040 je 0x10f98072 */
  if (C.zf) goto L_10f98072;
L_10f98042:;
  /* 10f98042 call 0x10f98cb0 */
  push32(0x10f98047u); f_10f98cb0();
  /* 10f98047 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98049 jne 0x10f9806c */
  if (!C.zf) goto L_10f9806c;
  /* 10f9804b push 0x10fbe5f0 */
  push32((uint32_t)(0x10fbe5f0u));
  /* 10f98050 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98052 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10f98057 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f9805c push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9805e call 0x10f96bd0 */
  push32(0x10f98063u); f_10f96bd0();
  /* 10f98063 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98066 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98069 jne 0x10f9806c */
  if (!C.zf) goto L_10f9806c;
  /* 10f9806b int3  */
  x86_unimpl("int3 @ 0x10f9806b");
L_10f9806c:;
  /* 10f9806c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9806e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98070 jne 0x10f98042 */
  if (!C.zf) goto L_10f98042;
L_10f98072:;
  /* 10f98072 mov edx, dword ptr [0x10fc1a88] */
  EDX = (r32((uint32_t)(0x10fc1a88)));
  /* 10f98078 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f9807b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9807e cmp eax, dword ptr [0x10fc1a8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc1a8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98084 jne 0x10f98087 */
  if (!C.zf) goto L_10f98087;
  /* 10f98086 int3  */
  x86_unimpl("int3 @ 0x10f98086");
L_10f98087:;
  /* 10f98087 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9808a push ecx */
  push32((uint32_t)(ECX));
  /* 10f9808b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9808e push edx */
  push32((uint32_t)(EDX));
  /* 10f9808f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f98092 push eax */
  push32((uint32_t)(EAX));
  /* 10f98093 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98096 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98097 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9809a push edx */
  push32((uint32_t)(EDX));
  /* 10f9809b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9809e push eax */
  push32((uint32_t)(EAX));
  /* 10f9809f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f980a1 call dword ptr [0x10fc1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc1c90))), 0x10f980a7u);
  /* 10f980a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f980aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f980ac jne 0x10f9810c */
  if (!C.zf) goto L_10f9810c;
  /* 10f980ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f980b2 je 0x10f980df */
  if (C.zf) goto L_10f980df;
L_10f980b4:;
  /* 10f980b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f980b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f980b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f980bb push edx */
  push32((uint32_t)(EDX));
  /* 10f980bc push 0x10fbe76c */
  push32((uint32_t)(0x10fbe76cu));
  /* 10f980c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980c9 call 0x10f96bd0 */
  push32(0x10f980ceu); f_10f96bd0();
  /* 10f980ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f980d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f980d4 jne 0x10f980d7 */
  if (!C.zf) goto L_10f980d7;
  /* 10f980d6 int3  */
  x86_unimpl("int3 @ 0x10f980d6");
L_10f980d7:;
  /* 10f980d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f980d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f980db jne 0x10f980b4 */
  if (!C.zf) goto L_10f980b4;
  /* 10f980dd jmp 0x10f98105 */
  goto L_10f98105;
L_10f980df:;
  /* 10f980df push 0x10fbe748 */
  push32((uint32_t)(0x10fbe748u));
  /* 10f980e4 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f980e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980ed push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980ef push 0 */
  push32((uint32_t)(0x0u));
  /* 10f980f1 call 0x10f96bd0 */
  push32(0x10f980f6u); f_10f96bd0();
  /* 10f980f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f980f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f980fc jne 0x10f980ff */
  if (!C.zf) goto L_10f980ff;
  /* 10f980fe int3  */
  x86_unimpl("int3 @ 0x10f980fe");
L_10f980ff:;
  /* 10f980ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98101 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98103 jne 0x10f980df */
  if (!C.zf) goto L_10f980df;
L_10f98105:;
  /* 10f98105 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98107 jmp 0x10f984ea */
  goto L_10f984ea;
L_10f9810c:;
  /* 10f9810c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98110 jbe 0x10f9813e */
  if ((C.cf||C.zf)) goto L_10f9813e;
L_10f98112:;
  /* 10f98112 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98115 push edx */
  push32((uint32_t)(EDX));
  /* 10f98116 push 0x10fbe718 */
  push32((uint32_t)(0x10fbe718u));
  /* 10f9811b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9811d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9811f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98121 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f98123 call 0x10f96bd0 */
  push32(0x10f98128u); f_10f96bd0();
  /* 10f98128 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9812b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9812e jne 0x10f98131 */
  if (!C.zf) goto L_10f98131;
  /* 10f98130 int3  */
  x86_unimpl("int3 @ 0x10f98130");
L_10f98131:;
  /* 10f98131 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98133 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98135 jne 0x10f98112 */
  if (!C.zf) goto L_10f98112;
  /* 10f98137 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98139 jmp 0x10f984ea */
  goto L_10f984ea;
L_10f9813e:;
  /* 10f9813e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98142 je 0x10f98186 */
  if (C.zf) goto L_10f98186;
  /* 10f98144 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98147 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9814d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98150 je 0x10f98186 */
  if (C.zf) goto L_10f98186;
  /* 10f98152 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98155 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9815b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9815e je 0x10f98186 */
  if (C.zf) goto L_10f98186;
L_10f98160:;
  /* 10f98160 push 0x10fbe52c */
  push32((uint32_t)(0x10fbe52cu));
  /* 10f98165 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f9816a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9816c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9816e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98170 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f98172 call 0x10f96bd0 */
  push32(0x10f98177u); f_10f96bd0();
  /* 10f98177 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9817a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9817d jne 0x10f98180 */
  if (!C.zf) goto L_10f98180;
  /* 10f9817f int3  */
  x86_unimpl("int3 @ 0x10f9817f");
L_10f98180:;
  /* 10f98180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98182 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98184 jne 0x10f98160 */
  if (!C.zf) goto L_10f98160;
L_10f98186:;
  /* 10f98186 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98189 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9818a call 0x10f99110 */
  push32(0x10f9818fu); f_10f99110();
  /* 10f9818f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98194 jne 0x10f981b7 */
  if (!C.zf) goto L_10f981b7;
  /* 10f98196 push 0x10fbe6f4 */
  push32((uint32_t)(0x10fbe6f4u));
  /* 10f9819b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9819d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10f981a2 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f981a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f981a9 call 0x10f96bd0 */
  push32(0x10f981aeu); f_10f96bd0();
  /* 10f981ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f981b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f981b4 jne 0x10f981b7 */
  if (!C.zf) goto L_10f981b7;
  /* 10f981b6 int3  */
  x86_unimpl("int3 @ 0x10f981b6");
L_10f981b7:;
  /* 10f981b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f981b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f981bb jne 0x10f98186 */
  if (!C.zf) goto L_10f98186;
  /* 10f981bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f981c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f981c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f981c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f981c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f981cd jne 0x10f981d6 */
  if (!C.zf) goto L_10f981d6;
  /* 10f981cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10f981d6:;
  /* 10f981d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f981da je 0x10f9821a */
  if (C.zf) goto L_10f9821a;
L_10f981dc:;
  /* 10f981dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f981df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f981e6 jne 0x10f981f1 */
  if (!C.zf) goto L_10f981f1;
  /* 10f981e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f981eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f981ef je 0x10f98212 */
  if (C.zf) goto L_10f98212;
L_10f981f1:;
  /* 10f981f1 push 0x10fbe6ac */
  push32((uint32_t)(0x10fbe6acu));
  /* 10f981f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f981f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10f981fd push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98202 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98204 call 0x10f96bd0 */
  push32(0x10f98209u); f_10f96bd0();
  /* 10f98209 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9820c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9820f jne 0x10f98212 */
  if (!C.zf) goto L_10f98212;
  /* 10f98211 int3  */
  x86_unimpl("int3 @ 0x10f98211");
L_10f98212:;
  /* 10f98212 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98214 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98216 jne 0x10f981dc */
  if (!C.zf) goto L_10f981dc;
  /* 10f98218 jmp 0x10f9827e */
  goto L_10f9827e;
L_10f9821a:;
  /* 10f9821a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9821d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98220 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98225 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98228 jne 0x10f9823f */
  if (!C.zf) goto L_10f9823f;
  /* 10f9822a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9822d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98233 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98236 jne 0x10f9823f */
  if (!C.zf) goto L_10f9823f;
  /* 10f98238 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10f9823f:;
  /* 10f9823f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98242 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98245 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9824a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9824d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98253 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98255 je 0x10f98278 */
  if (C.zf) goto L_10f98278;
  /* 10f98257 push 0x10fbe670 */
  push32((uint32_t)(0x10fbe670u));
  /* 10f9825c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9825e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10f98263 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98268 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9826a call 0x10f96bd0 */
  push32(0x10f9826fu); f_10f96bd0();
  /* 10f9826f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98272 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98275 jne 0x10f98278 */
  if (!C.zf) goto L_10f98278;
  /* 10f98277 int3  */
  x86_unimpl("int3 @ 0x10f98277");
L_10f98278:;
  /* 10f98278 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9827a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9827c jne 0x10f9823f */
  if (!C.zf) goto L_10f9823f;
L_10f9827e:;
  /* 10f9827e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98282 je 0x10f982a9 */
  if (C.zf) goto L_10f982a9;
  /* 10f98284 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98287 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9828a push eax */
  push32((uint32_t)(EAX));
  /* 10f9828b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9828e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9828f call 0x10f9ba90 */
  push32(0x10f98294u); f_10f9ba90();
  /* 10f98294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98297 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9829a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9829e jne 0x10f982a7 */
  if (!C.zf) goto L_10f982a7;
  /* 10f982a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f982a2 jmp 0x10f984ea */
  goto L_10f984ea;
L_10f982a7:;
  /* 10f982a7 jmp 0x10f982cc */
  goto L_10f982cc;
L_10f982a9:;
  /* 10f982a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f982ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f982af push edx */
  push32((uint32_t)(EDX));
  /* 10f982b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f982b3 push eax */
  push32((uint32_t)(EAX));
  /* 10f982b4 call 0x10f9b9e0 */
  push32(0x10f982b9u); f_10f9b9e0();
  /* 10f982b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f982bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f982bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f982c3 jne 0x10f982cc */
  if (!C.zf) goto L_10f982cc;
  /* 10f982c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f982c7 jmp 0x10f984ea */
  goto L_10f984ea;
L_10f982cc:;
  /* 10f982cc mov ecx, dword ptr [0x10fc1a88] */
  ECX = (r32((uint32_t)(0x10fc1a88)));
  /* 10f982d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f982d5 mov dword ptr [0x10fc1a88], ecx */
  w32((uint32_t)(0x10fc1a88), (ECX));
  /* 10f982db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f982df jne 0x10f98337 */
  if (!C.zf) goto L_10f98337;
  /* 10f982e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f982e4 mov eax, dword ptr [0x10fc3748] */
  EAX = (r32((uint32_t)(0x10fc3748)));
  /* 10f982e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f982ec mov dword ptr [0x10fc3748], eax */
  w32((uint32_t)(0x10fc3748), (EAX));
  /* 10f982f1 mov ecx, dword ptr [0x10fc3748] */
  ECX = (r32((uint32_t)(0x10fc3748)));
  /* 10f982f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f982fa mov dword ptr [0x10fc3748], ecx */
  w32((uint32_t)(0x10fc3748), (ECX));
  /* 10f98300 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98303 mov eax, dword ptr [0x10fc3750] */
  EAX = (r32((uint32_t)(0x10fc3750)));
  /* 10f98308 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9830b mov dword ptr [0x10fc3750], eax */
  w32((uint32_t)(0x10fc3750), (EAX));
  /* 10f98310 mov ecx, dword ptr [0x10fc3750] */
  ECX = (r32((uint32_t)(0x10fc3750)));
  /* 10f98316 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98319 mov dword ptr [0x10fc3750], ecx */
  w32((uint32_t)(0x10fc3750), (ECX));
  /* 10f9831f mov edx, dword ptr [0x10fc3750] */
  EDX = (r32((uint32_t)(0x10fc3750)));
  /* 10f98325 cmp edx, dword ptr [0x10fc3754] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc3754))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9832b jbe 0x10f98337 */
  if ((C.cf||C.zf)) goto L_10f98337;
  /* 10f9832d mov eax, dword ptr [0x10fc3750] */
  EAX = (r32((uint32_t)(0x10fc3750)));
  /* 10f98332 mov dword ptr [0x10fc3754], eax */
  w32((uint32_t)(0x10fc3754), (EAX));
L_10f98337:;
  /* 10f98337 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9833a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9833d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f98340 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98343 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98346 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98349 jbe 0x10f9836f */
  if ((C.cf||C.zf)) goto L_10f9836f;
  /* 10f9834b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9834e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98351 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98354 push edx */
  push32((uint32_t)(EDX));
  /* 10f98355 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98357 mov al, byte ptr [0x10fc1a92] */
  AL = (r8((uint32_t)(0x10fc1a92)));
  /* 10f9835c push eax */
  push32((uint32_t)(EAX));
  /* 10f9835d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98360 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98363 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98366 push edx */
  push32((uint32_t)(EDX));
  /* 10f98367 call 0x10f9b880 */
  push32(0x10f9836cu); f_10f9b880();
  /* 10f9836c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9836f:;
  /* 10f9836f push 4 */
  push32((uint32_t)(0x4u));
  /* 10f98371 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98373 mov al, byte ptr [0x10fc1a90] */
  AL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f98378 push eax */
  push32((uint32_t)(EAX));
  /* 10f98379 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9837c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9837f push ecx */
  push32((uint32_t)(ECX));
  /* 10f98380 call 0x10f9b880 */
  push32(0x10f98385u); f_10f9b880();
  /* 10f98385 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98388 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9838c jne 0x10f983a9 */
  if (!C.zf) goto L_10f983a9;
  /* 10f9838e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98391 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f98394 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f98397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9839a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9839d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10f983a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f983a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f983a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10f983a9:;
  /* 10f983a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f983ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f983af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10f983b2:;
  /* 10f983b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983b6 jne 0x10f983e7 */
  if (!C.zf) goto L_10f983e7;
  /* 10f983b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983bc jne 0x10f983c6 */
  if (!C.zf) goto L_10f983c6;
  /* 10f983be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f983c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983c4 je 0x10f983e7 */
  if (C.zf) goto L_10f983e7;
L_10f983c6:;
  /* 10f983c6 push 0x10fbe63c */
  push32((uint32_t)(0x10fbe63cu));
  /* 10f983cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f983cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10f983d2 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f983d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f983d9 call 0x10f96bd0 */
  push32(0x10f983deu); f_10f96bd0();
  /* 10f983de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f983e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983e4 jne 0x10f983e7 */
  if (!C.zf) goto L_10f983e7;
  /* 10f983e6 int3  */
  x86_unimpl("int3 @ 0x10f983e6");
L_10f983e7:;
  /* 10f983e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f983e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f983eb jne 0x10f983b2 */
  if (!C.zf) goto L_10f983b2;
  /* 10f983ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f983f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983f3 je 0x10f983fb */
  if (C.zf) goto L_10f983fb;
  /* 10f983f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f983f9 je 0x10f98403 */
  if (C.zf) goto L_10f98403;
L_10f983fb:;
  /* 10f983fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f983fe jmp 0x10f984ea */
  goto L_10f984ea;
L_10f98403:;
  /* 10f98403 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98406 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98409 je 0x10f9841b */
  if (C.zf) goto L_10f9841b;
  /* 10f9840b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9840e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f98410 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98413 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f98416 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f98419 jmp 0x10f98457 */
  goto L_10f98457;
L_10f9841b:;
  /* 10f9841b mov eax, dword ptr [0x10fc3744] */
  EAX = (r32((uint32_t)(0x10fc3744)));
  /* 10f98420 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98423 je 0x10f98446 */
  if (C.zf) goto L_10f98446;
  /* 10f98425 push 0x10fbe620 */
  push32((uint32_t)(0x10fbe620u));
  /* 10f9842a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9842c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10f98431 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98436 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98438 call 0x10f96bd0 */
  push32(0x10f9843du); f_10f96bd0();
  /* 10f9843d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98440 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98443 jne 0x10f98446 */
  if (!C.zf) goto L_10f98446;
  /* 10f98445 int3  */
  x86_unimpl("int3 @ 0x10f98445");
L_10f98446:;
  /* 10f98446 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98448 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9844a jne 0x10f9841b */
  if (!C.zf) goto L_10f9841b;
  /* 10f9844c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9844f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f98452 mov dword ptr [0x10fc3744], eax */
  w32((uint32_t)(0x10fc3744), (EAX));
L_10f98457:;
  /* 10f98457 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9845a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9845e je 0x10f9846f */
  if (C.zf) goto L_10f9846f;
  /* 10f98460 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98463 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f98466 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98469 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9846b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f9846d jmp 0x10f984aa */
  goto L_10f984aa;
L_10f9846f:;
  /* 10f9846f mov eax, dword ptr [0x10fc374c] */
  EAX = (r32((uint32_t)(0x10fc374c)));
  /* 10f98474 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98477 je 0x10f9849a */
  if (C.zf) goto L_10f9849a;
  /* 10f98479 push 0x10fbe604 */
  push32((uint32_t)(0x10fbe604u));
  /* 10f9847e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98480 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10f98485 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f9848a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9848c call 0x10f96bd0 */
  push32(0x10f98491u); f_10f96bd0();
  /* 10f98491 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98494 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98497 jne 0x10f9849a */
  if (!C.zf) goto L_10f9849a;
  /* 10f98499 int3  */
  x86_unimpl("int3 @ 0x10f98499");
L_10f9849a:;
  /* 10f9849a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9849c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9849e jne 0x10f9846f */
  if (!C.zf) goto L_10f9846f;
  /* 10f984a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f984a5 mov dword ptr [0x10fc374c], eax */
  w32((uint32_t)(0x10fc374c), (EAX));
L_10f984aa:;
  /* 10f984aa cmp dword ptr [0x10fc374c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc374c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f984b1 je 0x10f984c1 */
  if (C.zf) goto L_10f984c1;
  /* 10f984b3 mov ecx, dword ptr [0x10fc374c] */
  ECX = (r32((uint32_t)(0x10fc374c)));
  /* 10f984b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10f984bf jmp 0x10f984c9 */
  goto L_10f984c9;
L_10f984c1:;
  /* 10f984c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984c4 mov dword ptr [0x10fc3744], eax */
  w32((uint32_t)(0x10fc3744), (EAX));
L_10f984c9:;
  /* 10f984c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984cc mov edx, dword ptr [0x10fc374c] */
  EDX = (r32((uint32_t)(0x10fc374c)));
  /* 10f984d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f984d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10f984de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f984e1 mov dword ptr [0x10fc374c], ecx */
  w32((uint32_t)(0x10fc374c), (ECX));
  /* 10f984e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f984ea:;
  /* 10f984ea pop edi */
  EDI = (pop32());
  /* 10f984eb pop esi */
  ESI = (pop32());
  /* 10f984ec pop ebx */
  EBX = (pop32());
  /* 10f984ed mov esp, ebp */
  ESP = (EBP);
  /* 10f984ef pop ebp */
  EBP = (pop32());
  /* 10f984f0 ret  */
  ESPCHK(0x10f97fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x10f98500 (27 bytes, 13 insns) */
void f_10f98500(void) {
  FTRACE(0x10f98500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98500 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98501 mov ebp, esp */
  EBP = (ESP);
  /* 10f98503 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98505 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98507 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f98509 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9850c push eax */
  push32((uint32_t)(EAX));
  /* 10f9850d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98510 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98511 call 0x10f98520 */
  push32(0x10f98516u); f_10f98520();
  /* 10f98516 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98519 pop ebp */
  EBP = (pop32());
  /* 10f9851a ret  */
  ESPCHK(0x10f98500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x10f98520 (64 bytes, 27 insns) */
void f_10f98520(void) {
  FTRACE(0x10f98520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98520 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98521 mov ebp, esp */
  EBP = (ESP);
  /* 10f98523 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98524 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98526 call 0x10f9b510 */
  push32(0x10f9852bu); f_10f9b510();
  /* 10f9852b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9852e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98530 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f98533 push eax */
  push32((uint32_t)(EAX));
  /* 10f98534 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f98537 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98538 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9853b push edx */
  push32((uint32_t)(EDX));
  /* 10f9853c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9853f push eax */
  push32((uint32_t)(EAX));
  /* 10f98540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98543 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98544 call 0x10f97fe0 */
  push32(0x10f98549u); f_10f97fe0();
  /* 10f98549 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9854c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9854f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98551 call 0x10f9b5b0 */
  push32(0x10f98556u); f_10f9b5b0();
  /* 10f98556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9855c mov esp, ebp */
  ESP = (EBP);
  /* 10f9855e pop ebp */
  EBP = (pop32());
  /* 10f9855f ret  */
  ESPCHK(0x10f98520u, _esp0);
  ESP += 4; return;
}

/* FUN_10008560 @ 0x10f98560 (19 bytes, 9 insns) */
void f_10f98560(void) {
  FTRACE(0x10f98560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98560 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98561 mov ebp, esp */
  EBP = (ESP);
  /* 10f98563 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f98565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98568 push eax */
  push32((uint32_t)(EAX));
  /* 10f98569 call 0x10f985a0 */
  push32(0x10f9856eu); f_10f985a0();
  /* 10f9856e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98571 pop ebp */
  EBP = (pop32());
  /* 10f98572 ret  */
  ESPCHK(0x10f98560u, _esp0);
  ESP += 4; return;
}

/* FUN_10008580 @ 0x10f98580 (19 bytes, 9 insns) */
void f_10f98580(void) {
  FTRACE(0x10f98580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98580 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98581 mov ebp, esp */
  EBP = (ESP);
  /* 10f98583 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f98585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98588 push eax */
  push32((uint32_t)(EAX));
  /* 10f98589 call 0x10f985d0 */
  push32(0x10f9858eu); f_10f985d0();
  /* 10f9858e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98591 pop ebp */
  EBP = (pop32());
  /* 10f98592 ret  */
  ESPCHK(0x10f98580u, _esp0);
  ESP += 4; return;
}

/* FUN_100085a0 @ 0x10f985a0 (41 bytes, 16 insns) */
void f_10f985a0(void) {
  FTRACE(0x10f985a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f985a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f985a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f985a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f985a5 call 0x10f9b510 */
  push32(0x10f985aau); f_10f9b510();
  /* 10f985aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f985ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f985b0 push eax */
  push32((uint32_t)(EAX));
  /* 10f985b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f985b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f985b5 call 0x10f985d0 */
  push32(0x10f985bau); f_10f985d0();
  /* 10f985ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f985bd push 9 */
  push32((uint32_t)(0x9u));
  /* 10f985bf call 0x10f9b5b0 */
  push32(0x10f985c4u); f_10f9b5b0();
  /* 10f985c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f985c7 pop ebp */
  EBP = (pop32());
  /* 10f985c8 ret  */
  ESPCHK(0x10f985a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085d0 @ 0x10f985d0 (1004 bytes, 342 insns) */
void f_10f985d0(void) {
  FTRACE(0x10f985d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f985d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f985d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f985d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f985d4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f985d5 push esi */
  push32((uint32_t)(ESI));
  /* 10f985d6 push edi */
  push32((uint32_t)(EDI));
  /* 10f985d7 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f985dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f985df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f985e1 je 0x10f98613 */
  if (C.zf) goto L_10f98613;
L_10f985e3:;
  /* 10f985e3 call 0x10f98cb0 */
  push32(0x10f985e8u); f_10f98cb0();
  /* 10f985e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f985ea jne 0x10f9860d */
  if (!C.zf) goto L_10f9860d;
  /* 10f985ec push 0x10fbe5f0 */
  push32((uint32_t)(0x10fbe5f0u));
  /* 10f985f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f985f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10f985f8 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f985fd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f985ff call 0x10f96bd0 */
  push32(0x10f98604u); f_10f96bd0();
  /* 10f98604 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98607 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9860a jne 0x10f9860d */
  if (!C.zf) goto L_10f9860d;
  /* 10f9860c int3  */
  x86_unimpl("int3 @ 0x10f9860c");
L_10f9860d:;
  /* 10f9860d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9860f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98611 jne 0x10f985e3 */
  if (!C.zf) goto L_10f985e3;
L_10f98613:;
  /* 10f98613 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98617 jne 0x10f9861e */
  if (!C.zf) goto L_10f9861e;
  /* 10f98619 jmp 0x10f989b5 */
  goto L_10f989b5;
L_10f9861e:;
  /* 10f9861e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98620 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98622 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98624 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98627 push edx */
  push32((uint32_t)(EDX));
  /* 10f98628 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9862a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9862d push eax */
  push32((uint32_t)(EAX));
  /* 10f9862e push 3 */
  push32((uint32_t)(0x3u));
  /* 10f98630 call dword ptr [0x10fc1c90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc1c90))), 0x10f98636u);
  /* 10f98636 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98639 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9863b jne 0x10f98668 */
  if (!C.zf) goto L_10f98668;
L_10f9863d:;
  /* 10f9863d push 0x10fbe8b4 */
  push32((uint32_t)(0x10fbe8b4u));
  /* 10f98642 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98647 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98649 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9864b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9864d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9864f call 0x10f96bd0 */
  push32(0x10f98654u); f_10f96bd0();
  /* 10f98654 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9865a jne 0x10f9865d */
  if (!C.zf) goto L_10f9865d;
  /* 10f9865c int3  */
  x86_unimpl("int3 @ 0x10f9865c");
L_10f9865d:;
  /* 10f9865d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9865f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98661 jne 0x10f9863d */
  if (!C.zf) goto L_10f9863d;
  /* 10f98663 jmp 0x10f989b5 */
  goto L_10f989b5;
L_10f98668:;
  /* 10f98668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9866b push edx */
  push32((uint32_t)(EDX));
  /* 10f9866c call 0x10f99110 */
  push32(0x10f98671u); f_10f99110();
  /* 10f98671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98674 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98676 jne 0x10f98699 */
  if (!C.zf) goto L_10f98699;
  /* 10f98678 push 0x10fbe6f4 */
  push32((uint32_t)(0x10fbe6f4u));
  /* 10f9867d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9867f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10f98684 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98689 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9868b call 0x10f96bd0 */
  push32(0x10f98690u); f_10f96bd0();
  /* 10f98690 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98693 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98696 jne 0x10f98699 */
  if (!C.zf) goto L_10f98699;
  /* 10f98698 int3  */
  x86_unimpl("int3 @ 0x10f98698");
L_10f98699:;
  /* 10f98699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9869b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9869d jne 0x10f98668 */
  if (!C.zf) goto L_10f98668;
  /* 10f9869f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f986a2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f986a5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f986a8:;
  /* 10f986a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f986ab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f986ae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f986b3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f986b6 je 0x10f986fb */
  if (C.zf) goto L_10f986fb;
  /* 10f986b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f986bb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f986bf je 0x10f986fb */
  if (C.zf) goto L_10f986fb;
  /* 10f986c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f986c4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f986c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f986cc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f986cf je 0x10f986fb */
  if (C.zf) goto L_10f986fb;
  /* 10f986d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f986d4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f986d8 je 0x10f986fb */
  if (C.zf) goto L_10f986fb;
  /* 10f986da push 0x10fbe88c */
  push32((uint32_t)(0x10fbe88cu));
  /* 10f986df push 0 */
  push32((uint32_t)(0x0u));
  /* 10f986e1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10f986e6 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f986eb push 2 */
  push32((uint32_t)(0x2u));
  /* 10f986ed call 0x10f96bd0 */
  push32(0x10f986f2u); f_10f96bd0();
  /* 10f986f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f986f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f986f8 jne 0x10f986fb */
  if (!C.zf) goto L_10f986fb;
  /* 10f986fa int3  */
  x86_unimpl("int3 @ 0x10f986fa");
L_10f986fb:;
  /* 10f986fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f986fd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f986ff jne 0x10f986a8 */
  if (!C.zf) goto L_10f986a8;
  /* 10f98701 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f98706 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f98709 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9870b jne 0x10f987d6 */
  if (!C.zf) goto L_10f987d6;
  /* 10f98711 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f98713 mov cl, byte ptr [0x10fc1a90] */
  CL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f98719 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9871a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9871d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98720 push edx */
  push32((uint32_t)(EDX));
  /* 10f98721 call 0x10f98c20 */
  push32(0x10f98726u); f_10f98c20();
  /* 10f98726 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98729 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9872b jne 0x10f98770 */
  if (!C.zf) goto L_10f98770;
L_10f9872d:;
  /* 10f9872d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98730 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98733 push eax */
  push32((uint32_t)(EAX));
  /* 10f98734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98737 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f9873a push edx */
  push32((uint32_t)(EDX));
  /* 10f9873b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9873e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f98741 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98747 mov edx, dword ptr [ecx*4 + 0x10fc1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a94)));
  /* 10f9874e push edx */
  push32((uint32_t)(EDX));
  /* 10f9874f push 0x10fbe860 */
  push32((uint32_t)(0x10fbe860u));
  /* 10f98754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98756 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98758 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9875a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9875c call 0x10f96bd0 */
  push32(0x10f98761u); f_10f96bd0();
  /* 10f98761 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98764 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98767 jne 0x10f9876a */
  if (!C.zf) goto L_10f9876a;
  /* 10f98769 int3  */
  x86_unimpl("int3 @ 0x10f98769");
L_10f9876a:;
  /* 10f9876a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9876c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9876e jne 0x10f9872d */
  if (!C.zf) goto L_10f9872d;
L_10f98770:;
  /* 10f98770 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f98772 mov cl, byte ptr [0x10fc1a90] */
  CL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f98778 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98779 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9877c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9877f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98782 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10f98786 push edx */
  push32((uint32_t)(EDX));
  /* 10f98787 call 0x10f98c20 */
  push32(0x10f9878cu); f_10f98c20();
  /* 10f9878c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9878f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98791 jne 0x10f987d6 */
  if (!C.zf) goto L_10f987d6;
L_10f98793:;
  /* 10f98793 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98796 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98799 push eax */
  push32((uint32_t)(EAX));
  /* 10f9879a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9879d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f987a0 push edx */
  push32((uint32_t)(EDX));
  /* 10f987a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f987a4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f987a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f987ad mov edx, dword ptr [ecx*4 + 0x10fc1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a94)));
  /* 10f987b4 push edx */
  push32((uint32_t)(EDX));
  /* 10f987b5 push 0x10fbe834 */
  push32((uint32_t)(0x10fbe834u));
  /* 10f987ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10f987bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f987be push 0 */
  push32((uint32_t)(0x0u));
  /* 10f987c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f987c2 call 0x10f96bd0 */
  push32(0x10f987c7u); f_10f96bd0();
  /* 10f987c7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f987ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f987cd jne 0x10f987d0 */
  if (!C.zf) goto L_10f987d0;
  /* 10f987cf int3  */
  x86_unimpl("int3 @ 0x10f987cf");
L_10f987d0:;
  /* 10f987d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f987d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f987d4 jne 0x10f98793 */
  if (!C.zf) goto L_10f98793;
L_10f987d6:;
  /* 10f987d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f987d9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f987dd jne 0x10f9884b */
  if (!C.zf) goto L_10f9884b;
L_10f987df:;
  /* 10f987df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f987e2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f987e9 jne 0x10f987f4 */
  if (!C.zf) goto L_10f987f4;
  /* 10f987eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f987ee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f987f2 je 0x10f98815 */
  if (C.zf) goto L_10f98815;
L_10f987f4:;
  /* 10f987f4 push 0x10fbe7f4 */
  push32((uint32_t)(0x10fbe7f4u));
  /* 10f987f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f987fb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10f98800 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98805 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98807 call 0x10f96bd0 */
  push32(0x10f9880cu); f_10f96bd0();
  /* 10f9880c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9880f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98812 jne 0x10f98815 */
  if (!C.zf) goto L_10f98815;
  /* 10f98814 int3  */
  x86_unimpl("int3 @ 0x10f98814");
L_10f98815:;
  /* 10f98815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98817 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98819 jne 0x10f987df */
  if (!C.zf) goto L_10f987df;
  /* 10f9881b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9881e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f98821 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98824 push eax */
  push32((uint32_t)(EAX));
  /* 10f98825 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98827 mov cl, byte ptr [0x10fc1a91] */
  CL = (r8((uint32_t)(0x10fc1a91)));
  /* 10f9882d push ecx */
  push32((uint32_t)(ECX));
  /* 10f9882e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98831 push edx */
  push32((uint32_t)(EDX));
  /* 10f98832 call 0x10f9b880 */
  push32(0x10f98837u); f_10f9b880();
  /* 10f98837 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9883a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9883d push eax */
  push32((uint32_t)(EAX));
  /* 10f9883e call 0x10f9bc80 */
  push32(0x10f98843u); f_10f9bc80();
  /* 10f98843 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98846 jmp 0x10f989b5 */
  goto L_10f989b5;
L_10f9884b:;
  /* 10f9884b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9884e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98852 jne 0x10f98861 */
  if (!C.zf) goto L_10f98861;
  /* 10f98854 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98858 jne 0x10f98861 */
  if (!C.zf) goto L_10f98861;
  /* 10f9885a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10f98861:;
  /* 10f98861 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98864 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98867 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9886a je 0x10f9888d */
  if (C.zf) goto L_10f9888d;
  /* 10f9886c push 0x10fbe7d4 */
  push32((uint32_t)(0x10fbe7d4u));
  /* 10f98871 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98873 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10f98878 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f9887d push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9887f call 0x10f96bd0 */
  push32(0x10f98884u); f_10f96bd0();
  /* 10f98884 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98887 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9888a jne 0x10f9888d */
  if (!C.zf) goto L_10f9888d;
  /* 10f9888c int3  */
  x86_unimpl("int3 @ 0x10f9888c");
L_10f9888d:;
  /* 10f9888d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9888f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98891 jne 0x10f98861 */
  if (!C.zf) goto L_10f98861;
  /* 10f98893 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98896 mov eax, dword ptr [0x10fc3750] */
  EAX = (r32((uint32_t)(0x10fc3750)));
  /* 10f9889b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9889e mov dword ptr [0x10fc3750], eax */
  w32((uint32_t)(0x10fc3750), (EAX));
  /* 10f988a3 mov ecx, dword ptr [0x10fc1a84] */
  ECX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f988a9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10f988ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f988ae jne 0x10f9898c */
  if (!C.zf) goto L_10f9898c;
  /* 10f988b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f988b7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f988ba je 0x10f988cc */
  if (C.zf) goto L_10f988cc;
  /* 10f988bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f988bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f988c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f988c4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f988c7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f988ca jmp 0x10f9890a */
  goto L_10f9890a;
L_10f988cc:;
  /* 10f988cc mov ecx, dword ptr [0x10fc3744] */
  ECX = (r32((uint32_t)(0x10fc3744)));
  /* 10f988d2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f988d5 je 0x10f988f8 */
  if (C.zf) goto L_10f988f8;
  /* 10f988d7 push 0x10fbe7bc */
  push32((uint32_t)(0x10fbe7bcu));
  /* 10f988dc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f988de push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10f988e3 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f988e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f988ea call 0x10f96bd0 */
  push32(0x10f988efu); f_10f96bd0();
  /* 10f988ef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f988f2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f988f5 jne 0x10f988f8 */
  if (!C.zf) goto L_10f988f8;
  /* 10f988f7 int3  */
  x86_unimpl("int3 @ 0x10f988f7");
L_10f988f8:;
  /* 10f988f8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f988fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f988fc jne 0x10f988cc */
  if (!C.zf) goto L_10f988cc;
  /* 10f988fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98901 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f98904 mov dword ptr [0x10fc3744], ecx */
  w32((uint32_t)(0x10fc3744), (ECX));
L_10f9890a:;
  /* 10f9890a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9890d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98911 je 0x10f98922 */
  if (C.zf) goto L_10f98922;
  /* 10f98913 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98916 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f98919 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9891c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9891e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f98920 jmp 0x10f9895f */
  goto L_10f9895f;
L_10f98922:;
  /* 10f98922 mov ecx, dword ptr [0x10fc374c] */
  ECX = (r32((uint32_t)(0x10fc374c)));
  /* 10f98928 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9892b je 0x10f9894e */
  if (C.zf) goto L_10f9894e;
  /* 10f9892d push 0x10fbe7a4 */
  push32((uint32_t)(0x10fbe7a4u));
  /* 10f98932 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98934 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10f98939 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f9893e push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98940 call 0x10f96bd0 */
  push32(0x10f98945u); f_10f96bd0();
  /* 10f98945 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98948 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9894b jne 0x10f9894e */
  if (!C.zf) goto L_10f9894e;
  /* 10f9894d int3  */
  x86_unimpl("int3 @ 0x10f9894d");
L_10f9894e:;
  /* 10f9894e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98950 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98952 jne 0x10f98922 */
  if (!C.zf) goto L_10f98922;
  /* 10f98954 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98957 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f98959 mov dword ptr [0x10fc374c], ecx */
  w32((uint32_t)(0x10fc374c), (ECX));
L_10f9895f:;
  /* 10f9895f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98962 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f98965 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98968 push eax */
  push32((uint32_t)(EAX));
  /* 10f98969 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9896b mov cl, byte ptr [0x10fc1a91] */
  CL = (r8((uint32_t)(0x10fc1a91)));
  /* 10f98971 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98972 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98975 push edx */
  push32((uint32_t)(EDX));
  /* 10f98976 call 0x10f9b880 */
  push32(0x10f9897bu); f_10f9b880();
  /* 10f9897b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9897e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98981 push eax */
  push32((uint32_t)(EAX));
  /* 10f98982 call 0x10f9bc80 */
  push32(0x10f98987u); f_10f9bc80();
  /* 10f98987 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9898a jmp 0x10f989b5 */
  goto L_10f989b5;
L_10f9898c:;
  /* 10f9898c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9898f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10f98996 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98999 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9899c push eax */
  push32((uint32_t)(EAX));
  /* 10f9899d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9899f mov cl, byte ptr [0x10fc1a91] */
  CL = (r8((uint32_t)(0x10fc1a91)));
  /* 10f989a5 push ecx */
  push32((uint32_t)(ECX));
  /* 10f989a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f989a9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f989ac push edx */
  push32((uint32_t)(EDX));
  /* 10f989ad call 0x10f9b880 */
  push32(0x10f989b2u); f_10f9b880();
  /* 10f989b2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f989b5:;
  /* 10f989b5 pop edi */
  EDI = (pop32());
  /* 10f989b6 pop esi */
  ESI = (pop32());
  /* 10f989b7 pop ebx */
  EBX = (pop32());
  /* 10f989b8 mov esp, ebp */
  ESP = (EBP);
  /* 10f989ba pop ebp */
  EBP = (pop32());
  /* 10f989bb ret  */
  ESPCHK(0x10f985d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x10f989c0 (19 bytes, 9 insns) */
void f_10f989c0(void) {
  FTRACE(0x10f989c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f989c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f989c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f989c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f989c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f989c8 push eax */
  push32((uint32_t)(EAX));
  /* 10f989c9 call 0x10f989e0 */
  push32(0x10f989ceu); f_10f989e0();
  /* 10f989ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f989d1 pop ebp */
  EBP = (pop32());
  /* 10f989d2 ret  */
  ESPCHK(0x10f989c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x10f989e0 (342 bytes, 119 insns) */
void f_10f989e0(void) {
  FTRACE(0x10f989e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f989e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f989e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f989e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f989e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f989e7 push esi */
  push32((uint32_t)(ESI));
  /* 10f989e8 push edi */
  push32((uint32_t)(EDI));
  /* 10f989e9 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f989ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f989f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f989f3 je 0x10f98a25 */
  if (C.zf) goto L_10f98a25;
L_10f989f5:;
  /* 10f989f5 call 0x10f98cb0 */
  push32(0x10f989fau); f_10f98cb0();
  /* 10f989fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f989fc jne 0x10f98a1f */
  if (!C.zf) goto L_10f98a1f;
  /* 10f989fe push 0x10fbe5f0 */
  push32((uint32_t)(0x10fbe5f0u));
  /* 10f98a03 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98a05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10f98a0a push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98a11 call 0x10f96bd0 */
  push32(0x10f98a16u); f_10f96bd0();
  /* 10f98a16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98a19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a1c jne 0x10f98a1f */
  if (!C.zf) goto L_10f98a1f;
  /* 10f98a1e int3  */
  x86_unimpl("int3 @ 0x10f98a1e");
L_10f98a1f:;
  /* 10f98a1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98a21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98a23 jne 0x10f989f5 */
  if (!C.zf) goto L_10f989f5;
L_10f98a25:;
  /* 10f98a25 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98a27 call 0x10f9b510 */
  push32(0x10f98a2cu); f_10f9b510();
  /* 10f98a2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f98a2f:;
  /* 10f98a2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98a32 push edx */
  push32((uint32_t)(EDX));
  /* 10f98a33 call 0x10f99110 */
  push32(0x10f98a38u); f_10f99110();
  /* 10f98a38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98a3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98a3d jne 0x10f98a60 */
  if (!C.zf) goto L_10f98a60;
  /* 10f98a3f push 0x10fbe6f4 */
  push32((uint32_t)(0x10fbe6f4u));
  /* 10f98a44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98a46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10f98a4b push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98a50 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98a52 call 0x10f96bd0 */
  push32(0x10f98a57u); f_10f96bd0();
  /* 10f98a57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98a5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a5d jne 0x10f98a60 */
  if (!C.zf) goto L_10f98a60;
  /* 10f98a5f int3  */
  x86_unimpl("int3 @ 0x10f98a5f");
L_10f98a60:;
  /* 10f98a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98a62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98a64 jne 0x10f98a2f */
  if (!C.zf) goto L_10f98a2f;
  /* 10f98a66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98a69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98a6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f98a6f:;
  /* 10f98a6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98a72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98a75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98a7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a7d je 0x10f98ac2 */
  if (C.zf) goto L_10f98ac2;
  /* 10f98a7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98a82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a86 je 0x10f98ac2 */
  if (C.zf) goto L_10f98ac2;
  /* 10f98a88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98a8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98a8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98a93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a96 je 0x10f98ac2 */
  if (C.zf) goto L_10f98ac2;
  /* 10f98a98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98a9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98a9f je 0x10f98ac2 */
  if (C.zf) goto L_10f98ac2;
  /* 10f98aa1 push 0x10fbe88c */
  push32((uint32_t)(0x10fbe88cu));
  /* 10f98aa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98aa8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10f98aad push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98ab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98ab4 call 0x10f96bd0 */
  push32(0x10f98ab9u); f_10f96bd0();
  /* 10f98ab9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98abc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98abf jne 0x10f98ac2 */
  if (!C.zf) goto L_10f98ac2;
  /* 10f98ac1 int3  */
  x86_unimpl("int3 @ 0x10f98ac1");
L_10f98ac2:;
  /* 10f98ac2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98ac4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98ac6 jne 0x10f98a6f */
  if (!C.zf) goto L_10f98a6f;
  /* 10f98ac8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98acb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98acf jne 0x10f98ade */
  if (!C.zf) goto L_10f98ade;
  /* 10f98ad1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98ad5 jne 0x10f98ade */
  if (!C.zf) goto L_10f98ade;
  /* 10f98ad7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10f98ade:;
  /* 10f98ade mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98ae1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98ae5 je 0x10f98b19 */
  if (C.zf) goto L_10f98b19;
L_10f98ae7:;
  /* 10f98ae7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98aea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98aed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98af0 je 0x10f98b13 */
  if (C.zf) goto L_10f98b13;
  /* 10f98af2 push 0x10fbe7d4 */
  push32((uint32_t)(0x10fbe7d4u));
  /* 10f98af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98af9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10f98afe push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98b03 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98b05 call 0x10f96bd0 */
  push32(0x10f98b0au); f_10f96bd0();
  /* 10f98b0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98b0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98b10 jne 0x10f98b13 */
  if (!C.zf) goto L_10f98b13;
  /* 10f98b12 int3  */
  x86_unimpl("int3 @ 0x10f98b12");
L_10f98b13:;
  /* 10f98b13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98b15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98b17 jne 0x10f98ae7 */
  if (!C.zf) goto L_10f98ae7;
L_10f98b19:;
  /* 10f98b19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98b1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f98b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f98b22 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98b24 call 0x10f9b5b0 */
  push32(0x10f98b29u); f_10f9b5b0();
  /* 10f98b29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98b2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98b2f pop edi */
  EDI = (pop32());
  /* 10f98b30 pop esi */
  ESI = (pop32());
  /* 10f98b31 pop ebx */
  EBX = (pop32());
  /* 10f98b32 mov esp, ebp */
  ESP = (EBP);
  /* 10f98b34 pop ebp */
  EBP = (pop32());
  /* 10f98b35 ret  */
  ESPCHK(0x10f989e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b40 @ 0x10f98b40 (28 bytes, 11 insns) */
void f_10f98b40(void) {
  FTRACE(0x10f98b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98b40 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98b41 mov ebp, esp */
  EBP = (ESP);
  /* 10f98b43 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98b44 mov eax, dword ptr [0x10fc1a8c] */
  EAX = (r32((uint32_t)(0x10fc1a8c)));
  /* 10f98b49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f98b4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98b4f mov dword ptr [0x10fc1a8c], ecx */
  w32((uint32_t)(0x10fc1a8c), (ECX));
  /* 10f98b55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98b58 mov esp, ebp */
  ESP = (EBP);
  /* 10f98b5a pop ebp */
  EBP = (pop32());
  /* 10f98b5b ret  */
  ESPCHK(0x10f98b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x10f98b60 (157 bytes, 59 insns) */
void f_10f98b60(void) {
  FTRACE(0x10f98b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98b60 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98b61 mov ebp, esp */
  EBP = (ESP);
  /* 10f98b63 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98b64 push ebx */
  push32((uint32_t)(EBX));
  /* 10f98b65 push esi */
  push32((uint32_t)(ESI));
  /* 10f98b66 push edi */
  push32((uint32_t)(EDI));
  /* 10f98b67 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98b69 call 0x10f9b510 */
  push32(0x10f98b6eu); f_10f9b510();
  /* 10f98b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98b71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98b74 push eax */
  push32((uint32_t)(EAX));
  /* 10f98b75 call 0x10f99110 */
  push32(0x10f98b7au); f_10f99110();
  /* 10f98b7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98b7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98b7f je 0x10f98bec */
  if (C.zf) goto L_10f98bec;
  /* 10f98b81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98b84 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98b87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f98b8a:;
  /* 10f98b8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98b8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98b90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98b95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98b98 je 0x10f98bdd */
  if (C.zf) goto L_10f98bdd;
  /* 10f98b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98b9d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98ba1 je 0x10f98bdd */
  if (C.zf) goto L_10f98bdd;
  /* 10f98ba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98ba6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f98ba9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98bae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98bb1 je 0x10f98bdd */
  if (C.zf) goto L_10f98bdd;
  /* 10f98bb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98bb6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98bba je 0x10f98bdd */
  if (C.zf) goto L_10f98bdd;
  /* 10f98bbc push 0x10fbe88c */
  push32((uint32_t)(0x10fbe88cu));
  /* 10f98bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98bc3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10f98bc8 push 0x10fbe5e4 */
  push32((uint32_t)(0x10fbe5e4u));
  /* 10f98bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f98bcf call 0x10f96bd0 */
  push32(0x10f98bd4u); f_10f96bd0();
  /* 10f98bd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98bd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98bda jne 0x10f98bdd */
  if (!C.zf) goto L_10f98bdd;
  /* 10f98bdc int3  */
  x86_unimpl("int3 @ 0x10f98bdc");
L_10f98bdd:;
  /* 10f98bdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98bdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98be1 jne 0x10f98b8a */
  if (!C.zf) goto L_10f98b8a;
  /* 10f98be3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98be6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98be9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10f98bec:;
  /* 10f98bec push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98bee call 0x10f9b5b0 */
  push32(0x10f98bf3u); f_10f9b5b0();
  /* 10f98bf3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98bf6 pop edi */
  EDI = (pop32());
  /* 10f98bf7 pop esi */
  ESI = (pop32());
  /* 10f98bf8 pop ebx */
  EBX = (pop32());
  /* 10f98bf9 mov esp, ebp */
  ESP = (EBP);
  /* 10f98bfb pop ebp */
  EBP = (pop32());
  /* 10f98bfc ret  */
  ESPCHK(0x10f98b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c00 @ 0x10f98c00 (28 bytes, 11 insns) */
void f_10f98c00(void) {
  FTRACE(0x10f98c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98c01 mov ebp, esp */
  EBP = (ESP);
  /* 10f98c03 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98c04 mov eax, dword ptr [0x10fc1c90] */
  EAX = (r32((uint32_t)(0x10fc1c90)));
  /* 10f98c09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f98c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98c0f mov dword ptr [0x10fc1c90], ecx */
  w32((uint32_t)(0x10fc1c90), (ECX));
  /* 10f98c15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98c18 mov esp, ebp */
  ESP = (EBP);
  /* 10f98c1a pop ebp */
  EBP = (pop32());
  /* 10f98c1b ret  */
  ESPCHK(0x10f98c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c20 @ 0x10f98c20 (136 bytes, 55 insns) */
void f_10f98c20(void) {
  FTRACE(0x10f98c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98c20 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98c21 mov ebp, esp */
  EBP = (ESP);
  /* 10f98c23 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98c24 push ebx */
  push32((uint32_t)(EBX));
  /* 10f98c25 push esi */
  push32((uint32_t)(ESI));
  /* 10f98c26 push edi */
  push32((uint32_t)(EDI));
  /* 10f98c27 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10f98c2e:;
  /* 10f98c2e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98c31 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f98c34 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98c37 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f98c3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98c3c je 0x10f98c9e */
  if (C.zf) goto L_10f98c9e;
  /* 10f98c3e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98c41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98c43 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f98c45 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98c48 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98c4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98c51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98c54 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f98c57 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98c59 je 0x10f98c9c */
  if (C.zf) goto L_10f98c9c;
L_10f98c5b:;
  /* 10f98c5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f98c5e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f98c63 push eax */
  push32((uint32_t)(EAX));
  /* 10f98c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98c67 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98c69 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10f98c6c push edx */
  push32((uint32_t)(EDX));
  /* 10f98c6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f98c70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98c73 push eax */
  push32((uint32_t)(EAX));
  /* 10f98c74 push 0x10fbe8d0 */
  push32((uint32_t)(0x10fbe8d0u));
  /* 10f98c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98c81 call 0x10f96bd0 */
  push32(0x10f98c86u); f_10f96bd0();
  /* 10f98c86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98c8c jne 0x10f98c8f */
  if (!C.zf) goto L_10f98c8f;
  /* 10f98c8e int3  */
  x86_unimpl("int3 @ 0x10f98c8e");
L_10f98c8f:;
  /* 10f98c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98c91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98c93 jne 0x10f98c5b */
  if (!C.zf) goto L_10f98c5b;
  /* 10f98c95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f98c9c:;
  /* 10f98c9c jmp 0x10f98c2e */
  goto L_10f98c2e;
L_10f98c9e:;
  /* 10f98c9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f98ca1 pop edi */
  EDI = (pop32());
  /* 10f98ca2 pop esi */
  ESI = (pop32());
  /* 10f98ca3 pop ebx */
  EBX = (pop32());
  /* 10f98ca4 mov esp, ebp */
  ESP = (EBP);
  /* 10f98ca6 pop ebp */
  EBP = (pop32());
  /* 10f98ca7 ret  */
  ESPCHK(0x10f98c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x10f98cb0 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10f98cb0(void) {
  FTRACE(0x10f98cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f98cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f98cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f98cb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f98cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f98cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10f98cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10f98cb9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f98cc0 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f98cc5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f98cc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98cca jne 0x10f98cd6 */
  if (!C.zf) goto L_10f98cd6;
  /* 10f98ccc mov eax, 1 */
  EAX = (0x1u);
  /* 10f98cd1 jmp 0x10f99008 */
  goto L_10f99008;
L_10f98cd6:;
  /* 10f98cd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98cd8 call 0x10f9b510 */
  push32(0x10f98cddu); f_10f9b510();
  /* 10f98cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98ce0 call 0x10f9bcf0 */
  push32(0x10f98ce5u); f_10f9bcf0();
  /* 10f98ce5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f98ce8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98cec je 0x10f98df9 */
  if (C.zf) goto L_10f98df9;
  /* 10f98cf2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98cf6 je 0x10f98df9 */
  if (C.zf) goto L_10f98df9;
  /* 10f98cfc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f98cff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10f98d02 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f98d05 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98d08 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f98d0b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98d0f ja 0x10f98dc2 */
  if ((!C.cf&&!C.zf)) goto L_10f98dc2;
  /* 10f98d15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f98d18 jmp dword ptr [eax*4 + 0x10f9900f] */
  switch (EAX) {
    case 0: goto L_10f98d9a;
    case 1: goto L_10f98d72;
    case 2: goto L_10f98d4a;
    case 3: goto L_10f98d1f;
    default: x86_unimpl("switch@0x10f98d18 out of table"); return;
  }
L_10f98d1f:;
  /* 10f98d1f push 0x10fbea24 */
  push32((uint32_t)(0x10fbea24u));
  /* 10f98d24 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d31 call 0x10f96bd0 */
  push32(0x10f98d36u); f_10f96bd0();
  /* 10f98d36 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98d39 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98d3c jne 0x10f98d3f */
  if (!C.zf) goto L_10f98d3f;
  /* 10f98d3e int3  */
  x86_unimpl("int3 @ 0x10f98d3e");
L_10f98d3f:;
  /* 10f98d3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98d41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98d43 jne 0x10f98d1f */
  if (!C.zf) goto L_10f98d1f;
  /* 10f98d45 jmp 0x10f98de8 */
  goto L_10f98de8;
L_10f98d4a:;
  /* 10f98d4a push 0x10fbea00 */
  push32((uint32_t)(0x10fbea00u));
  /* 10f98d4f push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98d54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d5c call 0x10f96bd0 */
  push32(0x10f98d61u); f_10f96bd0();
  /* 10f98d61 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98d64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98d67 jne 0x10f98d6a */
  if (!C.zf) goto L_10f98d6a;
  /* 10f98d69 int3  */
  x86_unimpl("int3 @ 0x10f98d69");
L_10f98d6a:;
  /* 10f98d6a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98d6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98d6e jne 0x10f98d4a */
  if (!C.zf) goto L_10f98d4a;
  /* 10f98d70 jmp 0x10f98de8 */
  goto L_10f98de8;
L_10f98d72:;
  /* 10f98d72 push 0x10fbe9dc */
  push32((uint32_t)(0x10fbe9dcu));
  /* 10f98d77 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98d7c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d80 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98d84 call 0x10f96bd0 */
  push32(0x10f98d89u); f_10f96bd0();
  /* 10f98d89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98d8c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98d8f jne 0x10f98d92 */
  if (!C.zf) goto L_10f98d92;
  /* 10f98d91 int3  */
  x86_unimpl("int3 @ 0x10f98d91");
L_10f98d92:;
  /* 10f98d92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98d96 jne 0x10f98d72 */
  if (!C.zf) goto L_10f98d72;
  /* 10f98d98 jmp 0x10f98de8 */
  goto L_10f98de8;
L_10f98d9a:;
  /* 10f98d9a push 0x10fbe9b8 */
  push32((uint32_t)(0x10fbe9b8u));
  /* 10f98d9f push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98da4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98da6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98da8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98daa push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98dac call 0x10f96bd0 */
  push32(0x10f98db1u); f_10f96bd0();
  /* 10f98db1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98db4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98db7 jne 0x10f98dba */
  if (!C.zf) goto L_10f98dba;
  /* 10f98db9 int3  */
  x86_unimpl("int3 @ 0x10f98db9");
L_10f98dba:;
  /* 10f98dba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98dbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98dbe jne 0x10f98d9a */
  if (!C.zf) goto L_10f98d9a;
  /* 10f98dc0 jmp 0x10f98de8 */
  goto L_10f98de8;
L_10f98dc2:;
  /* 10f98dc2 push 0x10fbe98c */
  push32((uint32_t)(0x10fbe98cu));
  /* 10f98dc7 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f98dcc push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98dce push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98dd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98dd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98dd4 call 0x10f96bd0 */
  push32(0x10f98dd9u); f_10f96bd0();
  /* 10f98dd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98ddc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98ddf jne 0x10f98de2 */
  if (!C.zf) goto L_10f98de2;
  /* 10f98de1 int3  */
  x86_unimpl("int3 @ 0x10f98de1");
L_10f98de2:;
  /* 10f98de2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98de4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98de6 jne 0x10f98dc2 */
  if (!C.zf) goto L_10f98dc2;
L_10f98de8:;
  /* 10f98de8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98dea call 0x10f9b5b0 */
  push32(0x10f98defu); f_10f9b5b0();
  /* 10f98def add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98df2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98df4 jmp 0x10f99008 */
  goto L_10f99008;
L_10f98df9:;
  /* 10f98df9 mov eax, dword ptr [0x10fc374c] */
  EAX = (r32((uint32_t)(0x10fc374c)));
  /* 10f98dfe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f98e01 jmp 0x10f98e0b */
  goto L_10f98e0b;
L_10f98e03:;
  /* 10f98e03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e06 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f98e08 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f98e0b:;
  /* 10f98e0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98e0f je 0x10f98ffb */
  if (C.zf) goto L_10f98ffb;
  /* 10f98e15 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10f98e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e1f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f98e22 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98e28 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98e2b je 0x10f98e50 */
  if (C.zf) goto L_10f98e50;
  /* 10f98e2d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e30 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98e34 je 0x10f98e50 */
  if (C.zf) goto L_10f98e50;
  /* 10f98e36 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e39 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f98e3c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98e42 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98e45 je 0x10f98e50 */
  if (C.zf) goto L_10f98e50;
  /* 10f98e47 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e4a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98e4e jne 0x10f98e68 */
  if (!C.zf) goto L_10f98e68;
L_10f98e50:;
  /* 10f98e50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e53 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f98e56 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f98e5c mov edx, dword ptr [ecx*4 + 0x10fc1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a94)));
  /* 10f98e63 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f98e66 jmp 0x10f98e6f */
  goto L_10f98e6f;
L_10f98e68:;
  /* 10f98e68 mov dword ptr [ebp - 0x14], 0x10fbe984 */
  w32((uint32_t)(EBP + -0x14), (0x10fbe984u));
L_10f98e6f:;
  /* 10f98e6f push 4 */
  push32((uint32_t)(0x4u));
  /* 10f98e71 mov al, byte ptr [0x10fc1a90] */
  AL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f98e76 push eax */
  push32((uint32_t)(EAX));
  /* 10f98e77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e7a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98e7d push ecx */
  push32((uint32_t)(ECX));
  /* 10f98e7e call 0x10f98c20 */
  push32(0x10f98e83u); f_10f98c20();
  /* 10f98e83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98e86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98e88 jne 0x10f98ec4 */
  if (!C.zf) goto L_10f98ec4;
L_10f98e8a:;
  /* 10f98e8a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e8d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98e90 push edx */
  push32((uint32_t)(EDX));
  /* 10f98e91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98e94 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f98e97 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98e98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f98e9b push edx */
  push32((uint32_t)(EDX));
  /* 10f98e9c push 0x10fbe860 */
  push32((uint32_t)(0x10fbe860u));
  /* 10f98ea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98ea5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98ea9 call 0x10f96bd0 */
  push32(0x10f98eaeu); f_10f96bd0();
  /* 10f98eae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98eb1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98eb4 jne 0x10f98eb7 */
  if (!C.zf) goto L_10f98eb7;
  /* 10f98eb6 int3  */
  x86_unimpl("int3 @ 0x10f98eb6");
L_10f98eb7:;
  /* 10f98eb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98eb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98ebb jne 0x10f98e8a */
  if (!C.zf) goto L_10f98e8a;
  /* 10f98ebd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f98ec4:;
  /* 10f98ec4 push 4 */
  push32((uint32_t)(0x4u));
  /* 10f98ec6 mov cl, byte ptr [0x10fc1a90] */
  CL = (r8((uint32_t)(0x10fc1a90)));
  /* 10f98ecc push ecx */
  push32((uint32_t)(ECX));
  /* 10f98ecd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98ed0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f98ed3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98ed6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10f98eda push edx */
  push32((uint32_t)(EDX));
  /* 10f98edb call 0x10f98c20 */
  push32(0x10f98ee0u); f_10f98c20();
  /* 10f98ee0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98ee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98ee5 jne 0x10f98f21 */
  if (!C.zf) goto L_10f98f21;
L_10f98ee7:;
  /* 10f98ee7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98eea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98eed push eax */
  push32((uint32_t)(EAX));
  /* 10f98eee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98ef1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f98ef4 push edx */
  push32((uint32_t)(EDX));
  /* 10f98ef5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f98ef8 push eax */
  push32((uint32_t)(EAX));
  /* 10f98ef9 push 0x10fbe834 */
  push32((uint32_t)(0x10fbe834u));
  /* 10f98efe push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f06 call 0x10f96bd0 */
  push32(0x10f98f0bu); f_10f96bd0();
  /* 10f98f0b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98f0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98f11 jne 0x10f98f14 */
  if (!C.zf) goto L_10f98f14;
  /* 10f98f13 int3  */
  x86_unimpl("int3 @ 0x10f98f13");
L_10f98f14:;
  /* 10f98f14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f98f16 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f98f18 jne 0x10f98ee7 */
  if (!C.zf) goto L_10f98ee7;
  /* 10f98f1a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f98f21:;
  /* 10f98f21 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f24 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98f28 jne 0x10f98f7a */
  if (!C.zf) goto L_10f98f7a;
  /* 10f98f2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f2d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f98f30 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98f31 mov dl, byte ptr [0x10fc1a91] */
  DL = (r8((uint32_t)(0x10fc1a91)));
  /* 10f98f37 push edx */
  push32((uint32_t)(EDX));
  /* 10f98f38 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f3b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98f3e push eax */
  push32((uint32_t)(EAX));
  /* 10f98f3f call 0x10f98c20 */
  push32(0x10f98f44u); f_10f98c20();
  /* 10f98f44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98f47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98f49 jne 0x10f98f7a */
  if (!C.zf) goto L_10f98f7a;
L_10f98f4b:;
  /* 10f98f4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f4e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98f51 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98f52 push 0x10fbe958 */
  push32((uint32_t)(0x10fbe958u));
  /* 10f98f57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f5b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f5d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98f5f call 0x10f96bd0 */
  push32(0x10f98f64u); f_10f96bd0();
  /* 10f98f64 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98f67 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98f6a jne 0x10f98f6d */
  if (!C.zf) goto L_10f98f6d;
  /* 10f98f6c int3  */
  x86_unimpl("int3 @ 0x10f98f6c");
L_10f98f6d:;
  /* 10f98f6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98f71 jne 0x10f98f4b */
  if (!C.zf) goto L_10f98f4b;
  /* 10f98f73 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f98f7a:;
  /* 10f98f7a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98f7e jne 0x10f98ff6 */
  if (!C.zf) goto L_10f98ff6;
  /* 10f98f80 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f83 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98f87 je 0x10f98fbc */
  if (C.zf) goto L_10f98fbc;
L_10f98f89:;
  /* 10f98f89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f8c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10f98f8f push edx */
  push32((uint32_t)(EDX));
  /* 10f98f90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98f93 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f98f96 push ecx */
  push32((uint32_t)(ECX));
  /* 10f98f97 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f98f9a push edx */
  push32((uint32_t)(EDX));
  /* 10f98f9b push 0x10fbe938 */
  push32((uint32_t)(0x10fbe938u));
  /* 10f98fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fa4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fa8 call 0x10f96bd0 */
  push32(0x10f98fadu); f_10f96bd0();
  /* 10f98fad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98fb0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98fb3 jne 0x10f98fb6 */
  if (!C.zf) goto L_10f98fb6;
  /* 10f98fb5 int3  */
  x86_unimpl("int3 @ 0x10f98fb5");
L_10f98fb6:;
  /* 10f98fb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f98fb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f98fba jne 0x10f98f89 */
  if (!C.zf) goto L_10f98f89;
L_10f98fbc:;
  /* 10f98fbc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98fbf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f98fc2 push edx */
  push32((uint32_t)(EDX));
  /* 10f98fc3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f98fc6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98fc9 push eax */
  push32((uint32_t)(EAX));
  /* 10f98fca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f98fcd push ecx */
  push32((uint32_t)(ECX));
  /* 10f98fce push 0x10fbe90c */
  push32((uint32_t)(0x10fbe90cu));
  /* 10f98fd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f98fdb call 0x10f96bd0 */
  push32(0x10f98fe0u); f_10f96bd0();
  /* 10f98fe0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f98fe3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f98fe6 jne 0x10f98fe9 */
  if (!C.zf) goto L_10f98fe9;
  /* 10f98fe8 int3  */
  x86_unimpl("int3 @ 0x10f98fe8");
L_10f98fe9:;
  /* 10f98fe9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f98feb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f98fed jne 0x10f98fbc */
  if (!C.zf) goto L_10f98fbc;
  /* 10f98fef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f98ff6:;
  /* 10f98ff6 jmp 0x10f98e03 */
  goto L_10f98e03;
L_10f98ffb:;
  /* 10f98ffb push 9 */
  push32((uint32_t)(0x9u));
  /* 10f98ffd call 0x10f9b5b0 */
  push32(0x10f99002u); f_10f9b5b0();
  /* 10f99002 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f99008:;
  /* 10f99008 pop edi */
  EDI = (pop32());
  /* 10f99009 pop esi */
  ESI = (pop32());
  /* 10f9900a pop ebx */
  EBX = (pop32());
  /* 10f9900b mov esp, ebp */
  ESP = (EBP);
  /* 10f9900d pop ebp */
  EBP = (pop32());
  /* 10f9900e ret  */
  ESPCHK(0x10f98cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009020 @ 0x10f99020 (34 bytes, 13 insns) */
void f_10f99020(void) {
  FTRACE(0x10f99020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99020 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99021 mov ebp, esp */
  EBP = (ESP);
  /* 10f99023 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99024 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f99029 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9902c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99030 je 0x10f9903b */
  if (C.zf) goto L_10f9903b;
  /* 10f99032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99035 mov dword ptr [0x10fc1a84], ecx */
  w32((uint32_t)(0x10fc1a84), (ECX));
L_10f9903b:;
  /* 10f9903b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9903e mov esp, ebp */
  ESP = (EBP);
  /* 10f99040 pop ebp */
  EBP = (pop32());
  /* 10f99041 ret  */
  ESPCHK(0x10f99020u, _esp0);
  ESP += 4; return;
}

/* FUN_10009050 @ 0x10f99050 (103 bytes, 38 insns) */
void f_10f99050(void) {
  FTRACE(0x10f99050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99050 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99051 mov ebp, esp */
  EBP = (ESP);
  /* 10f99053 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99054 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f99059 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10f9905c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9905e jne 0x10f99062 */
  if (!C.zf) goto L_10f99062;
  /* 10f99060 jmp 0x10f990b3 */
  goto L_10f990b3;
L_10f99062:;
  /* 10f99062 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99064 call 0x10f9b510 */
  push32(0x10f99069u); f_10f9b510();
  /* 10f99069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9906c mov ecx, dword ptr [0x10fc374c] */
  ECX = (r32((uint32_t)(0x10fc374c)));
  /* 10f99072 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f99075 jmp 0x10f9907f */
  goto L_10f9907f;
L_10f99077:;
  /* 10f99077 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9907a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9907c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9907f:;
  /* 10f9907f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99083 je 0x10f990a9 */
  if (C.zf) goto L_10f990a9;
  /* 10f99085 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99088 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f9908b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f99091 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99094 jne 0x10f990a7 */
  if (!C.zf) goto L_10f990a7;
  /* 10f99096 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99099 push eax */
  push32((uint32_t)(EAX));
  /* 10f9909a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9909d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f990a0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f990a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10f990a4u);
  /* 10f990a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f990a7:;
  /* 10f990a7 jmp 0x10f99077 */
  goto L_10f99077;
L_10f990a9:;
  /* 10f990a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f990ab call 0x10f9b5b0 */
  push32(0x10f990b0u); f_10f9b5b0();
  /* 10f990b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f990b3:;
  /* 10f990b3 mov esp, ebp */
  ESP = (EBP);
  /* 10f990b5 pop ebp */
  EBP = (pop32());
  /* 10f990b6 ret  */
  ESPCHK(0x10f99050u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10f990c0 (75 bytes, 28 insns) */
void f_10f990c0(void) {
  FTRACE(0x10f990c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f990c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f990c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f990c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f990c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f990c8 je 0x10f990fd */
  if (C.zf) goto L_10f990fd;
  /* 10f990ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f990cd push eax */
  push32((uint32_t)(EAX));
  /* 10f990ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f990d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f990d2 call dword ptr [0x10fc6378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6378))), 0x10f990d8u);
  /* 10f990d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f990da jne 0x10f990fd */
  if (!C.zf) goto L_10f990fd;
  /* 10f990dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f990e0 je 0x10f990f4 */
  if (C.zf) goto L_10f990f4;
  /* 10f990e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f990e5 push edx */
  push32((uint32_t)(EDX));
  /* 10f990e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f990e9 push eax */
  push32((uint32_t)(EAX));
  /* 10f990ea call dword ptr [0x10fc6374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6374))), 0x10f990f0u);
  /* 10f990f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f990f2 jne 0x10f990fd */
  if (!C.zf) goto L_10f990fd;
L_10f990f4:;
  /* 10f990f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f990fb jmp 0x10f99104 */
  goto L_10f99104;
L_10f990fd:;
  /* 10f990fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f99104:;
  /* 10f99104 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99107 mov esp, ebp */
  ESP = (EBP);
  /* 10f99109 pop ebp */
  EBP = (pop32());
  /* 10f9910a ret  */
  ESPCHK(0x10f990c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x10f99110 (134 bytes, 50 insns) */
void f_10f99110(void) {
  FTRACE(0x10f99110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99110 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99111 mov ebp, esp */
  EBP = (ESP);
  /* 10f99113 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99114 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99118 jne 0x10f9911e */
  if (!C.zf) goto L_10f9911e;
  /* 10f9911a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9911c jmp 0x10f99192 */
  goto L_10f99192;
L_10f9911e:;
  /* 10f9911e push 1 */
  push32((uint32_t)(0x1u));
  /* 10f99120 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10f99122 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99125 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99128 push eax */
  push32((uint32_t)(EAX));
  /* 10f99129 call 0x10f990c0 */
  push32(0x10f9912eu); f_10f990c0();
  /* 10f9912e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99133 jne 0x10f99139 */
  if (!C.zf) goto L_10f99139;
  /* 10f99135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99137 jmp 0x10f99192 */
  goto L_10f99192;
L_10f99139:;
  /* 10f99139 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9913c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9913f push ecx */
  push32((uint32_t)(ECX));
  /* 10f99140 call 0x10f9be10 */
  push32(0x10f99145u); f_10f9be10();
  /* 10f99145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99148 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9914b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9914f je 0x10f99166 */
  if (C.zf) goto L_10f99166;
  /* 10f99151 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99154 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99157 push edx */
  push32((uint32_t)(EDX));
  /* 10f99158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9915b push eax */
  push32((uint32_t)(EAX));
  /* 10f9915c call 0x10f9be70 */
  push32(0x10f99161u); f_10f9be70();
  /* 10f99161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99164 jmp 0x10f99192 */
  goto L_10f99192;
L_10f99166:;
  /* 10f99166 mov ecx, dword ptr [0x10fc3700] */
  ECX = (r32((uint32_t)(0x10fc3700)));
  /* 10f9916c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10f99172 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99174 je 0x10f9917d */
  if (C.zf) goto L_10f9917d;
  /* 10f99176 mov eax, 1 */
  EAX = (0x1u);
  /* 10f9917b jmp 0x10f99192 */
  goto L_10f99192;
L_10f9917d:;
  /* 10f9917d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99180 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99183 push edx */
  push32((uint32_t)(EDX));
  /* 10f99184 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99186 mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9918b push eax */
  push32((uint32_t)(EAX));
  /* 10f9918c call dword ptr [0x10fc637c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc637c))), 0x10f99192u);
L_10f99192:;
  /* 10f99192 mov esp, ebp */
  ESP = (EBP);
  /* 10f99194 pop ebp */
  EBP = (pop32());
  /* 10f99195 ret  */
  ESPCHK(0x10f99110u, _esp0);
  ESP += 4; return;
}

/* FUN_100091a0 @ 0x10f991a0 (227 bytes, 80 insns) */
void f_10f991a0(void) {
  FTRACE(0x10f991a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f991a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f991a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f991a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f991a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f991a7 push eax */
  push32((uint32_t)(EAX));
  /* 10f991a8 call 0x10f99110 */
  push32(0x10f991adu); f_10f99110();
  /* 10f991ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f991b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f991b2 jne 0x10f991bb */
  if (!C.zf) goto L_10f991bb;
  /* 10f991b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f991b6 jmp 0x10f9927f */
  goto L_10f9927f;
L_10f991bb:;
  /* 10f991bb push 9 */
  push32((uint32_t)(0x9u));
  /* 10f991bd call 0x10f9b510 */
  push32(0x10f991c2u); f_10f9b510();
  /* 10f991c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f991c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f991c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f991cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f991ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f991d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f991d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f991d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f991dc je 0x10f99200 */
  if (C.zf) goto L_10f99200;
  /* 10f991de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f991e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f991e5 je 0x10f99200 */
  if (C.zf) goto L_10f99200;
  /* 10f991e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f991ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f991ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f991f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f991f5 je 0x10f99200 */
  if (C.zf) goto L_10f99200;
  /* 10f991f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f991fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f991fe jne 0x10f99273 */
  if (!C.zf) goto L_10f99273;
L_10f99200:;
  /* 10f99200 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f99202 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99205 push edx */
  push32((uint32_t)(EDX));
  /* 10f99206 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99209 push eax */
  push32((uint32_t)(EAX));
  /* 10f9920a call 0x10f990c0 */
  push32(0x10f9920fu); f_10f990c0();
  /* 10f9920f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99212 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99214 je 0x10f99273 */
  if (C.zf) goto L_10f99273;
  /* 10f99216 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99219 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f9921c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9921f jne 0x10f99273 */
  if (!C.zf) goto L_10f99273;
  /* 10f99221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99224 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f99227 cmp ecx, dword ptr [0x10fc1a88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc1a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9922d jg 0x10f99273 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f99273;
  /* 10f9922f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99233 je 0x10f99240 */
  if (C.zf) goto L_10f99240;
  /* 10f99235 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99238 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9923b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10f9923e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f99240:;
  /* 10f99240 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99244 je 0x10f99251 */
  if (C.zf) goto L_10f99251;
  /* 10f99246 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f99249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9924c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9924f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f99251:;
  /* 10f99251 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99255 je 0x10f99262 */
  if (C.zf) goto L_10f99262;
  /* 10f99257 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9925a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9925d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f99260 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f99262:;
  /* 10f99262 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99264 call 0x10f9b5b0 */
  push32(0x10f99269u); f_10f9b5b0();
  /* 10f99269 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9926c mov eax, 1 */
  EAX = (0x1u);
  /* 10f99271 jmp 0x10f9927f */
  goto L_10f9927f;
L_10f99273:;
  /* 10f99273 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99275 call 0x10f9b5b0 */
  push32(0x10f9927au); f_10f9b5b0();
  /* 10f9927a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9927d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9927f:;
  /* 10f9927f mov esp, ebp */
  ESP = (EBP);
  /* 10f99281 pop ebp */
  EBP = (pop32());
  /* 10f99282 ret  */
  ESPCHK(0x10f991a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009290 @ 0x10f99290 (28 bytes, 11 insns) */
void f_10f99290(void) {
  FTRACE(0x10f99290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99290 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99291 mov ebp, esp */
  EBP = (ESP);
  /* 10f99293 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99294 mov eax, dword ptr [0x10fc50b8] */
  EAX = (r32((uint32_t)(0x10fc50b8)));
  /* 10f99299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9929c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9929f mov dword ptr [0x10fc50b8], ecx */
  w32((uint32_t)(0x10fc50b8), (ECX));
  /* 10f992a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f992a8 mov esp, ebp */
  ESP = (EBP);
  /* 10f992aa pop ebp */
  EBP = (pop32());
  /* 10f992ab ret  */
  ESPCHK(0x10f99290u, _esp0);
  ESP += 4; return;
}

/* FUN_100092b0 @ 0x10f992b0 (362 bytes, 116 insns) */
void f_10f992b0(void) {
  FTRACE(0x10f992b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f992b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f992b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f992b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f992b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f992b7 push esi */
  push32((uint32_t)(ESI));
  /* 10f992b8 push edi */
  push32((uint32_t)(EDI));
  /* 10f992b9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f992bd jne 0x10f992ea */
  if (!C.zf) goto L_10f992ea;
L_10f992bf:;
  /* 10f992bf push 0x10fbea6c */
  push32((uint32_t)(0x10fbea6cu));
  /* 10f992c4 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f992c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f992cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10f992cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f992cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f992d1 call 0x10f96bd0 */
  push32(0x10f992d6u); f_10f96bd0();
  /* 10f992d6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f992d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f992dc jne 0x10f992df */
  if (!C.zf) goto L_10f992df;
  /* 10f992de int3  */
  x86_unimpl("int3 @ 0x10f992de");
L_10f992df:;
  /* 10f992df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f992e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f992e3 jne 0x10f992bf */
  if (!C.zf) goto L_10f992bf;
  /* 10f992e5 jmp 0x10f99413 */
  goto L_10f99413;
L_10f992ea:;
  /* 10f992ea push 9 */
  push32((uint32_t)(0x9u));
  /* 10f992ec call 0x10f9b510 */
  push32(0x10f992f1u); f_10f9b510();
  /* 10f992f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f992f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f992f7 mov edx, dword ptr [0x10fc374c] */
  EDX = (r32((uint32_t)(0x10fc374c)));
  /* 10f992fd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f992ff mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f99306 jmp 0x10f99311 */
  goto L_10f99311;
L_10f99308:;
  /* 10f99308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9930b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9930e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f99311:;
  /* 10f99311 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99315 jge 0x10f99335 */
  if ((C.sf==C.of)) goto L_10f99335;
  /* 10f99317 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9931a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9931d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10f99325 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99328 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9932b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10f99333 jmp 0x10f99308 */
  goto L_10f99308;
L_10f99335:;
  /* 10f99335 mov edx, dword ptr [0x10fc374c] */
  EDX = (r32((uint32_t)(0x10fc374c)));
  /* 10f9933b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10f9933e jmp 0x10f99348 */
  goto L_10f99348;
L_10f99340:;
  /* 10f99340 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99343 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f99345 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f99348:;
  /* 10f99348 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9934c je 0x10f993f1 */
  if (C.zf) goto L_10f993f1;
  /* 10f99352 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99355 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f99358 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9935d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9935f jl 0x10f993c7 */
  if ((C.sf!=C.of)) goto L_10f993c7;
  /* 10f99361 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99364 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f99367 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9936d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99370 jge 0x10f993c7 */
  if ((C.sf==C.of)) goto L_10f993c7;
  /* 10f99372 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99375 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f99378 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9937e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99381 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10f99385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99388 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9938b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f9938e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f99394 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99397 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10f9939b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9939e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f993a1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f993a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f993a9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10f993ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f993b0 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f993b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f993b6 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f993b9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f993be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f993c1 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10f993c5 jmp 0x10f993ec */
  goto L_10f993ec;
L_10f993c7:;
  /* 10f993c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f993ca push edx */
  push32((uint32_t)(EDX));
  /* 10f993cb push 0x10fbea48 */
  push32((uint32_t)(0x10fbea48u));
  /* 10f993d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f993d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f993d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f993d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f993d8 call 0x10f96bd0 */
  push32(0x10f993ddu); f_10f96bd0();
  /* 10f993dd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f993e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f993e3 jne 0x10f993e6 */
  if (!C.zf) goto L_10f993e6;
  /* 10f993e5 int3  */
  x86_unimpl("int3 @ 0x10f993e5");
L_10f993e6:;
  /* 10f993e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f993e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f993ea jne 0x10f993c7 */
  if (!C.zf) goto L_10f993c7;
L_10f993ec:;
  /* 10f993ec jmp 0x10f99340 */
  goto L_10f99340;
L_10f993f1:;
  /* 10f993f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f993f4 mov edx, dword ptr [0x10fc3754] */
  EDX = (r32((uint32_t)(0x10fc3754)));
  /* 10f993fa mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10f993fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99400 mov ecx, dword ptr [0x10fc3748] */
  ECX = (r32((uint32_t)(0x10fc3748)));
  /* 10f99406 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10f99409 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9940b call 0x10f9b5b0 */
  push32(0x10f99410u); f_10f9b5b0();
  /* 10f99410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f99413:;
  /* 10f99413 pop edi */
  EDI = (pop32());
  /* 10f99414 pop esi */
  ESI = (pop32());
  /* 10f99415 pop ebx */
  EBX = (pop32());
  /* 10f99416 mov esp, ebp */
  ESP = (EBP);
  /* 10f99418 pop ebp */
  EBP = (pop32());
  /* 10f99419 ret  */
  ESPCHK(0x10f992b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009420 @ 0x10f99420 (291 bytes, 95 insns) */
void f_10f99420(void) {
  FTRACE(0x10f99420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99420 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99421 mov ebp, esp */
  EBP = (ESP);
  /* 10f99423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99426 push ebx */
  push32((uint32_t)(EBX));
  /* 10f99427 push esi */
  push32((uint32_t)(ESI));
  /* 10f99428 push edi */
  push32((uint32_t)(EDI));
  /* 10f99429 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f99430 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99434 je 0x10f99442 */
  if (C.zf) goto L_10f99442;
  /* 10f99436 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9943a je 0x10f99442 */
  if (C.zf) goto L_10f99442;
  /* 10f9943c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99440 jne 0x10f99470 */
  if (!C.zf) goto L_10f99470;
L_10f99442:;
  /* 10f99442 push 0x10fbea94 */
  push32((uint32_t)(0x10fbea94u));
  /* 10f99447 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f9944c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9944e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99450 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99452 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99454 call 0x10f96bd0 */
  push32(0x10f99459u); f_10f96bd0();
  /* 10f99459 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9945c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9945f jne 0x10f99462 */
  if (!C.zf) goto L_10f99462;
  /* 10f99461 int3  */
  x86_unimpl("int3 @ 0x10f99461");
L_10f99462:;
  /* 10f99462 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99464 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99466 jne 0x10f99442 */
  if (!C.zf) goto L_10f99442;
  /* 10f99468 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9946b jmp 0x10f9953c */
  goto L_10f9953c;
L_10f99470:;
  /* 10f99470 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f99477 jmp 0x10f99482 */
  goto L_10f99482;
L_10f99479:;
  /* 10f99479 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9947c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9947f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f99482:;
  /* 10f99482 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99486 jge 0x10f9950c */
  if ((C.sf==C.of)) goto L_10f9950c;
  /* 10f9948c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9948f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99492 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99495 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99498 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10f9949c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f994a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f994a6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10f994aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994ad mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f994b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994b3 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10f994b6 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10f994ba sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f994be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f994c4 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10f994c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f994ce cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f994d3 jne 0x10f994e2 */
  if (!C.zf) goto L_10f994e2;
  /* 10f994d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f994d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f994db cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f994e0 je 0x10f99507 */
  if (C.zf) goto L_10f99507;
L_10f994e2:;
  /* 10f994e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f994e6 je 0x10f99507 */
  if (C.zf) goto L_10f99507;
  /* 10f994e8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f994ec jne 0x10f99500 */
  if (!C.zf) goto L_10f99500;
  /* 10f994ee cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f994f2 jne 0x10f99507 */
  if (!C.zf) goto L_10f99507;
  /* 10f994f4 mov eax, dword ptr [0x10fc1a84] */
  EAX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f994f9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10f994fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f994fe je 0x10f99507 */
  if (C.zf) goto L_10f99507;
L_10f99500:;
  /* 10f99500 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10f99507:;
  /* 10f99507 jmp 0x10f99479 */
  goto L_10f99479;
L_10f9950c:;
  /* 10f9950c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9950f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99512 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10f99515 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99518 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9951b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10f9951e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99521 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99524 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10f99527 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9952a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9952d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10f99530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99533 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f99539 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10f9953c:;
  /* 10f9953c pop edi */
  EDI = (pop32());
  /* 10f9953d pop esi */
  ESI = (pop32());
  /* 10f9953e pop ebx */
  EBX = (pop32());
  /* 10f9953f mov esp, ebp */
  ESP = (EBP);
  /* 10f99541 pop ebp */
  EBP = (pop32());
  /* 10f99542 ret  */
  ESPCHK(0x10f99420u, _esp0);
  ESP += 4; return;
}

/* FUN_10009550 @ 0x10f99550 (697 bytes, 253 insns) */
void f_10f99550(void) {
  FTRACE(0x10f99550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99550 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99551 mov ebp, esp */
  EBP = (ESP);
  /* 10f99553 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99556 push ebx */
  push32((uint32_t)(EBX));
  /* 10f99557 push esi */
  push32((uint32_t)(ESI));
  /* 10f99558 push edi */
  push32((uint32_t)(EDI));
  /* 10f99559 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f99560 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99562 call 0x10f9b510 */
  push32(0x10f99567u); f_10f9b510();
  /* 10f99567 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9956a:;
  /* 10f9956a push 0x10fbeb8c */
  push32((uint32_t)(0x10fbeb8cu));
  /* 10f9956f push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f99574 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99576 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99578 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9957a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9957c call 0x10f96bd0 */
  push32(0x10f99581u); f_10f96bd0();
  /* 10f99581 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99584 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99587 jne 0x10f9958a */
  if (!C.zf) goto L_10f9958a;
  /* 10f99589 int3  */
  x86_unimpl("int3 @ 0x10f99589");
L_10f9958a:;
  /* 10f9958a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9958c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9958e jne 0x10f9956a */
  if (!C.zf) goto L_10f9956a;
  /* 10f99590 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99594 je 0x10f9959e */
  if (C.zf) goto L_10f9959e;
  /* 10f99596 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99599 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9959b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f9959e:;
  /* 10f9959e mov eax, dword ptr [0x10fc374c] */
  EAX = (r32((uint32_t)(0x10fc374c)));
  /* 10f995a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f995a6 jmp 0x10f995b0 */
  goto L_10f995b0;
L_10f995a8:;
  /* 10f995a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f995ab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f995ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f995b0:;
  /* 10f995b0 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f995b4 je 0x10f997d2 */
  if (C.zf) goto L_10f997d2;
  /* 10f995ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f995bd cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f995c0 je 0x10f997d2 */
  if (C.zf) goto L_10f997d2;
  /* 10f995c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f995c9 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f995cc and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f995d2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f995d5 je 0x10f99604 */
  if (C.zf) goto L_10f99604;
  /* 10f995d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f995da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10f995dd and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f995e3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f995e5 je 0x10f99604 */
  if (C.zf) goto L_10f99604;
  /* 10f995e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f995ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f995ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f995f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f995f5 jne 0x10f99609 */
  if (!C.zf) goto L_10f99609;
  /* 10f995f7 mov ecx, dword ptr [0x10fc1a84] */
  ECX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f995fd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10f99600 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99602 jne 0x10f99609 */
  if (!C.zf) goto L_10f99609;
L_10f99604:;
  /* 10f99604 jmp 0x10f997cd */
  goto L_10f997cd;
L_10f99609:;
  /* 10f99609 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9960c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99610 je 0x10f99682 */
  if (C.zf) goto L_10f99682;
  /* 10f99612 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99614 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f99616 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99619 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10f9961c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9961d call 0x10f990c0 */
  push32(0x10f99622u); f_10f990c0();
  /* 10f99622 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99625 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99627 jne 0x10f99653 */
  if (!C.zf) goto L_10f99653;
L_10f99629:;
  /* 10f99629 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9962c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9962f push eax */
  push32((uint32_t)(EAX));
  /* 10f99630 push 0x10fbeb78 */
  push32((uint32_t)(0x10fbeb78u));
  /* 10f99635 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99637 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99639 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9963b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9963d call 0x10f96bd0 */
  push32(0x10f99642u); f_10f96bd0();
  /* 10f99642 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99645 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99648 jne 0x10f9964b */
  if (!C.zf) goto L_10f9964b;
  /* 10f9964a int3  */
  x86_unimpl("int3 @ 0x10f9964a");
L_10f9964b:;
  /* 10f9964b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9964d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9964f jne 0x10f99629 */
  if (!C.zf) goto L_10f99629;
  /* 10f99651 jmp 0x10f99682 */
  goto L_10f99682;
L_10f99653:;
  /* 10f99653 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99656 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f99659 push eax */
  push32((uint32_t)(EAX));
  /* 10f9965a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9965d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f99660 push edx */
  push32((uint32_t)(EDX));
  /* 10f99661 push 0x10fbeb6c */
  push32((uint32_t)(0x10fbeb6cu));
  /* 10f99666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99668 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9966a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9966c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9966e call 0x10f96bd0 */
  push32(0x10f99673u); f_10f96bd0();
  /* 10f99673 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99676 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99679 jne 0x10f9967c */
  if (!C.zf) goto L_10f9967c;
  /* 10f9967b int3  */
  x86_unimpl("int3 @ 0x10f9967b");
L_10f9967c:;
  /* 10f9967c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9967e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99680 jne 0x10f99653 */
  if (!C.zf) goto L_10f99653;
L_10f99682:;
  /* 10f99682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99685 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10f99688 push edx */
  push32((uint32_t)(EDX));
  /* 10f99689 push 0x10fbeb64 */
  push32((uint32_t)(0x10fbeb64u));
  /* 10f9968e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99690 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99692 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99694 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99696 call 0x10f96bd0 */
  push32(0x10f9969bu); f_10f96bd0();
  /* 10f9969b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9969e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f996a1 jne 0x10f996a4 */
  if (!C.zf) goto L_10f996a4;
  /* 10f996a3 int3  */
  x86_unimpl("int3 @ 0x10f996a3");
L_10f996a4:;
  /* 10f996a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f996a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f996a8 jne 0x10f99682 */
  if (!C.zf) goto L_10f99682;
  /* 10f996aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f996ad mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f996b0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f996b6 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f996b9 jne 0x10f9972c */
  if (!C.zf) goto L_10f9972c;
L_10f996bb:;
  /* 10f996bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f996be mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f996c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f996c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f996c5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f996c8 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f996cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f996d0 push eax */
  push32((uint32_t)(EAX));
  /* 10f996d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f996d4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f996d7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f996d8 push 0x10fbeb30 */
  push32((uint32_t)(0x10fbeb30u));
  /* 10f996dd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f996df push 0 */
  push32((uint32_t)(0x0u));
  /* 10f996e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f996e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f996e5 call 0x10f96bd0 */
  push32(0x10f996eau); f_10f96bd0();
  /* 10f996ea add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f996ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f996f0 jne 0x10f996f3 */
  if (!C.zf) goto L_10f996f3;
  /* 10f996f2 int3  */
  x86_unimpl("int3 @ 0x10f996f2");
L_10f996f3:;
  /* 10f996f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f996f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f996f7 jne 0x10f996bb */
  if (!C.zf) goto L_10f996bb;
  /* 10f996f9 cmp dword ptr [0x10fc50b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99700 je 0x10f9971b */
  if (C.zf) goto L_10f9971b;
  /* 10f99702 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99705 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f99708 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99709 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9970c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9970f push edx */
  push32((uint32_t)(EDX));
  /* 10f99710 call dword ptr [0x10fc50b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc50b8))), 0x10f99716u);
  /* 10f99716 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99719 jmp 0x10f99727 */
  goto L_10f99727;
L_10f9971b:;
  /* 10f9971b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9971e push eax */
  push32((uint32_t)(EAX));
  /* 10f9971f call 0x10f99810 */
  push32(0x10f99724u); f_10f99810();
  /* 10f99724 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f99727:;
  /* 10f99727 jmp 0x10f997cd */
  goto L_10f997cd;
L_10f9972c:;
  /* 10f9972c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9972f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99733 jne 0x10f99772 */
  if (!C.zf) goto L_10f99772;
L_10f99735:;
  /* 10f99735 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99738 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9973b push eax */
  push32((uint32_t)(EAX));
  /* 10f9973c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9973f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99742 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99743 push 0x10fbeb08 */
  push32((uint32_t)(0x10fbeb08u));
  /* 10f99748 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9974a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9974c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9974e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99750 call 0x10f96bd0 */
  push32(0x10f99755u); f_10f96bd0();
  /* 10f99755 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99758 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9975b jne 0x10f9975e */
  if (!C.zf) goto L_10f9975e;
  /* 10f9975d int3  */
  x86_unimpl("int3 @ 0x10f9975d");
L_10f9975e:;
  /* 10f9975e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99760 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99762 jne 0x10f99735 */
  if (!C.zf) goto L_10f99735;
  /* 10f99764 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99767 push eax */
  push32((uint32_t)(EAX));
  /* 10f99768 call 0x10f99810 */
  push32(0x10f9976du); f_10f99810();
  /* 10f9976d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99770 jmp 0x10f997cd */
  goto L_10f997cd;
L_10f99772:;
  /* 10f99772 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99775 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10f99778 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9977e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99781 jne 0x10f997cd */
  if (!C.zf) goto L_10f997cd;
L_10f99783:;
  /* 10f99783 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99786 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10f99789 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9978a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9978d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10f99790 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f99793 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f99798 push eax */
  push32((uint32_t)(EAX));
  /* 10f99799 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9979c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9979f push ecx */
  push32((uint32_t)(ECX));
  /* 10f997a0 push 0x10fbead4 */
  push32((uint32_t)(0x10fbead4u));
  /* 10f997a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997ab push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997ad call 0x10f96bd0 */
  push32(0x10f997b2u); f_10f96bd0();
  /* 10f997b2 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f997b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f997b8 jne 0x10f997bb */
  if (!C.zf) goto L_10f997bb;
  /* 10f997ba int3  */
  x86_unimpl("int3 @ 0x10f997ba");
L_10f997bb:;
  /* 10f997bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f997bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f997bf jne 0x10f99783 */
  if (!C.zf) goto L_10f99783;
  /* 10f997c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f997c4 push eax */
  push32((uint32_t)(EAX));
  /* 10f997c5 call 0x10f99810 */
  push32(0x10f997cau); f_10f99810();
  /* 10f997ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f997cd:;
  /* 10f997cd jmp 0x10f995a8 */
  goto L_10f995a8;
L_10f997d2:;
  /* 10f997d2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f997d4 call 0x10f9b5b0 */
  push32(0x10f997d9u); f_10f9b5b0();
  /* 10f997d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f997dc:;
  /* 10f997dc push 0x10fbeabc */
  push32((uint32_t)(0x10fbeabcu));
  /* 10f997e1 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f997e6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997ea push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10f997ee call 0x10f96bd0 */
  push32(0x10f997f3u); f_10f96bd0();
  /* 10f997f3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f997f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f997f9 jne 0x10f997fc */
  if (!C.zf) goto L_10f997fc;
  /* 10f997fb int3  */
  x86_unimpl("int3 @ 0x10f997fb");
L_10f997fc:;
  /* 10f997fc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f997fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99800 jne 0x10f997dc */
  if (!C.zf) goto L_10f997dc;
  /* 10f99802 pop edi */
  EDI = (pop32());
  /* 10f99803 pop esi */
  ESI = (pop32());
  /* 10f99804 pop ebx */
  EBX = (pop32());
  /* 10f99805 mov esp, ebp */
  ESP = (EBP);
  /* 10f99807 pop ebp */
  EBP = (pop32());
  /* 10f99808 ret  */
  ESPCHK(0x10f99550u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x10f99810 (276 bytes, 89 insns) */
void f_10f99810(void) {
  FTRACE(0x10f99810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99810 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99811 mov ebp, esp */
  EBP = (ESP);
  /* 10f99813 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99816 push ebx */
  push32((uint32_t)(EBX));
  /* 10f99817 push esi */
  push32((uint32_t)(ESI));
  /* 10f99818 push edi */
  push32((uint32_t)(EDI));
  /* 10f99819 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10f99820 jmp 0x10f9982b */
  goto L_10f9982b;
L_10f99822:;
  /* 10f99822 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f99825 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99828 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10f9982b:;
  /* 10f9982b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9982e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99832 jge 0x10f9983f */
  if ((C.sf==C.of)) goto L_10f9983f;
  /* 10f99834 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99837 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10f9983a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10f9983d jmp 0x10f99846 */
  goto L_10f99846;
L_10f9983f:;
  /* 10f9983f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10f99846:;
  /* 10f99846 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f99849 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9984c jge 0x10f998ec */
  if ((C.sf==C.of)) goto L_10f998ec;
  /* 10f99852 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99855 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99858 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10f9985b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10f9985e cmp dword ptr [0x10fc1ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc1ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99865 jle 0x10f99883 */
  if ((C.zf||C.sf!=C.of)) goto L_10f99883;
  /* 10f99867 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10f9986c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f9986f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f99875 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99876 call 0x10f9db20 */
  push32(0x10f9987bu); f_10f9db20();
  /* 10f9987b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9987e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10f99881 jmp 0x10f998a0 */
  goto L_10f998a0;
L_10f99883:;
  /* 10f99883 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f99886 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9988c mov eax, dword ptr [0x10fc1c98] */
  EAX = (r32((uint32_t)(0x10fc1c98)));
  /* 10f99891 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f99893 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10f99897 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9989d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10f998a0:;
  /* 10f998a0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f998a4 je 0x10f998b4 */
  if (C.zf) goto L_10f998b4;
  /* 10f998a6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f998a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f998af mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10f998b2 jmp 0x10f998bb */
  goto L_10f998bb;
L_10f998b4:;
  /* 10f998b4 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10f998bb:;
  /* 10f998bb mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f998be mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10f998c1 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10f998c5 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10f998c8 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f998ce push edx */
  push32((uint32_t)(EDX));
  /* 10f998cf push 0x10fbebb0 */
  push32((uint32_t)(0x10fbebb0u));
  /* 10f998d4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f998d7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f998da lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10f998de push ecx */
  push32((uint32_t)(ECX));
  /* 10f998df call 0x10f9da20 */
  push32(0x10f998e4u); f_10f9da20();
  /* 10f998e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f998e7 jmp 0x10f99822 */
  goto L_10f99822;
L_10f998ec:;
  /* 10f998ec mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10f998ef mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10f998f4:;
  /* 10f998f4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10f998f7 push eax */
  push32((uint32_t)(EAX));
  /* 10f998f8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10f998fb push ecx */
  push32((uint32_t)(ECX));
  /* 10f998fc push 0x10fbeba0 */
  push32((uint32_t)(0x10fbeba0u));
  /* 10f99901 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99903 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99905 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99907 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99909 call 0x10f96bd0 */
  push32(0x10f9990eu); f_10f96bd0();
  /* 10f9990e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99911 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99914 jne 0x10f99917 */
  if (!C.zf) goto L_10f99917;
  /* 10f99916 int3  */
  x86_unimpl("int3 @ 0x10f99916");
L_10f99917:;
  /* 10f99917 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99919 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9991b jne 0x10f998f4 */
  if (!C.zf) goto L_10f998f4;
  /* 10f9991d pop edi */
  EDI = (pop32());
  /* 10f9991e pop esi */
  ESI = (pop32());
  /* 10f9991f pop ebx */
  EBX = (pop32());
  /* 10f99920 mov esp, ebp */
  ESP = (EBP);
  /* 10f99922 pop ebp */
  EBP = (pop32());
  /* 10f99923 ret  */
  ESPCHK(0x10f99810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009930 @ 0x10f99930 (116 bytes, 46 insns) */
void f_10f99930(void) {
  FTRACE(0x10f99930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99930 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99931 mov ebp, esp */
  EBP = (ESP);
  /* 10f99933 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99936 push ebx */
  push32((uint32_t)(EBX));
  /* 10f99937 push esi */
  push32((uint32_t)(ESI));
  /* 10f99938 push edi */
  push32((uint32_t)(EDI));
  /* 10f99939 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10f9993c push eax */
  push32((uint32_t)(EAX));
  /* 10f9993d call 0x10f992b0 */
  push32(0x10f99942u); f_10f992b0();
  /* 10f99942 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99945 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99949 jne 0x10f99964 */
  if (!C.zf) goto L_10f99964;
  /* 10f9994b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9994f jne 0x10f99964 */
  if (!C.zf) goto L_10f99964;
  /* 10f99951 mov ecx, dword ptr [0x10fc1a84] */
  ECX = (r32((uint32_t)(0x10fc1a84)));
  /* 10f99957 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9995a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9995c je 0x10f9999b */
  if (C.zf) goto L_10f9999b;
  /* 10f9995e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99962 je 0x10f9999b */
  if (C.zf) goto L_10f9999b;
L_10f99964:;
  /* 10f99964 push 0x10fbebb8 */
  push32((uint32_t)(0x10fbebb8u));
  /* 10f99969 push 0x10fbe584 */
  push32((uint32_t)(0x10fbe584u));
  /* 10f9996e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99970 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99972 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99974 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99976 call 0x10f96bd0 */
  push32(0x10f9997bu); f_10f96bd0();
  /* 10f9997b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9997e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99981 jne 0x10f99984 */
  if (!C.zf) goto L_10f99984;
  /* 10f99983 int3  */
  x86_unimpl("int3 @ 0x10f99983");
L_10f99984:;
  /* 10f99984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99988 jne 0x10f99964 */
  if (!C.zf) goto L_10f99964;
  /* 10f9998a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9998c call 0x10f99550 */
  push32(0x10f99991u); f_10f99550();
  /* 10f99991 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99994 mov eax, 1 */
  EAX = (0x1u);
  /* 10f99999 jmp 0x10f9999d */
  goto L_10f9999d;
L_10f9999b:;
  /* 10f9999b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9999d:;
  /* 10f9999d pop edi */
  EDI = (pop32());
  /* 10f9999e pop esi */
  ESI = (pop32());
  /* 10f9999f pop ebx */
  EBX = (pop32());
  /* 10f999a0 mov esp, ebp */
  ESP = (EBP);
  /* 10f999a2 pop ebp */
  EBP = (pop32());
  /* 10f999a3 ret  */
  ESPCHK(0x10f99930u, _esp0);
  ESP += 4; return;
}

/* FUN_100099b0 @ 0x10f999b0 (197 bytes, 79 insns) */
void f_10f999b0(void) {
  FTRACE(0x10f999b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f999b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f999b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f999b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f999b4 push ebx */
  push32((uint32_t)(EBX));
  /* 10f999b5 push esi */
  push32((uint32_t)(ESI));
  /* 10f999b6 push edi */
  push32((uint32_t)(EDI));
  /* 10f999b7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f999bb jne 0x10f999c2 */
  if (!C.zf) goto L_10f999c2;
  /* 10f999bd jmp 0x10f99a6e */
  goto L_10f99a6e;
L_10f999c2:;
  /* 10f999c2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f999c9 jmp 0x10f999d4 */
  goto L_10f999d4;
L_10f999cb:;
  /* 10f999cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f999ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f999d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f999d4:;
  /* 10f999d4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f999d8 jge 0x10f99a1e */
  if ((C.sf==C.of)) goto L_10f99a1e;
L_10f999da:;
  /* 10f999da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f999dd mov edx, dword ptr [ecx*4 + 0x10fc1a94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1a94)));
  /* 10f999e4 push edx */
  push32((uint32_t)(EDX));
  /* 10f999e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f999e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f999eb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10f999ef push edx */
  push32((uint32_t)(EDX));
  /* 10f999f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f999f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f999f6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10f999fa push edx */
  push32((uint32_t)(EDX));
  /* 10f999fb push 0x10fbec14 */
  push32((uint32_t)(0x10fbec14u));
  /* 10f99a00 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a02 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a04 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a06 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a08 call 0x10f96bd0 */
  push32(0x10f99a0du); f_10f96bd0();
  /* 10f99a0d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99a10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99a13 jne 0x10f99a16 */
  if (!C.zf) goto L_10f99a16;
  /* 10f99a15 int3  */
  x86_unimpl("int3 @ 0x10f99a15");
L_10f99a16:;
  /* 10f99a16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99a18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99a1a jne 0x10f999da */
  if (!C.zf) goto L_10f999da;
  /* 10f99a1c jmp 0x10f999cb */
  goto L_10f999cb;
L_10f99a1e:;
  /* 10f99a1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99a21 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10f99a24 push edx */
  push32((uint32_t)(EDX));
  /* 10f99a25 push 0x10fbebf0 */
  push32((uint32_t)(0x10fbebf0u));
  /* 10f99a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a32 call 0x10f96bd0 */
  push32(0x10f99a37u); f_10f96bd0();
  /* 10f99a37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99a3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99a3d jne 0x10f99a40 */
  if (!C.zf) goto L_10f99a40;
  /* 10f99a3f int3  */
  x86_unimpl("int3 @ 0x10f99a3f");
L_10f99a40:;
  /* 10f99a40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99a42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99a44 jne 0x10f99a1e */
  if (!C.zf) goto L_10f99a1e;
L_10f99a46:;
  /* 10f99a46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99a49 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10f99a4c push edx */
  push32((uint32_t)(EDX));
  /* 10f99a4d push 0x10fbebd0 */
  push32((uint32_t)(0x10fbebd0u));
  /* 10f99a52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a56 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99a5a call 0x10f96bd0 */
  push32(0x10f99a5fu); f_10f96bd0();
  /* 10f99a5f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99a62 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99a65 jne 0x10f99a68 */
  if (!C.zf) goto L_10f99a68;
  /* 10f99a67 int3  */
  x86_unimpl("int3 @ 0x10f99a67");
L_10f99a68:;
  /* 10f99a68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99a6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99a6c jne 0x10f99a46 */
  if (!C.zf) goto L_10f99a46;
L_10f99a6e:;
  /* 10f99a6e pop edi */
  EDI = (pop32());
  /* 10f99a6f pop esi */
  ESI = (pop32());
  /* 10f99a70 pop ebx */
  EBX = (pop32());
  /* 10f99a71 mov esp, ebp */
  ESP = (EBP);
  /* 10f99a73 pop ebp */
  EBP = (pop32());
  /* 10f99a74 ret  */
  ESPCHK(0x10f999b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a80 @ 0x10f99a80 (329 bytes, 102 insns) */
void f_10f99a80(void) {
  FTRACE(0x10f99a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99a81 mov ebp, esp */
  EBP = (ESP);
  /* 10f99a83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99a86 cmp dword ptr [0x10fc5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99a8d jne 0x10f99a94 */
  if (!C.zf) goto L_10f99a94;
  /* 10f99a8f call 0x10f9e3c0 */
  push32(0x10f99a94u); f_10f9e3c0();
L_10f99a94:;
  /* 10f99a94 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f99a9b mov eax, dword ptr [0x10fc36e8] */
  EAX = (r32((uint32_t)(0x10fc36e8)));
  /* 10f99aa0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f99aa3:;
  /* 10f99aa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99aa6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f99aa9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99aab je 0x10f99ad9 */
  if (C.zf) goto L_10f99ad9;
  /* 10f99aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ab0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99ab3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99ab6 je 0x10f99ac1 */
  if (C.zf) goto L_10f99ac1;
  /* 10f99ab8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99abb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99abe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f99ac1:;
  /* 10f99ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10f99ac5 call 0x10f9a940 */
  push32(0x10f99acau); f_10f9a940();
  /* 10f99aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99acd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ad0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10f99ad4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f99ad7 jmp 0x10f99aa3 */
  goto L_10f99aa3;
L_10f99ad9:;
  /* 10f99ad9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10f99adb push 0x10fbec34 */
  push32((uint32_t)(0x10fbec34u));
  /* 10f99ae0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f99ae2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99ae5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10f99aec push ecx */
  push32((uint32_t)(ECX));
  /* 10f99aed call 0x10f97b10 */
  push32(0x10f99af2u); f_10f97b10();
  /* 10f99af2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99af5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f99af8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99afb mov dword ptr [0x10fc371c], edx */
  w32((uint32_t)(0x10fc371c), (EDX));
  /* 10f99b01 cmp dword ptr [0x10fc371c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc371c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99b08 jne 0x10f99b14 */
  if (!C.zf) goto L_10f99b14;
  /* 10f99b0a push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99b0c call 0x10f96a80 */
  push32(0x10f99b11u); f_10f96a80();
  /* 10f99b11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f99b14:;
  /* 10f99b14 mov eax, dword ptr [0x10fc36e8] */
  EAX = (r32((uint32_t)(0x10fc36e8)));
  /* 10f99b19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f99b1c jmp 0x10f99b27 */
  goto L_10f99b27;
L_10f99b1e:;
  /* 10f99b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99b21 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f99b27:;
  /* 10f99b27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99b2a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99b2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99b2f je 0x10f99b97 */
  if (C.zf) goto L_10f99b97;
  /* 10f99b31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99b34 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99b35 call 0x10f9a940 */
  push32(0x10f99b3au); f_10f9a940();
  /* 10f99b3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b3d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b40 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f99b43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99b46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99b49 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99b4c je 0x10f99b95 */
  if (C.zf) goto L_10f99b95;
  /* 10f99b4e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10f99b50 push 0x10fbec34 */
  push32((uint32_t)(0x10fbec34u));
  /* 10f99b55 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f99b57 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99b5a push ecx */
  push32((uint32_t)(ECX));
  /* 10f99b5b call 0x10f97b10 */
  push32(0x10f99b60u); f_10f97b10();
  /* 10f99b60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b63 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99b66 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f99b68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99b6b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99b6e jne 0x10f99b7a */
  if (!C.zf) goto L_10f99b7a;
  /* 10f99b70 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f99b72 call 0x10f96a80 */
  push32(0x10f99b77u); f_10f96a80();
  /* 10f99b77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f99b7a:;
  /* 10f99b7a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99b7d push ecx */
  push32((uint32_t)(ECX));
  /* 10f99b7e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99b81 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f99b83 push eax */
  push32((uint32_t)(EAX));
  /* 10f99b84 call 0x10f9aac0 */
  push32(0x10f99b89u); f_10f9aac0();
  /* 10f99b89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b8c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99b8f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99b92 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10f99b95:;
  /* 10f99b95 jmp 0x10f99b1e */
  goto L_10f99b1e;
L_10f99b97:;
  /* 10f99b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f99b99 mov edx, dword ptr [0x10fc36e8] */
  EDX = (r32((uint32_t)(0x10fc36e8)));
  /* 10f99b9f push edx */
  push32((uint32_t)(EDX));
  /* 10f99ba0 call 0x10f985a0 */
  push32(0x10f99ba5u); f_10f985a0();
  /* 10f99ba5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99ba8 mov dword ptr [0x10fc36e8], 0 */
  w32((uint32_t)(0x10fc36e8), (0x0u));
  /* 10f99bb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99bb5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f99bbb mov dword ptr [0x10fc5220], 1 */
  w32((uint32_t)(0x10fc5220), (0x1u));
  /* 10f99bc5 mov esp, ebp */
  ESP = (EBP);
  /* 10f99bc7 pop ebp */
  EBP = (pop32());
  /* 10f99bc8 ret  */
  ESPCHK(0x10f99a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10009bd0 @ 0x10f99bd0 (216 bytes, 69 insns) */
void f_10f99bd0(void) {
  FTRACE(0x10f99bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10f99bd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99bd6 cmp dword ptr [0x10fc5230], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc5230))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99bdd jne 0x10f99be4 */
  if (!C.zf) goto L_10f99be4;
  /* 10f99bdf call 0x10f9e3c0 */
  push32(0x10f99be4u); f_10f9e3c0();
L_10f99be4:;
  /* 10f99be4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f99be9 push 0x10fc3758 */
  push32((uint32_t)(0x10fc3758u));
  /* 10f99bee push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99bf0 call dword ptr [0x10fc6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6334))), 0x10f99bf6u);
  /* 10f99bf6 mov dword ptr [0x10fc372c], 0x10fc3758 */
  w32((uint32_t)(0x10fc372c), (0x10fc3758u));
  /* 10f99c00 mov eax, dword ptr [0x10fc524c] */
  EAX = (r32((uint32_t)(0x10fc524c)));
  /* 10f99c05 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99c08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99c0a jne 0x10f99c17 */
  if (!C.zf) goto L_10f99c17;
  /* 10f99c0c mov edx, dword ptr [0x10fc372c] */
  EDX = (r32((uint32_t)(0x10fc372c)));
  /* 10f99c12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10f99c15 jmp 0x10f99c1f */
  goto L_10f99c1f;
L_10f99c17:;
  /* 10f99c17 mov eax, dword ptr [0x10fc524c] */
  EAX = (r32((uint32_t)(0x10fc524c)));
  /* 10f99c1c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10f99c1f:;
  /* 10f99c1f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f99c22 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f99c25 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10f99c28 push edx */
  push32((uint32_t)(EDX));
  /* 10f99c29 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f99c2c push eax */
  push32((uint32_t)(EAX));
  /* 10f99c2d push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10f99c31 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99c35 call 0x10f99cb0 */
  push32(0x10f99c3au); f_10f99cb0();
  /* 10f99c3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99c3d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10f99c42 push 0x10fbec40 */
  push32((uint32_t)(0x10fbec40u));
  /* 10f99c47 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f99c49 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99c4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99c4f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10f99c52 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99c53 call 0x10f97b10 */
  push32(0x10f99c58u); f_10f97b10();
  /* 10f99c58 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99c5b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f99c5e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99c62 jne 0x10f99c6e */
  if (!C.zf) goto L_10f99c6e;
  /* 10f99c64 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f99c66 call 0x10f96a80 */
  push32(0x10f99c6bu); f_10f96a80();
  /* 10f99c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f99c6e:;
  /* 10f99c6e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10f99c71 push edx */
  push32((uint32_t)(EDX));
  /* 10f99c72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10f99c75 push eax */
  push32((uint32_t)(EAX));
  /* 10f99c76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99c79 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99c7c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10f99c7f push eax */
  push32((uint32_t)(EAX));
  /* 10f99c80 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99c83 push ecx */
  push32((uint32_t)(ECX));
  /* 10f99c84 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99c87 push edx */
  push32((uint32_t)(EDX));
  /* 10f99c88 call 0x10f99cb0 */
  push32(0x10f99c8du); f_10f99cb0();
  /* 10f99c8d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99c90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99c93 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99c96 mov dword ptr [0x10fc3710], eax */
  w32((uint32_t)(0x10fc3710), (EAX));
  /* 10f99c9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f99c9e mov dword ptr [0x10fc3714], ecx */
  w32((uint32_t)(0x10fc3714), (ECX));
  /* 10f99ca4 mov esp, ebp */
  ESP = (EBP);
  /* 10f99ca6 pop ebp */
  EBP = (pop32());
  /* 10f99ca7 ret  */
  ESPCHK(0x10f99bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cb0 @ 0x10f99cb0 (1060 bytes, 360 insns) */
void f_10f99cb0(void) {
  FTRACE(0x10f99cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f99cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f99cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f99cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99cb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99cb9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f99cbf mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f99cc2 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10f99cc8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f99ccb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f99cce cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99cd2 je 0x10f99ce5 */
  if (C.zf) goto L_10f99ce5;
  /* 10f99cd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99cd7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99cda mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f99cdc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99cdf add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99ce2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10f99ce5:;
  /* 10f99ce5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ce8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99ceb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99cee jne 0x10f99dbd */
  if (!C.zf) goto L_10f99dbd;
L_10f99cf4:;
  /* 10f99cf4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99cf7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99cfa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f99cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99d03 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99d06 je 0x10f99d82 */
  if (C.zf) goto L_10f99d82;
  /* 10f99d08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d0b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99d0e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99d10 je 0x10f99d82 */
  if (C.zf) goto L_10f99d82;
  /* 10f99d12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d15 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99d17 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f99d19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99d1b mov al, byte ptr [edx + 0x10fc4f81] */
  AL = (r8((uint32_t)(EDX + 0x10fc4f81)));
  /* 10f99d21 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10f99d24 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99d26 je 0x10f99d57 */
  if (C.zf) goto L_10f99d57;
  /* 10f99d28 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f99d2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d30 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f99d35 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99d39 je 0x10f99d57 */
  if (C.zf) goto L_10f99d57;
  /* 10f99d3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d41 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f99d43 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f99d45 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d4b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f99d4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d54 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f99d57:;
  /* 10f99d57 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f99d5c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d5f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f99d64 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99d68 je 0x10f99d7d */
  if (C.zf) goto L_10f99d7d;
  /* 10f99d6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99d70 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f99d72 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f99d74 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d77 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d7a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f99d7d:;
  /* 10f99d7d jmp 0x10f99cf4 */
  goto L_10f99cf4;
L_10f99d82:;
  /* 10f99d82 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d85 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f99d87 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99d8a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99d8d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10f99d8f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99d93 je 0x10f99da4 */
  if (C.zf) goto L_10f99da4;
  /* 10f99d95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d98 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f99d9b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99d9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99da1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10f99da4:;
  /* 10f99da4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99da7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99daa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99dad jne 0x10f99db8 */
  if (!C.zf) goto L_10f99db8;
  /* 10f99daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99db2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99db5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f99db8:;
  /* 10f99db8 jmp 0x10f99e8c */
  goto L_10f99e8c;
L_10f99dbd:;
  /* 10f99dbd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99dc0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f99dc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99dc5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99dc8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f99dca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99dce je 0x10f99de3 */
  if (C.zf) goto L_10f99de3;
  /* 10f99dd0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99dd3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99dd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f99dd8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f99dda mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99ddd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99de0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f99de3:;
  /* 10f99de3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99de6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f99de8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10f99deb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99dee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99df1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f99df4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99df7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f99dfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99dff mov dl, byte ptr [ecx + 0x10fc4f81] */
  DL = (r8((uint32_t)(ECX + 0x10fc4f81)));
  /* 10f99e05 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10f99e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99e0a je 0x10f99e3b */
  if (C.zf) goto L_10f99e3b;
  /* 10f99e0c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99e0f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f99e11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99e14 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99e17 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f99e19 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99e1d je 0x10f99e32 */
  if (C.zf) goto L_10f99e32;
  /* 10f99e1f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99e22 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99e25 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f99e27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f99e29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99e2c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99e2f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10f99e32:;
  /* 10f99e32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99e35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99e38 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f99e3b:;
  /* 10f99e3b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99e3e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f99e44 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99e47 je 0x10f99e67 */
  if (C.zf) goto L_10f99e67;
  /* 10f99e49 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99e4c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f99e51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99e53 je 0x10f99e67 */
  if (C.zf) goto L_10f99e67;
  /* 10f99e55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99e58 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f99e5e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99e61 jne 0x10f99dbd */
  if (!C.zf) goto L_10f99dbd;
L_10f99e67:;
  /* 10f99e67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f99e6a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f99e70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99e72 jne 0x10f99e7f */
  if (!C.zf) goto L_10f99e7f;
  /* 10f99e74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99e77 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99e7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f99e7d jmp 0x10f99e8c */
  goto L_10f99e8c;
L_10f99e7f:;
  /* 10f99e7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99e83 je 0x10f99e8c */
  if (C.zf) goto L_10f99e8c;
  /* 10f99e85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99e88 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10f99e8c:;
  /* 10f99e8c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10f99e93:;
  /* 10f99e93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99e96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99e9b je 0x10f99ebe */
  if (C.zf) goto L_10f99ebe;
L_10f99e9d:;
  /* 10f99e9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ea0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f99ea3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99ea6 je 0x10f99eb3 */
  if (C.zf) goto L_10f99eb3;
  /* 10f99ea8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99eab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99eae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99eb1 jne 0x10f99ebe */
  if (!C.zf) goto L_10f99ebe;
L_10f99eb3:;
  /* 10f99eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99eb6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99eb9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f99ebc jmp 0x10f99e9d */
  goto L_10f99e9d;
L_10f99ebe:;
  /* 10f99ebe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99ec1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99ec4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99ec6 jne 0x10f99ecd */
  if (!C.zf) goto L_10f99ecd;
  /* 10f99ec8 jmp 0x10f9a0ab */
  goto L_10f9a0ab;
L_10f99ecd:;
  /* 10f99ecd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99ed1 je 0x10f99ee4 */
  if (C.zf) goto L_10f99ee4;
  /* 10f99ed3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99ed6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99ed9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10f99edb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f99ede add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99ee1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f99ee4:;
  /* 10f99ee4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f99ee7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f99ee9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99eec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f99eef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10f99ef1:;
  /* 10f99ef1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10f99ef8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10f99eff:;
  /* 10f99eff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99f02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99f05 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f08 jne 0x10f99f1e */
  if (!C.zf) goto L_10f99f1e;
  /* 10f99f0a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99f0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99f10 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f99f13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99f16 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99f19 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f99f1c jmp 0x10f99eff */
  goto L_10f99eff;
L_10f99f1e:;
  /* 10f99f1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99f21 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99f24 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f27 jne 0x10f99f7a */
  if (!C.zf) goto L_10f99f7a;
  /* 10f99f29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99f2c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99f2e mov ecx, 2 */
  ECX = (0x2u);
  /* 10f99f33 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f99f35 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f99f37 jne 0x10f99f72 */
  if (!C.zf) goto L_10f99f72;
  /* 10f99f39 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f3d je 0x10f99f5f */
  if (C.zf) goto L_10f99f5f;
  /* 10f99f3f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99f42 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10f99f46 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f49 jne 0x10f99f56 */
  if (!C.zf) goto L_10f99f56;
  /* 10f99f4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99f4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99f51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f99f54 jmp 0x10f99f5d */
  goto L_10f99f5d;
L_10f99f56:;
  /* 10f99f56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f99f5d:;
  /* 10f99f5d jmp 0x10f99f66 */
  goto L_10f99f66;
L_10f99f5f:;
  /* 10f99f5f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10f99f66:;
  /* 10f99f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f99f68 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f6c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10f99f6f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f99f72:;
  /* 10f99f72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99f75 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10f99f77 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10f99f7a:;
  /* 10f99f7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99f7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f99f80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f99f83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10f99f86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99f88 je 0x10f99fae */
  if (C.zf) goto L_10f99fae;
  /* 10f99f8a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99f8e je 0x10f99f9f */
  if (C.zf) goto L_10f99f9f;
  /* 10f99f90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99f93 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10f99f96 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f99f99 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99f9c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10f99f9f:;
  /* 10f99f9f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99fa2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f99fa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f99fa7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f99faa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f99fac jmp 0x10f99f7a */
  goto L_10f99f7a;
L_10f99fae:;
  /* 10f99fae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99fb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10f99fb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f99fb6 je 0x10f99fd4 */
  if (C.zf) goto L_10f99fd4;
  /* 10f99fb8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99fbc jne 0x10f99fd9 */
  if (!C.zf) goto L_10f99fd9;
  /* 10f99fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99fc1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f99fc4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99fc7 je 0x10f99fd4 */
  if (C.zf) goto L_10f99fd4;
  /* 10f99fc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99fcc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10f99fcf cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99fd2 jne 0x10f99fd9 */
  if (!C.zf) goto L_10f99fd9;
L_10f99fd4:;
  /* 10f99fd4 jmp 0x10f9a084 */
  goto L_10f9a084;
L_10f99fd9:;
  /* 10f99fd9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99fdd je 0x10f9a076 */
  if (C.zf) goto L_10f9a076;
  /* 10f99fe3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f99fe7 je 0x10f9a03d */
  if (C.zf) goto L_10f9a03d;
  /* 10f99fe9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f99fec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f99fee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f99ff0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f99ff2 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f99ff8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f99ffb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f99ffd je 0x10f9a028 */
  if (C.zf) goto L_10f9a028;
  /* 10f99fff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a005 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10f9a007 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10f9a009 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a00c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a00f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10f9a012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a015 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a018 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9a01b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a01e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9a020 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a023 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a026 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10f9a028:;
  /* 10f9a028 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a02b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a02e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f9a030 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10f9a032 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a038 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10f9a03b jmp 0x10f9a069 */
  goto L_10f9a069;
L_10f9a03d:;
  /* 10f9a03d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a040 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a042 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10f9a044 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9a046 mov cl, byte ptr [eax + 0x10fc4f81] */
  CL = (r8((uint32_t)(EAX + 0x10fc4f81)));
  /* 10f9a04c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9a04f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9a051 je 0x10f9a069 */
  if (C.zf) goto L_10f9a069;
  /* 10f9a053 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a056 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a059 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9a05c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a05f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9a061 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a064 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a067 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9a069:;
  /* 10f9a069 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a06c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9a06e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a071 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a074 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10f9a076:;
  /* 10f9a076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a079 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a07c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9a07f jmp 0x10f99ef1 */
  goto L_10f99ef1;
L_10f9a084:;
  /* 10f9a084 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a088 je 0x10f9a099 */
  if (C.zf) goto L_10f9a099;
  /* 10f9a08a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a08d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f9a090 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a093 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a096 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10f9a099:;
  /* 10f9a099 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a09c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9a09e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a0a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10f9a0a4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9a0a6 jmp 0x10f99e93 */
  goto L_10f99e93;
L_10f9a0ab:;
  /* 10f9a0ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a0af je 0x10f9a0c3 */
  if (C.zf) goto L_10f9a0c3;
  /* 10f9a0b1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a0b4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10f9a0ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a0bd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a0c0 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f9a0c3:;
  /* 10f9a0c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a0c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9a0c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a0cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a0ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9a0d0 mov esp, ebp */
  ESP = (EBP);
  /* 10f9a0d2 pop ebp */
  EBP = (pop32());
  /* 10f9a0d3 ret  */
  ESPCHK(0x10f99cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0e0 @ 0x10f9a0e0 (537 bytes, 173 insns) */
void f_10f9a0e0(void) {
  FTRACE(0x10f9a0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a0e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a0e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a0e6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10f9a0ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10f9a0f4 cmp dword ptr [0x10fc385c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc385c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a0fb jne 0x10f9a13a */
  if (!C.zf) goto L_10f9a13a;
  /* 10f9a0fd call dword ptr [0x10fc6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6390))), 0x10f9a103u);
  /* 10f9a103 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f9a106 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a10a je 0x10f9a118 */
  if (C.zf) goto L_10f9a118;
  /* 10f9a10c mov dword ptr [0x10fc385c], 1 */
  w32((uint32_t)(0x10fc385c), (0x1u));
  /* 10f9a116 jmp 0x10f9a13a */
  goto L_10f9a13a;
L_10f9a118:;
  /* 10f9a118 call dword ptr [0x10fc638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc638c))), 0x10f9a11eu);
  /* 10f9a11e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9a121 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a125 je 0x10f9a133 */
  if (C.zf) goto L_10f9a133;
  /* 10f9a127 mov dword ptr [0x10fc385c], 2 */
  w32((uint32_t)(0x10fc385c), (0x2u));
  /* 10f9a131 jmp 0x10f9a13a */
  goto L_10f9a13a;
L_10f9a133:;
  /* 10f9a133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a135 jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a13a:;
  /* 10f9a13a cmp dword ptr [0x10fc385c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc385c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a141 jne 0x10f9a23e */
  if (!C.zf) goto L_10f9a23e;
  /* 10f9a147 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a14b jne 0x10f9a163 */
  if (!C.zf) goto L_10f9a163;
  /* 10f9a14d call dword ptr [0x10fc6390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6390))), 0x10f9a153u);
  /* 10f9a153 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f9a156 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a15a jne 0x10f9a163 */
  if (!C.zf) goto L_10f9a163;
  /* 10f9a15c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a15e jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a163:;
  /* 10f9a163 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9a166 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f9a169:;
  /* 10f9a169 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a16c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a16e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f9a171 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9a173 je 0x10f9a195 */
  if (C.zf) goto L_10f9a195;
  /* 10f9a175 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a178 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a17b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9a17e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a181 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a183 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10f9a186 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9a188 jne 0x10f9a193 */
  if (!C.zf) goto L_10f9a193;
  /* 10f9a18a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a18d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a190 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f9a193:;
  /* 10f9a193 jmp 0x10f9a169 */
  goto L_10f9a169;
L_10f9a195:;
  /* 10f9a195 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a198 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a19b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10f9a19d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a1a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9a1a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a1ae push edx */
  push32((uint32_t)(EDX));
  /* 10f9a1af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9a1b2 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a1b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1b7 call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10f9a1bdu);
  /* 10f9a1bd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9a1c0 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a1c4 je 0x10f9a1e4 */
  if (C.zf) goto L_10f9a1e4;
  /* 10f9a1c6 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10f9a1c8 push 0x10fbec4c */
  push32((uint32_t)(0x10fbec4cu));
  /* 10f9a1cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9a1cf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9a1d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a1d3 call 0x10f97b10 */
  push32(0x10f9a1d8u); f_10f97b10();
  /* 10f9a1d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a1db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9a1de cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a1e2 jne 0x10f9a1f5 */
  if (!C.zf) goto L_10f9a1f5;
L_10f9a1e4:;
  /* 10f9a1e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9a1e7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a1e8 call dword ptr [0x10fc6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6384))), 0x10f9a1eeu);
  /* 10f9a1ee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a1f0 jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a1f5:;
  /* 10f9a1f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a1f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9a1fc push eax */
  push32((uint32_t)(EAX));
  /* 10f9a1fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a200 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a201 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a204 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a205 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9a208 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a209 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a20b push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a20d call dword ptr [0x10fc6388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6388))), 0x10f9a213u);
  /* 10f9a213 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9a215 jne 0x10f9a22c */
  if (!C.zf) goto L_10f9a22c;
  /* 10f9a217 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9a219 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a21c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a21d call 0x10f985a0 */
  push32(0x10f9a222u); f_10f985a0();
  /* 10f9a222 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a225 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10f9a22c:;
  /* 10f9a22c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9a22f push edx */
  push32((uint32_t)(EDX));
  /* 10f9a230 call dword ptr [0x10fc6384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6384))), 0x10f9a236u);
  /* 10f9a236 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a239 jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a23e:;
  /* 10f9a23e cmp dword ptr [0x10fc385c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10fc385c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a245 jne 0x10f9a2f3 */
  if (!C.zf) goto L_10f9a2f3;
  /* 10f9a24b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a24f jne 0x10f9a267 */
  if (!C.zf) goto L_10f9a267;
  /* 10f9a251 call dword ptr [0x10fc638c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc638c))), 0x10f9a257u);
  /* 10f9a257 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9a25a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a25e jne 0x10f9a267 */
  if (!C.zf) goto L_10f9a267;
  /* 10f9a260 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a262 jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a267:;
  /* 10f9a267 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a26a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f9a26d:;
  /* 10f9a26d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a270 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9a273 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9a275 je 0x10f9a295 */
  if (C.zf) goto L_10f9a295;
  /* 10f9a277 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a27a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a27d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9a280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a283 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10f9a286 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9a288 jne 0x10f9a293 */
  if (!C.zf) goto L_10f9a293;
  /* 10f9a28a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a28d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a290 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10f9a293:;
  /* 10f9a293 jmp 0x10f9a26d */
  goto L_10f9a26d;
L_10f9a295:;
  /* 10f9a295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a298 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a29b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a29e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f9a2a1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10f9a2a6 push 0x10fbec4c */
  push32((uint32_t)(0x10fbec4cu));
  /* 10f9a2ab push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9a2ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9a2b0 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a2b1 call 0x10f97b10 */
  push32(0x10f9a2b6u); f_10f97b10();
  /* 10f9a2b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a2b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9a2bc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a2c0 jne 0x10f9a2d0 */
  if (!C.zf) goto L_10f9a2d0;
  /* 10f9a2c2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a2c5 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a2c6 call dword ptr [0x10fc6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6358))), 0x10f9a2ccu);
  /* 10f9a2cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a2ce jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a2d0:;
  /* 10f9a2d0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9a2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a2d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a2d7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a2d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a2db push eax */
  push32((uint32_t)(EAX));
  /* 10f9a2dc call 0x10f9e3f0 */
  push32(0x10f9a2e1u); f_10f9e3f0();
  /* 10f9a2e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a2e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9a2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a2e8 call dword ptr [0x10fc6358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6358))), 0x10f9a2eeu);
  /* 10f9a2ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a2f1 jmp 0x10f9a2f5 */
  goto L_10f9a2f5;
L_10f9a2f3:;
  /* 10f9a2f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9a2f5:;
  /* 10f9a2f5 mov esp, ebp */
  ESP = (EBP);
  /* 10f9a2f7 pop ebp */
  EBP = (pop32());
  /* 10f9a2f8 ret  */
  ESPCHK(0x10f9a0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a300 @ 0x10f9a300 (77 bytes, 25 insns) */
void f_10f9a300(void) {
  FTRACE(0x10f9a300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a300 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a301 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a303 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a305 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10f9a30a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a30c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a310 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10f9a313 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a314 call dword ptr [0x10fc6394] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6394))), 0x10f9a31au);
  /* 10f9a31a mov dword ptr [0x10fc50ac], eax */
  w32((uint32_t)(0x10fc50ac), (EAX));
  /* 10f9a31f cmp dword ptr [0x10fc50ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc50ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a326 jne 0x10f9a32c */
  if (!C.zf) goto L_10f9a32c;
  /* 10f9a328 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a32a jmp 0x10f9a34b */
  goto L_10f9a34b;
L_10f9a32c:;
  /* 10f9a32c call 0x10f9bdb0 */
  push32(0x10f9a331u); f_10f9bdb0();
  /* 10f9a331 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9a333 jne 0x10f9a346 */
  if (!C.zf) goto L_10f9a346;
  /* 10f9a335 mov ecx, dword ptr [0x10fc50ac] */
  ECX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9a33b push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a33c call dword ptr [0x10fc6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6380))), 0x10f9a342u);
  /* 10f9a342 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a344 jmp 0x10f9a34b */
  goto L_10f9a34b;
L_10f9a346:;
  /* 10f9a346 mov eax, 1 */
  EAX = (0x1u);
L_10f9a34b:;
  /* 10f9a34b pop ebp */
  EBP = (pop32());
  /* 10f9a34c ret  */
  ESPCHK(0x10f9a300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a350 @ 0x10f9a350 (156 bytes, 48 insns) */
void f_10f9a350(void) {
  FTRACE(0x10f9a350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a350 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a351 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a353 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a356 mov eax, dword ptr [0x10fc50a8] */
  EAX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9a35b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9a35e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9a365 jmp 0x10f9a370 */
  goto L_10f9a370;
L_10f9a367:;
  /* 10f9a367 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a36a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a36d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f9a370:;
  /* 10f9a370 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a373 cmp edx, dword ptr [0x10fc50a4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc50a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a379 jge 0x10f9a3c6 */
  if ((C.sf==C.of)) goto L_10f9a3c6;
  /* 10f9a37b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10f9a380 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10f9a385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a388 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10f9a38b push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a38c call dword ptr [0x10fc639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc639c))), 0x10f9a392u);
  /* 10f9a392 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10f9a397 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a399 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a39c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10f9a39f push eax */
  push32((uint32_t)(EAX));
  /* 10f9a3a0 call dword ptr [0x10fc639c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc639c))), 0x10f9a3a6u);
  /* 10f9a3a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a3a9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10f9a3ac push edx */
  push32((uint32_t)(EDX));
  /* 10f9a3ad push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a3af mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9a3b4 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a3b5 call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9a3bbu);
  /* 10f9a3bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a3be add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a3c1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9a3c4 jmp 0x10f9a367 */
  goto L_10f9a367;
L_10f9a3c6:;
  /* 10f9a3c6 mov edx, dword ptr [0x10fc50a8] */
  EDX = (r32((uint32_t)(0x10fc50a8)));
  /* 10f9a3cc push edx */
  push32((uint32_t)(EDX));
  /* 10f9a3cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a3cf mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9a3d4 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a3d5 call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9a3dbu);
  /* 10f9a3db mov ecx, dword ptr [0x10fc50ac] */
  ECX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9a3e1 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a3e2 call dword ptr [0x10fc6380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6380))), 0x10f9a3e8u);
  /* 10f9a3e8 mov esp, ebp */
  ESP = (EBP);
  /* 10f9a3ea pop ebp */
  EBP = (pop32());
  /* 10f9a3eb ret  */
  ESPCHK(0x10f9a350u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10f9a3f0 (73 bytes, 19 insns) */
void f_10f9a3f0(void) {
  FTRACE(0x10f9a3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a3f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a3f3 cmp dword ptr [0x10fc36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a3fa je 0x10f9a40e */
  if (C.zf) goto L_10f9a40e;
  /* 10f9a3fc cmp dword ptr [0x10fc36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a403 jne 0x10f9a437 */
  if (!C.zf) goto L_10f9a437;
  /* 10f9a405 cmp dword ptr [0x10fc36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a40c jne 0x10f9a437 */
  if (!C.zf) goto L_10f9a437;
L_10f9a40e:;
  /* 10f9a40e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10f9a413 call 0x10f9a440 */
  push32(0x10f9a418u); f_10f9a440();
  /* 10f9a418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a41b cmp dword ptr [0x10fc3860], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3860))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a422 je 0x10f9a42a */
  if (C.zf) goto L_10f9a42a;
  /* 10f9a424 call dword ptr [0x10fc3860] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc3860))), 0x10f9a42au);
L_10f9a42a:;
  /* 10f9a42a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f9a42f call 0x10f9a440 */
  push32(0x10f9a434u); f_10f9a440();
  /* 10f9a434 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9a437:;
  /* 10f9a437 pop ebp */
  EBP = (pop32());
  /* 10f9a438 ret  */
  ESPCHK(0x10f9a3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a440 @ 0x10f9a440 (447 bytes, 131 insns) */
void f_10f9a440(void) {
  FTRACE(0x10f9a440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a440 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a441 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a443 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a449 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9a44a push esi */
  push32((uint32_t)(ESI));
  /* 10f9a44b push edi */
  push32((uint32_t)(EDI));
  /* 10f9a44c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f9a453 jmp 0x10f9a45e */
  goto L_10f9a45e;
L_10f9a455:;
  /* 10f9a455 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a458 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a45b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f9a45e:;
  /* 10f9a45e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a462 jae 0x10f9a477 */
  if (!C.cf) goto L_10f9a477;
  /* 10f9a464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a467 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a46a cmp edx, dword ptr [ecx*8 + 0x10fc1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10fc1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a471 jne 0x10f9a475 */
  if (!C.zf) goto L_10f9a475;
  /* 10f9a473 jmp 0x10f9a477 */
  goto L_10f9a477;
L_10f9a475:;
  /* 10f9a475 jmp 0x10f9a455 */
  goto L_10f9a455;
L_10f9a477:;
  /* 10f9a477 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a47a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a47d cmp ecx, dword ptr [eax*8 + 0x10fc1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10fc1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a484 jne 0x10f9a5f8 */
  if (!C.zf) goto L_10f9a5f8;
  /* 10f9a48a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a491 je 0x10f9a4b4 */
  if (C.zf) goto L_10f9a4b4;
  /* 10f9a493 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a496 mov eax, dword ptr [edx*8 + 0x10fc1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10fc1ab4)));
  /* 10f9a49d push eax */
  push32((uint32_t)(EAX));
  /* 10f9a49e push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a4a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a4a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a4a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9a4a6 call 0x10f96bd0 */
  push32(0x10f9a4abu); f_10f96bd0();
  /* 10f9a4ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a4ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a4b1 jne 0x10f9a4b4 */
  if (!C.zf) goto L_10f9a4b4;
  /* 10f9a4b3 int3  */
  x86_unimpl("int3 @ 0x10f9a4b3");
L_10f9a4b4:;
  /* 10f9a4b4 cmp dword ptr [0x10fc36f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a4bb je 0x10f9a4cf */
  if (C.zf) goto L_10f9a4cf;
  /* 10f9a4bd cmp dword ptr [0x10fc36f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a4c4 jne 0x10f9a508 */
  if (!C.zf) goto L_10f9a508;
  /* 10f9a4c6 cmp dword ptr [0x10fc36f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10fc36f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a4cd jne 0x10f9a508 */
  if (!C.zf) goto L_10f9a508;
L_10f9a4cf:;
  /* 10f9a4cf push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a4d1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10f9a4d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a4d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a4d8 mov eax, dword ptr [edx*8 + 0x10fc1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10fc1ab4)));
  /* 10f9a4df push eax */
  push32((uint32_t)(EAX));
  /* 10f9a4e0 call 0x10f9a940 */
  push32(0x10f9a4e5u); f_10f9a940();
  /* 10f9a4e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a4e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a4e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a4ec mov edx, dword ptr [ecx*8 + 0x10fc1ab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10fc1ab4)));
  /* 10f9a4f3 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a4f4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10f9a4f6 call dword ptr [0x10fc6318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6318))), 0x10f9a4fcu);
  /* 10f9a4fc push eax */
  push32((uint32_t)(EAX));
  /* 10f9a4fd call dword ptr [0x10fc631c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc631c))), 0x10f9a503u);
  /* 10f9a503 jmp 0x10f9a5f8 */
  goto L_10f9a5f8;
L_10f9a508:;
  /* 10f9a508 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a50f je 0x10f9a5f8 */
  if (C.zf) goto L_10f9a5f8;
  /* 10f9a515 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10f9a51a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10f9a520 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a521 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a523 call dword ptr [0x10fc6334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6334))), 0x10f9a529u);
  /* 10f9a529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9a52b jne 0x10f9a541 */
  if (!C.zf) goto L_10f9a541;
  /* 10f9a52d push 0x10fbe4b4 */
  push32((uint32_t)(0x10fbe4b4u));
  /* 10f9a532 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10f9a538 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a539 call 0x10f9aac0 */
  push32(0x10f9a53eu); f_10f9aac0();
  /* 10f9a53e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9a541:;
  /* 10f9a541 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10f9a547 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9a54a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a54d push eax */
  push32((uint32_t)(EAX));
  /* 10f9a54e call 0x10f9a940 */
  push32(0x10f9a553u); f_10f9a940();
  /* 10f9a553 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a556 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a559 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a55c jbe 0x10f9a58a */
  if ((C.cf||C.zf)) goto L_10f9a58a;
  /* 10f9a55e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10f9a564 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a565 call 0x10f9a940 */
  push32(0x10f9a56au); f_10f9a940();
  /* 10f9a56a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a56d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a570 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10f9a574 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9a577 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9a579 push 0x10fbe4b0 */
  push32((uint32_t)(0x10fbe4b0u));
  /* 10f9a57e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a581 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a582 call 0x10f9b330 */
  push32(0x10f9a587u); f_10f9b330();
  /* 10f9a587 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9a58a:;
  /* 10f9a58a push 0x10fbef08 */
  push32((uint32_t)(0x10fbef08u));
  /* 10f9a58f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f9a595 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a596 call 0x10f9aac0 */
  push32(0x10f9a59bu); f_10f9aac0();
  /* 10f9a59b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a59e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a5a1 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a5a2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10f9a5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a5a9 call 0x10f9aad0 */
  push32(0x10f9a5aeu); f_10f9aad0();
  /* 10f9a5ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a5b1 push 0x10fbe428 */
  push32((uint32_t)(0x10fbe428u));
  /* 10f9a5b6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f9a5bc push edx */
  push32((uint32_t)(EDX));
  /* 10f9a5bd call 0x10f9aad0 */
  push32(0x10f9a5c2u); f_10f9aad0();
  /* 10f9a5c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a5c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a5c8 mov ecx, dword ptr [eax*8 + 0x10fc1ab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10fc1ab4)));
  /* 10f9a5cf push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a5d0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10f9a5d6 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a5d7 call 0x10f9aad0 */
  push32(0x10f9a5dcu); f_10f9aad0();
  /* 10f9a5dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a5df push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10f9a5e4 push 0x10fbeee0 */
  push32((uint32_t)(0x10fbeee0u));
  /* 10f9a5e9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10f9a5ef push eax */
  push32((uint32_t)(EAX));
  /* 10f9a5f0 call 0x10f9b270 */
  push32(0x10f9a5f5u); f_10f9b270();
  /* 10f9a5f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9a5f8:;
  /* 10f9a5f8 pop edi */
  EDI = (pop32());
  /* 10f9a5f9 pop esi */
  ESI = (pop32());
  /* 10f9a5fa pop ebx */
  EBX = (pop32());
  /* 10f9a5fb mov esp, ebp */
  ESP = (EBP);
  /* 10f9a5fd pop ebp */
  EBP = (pop32());
  /* 10f9a5fe ret  */
  ESPCHK(0x10f9a440u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10f9a600 (80 bytes, 27 insns) */
void f_10f9a600(void) {
  FTRACE(0x10f9a600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a600 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a601 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a603 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9a60b jmp 0x10f9a616 */
  goto L_10f9a616;
L_10f9a60d:;
  /* 10f9a60d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a610 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a613 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9a616:;
  /* 10f9a616 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a61a jae 0x10f9a62f */
  if (!C.cf) goto L_10f9a62f;
  /* 10f9a61c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a61f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a622 cmp edx, dword ptr [ecx*8 + 0x10fc1ab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10fc1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a629 jne 0x10f9a62d */
  if (!C.zf) goto L_10f9a62d;
  /* 10f9a62b jmp 0x10f9a62f */
  goto L_10f9a62f;
L_10f9a62d:;
  /* 10f9a62d jmp 0x10f9a60d */
  goto L_10f9a60d;
L_10f9a62f:;
  /* 10f9a62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a632 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a635 cmp ecx, dword ptr [eax*8 + 0x10fc1ab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10fc1ab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a63c jne 0x10f9a64a */
  if (!C.zf) goto L_10f9a64a;
  /* 10f9a63e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a641 mov eax, dword ptr [edx*8 + 0x10fc1ab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10fc1ab4)));
  /* 10f9a648 jmp 0x10f9a64c */
  goto L_10f9a64c;
L_10f9a64a:;
  /* 10f9a64a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9a64c:;
  /* 10f9a64c mov esp, ebp */
  ESP = (EBP);
  /* 10f9a64e pop ebp */
  EBP = (pop32());
  /* 10f9a64f ret  */
  ESPCHK(0x10f9a600u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10f9a650 (66 bytes, 28 insns) */
void f_10f9a650(void) {
  FTRACE(0x10f9a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a650 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a651 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a653 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a657 jne 0x10f9a677 */
  if (!C.zf) goto L_10f9a677;
  /* 10f9a659 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a65d jge 0x10f9a677 */
  if ((C.sf==C.of)) goto L_10f9a677;
  /* 10f9a65f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9a661 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a664 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a665 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a668 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a66c push edx */
  push32((uint32_t)(EDX));
  /* 10f9a66d call 0x10f9a6a0 */
  push32(0x10f9a672u); f_10f9a6a0();
  /* 10f9a672 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a675 jmp 0x10f9a68d */
  goto L_10f9a68d;
L_10f9a677:;
  /* 10f9a677 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a679 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a67c push eax */
  push32((uint32_t)(EAX));
  /* 10f9a67d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a680 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a681 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a684 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a685 call 0x10f9a6a0 */
  push32(0x10f9a68au); f_10f9a6a0();
  /* 10f9a68a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9a68d:;
  /* 10f9a68d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a690 pop ebp */
  EBP = (pop32());
  /* 10f9a691 ret  */
  ESPCHK(0x10f9a650u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10f9a6a0 (194 bytes, 71 insns) */
void f_10f9a6a0(void) {
  FTRACE(0x10f9a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a6a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a6a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a6a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9a6ac cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a6b0 je 0x10f9a6c9 */
  if (C.zf) goto L_10f9a6c9;
  /* 10f9a6b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a6b5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10f9a6b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a6bb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a6be mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9a6c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a6c4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9a6c6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10f9a6c9:;
  /* 10f9a6c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10f9a6cf:;
  /* 10f9a6cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a6d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a6d4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9a6d7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9a6da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a6dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a6df div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10f9a6e2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f9a6e5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a6e9 jbe 0x10f9a701 */
  if ((C.cf||C.zf)) goto L_10f9a701;
  /* 10f9a6eb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a6ee add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a6f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a6f4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a6f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a6fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9a6ff jmp 0x10f9a715 */
  goto L_10f9a715;
L_10f9a701:;
  /* 10f9a701 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a704 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a707 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a70a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a70f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a712 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f9a715:;
  /* 10f9a715 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a719 ja 0x10f9a6cf */
  if ((!C.cf&&!C.zf)) goto L_10f9a6cf;
  /* 10f9a71b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a71e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f9a721 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a724 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a727 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9a72a:;
  /* 10f9a72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a72d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9a72f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10f9a732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a735 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a738 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9a73a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a73c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a73f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10f9a742 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f9a744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a747 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a74a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9a74d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a750 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a753 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9a756 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a759 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a75c jb 0x10f9a72a */
  if (C.cf) goto L_10f9a72a;
  /* 10f9a75e mov esp, ebp */
  ESP = (EBP);
  /* 10f9a760 pop ebp */
  EBP = (pop32());
  /* 10f9a761 ret  */
  ESPCHK(0x10f9a6a0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10f9a770 (63 bytes, 24 insns) */
void f_10f9a770(void) {
  FTRACE(0x10f9a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a770 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a771 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a773 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a774 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a778 jne 0x10f9a789 */
  if (!C.zf) goto L_10f9a789;
  /* 10f9a77a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a77e jge 0x10f9a789 */
  if ((C.sf==C.of)) goto L_10f9a789;
  /* 10f9a780 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f9a787 jmp 0x10f9a790 */
  goto L_10f9a790;
L_10f9a789:;
  /* 10f9a789 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f9a790:;
  /* 10f9a790 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a793 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a794 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a797 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a798 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a79b push edx */
  push32((uint32_t)(EDX));
  /* 10f9a79c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a79f push eax */
  push32((uint32_t)(EAX));
  /* 10f9a7a0 call 0x10f9a6a0 */
  push32(0x10f9a7a5u); f_10f9a6a0();
  /* 10f9a7a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a7a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a7ab mov esp, ebp */
  ESP = (EBP);
  /* 10f9a7ad pop ebp */
  EBP = (pop32());
  /* 10f9a7ae ret  */
  ESPCHK(0x10f9a770u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10f9a7b0 (30 bytes, 14 insns) */
void f_10f9a7b0(void) {
  FTRACE(0x10f9a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a7b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a7b8 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a7b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a7bc push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a7bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a7c0 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a7c1 call 0x10f9a6a0 */
  push32(0x10f9a7c6u); f_10f9a6a0();
  /* 10f9a7c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a7c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a7cc pop ebp */
  EBP = (pop32());
  /* 10f9a7cd ret  */
  ESPCHK(0x10f9a7b0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10f9a7d0 (72 bytes, 28 insns) */
void f_10f9a7d0(void) {
  FTRACE(0x10f9a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a7d4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a7d8 jne 0x10f9a7f1 */
  if (!C.zf) goto L_10f9a7f1;
  /* 10f9a7da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a7de jg 0x10f9a7f1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10f9a7f1;
  /* 10f9a7e0 jl 0x10f9a7e8 */
  if ((C.sf!=C.of)) goto L_10f9a7e8;
  /* 10f9a7e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a7e6 jae 0x10f9a7f1 */
  if (!C.cf) goto L_10f9a7f1;
L_10f9a7e8:;
  /* 10f9a7e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10f9a7ef jmp 0x10f9a7f8 */
  goto L_10f9a7f8;
L_10f9a7f1:;
  /* 10f9a7f1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f9a7f8:;
  /* 10f9a7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a7fb push eax */
  push32((uint32_t)(EAX));
  /* 10f9a7fc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a7ff push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a800 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a803 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a804 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a807 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a808 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a80b push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a80c call 0x10f9a820 */
  push32(0x10f9a811u); f_10f9a820();
  /* 10f9a811 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a814 mov esp, ebp */
  ESP = (EBP);
  /* 10f9a816 pop ebp */
  EBP = (pop32());
  /* 10f9a817 ret  */
  ESPCHK(0x10f9a7d0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10f9a820 (242 bytes, 91 insns) */
void f_10f9a820(void) {
  FTRACE(0x10f9a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a820 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a821 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a823 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a826 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a829 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9a82c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a830 je 0x10f9a854 */
  if (C.zf) goto L_10f9a854;
  /* 10f9a832 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a835 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10f9a838 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a83b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a83e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9a841 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a844 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9a846 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a849 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a84c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9a84e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f9a851 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10f9a854:;
  /* 10f9a854 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a857 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10f9a85a:;
  /* 10f9a85a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a85d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9a85f push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a860 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a861 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a864 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a868 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a869 call 0x10f9e7a0 */
  push32(0x10f9a86eu); f_10f9e7a0();
  /* 10f9a86e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9a871 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a876 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a877 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a87b push eax */
  push32((uint32_t)(EAX));
  /* 10f9a87c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a87f push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a880 call 0x10f9e730 */
  push32(0x10f9a885u); f_10f9e730();
  /* 10f9a885 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10f9a888 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10f9a88b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a88f jbe 0x10f9a8a7 */
  if ((C.cf||C.zf)) goto L_10f9a8a7;
  /* 10f9a891 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a894 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a897 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a89a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a89c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a89f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a8a2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9a8a5 jmp 0x10f9a8bb */
  goto L_10f9a8bb;
L_10f9a8a7:;
  /* 10f9a8a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9a8aa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a8ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a8b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8b5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a8b8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10f9a8bb:;
  /* 10f9a8bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a8bf ja 0x10f9a85a */
  if ((!C.cf&&!C.zf)) goto L_10f9a85a;
  /* 10f9a8c1 jb 0x10f9a8c9 */
  if (C.cf) goto L_10f9a8c9;
  /* 10f9a8c3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a8c7 ja 0x10f9a85a */
  if ((!C.cf&&!C.zf)) goto L_10f9a85a;
L_10f9a8c9:;
  /* 10f9a8c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8cc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10f9a8cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a8d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9a8d8:;
  /* 10f9a8d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8db mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9a8dd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10f9a8e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a8e6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9a8e8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10f9a8ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a8ed mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10f9a8f0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10f9a8f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9a8f5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a8f8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9a8fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a8fe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a901 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9a904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9a907 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a90a jb 0x10f9a8d8 */
  if (C.cf) goto L_10f9a8d8;
  /* 10f9a90c mov esp, ebp */
  ESP = (EBP);
  /* 10f9a90e pop ebp */
  EBP = (pop32());
  /* 10f9a90f ret 0x14 */
  ESPCHK(0x10f9a820u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10f9a920 (31 bytes, 15 insns) */
void f_10f9a920(void) {
  FTRACE(0x10f9a920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a920 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a921 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a923 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a925 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9a928 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a929 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a92c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9a92d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9a930 push edx */
  push32((uint32_t)(EDX));
  /* 10f9a931 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9a934 push eax */
  push32((uint32_t)(EAX));
  /* 10f9a935 call 0x10f9a820 */
  push32(0x10f9a93au); f_10f9a820();
  /* 10f9a93a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9a93d pop ebp */
  EBP = (pop32());
  /* 10f9a93e ret  */
  ESPCHK(0x10f9a920u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10f9a940 (123 bytes, 44 insns) */
void f_10f9a940(void) {
  FTRACE(0x10f9a940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a940 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9a944 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9a94a je 0x10f9a960 */
  if (C.zf) goto L_10f9a960;
L_10f9a94c:;
  /* 10f9a94c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f9a94e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f9a94f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9a951 je 0x10f9a993 */
  if (C.zf) goto L_10f9a993;
  /* 10f9a953 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9a959 jne 0x10f9a94c */
  if (!C.zf) goto L_10f9a94c;
  /* 10f9a95b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10f9a960:;
  /* 10f9a960 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f9a962 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f9a967 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a969 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a96c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9a96e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a971 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f9a976 je 0x10f9a960 */
  if (C.zf) goto L_10f9a960;
  /* 10f9a978 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f9a97b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9a97d je 0x10f9a9b1 */
  if (C.zf) goto L_10f9a9b1;
  /* 10f9a97f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f9a981 je 0x10f9a9a7 */
  if (C.zf) goto L_10f9a9a7;
  /* 10f9a983 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f9a988 je 0x10f9a99d */
  if (C.zf) goto L_10f9a99d;
  /* 10f9a98a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f9a98f je 0x10f9a993 */
  if (C.zf) goto L_10f9a993;
  /* 10f9a991 jmp 0x10f9a960 */
  goto L_10f9a960;
L_10f9a993:;
  /* 10f9a993 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10f9a996 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9a99a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a99c ret  */
  ESPCHK(0x10f9a940u, _esp0);
  ESP += 4; return;
L_10f9a99d:;
  /* 10f9a99d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10f9a9a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9a9a4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a9a6 ret  */
  ESPCHK(0x10f9a940u, _esp0);
  ESP += 4; return;
L_10f9a9a7:;
  /* 10f9a9a7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10f9a9aa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9a9ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a9b0 ret  */
  ESPCHK(0x10f9a940u, _esp0);
  ESP += 4; return;
L_10f9a9b1:;
  /* 10f9a9b1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10f9a9b4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9a9b8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a9ba ret  */
  ESPCHK(0x10f9a940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c0 @ 0x10f9a9c0 (249 bytes, 93 insns) */
void f_10f9a9c0(void) {
  FTRACE(0x10f9a9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9a9c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9a9c1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9a9c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9a9c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9a9c7 push esi */
  push32((uint32_t)(ESI));
  /* 10f9a9c8 push edi */
  push32((uint32_t)(EDI));
  /* 10f9a9c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f9a9cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10f9a9cf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10f9a9d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10f9a9d5:;
  /* 10f9a9d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a9d9 jne 0x10f9a9f9 */
  if (!C.zf) goto L_10f9a9f9;
  /* 10f9a9db push 0x10fbef40 */
  push32((uint32_t)(0x10fbef40u));
  /* 10f9a9e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9a9e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10f9a9e4 push 0x10fbef34 */
  push32((uint32_t)(0x10fbef34u));
  /* 10f9a9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9a9eb call 0x10f96bd0 */
  push32(0x10f9a9f0u); f_10f96bd0();
  /* 10f9a9f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9a9f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9a9f6 jne 0x10f9a9f9 */
  if (!C.zf) goto L_10f9a9f9;
  /* 10f9a9f8 int3  */
  x86_unimpl("int3 @ 0x10f9a9f8");
L_10f9a9f9:;
  /* 10f9a9f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9a9fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9a9fd jne 0x10f9a9d5 */
  if (!C.zf) goto L_10f9a9d5;
L_10f9a9ff:;
  /* 10f9a9ff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9aa03 jne 0x10f9aa23 */
  if (!C.zf) goto L_10f9aa23;
  /* 10f9aa05 push 0x10fbef24 */
  push32((uint32_t)(0x10fbef24u));
  /* 10f9aa0a push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9aa0c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10f9aa0e push 0x10fbef34 */
  push32((uint32_t)(0x10fbef34u));
  /* 10f9aa13 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9aa15 call 0x10f96bd0 */
  push32(0x10f9aa1au); f_10f96bd0();
  /* 10f9aa1a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aa1d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9aa20 jne 0x10f9aa23 */
  if (!C.zf) goto L_10f9aa23;
  /* 10f9aa22 int3  */
  x86_unimpl("int3 @ 0x10f9aa22");
L_10f9aa23:;
  /* 10f9aa23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9aa25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9aa27 jne 0x10f9a9ff */
  if (!C.zf) goto L_10f9a9ff;
  /* 10f9aa29 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa2c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10f9aa33 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9aa39 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9aa3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9aa42 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10f9aa44 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9aa4a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10f9aa4d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10f9aa50 push edx */
  push32((uint32_t)(EDX));
  /* 10f9aa51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9aa54 push eax */
  push32((uint32_t)(EAX));
  /* 10f9aa55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa58 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9aa59 call 0x10f9eaa0 */
  push32(0x10f9aa5eu); f_10f9eaa0();
  /* 10f9aa5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aa61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9aa64 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa67 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9aa6a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9aa6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa70 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10f9aa73 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa76 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9aa7a jl 0x10f9aa9e */
  if ((C.sf!=C.of)) goto L_10f9aa9e;
  /* 10f9aa7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa7f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9aa81 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10f9aa84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9aa86 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9aa8c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10f9aa8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa92 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9aa94 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aa97 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aa9a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10f9aa9c jmp 0x10f9aaaf */
  goto L_10f9aaaf;
L_10f9aa9e:;
  /* 10f9aa9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9aaa1 push eax */
  push32((uint32_t)(EAX));
  /* 10f9aaa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9aaa4 call 0x10f9e820 */
  push32(0x10f9aaa9u); f_10f9e820();
  /* 10f9aaa9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aaac mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10f9aaaf:;
  /* 10f9aaaf mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9aab2 pop edi */
  EDI = (pop32());
  /* 10f9aab3 pop esi */
  ESI = (pop32());
  /* 10f9aab4 pop ebx */
  EBX = (pop32());
  /* 10f9aab5 mov esp, ebp */
  ESP = (EBP);
  /* 10f9aab7 pop ebp */
  EBP = (pop32());
  /* 10f9aab8 ret  */
  ESPCHK(0x10f9a9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aac0 @ 0x10f9aac0 (7 bytes, 3 insns) */
void f_10f9aac0(void) {
  FTRACE(0x10f9aac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9aac0 push edi */
  push32((uint32_t)(EDI));
  /* 10f9aac1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9aac5 jmp 0x10f9ab31 */
  jmp_ind(0x10f9ab31u); return;
}

/* FUN_1000aad0 @ 0x10f9aad0 (224 bytes, 84 insns) */
void f_10f9aad0(void) {
  FTRACE(0x10f9aad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9aad0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9aad4 push edi */
  push32((uint32_t)(EDI));
  /* 10f9aad5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9aadb je 0x10f9aaec */
  if (C.zf) goto L_10f9aaec;
L_10f9aadd:;
  /* 10f9aadd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10f9aadf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f9aae0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9aae2 je 0x10f9ab1f */
  if (C.zf) goto L_10f9ab1f;
  /* 10f9aae4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9aaea jne 0x10f9aadd */
  if (!C.zf) goto L_10f9aadd;
L_10f9aaec:;
  /* 10f9aaec mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f9aaee mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f9aaf3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aaf5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9aaf8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9aafa add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aafd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f9ab02 je 0x10f9aaec */
  if (C.zf) goto L_10f9aaec;
  /* 10f9ab04 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f9ab07 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9ab09 je 0x10f9ab2e */
  if (C.zf) goto L_10f9ab2e;
  /* 10f9ab0b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10f9ab0d je 0x10f9ab29 */
  if (C.zf) goto L_10f9ab29;
  /* 10f9ab0f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f9ab14 je 0x10f9ab24 */
  if (C.zf) goto L_10f9ab24;
  /* 10f9ab16 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f9ab1b je 0x10f9ab1f */
  if (C.zf) goto L_10f9ab1f;
  /* 10f9ab1d jmp 0x10f9aaec */
  goto L_10f9aaec;
L_10f9ab1f:;
  /* 10f9ab1f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10f9ab22 jmp 0x10f9ab31 */
  goto L_10f9ab31;
L_10f9ab24:;
  /* 10f9ab24 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10f9ab27 jmp 0x10f9ab31 */
  goto L_10f9ab31;
L_10f9ab29:;
  /* 10f9ab29 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10f9ab2c jmp 0x10f9ab31 */
  goto L_10f9ab31;
L_10f9ab2e:;
  /* 10f9ab2e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10f9ab31:;
  /* 10f9ab31 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9ab35 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9ab3b je 0x10f9ab56 */
  if (C.zf) goto L_10f9ab56;
L_10f9ab3d:;
  /* 10f9ab3d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10f9ab3f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10f9ab40 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f9ab42 je 0x10f9aba8 */
  if (C.zf) goto L_10f9aba8;
  /* 10f9ab44 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f9ab46 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9ab47 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10f9ab4d jne 0x10f9ab3d */
  if (!C.zf) goto L_10f9ab3d;
  /* 10f9ab4f jmp 0x10f9ab56 */
  goto L_10f9ab56;
L_10f9ab51:;
  /* 10f9ab51 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9ab53 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10f9ab56:;
  /* 10f9ab56 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f9ab5b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10f9ab5d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ab5f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ab62 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9ab64 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9ab66 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ab69 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f9ab6e je 0x10f9ab51 */
  if (C.zf) goto L_10f9ab51;
  /* 10f9ab70 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f9ab72 je 0x10f9aba8 */
  if (C.zf) goto L_10f9aba8;
  /* 10f9ab74 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f9ab76 je 0x10f9ab9f */
  if (C.zf) goto L_10f9ab9f;
  /* 10f9ab78 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f9ab7e je 0x10f9ab92 */
  if (C.zf) goto L_10f9ab92;
  /* 10f9ab80 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f9ab86 je 0x10f9ab8a */
  if (C.zf) goto L_10f9ab8a;
  /* 10f9ab88 jmp 0x10f9ab51 */
  goto L_10f9ab51;
L_10f9ab8a:;
  /* 10f9ab8a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9ab8c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9ab90 pop edi */
  EDI = (pop32());
  /* 10f9ab91 ret  */
  ESPCHK(0x10f9aad0u, _esp0);
  ESP += 4; return;
L_10f9ab92:;
  /* 10f9ab92 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f9ab95 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9ab99 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10f9ab9d pop edi */
  EDI = (pop32());
  /* 10f9ab9e ret  */
  ESPCHK(0x10f9aad0u, _esp0);
  ESP += 4; return;
L_10f9ab9f:;
  /* 10f9ab9f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10f9aba2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9aba6 pop edi */
  EDI = (pop32());
  /* 10f9aba7 ret  */
  ESPCHK(0x10f9aad0u, _esp0);
  ESP += 4; return;
L_10f9aba8:;
  /* 10f9aba8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10f9abaa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9abae pop edi */
  EDI = (pop32());
  /* 10f9abaf ret  */
  ESPCHK(0x10f9aad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abb0 @ 0x10f9abb0 (243 bytes, 91 insns) */
void f_10f9abb0(void) {
  FTRACE(0x10f9abb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9abb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9abb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9abb3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9abb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10f9abb7 push esi */
  push32((uint32_t)(ESI));
  /* 10f9abb8 push edi */
  push32((uint32_t)(EDI));
  /* 10f9abb9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10f9abbc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10f9abbf:;
  /* 10f9abbf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9abc3 jne 0x10f9abe3 */
  if (!C.zf) goto L_10f9abe3;
  /* 10f9abc5 push 0x10fbef40 */
  push32((uint32_t)(0x10fbef40u));
  /* 10f9abca push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9abcc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10f9abce push 0x10fbef50 */
  push32((uint32_t)(0x10fbef50u));
  /* 10f9abd3 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9abd5 call 0x10f96bd0 */
  push32(0x10f9abdau); f_10f96bd0();
  /* 10f9abda add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9abdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9abe0 jne 0x10f9abe3 */
  if (!C.zf) goto L_10f9abe3;
  /* 10f9abe2 int3  */
  x86_unimpl("int3 @ 0x10f9abe2");
L_10f9abe3:;
  /* 10f9abe3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9abe5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9abe7 jne 0x10f9abbf */
  if (!C.zf) goto L_10f9abbf;
L_10f9abe9:;
  /* 10f9abe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9abed jne 0x10f9ac0d */
  if (!C.zf) goto L_10f9ac0d;
  /* 10f9abef push 0x10fbef24 */
  push32((uint32_t)(0x10fbef24u));
  /* 10f9abf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9abf6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10f9abf8 push 0x10fbef50 */
  push32((uint32_t)(0x10fbef50u));
  /* 10f9abfd push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9abff call 0x10f96bd0 */
  push32(0x10f9ac04u); f_10f96bd0();
  /* 10f9ac04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ac07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ac0a jne 0x10f9ac0d */
  if (!C.zf) goto L_10f9ac0d;
  /* 10f9ac0c int3  */
  x86_unimpl("int3 @ 0x10f9ac0c");
L_10f9ac0d:;
  /* 10f9ac0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ac0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9ac11 jne 0x10f9abe9 */
  if (!C.zf) goto L_10f9abe9;
  /* 10f9ac13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac16 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10f9ac1d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ac23 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10f9ac26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac29 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ac2c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10f9ac2e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac31 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ac34 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10f9ac37 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10f9ac3a push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ac3b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9ac3e push edx */
  push32((uint32_t)(EDX));
  /* 10f9ac3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac42 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ac43 call 0x10f9eaa0 */
  push32(0x10f9ac48u); f_10f9eaa0();
  /* 10f9ac48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ac4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10f9ac4e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac51 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9ac54 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ac57 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10f9ac5d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac60 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ac64 jl 0x10f9ac88 */
  if ((C.sf!=C.of)) goto L_10f9ac88;
  /* 10f9ac66 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac69 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9ac6b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10f9ac6e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ac70 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10f9ac76 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10f9ac79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9ac7e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ac81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10f9ac86 jmp 0x10f9ac99 */
  goto L_10f9ac99;
L_10f9ac88:;
  /* 10f9ac88 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10f9ac8b push edx */
  push32((uint32_t)(EDX));
  /* 10f9ac8c push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9ac8e call 0x10f9e820 */
  push32(0x10f9ac93u); f_10f9e820();
  /* 10f9ac93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ac96 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10f9ac99:;
  /* 10f9ac99 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10f9ac9c pop edi */
  EDI = (pop32());
  /* 10f9ac9d pop esi */
  ESI = (pop32());
  /* 10f9ac9e pop ebx */
  EBX = (pop32());
  /* 10f9ac9f mov esp, ebp */
  ESP = (EBP);
  /* 10f9aca1 pop ebp */
  EBP = (pop32());
  /* 10f9aca2 ret  */
  ESPCHK(0x10f9abb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb0 @ 0x10f9acb0 (47 bytes, 17 insns) */
void f_10f9acb0(void) {
  FTRACE(0x10f9acb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9acb0 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9acb1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9acb6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10f9acba jb 0x10f9acd0 */
  if (C.cf) goto L_10f9acd0;
L_10f9acbc:;
  /* 10f9acbc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9acc2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9acc7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f9acc9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9acce jae 0x10f9acbc */
  if (!C.cf) goto L_10f9acbc;
L_10f9acd0:;
  /* 10f9acd0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9acd2 mov eax, esp */
  EAX = (ESP);
  /* 10f9acd4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10f9acd6 mov esp, ecx */
  ESP = (ECX);
  /* 10f9acd8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9acda mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9acdd push eax */
  push32((uint32_t)(EAX));
  /* 10f9acde ret  */
  ESPCHK(0x10f9acb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ace0 @ 0x10f9ace0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10f9ace0(void) {
  FTRACE(0x10f9ace0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9ace0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9ace1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9ace3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ace6 push esi */
  push32((uint32_t)(ESI));
  /* 10f9ace7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9aceb je 0x10f9acf3 */
  if (C.zf) goto L_10f9acf3;
  /* 10f9aced cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9acf1 jne 0x10f9acf8 */
  if (!C.zf) goto L_10f9acf8;
L_10f9acf3:;
  /* 10f9acf3 jmp 0x10f9aec8 */
  goto L_10f9aec8;
L_10f9acf8:;
  /* 10f9acf8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9acfc je 0x10f9ad14 */
  if (C.zf) goto L_10f9ad14;
  /* 10f9acfe cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad02 je 0x10f9ad14 */
  if (C.zf) goto L_10f9ad14;
  /* 10f9ad04 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad08 je 0x10f9ad14 */
  if (C.zf) goto L_10f9ad14;
  /* 10f9ad0a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad0e jne 0x10f9adf1 */
  if (!C.zf) goto L_10f9adf1;
L_10f9ad14:;
  /* 10f9ad14 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ad16 call 0x10f9b510 */
  push32(0x10f9ad1bu); f_10f9b510();
  /* 10f9ad1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ad1e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad22 je 0x10f9ad2a */
  if (C.zf) goto L_10f9ad2a;
  /* 10f9ad24 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad28 jne 0x10f9ad6f */
  if (!C.zf) goto L_10f9ad6f;
L_10f9ad2a:;
  /* 10f9ad2a cmp dword ptr [0x10fc3874], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3874))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad31 jne 0x10f9ad6f */
  if (!C.zf) goto L_10f9ad6f;
  /* 10f9ad33 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ad35 push 0x10f9af10 */
  push32((uint32_t)(0x10f9af10u));
  /* 10f9ad3a call dword ptr [0x10fc63a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a0))), 0x10f9ad40u);
  /* 10f9ad40 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad43 jne 0x10f9ad51 */
  if (!C.zf) goto L_10f9ad51;
  /* 10f9ad45 mov dword ptr [0x10fc3874], 1 */
  w32((uint32_t)(0x10fc3874), (0x1u));
  /* 10f9ad4f jmp 0x10f9ad6f */
  goto L_10f9ad6f;
L_10f9ad51:;
  /* 10f9ad51 call dword ptr [0x10fc628c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc628c))), 0x10f9ad57u);
  /* 10f9ad57 mov esi, eax */
  ESI = (EAX);
  /* 10f9ad59 call 0x10f9f9f0 */
  push32(0x10f9ad5eu); f_10f9f9f0();
  /* 10f9ad5e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10f9ad60 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ad62 call 0x10f9b5b0 */
  push32(0x10f9ad67u); f_10f9b5b0();
  /* 10f9ad67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ad6a jmp 0x10f9aec8 */
  goto L_10f9aec8;
L_10f9ad6f:;
  /* 10f9ad6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ad72 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9ad75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9ad78 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ad7b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10f9ad7e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ad82 ja 0x10f9ade2 */
  if ((!C.cf&&!C.zf)) goto L_10f9ade2;
  /* 10f9ad84 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9ad87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9ad89 mov dl, byte ptr [eax + 0x10f9aeef] */
  DL = (r8((uint32_t)(EAX + 0x10f9aeef)));
  /* 10f9ad8f jmp dword ptr [edx*4 + 0x10f9aedb] */
  switch (EDX) {
    case 0: goto L_10f9ad96;
    case 1: goto L_10f9add0;
    case 2: goto L_10f9adaa;
    case 3: goto L_10f9adbd;
    case 4: goto L_10f9ade2;
    default: x86_unimpl("switch@0x10f9ad8f out of table"); return;
  }
L_10f9ad96:;
  /* 10f9ad96 mov ecx, dword ptr [0x10fc3864] */
  ECX = (r32((uint32_t)(0x10fc3864)));
  /* 10f9ad9c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9ad9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ada2 mov dword ptr [0x10fc3864], edx */
  w32((uint32_t)(0x10fc3864), (EDX));
  /* 10f9ada8 jmp 0x10f9ade2 */
  goto L_10f9ade2;
L_10f9adaa:;
  /* 10f9adaa mov eax, dword ptr [0x10fc3868] */
  EAX = (r32((uint32_t)(0x10fc3868)));
  /* 10f9adaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9adb2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9adb5 mov dword ptr [0x10fc3868], ecx */
  w32((uint32_t)(0x10fc3868), (ECX));
  /* 10f9adbb jmp 0x10f9ade2 */
  goto L_10f9ade2;
L_10f9adbd:;
  /* 10f9adbd mov edx, dword ptr [0x10fc386c] */
  EDX = (r32((uint32_t)(0x10fc386c)));
  /* 10f9adc3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10f9adc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9adc9 mov dword ptr [0x10fc386c], eax */
  w32((uint32_t)(0x10fc386c), (EAX));
  /* 10f9adce jmp 0x10f9ade2 */
  goto L_10f9ade2;
L_10f9add0:;
  /* 10f9add0 mov ecx, dword ptr [0x10fc3870] */
  ECX = (r32((uint32_t)(0x10fc3870)));
  /* 10f9add6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9add9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9addc mov dword ptr [0x10fc3870], edx */
  w32((uint32_t)(0x10fc3870), (EDX));
L_10f9ade2:;
  /* 10f9ade2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9ade4 call 0x10f9b5b0 */
  push32(0x10f9ade9u); f_10f9b5b0();
  /* 10f9ade9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9adec jmp 0x10f9aec3 */
  goto L_10f9aec3;
L_10f9adf1:;
  /* 10f9adf1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9adf5 je 0x10f9ae08 */
  if (C.zf) goto L_10f9ae08;
  /* 10f9adf7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9adfb je 0x10f9ae08 */
  if (C.zf) goto L_10f9ae08;
  /* 10f9adfd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ae01 je 0x10f9ae08 */
  if (C.zf) goto L_10f9ae08;
  /* 10f9ae03 jmp 0x10f9aec8 */
  goto L_10f9aec8;
L_10f9ae08:;
  /* 10f9ae08 call 0x10f97550 */
  push32(0x10f9ae0du); f_10f97550();
  /* 10f9ae0d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9ae10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ae13 cmp dword ptr [eax + 0x50], 0x10fc1c00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10fc1c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ae1a jne 0x10f9ae65 */
  if (!C.zf) goto L_10f9ae65;
  /* 10f9ae1c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10f9ae21 push 0x10fbef5c */
  push32((uint32_t)(0x10fbef5cu));
  /* 10f9ae26 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9ae28 mov ecx, dword ptr [0x10fc1c80] */
  ECX = (r32((uint32_t)(0x10fc1c80)));
  /* 10f9ae2e push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ae2f call 0x10f97b10 */
  push32(0x10f9ae34u); f_10f97b10();
  /* 10f9ae34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ae37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ae3a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10f9ae3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ae40 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ae44 je 0x10f9ae63 */
  if (C.zf) goto L_10f9ae63;
  /* 10f9ae46 mov ecx, dword ptr [0x10fc1c80] */
  ECX = (r32((uint32_t)(0x10fc1c80)));
  /* 10f9ae4c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ae4d push 0x10fc1c00 */
  push32((uint32_t)(0x10fc1c00u));
  /* 10f9ae52 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ae55 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10f9ae58 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ae59 call 0x10f9e3f0 */
  push32(0x10f9ae5eu); f_10f9e3f0();
  /* 10f9ae5e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ae61 jmp 0x10f9ae65 */
  goto L_10f9ae65;
L_10f9ae63:;
  /* 10f9ae63 jmp 0x10f9aec8 */
  goto L_10f9aec8;
L_10f9ae65:;
  /* 10f9ae65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ae68 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f9ae6b push edx */
  push32((uint32_t)(EDX));
  /* 10f9ae6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ae6f push eax */
  push32((uint32_t)(EAX));
  /* 10f9ae70 call 0x10f9b1f0 */
  push32(0x10f9ae75u); f_10f9b1f0();
  /* 10f9ae75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ae78 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9ae7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ae7f jne 0x10f9ae83 */
  if (!C.zf) goto L_10f9ae83;
  /* 10f9ae81 jmp 0x10f9aec8 */
  goto L_10f9aec8;
L_10f9ae83:;
  /* 10f9ae83 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ae86 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10f9ae89 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10f9ae8c:;
  /* 10f9ae8c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ae8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9ae92 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ae95 jne 0x10f9aec3 */
  if (!C.zf) goto L_10f9aec3;
  /* 10f9ae97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ae9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ae9d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10f9aea0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9aea3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aea6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9aea9 mov edx, dword ptr [0x10fc1c84] */
  EDX = (r32((uint32_t)(0x10fc1c84)));
  /* 10f9aeaf imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9aeb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9aeb5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10f9aeb8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9aeba cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9aebd jb 0x10f9aec1 */
  if (C.cf) goto L_10f9aec1;
  /* 10f9aebf jmp 0x10f9aec3 */
  goto L_10f9aec3;
L_10f9aec1:;
  /* 10f9aec1 jmp 0x10f9ae8c */
  goto L_10f9ae8c;
L_10f9aec3:;
  /* 10f9aec3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9aec6 jmp 0x10f9aed6 */
  goto L_10f9aed6;
L_10f9aec8:;
  /* 10f9aec8 call 0x10f9f9e0 */
  push32(0x10f9aecdu); f_10f9f9e0();
  /* 10f9aecd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10f9aed3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f9aed6:;
  /* 10f9aed6 pop esi */
  ESI = (pop32());
  /* 10f9aed7 mov esp, ebp */
  ESP = (EBP);
  /* 10f9aed9 pop ebp */
  EBP = (pop32());
  /* 10f9aeda ret  */
  ESPCHK(0x10f9ace0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x10f9af10 (146 bytes, 45 insns) */
void f_10f9af10(void) {
  FTRACE(0x10f9af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9af10 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9af11 mov ebp, esp */
  EBP = (ESP);
  /* 10f9af13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9af16 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9af18 call 0x10f9b510 */
  push32(0x10f9af1du); f_10f9b510();
  /* 10f9af1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9af20 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9af24 jne 0x10f9af3e */
  if (!C.zf) goto L_10f9af3e;
  /* 10f9af26 mov dword ptr [ebp - 8], 0x10fc3864 */
  w32((uint32_t)(EBP + -0x8), (0x10fc3864u));
  /* 10f9af2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9af30 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10f9af32 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9af35 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10f9af3c jmp 0x10f9af54 */
  goto L_10f9af54;
L_10f9af3e:;
  /* 10f9af3e mov dword ptr [ebp - 8], 0x10fc3868 */
  w32((uint32_t)(EBP + -0x8), (0x10fc3868u));
  /* 10f9af45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9af48 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9af4a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9af4d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10f9af54:;
  /* 10f9af54 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9af58 jne 0x10f9af68 */
  if (!C.zf) goto L_10f9af68;
  /* 10f9af5a push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9af5c call 0x10f9b5b0 */
  push32(0x10f9af61u); f_10f9b5b0();
  /* 10f9af61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9af64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9af66 jmp 0x10f9af9c */
  goto L_10f9af9c;
L_10f9af68:;
  /* 10f9af68 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9af6c je 0x10f9af8d */
  if (C.zf) goto L_10f9af8d;
  /* 10f9af6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9af71 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10f9af77 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9af79 call 0x10f9b5b0 */
  push32(0x10f9af7eu); f_10f9b5b0();
  /* 10f9af7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9af81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9af84 push edx */
  push32((uint32_t)(EDX));
  /* 10f9af85 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10f9af88u);
  /* 10f9af88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9af8b jmp 0x10f9af97 */
  goto L_10f9af97;
L_10f9af8d:;
  /* 10f9af8d push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9af8f call 0x10f9b5b0 */
  push32(0x10f9af94u); f_10f9b5b0();
  /* 10f9af94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9af97:;
  /* 10f9af97 mov eax, 1 */
  EAX = (0x1u);
L_10f9af9c:;
  /* 10f9af9c mov esp, ebp */
  ESP = (EBP);
  /* 10f9af9e pop ebp */
  EBP = (pop32());
  /* 10f9af9f ret 4 */
  ESPCHK(0x10f9af10u, _esp0);
  ESP += 8; return;
}

/* FUN_1000afb0 @ 0x10f9afb0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10f9afb0(void) {
  FTRACE(0x10f9afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9afb1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9afb3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9afb6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10f9afbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9afc0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10f9afc3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9afc6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9afc9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10f9afcc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9afd0 ja 0x10f9b07e */
  if ((!C.cf&&!C.zf)) goto L_10f9b07e;
  /* 10f9afd6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10f9afd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9afdb mov dl, byte ptr [eax + 0x10f9b1d2] */
  DL = (r8((uint32_t)(EAX + 0x10f9b1d2)));
  /* 10f9afe1 jmp dword ptr [edx*4 + 0x10f9b1ba] */
  switch (EDX) {
    case 0: goto L_10f9afe8;
    case 1: goto L_10f9b053;
    case 2: goto L_10f9b039;
    case 3: goto L_10f9b005;
    case 4: goto L_10f9b01f;
    case 5: goto L_10f9b07e;
    default: x86_unimpl("switch@0x10f9afe1 out of table"); return;
  }
L_10f9afe8:;
  /* 10f9afe8 mov dword ptr [ebp - 0x18], 0x10fc3864 */
  w32((uint32_t)(EBP + -0x18), (0x10fc3864u));
  /* 10f9afef mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9aff2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9aff4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9aff7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9affa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9affd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9b000 jmp 0x10f9b086 */
  goto L_10f9b086;
L_10f9b005:;
  /* 10f9b005 mov dword ptr [ebp - 0x18], 0x10fc3868 */
  w32((uint32_t)(EBP + -0x18), (0x10fc3868u));
  /* 10f9b00c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b00f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9b011 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9b014 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9b017 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b01a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9b01d jmp 0x10f9b086 */
  goto L_10f9b086;
L_10f9b01f:;
  /* 10f9b01f mov dword ptr [ebp - 0x18], 0x10fc386c */
  w32((uint32_t)(EBP + -0x18), (0x10fc386cu));
  /* 10f9b026 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b029 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9b02b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9b02e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9b031 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b034 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9b037 jmp 0x10f9b086 */
  goto L_10f9b086;
L_10f9b039:;
  /* 10f9b039 mov dword ptr [ebp - 0x18], 0x10fc3870 */
  w32((uint32_t)(EBP + -0x18), (0x10fc3870u));
  /* 10f9b040 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b043 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9b045 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9b048 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9b04b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b04e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9b051 jmp 0x10f9b086 */
  goto L_10f9b086;
L_10f9b053:;
  /* 10f9b053 call 0x10f97550 */
  push32(0x10f9b058u); f_10f97550();
  /* 10f9b058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b05b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b05e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f9b061 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b062 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b065 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b066 call 0x10f9b1f0 */
  push32(0x10f9b06bu); f_10f9b1f0();
  /* 10f9b06b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b06e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b071 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10f9b074 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b077 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9b079 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10f9b07c jmp 0x10f9b086 */
  goto L_10f9b086;
L_10f9b07e:;
  /* 10f9b07e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b081 jmp 0x10f9b1b6 */
  goto L_10f9b1b6;
L_10f9b086:;
  /* 10f9b086 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b08a je 0x10f9b096 */
  if (C.zf) goto L_10f9b096;
  /* 10f9b08c push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9b08e call 0x10f9b510 */
  push32(0x10f9b093u); f_10f9b510();
  /* 10f9b093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b096:;
  /* 10f9b096 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b09a jne 0x10f9b0b3 */
  if (!C.zf) goto L_10f9b0b3;
  /* 10f9b09c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0a0 je 0x10f9b0ac */
  if (C.zf) goto L_10f9b0ac;
  /* 10f9b0a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9b0a4 call 0x10f9b5b0 */
  push32(0x10f9b0a9u); f_10f9b5b0();
  /* 10f9b0a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b0ac:;
  /* 10f9b0ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b0ae jmp 0x10f9b1b6 */
  goto L_10f9b1b6;
L_10f9b0b3:;
  /* 10f9b0b3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0b7 jne 0x10f9b0d0 */
  if (!C.zf) goto L_10f9b0d0;
  /* 10f9b0b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0bd je 0x10f9b0c9 */
  if (C.zf) goto L_10f9b0c9;
  /* 10f9b0bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9b0c1 call 0x10f9b5b0 */
  push32(0x10f9b0c6u); f_10f9b5b0();
  /* 10f9b0c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b0c9:;
  /* 10f9b0c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 10f9b0cb call 0x10f972d0 */
  push32(0x10f9b0d0u); f_10f972d0();
L_10f9b0d0:;
  /* 10f9b0d0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0d4 je 0x10f9b0e2 */
  if (C.zf) goto L_10f9b0e2;
  /* 10f9b0d6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0da je 0x10f9b0e2 */
  if (C.zf) goto L_10f9b0e2;
  /* 10f9b0dc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0e0 jne 0x10f9b10e */
  if (!C.zf) goto L_10f9b10e;
L_10f9b0e2:;
  /* 10f9b0e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b0e5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10f9b0e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f9b0eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b0ee mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10f9b0f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b0f9 jne 0x10f9b10e */
  if (!C.zf) goto L_10f9b10e;
  /* 10f9b0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b0fe mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10f9b101 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9b104 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b107 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10f9b10e:;
  /* 10f9b10e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b112 jne 0x10f9b150 */
  if (!C.zf) goto L_10f9b150;
  /* 10f9b114 mov eax, dword ptr [0x10fc1c78] */
  EAX = (r32((uint32_t)(0x10fc1c78)));
  /* 10f9b119 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9b11c jmp 0x10f9b127 */
  goto L_10f9b127;
L_10f9b11e:;
  /* 10f9b11e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b121 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b124 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f9b127:;
  /* 10f9b127 mov edx, dword ptr [0x10fc1c78] */
  EDX = (r32((uint32_t)(0x10fc1c78)));
  /* 10f9b12d add edx, dword ptr [0x10fc1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b133 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b136 jge 0x10f9b14e */
  if ((C.sf==C.of)) goto L_10f9b14e;
  /* 10f9b138 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b13b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b13e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b141 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f9b144 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10f9b14c jmp 0x10f9b11e */
  goto L_10f9b11e;
L_10f9b14e:;
  /* 10f9b14e jmp 0x10f9b159 */
  goto L_10f9b159;
L_10f9b150:;
  /* 10f9b150 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b153 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10f9b159:;
  /* 10f9b159 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b15d je 0x10f9b169 */
  if (C.zf) goto L_10f9b169;
  /* 10f9b15f push 1 */
  push32((uint32_t)(0x1u));
  /* 10f9b161 call 0x10f9b5b0 */
  push32(0x10f9b166u); f_10f9b5b0();
  /* 10f9b166 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b169:;
  /* 10f9b169 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b16d jne 0x10f9b180 */
  if (!C.zf) goto L_10f9b180;
  /* 10f9b16f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b172 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10f9b175 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b176 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9b178 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10f9b17bu);
  /* 10f9b17b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b17e jmp 0x10f9b18a */
  goto L_10f9b18a;
L_10f9b180:;
  /* 10f9b180 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b183 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b184 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10f9b187u);
  /* 10f9b187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b18a:;
  /* 10f9b18a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b18e je 0x10f9b19c */
  if (C.zf) goto L_10f9b19c;
  /* 10f9b190 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b194 je 0x10f9b19c */
  if (C.zf) goto L_10f9b19c;
  /* 10f9b196 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b19a jne 0x10f9b1b4 */
  if (!C.zf) goto L_10f9b1b4;
L_10f9b19c:;
  /* 10f9b19c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b19f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9b1a2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10f9b1a5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b1a9 jne 0x10f9b1b4 */
  if (!C.zf) goto L_10f9b1b4;
  /* 10f9b1ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b1ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b1b1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10f9b1b4:;
  /* 10f9b1b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9b1b6:;
  /* 10f9b1b6 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b1b8 pop ebp */
  EBP = (pop32());
  /* 10f9b1b9 ret  */
  ESPCHK(0x10f9afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x10f9b1f0 (91 bytes, 35 insns) */
void f_10f9b1f0(void) {
  FTRACE(0x10f9b1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b1f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b1f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b1f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9b1fa:;
  /* 10f9b1fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b1fd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10f9b200 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b203 je 0x10f9b223 */
  if (C.zf) goto L_10f9b223;
  /* 10f9b205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b208 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b20b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b20e mov ecx, dword ptr [0x10fc1c84] */
  ECX = (r32((uint32_t)(0x10fc1c84)));
  /* 10f9b214 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b217 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b21a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b21c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b21f jae 0x10f9b223 */
  if (!C.cf) goto L_10f9b223;
  /* 10f9b221 jmp 0x10f9b1fa */
  goto L_10f9b1fa;
L_10f9b223:;
  /* 10f9b223 mov eax, dword ptr [0x10fc1c84] */
  EAX = (r32((uint32_t)(0x10fc1c84)));
  /* 10f9b228 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b22b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b22e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b230 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b233 jae 0x10f9b245 */
  if (!C.cf) goto L_10f9b245;
  /* 10f9b235 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b238 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10f9b23b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b23e jne 0x10f9b245 */
  if (!C.zf) goto L_10f9b245;
  /* 10f9b240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b243 jmp 0x10f9b247 */
  goto L_10f9b247;
L_10f9b245:;
  /* 10f9b245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9b247:;
  /* 10f9b247 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b249 pop ebp */
  EBP = (pop32());
  /* 10f9b24a ret  */
  ESPCHK(0x10f9b1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x10f9b250 (13 bytes, 6 insns) */
void f_10f9b250(void) {
  FTRACE(0x10f9b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b250 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b251 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b253 call 0x10f97550 */
  push32(0x10f9b258u); f_10f97550();
  /* 10f9b258 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b25b pop ebp */
  EBP = (pop32());
  /* 10f9b25c ret  */
  ESPCHK(0x10f9b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x10f9b260 (13 bytes, 6 insns) */
void f_10f9b260(void) {
  FTRACE(0x10f9b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b260 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b261 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b263 call 0x10f97550 */
  push32(0x10f9b268u); f_10f97550();
  /* 10f9b268 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b26b pop ebp */
  EBP = (pop32());
  /* 10f9b26c ret  */
  ESPCHK(0x10f9b260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b270 @ 0x10f9b270 (187 bytes, 54 insns) */
void f_10f9b270(void) {
  FTRACE(0x10f9b270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b270 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b271 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9b276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9b27d cmp dword ptr [0x10fc3878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b284 jne 0x10f9b2e3 */
  if (!C.zf) goto L_10f9b2e3;
  /* 10f9b286 push 0x10fbe388 */
  push32((uint32_t)(0x10fbe388u));
  /* 10f9b28b call dword ptr [0x10fc632c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc632c))), 0x10f9b291u);
  /* 10f9b291 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9b294 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b298 je 0x10f9b2b7 */
  if (C.zf) goto L_10f9b2b7;
  /* 10f9b29a push 0x10fbef8c */
  push32((uint32_t)(0x10fbef8cu));
  /* 10f9b29f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b2a2 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b2a3 call dword ptr [0x10fc6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6328))), 0x10f9b2a9u);
  /* 10f9b2a9 mov dword ptr [0x10fc3878], eax */
  w32((uint32_t)(0x10fc3878), (EAX));
  /* 10f9b2ae cmp dword ptr [0x10fc3878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b2b5 jne 0x10f9b2bb */
  if (!C.zf) goto L_10f9b2bb;
L_10f9b2b7:;
  /* 10f9b2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b2b9 jmp 0x10f9b327 */
  goto L_10f9b327;
L_10f9b2bb:;
  /* 10f9b2bb push 0x10fbef7c */
  push32((uint32_t)(0x10fbef7cu));
  /* 10f9b2c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b2c4 call dword ptr [0x10fc6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6328))), 0x10f9b2cau);
  /* 10f9b2ca mov dword ptr [0x10fc387c], eax */
  w32((uint32_t)(0x10fc387c), (EAX));
  /* 10f9b2cf push 0x10fbef68 */
  push32((uint32_t)(0x10fbef68u));
  /* 10f9b2d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b2d7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b2d8 call dword ptr [0x10fc6328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6328))), 0x10f9b2deu);
  /* 10f9b2de mov dword ptr [0x10fc3880], eax */
  w32((uint32_t)(0x10fc3880), (EAX));
L_10f9b2e3:;
  /* 10f9b2e3 cmp dword ptr [0x10fc387c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc387c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b2ea je 0x10f9b2f5 */
  if (C.zf) goto L_10f9b2f5;
  /* 10f9b2ec call dword ptr [0x10fc387c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc387c))), 0x10f9b2f2u);
  /* 10f9b2f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9b2f5:;
  /* 10f9b2f5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b2f9 je 0x10f9b311 */
  if (C.zf) goto L_10f9b311;
  /* 10f9b2fb cmp dword ptr [0x10fc3880], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc3880))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b302 je 0x10f9b311 */
  if (C.zf) goto L_10f9b311;
  /* 10f9b304 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b307 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b308 call dword ptr [0x10fc3880] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc3880))), 0x10f9b30eu);
  /* 10f9b30e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9b311:;
  /* 10f9b311 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10f9b314 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b315 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b318 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b319 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b31c push eax */
  push32((uint32_t)(EAX));
  /* 10f9b31d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b320 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b321 call dword ptr [0x10fc3878] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc3878))), 0x10f9b327u);
L_10f9b327:;
  /* 10f9b327 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b329 pop ebp */
  EBP = (pop32());
  /* 10f9b32a ret  */
  ESPCHK(0x10f9b270u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10f9b330 (254 bytes, 109 insns) */
void f_10f9b330(void) {
  FTRACE(0x10f9b330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b330 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9b334 push edi */
  push32((uint32_t)(EDI));
  /* 10f9b335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10f9b337 je 0x10f9b3b3 */
  if (C.zf) goto L_10f9b3b3;
  /* 10f9b339 push esi */
  push32((uint32_t)(ESI));
  /* 10f9b33a push ebx */
  push32((uint32_t)(EBX));
  /* 10f9b33b mov ebx, ecx */
  EBX = (ECX);
  /* 10f9b33d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10f9b341 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f9b347 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9b34b jne 0x10f9b354 */
  if (!C.zf) goto L_10f9b354;
  /* 10f9b34d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9b350 jne 0x10f9b3c1 */
  if (!C.zf) goto L_10f9b3c1;
  /* 10f9b352 jmp 0x10f9b375 */
  goto L_10f9b375;
L_10f9b354:;
  /* 10f9b354 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9b356 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f9b357 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b359 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9b35a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b35b je 0x10f9b382 */
  if (C.zf) goto L_10f9b382;
  /* 10f9b35d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9b35f je 0x10f9b38a */
  if (C.zf) goto L_10f9b38a;
  /* 10f9b361 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10f9b367 jne 0x10f9b354 */
  if (!C.zf) goto L_10f9b354;
  /* 10f9b369 mov ebx, ecx */
  EBX = (ECX);
  /* 10f9b36b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9b36e jne 0x10f9b3c1 */
  if (!C.zf) goto L_10f9b3c1;
L_10f9b370:;
  /* 10f9b370 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f9b373 je 0x10f9b382 */
  if (C.zf) goto L_10f9b382;
L_10f9b375:;
  /* 10f9b375 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10f9b377 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10f9b378 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b37a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9b37b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10f9b37d je 0x10f9b3ae */
  if (C.zf) goto L_10f9b3ae;
  /* 10f9b37f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f9b380 jne 0x10f9b375 */
  if (!C.zf) goto L_10f9b375;
L_10f9b382:;
  /* 10f9b382 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9b386 pop ebx */
  EBX = (pop32());
  /* 10f9b387 pop esi */
  ESI = (pop32());
  /* 10f9b388 pop edi */
  EDI = (pop32());
  /* 10f9b389 ret  */
  ESPCHK(0x10f9b330u, _esp0);
  ESP += 4; return;
L_10f9b38a:;
  /* 10f9b38a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9b390 je 0x10f9b3a4 */
  if (C.zf) goto L_10f9b3a4;
L_10f9b392:;
  /* 10f9b392 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b394 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9b395 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b396 je 0x10f9b426 */
  if (C.zf) goto L_10f9b426;
  /* 10f9b39c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10f9b3a2 jne 0x10f9b392 */
  if (!C.zf) goto L_10f9b392;
L_10f9b3a4:;
  /* 10f9b3a4 mov ebx, ecx */
  EBX = (ECX);
  /* 10f9b3a6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9b3a9 jne 0x10f9b417 */
  if (!C.zf) goto L_10f9b417;
L_10f9b3ab:;
  /* 10f9b3ab mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b3ad inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10f9b3ae:;
  /* 10f9b3ae dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10f9b3af jne 0x10f9b3ab */
  if (!C.zf) goto L_10f9b3ab;
  /* 10f9b3b1 pop ebx */
  EBX = (pop32());
  /* 10f9b3b2 pop esi */
  ESI = (pop32());
L_10f9b3b3:;
  /* 10f9b3b3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9b3b7 pop edi */
  EDI = (pop32());
  /* 10f9b3b8 ret  */
  ESPCHK(0x10f9b330u, _esp0);
  ESP += 4; return;
L_10f9b3b9:;
  /* 10f9b3b9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9b3bb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b3be dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b3bf je 0x10f9b370 */
  if (C.zf) goto L_10f9b370;
L_10f9b3c1:;
  /* 10f9b3c1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10f9b3c6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10f9b3c8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b3ca xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b3cd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b3cf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10f9b3d1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b3d4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10f9b3d9 je 0x10f9b3b9 */
  if (C.zf) goto L_10f9b3b9;
  /* 10f9b3db test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10f9b3dd je 0x10f9b40b */
  if (C.zf) goto L_10f9b40b;
  /* 10f9b3df test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10f9b3e1 je 0x10f9b401 */
  if (C.zf) goto L_10f9b401;
  /* 10f9b3e3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10f9b3e9 je 0x10f9b3f7 */
  if (C.zf) goto L_10f9b3f7;
  /* 10f9b3eb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10f9b3f1 jne 0x10f9b3b9 */
  if (!C.zf) goto L_10f9b3b9;
  /* 10f9b3f3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9b3f5 jmp 0x10f9b40f */
  goto L_10f9b40f;
L_10f9b3f7:;
  /* 10f9b3f7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9b3fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9b3ff jmp 0x10f9b40f */
  goto L_10f9b40f;
L_10f9b401:;
  /* 10f9b401 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10f9b407 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10f9b409 jmp 0x10f9b40f */
  goto L_10f9b40f;
L_10f9b40b:;
  /* 10f9b40b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10f9b40d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10f9b40f:;
  /* 10f9b40f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b412 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b414 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b415 je 0x10f9b421 */
  if (C.zf) goto L_10f9b421;
L_10f9b417:;
  /* 10f9b417 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10f9b419:;
  /* 10f9b419 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10f9b41b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b41e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b41f jne 0x10f9b419 */
  if (!C.zf) goto L_10f9b419;
L_10f9b421:;
  /* 10f9b421 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10f9b424 jne 0x10f9b3ab */
  if (!C.zf) goto L_10f9b3ab;
L_10f9b426:;
  /* 10f9b426 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10f9b42a pop ebx */
  EBX = (pop32());
  /* 10f9b42b pop esi */
  ESI = (pop32());
  /* 10f9b42c pop edi */
  EDI = (pop32());
  /* 10f9b42d ret  */
  ESPCHK(0x10f9b330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b430 @ 0x10f9b430 (55 bytes, 16 insns) */
void f_10f9b430(void) {
  FTRACE(0x10f9b430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b430 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b431 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b433 mov eax, dword ptr [0x10fc1b84] */
  EAX = (r32((uint32_t)(0x10fc1b84)));
  /* 10f9b438 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b439 call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10f9b43fu);
  /* 10f9b43f mov ecx, dword ptr [0x10fc1b74] */
  ECX = (r32((uint32_t)(0x10fc1b74)));
  /* 10f9b445 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b446 call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10f9b44cu);
  /* 10f9b44c mov edx, dword ptr [0x10fc1b64] */
  EDX = (r32((uint32_t)(0x10fc1b64)));
  /* 10f9b452 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b453 call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10f9b459u);
  /* 10f9b459 mov eax, dword ptr [0x10fc1b44] */
  EAX = (r32((uint32_t)(0x10fc1b44)));
  /* 10f9b45e push eax */
  push32((uint32_t)(EAX));
  /* 10f9b45f call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10f9b465u);
  /* 10f9b465 pop ebp */
  EBP = (pop32());
  /* 10f9b466 ret  */
  ESPCHK(0x10f9b430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b470 @ 0x10f9b470 (159 bytes, 47 insns) */
void f_10f9b470(void) {
  FTRACE(0x10f9b470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b470 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b471 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b473 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9b47b jmp 0x10f9b486 */
  goto L_10f9b486;
L_10f9b47d:;
  /* 10f9b47d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b480 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b483 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9b486:;
  /* 10f9b486 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b48a jge 0x10f9b4d9 */
  if ((C.sf==C.of)) goto L_10f9b4d9;
  /* 10f9b48c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b48f cmp dword ptr [ecx*4 + 0x10fc1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10fc1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b497 je 0x10f9b4d7 */
  if (C.zf) goto L_10f9b4d7;
  /* 10f9b499 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b49d je 0x10f9b4d7 */
  if (C.zf) goto L_10f9b4d7;
  /* 10f9b49f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b4a3 je 0x10f9b4d7 */
  if (C.zf) goto L_10f9b4d7;
  /* 10f9b4a5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b4a9 je 0x10f9b4d7 */
  if (C.zf) goto L_10f9b4d7;
  /* 10f9b4ab cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b4af je 0x10f9b4d7 */
  if (C.zf) goto L_10f9b4d7;
  /* 10f9b4b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b4b4 mov eax, dword ptr [edx*4 + 0x10fc1b40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10fc1b40)));
  /* 10f9b4bb push eax */
  push32((uint32_t)(EAX));
  /* 10f9b4bc call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f9b4c2u);
  /* 10f9b4c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9b4c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b4c7 mov edx, dword ptr [ecx*4 + 0x10fc1b40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10fc1b40)));
  /* 10f9b4ce push edx */
  push32((uint32_t)(EDX));
  /* 10f9b4cf call 0x10f985a0 */
  push32(0x10f9b4d4u); f_10f985a0();
  /* 10f9b4d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b4d7:;
  /* 10f9b4d7 jmp 0x10f9b47d */
  goto L_10f9b47d;
L_10f9b4d9:;
  /* 10f9b4d9 mov eax, dword ptr [0x10fc1b64] */
  EAX = (r32((uint32_t)(0x10fc1b64)));
  /* 10f9b4de push eax */
  push32((uint32_t)(EAX));
  /* 10f9b4df call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f9b4e5u);
  /* 10f9b4e5 mov ecx, dword ptr [0x10fc1b74] */
  ECX = (r32((uint32_t)(0x10fc1b74)));
  /* 10f9b4eb push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b4ec call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f9b4f2u);
  /* 10f9b4f2 mov edx, dword ptr [0x10fc1b84] */
  EDX = (r32((uint32_t)(0x10fc1b84)));
  /* 10f9b4f8 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b4f9 call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f9b4ffu);
  /* 10f9b4ff mov eax, dword ptr [0x10fc1b44] */
  EAX = (r32((uint32_t)(0x10fc1b44)));
  /* 10f9b504 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b505 call dword ptr [0x10fc6370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6370))), 0x10f9b50bu);
  /* 10f9b50b mov esp, ebp */
  ESP = (EBP);
  /* 10f9b50d pop ebp */
  EBP = (pop32());
  /* 10f9b50e ret  */
  ESPCHK(0x10f9b470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b510 @ 0x10f9b510 (151 bytes, 46 insns) */
void f_10f9b510(void) {
  FTRACE(0x10f9b510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b510 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b511 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b513 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b517 cmp dword ptr [eax*4 + 0x10fc1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10fc1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b51f jne 0x10f9b592 */
  if (!C.zf) goto L_10f9b592;
  /* 10f9b521 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10f9b526 push 0x10fbef98 */
  push32((uint32_t)(0x10fbef98u));
  /* 10f9b52b push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9b52d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10f9b52f call 0x10f97b10 */
  push32(0x10f9b534u); f_10f97b10();
  /* 10f9b534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b537 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b53a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b53e jne 0x10f9b54a */
  if (!C.zf) goto L_10f9b54a;
  /* 10f9b540 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f9b542 call 0x10f96a80 */
  push32(0x10f9b547u); f_10f96a80();
  /* 10f9b547 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b54a:;
  /* 10f9b54a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f9b54c call 0x10f9b510 */
  push32(0x10f9b551u); f_10f9b510();
  /* 10f9b551 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b554 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b557 cmp dword ptr [ecx*4 + 0x10fc1b40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10fc1b40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b55f jne 0x10f9b57a */
  if (!C.zf) goto L_10f9b57a;
  /* 10f9b561 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b564 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b565 call dword ptr [0x10fc63a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc63a4))), 0x10f9b56bu);
  /* 10f9b56b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b56e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b571 mov dword ptr [eax*4 + 0x10fc1b40], ecx */
  w32((uint32_t)(EAX*4 + 0x10fc1b40), (ECX));
  /* 10f9b578 jmp 0x10f9b588 */
  goto L_10f9b588;
L_10f9b57a:;
  /* 10f9b57a push 2 */
  push32((uint32_t)(0x2u));
  /* 10f9b57c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b57f push edx */
  push32((uint32_t)(EDX));
  /* 10f9b580 call 0x10f985a0 */
  push32(0x10f9b585u); f_10f985a0();
  /* 10f9b585 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b588:;
  /* 10f9b588 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10f9b58a call 0x10f9b5b0 */
  push32(0x10f9b58fu); f_10f9b5b0();
  /* 10f9b58f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b592:;
  /* 10f9b592 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b595 mov ecx, dword ptr [eax*4 + 0x10fc1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc1b40)));
  /* 10f9b59c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b59d call dword ptr [0x10fc6308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6308))), 0x10f9b5a3u);
  /* 10f9b5a3 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b5a5 pop ebp */
  EBP = (pop32());
  /* 10f9b5a6 ret  */
  ESPCHK(0x10f9b510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5b0 @ 0x10f9b5b0 (22 bytes, 8 insns) */
void f_10f9b5b0(void) {
  FTRACE(0x10f9b5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b5b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b5b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b5b6 mov ecx, dword ptr [eax*4 + 0x10fc1b40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10fc1b40)));
  /* 10f9b5bd push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b5be call dword ptr [0x10fc6304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6304))), 0x10f9b5c4u);
  /* 10f9b5c4 pop ebp */
  EBP = (pop32());
  /* 10f9b5c5 ret  */
  ESPCHK(0x10f9b5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x10f9b5d0 (26 bytes, 10 insns) */
void f_10f9b5d0(void) {
  FTRACE(0x10f9b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b5d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b5d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b5d6 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b5d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9b5d9 call dword ptr [0x10fc635c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc635c))), 0x10f9b5dfu);
  /* 10f9b5df push 0xff */
  push32((uint32_t)(0xffu));
  /* 10f9b5e4 call dword ptr [0x10fc6338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6338))), 0x10f9b5eau);
  /* 10f9b5ea pop ebp */
  EBP = (pop32());
  /* 10f9b5eb ret  */
  ESPCHK(0x10f9b5d0u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10f9b5f0 (446 bytes, 130 insns) */
void f_10f9b5f0(void) {
  FTRACE(0x10f9b5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b5f1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b5f3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9b5f6 call 0x10f97550 */
  push32(0x10f9b5fbu); f_10f97550();
  /* 10f9b5fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9b5fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b601 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10f9b604 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b605 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b608 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b609 call 0x10f9b7b0 */
  push32(0x10f9b60eu); f_10f9b7b0();
  /* 10f9b60e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b611 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9b614 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b618 je 0x10f9b623 */
  if (C.zf) goto L_10f9b623;
  /* 10f9b61a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b61d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b621 jne 0x10f9b632 */
  if (!C.zf) goto L_10f9b632;
L_10f9b623:;
  /* 10f9b623 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b626 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b627 call dword ptr [0x10fc62fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62fc))), 0x10f9b62du);
  /* 10f9b62d jmp 0x10f9b7aa */
  goto L_10f9b7aa;
L_10f9b632:;
  /* 10f9b632 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b635 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b639 jne 0x10f9b64f */
  if (!C.zf) goto L_10f9b64f;
  /* 10f9b63b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b63e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10f9b645 mov eax, 1 */
  EAX = (0x1u);
  /* 10f9b64a jmp 0x10f9b7aa */
  goto L_10f9b7aa;
L_10f9b64f:;
  /* 10f9b64f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b652 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b656 jne 0x10f9b660 */
  if (!C.zf) goto L_10f9b660;
  /* 10f9b658 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b65b jmp 0x10f9b7aa */
  goto L_10f9b7aa;
L_10f9b660:;
  /* 10f9b660 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b663 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10f9b666 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b669 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b66c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10f9b66f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10f9b672 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b675 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b678 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10f9b67b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b67e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b682 jne 0x10f9b787 */
  if (!C.zf) goto L_10f9b787;
  /* 10f9b688 mov eax, dword ptr [0x10fc1c78] */
  EAX = (r32((uint32_t)(0x10fc1c78)));
  /* 10f9b68d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10f9b690 jmp 0x10f9b69b */
  goto L_10f9b69b;
L_10f9b692:;
  /* 10f9b692 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9b695 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b698 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10f9b69b:;
  /* 10f9b69b mov edx, dword ptr [0x10fc1c78] */
  EDX = (r32((uint32_t)(0x10fc1c78)));
  /* 10f9b6a1 add edx, dword ptr [0x10fc1c7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10fc1c7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b6a7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b6aa jge 0x10f9b6c2 */
  if ((C.sf==C.of)) goto L_10f9b6c2;
  /* 10f9b6ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9b6af imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b6b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b6b5 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10f9b6b8 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10f9b6c0 jmp 0x10f9b692 */
  goto L_10f9b692;
L_10f9b6c2:;
  /* 10f9b6c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b6c5 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10f9b6c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10f9b6cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b6ce cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b6d4 jne 0x10f9b6e5 */
  if (!C.zf) goto L_10f9b6e5;
  /* 10f9b6d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b6d9 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10f9b6e0 jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b6e5:;
  /* 10f9b6e5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b6e8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b6ee jne 0x10f9b6fc */
  if (!C.zf) goto L_10f9b6fc;
  /* 10f9b6f0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b6f3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10f9b6fa jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b6fc:;
  /* 10f9b6fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b6ff cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b705 jne 0x10f9b713 */
  if (!C.zf) goto L_10f9b713;
  /* 10f9b707 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b70a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10f9b711 jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b713:;
  /* 10f9b713 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b716 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b71c jne 0x10f9b72a */
  if (!C.zf) goto L_10f9b72a;
  /* 10f9b71e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b721 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10f9b728 jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b72a:;
  /* 10f9b72a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b72d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b733 jne 0x10f9b741 */
  if (!C.zf) goto L_10f9b741;
  /* 10f9b735 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b738 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10f9b73f jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b741:;
  /* 10f9b741 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b744 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b74a jne 0x10f9b758 */
  if (!C.zf) goto L_10f9b758;
  /* 10f9b74c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b74f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10f9b756 jmp 0x10f9b76d */
  goto L_10f9b76d;
L_10f9b758:;
  /* 10f9b758 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b75b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b761 jne 0x10f9b76d */
  if (!C.zf) goto L_10f9b76d;
  /* 10f9b763 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b766 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10f9b76d:;
  /* 10f9b76d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b770 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10f9b773 push edx */
  push32((uint32_t)(EDX));
  /* 10f9b774 push 8 */
  push32((uint32_t)(0x8u));
  /* 10f9b776 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f9b779u);
  /* 10f9b779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b77c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b77f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9b782 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10f9b785 jmp 0x10f9b79e */
  goto L_10f9b79e;
L_10f9b787:;
  /* 10f9b787 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b78a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10f9b791 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9b794 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10f9b797 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b798 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f9b79bu);
  /* 10f9b79b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9b79e:;
  /* 10f9b79e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9b7a1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10f9b7a4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10f9b7a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10f9b7aa:;
  /* 10f9b7aa mov esp, ebp */
  ESP = (EBP);
  /* 10f9b7ac pop ebp */
  EBP = (pop32());
  /* 10f9b7ad ret  */
  ESPCHK(0x10f9b5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7b0 @ 0x10f9b7b0 (89 bytes, 35 insns) */
void f_10f9b7b0(void) {
  FTRACE(0x10f9b7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b7b1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b7b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b7b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10f9b7ba:;
  /* 10f9b7ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b7bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10f9b7bf cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b7c2 je 0x10f9b7e2 */
  if (C.zf) goto L_10f9b7e2;
  /* 10f9b7c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b7c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b7ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b7cd mov ecx, dword ptr [0x10fc1c84] */
  ECX = (r32((uint32_t)(0x10fc1c84)));
  /* 10f9b7d3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b7d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b7d9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b7db cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b7de jae 0x10f9b7e2 */
  if (!C.cf) goto L_10f9b7e2;
  /* 10f9b7e0 jmp 0x10f9b7ba */
  goto L_10f9b7ba;
L_10f9b7e2:;
  /* 10f9b7e2 mov eax, dword ptr [0x10fc1c84] */
  EAX = (r32((uint32_t)(0x10fc1c84)));
  /* 10f9b7e7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10f9b7ea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9b7ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b7ef cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b7f2 jae 0x10f9b7fe */
  if (!C.cf) goto L_10f9b7fe;
  /* 10f9b7f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b7f7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10f9b7f9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b7fc je 0x10f9b802 */
  if (C.zf) goto L_10f9b802;
L_10f9b7fe:;
  /* 10f9b7fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b800 jmp 0x10f9b805 */
  goto L_10f9b805;
L_10f9b802:;
  /* 10f9b802 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10f9b805:;
  /* 10f9b805 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b807 pop ebp */
  EBP = (pop32());
  /* 10f9b808 ret  */
  ESPCHK(0x10f9b7b0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10f9b810 (48 bytes, 17 insns) */
void f_10f9b810(void) {
  FTRACE(0x10f9b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b810 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b811 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b813 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b814 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9b816 call 0x10f9b510 */
  push32(0x10f9b81bu); f_10f9b510();
  /* 10f9b81b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b81e mov eax, dword ptr [0x10fc38ec] */
  EAX = (r32((uint32_t)(0x10fc38ec)));
  /* 10f9b823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b826 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b829 mov dword ptr [0x10fc38ec], ecx */
  w32((uint32_t)(0x10fc38ec), (ECX));
  /* 10f9b82f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9b831 call 0x10f9b5b0 */
  push32(0x10f9b836u); f_10f9b5b0();
  /* 10f9b836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b83c mov esp, ebp */
  ESP = (EBP);
  /* 10f9b83e pop ebp */
  EBP = (pop32());
  /* 10f9b83f ret  */
  ESPCHK(0x10f9b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b840 @ 0x10f9b840 (10 bytes, 5 insns) */
void f_10f9b840(void) {
  FTRACE(0x10f9b840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b840 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b841 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b843 mov eax, dword ptr [0x10fc38ec] */
  EAX = (r32((uint32_t)(0x10fc38ec)));
  /* 10f9b848 pop ebp */
  EBP = (pop32());
  /* 10f9b849 ret  */
  ESPCHK(0x10f9b840u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10f9b850 (45 bytes, 19 insns) */
void f_10f9b850(void) {
  FTRACE(0x10f9b850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b850 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b851 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b853 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b854 mov eax, dword ptr [0x10fc38ec] */
  EAX = (r32((uint32_t)(0x10fc38ec)));
  /* 10f9b859 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b85c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b860 je 0x10f9b870 */
  if (C.zf) goto L_10f9b870;
  /* 10f9b862 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b865 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b866 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10f9b869u);
  /* 10f9b869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b86c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9b86e jne 0x10f9b874 */
  if (!C.zf) goto L_10f9b874;
L_10f9b870:;
  /* 10f9b870 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b872 jmp 0x10f9b879 */
  goto L_10f9b879;
L_10f9b874:;
  /* 10f9b874 mov eax, 1 */
  EAX = (0x1u);
L_10f9b879:;
  /* 10f9b879 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b87b pop ebp */
  EBP = (pop32());
  /* 10f9b87c ret  */
  ESPCHK(0x10f9b850u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10f9b880 (88 bytes, 40 insns) */
void f_10f9b880(void) {
  FTRACE(0x10f9b880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b880 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10f9b884 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9b888 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9b88a je 0x10f9b8d3 */
  if (C.zf) goto L_10f9b8d3;
  /* 10f9b88c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b88e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10f9b892 push edi */
  push32((uint32_t)(EDI));
  /* 10f9b893 mov edi, ecx */
  EDI = (ECX);
  /* 10f9b895 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b898 jb 0x10f9b8c7 */
  if (C.cf) goto L_10f9b8c7;
  /* 10f9b89a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10f9b89c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9b89f je 0x10f9b8a9 */
  if (C.zf) goto L_10f9b8a9;
  /* 10f9b8a1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10f9b8a3:;
  /* 10f9b8a3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b8a5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9b8a6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10f9b8a7 jne 0x10f9b8a3 */
  if (!C.zf) goto L_10f9b8a3;
L_10f9b8a9:;
  /* 10f9b8a9 mov ecx, eax */
  ECX = (EAX);
  /* 10f9b8ab shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10f9b8ae add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b8b0 mov ecx, eax */
  ECX = (EAX);
  /* 10f9b8b2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10f9b8b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b8b7 mov ecx, edx */
  ECX = (EDX);
  /* 10f9b8b9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9b8bc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10f9b8bf je 0x10f9b8c7 */
  if (C.zf) goto L_10f9b8c7;
  /* 10f9b8c1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10f9b8c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10f9b8c5 je 0x10f9b8cd */
  if (C.zf) goto L_10f9b8cd;
L_10f9b8c7:;
  /* 10f9b8c7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10f9b8c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10f9b8ca dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10f9b8cb jne 0x10f9b8c7 */
  if (!C.zf) goto L_10f9b8c7;
L_10f9b8cd:;
  /* 10f9b8cd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10f9b8d1 pop edi */
  EDI = (pop32());
  /* 10f9b8d2 ret  */
  ESPCHK(0x10f9b880u, _esp0);
  ESP += 4; return;
L_10f9b8d3:;
  /* 10f9b8d3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10f9b8d7 ret  */
  ESPCHK(0x10f9b880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x10f9b8e0 (23 bytes, 10 insns) */
void f_10f9b8e0(void) {
  FTRACE(0x10f9b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b8e3 mov eax, dword ptr [0x10fc38e8] */
  EAX = (r32((uint32_t)(0x10fc38e8)));
  /* 10f9b8e8 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b8e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b8ec push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b8ed call 0x10f9b900 */
  push32(0x10f9b8f2u); f_10f9b900();
  /* 10f9b8f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b8f5 pop ebp */
  EBP = (pop32());
  /* 10f9b8f6 ret  */
  ESPCHK(0x10f9b8e0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10f9b900 (87 bytes, 34 insns) */
void f_10f9b900(void) {
  FTRACE(0x10f9b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b900 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b901 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b903 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b904 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b908 jbe 0x10f9b90e */
  if ((C.cf||C.zf)) goto L_10f9b90e;
  /* 10f9b90a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b90c jmp 0x10f9b953 */
  goto L_10f9b953;
L_10f9b90e:;
  /* 10f9b90e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b912 ja 0x10f9b925 */
  if ((!C.cf&&!C.zf)) goto L_10f9b925;
  /* 10f9b914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b917 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b918 call 0x10f9b960 */
  push32(0x10f9b91du); f_10f9b960();
  /* 10f9b91d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b920 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b923 jmp 0x10f9b92c */
  goto L_10f9b92c;
L_10f9b925:;
  /* 10f9b925 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10f9b92c:;
  /* 10f9b92c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b930 jne 0x10f9b938 */
  if (!C.zf) goto L_10f9b938;
  /* 10f9b932 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b936 jne 0x10f9b93d */
  if (!C.zf) goto L_10f9b93d;
L_10f9b938:;
  /* 10f9b938 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b93b jmp 0x10f9b953 */
  goto L_10f9b953;
L_10f9b93d:;
  /* 10f9b93d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b940 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b941 call 0x10f9b850 */
  push32(0x10f9b946u); f_10f9b850();
  /* 10f9b946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9b94b jne 0x10f9b951 */
  if (!C.zf) goto L_10f9b951;
  /* 10f9b94d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b94f jmp 0x10f9b953 */
  goto L_10f9b953;
L_10f9b951:;
  /* 10f9b951 jmp 0x10f9b90e */
  goto L_10f9b90e;
L_10f9b953:;
  /* 10f9b953 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b955 pop ebp */
  EBP = (pop32());
  /* 10f9b956 ret  */
  ESPCHK(0x10f9b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b960 @ 0x10f9b960 (109 bytes, 37 insns) */
void f_10f9b960(void) {
  FTRACE(0x10f9b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b960 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b961 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b963 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b964 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b967 cmp eax, dword ptr [0x10fc1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b96d ja 0x10f9b99d */
  if ((!C.cf&&!C.zf)) goto L_10f9b99d;
  /* 10f9b96f push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9b971 call 0x10f9b510 */
  push32(0x10f9b976u); f_10f9b510();
  /* 10f9b976 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b979 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b97c push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b97d call 0x10f9c4a0 */
  push32(0x10f9b982u); f_10f9c4a0();
  /* 10f9b982 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b985 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9b988 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9b98a call 0x10f9b5b0 */
  push32(0x10f9b98fu); f_10f9b5b0();
  /* 10f9b98f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b992 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b996 je 0x10f9b99d */
  if (C.zf) goto L_10f9b99d;
  /* 10f9b998 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9b99b jmp 0x10f9b9c9 */
  goto L_10f9b9c9;
L_10f9b99d:;
  /* 10f9b99d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b9a1 jne 0x10f9b9aa */
  if (!C.zf) goto L_10f9b9aa;
  /* 10f9b9a3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10f9b9aa:;
  /* 10f9b9aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b9ad add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b9b0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9b9b3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10f9b9b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9b9b9 push eax */
  push32((uint32_t)(EAX));
  /* 10f9b9ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9b9bc mov ecx, dword ptr [0x10fc50ac] */
  ECX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9b9c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9b9c3 call dword ptr [0x10fc62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f8))), 0x10f9b9c9u);
L_10f9b9c9:;
  /* 10f9b9c9 mov esp, ebp */
  ESP = (EBP);
  /* 10f9b9cb pop ebp */
  EBP = (pop32());
  /* 10f9b9cc ret  */
  ESPCHK(0x10f9b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9d0 @ 0x10f9b9d0 (10 bytes, 5 insns) */
void f_10f9b9d0(void) {
  FTRACE(0x10f9b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b9d3 mov eax, 1 */
  EAX = (0x1u);
  /* 10f9b9d8 pop ebp */
  EBP = (pop32());
  /* 10f9b9d9 ret  */
  ESPCHK(0x10f9b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9e0 @ 0x10f9b9e0 (173 bytes, 59 insns) */
void f_10f9b9e0(void) {
  FTRACE(0x10f9b9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9b9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9b9e1 mov ebp, esp */
  EBP = (ESP);
  /* 10f9b9e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9b9e6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9b9ea jbe 0x10f9b9f3 */
  if ((C.cf||C.zf)) goto L_10f9b9f3;
  /* 10f9b9ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9b9ee jmp 0x10f9ba89 */
  goto L_10f9ba89;
L_10f9b9f3:;
  /* 10f9b9f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9b9f5 call 0x10f9b510 */
  push32(0x10f9b9fau); f_10f9b510();
  /* 10f9b9fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9b9fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ba00 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ba01 call 0x10f9be10 */
  push32(0x10f9ba06u); f_10f9be10();
  /* 10f9ba06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ba09 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9ba0c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ba10 je 0x10f9ba51 */
  if (C.zf) goto L_10f9ba51;
  /* 10f9ba12 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10f9ba19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ba1c cmp ecx, dword ptr [0x10fc1c94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10fc1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ba22 ja 0x10f9ba42 */
  if ((!C.cf&&!C.zf)) goto L_10f9ba42;
  /* 10f9ba24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ba27 push edx */
  push32((uint32_t)(EDX));
  /* 10f9ba28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ba2b push eax */
  push32((uint32_t)(EAX));
  /* 10f9ba2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9ba2f push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ba30 call 0x10f9cce0 */
  push32(0x10f9ba35u); f_10f9cce0();
  /* 10f9ba35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ba38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9ba3a je 0x10f9ba42 */
  if (C.zf) goto L_10f9ba42;
  /* 10f9ba3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ba3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10f9ba42:;
  /* 10f9ba42 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9ba44 call 0x10f9b5b0 */
  push32(0x10f9ba49u); f_10f9b5b0();
  /* 10f9ba49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ba4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9ba4f jmp 0x10f9ba89 */
  goto L_10f9ba89;
L_10f9ba51:;
  /* 10f9ba51 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9ba53 call 0x10f9b5b0 */
  push32(0x10f9ba58u); f_10f9b5b0();
  /* 10f9ba58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ba5b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ba5f jne 0x10f9ba68 */
  if (!C.zf) goto L_10f9ba68;
  /* 10f9ba61 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f9ba68:;
  /* 10f9ba68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ba6b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9ba6e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10f9ba70 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10f9ba73 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ba76 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9ba77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9ba7a push edx */
  push32((uint32_t)(EDX));
  /* 10f9ba7b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10f9ba7d mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9ba82 push eax */
  push32((uint32_t)(EAX));
  /* 10f9ba83 call dword ptr [0x10fc6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6300))), 0x10f9ba89u);
L_10f9ba89:;
  /* 10f9ba89 mov esp, ebp */
  ESP = (EBP);
  /* 10f9ba8b pop ebp */
  EBP = (pop32());
  /* 10f9ba8c ret  */
  ESPCHK(0x10f9b9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba90 @ 0x10f9ba90 (490 bytes, 165 insns) */
void f_10f9ba90(void) {
  FTRACE(0x10f9ba90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9ba90 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9ba91 mov ebp, esp */
  EBP = (ESP);
  /* 10f9ba93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9ba96 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9ba9a jne 0x10f9baad */
  if (!C.zf) goto L_10f9baad;
  /* 10f9ba9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9ba9f push eax */
  push32((uint32_t)(EAX));
  /* 10f9baa0 call 0x10f9b8e0 */
  push32(0x10f9baa5u); f_10f9b8e0();
  /* 10f9baa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9baa8 jmp 0x10f9bc76 */
  goto L_10f9bc76;
L_10f9baad:;
  /* 10f9baad cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bab1 jne 0x10f9bac6 */
  if (!C.zf) goto L_10f9bac6;
  /* 10f9bab3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bab6 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bab7 call 0x10f9bc80 */
  push32(0x10f9babcu); f_10f9bc80();
  /* 10f9babc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9babf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bac1 jmp 0x10f9bc76 */
  goto L_10f9bc76;
L_10f9bac6:;
  /* 10f9bac6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10f9bacd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bad1 ja 0x10f9bc49 */
  if ((!C.cf&&!C.zf)) goto L_10f9bc49;
  /* 10f9bad7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bad9 call 0x10f9b510 */
  push32(0x10f9badeu); f_10f9b510();
  /* 10f9bade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bae4 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bae5 call 0x10f9be10 */
  push32(0x10f9baeau); f_10f9be10();
  /* 10f9baea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9baed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10f9baf0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9baf4 je 0x10f9bc0c */
  if (C.zf) goto L_10f9bc0c;
  /* 10f9bafa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bafd cmp eax, dword ptr [0x10fc1c94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10fc1c94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bb03 ja 0x10f9bb80 */
  if ((!C.cf&&!C.zf)) goto L_10f9bb80;
  /* 10f9bb05 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bb08 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bb09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bb0c push edx */
  push32((uint32_t)(EDX));
  /* 10f9bb0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9bb10 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bb11 call 0x10f9cce0 */
  push32(0x10f9bb16u); f_10f9cce0();
  /* 10f9bb16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bb19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9bb1b je 0x10f9bb25 */
  if (C.zf) goto L_10f9bb25;
  /* 10f9bb1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bb20 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10f9bb23 jmp 0x10f9bb80 */
  goto L_10f9bb80;
L_10f9bb25:;
  /* 10f9bb25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bb28 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bb29 call 0x10f9c4a0 */
  push32(0x10f9bb2eu); f_10f9c4a0();
  /* 10f9bb2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bb31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9bb34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bb38 je 0x10f9bb80 */
  if (C.zf) goto L_10f9bb80;
  /* 10f9bb3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bb3d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10f9bb40 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bb43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10f9bb46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bb49 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bb4c jae 0x10f9bb56 */
  if (!C.cf) goto L_10f9bb56;
  /* 10f9bb4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bb51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10f9bb54 jmp 0x10f9bb5c */
  goto L_10f9bb5c;
L_10f9bb56:;
  /* 10f9bb56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bb59 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10f9bb5c:;
  /* 10f9bb5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10f9bb5f push edx */
  push32((uint32_t)(EDX));
  /* 10f9bb60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bb63 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bb64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9bb67 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bb68 call 0x10f9e3f0 */
  push32(0x10f9bb6du); f_10f9e3f0();
  /* 10f9bb6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bb70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bb73 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bb74 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9bb77 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bb78 call 0x10f9bed0 */
  push32(0x10f9bb7du); f_10f9bed0();
  /* 10f9bb7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9bb80:;
  /* 10f9bb80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bb84 jne 0x10f9bc00 */
  if (!C.zf) goto L_10f9bc00;
  /* 10f9bb86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bb8a jne 0x10f9bb93 */
  if (!C.zf) goto L_10f9bb93;
  /* 10f9bb8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f9bb93:;
  /* 10f9bb93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bb96 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bb99 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10f9bb9c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10f9bb9f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bba2 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bba3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bba5 mov eax, dword ptr [0x10fc50ac] */
  EAX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9bbaa push eax */
  push32((uint32_t)(EAX));
  /* 10f9bbab call dword ptr [0x10fc62f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc62f8))), 0x10f9bbb1u);
  /* 10f9bbb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10f9bbb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bbb8 je 0x10f9bc00 */
  if (C.zf) goto L_10f9bc00;
  /* 10f9bbba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bbbd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10f9bbc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10f9bbc3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10f9bbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bbc9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bbcc jae 0x10f9bbd6 */
  if (!C.cf) goto L_10f9bbd6;
  /* 10f9bbce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bbd1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10f9bbd4 jmp 0x10f9bbdc */
  goto L_10f9bbdc;
L_10f9bbd6:;
  /* 10f9bbd6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bbd9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10f9bbdc:;
  /* 10f9bbdc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10f9bbdf push eax */
  push32((uint32_t)(EAX));
  /* 10f9bbe0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bbe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bbe4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9bbe7 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bbe8 call 0x10f9e3f0 */
  push32(0x10f9bbedu); f_10f9e3f0();
  /* 10f9bbed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bbf0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bbf3 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bbf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10f9bbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bbf8 call 0x10f9bed0 */
  push32(0x10f9bbfdu); f_10f9bed0();
  /* 10f9bbfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10f9bc00:;
  /* 10f9bc00 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bc02 call 0x10f9b5b0 */
  push32(0x10f9bc07u); f_10f9b5b0();
  /* 10f9bc07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bc0a jmp 0x10f9bc49 */
  goto L_10f9bc49;
L_10f9bc0c:;
  /* 10f9bc0c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bc0e call 0x10f9b5b0 */
  push32(0x10f9bc13u); f_10f9b5b0();
  /* 10f9bc13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bc16 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bc1a jne 0x10f9bc23 */
  if (!C.zf) goto L_10f9bc23;
  /* 10f9bc1c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10f9bc23:;
  /* 10f9bc23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bc26 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bc29 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10f9bc2c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10f9bc2f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bc32 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bc33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bc36 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bc37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bc39 mov edx, dword ptr [0x10fc50ac] */
  EDX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9bc3f push edx */
  push32((uint32_t)(EDX));
  /* 10f9bc40 call dword ptr [0x10fc6300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6300))), 0x10f9bc46u);
  /* 10f9bc46 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10f9bc49:;
  /* 10f9bc49 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bc4d jne 0x10f9bc58 */
  if (!C.zf) goto L_10f9bc58;
  /* 10f9bc4f cmp dword ptr [0x10fc38e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10fc38e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bc56 jne 0x10f9bc5d */
  if (!C.zf) goto L_10f9bc5d;
L_10f9bc58:;
  /* 10f9bc58 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10f9bc5b jmp 0x10f9bc76 */
  goto L_10f9bc76;
L_10f9bc5d:;
  /* 10f9bc5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10f9bc60 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bc61 call 0x10f9b850 */
  push32(0x10f9bc66u); f_10f9b850();
  /* 10f9bc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bc69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10f9bc6b jne 0x10f9bc71 */
  if (!C.zf) goto L_10f9bc71;
  /* 10f9bc6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10f9bc6f jmp 0x10f9bc76 */
  goto L_10f9bc76;
L_10f9bc71:;
  /* 10f9bc71 jmp 0x10f9bac6 */
  goto L_10f9bac6;
L_10f9bc76:;
  /* 10f9bc76 mov esp, ebp */
  ESP = (EBP);
  /* 10f9bc78 pop ebp */
  EBP = (pop32());
  /* 10f9bc79 ret  */
  ESPCHK(0x10f9ba90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc80 @ 0x10f9bc80 (104 bytes, 38 insns) */
void f_10f9bc80(void) {
  FTRACE(0x10f9bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10f9bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 10f9bc81 mov ebp, esp */
  EBP = (ESP);
  /* 10f9bc83 push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bc84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bc88 jne 0x10f9bc8c */
  if (!C.zf) goto L_10f9bc8c;
  /* 10f9bc8a jmp 0x10f9bce4 */
  goto L_10f9bce4;
L_10f9bc8c:;
  /* 10f9bc8c push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bc8e call 0x10f9b510 */
  push32(0x10f9bc93u); f_10f9b510();
  /* 10f9bc93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bc96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bc99 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bc9a call 0x10f9be10 */
  push32(0x10f9bc9fu); f_10f9be10();
  /* 10f9bc9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bca2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10f9bca5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10f9bca9 je 0x10f9bcc7 */
  if (C.zf) goto L_10f9bcc7;
  /* 10f9bcab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bcae push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bcaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10f9bcb2 push edx */
  push32((uint32_t)(EDX));
  /* 10f9bcb3 call 0x10f9bed0 */
  push32(0x10f9bcb8u); f_10f9bed0();
  /* 10f9bcb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bcbb push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bcbd call 0x10f9b5b0 */
  push32(0x10f9bcc2u); f_10f9b5b0();
  /* 10f9bcc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bcc5 jmp 0x10f9bce4 */
  goto L_10f9bce4;
L_10f9bcc7:;
  /* 10f9bcc7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10f9bcc9 call 0x10f9b5b0 */
  push32(0x10f9bcceu); f_10f9b5b0();
  /* 10f9bcce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10f9bcd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10f9bcd4 push eax */
  push32((uint32_t)(EAX));
  /* 10f9bcd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10f9bcd7 mov ecx, dword ptr [0x10fc50ac] */
  ECX = (r32((uint32_t)(0x10fc50ac)));
  /* 10f9bcdd push ecx */
  push32((uint32_t)(ECX));
  /* 10f9bcde call dword ptr [0x10fc6398] */
  call_ind((uint32_t)(r32((uint32_t)(0x10fc6398))), 0x10f9bce4u);
L_10f9bce4:;
  /* 10f9bce4 mov esp, ebp */
  ESP = (EBP);
  /* 10f9bce6 pop ebp */
  EBP = (pop32());
  /* 10f9bce7 ret  */
  ESPCHK(0x10f9bc80u, _esp0);
  ESP += 4; return;
}

