#include "recomp.h"

/* thunk_FUN_10003650 @ 0x10d51005 (5 bytes, 1 insns) */
void f_10d51005(void) {
  FTRACE(0x10d51005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d51005 jmp 0x10d53650 */
  f_10d53650(); return;
}

/* OnInit @ 0x10d5100a (5 bytes, 1 insns) */
void f_10d5100a(void) {
  FTRACE(0x10d5100au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5100a jmp 0x10d51090 */
  f_10d51090(); return;
}

/* thunk_FUN_10001030 @ 0x10d5100f (5 bytes, 1 insns) */
void f_10d5100f(void) {
  FTRACE(0x10d5100fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d5100f jmp 0x10d51030 */
  f_10d51030(); return;
}

/* ProcessScenary @ 0x10d51014 (5 bytes, 1 insns) */
void f_10d51014(void) {
  FTRACE(0x10d51014u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d51014 jmp 0x10d51560 */
  f_10d51560(); return;
}

/* FUN_10001030 @ 0x10d51030 (67 bytes, 26 insns) */
void f_10d51030(void) {
  FTRACE(0x10d51030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d51030 push ebp */
  push32((uint32_t)(EBP));
  /* 10d51031 mov ebp, esp */
  EBP = (ESP);
  /* 10d51033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d51036 push ebx */
  push32((uint32_t)(EBX));
  /* 10d51037 push esi */
  push32((uint32_t)(ESI));
  /* 10d51038 push edi */
  push32((uint32_t)(EDI));
  /* 10d51039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10d5103c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10d51041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d51046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d51048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5104b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5104e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51052 je 0x10d51056 */
  if (C.zf) goto L_10d51056;
  /* 10d51054 jmp 0x10d5105b */
  goto L_10d5105b;
L_10d51056:;
  /* 10d51056 call 0x10d5100a */
  push32(0x10d5105bu); f_10d5100a();
L_10d5105b:;
  /* 10d5105b mov eax, 1 */
  EAX = (0x1u);
  /* 10d51060 pop edi */
  EDI = (pop32());
  /* 10d51061 pop esi */
  ESI = (pop32());
  /* 10d51062 pop ebx */
  EBX = (pop32());
  /* 10d51063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51068 call 0x10d53750 */
  push32(0x10d5106du); f_10d53750();
  /* 10d5106d mov esp, ebp */
  ESP = (EBP);
  /* 10d5106f pop ebp */
  EBP = (pop32());
  /* 10d51070 ret 0xc */
  ESPCHK(0x10d51030u, _esp0);
  ESP += 16; return;
}

/* FUN_10001090 @ 0x10d51090 (984 bytes, 261 insns) */
void f_10d51090(void) {
  FTRACE(0x10d51090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d51090 push ebp */
  push32((uint32_t)(EBP));
  /* 10d51091 mov ebp, esp */
  EBP = (ESP);
  /* 10d51093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d51096 push ebx */
  push32((uint32_t)(EBX));
  /* 10d51097 push esi */
  push32((uint32_t)(ESI));
  /* 10d51098 push edi */
  push32((uint32_t)(EDI));
  /* 10d51099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d5109c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d510a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d510a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d510a8 mov esi, esp */
  ESI = (ESP);
  /* 10d510aa push 0x10d7b130 */
  push32((uint32_t)(0x10d7b130u));
  /* 10d510af push 0x10d80428 */
  push32((uint32_t)(0x10d80428u));
  /* 10d510b4 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d510bau);
  /* 10d510ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d510bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d510bf call 0x10d53750 */
  push32(0x10d510c4u); f_10d53750();
  /* 10d510c4 mov esi, esp */
  ESI = (ESP);
  /* 10d510c6 push 0x10d7b128 */
  push32((uint32_t)(0x10d7b128u));
  /* 10d510cb push 0x10d80430 */
  push32((uint32_t)(0x10d80430u));
  /* 10d510d0 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d510d6u);
  /* 10d510d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d510d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d510db call 0x10d53750 */
  push32(0x10d510e0u); f_10d53750();
  /* 10d510e0 mov esi, esp */
  ESI = (ESP);
  /* 10d510e2 push 0x10d7b120 */
  push32((uint32_t)(0x10d7b120u));
  /* 10d510e7 push 0x10d80438 */
  push32((uint32_t)(0x10d80438u));
  /* 10d510ec call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d510f2u);
  /* 10d510f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d510f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d510f7 call 0x10d53750 */
  push32(0x10d510fcu); f_10d53750();
  /* 10d510fc mov esi, esp */
  ESI = (ESP);
  /* 10d510fe push 0x10d7b118 */
  push32((uint32_t)(0x10d7b118u));
  /* 10d51103 push 0x10d80440 */
  push32((uint32_t)(0x10d80440u));
  /* 10d51108 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d5110eu);
  /* 10d5110e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51113 call 0x10d53750 */
  push32(0x10d51118u); f_10d53750();
  /* 10d51118 mov esi, esp */
  ESI = (ESP);
  /* 10d5111a push 0x10d7b110 */
  push32((uint32_t)(0x10d7b110u));
  /* 10d5111f push 0x10d80448 */
  push32((uint32_t)(0x10d80448u));
  /* 10d51124 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d5112au);
  /* 10d5112a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5112d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5112f call 0x10d53750 */
  push32(0x10d51134u); f_10d53750();
  /* 10d51134 mov esi, esp */
  ESI = (ESP);
  /* 10d51136 push 0x10d7b108 */
  push32((uint32_t)(0x10d7b108u));
  /* 10d5113b push 0x10d80450 */
  push32((uint32_t)(0x10d80450u));
  /* 10d51140 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d51146u);
  /* 10d51146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5114b call 0x10d53750 */
  push32(0x10d51150u); f_10d53750();
  /* 10d51150 mov esi, esp */
  ESI = (ESP);
  /* 10d51152 push 0x10d7b100 */
  push32((uint32_t)(0x10d7b100u));
  /* 10d51157 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d5115c call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d51162u);
  /* 10d51162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51167 call 0x10d53750 */
  push32(0x10d5116cu); f_10d53750();
  /* 10d5116c mov esi, esp */
  ESI = (ESP);
  /* 10d5116e push 0x10d7b0f8 */
  push32((uint32_t)(0x10d7b0f8u));
  /* 10d51173 push 0x10d80460 */
  push32((uint32_t)(0x10d80460u));
  /* 10d51178 call dword ptr [0x10d83450] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83450))), 0x10d5117eu);
  /* 10d5117e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51183 call 0x10d53750 */
  push32(0x10d51188u); f_10d53750();
  /* 10d51188 mov esi, esp */
  ESI = (ESP);
  /* 10d5118a push 0x10d7b0f0 */
  push32((uint32_t)(0x10d7b0f0u));
  /* 10d5118f push 0x10d803e0 */
  push32((uint32_t)(0x10d803e0u));
  /* 10d51194 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d5119au);
  /* 10d5119a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5119d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5119f call 0x10d53750 */
  push32(0x10d511a4u); f_10d53750();
  /* 10d511a4 mov esi, esp */
  ESI = (ESP);
  /* 10d511a6 push 0x10d7b0e8 */
  push32((uint32_t)(0x10d7b0e8u));
  /* 10d511ab push 0x10d803f0 */
  push32((uint32_t)(0x10d803f0u));
  /* 10d511b0 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d511b6u);
  /* 10d511b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d511b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d511bb call 0x10d53750 */
  push32(0x10d511c0u); f_10d53750();
  /* 10d511c0 mov esi, esp */
  ESI = (ESP);
  /* 10d511c2 push 0x10d7b0e0 */
  push32((uint32_t)(0x10d7b0e0u));
  /* 10d511c7 push 0x10d803e8 */
  push32((uint32_t)(0x10d803e8u));
  /* 10d511cc call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d511d2u);
  /* 10d511d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d511d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d511d7 call 0x10d53750 */
  push32(0x10d511dcu); f_10d53750();
  /* 10d511dc mov esi, esp */
  ESI = (ESP);
  /* 10d511de push 0x10d7b0d8 */
  push32((uint32_t)(0x10d7b0d8u));
  /* 10d511e3 push 0x10d80400 */
  push32((uint32_t)(0x10d80400u));
  /* 10d511e8 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d511eeu);
  /* 10d511ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d511f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d511f3 call 0x10d53750 */
  push32(0x10d511f8u); f_10d53750();
  /* 10d511f8 mov esi, esp */
  ESI = (ESP);
  /* 10d511fa push 0x10d7b0d0 */
  push32((uint32_t)(0x10d7b0d0u));
  /* 10d511ff push 0x10d803f8 */
  push32((uint32_t)(0x10d803f8u));
  /* 10d51204 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d5120au);
  /* 10d5120a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5120d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5120f call 0x10d53750 */
  push32(0x10d51214u); f_10d53750();
  /* 10d51214 mov esi, esp */
  ESI = (ESP);
  /* 10d51216 push 0x10d7b0c8 */
  push32((uint32_t)(0x10d7b0c8u));
  /* 10d5121b push 0x10d80410 */
  push32((uint32_t)(0x10d80410u));
  /* 10d51220 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d51226u);
  /* 10d51226 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51229 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5122b call 0x10d53750 */
  push32(0x10d51230u); f_10d53750();
  /* 10d51230 mov esi, esp */
  ESI = (ESP);
  /* 10d51232 push 0x10d7b0c0 */
  push32((uint32_t)(0x10d7b0c0u));
  /* 10d51237 push 0x10d80408 */
  push32((uint32_t)(0x10d80408u));
  /* 10d5123c call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d51242u);
  /* 10d51242 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51245 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51247 call 0x10d53750 */
  push32(0x10d5124cu); f_10d53750();
  /* 10d5124c mov esi, esp */
  ESI = (ESP);
  /* 10d5124e push 0x10d7b0b8 */
  push32((uint32_t)(0x10d7b0b8u));
  /* 10d51253 push 0x10d80420 */
  push32((uint32_t)(0x10d80420u));
  /* 10d51258 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d5125eu);
  /* 10d5125e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51261 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51263 call 0x10d53750 */
  push32(0x10d51268u); f_10d53750();
  /* 10d51268 mov esi, esp */
  ESI = (ESP);
  /* 10d5126a push 0x10d7b0b0 */
  push32((uint32_t)(0x10d7b0b0u));
  /* 10d5126f push 0x10d80418 */
  push32((uint32_t)(0x10d80418u));
  /* 10d51274 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d5127au);
  /* 10d5127a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5127d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5127f call 0x10d53750 */
  push32(0x10d51284u); f_10d53750();
  /* 10d51284 mov esi, esp */
  ESI = (ESP);
  /* 10d51286 push 0x10d7b0a4 */
  push32((uint32_t)(0x10d7b0a4u));
  /* 10d5128b push 0x10d80488 */
  push32((uint32_t)(0x10d80488u));
  /* 10d51290 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d51296u);
  /* 10d51296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51299 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5129b call 0x10d53750 */
  push32(0x10d512a0u); f_10d53750();
  /* 10d512a0 mov esi, esp */
  ESI = (ESP);
  /* 10d512a2 push 0x10d7b098 */
  push32((uint32_t)(0x10d7b098u));
  /* 10d512a7 push 0x10d804a8 */
  push32((uint32_t)(0x10d804a8u));
  /* 10d512ac call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d512b2u);
  /* 10d512b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d512b5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d512b7 call 0x10d53750 */
  push32(0x10d512bcu); f_10d53750();
  /* 10d512bc mov esi, esp */
  ESI = (ESP);
  /* 10d512be push 0x10d7b08c */
  push32((uint32_t)(0x10d7b08cu));
  /* 10d512c3 push 0x10d804b0 */
  push32((uint32_t)(0x10d804b0u));
  /* 10d512c8 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d512ceu);
  /* 10d512ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d512d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d512d3 call 0x10d53750 */
  push32(0x10d512d8u); f_10d53750();
  /* 10d512d8 mov esi, esp */
  ESI = (ESP);
  /* 10d512da push 0x10d7b080 */
  push32((uint32_t)(0x10d7b080u));
  /* 10d512df push 0x10d80498 */
  push32((uint32_t)(0x10d80498u));
  /* 10d512e4 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d512eau);
  /* 10d512ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d512ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d512ef call 0x10d53750 */
  push32(0x10d512f4u); f_10d53750();
  /* 10d512f4 mov esi, esp */
  ESI = (ESP);
  /* 10d512f6 push 0x10d7b074 */
  push32((uint32_t)(0x10d7b074u));
  /* 10d512fb push 0x10d804a0 */
  push32((uint32_t)(0x10d804a0u));
  /* 10d51300 call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d51306u);
  /* 10d51306 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51309 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5130b call 0x10d53750 */
  push32(0x10d51310u); f_10d53750();
  /* 10d51310 mov esi, esp */
  ESI = (ESP);
  /* 10d51312 push 0x10d7b068 */
  push32((uint32_t)(0x10d7b068u));
  /* 10d51317 push 0x10d80490 */
  push32((uint32_t)(0x10d80490u));
  /* 10d5131c call dword ptr [0x10d83448] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83448))), 0x10d51322u);
  /* 10d51322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51325 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51327 call 0x10d53750 */
  push32(0x10d5132cu); f_10d53750();
  /* 10d5132c mov esi, esp */
  ESI = (ESP);
  /* 10d5132e push 0x10d7b058 */
  push32((uint32_t)(0x10d7b058u));
  /* 10d51333 push 0x10d80478 */
  push32((uint32_t)(0x10d80478u));
  /* 10d51338 call dword ptr [0x10d83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83458))), 0x10d5133eu);
  /* 10d5133e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51341 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51343 call 0x10d53750 */
  push32(0x10d51348u); f_10d53750();
  /* 10d51348 mov esi, esp */
  ESI = (ESP);
  /* 10d5134a push 0x10d7b048 */
  push32((uint32_t)(0x10d7b048u));
  /* 10d5134f push 0x10d80480 */
  push32((uint32_t)(0x10d80480u));
  /* 10d51354 call dword ptr [0x10d83458] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83458))), 0x10d5135au);
  /* 10d5135a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5135d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5135f call 0x10d53750 */
  push32(0x10d51364u); f_10d53750();
  /* 10d51364 mov esi, esp */
  ESI = (ESP);
  /* 10d51366 push 0x10d7b03c */
  push32((uint32_t)(0x10d7b03cu));
  /* 10d5136b push 0x10d80468 */
  push32((uint32_t)(0x10d80468u));
  /* 10d51370 call dword ptr [0x10d8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8345c))), 0x10d51376u);
  /* 10d51376 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51379 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5137b call 0x10d53750 */
  push32(0x10d51380u); f_10d53750();
  /* 10d51380 mov esi, esp */
  ESI = (ESP);
  /* 10d51382 push 0x10d7b030 */
  push32((uint32_t)(0x10d7b030u));
  /* 10d51387 push 0x10d80470 */
  push32((uint32_t)(0x10d80470u));
  /* 10d5138c call dword ptr [0x10d8345c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8345c))), 0x10d51392u);
  /* 10d51392 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51395 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51397 call 0x10d53750 */
  push32(0x10d5139cu); f_10d53750();
  /* 10d5139c mov esi, esp */
  ESI = (ESP);
  /* 10d5139e call dword ptr [0x10d83454] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83454))), 0x10d513a4u);
  /* 10d513a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d513a6 call 0x10d53750 */
  push32(0x10d513abu); f_10d53750();
  /* 10d513ab mov esi, esp */
  ESI = (ESP);
  /* 10d513ad push 0x10d7b024 */
  push32((uint32_t)(0x10d7b024u));
  /* 10d513b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d513b4 call dword ptr [0x10d83464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83464))), 0x10d513bau);
  /* 10d513ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d513bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d513bf call 0x10d53750 */
  push32(0x10d513c4u); f_10d53750();
  /* 10d513c4 mov esi, esp */
  ESI = (ESP);
  /* 10d513c6 push 0x10d7b01c */
  push32((uint32_t)(0x10d7b01cu));
  /* 10d513cb push 5 */
  push32((uint32_t)(0x5u));
  /* 10d513cd call dword ptr [0x10d83464] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83464))), 0x10d513d3u);
  /* 10d513d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d513d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d513d8 call 0x10d53750 */
  push32(0x10d513ddu); f_10d53750();
  /* 10d513dd mov esi, esp */
  ESI = (ESP);
  /* 10d513df push 1 */
  push32((uint32_t)(0x1u));
  /* 10d513e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d513e3 call dword ptr [0x10d83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83468))), 0x10d513e9u);
  /* 10d513e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d513ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d513ee call 0x10d53750 */
  push32(0x10d513f3u); f_10d53750();
  /* 10d513f3 mov esi, esp */
  ESI = (ESP);
  /* 10d513f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d513f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d513f9 call dword ptr [0x10d83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83468))), 0x10d513ffu);
  /* 10d513ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51402 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51404 call 0x10d53750 */
  push32(0x10d51409u); f_10d53750();
  /* 10d51409 mov esi, esp */
  ESI = (ESP);
  /* 10d5140b push 0x23 */
  push32((uint32_t)(0x23u));
  /* 10d5140d push 5 */
  push32((uint32_t)(0x5u));
  /* 10d5140f call dword ptr [0x10d83468] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83468))), 0x10d51415u);
  /* 10d51415 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51418 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5141a call 0x10d53750 */
  push32(0x10d5141fu); f_10d53750();
  /* 10d5141f mov esi, esp */
  ESI = (ESP);
  /* 10d51421 push 0x10d7b03c */
  push32((uint32_t)(0x10d7b03cu));
  /* 10d51426 push 0x10d7b0c8 */
  push32((uint32_t)(0x10d7b0c8u));
  /* 10d5142b call dword ptr [0x10d83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83460))), 0x10d51431u);
  /* 10d51431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51436 call 0x10d53750 */
  push32(0x10d5143bu); f_10d53750();
  /* 10d5143b mov esi, esp */
  ESI = (ESP);
  /* 10d5143d push 0x10d7b030 */
  push32((uint32_t)(0x10d7b030u));
  /* 10d51442 push 0x10d7b0c8 */
  push32((uint32_t)(0x10d7b0c8u));
  /* 10d51447 call dword ptr [0x10d83460] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83460))), 0x10d5144du);
  /* 10d5144d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51450 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51452 call 0x10d53750 */
  push32(0x10d51457u); f_10d53750();
  /* 10d51457 pop edi */
  EDI = (pop32());
  /* 10d51458 pop esi */
  ESI = (pop32());
  /* 10d51459 pop ebx */
  EBX = (pop32());
  /* 10d5145a add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5145d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5145f call 0x10d53750 */
  push32(0x10d51464u); f_10d53750();
  /* 10d51464 mov esp, ebp */
  ESP = (EBP);
  /* 10d51466 pop ebp */
  EBP = (pop32());
  /* 10d51467 ret  */
  ESPCHK(0x10d51090u, _esp0);
  ESP += 4; return;
}

/* FUN_10001560 @ 0x10d51560 (6735 bytes, 1993 insns) */
void f_10d51560(void) {
  FTRACE(0x10d51560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d51560 push ebp */
  push32((uint32_t)(EBP));
  /* 10d51561 mov ebp, esp */
  EBP = (ESP);
  /* 10d51563 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d51566 push ebx */
  push32((uint32_t)(EBX));
  /* 10d51567 push esi */
  push32((uint32_t)(ESI));
  /* 10d51568 push edi */
  push32((uint32_t)(EDI));
  /* 10d51569 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d5156c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d51571 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d51576 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d51578 mov esi, esp */
  ESI = (ESP);
  /* 10d5157a push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d5157c call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51582u);
  /* 10d51582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51585 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51587 call 0x10d53750 */
  push32(0x10d5158cu); f_10d53750();
  /* 10d5158c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51591 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51593 je 0x10d51a15 */
  if (C.zf) goto L_10d51a15;
  /* 10d51599 mov esi, esp */
  ESI = (ESP);
  /* 10d5159b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5159d push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d5159f call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d515a5u);
  /* 10d515a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d515a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d515aa call 0x10d53750 */
  push32(0x10d515afu); f_10d53750();
  /* 10d515af mov esi, esp */
  ESI = (ESP);
  /* 10d515b1 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d515b6 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d515b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d515ba call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d515c0u);
  /* 10d515c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d515c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d515c5 call 0x10d53750 */
  push32(0x10d515cau); f_10d53750();
  /* 10d515ca mov esi, esp */
  ESI = (ESP);
  /* 10d515cc push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d515d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d515d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d515d5 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d515dbu);
  /* 10d515db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d515de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d515e0 call 0x10d53750 */
  push32(0x10d515e5u); f_10d53750();
  /* 10d515e5 mov esi, esp */
  ESI = (ESP);
  /* 10d515e7 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d515ec push 0 */
  push32((uint32_t)(0x0u));
  /* 10d515ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d515f0 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d515f6u);
  /* 10d515f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d515f9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d515fb call 0x10d53750 */
  push32(0x10d51600u); f_10d53750();
  /* 10d51600 mov esi, esp */
  ESI = (ESP);
  /* 10d51602 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d51607 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d51609 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5160b call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51611u);
  /* 10d51611 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51616 call 0x10d53750 */
  push32(0x10d5161bu); f_10d53750();
  /* 10d5161b mov esi, esp */
  ESI = (ESP);
  /* 10d5161d push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d51622 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51624 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51626 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d5162cu);
  /* 10d5162c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5162f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51631 call 0x10d53750 */
  push32(0x10d51636u); f_10d53750();
  /* 10d51636 mov esi, esp */
  ESI = (ESP);
  /* 10d51638 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d5163d push 4 */
  push32((uint32_t)(0x4u));
  /* 10d5163f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51641 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51647u);
  /* 10d51647 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5164a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5164c call 0x10d53750 */
  push32(0x10d51651u); f_10d53750();
  /* 10d51651 mov esi, esp */
  ESI = (ESP);
  /* 10d51653 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d51658 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d5165a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5165c call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51662u);
  /* 10d51662 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51665 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51667 call 0x10d53750 */
  push32(0x10d5166cu); f_10d53750();
  /* 10d5166c mov esi, esp */
  ESI = (ESP);
  /* 10d5166e push 0x989680 */
  push32((uint32_t)(0x989680u));
  /* 10d51673 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51675 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51677 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d5167du);
  /* 10d5167d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51680 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51682 call 0x10d53750 */
  push32(0x10d51687u); f_10d53750();
  /* 10d51687 mov esi, esp */
  ESI = (ESP);
  /* 10d51689 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d5168e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51690 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51692 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51698u);
  /* 10d51698 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5169b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5169d call 0x10d53750 */
  push32(0x10d516a2u); f_10d53750();
  /* 10d516a2 mov esi, esp */
  ESI = (ESP);
  /* 10d516a4 push 0x2710 */
  push32((uint32_t)(0x2710u));
  /* 10d516a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d516ab push 1 */
  push32((uint32_t)(0x1u));
  /* 10d516ad call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d516b3u);
  /* 10d516b3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d516b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d516b8 call 0x10d53750 */
  push32(0x10d516bdu); f_10d53750();
  /* 10d516bd mov esi, esp */
  ESI = (ESP);
  /* 10d516bf push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10d516c4 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d516c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d516c8 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d516ceu);
  /* 10d516ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d516d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d516d3 call 0x10d53750 */
  push32(0x10d516d8u); f_10d53750();
  /* 10d516d8 mov esi, esp */
  ESI = (ESP);
  /* 10d516da push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10d516df push 4 */
  push32((uint32_t)(0x4u));
  /* 10d516e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d516e3 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d516e9u);
  /* 10d516e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d516ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d516ee call 0x10d53750 */
  push32(0x10d516f3u); f_10d53750();
  /* 10d516f3 mov esi, esp */
  ESI = (ESP);
  /* 10d516f5 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10d516fa push 3 */
  push32((uint32_t)(0x3u));
  /* 10d516fc push 5 */
  push32((uint32_t)(0x5u));
  /* 10d516fe call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51704u);
  /* 10d51704 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51707 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51709 call 0x10d53750 */
  push32(0x10d5170eu); f_10d53750();
  /* 10d5170e mov esi, esp */
  ESI = (ESP);
  /* 10d51710 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10d51715 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51717 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51719 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d5171fu);
  /* 10d5171f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51722 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51724 call 0x10d53750 */
  push32(0x10d51729u); f_10d53750();
  /* 10d51729 mov esi, esp */
  ESI = (ESP);
  /* 10d5172b push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10d51730 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51732 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51734 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d5173au);
  /* 10d5173a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5173d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5173f call 0x10d53750 */
  push32(0x10d51744u); f_10d53750();
  /* 10d51744 mov esi, esp */
  ESI = (ESP);
  /* 10d51746 push 0x186a0 */
  push32((uint32_t)(0x186a0u));
  /* 10d5174b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5174d push 5 */
  push32((uint32_t)(0x5u));
  /* 10d5174f call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51755u);
  /* 10d51755 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51758 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5175a call 0x10d53750 */
  push32(0x10d5175fu); f_10d53750();
  /* 10d5175f mov esi, esp */
  ESI = (ESP);
  /* 10d51761 push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10d51766 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51768 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d5176a call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d51770u);
  /* 10d51770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51773 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51775 call 0x10d53750 */
  push32(0x10d5177au); f_10d53750();
  /* 10d5177a mov esi, esp */
  ESI = (ESP);
  /* 10d5177c push 0xf4240 */
  push32((uint32_t)(0xf4240u));
  /* 10d51781 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d51783 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51785 call dword ptr [0x10d83408] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83408))), 0x10d5178bu);
  /* 10d5178b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5178e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51790 call 0x10d53750 */
  push32(0x10d51795u); f_10d53750();
  /* 10d51795 mov esi, esp */
  ESI = (ESP);
  /* 10d51797 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d51799 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5179b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5179d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5179f push 0x10d7b1b8 */
  push32((uint32_t)(0x10d7b1b8u));
  /* 10d517a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d517a6 call dword ptr [0x10d83400] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83400))), 0x10d517acu);
  /* 10d517ac add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d517af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d517b1 call 0x10d53750 */
  push32(0x10d517b6u); f_10d53750();
  /* 10d517b6 mov esi, esp */
  ESI = (ESP);
  /* 10d517b8 push 0x10d7b1b0 */
  push32((uint32_t)(0x10d7b1b0u));
  /* 10d517bd call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d517c3u);
  /* 10d517c3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d517c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d517c8 call 0x10d53750 */
  push32(0x10d517cdu); f_10d53750();
  /* 10d517cd mov esi, esp */
  ESI = (ESP);
  /* 10d517cf push 0x10d7b1a4 */
  push32((uint32_t)(0x10d7b1a4u));
  /* 10d517d4 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d517dau);
  /* 10d517da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d517dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d517df call 0x10d53750 */
  push32(0x10d517e4u); f_10d53750();
  /* 10d517e4 mov esi, esp */
  ESI = (ESP);
  /* 10d517e6 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d517eb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d517ed call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d517f3u);
  /* 10d517f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d517f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d517f8 call 0x10d53750 */
  push32(0x10d517fdu); f_10d53750();
  /* 10d517fd mov esi, esp */
  ESI = (ESP);
  /* 10d517ff push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51801 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51803 push 0x10d80428 */
  push32((uint32_t)(0x10d80428u));
  /* 10d51808 call dword ptr [0x10d8340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8340c))), 0x10d5180eu);
  /* 10d5180e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51811 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51813 call 0x10d53750 */
  push32(0x10d51818u); f_10d53750();
  /* 10d51818 mov esi, esp */
  ESI = (ESP);
  /* 10d5181a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5181c push 0x10d80478 */
  push32((uint32_t)(0x10d80478u));
  /* 10d51821 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51823 call dword ptr [0x10d8341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8341c))), 0x10d51829u);
  /* 10d51829 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5182c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5182e call 0x10d53750 */
  push32(0x10d51833u); f_10d53750();
  /* 10d51833 mov esi, esp */
  ESI = (ESP);
  /* 10d51835 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51837 push 0x10d80480 */
  push32((uint32_t)(0x10d80480u));
  /* 10d5183c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5183e call dword ptr [0x10d8341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8341c))), 0x10d51844u);
  /* 10d51844 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51847 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51849 call 0x10d53750 */
  push32(0x10d5184eu); f_10d53750();
  /* 10d5184e mov esi, esp */
  ESI = (ESP);
  /* 10d51850 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51852 push 0x10d803e0 */
  push32((uint32_t)(0x10d803e0u));
  /* 10d51857 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51859 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d5185fu);
  /* 10d5185f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51862 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51864 call 0x10d53750 */
  push32(0x10d51869u); f_10d53750();
  /* 10d51869 mov esi, esp */
  ESI = (ESP);
  /* 10d5186b push 5 */
  push32((uint32_t)(0x5u));
  /* 10d5186d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5186f call dword ptr [0x10d83418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83418))), 0x10d51875u);
  /* 10d51875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51878 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5187a call 0x10d53750 */
  push32(0x10d5187fu); f_10d53750();
  /* 10d5187f mov esi, esp */
  ESI = (ESP);
  /* 10d51881 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d51883 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d51885 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5188bu);
  /* 10d5188b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5188e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51890 call 0x10d53750 */
  push32(0x10d51895u); f_10d53750();
  /* 10d51895 mov esi, esp */
  ESI = (ESP);
  /* 10d51897 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d51899 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d5189b call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d518a1u);
  /* 10d518a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d518a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d518a6 call 0x10d53750 */
  push32(0x10d518abu); f_10d53750();
  /* 10d518ab mov esi, esp */
  ESI = (ESP);
  /* 10d518ad push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d518af push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d518b1 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d518b7u);
  /* 10d518b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d518ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d518bc call 0x10d53750 */
  push32(0x10d518c1u); f_10d53750();
  /* 10d518c1 mov esi, esp */
  ESI = (ESP);
  /* 10d518c3 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d518c5 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d518c7 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d518cdu);
  /* 10d518cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d518d0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d518d2 call 0x10d53750 */
  push32(0x10d518d7u); f_10d53750();
  /* 10d518d7 mov esi, esp */
  ESI = (ESP);
  /* 10d518d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d518db push 0x10d803f0 */
  push32((uint32_t)(0x10d803f0u));
  /* 10d518e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d518e2 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d518e8u);
  /* 10d518e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d518eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d518ed call 0x10d53750 */
  push32(0x10d518f2u); f_10d53750();
  /* 10d518f2 mov esi, esp */
  ESI = (ESP);
  /* 10d518f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d518f6 push 0x10d80488 */
  push32((uint32_t)(0x10d80488u));
  /* 10d518fb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d518fd call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51903u);
  /* 10d51903 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51906 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51908 call 0x10d53750 */
  push32(0x10d5190du); f_10d53750();
  /* 10d5190d mov esi, esp */
  ESI = (ESP);
  /* 10d5190f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51911 push 0x10d80420 */
  push32((uint32_t)(0x10d80420u));
  /* 10d51916 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51918 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d5191eu);
  /* 10d5191e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51921 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51923 call 0x10d53750 */
  push32(0x10d51928u); f_10d53750();
  /* 10d51928 mov esi, esp */
  ESI = (ESP);
  /* 10d5192a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5192c push 0x10d80418 */
  push32((uint32_t)(0x10d80418u));
  /* 10d51931 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51933 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51939u);
  /* 10d51939 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5193c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5193e call 0x10d53750 */
  push32(0x10d51943u); f_10d53750();
  /* 10d51943 mov esi, esp */
  ESI = (ESP);
  /* 10d51945 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51947 push 0x10d80400 */
  push32((uint32_t)(0x10d80400u));
  /* 10d5194c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5194e call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51954u);
  /* 10d51954 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51957 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51959 call 0x10d53750 */
  push32(0x10d5195eu); f_10d53750();
  /* 10d5195e mov esi, esp */
  ESI = (ESP);
  /* 10d51960 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51962 push 0x10d80408 */
  push32((uint32_t)(0x10d80408u));
  /* 10d51967 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51969 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d5196fu);
  /* 10d5196f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51972 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51974 call 0x10d53750 */
  push32(0x10d51979u); f_10d53750();
  /* 10d51979 mov esi, esp */
  ESI = (ESP);
  /* 10d5197b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5197d push 0x10d804a8 */
  push32((uint32_t)(0x10d804a8u));
  /* 10d51982 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51984 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d5198au);
  /* 10d5198a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5198d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5198f call 0x10d53750 */
  push32(0x10d51994u); f_10d53750();
  /* 10d51994 mov esi, esp */
  ESI = (ESP);
  /* 10d51996 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51998 push 0x10d803f8 */
  push32((uint32_t)(0x10d803f8u));
  /* 10d5199d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5199f call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d519a5u);
  /* 10d519a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d519a8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d519aa call 0x10d53750 */
  push32(0x10d519afu); f_10d53750();
  /* 10d519af mov esi, esp */
  ESI = (ESP);
  /* 10d519b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d519b3 call dword ptr [0x10d83428] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83428))), 0x10d519b9u);
  /* 10d519b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d519bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d519be call 0x10d53750 */
  push32(0x10d519c3u); f_10d53750();
  /* 10d519c3 mov esi, esp */
  ESI = (ESP);
  /* 10d519c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d519c7 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d519c9 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d519cfu);
  /* 10d519cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d519d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d519d4 call 0x10d53750 */
  push32(0x10d519d9u); f_10d53750();
  /* 10d519d9 mov esi, esp */
  ESI = (ESP);
  /* 10d519db push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d519dd call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d519e3u);
  /* 10d519e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d519e6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d519e8 call 0x10d53750 */
  push32(0x10d519edu); f_10d53750();
  /* 10d519ed mov esi, esp */
  ESI = (ESP);
  /* 10d519ef push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d519f1 call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d519f7u);
  /* 10d519f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d519fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d519fc call 0x10d53750 */
  push32(0x10d51a01u); f_10d53750();
  /* 10d51a01 mov esi, esp */
  ESI = (ESP);
  /* 10d51a03 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d51a05 call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d51a0bu);
  /* 10d51a0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a10 call 0x10d53750 */
  push32(0x10d51a15u); f_10d53750();
L_10d51a15:;
  /* 10d51a15 mov esi, esp */
  ESI = (ESP);
  /* 10d51a17 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d51a19 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51a1fu);
  /* 10d51a1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a24 call 0x10d53750 */
  push32(0x10d51a29u); f_10d53750();
  /* 10d51a29 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51a2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51a30 je 0x10d51aef */
  if (C.zf) goto L_10d51aef;
  /* 10d51a36 mov esi, esp */
  ESI = (ESP);
  /* 10d51a38 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d51a3a call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51a40u);
  /* 10d51a40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a45 call 0x10d53750 */
  push32(0x10d51a4au); f_10d53750();
  /* 10d51a4a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51a4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51a51 je 0x10d51aef */
  if (C.zf) goto L_10d51aef;
  /* 10d51a57 mov esi, esp */
  ESI = (ESP);
  /* 10d51a59 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d51a5b call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51a61u);
  /* 10d51a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a64 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a66 call 0x10d53750 */
  push32(0x10d51a6bu); f_10d53750();
  /* 10d51a6b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51a70 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d51a73 mov esi, esp */
  ESI = (ESP);
  /* 10d51a75 push eax */
  push32((uint32_t)(EAX));
  /* 10d51a76 push 0x63 */
  push32((uint32_t)(0x63u));
  /* 10d51a78 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51a7eu);
  /* 10d51a7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a83 call 0x10d53750 */
  push32(0x10d51a88u); f_10d53750();
  /* 10d51a88 mov esi, esp */
  ESI = (ESP);
  /* 10d51a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51a8c push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d51a8e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51a94u);
  /* 10d51a94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51a97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51a99 call 0x10d53750 */
  push32(0x10d51a9eu); f_10d53750();
  /* 10d51a9e mov esi, esp */
  ESI = (ESP);
  /* 10d51aa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51aa2 push 0x10d804b0 */
  push32((uint32_t)(0x10d804b0u));
  /* 10d51aa7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51aa9 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51aafu);
  /* 10d51aaf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ab2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51ab4 call 0x10d53750 */
  push32(0x10d51ab9u); f_10d53750();
  /* 10d51ab9 mov esi, esp */
  ESI = (ESP);
  /* 10d51abb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51abd push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 10d51ac2 push 0x10d80438 */
  push32((uint32_t)(0x10d80438u));
  /* 10d51ac7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51ac9 call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d51acfu);
  /* 10d51acf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ad2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51ad4 call 0x10d53750 */
  push32(0x10d51ad9u); f_10d53750();
  /* 10d51ad9 mov esi, esp */
  ESI = (ESP);
  /* 10d51adb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51add push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d51adf call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51ae5u);
  /* 10d51ae5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ae8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51aea call 0x10d53750 */
  push32(0x10d51aefu); f_10d53750();
L_10d51aef:;
  /* 10d51aef mov esi, esp */
  ESI = (ESP);
  /* 10d51af1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d51af3 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51af9u);
  /* 10d51af9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51afc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51afe call 0x10d53750 */
  push32(0x10d51b03u); f_10d53750();
  /* 10d51b03 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51b08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51b0a je 0x10d51ba8 */
  if (C.zf) goto L_10d51ba8;
  /* 10d51b10 mov esi, esp */
  ESI = (ESP);
  /* 10d51b12 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d51b14 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51b1au);
  /* 10d51b1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51b1d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51b1f call 0x10d53750 */
  push32(0x10d51b24u); f_10d53750();
  /* 10d51b24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51b2b jne 0x10d51ba8 */
  if (!C.zf) goto L_10d51ba8;
  /* 10d51b2d mov esi, esp */
  ESI = (ESP);
  /* 10d51b2f push 0x10d804b0 */
  push32((uint32_t)(0x10d804b0u));
  /* 10d51b34 push 0x10d80438 */
  push32((uint32_t)(0x10d80438u));
  /* 10d51b39 call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d51b3fu);
  /* 10d51b3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51b42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51b44 call 0x10d53750 */
  push32(0x10d51b49u); f_10d53750();
  /* 10d51b49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51b4b jle 0x10d51ba8 */
  if ((C.zf||C.sf!=C.of)) goto L_10d51ba8;
  /* 10d51b4d mov esi, esp */
  ESI = (ESP);
  /* 10d51b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51b51 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d51b53 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51b59u);
  /* 10d51b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51b5c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51b5e call 0x10d53750 */
  push32(0x10d51b63u); f_10d53750();
  /* 10d51b63 mov esi, esp */
  ESI = (ESP);
  /* 10d51b65 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d51b6a push 3 */
  push32((uint32_t)(0x3u));
  /* 10d51b6c call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d51b72u);
  /* 10d51b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51b75 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51b77 call 0x10d53750 */
  push32(0x10d51b7cu); f_10d53750();
  /* 10d51b7c mov esi, esp */
  ESI = (ESP);
  /* 10d51b7e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51b80 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d51b82 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51b88u);
  /* 10d51b88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51b8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51b8d call 0x10d53750 */
  push32(0x10d51b92u); f_10d53750();
  /* 10d51b92 mov esi, esp */
  ESI = (ESP);
  /* 10d51b94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51b96 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d51b98 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51b9eu);
  /* 10d51b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51ba3 call 0x10d53750 */
  push32(0x10d51ba8u); f_10d53750();
L_10d51ba8:;
  /* 10d51ba8 mov esi, esp */
  ESI = (ESP);
  /* 10d51baa push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d51bac call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51bb2u);
  /* 10d51bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51bb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51bb7 call 0x10d53750 */
  push32(0x10d51bbcu); f_10d53750();
  /* 10d51bbc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51bc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51bc3 je 0x10d51c6a */
  if (C.zf) goto L_10d51c6a;
  /* 10d51bc9 mov esi, esp */
  ESI = (ESP);
  /* 10d51bcb push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d51bcd call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51bd3u);
  /* 10d51bd3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51bd6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51bd8 call 0x10d53750 */
  push32(0x10d51bddu); f_10d53750();
  /* 10d51bdd and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51be2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51be4 jne 0x10d51c6a */
  if (!C.zf) goto L_10d51c6a;
  /* 10d51bea mov esi, esp */
  ESI = (ESP);
  /* 10d51bec push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d51bee call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51bf4u);
  /* 10d51bf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51bf7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51bf9 call 0x10d53750 */
  push32(0x10d51bfeu); f_10d53750();
  /* 10d51bfe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51c03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51c05 je 0x10d51c6a */
  if (C.zf) goto L_10d51c6a;
  /* 10d51c07 mov esi, esp */
  ESI = (ESP);
  /* 10d51c09 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51c0b push 0x49 */
  push32((uint32_t)(0x49u));
  /* 10d51c0d call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51c13u);
  /* 10d51c13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c16 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c18 call 0x10d53750 */
  push32(0x10d51c1du); f_10d53750();
  /* 10d51c1d mov esi, esp */
  ESI = (ESP);
  /* 10d51c1f push 0x10d7b19c */
  push32((uint32_t)(0x10d7b19cu));
  /* 10d51c24 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d51c2au);
  /* 10d51c2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c2d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c2f call 0x10d53750 */
  push32(0x10d51c34u); f_10d53750();
  /* 10d51c34 mov esi, esp */
  ESI = (ESP);
  /* 10d51c36 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10d51c3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51c3d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51c3f call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d51c45u);
  /* 10d51c45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c48 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c4a call 0x10d53750 */
  push32(0x10d51c4fu); f_10d53750();
  /* 10d51c4f mov esi, esp */
  ESI = (ESP);
  /* 10d51c51 push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d51c56 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d51c58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51c5a call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d51c60u);
  /* 10d51c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c63 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c65 call 0x10d53750 */
  push32(0x10d51c6au); f_10d53750();
L_10d51c6a:;
  /* 10d51c6a mov esi, esp */
  ESI = (ESP);
  /* 10d51c6c push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d51c6e call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51c74u);
  /* 10d51c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c79 call 0x10d53750 */
  push32(0x10d51c7eu); f_10d53750();
  /* 10d51c7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51c83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51c85 je 0x10d51d0f */
  if (C.zf) goto L_10d51d0f;
  /* 10d51c8b mov esi, esp */
  ESI = (ESP);
  /* 10d51c8d push 3 */
  push32((uint32_t)(0x3u));
  /* 10d51c8f call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d51c95u);
  /* 10d51c95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51c98 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51c9a call 0x10d53750 */
  push32(0x10d51c9fu); f_10d53750();
  /* 10d51c9f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51ca4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51ca6 je 0x10d51d0f */
  if (C.zf) goto L_10d51d0f;
  /* 10d51ca8 mov esi, esp */
  ESI = (ESP);
  /* 10d51caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51cac push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d51cae call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51cb4u);
  /* 10d51cb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51cb7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51cb9 call 0x10d53750 */
  push32(0x10d51cbeu); f_10d53750();
  /* 10d51cbe mov esi, esp */
  ESI = (ESP);
  /* 10d51cc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51cc2 push 0x10d804b0 */
  push32((uint32_t)(0x10d804b0u));
  /* 10d51cc7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51cc9 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51ccfu);
  /* 10d51ccf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51cd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51cd4 call 0x10d53750 */
  push32(0x10d51cd9u); f_10d53750();
  /* 10d51cd9 mov esi, esp */
  ESI = (ESP);
  /* 10d51cdb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51cdd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d51ce2 push 0x10d80448 */
  push32((uint32_t)(0x10d80448u));
  /* 10d51ce7 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51ce9 call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d51cefu);
  /* 10d51cef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51cf2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51cf4 call 0x10d53750 */
  push32(0x10d51cf9u); f_10d53750();
  /* 10d51cf9 mov esi, esp */
  ESI = (ESP);
  /* 10d51cfb push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51cfd push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d51cff call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51d05u);
  /* 10d51d05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d08 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d0a call 0x10d53750 */
  push32(0x10d51d0fu); f_10d53750();
L_10d51d0f:;
  /* 10d51d0f mov esi, esp */
  ESI = (ESP);
  /* 10d51d11 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d51d13 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51d19u);
  /* 10d51d19 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d1e call 0x10d53750 */
  push32(0x10d51d23u); f_10d53750();
  /* 10d51d23 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51d28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51d2a je 0x10d51db2 */
  if (C.zf) goto L_10d51db2;
  /* 10d51d30 mov esi, esp */
  ESI = (ESP);
  /* 10d51d32 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 10d51d34 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51d3au);
  /* 10d51d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d3d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d3f call 0x10d53750 */
  push32(0x10d51d44u); f_10d53750();
  /* 10d51d44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51d49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51d4b jne 0x10d51db2 */
  if (!C.zf) goto L_10d51db2;
  /* 10d51d4d mov esi, esp */
  ESI = (ESP);
  /* 10d51d4f push 0x10d804b0 */
  push32((uint32_t)(0x10d804b0u));
  /* 10d51d54 push 0x10d80448 */
  push32((uint32_t)(0x10d80448u));
  /* 10d51d59 call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d51d5fu);
  /* 10d51d5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d64 call 0x10d53750 */
  push32(0x10d51d69u); f_10d53750();
  /* 10d51d69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51d6b jle 0x10d51db2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d51db2;
  /* 10d51d6d mov esi, esp */
  ESI = (ESP);
  /* 10d51d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51d71 push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d51d73 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51d79u);
  /* 10d51d79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d7e call 0x10d53750 */
  push32(0x10d51d83u); f_10d53750();
  /* 10d51d83 mov esi, esp */
  ESI = (ESP);
  /* 10d51d85 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d51d8a push 4 */
  push32((uint32_t)(0x4u));
  /* 10d51d8c call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d51d92u);
  /* 10d51d92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51d95 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51d97 call 0x10d53750 */
  push32(0x10d51d9cu); f_10d53750();
  /* 10d51d9c mov esi, esp */
  ESI = (ESP);
  /* 10d51d9e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51da0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10d51da2 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51da8u);
  /* 10d51da8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51dab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51dad call 0x10d53750 */
  push32(0x10d51db2u); f_10d53750();
L_10d51db2:;
  /* 10d51db2 mov esi, esp */
  ESI = (ESP);
  /* 10d51db4 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10d51db6 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51dbcu);
  /* 10d51dbc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51dbf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51dc1 call 0x10d53750 */
  push32(0x10d51dc6u); f_10d53750();
  /* 10d51dc6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51dcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51dcd je 0x10d51e18 */
  if (C.zf) goto L_10d51e18;
  /* 10d51dcf mov esi, esp */
  ESI = (ESP);
  /* 10d51dd1 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d51dd3 call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d51dd9u);
  /* 10d51dd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ddc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51dde call 0x10d53750 */
  push32(0x10d51de3u); f_10d53750();
  /* 10d51de3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51de8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51dea je 0x10d51e18 */
  if (C.zf) goto L_10d51e18;
  /* 10d51dec mov esi, esp */
  ESI = (ESP);
  /* 10d51dee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51df0 push 0x5f */
  push32((uint32_t)(0x5fu));
  /* 10d51df2 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51df8u);
  /* 10d51df8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51dfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51dfd call 0x10d53750 */
  push32(0x10d51e02u); f_10d53750();
  /* 10d51e02 mov esi, esp */
  ESI = (ESP);
  /* 10d51e04 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51e06 push 0x62 */
  push32((uint32_t)(0x62u));
  /* 10d51e08 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51e0eu);
  /* 10d51e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e11 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e13 call 0x10d53750 */
  push32(0x10d51e18u); f_10d53750();
L_10d51e18:;
  /* 10d51e18 mov esi, esp */
  ESI = (ESP);
  /* 10d51e1a push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d51e1c call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51e22u);
  /* 10d51e22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e27 call 0x10d53750 */
  push32(0x10d51e2cu); f_10d53750();
  /* 10d51e2c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51e31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51e33 je 0x10d51ef2 */
  if (C.zf) goto L_10d51ef2;
  /* 10d51e39 mov esi, esp */
  ESI = (ESP);
  /* 10d51e3b push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d51e3d call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51e43u);
  /* 10d51e43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e48 call 0x10d53750 */
  push32(0x10d51e4du); f_10d53750();
  /* 10d51e4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51e52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51e54 je 0x10d51ef2 */
  if (C.zf) goto L_10d51ef2;
  /* 10d51e5a mov esi, esp */
  ESI = (ESP);
  /* 10d51e5c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d51e5e call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51e64u);
  /* 10d51e64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e69 call 0x10d53750 */
  push32(0x10d51e6eu); f_10d53750();
  /* 10d51e6e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51e73 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d51e76 mov esi, esp */
  ESI = (ESP);
  /* 10d51e78 push eax */
  push32((uint32_t)(EAX));
  /* 10d51e79 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d51e7b call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51e81u);
  /* 10d51e81 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e86 call 0x10d53750 */
  push32(0x10d51e8bu); f_10d53750();
  /* 10d51e8b mov esi, esp */
  ESI = (ESP);
  /* 10d51e8d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51e8f push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d51e91 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51e97u);
  /* 10d51e97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51e9a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51e9c call 0x10d53750 */
  push32(0x10d51ea1u); f_10d53750();
  /* 10d51ea1 mov esi, esp */
  ESI = (ESP);
  /* 10d51ea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51ea5 push 0x10d80498 */
  push32((uint32_t)(0x10d80498u));
  /* 10d51eaa push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51eac call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51eb2u);
  /* 10d51eb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51eb5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51eb7 call 0x10d53750 */
  push32(0x10d51ebcu); f_10d53750();
  /* 10d51ebc mov esi, esp */
  ESI = (ESP);
  /* 10d51ebe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51ec0 push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d51ec5 push 0x10d80448 */
  push32((uint32_t)(0x10d80448u));
  /* 10d51eca push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51ecc call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d51ed2u);
  /* 10d51ed2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ed5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51ed7 call 0x10d53750 */
  push32(0x10d51edcu); f_10d53750();
  /* 10d51edc mov esi, esp */
  ESI = (ESP);
  /* 10d51ede push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51ee0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d51ee2 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51ee8u);
  /* 10d51ee8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51eeb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51eed call 0x10d53750 */
  push32(0x10d51ef2u); f_10d53750();
L_10d51ef2:;
  /* 10d51ef2 mov esi, esp */
  ESI = (ESP);
  /* 10d51ef4 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d51ef6 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51efcu);
  /* 10d51efc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51eff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f01 call 0x10d53750 */
  push32(0x10d51f06u); f_10d53750();
  /* 10d51f06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51f0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51f0d je 0x10d51f95 */
  if (C.zf) goto L_10d51f95;
  /* 10d51f13 mov esi, esp */
  ESI = (ESP);
  /* 10d51f15 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d51f17 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51f1du);
  /* 10d51f1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51f20 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f22 call 0x10d53750 */
  push32(0x10d51f27u); f_10d53750();
  /* 10d51f27 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51f2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51f2e jne 0x10d51f95 */
  if (!C.zf) goto L_10d51f95;
  /* 10d51f30 mov esi, esp */
  ESI = (ESP);
  /* 10d51f32 push 0x10d80498 */
  push32((uint32_t)(0x10d80498u));
  /* 10d51f37 push 0x10d80448 */
  push32((uint32_t)(0x10d80448u));
  /* 10d51f3c call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d51f42u);
  /* 10d51f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51f45 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f47 call 0x10d53750 */
  push32(0x10d51f4cu); f_10d53750();
  /* 10d51f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51f4e jle 0x10d51f95 */
  if ((C.zf||C.sf!=C.of)) goto L_10d51f95;
  /* 10d51f50 mov esi, esp */
  ESI = (ESP);
  /* 10d51f52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51f54 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10d51f56 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51f5cu);
  /* 10d51f5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51f5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f61 call 0x10d53750 */
  push32(0x10d51f66u); f_10d53750();
  /* 10d51f66 mov esi, esp */
  ESI = (ESP);
  /* 10d51f68 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d51f6d push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51f6f call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d51f75u);
  /* 10d51f75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51f78 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f7a call 0x10d53750 */
  push32(0x10d51f7fu); f_10d53750();
  /* 10d51f7f mov esi, esp */
  ESI = (ESP);
  /* 10d51f81 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d51f83 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d51f85 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51f8bu);
  /* 10d51f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51f8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51f90 call 0x10d53750 */
  push32(0x10d51f95u); f_10d53750();
L_10d51f95:;
  /* 10d51f95 mov esi, esp */
  ESI = (ESP);
  /* 10d51f97 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d51f99 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d51f9fu);
  /* 10d51f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51fa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51fa4 call 0x10d53750 */
  push32(0x10d51fa9u); f_10d53750();
  /* 10d51fa9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51fae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51fb0 je 0x10d5203a */
  if (C.zf) goto L_10d5203a;
  /* 10d51fb6 mov esi, esp */
  ESI = (ESP);
  /* 10d51fb8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51fba call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d51fc0u);
  /* 10d51fc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51fc3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51fc5 call 0x10d53750 */
  push32(0x10d51fcau); f_10d53750();
  /* 10d51fca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d51fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d51fd1 je 0x10d5203a */
  if (C.zf) goto L_10d5203a;
  /* 10d51fd3 mov esi, esp */
  ESI = (ESP);
  /* 10d51fd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51fd7 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d51fd9 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d51fdfu);
  /* 10d51fdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51fe2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51fe4 call 0x10d53750 */
  push32(0x10d51fe9u); f_10d53750();
  /* 10d51fe9 mov esi, esp */
  ESI = (ESP);
  /* 10d51feb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d51fed push 0x10d80498 */
  push32((uint32_t)(0x10d80498u));
  /* 10d51ff2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d51ff4 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d51ffau);
  /* 10d51ffa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d51ffd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d51fff call 0x10d53750 */
  push32(0x10d52004u); f_10d53750();
  /* 10d52004 mov esi, esp */
  ESI = (ESP);
  /* 10d52006 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52008 push 0xd3 */
  push32((uint32_t)(0xd3u));
  /* 10d5200d push 0x10d80438 */
  push32((uint32_t)(0x10d80438u));
  /* 10d52012 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52014 call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d5201au);
  /* 10d5201a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5201d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5201f call 0x10d53750 */
  push32(0x10d52024u); f_10d53750();
  /* 10d52024 mov esi, esp */
  ESI = (ESP);
  /* 10d52026 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52028 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10d5202a call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52030u);
  /* 10d52030 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52033 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52035 call 0x10d53750 */
  push32(0x10d5203au); f_10d53750();
L_10d5203a:;
  /* 10d5203a mov esi, esp */
  ESI = (ESP);
  /* 10d5203c push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10d5203e call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52044u);
  /* 10d52044 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52047 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52049 call 0x10d53750 */
  push32(0x10d5204eu); f_10d53750();
  /* 10d5204e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52053 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52055 je 0x10d520f3 */
  if (C.zf) goto L_10d520f3;
  /* 10d5205b mov esi, esp */
  ESI = (ESP);
  /* 10d5205d push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d5205f call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52065u);
  /* 10d52065 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52068 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5206a call 0x10d53750 */
  push32(0x10d5206fu); f_10d53750();
  /* 10d5206f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52076 jne 0x10d520f3 */
  if (!C.zf) goto L_10d520f3;
  /* 10d52078 mov esi, esp */
  ESI = (ESP);
  /* 10d5207a push 0x10d80498 */
  push32((uint32_t)(0x10d80498u));
  /* 10d5207f push 0x10d80438 */
  push32((uint32_t)(0x10d80438u));
  /* 10d52084 call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d5208au);
  /* 10d5208a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5208d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5208f call 0x10d53750 */
  push32(0x10d52094u); f_10d53750();
  /* 10d52094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52096 jle 0x10d520f3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d520f3;
  /* 10d52098 mov esi, esp */
  ESI = (ESP);
  /* 10d5209a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5209c push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10d5209e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d520a4u);
  /* 10d520a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d520a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d520a9 call 0x10d53750 */
  push32(0x10d520aeu); f_10d53750();
  /* 10d520ae mov esi, esp */
  ESI = (ESP);
  /* 10d520b0 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d520b5 push 6 */
  push32((uint32_t)(0x6u));
  /* 10d520b7 call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d520bdu);
  /* 10d520bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d520c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d520c2 call 0x10d53750 */
  push32(0x10d520c7u); f_10d53750();
  /* 10d520c7 mov esi, esp */
  ESI = (ESP);
  /* 10d520c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d520cb push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d520cd call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d520d3u);
  /* 10d520d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d520d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d520d8 call 0x10d53750 */
  push32(0x10d520ddu); f_10d53750();
  /* 10d520dd mov esi, esp */
  ESI = (ESP);
  /* 10d520df push 1 */
  push32((uint32_t)(0x1u));
  /* 10d520e1 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10d520e3 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d520e9u);
  /* 10d520e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d520ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d520ee call 0x10d53750 */
  push32(0x10d520f3u); f_10d53750();
L_10d520f3:;
  /* 10d520f3 mov esi, esp */
  ESI = (ESP);
  /* 10d520f5 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d520f7 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d520fdu);
  /* 10d520fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52100 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52102 call 0x10d53750 */
  push32(0x10d52107u); f_10d53750();
  /* 10d52107 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5210c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5210e je 0x10d521b5 */
  if (C.zf) goto L_10d521b5;
  /* 10d52114 mov esi, esp */
  ESI = (ESP);
  /* 10d52116 push 0x59 */
  push32((uint32_t)(0x59u));
  /* 10d52118 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5211eu);
  /* 10d5211e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52121 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52123 call 0x10d53750 */
  push32(0x10d52128u); f_10d53750();
  /* 10d52128 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5212d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5212f jne 0x10d521b5 */
  if (!C.zf) goto L_10d521b5;
  /* 10d52135 mov esi, esp */
  ESI = (ESP);
  /* 10d52137 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d52139 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5213fu);
  /* 10d5213f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52142 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52144 call 0x10d53750 */
  push32(0x10d52149u); f_10d53750();
  /* 10d52149 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5214e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52150 je 0x10d521b5 */
  if (C.zf) goto L_10d521b5;
  /* 10d52152 mov esi, esp */
  ESI = (ESP);
  /* 10d52154 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52156 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d52158 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5215eu);
  /* 10d5215e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52161 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52163 call 0x10d53750 */
  push32(0x10d52168u); f_10d53750();
  /* 10d52168 mov esi, esp */
  ESI = (ESP);
  /* 10d5216a push 0x10d7b194 */
  push32((uint32_t)(0x10d7b194u));
  /* 10d5216f call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52175u);
  /* 10d52175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52178 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5217a call 0x10d53750 */
  push32(0x10d5217fu); f_10d53750();
  /* 10d5217f mov esi, esp */
  ESI = (ESP);
  /* 10d52181 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10d52186 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d52188 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5218a call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d52190u);
  /* 10d52190 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52193 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52195 call 0x10d53750 */
  push32(0x10d5219au); f_10d53750();
  /* 10d5219a mov esi, esp */
  ESI = (ESP);
  /* 10d5219c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d521a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d521a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d521a5 call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d521abu);
  /* 10d521ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d521ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d521b0 call 0x10d53750 */
  push32(0x10d521b5u); f_10d53750();
L_10d521b5:;
  /* 10d521b5 mov esi, esp */
  ESI = (ESP);
  /* 10d521b7 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10d521b9 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d521bfu);
  /* 10d521bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d521c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d521c4 call 0x10d53750 */
  push32(0x10d521c9u); f_10d53750();
  /* 10d521c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d521ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d521d0 je 0x10d5221b */
  if (C.zf) goto L_10d5221b;
  /* 10d521d2 mov esi, esp */
  ESI = (ESP);
  /* 10d521d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 10d521d6 call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d521dcu);
  /* 10d521dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d521df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d521e1 call 0x10d53750 */
  push32(0x10d521e6u); f_10d53750();
  /* 10d521e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d521eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d521ed je 0x10d5221b */
  if (C.zf) goto L_10d5221b;
  /* 10d521ef mov esi, esp */
  ESI = (ESP);
  /* 10d521f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d521f3 push 0x58 */
  push32((uint32_t)(0x58u));
  /* 10d521f5 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d521fbu);
  /* 10d521fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d521fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52200 call 0x10d53750 */
  push32(0x10d52205u); f_10d53750();
  /* 10d52205 mov esi, esp */
  ESI = (ESP);
  /* 10d52207 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52209 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d5220b call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52211u);
  /* 10d52211 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52214 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52216 call 0x10d53750 */
  push32(0x10d5221bu); f_10d53750();
L_10d5221b:;
  /* 10d5221b mov esi, esp */
  ESI = (ESP);
  /* 10d5221d push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d5221f call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52225u);
  /* 10d52225 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52228 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5222a call 0x10d53750 */
  push32(0x10d5222fu); f_10d53750();
  /* 10d5222f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52236 je 0x10d522f2 */
  if (C.zf) goto L_10d522f2;
  /* 10d5223c mov esi, esp */
  ESI = (ESP);
  /* 10d5223e push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d52240 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52246u);
  /* 10d52246 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52249 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5224b call 0x10d53750 */
  push32(0x10d52250u); f_10d53750();
  /* 10d52250 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52257 je 0x10d522f2 */
  if (C.zf) goto L_10d522f2;
  /* 10d5225d mov esi, esp */
  ESI = (ESP);
  /* 10d5225f push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d52261 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52267u);
  /* 10d52267 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5226a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5226c call 0x10d53750 */
  push32(0x10d52271u); f_10d53750();
  /* 10d52271 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52276 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d52279 mov esi, esp */
  ESI = (ESP);
  /* 10d5227b push eax */
  push32((uint32_t)(EAX));
  /* 10d5227c push 0x57 */
  push32((uint32_t)(0x57u));
  /* 10d5227e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52284u);
  /* 10d52284 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52287 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52289 call 0x10d53750 */
  push32(0x10d5228eu); f_10d53750();
  /* 10d5228e mov esi, esp */
  ESI = (ESP);
  /* 10d52290 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52292 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d52294 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5229au);
  /* 10d5229a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5229d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5229f call 0x10d53750 */
  push32(0x10d522a4u); f_10d53750();
  /* 10d522a4 mov esi, esp */
  ESI = (ESP);
  /* 10d522a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d522a8 push 0x10d804a0 */
  push32((uint32_t)(0x10d804a0u));
  /* 10d522ad push 5 */
  push32((uint32_t)(0x5u));
  /* 10d522af call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d522b5u);
  /* 10d522b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d522b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d522ba call 0x10d53750 */
  push32(0x10d522bfu); f_10d53750();
  /* 10d522bf mov esi, esp */
  ESI = (ESP);
  /* 10d522c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d522c3 push 0x2d */
  push32((uint32_t)(0x2du));
  /* 10d522c5 push 0x10d80450 */
  push32((uint32_t)(0x10d80450u));
  /* 10d522ca push 5 */
  push32((uint32_t)(0x5u));
  /* 10d522cc call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d522d2u);
  /* 10d522d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d522d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d522d7 call 0x10d53750 */
  push32(0x10d522dcu); f_10d53750();
  /* 10d522dc mov esi, esp */
  ESI = (ESP);
  /* 10d522de push 1 */
  push32((uint32_t)(0x1u));
  /* 10d522e0 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d522e2 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d522e8u);
  /* 10d522e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d522eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d522ed call 0x10d53750 */
  push32(0x10d522f2u); f_10d53750();
L_10d522f2:;
  /* 10d522f2 mov esi, esp */
  ESI = (ESP);
  /* 10d522f4 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d522f6 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d522fcu);
  /* 10d522fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d522ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52301 call 0x10d53750 */
  push32(0x10d52306u); f_10d53750();
  /* 10d52306 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5230b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5230d je 0x10d52395 */
  if (C.zf) goto L_10d52395;
  /* 10d52313 mov esi, esp */
  ESI = (ESP);
  /* 10d52315 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d52317 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5231du);
  /* 10d5231d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52320 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52322 call 0x10d53750 */
  push32(0x10d52327u); f_10d53750();
  /* 10d52327 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5232c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5232e jne 0x10d52395 */
  if (!C.zf) goto L_10d52395;
  /* 10d52330 mov esi, esp */
  ESI = (ESP);
  /* 10d52332 push 0x10d804a0 */
  push32((uint32_t)(0x10d804a0u));
  /* 10d52337 push 0x10d80450 */
  push32((uint32_t)(0x10d80450u));
  /* 10d5233c call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d52342u);
  /* 10d52342 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52345 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52347 call 0x10d53750 */
  push32(0x10d5234cu); f_10d53750();
  /* 10d5234c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5234e jle 0x10d52395 */
  if ((C.zf||C.sf!=C.of)) goto L_10d52395;
  /* 10d52350 mov esi, esp */
  ESI = (ESP);
  /* 10d52352 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52354 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10d52356 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5235cu);
  /* 10d5235c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5235f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52361 call 0x10d53750 */
  push32(0x10d52366u); f_10d53750();
  /* 10d52366 mov esi, esp */
  ESI = (ESP);
  /* 10d52368 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d5236d push 7 */
  push32((uint32_t)(0x7u));
  /* 10d5236f call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d52375u);
  /* 10d52375 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52378 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5237a call 0x10d53750 */
  push32(0x10d5237fu); f_10d53750();
  /* 10d5237f mov esi, esp */
  ESI = (ESP);
  /* 10d52381 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52383 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d52385 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5238bu);
  /* 10d5238b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5238e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52390 call 0x10d53750 */
  push32(0x10d52395u); f_10d53750();
L_10d52395:;
  /* 10d52395 mov esi, esp */
  ESI = (ESP);
  /* 10d52397 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d52399 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5239fu);
  /* 10d5239f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d523a2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d523a4 call 0x10d53750 */
  push32(0x10d523a9u); f_10d53750();
  /* 10d523a9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d523ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d523b0 je 0x10d5243a */
  if (C.zf) goto L_10d5243a;
  /* 10d523b6 mov esi, esp */
  ESI = (ESP);
  /* 10d523b8 push 7 */
  push32((uint32_t)(0x7u));
  /* 10d523ba call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d523c0u);
  /* 10d523c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d523c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d523c5 call 0x10d53750 */
  push32(0x10d523cau); f_10d53750();
  /* 10d523ca and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d523cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d523d1 je 0x10d5243a */
  if (C.zf) goto L_10d5243a;
  /* 10d523d3 mov esi, esp */
  ESI = (ESP);
  /* 10d523d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d523d7 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d523d9 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d523dfu);
  /* 10d523df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d523e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d523e4 call 0x10d53750 */
  push32(0x10d523e9u); f_10d53750();
  /* 10d523e9 mov esi, esp */
  ESI = (ESP);
  /* 10d523eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d523ed push 0x10d804a0 */
  push32((uint32_t)(0x10d804a0u));
  /* 10d523f2 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d523f4 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d523fau);
  /* 10d523fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d523fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d523ff call 0x10d53750 */
  push32(0x10d52404u); f_10d53750();
  /* 10d52404 mov esi, esp */
  ESI = (ESP);
  /* 10d52406 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52408 push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d5240d push 0x10d80440 */
  push32((uint32_t)(0x10d80440u));
  /* 10d52412 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52414 call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d5241au);
  /* 10d5241a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5241d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5241f call 0x10d53750 */
  push32(0x10d52424u); f_10d53750();
  /* 10d52424 mov esi, esp */
  ESI = (ESP);
  /* 10d52426 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52428 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d5242a call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52430u);
  /* 10d52430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52435 call 0x10d53750 */
  push32(0x10d5243au); f_10d53750();
L_10d5243a:;
  /* 10d5243a mov esi, esp */
  ESI = (ESP);
  /* 10d5243c push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d5243e call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52444u);
  /* 10d52444 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52447 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52449 call 0x10d53750 */
  push32(0x10d5244eu); f_10d53750();
  /* 10d5244e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52455 je 0x10d524f3 */
  if (C.zf) goto L_10d524f3;
  /* 10d5245b mov esi, esp */
  ESI = (ESP);
  /* 10d5245d push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10d5245f call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52465u);
  /* 10d52465 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52468 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5246a call 0x10d53750 */
  push32(0x10d5246fu); f_10d53750();
  /* 10d5246f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52474 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52476 jne 0x10d524f3 */
  if (!C.zf) goto L_10d524f3;
  /* 10d52478 mov esi, esp */
  ESI = (ESP);
  /* 10d5247a push 0x10d804a0 */
  push32((uint32_t)(0x10d804a0u));
  /* 10d5247f push 0x10d80440 */
  push32((uint32_t)(0x10d80440u));
  /* 10d52484 call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d5248au);
  /* 10d5248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5248d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5248f call 0x10d53750 */
  push32(0x10d52494u); f_10d53750();
  /* 10d52494 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52496 jle 0x10d524f3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d524f3;
  /* 10d52498 mov esi, esp */
  ESI = (ESP);
  /* 10d5249a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5249c push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d5249e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d524a4u);
  /* 10d524a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d524a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d524a9 call 0x10d53750 */
  push32(0x10d524aeu); f_10d53750();
  /* 10d524ae mov esi, esp */
  ESI = (ESP);
  /* 10d524b0 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d524b5 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d524b7 call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d524bdu);
  /* 10d524bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d524c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d524c2 call 0x10d53750 */
  push32(0x10d524c7u); f_10d53750();
  /* 10d524c7 mov esi, esp */
  ESI = (ESP);
  /* 10d524c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d524cb push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d524cd call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d524d3u);
  /* 10d524d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d524d6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d524d8 call 0x10d53750 */
  push32(0x10d524ddu); f_10d53750();
  /* 10d524dd mov esi, esp */
  ESI = (ESP);
  /* 10d524df push 1 */
  push32((uint32_t)(0x1u));
  /* 10d524e1 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d524e3 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d524e9u);
  /* 10d524e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d524ec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d524ee call 0x10d53750 */
  push32(0x10d524f3u); f_10d53750();
L_10d524f3:;
  /* 10d524f3 mov esi, esp */
  ESI = (ESP);
  /* 10d524f5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d524f7 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d524fdu);
  /* 10d524fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52500 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52502 call 0x10d53750 */
  push32(0x10d52507u); f_10d53750();
  /* 10d52507 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5250c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5250e je 0x10d525b5 */
  if (C.zf) goto L_10d525b5;
  /* 10d52514 mov esi, esp */
  ESI = (ESP);
  /* 10d52516 push 0x53 */
  push32((uint32_t)(0x53u));
  /* 10d52518 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5251eu);
  /* 10d5251e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52521 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52523 call 0x10d53750 */
  push32(0x10d52528u); f_10d53750();
  /* 10d52528 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5252d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5252f jne 0x10d525b5 */
  if (!C.zf) goto L_10d525b5;
  /* 10d52535 mov esi, esp */
  ESI = (ESP);
  /* 10d52537 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d52539 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5253fu);
  /* 10d5253f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52542 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52544 call 0x10d53750 */
  push32(0x10d52549u); f_10d53750();
  /* 10d52549 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5254e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52550 je 0x10d525b5 */
  if (C.zf) goto L_10d525b5;
  /* 10d52552 mov esi, esp */
  ESI = (ESP);
  /* 10d52554 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52556 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d52558 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5255eu);
  /* 10d5255e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52561 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52563 call 0x10d53750 */
  push32(0x10d52568u); f_10d53750();
  /* 10d52568 mov esi, esp */
  ESI = (ESP);
  /* 10d5256a push 0x10d7b18c */
  push32((uint32_t)(0x10d7b18cu));
  /* 10d5256f call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52575u);
  /* 10d52575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52578 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5257a call 0x10d53750 */
  push32(0x10d5257fu); f_10d53750();
  /* 10d5257f mov esi, esp */
  ESI = (ESP);
  /* 10d52581 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10d52586 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52588 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5258a call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d52590u);
  /* 10d52590 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52593 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52595 call 0x10d53750 */
  push32(0x10d5259au); f_10d53750();
  /* 10d5259a mov esi, esp */
  ESI = (ESP);
  /* 10d5259c push 0x1388 */
  push32((uint32_t)(0x1388u));
  /* 10d525a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d525a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d525a5 call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d525abu);
  /* 10d525ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d525ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d525b0 call 0x10d53750 */
  push32(0x10d525b5u); f_10d53750();
L_10d525b5:;
  /* 10d525b5 mov esi, esp */
  ESI = (ESP);
  /* 10d525b7 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d525b9 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d525bfu);
  /* 10d525bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d525c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d525c4 call 0x10d53750 */
  push32(0x10d525c9u); f_10d53750();
  /* 10d525c9 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d525ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d525d0 je 0x10d5261b */
  if (C.zf) goto L_10d5261b;
  /* 10d525d2 mov esi, esp */
  ESI = (ESP);
  /* 10d525d4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d525d6 call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d525dcu);
  /* 10d525dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d525df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d525e1 call 0x10d53750 */
  push32(0x10d525e6u); f_10d53750();
  /* 10d525e6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d525eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d525ed je 0x10d5261b */
  if (C.zf) goto L_10d5261b;
  /* 10d525ef mov esi, esp */
  ESI = (ESP);
  /* 10d525f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d525f3 push 0x52 */
  push32((uint32_t)(0x52u));
  /* 10d525f5 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d525fbu);
  /* 10d525fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d525fe cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52600 call 0x10d53750 */
  push32(0x10d52605u); f_10d53750();
  /* 10d52605 mov esi, esp */
  ESI = (ESP);
  /* 10d52607 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52609 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10d5260b call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52611u);
  /* 10d52611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52614 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52616 call 0x10d53750 */
  push32(0x10d5261bu); f_10d53750();
L_10d5261b:;
  /* 10d5261b mov esi, esp */
  ESI = (ESP);
  /* 10d5261d push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d5261f call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52625u);
  /* 10d52625 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52628 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5262a call 0x10d53750 */
  push32(0x10d5262fu); f_10d53750();
  /* 10d5262f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52634 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52636 je 0x10d526f5 */
  if (C.zf) goto L_10d526f5;
  /* 10d5263c mov esi, esp */
  ESI = (ESP);
  /* 10d5263e push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d52640 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52646u);
  /* 10d52646 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52649 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5264b call 0x10d53750 */
  push32(0x10d52650u); f_10d53750();
  /* 10d52650 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52657 je 0x10d526f5 */
  if (C.zf) goto L_10d526f5;
  /* 10d5265d mov esi, esp */
  ESI = (ESP);
  /* 10d5265f push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d52661 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52667u);
  /* 10d52667 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5266a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5266c call 0x10d53750 */
  push32(0x10d52671u); f_10d53750();
  /* 10d52671 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52676 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d52679 mov esi, esp */
  ESI = (ESP);
  /* 10d5267b push eax */
  push32((uint32_t)(EAX));
  /* 10d5267c push 0x51 */
  push32((uint32_t)(0x51u));
  /* 10d5267e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52684u);
  /* 10d52684 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52687 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52689 call 0x10d53750 */
  push32(0x10d5268eu); f_10d53750();
  /* 10d5268e mov esi, esp */
  ESI = (ESP);
  /* 10d52690 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52692 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d52694 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5269au);
  /* 10d5269a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5269d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5269f call 0x10d53750 */
  push32(0x10d526a4u); f_10d53750();
  /* 10d526a4 mov esi, esp */
  ESI = (ESP);
  /* 10d526a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d526a8 push 0x10d80490 */
  push32((uint32_t)(0x10d80490u));
  /* 10d526ad push 5 */
  push32((uint32_t)(0x5u));
  /* 10d526af call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d526b5u);
  /* 10d526b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d526b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d526ba call 0x10d53750 */
  push32(0x10d526bfu); f_10d53750();
  /* 10d526bf mov esi, esp */
  ESI = (ESP);
  /* 10d526c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d526c3 push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d526c8 push 0x10d80440 */
  push32((uint32_t)(0x10d80440u));
  /* 10d526cd push 5 */
  push32((uint32_t)(0x5u));
  /* 10d526cf call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d526d5u);
  /* 10d526d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d526d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d526da call 0x10d53750 */
  push32(0x10d526dfu); f_10d53750();
  /* 10d526df mov esi, esp */
  ESI = (ESP);
  /* 10d526e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d526e3 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d526e5 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d526ebu);
  /* 10d526eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d526ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d526f0 call 0x10d53750 */
  push32(0x10d526f5u); f_10d53750();
L_10d526f5:;
  /* 10d526f5 mov esi, esp */
  ESI = (ESP);
  /* 10d526f7 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d526f9 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d526ffu);
  /* 10d526ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52702 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52704 call 0x10d53750 */
  push32(0x10d52709u); f_10d53750();
  /* 10d52709 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5270e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52710 je 0x10d527ae */
  if (C.zf) goto L_10d527ae;
  /* 10d52716 mov esi, esp */
  ESI = (ESP);
  /* 10d52718 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d5271a call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52720u);
  /* 10d52720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52723 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52725 call 0x10d53750 */
  push32(0x10d5272au); f_10d53750();
  /* 10d5272a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5272f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52731 jne 0x10d527ae */
  if (!C.zf) goto L_10d527ae;
  /* 10d52733 mov esi, esp */
  ESI = (ESP);
  /* 10d52735 push 0x10d80490 */
  push32((uint32_t)(0x10d80490u));
  /* 10d5273a push 0x10d80440 */
  push32((uint32_t)(0x10d80440u));
  /* 10d5273f call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d52745u);
  /* 10d52745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5274a call 0x10d53750 */
  push32(0x10d5274fu); f_10d53750();
  /* 10d5274f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52751 jle 0x10d527ae */
  if ((C.zf||C.sf!=C.of)) goto L_10d527ae;
  /* 10d52753 mov esi, esp */
  ESI = (ESP);
  /* 10d52755 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52757 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d52759 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5275fu);
  /* 10d5275f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52762 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52764 call 0x10d53750 */
  push32(0x10d52769u); f_10d53750();
  /* 10d52769 mov esi, esp */
  ESI = (ESP);
  /* 10d5276b push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d52770 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d52772 call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d52778u);
  /* 10d52778 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5277b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5277d call 0x10d53750 */
  push32(0x10d52782u); f_10d53750();
  /* 10d52782 mov esi, esp */
  ESI = (ESP);
  /* 10d52784 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52786 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d52788 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5278eu);
  /* 10d5278e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52791 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52793 call 0x10d53750 */
  push32(0x10d52798u); f_10d53750();
  /* 10d52798 mov esi, esp */
  ESI = (ESP);
  /* 10d5279a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5279c push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d5279e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d527a4u);
  /* 10d527a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d527a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d527a9 call 0x10d53750 */
  push32(0x10d527aeu); f_10d53750();
L_10d527ae:;
  /* 10d527ae mov esi, esp */
  ESI = (ESP);
  /* 10d527b0 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d527b2 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d527b8u);
  /* 10d527b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d527bb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d527bd call 0x10d53750 */
  push32(0x10d527c2u); f_10d53750();
  /* 10d527c2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d527c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d527c9 je 0x10d5288b */
  if (C.zf) goto L_10d5288b;
  /* 10d527cf mov esi, esp */
  ESI = (ESP);
  /* 10d527d1 push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 10d527d3 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d527d9u);
  /* 10d527d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d527dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d527de call 0x10d53750 */
  push32(0x10d527e3u); f_10d53750();
  /* 10d527e3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d527e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d527ea jne 0x10d5288b */
  if (!C.zf) goto L_10d5288b;
  /* 10d527f0 mov esi, esp */
  ESI = (ESP);
  /* 10d527f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d527f4 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d527fau);
  /* 10d527fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d527fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d527ff call 0x10d53750 */
  push32(0x10d52804u); f_10d53750();
  /* 10d52804 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52809 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5280b je 0x10d5288b */
  if (C.zf) goto L_10d5288b;
  /* 10d5280d mov esi, esp */
  ESI = (ESP);
  /* 10d5280f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52811 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d52813 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52819u);
  /* 10d52819 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5281c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5281e call 0x10d53750 */
  push32(0x10d52823u); f_10d53750();
  /* 10d52823 mov esi, esp */
  ESI = (ESP);
  /* 10d52825 push 0x10d7b184 */
  push32((uint32_t)(0x10d7b184u));
  /* 10d5282a call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52830u);
  /* 10d52830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52833 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52835 call 0x10d53750 */
  push32(0x10d5283au); f_10d53750();
  /* 10d5283a mov esi, esp */
  ESI = (ESP);
  /* 10d5283c push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10d52841 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52843 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52845 call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d5284bu);
  /* 10d5284b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5284e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52850 call 0x10d53750 */
  push32(0x10d52855u); f_10d53750();
  /* 10d52855 mov esi, esp */
  ESI = (ESP);
  /* 10d52857 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10d5285c push 4 */
  push32((uint32_t)(0x4u));
  /* 10d5285e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52860 call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d52866u);
  /* 10d52866 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5286b call 0x10d53750 */
  push32(0x10d52870u); f_10d53750();
  /* 10d52870 mov esi, esp */
  ESI = (ESP);
  /* 10d52872 push 0x3e8 */
  push32((uint32_t)(0x3e8u));
  /* 10d52877 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52879 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5287b call dword ptr [0x10d83438] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83438))), 0x10d52881u);
  /* 10d52881 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52884 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52886 call 0x10d53750 */
  push32(0x10d5288bu); f_10d53750();
L_10d5288b:;
  /* 10d5288b mov esi, esp */
  ESI = (ESP);
  /* 10d5288d push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d5288f call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52895u);
  /* 10d52895 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52898 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5289a call 0x10d53750 */
  push32(0x10d5289fu); f_10d53750();
  /* 10d5289f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d528a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d528a6 je 0x10d52930 */
  if (C.zf) goto L_10d52930;
  /* 10d528ac mov esi, esp */
  ESI = (ESP);
  /* 10d528ae push 9 */
  push32((uint32_t)(0x9u));
  /* 10d528b0 call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d528b6u);
  /* 10d528b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d528b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d528bb call 0x10d53750 */
  push32(0x10d528c0u); f_10d53750();
  /* 10d528c0 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d528c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d528c7 je 0x10d52930 */
  if (C.zf) goto L_10d52930;
  /* 10d528c9 mov esi, esp */
  ESI = (ESP);
  /* 10d528cb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d528cd push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d528cf call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d528d5u);
  /* 10d528d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d528d8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d528da call 0x10d53750 */
  push32(0x10d528dfu); f_10d53750();
  /* 10d528df mov esi, esp */
  ESI = (ESP);
  /* 10d528e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d528e3 push 0x10d80490 */
  push32((uint32_t)(0x10d80490u));
  /* 10d528e8 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d528ea call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d528f0u);
  /* 10d528f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d528f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d528f5 call 0x10d53750 */
  push32(0x10d528fau); f_10d53750();
  /* 10d528fa mov esi, esp */
  ESI = (ESP);
  /* 10d528fc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d528fe push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10d52903 push 0x10d80450 */
  push32((uint32_t)(0x10d80450u));
  /* 10d52908 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d5290a call dword ptr [0x10d83424] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83424))), 0x10d52910u);
  /* 10d52910 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52913 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52915 call 0x10d53750 */
  push32(0x10d5291au); f_10d53750();
  /* 10d5291a mov esi, esp */
  ESI = (ESP);
  /* 10d5291c push 1 */
  push32((uint32_t)(0x1u));
  /* 10d5291e push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d52920 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52926u);
  /* 10d52926 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52929 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5292b call 0x10d53750 */
  push32(0x10d52930u); f_10d53750();
L_10d52930:;
  /* 10d52930 mov esi, esp */
  ESI = (ESP);
  /* 10d52932 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d52934 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5293au);
  /* 10d5293a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5293d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5293f call 0x10d53750 */
  push32(0x10d52944u); f_10d53750();
  /* 10d52944 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5294b je 0x10d529d3 */
  if (C.zf) goto L_10d529d3;
  /* 10d52951 mov esi, esp */
  ESI = (ESP);
  /* 10d52953 push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 10d52955 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d5295bu);
  /* 10d5295b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5295e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52960 call 0x10d53750 */
  push32(0x10d52965u); f_10d53750();
  /* 10d52965 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5296a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5296c jne 0x10d529d3 */
  if (!C.zf) goto L_10d529d3;
  /* 10d5296e mov esi, esp */
  ESI = (ESP);
  /* 10d52970 push 0x10d80490 */
  push32((uint32_t)(0x10d80490u));
  /* 10d52975 push 0x10d80450 */
  push32((uint32_t)(0x10d80450u));
  /* 10d5297a call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d52980u);
  /* 10d52980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52983 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52985 call 0x10d53750 */
  push32(0x10d5298au); f_10d53750();
  /* 10d5298a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5298c jle 0x10d529d3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d529d3;
  /* 10d5298e mov esi, esp */
  ESI = (ESP);
  /* 10d52990 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52992 push 0x4d */
  push32((uint32_t)(0x4du));
  /* 10d52994 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d5299au);
  /* 10d5299a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5299d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5299f call 0x10d53750 */
  push32(0x10d529a4u); f_10d53750();
  /* 10d529a4 mov esi, esp */
  ESI = (ESP);
  /* 10d529a6 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10d529ab push 0xa */
  push32((uint32_t)(0xau));
  /* 10d529ad call dword ptr [0x10d83414] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83414))), 0x10d529b3u);
  /* 10d529b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d529b6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d529b8 call 0x10d53750 */
  push32(0x10d529bdu); f_10d53750();
  /* 10d529bd mov esi, esp */
  ESI = (ESP);
  /* 10d529bf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d529c1 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d529c3 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d529c9u);
  /* 10d529c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d529cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d529ce call 0x10d53750 */
  push32(0x10d529d3u); f_10d53750();
L_10d529d3:;
  /* 10d529d3 mov esi, esp */
  ESI = (ESP);
  /* 10d529d5 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d529d7 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d529ddu);
  /* 10d529dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d529e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d529e2 call 0x10d53750 */
  push32(0x10d529e7u); f_10d53750();
  /* 10d529e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d529ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d529ee je 0x10d52a39 */
  if (C.zf) goto L_10d52a39;
  /* 10d529f0 mov esi, esp */
  ESI = (ESP);
  /* 10d529f2 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d529f4 call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d529fau);
  /* 10d529fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d529fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d529ff call 0x10d53750 */
  push32(0x10d52a04u); f_10d53750();
  /* 10d52a04 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52a0b je 0x10d52a39 */
  if (C.zf) goto L_10d52a39;
  /* 10d52a0d mov esi, esp */
  ESI = (ESP);
  /* 10d52a0f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52a11 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 10d52a13 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52a19u);
  /* 10d52a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52a1e call 0x10d53750 */
  push32(0x10d52a23u); f_10d53750();
  /* 10d52a23 mov esi, esp */
  ESI = (ESP);
  /* 10d52a25 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52a27 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 10d52a29 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52a2fu);
  /* 10d52a2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52a34 call 0x10d53750 */
  push32(0x10d52a39u); f_10d53750();
L_10d52a39:;
  /* 10d52a39 mov esi, esp */
  ESI = (ESP);
  /* 10d52a3b push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d52a3d call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52a43u);
  /* 10d52a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52a48 call 0x10d53750 */
  push32(0x10d52a4du); f_10d53750();
  /* 10d52a4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52a52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52a54 je 0x10d52ad3 */
  if (C.zf) goto L_10d52ad3;
  /* 10d52a56 mov esi, esp */
  ESI = (ESP);
  /* 10d52a58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52a5a push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52a5f call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52a65u);
  /* 10d52a65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a68 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52a6a call 0x10d53750 */
  push32(0x10d52a6fu); f_10d53750();
  /* 10d52a6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52a71 jne 0x10d52ad3 */
  if (!C.zf) goto L_10d52ad3;
  /* 10d52a73 mov esi, esp */
  ESI = (ESP);
  /* 10d52a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52a77 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52a7c call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52a82u);
  /* 10d52a82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a85 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52a87 call 0x10d53750 */
  push32(0x10d52a8cu); f_10d53750();
  /* 10d52a8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52a8e jle 0x10d52ad3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d52ad3;
  /* 10d52a90 mov esi, esp */
  ESI = (ESP);
  /* 10d52a92 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52a94 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d52a96 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52a9cu);
  /* 10d52a9c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52a9f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52aa1 call 0x10d53750 */
  push32(0x10d52aa6u); f_10d53750();
  /* 10d52aa6 mov esi, esp */
  ESI = (ESP);
  /* 10d52aa8 push 0x10d7b17c */
  push32((uint32_t)(0x10d7b17cu));
  /* 10d52aad call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52ab3u);
  /* 10d52ab3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52ab6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ab8 call 0x10d53750 */
  push32(0x10d52abdu); f_10d53750();
  /* 10d52abd mov esi, esp */
  ESI = (ESP);
  /* 10d52abf push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52ac1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d52ac3 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52ac9u);
  /* 10d52ac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52acc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ace call 0x10d53750 */
  push32(0x10d52ad3u); f_10d53750();
L_10d52ad3:;
  /* 10d52ad3 mov esi, esp */
  ESI = (ESP);
  /* 10d52ad5 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d52ad7 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52addu);
  /* 10d52add add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52ae0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ae2 call 0x10d53750 */
  push32(0x10d52ae7u); f_10d53750();
  /* 10d52ae7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52aee je 0x10d52b8e */
  if (C.zf) goto L_10d52b8e;
  /* 10d52af4 mov esi, esp */
  ESI = (ESP);
  /* 10d52af6 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d52af8 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52afeu);
  /* 10d52afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b03 call 0x10d53750 */
  push32(0x10d52b08u); f_10d53750();
  /* 10d52b08 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52b0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52b0f jne 0x10d52b8e */
  if (!C.zf) goto L_10d52b8e;
  /* 10d52b11 mov esi, esp */
  ESI = (ESP);
  /* 10d52b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52b15 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52b1a call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52b20u);
  /* 10d52b20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b25 call 0x10d53750 */
  push32(0x10d52b2au); f_10d53750();
  /* 10d52b2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52b2c jne 0x10d52b8e */
  if (!C.zf) goto L_10d52b8e;
  /* 10d52b2e mov esi, esp */
  ESI = (ESP);
  /* 10d52b30 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52b32 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52b37 call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52b3du);
  /* 10d52b3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b40 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b42 call 0x10d53750 */
  push32(0x10d52b47u); f_10d53750();
  /* 10d52b47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52b49 jle 0x10d52b8e */
  if ((C.zf||C.sf!=C.of)) goto L_10d52b8e;
  /* 10d52b4b mov esi, esp */
  ESI = (ESP);
  /* 10d52b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52b4f push 0x4a */
  push32((uint32_t)(0x4au));
  /* 10d52b51 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52b57u);
  /* 10d52b57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b5c call 0x10d53750 */
  push32(0x10d52b61u); f_10d53750();
  /* 10d52b61 mov esi, esp */
  ESI = (ESP);
  /* 10d52b63 push 0x10d7b174 */
  push32((uint32_t)(0x10d7b174u));
  /* 10d52b68 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52b6eu);
  /* 10d52b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b71 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b73 call 0x10d53750 */
  push32(0x10d52b78u); f_10d53750();
  /* 10d52b78 mov esi, esp */
  ESI = (ESP);
  /* 10d52b7a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52b7c push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 10d52b7e call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52b84u);
  /* 10d52b84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b89 call 0x10d53750 */
  push32(0x10d52b8eu); f_10d53750();
L_10d52b8e:;
  /* 10d52b8e mov esi, esp */
  ESI = (ESP);
  /* 10d52b90 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d52b92 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52b98u);
  /* 10d52b98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52b9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52b9d call 0x10d53750 */
  push32(0x10d52ba2u); f_10d53750();
  /* 10d52ba2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52ba7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52ba9 je 0x10d52cbd */
  if (C.zf) goto L_10d52cbd;
  /* 10d52baf mov esi, esp */
  ESI = (ESP);
  /* 10d52bb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52bb3 push 0x10d80428 */
  push32((uint32_t)(0x10d80428u));
  /* 10d52bb8 call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52bbeu);
  /* 10d52bbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52bc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52bc3 call 0x10d53750 */
  push32(0x10d52bc8u); f_10d53750();
  /* 10d52bc8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52bca jne 0x10d52cbd */
  if (!C.zf) goto L_10d52cbd;
  /* 10d52bd0 mov esi, esp */
  ESI = (ESP);
  /* 10d52bd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52bd4 push 0x10d80428 */
  push32((uint32_t)(0x10d80428u));
  /* 10d52bd9 call dword ptr [0x10d83440] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83440))), 0x10d52bdfu);
  /* 10d52bdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52be2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52be4 call 0x10d53750 */
  push32(0x10d52be9u); f_10d53750();
  /* 10d52be9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52beb jle 0x10d52cbd */
  if ((C.zf||C.sf!=C.of)) goto L_10d52cbd;
  /* 10d52bf1 mov esi, esp */
  ESI = (ESP);
  /* 10d52bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52bf5 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d52bf7 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52bfdu);
  /* 10d52bfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c02 call 0x10d53750 */
  push32(0x10d52c07u); f_10d53750();
  /* 10d52c07 mov esi, esp */
  ESI = (ESP);
  /* 10d52c09 push 0x10d7b168 */
  push32((uint32_t)(0x10d7b168u));
  /* 10d52c0e call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52c14u);
  /* 10d52c14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c17 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c19 call 0x10d53750 */
  push32(0x10d52c1eu); f_10d53750();
  /* 10d52c1e mov esi, esp */
  ESI = (ESP);
  /* 10d52c20 push 0x10d7b15c */
  push32((uint32_t)(0x10d7b15cu));
  /* 10d52c25 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52c2bu);
  /* 10d52c2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c2e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c30 call 0x10d53750 */
  push32(0x10d52c35u); f_10d53750();
  /* 10d52c35 mov esi, esp */
  ESI = (ESP);
  /* 10d52c37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52c39 push 0x10d803e0 */
  push32((uint32_t)(0x10d803e0u));
  /* 10d52c3e push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52c40 call dword ptr [0x10d83420] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83420))), 0x10d52c46u);
  /* 10d52c46 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c49 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c4b call 0x10d53750 */
  push32(0x10d52c50u); f_10d53750();
  /* 10d52c50 mov esi, esp */
  ESI = (ESP);
  /* 10d52c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52c54 push 5 */
  push32((uint32_t)(0x5u));
  /* 10d52c56 call dword ptr [0x10d83418] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83418))), 0x10d52c5cu);
  /* 10d52c5c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c5f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c61 call 0x10d53750 */
  push32(0x10d52c66u); f_10d53750();
  /* 10d52c66 mov esi, esp */
  ESI = (ESP);
  /* 10d52c68 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d52c6a push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52c6c push 0x10d80460 */
  push32((uint32_t)(0x10d80460u));
  /* 10d52c71 call dword ptr [0x10d8340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8340c))), 0x10d52c77u);
  /* 10d52c77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c7a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c7c call 0x10d53750 */
  push32(0x10d52c81u); f_10d53750();
  /* 10d52c81 mov esi, esp */
  ESI = (ESP);
  /* 10d52c83 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d52c85 call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d52c8bu);
  /* 10d52c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52c8e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52c90 call 0x10d53750 */
  push32(0x10d52c95u); f_10d53750();
  /* 10d52c95 mov esi, esp */
  ESI = (ESP);
  /* 10d52c97 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 10d52c99 call dword ptr [0x10d83444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83444))), 0x10d52c9fu);
  /* 10d52c9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52ca2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ca4 call 0x10d53750 */
  push32(0x10d52ca9u); f_10d53750();
  /* 10d52ca9 mov esi, esp */
  ESI = (ESP);
  /* 10d52cab push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d52cad call dword ptr [0x10d83444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83444))), 0x10d52cb3u);
  /* 10d52cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52cb6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52cb8 call 0x10d53750 */
  push32(0x10d52cbdu); f_10d53750();
L_10d52cbd:;
  /* 10d52cbd mov esi, esp */
  ESI = (ESP);
  /* 10d52cbf push 0x45 */
  push32((uint32_t)(0x45u));
  /* 10d52cc1 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52cc7u);
  /* 10d52cc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52cca cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ccc call 0x10d53750 */
  push32(0x10d52cd1u); f_10d53750();
  /* 10d52cd1 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52cd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52cd8 jne 0x10d52dce */
  if (!C.zf) goto L_10d52dce;
  /* 10d52cde mov esi, esp */
  ESI = (ESP);
  /* 10d52ce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52ce2 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52ce7 push 0x10d80488 */
  push32((uint32_t)(0x10d80488u));
  /* 10d52cec call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52cf2u);
  /* 10d52cf2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52cf5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52cf7 call 0x10d53750 */
  push32(0x10d52cfcu); f_10d53750();
  /* 10d52cfc mov esi, esp */
  ESI = (ESP);
  /* 10d52cfe push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d00 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d05 push 0x10d803f0 */
  push32((uint32_t)(0x10d803f0u));
  /* 10d52d0a call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52d10u);
  /* 10d52d10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52d13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52d15 call 0x10d53750 */
  push32(0x10d52d1au); f_10d53750();
  /* 10d52d1a mov esi, esp */
  ESI = (ESP);
  /* 10d52d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d1e push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d23 push 0x10d80420 */
  push32((uint32_t)(0x10d80420u));
  /* 10d52d28 call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52d2eu);
  /* 10d52d2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52d31 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52d33 call 0x10d53750 */
  push32(0x10d52d38u); f_10d53750();
  /* 10d52d38 mov esi, esp */
  ESI = (ESP);
  /* 10d52d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d3c push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d41 push 0x10d80418 */
  push32((uint32_t)(0x10d80418u));
  /* 10d52d46 call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52d4cu);
  /* 10d52d4c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52d4f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52d51 call 0x10d53750 */
  push32(0x10d52d56u); f_10d53750();
  /* 10d52d56 mov esi, esp */
  ESI = (ESP);
  /* 10d52d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d5a push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d5f push 0x10d80400 */
  push32((uint32_t)(0x10d80400u));
  /* 10d52d64 call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52d6au);
  /* 10d52d6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52d6d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52d6f call 0x10d53750 */
  push32(0x10d52d74u); f_10d53750();
  /* 10d52d74 mov esi, esp */
  ESI = (ESP);
  /* 10d52d76 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d78 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d7d push 0x10d80408 */
  push32((uint32_t)(0x10d80408u));
  /* 10d52d82 call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52d88u);
  /* 10d52d88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52d8b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52d8d call 0x10d53750 */
  push32(0x10d52d92u); f_10d53750();
  /* 10d52d92 mov esi, esp */
  ESI = (ESP);
  /* 10d52d94 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52d96 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52d9b push 0x10d804a8 */
  push32((uint32_t)(0x10d804a8u));
  /* 10d52da0 call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52da6u);
  /* 10d52da6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52da9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52dab call 0x10d53750 */
  push32(0x10d52db0u); f_10d53750();
  /* 10d52db0 mov esi, esp */
  ESI = (ESP);
  /* 10d52db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52db4 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52db9 push 0x10d803f8 */
  push32((uint32_t)(0x10d803f8u));
  /* 10d52dbe call dword ptr [0x10d8343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8343c))), 0x10d52dc4u);
  /* 10d52dc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52dc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52dc9 call 0x10d53750 */
  push32(0x10d52dceu); f_10d53750();
L_10d52dce:;
  /* 10d52dce mov esi, esp */
  ESI = (ESP);
  /* 10d52dd0 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d52dd2 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52dd8u);
  /* 10d52dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52ddb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ddd call 0x10d53750 */
  push32(0x10d52de2u); f_10d53750();
  /* 10d52de2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52de9 je 0x10d52eb2 */
  if (C.zf) goto L_10d52eb2;
  /* 10d52def mov esi, esp */
  ESI = (ESP);
  /* 10d52df1 push 0x10d803e0 */
  push32((uint32_t)(0x10d803e0u));
  /* 10d52df6 push 0x10d80460 */
  push32((uint32_t)(0x10d80460u));
  /* 10d52dfb call dword ptr [0x10d83434] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83434))), 0x10d52e01u);
  /* 10d52e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e06 call 0x10d53750 */
  push32(0x10d52e0bu); f_10d53750();
  /* 10d52e0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52e0d jle 0x10d52eb2 */
  if ((C.zf||C.sf!=C.of)) goto L_10d52eb2;
  /* 10d52e13 mov esi, esp */
  ESI = (ESP);
  /* 10d52e15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52e17 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d52e19 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52e1fu);
  /* 10d52e1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e24 call 0x10d53750 */
  push32(0x10d52e29u); f_10d53750();
  /* 10d52e29 mov esi, esp */
  ESI = (ESP);
  /* 10d52e2b push 0x10d7b150 */
  push32((uint32_t)(0x10d7b150u));
  /* 10d52e30 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52e36u);
  /* 10d52e36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e39 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e3b call 0x10d53750 */
  push32(0x10d52e40u); f_10d53750();
  /* 10d52e40 mov esi, esp */
  ESI = (ESP);
  /* 10d52e42 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52e44 push 0x10d80478 */
  push32((uint32_t)(0x10d80478u));
  /* 10d52e49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52e4b call dword ptr [0x10d8341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8341c))), 0x10d52e51u);
  /* 10d52e51 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e54 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e56 call 0x10d53750 */
  push32(0x10d52e5bu); f_10d53750();
  /* 10d52e5b mov esi, esp */
  ESI = (ESP);
  /* 10d52e5d push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52e5f push 0x10d80480 */
  push32((uint32_t)(0x10d80480u));
  /* 10d52e64 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52e66 call dword ptr [0x10d8341c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8341c))), 0x10d52e6cu);
  /* 10d52e6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e71 call 0x10d53750 */
  push32(0x10d52e76u); f_10d53750();
  /* 10d52e76 mov esi, esp */
  ESI = (ESP);
  /* 10d52e78 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 10d52e7a call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d52e80u);
  /* 10d52e80 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e85 call 0x10d53750 */
  push32(0x10d52e8au); f_10d53750();
  /* 10d52e8a mov esi, esp */
  ESI = (ESP);
  /* 10d52e8c push 0x44 */
  push32((uint32_t)(0x44u));
  /* 10d52e8e call dword ptr [0x10d8342c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8342c))), 0x10d52e94u);
  /* 10d52e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52e97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52e99 call 0x10d53750 */
  push32(0x10d52e9eu); f_10d53750();
  /* 10d52e9e mov esi, esp */
  ESI = (ESP);
  /* 10d52ea0 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 10d52ea2 call dword ptr [0x10d83444] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83444))), 0x10d52ea8u);
  /* 10d52ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52eab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ead call 0x10d53750 */
  push32(0x10d52eb2u); f_10d53750();
L_10d52eb2:;
  /* 10d52eb2 mov esi, esp */
  ESI = (ESP);
  /* 10d52eb4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10d52eb6 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52ebcu);
  /* 10d52ebc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52ebf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ec1 call 0x10d53750 */
  push32(0x10d52ec6u); f_10d53750();
  /* 10d52ec6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52ecb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52ecd je 0x10d52f1c */
  if (C.zf) goto L_10d52f1c;
  /* 10d52ecf push 0x10d803e0 */
  push32((uint32_t)(0x10d803e0u));
  /* 10d52ed4 call 0x10d51005 */
  push32(0x10d52ed9u); f_10d51005();
  /* 10d52ed9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52edc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52ede jne 0x10d52f1c */
  if (!C.zf) goto L_10d52f1c;
  /* 10d52ee0 mov esi, esp */
  ESI = (ESP);
  /* 10d52ee2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52ee4 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 10d52ee6 call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52eecu);
  /* 10d52eec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52eef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52ef1 call 0x10d53750 */
  push32(0x10d52ef6u); f_10d53750();
  /* 10d52ef6 mov esi, esp */
  ESI = (ESP);
  /* 10d52ef8 push 0x10d7b144 */
  push32((uint32_t)(0x10d7b144u));
  /* 10d52efd call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52f03u);
  /* 10d52f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f08 call 0x10d53750 */
  push32(0x10d52f0du); f_10d53750();
  /* 10d52f0d mov esi, esp */
  ESI = (ESP);
  /* 10d52f0f call dword ptr [0x10d8344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8344c))), 0x10d52f15u);
  /* 10d52f15 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f17 call 0x10d53750 */
  push32(0x10d52f1cu); f_10d53750();
L_10d52f1c:;
  /* 10d52f1c mov esi, esp */
  ESI = (ESP);
  /* 10d52f1e push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10d52f20 call dword ptr [0x10d833f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833f8))), 0x10d52f26u);
  /* 10d52f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f29 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f2b call 0x10d53750 */
  push32(0x10d52f30u); f_10d53750();
  /* 10d52f30 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52f35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52f37 je 0x10d52f9e */
  if (C.zf) goto L_10d52f9e;
  /* 10d52f39 mov esi, esp */
  ESI = (ESP);
  /* 10d52f3b push 1 */
  push32((uint32_t)(0x1u));
  /* 10d52f3d call dword ptr [0x10d83430] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83430))), 0x10d52f43u);
  /* 10d52f43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f46 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f48 call 0x10d53750 */
  push32(0x10d52f4du); f_10d53750();
  /* 10d52f4d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d52f52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d52f54 je 0x10d52f9e */
  if (C.zf) goto L_10d52f9e;
  /* 10d52f56 mov esi, esp */
  ESI = (ESP);
  /* 10d52f58 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d52f5a push 0x41 */
  push32((uint32_t)(0x41u));
  /* 10d52f5c call dword ptr [0x10d83404] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83404))), 0x10d52f62u);
  /* 10d52f62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f67 call 0x10d53750 */
  push32(0x10d52f6cu); f_10d53750();
  /* 10d52f6c mov esi, esp */
  ESI = (ESP);
  /* 10d52f6e push 0x10d7b138 */
  push32((uint32_t)(0x10d7b138u));
  /* 10d52f73 call dword ptr [0x10d83410] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83410))), 0x10d52f79u);
  /* 10d52f79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f7e call 0x10d53750 */
  push32(0x10d52f83u); f_10d53750();
  /* 10d52f83 mov esi, esp */
  ESI = (ESP);
  /* 10d52f85 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d52f87 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d52f89 push 0x10d80458 */
  push32((uint32_t)(0x10d80458u));
  /* 10d52f8e call dword ptr [0x10d8340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8340c))), 0x10d52f94u);
  /* 10d52f94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52f97 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52f99 call 0x10d53750 */
  push32(0x10d52f9eu); f_10d53750();
L_10d52f9e:;
  /* 10d52f9e pop edi */
  EDI = (pop32());
  /* 10d52f9f pop esi */
  ESI = (pop32());
  /* 10d52fa0 pop ebx */
  EBX = (pop32());
  /* 10d52fa1 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d52fa4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d52fa6 call 0x10d53750 */
  push32(0x10d52fabu); f_10d53750();
  /* 10d52fab mov esp, ebp */
  ESP = (EBP);
  /* 10d52fad pop ebp */
  EBP = (pop32());
  /* 10d52fae ret  */
  ESPCHK(0x10d51560u, _esp0);
  ESP += 4; return;
}

/* FUN_10003650 @ 0x10d53650 (63 bytes, 26 insns) */
void f_10d53650(void) {
  FTRACE(0x10d53650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53650 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53651 mov ebp, esp */
  EBP = (ESP);
  /* 10d53653 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d53656 push ebx */
  push32((uint32_t)(EBX));
  /* 10d53657 push esi */
  push32((uint32_t)(ESI));
  /* 10d53658 push edi */
  push32((uint32_t)(EDI));
  /* 10d53659 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10d5365c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10d53661 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10d53666 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d53668 mov esi, esp */
  ESI = (ESP);
  /* 10d5366a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5366d push eax */
  push32((uint32_t)(EAX));
  /* 10d5366e call dword ptr [0x10d833fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d833fc))), 0x10d53674u);
  /* 10d53674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53677 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53679 call 0x10d53750 */
  push32(0x10d5367eu); f_10d53750();
  /* 10d5367e pop edi */
  EDI = (pop32());
  /* 10d5367f pop esi */
  ESI = (pop32());
  /* 10d53680 pop ebx */
  EBX = (pop32());
  /* 10d53681 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53684 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53686 call 0x10d53750 */
  push32(0x10d5368bu); f_10d53750();
  /* 10d5368b mov esp, ebp */
  ESP = (EBP);
  /* 10d5368d pop ebp */
  EBP = (pop32());
  /* 10d5368e ret  */
  ESPCHK(0x10d53650u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10d53750 (56 bytes, 28 insns) */
void f_10d53750(void) {
  FTRACE(0x10d53750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53750 jne 0x10d53753 */
  if (!C.zf) goto L_10d53753;
  /* 10d53752 ret  */
  ESPCHK(0x10d53750u, _esp0);
  ESP += 4; return;
L_10d53753:;
  /* 10d53753 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53754 mov ebp, esp */
  EBP = (ESP);
  /* 10d53756 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d53759 push eax */
  push32((uint32_t)(EAX));
  /* 10d5375a push edx */
  push32((uint32_t)(EDX));
  /* 10d5375b push ebx */
  push32((uint32_t)(EBX));
  /* 10d5375c push esi */
  push32((uint32_t)(ESI));
  /* 10d5375d push edi */
  push32((uint32_t)(EDI));
  /* 10d5375e push 0x10d7b1d8 */
  push32((uint32_t)(0x10d7b1d8u));
  /* 10d53763 push 0x10d7b1d4 */
  push32((uint32_t)(0x10d7b1d4u));
  /* 10d53768 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10d5376a push 0x10d7b1c4 */
  push32((uint32_t)(0x10d7b1c4u));
  /* 10d5376f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d53771 call 0x10d53b20 */
  push32(0x10d53776u); f_10d53b20();
  /* 10d53776 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53779 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5377c jne 0x10d5377f */
  if (!C.zf) goto L_10d5377f;
  /* 10d5377e int3  */
  x86_unimpl("int3 @ 0x10d5377e");
L_10d5377f:;
  /* 10d5377f pop edi */
  EDI = (pop32());
  /* 10d53780 pop esi */
  ESI = (pop32());
  /* 10d53781 pop ebx */
  EBX = (pop32());
  /* 10d53782 pop edx */
  EDX = (pop32());
  /* 10d53783 pop eax */
  EAX = (pop32());
  /* 10d53784 mov esp, ebp */
  ESP = (EBP);
  /* 10d53786 pop ebp */
  EBP = (pop32());
  /* 10d53787 ret  */
  ESPCHK(0x10d53750u, _esp0);
  ESP += 4; return;
}

/* FUN_10003790 @ 0x10d53790 (313 bytes, 78 insns) */
void f_10d53790(void) {
  FTRACE(0x10d53790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53790 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53791 mov ebp, esp */
  EBP = (ESP);
  /* 10d53793 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53797 jne 0x10d53857 */
  if (!C.zf) goto L_10d53857;
  /* 10d5379d call dword ptr [0x10d832ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832ec))), 0x10d537a3u);
  /* 10d537a3 mov dword ptr [0x10d80504], eax */
  w32((uint32_t)(0x10d80504), (EAX));
  /* 10d537a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d537aa call 0x10d57250 */
  push32(0x10d537afu); f_10d57250();
  /* 10d537af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d537b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d537b4 jne 0x10d537bd */
  if (!C.zf) goto L_10d537bd;
  /* 10d537b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d537b8 jmp 0x10d538c5 */
  goto L_10d538c5;
L_10d537bd:;
  /* 10d537bd mov eax, dword ptr [0x10d80504] */
  EAX = (r32((uint32_t)(0x10d80504)));
  /* 10d537c2 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d537c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d537ca mov dword ptr [0x10d80510], eax */
  w32((uint32_t)(0x10d80510), (EAX));
  /* 10d537cf mov ecx, dword ptr [0x10d80504] */
  ECX = (r32((uint32_t)(0x10d80504)));
  /* 10d537d5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d537db mov dword ptr [0x10d8050c], ecx */
  w32((uint32_t)(0x10d8050c), (ECX));
  /* 10d537e1 mov edx, dword ptr [0x10d8050c] */
  EDX = (r32((uint32_t)(0x10d8050c)));
  /* 10d537e7 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10d537ea add edx, dword ptr [0x10d80510] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d80510))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d537f0 mov dword ptr [0x10d80508], edx */
  w32((uint32_t)(0x10d80508), (EDX));
  /* 10d537f6 mov eax, dword ptr [0x10d80504] */
  EAX = (r32((uint32_t)(0x10d80504)));
  /* 10d537fb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d537fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53803 mov dword ptr [0x10d80504], eax */
  w32((uint32_t)(0x10d80504), (EAX));
  /* 10d53808 call 0x10d543c0 */
  push32(0x10d5380du); f_10d543c0();
  /* 10d5380d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5380f jne 0x10d5381d */
  if (!C.zf) goto L_10d5381d;
  /* 10d53811 call 0x10d572a0 */
  push32(0x10d53816u); f_10d572a0();
  /* 10d53816 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d53818 jmp 0x10d538c5 */
  goto L_10d538c5;
L_10d5381d:;
  /* 10d5381d call dword ptr [0x10d832e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e8))), 0x10d53823u);
  /* 10d53823 mov dword ptr [0x10d8204c], eax */
  w32((uint32_t)(0x10d8204c), (EAX));
  /* 10d53828 call 0x10d57030 */
  push32(0x10d5382du); f_10d57030();
  /* 10d5382d mov dword ptr [0x10d804ec], eax */
  w32((uint32_t)(0x10d804ec), (EAX));
  /* 10d53832 call 0x10d54670 */
  push32(0x10d53837u); f_10d54670();
  /* 10d53837 call 0x10d56b20 */
  push32(0x10d5383cu); f_10d56b20();
  /* 10d5383c call 0x10d569d0 */
  push32(0x10d53841u); f_10d569d0();
  /* 10d53841 call 0x10d541c0 */
  push32(0x10d53846u); f_10d541c0();
  /* 10d53846 mov ecx, dword ptr [0x10d804e8] */
  ECX = (r32((uint32_t)(0x10d804e8)));
  /* 10d5384c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5384f mov dword ptr [0x10d804e8], ecx */
  w32((uint32_t)(0x10d804e8), (ECX));
  /* 10d53855 jmp 0x10d538c0 */
  goto L_10d538c0;
L_10d53857:;
  /* 10d53857 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5385b jne 0x10d538b0 */
  if (!C.zf) goto L_10d538b0;
  /* 10d5385d cmp dword ptr [0x10d804e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53864 jle 0x10d538aa */
  if ((C.zf||C.sf!=C.of)) goto L_10d538aa;
  /* 10d53866 mov edx, dword ptr [0x10d804e8] */
  EDX = (r32((uint32_t)(0x10d804e8)));
  /* 10d5386c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5386f mov dword ptr [0x10d804e8], edx */
  w32((uint32_t)(0x10d804e8), (EDX));
  /* 10d53875 cmp dword ptr [0x10d8053c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8053c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5387c jne 0x10d53883 */
  if (!C.zf) goto L_10d53883;
  /* 10d5387e call 0x10d54240 */
  push32(0x10d53883u); f_10d54240();
L_10d53883:;
  /* 10d53883 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d53885 call 0x10d55f70 */
  push32(0x10d5388au); f_10d55f70();
  /* 10d5388a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5388d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d53890 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53892 je 0x10d53899 */
  if (C.zf) goto L_10d53899;
  /* 10d53894 call 0x10d56880 */
  push32(0x10d53899u); f_10d56880();
L_10d53899:;
  /* 10d53899 call 0x10d549a0 */
  push32(0x10d5389eu); f_10d549a0();
  /* 10d5389e call 0x10d54450 */
  push32(0x10d538a3u); f_10d54450();
  /* 10d538a3 call 0x10d572a0 */
  push32(0x10d538a8u); f_10d572a0();
  /* 10d538a8 jmp 0x10d538ae */
  goto L_10d538ae;
L_10d538aa:;
  /* 10d538aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d538ac jmp 0x10d538c5 */
  goto L_10d538c5;
L_10d538ae:;
  /* 10d538ae jmp 0x10d538c0 */
  goto L_10d538c0;
L_10d538b0:;
  /* 10d538b0 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d538b4 jne 0x10d538c0 */
  if (!C.zf) goto L_10d538c0;
  /* 10d538b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d538b8 call 0x10d54540 */
  push32(0x10d538bdu); f_10d54540();
  /* 10d538bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d538c0:;
  /* 10d538c0 mov eax, 1 */
  EAX = (0x1u);
L_10d538c5:;
  /* 10d538c5 pop ebp */
  EBP = (pop32());
  /* 10d538c6 ret 0xc */
  ESPCHK(0x10d53790u, _esp0);
  ESP += 16; return;
}

/* entry @ 0x10d538d0 (243 bytes, 86 insns) */
void f_10d538d0(void) {
  FTRACE(0x10d538d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d538d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d538d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d538d3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d538d4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d538db cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d538df jne 0x10d538f1 */
  if (!C.zf) goto L_10d538f1;
  /* 10d538e1 cmp dword ptr [0x10d804e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d538e8 jne 0x10d538f1 */
  if (!C.zf) goto L_10d538f1;
  /* 10d538ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d538ec jmp 0x10d539bd */
  goto L_10d539bd;
L_10d538f1:;
  /* 10d538f1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d538f5 je 0x10d538fd */
  if (C.zf) goto L_10d538fd;
  /* 10d538f7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d538fb jne 0x10d5393f */
  if (!C.zf) goto L_10d5393f;
L_10d538fd:;
  /* 10d538fd cmp dword ptr [0x10d8205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53904 je 0x10d5391b */
  if (C.zf) goto L_10d5391b;
  /* 10d53906 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53909 push eax */
  push32((uint32_t)(EAX));
  /* 10d5390a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5390d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5390e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53911 push edx */
  push32((uint32_t)(EDX));
  /* 10d53912 call dword ptr [0x10d8205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8205c))), 0x10d53918u);
  /* 10d53918 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5391b:;
  /* 10d5391b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5391f je 0x10d53935 */
  if (C.zf) goto L_10d53935;
  /* 10d53921 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53924 push eax */
  push32((uint32_t)(EAX));
  /* 10d53925 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53928 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53929 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5392c push edx */
  push32((uint32_t)(EDX));
  /* 10d5392d call 0x10d53790 */
  push32(0x10d53932u); f_10d53790();
  /* 10d53932 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d53935:;
  /* 10d53935 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53939 jne 0x10d5393f */
  if (!C.zf) goto L_10d5393f;
  /* 10d5393b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5393d jmp 0x10d539bd */
  goto L_10d539bd;
L_10d5393f:;
  /* 10d5393f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53942 push eax */
  push32((uint32_t)(EAX));
  /* 10d53943 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53946 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5394a push edx */
  push32((uint32_t)(EDX));
  /* 10d5394b call 0x10d5100f */
  push32(0x10d53950u); f_10d5100f();
  /* 10d53950 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d53953 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53957 jne 0x10d5396e */
  if (!C.zf) goto L_10d5396e;
  /* 10d53959 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5395d jne 0x10d5396e */
  if (!C.zf) goto L_10d5396e;
  /* 10d5395f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53962 push eax */
  push32((uint32_t)(EAX));
  /* 10d53963 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d53965 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53968 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53969 call 0x10d53790 */
  push32(0x10d5396eu); f_10d53790();
L_10d5396e:;
  /* 10d5396e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53972 je 0x10d5397a */
  if (C.zf) goto L_10d5397a;
  /* 10d53974 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53978 jne 0x10d539ba */
  if (!C.zf) goto L_10d539ba;
L_10d5397a:;
  /* 10d5397a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5397d push edx */
  push32((uint32_t)(EDX));
  /* 10d5397e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53981 push eax */
  push32((uint32_t)(EAX));
  /* 10d53982 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53985 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53986 call 0x10d53790 */
  push32(0x10d5398bu); f_10d53790();
  /* 10d5398b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5398d jne 0x10d53996 */
  if (!C.zf) goto L_10d53996;
  /* 10d5398f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d53996:;
  /* 10d53996 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5399a je 0x10d539ba */
  if (C.zf) goto L_10d539ba;
  /* 10d5399c cmp dword ptr [0x10d8205c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8205c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d539a3 je 0x10d539ba */
  if (C.zf) goto L_10d539ba;
  /* 10d539a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d539a8 push edx */
  push32((uint32_t)(EDX));
  /* 10d539a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d539ac push eax */
  push32((uint32_t)(EAX));
  /* 10d539ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d539b0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d539b1 call dword ptr [0x10d8205c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8205c))), 0x10d539b7u);
  /* 10d539b7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d539ba:;
  /* 10d539ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d539bd:;
  /* 10d539bd mov esp, ebp */
  ESP = (EBP);
  /* 10d539bf pop ebp */
  EBP = (pop32());
  /* 10d539c0 ret 0xc */
  ESPCHK(0x10d538d0u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10d539d0 (58 bytes, 18 insns) */
void f_10d539d0(void) {
  FTRACE(0x10d539d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d539d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d539d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d539d3 cmp dword ptr [0x10d804f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d539da je 0x10d539ee */
  if (C.zf) goto L_10d539ee;
  /* 10d539dc cmp dword ptr [0x10d804f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d539e3 jne 0x10d539f3 */
  if (!C.zf) goto L_10d539f3;
  /* 10d539e5 cmp dword ptr [0x10d804f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d539ec jne 0x10d539f3 */
  if (!C.zf) goto L_10d539f3;
L_10d539ee:;
  /* 10d539ee call 0x10d57340 */
  push32(0x10d539f3u); f_10d57340();
L_10d539f3:;
  /* 10d539f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d539f6 push eax */
  push32((uint32_t)(EAX));
  /* 10d539f7 call 0x10d57390 */
  push32(0x10d539fcu); f_10d57390();
  /* 10d539fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d539ff push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d53a04 call dword ptr [0x10d7ea30] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7ea30))), 0x10d53a0au);
  /* 10d53a0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53a0d pop ebp */
  EBP = (pop32());
  /* 10d53a0e ret  */
  ESPCHK(0x10d539d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a10 @ 0x10d53a10 (11 bytes, 5 insns) */
void f_10d53a10(void) {
  FTRACE(0x10d53a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53a11 mov ebp, esp */
  EBP = (ESP);
  /* 10d53a13 call dword ptr [0x10d832f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f0))), 0x10d53a19u);
  /* 10d53a19 pop ebp */
  EBP = (pop32());
  /* 10d53a1a ret  */
  ESPCHK(0x10d53a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10003a20 @ 0x10d53a20 (87 bytes, 30 insns) */
void f_10d53a20(void) {
  FTRACE(0x10d53a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53a20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53a21 mov ebp, esp */
  EBP = (ESP);
  /* 10d53a23 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53a24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a28 jl 0x10d53a30 */
  if ((C.sf!=C.of)) goto L_10d53a30;
  /* 10d53a2a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a2e jl 0x10d53a35 */
  if ((C.sf!=C.of)) goto L_10d53a35;
L_10d53a30:;
  /* 10d53a30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53a33 jmp 0x10d53a73 */
  goto L_10d53a73;
L_10d53a35:;
  /* 10d53a35 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a39 jne 0x10d53a47 */
  if (!C.zf) goto L_10d53a47;
  /* 10d53a3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53a3e mov eax, dword ptr [eax*4 + 0x10d7ea38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d7ea38)));
  /* 10d53a45 jmp 0x10d53a73 */
  goto L_10d53a73;
L_10d53a47:;
  /* 10d53a47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53a4a and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10d53a4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d53a4f je 0x10d53a56 */
  if (C.zf) goto L_10d53a56;
  /* 10d53a51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53a54 jmp 0x10d53a73 */
  goto L_10d53a73;
L_10d53a56:;
  /* 10d53a56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53a59 mov eax, dword ptr [edx*4 + 0x10d7ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d7ea38)));
  /* 10d53a60 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d53a63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53a66 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53a69 mov dword ptr [ecx*4 + 0x10d7ea38], edx */
  w32((uint32_t)(ECX*4 + 0x10d7ea38), (EDX));
  /* 10d53a70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d53a73:;
  /* 10d53a73 mov esp, ebp */
  ESP = (EBP);
  /* 10d53a75 pop ebp */
  EBP = (pop32());
  /* 10d53a76 ret  */
  ESPCHK(0x10d53a20u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10d53a80 (126 bytes, 38 insns) */
void f_10d53a80(void) {
  FTRACE(0x10d53a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53a80 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53a81 mov ebp, esp */
  EBP = (ESP);
  /* 10d53a83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53a84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a88 jl 0x10d53a90 */
  if ((C.sf!=C.of)) goto L_10d53a90;
  /* 10d53a8a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a8e jl 0x10d53a97 */
  if ((C.sf!=C.of)) goto L_10d53a97;
L_10d53a90:;
  /* 10d53a90 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10d53a95 jmp 0x10d53afa */
  goto L_10d53afa;
L_10d53a97:;
  /* 10d53a97 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53a9b jne 0x10d53aa9 */
  if (!C.zf) goto L_10d53aa9;
  /* 10d53a9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53aa0 mov eax, dword ptr [eax*4 + 0x10d7ea44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10d7ea44)));
  /* 10d53aa7 jmp 0x10d53afa */
  goto L_10d53afa;
L_10d53aa9:;
  /* 10d53aa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53aac mov edx, dword ptr [ecx*4 + 0x10d7ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea44)));
  /* 10d53ab3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d53ab6 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53aba jne 0x10d53ad0 */
  if (!C.zf) goto L_10d53ad0;
  /* 10d53abc push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10d53abe call dword ptr [0x10d832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f4))), 0x10d53ac4u);
  /* 10d53ac4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53ac7 mov dword ptr [ecx*4 + 0x10d7ea44], eax */
  w32((uint32_t)(ECX*4 + 0x10d7ea44), (EAX));
  /* 10d53ace jmp 0x10d53af7 */
  goto L_10d53af7;
L_10d53ad0:;
  /* 10d53ad0 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53ad4 jne 0x10d53aea */
  if (!C.zf) goto L_10d53aea;
  /* 10d53ad6 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d53ad8 call dword ptr [0x10d832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f4))), 0x10d53adeu);
  /* 10d53ade mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53ae1 mov dword ptr [edx*4 + 0x10d7ea44], eax */
  w32((uint32_t)(EDX*4 + 0x10d7ea44), (EAX));
  /* 10d53ae8 jmp 0x10d53af7 */
  goto L_10d53af7;
L_10d53aea:;
  /* 10d53aea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53aed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53af0 mov dword ptr [eax*4 + 0x10d7ea44], ecx */
  w32((uint32_t)(EAX*4 + 0x10d7ea44), (ECX));
L_10d53af7:;
  /* 10d53af7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d53afa:;
  /* 10d53afa mov esp, ebp */
  ESP = (EBP);
  /* 10d53afc pop ebp */
  EBP = (pop32());
  /* 10d53afd ret  */
  ESPCHK(0x10d53a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b00 @ 0x10d53b00 (28 bytes, 11 insns) */
void f_10d53b00(void) {
  FTRACE(0x10d53b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53b01 mov ebp, esp */
  EBP = (ESP);
  /* 10d53b03 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53b04 mov eax, dword ptr [0x10d82040] */
  EAX = (r32((uint32_t)(0x10d82040)));
  /* 10d53b09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d53b0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53b0f mov dword ptr [0x10d82040], ecx */
  w32((uint32_t)(0x10d82040), (ECX));
  /* 10d53b15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d53b18 mov esp, ebp */
  ESP = (EBP);
  /* 10d53b1a pop ebp */
  EBP = (pop32());
  /* 10d53b1b ret  */
  ESPCHK(0x10d53b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10003b20 @ 0x10d53b20 (912 bytes, 248 insns) */
void f_10d53b20(void) {
  FTRACE(0x10d53b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53b21 mov ebp, esp */
  EBP = (ESP);
  /* 10d53b23 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10d53b28 call 0x10d57c00 */
  push32(0x10d53b2du); f_10d57c00();
  /* 10d53b2d push edi */
  push32((uint32_t)(EDI));
  /* 10d53b2e mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10d53b35 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d53b3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d53b3c lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10d53b42 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d53b44 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d53b46 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d53b47 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10d53b4e mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d53b53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d53b55 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 10d53b5b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d53b5d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d53b5f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d53b60 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 10d53b67 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10d53b6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d53b6e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 10d53b74 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d53b76 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10d53b78 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10d53b79 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 10d53b7c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 10d53b82 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53b86 jl 0x10d53b8e */
  if ((C.sf!=C.of)) goto L_10d53b8e;
  /* 10d53b88 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53b8c jl 0x10d53b96 */
  if ((C.sf!=C.of)) goto L_10d53b96;
L_10d53b8e:;
  /* 10d53b8e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53b91 jmp 0x10d53eab */
  goto L_10d53eab;
L_10d53b96:;
  /* 10d53b96 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53b9a jne 0x10d53c40 */
  if (!C.zf) goto L_10d53c40;
  /* 10d53ba0 push 0x10d7ea34 */
  push32((uint32_t)(0x10d7ea34u));
  /* 10d53ba5 call dword ptr [0x10d8330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8330c))), 0x10d53babu);
  /* 10d53bab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53bad jle 0x10d53c40 */
  if ((C.zf||C.sf!=C.of)) goto L_10d53c40;
  /* 10d53bb3 cmp dword ptr [0x10d804fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53bba jne 0x10d53bfe */
  if (!C.zf) goto L_10d53bfe;
  /* 10d53bbc push 0x10d7b380 */
  push32((uint32_t)(0x10d7b380u));
  /* 10d53bc1 call dword ptr [0x10d83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83308))), 0x10d53bc7u);
  /* 10d53bc7 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 10d53bcd cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53bd4 je 0x10d53bf6 */
  if (C.zf) goto L_10d53bf6;
  /* 10d53bd6 push 0x10d7b374 */
  push32((uint32_t)(0x10d7b374u));
  /* 10d53bdb mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 10d53be1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53be2 call dword ptr [0x10d83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83304))), 0x10d53be8u);
  /* 10d53be8 mov dword ptr [0x10d804fc], eax */
  w32((uint32_t)(0x10d804fc), (EAX));
  /* 10d53bed cmp dword ptr [0x10d804fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53bf4 jne 0x10d53bfe */
  if (!C.zf) goto L_10d53bfe;
L_10d53bf6:;
  /* 10d53bf6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53bf9 jmp 0x10d53eab */
  goto L_10d53eab;
L_10d53bfe:;
  /* 10d53bfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53c01 push edx */
  push32((uint32_t)(EDX));
  /* 10d53c02 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53c05 push eax */
  push32((uint32_t)(EAX));
  /* 10d53c06 push 0x10d7b340 */
  push32((uint32_t)(0x10d7b340u));
  /* 10d53c0b lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d53c11 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53c12 call dword ptr [0x10d804fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d804fc))), 0x10d53c18u);
  /* 10d53c18 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53c1b lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d53c21 push edx */
  push32((uint32_t)(EDX));
  /* 10d53c22 call dword ptr [0x10d83300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83300))), 0x10d53c28u);
  /* 10d53c28 push 0x10d7ea34 */
  push32((uint32_t)(0x10d7ea34u));
  /* 10d53c2d call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d53c33u);
  /* 10d53c33 call 0x10d53a10 */
  push32(0x10d53c38u); f_10d53a10();
  /* 10d53c38 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d53c3b jmp 0x10d53eab */
  goto L_10d53eab;
L_10d53c40:;
  /* 10d53c40 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53c44 je 0x10d53c7d */
  if (C.zf) goto L_10d53c7d;
  /* 10d53c46 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 10d53c4c push eax */
  push32((uint32_t)(EAX));
  /* 10d53c4d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d53c50 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53c51 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 10d53c56 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 10d53c5c push edx */
  push32((uint32_t)(EDX));
  /* 10d53c5d call 0x10d57b00 */
  push32(0x10d53c62u); f_10d57b00();
  /* 10d53c62 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53c65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53c67 jge 0x10d53c7d */
  if ((C.sf==C.of)) goto L_10d53c7d;
  /* 10d53c69 push 0x10d7b314 */
  push32((uint32_t)(0x10d7b314u));
  /* 10d53c6e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d53c74 push eax */
  push32((uint32_t)(EAX));
  /* 10d53c75 call 0x10d57a10 */
  push32(0x10d53c7au); f_10d57a10();
  /* 10d53c7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53c7d:;
  /* 10d53c7d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53c81 jne 0x10d53cb5 */
  if (!C.zf) goto L_10d53cb5;
  /* 10d53c83 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53c87 je 0x10d53c95 */
  if (C.zf) goto L_10d53c95;
  /* 10d53c89 mov dword ptr [ebp - 0x3028], 0x10d7b300 */
  w32((uint32_t)(EBP + -0x3028), (0x10d7b300u));
  /* 10d53c93 jmp 0x10d53c9f */
  goto L_10d53c9f;
L_10d53c95:;
  /* 10d53c95 mov dword ptr [ebp - 0x3028], 0x10d7b2ec */
  w32((uint32_t)(EBP + -0x3028), (0x10d7b2ecu));
L_10d53c9f:;
  /* 10d53c9f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 10d53ca5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53ca6 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d53cac push edx */
  push32((uint32_t)(EDX));
  /* 10d53cad call 0x10d57a10 */
  push32(0x10d53cb2u); f_10d57a10();
  /* 10d53cb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53cb5:;
  /* 10d53cb5 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 10d53cbb push eax */
  push32((uint32_t)(EAX));
  /* 10d53cbc lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d53cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53cc3 call 0x10d57a20 */
  push32(0x10d53cc8u); f_10d57a20();
  /* 10d53cc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53ccb cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53ccf jne 0x10d53d0a */
  if (!C.zf) goto L_10d53d0a;
  /* 10d53cd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53cd4 mov eax, dword ptr [edx*4 + 0x10d7ea38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d7ea38)));
  /* 10d53cdb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d53cde test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53ce0 je 0x10d53cf6 */
  if (C.zf) goto L_10d53cf6;
  /* 10d53ce2 push 0x10d7b2e8 */
  push32((uint32_t)(0x10d7b2e8u));
  /* 10d53ce7 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 10d53ced push ecx */
  push32((uint32_t)(ECX));
  /* 10d53cee call 0x10d57a20 */
  push32(0x10d53cf3u); f_10d57a20();
  /* 10d53cf3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53cf6:;
  /* 10d53cf6 push 0x10d7b2e4 */
  push32((uint32_t)(0x10d7b2e4u));
  /* 10d53cfb lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d53d01 push edx */
  push32((uint32_t)(EDX));
  /* 10d53d02 call 0x10d57a20 */
  push32(0x10d53d07u); f_10d57a20();
  /* 10d53d07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53d0a:;
  /* 10d53d0a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53d0e je 0x10d53d52 */
  if (C.zf) goto L_10d53d52;
  /* 10d53d10 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 10d53d16 push eax */
  push32((uint32_t)(EAX));
  /* 10d53d17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53d1a push ecx */
  push32((uint32_t)(ECX));
  /* 10d53d1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53d1e push edx */
  push32((uint32_t)(EDX));
  /* 10d53d1f push 0x10d7b2d8 */
  push32((uint32_t)(0x10d7b2d8u));
  /* 10d53d24 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d53d29 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d53d2f push eax */
  push32((uint32_t)(EAX));
  /* 10d53d30 call 0x10d57910 */
  push32(0x10d53d35u); f_10d57910();
  /* 10d53d35 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53d38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53d3a jge 0x10d53d50 */
  if ((C.sf==C.of)) goto L_10d53d50;
  /* 10d53d3c push 0x10d7b314 */
  push32((uint32_t)(0x10d7b314u));
  /* 10d53d41 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 10d53d47 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53d48 call 0x10d57a10 */
  push32(0x10d53d4du); f_10d57a10();
  /* 10d53d4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53d50:;
  /* 10d53d50 jmp 0x10d53d68 */
  goto L_10d53d68;
L_10d53d52:;
  /* 10d53d52 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 10d53d58 push edx */
  push32((uint32_t)(EDX));
  /* 10d53d59 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d53d5f push eax */
  push32((uint32_t)(EAX));
  /* 10d53d60 call 0x10d57a10 */
  push32(0x10d53d65u); f_10d57a10();
  /* 10d53d65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53d68:;
  /* 10d53d68 cmp dword ptr [0x10d82040], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82040))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53d6f je 0x10d53dac */
  if (C.zf) goto L_10d53dac;
  /* 10d53d71 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 10d53d77 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53d78 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d53d7e push edx */
  push32((uint32_t)(EDX));
  /* 10d53d7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53d82 push eax */
  push32((uint32_t)(EAX));
  /* 10d53d83 call dword ptr [0x10d82040] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d82040))), 0x10d53d89u);
  /* 10d53d89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53d8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53d8e je 0x10d53dac */
  if (C.zf) goto L_10d53dac;
  /* 10d53d90 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53d94 jne 0x10d53da1 */
  if (!C.zf) goto L_10d53da1;
  /* 10d53d96 push 0x10d7ea34 */
  push32((uint32_t)(0x10d7ea34u));
  /* 10d53d9b call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d53da1u);
L_10d53da1:;
  /* 10d53da1 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d53da7 jmp 0x10d53eab */
  goto L_10d53eab;
L_10d53dac:;
  /* 10d53dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53daf mov edx, dword ptr [ecx*4 + 0x10d7ea38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea38)));
  /* 10d53db6 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d53db9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d53dbb je 0x10d53dfb */
  if (C.zf) goto L_10d53dfb;
  /* 10d53dbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53dc0 cmp dword ptr [eax*4 + 0x10d7ea44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10d7ea44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53dc8 je 0x10d53dfb */
  if (C.zf) goto L_10d53dfb;
  /* 10d53dca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d53dcc lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 10d53dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53dd3 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d53dd9 push edx */
  push32((uint32_t)(EDX));
  /* 10d53dda call 0x10d57890 */
  push32(0x10d53ddfu); f_10d57890();
  /* 10d53ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53de2 push eax */
  push32((uint32_t)(EAX));
  /* 10d53de3 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 10d53de9 push eax */
  push32((uint32_t)(EAX));
  /* 10d53dea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53ded mov edx, dword ptr [ecx*4 + 0x10d7ea44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea44)));
  /* 10d53df4 push edx */
  push32((uint32_t)(EDX));
  /* 10d53df5 call dword ptr [0x10d832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f8))), 0x10d53dfbu);
L_10d53dfb:;
  /* 10d53dfb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53dfe mov ecx, dword ptr [eax*4 + 0x10d7ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7ea38)));
  /* 10d53e05 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d53e08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d53e0a je 0x10d53e19 */
  if (C.zf) goto L_10d53e19;
  /* 10d53e0c lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 10d53e12 push edx */
  push32((uint32_t)(EDX));
  /* 10d53e13 call dword ptr [0x10d83300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83300))), 0x10d53e19u);
L_10d53e19:;
  /* 10d53e19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53e1c mov ecx, dword ptr [eax*4 + 0x10d7ea38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7ea38)));
  /* 10d53e23 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d53e26 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d53e28 je 0x10d53e98 */
  if (C.zf) goto L_10d53e98;
  /* 10d53e2a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53e2e je 0x10d53e4d */
  if (C.zf) goto L_10d53e4d;
  /* 10d53e30 push 0xa */
  push32((uint32_t)(0xau));
  /* 10d53e32 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 10d53e38 push edx */
  push32((uint32_t)(EDX));
  /* 10d53e39 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d53e3c push eax */
  push32((uint32_t)(EAX));
  /* 10d53e3d call 0x10d575a0 */
  push32(0x10d53e42u); f_10d575a0();
  /* 10d53e42 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53e45 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 10d53e4b jmp 0x10d53e57 */
  goto L_10d53e57;
L_10d53e4d:;
  /* 10d53e4d mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_10d53e57:;
  /* 10d53e57 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 10d53e5d push ecx */
  push32((uint32_t)(ECX));
  /* 10d53e5e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d53e61 push edx */
  push32((uint32_t)(EDX));
  /* 10d53e62 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 10d53e68 push eax */
  push32((uint32_t)(EAX));
  /* 10d53e69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d53e6c push ecx */
  push32((uint32_t)(ECX));
  /* 10d53e6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d53e70 push edx */
  push32((uint32_t)(EDX));
  /* 10d53e71 call 0x10d53eb0 */
  push32(0x10d53e76u); f_10d53eb0();
  /* 10d53e76 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53e79 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 10d53e7f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53e83 jne 0x10d53e90 */
  if (!C.zf) goto L_10d53e90;
  /* 10d53e85 push 0x10d7ea34 */
  push32((uint32_t)(0x10d7ea34u));
  /* 10d53e8a call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d53e90u);
L_10d53e90:;
  /* 10d53e90 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 10d53e96 jmp 0x10d53eab */
  goto L_10d53eab;
L_10d53e98:;
  /* 10d53e98 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53e9c jne 0x10d53ea9 */
  if (!C.zf) goto L_10d53ea9;
  /* 10d53e9e push 0x10d7ea34 */
  push32((uint32_t)(0x10d7ea34u));
  /* 10d53ea3 call dword ptr [0x10d832fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832fc))), 0x10d53ea9u);
L_10d53ea9:;
  /* 10d53ea9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d53eab:;
  /* 10d53eab pop edi */
  EDI = (pop32());
  /* 10d53eac mov esp, ebp */
  ESP = (EBP);
  /* 10d53eae pop ebp */
  EBP = (pop32());
  /* 10d53eaf ret  */
  ESPCHK(0x10d53b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10003eb0 @ 0x10d53eb0 (780 bytes, 197 insns) */
void f_10d53eb0(void) {
  FTRACE(0x10d53eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d53eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d53eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10d53eb3 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 10d53eb8 call 0x10d57c00 */
  push32(0x10d53ebdu); f_10d57c00();
L_10d53ebd:;
  /* 10d53ebd cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53ec1 jne 0x10d53ee8 */
  if (!C.zf) goto L_10d53ee8;
  /* 10d53ec3 push 0x10d7b4d0 */
  push32((uint32_t)(0x10d7b4d0u));
  /* 10d53ec8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d53eca push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 10d53ecf push 0x10d7b4c4 */
  push32((uint32_t)(0x10d7b4c4u));
  /* 10d53ed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d53ed6 call 0x10d53b20 */
  push32(0x10d53edbu); f_10d53b20();
  /* 10d53edb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53ede cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53ee1 jne 0x10d53ee8 */
  if (!C.zf) goto L_10d53ee8;
  /* 10d53ee3 call 0x10d53a10 */
  push32(0x10d53ee8u); f_10d53a10();
L_10d53ee8:;
  /* 10d53ee8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d53eea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53eec jne 0x10d53ebd */
  if (!C.zf) goto L_10d53ebd;
  /* 10d53eee push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d53ef3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 10d53ef9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53efa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d53efc call dword ptr [0x10d83310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83310))), 0x10d53f02u);
  /* 10d53f02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d53f04 jne 0x10d53f1a */
  if (!C.zf) goto L_10d53f1a;
  /* 10d53f06 push 0x10d7b4ac */
  push32((uint32_t)(0x10d7b4acu));
  /* 10d53f0b lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 10d53f11 push edx */
  push32((uint32_t)(EDX));
  /* 10d53f12 call 0x10d57a10 */
  push32(0x10d53f17u); f_10d57a10();
  /* 10d53f17 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53f1a:;
  /* 10d53f1a lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 10d53f20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d53f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d53f26 push ecx */
  push32((uint32_t)(ECX));
  /* 10d53f27 call 0x10d57890 */
  push32(0x10d53f2cu); f_10d57890();
  /* 10d53f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53f2f cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53f32 jbe 0x10d53f5d */
  if ((C.cf||C.zf)) goto L_10d53f5d;
  /* 10d53f34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d53f37 push edx */
  push32((uint32_t)(EDX));
  /* 10d53f38 call 0x10d57890 */
  push32(0x10d53f3du); f_10d57890();
  /* 10d53f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53f40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d53f43 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d53f47 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d53f4a push 3 */
  push32((uint32_t)(0x3u));
  /* 10d53f4c push 0x10d7b4a8 */
  push32((uint32_t)(0x10d7b4a8u));
  /* 10d53f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d53f54 push eax */
  push32((uint32_t)(EAX));
  /* 10d53f55 call 0x10d58280 */
  push32(0x10d53f5au); f_10d58280();
  /* 10d53f5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53f5d:;
  /* 10d53f5d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d53f60 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 10d53f66 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53f6d je 0x10d53fb8 */
  if (C.zf) goto L_10d53fb8;
  /* 10d53f6f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d53f75 push edx */
  push32((uint32_t)(EDX));
  /* 10d53f76 call 0x10d57890 */
  push32(0x10d53f7bu); f_10d57890();
  /* 10d53f7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53f7e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53f81 jbe 0x10d53fb8 */
  if ((C.cf||C.zf)) goto L_10d53fb8;
  /* 10d53f83 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d53f89 push eax */
  push32((uint32_t)(EAX));
  /* 10d53f8a call 0x10d57890 */
  push32(0x10d53f8fu); f_10d57890();
  /* 10d53f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d53f92 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d53f98 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 10d53f9c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 10d53fa2 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d53fa4 push 0x10d7b4a8 */
  push32((uint32_t)(0x10d7b4a8u));
  /* 10d53fa9 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d53faf push eax */
  push32((uint32_t)(EAX));
  /* 10d53fb0 call 0x10d58280 */
  push32(0x10d53fb5u); f_10d58280();
  /* 10d53fb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d53fb8:;
  /* 10d53fb8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d53fbc jne 0x10d53fca */
  if (!C.zf) goto L_10d53fca;
  /* 10d53fbe mov dword ptr [ebp - 0x1114], 0x10d7b434 */
  w32((uint32_t)(EBP + -0x1114), (0x10d7b434u));
  /* 10d53fc8 jmp 0x10d53fd4 */
  goto L_10d53fd4;
L_10d53fca:;
  /* 10d53fca mov dword ptr [ebp - 0x1114], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1114), (0x10d7b1d4u));
L_10d53fd4:;
  /* 10d53fd4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d53fd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d53fda test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d53fdc je 0x10d53fe9 */
  if (C.zf) goto L_10d53fe9;
  /* 10d53fde mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d53fe1 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 10d53fe7 jmp 0x10d53ff3 */
  goto L_10d53ff3;
L_10d53fe9:;
  /* 10d53fe9 mov dword ptr [ebp - 0x1118], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1118), (0x10d7b1d4u));
L_10d53ff3:;
  /* 10d53ff3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d53ff6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d53ff9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d53ffb je 0x10d5400f */
  if (C.zf) goto L_10d5400f;
  /* 10d53ffd cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54001 jne 0x10d5400f */
  if (!C.zf) goto L_10d5400f;
  /* 10d54003 mov dword ptr [ebp - 0x111c], 0x10d7b424 */
  w32((uint32_t)(EBP + -0x111c), (0x10d7b424u));
  /* 10d5400d jmp 0x10d54019 */
  goto L_10d54019;
L_10d5400f:;
  /* 10d5400f mov dword ptr [ebp - 0x111c], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x111c), (0x10d7b1d4u));
L_10d54019:;
  /* 10d54019 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d5401c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5401f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d54021 je 0x10d5402f */
  if (C.zf) goto L_10d5402f;
  /* 10d54023 mov dword ptr [ebp - 0x1120], 0x10d7b420 */
  w32((uint32_t)(EBP + -0x1120), (0x10d7b420u));
  /* 10d5402d jmp 0x10d54039 */
  goto L_10d54039;
L_10d5402f:;
  /* 10d5402f mov dword ptr [ebp - 0x1120], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1120), (0x10d7b1d4u));
L_10d54039:;
  /* 10d54039 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5403d je 0x10d5404a */
  if (C.zf) goto L_10d5404a;
  /* 10d5403f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54042 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 10d54048 jmp 0x10d54054 */
  goto L_10d54054;
L_10d5404a:;
  /* 10d5404a mov dword ptr [ebp - 0x1124], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1124), (0x10d7b1d4u));
L_10d54054:;
  /* 10d54054 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54058 je 0x10d54066 */
  if (C.zf) goto L_10d54066;
  /* 10d5405a mov dword ptr [ebp - 0x1128], 0x10d7b418 */
  w32((uint32_t)(EBP + -0x1128), (0x10d7b418u));
  /* 10d54064 jmp 0x10d54070 */
  goto L_10d54070;
L_10d54066:;
  /* 10d54066 mov dword ptr [ebp - 0x1128], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1128), (0x10d7b1d4u));
L_10d54070:;
  /* 10d54070 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54074 je 0x10d54081 */
  if (C.zf) goto L_10d54081;
  /* 10d54076 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54079 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 10d5407f jmp 0x10d5408b */
  goto L_10d5408b;
L_10d54081:;
  /* 10d54081 mov dword ptr [ebp - 0x112c], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x112c), (0x10d7b1d4u));
L_10d5408b:;
  /* 10d5408b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5408f je 0x10d5409d */
  if (C.zf) goto L_10d5409d;
  /* 10d54091 mov dword ptr [ebp - 0x1130], 0x10d7b410 */
  w32((uint32_t)(EBP + -0x1130), (0x10d7b410u));
  /* 10d5409b jmp 0x10d540a7 */
  goto L_10d540a7;
L_10d5409d:;
  /* 10d5409d mov dword ptr [ebp - 0x1130], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1130), (0x10d7b1d4u));
L_10d540a7:;
  /* 10d540a7 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d540ae je 0x10d540be */
  if (C.zf) goto L_10d540be;
  /* 10d540b0 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 10d540b6 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 10d540bc jmp 0x10d540c8 */
  goto L_10d540c8;
L_10d540be:;
  /* 10d540be mov dword ptr [ebp - 0x1134], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1134), (0x10d7b1d4u));
L_10d540c8:;
  /* 10d540c8 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d540cf je 0x10d540dd */
  if (C.zf) goto L_10d540dd;
  /* 10d540d1 mov dword ptr [ebp - 0x1138], 0x10d7b404 */
  w32((uint32_t)(EBP + -0x1138), (0x10d7b404u));
  /* 10d540db jmp 0x10d540e7 */
  goto L_10d540e7;
L_10d540dd:;
  /* 10d540dd mov dword ptr [ebp - 0x1138], 0x10d7b1d4 */
  w32((uint32_t)(EBP + -0x1138), (0x10d7b1d4u));
L_10d540e7:;
  /* 10d540e7 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 10d540ed push edx */
  push32((uint32_t)(EDX));
  /* 10d540ee mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 10d540f4 push eax */
  push32((uint32_t)(EAX));
  /* 10d540f5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 10d540fb push ecx */
  push32((uint32_t)(ECX));
  /* 10d540fc mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 10d54102 push edx */
  push32((uint32_t)(EDX));
  /* 10d54103 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 10d54109 push eax */
  push32((uint32_t)(EAX));
  /* 10d5410a mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 10d54110 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54111 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 10d54117 push edx */
  push32((uint32_t)(EDX));
  /* 10d54118 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 10d5411e push eax */
  push32((uint32_t)(EAX));
  /* 10d5411f mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 10d54125 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54126 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 10d5412c push edx */
  push32((uint32_t)(EDX));
  /* 10d5412d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54130 push eax */
  push32((uint32_t)(EAX));
  /* 10d54131 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54134 mov edx, dword ptr [ecx*4 + 0x10d7ea50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea50)));
  /* 10d5413b push edx */
  push32((uint32_t)(EDX));
  /* 10d5413c push 0x10d7b3b0 */
  push32((uint32_t)(0x10d7b3b0u));
  /* 10d54141 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d54146 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 10d5414c push eax */
  push32((uint32_t)(EAX));
  /* 10d5414d call 0x10d57910 */
  push32(0x10d54152u); f_10d57910();
  /* 10d54152 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54155 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54157 jge 0x10d5416d */
  if ((C.sf==C.of)) goto L_10d5416d;
  /* 10d54159 push 0x10d7b314 */
  push32((uint32_t)(0x10d7b314u));
  /* 10d5415e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 10d54164 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54165 call 0x10d57a10 */
  push32(0x10d5416au); f_10d57a10();
  /* 10d5416a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5416d:;
  /* 10d5416d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 10d54172 push 0x10d7b38c */
  push32((uint32_t)(0x10d7b38cu));
  /* 10d54177 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 10d5417d push edx */
  push32((uint32_t)(EDX));
  /* 10d5417e call 0x10d581c0 */
  push32(0x10d54183u); f_10d581c0();
  /* 10d54183 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54186 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 10d5418c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54193 jne 0x10d541a6 */
  if (!C.zf) goto L_10d541a6;
  /* 10d54195 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 10d54197 call 0x10d57f00 */
  push32(0x10d5419cu); f_10d57f00();
  /* 10d5419c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5419f push 3 */
  push32((uint32_t)(0x3u));
  /* 10d541a1 call 0x10d54220 */
  push32(0x10d541a6u); f_10d54220();
L_10d541a6:;
  /* 10d541a6 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d541ad jne 0x10d541b6 */
  if (!C.zf) goto L_10d541b6;
  /* 10d541af mov eax, 1 */
  EAX = (0x1u);
  /* 10d541b4 jmp 0x10d541b8 */
  goto L_10d541b8;
L_10d541b6:;
  /* 10d541b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d541b8:;
  /* 10d541b8 mov esp, ebp */
  ESP = (EBP);
  /* 10d541ba pop ebp */
  EBP = (pop32());
  /* 10d541bb ret  */
  ESPCHK(0x10d53eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100041c0 @ 0x10d541c0 (56 bytes, 15 insns) */
void f_10d541c0(void) {
  FTRACE(0x10d541c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d541c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d541c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d541c3 cmp dword ptr [0x10d8203c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8203c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d541ca je 0x10d541d2 */
  if (C.zf) goto L_10d541d2;
  /* 10d541cc call dword ptr [0x10d8203c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8203c))), 0x10d541d2u);
L_10d541d2:;
  /* 10d541d2 push 0x10d7e418 */
  push32((uint32_t)(0x10d7e418u));
  /* 10d541d7 push 0x10d7e208 */
  push32((uint32_t)(0x10d7e208u));
  /* 10d541dc call 0x10d54390 */
  push32(0x10d541e1u); f_10d54390();
  /* 10d541e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d541e4 push 0x10d7e104 */
  push32((uint32_t)(0x10d7e104u));
  /* 10d541e9 push 0x10d7e000 */
  push32((uint32_t)(0x10d7e000u));
  /* 10d541ee call 0x10d54390 */
  push32(0x10d541f3u); f_10d54390();
  /* 10d541f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d541f6 pop ebp */
  EBP = (pop32());
  /* 10d541f7 ret  */
  ESPCHK(0x10d541c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004200 @ 0x10d54200 (21 bytes, 10 insns) */
void f_10d54200(void) {
  FTRACE(0x10d54200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54200 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54201 mov ebp, esp */
  EBP = (ESP);
  /* 10d54203 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54205 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54207 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5420a push eax */
  push32((uint32_t)(EAX));
  /* 10d5420b call 0x10d54280 */
  push32(0x10d54210u); f_10d54280();
  /* 10d54210 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54213 pop ebp */
  EBP = (pop32());
  /* 10d54214 ret  */
  ESPCHK(0x10d54200u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x10d54220 (21 bytes, 10 insns) */
void f_10d54220(void) {
  FTRACE(0x10d54220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54220 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54221 mov ebp, esp */
  EBP = (ESP);
  /* 10d54223 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54225 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54227 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5422a push eax */
  push32((uint32_t)(EAX));
  /* 10d5422b call 0x10d54280 */
  push32(0x10d54230u); f_10d54280();
  /* 10d54230 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54233 pop ebp */
  EBP = (pop32());
  /* 10d54234 ret  */
  ESPCHK(0x10d54220u, _esp0);
  ESP += 4; return;
}

/* FUN_10004240 @ 0x10d54240 (19 bytes, 9 insns) */
void f_10d54240(void) {
  FTRACE(0x10d54240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54240 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54241 mov ebp, esp */
  EBP = (ESP);
  /* 10d54243 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54245 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54247 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54249 call 0x10d54280 */
  push32(0x10d5424eu); f_10d54280();
  /* 10d5424e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54251 pop ebp */
  EBP = (pop32());
  /* 10d54252 ret  */
  ESPCHK(0x10d54240u, _esp0);
  ESP += 4; return;
}

/* FUN_10004260 @ 0x10d54260 (19 bytes, 9 insns) */
void f_10d54260(void) {
  FTRACE(0x10d54260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54260 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54261 mov ebp, esp */
  EBP = (ESP);
  /* 10d54263 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54265 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54267 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54269 call 0x10d54280 */
  push32(0x10d5426eu); f_10d54280();
  /* 10d5426e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54271 pop ebp */
  EBP = (pop32());
  /* 10d54272 ret  */
  ESPCHK(0x10d54260u, _esp0);
  ESP += 4; return;
}

/* FUN_10004280 @ 0x10d54280 (227 bytes, 61 insns) */
void f_10d54280(void) {
  FTRACE(0x10d54280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54280 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54281 mov ebp, esp */
  EBP = (ESP);
  /* 10d54283 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54284 call 0x10d54370 */
  push32(0x10d54289u); f_10d54370();
  /* 10d54289 cmp dword ptr [0x10d80540], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d80540))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54290 jne 0x10d542a3 */
  if (!C.zf) goto L_10d542a3;
  /* 10d54292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54295 push eax */
  push32((uint32_t)(EAX));
  /* 10d54296 call dword ptr [0x10d8331c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8331c))), 0x10d5429cu);
  /* 10d5429c push eax */
  push32((uint32_t)(EAX));
  /* 10d5429d call dword ptr [0x10d83318] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83318))), 0x10d542a3u);
L_10d542a3:;
  /* 10d542a3 mov dword ptr [0x10d8053c], 1 */
  w32((uint32_t)(0x10d8053c), (0x1u));
  /* 10d542ad mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10d542b0 mov byte ptr [0x10d80538], cl */
  w8((uint32_t)(0x10d80538), (CL));
  /* 10d542b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d542ba jne 0x10d54303 */
  if (!C.zf) goto L_10d54303;
  /* 10d542bc cmp dword ptr [0x10d82038], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82038))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d542c3 je 0x10d542f1 */
  if (C.zf) goto L_10d542f1;
  /* 10d542c5 mov edx, dword ptr [0x10d82034] */
  EDX = (r32((uint32_t)(0x10d82034)));
  /* 10d542cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d542ce:;
  /* 10d542ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d542d1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d542d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d542d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d542da cmp ecx, dword ptr [0x10d82038] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d82038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d542e0 jb 0x10d542f1 */
  if (C.cf) goto L_10d542f1;
  /* 10d542e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d542e5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d542e8 je 0x10d542ef */
  if (C.zf) goto L_10d542ef;
  /* 10d542ea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d542ed call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x10d542efu);
L_10d542ef:;
  /* 10d542ef jmp 0x10d542ce */
  goto L_10d542ce;
L_10d542f1:;
  /* 10d542f1 push 0x10d7e724 */
  push32((uint32_t)(0x10d7e724u));
  /* 10d542f6 push 0x10d7e51c */
  push32((uint32_t)(0x10d7e51cu));
  /* 10d542fb call 0x10d54390 */
  push32(0x10d54300u); f_10d54390();
  /* 10d54300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d54303:;
  /* 10d54303 push 0x10d7e92c */
  push32((uint32_t)(0x10d7e92cu));
  /* 10d54308 push 0x10d7e828 */
  push32((uint32_t)(0x10d7e828u));
  /* 10d5430d call 0x10d54390 */
  push32(0x10d54312u); f_10d54390();
  /* 10d54312 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54315 cmp dword ptr [0x10d80544], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80544))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5431c jne 0x10d5433e */
  if (!C.zf) goto L_10d5433e;
  /* 10d5431e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10d54320 call 0x10d55f70 */
  push32(0x10d54325u); f_10d55f70();
  /* 10d54325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54328 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5432b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5432d je 0x10d5433e */
  if (C.zf) goto L_10d5433e;
  /* 10d5432f mov dword ptr [0x10d80544], 1 */
  w32((uint32_t)(0x10d80544), (0x1u));
  /* 10d54339 call 0x10d56880 */
  push32(0x10d5433eu); f_10d56880();
L_10d5433e:;
  /* 10d5433e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54342 je 0x10d5434b */
  if (C.zf) goto L_10d5434b;
  /* 10d54344 call 0x10d54380 */
  push32(0x10d54349u); f_10d54380();
  /* 10d54349 jmp 0x10d5435f */
  goto L_10d5435f;
L_10d5434b:;
  /* 10d5434b mov dword ptr [0x10d80540], 1 */
  w32((uint32_t)(0x10d80540), (0x1u));
  /* 10d54355 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54358 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54359 call dword ptr [0x10d83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83314))), 0x10d5435fu);
L_10d5435f:;
  /* 10d5435f mov esp, ebp */
  ESP = (EBP);
  /* 10d54361 pop ebp */
  EBP = (pop32());
  /* 10d54362 ret  */
  ESPCHK(0x10d54280u, _esp0);
  ESP += 4; return;
}

/* FUN_10004370 @ 0x10d54370 (15 bytes, 7 insns) */
void f_10d54370(void) {
  FTRACE(0x10d54370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54370 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54371 mov ebp, esp */
  EBP = (ESP);
  /* 10d54373 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d54375 call 0x10d58460 */
  push32(0x10d5437au); f_10d58460();
  /* 10d5437a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5437d pop ebp */
  EBP = (pop32());
  /* 10d5437e ret  */
  ESPCHK(0x10d54370u, _esp0);
  ESP += 4; return;
}

/* FUN_10004380 @ 0x10d54380 (15 bytes, 7 insns) */
void f_10d54380(void) {
  FTRACE(0x10d54380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54380 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54381 mov ebp, esp */
  EBP = (ESP);
  /* 10d54383 push 0xd */
  push32((uint32_t)(0xdu));
  /* 10d54385 call 0x10d58500 */
  push32(0x10d5438au); f_10d58500();
  /* 10d5438a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5438d pop ebp */
  EBP = (pop32());
  /* 10d5438e ret  */
  ESPCHK(0x10d54380u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x10d54390 (37 bytes, 16 insns) */
void f_10d54390(void) {
  FTRACE(0x10d54390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54390 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54391 mov ebp, esp */
  EBP = (ESP);
L_10d54393:;
  /* 10d54393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54396 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54399 jae 0x10d543b3 */
  if (!C.cf) goto L_10d543b3;
  /* 10d5439b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5439e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d543a1 je 0x10d543a8 */
  if (C.zf) goto L_10d543a8;
  /* 10d543a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d543a6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x10d543a8u);
L_10d543a8:;
  /* 10d543a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d543ab add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d543ae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d543b1 jmp 0x10d54393 */
  goto L_10d54393;
L_10d543b3:;
  /* 10d543b3 pop ebp */
  EBP = (pop32());
  /* 10d543b4 ret  */
  ESPCHK(0x10d54390u, _esp0);
  ESP += 4; return;
}

/* FUN_100043c0 @ 0x10d543c0 (130 bytes, 42 insns) */
void f_10d543c0(void) {
  FTRACE(0x10d543c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d543c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d543c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d543c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d543c4 call 0x10d58380 */
  push32(0x10d543c9u); f_10d58380();
  /* 10d543c9 call dword ptr [0x10d83328] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83328))), 0x10d543cfu);
  /* 10d543cf mov dword ptr [0x10d7ea5c], eax */
  w32((uint32_t)(0x10d7ea5c), (EAX));
  /* 10d543d4 cmp dword ptr [0x10d7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d543db jne 0x10d543e1 */
  if (!C.zf) goto L_10d543e1;
  /* 10d543dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d543df jmp 0x10d5443e */
  goto L_10d5443e;
L_10d543e1:;
  /* 10d543e1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 10d543e3 push 0x10d7b4e8 */
  push32((uint32_t)(0x10d7b4e8u));
  /* 10d543e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d543ea push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d543ec push 1 */
  push32((uint32_t)(0x1u));
  /* 10d543ee call 0x10d54e70 */
  push32(0x10d543f3u); f_10d54e70();
  /* 10d543f3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d543f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d543f9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d543fd je 0x10d54414 */
  if (C.zf) goto L_10d54414;
  /* 10d543ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54402 push eax */
  push32((uint32_t)(EAX));
  /* 10d54403 mov ecx, dword ptr [0x10d7ea5c] */
  ECX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d54409 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5440a call dword ptr [0x10d83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83324))), 0x10d54410u);
  /* 10d54410 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54412 jne 0x10d54418 */
  if (!C.zf) goto L_10d54418;
L_10d54414:;
  /* 10d54414 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54416 jmp 0x10d5443e */
  goto L_10d5443e;
L_10d54418:;
  /* 10d54418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5441b push edx */
  push32((uint32_t)(EDX));
  /* 10d5441c call 0x10d54480 */
  push32(0x10d54421u); f_10d54480();
  /* 10d54421 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54424 call dword ptr [0x10d83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83320))), 0x10d5442au);
  /* 10d5442a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5442d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d5442f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54432 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d54439 mov eax, 1 */
  EAX = (0x1u);
L_10d5443e:;
  /* 10d5443e mov esp, ebp */
  ESP = (EBP);
  /* 10d54440 pop ebp */
  EBP = (pop32());
  /* 10d54441 ret  */
  ESPCHK(0x10d543c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004450 @ 0x10d54450 (41 bytes, 11 insns) */
void f_10d54450(void) {
  FTRACE(0x10d54450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54450 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54451 mov ebp, esp */
  EBP = (ESP);
  /* 10d54453 call 0x10d583c0 */
  push32(0x10d54458u); f_10d583c0();
  /* 10d54458 cmp dword ptr [0x10d7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5445f je 0x10d54477 */
  if (C.zf) goto L_10d54477;
  /* 10d54461 mov eax, dword ptr [0x10d7ea5c] */
  EAX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d54466 push eax */
  push32((uint32_t)(EAX));
  /* 10d54467 call dword ptr [0x10d8332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8332c))), 0x10d5446du);
  /* 10d5446d mov dword ptr [0x10d7ea5c], 0xffffffff */
  w32((uint32_t)(0x10d7ea5c), (0xffffffffu));
L_10d54477:;
  /* 10d54477 pop ebp */
  EBP = (pop32());
  /* 10d54478 ret  */
  ESPCHK(0x10d54450u, _esp0);
  ESP += 4; return;
}

/* FUN_10004480 @ 0x10d54480 (25 bytes, 8 insns) */
void f_10d54480(void) {
  FTRACE(0x10d54480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54480 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54481 mov ebp, esp */
  EBP = (ESP);
  /* 10d54483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54486 mov dword ptr [eax + 0x50], 0x10d7ec00 */
  w32((uint32_t)(EAX + 0x50), (0x10d7ec00u));
  /* 10d5448d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54490 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 10d54497 pop ebp */
  EBP = (pop32());
  /* 10d54498 ret  */
  ESPCHK(0x10d54480u, _esp0);
  ESP += 4; return;
}

/* FUN_100044a0 @ 0x10d544a0 (152 bytes, 48 insns) */
void f_10d544a0(void) {
  FTRACE(0x10d544a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d544a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d544a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d544a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d544a6 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d544acu);
  /* 10d544ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d544af mov eax, dword ptr [0x10d7ea5c] */
  EAX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d544b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d544b5 call dword ptr [0x10d83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83334))), 0x10d544bbu);
  /* 10d544bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d544be cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d544c2 jne 0x10d54527 */
  if (!C.zf) goto L_10d54527;
  /* 10d544c4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 10d544c9 push 0x10d7b4e8 */
  push32((uint32_t)(0x10d7b4e8u));
  /* 10d544ce push 2 */
  push32((uint32_t)(0x2u));
  /* 10d544d0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 10d544d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d544d4 call 0x10d54e70 */
  push32(0x10d544d9u); f_10d54e70();
  /* 10d544d9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d544dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d544df cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d544e3 je 0x10d5451d */
  if (C.zf) goto L_10d5451d;
  /* 10d544e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d544e8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d544e9 mov edx, dword ptr [0x10d7ea5c] */
  EDX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d544ef push edx */
  push32((uint32_t)(EDX));
  /* 10d544f0 call dword ptr [0x10d83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83324))), 0x10d544f6u);
  /* 10d544f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d544f8 je 0x10d5451d */
  if (C.zf) goto L_10d5451d;
  /* 10d544fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d544fd push eax */
  push32((uint32_t)(EAX));
  /* 10d544fe call 0x10d54480 */
  push32(0x10d54503u); f_10d54480();
  /* 10d54503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54506 call dword ptr [0x10d83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83320))), 0x10d5450cu);
  /* 10d5450c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5450f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d54511 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54514 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 10d5451b jmp 0x10d54527 */
  goto L_10d54527;
L_10d5451d:;
  /* 10d5451d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d5451f call 0x10d539d0 */
  push32(0x10d54524u); f_10d539d0();
  /* 10d54524 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d54527:;
  /* 10d54527 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5452a push eax */
  push32((uint32_t)(EAX));
  /* 10d5452b call dword ptr [0x10d83330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83330))), 0x10d54531u);
  /* 10d54531 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54534 mov esp, ebp */
  ESP = (EBP);
  /* 10d54536 pop ebp */
  EBP = (pop32());
  /* 10d54537 ret  */
  ESPCHK(0x10d544a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004540 @ 0x10d54540 (263 bytes, 86 insns) */
void f_10d54540(void) {
  FTRACE(0x10d54540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54540 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54541 mov ebp, esp */
  EBP = (ESP);
  /* 10d54543 cmp dword ptr [0x10d7ea5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7ea5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5454a je 0x10d54645 */
  if (C.zf) goto L_10d54645;
  /* 10d54550 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54554 jne 0x10d54565 */
  if (!C.zf) goto L_10d54565;
  /* 10d54556 mov eax, dword ptr [0x10d7ea5c] */
  EAX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d5455b push eax */
  push32((uint32_t)(EAX));
  /* 10d5455c call dword ptr [0x10d83334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83334))), 0x10d54562u);
  /* 10d54562 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d54565:;
  /* 10d54565 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54569 je 0x10d54636 */
  if (C.zf) goto L_10d54636;
  /* 10d5456f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54572 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54576 je 0x10d54589 */
  if (C.zf) goto L_10d54589;
  /* 10d54578 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5457a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5457d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10d54580 push eax */
  push32((uint32_t)(EAX));
  /* 10d54581 call 0x10d554f0 */
  push32(0x10d54586u); f_10d554f0();
  /* 10d54586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d54589:;
  /* 10d54589 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5458c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54590 je 0x10d545a3 */
  if (C.zf) goto L_10d545a3;
  /* 10d54592 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54594 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54597 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10d5459a push eax */
  push32((uint32_t)(EAX));
  /* 10d5459b call 0x10d554f0 */
  push32(0x10d545a0u); f_10d554f0();
  /* 10d545a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d545a3:;
  /* 10d545a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545a6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d545aa je 0x10d545bd */
  if (C.zf) goto L_10d545bd;
  /* 10d545ac push 2 */
  push32((uint32_t)(0x2u));
  /* 10d545ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545b1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d545b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d545b5 call 0x10d554f0 */
  push32(0x10d545bau); f_10d554f0();
  /* 10d545ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d545bd:;
  /* 10d545bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545c0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d545c4 je 0x10d545d7 */
  if (C.zf) goto L_10d545d7;
  /* 10d545c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d545c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545cb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 10d545ce push eax */
  push32((uint32_t)(EAX));
  /* 10d545cf call 0x10d554f0 */
  push32(0x10d545d4u); f_10d554f0();
  /* 10d545d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d545d7:;
  /* 10d545d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545da cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d545de je 0x10d545f1 */
  if (C.zf) goto L_10d545f1;
  /* 10d545e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d545e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545e5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 10d545e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d545e9 call 0x10d554f0 */
  push32(0x10d545eeu); f_10d554f0();
  /* 10d545ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d545f1:;
  /* 10d545f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545f4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d545f8 je 0x10d5460b */
  if (C.zf) goto L_10d5460b;
  /* 10d545fa push 2 */
  push32((uint32_t)(0x2u));
  /* 10d545fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d545ff mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 10d54602 push eax */
  push32((uint32_t)(EAX));
  /* 10d54603 call 0x10d554f0 */
  push32(0x10d54608u); f_10d554f0();
  /* 10d54608 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5460b:;
  /* 10d5460b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5460e cmp dword ptr [ecx + 0x50], 0x10d7ec00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x10d7ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54615 je 0x10d54628 */
  if (C.zf) goto L_10d54628;
  /* 10d54617 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5461c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d5461f push eax */
  push32((uint32_t)(EAX));
  /* 10d54620 call 0x10d554f0 */
  push32(0x10d54625u); f_10d554f0();
  /* 10d54625 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d54628:;
  /* 10d54628 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5462a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5462d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5462e call 0x10d554f0 */
  push32(0x10d54633u); f_10d554f0();
  /* 10d54633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d54636:;
  /* 10d54636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54638 mov edx, dword ptr [0x10d7ea5c] */
  EDX = (r32((uint32_t)(0x10d7ea5c)));
  /* 10d5463e push edx */
  push32((uint32_t)(EDX));
  /* 10d5463f call dword ptr [0x10d83324] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83324))), 0x10d54645u);
L_10d54645:;
  /* 10d54645 pop ebp */
  EBP = (pop32());
  /* 10d54646 ret  */
  ESPCHK(0x10d54540u, _esp0);
  ESP += 4; return;
}

/* FUN_10004650 @ 0x10d54650 (11 bytes, 5 insns) */
void f_10d54650(void) {
  FTRACE(0x10d54650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54650 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54651 mov ebp, esp */
  EBP = (ESP);
  /* 10d54653 call dword ptr [0x10d83320] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83320))), 0x10d54659u);
  /* 10d54659 pop ebp */
  EBP = (pop32());
  /* 10d5465a ret  */
  ESPCHK(0x10d54650u, _esp0);
  ESP += 4; return;
}

/* FUN_10004660 @ 0x10d54660 (11 bytes, 5 insns) */
void f_10d54660(void) {
  FTRACE(0x10d54660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54660 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54661 mov ebp, esp */
  EBP = (ESP);
  /* 10d54663 call dword ptr [0x10d83274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83274))), 0x10d54669u);
  /* 10d54669 pop ebp */
  EBP = (pop32());
  /* 10d5466a ret  */
  ESPCHK(0x10d54660u, _esp0);
  ESP += 4; return;
}

/* FUN_10004670 @ 0x10d54670 (804 bytes, 236 insns) */
void f_10d54670(void) {
  FTRACE(0x10d54670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54670 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54671 mov ebp, esp */
  EBP = (ESP);
  /* 10d54673 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d54676 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 10d5467b push 0x10d7b4f4 */
  push32((uint32_t)(0x10d7b4f4u));
  /* 10d54680 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54682 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d54687 call 0x10d54a60 */
  push32(0x10d5468cu); f_10d54a60();
  /* 10d5468c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5468f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d54692 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54696 jne 0x10d546a2 */
  if (!C.zf) goto L_10d546a2;
  /* 10d54698 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 10d5469a call 0x10d539d0 */
  push32(0x10d5469fu); f_10d539d0();
  /* 10d5469f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d546a2:;
  /* 10d546a2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546a5 mov dword ptr [0x10d81ee0], eax */
  w32((uint32_t)(0x10d81ee0), (EAX));
  /* 10d546aa mov dword ptr [0x10d8201c], 0x20 */
  w32((uint32_t)(0x10d8201c), (0x20u));
  /* 10d546b4 jmp 0x10d546bf */
  goto L_10d546bf;
L_10d546b6:;
  /* 10d546b6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546b9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d546bc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_10d546bf:;
  /* 10d546bf mov edx, dword ptr [0x10d81ee0] */
  EDX = (r32((uint32_t)(0x10d81ee0)));
  /* 10d546c5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d546cb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d546ce jae 0x10d546f3 */
  if (!C.cf) goto L_10d546f3;
  /* 10d546d0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546d3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d546d7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546da mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d546e0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546e3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d546e7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d546ea mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d546f1 jmp 0x10d546b6 */
  goto L_10d546b6;
L_10d546f3:;
  /* 10d546f3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d546f6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d546f7 call dword ptr [0x10d83348] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83348))), 0x10d546fdu);
  /* 10d546fd mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 10d54700 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d54706 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d54708 je 0x10d54895 */
  if (C.zf) goto L_10d54895;
  /* 10d5470e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54712 je 0x10d54895 */
  if (C.zf) goto L_10d54895;
  /* 10d54718 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5471b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d5471d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 10d54720 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d54723 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54726 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d54729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5472c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5472f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 10d54732 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54739 jge 0x10d54743 */
  if ((C.sf==C.of)) goto L_10d54743;
  /* 10d5473b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 10d5473e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 10d54741 jmp 0x10d5474a */
  goto L_10d5474a;
L_10d54743:;
  /* 10d54743 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_10d5474a:;
  /* 10d5474a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 10d5474d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d54750 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 10d54757 jmp 0x10d54762 */
  goto L_10d54762;
L_10d54759:;
  /* 10d54759 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d5475c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5475f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_10d54762:;
  /* 10d54762 mov ecx, dword ptr [0x10d8201c] */
  ECX = (r32((uint32_t)(0x10d8201c)));
  /* 10d54768 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5476b jge 0x10d54802 */
  if ((C.sf==C.of)) goto L_10d54802;
  /* 10d54771 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10d54776 push 0x10d7b4f4 */
  push32((uint32_t)(0x10d7b4f4u));
  /* 10d5477b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5477d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 10d54782 call 0x10d54a60 */
  push32(0x10d54787u); f_10d54a60();
  /* 10d54787 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5478a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 10d5478d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54791 jne 0x10d5479e */
  if (!C.zf) goto L_10d5479e;
  /* 10d54793 mov edx, dword ptr [0x10d8201c] */
  EDX = (r32((uint32_t)(0x10d8201c)));
  /* 10d54799 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 10d5479c jmp 0x10d54802 */
  goto L_10d54802;
L_10d5479e:;
  /* 10d5479e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d547a1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547a4 mov dword ptr [eax*4 + 0x10d81ee0], ecx */
  w32((uint32_t)(EAX*4 + 0x10d81ee0), (ECX));
  /* 10d547ab mov edx, dword ptr [0x10d8201c] */
  EDX = (r32((uint32_t)(0x10d8201c)));
  /* 10d547b1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d547b4 mov dword ptr [0x10d8201c], edx */
  w32((uint32_t)(0x10d8201c), (EDX));
  /* 10d547ba jmp 0x10d547c5 */
  goto L_10d547c5;
L_10d547bc:;
  /* 10d547bc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547bf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d547c2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_10d547c5:;
  /* 10d547c5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 10d547c8 mov edx, dword ptr [ecx*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d81ee0)));
  /* 10d547cf add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d547d5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d547d8 jae 0x10d547fd */
  if (!C.cf) goto L_10d547fd;
  /* 10d547da mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547dd mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d547e1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547e4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 10d547ea mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547ed mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 10d547f1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d547f4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d547fb jmp 0x10d547bc */
  goto L_10d547bc;
L_10d547fd:;
  /* 10d547fd jmp 0x10d54759 */
  goto L_10d54759;
L_10d54802:;
  /* 10d54802 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d54809 jmp 0x10d54826 */
  goto L_10d54826;
L_10d5480b:;
  /* 10d5480b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d5480e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54811 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 10d54814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54817 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5481a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5481d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d54820 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54823 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_10d54826:;
  /* 10d54826 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d54829 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5482c jge 0x10d54895 */
  if ((C.sf==C.of)) goto L_10d54895;
  /* 10d5482e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d54831 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54834 je 0x10d54890 */
  if (C.zf) goto L_10d54890;
  /* 10d54836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54839 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d5483c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10d5483f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d54841 je 0x10d54890 */
  if (C.zf) goto L_10d54890;
  /* 10d54843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54846 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d54849 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5484c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5484e jne 0x10d54860 */
  if (!C.zf) goto L_10d54860;
  /* 10d54850 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d54853 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d54855 push edx */
  push32((uint32_t)(EDX));
  /* 10d54856 call dword ptr [0x10d83344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83344))), 0x10d5485cu);
  /* 10d5485c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5485e je 0x10d54890 */
  if (C.zf) goto L_10d54890;
L_10d54860:;
  /* 10d54860 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d54863 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 10d54866 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d54869 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5486c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5486f mov edx, dword ptr [eax*4 + 0x10d81ee0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d54876 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54878 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d5487b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5487e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 10d54881 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d54883 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d54885 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d54888 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5488b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5488d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_10d54890:;
  /* 10d54890 jmp 0x10d5480b */
  goto L_10d5480b;
L_10d54895:;
  /* 10d54895 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 10d5489c jmp 0x10d548a7 */
  goto L_10d548a7;
L_10d5489e:;
  /* 10d5489e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d548a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d548a4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_10d548a7:;
  /* 10d548a7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d548ab jge 0x10d54984 */
  if ((C.sf==C.of)) goto L_10d54984;
  /* 10d548b1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d548b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d548b7 mov edx, dword ptr [0x10d81ee0] */
  EDX = (r32((uint32_t)(0x10d81ee0)));
  /* 10d548bd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d548bf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 10d548c2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d548c5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d548c8 jne 0x10d54970 */
  if (!C.zf) goto L_10d54970;
  /* 10d548ce mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d548d1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 10d548d5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d548d9 jne 0x10d548e4 */
  if (!C.zf) goto L_10d548e4;
  /* 10d548db mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 10d548e2 jmp 0x10d548f4 */
  goto L_10d548f4;
L_10d548e4:;
  /* 10d548e4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 10d548e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d548ea neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d548ec sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d548ee add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d548f1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_10d548f4:;
  /* 10d548f4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 10d548f7 push eax */
  push32((uint32_t)(EAX));
  /* 10d548f8 call dword ptr [0x10d832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f4))), 0x10d548feu);
  /* 10d548fe mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 10d54901 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54905 je 0x10d5495f */
  if (C.zf) goto L_10d5495f;
  /* 10d54907 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d5490a push ecx */
  push32((uint32_t)(ECX));
  /* 10d5490b call dword ptr [0x10d83344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83344))), 0x10d54911u);
  /* 10d54911 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d54914 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54918 je 0x10d5495f */
  if (C.zf) goto L_10d5495f;
  /* 10d5491a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5491d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d54920 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d54922 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d54925 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5492b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5492e jne 0x10d54940 */
  if (!C.zf) goto L_10d54940;
  /* 10d54930 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d54933 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 10d54936 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 10d54938 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5493b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 10d5493e jmp 0x10d5495d */
  goto L_10d5495d;
L_10d54940:;
  /* 10d54940 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 10d54943 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d54949 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5494c jne 0x10d5495d */
  if (!C.zf) goto L_10d5495d;
  /* 10d5494e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d54951 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d54954 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 10d54957 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5495a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d5495d:;
  /* 10d5495d jmp 0x10d5496e */
  goto L_10d5496e;
L_10d5495f:;
  /* 10d5495f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d54962 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d54965 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 10d54968 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5496b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d5496e:;
  /* 10d5496e jmp 0x10d5497f */
  goto L_10d5497f;
L_10d54970:;
  /* 10d54970 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d54973 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10d54976 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 10d54979 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d5497c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_10d5497f:;
  /* 10d5497f jmp 0x10d5489e */
  goto L_10d5489e;
L_10d54984:;
  /* 10d54984 mov eax, dword ptr [0x10d8201c] */
  EAX = (r32((uint32_t)(0x10d8201c)));
  /* 10d54989 push eax */
  push32((uint32_t)(EAX));
  /* 10d5498a call dword ptr [0x10d83278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83278))), 0x10d54990u);
  /* 10d54990 mov esp, ebp */
  ESP = (EBP);
  /* 10d54992 pop ebp */
  EBP = (pop32());
  /* 10d54993 ret  */
  ESPCHK(0x10d54670u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x10d549a0 (155 bytes, 45 insns) */
void f_10d549a0(void) {
  FTRACE(0x10d549a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d549a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d549a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d549a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d549a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d549ad jmp 0x10d549b8 */
  goto L_10d549b8;
L_10d549af:;
  /* 10d549af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d549b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d549b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d549b8:;
  /* 10d549b8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d549bc jge 0x10d54a37 */
  if ((C.sf==C.of)) goto L_10d54a37;
  /* 10d549be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d549c1 cmp dword ptr [ecx*4 + 0x10d81ee0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d81ee0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d549c9 je 0x10d54a32 */
  if (C.zf) goto L_10d54a32;
  /* 10d549cb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d549ce mov eax, dword ptr [edx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d549d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d549d8 jmp 0x10d549e3 */
  goto L_10d549e3;
L_10d549da:;
  /* 10d549da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d549dd add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d549e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d549e3:;
  /* 10d549e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d549e6 mov eax, dword ptr [edx*4 + 0x10d81ee0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d81ee0)));
  /* 10d549ed add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d549f2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d549f5 jae 0x10d54a0f */
  if (!C.cf) goto L_10d54a0f;
  /* 10d549f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d549fa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d549fe je 0x10d54a0d */
  if (C.zf) goto L_10d54a0d;
  /* 10d54a00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54a03 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54a06 push edx */
  push32((uint32_t)(EDX));
  /* 10d54a07 call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d54a0du);
L_10d54a0d:;
  /* 10d54a0d jmp 0x10d549da */
  goto L_10d549da;
L_10d54a0f:;
  /* 10d54a0f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54a11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54a14 mov ecx, dword ptr [eax*4 + 0x10d81ee0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d81ee0)));
  /* 10d54a1b push ecx */
  push32((uint32_t)(ECX));
  /* 10d54a1c call 0x10d554f0 */
  push32(0x10d54a21u); f_10d554f0();
  /* 10d54a21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54a24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54a27 mov dword ptr [edx*4 + 0x10d81ee0], 0 */
  w32((uint32_t)(EDX*4 + 0x10d81ee0), (0x0u));
L_10d54a32:;
  /* 10d54a32 jmp 0x10d549af */
  goto L_10d549af;
L_10d54a37:;
  /* 10d54a37 mov esp, ebp */
  ESP = (EBP);
  /* 10d54a39 pop ebp */
  EBP = (pop32());
  /* 10d54a3a ret  */
  ESPCHK(0x10d549a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a40 @ 0x10d54a40 (29 bytes, 13 insns) */
void f_10d54a40(void) {
  FTRACE(0x10d54a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54a41 mov ebp, esp */
  EBP = (ESP);
  /* 10d54a43 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54a45 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54a47 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54a49 mov eax, dword ptr [0x10d806e8] */
  EAX = (r32((uint32_t)(0x10d806e8)));
  /* 10d54a4e push eax */
  push32((uint32_t)(EAX));
  /* 10d54a4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54a52 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54a53 call 0x10d54ab0 */
  push32(0x10d54a58u); f_10d54ab0();
  /* 10d54a58 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54a5b pop ebp */
  EBP = (pop32());
  /* 10d54a5c ret  */
  ESPCHK(0x10d54a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a60 @ 0x10d54a60 (35 bytes, 16 insns) */
void f_10d54a60(void) {
  FTRACE(0x10d54a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54a60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54a61 mov ebp, esp */
  EBP = (ESP);
  /* 10d54a63 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54a66 push eax */
  push32((uint32_t)(EAX));
  /* 10d54a67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54a6a push ecx */
  push32((uint32_t)(ECX));
  /* 10d54a6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54a6e push edx */
  push32((uint32_t)(EDX));
  /* 10d54a6f mov eax, dword ptr [0x10d806e8] */
  EAX = (r32((uint32_t)(0x10d806e8)));
  /* 10d54a74 push eax */
  push32((uint32_t)(EAX));
  /* 10d54a75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54a78 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54a79 call 0x10d54ab0 */
  push32(0x10d54a7eu); f_10d54ab0();
  /* 10d54a7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54a81 pop ebp */
  EBP = (pop32());
  /* 10d54a82 ret  */
  ESPCHK(0x10d54a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10004a90 @ 0x10d54a90 (27 bytes, 13 insns) */
void f_10d54a90(void) {
  FTRACE(0x10d54a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54a91 mov ebp, esp */
  EBP = (ESP);
  /* 10d54a93 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54a95 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54a97 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54a99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54a9c push eax */
  push32((uint32_t)(EAX));
  /* 10d54a9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54aa0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54aa1 call 0x10d54ab0 */
  push32(0x10d54aa6u); f_10d54ab0();
  /* 10d54aa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54aa9 pop ebp */
  EBP = (pop32());
  /* 10d54aaa ret  */
  ESPCHK(0x10d54a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ab0 @ 0x10d54ab0 (94 bytes, 38 insns) */
void f_10d54ab0(void) {
  FTRACE(0x10d54ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10d54ab3 push ecx */
  push32((uint32_t)(ECX));
L_10d54ab4:;
  /* 10d54ab4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d54ab6 call 0x10d58460 */
  push32(0x10d54abbu); f_10d58460();
  /* 10d54abb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54abe mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d54ac1 push eax */
  push32((uint32_t)(EAX));
  /* 10d54ac2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54ac5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54ac6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54ac9 push edx */
  push32((uint32_t)(EDX));
  /* 10d54aca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54acd push eax */
  push32((uint32_t)(EAX));
  /* 10d54ace call 0x10d54b30 */
  push32(0x10d54ad3u); f_10d54b30();
  /* 10d54ad3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ad6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d54ad9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d54adb call 0x10d58500 */
  push32(0x10d54ae0u); f_10d58500();
  /* 10d54ae0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ae3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54ae7 jne 0x10d54aef */
  if (!C.zf) goto L_10d54aef;
  /* 10d54ae9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54aed jne 0x10d54af4 */
  if (!C.zf) goto L_10d54af4;
L_10d54aef:;
  /* 10d54aef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54af2 jmp 0x10d54b0a */
  goto L_10d54b0a;
L_10d54af4:;
  /* 10d54af4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54af7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54af8 call 0x10d587a0 */
  push32(0x10d54afdu); f_10d587a0();
  /* 10d54afd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54b00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54b02 jne 0x10d54b08 */
  if (!C.zf) goto L_10d54b08;
  /* 10d54b04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54b06 jmp 0x10d54b0a */
  goto L_10d54b0a;
L_10d54b08:;
  /* 10d54b08 jmp 0x10d54ab4 */
  goto L_10d54ab4;
L_10d54b0a:;
  /* 10d54b0a mov esp, ebp */
  ESP = (EBP);
  /* 10d54b0c pop ebp */
  EBP = (pop32());
  /* 10d54b0d ret  */
  ESPCHK(0x10d54ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b10 @ 0x10d54b10 (23 bytes, 11 insns) */
void f_10d54b10(void) {
  FTRACE(0x10d54b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54b11 mov ebp, esp */
  EBP = (ESP);
  /* 10d54b13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54b19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54b1c push eax */
  push32((uint32_t)(EAX));
  /* 10d54b1d call 0x10d54b30 */
  push32(0x10d54b22u); f_10d54b30();
  /* 10d54b22 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54b25 pop ebp */
  EBP = (pop32());
  /* 10d54b26 ret  */
  ESPCHK(0x10d54b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004b30 @ 0x10d54b30 (787 bytes, 254 insns) */
void f_10d54b30(void) {
  FTRACE(0x10d54b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54b31 mov ebp, esp */
  EBP = (ESP);
  /* 10d54b33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d54b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10d54b37 push esi */
  push32((uint32_t)(ESI));
  /* 10d54b38 push edi */
  push32((uint32_t)(EDI));
  /* 10d54b39 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d54b40 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d54b45 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d54b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54b4a je 0x10d54b7c */
  if (C.zf) goto L_10d54b7c;
L_10d54b4c:;
  /* 10d54b4c call 0x10d55c00 */
  push32(0x10d54b51u); f_10d55c00();
  /* 10d54b51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54b53 jne 0x10d54b76 */
  if (!C.zf) goto L_10d54b76;
  /* 10d54b55 push 0x10d7b5e8 */
  push32((uint32_t)(0x10d7b5e8u));
  /* 10d54b5a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54b5c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 10d54b61 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d54b66 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54b68 call 0x10d53b20 */
  push32(0x10d54b6du); f_10d53b20();
  /* 10d54b6d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54b70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54b73 jne 0x10d54b76 */
  if (!C.zf) goto L_10d54b76;
  /* 10d54b75 int3  */
  x86_unimpl("int3 @ 0x10d54b75");
L_10d54b76:;
  /* 10d54b76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d54b78 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d54b7a jne 0x10d54b4c */
  if (!C.zf) goto L_10d54b4c;
L_10d54b7c:;
  /* 10d54b7c mov edx, dword ptr [0x10d7ea88] */
  EDX = (r32((uint32_t)(0x10d7ea88)));
  /* 10d54b82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d54b85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54b88 cmp eax, dword ptr [0x10d7ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54b8e jne 0x10d54b91 */
  if (!C.zf) goto L_10d54b91;
  /* 10d54b90 int3  */
  x86_unimpl("int3 @ 0x10d54b90");
L_10d54b91:;
  /* 10d54b91 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54b94 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54b95 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54b98 push edx */
  push32((uint32_t)(EDX));
  /* 10d54b99 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54b9c push eax */
  push32((uint32_t)(EAX));
  /* 10d54b9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54ba0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54ba1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54ba4 push edx */
  push32((uint32_t)(EDX));
  /* 10d54ba5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54ba7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54ba9 call dword ptr [0x10d7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7ec90))), 0x10d54bafu);
  /* 10d54baf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54bb4 jne 0x10d54c14 */
  if (!C.zf) goto L_10d54c14;
  /* 10d54bb6 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54bba je 0x10d54be7 */
  if (C.zf) goto L_10d54be7;
L_10d54bbc:;
  /* 10d54bbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54bbf push eax */
  push32((uint32_t)(EAX));
  /* 10d54bc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54bc3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54bc4 push 0x10d7b5a4 */
  push32((uint32_t)(0x10d7b5a4u));
  /* 10d54bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bd1 call 0x10d53b20 */
  push32(0x10d54bd6u); f_10d53b20();
  /* 10d54bd6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54bd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54bdc jne 0x10d54bdf */
  if (!C.zf) goto L_10d54bdf;
  /* 10d54bde int3  */
  x86_unimpl("int3 @ 0x10d54bde");
L_10d54bdf:;
  /* 10d54bdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d54be1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d54be3 jne 0x10d54bbc */
  if (!C.zf) goto L_10d54bbc;
  /* 10d54be5 jmp 0x10d54c0d */
  goto L_10d54c0d;
L_10d54be7:;
  /* 10d54be7 push 0x10d7b580 */
  push32((uint32_t)(0x10d7b580u));
  /* 10d54bec push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d54bf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54bf9 call 0x10d53b20 */
  push32(0x10d54bfeu); f_10d53b20();
  /* 10d54bfe add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54c01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c04 jne 0x10d54c07 */
  if (!C.zf) goto L_10d54c07;
  /* 10d54c06 int3  */
  x86_unimpl("int3 @ 0x10d54c06");
L_10d54c07:;
  /* 10d54c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54c09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54c0b jne 0x10d54be7 */
  if (!C.zf) goto L_10d54be7;
L_10d54c0d:;
  /* 10d54c0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54c0f jmp 0x10d54e3c */
  goto L_10d54e3c;
L_10d54c14:;
  /* 10d54c14 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54c17 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d54c1d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c20 je 0x10d54c36 */
  if (C.zf) goto L_10d54c36;
  /* 10d54c22 mov edx, dword ptr [0x10d7ea84] */
  EDX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d54c28 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10d54c2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d54c2d jne 0x10d54c36 */
  if (!C.zf) goto L_10d54c36;
  /* 10d54c2f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_10d54c36:;
  /* 10d54c36 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c3a ja 0x10d54c47 */
  if ((!C.cf&&!C.zf)) goto L_10d54c47;
  /* 10d54c3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54c3f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54c42 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c45 jbe 0x10d54c73 */
  if ((C.cf||C.zf)) goto L_10d54c73;
L_10d54c47:;
  /* 10d54c47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54c4a push ecx */
  push32((uint32_t)(ECX));
  /* 10d54c4b push 0x10d7b558 */
  push32((uint32_t)(0x10d7b558u));
  /* 10d54c50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54c52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54c54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54c56 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54c58 call 0x10d53b20 */
  push32(0x10d54c5du); f_10d53b20();
  /* 10d54c5d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54c60 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c63 jne 0x10d54c66 */
  if (!C.zf) goto L_10d54c66;
  /* 10d54c65 int3  */
  x86_unimpl("int3 @ 0x10d54c65");
L_10d54c66:;
  /* 10d54c66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d54c68 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d54c6a jne 0x10d54c47 */
  if (!C.zf) goto L_10d54c47;
  /* 10d54c6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54c6e jmp 0x10d54e3c */
  goto L_10d54e3c;
L_10d54c73:;
  /* 10d54c73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54c76 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d54c7b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c7e je 0x10d54cc0 */
  if (C.zf) goto L_10d54cc0;
  /* 10d54c80 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c84 je 0x10d54cc0 */
  if (C.zf) goto L_10d54cc0;
  /* 10d54c86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54c89 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d54c8f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c92 je 0x10d54cc0 */
  if (C.zf) goto L_10d54cc0;
  /* 10d54c94 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54c98 je 0x10d54cc0 */
  if (C.zf) goto L_10d54cc0;
L_10d54c9a:;
  /* 10d54c9a push 0x10d7b524 */
  push32((uint32_t)(0x10d7b524u));
  /* 10d54c9f push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d54ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54caa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54cac call 0x10d53b20 */
  push32(0x10d54cb1u); f_10d53b20();
  /* 10d54cb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54cb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54cb7 jne 0x10d54cba */
  if (!C.zf) goto L_10d54cba;
  /* 10d54cb9 int3  */
  x86_unimpl("int3 @ 0x10d54cb9");
L_10d54cba:;
  /* 10d54cba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d54cbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d54cbe jne 0x10d54c9a */
  if (!C.zf) goto L_10d54c9a;
L_10d54cc0:;
  /* 10d54cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54cc3 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54cc6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d54cc9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d54ccc push ecx */
  push32((uint32_t)(ECX));
  /* 10d54ccd call 0x10d588b0 */
  push32(0x10d54cd2u); f_10d588b0();
  /* 10d54cd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54cd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d54cd8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54cdc jne 0x10d54ce5 */
  if (!C.zf) goto L_10d54ce5;
  /* 10d54cde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54ce0 jmp 0x10d54e3c */
  goto L_10d54e3c;
L_10d54ce5:;
  /* 10d54ce5 mov edx, dword ptr [0x10d7ea88] */
  EDX = (r32((uint32_t)(0x10d7ea88)));
  /* 10d54ceb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54cee mov dword ptr [0x10d7ea88], edx */
  w32((uint32_t)(0x10d7ea88), (EDX));
  /* 10d54cf4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54cf8 je 0x10d54d43 */
  if (C.zf) goto L_10d54d43;
  /* 10d54cfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54cfd mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d54d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d06 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 10d54d0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d10 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d54d17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d1a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 10d54d21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54d27 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d54d2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d2d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 10d54d34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d37 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 10d54d3e jmp 0x10d54de3 */
  goto L_10d54de3;
L_10d54d43:;
  /* 10d54d43 mov edx, dword ptr [0x10d8054c] */
  EDX = (r32((uint32_t)(0x10d8054c)));
  /* 10d54d49 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54d4c mov dword ptr [0x10d8054c], edx */
  w32((uint32_t)(0x10d8054c), (EDX));
  /* 10d54d52 mov eax, dword ptr [0x10d80554] */
  EAX = (r32((uint32_t)(0x10d80554)));
  /* 10d54d57 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54d5a mov dword ptr [0x10d80554], eax */
  w32((uint32_t)(0x10d80554), (EAX));
  /* 10d54d5f mov ecx, dword ptr [0x10d80554] */
  ECX = (r32((uint32_t)(0x10d80554)));
  /* 10d54d65 cmp ecx, dword ptr [0x10d80558] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d80558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54d6b jbe 0x10d54d79 */
  if ((C.cf||C.zf)) goto L_10d54d79;
  /* 10d54d6d mov edx, dword ptr [0x10d80554] */
  EDX = (r32((uint32_t)(0x10d80554)));
  /* 10d54d73 mov dword ptr [0x10d80558], edx */
  w32((uint32_t)(0x10d80558), (EDX));
L_10d54d79:;
  /* 10d54d79 cmp dword ptr [0x10d80550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54d80 je 0x10d54d8f */
  if (C.zf) goto L_10d54d8f;
  /* 10d54d82 mov eax, dword ptr [0x10d80550] */
  EAX = (r32((uint32_t)(0x10d80550)));
  /* 10d54d87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d8a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d54d8d jmp 0x10d54d98 */
  goto L_10d54d98;
L_10d54d8f:;
  /* 10d54d8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d92 mov dword ptr [0x10d80548], edx */
  w32((uint32_t)(0x10d80548), (EDX));
L_10d54d98:;
  /* 10d54d98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54d9b mov ecx, dword ptr [0x10d80550] */
  ECX = (r32((uint32_t)(0x10d80550)));
  /* 10d54da1 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d54da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54da6 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 10d54dad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54db0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54db3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10d54db6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54db9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54dbc mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 10d54dbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54dc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54dc5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10d54dc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54dcb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54dce mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10d54dd1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54dd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54dd7 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 10d54dda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54ddd mov dword ptr [0x10d80550], ecx */
  w32((uint32_t)(0x10d80550), (ECX));
L_10d54de3:;
  /* 10d54de3 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d54de5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d54de7 mov dl, byte ptr [0x10d7ea90] */
  DL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d54ded push edx */
  push32((uint32_t)(EDX));
  /* 10d54dee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54df1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54df4 push eax */
  push32((uint32_t)(EAX));
  /* 10d54df5 call 0x10d587d0 */
  push32(0x10d54dfau); f_10d587d0();
  /* 10d54dfa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54dfd push 4 */
  push32((uint32_t)(0x4u));
  /* 10d54dff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d54e01 mov cl, byte ptr [0x10d7ea90] */
  CL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d54e07 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54e0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54e0e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 10d54e12 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e13 call 0x10d587d0 */
  push32(0x10d54e18u); f_10d587d0();
  /* 10d54e18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54e1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54e1e push edx */
  push32((uint32_t)(EDX));
  /* 10d54e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54e21 mov al, byte ptr [0x10d7ea92] */
  AL = (r8((uint32_t)(0x10d7ea92)));
  /* 10d54e26 push eax */
  push32((uint32_t)(EAX));
  /* 10d54e27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54e2a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54e2d push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e2e call 0x10d587d0 */
  push32(0x10d54e33u); f_10d587d0();
  /* 10d54e33 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54e36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54e39 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d54e3c:;
  /* 10d54e3c pop edi */
  EDI = (pop32());
  /* 10d54e3d pop esi */
  ESI = (pop32());
  /* 10d54e3e pop ebx */
  EBX = (pop32());
  /* 10d54e3f mov esp, ebp */
  ESP = (EBP);
  /* 10d54e41 pop ebp */
  EBP = (pop32());
  /* 10d54e42 ret  */
  ESPCHK(0x10d54b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e50 @ 0x10d54e50 (27 bytes, 13 insns) */
void f_10d54e50(void) {
  FTRACE(0x10d54e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54e51 mov ebp, esp */
  EBP = (ESP);
  /* 10d54e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54e55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54e57 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54e5c push eax */
  push32((uint32_t)(EAX));
  /* 10d54e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e61 call 0x10d54e70 */
  push32(0x10d54e66u); f_10d54e70();
  /* 10d54e66 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54e69 pop ebp */
  EBP = (pop32());
  /* 10d54e6a ret  */
  ESPCHK(0x10d54e50u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x10d54e70 (96 bytes, 37 insns) */
void f_10d54e70(void) {
  FTRACE(0x10d54e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54e71 mov ebp, esp */
  EBP = (ESP);
  /* 10d54e73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d54e76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54e79 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d54e7d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d54e80 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d54e83 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e84 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54e87 push edx */
  push32((uint32_t)(EDX));
  /* 10d54e88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54e8b push eax */
  push32((uint32_t)(EAX));
  /* 10d54e8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54e8f push ecx */
  push32((uint32_t)(ECX));
  /* 10d54e90 call 0x10d54a60 */
  push32(0x10d54e95u); f_10d54a60();
  /* 10d54e95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54e98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d54e9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54e9f je 0x10d54ec9 */
  if (C.zf) goto L_10d54ec9;
  /* 10d54ea1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54ea4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d54ea7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d54eaa add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ead mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d54eb0:;
  /* 10d54eb0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d54eb3 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54eb6 jae 0x10d54ec9 */
  if (!C.cf) goto L_10d54ec9;
  /* 10d54eb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d54ebb mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d54ebe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d54ec1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ec4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d54ec7 jmp 0x10d54eb0 */
  goto L_10d54eb0;
L_10d54ec9:;
  /* 10d54ec9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d54ecc mov esp, ebp */
  ESP = (EBP);
  /* 10d54ece pop ebp */
  EBP = (pop32());
  /* 10d54ecf ret  */
  ESPCHK(0x10d54e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ed0 @ 0x10d54ed0 (27 bytes, 13 insns) */
void f_10d54ed0(void) {
  FTRACE(0x10d54ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10d54ed3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54ed5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54ed7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54ed9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54edc push eax */
  push32((uint32_t)(EAX));
  /* 10d54edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54ee0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54ee1 call 0x10d54ef0 */
  push32(0x10d54ee6u); f_10d54ef0();
  /* 10d54ee6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ee9 pop ebp */
  EBP = (pop32());
  /* 10d54eea ret  */
  ESPCHK(0x10d54ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ef0 @ 0x10d54ef0 (64 bytes, 27 insns) */
void f_10d54ef0(void) {
  FTRACE(0x10d54ef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54ef0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54ef1 mov ebp, esp */
  EBP = (ESP);
  /* 10d54ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54ef4 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d54ef6 call 0x10d58460 */
  push32(0x10d54efbu); f_10d58460();
  /* 10d54efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54efe push 1 */
  push32((uint32_t)(0x1u));
  /* 10d54f00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d54f03 push eax */
  push32((uint32_t)(EAX));
  /* 10d54f04 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54f07 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54f08 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54f0b push edx */
  push32((uint32_t)(EDX));
  /* 10d54f0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54f0f push eax */
  push32((uint32_t)(EAX));
  /* 10d54f10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54f13 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54f14 call 0x10d54f30 */
  push32(0x10d54f19u); f_10d54f30();
  /* 10d54f19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54f1c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d54f1f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d54f21 call 0x10d58500 */
  push32(0x10d54f26u); f_10d58500();
  /* 10d54f26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d54f2c mov esp, ebp */
  ESP = (EBP);
  /* 10d54f2e pop ebp */
  EBP = (pop32());
  /* 10d54f2f ret  */
  ESPCHK(0x10d54ef0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f30 @ 0x10d54f30 (1297 bytes, 431 insns) */
void f_10d54f30(void) {
  FTRACE(0x10d54f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d54f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d54f31 mov ebp, esp */
  EBP = (ESP);
  /* 10d54f33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d54f36 push ebx */
  push32((uint32_t)(EBX));
  /* 10d54f37 push esi */
  push32((uint32_t)(ESI));
  /* 10d54f38 push edi */
  push32((uint32_t)(EDI));
  /* 10d54f39 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d54f40 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54f44 jne 0x10d54f63 */
  if (!C.zf) goto L_10d54f63;
  /* 10d54f46 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d54f49 push eax */
  push32((uint32_t)(EAX));
  /* 10d54f4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54f4d push ecx */
  push32((uint32_t)(ECX));
  /* 10d54f4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54f51 push edx */
  push32((uint32_t)(EDX));
  /* 10d54f52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54f55 push eax */
  push32((uint32_t)(EAX));
  /* 10d54f56 call 0x10d54a60 */
  push32(0x10d54f5bu); f_10d54a60();
  /* 10d54f5b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54f5e jmp 0x10d5543a */
  goto L_10d5543a;
L_10d54f63:;
  /* 10d54f63 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54f67 je 0x10d54f86 */
  if (C.zf) goto L_10d54f86;
  /* 10d54f69 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54f6d jne 0x10d54f86 */
  if (!C.zf) goto L_10d54f86;
  /* 10d54f6f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54f72 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54f73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54f76 push edx */
  push32((uint32_t)(EDX));
  /* 10d54f77 call 0x10d554f0 */
  push32(0x10d54f7cu); f_10d554f0();
  /* 10d54f7c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54f7f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d54f81 jmp 0x10d5543a */
  goto L_10d5543a;
L_10d54f86:;
  /* 10d54f86 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d54f8b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d54f8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54f90 je 0x10d54fc2 */
  if (C.zf) goto L_10d54fc2;
L_10d54f92:;
  /* 10d54f92 call 0x10d55c00 */
  push32(0x10d54f97u); f_10d55c00();
  /* 10d54f97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54f99 jne 0x10d54fbc */
  if (!C.zf) goto L_10d54fbc;
  /* 10d54f9b push 0x10d7b5e8 */
  push32((uint32_t)(0x10d7b5e8u));
  /* 10d54fa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d54fa2 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 10d54fa7 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d54fac push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54fae call 0x10d53b20 */
  push32(0x10d54fb3u); f_10d53b20();
  /* 10d54fb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54fb6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54fb9 jne 0x10d54fbc */
  if (!C.zf) goto L_10d54fbc;
  /* 10d54fbb int3  */
  x86_unimpl("int3 @ 0x10d54fbb");
L_10d54fbc:;
  /* 10d54fbc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d54fbe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d54fc0 jne 0x10d54f92 */
  if (!C.zf) goto L_10d54f92;
L_10d54fc2:;
  /* 10d54fc2 mov edx, dword ptr [0x10d7ea88] */
  EDX = (r32((uint32_t)(0x10d7ea88)));
  /* 10d54fc8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d54fcb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d54fce cmp eax, dword ptr [0x10d7ea8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7ea8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d54fd4 jne 0x10d54fd7 */
  if (!C.zf) goto L_10d54fd7;
  /* 10d54fd6 int3  */
  x86_unimpl("int3 @ 0x10d54fd6");
L_10d54fd7:;
  /* 10d54fd7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d54fda push ecx */
  push32((uint32_t)(ECX));
  /* 10d54fdb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d54fde push edx */
  push32((uint32_t)(EDX));
  /* 10d54fdf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d54fe2 push eax */
  push32((uint32_t)(EAX));
  /* 10d54fe3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d54fe6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d54fe7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d54fea push edx */
  push32((uint32_t)(EDX));
  /* 10d54feb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d54fee push eax */
  push32((uint32_t)(EAX));
  /* 10d54fef push 2 */
  push32((uint32_t)(0x2u));
  /* 10d54ff1 call dword ptr [0x10d7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7ec90))), 0x10d54ff7u);
  /* 10d54ff7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d54ffa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d54ffc jne 0x10d5505c */
  if (!C.zf) goto L_10d5505c;
  /* 10d54ffe cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55002 je 0x10d5502f */
  if (C.zf) goto L_10d5502f;
L_10d55004:;
  /* 10d55004 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d55007 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55008 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5500b push edx */
  push32((uint32_t)(EDX));
  /* 10d5500c push 0x10d7b764 */
  push32((uint32_t)(0x10d7b764u));
  /* 10d55011 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55013 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55015 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55017 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55019 call 0x10d53b20 */
  push32(0x10d5501eu); f_10d53b20();
  /* 10d5501e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55021 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55024 jne 0x10d55027 */
  if (!C.zf) goto L_10d55027;
  /* 10d55026 int3  */
  x86_unimpl("int3 @ 0x10d55026");
L_10d55027:;
  /* 10d55027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55029 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5502b jne 0x10d55004 */
  if (!C.zf) goto L_10d55004;
  /* 10d5502d jmp 0x10d55055 */
  goto L_10d55055;
L_10d5502f:;
  /* 10d5502f push 0x10d7b740 */
  push32((uint32_t)(0x10d7b740u));
  /* 10d55034 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55039 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5503b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5503d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5503f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55041 call 0x10d53b20 */
  push32(0x10d55046u); f_10d53b20();
  /* 10d55046 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55049 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5504c jne 0x10d5504f */
  if (!C.zf) goto L_10d5504f;
  /* 10d5504e int3  */
  x86_unimpl("int3 @ 0x10d5504e");
L_10d5504f:;
  /* 10d5504f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55051 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55053 jne 0x10d5502f */
  if (!C.zf) goto L_10d5502f;
L_10d55055:;
  /* 10d55055 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55057 jmp 0x10d5543a */
  goto L_10d5543a;
L_10d5505c:;
  /* 10d5505c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55060 jbe 0x10d5508e */
  if ((C.cf||C.zf)) goto L_10d5508e;
L_10d55062:;
  /* 10d55062 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55065 push edx */
  push32((uint32_t)(EDX));
  /* 10d55066 push 0x10d7b710 */
  push32((uint32_t)(0x10d7b710u));
  /* 10d5506b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5506d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5506f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55071 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d55073 call 0x10d53b20 */
  push32(0x10d55078u); f_10d53b20();
  /* 10d55078 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5507b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5507e jne 0x10d55081 */
  if (!C.zf) goto L_10d55081;
  /* 10d55080 int3  */
  x86_unimpl("int3 @ 0x10d55080");
L_10d55081:;
  /* 10d55081 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55083 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55085 jne 0x10d55062 */
  if (!C.zf) goto L_10d55062;
  /* 10d55087 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55089 jmp 0x10d5543a */
  goto L_10d5543a;
L_10d5508e:;
  /* 10d5508e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55092 je 0x10d550d6 */
  if (C.zf) goto L_10d550d6;
  /* 10d55094 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d55097 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d5509d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d550a0 je 0x10d550d6 */
  if (C.zf) goto L_10d550d6;
  /* 10d550a2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d550a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d550ab cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d550ae je 0x10d550d6 */
  if (C.zf) goto L_10d550d6;
L_10d550b0:;
  /* 10d550b0 push 0x10d7b524 */
  push32((uint32_t)(0x10d7b524u));
  /* 10d550b5 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d550ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d550bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d550be push 0 */
  push32((uint32_t)(0x0u));
  /* 10d550c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d550c2 call 0x10d53b20 */
  push32(0x10d550c7u); f_10d53b20();
  /* 10d550c7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d550ca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d550cd jne 0x10d550d0 */
  if (!C.zf) goto L_10d550d0;
  /* 10d550cf int3  */
  x86_unimpl("int3 @ 0x10d550cf");
L_10d550d0:;
  /* 10d550d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d550d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d550d4 jne 0x10d550b0 */
  if (!C.zf) goto L_10d550b0;
L_10d550d6:;
  /* 10d550d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d550d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d550da call 0x10d56060 */
  push32(0x10d550dfu); f_10d56060();
  /* 10d550df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d550e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d550e4 jne 0x10d55107 */
  if (!C.zf) goto L_10d55107;
  /* 10d550e6 push 0x10d7b6ec */
  push32((uint32_t)(0x10d7b6ecu));
  /* 10d550eb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d550ed push 0x261 */
  push32((uint32_t)(0x261u));
  /* 10d550f2 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d550f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d550f9 call 0x10d53b20 */
  push32(0x10d550feu); f_10d53b20();
  /* 10d550fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55101 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55104 jne 0x10d55107 */
  if (!C.zf) goto L_10d55107;
  /* 10d55106 int3  */
  x86_unimpl("int3 @ 0x10d55106");
L_10d55107:;
  /* 10d55107 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55109 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5510b jne 0x10d550d6 */
  if (!C.zf) goto L_10d550d6;
  /* 10d5510d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55110 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55113 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d55116 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55119 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5511d jne 0x10d55126 */
  if (!C.zf) goto L_10d55126;
  /* 10d5511f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_10d55126:;
  /* 10d55126 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5512a je 0x10d5516a */
  if (C.zf) goto L_10d5516a;
L_10d5512c:;
  /* 10d5512c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5512f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55136 jne 0x10d55141 */
  if (!C.zf) goto L_10d55141;
  /* 10d55138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5513b cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5513f je 0x10d55162 */
  if (C.zf) goto L_10d55162;
L_10d55141:;
  /* 10d55141 push 0x10d7b6a4 */
  push32((uint32_t)(0x10d7b6a4u));
  /* 10d55146 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55148 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 10d5514d push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55152 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55154 call 0x10d53b20 */
  push32(0x10d55159u); f_10d53b20();
  /* 10d55159 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5515c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5515f jne 0x10d55162 */
  if (!C.zf) goto L_10d55162;
  /* 10d55161 int3  */
  x86_unimpl("int3 @ 0x10d55161");
L_10d55162:;
  /* 10d55162 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55164 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55166 jne 0x10d5512c */
  if (!C.zf) goto L_10d5512c;
  /* 10d55168 jmp 0x10d551ce */
  goto L_10d551ce;
L_10d5516a:;
  /* 10d5516a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5516d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55170 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d55175 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55178 jne 0x10d5518f */
  if (!C.zf) goto L_10d5518f;
  /* 10d5517a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5517d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55183 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55186 jne 0x10d5518f */
  if (!C.zf) goto L_10d5518f;
  /* 10d55188 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_10d5518f:;
  /* 10d5518f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55192 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55195 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5519a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5519d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d551a3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d551a5 je 0x10d551c8 */
  if (C.zf) goto L_10d551c8;
  /* 10d551a7 push 0x10d7b668 */
  push32((uint32_t)(0x10d7b668u));
  /* 10d551ac push 0 */
  push32((uint32_t)(0x0u));
  /* 10d551ae push 0x272 */
  push32((uint32_t)(0x272u));
  /* 10d551b3 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d551b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d551ba call 0x10d53b20 */
  push32(0x10d551bfu); f_10d53b20();
  /* 10d551bf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d551c2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d551c5 jne 0x10d551c8 */
  if (!C.zf) goto L_10d551c8;
  /* 10d551c7 int3  */
  x86_unimpl("int3 @ 0x10d551c7");
L_10d551c8:;
  /* 10d551c8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d551ca test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d551cc jne 0x10d5518f */
  if (!C.zf) goto L_10d5518f;
L_10d551ce:;
  /* 10d551ce cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d551d2 je 0x10d551f9 */
  if (C.zf) goto L_10d551f9;
  /* 10d551d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d551d7 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d551da push eax */
  push32((uint32_t)(EAX));
  /* 10d551db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d551de push ecx */
  push32((uint32_t)(ECX));
  /* 10d551df call 0x10d589e0 */
  push32(0x10d551e4u); f_10d589e0();
  /* 10d551e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d551e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d551ea cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d551ee jne 0x10d551f7 */
  if (!C.zf) goto L_10d551f7;
  /* 10d551f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d551f2 jmp 0x10d5543a */
  goto L_10d5543a;
L_10d551f7:;
  /* 10d551f7 jmp 0x10d5521c */
  goto L_10d5521c;
L_10d551f9:;
  /* 10d551f9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d551fc add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d551ff push edx */
  push32((uint32_t)(EDX));
  /* 10d55200 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55203 push eax */
  push32((uint32_t)(EAX));
  /* 10d55204 call 0x10d58930 */
  push32(0x10d55209u); f_10d58930();
  /* 10d55209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5520c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5520f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55213 jne 0x10d5521c */
  if (!C.zf) goto L_10d5521c;
  /* 10d55215 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55217 jmp 0x10d5543a */
  goto L_10d5543a;
L_10d5521c:;
  /* 10d5521c mov ecx, dword ptr [0x10d7ea88] */
  ECX = (r32((uint32_t)(0x10d7ea88)));
  /* 10d55222 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55225 mov dword ptr [0x10d7ea88], ecx */
  w32((uint32_t)(0x10d7ea88), (ECX));
  /* 10d5522b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5522f jne 0x10d55287 */
  if (!C.zf) goto L_10d55287;
  /* 10d55231 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55234 mov eax, dword ptr [0x10d8054c] */
  EAX = (r32((uint32_t)(0x10d8054c)));
  /* 10d55239 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5523c mov dword ptr [0x10d8054c], eax */
  w32((uint32_t)(0x10d8054c), (EAX));
  /* 10d55241 mov ecx, dword ptr [0x10d8054c] */
  ECX = (r32((uint32_t)(0x10d8054c)));
  /* 10d55247 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5524a mov dword ptr [0x10d8054c], ecx */
  w32((uint32_t)(0x10d8054c), (ECX));
  /* 10d55250 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55253 mov eax, dword ptr [0x10d80554] */
  EAX = (r32((uint32_t)(0x10d80554)));
  /* 10d55258 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5525b mov dword ptr [0x10d80554], eax */
  w32((uint32_t)(0x10d80554), (EAX));
  /* 10d55260 mov ecx, dword ptr [0x10d80554] */
  ECX = (r32((uint32_t)(0x10d80554)));
  /* 10d55266 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55269 mov dword ptr [0x10d80554], ecx */
  w32((uint32_t)(0x10d80554), (ECX));
  /* 10d5526f mov edx, dword ptr [0x10d80554] */
  EDX = (r32((uint32_t)(0x10d80554)));
  /* 10d55275 cmp edx, dword ptr [0x10d80558] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d80558))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5527b jbe 0x10d55287 */
  if ((C.cf||C.zf)) goto L_10d55287;
  /* 10d5527d mov eax, dword ptr [0x10d80554] */
  EAX = (r32((uint32_t)(0x10d80554)));
  /* 10d55282 mov dword ptr [0x10d80558], eax */
  w32((uint32_t)(0x10d80558), (EAX));
L_10d55287:;
  /* 10d55287 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5528a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5528d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d55290 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55293 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55296 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55299 jbe 0x10d552bf */
  if ((C.cf||C.zf)) goto L_10d552bf;
  /* 10d5529b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5529e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d552a1 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d552a4 push edx */
  push32((uint32_t)(EDX));
  /* 10d552a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d552a7 mov al, byte ptr [0x10d7ea92] */
  AL = (r8((uint32_t)(0x10d7ea92)));
  /* 10d552ac push eax */
  push32((uint32_t)(EAX));
  /* 10d552ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d552b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d552b3 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d552b6 push edx */
  push32((uint32_t)(EDX));
  /* 10d552b7 call 0x10d587d0 */
  push32(0x10d552bcu); f_10d587d0();
  /* 10d552bc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d552bf:;
  /* 10d552bf push 4 */
  push32((uint32_t)(0x4u));
  /* 10d552c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d552c3 mov al, byte ptr [0x10d7ea90] */
  AL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d552c8 push eax */
  push32((uint32_t)(EAX));
  /* 10d552c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d552cc add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d552cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d552d0 call 0x10d587d0 */
  push32(0x10d552d5u); f_10d587d0();
  /* 10d552d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d552d8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d552dc jne 0x10d552f9 */
  if (!C.zf) goto L_10d552f9;
  /* 10d552de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d552e1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d552e4 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d552e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d552ea mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d552ed mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 10d552f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d552f3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d552f6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_10d552f9:;
  /* 10d552f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d552fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d552ff mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_10d55302:;
  /* 10d55302 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55306 jne 0x10d55337 */
  if (!C.zf) goto L_10d55337;
  /* 10d55308 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5530c jne 0x10d55316 */
  if (!C.zf) goto L_10d55316;
  /* 10d5530e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55311 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55314 je 0x10d55337 */
  if (C.zf) goto L_10d55337;
L_10d55316:;
  /* 10d55316 push 0x10d7b634 */
  push32((uint32_t)(0x10d7b634u));
  /* 10d5531b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5531d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 10d55322 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55327 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55329 call 0x10d53b20 */
  push32(0x10d5532eu); f_10d53b20();
  /* 10d5532e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55331 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55334 jne 0x10d55337 */
  if (!C.zf) goto L_10d55337;
  /* 10d55336 int3  */
  x86_unimpl("int3 @ 0x10d55336");
L_10d55337:;
  /* 10d55337 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55339 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5533b jne 0x10d55302 */
  if (!C.zf) goto L_10d55302;
  /* 10d5533d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55340 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55343 je 0x10d5534b */
  if (C.zf) goto L_10d5534b;
  /* 10d55345 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55349 je 0x10d55353 */
  if (C.zf) goto L_10d55353;
L_10d5534b:;
  /* 10d5534b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5534e jmp 0x10d5543a */
  goto L_10d5543a;
L_10d55353:;
  /* 10d55353 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55356 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55359 je 0x10d5536b */
  if (C.zf) goto L_10d5536b;
  /* 10d5535b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5535e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d55360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55363 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d55366 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d55369 jmp 0x10d553a7 */
  goto L_10d553a7;
L_10d5536b:;
  /* 10d5536b mov eax, dword ptr [0x10d80548] */
  EAX = (r32((uint32_t)(0x10d80548)));
  /* 10d55370 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55373 je 0x10d55396 */
  if (C.zf) goto L_10d55396;
  /* 10d55375 push 0x10d7b618 */
  push32((uint32_t)(0x10d7b618u));
  /* 10d5537a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5537c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 10d55381 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55386 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55388 call 0x10d53b20 */
  push32(0x10d5538du); f_10d53b20();
  /* 10d5538d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55390 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55393 jne 0x10d55396 */
  if (!C.zf) goto L_10d55396;
  /* 10d55395 int3  */
  x86_unimpl("int3 @ 0x10d55395");
L_10d55396:;
  /* 10d55396 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55398 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5539a jne 0x10d5536b */
  if (!C.zf) goto L_10d5536b;
  /* 10d5539c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5539f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d553a2 mov dword ptr [0x10d80548], eax */
  w32((uint32_t)(0x10d80548), (EAX));
L_10d553a7:;
  /* 10d553a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d553aa cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d553ae je 0x10d553bf */
  if (C.zf) goto L_10d553bf;
  /* 10d553b0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d553b3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d553b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d553b9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d553bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d553bd jmp 0x10d553fa */
  goto L_10d553fa;
L_10d553bf:;
  /* 10d553bf mov eax, dword ptr [0x10d80550] */
  EAX = (r32((uint32_t)(0x10d80550)));
  /* 10d553c4 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d553c7 je 0x10d553ea */
  if (C.zf) goto L_10d553ea;
  /* 10d553c9 push 0x10d7b5fc */
  push32((uint32_t)(0x10d7b5fcu));
  /* 10d553ce push 0 */
  push32((uint32_t)(0x0u));
  /* 10d553d0 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 10d553d5 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d553da push 2 */
  push32((uint32_t)(0x2u));
  /* 10d553dc call 0x10d53b20 */
  push32(0x10d553e1u); f_10d53b20();
  /* 10d553e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d553e4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d553e7 jne 0x10d553ea */
  if (!C.zf) goto L_10d553ea;
  /* 10d553e9 int3  */
  x86_unimpl("int3 @ 0x10d553e9");
L_10d553ea:;
  /* 10d553ea xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d553ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d553ee jne 0x10d553bf */
  if (!C.zf) goto L_10d553bf;
  /* 10d553f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d553f3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d553f5 mov dword ptr [0x10d80550], eax */
  w32((uint32_t)(0x10d80550), (EAX));
L_10d553fa:;
  /* 10d553fa cmp dword ptr [0x10d80550], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80550))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55401 je 0x10d55411 */
  if (C.zf) goto L_10d55411;
  /* 10d55403 mov ecx, dword ptr [0x10d80550] */
  ECX = (r32((uint32_t)(0x10d80550)));
  /* 10d55409 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5540c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10d5540f jmp 0x10d55419 */
  goto L_10d55419;
L_10d55411:;
  /* 10d55411 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55414 mov dword ptr [0x10d80548], eax */
  w32((uint32_t)(0x10d80548), (EAX));
L_10d55419:;
  /* 10d55419 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5541c mov edx, dword ptr [0x10d80550] */
  EDX = (r32((uint32_t)(0x10d80550)));
  /* 10d55422 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d55424 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55427 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 10d5542e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55431 mov dword ptr [0x10d80550], ecx */
  w32((uint32_t)(0x10d80550), (ECX));
  /* 10d55437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d5543a:;
  /* 10d5543a pop edi */
  EDI = (pop32());
  /* 10d5543b pop esi */
  ESI = (pop32());
  /* 10d5543c pop ebx */
  EBX = (pop32());
  /* 10d5543d mov esp, ebp */
  ESP = (EBP);
  /* 10d5543f pop ebp */
  EBP = (pop32());
  /* 10d55440 ret  */
  ESPCHK(0x10d54f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005450 @ 0x10d55450 (27 bytes, 13 insns) */
void f_10d55450(void) {
  FTRACE(0x10d55450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55450 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55451 mov ebp, esp */
  EBP = (ESP);
  /* 10d55453 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55455 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55457 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d55459 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5545c push eax */
  push32((uint32_t)(EAX));
  /* 10d5545d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55460 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55461 call 0x10d55470 */
  push32(0x10d55466u); f_10d55470();
  /* 10d55466 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55469 pop ebp */
  EBP = (pop32());
  /* 10d5546a ret  */
  ESPCHK(0x10d55450u, _esp0);
  ESP += 4; return;
}

/* FUN_10005470 @ 0x10d55470 (64 bytes, 27 insns) */
void f_10d55470(void) {
  FTRACE(0x10d55470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55470 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55471 mov ebp, esp */
  EBP = (ESP);
  /* 10d55473 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55474 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55476 call 0x10d58460 */
  push32(0x10d5547bu); f_10d58460();
  /* 10d5547b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5547e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55480 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d55483 push eax */
  push32((uint32_t)(EAX));
  /* 10d55484 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d55487 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55488 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5548b push edx */
  push32((uint32_t)(EDX));
  /* 10d5548c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5548f push eax */
  push32((uint32_t)(EAX));
  /* 10d55490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55493 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55494 call 0x10d54f30 */
  push32(0x10d55499u); f_10d54f30();
  /* 10d55499 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5549c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5549f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d554a1 call 0x10d58500 */
  push32(0x10d554a6u); f_10d58500();
  /* 10d554a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d554a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d554ac mov esp, ebp */
  ESP = (EBP);
  /* 10d554ae pop ebp */
  EBP = (pop32());
  /* 10d554af ret  */
  ESPCHK(0x10d55470u, _esp0);
  ESP += 4; return;
}

/* FUN_100054b0 @ 0x10d554b0 (19 bytes, 9 insns) */
void f_10d554b0(void) {
  FTRACE(0x10d554b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d554b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d554b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d554b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d554b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d554b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d554b9 call 0x10d554f0 */
  push32(0x10d554beu); f_10d554f0();
  /* 10d554be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d554c1 pop ebp */
  EBP = (pop32());
  /* 10d554c2 ret  */
  ESPCHK(0x10d554b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054d0 @ 0x10d554d0 (19 bytes, 9 insns) */
void f_10d554d0(void) {
  FTRACE(0x10d554d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d554d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d554d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d554d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d554d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d554d8 push eax */
  push32((uint32_t)(EAX));
  /* 10d554d9 call 0x10d55520 */
  push32(0x10d554deu); f_10d55520();
  /* 10d554de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d554e1 pop ebp */
  EBP = (pop32());
  /* 10d554e2 ret  */
  ESPCHK(0x10d554d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100054f0 @ 0x10d554f0 (41 bytes, 16 insns) */
void f_10d554f0(void) {
  FTRACE(0x10d554f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d554f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d554f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d554f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d554f5 call 0x10d58460 */
  push32(0x10d554fau); f_10d58460();
  /* 10d554fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d554fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55500 push eax */
  push32((uint32_t)(EAX));
  /* 10d55501 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55504 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55505 call 0x10d55520 */
  push32(0x10d5550au); f_10d55520();
  /* 10d5550a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5550d push 9 */
  push32((uint32_t)(0x9u));
  /* 10d5550f call 0x10d58500 */
  push32(0x10d55514u); f_10d58500();
  /* 10d55514 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55517 pop ebp */
  EBP = (pop32());
  /* 10d55518 ret  */
  ESPCHK(0x10d554f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005520 @ 0x10d55520 (1004 bytes, 342 insns) */
void f_10d55520(void) {
  FTRACE(0x10d55520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55521 mov ebp, esp */
  EBP = (ESP);
  /* 10d55523 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55524 push ebx */
  push32((uint32_t)(EBX));
  /* 10d55525 push esi */
  push32((uint32_t)(ESI));
  /* 10d55526 push edi */
  push32((uint32_t)(EDI));
  /* 10d55527 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d5552c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5552f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55531 je 0x10d55563 */
  if (C.zf) goto L_10d55563;
L_10d55533:;
  /* 10d55533 call 0x10d55c00 */
  push32(0x10d55538u); f_10d55c00();
  /* 10d55538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5553a jne 0x10d5555d */
  if (!C.zf) goto L_10d5555d;
  /* 10d5553c push 0x10d7b5e8 */
  push32((uint32_t)(0x10d7b5e8u));
  /* 10d55541 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55543 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 10d55548 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d5554d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5554f call 0x10d53b20 */
  push32(0x10d55554u); f_10d53b20();
  /* 10d55554 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55557 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5555a jne 0x10d5555d */
  if (!C.zf) goto L_10d5555d;
  /* 10d5555c int3  */
  x86_unimpl("int3 @ 0x10d5555c");
L_10d5555d:;
  /* 10d5555d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5555f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55561 jne 0x10d55533 */
  if (!C.zf) goto L_10d55533;
L_10d55563:;
  /* 10d55563 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55567 jne 0x10d5556e */
  if (!C.zf) goto L_10d5556e;
  /* 10d55569 jmp 0x10d55905 */
  goto L_10d55905;
L_10d5556e:;
  /* 10d5556e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55570 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55572 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55574 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55577 push edx */
  push32((uint32_t)(EDX));
  /* 10d55578 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5557a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5557d push eax */
  push32((uint32_t)(EAX));
  /* 10d5557e push 3 */
  push32((uint32_t)(0x3u));
  /* 10d55580 call dword ptr [0x10d7ec90] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d7ec90))), 0x10d55586u);
  /* 10d55586 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55589 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5558b jne 0x10d555b8 */
  if (!C.zf) goto L_10d555b8;
L_10d5558d:;
  /* 10d5558d push 0x10d7b8ac */
  push32((uint32_t)(0x10d7b8acu));
  /* 10d55592 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55597 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55599 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5559b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5559d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5559f call 0x10d53b20 */
  push32(0x10d555a4u); f_10d53b20();
  /* 10d555a4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d555a7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d555aa jne 0x10d555ad */
  if (!C.zf) goto L_10d555ad;
  /* 10d555ac int3  */
  x86_unimpl("int3 @ 0x10d555ac");
L_10d555ad:;
  /* 10d555ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d555af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d555b1 jne 0x10d5558d */
  if (!C.zf) goto L_10d5558d;
  /* 10d555b3 jmp 0x10d55905 */
  goto L_10d55905;
L_10d555b8:;
  /* 10d555b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d555bb push edx */
  push32((uint32_t)(EDX));
  /* 10d555bc call 0x10d56060 */
  push32(0x10d555c1u); f_10d56060();
  /* 10d555c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d555c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d555c6 jne 0x10d555e9 */
  if (!C.zf) goto L_10d555e9;
  /* 10d555c8 push 0x10d7b6ec */
  push32((uint32_t)(0x10d7b6ecu));
  /* 10d555cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d555cf push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 10d555d4 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d555d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d555db call 0x10d53b20 */
  push32(0x10d555e0u); f_10d53b20();
  /* 10d555e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d555e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d555e6 jne 0x10d555e9 */
  if (!C.zf) goto L_10d555e9;
  /* 10d555e8 int3  */
  x86_unimpl("int3 @ 0x10d555e8");
L_10d555e9:;
  /* 10d555e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d555eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d555ed jne 0x10d555b8 */
  if (!C.zf) goto L_10d555b8;
  /* 10d555ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d555f2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d555f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d555f8:;
  /* 10d555f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d555fb mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d555fe and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d55603 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55606 je 0x10d5564b */
  if (C.zf) goto L_10d5564b;
  /* 10d55608 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5560b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5560f je 0x10d5564b */
  if (C.zf) goto L_10d5564b;
  /* 10d55611 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55614 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55617 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5561c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5561f je 0x10d5564b */
  if (C.zf) goto L_10d5564b;
  /* 10d55621 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55624 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55628 je 0x10d5564b */
  if (C.zf) goto L_10d5564b;
  /* 10d5562a push 0x10d7b884 */
  push32((uint32_t)(0x10d7b884u));
  /* 10d5562f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55631 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 10d55636 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d5563b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5563d call 0x10d53b20 */
  push32(0x10d55642u); f_10d53b20();
  /* 10d55642 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55645 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55648 jne 0x10d5564b */
  if (!C.zf) goto L_10d5564b;
  /* 10d5564a int3  */
  x86_unimpl("int3 @ 0x10d5564a");
L_10d5564b:;
  /* 10d5564b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5564d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5564f jne 0x10d555f8 */
  if (!C.zf) goto L_10d555f8;
  /* 10d55651 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d55656 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d55659 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5565b jne 0x10d55726 */
  if (!C.zf) goto L_10d55726;
  /* 10d55661 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d55663 mov cl, byte ptr [0x10d7ea90] */
  CL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d55669 push ecx */
  push32((uint32_t)(ECX));
  /* 10d5566a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5566d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55670 push edx */
  push32((uint32_t)(EDX));
  /* 10d55671 call 0x10d55b70 */
  push32(0x10d55676u); f_10d55b70();
  /* 10d55676 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55679 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5567b jne 0x10d556c0 */
  if (!C.zf) goto L_10d556c0;
L_10d5567d:;
  /* 10d5567d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55680 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55683 push eax */
  push32((uint32_t)(EAX));
  /* 10d55684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55687 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d5568a push edx */
  push32((uint32_t)(EDX));
  /* 10d5568b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5568e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d55691 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55697 mov edx, dword ptr [ecx*4 + 0x10d7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea94)));
  /* 10d5569e push edx */
  push32((uint32_t)(EDX));
  /* 10d5569f push 0x10d7b858 */
  push32((uint32_t)(0x10d7b858u));
  /* 10d556a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d556a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d556a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d556aa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d556ac call 0x10d53b20 */
  push32(0x10d556b1u); f_10d53b20();
  /* 10d556b1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d556b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d556b7 jne 0x10d556ba */
  if (!C.zf) goto L_10d556ba;
  /* 10d556b9 int3  */
  x86_unimpl("int3 @ 0x10d556b9");
L_10d556ba:;
  /* 10d556ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d556bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d556be jne 0x10d5567d */
  if (!C.zf) goto L_10d5567d;
L_10d556c0:;
  /* 10d556c0 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d556c2 mov cl, byte ptr [0x10d7ea90] */
  CL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d556c8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d556c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d556cc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d556cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d556d2 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d556d6 push edx */
  push32((uint32_t)(EDX));
  /* 10d556d7 call 0x10d55b70 */
  push32(0x10d556dcu); f_10d55b70();
  /* 10d556dc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d556df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d556e1 jne 0x10d55726 */
  if (!C.zf) goto L_10d55726;
L_10d556e3:;
  /* 10d556e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d556e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d556e9 push eax */
  push32((uint32_t)(EAX));
  /* 10d556ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d556ed mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d556f0 push edx */
  push32((uint32_t)(EDX));
  /* 10d556f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d556f4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d556f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d556fd mov edx, dword ptr [ecx*4 + 0x10d7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea94)));
  /* 10d55704 push edx */
  push32((uint32_t)(EDX));
  /* 10d55705 push 0x10d7b82c */
  push32((uint32_t)(0x10d7b82cu));
  /* 10d5570a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5570c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5570e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55710 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d55712 call 0x10d53b20 */
  push32(0x10d55717u); f_10d53b20();
  /* 10d55717 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5571a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5571d jne 0x10d55720 */
  if (!C.zf) goto L_10d55720;
  /* 10d5571f int3  */
  x86_unimpl("int3 @ 0x10d5571f");
L_10d55720:;
  /* 10d55720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55724 jne 0x10d556e3 */
  if (!C.zf) goto L_10d556e3;
L_10d55726:;
  /* 10d55726 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55729 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5572d jne 0x10d5579b */
  if (!C.zf) goto L_10d5579b;
L_10d5572f:;
  /* 10d5572f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55732 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55739 jne 0x10d55744 */
  if (!C.zf) goto L_10d55744;
  /* 10d5573b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5573e cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55742 je 0x10d55765 */
  if (C.zf) goto L_10d55765;
L_10d55744:;
  /* 10d55744 push 0x10d7b7ec */
  push32((uint32_t)(0x10d7b7ecu));
  /* 10d55749 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5574b push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 10d55750 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55755 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55757 call 0x10d53b20 */
  push32(0x10d5575cu); f_10d53b20();
  /* 10d5575c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5575f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55762 jne 0x10d55765 */
  if (!C.zf) goto L_10d55765;
  /* 10d55764 int3  */
  x86_unimpl("int3 @ 0x10d55764");
L_10d55765:;
  /* 10d55765 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55767 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55769 jne 0x10d5572f */
  if (!C.zf) goto L_10d5572f;
  /* 10d5576b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5576e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d55771 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55774 push eax */
  push32((uint32_t)(EAX));
  /* 10d55775 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55777 mov cl, byte ptr [0x10d7ea91] */
  CL = (r8((uint32_t)(0x10d7ea91)));
  /* 10d5577d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5577e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55781 push edx */
  push32((uint32_t)(EDX));
  /* 10d55782 call 0x10d587d0 */
  push32(0x10d55787u); f_10d587d0();
  /* 10d55787 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5578a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5578d push eax */
  push32((uint32_t)(EAX));
  /* 10d5578e call 0x10d58bd0 */
  push32(0x10d55793u); f_10d58bd0();
  /* 10d55793 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55796 jmp 0x10d55905 */
  goto L_10d55905;
L_10d5579b:;
  /* 10d5579b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5579e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d557a2 jne 0x10d557b1 */
  if (!C.zf) goto L_10d557b1;
  /* 10d557a4 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d557a8 jne 0x10d557b1 */
  if (!C.zf) goto L_10d557b1;
  /* 10d557aa mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d557b1:;
  /* 10d557b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d557b4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d557b7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d557ba je 0x10d557dd */
  if (C.zf) goto L_10d557dd;
  /* 10d557bc push 0x10d7b7cc */
  push32((uint32_t)(0x10d7b7ccu));
  /* 10d557c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d557c3 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 10d557c8 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d557cd push 2 */
  push32((uint32_t)(0x2u));
  /* 10d557cf call 0x10d53b20 */
  push32(0x10d557d4u); f_10d53b20();
  /* 10d557d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d557d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d557da jne 0x10d557dd */
  if (!C.zf) goto L_10d557dd;
  /* 10d557dc int3  */
  x86_unimpl("int3 @ 0x10d557dc");
L_10d557dd:;
  /* 10d557dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d557df test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d557e1 jne 0x10d557b1 */
  if (!C.zf) goto L_10d557b1;
  /* 10d557e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d557e6 mov eax, dword ptr [0x10d80554] */
  EAX = (r32((uint32_t)(0x10d80554)));
  /* 10d557eb sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d557ee mov dword ptr [0x10d80554], eax */
  w32((uint32_t)(0x10d80554), (EAX));
  /* 10d557f3 mov ecx, dword ptr [0x10d7ea84] */
  ECX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d557f9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 10d557fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d557fe jne 0x10d558dc */
  if (!C.zf) goto L_10d558dc;
  /* 10d55804 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55807 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5580a je 0x10d5581c */
  if (C.zf) goto L_10d5581c;
  /* 10d5580c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5580f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d55811 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55814 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d55817 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d5581a jmp 0x10d5585a */
  goto L_10d5585a;
L_10d5581c:;
  /* 10d5581c mov ecx, dword ptr [0x10d80548] */
  ECX = (r32((uint32_t)(0x10d80548)));
  /* 10d55822 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55825 je 0x10d55848 */
  if (C.zf) goto L_10d55848;
  /* 10d55827 push 0x10d7b7b4 */
  push32((uint32_t)(0x10d7b7b4u));
  /* 10d5582c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5582e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 10d55833 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55838 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5583a call 0x10d53b20 */
  push32(0x10d5583fu); f_10d53b20();
  /* 10d5583f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55842 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55845 jne 0x10d55848 */
  if (!C.zf) goto L_10d55848;
  /* 10d55847 int3  */
  x86_unimpl("int3 @ 0x10d55847");
L_10d55848:;
  /* 10d55848 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5584a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5584c jne 0x10d5581c */
  if (!C.zf) goto L_10d5581c;
  /* 10d5584e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55851 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d55854 mov dword ptr [0x10d80548], ecx */
  w32((uint32_t)(0x10d80548), (ECX));
L_10d5585a:;
  /* 10d5585a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5585d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55861 je 0x10d55872 */
  if (C.zf) goto L_10d55872;
  /* 10d55863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55866 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d55869 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5586c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d5586e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d55870 jmp 0x10d558af */
  goto L_10d558af;
L_10d55872:;
  /* 10d55872 mov ecx, dword ptr [0x10d80550] */
  ECX = (r32((uint32_t)(0x10d80550)));
  /* 10d55878 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5587b je 0x10d5589e */
  if (C.zf) goto L_10d5589e;
  /* 10d5587d push 0x10d7b79c */
  push32((uint32_t)(0x10d7b79cu));
  /* 10d55882 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55884 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 10d55889 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d5588e push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55890 call 0x10d53b20 */
  push32(0x10d55895u); f_10d53b20();
  /* 10d55895 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55898 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5589b jne 0x10d5589e */
  if (!C.zf) goto L_10d5589e;
  /* 10d5589d int3  */
  x86_unimpl("int3 @ 0x10d5589d");
L_10d5589e:;
  /* 10d5589e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d558a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d558a2 jne 0x10d55872 */
  if (!C.zf) goto L_10d55872;
  /* 10d558a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558a7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d558a9 mov dword ptr [0x10d80550], ecx */
  w32((uint32_t)(0x10d80550), (ECX));
L_10d558af:;
  /* 10d558af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d558b5 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d558b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d558b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d558bb mov cl, byte ptr [0x10d7ea91] */
  CL = (r8((uint32_t)(0x10d7ea91)));
  /* 10d558c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d558c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d558c6 call 0x10d587d0 */
  push32(0x10d558cbu); f_10d587d0();
  /* 10d558cb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d558ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558d1 push eax */
  push32((uint32_t)(EAX));
  /* 10d558d2 call 0x10d58bd0 */
  push32(0x10d558d7u); f_10d58bd0();
  /* 10d558d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d558da jmp 0x10d55905 */
  goto L_10d55905;
L_10d558dc:;
  /* 10d558dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558df mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 10d558e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558e9 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d558ec push eax */
  push32((uint32_t)(EAX));
  /* 10d558ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d558ef mov cl, byte ptr [0x10d7ea91] */
  CL = (r8((uint32_t)(0x10d7ea91)));
  /* 10d558f5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d558f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d558f9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d558fc push edx */
  push32((uint32_t)(EDX));
  /* 10d558fd call 0x10d587d0 */
  push32(0x10d55902u); f_10d587d0();
  /* 10d55902 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d55905:;
  /* 10d55905 pop edi */
  EDI = (pop32());
  /* 10d55906 pop esi */
  ESI = (pop32());
  /* 10d55907 pop ebx */
  EBX = (pop32());
  /* 10d55908 mov esp, ebp */
  ESP = (EBP);
  /* 10d5590a pop ebp */
  EBP = (pop32());
  /* 10d5590b ret  */
  ESPCHK(0x10d55520u, _esp0);
  ESP += 4; return;
}

/* FUN_10005910 @ 0x10d55910 (19 bytes, 9 insns) */
void f_10d55910(void) {
  FTRACE(0x10d55910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55911 mov ebp, esp */
  EBP = (ESP);
  /* 10d55913 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d55915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55918 push eax */
  push32((uint32_t)(EAX));
  /* 10d55919 call 0x10d55930 */
  push32(0x10d5591eu); f_10d55930();
  /* 10d5591e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55921 pop ebp */
  EBP = (pop32());
  /* 10d55922 ret  */
  ESPCHK(0x10d55910u, _esp0);
  ESP += 4; return;
}

/* FUN_10005930 @ 0x10d55930 (342 bytes, 119 insns) */
void f_10d55930(void) {
  FTRACE(0x10d55930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55930 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55931 mov ebp, esp */
  EBP = (ESP);
  /* 10d55933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55936 push ebx */
  push32((uint32_t)(EBX));
  /* 10d55937 push esi */
  push32((uint32_t)(ESI));
  /* 10d55938 push edi */
  push32((uint32_t)(EDI));
  /* 10d55939 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d5593e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d55941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55943 je 0x10d55975 */
  if (C.zf) goto L_10d55975;
L_10d55945:;
  /* 10d55945 call 0x10d55c00 */
  push32(0x10d5594au); f_10d55c00();
  /* 10d5594a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5594c jne 0x10d5596f */
  if (!C.zf) goto L_10d5596f;
  /* 10d5594e push 0x10d7b5e8 */
  push32((uint32_t)(0x10d7b5e8u));
  /* 10d55953 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55955 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 10d5595a push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d5595f push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55961 call 0x10d53b20 */
  push32(0x10d55966u); f_10d53b20();
  /* 10d55966 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55969 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5596c jne 0x10d5596f */
  if (!C.zf) goto L_10d5596f;
  /* 10d5596e int3  */
  x86_unimpl("int3 @ 0x10d5596e");
L_10d5596f:;
  /* 10d5596f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55971 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55973 jne 0x10d55945 */
  if (!C.zf) goto L_10d55945;
L_10d55975:;
  /* 10d55975 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55977 call 0x10d58460 */
  push32(0x10d5597cu); f_10d58460();
  /* 10d5597c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5597f:;
  /* 10d5597f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55982 push edx */
  push32((uint32_t)(EDX));
  /* 10d55983 call 0x10d56060 */
  push32(0x10d55988u); f_10d56060();
  /* 10d55988 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5598b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5598d jne 0x10d559b0 */
  if (!C.zf) goto L_10d559b0;
  /* 10d5598f push 0x10d7b6ec */
  push32((uint32_t)(0x10d7b6ecu));
  /* 10d55994 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55996 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 10d5599b push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d559a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d559a2 call 0x10d53b20 */
  push32(0x10d559a7u); f_10d53b20();
  /* 10d559a7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d559aa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d559ad jne 0x10d559b0 */
  if (!C.zf) goto L_10d559b0;
  /* 10d559af int3  */
  x86_unimpl("int3 @ 0x10d559af");
L_10d559b0:;
  /* 10d559b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d559b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d559b4 jne 0x10d5597f */
  if (!C.zf) goto L_10d5597f;
  /* 10d559b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d559b9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d559bc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d559bf:;
  /* 10d559bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d559c2 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d559c5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d559ca cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d559cd je 0x10d55a12 */
  if (C.zf) goto L_10d55a12;
  /* 10d559cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d559d2 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d559d6 je 0x10d55a12 */
  if (C.zf) goto L_10d55a12;
  /* 10d559d8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d559db mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d559de and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d559e3 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d559e6 je 0x10d55a12 */
  if (C.zf) goto L_10d55a12;
  /* 10d559e8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d559eb cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d559ef je 0x10d55a12 */
  if (C.zf) goto L_10d55a12;
  /* 10d559f1 push 0x10d7b884 */
  push32((uint32_t)(0x10d7b884u));
  /* 10d559f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d559f8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 10d559fd push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55a02 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55a04 call 0x10d53b20 */
  push32(0x10d55a09u); f_10d53b20();
  /* 10d55a09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55a0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a0f jne 0x10d55a12 */
  if (!C.zf) goto L_10d55a12;
  /* 10d55a11 int3  */
  x86_unimpl("int3 @ 0x10d55a11");
L_10d55a12:;
  /* 10d55a12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55a14 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55a16 jne 0x10d559bf */
  if (!C.zf) goto L_10d559bf;
  /* 10d55a18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55a1b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a1f jne 0x10d55a2e */
  if (!C.zf) goto L_10d55a2e;
  /* 10d55a21 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a25 jne 0x10d55a2e */
  if (!C.zf) goto L_10d55a2e;
  /* 10d55a27 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_10d55a2e:;
  /* 10d55a2e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55a31 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a35 je 0x10d55a69 */
  if (C.zf) goto L_10d55a69;
L_10d55a37:;
  /* 10d55a37 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55a3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55a3d cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a40 je 0x10d55a63 */
  if (C.zf) goto L_10d55a63;
  /* 10d55a42 push 0x10d7b7cc */
  push32((uint32_t)(0x10d7b7ccu));
  /* 10d55a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55a49 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 10d55a4e push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55a53 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55a55 call 0x10d53b20 */
  push32(0x10d55a5au); f_10d53b20();
  /* 10d55a5a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55a5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55a60 jne 0x10d55a63 */
  if (!C.zf) goto L_10d55a63;
  /* 10d55a62 int3  */
  x86_unimpl("int3 @ 0x10d55a62");
L_10d55a63:;
  /* 10d55a63 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55a65 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55a67 jne 0x10d55a37 */
  if (!C.zf) goto L_10d55a37;
L_10d55a69:;
  /* 10d55a69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55a6c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d55a6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d55a72 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55a74 call 0x10d58500 */
  push32(0x10d55a79u); f_10d58500();
  /* 10d55a79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55a7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55a7f pop edi */
  EDI = (pop32());
  /* 10d55a80 pop esi */
  ESI = (pop32());
  /* 10d55a81 pop ebx */
  EBX = (pop32());
  /* 10d55a82 mov esp, ebp */
  ESP = (EBP);
  /* 10d55a84 pop ebp */
  EBP = (pop32());
  /* 10d55a85 ret  */
  ESPCHK(0x10d55930u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10d55a90 (28 bytes, 11 insns) */
void f_10d55a90(void) {
  FTRACE(0x10d55a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55a91 mov ebp, esp */
  EBP = (ESP);
  /* 10d55a93 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55a94 mov eax, dword ptr [0x10d7ea8c] */
  EAX = (r32((uint32_t)(0x10d7ea8c)));
  /* 10d55a99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d55a9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55a9f mov dword ptr [0x10d7ea8c], ecx */
  w32((uint32_t)(0x10d7ea8c), (ECX));
  /* 10d55aa5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55aa8 mov esp, ebp */
  ESP = (EBP);
  /* 10d55aaa pop ebp */
  EBP = (pop32());
  /* 10d55aab ret  */
  ESPCHK(0x10d55a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ab0 @ 0x10d55ab0 (157 bytes, 59 insns) */
void f_10d55ab0(void) {
  FTRACE(0x10d55ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10d55ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55ab4 push ebx */
  push32((uint32_t)(EBX));
  /* 10d55ab5 push esi */
  push32((uint32_t)(ESI));
  /* 10d55ab6 push edi */
  push32((uint32_t)(EDI));
  /* 10d55ab7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55ab9 call 0x10d58460 */
  push32(0x10d55abeu); f_10d58460();
  /* 10d55abe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55ac1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55ac4 push eax */
  push32((uint32_t)(EAX));
  /* 10d55ac5 call 0x10d56060 */
  push32(0x10d55acau); f_10d56060();
  /* 10d55aca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55acd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55acf je 0x10d55b3c */
  if (C.zf) goto L_10d55b3c;
  /* 10d55ad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55ad4 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55ad7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d55ada:;
  /* 10d55ada mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55add mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55ae0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d55ae5 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55ae8 je 0x10d55b2d */
  if (C.zf) goto L_10d55b2d;
  /* 10d55aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55aed cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55af1 je 0x10d55b2d */
  if (C.zf) goto L_10d55b2d;
  /* 10d55af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55af6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d55af9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d55afe cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55b01 je 0x10d55b2d */
  if (C.zf) goto L_10d55b2d;
  /* 10d55b03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55b06 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55b0a je 0x10d55b2d */
  if (C.zf) goto L_10d55b2d;
  /* 10d55b0c push 0x10d7b884 */
  push32((uint32_t)(0x10d7b884u));
  /* 10d55b11 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55b13 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 10d55b18 push 0x10d7b5dc */
  push32((uint32_t)(0x10d7b5dcu));
  /* 10d55b1d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d55b1f call 0x10d53b20 */
  push32(0x10d55b24u); f_10d53b20();
  /* 10d55b24 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55b27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55b2a jne 0x10d55b2d */
  if (!C.zf) goto L_10d55b2d;
  /* 10d55b2c int3  */
  x86_unimpl("int3 @ 0x10d55b2c");
L_10d55b2d:;
  /* 10d55b2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55b2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55b31 jne 0x10d55ada */
  if (!C.zf) goto L_10d55ada;
  /* 10d55b33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55b36 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55b39 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_10d55b3c:;
  /* 10d55b3c push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55b3e call 0x10d58500 */
  push32(0x10d55b43u); f_10d58500();
  /* 10d55b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55b46 pop edi */
  EDI = (pop32());
  /* 10d55b47 pop esi */
  ESI = (pop32());
  /* 10d55b48 pop ebx */
  EBX = (pop32());
  /* 10d55b49 mov esp, ebp */
  ESP = (EBP);
  /* 10d55b4b pop ebp */
  EBP = (pop32());
  /* 10d55b4c ret  */
  ESPCHK(0x10d55ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b50 @ 0x10d55b50 (28 bytes, 11 insns) */
void f_10d55b50(void) {
  FTRACE(0x10d55b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55b51 mov ebp, esp */
  EBP = (ESP);
  /* 10d55b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55b54 mov eax, dword ptr [0x10d7ec90] */
  EAX = (r32((uint32_t)(0x10d7ec90)));
  /* 10d55b59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d55b5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55b5f mov dword ptr [0x10d7ec90], ecx */
  w32((uint32_t)(0x10d7ec90), (ECX));
  /* 10d55b65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55b68 mov esp, ebp */
  ESP = (EBP);
  /* 10d55b6a pop ebp */
  EBP = (pop32());
  /* 10d55b6b ret  */
  ESPCHK(0x10d55b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b70 @ 0x10d55b70 (136 bytes, 55 insns) */
void f_10d55b70(void) {
  FTRACE(0x10d55b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55b71 mov ebp, esp */
  EBP = (ESP);
  /* 10d55b73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55b74 push ebx */
  push32((uint32_t)(EBX));
  /* 10d55b75 push esi */
  push32((uint32_t)(ESI));
  /* 10d55b76 push edi */
  push32((uint32_t)(EDI));
  /* 10d55b77 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_10d55b7e:;
  /* 10d55b7e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d55b81 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d55b84 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55b87 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d55b8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55b8c je 0x10d55bee */
  if (C.zf) goto L_10d55bee;
  /* 10d55b8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55b91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55b93 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d55b95 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55b98 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55b9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55ba1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55ba4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d55ba7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55ba9 je 0x10d55bec */
  if (C.zf) goto L_10d55bec;
L_10d55bab:;
  /* 10d55bab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55bae and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d55bb3 push eax */
  push32((uint32_t)(EAX));
  /* 10d55bb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55bb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55bb9 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 10d55bbc push edx */
  push32((uint32_t)(EDX));
  /* 10d55bbd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55bc0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55bc3 push eax */
  push32((uint32_t)(EAX));
  /* 10d55bc4 push 0x10d7b8c8 */
  push32((uint32_t)(0x10d7b8c8u));
  /* 10d55bc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55bcb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55bcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55bd1 call 0x10d53b20 */
  push32(0x10d55bd6u); f_10d53b20();
  /* 10d55bd6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55bd9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55bdc jne 0x10d55bdf */
  if (!C.zf) goto L_10d55bdf;
  /* 10d55bde int3  */
  x86_unimpl("int3 @ 0x10d55bde");
L_10d55bdf:;
  /* 10d55bdf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55be1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55be3 jne 0x10d55bab */
  if (!C.zf) goto L_10d55bab;
  /* 10d55be5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d55bec:;
  /* 10d55bec jmp 0x10d55b7e */
  goto L_10d55b7e;
L_10d55bee:;
  /* 10d55bee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55bf1 pop edi */
  EDI = (pop32());
  /* 10d55bf2 pop esi */
  ESI = (pop32());
  /* 10d55bf3 pop ebx */
  EBX = (pop32());
  /* 10d55bf4 mov esp, ebp */
  ESP = (EBP);
  /* 10d55bf6 pop ebp */
  EBP = (pop32());
  /* 10d55bf7 ret  */
  ESPCHK(0x10d55b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005c00 @ 0x10d55c00 (863 bytes, 299 insns) [1 switch table(s)] */
void f_10d55c00(void) {
  FTRACE(0x10d55c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55c01 mov ebp, esp */
  EBP = (ESP);
  /* 10d55c03 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d55c06 push ebx */
  push32((uint32_t)(EBX));
  /* 10d55c07 push esi */
  push32((uint32_t)(ESI));
  /* 10d55c08 push edi */
  push32((uint32_t)(EDI));
  /* 10d55c09 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d55c10 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d55c15 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d55c18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55c1a jne 0x10d55c26 */
  if (!C.zf) goto L_10d55c26;
  /* 10d55c1c mov eax, 1 */
  EAX = (0x1u);
  /* 10d55c21 jmp 0x10d55f58 */
  goto L_10d55f58;
L_10d55c26:;
  /* 10d55c26 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55c28 call 0x10d58460 */
  push32(0x10d55c2du); f_10d58460();
  /* 10d55c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55c30 call 0x10d58c40 */
  push32(0x10d55c35u); f_10d58c40();
  /* 10d55c35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d55c38 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55c3c je 0x10d55d49 */
  if (C.zf) goto L_10d55d49;
  /* 10d55c42 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55c46 je 0x10d55d49 */
  if (C.zf) goto L_10d55d49;
  /* 10d55c4c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d55c4f mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10d55c52 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d55c55 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55c58 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d55c5b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55c5f ja 0x10d55d12 */
  if ((!C.cf&&!C.zf)) goto L_10d55d12;
  /* 10d55c65 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d55c68 jmp dword ptr [eax*4 + 0x10d55f5f] */
  switch (EAX) {
    case 0: goto L_10d55cea;
    case 1: goto L_10d55cc2;
    case 2: goto L_10d55c9a;
    case 3: goto L_10d55c6f;
    default: x86_unimpl("switch@0x10d55c68 out of table"); return;
  }
L_10d55c6f:;
  /* 10d55c6f push 0x10d7ba1c */
  push32((uint32_t)(0x10d7ba1cu));
  /* 10d55c74 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55c79 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55c7b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55c7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55c81 call 0x10d53b20 */
  push32(0x10d55c86u); f_10d53b20();
  /* 10d55c86 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55c89 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55c8c jne 0x10d55c8f */
  if (!C.zf) goto L_10d55c8f;
  /* 10d55c8e int3  */
  x86_unimpl("int3 @ 0x10d55c8e");
L_10d55c8f:;
  /* 10d55c8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55c91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55c93 jne 0x10d55c6f */
  if (!C.zf) goto L_10d55c6f;
  /* 10d55c95 jmp 0x10d55d38 */
  goto L_10d55d38;
L_10d55c9a:;
  /* 10d55c9a push 0x10d7b9f8 */
  push32((uint32_t)(0x10d7b9f8u));
  /* 10d55c9f push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55ca4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ca6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ca8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55caa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cac call 0x10d53b20 */
  push32(0x10d55cb1u); f_10d53b20();
  /* 10d55cb1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55cb4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55cb7 jne 0x10d55cba */
  if (!C.zf) goto L_10d55cba;
  /* 10d55cb9 int3  */
  x86_unimpl("int3 @ 0x10d55cb9");
L_10d55cba:;
  /* 10d55cba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55cbc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55cbe jne 0x10d55c9a */
  if (!C.zf) goto L_10d55c9a;
  /* 10d55cc0 jmp 0x10d55d38 */
  goto L_10d55d38;
L_10d55cc2:;
  /* 10d55cc2 push 0x10d7b9d4 */
  push32((uint32_t)(0x10d7b9d4u));
  /* 10d55cc7 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55ccc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cce push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cd2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cd4 call 0x10d53b20 */
  push32(0x10d55cd9u); f_10d53b20();
  /* 10d55cd9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55cdc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55cdf jne 0x10d55ce2 */
  if (!C.zf) goto L_10d55ce2;
  /* 10d55ce1 int3  */
  x86_unimpl("int3 @ 0x10d55ce1");
L_10d55ce2:;
  /* 10d55ce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55ce4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55ce6 jne 0x10d55cc2 */
  if (!C.zf) goto L_10d55cc2;
  /* 10d55ce8 jmp 0x10d55d38 */
  goto L_10d55d38;
L_10d55cea:;
  /* 10d55cea push 0x10d7b9b0 */
  push32((uint32_t)(0x10d7b9b0u));
  /* 10d55cef push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55cf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cfa push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55cfc call 0x10d53b20 */
  push32(0x10d55d01u); f_10d53b20();
  /* 10d55d01 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55d04 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d07 jne 0x10d55d0a */
  if (!C.zf) goto L_10d55d0a;
  /* 10d55d09 int3  */
  x86_unimpl("int3 @ 0x10d55d09");
L_10d55d0a:;
  /* 10d55d0a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55d0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55d0e jne 0x10d55cea */
  if (!C.zf) goto L_10d55cea;
  /* 10d55d10 jmp 0x10d55d38 */
  goto L_10d55d38;
L_10d55d12:;
  /* 10d55d12 push 0x10d7b984 */
  push32((uint32_t)(0x10d7b984u));
  /* 10d55d17 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d55d1c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55d20 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55d22 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55d24 call 0x10d53b20 */
  push32(0x10d55d29u); f_10d53b20();
  /* 10d55d29 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55d2c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d2f jne 0x10d55d32 */
  if (!C.zf) goto L_10d55d32;
  /* 10d55d31 int3  */
  x86_unimpl("int3 @ 0x10d55d31");
L_10d55d32:;
  /* 10d55d32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55d34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55d36 jne 0x10d55d12 */
  if (!C.zf) goto L_10d55d12;
L_10d55d38:;
  /* 10d55d38 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55d3a call 0x10d58500 */
  push32(0x10d55d3fu); f_10d58500();
  /* 10d55d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55d42 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55d44 jmp 0x10d55f58 */
  goto L_10d55f58;
L_10d55d49:;
  /* 10d55d49 mov eax, dword ptr [0x10d80550] */
  EAX = (r32((uint32_t)(0x10d80550)));
  /* 10d55d4e mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d55d51 jmp 0x10d55d5b */
  goto L_10d55d5b;
L_10d55d53:;
  /* 10d55d53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55d56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d55d58 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d55d5b:;
  /* 10d55d5b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d5f je 0x10d55f4b */
  if (C.zf) goto L_10d55f4b;
  /* 10d55d65 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 10d55d6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55d6f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d55d72 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55d78 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d7b je 0x10d55da0 */
  if (C.zf) goto L_10d55da0;
  /* 10d55d7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55d80 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d84 je 0x10d55da0 */
  if (C.zf) goto L_10d55da0;
  /* 10d55d86 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55d89 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d55d8c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55d92 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d95 je 0x10d55da0 */
  if (C.zf) goto L_10d55da0;
  /* 10d55d97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55d9a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55d9e jne 0x10d55db8 */
  if (!C.zf) goto L_10d55db8;
L_10d55da0:;
  /* 10d55da0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55da3 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d55da6 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d55dac mov edx, dword ptr [ecx*4 + 0x10d7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea94)));
  /* 10d55db3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d55db6 jmp 0x10d55dbf */
  goto L_10d55dbf;
L_10d55db8:;
  /* 10d55db8 mov dword ptr [ebp - 0x14], 0x10d7b97c */
  w32((uint32_t)(EBP + -0x14), (0x10d7b97cu));
L_10d55dbf:;
  /* 10d55dbf push 4 */
  push32((uint32_t)(0x4u));
  /* 10d55dc1 mov al, byte ptr [0x10d7ea90] */
  AL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d55dc6 push eax */
  push32((uint32_t)(EAX));
  /* 10d55dc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55dca add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55dcd push ecx */
  push32((uint32_t)(ECX));
  /* 10d55dce call 0x10d55b70 */
  push32(0x10d55dd3u); f_10d55b70();
  /* 10d55dd3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55dd6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55dd8 jne 0x10d55e14 */
  if (!C.zf) goto L_10d55e14;
L_10d55dda:;
  /* 10d55dda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55ddd add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55de0 push edx */
  push32((uint32_t)(EDX));
  /* 10d55de1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55de4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d55de7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55de8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d55deb push edx */
  push32((uint32_t)(EDX));
  /* 10d55dec push 0x10d7b858 */
  push32((uint32_t)(0x10d7b858u));
  /* 10d55df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55df3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55df5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55df7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55df9 call 0x10d53b20 */
  push32(0x10d55dfeu); f_10d53b20();
  /* 10d55dfe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55e04 jne 0x10d55e07 */
  if (!C.zf) goto L_10d55e07;
  /* 10d55e06 int3  */
  x86_unimpl("int3 @ 0x10d55e06");
L_10d55e07:;
  /* 10d55e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55e09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55e0b jne 0x10d55dda */
  if (!C.zf) goto L_10d55dda;
  /* 10d55e0d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d55e14:;
  /* 10d55e14 push 4 */
  push32((uint32_t)(0x4u));
  /* 10d55e16 mov cl, byte ptr [0x10d7ea90] */
  CL = (r8((uint32_t)(0x10d7ea90)));
  /* 10d55e1c push ecx */
  push32((uint32_t)(ECX));
  /* 10d55e1d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e20 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d55e23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e26 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 10d55e2a push edx */
  push32((uint32_t)(EDX));
  /* 10d55e2b call 0x10d55b70 */
  push32(0x10d55e30u); f_10d55b70();
  /* 10d55e30 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e33 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55e35 jne 0x10d55e71 */
  if (!C.zf) goto L_10d55e71;
L_10d55e37:;
  /* 10d55e37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e3a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e3d push eax */
  push32((uint32_t)(EAX));
  /* 10d55e3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e41 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d55e44 push edx */
  push32((uint32_t)(EDX));
  /* 10d55e45 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d55e48 push eax */
  push32((uint32_t)(EAX));
  /* 10d55e49 push 0x10d7b82c */
  push32((uint32_t)(0x10d7b82cu));
  /* 10d55e4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55e50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55e52 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55e54 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55e56 call 0x10d53b20 */
  push32(0x10d55e5bu); f_10d53b20();
  /* 10d55e5b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e5e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55e61 jne 0x10d55e64 */
  if (!C.zf) goto L_10d55e64;
  /* 10d55e63 int3  */
  x86_unimpl("int3 @ 0x10d55e63");
L_10d55e64:;
  /* 10d55e64 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d55e66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d55e68 jne 0x10d55e37 */
  if (!C.zf) goto L_10d55e37;
  /* 10d55e6a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d55e71:;
  /* 10d55e71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e74 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55e78 jne 0x10d55eca */
  if (!C.zf) goto L_10d55eca;
  /* 10d55e7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d55e80 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55e81 mov dl, byte ptr [0x10d7ea91] */
  DL = (r8((uint32_t)(0x10d7ea91)));
  /* 10d55e87 push edx */
  push32((uint32_t)(EDX));
  /* 10d55e88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e8b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e8e push eax */
  push32((uint32_t)(EAX));
  /* 10d55e8f call 0x10d55b70 */
  push32(0x10d55e94u); f_10d55b70();
  /* 10d55e94 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55e97 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55e99 jne 0x10d55eca */
  if (!C.zf) goto L_10d55eca;
L_10d55e9b:;
  /* 10d55e9b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55e9e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55ea1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55ea2 push 0x10d7b950 */
  push32((uint32_t)(0x10d7b950u));
  /* 10d55ea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55eab push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ead push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55eaf call 0x10d53b20 */
  push32(0x10d55eb4u); f_10d53b20();
  /* 10d55eb4 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55eb7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55eba jne 0x10d55ebd */
  if (!C.zf) goto L_10d55ebd;
  /* 10d55ebc int3  */
  x86_unimpl("int3 @ 0x10d55ebc");
L_10d55ebd:;
  /* 10d55ebd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55ebf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55ec1 jne 0x10d55e9b */
  if (!C.zf) goto L_10d55e9b;
  /* 10d55ec3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d55eca:;
  /* 10d55eca cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55ece jne 0x10d55f46 */
  if (!C.zf) goto L_10d55f46;
  /* 10d55ed0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55ed3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55ed7 je 0x10d55f0c */
  if (C.zf) goto L_10d55f0c;
L_10d55ed9:;
  /* 10d55ed9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55edc mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10d55edf push edx */
  push32((uint32_t)(EDX));
  /* 10d55ee0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55ee3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d55ee6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55ee7 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d55eea push edx */
  push32((uint32_t)(EDX));
  /* 10d55eeb push 0x10d7b930 */
  push32((uint32_t)(0x10d7b930u));
  /* 10d55ef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ef4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ef6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55ef8 call 0x10d53b20 */
  push32(0x10d55efdu); f_10d53b20();
  /* 10d55efd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55f00 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55f03 jne 0x10d55f06 */
  if (!C.zf) goto L_10d55f06;
  /* 10d55f05 int3  */
  x86_unimpl("int3 @ 0x10d55f05");
L_10d55f06:;
  /* 10d55f06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d55f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55f0a jne 0x10d55ed9 */
  if (!C.zf) goto L_10d55ed9;
L_10d55f0c:;
  /* 10d55f0c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55f0f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d55f12 push edx */
  push32((uint32_t)(EDX));
  /* 10d55f13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d55f16 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55f19 push eax */
  push32((uint32_t)(EAX));
  /* 10d55f1a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d55f1d push ecx */
  push32((uint32_t)(ECX));
  /* 10d55f1e push 0x10d7b904 */
  push32((uint32_t)(0x10d7b904u));
  /* 10d55f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55f25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55f27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d55f2b call 0x10d53b20 */
  push32(0x10d55f30u); f_10d53b20();
  /* 10d55f30 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55f33 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55f36 jne 0x10d55f39 */
  if (!C.zf) goto L_10d55f39;
  /* 10d55f38 int3  */
  x86_unimpl("int3 @ 0x10d55f38");
L_10d55f39:;
  /* 10d55f39 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d55f3b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d55f3d jne 0x10d55f0c */
  if (!C.zf) goto L_10d55f0c;
  /* 10d55f3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d55f46:;
  /* 10d55f46 jmp 0x10d55d53 */
  goto L_10d55d53;
L_10d55f4b:;
  /* 10d55f4b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55f4d call 0x10d58500 */
  push32(0x10d55f52u); f_10d58500();
  /* 10d55f52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55f55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d55f58:;
  /* 10d55f58 pop edi */
  EDI = (pop32());
  /* 10d55f59 pop esi */
  ESI = (pop32());
  /* 10d55f5a pop ebx */
  EBX = (pop32());
  /* 10d55f5b mov esp, ebp */
  ESP = (EBP);
  /* 10d55f5d pop ebp */
  EBP = (pop32());
  /* 10d55f5e ret  */
  ESPCHK(0x10d55c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f70 @ 0x10d55f70 (34 bytes, 13 insns) */
void f_10d55f70(void) {
  FTRACE(0x10d55f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55f71 mov ebp, esp */
  EBP = (ESP);
  /* 10d55f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55f74 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d55f79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d55f7c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55f80 je 0x10d55f8b */
  if (C.zf) goto L_10d55f8b;
  /* 10d55f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d55f85 mov dword ptr [0x10d7ea84], ecx */
  w32((uint32_t)(0x10d7ea84), (ECX));
L_10d55f8b:;
  /* 10d55f8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55f8e mov esp, ebp */
  ESP = (EBP);
  /* 10d55f90 pop ebp */
  EBP = (pop32());
  /* 10d55f91 ret  */
  ESPCHK(0x10d55f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10005fa0 @ 0x10d55fa0 (103 bytes, 38 insns) */
void f_10d55fa0(void) {
  FTRACE(0x10d55fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d55fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d55fa1 mov ebp, esp */
  EBP = (ESP);
  /* 10d55fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55fa4 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d55fa9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 10d55fac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d55fae jne 0x10d55fb2 */
  if (!C.zf) goto L_10d55fb2;
  /* 10d55fb0 jmp 0x10d56003 */
  goto L_10d56003;
L_10d55fb2:;
  /* 10d55fb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55fb4 call 0x10d58460 */
  push32(0x10d55fb9u); f_10d58460();
  /* 10d55fb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55fbc mov ecx, dword ptr [0x10d80550] */
  ECX = (r32((uint32_t)(0x10d80550)));
  /* 10d55fc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d55fc5 jmp 0x10d55fcf */
  goto L_10d55fcf;
L_10d55fc7:;
  /* 10d55fc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55fca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d55fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d55fcf:;
  /* 10d55fcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55fd3 je 0x10d55ff9 */
  if (C.zf) goto L_10d55ff9;
  /* 10d55fd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55fd8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d55fdb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d55fe1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d55fe4 jne 0x10d55ff7 */
  if (!C.zf) goto L_10d55ff7;
  /* 10d55fe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d55fe9 push eax */
  push32((uint32_t)(EAX));
  /* 10d55fea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d55fed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d55ff0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d55ff1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x10d55ff4u);
  /* 10d55ff4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d55ff7:;
  /* 10d55ff7 jmp 0x10d55fc7 */
  goto L_10d55fc7;
L_10d55ff9:;
  /* 10d55ff9 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d55ffb call 0x10d58500 */
  push32(0x10d56000u); f_10d58500();
  /* 10d56000 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56003:;
  /* 10d56003 mov esp, ebp */
  ESP = (EBP);
  /* 10d56005 pop ebp */
  EBP = (pop32());
  /* 10d56006 ret  */
  ESPCHK(0x10d55fa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x10d56010 (75 bytes, 28 insns) */
void f_10d56010(void) {
  FTRACE(0x10d56010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56010 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56011 mov ebp, esp */
  EBP = (ESP);
  /* 10d56013 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56014 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56018 je 0x10d5604d */
  if (C.zf) goto L_10d5604d;
  /* 10d5601a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5601d push eax */
  push32((uint32_t)(EAX));
  /* 10d5601e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56021 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56022 call dword ptr [0x10d83354] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83354))), 0x10d56028u);
  /* 10d56028 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5602a jne 0x10d5604d */
  if (!C.zf) goto L_10d5604d;
  /* 10d5602c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56030 je 0x10d56044 */
  if (C.zf) goto L_10d56044;
  /* 10d56032 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56035 push edx */
  push32((uint32_t)(EDX));
  /* 10d56036 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56039 push eax */
  push32((uint32_t)(EAX));
  /* 10d5603a call dword ptr [0x10d83350] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83350))), 0x10d56040u);
  /* 10d56040 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56042 jne 0x10d5604d */
  if (!C.zf) goto L_10d5604d;
L_10d56044:;
  /* 10d56044 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5604b jmp 0x10d56054 */
  goto L_10d56054;
L_10d5604d:;
  /* 10d5604d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d56054:;
  /* 10d56054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56057 mov esp, ebp */
  ESP = (EBP);
  /* 10d56059 pop ebp */
  EBP = (pop32());
  /* 10d5605a ret  */
  ESPCHK(0x10d56010u, _esp0);
  ESP += 4; return;
}

/* FUN_10006060 @ 0x10d56060 (134 bytes, 50 insns) */
void f_10d56060(void) {
  FTRACE(0x10d56060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56060 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56061 mov ebp, esp */
  EBP = (ESP);
  /* 10d56063 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56064 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56068 jne 0x10d5606e */
  if (!C.zf) goto L_10d5606e;
  /* 10d5606a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5606c jmp 0x10d560e2 */
  goto L_10d560e2;
L_10d5606e:;
  /* 10d5606e push 1 */
  push32((uint32_t)(0x1u));
  /* 10d56070 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10d56072 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56075 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56078 push eax */
  push32((uint32_t)(EAX));
  /* 10d56079 call 0x10d56010 */
  push32(0x10d5607eu); f_10d56010();
  /* 10d5607e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56081 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56083 jne 0x10d56089 */
  if (!C.zf) goto L_10d56089;
  /* 10d56085 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56087 jmp 0x10d560e2 */
  goto L_10d560e2;
L_10d56089:;
  /* 10d56089 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5608c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5608f push ecx */
  push32((uint32_t)(ECX));
  /* 10d56090 call 0x10d58d60 */
  push32(0x10d56095u); f_10d58d60();
  /* 10d56095 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56098 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5609b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5609f je 0x10d560b6 */
  if (C.zf) goto L_10d560b6;
  /* 10d560a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d560a4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d560a7 push edx */
  push32((uint32_t)(EDX));
  /* 10d560a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d560ab push eax */
  push32((uint32_t)(EAX));
  /* 10d560ac call 0x10d58dc0 */
  push32(0x10d560b1u); f_10d58dc0();
  /* 10d560b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d560b4 jmp 0x10d560e2 */
  goto L_10d560e2;
L_10d560b6:;
  /* 10d560b6 mov ecx, dword ptr [0x10d80504] */
  ECX = (r32((uint32_t)(0x10d80504)));
  /* 10d560bc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 10d560c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d560c4 je 0x10d560cd */
  if (C.zf) goto L_10d560cd;
  /* 10d560c6 mov eax, 1 */
  EAX = (0x1u);
  /* 10d560cb jmp 0x10d560e2 */
  goto L_10d560e2;
L_10d560cd:;
  /* 10d560cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d560d0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d560d3 push edx */
  push32((uint32_t)(EDX));
  /* 10d560d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d560d6 mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d560db push eax */
  push32((uint32_t)(EAX));
  /* 10d560dc call dword ptr [0x10d83358] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83358))), 0x10d560e2u);
L_10d560e2:;
  /* 10d560e2 mov esp, ebp */
  ESP = (EBP);
  /* 10d560e4 pop ebp */
  EBP = (pop32());
  /* 10d560e5 ret  */
  ESPCHK(0x10d56060u, _esp0);
  ESP += 4; return;
}

/* FUN_100060f0 @ 0x10d560f0 (227 bytes, 80 insns) */
void f_10d560f0(void) {
  FTRACE(0x10d560f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d560f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d560f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d560f3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d560f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d560f7 push eax */
  push32((uint32_t)(EAX));
  /* 10d560f8 call 0x10d56060 */
  push32(0x10d560fdu); f_10d56060();
  /* 10d560fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56100 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56102 jne 0x10d5610b */
  if (!C.zf) goto L_10d5610b;
  /* 10d56104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56106 jmp 0x10d561cf */
  goto L_10d561cf;
L_10d5610b:;
  /* 10d5610b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d5610d call 0x10d58460 */
  push32(0x10d56112u); f_10d58460();
  /* 10d56112 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56115 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56118 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5611b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5611e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56121 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d56124 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d56129 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5612c je 0x10d56150 */
  if (C.zf) goto L_10d56150;
  /* 10d5612e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56131 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56135 je 0x10d56150 */
  if (C.zf) goto L_10d56150;
  /* 10d56137 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5613a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d5613d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d56142 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56145 je 0x10d56150 */
  if (C.zf) goto L_10d56150;
  /* 10d56147 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5614a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5614e jne 0x10d561c3 */
  if (!C.zf) goto L_10d561c3;
L_10d56150:;
  /* 10d56150 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d56152 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56155 push edx */
  push32((uint32_t)(EDX));
  /* 10d56156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56159 push eax */
  push32((uint32_t)(EAX));
  /* 10d5615a call 0x10d56010 */
  push32(0x10d5615fu); f_10d56010();
  /* 10d5615f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56162 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56164 je 0x10d561c3 */
  if (C.zf) goto L_10d561c3;
  /* 10d56166 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56169 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d5616c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5616f jne 0x10d561c3 */
  if (!C.zf) goto L_10d561c3;
  /* 10d56171 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56174 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d56177 cmp ecx, dword ptr [0x10d7ea88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7ea88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5617d jg 0x10d561c3 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d561c3;
  /* 10d5617f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56183 je 0x10d56190 */
  if (C.zf) goto L_10d56190;
  /* 10d56185 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56188 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5618b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10d5618e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d56190:;
  /* 10d56190 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56194 je 0x10d561a1 */
  if (C.zf) goto L_10d561a1;
  /* 10d56196 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d56199 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5619c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5619f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d561a1:;
  /* 10d561a1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d561a5 je 0x10d561b2 */
  if (C.zf) goto L_10d561b2;
  /* 10d561a7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d561aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d561ad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d561b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d561b2:;
  /* 10d561b2 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d561b4 call 0x10d58500 */
  push32(0x10d561b9u); f_10d58500();
  /* 10d561b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d561bc mov eax, 1 */
  EAX = (0x1u);
  /* 10d561c1 jmp 0x10d561cf */
  goto L_10d561cf;
L_10d561c3:;
  /* 10d561c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d561c5 call 0x10d58500 */
  push32(0x10d561cau); f_10d58500();
  /* 10d561ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d561cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d561cf:;
  /* 10d561cf mov esp, ebp */
  ESP = (EBP);
  /* 10d561d1 pop ebp */
  EBP = (pop32());
  /* 10d561d2 ret  */
  ESPCHK(0x10d560f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100061e0 @ 0x10d561e0 (28 bytes, 11 insns) */
void f_10d561e0(void) {
  FTRACE(0x10d561e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d561e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d561e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d561e3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d561e4 mov eax, dword ptr [0x10d81eb8] */
  EAX = (r32((uint32_t)(0x10d81eb8)));
  /* 10d561e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d561ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d561ef mov dword ptr [0x10d81eb8], ecx */
  w32((uint32_t)(0x10d81eb8), (ECX));
  /* 10d561f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d561f8 mov esp, ebp */
  ESP = (EBP);
  /* 10d561fa pop ebp */
  EBP = (pop32());
  /* 10d561fb ret  */
  ESPCHK(0x10d561e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006200 @ 0x10d56200 (362 bytes, 116 insns) */
void f_10d56200(void) {
  FTRACE(0x10d56200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56200 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56201 mov ebp, esp */
  EBP = (ESP);
  /* 10d56203 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56206 push ebx */
  push32((uint32_t)(EBX));
  /* 10d56207 push esi */
  push32((uint32_t)(ESI));
  /* 10d56208 push edi */
  push32((uint32_t)(EDI));
  /* 10d56209 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5620d jne 0x10d5623a */
  if (!C.zf) goto L_10d5623a;
L_10d5620f:;
  /* 10d5620f push 0x10d7ba64 */
  push32((uint32_t)(0x10d7ba64u));
  /* 10d56214 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d56219 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5621b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5621d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5621f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56221 call 0x10d53b20 */
  push32(0x10d56226u); f_10d53b20();
  /* 10d56226 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56229 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5622c jne 0x10d5622f */
  if (!C.zf) goto L_10d5622f;
  /* 10d5622e int3  */
  x86_unimpl("int3 @ 0x10d5622e");
L_10d5622f:;
  /* 10d5622f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56231 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56233 jne 0x10d5620f */
  if (!C.zf) goto L_10d5620f;
  /* 10d56235 jmp 0x10d56363 */
  goto L_10d56363;
L_10d5623a:;
  /* 10d5623a push 9 */
  push32((uint32_t)(0x9u));
  /* 10d5623c call 0x10d58460 */
  push32(0x10d56241u); f_10d58460();
  /* 10d56241 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56244 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56247 mov edx, dword ptr [0x10d80550] */
  EDX = (r32((uint32_t)(0x10d80550)));
  /* 10d5624d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d5624f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d56256 jmp 0x10d56261 */
  goto L_10d56261;
L_10d56258:;
  /* 10d56258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5625b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5625e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d56261:;
  /* 10d56261 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56265 jge 0x10d56285 */
  if ((C.sf==C.of)) goto L_10d56285;
  /* 10d56267 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5626a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5626d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 10d56275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56278 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5627b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 10d56283 jmp 0x10d56258 */
  goto L_10d56258;
L_10d56285:;
  /* 10d56285 mov edx, dword ptr [0x10d80550] */
  EDX = (r32((uint32_t)(0x10d80550)));
  /* 10d5628b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10d5628e jmp 0x10d56298 */
  goto L_10d56298;
L_10d56290:;
  /* 10d56290 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56293 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56295 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d56298:;
  /* 10d56298 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5629c je 0x10d56341 */
  if (C.zf) goto L_10d56341;
  /* 10d562a2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d562a5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d562a8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d562ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d562af jl 0x10d56317 */
  if ((C.sf!=C.of)) goto L_10d56317;
  /* 10d562b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d562b4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d562b7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d562bd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d562c0 jge 0x10d56317 */
  if ((C.sf==C.of)) goto L_10d56317;
  /* 10d562c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d562c5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d562c8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d562ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d562d1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 10d562d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d562d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d562db mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d562de and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d562e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d562e7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 10d562eb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d562ee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d562f1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d562f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d562f9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d562fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56300 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56303 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56306 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d56309 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5630e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56311 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d56315 jmp 0x10d5633c */
  goto L_10d5633c;
L_10d56317:;
  /* 10d56317 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5631a push edx */
  push32((uint32_t)(EDX));
  /* 10d5631b push 0x10d7ba40 */
  push32((uint32_t)(0x10d7ba40u));
  /* 10d56320 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56322 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56324 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56326 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56328 call 0x10d53b20 */
  push32(0x10d5632du); f_10d53b20();
  /* 10d5632d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56330 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56333 jne 0x10d56336 */
  if (!C.zf) goto L_10d56336;
  /* 10d56335 int3  */
  x86_unimpl("int3 @ 0x10d56335");
L_10d56336:;
  /* 10d56336 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56338 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5633a jne 0x10d56317 */
  if (!C.zf) goto L_10d56317;
L_10d5633c:;
  /* 10d5633c jmp 0x10d56290 */
  goto L_10d56290;
L_10d56341:;
  /* 10d56341 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56344 mov edx, dword ptr [0x10d80558] */
  EDX = (r32((uint32_t)(0x10d80558)));
  /* 10d5634a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 10d5634d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56350 mov ecx, dword ptr [0x10d8054c] */
  ECX = (r32((uint32_t)(0x10d8054c)));
  /* 10d56356 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 10d56359 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d5635b call 0x10d58500 */
  push32(0x10d56360u); f_10d58500();
  /* 10d56360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56363:;
  /* 10d56363 pop edi */
  EDI = (pop32());
  /* 10d56364 pop esi */
  ESI = (pop32());
  /* 10d56365 pop ebx */
  EBX = (pop32());
  /* 10d56366 mov esp, ebp */
  ESP = (EBP);
  /* 10d56368 pop ebp */
  EBP = (pop32());
  /* 10d56369 ret  */
  ESPCHK(0x10d56200u, _esp0);
  ESP += 4; return;
}

/* FUN_10006370 @ 0x10d56370 (291 bytes, 95 insns) */
void f_10d56370(void) {
  FTRACE(0x10d56370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56370 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56371 mov ebp, esp */
  EBP = (ESP);
  /* 10d56373 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56376 push ebx */
  push32((uint32_t)(EBX));
  /* 10d56377 push esi */
  push32((uint32_t)(ESI));
  /* 10d56378 push edi */
  push32((uint32_t)(EDI));
  /* 10d56379 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d56380 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56384 je 0x10d56392 */
  if (C.zf) goto L_10d56392;
  /* 10d56386 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5638a je 0x10d56392 */
  if (C.zf) goto L_10d56392;
  /* 10d5638c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56390 jne 0x10d563c0 */
  if (!C.zf) goto L_10d563c0;
L_10d56392:;
  /* 10d56392 push 0x10d7ba8c */
  push32((uint32_t)(0x10d7ba8cu));
  /* 10d56397 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d5639c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5639e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d563a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d563a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d563a4 call 0x10d53b20 */
  push32(0x10d563a9u); f_10d53b20();
  /* 10d563a9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d563ac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d563af jne 0x10d563b2 */
  if (!C.zf) goto L_10d563b2;
  /* 10d563b1 int3  */
  x86_unimpl("int3 @ 0x10d563b1");
L_10d563b2:;
  /* 10d563b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d563b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d563b6 jne 0x10d56392 */
  if (!C.zf) goto L_10d56392;
  /* 10d563b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d563bb jmp 0x10d5648c */
  goto L_10d5648c;
L_10d563c0:;
  /* 10d563c0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d563c7 jmp 0x10d563d2 */
  goto L_10d563d2;
L_10d563c9:;
  /* 10d563c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d563cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d563cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d563d2:;
  /* 10d563d2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d563d6 jge 0x10d5645c */
  if ((C.sf==C.of)) goto L_10d5645c;
  /* 10d563dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d563df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d563e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d563e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d563e8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 10d563ec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d563f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d563f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d563f6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 10d563fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d563fd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56400 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56403 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56406 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 10d5640a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5640e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56411 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56414 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 10d56418 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5641b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5641e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56423 jne 0x10d56432 */
  if (!C.zf) goto L_10d56432;
  /* 10d56425 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5642b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56430 je 0x10d56457 */
  if (C.zf) goto L_10d56457;
L_10d56432:;
  /* 10d56432 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56436 je 0x10d56457 */
  if (C.zf) goto L_10d56457;
  /* 10d56438 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5643c jne 0x10d56450 */
  if (!C.zf) goto L_10d56450;
  /* 10d5643e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56442 jne 0x10d56457 */
  if (!C.zf) goto L_10d56457;
  /* 10d56444 mov eax, dword ptr [0x10d7ea84] */
  EAX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d56449 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 10d5644c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5644e je 0x10d56457 */
  if (C.zf) goto L_10d56457;
L_10d56450:;
  /* 10d56450 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_10d56457:;
  /* 10d56457 jmp 0x10d563c9 */
  goto L_10d563c9;
L_10d5645c:;
  /* 10d5645c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5645f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56462 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d56465 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56468 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5646b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 10d5646e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56471 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56474 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 10d56477 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5647a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5647d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 10d56480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56483 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d56489 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_10d5648c:;
  /* 10d5648c pop edi */
  EDI = (pop32());
  /* 10d5648d pop esi */
  ESI = (pop32());
  /* 10d5648e pop ebx */
  EBX = (pop32());
  /* 10d5648f mov esp, ebp */
  ESP = (EBP);
  /* 10d56491 pop ebp */
  EBP = (pop32());
  /* 10d56492 ret  */
  ESPCHK(0x10d56370u, _esp0);
  ESP += 4; return;
}

/* FUN_100064a0 @ 0x10d564a0 (697 bytes, 253 insns) */
void f_10d564a0(void) {
  FTRACE(0x10d564a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d564a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d564a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d564a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d564a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10d564a7 push esi */
  push32((uint32_t)(ESI));
  /* 10d564a8 push edi */
  push32((uint32_t)(EDI));
  /* 10d564a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d564b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d564b2 call 0x10d58460 */
  push32(0x10d564b7u); f_10d58460();
  /* 10d564b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d564ba:;
  /* 10d564ba push 0x10d7bb84 */
  push32((uint32_t)(0x10d7bb84u));
  /* 10d564bf push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d564c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d564c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d564c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d564ca push 0 */
  push32((uint32_t)(0x0u));
  /* 10d564cc call 0x10d53b20 */
  push32(0x10d564d1u); f_10d53b20();
  /* 10d564d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d564d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d564d7 jne 0x10d564da */
  if (!C.zf) goto L_10d564da;
  /* 10d564d9 int3  */
  x86_unimpl("int3 @ 0x10d564d9");
L_10d564da:;
  /* 10d564da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d564dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d564de jne 0x10d564ba */
  if (!C.zf) goto L_10d564ba;
  /* 10d564e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d564e4 je 0x10d564ee */
  if (C.zf) goto L_10d564ee;
  /* 10d564e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d564e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d564eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d564ee:;
  /* 10d564ee mov eax, dword ptr [0x10d80550] */
  EAX = (r32((uint32_t)(0x10d80550)));
  /* 10d564f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d564f6 jmp 0x10d56500 */
  goto L_10d56500;
L_10d564f8:;
  /* 10d564f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d564fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d564fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d56500:;
  /* 10d56500 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56504 je 0x10d56722 */
  if (C.zf) goto L_10d56722;
  /* 10d5650a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5650d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56510 je 0x10d56722 */
  if (C.zf) goto L_10d56722;
  /* 10d56516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56519 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d5651c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d56522 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56525 je 0x10d56554 */
  if (C.zf) goto L_10d56554;
  /* 10d56527 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5652a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10d5652d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d56533 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56535 je 0x10d56554 */
  if (C.zf) goto L_10d56554;
  /* 10d56537 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5653a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d5653d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d56542 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56545 jne 0x10d56559 */
  if (!C.zf) goto L_10d56559;
  /* 10d56547 mov ecx, dword ptr [0x10d7ea84] */
  ECX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d5654d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d56550 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56552 jne 0x10d56559 */
  if (!C.zf) goto L_10d56559;
L_10d56554:;
  /* 10d56554 jmp 0x10d5671d */
  goto L_10d5671d;
L_10d56559:;
  /* 10d56559 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5655c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56560 je 0x10d565d2 */
  if (C.zf) goto L_10d565d2;
  /* 10d56562 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56564 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d56566 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56569 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10d5656c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5656d call 0x10d56010 */
  push32(0x10d56572u); f_10d56010();
  /* 10d56572 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56577 jne 0x10d565a3 */
  if (!C.zf) goto L_10d565a3;
L_10d56579:;
  /* 10d56579 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5657c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d5657f push eax */
  push32((uint32_t)(EAX));
  /* 10d56580 push 0x10d7bb70 */
  push32((uint32_t)(0x10d7bb70u));
  /* 10d56585 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56587 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56589 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5658b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5658d call 0x10d53b20 */
  push32(0x10d56592u); f_10d53b20();
  /* 10d56592 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56595 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56598 jne 0x10d5659b */
  if (!C.zf) goto L_10d5659b;
  /* 10d5659a int3  */
  x86_unimpl("int3 @ 0x10d5659a");
L_10d5659b:;
  /* 10d5659b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5659d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d5659f jne 0x10d56579 */
  if (!C.zf) goto L_10d56579;
  /* 10d565a1 jmp 0x10d565d2 */
  goto L_10d565d2;
L_10d565a3:;
  /* 10d565a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d565a6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d565a9 push eax */
  push32((uint32_t)(EAX));
  /* 10d565aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d565ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d565b0 push edx */
  push32((uint32_t)(EDX));
  /* 10d565b1 push 0x10d7bb64 */
  push32((uint32_t)(0x10d7bb64u));
  /* 10d565b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565ba push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565bc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565be call 0x10d53b20 */
  push32(0x10d565c3u); f_10d53b20();
  /* 10d565c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d565c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d565c9 jne 0x10d565cc */
  if (!C.zf) goto L_10d565cc;
  /* 10d565cb int3  */
  x86_unimpl("int3 @ 0x10d565cb");
L_10d565cc:;
  /* 10d565cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d565ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d565d0 jne 0x10d565a3 */
  if (!C.zf) goto L_10d565a3;
L_10d565d2:;
  /* 10d565d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d565d5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10d565d8 push edx */
  push32((uint32_t)(EDX));
  /* 10d565d9 push 0x10d7bb5c */
  push32((uint32_t)(0x10d7bb5cu));
  /* 10d565de push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d565e6 call 0x10d53b20 */
  push32(0x10d565ebu); f_10d53b20();
  /* 10d565eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d565ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d565f1 jne 0x10d565f4 */
  if (!C.zf) goto L_10d565f4;
  /* 10d565f3 int3  */
  x86_unimpl("int3 @ 0x10d565f3");
L_10d565f4:;
  /* 10d565f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d565f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d565f8 jne 0x10d565d2 */
  if (!C.zf) goto L_10d565d2;
  /* 10d565fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d565fd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d56600 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d56606 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56609 jne 0x10d5667c */
  if (!C.zf) goto L_10d5667c;
L_10d5660b:;
  /* 10d5660b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5660e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d56611 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56612 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56615 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d56618 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d5661b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d56620 push eax */
  push32((uint32_t)(EAX));
  /* 10d56621 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56624 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56627 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56628 push 0x10d7bb28 */
  push32((uint32_t)(0x10d7bb28u));
  /* 10d5662d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5662f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56631 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56633 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56635 call 0x10d53b20 */
  push32(0x10d5663au); f_10d53b20();
  /* 10d5663a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5663d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56640 jne 0x10d56643 */
  if (!C.zf) goto L_10d56643;
  /* 10d56642 int3  */
  x86_unimpl("int3 @ 0x10d56642");
L_10d56643:;
  /* 10d56643 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56645 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d56647 jne 0x10d5660b */
  if (!C.zf) goto L_10d5660b;
  /* 10d56649 cmp dword ptr [0x10d81eb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81eb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56650 je 0x10d5666b */
  if (C.zf) goto L_10d5666b;
  /* 10d56652 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56655 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d56658 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5665c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5665f push edx */
  push32((uint32_t)(EDX));
  /* 10d56660 call dword ptr [0x10d81eb8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d81eb8))), 0x10d56666u);
  /* 10d56666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56669 jmp 0x10d56677 */
  goto L_10d56677;
L_10d5666b:;
  /* 10d5666b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5666e push eax */
  push32((uint32_t)(EAX));
  /* 10d5666f call 0x10d56760 */
  push32(0x10d56674u); f_10d56760();
  /* 10d56674 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56677:;
  /* 10d56677 jmp 0x10d5671d */
  goto L_10d5671d;
L_10d5667c:;
  /* 10d5667c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5667f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56683 jne 0x10d566c2 */
  if (!C.zf) goto L_10d566c2;
L_10d56685:;
  /* 10d56685 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56688 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5668b push eax */
  push32((uint32_t)(EAX));
  /* 10d5668c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5668f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56692 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56693 push 0x10d7bb00 */
  push32((uint32_t)(0x10d7bb00u));
  /* 10d56698 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5669a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5669c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5669e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d566a0 call 0x10d53b20 */
  push32(0x10d566a5u); f_10d53b20();
  /* 10d566a5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d566a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d566ab jne 0x10d566ae */
  if (!C.zf) goto L_10d566ae;
  /* 10d566ad int3  */
  x86_unimpl("int3 @ 0x10d566ad");
L_10d566ae:;
  /* 10d566ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d566b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d566b2 jne 0x10d56685 */
  if (!C.zf) goto L_10d56685;
  /* 10d566b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d566b7 push eax */
  push32((uint32_t)(EAX));
  /* 10d566b8 call 0x10d56760 */
  push32(0x10d566bdu); f_10d56760();
  /* 10d566bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d566c0 jmp 0x10d5671d */
  goto L_10d5671d;
L_10d566c2:;
  /* 10d566c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d566c5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10d566c8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d566ce cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d566d1 jne 0x10d5671d */
  if (!C.zf) goto L_10d5671d;
L_10d566d3:;
  /* 10d566d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d566d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10d566d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10d566da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d566dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10d566e0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d566e3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d566e8 push eax */
  push32((uint32_t)(EAX));
  /* 10d566e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d566ec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d566ef push ecx */
  push32((uint32_t)(ECX));
  /* 10d566f0 push 0x10d7bacc */
  push32((uint32_t)(0x10d7baccu));
  /* 10d566f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d566f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d566f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d566fb push 0 */
  push32((uint32_t)(0x0u));
  /* 10d566fd call 0x10d53b20 */
  push32(0x10d56702u); f_10d53b20();
  /* 10d56702 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56705 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56708 jne 0x10d5670b */
  if (!C.zf) goto L_10d5670b;
  /* 10d5670a int3  */
  x86_unimpl("int3 @ 0x10d5670a");
L_10d5670b:;
  /* 10d5670b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5670d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5670f jne 0x10d566d3 */
  if (!C.zf) goto L_10d566d3;
  /* 10d56711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56714 push eax */
  push32((uint32_t)(EAX));
  /* 10d56715 call 0x10d56760 */
  push32(0x10d5671au); f_10d56760();
  /* 10d5671a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5671d:;
  /* 10d5671d jmp 0x10d564f8 */
  goto L_10d564f8;
L_10d56722:;
  /* 10d56722 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d56724 call 0x10d58500 */
  push32(0x10d56729u); f_10d58500();
  /* 10d56729 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5672c:;
  /* 10d5672c push 0x10d7bab4 */
  push32((uint32_t)(0x10d7bab4u));
  /* 10d56731 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d56736 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56738 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5673a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5673c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5673e call 0x10d53b20 */
  push32(0x10d56743u); f_10d53b20();
  /* 10d56743 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56746 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56749 jne 0x10d5674c */
  if (!C.zf) goto L_10d5674c;
  /* 10d5674b int3  */
  x86_unimpl("int3 @ 0x10d5674b");
L_10d5674c:;
  /* 10d5674c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d5674e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56750 jne 0x10d5672c */
  if (!C.zf) goto L_10d5672c;
  /* 10d56752 pop edi */
  EDI = (pop32());
  /* 10d56753 pop esi */
  ESI = (pop32());
  /* 10d56754 pop ebx */
  EBX = (pop32());
  /* 10d56755 mov esp, ebp */
  ESP = (EBP);
  /* 10d56757 pop ebp */
  EBP = (pop32());
  /* 10d56758 ret  */
  ESPCHK(0x10d564a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006760 @ 0x10d56760 (276 bytes, 89 insns) */
void f_10d56760(void) {
  FTRACE(0x10d56760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56760 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56761 mov ebp, esp */
  EBP = (ESP);
  /* 10d56763 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56766 push ebx */
  push32((uint32_t)(EBX));
  /* 10d56767 push esi */
  push32((uint32_t)(ESI));
  /* 10d56768 push edi */
  push32((uint32_t)(EDI));
  /* 10d56769 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 10d56770 jmp 0x10d5677b */
  goto L_10d5677b;
L_10d56772:;
  /* 10d56772 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d56775 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56778 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_10d5677b:;
  /* 10d5677b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5677e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56782 jge 0x10d5678f */
  if ((C.sf==C.of)) goto L_10d5678f;
  /* 10d56784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56787 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10d5678a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 10d5678d jmp 0x10d56796 */
  goto L_10d56796;
L_10d5678f:;
  /* 10d5678f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_10d56796:;
  /* 10d56796 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d56799 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5679c jge 0x10d5683c */
  if ((C.sf==C.of)) goto L_10d5683c;
  /* 10d567a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d567a5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d567a8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 10d567ab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 10d567ae cmp dword ptr [0x10d7eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d7eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d567b5 jle 0x10d567d3 */
  if ((C.zf||C.sf!=C.of)) goto L_10d567d3;
  /* 10d567b7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 10d567bc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d567bf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d567c5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d567c6 call 0x10d5aa70 */
  push32(0x10d567cbu); f_10d5aa70();
  /* 10d567cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d567ce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 10d567d1 jmp 0x10d567f0 */
  goto L_10d567f0;
L_10d567d3:;
  /* 10d567d3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d567d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d567dc mov eax, dword ptr [0x10d7ec98] */
  EAX = (r32((uint32_t)(0x10d7ec98)));
  /* 10d567e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d567e3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 10d567e7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 10d567ed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_10d567f0:;
  /* 10d567f0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d567f4 je 0x10d56804 */
  if (C.zf) goto L_10d56804;
  /* 10d567f6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d567f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d567ff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 10d56802 jmp 0x10d5680b */
  goto L_10d5680b;
L_10d56804:;
  /* 10d56804 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_10d5680b:;
  /* 10d5680b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d5680e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 10d56811 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 10d56815 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 10d56818 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5681e push edx */
  push32((uint32_t)(EDX));
  /* 10d5681f push 0x10d7bba8 */
  push32((uint32_t)(0x10d7bba8u));
  /* 10d56824 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d56827 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5682a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 10d5682e push ecx */
  push32((uint32_t)(ECX));
  /* 10d5682f call 0x10d5a970 */
  push32(0x10d56834u); f_10d5a970();
  /* 10d56834 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56837 jmp 0x10d56772 */
  goto L_10d56772;
L_10d5683c:;
  /* 10d5683c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 10d5683f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_10d56844:;
  /* 10d56844 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d56847 push eax */
  push32((uint32_t)(EAX));
  /* 10d56848 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 10d5684b push ecx */
  push32((uint32_t)(ECX));
  /* 10d5684c push 0x10d7bb98 */
  push32((uint32_t)(0x10d7bb98u));
  /* 10d56851 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56853 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56855 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56857 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56859 call 0x10d53b20 */
  push32(0x10d5685eu); f_10d53b20();
  /* 10d5685e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56861 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56864 jne 0x10d56867 */
  if (!C.zf) goto L_10d56867;
  /* 10d56866 int3  */
  x86_unimpl("int3 @ 0x10d56866");
L_10d56867:;
  /* 10d56867 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56869 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5686b jne 0x10d56844 */
  if (!C.zf) goto L_10d56844;
  /* 10d5686d pop edi */
  EDI = (pop32());
  /* 10d5686e pop esi */
  ESI = (pop32());
  /* 10d5686f pop ebx */
  EBX = (pop32());
  /* 10d56870 mov esp, ebp */
  ESP = (EBP);
  /* 10d56872 pop ebp */
  EBP = (pop32());
  /* 10d56873 ret  */
  ESPCHK(0x10d56760u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x10d56880 (116 bytes, 46 insns) */
void f_10d56880(void) {
  FTRACE(0x10d56880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56880 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56881 mov ebp, esp */
  EBP = (ESP);
  /* 10d56883 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56886 push ebx */
  push32((uint32_t)(EBX));
  /* 10d56887 push esi */
  push32((uint32_t)(ESI));
  /* 10d56888 push edi */
  push32((uint32_t)(EDI));
  /* 10d56889 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 10d5688c push eax */
  push32((uint32_t)(EAX));
  /* 10d5688d call 0x10d56200 */
  push32(0x10d56892u); f_10d56200();
  /* 10d56892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56895 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56899 jne 0x10d568b4 */
  if (!C.zf) goto L_10d568b4;
  /* 10d5689b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5689f jne 0x10d568b4 */
  if (!C.zf) goto L_10d568b4;
  /* 10d568a1 mov ecx, dword ptr [0x10d7ea84] */
  ECX = (r32((uint32_t)(0x10d7ea84)));
  /* 10d568a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 10d568aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d568ac je 0x10d568eb */
  if (C.zf) goto L_10d568eb;
  /* 10d568ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d568b2 je 0x10d568eb */
  if (C.zf) goto L_10d568eb;
L_10d568b4:;
  /* 10d568b4 push 0x10d7bbb0 */
  push32((uint32_t)(0x10d7bbb0u));
  /* 10d568b9 push 0x10d7b57c */
  push32((uint32_t)(0x10d7b57cu));
  /* 10d568be push 0 */
  push32((uint32_t)(0x0u));
  /* 10d568c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d568c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d568c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d568c6 call 0x10d53b20 */
  push32(0x10d568cbu); f_10d53b20();
  /* 10d568cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d568ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d568d1 jne 0x10d568d4 */
  if (!C.zf) goto L_10d568d4;
  /* 10d568d3 int3  */
  x86_unimpl("int3 @ 0x10d568d3");
L_10d568d4:;
  /* 10d568d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d568d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d568d8 jne 0x10d568b4 */
  if (!C.zf) goto L_10d568b4;
  /* 10d568da push 0 */
  push32((uint32_t)(0x0u));
  /* 10d568dc call 0x10d564a0 */
  push32(0x10d568e1u); f_10d564a0();
  /* 10d568e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d568e4 mov eax, 1 */
  EAX = (0x1u);
  /* 10d568e9 jmp 0x10d568ed */
  goto L_10d568ed;
L_10d568eb:;
  /* 10d568eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d568ed:;
  /* 10d568ed pop edi */
  EDI = (pop32());
  /* 10d568ee pop esi */
  ESI = (pop32());
  /* 10d568ef pop ebx */
  EBX = (pop32());
  /* 10d568f0 mov esp, ebp */
  ESP = (EBP);
  /* 10d568f2 pop ebp */
  EBP = (pop32());
  /* 10d568f3 ret  */
  ESPCHK(0x10d56880u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x10d56900 (197 bytes, 79 insns) */
void f_10d56900(void) {
  FTRACE(0x10d56900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56900 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56901 mov ebp, esp */
  EBP = (ESP);
  /* 10d56903 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56904 push ebx */
  push32((uint32_t)(EBX));
  /* 10d56905 push esi */
  push32((uint32_t)(ESI));
  /* 10d56906 push edi */
  push32((uint32_t)(EDI));
  /* 10d56907 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5690b jne 0x10d56912 */
  if (!C.zf) goto L_10d56912;
  /* 10d5690d jmp 0x10d569be */
  goto L_10d569be;
L_10d56912:;
  /* 10d56912 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d56919 jmp 0x10d56924 */
  goto L_10d56924;
L_10d5691b:;
  /* 10d5691b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5691e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56921 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d56924:;
  /* 10d56924 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56928 jge 0x10d5696e */
  if ((C.sf==C.of)) goto L_10d5696e;
L_10d5692a:;
  /* 10d5692a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5692d mov edx, dword ptr [ecx*4 + 0x10d7ea94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7ea94)));
  /* 10d56934 push edx */
  push32((uint32_t)(EDX));
  /* 10d56935 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56938 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5693b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 10d5693f push edx */
  push32((uint32_t)(EDX));
  /* 10d56940 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56946 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 10d5694a push edx */
  push32((uint32_t)(EDX));
  /* 10d5694b push 0x10d7bc0c */
  push32((uint32_t)(0x10d7bc0cu));
  /* 10d56950 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56952 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56956 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56958 call 0x10d53b20 */
  push32(0x10d5695du); f_10d53b20();
  /* 10d5695d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56960 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56963 jne 0x10d56966 */
  if (!C.zf) goto L_10d56966;
  /* 10d56965 int3  */
  x86_unimpl("int3 @ 0x10d56965");
L_10d56966:;
  /* 10d56966 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56968 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5696a jne 0x10d5692a */
  if (!C.zf) goto L_10d5692a;
  /* 10d5696c jmp 0x10d5691b */
  goto L_10d5691b;
L_10d5696e:;
  /* 10d5696e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56971 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 10d56974 push edx */
  push32((uint32_t)(EDX));
  /* 10d56975 push 0x10d7bbe8 */
  push32((uint32_t)(0x10d7bbe8u));
  /* 10d5697a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5697c push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5697e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56980 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56982 call 0x10d53b20 */
  push32(0x10d56987u); f_10d53b20();
  /* 10d56987 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5698a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5698d jne 0x10d56990 */
  if (!C.zf) goto L_10d56990;
  /* 10d5698f int3  */
  x86_unimpl("int3 @ 0x10d5698f");
L_10d56990:;
  /* 10d56990 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56994 jne 0x10d5696e */
  if (!C.zf) goto L_10d5696e;
L_10d56996:;
  /* 10d56996 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56999 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 10d5699c push edx */
  push32((uint32_t)(EDX));
  /* 10d5699d push 0x10d7bbc8 */
  push32((uint32_t)(0x10d7bbc8u));
  /* 10d569a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d569a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d569a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d569a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d569aa call 0x10d53b20 */
  push32(0x10d569afu); f_10d53b20();
  /* 10d569af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d569b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d569b5 jne 0x10d569b8 */
  if (!C.zf) goto L_10d569b8;
  /* 10d569b7 int3  */
  x86_unimpl("int3 @ 0x10d569b7");
L_10d569b8:;
  /* 10d569b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d569ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d569bc jne 0x10d56996 */
  if (!C.zf) goto L_10d56996;
L_10d569be:;
  /* 10d569be pop edi */
  EDI = (pop32());
  /* 10d569bf pop esi */
  ESI = (pop32());
  /* 10d569c0 pop ebx */
  EBX = (pop32());
  /* 10d569c1 mov esp, ebp */
  ESP = (EBP);
  /* 10d569c3 pop ebp */
  EBP = (pop32());
  /* 10d569c4 ret  */
  ESPCHK(0x10d56900u, _esp0);
  ESP += 4; return;
}

/* FUN_100069d0 @ 0x10d569d0 (329 bytes, 102 insns) */
void f_10d569d0(void) {
  FTRACE(0x10d569d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d569d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d569d1 mov ebp, esp */
  EBP = (ESP);
  /* 10d569d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d569d6 cmp dword ptr [0x10d82030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d569dd jne 0x10d569e4 */
  if (!C.zf) goto L_10d569e4;
  /* 10d569df call 0x10d5b310 */
  push32(0x10d569e4u); f_10d5b310();
L_10d569e4:;
  /* 10d569e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d569eb mov eax, dword ptr [0x10d804ec] */
  EAX = (r32((uint32_t)(0x10d804ec)));
  /* 10d569f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d569f3:;
  /* 10d569f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d569f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d569f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d569fb je 0x10d56a29 */
  if (C.zf) goto L_10d56a29;
  /* 10d569fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a00 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56a03 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56a06 je 0x10d56a11 */
  if (C.zf) goto L_10d56a11;
  /* 10d56a08 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56a0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a0e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d56a11:;
  /* 10d56a11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a14 push eax */
  push32((uint32_t)(EAX));
  /* 10d56a15 call 0x10d57890 */
  push32(0x10d56a1au); f_10d57890();
  /* 10d56a1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a20 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10d56a24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d56a27 jmp 0x10d569f3 */
  goto L_10d569f3;
L_10d56a29:;
  /* 10d56a29 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 10d56a2b push 0x10d7bc2c */
  push32((uint32_t)(0x10d7bc2cu));
  /* 10d56a30 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d56a32 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56a35 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 10d56a3c push ecx */
  push32((uint32_t)(ECX));
  /* 10d56a3d call 0x10d54a60 */
  push32(0x10d56a42u); f_10d54a60();
  /* 10d56a42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d56a48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56a4b mov dword ptr [0x10d80520], edx */
  w32((uint32_t)(0x10d80520), (EDX));
  /* 10d56a51 cmp dword ptr [0x10d80520], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80520))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56a58 jne 0x10d56a64 */
  if (!C.zf) goto L_10d56a64;
  /* 10d56a5a push 9 */
  push32((uint32_t)(0x9u));
  /* 10d56a5c call 0x10d539d0 */
  push32(0x10d56a61u); f_10d539d0();
  /* 10d56a61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56a64:;
  /* 10d56a64 mov eax, dword ptr [0x10d804ec] */
  EAX = (r32((uint32_t)(0x10d804ec)));
  /* 10d56a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d56a6c jmp 0x10d56a77 */
  goto L_10d56a77;
L_10d56a6e:;
  /* 10d56a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a71 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d56a77:;
  /* 10d56a77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a7a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56a7f je 0x10d56ae7 */
  if (C.zf) goto L_10d56ae7;
  /* 10d56a81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a84 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56a85 call 0x10d57890 */
  push32(0x10d56a8au); f_10d57890();
  /* 10d56a8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56a90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d56a93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56a96 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56a99 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56a9c je 0x10d56ae5 */
  if (C.zf) goto L_10d56ae5;
  /* 10d56a9e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 10d56aa0 push 0x10d7bc2c */
  push32((uint32_t)(0x10d7bc2cu));
  /* 10d56aa5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d56aa7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56aaa push ecx */
  push32((uint32_t)(ECX));
  /* 10d56aab call 0x10d54a60 */
  push32(0x10d56ab0u); f_10d54a60();
  /* 10d56ab0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ab3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56ab6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d56ab8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56abb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56abe jne 0x10d56aca */
  if (!C.zf) goto L_10d56aca;
  /* 10d56ac0 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d56ac2 call 0x10d539d0 */
  push32(0x10d56ac7u); f_10d539d0();
  /* 10d56ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56aca:;
  /* 10d56aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56acd push ecx */
  push32((uint32_t)(ECX));
  /* 10d56ace mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56ad1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d56ad3 push eax */
  push32((uint32_t)(EAX));
  /* 10d56ad4 call 0x10d57a10 */
  push32(0x10d56ad9u); f_10d57a10();
  /* 10d56ad9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56adc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56adf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ae2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10d56ae5:;
  /* 10d56ae5 jmp 0x10d56a6e */
  goto L_10d56a6e;
L_10d56ae7:;
  /* 10d56ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d56ae9 mov edx, dword ptr [0x10d804ec] */
  EDX = (r32((uint32_t)(0x10d804ec)));
  /* 10d56aef push edx */
  push32((uint32_t)(EDX));
  /* 10d56af0 call 0x10d554f0 */
  push32(0x10d56af5u); f_10d554f0();
  /* 10d56af5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56af8 mov dword ptr [0x10d804ec], 0 */
  w32((uint32_t)(0x10d804ec), (0x0u));
  /* 10d56b02 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56b05 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d56b0b mov dword ptr [0x10d82020], 1 */
  w32((uint32_t)(0x10d82020), (0x1u));
  /* 10d56b15 mov esp, ebp */
  ESP = (EBP);
  /* 10d56b17 pop ebp */
  EBP = (pop32());
  /* 10d56b18 ret  */
  ESPCHK(0x10d569d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x10d56b20 (216 bytes, 69 insns) */
void f_10d56b20(void) {
  FTRACE(0x10d56b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56b21 mov ebp, esp */
  EBP = (ESP);
  /* 10d56b23 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56b26 cmp dword ptr [0x10d82030], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d82030))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56b2d jne 0x10d56b34 */
  if (!C.zf) goto L_10d56b34;
  /* 10d56b2f call 0x10d5b310 */
  push32(0x10d56b34u); f_10d5b310();
L_10d56b34:;
  /* 10d56b34 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d56b39 push 0x10d8055c */
  push32((uint32_t)(0x10d8055cu));
  /* 10d56b3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56b40 call dword ptr [0x10d83310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83310))), 0x10d56b46u);
  /* 10d56b46 mov dword ptr [0x10d80530], 0x10d8055c */
  w32((uint32_t)(0x10d80530), (0x10d8055cu));
  /* 10d56b50 mov eax, dword ptr [0x10d8204c] */
  EAX = (r32((uint32_t)(0x10d8204c)));
  /* 10d56b55 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56b58 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56b5a jne 0x10d56b67 */
  if (!C.zf) goto L_10d56b67;
  /* 10d56b5c mov edx, dword ptr [0x10d80530] */
  EDX = (r32((uint32_t)(0x10d80530)));
  /* 10d56b62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10d56b65 jmp 0x10d56b6f */
  goto L_10d56b6f;
L_10d56b67:;
  /* 10d56b67 mov eax, dword ptr [0x10d8204c] */
  EAX = (r32((uint32_t)(0x10d8204c)));
  /* 10d56b6c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10d56b6f:;
  /* 10d56b6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d56b72 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d56b75 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d56b78 push edx */
  push32((uint32_t)(EDX));
  /* 10d56b79 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d56b7c push eax */
  push32((uint32_t)(EAX));
  /* 10d56b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d56b81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56b84 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56b85 call 0x10d56c00 */
  push32(0x10d56b8au); f_10d56c00();
  /* 10d56b8a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56b8d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 10d56b92 push 0x10d7bc38 */
  push32((uint32_t)(0x10d7bc38u));
  /* 10d56b97 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d56b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56b9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56b9f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 10d56ba2 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56ba3 call 0x10d54a60 */
  push32(0x10d56ba8u); f_10d54a60();
  /* 10d56ba8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56bab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d56bae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56bb2 jne 0x10d56bbe */
  if (!C.zf) goto L_10d56bbe;
  /* 10d56bb4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d56bb6 call 0x10d539d0 */
  push32(0x10d56bbbu); f_10d539d0();
  /* 10d56bbb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d56bbe:;
  /* 10d56bbe lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 10d56bc1 push edx */
  push32((uint32_t)(EDX));
  /* 10d56bc2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10d56bc5 push eax */
  push32((uint32_t)(EAX));
  /* 10d56bc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56bc9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56bcc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 10d56bcf push eax */
  push32((uint32_t)(EAX));
  /* 10d56bd0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d56bd4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56bd7 push edx */
  push32((uint32_t)(EDX));
  /* 10d56bd8 call 0x10d56c00 */
  push32(0x10d56bddu); f_10d56c00();
  /* 10d56bdd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56be0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56be3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56be6 mov dword ptr [0x10d80514], eax */
  w32((uint32_t)(0x10d80514), (EAX));
  /* 10d56beb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d56bee mov dword ptr [0x10d80518], ecx */
  w32((uint32_t)(0x10d80518), (ECX));
  /* 10d56bf4 mov esp, ebp */
  ESP = (EBP);
  /* 10d56bf6 pop ebp */
  EBP = (pop32());
  /* 10d56bf7 ret  */
  ESPCHK(0x10d56b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c00 @ 0x10d56c00 (1060 bytes, 360 insns) */
void f_10d56c00(void) {
  FTRACE(0x10d56c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d56c00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d56c01 mov ebp, esp */
  EBP = (ESP);
  /* 10d56c03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56c06 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56c09 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d56c0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d56c12 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 10d56c18 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d56c1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d56c1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56c22 je 0x10d56c35 */
  if (C.zf) goto L_10d56c35;
  /* 10d56c24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56c27 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56c2a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d56c2c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56c2f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56c32 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_10d56c35:;
  /* 10d56c35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c38 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56c3b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56c3e jne 0x10d56d0d */
  if (!C.zf) goto L_10d56d0d;
L_10d56c44:;
  /* 10d56c44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c47 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56c4a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d56c4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c50 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56c53 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56c56 je 0x10d56cd2 */
  if (C.zf) goto L_10d56cd2;
  /* 10d56c58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c5b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56c5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56c60 je 0x10d56cd2 */
  if (C.zf) goto L_10d56cd2;
  /* 10d56c62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c65 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56c67 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d56c69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56c6b mov al, byte ptr [edx + 0x10d81d81] */
  AL = (r8((uint32_t)(EDX + 0x10d81d81)));
  /* 10d56c71 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10d56c74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56c76 je 0x10d56ca7 */
  if (C.zf) goto L_10d56ca7;
  /* 10d56c78 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56c7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d56c7d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56c80 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56c83 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d56c85 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56c89 je 0x10d56ca7 */
  if (C.zf) goto L_10d56ca7;
  /* 10d56c8b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56c8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56c91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d56c93 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d56c95 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56c98 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56c9b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d56c9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56ca1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ca4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d56ca7:;
  /* 10d56ca7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56caa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56cac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56caf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56cb2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d56cb4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56cb8 je 0x10d56ccd */
  if (C.zf) goto L_10d56ccd;
  /* 10d56cba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56cbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56cc0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d56cc2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d56cc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56cc7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56cca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d56ccd:;
  /* 10d56ccd jmp 0x10d56c44 */
  goto L_10d56c44;
L_10d56cd2:;
  /* 10d56cd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56cd5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d56cd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56cda mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56cdd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10d56cdf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56ce3 je 0x10d56cf4 */
  if (C.zf) goto L_10d56cf4;
  /* 10d56ce5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56ce8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d56ceb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56cee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56cf1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d56cf4:;
  /* 10d56cf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56cf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56cfa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56cfd jne 0x10d56d08 */
  if (!C.zf) goto L_10d56d08;
  /* 10d56cff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d56d08:;
  /* 10d56d08 jmp 0x10d56ddc */
  goto L_10d56ddc;
L_10d56d0d:;
  /* 10d56d0d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56d10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56d12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d15 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56d18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d56d1a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56d1e je 0x10d56d33 */
  if (C.zf) goto L_10d56d33;
  /* 10d56d20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d56d28 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d56d2a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56d2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d30 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d56d33:;
  /* 10d56d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d56d38 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 10d56d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d56d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56d47 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d56d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56d4f mov dl, byte ptr [ecx + 0x10d81d81] */
  DL = (r8((uint32_t)(ECX + 0x10d81d81)));
  /* 10d56d55 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10d56d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d56d5a je 0x10d56d8b */
  if (C.zf) goto L_10d56d8b;
  /* 10d56d5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56d5f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56d61 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d64 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56d67 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d56d69 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56d6d je 0x10d56d82 */
  if (C.zf) goto L_10d56d82;
  /* 10d56d6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d56d77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d56d79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56d7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d7f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10d56d82:;
  /* 10d56d82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56d85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56d88 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d56d8b:;
  /* 10d56d8b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56d8e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d56d94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56d97 je 0x10d56db7 */
  if (C.zf) goto L_10d56db7;
  /* 10d56d99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56d9c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d56da1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56da3 je 0x10d56db7 */
  if (C.zf) goto L_10d56db7;
  /* 10d56da5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56da8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d56dae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56db1 jne 0x10d56d0d */
  if (!C.zf) goto L_10d56d0d;
L_10d56db7:;
  /* 10d56db7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d56dba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d56dc0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d56dc2 jne 0x10d56dcf */
  if (!C.zf) goto L_10d56dcf;
  /* 10d56dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56dc7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56dca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d56dcd jmp 0x10d56ddc */
  goto L_10d56ddc;
L_10d56dcf:;
  /* 10d56dcf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56dd3 je 0x10d56ddc */
  if (C.zf) goto L_10d56ddc;
  /* 10d56dd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56dd8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_10d56ddc:;
  /* 10d56ddc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_10d56de3:;
  /* 10d56de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56de6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56de9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56deb je 0x10d56e0e */
  if (C.zf) goto L_10d56e0e;
L_10d56ded:;
  /* 10d56ded mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56df0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d56df3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56df6 je 0x10d56e03 */
  if (C.zf) goto L_10d56e03;
  /* 10d56df8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56dfb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56dfe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e01 jne 0x10d56e0e */
  if (!C.zf) goto L_10d56e0e;
L_10d56e03:;
  /* 10d56e03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56e09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d56e0c jmp 0x10d56ded */
  goto L_10d56ded;
L_10d56e0e:;
  /* 10d56e0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56e14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56e16 jne 0x10d56e1d */
  if (!C.zf) goto L_10d56e1d;
  /* 10d56e18 jmp 0x10d56ffb */
  goto L_10d56ffb;
L_10d56e1d:;
  /* 10d56e1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e21 je 0x10d56e34 */
  if (C.zf) goto L_10d56e34;
  /* 10d56e23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56e26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56e29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10d56e2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d56e2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56e31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d56e34:;
  /* 10d56e34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d56e37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d56e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56e3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d56e3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10d56e41:;
  /* 10d56e41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 10d56e48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_10d56e4f:;
  /* 10d56e4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56e55 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e58 jne 0x10d56e6e */
  if (!C.zf) goto L_10d56e6e;
  /* 10d56e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56e60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d56e63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56e66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56e69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d56e6c jmp 0x10d56e4f */
  goto L_10d56e4f;
L_10d56e6e:;
  /* 10d56e6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56e74 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e77 jne 0x10d56eca */
  if (!C.zf) goto L_10d56eca;
  /* 10d56e79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56e7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56e7e mov ecx, 2 */
  ECX = (0x2u);
  /* 10d56e83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d56e85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d56e87 jne 0x10d56ec2 */
  if (!C.zf) goto L_10d56ec2;
  /* 10d56e89 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e8d je 0x10d56eaf */
  if (C.zf) goto L_10d56eaf;
  /* 10d56e8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e92 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10d56e96 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56e99 jne 0x10d56ea6 */
  if (!C.zf) goto L_10d56ea6;
  /* 10d56e9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56e9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ea1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d56ea4 jmp 0x10d56ead */
  goto L_10d56ead;
L_10d56ea6:;
  /* 10d56ea6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d56ead:;
  /* 10d56ead jmp 0x10d56eb6 */
  goto L_10d56eb6;
L_10d56eaf:;
  /* 10d56eaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10d56eb6:;
  /* 10d56eb6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d56eb8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56ebc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 10d56ebf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d56ec2:;
  /* 10d56ec2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56ec5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10d56ec7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10d56eca:;
  /* 10d56eca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56ecd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d56ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d56ed3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10d56ed6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56ed8 je 0x10d56efe */
  if (C.zf) goto L_10d56efe;
  /* 10d56eda cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56ede je 0x10d56eef */
  if (C.zf) goto L_10d56eef;
  /* 10d56ee0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56ee3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 10d56ee6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56ee9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56eec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_10d56eef:;
  /* 10d56eef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56ef2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d56ef4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ef7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56efa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d56efc jmp 0x10d56eca */
  goto L_10d56eca;
L_10d56efe:;
  /* 10d56efe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10d56f04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d56f06 je 0x10d56f24 */
  if (C.zf) goto L_10d56f24;
  /* 10d56f08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56f0c jne 0x10d56f29 */
  if (!C.zf) goto L_10d56f29;
  /* 10d56f0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f11 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d56f14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56f17 je 0x10d56f24 */
  if (C.zf) goto L_10d56f24;
  /* 10d56f19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10d56f1f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56f22 jne 0x10d56f29 */
  if (!C.zf) goto L_10d56f29;
L_10d56f24:;
  /* 10d56f24 jmp 0x10d56fd4 */
  goto L_10d56fd4;
L_10d56f29:;
  /* 10d56f29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56f2d je 0x10d56fc6 */
  if (C.zf) goto L_10d56fc6;
  /* 10d56f33 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56f37 je 0x10d56f8d */
  if (C.zf) goto L_10d56f8d;
  /* 10d56f39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56f3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d56f40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d56f42 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d56f48 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d56f4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56f4d je 0x10d56f78 */
  if (C.zf) goto L_10d56f78;
  /* 10d56f4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56f52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f55 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10d56f57 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10d56f59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56f5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56f5f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 10d56f62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56f68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d56f6b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56f6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d56f70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56f73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56f76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10d56f78:;
  /* 10d56f78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56f7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d56f80 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10d56f82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56f85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56f88 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10d56f8b jmp 0x10d56fb9 */
  goto L_10d56fb9;
L_10d56f8d:;
  /* 10d56f8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56f90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d56f92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10d56f94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d56f96 mov cl, byte ptr [eax + 0x10d81d81] */
  CL = (r8((uint32_t)(EAX + 0x10d81d81)));
  /* 10d56f9c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10d56f9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d56fa1 je 0x10d56fb9 */
  if (C.zf) goto L_10d56fb9;
  /* 10d56fa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56fa6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56fa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d56fac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56faf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56fb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56fb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56fb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d56fb9:;
  /* 10d56fb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56fbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56fbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56fc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56fc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10d56fc6:;
  /* 10d56fc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d56fc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56fcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d56fcf jmp 0x10d56e41 */
  goto L_10d56e41;
L_10d56fd4:;
  /* 10d56fd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56fd8 je 0x10d56fe9 */
  if (C.zf) goto L_10d56fe9;
  /* 10d56fda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56fdd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d56fe0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d56fe3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56fe6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_10d56fe9:;
  /* 10d56fe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56fec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d56fee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d56ff1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10d56ff4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d56ff6 jmp 0x10d56de3 */
  goto L_10d56de3;
L_10d56ffb:;
  /* 10d56ffb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d56fff je 0x10d57013 */
  if (C.zf) goto L_10d57013;
  /* 10d57001 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57004 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10d5700a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5700d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57010 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d57013:;
  /* 10d57013 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d57016 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d57018 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5701b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5701e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d57020 mov esp, ebp */
  ESP = (EBP);
  /* 10d57022 pop ebp */
  EBP = (pop32());
  /* 10d57023 ret  */
  ESPCHK(0x10d56c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007030 @ 0x10d57030 (537 bytes, 173 insns) */
void f_10d57030(void) {
  FTRACE(0x10d57030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57030 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57031 mov ebp, esp */
  EBP = (ESP);
  /* 10d57033 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57036 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 10d5703d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 10d57044 cmp dword ptr [0x10d80660], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80660))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5704b jne 0x10d5708a */
  if (!C.zf) goto L_10d5708a;
  /* 10d5704d call dword ptr [0x10d8336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8336c))), 0x10d57053u);
  /* 10d57053 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d57056 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5705a je 0x10d57068 */
  if (C.zf) goto L_10d57068;
  /* 10d5705c mov dword ptr [0x10d80660], 1 */
  w32((uint32_t)(0x10d80660), (0x1u));
  /* 10d57066 jmp 0x10d5708a */
  goto L_10d5708a;
L_10d57068:;
  /* 10d57068 call dword ptr [0x10d83368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83368))), 0x10d5706eu);
  /* 10d5706e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d57071 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57075 je 0x10d57083 */
  if (C.zf) goto L_10d57083;
  /* 10d57077 mov dword ptr [0x10d80660], 2 */
  w32((uint32_t)(0x10d80660), (0x2u));
  /* 10d57081 jmp 0x10d5708a */
  goto L_10d5708a;
L_10d57083:;
  /* 10d57083 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57085 jmp 0x10d57245 */
  goto L_10d57245;
L_10d5708a:;
  /* 10d5708a cmp dword ptr [0x10d80660], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d80660))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57091 jne 0x10d5718e */
  if (!C.zf) goto L_10d5718e;
  /* 10d57097 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5709b jne 0x10d570b3 */
  if (!C.zf) goto L_10d570b3;
  /* 10d5709d call dword ptr [0x10d8336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8336c))), 0x10d570a3u);
  /* 10d570a3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d570a6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d570aa jne 0x10d570b3 */
  if (!C.zf) goto L_10d570b3;
  /* 10d570ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d570ae jmp 0x10d57245 */
  goto L_10d57245;
L_10d570b3:;
  /* 10d570b3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d570b6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d570b9:;
  /* 10d570b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d570bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d570be mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d570c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d570c3 je 0x10d570e5 */
  if (C.zf) goto L_10d570e5;
  /* 10d570c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d570c8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d570cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d570ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d570d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d570d3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 10d570d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d570d8 jne 0x10d570e3 */
  if (!C.zf) goto L_10d570e3;
  /* 10d570da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d570dd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d570e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d570e3:;
  /* 10d570e3 jmp 0x10d570b9 */
  goto L_10d570b9;
L_10d570e5:;
  /* 10d570e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d570e8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d570eb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10d570ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d570f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d570f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d570f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d570f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d570f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d570fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d570fe push edx */
  push32((uint32_t)(EDX));
  /* 10d570ff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d57102 push eax */
  push32((uint32_t)(EAX));
  /* 10d57103 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57105 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57107 call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d5710du);
  /* 10d5710d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d57110 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57114 je 0x10d57134 */
  if (C.zf) goto L_10d57134;
  /* 10d57116 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10d57118 push 0x10d7bc44 */
  push32((uint32_t)(0x10d7bc44u));
  /* 10d5711d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5711f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d57122 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57123 call 0x10d54a60 */
  push32(0x10d57128u); f_10d54a60();
  /* 10d57128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5712b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d5712e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57132 jne 0x10d57145 */
  if (!C.zf) goto L_10d57145;
L_10d57134:;
  /* 10d57134 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d57137 push edx */
  push32((uint32_t)(EDX));
  /* 10d57138 call dword ptr [0x10d83360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83360))), 0x10d5713eu);
  /* 10d5713e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57140 jmp 0x10d57245 */
  goto L_10d57245;
L_10d57145:;
  /* 10d57145 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57147 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57149 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5714c push eax */
  push32((uint32_t)(EAX));
  /* 10d5714d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57150 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57154 push edx */
  push32((uint32_t)(EDX));
  /* 10d57155 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d57158 push eax */
  push32((uint32_t)(EAX));
  /* 10d57159 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5715b push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5715d call dword ptr [0x10d83364] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83364))), 0x10d57163u);
  /* 10d57163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d57165 jne 0x10d5717c */
  if (!C.zf) goto L_10d5717c;
  /* 10d57167 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d57169 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d5716c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5716d call 0x10d554f0 */
  push32(0x10d57172u); f_10d554f0();
  /* 10d57172 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57175 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_10d5717c:;
  /* 10d5717c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d5717f push edx */
  push32((uint32_t)(EDX));
  /* 10d57180 call dword ptr [0x10d83360] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83360))), 0x10d57186u);
  /* 10d57186 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57189 jmp 0x10d57245 */
  goto L_10d57245;
L_10d5718e:;
  /* 10d5718e cmp dword ptr [0x10d80660], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10d80660))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57195 jne 0x10d57243 */
  if (!C.zf) goto L_10d57243;
  /* 10d5719b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5719f jne 0x10d571b7 */
  if (!C.zf) goto L_10d571b7;
  /* 10d571a1 call dword ptr [0x10d83368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83368))), 0x10d571a7u);
  /* 10d571a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d571aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d571ae jne 0x10d571b7 */
  if (!C.zf) goto L_10d571b7;
  /* 10d571b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d571b2 jmp 0x10d57245 */
  goto L_10d57245;
L_10d571b7:;
  /* 10d571b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d571ba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d571bd:;
  /* 10d571bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d571c0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d571c3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d571c5 je 0x10d571e5 */
  if (C.zf) goto L_10d571e5;
  /* 10d571c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d571ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d571cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d571d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d571d3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10d571d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d571d8 jne 0x10d571e3 */
  if (!C.zf) goto L_10d571e3;
  /* 10d571da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d571dd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d571e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10d571e3:;
  /* 10d571e3 jmp 0x10d571bd */
  goto L_10d571bd;
L_10d571e5:;
  /* 10d571e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d571e8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d571eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d571ee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d571f1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 10d571f6 push 0x10d7bc44 */
  push32((uint32_t)(0x10d7bc44u));
  /* 10d571fb push 2 */
  push32((uint32_t)(0x2u));
  /* 10d571fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d57200 push edx */
  push32((uint32_t)(EDX));
  /* 10d57201 call 0x10d54a60 */
  push32(0x10d57206u); f_10d54a60();
  /* 10d57206 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57209 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d5720c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57210 jne 0x10d57220 */
  if (!C.zf) goto L_10d57220;
  /* 10d57212 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57215 push eax */
  push32((uint32_t)(EAX));
  /* 10d57216 call dword ptr [0x10d8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8335c))), 0x10d5721cu);
  /* 10d5721c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5721e jmp 0x10d57245 */
  goto L_10d57245;
L_10d57220:;
  /* 10d57220 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d57223 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57224 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57227 push edx */
  push32((uint32_t)(EDX));
  /* 10d57228 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5722b push eax */
  push32((uint32_t)(EAX));
  /* 10d5722c call 0x10d5b340 */
  push32(0x10d57231u); f_10d5b340();
  /* 10d57231 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57234 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57237 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57238 call dword ptr [0x10d8335c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8335c))), 0x10d5723eu);
  /* 10d5723e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57241 jmp 0x10d57245 */
  goto L_10d57245;
L_10d57243:;
  /* 10d57243 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d57245:;
  /* 10d57245 mov esp, ebp */
  ESP = (EBP);
  /* 10d57247 pop ebp */
  EBP = (pop32());
  /* 10d57248 ret  */
  ESPCHK(0x10d57030u, _esp0);
  ESP += 4; return;
}

/* FUN_10007250 @ 0x10d57250 (77 bytes, 25 insns) */
void f_10d57250(void) {
  FTRACE(0x10d57250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57250 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57251 mov ebp, esp */
  EBP = (ESP);
  /* 10d57253 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57255 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 10d5725a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5725c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57260 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 10d57263 push eax */
  push32((uint32_t)(EAX));
  /* 10d57264 call dword ptr [0x10d83374] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83374))), 0x10d5726au);
  /* 10d5726a mov dword ptr [0x10d81eac], eax */
  w32((uint32_t)(0x10d81eac), (EAX));
  /* 10d5726f cmp dword ptr [0x10d81eac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d81eac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57276 jne 0x10d5727c */
  if (!C.zf) goto L_10d5727c;
  /* 10d57278 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5727a jmp 0x10d5729b */
  goto L_10d5729b;
L_10d5727c:;
  /* 10d5727c call 0x10d58d00 */
  push32(0x10d57281u); f_10d58d00();
  /* 10d57281 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d57283 jne 0x10d57296 */
  if (!C.zf) goto L_10d57296;
  /* 10d57285 mov ecx, dword ptr [0x10d81eac] */
  ECX = (r32((uint32_t)(0x10d81eac)));
  /* 10d5728b push ecx */
  push32((uint32_t)(ECX));
  /* 10d5728c call dword ptr [0x10d83370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83370))), 0x10d57292u);
  /* 10d57292 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57294 jmp 0x10d5729b */
  goto L_10d5729b;
L_10d57296:;
  /* 10d57296 mov eax, 1 */
  EAX = (0x1u);
L_10d5729b:;
  /* 10d5729b pop ebp */
  EBP = (pop32());
  /* 10d5729c ret  */
  ESPCHK(0x10d57250u, _esp0);
  ESP += 4; return;
}

/* FUN_100072a0 @ 0x10d572a0 (156 bytes, 48 insns) */
void f_10d572a0(void) {
  FTRACE(0x10d572a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d572a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d572a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d572a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d572a6 mov eax, dword ptr [0x10d81ea8] */
  EAX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d572ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d572ae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d572b5 jmp 0x10d572c0 */
  goto L_10d572c0;
L_10d572b7:;
  /* 10d572b7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d572ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d572bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d572c0:;
  /* 10d572c0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d572c3 cmp edx, dword ptr [0x10d81ea4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d81ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d572c9 jge 0x10d57316 */
  if ((C.sf==C.of)) goto L_10d57316;
  /* 10d572cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10d572d0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 10d572d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d572d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10d572db push ecx */
  push32((uint32_t)(ECX));
  /* 10d572dc call dword ptr [0x10d8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8337c))), 0x10d572e2u);
  /* 10d572e2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10d572e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d572e9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d572ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10d572ef push eax */
  push32((uint32_t)(EAX));
  /* 10d572f0 call dword ptr [0x10d8337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8337c))), 0x10d572f6u);
  /* 10d572f6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d572f9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10d572fc push edx */
  push32((uint32_t)(EDX));
  /* 10d572fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10d572ff mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d57304 push eax */
  push32((uint32_t)(EAX));
  /* 10d57305 call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d5730bu);
  /* 10d5730b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5730e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57311 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d57314 jmp 0x10d572b7 */
  goto L_10d572b7;
L_10d57316:;
  /* 10d57316 mov edx, dword ptr [0x10d81ea8] */
  EDX = (r32((uint32_t)(0x10d81ea8)));
  /* 10d5731c push edx */
  push32((uint32_t)(EDX));
  /* 10d5731d push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5731f mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d57324 push eax */
  push32((uint32_t)(EAX));
  /* 10d57325 call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d5732bu);
  /* 10d5732b mov ecx, dword ptr [0x10d81eac] */
  ECX = (r32((uint32_t)(0x10d81eac)));
  /* 10d57331 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57332 call dword ptr [0x10d83370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83370))), 0x10d57338u);
  /* 10d57338 mov esp, ebp */
  ESP = (EBP);
  /* 10d5733a pop ebp */
  EBP = (pop32());
  /* 10d5733b ret  */
  ESPCHK(0x10d572a0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x10d57340 (73 bytes, 19 insns) */
void f_10d57340(void) {
  FTRACE(0x10d57340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57340 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57341 mov ebp, esp */
  EBP = (ESP);
  /* 10d57343 cmp dword ptr [0x10d804f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5734a je 0x10d5735e */
  if (C.zf) goto L_10d5735e;
  /* 10d5734c cmp dword ptr [0x10d804f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57353 jne 0x10d57387 */
  if (!C.zf) goto L_10d57387;
  /* 10d57355 cmp dword ptr [0x10d804f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5735c jne 0x10d57387 */
  if (!C.zf) goto L_10d57387;
L_10d5735e:;
  /* 10d5735e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 10d57363 call 0x10d57390 */
  push32(0x10d57368u); f_10d57390();
  /* 10d57368 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5736b cmp dword ptr [0x10d80664], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80664))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57372 je 0x10d5737a */
  if (C.zf) goto L_10d5737a;
  /* 10d57374 call dword ptr [0x10d80664] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d80664))), 0x10d5737au);
L_10d5737a:;
  /* 10d5737a push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d5737f call 0x10d57390 */
  push32(0x10d57384u); f_10d57390();
  /* 10d57384 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57387:;
  /* 10d57387 pop ebp */
  EBP = (pop32());
  /* 10d57388 ret  */
  ESPCHK(0x10d57340u, _esp0);
  ESP += 4; return;
}

/* FUN_10007390 @ 0x10d57390 (447 bytes, 131 insns) */
void f_10d57390(void) {
  FTRACE(0x10d57390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57390 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57391 mov ebp, esp */
  EBP = (ESP);
  /* 10d57393 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57399 push ebx */
  push32((uint32_t)(EBX));
  /* 10d5739a push esi */
  push32((uint32_t)(ESI));
  /* 10d5739b push edi */
  push32((uint32_t)(EDI));
  /* 10d5739c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d573a3 jmp 0x10d573ae */
  goto L_10d573ae;
L_10d573a5:;
  /* 10d573a5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d573a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d573ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d573ae:;
  /* 10d573ae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d573b2 jae 0x10d573c7 */
  if (!C.cf) goto L_10d573c7;
  /* 10d573b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d573b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d573ba cmp edx, dword ptr [ecx*8 + 0x10d7eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10d7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d573c1 jne 0x10d573c5 */
  if (!C.zf) goto L_10d573c5;
  /* 10d573c3 jmp 0x10d573c7 */
  goto L_10d573c7;
L_10d573c5:;
  /* 10d573c5 jmp 0x10d573a5 */
  goto L_10d573a5;
L_10d573c7:;
  /* 10d573c7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d573ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d573cd cmp ecx, dword ptr [eax*8 + 0x10d7eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d573d4 jne 0x10d57548 */
  if (!C.zf) goto L_10d57548;
  /* 10d573da cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d573e1 je 0x10d57404 */
  if (C.zf) goto L_10d57404;
  /* 10d573e3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d573e6 mov eax, dword ptr [edx*8 + 0x10d7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d7eab4)));
  /* 10d573ed push eax */
  push32((uint32_t)(EAX));
  /* 10d573ee push 0 */
  push32((uint32_t)(0x0u));
  /* 10d573f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d573f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d573f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d573f6 call 0x10d53b20 */
  push32(0x10d573fbu); f_10d53b20();
  /* 10d573fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d573fe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57401 jne 0x10d57404 */
  if (!C.zf) goto L_10d57404;
  /* 10d57403 int3  */
  x86_unimpl("int3 @ 0x10d57403");
L_10d57404:;
  /* 10d57404 cmp dword ptr [0x10d804f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5740b je 0x10d5741f */
  if (C.zf) goto L_10d5741f;
  /* 10d5740d cmp dword ptr [0x10d804f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57414 jne 0x10d57458 */
  if (!C.zf) goto L_10d57458;
  /* 10d57416 cmp dword ptr [0x10d804f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10d804f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5741d jne 0x10d57458 */
  if (!C.zf) goto L_10d57458;
L_10d5741f:;
  /* 10d5741f push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57421 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10d57424 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57425 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57428 mov eax, dword ptr [edx*8 + 0x10d7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d7eab4)));
  /* 10d5742f push eax */
  push32((uint32_t)(EAX));
  /* 10d57430 call 0x10d57890 */
  push32(0x10d57435u); f_10d57890();
  /* 10d57435 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57438 push eax */
  push32((uint32_t)(EAX));
  /* 10d57439 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5743c mov edx, dword ptr [ecx*8 + 0x10d7eab4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x10d7eab4)));
  /* 10d57443 push edx */
  push32((uint32_t)(EDX));
  /* 10d57444 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10d57446 call dword ptr [0x10d832f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f4))), 0x10d5744cu);
  /* 10d5744c push eax */
  push32((uint32_t)(EAX));
  /* 10d5744d call dword ptr [0x10d832f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832f8))), 0x10d57453u);
  /* 10d57453 jmp 0x10d57548 */
  goto L_10d57548;
L_10d57458:;
  /* 10d57458 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5745f je 0x10d57548 */
  if (C.zf) goto L_10d57548;
  /* 10d57465 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 10d5746a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 10d57470 push eax */
  push32((uint32_t)(EAX));
  /* 10d57471 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57473 call dword ptr [0x10d83310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83310))), 0x10d57479u);
  /* 10d57479 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5747b jne 0x10d57491 */
  if (!C.zf) goto L_10d57491;
  /* 10d5747d push 0x10d7b4ac */
  push32((uint32_t)(0x10d7b4acu));
  /* 10d57482 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d57488 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57489 call 0x10d57a10 */
  push32(0x10d5748eu); f_10d57a10();
  /* 10d5748e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57491:;
  /* 10d57491 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 10d57497 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d5749a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5749d push eax */
  push32((uint32_t)(EAX));
  /* 10d5749e call 0x10d57890 */
  push32(0x10d574a3u); f_10d57890();
  /* 10d574a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d574a6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d574a9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d574ac jbe 0x10d574da */
  if ((C.cf||C.zf)) goto L_10d574da;
  /* 10d574ae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 10d574b4 push ecx */
  push32((uint32_t)(ECX));
  /* 10d574b5 call 0x10d57890 */
  push32(0x10d574bau); f_10d57890();
  /* 10d574ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d574bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d574c0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 10d574c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d574c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d574c9 push 0x10d7b4a8 */
  push32((uint32_t)(0x10d7b4a8u));
  /* 10d574ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d574d1 push ecx */
  push32((uint32_t)(ECX));
  /* 10d574d2 call 0x10d58280 */
  push32(0x10d574d7u); f_10d58280();
  /* 10d574d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d574da:;
  /* 10d574da push 0x10d7bf00 */
  push32((uint32_t)(0x10d7bf00u));
  /* 10d574df lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d574e5 push edx */
  push32((uint32_t)(EDX));
  /* 10d574e6 call 0x10d57a10 */
  push32(0x10d574ebu); f_10d57a10();
  /* 10d574eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d574ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d574f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d574f2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 10d574f8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d574f9 call 0x10d57a20 */
  push32(0x10d574feu); f_10d57a20();
  /* 10d574fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57501 push 0x10d7b420 */
  push32((uint32_t)(0x10d7b420u));
  /* 10d57506 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d5750c push edx */
  push32((uint32_t)(EDX));
  /* 10d5750d call 0x10d57a20 */
  push32(0x10d57512u); f_10d57a20();
  /* 10d57512 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57515 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57518 mov ecx, dword ptr [eax*8 + 0x10d7eab4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x10d7eab4)));
  /* 10d5751f push ecx */
  push32((uint32_t)(ECX));
  /* 10d57520 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 10d57526 push edx */
  push32((uint32_t)(EDX));
  /* 10d57527 call 0x10d57a20 */
  push32(0x10d5752cu); f_10d57a20();
  /* 10d5752c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5752f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 10d57534 push 0x10d7bed8 */
  push32((uint32_t)(0x10d7bed8u));
  /* 10d57539 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 10d5753f push eax */
  push32((uint32_t)(EAX));
  /* 10d57540 call 0x10d581c0 */
  push32(0x10d57545u); f_10d581c0();
  /* 10d57545 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57548:;
  /* 10d57548 pop edi */
  EDI = (pop32());
  /* 10d57549 pop esi */
  ESI = (pop32());
  /* 10d5754a pop ebx */
  EBX = (pop32());
  /* 10d5754b mov esp, ebp */
  ESP = (EBP);
  /* 10d5754d pop ebp */
  EBP = (pop32());
  /* 10d5754e ret  */
  ESPCHK(0x10d57390u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x10d57550 (80 bytes, 27 insns) */
void f_10d57550(void) {
  FTRACE(0x10d57550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57550 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57551 mov ebp, esp */
  EBP = (ESP);
  /* 10d57553 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57554 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d5755b jmp 0x10d57566 */
  goto L_10d57566;
L_10d5755d:;
  /* 10d5755d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57560 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57563 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d57566:;
  /* 10d57566 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5756a jae 0x10d5757f */
  if (!C.cf) goto L_10d5757f;
  /* 10d5756c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5756f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57572 cmp edx, dword ptr [ecx*8 + 0x10d7eab0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x10d7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57579 jne 0x10d5757d */
  if (!C.zf) goto L_10d5757d;
  /* 10d5757b jmp 0x10d5757f */
  goto L_10d5757f;
L_10d5757d:;
  /* 10d5757d jmp 0x10d5755d */
  goto L_10d5755d;
L_10d5757f:;
  /* 10d5757f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57582 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57585 cmp ecx, dword ptr [eax*8 + 0x10d7eab0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x10d7eab0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5758c jne 0x10d5759a */
  if (!C.zf) goto L_10d5759a;
  /* 10d5758e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57591 mov eax, dword ptr [edx*8 + 0x10d7eab4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x10d7eab4)));
  /* 10d57598 jmp 0x10d5759c */
  goto L_10d5759c;
L_10d5759a:;
  /* 10d5759a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d5759c:;
  /* 10d5759c mov esp, ebp */
  ESP = (EBP);
  /* 10d5759e pop ebp */
  EBP = (pop32());
  /* 10d5759f ret  */
  ESPCHK(0x10d57550u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x10d575a0 (66 bytes, 28 insns) */
void f_10d575a0(void) {
  FTRACE(0x10d575a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d575a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d575a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d575a3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d575a7 jne 0x10d575c7 */
  if (!C.zf) goto L_10d575c7;
  /* 10d575a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d575ad jge 0x10d575c7 */
  if ((C.sf==C.of)) goto L_10d575c7;
  /* 10d575af push 1 */
  push32((uint32_t)(0x1u));
  /* 10d575b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d575b4 push eax */
  push32((uint32_t)(EAX));
  /* 10d575b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d575b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d575b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d575bc push edx */
  push32((uint32_t)(EDX));
  /* 10d575bd call 0x10d575f0 */
  push32(0x10d575c2u); f_10d575f0();
  /* 10d575c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d575c5 jmp 0x10d575dd */
  goto L_10d575dd;
L_10d575c7:;
  /* 10d575c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d575c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d575cc push eax */
  push32((uint32_t)(EAX));
  /* 10d575cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d575d0 push ecx */
  push32((uint32_t)(ECX));
  /* 10d575d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d575d4 push edx */
  push32((uint32_t)(EDX));
  /* 10d575d5 call 0x10d575f0 */
  push32(0x10d575dau); f_10d575f0();
  /* 10d575da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d575dd:;
  /* 10d575dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d575e0 pop ebp */
  EBP = (pop32());
  /* 10d575e1 ret  */
  ESPCHK(0x10d575a0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x10d575f0 (194 bytes, 71 insns) */
void f_10d575f0(void) {
  FTRACE(0x10d575f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d575f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d575f1 mov ebp, esp */
  EBP = (ESP);
  /* 10d575f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d575f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d575f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d575fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57600 je 0x10d57619 */
  if (C.zf) goto L_10d57619;
  /* 10d57602 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57605 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d57608 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5760b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5760e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d57611 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57614 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d57616 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10d57619:;
  /* 10d57619 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5761c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10d5761f:;
  /* 10d5761f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57622 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d57624 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d57627 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d5762a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5762d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5762f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10d57632 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d57635 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57639 jbe 0x10d57651 */
  if ((C.cf||C.zf)) goto L_10d57651;
  /* 10d5763b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d5763e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57641 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57644 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d57646 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57649 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5764c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d5764f jmp 0x10d57665 */
  goto L_10d57665;
L_10d57651:;
  /* 10d57651 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57654 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57657 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5765a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d5765c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5765f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57662 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d57665:;
  /* 10d57665 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57669 ja 0x10d5761f */
  if ((!C.cf&&!C.zf)) goto L_10d5761f;
  /* 10d5766b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5766e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d57671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57674 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57677 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5767a:;
  /* 10d5767a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5767d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5767f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d57682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57685 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57688 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5768a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d5768c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5768f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d57692 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d57694 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57697 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5769a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5769d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d576a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d576a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d576a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d576a9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d576ac jb 0x10d5767a */
  if (C.cf) goto L_10d5767a;
  /* 10d576ae mov esp, ebp */
  ESP = (EBP);
  /* 10d576b0 pop ebp */
  EBP = (pop32());
  /* 10d576b1 ret  */
  ESPCHK(0x10d575f0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x10d576c0 (63 bytes, 24 insns) */
void f_10d576c0(void) {
  FTRACE(0x10d576c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d576c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d576c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d576c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d576c4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d576c8 jne 0x10d576d9 */
  if (!C.zf) goto L_10d576d9;
  /* 10d576ca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d576ce jge 0x10d576d9 */
  if ((C.sf==C.of)) goto L_10d576d9;
  /* 10d576d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d576d7 jmp 0x10d576e0 */
  goto L_10d576e0;
L_10d576d9:;
  /* 10d576d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d576e0:;
  /* 10d576e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d576e3 push eax */
  push32((uint32_t)(EAX));
  /* 10d576e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d576e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d576e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d576eb push edx */
  push32((uint32_t)(EDX));
  /* 10d576ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d576ef push eax */
  push32((uint32_t)(EAX));
  /* 10d576f0 call 0x10d575f0 */
  push32(0x10d576f5u); f_10d575f0();
  /* 10d576f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d576f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d576fb mov esp, ebp */
  ESP = (EBP);
  /* 10d576fd pop ebp */
  EBP = (pop32());
  /* 10d576fe ret  */
  ESPCHK(0x10d576c0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x10d57700 (30 bytes, 14 insns) */
void f_10d57700(void) {
  FTRACE(0x10d57700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57701 mov ebp, esp */
  EBP = (ESP);
  /* 10d57703 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57705 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d57708 push eax */
  push32((uint32_t)(EAX));
  /* 10d57709 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5770c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5770d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57710 push edx */
  push32((uint32_t)(EDX));
  /* 10d57711 call 0x10d575f0 */
  push32(0x10d57716u); f_10d575f0();
  /* 10d57716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57719 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5771c pop ebp */
  EBP = (pop32());
  /* 10d5771d ret  */
  ESPCHK(0x10d57700u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x10d57720 (72 bytes, 28 insns) */
void f_10d57720(void) {
  FTRACE(0x10d57720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57720 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57721 mov ebp, esp */
  EBP = (ESP);
  /* 10d57723 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57724 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57728 jne 0x10d57741 */
  if (!C.zf) goto L_10d57741;
  /* 10d5772a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5772e jg 0x10d57741 */
  if ((!C.zf&&C.sf==C.of)) goto L_10d57741;
  /* 10d57730 jl 0x10d57738 */
  if ((C.sf!=C.of)) goto L_10d57738;
  /* 10d57732 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57736 jae 0x10d57741 */
  if (!C.cf) goto L_10d57741;
L_10d57738:;
  /* 10d57738 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10d5773f jmp 0x10d57748 */
  goto L_10d57748;
L_10d57741:;
  /* 10d57741 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d57748:;
  /* 10d57748 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5774b push eax */
  push32((uint32_t)(EAX));
  /* 10d5774c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d5774f push ecx */
  push32((uint32_t)(ECX));
  /* 10d57750 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d57753 push edx */
  push32((uint32_t)(EDX));
  /* 10d57754 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57757 push eax */
  push32((uint32_t)(EAX));
  /* 10d57758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5775b push ecx */
  push32((uint32_t)(ECX));
  /* 10d5775c call 0x10d57770 */
  push32(0x10d57761u); f_10d57770();
  /* 10d57761 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d57764 mov esp, ebp */
  ESP = (EBP);
  /* 10d57766 pop ebp */
  EBP = (pop32());
  /* 10d57767 ret  */
  ESPCHK(0x10d57720u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x10d57770 (242 bytes, 91 insns) */
void f_10d57770(void) {
  FTRACE(0x10d57770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57770 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57771 mov ebp, esp */
  EBP = (ESP);
  /* 10d57773 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57776 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d57779 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5777c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57780 je 0x10d577a4 */
  if (C.zf) goto L_10d577a4;
  /* 10d57782 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57785 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 10d57788 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5778b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5778e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d57791 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57794 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d57796 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57799 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5779c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d5779e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d577a1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_10d577a4:;
  /* 10d577a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d577a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10d577aa:;
  /* 10d577aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d577ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d577af push ecx */
  push32((uint32_t)(ECX));
  /* 10d577b0 push eax */
  push32((uint32_t)(EAX));
  /* 10d577b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d577b4 push edx */
  push32((uint32_t)(EDX));
  /* 10d577b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d577b8 push eax */
  push32((uint32_t)(EAX));
  /* 10d577b9 call 0x10d5b6f0 */
  push32(0x10d577beu); f_10d5b6f0();
  /* 10d577be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d577c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d577c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d577c6 push edx */
  push32((uint32_t)(EDX));
  /* 10d577c7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d577c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d577cb push eax */
  push32((uint32_t)(EAX));
  /* 10d577cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d577cf push ecx */
  push32((uint32_t)(ECX));
  /* 10d577d0 call 0x10d5b680 */
  push32(0x10d577d5u); f_10d5b680();
  /* 10d577d5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10d577d8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d577db cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d577df jbe 0x10d577f7 */
  if ((C.cf||C.zf)) goto L_10d577f7;
  /* 10d577e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d577e4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d577e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d577ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d577ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d577ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d577f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d577f5 jmp 0x10d5780b */
  goto L_10d5780b;
L_10d577f7:;
  /* 10d577f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d577fa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d577fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57800 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d57802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57805 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57808 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10d5780b:;
  /* 10d5780b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5780f ja 0x10d577aa */
  if ((!C.cf&&!C.zf)) goto L_10d577aa;
  /* 10d57811 jb 0x10d57819 */
  if (C.cf) goto L_10d57819;
  /* 10d57813 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57817 ja 0x10d577aa */
  if ((!C.cf&&!C.zf)) goto L_10d577aa;
L_10d57819:;
  /* 10d57819 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5781c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10d5781f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57822 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57825 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d57828:;
  /* 10d57828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5782b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d5782d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 10d57830 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57833 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57836 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d57838 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10d5783a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5783d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 10d57840 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10d57842 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57845 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57848 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d5784b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5784e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57851 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d57854 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57857 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5785a jb 0x10d57828 */
  if (C.cf) goto L_10d57828;
  /* 10d5785c mov esp, ebp */
  ESP = (EBP);
  /* 10d5785e pop ebp */
  EBP = (pop32());
  /* 10d5785f ret 0x14 */
  ESPCHK(0x10d57770u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x10d57870 (31 bytes, 15 insns) */
void f_10d57870(void) {
  FTRACE(0x10d57870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57870 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57871 mov ebp, esp */
  EBP = (ESP);
  /* 10d57873 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57875 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d57878 push eax */
  push32((uint32_t)(EAX));
  /* 10d57879 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5787c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5787d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57880 push edx */
  push32((uint32_t)(EDX));
  /* 10d57881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57884 push eax */
  push32((uint32_t)(EAX));
  /* 10d57885 call 0x10d57770 */
  push32(0x10d5788au); f_10d57770();
  /* 10d5788a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d5788d pop ebp */
  EBP = (pop32());
  /* 10d5788e ret  */
  ESPCHK(0x10d57870u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x10d57890 (123 bytes, 44 insns) */
void f_10d57890(void) {
  FTRACE(0x10d57890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d57894 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d5789a je 0x10d578b0 */
  if (C.zf) goto L_10d578b0;
L_10d5789c:;
  /* 10d5789c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d5789e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d5789f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d578a1 je 0x10d578e3 */
  if (C.zf) goto L_10d578e3;
  /* 10d578a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d578a9 jne 0x10d5789c */
  if (!C.zf) goto L_10d5789c;
  /* 10d578ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10d578b0:;
  /* 10d578b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d578b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d578b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d578b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d578bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d578be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d578c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d578c6 je 0x10d578b0 */
  if (C.zf) goto L_10d578b0;
  /* 10d578c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d578cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d578cd je 0x10d57901 */
  if (C.zf) goto L_10d57901;
  /* 10d578cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d578d1 je 0x10d578f7 */
  if (C.zf) goto L_10d578f7;
  /* 10d578d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d578d8 je 0x10d578ed */
  if (C.zf) goto L_10d578ed;
  /* 10d578da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d578df je 0x10d578e3 */
  if (C.zf) goto L_10d578e3;
  /* 10d578e1 jmp 0x10d578b0 */
  goto L_10d578b0;
L_10d578e3:;
  /* 10d578e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 10d578e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d578ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d578ec ret  */
  ESPCHK(0x10d57890u, _esp0);
  ESP += 4; return;
L_10d578ed:;
  /* 10d578ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 10d578f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d578f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d578f6 ret  */
  ESPCHK(0x10d57890u, _esp0);
  ESP += 4; return;
L_10d578f7:;
  /* 10d578f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 10d578fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d578fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57900 ret  */
  ESPCHK(0x10d57890u, _esp0);
  ESP += 4; return;
L_10d57901:;
  /* 10d57901 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 10d57904 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d57908 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d5790a ret  */
  ESPCHK(0x10d57890u, _esp0);
  ESP += 4; return;
}

/* FUN_10007910 @ 0x10d57910 (249 bytes, 93 insns) */
void f_10d57910(void) {
  FTRACE(0x10d57910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57910 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57911 mov ebp, esp */
  EBP = (ESP);
  /* 10d57913 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57916 push ebx */
  push32((uint32_t)(EBX));
  /* 10d57917 push esi */
  push32((uint32_t)(ESI));
  /* 10d57918 push edi */
  push32((uint32_t)(EDI));
  /* 10d57919 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d5791c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10d5791f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 10d57922 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_10d57925:;
  /* 10d57925 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57929 jne 0x10d57949 */
  if (!C.zf) goto L_10d57949;
  /* 10d5792b push 0x10d7bf38 */
  push32((uint32_t)(0x10d7bf38u));
  /* 10d57930 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57932 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 10d57934 push 0x10d7bf2c */
  push32((uint32_t)(0x10d7bf2cu));
  /* 10d57939 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5793b call 0x10d53b20 */
  push32(0x10d57940u); f_10d53b20();
  /* 10d57940 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57943 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57946 jne 0x10d57949 */
  if (!C.zf) goto L_10d57949;
  /* 10d57948 int3  */
  x86_unimpl("int3 @ 0x10d57948");
L_10d57949:;
  /* 10d57949 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5794b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d5794d jne 0x10d57925 */
  if (!C.zf) goto L_10d57925;
L_10d5794f:;
  /* 10d5794f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57953 jne 0x10d57973 */
  if (!C.zf) goto L_10d57973;
  /* 10d57955 push 0x10d7bf1c */
  push32((uint32_t)(0x10d7bf1cu));
  /* 10d5795a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5795c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 10d5795e push 0x10d7bf2c */
  push32((uint32_t)(0x10d7bf2cu));
  /* 10d57963 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d57965 call 0x10d53b20 */
  push32(0x10d5796au); f_10d53b20();
  /* 10d5796a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5796d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57970 jne 0x10d57973 */
  if (!C.zf) goto L_10d57973;
  /* 10d57972 int3  */
  x86_unimpl("int3 @ 0x10d57972");
L_10d57973:;
  /* 10d57973 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d57977 jne 0x10d5794f */
  if (!C.zf) goto L_10d5794f;
  /* 10d57979 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5797c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 10d57983 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57989 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d5798c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d5798f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57992 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10d57994 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57997 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5799a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10d5799d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10d579a0 push edx */
  push32((uint32_t)(EDX));
  /* 10d579a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d579a4 push eax */
  push32((uint32_t)(EAX));
  /* 10d579a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579a8 push ecx */
  push32((uint32_t)(ECX));
  /* 10d579a9 call 0x10d5b9f0 */
  push32(0x10d579aeu); f_10d5b9f0();
  /* 10d579ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d579b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d579b4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579b7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d579ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d579bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10d579c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579c6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d579ca jl 0x10d579ee */
  if ((C.sf!=C.of)) goto L_10d579ee;
  /* 10d579cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d579d1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 10d579d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d579d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d579dc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10d579df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d579e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d579e7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579ea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10d579ec jmp 0x10d579ff */
  goto L_10d579ff;
L_10d579ee:;
  /* 10d579ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d579f1 push eax */
  push32((uint32_t)(EAX));
  /* 10d579f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d579f4 call 0x10d5b770 */
  push32(0x10d579f9u); f_10d5b770();
  /* 10d579f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d579fc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_10d579ff:;
  /* 10d579ff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d57a02 pop edi */
  EDI = (pop32());
  /* 10d57a03 pop esi */
  ESI = (pop32());
  /* 10d57a04 pop ebx */
  EBX = (pop32());
  /* 10d57a05 mov esp, ebp */
  ESP = (EBP);
  /* 10d57a07 pop ebp */
  EBP = (pop32());
  /* 10d57a08 ret  */
  ESPCHK(0x10d57910u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x10d57a10 (7 bytes, 3 insns) */
void f_10d57a10(void) {
  FTRACE(0x10d57a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57a10 push edi */
  push32((uint32_t)(EDI));
  /* 10d57a11 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10d57a15 jmp 0x10d57a81 */
  jmp_ind(0x10d57a81u); return;
}

/* FUN_10007a20 @ 0x10d57a20 (224 bytes, 84 insns) */
void f_10d57a20(void) {
  FTRACE(0x10d57a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57a20 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d57a24 push edi */
  push32((uint32_t)(EDI));
  /* 10d57a25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d57a2b je 0x10d57a3c */
  if (C.zf) goto L_10d57a3c;
L_10d57a2d:;
  /* 10d57a2d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10d57a2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d57a30 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d57a32 je 0x10d57a6f */
  if (C.zf) goto L_10d57a6f;
  /* 10d57a34 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d57a3a jne 0x10d57a2d */
  if (!C.zf) goto L_10d57a2d;
L_10d57a3c:;
  /* 10d57a3c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d57a3e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d57a43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57a45 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d57a48 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57a4a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57a4d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d57a52 je 0x10d57a3c */
  if (C.zf) goto L_10d57a3c;
  /* 10d57a54 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d57a57 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d57a59 je 0x10d57a7e */
  if (C.zf) goto L_10d57a7e;
  /* 10d57a5b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10d57a5d je 0x10d57a79 */
  if (C.zf) goto L_10d57a79;
  /* 10d57a5f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d57a64 je 0x10d57a74 */
  if (C.zf) goto L_10d57a74;
  /* 10d57a66 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d57a6b je 0x10d57a6f */
  if (C.zf) goto L_10d57a6f;
  /* 10d57a6d jmp 0x10d57a3c */
  goto L_10d57a3c;
L_10d57a6f:;
  /* 10d57a6f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10d57a72 jmp 0x10d57a81 */
  goto L_10d57a81;
L_10d57a74:;
  /* 10d57a74 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10d57a77 jmp 0x10d57a81 */
  goto L_10d57a81;
L_10d57a79:;
  /* 10d57a79 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10d57a7c jmp 0x10d57a81 */
  goto L_10d57a81;
L_10d57a7e:;
  /* 10d57a7e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10d57a81:;
  /* 10d57a81 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d57a85 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d57a8b je 0x10d57aa6 */
  if (C.zf) goto L_10d57aa6;
L_10d57a8d:;
  /* 10d57a8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10d57a8f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10d57a90 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d57a92 je 0x10d57af8 */
  if (C.zf) goto L_10d57af8;
  /* 10d57a94 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d57a96 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d57a97 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10d57a9d jne 0x10d57a8d */
  if (!C.zf) goto L_10d57a8d;
  /* 10d57a9f jmp 0x10d57aa6 */
  goto L_10d57aa6;
L_10d57aa1:;
  /* 10d57aa1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d57aa3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10d57aa6:;
  /* 10d57aa6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d57aab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10d57aad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57aaf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d57ab2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57ab4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57ab6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57ab9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d57abe je 0x10d57aa1 */
  if (C.zf) goto L_10d57aa1;
  /* 10d57ac0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d57ac2 je 0x10d57af8 */
  if (C.zf) goto L_10d57af8;
  /* 10d57ac4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d57ac6 je 0x10d57aef */
  if (C.zf) goto L_10d57aef;
  /* 10d57ac8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d57ace je 0x10d57ae2 */
  if (C.zf) goto L_10d57ae2;
  /* 10d57ad0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d57ad6 je 0x10d57ada */
  if (C.zf) goto L_10d57ada;
  /* 10d57ad8 jmp 0x10d57aa1 */
  goto L_10d57aa1;
L_10d57ada:;
  /* 10d57ada mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d57adc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d57ae0 pop edi */
  EDI = (pop32());
  /* 10d57ae1 ret  */
  ESPCHK(0x10d57a20u, _esp0);
  ESP += 4; return;
L_10d57ae2:;
  /* 10d57ae2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d57ae5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d57ae9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10d57aed pop edi */
  EDI = (pop32());
  /* 10d57aee ret  */
  ESPCHK(0x10d57a20u, _esp0);
  ESP += 4; return;
L_10d57aef:;
  /* 10d57aef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10d57af2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d57af6 pop edi */
  EDI = (pop32());
  /* 10d57af7 ret  */
  ESPCHK(0x10d57a20u, _esp0);
  ESP += 4; return;
L_10d57af8:;
  /* 10d57af8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10d57afa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d57afe pop edi */
  EDI = (pop32());
  /* 10d57aff ret  */
  ESPCHK(0x10d57a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b00 @ 0x10d57b00 (243 bytes, 91 insns) */
void f_10d57b00(void) {
  FTRACE(0x10d57b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57b01 mov ebp, esp */
  EBP = (ESP);
  /* 10d57b03 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57b06 push ebx */
  push32((uint32_t)(EBX));
  /* 10d57b07 push esi */
  push32((uint32_t)(ESI));
  /* 10d57b08 push edi */
  push32((uint32_t)(EDI));
  /* 10d57b09 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 10d57b0c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_10d57b0f:;
  /* 10d57b0f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57b13 jne 0x10d57b33 */
  if (!C.zf) goto L_10d57b33;
  /* 10d57b15 push 0x10d7bf38 */
  push32((uint32_t)(0x10d7bf38u));
  /* 10d57b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57b1c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10d57b1e push 0x10d7bf48 */
  push32((uint32_t)(0x10d7bf48u));
  /* 10d57b23 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d57b25 call 0x10d53b20 */
  push32(0x10d57b2au); f_10d53b20();
  /* 10d57b2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57b2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57b30 jne 0x10d57b33 */
  if (!C.zf) goto L_10d57b33;
  /* 10d57b32 int3  */
  x86_unimpl("int3 @ 0x10d57b32");
L_10d57b33:;
  /* 10d57b33 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d57b35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d57b37 jne 0x10d57b0f */
  if (!C.zf) goto L_10d57b0f;
L_10d57b39:;
  /* 10d57b39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57b3d jne 0x10d57b5d */
  if (!C.zf) goto L_10d57b5d;
  /* 10d57b3f push 0x10d7bf1c */
  push32((uint32_t)(0x10d7bf1cu));
  /* 10d57b44 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57b46 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 10d57b48 push 0x10d7bf48 */
  push32((uint32_t)(0x10d7bf48u));
  /* 10d57b4d push 2 */
  push32((uint32_t)(0x2u));
  /* 10d57b4f call 0x10d53b20 */
  push32(0x10d57b54u); f_10d53b20();
  /* 10d57b54 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57b57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57b5a jne 0x10d57b5d */
  if (!C.zf) goto L_10d57b5d;
  /* 10d57b5c int3  */
  x86_unimpl("int3 @ 0x10d57b5c");
L_10d57b5d:;
  /* 10d57b5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d57b5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d57b61 jne 0x10d57b39 */
  if (!C.zf) goto L_10d57b39;
  /* 10d57b63 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57b66 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 10d57b6d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57b70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57b73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10d57b76 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57b79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57b7c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10d57b7e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57b81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57b84 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10d57b87 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10d57b8a push ecx */
  push32((uint32_t)(ECX));
  /* 10d57b8b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d57b8e push edx */
  push32((uint32_t)(EDX));
  /* 10d57b8f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57b92 push eax */
  push32((uint32_t)(EAX));
  /* 10d57b93 call 0x10d5b9f0 */
  push32(0x10d57b98u); f_10d5b9f0();
  /* 10d57b98 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57b9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10d57b9e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57ba1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d57ba4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57ba7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57baa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10d57bad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57bb0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57bb4 jl 0x10d57bd8 */
  if ((C.sf!=C.of)) goto L_10d57bd8;
  /* 10d57bb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57bb9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d57bbb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 10d57bbe xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10d57bc0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10d57bc6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10d57bc9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57bcc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d57bce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57bd1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57bd4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10d57bd6 jmp 0x10d57be9 */
  goto L_10d57be9;
L_10d57bd8:;
  /* 10d57bd8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10d57bdb push edx */
  push32((uint32_t)(EDX));
  /* 10d57bdc push 0 */
  push32((uint32_t)(0x0u));
  /* 10d57bde call 0x10d5b770 */
  push32(0x10d57be3u); f_10d5b770();
  /* 10d57be3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57be6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_10d57be9:;
  /* 10d57be9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10d57bec pop edi */
  EDI = (pop32());
  /* 10d57bed pop esi */
  ESI = (pop32());
  /* 10d57bee pop ebx */
  EBX = (pop32());
  /* 10d57bef mov esp, ebp */
  ESP = (EBP);
  /* 10d57bf1 pop ebp */
  EBP = (pop32());
  /* 10d57bf2 ret  */
  ESPCHK(0x10d57b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c00 @ 0x10d57c00 (47 bytes, 17 insns) */
void f_10d57c00(void) {
  FTRACE(0x10d57c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57c00 push ecx */
  push32((uint32_t)(ECX));
  /* 10d57c01 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c06 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 10d57c0a jb 0x10d57c20 */
  if (C.cf) goto L_10d57c20;
L_10d57c0c:;
  /* 10d57c0c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57c12 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57c17 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d57c19 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c1e jae 0x10d57c0c */
  if (!C.cf) goto L_10d57c0c;
L_10d57c20:;
  /* 10d57c20 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57c22 mov eax, esp */
  EAX = (ESP);
  /* 10d57c24 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 10d57c26 mov esp, ecx */
  ESP = (ECX);
  /* 10d57c28 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d57c2a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d57c2d push eax */
  push32((uint32_t)(EAX));
  /* 10d57c2e ret  */
  ESPCHK(0x10d57c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c30 @ 0x10d57c30 (507 bytes, 151 insns) [1 switch table(s)] */
void f_10d57c30(void) {
  FTRACE(0x10d57c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57c30 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57c31 mov ebp, esp */
  EBP = (ESP);
  /* 10d57c33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57c36 push esi */
  push32((uint32_t)(ESI));
  /* 10d57c37 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c3b je 0x10d57c43 */
  if (C.zf) goto L_10d57c43;
  /* 10d57c3d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c41 jne 0x10d57c48 */
  if (!C.zf) goto L_10d57c48;
L_10d57c43:;
  /* 10d57c43 jmp 0x10d57e18 */
  goto L_10d57e18;
L_10d57c48:;
  /* 10d57c48 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c4c je 0x10d57c64 */
  if (C.zf) goto L_10d57c64;
  /* 10d57c4e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c52 je 0x10d57c64 */
  if (C.zf) goto L_10d57c64;
  /* 10d57c54 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c58 je 0x10d57c64 */
  if (C.zf) goto L_10d57c64;
  /* 10d57c5a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c5e jne 0x10d57d41 */
  if (!C.zf) goto L_10d57d41;
L_10d57c64:;
  /* 10d57c64 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57c66 call 0x10d58460 */
  push32(0x10d57c6bu); f_10d58460();
  /* 10d57c6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57c6e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c72 je 0x10d57c7a */
  if (C.zf) goto L_10d57c7a;
  /* 10d57c74 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c78 jne 0x10d57cbf */
  if (!C.zf) goto L_10d57cbf;
L_10d57c7a:;
  /* 10d57c7a cmp dword ptr [0x10d80678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c81 jne 0x10d57cbf */
  if (!C.zf) goto L_10d57cbf;
  /* 10d57c83 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57c85 push 0x10d57e60 */
  push32((uint32_t)(0x10d57e60u));
  /* 10d57c8a call dword ptr [0x10d83380] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83380))), 0x10d57c90u);
  /* 10d57c90 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57c93 jne 0x10d57ca1 */
  if (!C.zf) goto L_10d57ca1;
  /* 10d57c95 mov dword ptr [0x10d80678], 1 */
  w32((uint32_t)(0x10d80678), (0x1u));
  /* 10d57c9f jmp 0x10d57cbf */
  goto L_10d57cbf;
L_10d57ca1:;
  /* 10d57ca1 call dword ptr [0x10d83338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83338))), 0x10d57ca7u);
  /* 10d57ca7 mov esi, eax */
  ESI = (EAX);
  /* 10d57ca9 call 0x10d5c940 */
  push32(0x10d57caeu); f_10d5c940();
  /* 10d57cae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 10d57cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57cb2 call 0x10d58500 */
  push32(0x10d57cb7u); f_10d58500();
  /* 10d57cb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57cba jmp 0x10d57e18 */
  goto L_10d57e18;
L_10d57cbf:;
  /* 10d57cbf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57cc2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d57cc5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d57cc8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57ccb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10d57cce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57cd2 ja 0x10d57d32 */
  if ((!C.cf&&!C.zf)) goto L_10d57d32;
  /* 10d57cd4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d57cd7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d57cd9 mov dl, byte ptr [eax + 0x10d57e3f] */
  DL = (r8((uint32_t)(EAX + 0x10d57e3f)));
  /* 10d57cdf jmp dword ptr [edx*4 + 0x10d57e2b] */
  switch (EDX) {
    case 0: goto L_10d57ce6;
    case 1: goto L_10d57d20;
    case 2: goto L_10d57cfa;
    case 3: goto L_10d57d0d;
    case 4: goto L_10d57d32;
    default: x86_unimpl("switch@0x10d57cdf out of table"); return;
  }
L_10d57ce6:;
  /* 10d57ce6 mov ecx, dword ptr [0x10d80668] */
  ECX = (r32((uint32_t)(0x10d80668)));
  /* 10d57cec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d57cef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57cf2 mov dword ptr [0x10d80668], edx */
  w32((uint32_t)(0x10d80668), (EDX));
  /* 10d57cf8 jmp 0x10d57d32 */
  goto L_10d57d32;
L_10d57cfa:;
  /* 10d57cfa mov eax, dword ptr [0x10d8066c] */
  EAX = (r32((uint32_t)(0x10d8066c)));
  /* 10d57cff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57d02 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57d05 mov dword ptr [0x10d8066c], ecx */
  w32((uint32_t)(0x10d8066c), (ECX));
  /* 10d57d0b jmp 0x10d57d32 */
  goto L_10d57d32;
L_10d57d0d:;
  /* 10d57d0d mov edx, dword ptr [0x10d80670] */
  EDX = (r32((uint32_t)(0x10d80670)));
  /* 10d57d13 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10d57d16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57d19 mov dword ptr [0x10d80670], eax */
  w32((uint32_t)(0x10d80670), (EAX));
  /* 10d57d1e jmp 0x10d57d32 */
  goto L_10d57d32;
L_10d57d20:;
  /* 10d57d20 mov ecx, dword ptr [0x10d80674] */
  ECX = (r32((uint32_t)(0x10d80674)));
  /* 10d57d26 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d57d29 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57d2c mov dword ptr [0x10d80674], edx */
  w32((uint32_t)(0x10d80674), (EDX));
L_10d57d32:;
  /* 10d57d32 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57d34 call 0x10d58500 */
  push32(0x10d57d39u); f_10d58500();
  /* 10d57d39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57d3c jmp 0x10d57e13 */
  goto L_10d57e13;
L_10d57d41:;
  /* 10d57d41 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57d45 je 0x10d57d58 */
  if (C.zf) goto L_10d57d58;
  /* 10d57d47 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57d4b je 0x10d57d58 */
  if (C.zf) goto L_10d57d58;
  /* 10d57d4d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57d51 je 0x10d57d58 */
  if (C.zf) goto L_10d57d58;
  /* 10d57d53 jmp 0x10d57e18 */
  goto L_10d57e18;
L_10d57d58:;
  /* 10d57d58 call 0x10d544a0 */
  push32(0x10d57d5du); f_10d544a0();
  /* 10d57d5d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d57d60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57d63 cmp dword ptr [eax + 0x50], 0x10d7ec00 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x10d7ec00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57d6a jne 0x10d57db5 */
  if (!C.zf) goto L_10d57db5;
  /* 10d57d6c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 10d57d71 push 0x10d7bf54 */
  push32((uint32_t)(0x10d7bf54u));
  /* 10d57d76 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d57d78 mov ecx, dword ptr [0x10d7ec80] */
  ECX = (r32((uint32_t)(0x10d7ec80)));
  /* 10d57d7e push ecx */
  push32((uint32_t)(ECX));
  /* 10d57d7f call 0x10d54a60 */
  push32(0x10d57d84u); f_10d54a60();
  /* 10d57d84 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57d87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57d8a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 10d57d8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57d90 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57d94 je 0x10d57db3 */
  if (C.zf) goto L_10d57db3;
  /* 10d57d96 mov ecx, dword ptr [0x10d7ec80] */
  ECX = (r32((uint32_t)(0x10d7ec80)));
  /* 10d57d9c push ecx */
  push32((uint32_t)(ECX));
  /* 10d57d9d push 0x10d7ec00 */
  push32((uint32_t)(0x10d7ec00u));
  /* 10d57da2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57da5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 10d57da8 push eax */
  push32((uint32_t)(EAX));
  /* 10d57da9 call 0x10d5b340 */
  push32(0x10d57daeu); f_10d5b340();
  /* 10d57dae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57db1 jmp 0x10d57db5 */
  goto L_10d57db5;
L_10d57db3:;
  /* 10d57db3 jmp 0x10d57e18 */
  goto L_10d57e18;
L_10d57db5:;
  /* 10d57db5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57db8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d57dbb push edx */
  push32((uint32_t)(EDX));
  /* 10d57dbc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57dbf push eax */
  push32((uint32_t)(EAX));
  /* 10d57dc0 call 0x10d58140 */
  push32(0x10d57dc5u); f_10d58140();
  /* 10d57dc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57dc8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d57dcb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57dcf jne 0x10d57dd3 */
  if (!C.zf) goto L_10d57dd3;
  /* 10d57dd1 jmp 0x10d57e18 */
  goto L_10d57e18;
L_10d57dd3:;
  /* 10d57dd3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57dd6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10d57dd9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10d57ddc:;
  /* 10d57ddc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57ddf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d57de2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57de5 jne 0x10d57e13 */
  if (!C.zf) goto L_10d57e13;
  /* 10d57de7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57dea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d57ded mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10d57df0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57df3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57df6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d57df9 mov edx, dword ptr [0x10d7ec84] */
  EDX = (r32((uint32_t)(0x10d7ec84)));
  /* 10d57dff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d57e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57e05 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d57e08 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57e0a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57e0d jb 0x10d57e11 */
  if (C.cf) goto L_10d57e11;
  /* 10d57e0f jmp 0x10d57e13 */
  goto L_10d57e13;
L_10d57e11:;
  /* 10d57e11 jmp 0x10d57ddc */
  goto L_10d57ddc;
L_10d57e13:;
  /* 10d57e13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57e16 jmp 0x10d57e26 */
  goto L_10d57e26;
L_10d57e18:;
  /* 10d57e18 call 0x10d5c930 */
  push32(0x10d57e1du); f_10d5c930();
  /* 10d57e1d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 10d57e23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d57e26:;
  /* 10d57e26 pop esi */
  ESI = (pop32());
  /* 10d57e27 mov esp, ebp */
  ESP = (EBP);
  /* 10d57e29 pop ebp */
  EBP = (pop32());
  /* 10d57e2a ret  */
  ESPCHK(0x10d57c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e60 @ 0x10d57e60 (146 bytes, 45 insns) */
void f_10d57e60(void) {
  FTRACE(0x10d57e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57e60 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57e61 mov ebp, esp */
  EBP = (ESP);
  /* 10d57e63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57e66 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57e68 call 0x10d58460 */
  push32(0x10d57e6du); f_10d58460();
  /* 10d57e6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57e70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57e74 jne 0x10d57e8e */
  if (!C.zf) goto L_10d57e8e;
  /* 10d57e76 mov dword ptr [ebp - 8], 0x10d80668 */
  w32((uint32_t)(EBP + -0x8), (0x10d80668u));
  /* 10d57e7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57e80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10d57e82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d57e85 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10d57e8c jmp 0x10d57ea4 */
  goto L_10d57ea4;
L_10d57e8e:;
  /* 10d57e8e mov dword ptr [ebp - 8], 0x10d8066c */
  w32((uint32_t)(EBP + -0x8), (0x10d8066cu));
  /* 10d57e95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57e98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d57e9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57e9d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_10d57ea4:;
  /* 10d57ea4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57ea8 jne 0x10d57eb8 */
  if (!C.zf) goto L_10d57eb8;
  /* 10d57eaa push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57eac call 0x10d58500 */
  push32(0x10d57eb1u); f_10d58500();
  /* 10d57eb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57eb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57eb6 jmp 0x10d57eec */
  goto L_10d57eec;
L_10d57eb8:;
  /* 10d57eb8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57ebc je 0x10d57edd */
  if (C.zf) goto L_10d57edd;
  /* 10d57ebe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d57ec1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10d57ec7 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57ec9 call 0x10d58500 */
  push32(0x10d57eceu); f_10d58500();
  /* 10d57ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57ed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57ed4 push edx */
  push32((uint32_t)(EDX));
  /* 10d57ed5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x10d57ed8u);
  /* 10d57ed8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57edb jmp 0x10d57ee7 */
  goto L_10d57ee7;
L_10d57edd:;
  /* 10d57edd push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57edf call 0x10d58500 */
  push32(0x10d57ee4u); f_10d58500();
  /* 10d57ee4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57ee7:;
  /* 10d57ee7 mov eax, 1 */
  EAX = (0x1u);
L_10d57eec:;
  /* 10d57eec mov esp, ebp */
  ESP = (EBP);
  /* 10d57eee pop ebp */
  EBP = (pop32());
  /* 10d57eef ret 4 */
  ESPCHK(0x10d57e60u, _esp0);
  ESP += 8; return;
}

/* FUN_10007f00 @ 0x10d57f00 (522 bytes, 162 insns) [1 switch table(s)] */
void f_10d57f00(void) {
  FTRACE(0x10d57f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d57f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10d57f01 mov ebp, esp */
  EBP = (ESP);
  /* 10d57f03 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57f06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10d57f0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57f10 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10d57f13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d57f16 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d57f19 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10d57f1c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57f20 ja 0x10d57fce */
  if ((!C.cf&&!C.zf)) goto L_10d57fce;
  /* 10d57f26 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10d57f29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d57f2b mov dl, byte ptr [eax + 0x10d58122] */
  DL = (r8((uint32_t)(EAX + 0x10d58122)));
  /* 10d57f31 jmp dword ptr [edx*4 + 0x10d5810a] */
  switch (EDX) {
    case 0: goto L_10d57f38;
    case 1: goto L_10d57fa3;
    case 2: goto L_10d57f89;
    case 3: goto L_10d57f55;
    case 4: goto L_10d57f6f;
    case 5: goto L_10d57fce;
    default: x86_unimpl("switch@0x10d57f31 out of table"); return;
  }
L_10d57f38:;
  /* 10d57f38 mov dword ptr [ebp - 0x18], 0x10d80668 */
  w32((uint32_t)(EBP + -0x18), (0x10d80668u));
  /* 10d57f3f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57f42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57f44 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d57f47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57f4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57f4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57f50 jmp 0x10d57fd6 */
  goto L_10d57fd6;
L_10d57f55:;
  /* 10d57f55 mov dword ptr [ebp - 0x18], 0x10d8066c */
  w32((uint32_t)(EBP + -0x18), (0x10d8066cu));
  /* 10d57f5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57f5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57f61 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d57f64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57f67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57f6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57f6d jmp 0x10d57fd6 */
  goto L_10d57fd6;
L_10d57f6f:;
  /* 10d57f6f mov dword ptr [ebp - 0x18], 0x10d80670 */
  w32((uint32_t)(EBP + -0x18), (0x10d80670u));
  /* 10d57f76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57f79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57f7b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d57f7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57f81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57f84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57f87 jmp 0x10d57fd6 */
  goto L_10d57fd6;
L_10d57f89:;
  /* 10d57f89 mov dword ptr [ebp - 0x18], 0x10d80674 */
  w32((uint32_t)(EBP + -0x18), (0x10d80674u));
  /* 10d57f90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57f93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57f95 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d57f98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d57f9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57f9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d57fa1 jmp 0x10d57fd6 */
  goto L_10d57fd6;
L_10d57fa3:;
  /* 10d57fa3 call 0x10d544a0 */
  push32(0x10d57fa8u); f_10d544a0();
  /* 10d57fa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d57fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d57fae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d57fb1 push edx */
  push32((uint32_t)(EDX));
  /* 10d57fb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d57fb5 push eax */
  push32((uint32_t)(EAX));
  /* 10d57fb6 call 0x10d58140 */
  push32(0x10d57fbbu); f_10d58140();
  /* 10d57fbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57fbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d57fc1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10d57fc4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d57fc7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d57fc9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10d57fcc jmp 0x10d57fd6 */
  goto L_10d57fd6;
L_10d57fce:;
  /* 10d57fce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d57fd1 jmp 0x10d58106 */
  goto L_10d58106;
L_10d57fd6:;
  /* 10d57fd6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57fda je 0x10d57fe6 */
  if (C.zf) goto L_10d57fe6;
  /* 10d57fdc push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57fde call 0x10d58460 */
  push32(0x10d57fe3u); f_10d58460();
  /* 10d57fe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57fe6:;
  /* 10d57fe6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57fea jne 0x10d58003 */
  if (!C.zf) goto L_10d58003;
  /* 10d57fec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d57ff0 je 0x10d57ffc */
  if (C.zf) goto L_10d57ffc;
  /* 10d57ff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 10d57ff4 call 0x10d58500 */
  push32(0x10d57ff9u); f_10d58500();
  /* 10d57ff9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d57ffc:;
  /* 10d57ffc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d57ffe jmp 0x10d58106 */
  goto L_10d58106;
L_10d58003:;
  /* 10d58003 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58007 jne 0x10d58020 */
  if (!C.zf) goto L_10d58020;
  /* 10d58009 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5800d je 0x10d58019 */
  if (C.zf) goto L_10d58019;
  /* 10d5800f push 1 */
  push32((uint32_t)(0x1u));
  /* 10d58011 call 0x10d58500 */
  push32(0x10d58016u); f_10d58500();
  /* 10d58016 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d58019:;
  /* 10d58019 push 3 */
  push32((uint32_t)(0x3u));
  /* 10d5801b call 0x10d54220 */
  push32(0x10d58020u); f_10d54220();
L_10d58020:;
  /* 10d58020 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58024 je 0x10d58032 */
  if (C.zf) goto L_10d58032;
  /* 10d58026 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5802a je 0x10d58032 */
  if (C.zf) goto L_10d58032;
  /* 10d5802c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58030 jne 0x10d5805e */
  if (!C.zf) goto L_10d5805e;
L_10d58032:;
  /* 10d58032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58035 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 10d58038 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d5803b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5803e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 10d58045 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58049 jne 0x10d5805e */
  if (!C.zf) goto L_10d5805e;
  /* 10d5804b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5804e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d58051 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d58054 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58057 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_10d5805e:;
  /* 10d5805e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58062 jne 0x10d580a0 */
  if (!C.zf) goto L_10d580a0;
  /* 10d58064 mov eax, dword ptr [0x10d7ec78] */
  EAX = (r32((uint32_t)(0x10d7ec78)));
  /* 10d58069 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d5806c jmp 0x10d58077 */
  goto L_10d58077;
L_10d5806e:;
  /* 10d5806e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58071 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58074 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d58077:;
  /* 10d58077 mov edx, dword ptr [0x10d7ec78] */
  EDX = (r32((uint32_t)(0x10d7ec78)));
  /* 10d5807d add edx, dword ptr [0x10d7ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58083 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58086 jge 0x10d5809e */
  if ((C.sf==C.of)) goto L_10d5809e;
  /* 10d58088 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5808b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5808e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58091 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d58094 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d5809c jmp 0x10d5806e */
  goto L_10d5806e;
L_10d5809e:;
  /* 10d5809e jmp 0x10d580a9 */
  goto L_10d580a9;
L_10d580a0:;
  /* 10d580a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d580a3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10d580a9:;
  /* 10d580a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580ad je 0x10d580b9 */
  if (C.zf) goto L_10d580b9;
  /* 10d580af push 1 */
  push32((uint32_t)(0x1u));
  /* 10d580b1 call 0x10d58500 */
  push32(0x10d580b6u); f_10d58500();
  /* 10d580b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d580b9:;
  /* 10d580b9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580bd jne 0x10d580d0 */
  if (!C.zf) goto L_10d580d0;
  /* 10d580bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d580c2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d580c5 push edx */
  push32((uint32_t)(EDX));
  /* 10d580c6 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d580c8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d580cbu);
  /* 10d580cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d580ce jmp 0x10d580da */
  goto L_10d580da;
L_10d580d0:;
  /* 10d580d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d580d3 push eax */
  push32((uint32_t)(EAX));
  /* 10d580d4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x10d580d7u);
  /* 10d580d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d580da:;
  /* 10d580da cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580de je 0x10d580ec */
  if (C.zf) goto L_10d580ec;
  /* 10d580e0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580e4 je 0x10d580ec */
  if (C.zf) goto L_10d580ec;
  /* 10d580e6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580ea jne 0x10d58104 */
  if (!C.zf) goto L_10d58104;
L_10d580ec:;
  /* 10d580ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d580ef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d580f2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 10d580f5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d580f9 jne 0x10d58104 */
  if (!C.zf) goto L_10d58104;
  /* 10d580fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d580fe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58101 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_10d58104:;
  /* 10d58104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d58106:;
  /* 10d58106 mov esp, ebp */
  ESP = (EBP);
  /* 10d58108 pop ebp */
  EBP = (pop32());
  /* 10d58109 ret  */
  ESPCHK(0x10d57f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008140 @ 0x10d58140 (91 bytes, 35 insns) */
void f_10d58140(void) {
  FTRACE(0x10d58140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58140 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58141 mov ebp, esp */
  EBP = (ESP);
  /* 10d58143 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58144 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58147 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5814a:;
  /* 10d5814a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5814d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10d58150 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58153 je 0x10d58173 */
  if (C.zf) goto L_10d58173;
  /* 10d58155 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58158 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5815b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5815e mov ecx, dword ptr [0x10d7ec84] */
  ECX = (r32((uint32_t)(0x10d7ec84)));
  /* 10d58164 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d58167 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5816a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5816c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5816f jae 0x10d58173 */
  if (!C.cf) goto L_10d58173;
  /* 10d58171 jmp 0x10d5814a */
  goto L_10d5814a;
L_10d58173:;
  /* 10d58173 mov eax, dword ptr [0x10d7ec84] */
  EAX = (r32((uint32_t)(0x10d7ec84)));
  /* 10d58178 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5817b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5817e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58180 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58183 jae 0x10d58195 */
  if (!C.cf) goto L_10d58195;
  /* 10d58185 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58188 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10d5818b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5818e jne 0x10d58195 */
  if (!C.zf) goto L_10d58195;
  /* 10d58190 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58193 jmp 0x10d58197 */
  goto L_10d58197;
L_10d58195:;
  /* 10d58195 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d58197:;
  /* 10d58197 mov esp, ebp */
  ESP = (EBP);
  /* 10d58199 pop ebp */
  EBP = (pop32());
  /* 10d5819a ret  */
  ESPCHK(0x10d58140u, _esp0);
  ESP += 4; return;
}

/* FUN_100081a0 @ 0x10d581a0 (13 bytes, 6 insns) */
void f_10d581a0(void) {
  FTRACE(0x10d581a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d581a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d581a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d581a3 call 0x10d544a0 */
  push32(0x10d581a8u); f_10d544a0();
  /* 10d581a8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d581ab pop ebp */
  EBP = (pop32());
  /* 10d581ac ret  */
  ESPCHK(0x10d581a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x10d581b0 (13 bytes, 6 insns) */
void f_10d581b0(void) {
  FTRACE(0x10d581b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d581b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d581b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d581b3 call 0x10d544a0 */
  push32(0x10d581b8u); f_10d544a0();
  /* 10d581b8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d581bb pop ebp */
  EBP = (pop32());
  /* 10d581bc ret  */
  ESPCHK(0x10d581b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100081c0 @ 0x10d581c0 (187 bytes, 54 insns) */
void f_10d581c0(void) {
  FTRACE(0x10d581c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d581c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d581c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d581c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d581c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d581cd cmp dword ptr [0x10d8067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d581d4 jne 0x10d58233 */
  if (!C.zf) goto L_10d58233;
  /* 10d581d6 push 0x10d7b380 */
  push32((uint32_t)(0x10d7b380u));
  /* 10d581db call dword ptr [0x10d83308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83308))), 0x10d581e1u);
  /* 10d581e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d581e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d581e8 je 0x10d58207 */
  if (C.zf) goto L_10d58207;
  /* 10d581ea push 0x10d7bf84 */
  push32((uint32_t)(0x10d7bf84u));
  /* 10d581ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d581f2 push eax */
  push32((uint32_t)(EAX));
  /* 10d581f3 call dword ptr [0x10d83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83304))), 0x10d581f9u);
  /* 10d581f9 mov dword ptr [0x10d8067c], eax */
  w32((uint32_t)(0x10d8067c), (EAX));
  /* 10d581fe cmp dword ptr [0x10d8067c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d8067c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58205 jne 0x10d5820b */
  if (!C.zf) goto L_10d5820b;
L_10d58207:;
  /* 10d58207 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58209 jmp 0x10d58277 */
  goto L_10d58277;
L_10d5820b:;
  /* 10d5820b push 0x10d7bf74 */
  push32((uint32_t)(0x10d7bf74u));
  /* 10d58210 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58213 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58214 call dword ptr [0x10d83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83304))), 0x10d5821au);
  /* 10d5821a mov dword ptr [0x10d80680], eax */
  w32((uint32_t)(0x10d80680), (EAX));
  /* 10d5821f push 0x10d7bf60 */
  push32((uint32_t)(0x10d7bf60u));
  /* 10d58224 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58227 push edx */
  push32((uint32_t)(EDX));
  /* 10d58228 call dword ptr [0x10d83304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83304))), 0x10d5822eu);
  /* 10d5822e mov dword ptr [0x10d80684], eax */
  w32((uint32_t)(0x10d80684), (EAX));
L_10d58233:;
  /* 10d58233 cmp dword ptr [0x10d80680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5823a je 0x10d58245 */
  if (C.zf) goto L_10d58245;
  /* 10d5823c call dword ptr [0x10d80680] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d80680))), 0x10d58242u);
  /* 10d58242 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d58245:;
  /* 10d58245 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58249 je 0x10d58261 */
  if (C.zf) goto L_10d58261;
  /* 10d5824b cmp dword ptr [0x10d80684], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d80684))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58252 je 0x10d58261 */
  if (C.zf) goto L_10d58261;
  /* 10d58254 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58257 push eax */
  push32((uint32_t)(EAX));
  /* 10d58258 call dword ptr [0x10d80684] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d80684))), 0x10d5825eu);
  /* 10d5825e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d58261:;
  /* 10d58261 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10d58264 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58265 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58268 push edx */
  push32((uint32_t)(EDX));
  /* 10d58269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5826c push eax */
  push32((uint32_t)(EAX));
  /* 10d5826d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58270 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58271 call dword ptr [0x10d8067c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8067c))), 0x10d58277u);
L_10d58277:;
  /* 10d58277 mov esp, ebp */
  ESP = (EBP);
  /* 10d58279 pop ebp */
  EBP = (pop32());
  /* 10d5827a ret  */
  ESPCHK(0x10d581c0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x10d58280 (254 bytes, 109 insns) */
void f_10d58280(void) {
  FTRACE(0x10d58280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58280 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d58284 push edi */
  push32((uint32_t)(EDI));
  /* 10d58285 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10d58287 je 0x10d58303 */
  if (C.zf) goto L_10d58303;
  /* 10d58289 push esi */
  push32((uint32_t)(ESI));
  /* 10d5828a push ebx */
  push32((uint32_t)(EBX));
  /* 10d5828b mov ebx, ecx */
  EBX = (ECX);
  /* 10d5828d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 10d58291 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d58297 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5829b jne 0x10d582a4 */
  if (!C.zf) goto L_10d582a4;
  /* 10d5829d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d582a0 jne 0x10d58311 */
  if (!C.zf) goto L_10d58311;
  /* 10d582a2 jmp 0x10d582c5 */
  goto L_10d582c5;
L_10d582a4:;
  /* 10d582a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d582a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d582a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d582a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d582aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d582ab je 0x10d582d2 */
  if (C.zf) goto L_10d582d2;
  /* 10d582ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d582af je 0x10d582da */
  if (C.zf) goto L_10d582da;
  /* 10d582b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 10d582b7 jne 0x10d582a4 */
  if (!C.zf) goto L_10d582a4;
  /* 10d582b9 mov ebx, ecx */
  EBX = (ECX);
  /* 10d582bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d582be jne 0x10d58311 */
  if (!C.zf) goto L_10d58311;
L_10d582c0:;
  /* 10d582c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d582c3 je 0x10d582d2 */
  if (C.zf) goto L_10d582d2;
L_10d582c5:;
  /* 10d582c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10d582c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10d582c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d582ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d582cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10d582cd je 0x10d582fe */
  if (C.zf) goto L_10d582fe;
  /* 10d582cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d582d0 jne 0x10d582c5 */
  if (!C.zf) goto L_10d582c5;
L_10d582d2:;
  /* 10d582d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d582d6 pop ebx */
  EBX = (pop32());
  /* 10d582d7 pop esi */
  ESI = (pop32());
  /* 10d582d8 pop edi */
  EDI = (pop32());
  /* 10d582d9 ret  */
  ESPCHK(0x10d58280u, _esp0);
  ESP += 4; return;
L_10d582da:;
  /* 10d582da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d582e0 je 0x10d582f4 */
  if (C.zf) goto L_10d582f4;
L_10d582e2:;
  /* 10d582e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d582e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d582e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d582e6 je 0x10d58376 */
  if (C.zf) goto L_10d58376;
  /* 10d582ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10d582f2 jne 0x10d582e2 */
  if (!C.zf) goto L_10d582e2;
L_10d582f4:;
  /* 10d582f4 mov ebx, ecx */
  EBX = (ECX);
  /* 10d582f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d582f9 jne 0x10d58367 */
  if (!C.zf) goto L_10d58367;
L_10d582fb:;
  /* 10d582fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d582fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_10d582fe:;
  /* 10d582fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 10d582ff jne 0x10d582fb */
  if (!C.zf) goto L_10d582fb;
  /* 10d58301 pop ebx */
  EBX = (pop32());
  /* 10d58302 pop esi */
  ESI = (pop32());
L_10d58303:;
  /* 10d58303 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d58307 pop edi */
  EDI = (pop32());
  /* 10d58308 ret  */
  ESPCHK(0x10d58280u, _esp0);
  ESP += 4; return;
L_10d58309:;
  /* 10d58309 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d5830b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5830e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d5830f je 0x10d582c0 */
  if (C.zf) goto L_10d582c0;
L_10d58311:;
  /* 10d58311 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10d58316 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10d58318 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5831a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d5831d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5831f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 10d58321 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58324 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10d58329 je 0x10d58309 */
  if (C.zf) goto L_10d58309;
  /* 10d5832b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10d5832d je 0x10d5835b */
  if (C.zf) goto L_10d5835b;
  /* 10d5832f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10d58331 je 0x10d58351 */
  if (C.zf) goto L_10d58351;
  /* 10d58333 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10d58339 je 0x10d58347 */
  if (C.zf) goto L_10d58347;
  /* 10d5833b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10d58341 jne 0x10d58309 */
  if (!C.zf) goto L_10d58309;
  /* 10d58343 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d58345 jmp 0x10d5835f */
  goto L_10d5835f;
L_10d58347:;
  /* 10d58347 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d5834d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d5834f jmp 0x10d5835f */
  goto L_10d5835f;
L_10d58351:;
  /* 10d58351 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 10d58357 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10d58359 jmp 0x10d5835f */
  goto L_10d5835f;
L_10d5835b:;
  /* 10d5835b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10d5835d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_10d5835f:;
  /* 10d5835f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58364 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d58365 je 0x10d58371 */
  if (C.zf) goto L_10d58371;
L_10d58367:;
  /* 10d58367 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10d58369:;
  /* 10d58369 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 10d5836b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5836e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d5836f jne 0x10d58369 */
  if (!C.zf) goto L_10d58369;
L_10d58371:;
  /* 10d58371 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 10d58374 jne 0x10d582fb */
  if (!C.zf) goto L_10d582fb;
L_10d58376:;
  /* 10d58376 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 10d5837a pop ebx */
  EBX = (pop32());
  /* 10d5837b pop esi */
  ESI = (pop32());
  /* 10d5837c pop edi */
  EDI = (pop32());
  /* 10d5837d ret  */
  ESPCHK(0x10d58280u, _esp0);
  ESP += 4; return;
}

/* FUN_10008380 @ 0x10d58380 (55 bytes, 16 insns) */
void f_10d58380(void) {
  FTRACE(0x10d58380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58380 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58381 mov ebp, esp */
  EBP = (ESP);
  /* 10d58383 mov eax, dword ptr [0x10d7eb84] */
  EAX = (r32((uint32_t)(0x10d7eb84)));
  /* 10d58388 push eax */
  push32((uint32_t)(EAX));
  /* 10d58389 call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d5838fu);
  /* 10d5838f mov ecx, dword ptr [0x10d7eb74] */
  ECX = (r32((uint32_t)(0x10d7eb74)));
  /* 10d58395 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58396 call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d5839cu);
  /* 10d5839c mov edx, dword ptr [0x10d7eb64] */
  EDX = (r32((uint32_t)(0x10d7eb64)));
  /* 10d583a2 push edx */
  push32((uint32_t)(EDX));
  /* 10d583a3 call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d583a9u);
  /* 10d583a9 mov eax, dword ptr [0x10d7eb44] */
  EAX = (r32((uint32_t)(0x10d7eb44)));
  /* 10d583ae push eax */
  push32((uint32_t)(EAX));
  /* 10d583af call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d583b5u);
  /* 10d583b5 pop ebp */
  EBP = (pop32());
  /* 10d583b6 ret  */
  ESPCHK(0x10d58380u, _esp0);
  ESP += 4; return;
}

/* FUN_100083c0 @ 0x10d583c0 (159 bytes, 47 insns) */
void f_10d583c0(void) {
  FTRACE(0x10d583c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d583c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d583c1 mov ebp, esp */
  EBP = (ESP);
  /* 10d583c3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d583c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d583cb jmp 0x10d583d6 */
  goto L_10d583d6;
L_10d583cd:;
  /* 10d583cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d583d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d583d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d583d6:;
  /* 10d583d6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583da jge 0x10d58429 */
  if ((C.sf==C.of)) goto L_10d58429;
  /* 10d583dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d583df cmp dword ptr [ecx*4 + 0x10d7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583e7 je 0x10d58427 */
  if (C.zf) goto L_10d58427;
  /* 10d583e9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583ed je 0x10d58427 */
  if (C.zf) goto L_10d58427;
  /* 10d583ef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583f3 je 0x10d58427 */
  if (C.zf) goto L_10d58427;
  /* 10d583f5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583f9 je 0x10d58427 */
  if (C.zf) goto L_10d58427;
  /* 10d583fb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d583ff je 0x10d58427 */
  if (C.zf) goto L_10d58427;
  /* 10d58401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58404 mov eax, dword ptr [edx*4 + 0x10d7eb40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10d7eb40)));
  /* 10d5840b push eax */
  push32((uint32_t)(EAX));
  /* 10d5840c call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d58412u);
  /* 10d58412 push 2 */
  push32((uint32_t)(0x2u));
  /* 10d58414 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58417 mov edx, dword ptr [ecx*4 + 0x10d7eb40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10d7eb40)));
  /* 10d5841e push edx */
  push32((uint32_t)(EDX));
  /* 10d5841f call 0x10d554f0 */
  push32(0x10d58424u); f_10d554f0();
  /* 10d58424 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d58427:;
  /* 10d58427 jmp 0x10d583cd */
  goto L_10d583cd;
L_10d58429:;
  /* 10d58429 mov eax, dword ptr [0x10d7eb64] */
  EAX = (r32((uint32_t)(0x10d7eb64)));
  /* 10d5842e push eax */
  push32((uint32_t)(EAX));
  /* 10d5842f call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d58435u);
  /* 10d58435 mov ecx, dword ptr [0x10d7eb74] */
  ECX = (r32((uint32_t)(0x10d7eb74)));
  /* 10d5843b push ecx */
  push32((uint32_t)(ECX));
  /* 10d5843c call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d58442u);
  /* 10d58442 mov edx, dword ptr [0x10d7eb84] */
  EDX = (r32((uint32_t)(0x10d7eb84)));
  /* 10d58448 push edx */
  push32((uint32_t)(EDX));
  /* 10d58449 call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d5844fu);
  /* 10d5844f mov eax, dword ptr [0x10d7eb44] */
  EAX = (r32((uint32_t)(0x10d7eb44)));
  /* 10d58454 push eax */
  push32((uint32_t)(EAX));
  /* 10d58455 call dword ptr [0x10d8334c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8334c))), 0x10d5845bu);
  /* 10d5845b mov esp, ebp */
  ESP = (EBP);
  /* 10d5845d pop ebp */
  EBP = (pop32());
  /* 10d5845e ret  */
  ESPCHK(0x10d583c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008460 @ 0x10d58460 (151 bytes, 46 insns) */
void f_10d58460(void) {
  FTRACE(0x10d58460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58460 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58461 mov ebp, esp */
  EBP = (ESP);
  /* 10d58463 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58464 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58467 cmp dword ptr [eax*4 + 0x10d7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10d7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5846f jne 0x10d584e2 */
  if (!C.zf) goto L_10d584e2;
  /* 10d58471 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 10d58476 push 0x10d7bf90 */
  push32((uint32_t)(0x10d7bf90u));
  /* 10d5847b push 2 */
  push32((uint32_t)(0x2u));
  /* 10d5847d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 10d5847f call 0x10d54a60 */
  push32(0x10d58484u); f_10d54a60();
  /* 10d58484 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58487 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5848a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5848e jne 0x10d5849a */
  if (!C.zf) goto L_10d5849a;
  /* 10d58490 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d58492 call 0x10d539d0 */
  push32(0x10d58497u); f_10d539d0();
  /* 10d58497 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d5849a:;
  /* 10d5849a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d5849c call 0x10d58460 */
  push32(0x10d584a1u); f_10d58460();
  /* 10d584a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d584a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d584a7 cmp dword ptr [ecx*4 + 0x10d7eb40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10d7eb40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d584af jne 0x10d584ca */
  if (!C.zf) goto L_10d584ca;
  /* 10d584b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d584b4 push edx */
  push32((uint32_t)(EDX));
  /* 10d584b5 call dword ptr [0x10d83384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83384))), 0x10d584bbu);
  /* 10d584bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d584be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d584c1 mov dword ptr [eax*4 + 0x10d7eb40], ecx */
  w32((uint32_t)(EAX*4 + 0x10d7eb40), (ECX));
  /* 10d584c8 jmp 0x10d584d8 */
  goto L_10d584d8;
L_10d584ca:;
  /* 10d584ca push 2 */
  push32((uint32_t)(0x2u));
  /* 10d584cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d584cf push edx */
  push32((uint32_t)(EDX));
  /* 10d584d0 call 0x10d554f0 */
  push32(0x10d584d5u); f_10d554f0();
  /* 10d584d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d584d8:;
  /* 10d584d8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10d584da call 0x10d58500 */
  push32(0x10d584dfu); f_10d58500();
  /* 10d584df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d584e2:;
  /* 10d584e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d584e5 mov ecx, dword ptr [eax*4 + 0x10d7eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7eb40)));
  /* 10d584ec push ecx */
  push32((uint32_t)(ECX));
  /* 10d584ed call dword ptr [0x10d83388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83388))), 0x10d584f3u);
  /* 10d584f3 mov esp, ebp */
  ESP = (EBP);
  /* 10d584f5 pop ebp */
  EBP = (pop32());
  /* 10d584f6 ret  */
  ESPCHK(0x10d58460u, _esp0);
  ESP += 4; return;
}

/* FUN_10008500 @ 0x10d58500 (22 bytes, 8 insns) */
void f_10d58500(void) {
  FTRACE(0x10d58500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58500 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58501 mov ebp, esp */
  EBP = (ESP);
  /* 10d58503 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58506 mov ecx, dword ptr [eax*4 + 0x10d7eb40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10d7eb40)));
  /* 10d5850d push ecx */
  push32((uint32_t)(ECX));
  /* 10d5850e call dword ptr [0x10d8338c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8338c))), 0x10d58514u);
  /* 10d58514 pop ebp */
  EBP = (pop32());
  /* 10d58515 ret  */
  ESPCHK(0x10d58500u, _esp0);
  ESP += 4; return;
}

/* FUN_10008520 @ 0x10d58520 (26 bytes, 10 insns) */
void f_10d58520(void) {
  FTRACE(0x10d58520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58520 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58521 mov ebp, esp */
  EBP = (ESP);
  /* 10d58523 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58526 push eax */
  push32((uint32_t)(EAX));
  /* 10d58527 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58529 call dword ptr [0x10d83390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83390))), 0x10d5852fu);
  /* 10d5852f push 0xff */
  push32((uint32_t)(0xffu));
  /* 10d58534 call dword ptr [0x10d83314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83314))), 0x10d5853au);
  /* 10d5853a pop ebp */
  EBP = (pop32());
  /* 10d5853b ret  */
  ESPCHK(0x10d58520u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x10d58540 (446 bytes, 130 insns) */
void f_10d58540(void) {
  FTRACE(0x10d58540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58540 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58541 mov ebp, esp */
  EBP = (ESP);
  /* 10d58543 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58546 call 0x10d544a0 */
  push32(0x10d5854bu); f_10d544a0();
  /* 10d5854b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5854e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58551 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 10d58554 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58558 push edx */
  push32((uint32_t)(EDX));
  /* 10d58559 call 0x10d58700 */
  push32(0x10d5855eu); f_10d58700();
  /* 10d5855e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58561 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d58564 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58568 je 0x10d58573 */
  if (C.zf) goto L_10d58573;
  /* 10d5856a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5856d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58571 jne 0x10d58582 */
  if (!C.zf) goto L_10d58582;
L_10d58573:;
  /* 10d58573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58576 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58577 call dword ptr [0x10d8333c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d8333c))), 0x10d5857du);
  /* 10d5857d jmp 0x10d586fa */
  goto L_10d586fa;
L_10d58582:;
  /* 10d58582 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58585 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58589 jne 0x10d5859f */
  if (!C.zf) goto L_10d5859f;
  /* 10d5858b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5858e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 10d58595 mov eax, 1 */
  EAX = (0x1u);
  /* 10d5859a jmp 0x10d586fa */
  goto L_10d586fa;
L_10d5859f:;
  /* 10d5859f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d585a2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d585a6 jne 0x10d585b0 */
  if (!C.zf) goto L_10d585b0;
  /* 10d585a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10d585ab jmp 0x10d586fa */
  goto L_10d586fa;
L_10d585b0:;
  /* 10d585b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d585b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10d585b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d585b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d585bc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 10d585bf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10d585c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d585c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d585c8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 10d585cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d585ce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d585d2 jne 0x10d586d7 */
  if (!C.zf) goto L_10d586d7;
  /* 10d585d8 mov eax, dword ptr [0x10d7ec78] */
  EAX = (r32((uint32_t)(0x10d7ec78)));
  /* 10d585dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10d585e0 jmp 0x10d585eb */
  goto L_10d585eb;
L_10d585e2:;
  /* 10d585e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d585e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d585e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_10d585eb:;
  /* 10d585eb mov edx, dword ptr [0x10d7ec78] */
  EDX = (r32((uint32_t)(0x10d7ec78)));
  /* 10d585f1 add edx, dword ptr [0x10d7ec7c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10d7ec7c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d585f7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d585fa jge 0x10d58612 */
  if ((C.sf==C.of)) goto L_10d58612;
  /* 10d585fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d585ff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d58602 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58605 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 10d58608 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 10d58610 jmp 0x10d585e2 */
  goto L_10d585e2;
L_10d58612:;
  /* 10d58612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58615 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 10d58618 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10d5861b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5861e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58624 jne 0x10d58635 */
  if (!C.zf) goto L_10d58635;
  /* 10d58626 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58629 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 10d58630 jmp 0x10d586bd */
  goto L_10d586bd;
L_10d58635:;
  /* 10d58635 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58638 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5863e jne 0x10d5864c */
  if (!C.zf) goto L_10d5864c;
  /* 10d58640 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58643 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 10d5864a jmp 0x10d586bd */
  goto L_10d586bd;
L_10d5864c:;
  /* 10d5864c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5864f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58655 jne 0x10d58663 */
  if (!C.zf) goto L_10d58663;
  /* 10d58657 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5865a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 10d58661 jmp 0x10d586bd */
  goto L_10d586bd;
L_10d58663:;
  /* 10d58663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58666 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5866c jne 0x10d5867a */
  if (!C.zf) goto L_10d5867a;
  /* 10d5866e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58671 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 10d58678 jmp 0x10d586bd */
  goto L_10d586bd;
L_10d5867a:;
  /* 10d5867a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d5867d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58683 jne 0x10d58691 */
  if (!C.zf) goto L_10d58691;
  /* 10d58685 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58688 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 10d5868f jmp 0x10d586bd */
  goto L_10d586bd;
L_10d58691:;
  /* 10d58691 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58694 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5869a jne 0x10d586a8 */
  if (!C.zf) goto L_10d586a8;
  /* 10d5869c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5869f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 10d586a6 jmp 0x10d586bd */
  goto L_10d586bd;
L_10d586a8:;
  /* 10d586a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d586ab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d586b1 jne 0x10d586bd */
  if (!C.zf) goto L_10d586bd;
  /* 10d586b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d586b6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_10d586bd:;
  /* 10d586bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d586c0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 10d586c3 push edx */
  push32((uint32_t)(EDX));
  /* 10d586c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 10d586c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d586c9u);
  /* 10d586c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d586cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d586cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d586d2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 10d586d5 jmp 0x10d586ee */
  goto L_10d586ee;
L_10d586d7:;
  /* 10d586d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d586da mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10d586e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d586e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10d586e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d586e8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d586ebu);
  /* 10d586eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d586ee:;
  /* 10d586ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d586f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10d586f4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 10d586f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10d586fa:;
  /* 10d586fa mov esp, ebp */
  ESP = (EBP);
  /* 10d586fc pop ebp */
  EBP = (pop32());
  /* 10d586fd ret  */
  ESPCHK(0x10d58540u, _esp0);
  ESP += 4; return;
}

/* FUN_10008700 @ 0x10d58700 (89 bytes, 35 insns) */
void f_10d58700(void) {
  FTRACE(0x10d58700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58700 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58701 mov ebp, esp */
  EBP = (ESP);
  /* 10d58703 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58707 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10d5870a:;
  /* 10d5870a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5870d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10d5870f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58712 je 0x10d58732 */
  if (C.zf) goto L_10d58732;
  /* 10d58714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58717 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5871a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d5871d mov ecx, dword ptr [0x10d7ec84] */
  ECX = (r32((uint32_t)(0x10d7ec84)));
  /* 10d58723 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d58726 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58729 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5872b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5872e jae 0x10d58732 */
  if (!C.cf) goto L_10d58732;
  /* 10d58730 jmp 0x10d5870a */
  goto L_10d5870a;
L_10d58732:;
  /* 10d58732 mov eax, dword ptr [0x10d7ec84] */
  EAX = (r32((uint32_t)(0x10d7ec84)));
  /* 10d58737 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10d5873a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5873d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5873f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58742 jae 0x10d5874e */
  if (!C.cf) goto L_10d5874e;
  /* 10d58744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58747 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10d58749 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5874c je 0x10d58752 */
  if (C.zf) goto L_10d58752;
L_10d5874e:;
  /* 10d5874e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58750 jmp 0x10d58755 */
  goto L_10d58755;
L_10d58752:;
  /* 10d58752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10d58755:;
  /* 10d58755 mov esp, ebp */
  ESP = (EBP);
  /* 10d58757 pop ebp */
  EBP = (pop32());
  /* 10d58758 ret  */
  ESPCHK(0x10d58700u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x10d58760 (48 bytes, 17 insns) */
void f_10d58760(void) {
  FTRACE(0x10d58760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58760 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58761 mov ebp, esp */
  EBP = (ESP);
  /* 10d58763 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58764 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58766 call 0x10d58460 */
  push32(0x10d5876bu); f_10d58460();
  /* 10d5876b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5876e mov eax, dword ptr [0x10d806ec] */
  EAX = (r32((uint32_t)(0x10d806ec)));
  /* 10d58773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d58776 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58779 mov dword ptr [0x10d806ec], ecx */
  w32((uint32_t)(0x10d806ec), (ECX));
  /* 10d5877f push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58781 call 0x10d58500 */
  push32(0x10d58786u); f_10d58500();
  /* 10d58786 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5878c mov esp, ebp */
  ESP = (EBP);
  /* 10d5878e pop ebp */
  EBP = (pop32());
  /* 10d5878f ret  */
  ESPCHK(0x10d58760u, _esp0);
  ESP += 4; return;
}

/* FUN_10008790 @ 0x10d58790 (10 bytes, 5 insns) */
void f_10d58790(void) {
  FTRACE(0x10d58790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58790 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58791 mov ebp, esp */
  EBP = (ESP);
  /* 10d58793 mov eax, dword ptr [0x10d806ec] */
  EAX = (r32((uint32_t)(0x10d806ec)));
  /* 10d58798 pop ebp */
  EBP = (pop32());
  /* 10d58799 ret  */
  ESPCHK(0x10d58790u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x10d587a0 (45 bytes, 19 insns) */
void f_10d587a0(void) {
  FTRACE(0x10d587a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d587a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d587a1 mov ebp, esp */
  EBP = (ESP);
  /* 10d587a3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d587a4 mov eax, dword ptr [0x10d806ec] */
  EAX = (r32((uint32_t)(0x10d806ec)));
  /* 10d587a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d587ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d587b0 je 0x10d587c0 */
  if (C.zf) goto L_10d587c0;
  /* 10d587b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d587b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10d587b6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x10d587b9u);
  /* 10d587b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d587bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d587be jne 0x10d587c4 */
  if (!C.zf) goto L_10d587c4;
L_10d587c0:;
  /* 10d587c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d587c2 jmp 0x10d587c9 */
  goto L_10d587c9;
L_10d587c4:;
  /* 10d587c4 mov eax, 1 */
  EAX = (0x1u);
L_10d587c9:;
  /* 10d587c9 mov esp, ebp */
  ESP = (EBP);
  /* 10d587cb pop ebp */
  EBP = (pop32());
  /* 10d587cc ret  */
  ESPCHK(0x10d587a0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10d587d0 (88 bytes, 40 insns) */
void f_10d587d0(void) {
  FTRACE(0x10d587d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d587d0 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10d587d4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d587d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d587da je 0x10d58823 */
  if (C.zf) goto L_10d58823;
  /* 10d587dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d587de mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10d587e2 push edi */
  push32((uint32_t)(EDI));
  /* 10d587e3 mov edi, ecx */
  EDI = (ECX);
  /* 10d587e5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d587e8 jb 0x10d58817 */
  if (C.cf) goto L_10d58817;
  /* 10d587ea neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10d587ec and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10d587ef je 0x10d587f9 */
  if (C.zf) goto L_10d587f9;
  /* 10d587f1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10d587f3:;
  /* 10d587f3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d587f5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d587f6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10d587f7 jne 0x10d587f3 */
  if (!C.zf) goto L_10d587f3;
L_10d587f9:;
  /* 10d587f9 mov ecx, eax */
  ECX = (EAX);
  /* 10d587fb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10d587fe add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58800 mov ecx, eax */
  ECX = (EAX);
  /* 10d58802 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10d58805 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58807 mov ecx, edx */
  ECX = (EDX);
  /* 10d58809 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10d5880c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10d5880f je 0x10d58817 */
  if (C.zf) goto L_10d58817;
  /* 10d58811 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10d58813 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10d58815 je 0x10d5881d */
  if (C.zf) goto L_10d5881d;
L_10d58817:;
  /* 10d58817 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10d58819 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10d5881a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10d5881b jne 0x10d58817 */
  if (!C.zf) goto L_10d58817;
L_10d5881d:;
  /* 10d5881d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10d58821 pop edi */
  EDI = (pop32());
  /* 10d58822 ret  */
  ESPCHK(0x10d587d0u, _esp0);
  ESP += 4; return;
L_10d58823:;
  /* 10d58823 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10d58827 ret  */
  ESPCHK(0x10d587d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008830 @ 0x10d58830 (23 bytes, 10 insns) */
void f_10d58830(void) {
  FTRACE(0x10d58830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58830 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58831 mov ebp, esp */
  EBP = (ESP);
  /* 10d58833 mov eax, dword ptr [0x10d806e8] */
  EAX = (r32((uint32_t)(0x10d806e8)));
  /* 10d58838 push eax */
  push32((uint32_t)(EAX));
  /* 10d58839 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5883c push ecx */
  push32((uint32_t)(ECX));
  /* 10d5883d call 0x10d58850 */
  push32(0x10d58842u); f_10d58850();
  /* 10d58842 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58845 pop ebp */
  EBP = (pop32());
  /* 10d58846 ret  */
  ESPCHK(0x10d58830u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x10d58850 (87 bytes, 34 insns) */
void f_10d58850(void) {
  FTRACE(0x10d58850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58850 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58851 mov ebp, esp */
  EBP = (ESP);
  /* 10d58853 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58854 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58858 jbe 0x10d5885e */
  if ((C.cf||C.zf)) goto L_10d5885e;
  /* 10d5885a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5885c jmp 0x10d588a3 */
  goto L_10d588a3;
L_10d5885e:;
  /* 10d5885e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58862 ja 0x10d58875 */
  if ((!C.cf&&!C.zf)) goto L_10d58875;
  /* 10d58864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58867 push eax */
  push32((uint32_t)(EAX));
  /* 10d58868 call 0x10d588b0 */
  push32(0x10d5886du); f_10d588b0();
  /* 10d5886d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58870 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d58873 jmp 0x10d5887c */
  goto L_10d5887c;
L_10d58875:;
  /* 10d58875 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10d5887c:;
  /* 10d5887c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58880 jne 0x10d58888 */
  if (!C.zf) goto L_10d58888;
  /* 10d58882 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58886 jne 0x10d5888d */
  if (!C.zf) goto L_10d5888d;
L_10d58888:;
  /* 10d58888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5888b jmp 0x10d588a3 */
  goto L_10d588a3;
L_10d5888d:;
  /* 10d5888d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58890 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58891 call 0x10d587a0 */
  push32(0x10d58896u); f_10d587a0();
  /* 10d58896 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58899 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5889b jne 0x10d588a1 */
  if (!C.zf) goto L_10d588a1;
  /* 10d5889d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5889f jmp 0x10d588a3 */
  goto L_10d588a3;
L_10d588a1:;
  /* 10d588a1 jmp 0x10d5885e */
  goto L_10d5885e;
L_10d588a3:;
  /* 10d588a3 mov esp, ebp */
  ESP = (EBP);
  /* 10d588a5 pop ebp */
  EBP = (pop32());
  /* 10d588a6 ret  */
  ESPCHK(0x10d58850u, _esp0);
  ESP += 4; return;
}

/* FUN_100088b0 @ 0x10d588b0 (109 bytes, 37 insns) */
void f_10d588b0(void) {
  FTRACE(0x10d588b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d588b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d588b1 mov ebp, esp */
  EBP = (ESP);
  /* 10d588b3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d588b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d588b7 cmp eax, dword ptr [0x10d7ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d588bd ja 0x10d588ed */
  if ((!C.cf&&!C.zf)) goto L_10d588ed;
  /* 10d588bf push 9 */
  push32((uint32_t)(0x9u));
  /* 10d588c1 call 0x10d58460 */
  push32(0x10d588c6u); f_10d58460();
  /* 10d588c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d588c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d588cc push ecx */
  push32((uint32_t)(ECX));
  /* 10d588cd call 0x10d593f0 */
  push32(0x10d588d2u); f_10d593f0();
  /* 10d588d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d588d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d588d8 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d588da call 0x10d58500 */
  push32(0x10d588dfu); f_10d58500();
  /* 10d588df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d588e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d588e6 je 0x10d588ed */
  if (C.zf) goto L_10d588ed;
  /* 10d588e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d588eb jmp 0x10d58919 */
  goto L_10d58919;
L_10d588ed:;
  /* 10d588ed cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d588f1 jne 0x10d588fa */
  if (!C.zf) goto L_10d588fa;
  /* 10d588f3 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_10d588fa:;
  /* 10d588fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d588fd add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58900 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d58903 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10d58906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58909 push eax */
  push32((uint32_t)(EAX));
  /* 10d5890a push 0 */
  push32((uint32_t)(0x0u));
  /* 10d5890c mov ecx, dword ptr [0x10d81eac] */
  ECX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58912 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58913 call dword ptr [0x10d832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e4))), 0x10d58919u);
L_10d58919:;
  /* 10d58919 mov esp, ebp */
  ESP = (EBP);
  /* 10d5891b pop ebp */
  EBP = (pop32());
  /* 10d5891c ret  */
  ESPCHK(0x10d588b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008920 @ 0x10d58920 (10 bytes, 5 insns) */
void f_10d58920(void) {
  FTRACE(0x10d58920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58920 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58921 mov ebp, esp */
  EBP = (ESP);
  /* 10d58923 mov eax, 1 */
  EAX = (0x1u);
  /* 10d58928 pop ebp */
  EBP = (pop32());
  /* 10d58929 ret  */
  ESPCHK(0x10d58920u, _esp0);
  ESP += 4; return;
}

/* FUN_10008930 @ 0x10d58930 (173 bytes, 59 insns) */
void f_10d58930(void) {
  FTRACE(0x10d58930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58930 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58931 mov ebp, esp */
  EBP = (ESP);
  /* 10d58933 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58936 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d5893a jbe 0x10d58943 */
  if ((C.cf||C.zf)) goto L_10d58943;
  /* 10d5893c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d5893e jmp 0x10d589d9 */
  goto L_10d589d9;
L_10d58943:;
  /* 10d58943 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58945 call 0x10d58460 */
  push32(0x10d5894au); f_10d58460();
  /* 10d5894a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5894d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58950 push eax */
  push32((uint32_t)(EAX));
  /* 10d58951 call 0x10d58d60 */
  push32(0x10d58956u); f_10d58d60();
  /* 10d58956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58959 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d5895c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58960 je 0x10d589a1 */
  if (C.zf) goto L_10d589a1;
  /* 10d58962 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10d58969 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d5896c cmp ecx, dword ptr [0x10d7ec94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10d7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58972 ja 0x10d58992 */
  if ((!C.cf&&!C.zf)) goto L_10d58992;
  /* 10d58974 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58977 push edx */
  push32((uint32_t)(EDX));
  /* 10d58978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5897b push eax */
  push32((uint32_t)(EAX));
  /* 10d5897c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d5897f push ecx */
  push32((uint32_t)(ECX));
  /* 10d58980 call 0x10d59c30 */
  push32(0x10d58985u); f_10d59c30();
  /* 10d58985 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d5898a je 0x10d58992 */
  if (C.zf) goto L_10d58992;
  /* 10d5898c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d5898f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10d58992:;
  /* 10d58992 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58994 call 0x10d58500 */
  push32(0x10d58999u); f_10d58500();
  /* 10d58999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d5899c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d5899f jmp 0x10d589d9 */
  goto L_10d589d9;
L_10d589a1:;
  /* 10d589a1 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d589a3 call 0x10d58500 */
  push32(0x10d589a8u); f_10d58500();
  /* 10d589a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d589ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d589af jne 0x10d589b8 */
  if (!C.zf) goto L_10d589b8;
  /* 10d589b1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d589b8:;
  /* 10d589b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d589bb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d589be and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10d589c0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10d589c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d589c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10d589c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d589ca push edx */
  push32((uint32_t)(EDX));
  /* 10d589cb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10d589cd mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d589d2 push eax */
  push32((uint32_t)(EAX));
  /* 10d589d3 call dword ptr [0x10d83340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83340))), 0x10d589d9u);
L_10d589d9:;
  /* 10d589d9 mov esp, ebp */
  ESP = (EBP);
  /* 10d589db pop ebp */
  EBP = (pop32());
  /* 10d589dc ret  */
  ESPCHK(0x10d58930u, _esp0);
  ESP += 4; return;
}

/* FUN_100089e0 @ 0x10d589e0 (490 bytes, 165 insns) */
void f_10d589e0(void) {
  FTRACE(0x10d589e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d589e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d589e1 mov ebp, esp */
  EBP = (ESP);
  /* 10d589e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d589e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d589ea jne 0x10d589fd */
  if (!C.zf) goto L_10d589fd;
  /* 10d589ec mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d589ef push eax */
  push32((uint32_t)(EAX));
  /* 10d589f0 call 0x10d58830 */
  push32(0x10d589f5u); f_10d58830();
  /* 10d589f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d589f8 jmp 0x10d58bc6 */
  goto L_10d58bc6;
L_10d589fd:;
  /* 10d589fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a01 jne 0x10d58a16 */
  if (!C.zf) goto L_10d58a16;
  /* 10d58a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58a06 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58a07 call 0x10d58bd0 */
  push32(0x10d58a0cu); f_10d58bd0();
  /* 10d58a0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58a0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58a11 jmp 0x10d58bc6 */
  goto L_10d58bc6;
L_10d58a16:;
  /* 10d58a16 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10d58a1d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a21 ja 0x10d58b99 */
  if ((!C.cf&&!C.zf)) goto L_10d58b99;
  /* 10d58a27 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58a29 call 0x10d58460 */
  push32(0x10d58a2eu); f_10d58460();
  /* 10d58a2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58a31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58a34 push edx */
  push32((uint32_t)(EDX));
  /* 10d58a35 call 0x10d58d60 */
  push32(0x10d58a3au); f_10d58d60();
  /* 10d58a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58a3d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10d58a40 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a44 je 0x10d58b5c */
  if (C.zf) goto L_10d58b5c;
  /* 10d58a4a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58a4d cmp eax, dword ptr [0x10d7ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10d7ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a53 ja 0x10d58ad0 */
  if ((!C.cf&&!C.zf)) goto L_10d58ad0;
  /* 10d58a55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58a58 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58a59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58a5c push edx */
  push32((uint32_t)(EDX));
  /* 10d58a5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58a60 push eax */
  push32((uint32_t)(EAX));
  /* 10d58a61 call 0x10d59c30 */
  push32(0x10d58a66u); f_10d59c30();
  /* 10d58a66 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58a69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d58a6b je 0x10d58a75 */
  if (C.zf) goto L_10d58a75;
  /* 10d58a6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58a70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10d58a73 jmp 0x10d58ad0 */
  goto L_10d58ad0;
L_10d58a75:;
  /* 10d58a75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58a78 push edx */
  push32((uint32_t)(EDX));
  /* 10d58a79 call 0x10d593f0 */
  push32(0x10d58a7eu); f_10d593f0();
  /* 10d58a7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58a81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d58a84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a88 je 0x10d58ad0 */
  if (C.zf) goto L_10d58ad0;
  /* 10d58a8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58a8d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10d58a90 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58a93 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10d58a96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58a99 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58a9c jae 0x10d58aa6 */
  if (!C.cf) goto L_10d58aa6;
  /* 10d58a9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58aa1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10d58aa4 jmp 0x10d58aac */
  goto L_10d58aac;
L_10d58aa6:;
  /* 10d58aa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58aa9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_10d58aac:;
  /* 10d58aac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10d58aaf push edx */
  push32((uint32_t)(EDX));
  /* 10d58ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58ab3 push eax */
  push32((uint32_t)(EAX));
  /* 10d58ab4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58ab8 call 0x10d5b340 */
  push32(0x10d58abdu); f_10d5b340();
  /* 10d58abd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58ac0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58ac3 push edx */
  push32((uint32_t)(EDX));
  /* 10d58ac4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58ac7 push eax */
  push32((uint32_t)(EAX));
  /* 10d58ac8 call 0x10d58e20 */
  push32(0x10d58acdu); f_10d58e20();
  /* 10d58acd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d58ad0:;
  /* 10d58ad0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ad4 jne 0x10d58b50 */
  if (!C.zf) goto L_10d58b50;
  /* 10d58ad6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ada jne 0x10d58ae3 */
  if (!C.zf) goto L_10d58ae3;
  /* 10d58adc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d58ae3:;
  /* 10d58ae3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58ae6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58ae9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 10d58aec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10d58aef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58af2 push edx */
  push32((uint32_t)(EDX));
  /* 10d58af3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58af5 mov eax, dword ptr [0x10d81eac] */
  EAX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58afa push eax */
  push32((uint32_t)(EAX));
  /* 10d58afb call dword ptr [0x10d832e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d832e4))), 0x10d58b01u);
  /* 10d58b01 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10d58b04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58b08 je 0x10d58b50 */
  if (C.zf) goto L_10d58b50;
  /* 10d58b0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58b0d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 10d58b10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10d58b13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10d58b16 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58b19 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58b1c jae 0x10d58b26 */
  if (!C.cf) goto L_10d58b26;
  /* 10d58b1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58b21 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10d58b24 jmp 0x10d58b2c */
  goto L_10d58b2c;
L_10d58b26:;
  /* 10d58b26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58b29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10d58b2c:;
  /* 10d58b2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10d58b2f push eax */
  push32((uint32_t)(EAX));
  /* 10d58b30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58b33 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58b34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58b37 push edx */
  push32((uint32_t)(EDX));
  /* 10d58b38 call 0x10d5b340 */
  push32(0x10d58b3du); f_10d5b340();
  /* 10d58b3d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58b43 push eax */
  push32((uint32_t)(EAX));
  /* 10d58b44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10d58b47 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58b48 call 0x10d58e20 */
  push32(0x10d58b4du); f_10d58e20();
  /* 10d58b4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10d58b50:;
  /* 10d58b50 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58b52 call 0x10d58500 */
  push32(0x10d58b57u); f_10d58500();
  /* 10d58b57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58b5a jmp 0x10d58b99 */
  goto L_10d58b99;
L_10d58b5c:;
  /* 10d58b5c push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58b5e call 0x10d58500 */
  push32(0x10d58b63u); f_10d58500();
  /* 10d58b63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58b66 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58b6a jne 0x10d58b73 */
  if (!C.zf) goto L_10d58b73;
  /* 10d58b6c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10d58b73:;
  /* 10d58b73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58b76 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58b79 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10d58b7c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10d58b7f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58b82 push eax */
  push32((uint32_t)(EAX));
  /* 10d58b83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58b86 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58b87 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58b89 mov edx, dword ptr [0x10d81eac] */
  EDX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58b8f push edx */
  push32((uint32_t)(EDX));
  /* 10d58b90 call dword ptr [0x10d83340] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83340))), 0x10d58b96u);
  /* 10d58b96 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10d58b99:;
  /* 10d58b99 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58b9d jne 0x10d58ba8 */
  if (!C.zf) goto L_10d58ba8;
  /* 10d58b9f cmp dword ptr [0x10d806e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10d806e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58ba6 jne 0x10d58bad */
  if (!C.zf) goto L_10d58bad;
L_10d58ba8:;
  /* 10d58ba8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10d58bab jmp 0x10d58bc6 */
  goto L_10d58bc6;
L_10d58bad:;
  /* 10d58bad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10d58bb0 push eax */
  push32((uint32_t)(EAX));
  /* 10d58bb1 call 0x10d587a0 */
  push32(0x10d58bb6u); f_10d587a0();
  /* 10d58bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58bb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10d58bbb jne 0x10d58bc1 */
  if (!C.zf) goto L_10d58bc1;
  /* 10d58bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10d58bbf jmp 0x10d58bc6 */
  goto L_10d58bc6;
L_10d58bc1:;
  /* 10d58bc1 jmp 0x10d58a16 */
  goto L_10d58a16;
L_10d58bc6:;
  /* 10d58bc6 mov esp, ebp */
  ESP = (EBP);
  /* 10d58bc8 pop ebp */
  EBP = (pop32());
  /* 10d58bc9 ret  */
  ESPCHK(0x10d589e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bd0 @ 0x10d58bd0 (104 bytes, 38 insns) */
void f_10d58bd0(void) {
  FTRACE(0x10d58bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10d58bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10d58bd1 mov ebp, esp */
  EBP = (ESP);
  /* 10d58bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 10d58bd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58bd8 jne 0x10d58bdc */
  if (!C.zf) goto L_10d58bdc;
  /* 10d58bda jmp 0x10d58c34 */
  goto L_10d58c34;
L_10d58bdc:;
  /* 10d58bdc push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58bde call 0x10d58460 */
  push32(0x10d58be3u); f_10d58460();
  /* 10d58be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58be9 push eax */
  push32((uint32_t)(EAX));
  /* 10d58bea call 0x10d58d60 */
  push32(0x10d58befu); f_10d58d60();
  /* 10d58bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58bf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10d58bf5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10d58bf9 je 0x10d58c17 */
  if (C.zf) goto L_10d58c17;
  /* 10d58bfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58bfe push ecx */
  push32((uint32_t)(ECX));
  /* 10d58bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10d58c02 push edx */
  push32((uint32_t)(EDX));
  /* 10d58c03 call 0x10d58e20 */
  push32(0x10d58c08u); f_10d58e20();
  /* 10d58c08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58c0b push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58c0d call 0x10d58500 */
  push32(0x10d58c12u); f_10d58500();
  /* 10d58c12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58c15 jmp 0x10d58c34 */
  goto L_10d58c34;
L_10d58c17:;
  /* 10d58c17 push 9 */
  push32((uint32_t)(0x9u));
  /* 10d58c19 call 0x10d58500 */
  push32(0x10d58c1eu); f_10d58500();
  /* 10d58c1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10d58c21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10d58c24 push eax */
  push32((uint32_t)(EAX));
  /* 10d58c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10d58c27 mov ecx, dword ptr [0x10d81eac] */
  ECX = (r32((uint32_t)(0x10d81eac)));
  /* 10d58c2d push ecx */
  push32((uint32_t)(ECX));
  /* 10d58c2e call dword ptr [0x10d83378] */
  call_ind((uint32_t)(r32((uint32_t)(0x10d83378))), 0x10d58c34u);
L_10d58c34:;
  /* 10d58c34 mov esp, ebp */
  ESP = (EBP);
  /* 10d58c36 pop ebp */
  EBP = (pop32());
  /* 10d58c37 ret  */
  ESPCHK(0x10d58bd0u, _esp0);
  ESP += 4; return;
}

